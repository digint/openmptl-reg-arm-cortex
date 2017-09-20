/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKV58F24.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV58F24
//  series: Kinetis_V
//  version: 1.6
//  description: MKV58F24 Freescale Microcontroller
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

using dma0_dma16                = irq_channel< 0>;    
using dma1_dma17                = irq_channel< 1>;    
using dma2_dma18                = irq_channel< 2>;    
using dma3_dma19                = irq_channel< 3>;    
using dma4_dma20                = irq_channel< 4>;    
using dma5_dma21                = irq_channel< 5>;    
using dma6_dma22                = irq_channel< 6>;    
using dma7_dma23                = irq_channel< 7>;    
using dma8_dma24                = irq_channel< 8>;    
using dma9_dma25                = irq_channel< 9>;    
using dma10_dma26               = irq_channel<10>;    
using dma11_dma27               = irq_channel<11>;    
using dma12_dma28               = irq_channel<12>;    
using dma13_dma29               = irq_channel<13>;    
using dma14_dma30               = irq_channel<14>;    
using dma15_dma31               = irq_channel<15>;    
using dma_error                 = irq_channel<16>;    
using mcm                       = irq_channel<17>;    
using ftfe                      = irq_channel<18>;    
using read_collision            = irq_channel<19>;    
using pmc                       = irq_channel<20>;    
using llwu                      = irq_channel<21>;    
using wdog_ewm                  = irq_channel<22>;    
using trng0                     = irq_channel<23>;    
using i2c0                      = irq_channel<24>;    
using i2c1                      = irq_channel<25>;    
using spi0                      = irq_channel<26>;    
using spi1                      = irq_channel<27>;    
using uart5_rx_tx               = irq_channel<28>;    
using uart5_err                 = irq_channel<29>;    
using uart0_rx_tx               = irq_channel<31>;    
using uart0_err                 = irq_channel<32>;    
using uart1_rx_tx               = irq_channel<33>;    
using uart1_err                 = irq_channel<34>;    
using uart2_rx_tx               = irq_channel<35>;    
using uart2_err                 = irq_channel<36>;    
using adc0                      = irq_channel<37>;    
using hsadc_err                 = irq_channel<38>;    
using hsadc0_cca                = irq_channel<39>;    
using cmp0                      = irq_channel<40>;    
using cmp1                      = irq_channel<41>;    
using ftm0                      = irq_channel<42>;    
using ftm1                      = irq_channel<43>;    
using uart3_rx_tx               = irq_channel<44>;    
using uart3_err                 = irq_channel<45>;    
using uart4_rx_tx               = irq_channel<46>;    
using uart4_err                 = irq_channel<47>;    
using pit0                      = irq_channel<48>;    
using pit1                      = irq_channel<49>;    
using pit2                      = irq_channel<50>;    
using pit3                      = irq_channel<51>;    
using pdb0                      = irq_channel<52>;    
using ftm2                      = irq_channel<53>;    
using xbara                     = irq_channel<54>;    
using pdb1                      = irq_channel<55>;    
using dac0                      = irq_channel<56>;    
using mcg                       = irq_channel<57>;    
using lptmr0                    = irq_channel<58>;    
using porta                     = irq_channel<59>;    
using portb                     = irq_channel<60>;    
using portc                     = irq_channel<61>;    
using portd                     = irq_channel<62>;    
using porte                     = irq_channel<63>;    
using spi2                      = irq_channel<65>;    
using enc_compare               = irq_channel<66>;    
using enc_home                  = irq_channel<67>;    
using enc_wdog_sab              = irq_channel<68>;    
using enc_index                 = irq_channel<69>;    
using cmp2                      = irq_channel<70>;    
using ftm3                      = irq_channel<71>;    
using hsadc0_ccb                = irq_channel<73>;    
using hsadc1_cca                = irq_channel<74>;    
using can0_ored_message_buffer  = irq_channel<75>;    
using can0_bus_off              = irq_channel<76>;    
using can0_error                = irq_channel<77>;    
using can0_tx_warning           = irq_channel<78>;    
using can0_rx_warning           = irq_channel<79>;    
using can0_wake_up              = irq_channel<80>;    
using pwm0_cmp0                 = irq_channel<81>;    
using pwm0_reload0              = irq_channel<82>;    
using pwm0_cmp1                 = irq_channel<83>;    
using pwm0_reload1              = irq_channel<84>;    
using pwm0_cmp2                 = irq_channel<85>;    
using pwm0_reload2              = irq_channel<86>;    
using pwm0_cmp3                 = irq_channel<87>;    
using pwm0_reload3              = irq_channel<88>;    
using pwm0_cap                  = irq_channel<89>;    
using pwm0_rerr                 = irq_channel<90>;    
using pwm0_fault                = irq_channel<91>;    
using cmp3                      = irq_channel<92>;    
using hsadc1_ccb                = irq_channel<93>;    
using can1_ored_message_buffer  = irq_channel<94>;    
using can1_bus_off              = irq_channel<95>;    
using can1_error                = irq_channel<96>;    
using can1_tx_warning           = irq_channel<97>;    
using can1_rx_warning           = irq_channel<98>;    
using can1_wake_up              = irq_channel<99>;    
using enet_1588_timer           = irq_channel<100>;    
using enet_transmit             = irq_channel<101>;    
using enet_receive              = irq_channel<102>;    
using enet_error                = irq_channel<103>;    
using pwm1_cmp0                 = irq_channel<104>;    
using pwm1_reload0              = irq_channel<105>;    
using pwm1_cmp1                 = irq_channel<106>;    
using pwm1_reload1              = irq_channel<107>;    
using pwm1_cmp2                 = irq_channel<108>;    
using pwm1_reload2              = irq_channel<109>;    
using pwm1_cmp3                 = irq_channel<110>;    
using pwm1_reload3              = irq_channel<111>;    
using pwm1_cap                  = irq_channel<112>;    
using pwm1_rerr                 = irq_channel<113>;    
using pwm1_fault                = irq_channel<114>;    
using can2_ored_message_buffer  = irq_channel<115>;    
using can2_bus_off              = irq_channel<116>;    
using can2_error                = irq_channel<117>;    
using can2_tx_warning           = irq_channel<118>;    
using can2_rx_warning           = irq_channel<119>;    
using can2_wake_up              = irq_channel<120>;    

static constexpr int numof_interrupt_channels = 121

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
