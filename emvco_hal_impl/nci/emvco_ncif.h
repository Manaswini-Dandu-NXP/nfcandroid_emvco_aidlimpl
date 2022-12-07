/******************************************************************************
 *
 *  Copyright 2022 NXP
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/
/** \addtogroup EMVCO_STACK_NCI_API_INTERFACE
 *  @brief interface to send the NCI packets and process the fragmented data
 * received & loop back to NFCC
 *  @{
 */
#ifndef EMVCO_NCIF_H
#define EMVCO_NCIF_H

#include <emvco_cl.h>
#include <stdint.h>

/**
 *
 * @brief      compose and send CORE RESET command to command queue
 * @param[in]  reset_type specfies to keep the configuration or not
 * @return          NFC status:
 *                  NFCSTATUS_SUCCESS - command processed successfully
 *                  NFCSTATUS_FAILED - failed to process the command
 *
 */
uint8_t snd_core_reset(uint8_t reset_type);

/**
 * @brief       compose and send CORE INIT command to command queue
 * @param[in]   nci_version specfies the nci version
 * @return          NFC status:
 *                  NFCSTATUS_SUCCESS - command processed successfully
 *                  NFCSTATUS_FAILED - failed to process the command
 *
 */
uint8_t snd_core_init(uint8_t nci_version);

/**
 *
 * @brief       compose and send CORE SET_CONFIG command to command queue
 * @param[in]       p_param_tlvs parameter in TLV format
 * @param[in]       tlv_size tlv parameter size
 * @return          NFC status:
 *                  NFCSTATUS_SUCCESS - command processed successfully
 *                  NFCSTATUS_FAILED - failed to process the command
 *
 */
uint8_t snd_core_set_config(uint8_t *p_param_tlvs, uint8_t tlv_size);

/**
 *
 * @brief           compose and send RF Management DISCOVER command to command
 *                  queue
 *
 * @param[in]       num number of polling types
 * @param[in]       p_param contains type and frequency of the polling type
 *
 * @return          NFC status:
 *                  NFCSTATUS_SUCCESS - command processed successfully
 *                  NFCSTATUS_FAILED - failed to process the command
 *
 */
uint8_t snd_discover_cmd(uint8_t num, tEMVCO_DISCOVER_PARAMS *p_param);

/**
 *
 * @brief           compose and sends proprietary command to controller
 *
 * @param[in]       data_len command length
 * @param[in]       p_data   command data
 *
 * @return          NFC status:
 *                  NFCSTATUS_SUCCESS - command processed successfully
 *                  NFCSTATUS_FAILED - failed to process the command
 *
 **/
uint8_t snd_proprietary_act_cmd(uint16_t data_len, uint8_t *p_data);

/** @}*/
#endif /* EMVCO_NCIF_H */