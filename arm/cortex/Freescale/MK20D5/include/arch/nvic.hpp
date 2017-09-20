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
//  Import from CMSIS-SVD: "Freescale/MK20D5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK20D5
//  series: Kinetis_K
//  version: 1.6
//  description: MK20D5 Freescale Microcontroller
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

using dma0            = irq_channel< 0>;    
using dma1            = irq_channel< 1>;    
using dma2            = irq_channel< 2>;    
using dma3            = irq_channel< 3>;    
using dma_error       = irq_channel< 4>;    
using ftfl            = irq_channel< 6>;    
using read_collision  = irq_channel< 7>;    
using lvd_lvw         = irq_channel< 8>;    
using llw             = irq_channel< 9>;    
using watchdog        = irq_channel<10>;    
using i2c0            = irq_channel<11>;    
using spi0            = irq_channel<12>;    
using i2s0_tx         = irq_channel<13>;    
using i2s0_rx         = irq_channel<14>;    
using uart0_lon       = irq_channel<15>;    
using uart0_rx_tx     = irq_channel<16>;    
using uart0_err       = irq_channel<17>;    
using uart1_rx_tx     = irq_channel<18>;    
using uart1_err       = irq_channel<19>;    
using uart2_rx_tx     = irq_channel<20>;    
using uart2_err       = irq_channel<21>;    
using adc0            = irq_channel<22>;    
using cmp0            = irq_channel<23>;    
using cmp1            = irq_channel<24>;    
using ftm0            = irq_channel<25>;    
using ftm1            = irq_channel<26>;    
using cmt             = irq_channel<27>;    
using rtc             = irq_channel<28>;    
using rtc_seconds     = irq_channel<29>;    
using pit0            = irq_channel<30>;    
using pit1            = irq_channel<31>;    
using pit2            = irq_channel<32>;    
using pit3            = irq_channel<33>;    
using pdb0            = irq_channel<34>;    
using usb0            = irq_channel<35>;    
using usbdcd          = irq_channel<36>;    
using tsi0            = irq_channel<37>;    
using lptimer         = irq_channel<39>;    
using porta           = irq_channel<40>;    
using portb           = irq_channel<41>;    
using portc           = irq_channel<42>;    
using portd           = irq_channel<43>;    
using porte           = irq_channel<44>;    

static constexpr int numof_interrupt_channels = 45

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
