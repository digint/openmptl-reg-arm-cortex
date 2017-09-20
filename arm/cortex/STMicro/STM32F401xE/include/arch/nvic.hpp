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
//  Import from CMSIS-SVD: "STMicro/STM32F401xE.svd"
//
//  name: STM32F401xE
//  version: 1.0
//  description: STM32F401xE
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

using pvd                 = irq_channel< 1>;    /**< PVD through EXTI line detection interrupt                           */
using tamp_stamp          = irq_channel< 2>;    /**< Tamper and TimeStamp interrupts through the EXTI line               */
using rtc_wkup            = irq_channel< 3>;    /**< RTC Wakeup interrupt through the EXTI line                          */
using flash               = irq_channel< 4>;    /**< FLASH global interrupt                                              */
using rcc                 = irq_channel< 5>;    /**< RCC global interrupt                                                */
using exti0               = irq_channel< 6>;    /**< EXTI Line0 interrupt                                                */
using exti1               = irq_channel< 7>;    /**< EXTI Line1 interrupt                                                */
using exti2               = irq_channel< 8>;    /**< EXTI Line2 interrupt                                                */
using exti3               = irq_channel< 9>;    /**< EXTI Line3 interrupt                                                */
using exti4               = irq_channel<10>;    /**< EXTI Line4 interrupt                                                */
using adc                 = irq_channel<18>;    /**< ADC1 global interrupt                                               */
using exti9_5             = irq_channel<23>;    /**< EXTI Line[9:5] interrupts                                           */
using tim1_brk_tim9       = irq_channel<24>;    /**< TIM1 Break interrupt and TIM9 global interrupt                      */
using tim1_up_tim10       = irq_channel<25>;    /**< TIM1 Update interrupt and TIM10 global interrupt                    */
using tim1_trg_com_tim11  = irq_channel<26>;    /**< TIM1 Trigger and Commutation interrupts and TIM11 global interrupt  */
using tim1_cc             = irq_channel<27>;    /**< TIM1 Capture Compare interrupt                                      */
using tim2                = irq_channel<28>;    /**< TIM2 global interrupt                                               */
using tim3                = irq_channel<29>;    /**< TIM3 global interrupt                                               */
using i2c1_ev             = irq_channel<31>;    /**< I2C1 event interrupt                                                */
using i2c1_er             = irq_channel<32>;    /**< I2C1 error interrupt                                                */
using i2c2_ev             = irq_channel<33>;    /**< I2C2 event interrupt                                                */
using i2c2_er             = irq_channel<34>;    /**< I2C2 error interrupt                                                */
using spi1                = irq_channel<35>;    /**< SPI1 global interrupt                                               */
using spi2                = irq_channel<36>;    /**< SPI2 global interrupt                                               */
using exti15_10           = irq_channel<40>;    /**< EXTI Line[15:10] interrupts                                         */
using rtc_alarm           = irq_channel<41>;    /**< RTC Alarms (A and B) through EXTI line interrupt                    */
using otg_fs_wkup         = irq_channel<42>;    /**< USB On-The-Go FS Wakeup through EXTI line interrupt                 */
using sdio                = irq_channel<49>;    /**< SDIO global interrupt                                               */
using spi3                = irq_channel<51>;    /**< SPI3 global interrupt                                               */
using otg_fs              = irq_channel<67>;    /**< USB On The Go FS global interrupt                                   */
using i2c3_ev             = irq_channel<72>;    /**< I2C3 event interrupt                                                */
using i2c3_er             = irq_channel<73>;    /**< I2C3 error interrupt                                                */
using fpu                 = irq_channel<81>;    /**< FPU interrupt                                                       */
using spi4                = irq_channel<84>;    /**< SPI4 global interrupt                                               */

static constexpr int numof_interrupt_channels = 85

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
