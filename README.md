# V2X_parse2ROS
V2X msg parsing to ROS message

this source was created for 2022 College Student Autonomous Driving Competition (Ministry of Trade, Industry and Energy)

Author : swooeun   
Team : BISA (Keimyung Univ)

## Guide   
구조    

![unknown](https://user-images.githubusercontent.com/71008546/180376082-ec3869d9-dfa5-4400-90ec-cbb88b0de883.png)

#### Define new message types for sPat   
![msg](https://user-images.githubusercontent.com/71008546/180377385-2306e5fa-4b99-4ab3-aefb-cd588f26011d.png)


## Start
<pre><code>cd your_workspace/src/v2x_msgs/v2x
./execc 
rosrun v2x_msgs/parse_sPat.py
</code></pre>

If you want to build a new source, 
<pre><code>./build</code></pre>

Check for Topic
<pre><code>rostopic echo /v2x/sPat</code></pre>

![spat](https://user-images.githubusercontent.com/71008546/180377097-2bb15744-4007-4204-a7b1-ce2b8454f0c5.png)
![spat2](https://user-images.githubusercontent.com/71008546/180377121-d80a4ce2-80d4-41de-a5f2-aadee1bcb38e.png)

<hr>

v2x 샘플 소스 제공 - (주)세스트

