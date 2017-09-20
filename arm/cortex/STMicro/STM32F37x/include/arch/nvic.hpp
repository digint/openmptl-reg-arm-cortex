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
//  Import from CMSIS-SVD: "STMicro/STM32F37x.svd"
//
//  name: STM32F37x
//  version: 1.3
//  description: STM32F37x
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

using wwdg          = irq_channel< 0>;    /**< Window Watchdog interrupt                                          */
using pvd           = irq_channel< 1>;    /**< Power voltage detector through EXTI line detection interrupt       */
using tamp          = irq_channel< 2>;    /**< Tamper and timestamp through EXTI19 line                           */
using rtc_wkup      = irq_channel< 3>;    /**< RTC                                                                */
using flash         = irq_channel< 4>;    /**< Flash global interrupt                                             */
using rcc           = irq_channel< 5>;    /**< RCC global interrupt                                               */
using exti0         = irq_channel< 6>;    /**< EXTI Line 0 interrupt                                              */
using exti1         = irq_channel< 7>;    /**< EXTI Line1 interrupt                                               */
using exti2_ri      = irq_channel< 8>;    /**< EXTI Line 2 and routing interface interrupt                        */
using exti3         = irq_channel< 9>;    /**< EXTI Line1 interrupt                                               */
using exti4         = irq_channel<10>;    /**< EXTI Line4 interrupt                                               */
using dma1_ch1      = irq_channel<11>;    /**< DMA1 channel 1 interrupt                                           */
using dma1_ch2      = irq_channel<12>;    /**< DMA1 channel 2 interrupt                                           */
using dma1_ch3      = irq_channel<13>;    /**< DMA1 channel 3 interrupt                                           */
using dma1_ch4      = irq_channel<14>;    /**< DMA1 channel 4 interrupt                                           */
using dma1_ch5      = irq_channel<15>;    /**< DMA1 channel 5 interrupt                                           */
using dma1_ch6      = irq_channel<16>;    /**< DMA1 channel 6 interrupt                                           */
using dma1_ch7      = irq_channel<17>;    /**< DMA1 channel 7 interrupt                                           */
using adc1          = irq_channel<18>;    /**< ADC1 interrupt                                                     */
using can_tx        = irq_channel<19>;    /**< USB high priority/CAN_TX interrupt                                 */
using can_rxd       = irq_channel<20>;    /**< USB low priority/CAN_RXD interrupt                                 */
using can_rxi       = irq_channel<21>;    /**< CAN_RXI interrupt                                                  */
using can_sce       = irq_channel<22>;    /**< CAN_SCE interrupt                                                  */
using exti5_9       = irq_channel<23>;    /**< EXTI Line[9:5] interrupts                                          */
using tim15         = irq_channel<24>;    /**< Timer 15 global interrupt                                          */
using tim16         = irq_channel<25>;    /**< Timer 16 global interrupt                                          */
using tim17         = irq_channel<26>;    /**< Timer 17 global interrupt                                          */
using tim18_dac3    = irq_channel<27>;    /**< Timer 18 global interrupt/DAC3 underrun interrupt                  */
using tim2          = irq_channel<28>;    /**< Timer 2 global interrupt                                           */
using tim3          = irq_channel<29>;    /**< Timer 3 global interrupt                                           */
using tim4          = irq_channel<30>;    /**< Timer 4 global interrupt                                           */
using i2c1_ev       = irq_channel<31>;    /**< I2C1_EV global interrupt/EXTI Line[3:2] interrupts                 */
using i2c1_er       = irq_channel<32>;    /**< I2C1_ER                                                            */
using i2c2_ev       = irq_channel<33>;    /**< I2C2_EV global interrupt/EXTI Line[4:2] interrupts                 */
using i2c2_er       = irq_channel<34>;    /**< I2C2_ER                                                            */
using spi1          = irq_channel<35>;    /**< SPI1 global interrupt                                              */
using spi2          = irq_channel<36>;    /**< SPI2 global interrupt                                              */
using usart1        = irq_channel<37>;    /**< USART1 global interrupt/EXTI25 (USART1 wakeup event)               */
using usart2        = irq_channel<38>;    /**< USART2 global interrupt/EXTI26 (USART1 wakeup event)               */
using usart3        = irq_channel<39>;    /**< USART3 global interrupt/EXTI28 (USART1 wakeup event)               */
using exti15_10     = irq_channel<40>;    /**< EXTI Line[15:10] interrupts                                        */
using rtc_alarm_it  = irq_channel<41>;    /**< RTC alarm interrupt                                                */
using cec           = irq_channel<42>;    /**< CEC interrupt                                                      */
using tim12         = irq_channel<43>;    /**< Timer 12 global interrupt                                          */
using tim13         = irq_channel<44>;    /**< Timer 13 global interrupt                                          */
using tim14         = irq_channel<45>;    /**< Timer 14 global interrupt                                          */
using tim5          = irq_channel<50>;    /**< Timer 5 global interrupt                                           */
using spi3          = irq_channel<51>;    /**< SPI3 global interrupt                                              */
using tim6_dac1     = irq_channel<54>;    /**< TIM6 global, DAC1 Cahnnel1 and Cahnnel2 underrun error Interrupts  */
using tim7          = irq_channel<55>;    /**< Timer 7 global interrupt                                           */
using adc_sd1       = irq_channel<61>;    /**< ADC sigma delta 1 (SDADC1) global interrupt                        */
using adc_sd2       = irq_channel<62>;    /**< ADC sigma delta 2 (SDADC2) global interrupt                        */
using adc_sd3       = irq_channel<63>;    /**< ADC sigma delta 3 (SDADC3) global interrupt                        */
using comp1_2       = irq_channel<64>;    /**< Comparator 1/comparator 2 global interrupts (EXTI21/EXTI22)        */
using usb_hp        = irq_channel<74>;    /**< USB high priority interrupt                                        */
using usb_lp        = irq_channel<75>;    /**< USB low priority interrupt                                         */
using usb_wakeup    = irq_channel<76>;    /**< USB wakeup interrupt                                               */
using tim19         = irq_channel<78>;    /**< Timer 19 global interrupt                                          */
using fpu           = irq_channel<81>;    /**< Floating point unit interrupt                                      */

static constexpr int numof_interrupt_channels = 82

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
