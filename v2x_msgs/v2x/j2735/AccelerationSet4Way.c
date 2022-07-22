/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn/J2735_201603DA.ASN"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "AccelerationSet4Way.h"

asn_TYPE_member_t asn_MBR_AccelerationSet4Way_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AccelerationSet4Way, Long),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Acceleration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"long"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccelerationSet4Way, lat),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Acceleration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lat"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccelerationSet4Way, vert),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VerticalAcceleration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vert"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccelerationSet4Way, yaw),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_YawRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"yaw"
		},
};
static const ber_tlv_tag_t asn_DEF_AccelerationSet4Way_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AccelerationSet4Way_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* long */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lat */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* vert */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* yaw */
};
asn_SEQUENCE_specifics_t asn_SPC_AccelerationSet4Way_specs_1 = {
	sizeof(struct AccelerationSet4Way),
	offsetof(struct AccelerationSet4Way, _asn_ctx),
	asn_MAP_AccelerationSet4Way_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AccelerationSet4Way = {
	"AccelerationSet4Way",
	"AccelerationSet4Way",
	&asn_OP_SEQUENCE,
	asn_DEF_AccelerationSet4Way_tags_1,
	sizeof(asn_DEF_AccelerationSet4Way_tags_1)
		/sizeof(asn_DEF_AccelerationSet4Way_tags_1[0]), /* 1 */
	asn_DEF_AccelerationSet4Way_tags_1,	/* Same as above */
	sizeof(asn_DEF_AccelerationSet4Way_tags_1)
		/sizeof(asn_DEF_AccelerationSet4Way_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AccelerationSet4Way_1,
	4,	/* Elements count */
	&asn_SPC_AccelerationSet4Way_specs_1	/* Additional specs */
};

