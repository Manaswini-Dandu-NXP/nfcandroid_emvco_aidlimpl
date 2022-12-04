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

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/** \addtogroup EMVCO_STACK_PERIPHERAL_API_INTERFACE
 *  @brief      Interface for handling hardware peripherals
 *  @{
 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief       This function sets the led according to emvco status
 * @param[in] emvco_status EMVCO_MODE_ON turn green led and EMVCO_MODE_OFF turns
 * green led off
 * @return           void
 *
 */
void led_switch_control(emvco_status_t emvco_status);

#ifdef __cplusplus
}
#endif /*  C++ Compilation guard */
/** @}*/
#endif /* _PERIPHERALS_H_ */
