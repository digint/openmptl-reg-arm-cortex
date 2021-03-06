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
//  Import from CMSIS-SVD: "STMicro/STM32F031x.svd"
//
//  name: STM32F031x
//  version: 1.0
//  description: STM32F031x
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

using wwdg         = irq_channel< 0>;    /**< Window Watchdog interrupt         */
using pvd          = irq_channel< 1>;    /**< PVD through EXTI line detection   */
using rtc          = irq_channel< 2>;    /**< RTC global interrupt              */
using flash        = irq_channel< 3>;    /**< Flash global interrupt            */
using rcc          = irq_channel< 4>;    /**< RCC global interrupt              */
using exti0_1      = irq_channel< 5>;    /**< EXTI Line[1:0] interrupts         */
using exti2_3      = irq_channel< 6>;    /**< EXTI Line[3:2] interrupts         */
using exti4_15     = irq_channel< 7>;    /**< EXTI Line15 and EXTI4 interrupts  */
using tsc          = irq_channel< 8>;    /**< Touch sensing interrupt           */
using dma_ch1      = irq_channel< 9>;    /**< DMA channel 1 interrupt           */
using dma_ch2_3    = irq_channel<10>;    /**< DMA channel 2 and 3 interrupts    */
using dma_ch4_5    = irq_channel<11>;    /**< DMA channel 4 and 5 interrupts    */
using adc_comp     = irq_channel<12>;    /**< ADC and comparator 1 and 2        */
using tim1_brk_up  = irq_channel<13>;    /**< TIM1 Break, update, trigger and   */
using tim1_cc      = irq_channel<14>;    /**< TIM1 Capture Compare interrupt    */
using tim2         = irq_channel<15>;    /**< TIM2 global interrupt             */
using tim3         = irq_channel<16>;    /**< TIM3 global interrupt             */
using tim14        = irq_channel<19>;    /**< TIM14 global interrupt            */
using tim16        = irq_channel<21>;    /**< TIM16 global interrupt            */
using tim17        = irq_channel<22>;    /**< TIM17 global interrupt            */
using i2c1         = irq_channel<23>;    /**< I2C1 global interrupt             */
using spi1         = irq_channel<25>;    /**< SPI1_global_interrupt             */
using usart1       = irq_channel<27>;    /**< USART1 global interrupt           */
using cec          = irq_channel<30>;    /**< CEC global interrupt              */

static constexpr int numof_interrupt_channels = 31

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
