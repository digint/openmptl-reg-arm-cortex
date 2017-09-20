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
//  Import from CMSIS-SVD: "STMicro/STM32F091x.svd"
//
//  name: STM32F091x
//  version: 1.0
//  description: STM32F091x
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

using wwdg                 = irq_channel< 0>;    /**< Window Watchdog interrupt                              */
using pvd                  = irq_channel< 1>;    /**< PVD and VDDIO2 supply comparator interrupt             */
using rtc                  = irq_channel< 2>;    /**< RTC interrupts                                         */
using flash                = irq_channel< 3>;    /**< Flash global interrupt                                 */
using rcc_crs              = irq_channel< 4>;    /**< RCC and CRS global interrupts                          */
using exti0_1              = irq_channel< 5>;    /**< EXTI Line[1:0] interrupts                              */
using exti2_3              = irq_channel< 6>;    /**< EXTI Line[3:2] interrupts                              */
using exti4_15             = irq_channel< 7>;    /**< EXTI Line15 and EXTI4 interrupts                       */
using tsc                  = irq_channel< 8>;    /**< Touch sensing interrupt                                */
using dma_ch1              = irq_channel< 9>;    /**< DMA channel 1 interrupt                                */
using dma_ch2_3            = irq_channel<10>;    /**< DMA channel 2 and 3 interrupts                         */
using dma_ch4_5_6_7        = irq_channel<11>;    /**< DMA channel 4, 5, 6 and 7 interrupts                   */
using adc_comp             = irq_channel<12>;    /**< ADC and comparator interrupts                          */
using tim1_brk_up_trg_com  = irq_channel<13>;    /**< TIM1 break, update, trigger and commutation interrupt  */
using tim1_cc              = irq_channel<14>;    /**< TIM1 Capture Compare interrupt                         */
using tim2                 = irq_channel<15>;    /**< TIM2 global interrupt                                  */
using tim3                 = irq_channel<16>;    /**< TIM3 global interrupt                                  */
using tim6_dac             = irq_channel<17>;    /**< TIM6 global interrupt and DAC underrun interrupt       */
using tim7                 = irq_channel<18>;    /**< TIM7 global interrupt                                  */
using tim14                = irq_channel<19>;    /**< TIM14 global interrupt                                 */
using tim15                = irq_channel<20>;    /**< TIM15 global interrupt                                 */
using tim16                = irq_channel<21>;    /**< TIM16 global interrupt                                 */
using tim17                = irq_channel<22>;    /**< TIM17 global interrupt                                 */
using i2c1                 = irq_channel<23>;    /**< I2C1 global interrupt                                  */
using i2c2                 = irq_channel<24>;    /**< I2C2 global interrupt                                  */
using spi1                 = irq_channel<25>;    /**< SPI1_global_interrupt                                  */
using spi2                 = irq_channel<26>;    /**< SPI2 global interrupt                                  */
using usart1               = irq_channel<27>;    /**< USART1 global interrupt                                */
using usart2               = irq_channel<28>;    /**< USART2 global interrupt                                */
using usart3_4             = irq_channel<29>;    /**< USART3 and USART4 global interrupt                     */
using cec_can              = irq_channel<30>;    /**< CEC and CAN global interrupt                           */
using usb                  = irq_channel<31>;    /**< USB global interrupt                                   */

static constexpr int numof_interrupt_channels = 32

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
