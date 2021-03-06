/**
  ******************************************************************************
  * @file    stm32f10x_it.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and peripherals
  *          interrupt service routine.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include "includes.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            Cortex-M3 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief  This function handles External line 0 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI0_IRQHandler(void)
{
    if(RESET != EXTI_GetITStatus(EXTI_Line0)) 
    { 
        EXTI_ClearITPendingBit(EXTI_Line0);
        
        GUI_X_StoreKey(KEY_PORT, KEY_MSG_PAUSE);
    }    
}

/**
  * @brief  This function handles External line 1 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI1_IRQHandler(void)
{
    if(RESET != EXTI_GetITStatus(EXTI_Line1)) 
    { 
        EXTI_ClearITPendingBit(EXTI_Line1);
        
        GUI_X_StoreKey(KEY_PORT, KEY_MSG_CLEAR);
    }    
}

/**
  * @brief  This function handles External line 2 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI2_IRQHandler(void)
{
    if(RESET != EXTI_GetITStatus(EXTI_Line2)) 
    { 
        EXTI_ClearITPendingBit(EXTI_Line2);
        
        GUI_X_StoreKey(KEY_PORT, KEY_MSG_CONFIRM);
    }    
}

/**
  * @brief  This function handles External line 3 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI3_IRQHandler(void)
{
    if(RESET != EXTI_GetITStatus(EXTI_Line3)) 
    { 
        EXTI_ClearITPendingBit(EXTI_Line3);
        
        GUI_X_StoreKey(KEY_PORT, KEY_MSG_UP);
    }    
}

/**
  * @brief  This function handles External line 4 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI4_IRQHandler(void)
{
    if(RESET != EXTI_GetITStatus(EXTI_Line4)) 
    { 
        EXTI_ClearITPendingBit(EXTI_Line4);
        
        GUI_X_StoreKey(KEY_PORT, KEY_MSG_DOWN);
    }    
}

/**
  * @brief  This function handles External lines 9 to 5 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI9_5_IRQHandler(void)
{
    if(RESET != EXTI_GetITStatus(EXTI_Line5)) 
    { 
        EXTI_ClearITPendingBit(EXTI_Line5);
        
        GUI_X_StoreKey(KEY_PORT, KEY_MSG_SET);
    }
}

/**
  * @brief  This function handles USART1 global interrupt request.
  * @param  None
  * @retval None
  */
void USART1_IRQHandler(void)
{
    UART_IRQProc(&g_uart_ccb[PC_COM_PORT], PC_UART);    
}

/**
  * @brief  This function handles USART2 global interrupt request.
  * @param  None
  * @retval None
  */
void USART2_IRQHandler(void)
{
    UART_IRQProc(&g_uart_ccb[MEMS_COM_PORT], MEMS_UART);    
}

/******************************************************************************/
/*                 STM32F10x Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32f10x_xx.s).                                            */
/******************************************************************************/

/**
  * @brief  This function handles PPP interrupt request.
  * @param  None
  * @retval None
  */
/*void PPP_IRQHandler(void)
{
}*/

/**
  * @}
  */ 

/**
  * @}
  */ 

/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
