/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "STMicro/STM32F301x.svd"
//
//  name: STM32F301x
//  version: 1.0
//  description: STM32F301x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_NVIC_HPP_INCLUDED
#define ARCH_NVIC_HPP_INCLUDED

#warning "using untested register declarations"

namespace mptl { namespace irq {

using wwdg                = irq_channel< 0>;    /**< Window Watchdog interrupt                                                           */
using pvd                 = irq_channel< 1>;    /**< PVD through EXTI line detection interrupt                                           */
using tamp_stamp          = irq_channel< 2>;    /**< Tamper and TimeStamp interrupts                                                     */
using rtc_wkup            = irq_channel< 3>;    /**< RTC Wakeup interrupt through the EXTI line                                          */
using flash               = irq_channel< 4>;    /**< Flash global interrupt                                                              */
using rcc                 = irq_channel< 5>;    /**< RCC global interrupt                                                                */
using exti0               = irq_channel< 6>;    /**< EXTI Line0 interrupt                                                                */
using exti1               = irq_channel< 7>;    /**< EXTI Line3 interrupt                                                                */
using exti2_tsc           = irq_channel< 8>;    /**< EXTI Line2 and Touch sensing interrupts                                             */
using exti3               = irq_channel< 9>;    /**< EXTI Line3 interrupt                                                                */
using exti4               = irq_channel<10>;    /**< EXTI Line4 interrupt                                                                */
using dma1_ch1            = irq_channel<11>;    /**< DMA1 channel 1 interrupt                                                            */
using dma1_ch2            = irq_channel<12>;    /**< DMA1 channel 2 interrupt                                                            */
using dma1_ch3            = irq_channel<13>;    /**< DMA1 channel 3 interrupt                                                            */
using dma1_ch4            = irq_channel<14>;    /**< DMA1 channel 4 interrupt                                                            */
using dma1_ch5            = irq_channel<15>;    /**< DMA1 channel 5 interrupt                                                            */
using dma1_ch6            = irq_channel<16>;    /**< DMA1 channel 6 interrupt                                                            */
using dma1_ch7            = irq_channel<17>;    /**< DMA1 channel 7interrupt                                                             */
using usb_hp_can_tx       = irq_channel<19>;    /**< USB High Priority/CAN_TX interrupts                                                 */
using usb_lp_can_rx0      = irq_channel<20>;    /**< USB Low Priority/CAN_RX0 interrupts                                                 */
using can_rx1             = irq_channel<21>;    /**< CAN_RX1 interrupt                                                                   */
using can_sce             = irq_channel<22>;    /**< CAN_SCE interrupt                                                                   */
using exti9_5             = irq_channel<23>;    /**< EXTI Line5 to Line9 interrupts                                                      */
using tim1_brk_tim15      = irq_channel<24>;    /**< TIM1 Break/TIM15 global interruts                                                   */
using tim1_up_tim16       = irq_channel<25>;    /**< TIM1 Update/TIM16 global interrupts                                                 */
using tim1_trg_com_tim17  = irq_channel<26>;    /**< TIM1 trigger and commutation/TIM17 interrupts                                       */
using tim2                = irq_channel<28>;    /**< TIM2 global interrupt                                                               */
using tim3                = irq_channel<29>;    /**< TIM3 global interrupt                                                               */
using tim4                = irq_channel<30>;    /**< TIM4 global interrupt                                                               */
using i2c1_ev_exti23      = irq_channel<31>;    /**< I2C1 event interrupt and EXTI Line23 interrupt                                      */
using i2c1_er             = irq_channel<32>;    /**< I2C1 error interrupt                                                                */
using i2c2_ev_exti24      = irq_channel<33>;    /**< I2C2 event interrupt & EXTI Line24 interrupt                                        */
using i2c2_er             = irq_channel<34>;    /**< I2C2 error interrupt                                                                */
using spi1                = irq_channel<35>;    /**< SPI1 global interrupt                                                               */
using spi2                = irq_channel<36>;    /**< SPI2 global interrupt                                                               */
using usart1_exti25       = irq_channel<37>;    /**< USART1 global interrupt and EXTI Line 25 interrupt                                  */
using usart2_exti26       = irq_channel<38>;    /**< USART2 global interrupt and EXTI Line 26 interrupt                                  */
using usart3_exti28       = irq_channel<39>;    /**< USART3 global interrupt and EXTI Line 28 interrupt                                  */
using exti15_10           = irq_channel<40>;    /**< EXTI Line15 to Line10 interrupts                                                    */
using rtcalarm            = irq_channel<41>;    /**< RTC alarm interrupt                                                                 */
using usb_wkup            = irq_channel<42>;    /**< USB wakeup from Suspend                                                             */
using uart4_exti34        = irq_channel<52>;    /**< UART4 global and EXTI Line 34 interrupts                                            */
using uart5_exti35        = irq_channel<53>;    /**< UART5 global and EXTI Line 35 interrupts                                            */
using tim6_dacunder       = irq_channel<54>;    /**< TIM6 global and DAC12 underrun interrupts                                           */
using tim7                = irq_channel<55>;    /**< TIM7 global interrupt                                                               */
using dma2_ch1            = irq_channel<56>;    /**< DMA2 channel1 global interrupt                                                      */
using dma2_ch2            = irq_channel<57>;    /**< DMA2 channel2 global interrupt                                                      */
using dma2_ch3            = irq_channel<58>;    /**< DMA2 channel3 global interrupt                                                      */
using dma2_ch4            = irq_channel<59>;    /**< DMA2 channel4 global interrupt                                                      */
using dma2_ch5            = irq_channel<60>;    /**< DMA2 channel5 global interrupt                                                      */
using comp123             = irq_channel<64>;    /**< COMP1 & COMP2 & COMP3 interrupts combined with EXTI Lines 21, 22 and 29 interrupts  */
using comp456             = irq_channel<65>;    /**< COMP4 & COMP5 & COMP6 interrupts combined with EXTI Lines 30, 31 and 32 interrupts  */
using comp7               = irq_channel<66>;    /**< COMP7 interrupt combined with EXTI Line 33 interrupt                                */
using usb_hp              = irq_channel<74>;    /**< USB High priority interrupt                                                         */
using usb_lp              = irq_channel<75>;    /**< USB Low priority interrupt                                                          */
using usb_wkup_exti       = irq_channel<76>;    /**< USB wakeup from Suspend and EXTI Line 18                                            */

static constexpr int numof_interrupt_channels = 77

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
