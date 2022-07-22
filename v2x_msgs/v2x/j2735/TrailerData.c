/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn/J2735_201603DA.ASN"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "TrailerData.h"

asn_TYPE_member_t asn_MBR_TrailerData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerData, sspRights),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSPindex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sspRights"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerData, connection),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PivotPointDescription,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connection"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerData, units),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerUnitDescriptionList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"units"
		},
};
static const ber_tlv_tag_t asn_DEF_TrailerData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrailerData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sspRights */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* connection */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* units */
};
asn_SEQUENCE_specifics_t asn_SPC_TrailerData_specs_1 = {
	sizeof(struct TrailerData),
	offsetof(struct TrailerData, _asn_ctx),
	asn_MAP_TrailerData_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrailerData = {
	"TrailerData",
	"TrailerData",
	&asn_OP_SEQUENCE,
	asn_DEF_TrailerData_tags_1,
	sizeof(asn_DEF_TrailerData_tags_1)
		/sizeof(asn_DEF_TrailerData_tags_1[0]), /* 1 */
	asn_DEF_TrailerData_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrailerData_tags_1)
		/sizeof(asn_DEF_TrailerData_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TrailerData_1,
	3,	/* Elements count */
	&asn_SPC_TrailerData_specs_1	/* Additional specs */
};

