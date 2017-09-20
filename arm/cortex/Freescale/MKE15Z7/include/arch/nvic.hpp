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
//  Import from CMSIS-SVD: "Freescale/MKE15Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE15Z7
//  series: Kinetis_E
//  version: 1.6
//  description: MKE15Z7 Freescale Microcontroller
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

using dma0_04     = irq_channel< 0>;    
using dma0_15     = irq_channel< 1>;    
using dma0_26     = irq_channel< 2>;    
using dma0_37     = irq_channel< 3>;    
using dma_error   = irq_channel< 4>;    
using ftfe        = irq_channel< 5>;    
using lvd_lvw     = irq_channel< 6>;    
using portae      = irq_channel< 7>;    
using lpi2c0      = irq_channel< 8>;    
using lpi2c1      = irq_channel< 9>;    
using lpspi0      = irq_channel<10>;    
using lpspi1      = irq_channel<11>;    
using lpuart0     = irq_channel<12>;    
using lpuart1     = irq_channel<13>;    
using lpuart2     = irq_channel<14>;    
using adc0        = irq_channel<15>;    
using cmp0        = irq_channel<16>;    
using ftm0        = irq_channel<17>;    
using ftm1        = irq_channel<18>;    
using ftm2        = irq_channel<19>;    
using rtc         = irq_channel<20>;    
using cmp1        = irq_channel<21>;    
using lpit0       = irq_channel<22>;    
using flexio      = irq_channel<23>;    
using tsi         = irq_channel<24>;    
using pdb0        = irq_channel<25>;    
using portbcd     = irq_channel<26>;    
using scg         = irq_channel<27>;    
using wdog_ewm    = irq_channel<28>;    
using pwt_lptmr0  = irq_channel<29>;    
using adc1        = irq_channel<30>;    
using rcm         = irq_channel<31>;    

static constexpr int numof_interrupt_channels = 32

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
