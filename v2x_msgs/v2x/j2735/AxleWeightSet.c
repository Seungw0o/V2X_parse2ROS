/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn/J2735_201603DA.ASN"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "AxleWeightSet.h"

asn_TYPE_member_t asn_MBR_AxleWeightSet_1[] = {
	{ ATF_POINTER, 2, offsetof(struct AxleWeightSet, location),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AxleLocation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"location"
		},
	{ ATF_POINTER, 1, offsetof(struct AxleWeightSet, weight),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AxleWeight,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"weight"
		},
};
static const int asn_MAP_AxleWeightSet_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_AxleWeightSet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AxleWeightSet_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* location */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* weight */
};
asn_SEQUENCE_specifics_t asn_SPC_AxleWeightSet_specs_1 = {
	sizeof(struct AxleWeightSet),
	offsetof(struct AxleWeightSet, _asn_ctx),
	asn_MAP_AxleWeightSet_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_AxleWeightSet_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AxleWeightSet = {
	"AxleWeightSet",
	"AxleWeightSet",
	&asn_OP_SEQUENCE,
	asn_DEF_AxleWeightSet_tags_1,
	sizeof(asn_DEF_AxleWeightSet_tags_1)
		/sizeof(asn_DEF_AxleWeightSet_tags_1[0]), /* 1 */
	asn_DEF_AxleWeightSet_tags_1,	/* Same as above */
	sizeof(asn_DEF_AxleWeightSet_tags_1)
		/sizeof(asn_DEF_AxleWeightSet_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AxleWeightSet_1,
	2,	/* Elements count */
	&asn_SPC_AxleWeightSet_specs_1	/* Additional specs */
};

