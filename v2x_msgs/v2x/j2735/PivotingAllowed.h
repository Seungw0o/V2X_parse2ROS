/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn/J2735_201603DA.ASN"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PivotingAllowed_H_
#define	_PivotingAllowed_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PivotingAllowed */
typedef BOOLEAN_t	 PivotingAllowed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PivotingAllowed;
asn_struct_free_f PivotingAllowed_free;
asn_struct_print_f PivotingAllowed_print;
asn_constr_check_f PivotingAllowed_constraint;
ber_type_decoder_f PivotingAllowed_decode_ber;
der_type_encoder_f PivotingAllowed_encode_der;
xer_type_decoder_f PivotingAllowed_decode_xer;
xer_type_encoder_f PivotingAllowed_encode_xer;
oer_type_decoder_f PivotingAllowed_decode_oer;
oer_type_encoder_f PivotingAllowed_encode_oer;
per_type_decoder_f PivotingAllowed_decode_uper;
per_type_encoder_f PivotingAllowed_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PivotingAllowed_H_ */
#include <asn_internal.h>
