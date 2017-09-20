/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9AF11xN.svd"
//
//  name: MB9AF11xN
//  version: 1.7
//  description: MB9AF11xN
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

using csv         = irq_channel< 0>;    
using swdt        = irq_channel< 1>;    
using lvd         = irq_channel< 2>;    
using wfg         = irq_channel< 3>;    
using extint0_7   = irq_channel< 4>;    
using extint8_15  = irq_channel< 5>;    
using dtim_qdu    = irq_channel< 6>;    
using mfs0rx      = irq_channel< 7>;    
using mfs0tx      = irq_channel< 8>;    
using mfs1rx      = irq_channel< 9>;    
using mfs1tx      = irq_channel<10>;    
using mfs2rx      = irq_channel<11>;    
using mfs2tx      = irq_channel<12>;    
using mfs3rx      = irq_channel<13>;    
using mfs3tx      = irq_channel<14>;    
using mfs4rx      = irq_channel<15>;    
using mfs4tx      = irq_channel<16>;    
using mfs5rx      = irq_channel<17>;    
using mfs5tx      = irq_channel<18>;    
using mfs6rx      = irq_channel<19>;    
using mfs6tx      = irq_channel<20>;    
using mfs7rx      = irq_channel<21>;    
using mfs7tx      = irq_channel<22>;    
using ppg         = irq_channel<23>;    
using osc_pll_wc  = irq_channel<24>;    
using adc0        = irq_channel<25>;    
using adc1        = irq_channel<26>;    
using adc2        = irq_channel<27>;    
using frtim       = irq_channel<28>;    
using incap       = irq_channel<29>;    
using outcomp     = irq_channel<30>;    
using btim0_7     = irq_channel<31>;    
using dmac0       = irq_channel<38>;    
using dmac1       = irq_channel<39>;    
using dmac2       = irq_channel<40>;    
using dmac3       = irq_channel<41>;    
using dmac4       = irq_channel<42>;    
using dmac5       = irq_channel<43>;    
using dmac6       = irq_channel<44>;    
using dmac7       = irq_channel<45>;    

static constexpr int numof_interrupt_channels = 46

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
