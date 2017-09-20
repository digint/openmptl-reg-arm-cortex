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
//  Import from CMSIS-SVD: "Freescale/SKEAZN642.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZN642
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZN642 Freescale Microcontroller
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

using ftmrh     = irq_channel< 5>;    
using lvd_lvw   = irq_channel< 6>;    
using irq       = irq_channel< 7>;    
using i2c0      = irq_channel< 8>;    
using spi0      = irq_channel<10>;    
using spi1      = irq_channel<11>;    
using uart0     = irq_channel<12>;    
using uart1     = irq_channel<13>;    
using uart2     = irq_channel<14>;    
using adc0      = irq_channel<15>;    
using acmp0     = irq_channel<16>;    
using ftm0      = irq_channel<17>;    
using ftm1      = irq_channel<18>;    
using ftm2      = irq_channel<19>;    
using rtc       = irq_channel<20>;    
using acmp1     = irq_channel<21>;    
using pit_ch0   = irq_channel<22>;    
using pit_ch1   = irq_channel<23>;    
using kbi0      = irq_channel<24>;    
using kbi1      = irq_channel<25>;    
using ics       = irq_channel<27>;    
using wdog_ewm  = irq_channel<28>;    

static constexpr int numof_interrupt_channels = 29

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
