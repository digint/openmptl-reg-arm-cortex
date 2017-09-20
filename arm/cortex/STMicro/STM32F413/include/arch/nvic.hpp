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
//  Import from CMSIS-SVD: "STMicro/STM32F413.svd"
//
//  name: STM32F413
//  version: 1.0
//  description: STM32F413_v1r0
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

using wwdg                   = irq_channel< 0>;    /**< Window Watchdog interrupt                                           */
using pvd                    = irq_channel< 1>;    /**< PVD through EXTI line detection interrupt                           */
using tamp_stamp             = irq_channel< 2>;    /**< Tamper and TimeStamp interrupts through the EXTI line               */
using rtc_wkup               = irq_channel< 3>;    /**< RTC Wakeup interrupt through the EXTI line                          */
using flash                  = irq_channel< 4>;    /**< FLASH global interrupt                                              */
using rcc                    = irq_channel< 5>;    /**< RCC global interrupt                                                */
using exti0                  = irq_channel< 6>;    /**< EXTI Line0 interrupt                                                */
using exti1                  = irq_channel< 7>;    /**< EXTI Line1 interrupt                                                */
using exti2                  = irq_channel< 8>;    /**< EXTI Line2 interrupt                                                */
using exti3                  = irq_channel< 9>;    /**< EXTI Line3 interrupt                                                */
using exti4                  = irq_channel<10>;    /**< EXTI Line4 interrupt                                                */
using dma1_stream0           = irq_channel<11>;    /**< DMA1 Stream0 global interrupt                                       */
using dma1_stream1           = irq_channel<12>;    /**< DMA1 Stream1 global interrupt                                       */
using dma1_stream2           = irq_channel<13>;    /**< DMA1 Stream2 global interrupt                                       */
using dma1_stream3           = irq_channel<14>;    /**< DMA1 Stream3 global interrupt                                       */
using dma1_stream4           = irq_channel<15>;    /**< DMA1 Stream4 global interrupt                                       */
using dma1_stream5           = irq_channel<16>;    /**< DMA1 Stream5 global interrupt                                       */
using dma1_stream6           = irq_channel<17>;    /**< DMA1 Stream6 global interrupt                                       */
using adc                    = irq_channel<18>;    /**< ADC1 global interrupt                                               */
using can1_tx                = irq_channel<19>;    /**< CAN1 TX interrupts                                                  */
using can1_rx0               = irq_channel<20>;    /**< CAN1 RX0 interrupts                                                 */
using can1_rx1               = irq_channel<21>;    /**< CAN1 RX1 interrupts                                                 */
using can1_sce               = irq_channel<22>;    /**< CAN1 SCE interrupt                                                  */
using exti9_5                = irq_channel<23>;    /**< EXTI Line[9:5] interrupts                                           */
using tim1_brk_tim9          = irq_channel<24>;    /**< TIM1 Break interrupt and TIM9 global interrupt                      */
using tim1_up_tim10          = irq_channel<25>;    /**< TIM1 Update interrupt and TIM10 global interrupt                    */
using tim1_trg_com_tim11     = irq_channel<26>;    /**< TIM1 Trigger and Commutation interrupts and TIM11 global interrupt  */
using tim1_cc                = irq_channel<27>;    /**< TIM1 Capture Compare interrupt                                      */
using tim2                   = irq_channel<28>;    /**< TIM2 global interrupt                                               */
using tim3                   = irq_channel<29>;    /**< TIM3 global interrupt                                               */
using tim4                   = irq_channel<30>;    /**< TIM4 global interrupt                                               */
using i2c1_evt               = irq_channel<31>;    /**< I2C1 event interrupt                                                */
using i2c1_err               = irq_channel<32>;    /**< I2C1 error interrupt                                                */
using i2c2_evt               = irq_channel<33>;    /**< I2C2 event interrupt                                                */
using i2c2_err               = irq_channel<34>;    /**< I2C2 error interrupt                                                */
using spi1                   = irq_channel<35>;    /**< SPI1 global interrupt                                               */
using spi2                   = irq_channel<36>;    /**< SPI2 global interrupt                                               */
using usart1                 = irq_channel<37>;    /**< USART1 global interrupt                                             */
using usart2                 = irq_channel<38>;    /**< USART2 global interrupt                                             */
using usart3                 = irq_channel<39>;    /**< USART3 global interrupt                                             */
using exti15_10              = irq_channel<40>;    /**< EXTI Line[15:10] interrupts                                         */
using exti17_rtc_alarm       = irq_channel<41>;    /**< RTC Alarms (A and B) through EXTI line interrupt                    */
using exti18_otg_fs_wkup     = irq_channel<42>;    /**< USB On-The-Go FS Wakeup through EXTI line interrupt                 */
using tim8_brk_tim12         = irq_channel<43>;    /**< Timer 12 global interrupt                                           */
using tim8_up_tim13          = irq_channel<44>;    /**< Timer 13 global interrupt                                           */
using tim8_trg_com_tim14     = irq_channel<45>;    /**< Timer 14 global interrupt                                           */
using tim8_cc                = irq_channel<46>;    /**< TIM8 Cap/Com interrupt                                              */
using dma1_stream7           = irq_channel<47>;    /**< DMA1 global interrupt Channel 7                                     */
using fsmc                   = irq_channel<48>;    /**< FSMC global interrupt                                               */
using sdio                   = irq_channel<49>;    /**< SDIO global interrupt                                               */
using tim5                   = irq_channel<50>;    /**< TIM5 global interrupt                                               */
using spi3                   = irq_channel<51>;    /**< SPI3 global interrupt                                               */
using usart4                 = irq_channel<52>;    /**< UART 4 global interrupt                                             */
using uart5                  = irq_channel<53>;    /**< UART 5global interrupt                                              */
using tim6_glb_it_dac1_dac2  = irq_channel<54>;    /**< TIM6 global and DAC12 underrun interrupts                           */
using tim7                   = irq_channel<55>;    /**< TIM7 global interrupt                                               */
using dma2_stream0           = irq_channel<56>;    /**< DMA2 Stream0 global interrupt                                       */
using dma2_stream1           = irq_channel<57>;    /**< DMA2 Stream1 global interrupt                                       */
using dma2_stream2           = irq_channel<58>;    /**< DMA2 Stream2 global interrupt                                       */
using dma2_stream3           = irq_channel<59>;    /**< DMA2 Stream3 global interrupt                                       */
using dma2_stream4           = irq_channel<60>;    /**< DMA2 Stream4 global interrupt                                       */
using dfsdm1_flt0            = irq_channel<61>;    /**< SD filter0 global interrupt                                         */
using dfsdm1_flt1            = irq_channel<62>;    /**< SD filter1 global interrupt                                         */
using can2_tx                = irq_channel<63>;    /**< CAN2 TX interrupt                                                   */
using can2_rx0               = irq_channel<64>;    /**< BXCAN2 RX0 interrupt                                                */
using can2_rx1               = irq_channel<65>;    /**< BXCAN2 RX1 interrupt                                                */
using can2_sce               = irq_channel<66>;    /**< CAN2 SCE interrupt                                                  */
using otg_fs_usb             = irq_channel<67>;    /**< USB On The Go FS global interrupt                                   */
using dma2_stream5           = irq_channel<68>;    /**< DMA2 Stream5 global interrupt                                       */
using dma2_stream6           = irq_channel<69>;    /**< DMA2 Stream6 global interrupt                                       */
using dma2_stream7           = irq_channel<70>;    /**< DMA2 Stream7 global interrupt                                       */
using usart6                 = irq_channel<71>;    /**< USART6 global interrupt                                             */
using i2c3_ev                = irq_channel<72>;    /**< I2C3 event interrupt                                                */
using i2c3_er                = irq_channel<73>;    /**< I2C3 error interrupt                                                */
using can3_tx                = irq_channel<74>;    /**< CAN 3 TX interrupt                                                  */
using can3_rx0               = irq_channel<75>;    /**< BxCAN 3 RX0 interrupt                                               */
using can3_rx1               = irq_channel<76>;    /**< BxCAN 3 RX1 interrupt                                               */
using can3_sce               = irq_channel<77>;    /**< CAN 3 SCE interrupt                                                 */
using crypto                 = irq_channel<79>;    /**< AES global interrupt                                                */
using rng                    = irq_channel<80>;    /**< Rng global interrupt                                                */
using fpu                    = irq_channel<81>;    /**< FPU global interrupt                                                */
using usart7                 = irq_channel<82>;    /**< USART7 global interrupt                                             */
using usart8                 = irq_channel<83>;    /**< USART8 global interrupt                                             */
using spi4                   = irq_channel<84>;    /**< SPI4 global interrupt                                               */
using spi5                   = irq_channel<85>;    /**< SPI5 global interrupt                                               */
using sai1                   = irq_channel<87>;    /**< SAI1 global interrupt                                               */
using uart9                  = irq_channel<88>;    /**< UART9 global interrupt                                              */
using uart10                 = irq_channel<89>;    /**< UART10 global interrupt                                             */
using quadspi                = irq_channel<92>;    /**< Quad-SPI global interrupt                                           */
using i2cfmp1event           = irq_channel<95>;    /**< I2CFMP1 event interrupt                                             */
using i2cfmp1error           = irq_channel<96>;    /**< I2CFMP1 error interrupt                                             */
using lptim1_or_it_eit_23    = irq_channel<97>;    /**< LP Timer global interrupt or EXT1 interrupt line 23                 */
using dfsdm2_filter1         = irq_channel<98>;    /**< DFSDM2 SD filter 1 global interrupt                                 */
using dfsdm2_filter2         = irq_channel<99>;    /**< DFSDM2 SD filter 2 global interrupt                                 */
using dfsdm2_filter3         = irq_channel<100>;    /**< DFSDM2 SD filter 3 global interrupt                                 */
using dfsdm2_filter4         = irq_channel<101>;    /**< DFSDM2 SD filter 4 global interrupt                                 */

static constexpr int numof_interrupt_channels = 102

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
