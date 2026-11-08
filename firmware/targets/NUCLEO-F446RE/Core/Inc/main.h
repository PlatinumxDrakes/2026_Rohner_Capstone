/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

#include "stm32f4xx_nucleo.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LIGHTS_INT_SIGNALks_Pin GPIO_PIN_0
#define LIGHTS_INT_SIGNALks_GPIO_Port GPIOA
#define SYSTEM_SHUTDOWN_INT_SIGNAL_Pin GPIO_PIN_1
#define SYSTEM_SHUTDOWN_INT_SIGNAL_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define BLOWER_SWITCH_INT_STATUS_Pin GPIO_PIN_6
#define BLOWER_SWITCH_INT_STATUS_GPIO_Port GPIOA
#define RESET_BUTTON_INT_STATUS_Pin GPIO_PIN_7
#define RESET_BUTTON_INT_STATUS_GPIO_Port GPIOA
#define AUTO_SWITCH_INT_STATUS_Pin GPIO_PIN_4
#define AUTO_SWITCH_INT_STATUS_GPIO_Port GPIOC
#define MANUAL_SWITCH_INT_STATUS_Pin GPIO_PIN_5
#define MANUAL_SWITCH_INT_STATUS_GPIO_Port GPIOC
#define VFD_RUNNING_INT_STATUS_Pin GPIO_PIN_0
#define VFD_RUNNING_INT_STATUS_GPIO_Port GPIOB
#define DOOR_SWITCH_INT_STATUS_Pin GPIO_PIN_1
#define DOOR_SWITCH_INT_STATUS_GPIO_Port GPIOB
#define LIGHT_LENS_INT_STATUS_Pin GPIO_PIN_2
#define LIGHT_LENS_INT_STATUS_GPIO_Port GPIOB
#define SPRAY_AIR_INTERLOCK_INT_STATUS_Pin GPIO_PIN_10
#define SPRAY_AIR_INTERLOCK_INT_STATUS_GPIO_Port GPIOB
#define SOL1_INT_ENABLE_Pin GPIO_PIN_12
#define SOL1_INT_ENABLE_GPIO_Port GPIOB
#define SOL2_INT_ENABLE_Pin GPIO_PIN_13
#define SOL2_INT_ENABLE_GPIO_Port GPIOB
#define SOL3_INT_ENABLE_Pin GPIO_PIN_14
#define SOL3_INT_ENABLE_GPIO_Port GPIOB
#define SOL4_INT_ENABLE_Pin GPIO_PIN_15
#define SOL4_INT_ENABLE_GPIO_Port GPIOB
#define SOL5_INT_ENABLE_Pin GPIO_PIN_6
#define SOL5_INT_ENABLE_GPIO_Port GPIOC
#define SOL6_INT_ENABLE_Pin GPIO_PIN_7
#define SOL6_INT_ENABLE_GPIO_Port GPIOC
#define SOL7_INT_ENABLE_Pin GPIO_PIN_8
#define SOL7_INT_ENABLE_GPIO_Port GPIOC
#define SOL8_INT_ENABLE_Pin GPIO_PIN_9
#define SOL8_INT_ENABLE_GPIO_Port GPIOC
#define VFD_RUN_INT_ENABLE_Pin GPIO_PIN_8
#define VFD_RUN_INT_ENABLE_GPIO_Port GPIOA
#define SAS_INT_ENABLE_Pin GPIO_PIN_9
#define SAS_INT_ENABLE_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
