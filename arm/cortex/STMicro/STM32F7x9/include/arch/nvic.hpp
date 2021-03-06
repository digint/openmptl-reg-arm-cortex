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
//  Import from CMSIS-SVD: "STMicro/STM32F7x9.svd"
//
//  name: STM32F7x9
//  version: 1.0
//  description: STM32F7x9
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
using tamp_stamp          = irq_channel< 2>;    /**< Tamper and TimeStamp interrupts through the EXTI line                */
using rtc_wkup            = irq_channel< 3>;    /**< RTC Tamper or TimeStamp /CSS on LSE through EXTI line 19 interrupts  */
using flash               = irq_channel< 4>;    /**< Flash global interrupt                                               */
using rcc                 = irq_channel< 5>;    /**< RCC global interrupt                                                 */
using exti0               = irq_channel< 6>;    /**< EXTI Line0 interrupt                                                 */
using exti1               = irq_channel< 7>;    /**< EXTI Line1 interrupt                                                 */
using exti2               = irq_channel< 8>;    /**< EXTI Line2 interrupt                                                 */
using exti3               = irq_channel< 9>;    /**< EXTI Line3 interrupt                                                 */
using exti4               = irq_channel<10>;    /**< EXTI Line4 interrupt                                                 */
using dma1_stream0        = irq_channel<11>;    /**< DMA1 Stream0 global interrupt                                        */
using dma1_stream1        = irq_channel<12>;    /**< DMA1 Stream1 global interrupt                                        */
using dma1_stream2        = irq_channel<13>;    /**< DMA1 Stream2 global interrupt                                        */
using dma1_stream3        = irq_channel<14>;    /**< DMA1 Stream3 global interrupt                                        */
using dma1_stream4        = irq_channel<15>;    /**< DMA1 Stream4 global interrupt                                        */
using dma1_stream5        = irq_channel<16>;    /**< DMA1 Stream5 global interrupt                                        */
using dma1_stream6        = irq_channel<17>;    /**< DMA1 Stream6 global interrupt                                        */
using adc                 = irq_channel<18>;    /**< ADC1 global interrupt                                                */
using can1_tx             = irq_channel<19>;    /**< CAN1 TX interrupts                                                   */
using can1_rx0            = irq_channel<20>;    /**< CAN1 RX0 interrupts                                                  */
using can1_rx1            = irq_channel<21>;    /**< CAN1 RX1 interrupts                                                  */
using can1_sce            = irq_channel<22>;    /**< CAN1 SCE interrupt                                                   */
using exti9_5             = irq_channel<23>;    /**< EXTI Line[9:5] interrupts                                            */
using tim1_brk_tim9       = irq_channel<24>;    /**< TIM1 Break interrupt and TIM9 global interrupt                       */
using tim1_trg_com_tim11  = irq_channel<26>;    /**< TIM1 Trigger and Commutation interrupts and TIM11 global interrupt   */
using tim2                = irq_channel<28>;    /**< TIM2 global interrupt                                                */
using tim3                = irq_channel<29>;    /**< TIM3 global interrupt                                                */
using tim4                = irq_channel<30>;    /**< TIM4 global interrupt                                                */
using i2c1_ev             = irq_channel<31>;    /**< I2C1 event interrupt                                                 */
using i2c1_er             = irq_channel<32>;    /**< I2C1 error interrupt                                                 */
using spi1                = irq_channel<35>;    /**< SPI1 global interrupt                                                */
using spi2                = irq_channel<36>;    /**< SPI2 global interrupt                                                */
using usart1              = irq_channel<37>;    /**< USART1 global interrupt                                              */
using usart2              = irq_channel<38>;    /**< USART2 global interrupt                                              */
using usart3              = irq_channel<39>;    /**< USART3 global interrupt                                              */
using exti15_10           = irq_channel<40>;    /**< EXTI Line[15:10] interrupts                                          */
using rtc_alarm           = irq_channel<41>;    /**< RTC alarms through EXTI line 18 interrupts                           */
using otg_fs_wkup         = irq_channel<42>;    /**< USB On-The-Go FS Wakeup through EXTI line interrupt                  */
using tim8_brk_tim12      = irq_channel<43>;    /**< TIM8 Break interrupt and TIM12 global interrupt                      */
using tim8_up_tim13       = irq_channel<44>;    /**< TIM8 Update interrupt and TIM13 global interrupt                     */
using tim8_trg_com_tim14  = irq_channel<45>;    /**< TIM8 Trigger and Commutation interrupts and TIM14 global interrupt   */
using tim8_cc             = irq_channel<46>;    /**< TIM8 Capture Compare interrupt                                       */
using dma1_stream7        = irq_channel<47>;    /**< DMA1 Stream7 global interrupt                                        */
using fmc                 = irq_channel<48>;    /**< FMC global interrupt                                                 */
using sdio                = irq_channel<49>;    /**< SDIO global interrupt                                                */
using tim5                = irq_channel<50>;    /**< TIM5 global interrupt                                                */
using spi3                = irq_channel<51>;    /**< SPI3 global interrupt                                                */
using uart5               = irq_channel<53>;    /**< UART5 global interrupt                                               */
using tim6_dac            = irq_channel<54>;    /**< TIM6 global interrupt, DAC1 and DAC2 underrun error interrupt        */
using tim7                = irq_channel<55>;    /**< TIM7 global interrupt                                                */
using dma2_stream0        = irq_channel<56>;    /**< DMA2 Stream0 global interrupt                                        */
using dma2_stream1        = irq_channel<57>;    /**< DMA2 Stream1 global interrupt                                        */
using dma2_stream2        = irq_channel<58>;    /**< DMA2 Stream2 global interrupt                                        */
using dma2_stream3        = irq_channel<59>;    /**< DMA2 Stream3 global interrupt                                        */
using dma2_stream4        = irq_channel<60>;    /**< DMA2 Stream4 global interrupt                                        */
using can2_tx             = irq_channel<63>;    /**< CAN2 TX interrupts                                                   */
using can2_rx0            = irq_channel<64>;    /**< CAN2 RX0 interrupts                                                  */
using can2_rx1            = irq_channel<65>;    /**< CAN2 RX1 interrupts                                                  */
using can2_sce            = irq_channel<66>;    /**< CAN2 SCE interrupt                                                   */
using otg_fs              = irq_channel<67>;    /**< USB On The Go FS global interrupt                                    */
using dma2_stream5        = irq_channel<68>;    /**< DMA2 Stream5 global interrupt                                        */
using dma2_stream6        = irq_channel<69>;    /**< DMA2 Stream6 global interrupt                                        */
using dma2_stream7        = irq_channel<70>;    /**< DMA2 Stream7 global interrupt                                        */
using otg_hs_ep1_out      = irq_channel<74>;    /**< USB On The Go HS End Point 1 Out global interrupt                    */
using otg_hs_ep1_in       = irq_channel<75>;    /**< USB On The Go HS End Point 1 In global interrupt                     */
using otg_hs_wkup         = irq_channel<76>;    /**< USB On The Go HS Wakeup through EXTI interrupt                       */
using otg_hs              = irq_channel<77>;    /**< USB On The Go HS global interrupt                                    */
using dcmi                = irq_channel<78>;    /**< DCMI global interrupt                                                */
using hash_rng            = irq_channel<80>;    /**< Hash and Rng global interrupt                                        */
using uart8               = irq_channel<83>;    /**< UART 8 global interrupt                                              */
using spi4                = irq_channel<84>;    /**< SPI 4 global interrupt                                               */
using spi5                = irq_channel<85>;    /**< SPI 5 global interrupt                                               */
using spi6                = irq_channel<86>;    /**< SPI 6 global interrupt                                               */
using sai1                = irq_channel<87>;    /**< SAI1 global interrupt                                                */
using lcd_tft             = irq_channel<88>;    /**< LTDC global interrupt                                                */
using dma2d               = irq_channel<90>;    /**< DMA2D global interrupt                                               */
using dsihost             = irq_channel<98>;    /**< DSI host global interrupt                                            */
using sdmmc2              = irq_channel<103>;    /**< SDMMC2 global interrupt                                              */
using can3_tx             = irq_channel<104>;    /**< CAN3 TX interrupt                                                    */
using can3_rx0            = irq_channel<105>;    /**< CAN3 RX0 interrupt                                                   */
using can3_rx1            = irq_channel<106>;    /**< CAN3 RX1 interrupt                                                   */
using can3_sce            = irq_channel<107>;    /**< CAN3 SCE interrupt                                                   */
using jpeg                = irq_channel<108>;    /**< JPEG global interrupt                                                */
using mdios               = irq_channel<109>;    /**< MDIO slave global interrupt                                          */

static constexpr int numof_interrupt_channels = 110

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
