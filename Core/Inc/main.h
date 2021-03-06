/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#define DEBUG_0_Pin GPIO_PIN_9
#define DEBUG_0_GPIO_Port GPIOD
#define DEBUG_1_Pin GPIO_PIN_10
#define DEBUG_1_GPIO_Port GPIOD
#define DEBUG_2_Pin GPIO_PIN_11
#define DEBUG_2_GPIO_Port GPIOD
#define DEBUG_3_Pin GPIO_PIN_12
#define DEBUG_3_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */
#define TFT_A0_Pin GPIO_PIN_0
#define TFT_A0_GPIO_Port GPIOC
#define TFT_RESET_Pin GPIO_PIN_1
#define TFT_RESET_GPIO_Port GPIOC
#define TFT_CS_Pin GPIO_PIN_2
#define TFT_CS_GPIO_Port GPIOC
#define BTN_DOWN_Pin GPIO_PIN_1
#define BTN_DOWN_GPIO_Port GPIOA
#define BTN_OK_Pin GPIO_PIN_2
#define BTN_OK_GPIO_Port GPIOA
#define BTN_UP_Pin GPIO_PIN_3
#define TFT_SCK_Pin GPIO_PIN_5
#define BTN_UP_GPIO_Port GPIOA
#define TFT_SCK_GPIO_Port GPIOA
#define LED_D2_Pin GPIO_PIN_6
#define LED_D2_GPIO_Port GPIOA
#define TFT_SDA_Pin GPIO_PIN_7
#define TFT_SDA_GPIO_Port GPIOA
#define SDIO_CD_Pin GPIO_PIN_7
#define SDIO_CD_GPIO_Port GPIOC
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
