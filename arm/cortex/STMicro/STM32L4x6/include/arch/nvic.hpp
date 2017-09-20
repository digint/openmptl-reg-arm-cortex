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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
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

using wwdg                = irq_channel< 0>;    /**< Window Watchdog interrupt                                            */
using pvd                 = irq_channel< 1>;    /**< PVD through EXTI line detection                                      */
using tamp_stamp          = irq_channel< 2>;    /**< Tamper and TimeStamp interrupts                                      */
using rtc_wkup            = irq_channel< 3>;    /**< RTC Tamper or TimeStamp /CSS on LSE through EXTI line 19 interrupts  */
using flash               = irq_channel< 4>;    /**< Flash global interrupt                                               */
using rcc                 = irq_channel< 5>;    /**< RCC global interrupt                                                 */
using exti0               = irq_channel< 6>;    /**< EXTI Line 0 interrupt                                                */
using exti1               = irq_channel< 7>;    /**< EXTI Line 1 interrupt                                                */
using exti2               = irq_channel< 8>;    /**< EXTI Line 2 interrupt                                                */
using exti3               = irq_channel< 9>;    /**< EXTI Line 3 interrupt                                                */
using exti4               = irq_channel<10>;    /**< EXTI Line4 interrupt                                                 */
using dma1_channel1       = irq_channel<11>;    /**< DMA1 Channel1 global interrupt                                       */
using dma1_channel2       = irq_channel<12>;    /**< DMA1 Channel2 global interrupt                                       */
using dma1_channel3       = irq_channel<13>;    /**< DMA1 Channel3 interrupt                                              */
using dma1_channel4       = irq_channel<14>;    /**< DMA1 Channel4 interrupt                                              */
using dma1_channel5       = irq_channel<15>;    /**< DMA1 Channel5 interrupt                                              */
using dma1_channel6       = irq_channel<16>;    /**< DMA1 Channel6 interrupt                                              */
using dma1_channel7       = irq_channel<17>;    /**< DMA1 Channel 7 interrupt                                             */
using adc1_2              = irq_channel<18>;    /**< ADC1 and ADC2 global interrupt                                       */
using can1_tx             = irq_channel<19>;    /**< CAN1 TX interrupts                                                   */
using can1_rx0            = irq_channel<20>;    /**< CAN1 RX0 interrupts                                                  */
using can1_rx1            = irq_channel<21>;    /**< CAN1 RX1 interrupts                                                  */
using can1_sce            = irq_channel<22>;    /**< CAN1 SCE interrupt                                                   */
using exti9_5             = irq_channel<23>;    /**< EXTI Line5 to Line9 interrupts                                       */
using tim15               = irq_channel<24>;    /**< Timer 15 global interrupt                                            */
using tim16               = irq_channel<25>;    /**< Timer 16 global interrupt                                            */
using tim1_trg_com_tim17  = irq_channel<26>;    /**< TIM1 Trigger and Commutation interrupts and TIM17 global interrupt   */
using tim1_cc             = irq_channel<27>;    /**< TIM1 Capture Compare interrupt                                       */
using tim2                = irq_channel<28>;    /**< TIM2 global interrupt                                                */
using tim3                = irq_channel<29>;    /**< TIM3 global interrupt                                                */
using tim4                = irq_channel<30>;    /**< TIM4 global interrupt                                                */
using i2c1_ev             = irq_channel<31>;    /**< I2C1 event interrupt                                                 */
using i2c1_er             = irq_channel<32>;    /**< I2C1 error interrupt                                                 */
using i2c2_ev             = irq_channel<33>;    /**< I2C2 event interrupt                                                 */
using i2c2_er             = irq_channel<34>;    /**< I2C2 error interrupt                                                 */
using spi1                = irq_channel<35>;    /**< SPI1 global interrupt                                                */
using spi2                = irq_channel<36>;    /**< SPI2 global interrupt                                                */
using usart1              = irq_channel<37>;    /**< USART1 global interrupt                                              */
using usart2              = irq_channel<38>;    /**< USART2 global interrupt                                              */
using usart3              = irq_channel<39>;    /**< USART3 global interrupt                                              */
using exti15_10           = irq_channel<40>;    /**< EXTI Lines 10 to 15 interrupts                                       */
using rtc_alarm           = irq_channel<41>;    /**< RTC alarms through EXTI line 18 interrupts                           */
using dfsdm3              = irq_channel<42>;    /**< SD Filter 3 global Interrupt                                         */
using tim8_brk            = irq_channel<43>;    /**< TIM8 Break Interrupt                                                 */
using tim8                = irq_channel<44>;    /**< TIM8 Update Interrupt                                                */
using tim8_trg_com        = irq_channel<45>;    /**< TIM8 Trigger and Commutation Interrupt                               */
using tim8_cc             = irq_channel<46>;    /**< TIM8 Capture Compare Interrupt                                       */
using adc3                = irq_channel<47>;    /**< ADC3 global Interrupt                                                */
using fmc                 = irq_channel<48>;    /**< FMC global Interrupt                                                 */
using sdmmc               = irq_channel<49>;    /**< SDMMC global Interrupt                                               */
using tim5                = irq_channel<50>;    /**< TIM5 global Interrupt                                                */
using spi3                = irq_channel<51>;    /**< SPI3 global Interrupt                                                */
using uart4               = irq_channel<52>;    /**< UART4 global Interrupt                                               */
using uart5               = irq_channel<53>;    /**< UART5 global Interrupt                                               */
using tim6_dac            = irq_channel<54>;    /**< TIM6 global and DAC1 and 2 underrun error interrupts                 */
using tim7                = irq_channel<55>;    /**< TIM7 global interrupt                                                */
using dma2_channel1       = irq_channel<56>;    /**< DMA2 Channel 1 global Interrupt                                      */
using dma2_channel2       = irq_channel<57>;    /**< DMA2 Channel 2 global Interrupt                                      */
using dma2_channel3       = irq_channel<58>;    /**< DMA2 Channel 3 global Interrupt                                      */
using dma2_channel4       = irq_channel<59>;    /**< DMA2 Channel 4 global Interrupt                                      */
using dma2_channel5       = irq_channel<60>;    /**< DMA2 Channel 5 global Interrupt                                      */
using dfsdm0              = irq_channel<61>;    /**< SD Filter 0 global Interrupt                                         */
using dfsdm1              = irq_channel<62>;    /**< SD Filter 1 global Interrupt                                         */
using dfsdm2              = irq_channel<63>;    /**< SD Filter 2 global Interrupt                                         */
using comp                = irq_channel<64>;    /**< COMP1 and COMP2 interrupts                                           */
using lptim1              = irq_channel<65>;    /**< LP TIM1 interrupt                                                    */
using lptim2              = irq_channel<66>;    /**< LP TIM2 interrupt                                                    */
using otg_fs              = irq_channel<67>;    /**< USB OTG FS global Interrupt                                          */
using dma2_channel6       = irq_channel<68>;    /**< DMA2 Channel 6 global Interrupt                                      */
using dma2_channel7       = irq_channel<69>;    /**< DMA2 Channel 7 global Interrupt                                      */
using quadspi             = irq_channel<71>;    /**< Quad SPI global interrupt                                            */
using i2c3_ev             = irq_channel<72>;    /**< I2C3 event interrupt                                                 */
using i2c3_er             = irq_channel<73>;    /**< I2C3 error interrupt                                                 */
using sai1                = irq_channel<74>;    /**< SAI1 global interrupt                                                */
using sai2                = irq_channel<75>;    /**< SAI2 global interrupt                                                */
using swpmi1              = irq_channel<76>;    /**< SWPMI1 global interrupt                                              */
using tsc                 = irq_channel<77>;    /**< TSC global interrupt                                                 */
using lcd                 = irq_channel<78>;    /**< LCD global interrupt                                                 */
using rng                 = irq_channel<79>;    /**< RNG global interrupt                                                 */

static constexpr int numof_interrupt_channels = 80

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
