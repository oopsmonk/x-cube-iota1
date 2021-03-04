/**
  ******************************************************************************
  * @file    iota_wallet.c
  * @author  SRA/Central LAB
  * @brief   Handle IOTA Task
  *
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under SLA0055, the "License";
  * You may not use this file except in compliance with the License. 
  * You may obtain a copy of the License at www.st.com
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include <stdbool.h>

#include "main.h"
#include "iota_wallet.h"
#include "iota_conf.h"
#include "menu.h"
#include "serial_comm.h"
#include "terminal_manager.h"
#include "iot_flash_config.h"

/* Private defines -----------------------------------------------------------*/

/* Private typedef -----------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Functions Definition ------------------------------------------------------*/
/**
 * @brief  Require Root Certificate for TLS.
 * @param  None
 * @retval Always true
 */
bool app_needs_root_ca(void)
{
  return true;
}

/**
  * @brief  IOTA client task
  * @param  arg Task arg
  * @retval None
  */
void iota_wallet_run(void const *arg)
{
  bool skip_reconf = false;

  terminal_print_frame("IOTA ACCOUNT", '+', '|', '~', WW, RED);
    
  serial_press_any();

  main_menu();
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
