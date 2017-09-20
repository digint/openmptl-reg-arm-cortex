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
//  Import from CMSIS-SVD: "Freescale/MK61F15WS.svd"
//
//  name: MK61F15WS
//  version: 1.6
//  description: MK61F15WS Freescale Microcontroller
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

using int_dma0_dma16                = irq_channel< 0>;    
using int_dma1_dma17                = irq_channel< 1>;    
using int_dma2_dma18                = irq_channel< 2>;    
using int_dma3_dma19                = irq_channel< 3>;    
using int_dma4_dma20                = irq_channel< 4>;    
using int_dma5_dma21                = irq_channel< 5>;    
using int_dma6_dma22                = irq_channel< 6>;    
using int_dma7_dma23                = irq_channel< 7>;    
using int_dma8_dma24                = irq_channel< 8>;    
using int_dma9_dma25                = irq_channel< 9>;    
using int_dma10_dma26               = irq_channel<10>;    
using int_dma11_dma27               = irq_channel<11>;    
using int_dma12_dma28               = irq_channel<12>;    
using int_dma13_dma29               = irq_channel<13>;    
using int_dma14_dma30               = irq_channel<14>;    
using int_dma15_dma31               = irq_channel<15>;    
using int_dma_error                 = irq_channel<16>;    
using int_ftfe                      = irq_channel<18>;    
using int_read_collision            = irq_channel<19>;    
using int_lvd_lvw                   = irq_channel<20>;    
using int_llw                       = irq_channel<21>;    
using int_watchdog                  = irq_channel<22>;    
using int_rng                       = irq_channel<23>;    
using int_i2c0                      = irq_channel<24>;    
using int_i2c1                      = irq_channel<25>;    
using int_spi0                      = irq_channel<26>;    
using int_spi1                      = irq_channel<27>;    
using int_spi2                      = irq_channel<28>;    
using int_can0_ored_message_buffer  = irq_channel<29>;    
using int_can0_bus_off              = irq_channel<30>;    
using int_can0_error                = irq_channel<31>;    
using int_can0_tx_warning           = irq_channel<32>;    
using int_can0_rx_warning           = irq_channel<33>;    
using int_can0_wake_up              = irq_channel<34>;    
using int_i2s0_tx                   = irq_channel<35>;    
using int_i2s0_rx                   = irq_channel<36>;    
using int_can1_ored_message_buffer  = irq_channel<37>;    
using int_can1_bus_off              = irq_channel<38>;    
using int_can1_error                = irq_channel<39>;    
using int_can1_tx_warning           = irq_channel<40>;    
using int_can1_rx_warning           = irq_channel<41>;    
using int_can1_wake_up              = irq_channel<42>;    
using int_uart0_lon                 = irq_channel<44>;    
using int_uart0_rx_tx               = irq_channel<45>;    
using int_uart0_err                 = irq_channel<46>;    
using int_uart1_rx_tx               = irq_channel<47>;    
using int_uart1_err                 = irq_channel<48>;    
using int_uart2_rx_tx               = irq_channel<49>;    
using int_uart2_err                 = irq_channel<50>;    
using int_uart3_rx_tx               = irq_channel<51>;    
using int_uart3_err                 = irq_channel<52>;    
using int_uart4_rx_tx               = irq_channel<53>;    
using int_uart4_err                 = irq_channel<54>;    
using int_uart5_rx_tx               = irq_channel<55>;    
using int_uart5_err                 = irq_channel<56>;    
using int_adc0                      = irq_channel<57>;    
using int_adc1                      = irq_channel<58>;    
using int_cmp0                      = irq_channel<59>;    
using int_cmp1                      = irq_channel<60>;    
using int_cmp2                      = irq_channel<61>;    
using int_ftm0                      = irq_channel<62>;    
using int_ftm1                      = irq_channel<63>;    
using int_ftm2                      = irq_channel<64>;    
using int_cmt                       = irq_channel<65>;    
using int_rtc                       = irq_channel<66>;    
using int_rtc_seconds               = irq_channel<67>;    
using int_pit0                      = irq_channel<68>;    
using int_pit1                      = irq_channel<69>;    
using int_pit2                      = irq_channel<70>;    
using int_pit3                      = irq_channel<71>;    
using int_pdb0                      = irq_channel<72>;    
using int_usb0                      = irq_channel<73>;    
using int_usbdcd                    = irq_channel<74>;    
using int_enet_1588_timer           = irq_channel<75>;    
using int_enet_transmit             = irq_channel<76>;    
using int_enet_receive              = irq_channel<77>;    
using int_enet_error                = irq_channel<78>;    
using int_sdhc                      = irq_channel<80>;    
using int_dac0                      = irq_channel<81>;    
using int_dac1                      = irq_channel<82>;    
using int_tsi0                      = irq_channel<83>;    
using int_lptimer                   = irq_channel<85>;    
using int_porta                     = irq_channel<87>;    
using int_portb                     = irq_channel<88>;    
using int_portc                     = irq_channel<89>;    
using int_portd                     = irq_channel<90>;    
using int_porte                     = irq_channel<91>;    
using int_portf                     = irq_channel<92>;    
using int_ddr                       = irq_channel<93>;    
using int_nfc                       = irq_channel<95>;    
using int_usbhs                     = irq_channel<96>;    
using int_cmp3                      = irq_channel<98>;    
using int_tamper                    = irq_channel<99>;    
using int_ftm3                      = irq_channel<101>;    
using int_adc2                      = irq_channel<102>;    
using int_adc3                      = irq_channel<103>;    
using int_i2s1_tx                   = irq_channel<104>;    
using int_i2s1_rx                   = irq_channel<105>;    

static constexpr int numof_interrupt_channels = 106

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
