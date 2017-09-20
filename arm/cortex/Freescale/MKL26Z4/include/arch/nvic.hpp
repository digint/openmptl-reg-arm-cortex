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
//  Import from CMSIS-SVD: "Freescale/MKL26Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL26Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL26Z4 Freescale Microcontroller
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

using dma0         = irq_channel< 0>;    
using dma1         = irq_channel< 1>;    
using dma2         = irq_channel< 2>;    
using dma3         = irq_channel< 3>;    
using ftfa         = irq_channel< 5>;    
using lvd_lvw      = irq_channel< 6>;    
using llwu         = irq_channel< 7>;    
using i2c0         = irq_channel< 8>;    
using i2c1         = irq_channel< 9>;    
using spi0         = irq_channel<10>;    
using spi1         = irq_channel<11>;    
using uart0        = irq_channel<12>;    
using uart1        = irq_channel<13>;    
using uart2        = irq_channel<14>;    
using adc0         = irq_channel<15>;    
using cmp0         = irq_channel<16>;    
using tpm0         = irq_channel<17>;    
using tpm1         = irq_channel<18>;    
using tpm2         = irq_channel<19>;    
using rtc          = irq_channel<20>;    
using rtc_seconds  = irq_channel<21>;    
using pit          = irq_channel<22>;    
using i2s0         = irq_channel<23>;    
using usb0         = irq_channel<24>;    
using dac0         = irq_channel<25>;    
using tsi0         = irq_channel<26>;    
using mcg          = irq_channel<27>;    
using lptmr0       = irq_channel<28>;    
using porta        = irq_channel<30>;    
using portc_portd  = irq_channel<31>;    

static constexpr int numof_interrupt_channels = 32

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
