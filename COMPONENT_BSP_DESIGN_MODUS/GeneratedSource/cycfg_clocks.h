/*******************************************************************************
* File Name: cycfg_clocks.h
*
* Description:
* Clock configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.2.0.2801
* mtb-pdl-cat2-release-v1.1.0 1.1.0.2932
* personalities 3.0.0.0
* udd 3.0.0.929
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_CLOCKS_H)
#define CYCFG_CLOCKS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#define peri_0_div_16_0_ENABLED 1U
#define peri_0_div_16_0_HW CY_SYSCLK_DIV_16_BIT
#define peri_0_div_16_0_NUM 0U
#define peri_0_div_8_0_ENABLED 1U
#define peri_0_div_8_0_HW CY_SYSCLK_DIV_8_BIT
#define peri_0_div_8_0_NUM 0U
#define peri_0_div_8_1_ENABLED 1U
#define peri_0_div_8_1_HW CY_SYSCLK_DIV_8_BIT
#define peri_0_div_8_1_NUM 1U
#define peri_0_div_8_2_ENABLED 1U
#define peri_0_div_8_2_HW CY_SYSCLK_DIV_8_BIT
#define peri_0_div_8_2_NUM 2U
#define peri_0_div_8_3_ENABLED 1U
#define peri_0_div_8_3_HW CY_SYSCLK_DIV_8_BIT
#define peri_0_div_8_3_NUM 3U

#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t peri_0_div_16_0_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t peri_0_div_8_0_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t peri_0_div_8_1_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t peri_0_div_8_2_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t peri_0_div_8_3_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_clocks(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_CLOCKS_H */
