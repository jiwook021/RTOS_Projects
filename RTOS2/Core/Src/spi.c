/**
  * @file    spi.c
  * @brief   This file provides code for the configuration
  *          of the SPI instances.
  */

/* Includes ------------------------------------------------------------------*/
#include "spi.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/
/* Remove the definition of hspi5 here and use extern instead */
extern SPI_HandleTypeDef hspi5;

/* SPI5 init function */
void MX_SPI5_Init(void)
{
  hspi5.Instance = SPI5;
  hspi5.Init.Mode = SPI_MODE_SLAVE;
  hspi5.Init.Direction = SPI_DIRECTION_2LINES;
  hspi5.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi5.Init.CLKPolarity = SPI_POLARITY_LOW;    // CPOL=0
    hspi5.Init.CLKPhase = SPI_PHASE_1EDGE;        // CHANGE THIS TO SPI_PHASE_2EDGE
    hspi5.Init.NSS = SPI_NSS_HARD_INPUT;          // CHANGE FROM SOFTWARE TO HARDWARE NSS
  hspi5.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi5.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi5.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi5.Init.CRCPolynomial = 7;
  hspi5.Init.CRCLength = SPI_CRC_LENGTH_DATASIZE;
  hspi5.Init.NSSPMode = SPI_NSS_PULSE_DISABLE;

  if (HAL_SPI_Init(&hspi5) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
