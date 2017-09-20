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
//  Import from CMSIS-SVD: "Freescale/MK20F12.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK20F12
//  series: Kinetis_K
//  version: 1.6
//  description: MK20F12 Freescale Microcontroller
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
using ftfe                      = irq_channel<18>;    
using read_collision            = irq_channel<19>;    
using lvd_lvw                   = irq_channel<20>;    
using llw                       = irq_channel<21>;    
using watchdog                  = irq_channel<22>;    
using rng                       = irq_channel<23>;    
using i2c0                      = irq_channel<24>;    
using i2c1                      = irq_channel<25>;    
using spi0                      = irq_channel<26>;    
using spi1                      = irq_channel<27>;    
using spi2                      = irq_channel<28>;    
using can0_ored_message_buffer  = irq_channel<29>;    
using can0_bus_off              = irq_channel<30>;    
using can0_error                = irq_channel<31>;    
using can0_tx_warning           = irq_channel<32>;    
using can0_rx_warning           = irq_channel<33>;    
using can0_wake_up              = irq_channel<34>;    
using i2s0_tx                   = irq_channel<35>;    
using i2s0_rx                   = irq_channel<36>;    
using can1_ored_message_buffer  = irq_channel<37>;    
using can1_bus_off              = irq_channel<38>;    
using can1_error                = irq_channel<39>;    
using can1_tx_warning           = irq_channel<40>;    
using can1_rx_warning           = irq_channel<41>;    
using can1_wake_up              = irq_channel<42>;    
using uart0_lon                 = irq_channel<44>;    
using uart0_rx_tx               = irq_channel<45>;    
using uart0_err                 = irq_channel<46>;    
using uart1_rx_tx               = irq_channel<47>;    
using uart1_err                 = irq_channel<48>;    
using uart2_rx_tx               = irq_channel<49>;    
using uart2_err                 = irq_channel<50>;    
using uart3_rx_tx               = irq_channel<51>;    
using uart3_err                 = irq_channel<52>;    
using uart4_rx_tx               = irq_channel<53>;    
using uart4_err                 = irq_channel<54>;    
using uart5_rx_tx               = irq_channel<55>;    
using uart5_err                 = irq_channel<56>;    
using adc0                      = irq_channel<57>;    
using adc1                      = irq_channel<58>;    
using cmp0                      = irq_channel<59>;    
using cmp1                      = irq_channel<60>;    
using cmp2                      = irq_channel<61>;    
using ftm0                      = irq_channel<62>;    
using ftm1                      = irq_channel<63>;    
using ftm2                      = irq_channel<64>;    
using cmt                       = irq_channel<65>;    
using rtc                       = irq_channel<66>;    
using rtc_seconds               = irq_channel<67>;    
using pit0                      = irq_channel<68>;    
using pit1                      = irq_channel<69>;    
using pit2                      = irq_channel<70>;    
using pit3                      = irq_channel<71>;    
using pdb0                      = irq_channel<72>;    
using usb0                      = irq_channel<73>;    
using usbdcd                    = irq_channel<74>;    
using sdhc                      = irq_channel<80>;    
using dac0                      = irq_channel<81>;    
using dac1                      = irq_channel<82>;    
using tsi0                      = irq_channel<83>;    
using lptimer                   = irq_channel<85>;    
using porta                     = irq_channel<87>;    
using portb                     = irq_channel<88>;    
using portc                     = irq_channel<89>;    
using portd                     = irq_channel<90>;    
using porte                     = irq_channel<91>;    
using portf                     = irq_channel<92>;    
using nfc                       = irq_channel<95>;    
using usbhs                     = irq_channel<96>;    
using cmp3                      = irq_channel<98>;    
using ftm3                      = irq_channel<101>;    
using adc2                      = irq_channel<102>;    
using adc3                      = irq_channel<103>;    
using i2s1_tx                   = irq_channel<104>;    
using i2s1_rx                   = irq_channel<105>;    

static constexpr int numof_interrupt_channels = 106

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
