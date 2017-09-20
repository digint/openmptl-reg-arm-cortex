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
//  Import from CMSIS-SVD: "Fujitsu/S6E1A1.svd"
//
//  name: S6E1A1
//  version: 1.2
//  description: S6E1A1 Series
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

using csv             = irq_channel< 0>;    
using swdt            = irq_channel< 1>;    
using lvd             = irq_channel< 2>;    
using wfg_dtif        = irq_channel< 3>;    
using exint0_7        = irq_channel< 4>;    
using dtim_qdu        = irq_channel< 6>;    
using mfs0rx          = irq_channel< 7>;    
using mfs0tx          = irq_channel< 8>;    
using mfs1rx          = irq_channel< 9>;    
using mfs1tx          = irq_channel<10>;    
using mfs3rx          = irq_channel<13>;    
using mfs3tx          = irq_channel<14>;    
using dmac0           = irq_channel<19>;    
using dmac1           = irq_channel<20>;    
using ppg             = irq_channel<23>;    
using osc_pll_wc_rtc  = irq_channel<24>;    
using adc0            = irq_channel<25>;    
using frtim           = irq_channel<28>;    
using incap           = irq_channel<29>;    
using outcomp         = irq_channel<30>;    
using btim0_3_flash   = irq_channel<31>;    

static constexpr int numof_interrupt_channels = 32

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
