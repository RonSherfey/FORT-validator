#ifndef SRC_ALGORITHM_H_
#define SRC_ALGORITHM_H_

#include <stdbool.h>
#include <openssl/x509.h>
#include "asn1/asn1c/AlgorithmIdentifier.h"
#include "asn1/asn1c/OBJECT_IDENTIFIER.h"

/**
 * This file is an implementation of RFC 7935 (previously 6485).
 */

int validate_certificate_signature_algorithm(int, char const *);
int validate_certificate_public_key_algorithm(X509_ALGOR *, bool);

int validate_cms_hashing_algorithm(AlgorithmIdentifier_t *, char const *);
int validate_cms_hashing_algorithm_oid(OBJECT_IDENTIFIER_t *, char const *);
int validate_cms_signature_algorithm(AlgorithmIdentifier_t *);

#endif /* SRC_ALGORITHM_H_ */
