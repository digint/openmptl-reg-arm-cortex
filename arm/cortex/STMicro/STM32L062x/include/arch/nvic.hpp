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
//  Import from CMSIS-SVD: "STMicro/STM32L062x.svd"
//
//  name: STM32L062x
//  version: 1.0
//  description: STM32L062x
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

using wwdg             = irq_channel< 0>;    /**< Window Watchdog interrupt                                                       */
using pvd              = irq_channel< 1>;    /**< PVD through EXTI line detection                                                 */
using rtc              = irq_channel< 2>;    /**< RTC global interrupt                                                            */
using flash            = irq_channel< 3>;    /**< Flash global interrupt                                                          */
using rcc              = irq_channel< 4>;    /**< RCC global interrupt                                                            */
using exti0_1          = irq_channel< 5>;    /**< EXTI Line[1:0] interrupts                                                       */
using exti2_3          = irq_channel< 6>;    /**< EXTI Line[3:2] interrupts                                                       */
using exti4_15         = irq_channel< 7>;    /**< EXTI Line15 and EXTI4 interrupts                                                */
using tsc              = irq_channel< 8>;    /**< Touch sensing interrupt                                                         */
using dma1_channel1    = irq_channel< 9>;    /**< DMA1 Channel1 global interrupt                                                  */
using dma1_channel2_3  = irq_channel<10>;    /**< DMA1 Channel2 and 3 interrupts                                                  */
using dma1_channel4_7  = irq_channel<11>;    /**< DMA1 Channel4 to 7 interrupts                                                   */
using adc_comp         = irq_channel<12>;    /**< ADC and comparator 1 and 2                                                      */
using lptim1           = irq_channel<13>;    /**< LPTIMER1 interrupt through EXTI29                                               */
using tim2             = irq_channel<15>;    /**< TIM2 global interrupt                                                           */
using tim6_dac         = irq_channel<17>;    /**< TIM6 global interrupt and DAC                                                   */
using tim21            = irq_channel<20>;    /**< TIMER21 global interrupt                                                        */
using tim22            = irq_channel<22>;    /**< TIMER22 global interrupt                                                        */
using i2c1             = irq_channel<23>;    /**< I2C1 global interrupt                                                           */
using i2c2             = irq_channel<24>;    /**< I2C2 global interrupt                                                           */
using spi1             = irq_channel<25>;    /**< SPI1_global_interrupt                                                           */
using spi2             = irq_channel<26>;    /**< SPI2 global interrupt                                                           */
using usart1           = irq_channel<27>;    /**< USART1 global interrupt                                                         */
using usart2           = irq_channel<28>;    /**< USART2 global interrupt                                                         */
using aes_rng_lpuart1  = irq_channel<29>;    /**< AES global interrupt RNG global interrupt and LPUART1 global interrupt through  */
using usb              = irq_channel<31>;    /**< USB event interrupt through EXTI18                                              */

static constexpr int numof_interrupt_channels = 32

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
