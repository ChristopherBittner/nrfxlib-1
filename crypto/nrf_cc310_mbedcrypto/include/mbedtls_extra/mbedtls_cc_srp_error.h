/**************************************************************************************
* Copyright (c) 2016-2018, Arm Limited (or its affiliates). All rights reserved       *
*                                                                                     *
* This file and the related binary are licensed under the following license:          *
*                                                                                     *
* ARM Object Code and Header Files License, v1.0 Redistribution.                      *
*                                                                                     *
* Redistribution and use of object code, header files, and documentation, without     *
* modification, are permitted provided that the following conditions are met:         *
*                                                                                     *
* 1) Redistributions must reproduce the above copyright notice and the                *
*    following disclaimer in the documentation and/or other materials                 *
*    provided with the distribution.                                                  *
*                                                                                     *
* 2) Unless to the extent explicitly permitted by law, no reverse                     *
*    engineering, decompilation, or disassembly of is permitted.                      *
*                                                                                     *
* 3) Redistribution and use is permitted solely for the purpose of                    *
*    developing or executing applications that are targeted for use                   *
*    on an ARM-based product.                                                         *
*                                                                                     *
* DISCLAIMER. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND                  *
* CONTRIBUTORS "AS IS." ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT             *
* NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, NON-INFRINGEMENT,        *
* AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE          *
* COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,   *
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED            *
* TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR              *
* PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF              *
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING                *
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS                  *
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                        *
**************************************************************************************/

/*!
 @file
 @brief This file contains the error definitions of the CryptoCell SRP APIs.
 */

/*!
 @defgroup cc_srp_errors Specific errors of the CryptoCell SRP APIs
 @brief Contains the CryptoCell SRP-API error definitions. See mbedtls_cc_srp_error.h.
 @{
 @ingroup cc_srp
 @}
 */


#ifndef _MBEDTLS_CC_SRP_ERROR_H
#define _MBEDTLS_CC_SRP_ERROR_H


#include "cc_error.h"

#ifdef __cplusplus
extern "C"
{
#endif

/************************ Defines ******************************/

/* The base address errors of the CryptoCell SRP module - 0x00F02600 */
/*! Illegal parameter. */
#define CC_SRP_PARAM_INVALID_ERROR               (CC_SRP_MODULE_ERROR_BASE + 0x01UL)
/*! Illegal modulus size . */
#define CC_SRP_MOD_SIZE_INVALID_ERROR            (CC_SRP_MODULE_ERROR_BASE + 0x02UL)
/*! Illegal state (uninitialized) . */
#define CC_SRP_STATE_UNINITIALIZED_ERROR         (CC_SRP_MODULE_ERROR_BASE + 0x03UL)
/*! Result validation error. */
#define CC_SRP_RESULT_ERROR                  (CC_SRP_MODULE_ERROR_BASE + 0x04UL)
/*! Invalid parameter. */
#define CC_SRP_PARAM_ERROR                   (CC_SRP_MODULE_ERROR_BASE + 0x05UL)
/*! Internal PKI error. */
#define CC_SRP_INTERNAL_ERROR                    (CC_SRP_MODULE_ERROR_BASE + 0x06UL)

/************************ Enums ********************************/

/************************ Typedefs  ****************************/

/************************ Structs  *****************************/

/************************ Public Variables *********************/

/************************ Public Functions *********************/

#ifdef __cplusplus
}
#endif

#endif //_MBEDTLS_CC_SRP_ERROR_H

