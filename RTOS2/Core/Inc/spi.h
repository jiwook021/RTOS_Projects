/**
  * @file    spi.h
  * @brief   This file contains all the function prototypes for
  *          the spi.c file
  */

#ifndef __SPI_H__
#define __SPI_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern SPI_HandleTypeDef hspi5;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_SPI5_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ SPI_H__ */
