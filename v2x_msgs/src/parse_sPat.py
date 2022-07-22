#!/usr/bin/env python
#-*- coding: utf-8 -*-

import struct
import rospy, socket, time

from v2x_msgs.msg import SPATStatesList, SPATStates

MCAST_GROUP = '127.0.0.1' #멀티캐스트 서버IP
MCAST_PORT = 50115
IS_ALL_GROUPS = True

class V2XdataParse2ROS:
    def __init__(self):
        rospy.init_node("V2XData_parse_to_ROS", anonymous=False)
        self.v2x_pub = rospy.Publisher("/v2x/sPat", SPATStatesList, queue_size=10)

        while True:
            self.v2x_data = self.multicast_recieve(MCAST_GROUP, MCAST_PORT, IS_ALL_GROUPS)
            self.spat_ros_msg = self.processing_to_ros_msg(self.v2x_data)
            # print(self.v2x_data)
            self.v2x_pub.publish(self.spat_ros_msg)
            time.sleep(0.01)

    def multicast_recieve(self, group, port, is_all_groups):
        sock = socket.socket(socket.AF_INET,socket.SOCK_DGRAM,socket.IPPROTO_UDP)
        sock.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)
        if sock <= -1:
            print("소켓 생성 실패!")

        if is_all_groups:
            sock.bind(("",port))
        else:
            sock.bind((group,port))

        while True:
            self.data = sock.recv(2048)
            if bool(self.data) != True:
                break
            return self.data
        
    def processing_to_ros_msg(self, msg):
        msgs = msg.split(',')
        # print("length of spat msg list : "+str(len(msg)))
        print(msgs[1])
        self.spat_msg = SPATStatesList()
        self.spat_msg.name = msgs[1]
        self.spat_msg.intersection.region = int(msgs[2])
        self.spat_msg.intersection.id = int(msgs[3])
        self.spat_msg.revision = int(msgs[4])
        self.spat_msg.status = msgs[5]
        self.spat_msg.MinuteOfYear = int(msgs[6])
        self.spat_msg.timeStamp = int(msgs[7])

        states_str = msg.split("states")
        del states_str[0] #헤더포함 첫번째 문자열 삭제

        self.spat_msg.lengthOfStates = len(states_str)

        # print("length of states : {}".format(len(states_str)))
        for i, str_lst in enumerate(states_str):
            states = SPATStates()
            states.states = i #index of states
            states_lst = str_lst.split(',')
            states.movementName = states_lst[1]
            states.signalGroup = int(states_lst[2])
            states.StateTimeSpeed.eventState = int(states_lst[3])
            states.StateTimeSpeed.timingMinEndTime = int(states_lst[4])
            states.ManeuverAssistList.connectionID = int(states_lst[5])
            states.ManeuverAssistList.pedBicycleDetect = int(states_lst[6])
            self.spat_msg.states.append(states)
            # print(states_lst)

        return self.spat_msg

if __name__ == "__main__":
    try:
        vp = V2XdataParse2ROS()
    except rospy.ROSInterruptException:
        print("parse_sPat.py occured Error! check this node.")
        