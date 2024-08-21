/*************************************  *************************************/
/***************** Name : Menna Eid     ************************************/
/***************** Date: 8/23/2023   ***********************************************/
/***************** Version: 2.0       *********************************************/
/***************** SWC: stm32f103xx   ********************************************/

#ifndef  STM32F103XX_h
#define  STM32F103XX_h

/***************************************************RCC Registers*****************************************************/

#define RCC_u32_Base_ADDRESS   	 		 0x40021000U


typedef  struct
{
    volatile u32_t CR;
	volatile u32_t CFGR;
	volatile u32_t CIR ;
	volatile u32_t APB2RSTR;
	volatile u32_t APB1RSTR;
	volatile u32_t AHBENR;
	volatile u32_t APB2ENR;
	volatile u32_t APB1ENR;
	volatile u32_t BDCR;
}RCC_RegDef_t;

#define RCC         ((RCC_RegDef_t*)RCC_u32_Base_ADDRESS)

/**********************************************************************************************************************/

/***************************************************GPIO Registers*****************************************************/

#define GPIO_PORTA_u32_BASE_ADDRESS  	 0x40010800U
#define GPIO_PORTB_u32_BASE_ADDRESS  	 0x40010C00U
#define GPIO_PORTC_u32_BASE_ADDRESS  	 0x40011000U

typedef struct
{
	volatile u32_t GPIO_CRL;
	volatile u32_t GPIO_CRH;
	volatile u32_t GPIO_IDR;
	volatile u32_t GPIO_ODR;
	volatile u32_t GPIO_BSRR;
	volatile u32_t GPIO_BRR;
	volatile u32_t GPIO_LCKR;
}GPIO_RegDef_t;

#define GPIO_PORTA       ((GPIO_RegDef_t*)GPIO_PORTA_u32_BASE_ADDRESS)
#define GPIO_PORTB       ((GPIO_RegDef_t*)GPIO_PORTB_u32_BASE_ADDRESS)
#define GPIO_PORTC       ((GPIO_RegDef_t*)GPIO_PORTC_u32_BASE_ADDRESS)

/**********************************************************************************************************************/
/***************************************************SYSTICK Registers*****************************************************/

#define SYSTICK_u32_Base_ADDRESS   	 		  0xE000E010U

typedef struct
{
	volatile u32_t CTRL;
	volatile u32_t LOAD;
	volatile u32_t VAL;
	volatile u32_t CALIB;

}SYSTICK_RegDef_t;

#define STK                     ((SYSTICK_RegDef_t*)SYSTICK_u32_Base_ADDRESS)


/**********************************************************************************************************************/


#endif
