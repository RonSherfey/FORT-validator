/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IPAddrAndASCertExtn"
 * 	found in "rfc3779.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#ifndef	_ASIdentifierChoice_H_
#define	_ASIdentifierChoice_H_


#include "asn1/asn1c/asn_application.h"

/* Including external dependencies */
#include "asn1/asn1c/NULL.h"
#include "asn1/asn1c/asn_SEQUENCE_OF.h"
#include "asn1/asn1c/constr_SEQUENCE_OF.h"
#include "asn1/asn1c/constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASIdentifierChoice_PR {
	ASIdentifierChoice_PR_NOTHING,	/* No components present */
	ASIdentifierChoice_PR_inherit,
	ASIdentifierChoice_PR_asIdsOrRanges
} ASIdentifierChoice_PR;

/* Forward declarations */
struct ASIdOrRange;

/* ASIdentifierChoice */
typedef struct ASIdentifierChoice {
	ASIdentifierChoice_PR present;
	union ASIdentifierChoice_u {
		NULL_t	 inherit;
		struct ASIdentifierChoice__asIdsOrRanges {
			A_SEQUENCE_OF(struct ASIdOrRange) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} asIdsOrRanges;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASIdentifierChoice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASIdentifierChoice;
extern asn_CHOICE_specifics_t asn_SPC_ASIdentifierChoice_specs_1;
extern asn_TYPE_member_t asn_MBR_ASIdentifierChoice_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ASIdOrRange.h"

#endif	/* _ASIdentifierChoice_H_ */
#include "asn1/asn1c/asn_internal.h"