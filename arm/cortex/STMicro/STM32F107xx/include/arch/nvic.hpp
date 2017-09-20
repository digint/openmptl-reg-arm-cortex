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
//  Import from CMSIS-SVD: "STMicro/STM32F107xx.svd"
//
//  name: STM32F107xx
//  version: 1.2
//  description: STM32F107xx
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

using wwdg           = irq_channel< 0>;    /**< Window Watchdog interrupt                       */
using pvd            = irq_channel< 1>;    /**< PVD through EXTI line detection interrupt       */
using tamper         = irq_channel< 2>;    /**< Tamper interrupt                                */
using rtc            = irq_channel< 3>;    /**< RTC global interrupt                            */
using flash          = irq_channel< 4>;    /**< Flash global interrupt                          */
using rcc            = irq_channel< 5>;    /**< RCC global interrupt                            */
using exti0          = irq_channel< 6>;    /**< EXTI Line0 interrupt                            */
using exti1          = irq_channel< 7>;    /**< EXTI Line1 interrupt                            */
using exti2          = irq_channel< 8>;    /**< EXTI Line2 interrupt                            */
using exti3          = irq_channel< 9>;    /**< EXTI Line3 interrupt                            */
using exti4          = irq_channel<10>;    /**< EXTI Line4 interrupt                            */
using dma1_channel1  = irq_channel<11>;    /**< DMA1 Channel1 global interrupt                  */
using dma1_channel2  = irq_channel<12>;    /**< DMA1 Channel2 global interrupt                  */
using dma1_channel3  = irq_channel<13>;    /**< DMA1 Channel3 global interrupt                  */
using dma1_channel4  = irq_channel<14>;    /**< DMA1 Channel4 global interrupt                  */
using dma1_channel5  = irq_channel<15>;    /**< DMA1 Channel5 global interrupt                  */
using dma1_channel6  = irq_channel<16>;    /**< DMA1 Channel6 global interrupt                  */
using dma1_channel7  = irq_channel<17>;    /**< DMA1 Channel7 global interrupt                  */
using adc            = irq_channel<18>;    /**< ADC1 global interrupt / ADC2 global interrupts  */
using can1_tx        = irq_channel<19>;    /**< CAN1 TX interrupts                              */
using can1_rx0       = irq_channel<20>;    /**< CAN1 RX0 interrupts                             */
using can1_rx1       = irq_channel<21>;    /**< CAN1 RX1 interrupts                             */
using can1_sce       = irq_channel<22>;    /**< CAN1 SCE interrupt                              */
using exti9_5        = irq_channel<23>;    /**< EXTI Line[9:5] interrupts                       */
using tim1_brk       = irq_channel<24>;    /**< TIM1 Break interrupt                            */
using tim1_up        = irq_channel<25>;    /**< TIM1 Update interrupt                           */
using tim1_trg_com   = irq_channel<26>;    /**< TIM1 Trigger and Commutation interrupts         */
using tim1_cc        = irq_channel<27>;    /**< TIM1 Capture Compare interrupt                  */
using tim2           = irq_channel<28>;    /**< TIM2 global interrupt                           */
using tim3           = irq_channel<29>;    /**< TIM3 global interrupt                           */
using tim4           = irq_channel<30>;    /**< TIM4 global interrupt                           */
using i2c1_ev        = irq_channel<31>;    /**< I2C1 event interrupt                            */
using i2c1_er        = irq_channel<32>;    /**< I2C1 error interrupt                            */
using i2c2_ev        = irq_channel<33>;    /**< I2C2 event interrupt                            */
using i2c2_er        = irq_channel<34>;    /**< I2C2 error interrupt                            */
using spi1           = irq_channel<35>;    /**< SPI1 global interrupt                           */
using spi2           = irq_channel<36>;    /**< SPI2 global interrupt                           */
using usart1         = irq_channel<37>;    /**< USART1 global interrupt                         */
using usart2         = irq_channel<38>;    /**< USART2 global interrupt                         */
using usart3         = irq_channel<39>;    /**< USART3 global interrupt                         */
using exti15_10      = irq_channel<40>;    /**< EXTI Line[15:10] interrupts                     */
using rtcalarm       = irq_channel<41>;    /**< RTC Alarms through EXTI line interrupt          */
using tim5           = irq_channel<50>;    /**< TIM5 global interrupt                           */
using spi3           = irq_channel<51>;    /**< SPI3 global interrupt                           */
using uart4          = irq_channel<52>;    /**< UART4 global interrupt                          */
using uart5          = irq_channel<53>;    /**< UART5 global interrupt                          */
using tim6           = irq_channel<54>;    /**< TIM6 global interrupt                           */
using tim7           = irq_channel<55>;    /**< TIM7 global interrupt                           */
using dma2_channel1  = irq_channel<56>;    /**< DMA2 Channel1 global interrupt                  */
using dma2_channel2  = irq_channel<57>;    /**< DMA2 Channel2 global interrupt                  */
using dma2_channel3  = irq_channel<58>;    /**< DMA2 Channel3 global interrupt                  */
using dma2_channel4  = irq_channel<59>;    /**< DMA2 Channel4 global interrupt                  */
using dma2_channel5  = irq_channel<60>;    /**< DMA2 Channel5 global interrupt                  */
using eth            = irq_channel<61>;    /**< Ethernet global interrupt                       */
using eth_wkup       = irq_channel<62>;    /**< Ethernet Wakeup through EXTI line interrupt     */
using can2_tx        = irq_channel<63>;    /**< CAN2 TX interrupts                              */
using can2_rx0       = irq_channel<64>;    /**< CAN2 RX0 interrupts                             */
using can2_rx1       = irq_channel<65>;    /**< CAN2 RX1 interrupts                             */
using can2_sce       = irq_channel<66>;    /**< CAN2 SCE interrupt                              */
using otg_fs         = irq_channel<67>;    /**< USB On The Go FS global interrupt               */

static constexpr int numof_interrupt_channels = 68

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
