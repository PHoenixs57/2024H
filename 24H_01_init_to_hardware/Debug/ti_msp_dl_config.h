/*
 * Copyright (c) 2023, Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ============ ti_msp_dl_config.h =============
 *  Configured MSPM0 DriverLib module declarations
 *
 *  DO NOT EDIT - This file is generated for the MSPM0G350X
 *  by the SysConfig tool.
 */
#ifndef ti_msp_dl_config_h
#define ti_msp_dl_config_h

#define CONFIG_MSPM0G350X

#if defined(__ti_version__) || defined(__TI_COMPILER_VERSION__)
#define SYSCONFIG_WEAK __attribute__((weak))
#elif defined(__IAR_SYSTEMS_ICC__)
#define SYSCONFIG_WEAK __weak
#elif defined(__GNUC__)
#define SYSCONFIG_WEAK __attribute__((weak))
#endif

#include <ti/devices/msp/msp.h>
#include <ti/driverlib/driverlib.h>
#include <ti/driverlib/m0p/dl_core.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  ======== SYSCFG_DL_init ========
 *  Perform all required MSP DL initialization
 *
 *  This function should be called once at a point before any use of
 *  MSP DL.
 */


/* clang-format off */

#define POWER_STARTUP_DELAY                                                (16)


#define CPUCLK_FREQ                                                     32000000



/* Defines for PWM_0 */
#define PWM_0_INST                                                         TIMA1
#define PWM_0_INST_IRQHandler                                   TIMA1_IRQHandler
#define PWM_0_INST_INT_IRQN                                     (TIMA1_INT_IRQn)
#define PWM_0_INST_CLK_FREQ                                             32000000
/* GPIO defines for channel 0 */
#define GPIO_PWM_0_C0_PORT                                                 GPIOA
#define GPIO_PWM_0_C0_PIN                                         DL_GPIO_PIN_10
#define GPIO_PWM_0_C0_IOMUX                                      (IOMUX_PINCM21)
#define GPIO_PWM_0_C0_IOMUX_FUNC                     IOMUX_PINCM21_PF_TIMA1_CCP0
#define GPIO_PWM_0_C0_IDX                                    DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_0_C1_PORT                                                 GPIOA
#define GPIO_PWM_0_C1_PIN                                         DL_GPIO_PIN_11
#define GPIO_PWM_0_C1_IOMUX                                      (IOMUX_PINCM22)
#define GPIO_PWM_0_C1_IOMUX_FUNC                     IOMUX_PINCM22_PF_TIMA1_CCP1
#define GPIO_PWM_0_C1_IDX                                    DL_TIMER_CC_1_INDEX

/* Defines for PWM_1 */
#define PWM_1_INST                                                         TIMA0
#define PWM_1_INST_IRQHandler                                   TIMA0_IRQHandler
#define PWM_1_INST_INT_IRQN                                     (TIMA0_INT_IRQn)
#define PWM_1_INST_CLK_FREQ                                             32000000
/* GPIO defines for channel 0 */
#define GPIO_PWM_1_C0_PORT                                                 GPIOA
#define GPIO_PWM_1_C0_PIN                                         DL_GPIO_PIN_21
#define GPIO_PWM_1_C0_IOMUX                                      (IOMUX_PINCM46)
#define GPIO_PWM_1_C0_IOMUX_FUNC                     IOMUX_PINCM46_PF_TIMA0_CCP0
#define GPIO_PWM_1_C0_IDX                                    DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_1_C1_PORT                                                 GPIOA
#define GPIO_PWM_1_C1_PIN                                         DL_GPIO_PIN_22
#define GPIO_PWM_1_C1_IOMUX                                      (IOMUX_PINCM47)
#define GPIO_PWM_1_C1_IOMUX_FUNC                     IOMUX_PINCM47_PF_TIMA0_CCP1
#define GPIO_PWM_1_C1_IDX                                    DL_TIMER_CC_1_INDEX




/* Defines for I2C_OLED */
#define I2C_OLED_INST                                                       I2C0
#define I2C_OLED_INST_IRQHandler                                 I2C0_IRQHandler
#define I2C_OLED_INST_INT_IRQN                                     I2C0_INT_IRQn
#define I2C_OLED_BUS_SPEED_HZ                                             100000
#define GPIO_I2C_OLED_SDA_PORT                                             GPIOA
#define GPIO_I2C_OLED_SDA_PIN                                     DL_GPIO_PIN_28
#define GPIO_I2C_OLED_IOMUX_SDA                                   (IOMUX_PINCM3)
#define GPIO_I2C_OLED_IOMUX_SDA_FUNC                    IOMUX_PINCM3_PF_I2C0_SDA
#define GPIO_I2C_OLED_SCL_PORT                                             GPIOA
#define GPIO_I2C_OLED_SCL_PIN                                     DL_GPIO_PIN_31
#define GPIO_I2C_OLED_IOMUX_SCL                                   (IOMUX_PINCM6)
#define GPIO_I2C_OLED_IOMUX_SCL_FUNC                    IOMUX_PINCM6_PF_I2C0_SCL


/* Defines for grayscale */
#define grayscale_INST                                                     UART1
#define grayscale_INST_IRQHandler                               UART1_IRQHandler
#define grayscale_INST_INT_IRQN                                   UART1_INT_IRQn
#define GPIO_grayscale_RX_PORT                                             GPIOA
#define GPIO_grayscale_TX_PORT                                             GPIOA
#define GPIO_grayscale_RX_PIN                                     DL_GPIO_PIN_18
#define GPIO_grayscale_TX_PIN                                     DL_GPIO_PIN_17
#define GPIO_grayscale_IOMUX_RX                                  (IOMUX_PINCM40)
#define GPIO_grayscale_IOMUX_TX                                  (IOMUX_PINCM39)
#define GPIO_grayscale_IOMUX_RX_FUNC                   IOMUX_PINCM40_PF_UART1_RX
#define GPIO_grayscale_IOMUX_TX_FUNC                   IOMUX_PINCM39_PF_UART1_TX
#define grayscale_BAUD_RATE                                               (9600)
#define grayscale_IBRD_32_MHZ_9600_BAUD                                    (208)
#define grayscale_FBRD_32_MHZ_9600_BAUD                                     (21)
/* Defines for Gyroscpe */
#define Gyroscpe_INST                                                      UART0
#define Gyroscpe_INST_IRQHandler                                UART0_IRQHandler
#define Gyroscpe_INST_INT_IRQN                                    UART0_INT_IRQn
#define GPIO_Gyroscpe_RX_PORT                                              GPIOA
#define GPIO_Gyroscpe_TX_PORT                                              GPIOA
#define GPIO_Gyroscpe_RX_PIN                                       DL_GPIO_PIN_1
#define GPIO_Gyroscpe_TX_PIN                                       DL_GPIO_PIN_0
#define GPIO_Gyroscpe_IOMUX_RX                                    (IOMUX_PINCM2)
#define GPIO_Gyroscpe_IOMUX_TX                                    (IOMUX_PINCM1)
#define GPIO_Gyroscpe_IOMUX_RX_FUNC                     IOMUX_PINCM2_PF_UART0_RX
#define GPIO_Gyroscpe_IOMUX_TX_FUNC                     IOMUX_PINCM1_PF_UART0_TX
#define Gyroscpe_BAUD_RATE                                                (9600)
#define Gyroscpe_IBRD_32_MHZ_9600_BAUD                                     (208)
#define Gyroscpe_FBRD_32_MHZ_9600_BAUD                                      (21)





/* Port definition for Pin Group GPIOA */
#define GPIOA_PORT                                                       (GPIOA)

/* Defines for AIN0: GPIOA.9 with pinCMx 20 on package pin 55 */
#define GPIOA_AIN0_PIN                                           (DL_GPIO_PIN_9)
#define GPIOA_AIN0_IOMUX                                         (IOMUX_PINCM20)
/* Defines for AIN1: GPIOA.14 with pinCMx 36 on package pin 7 */
#define GPIOA_AIN1_PIN                                          (DL_GPIO_PIN_14)
#define GPIOA_AIN1_IOMUX                                         (IOMUX_PINCM36)
/* Defines for BIN0: GPIOA.13 with pinCMx 35 on package pin 6 */
#define GPIOA_BIN0_PIN                                          (DL_GPIO_PIN_13)
#define GPIOA_BIN0_IOMUX                                         (IOMUX_PINCM35)
/* Defines for BIN1: GPIOA.12 with pinCMx 34 on package pin 5 */
#define GPIOA_BIN1_PIN                                          (DL_GPIO_PIN_12)
#define GPIOA_BIN1_IOMUX                                         (IOMUX_PINCM34)
/* Port definition for Pin Group ECODER */
#define ECODER_PORT                                                      (GPIOB)

/* Defines for E0A: GPIOB.19 with pinCMx 45 on package pin 16 */
// pins affected by this interrupt request:["E0A","E1A"]
#define ECODER_INT_IRQN                                         (GPIOB_INT_IRQn)
#define ECODER_INT_IIDX                         (DL_INTERRUPT_GROUP1_IIDX_GPIOB)
#define ECODER_E0A_IIDX                                     (DL_GPIO_IIDX_DIO19)
#define ECODER_E0A_PIN                                          (DL_GPIO_PIN_19)
#define ECODER_E0A_IOMUX                                         (IOMUX_PINCM45)
/* Defines for E0B: GPIOB.18 with pinCMx 44 on package pin 15 */
#define ECODER_E0B_PIN                                          (DL_GPIO_PIN_18)
#define ECODER_E0B_IOMUX                                         (IOMUX_PINCM44)
/* Defines for E1A: GPIOB.17 with pinCMx 43 on package pin 14 */
#define ECODER_E1A_IIDX                                     (DL_GPIO_IIDX_DIO17)
#define ECODER_E1A_PIN                                          (DL_GPIO_PIN_17)
#define ECODER_E1A_IOMUX                                         (IOMUX_PINCM43)
/* Defines for E1B: GPIOB.16 with pinCMx 33 on package pin 4 */
#define ECODER_E1B_PIN                                          (DL_GPIO_PIN_16)
#define ECODER_E1B_IOMUX                                         (IOMUX_PINCM33)

/* clang-format on */

void SYSCFG_DL_init(void);
void SYSCFG_DL_initPower(void);
void SYSCFG_DL_GPIO_init(void);
void SYSCFG_DL_SYSCTL_init(void);
void SYSCFG_DL_PWM_0_init(void);
void SYSCFG_DL_PWM_1_init(void);
void SYSCFG_DL_I2C_OLED_init(void);
void SYSCFG_DL_grayscale_init(void);
void SYSCFG_DL_Gyroscpe_init(void);


bool SYSCFG_DL_saveConfiguration(void);
bool SYSCFG_DL_restoreConfiguration(void);

#ifdef __cplusplus
}
#endif

#endif /* ti_msp_dl_config_h */
