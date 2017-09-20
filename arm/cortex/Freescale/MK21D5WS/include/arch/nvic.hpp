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
//  Import from CMSIS-SVD: "Freescale/MK21D5WS.svd"
//
//  name: MK21D5WS
//  version: 1.6
//  description: MK21D5WS Freescale Microcontroller
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

using int_dma0            = irq_channel< 0>;    
using int_dma1            = irq_channel< 1>;    
using int_dma2            = irq_channel< 2>;    
using int_dma3            = irq_channel< 3>;    
using int_dma4            = irq_channel< 4>;    
using int_dma5            = irq_channel< 5>;    
using int_dma6            = irq_channel< 6>;    
using int_dma7            = irq_channel< 7>;    
using int_dma8            = irq_channel< 8>;    
using int_dma9            = irq_channel< 9>;    
using int_dma10           = irq_channel<10>;    
using int_dma11           = irq_channel<11>;    
using int_dma12           = irq_channel<12>;    
using int_dma13           = irq_channel<13>;    
using int_dma14           = irq_channel<14>;    
using int_dma15           = irq_channel<15>;    
using int_dma_error       = irq_channel<16>;    
using int_ftfl            = irq_channel<18>;    
using int_read_collision  = irq_channel<19>;    
using int_lvd_lvw         = irq_channel<20>;    
using int_llw             = irq_channel<21>;    
using int_watchdog        = irq_channel<22>;    
using int_rng             = irq_channel<23>;    
using int_i2c0            = irq_channel<24>;    
using int_i2c1            = irq_channel<25>;    
using int_spi0            = irq_channel<26>;    
using int_spi1            = irq_channel<27>;    
using int_i2s0_tx         = irq_channel<28>;    
using int_i2s0_rx         = irq_channel<29>;    
using int_uart0_lon       = irq_channel<30>;    
using int_uart0_rx_tx     = irq_channel<31>;    
using int_uart0_err       = irq_channel<32>;    
using int_uart1_rx_tx     = irq_channel<33>;    
using int_uart1_err       = irq_channel<34>;    
using int_uart2_rx_tx     = irq_channel<35>;    
using int_uart2_err       = irq_channel<36>;    
using int_uart3_rx_tx     = irq_channel<37>;    
using int_uart3_err       = irq_channel<38>;    
using int_adc0            = irq_channel<39>;    
using int_cmp0            = irq_channel<40>;    
using int_cmp1            = irq_channel<41>;    
using int_ftm0            = irq_channel<42>;    
using int_ftm1            = irq_channel<43>;    
using int_ftm2            = irq_channel<44>;    
using int_cmt             = irq_channel<45>;    
using int_rtc             = irq_channel<46>;    
using int_rtc_seconds     = irq_channel<47>;    
using int_pit0            = irq_channel<48>;    
using int_pit1            = irq_channel<49>;    
using int_pit2            = irq_channel<50>;    
using int_pit3            = irq_channel<51>;    
using int_pdb0            = irq_channel<52>;    
using int_usb0            = irq_channel<53>;    
using int_usbdcd          = irq_channel<54>;    
using int_tamper          = irq_channel<55>;    
using int_dac0            = irq_channel<56>;    
using int_lptimer         = irq_channel<58>;    
using int_porta           = irq_channel<59>;    
using int_portb           = irq_channel<60>;    
using int_portc           = irq_channel<61>;    
using int_portd           = irq_channel<62>;    
using int_porte           = irq_channel<63>;    

static constexpr int numof_interrupt_channels = 64

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
