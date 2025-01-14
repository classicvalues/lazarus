/*
 * Copyright(c) 2021 Fraunhofer AISEC
 * Fraunhofer-Gesellschaft zur Foerderung der angewandten Forschung e.V.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LZ_CRYPTO_LZ_ECDH_H_
#define LZ_CRYPTO_LZ_ECDH_H_

#ifdef MBEDTLS_CONFIG_FILE

#include MBEDTLS_CONFIG_FILE

#if defined(MBEDTLS_ECDH_C)

#define ECP_SECP256R1_KEY_SIZE 32

int lz_ecdh_gen_key_pair(mbedtls_ecdh_context *ctx);

int lz_ecdh_export_pub(uint8_t *pub, size_t len, mbedtls_ecdh_context *ctx);

int lz_ecdh_derive_secret(mbedtls_ecdh_context *ctx, uint8_t *shared, uint32_t len);

#endif

#endif /* MBEDTLS_CONFIG_FILE */

#endif /* LZ_CRYPTO_LZ_ECDH_H_ */
