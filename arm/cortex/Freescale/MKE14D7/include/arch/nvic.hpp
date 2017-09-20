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
//  Import from CMSIS-SVD: "Freescale/MKE14D7.svd"
//
//  name: MKE14D7
//  version: 1.6
//  description: MKE14D7 Freescale Microcontroller
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

using int_hard_fault        = irq_channel< 3>;    
using int_mem_manage_fault  = irq_channel< 4>;    
using int_bus_fault         = irq_channel< 5>;    
using int_usage_fault       = irq_channel< 6>;    
using int_svcall            = irq_channel<11>;    
using int_pendablesrvreq    = irq_channel<14>;    
using int_dma0              = irq_channel<16>;    
using int_dma1              = irq_channel<17>;    
using int_dma2              = irq_channel<18>;    
using int_dma3              = irq_channel<19>;    
using int_dma4              = irq_channel<20>;    
using int_dma5              = irq_channel<21>;    
using int_dma6              = irq_channel<22>;    
using int_dma7              = irq_channel<23>;    
using int_dma8              = irq_channel<24>;    
using int_dma9              = irq_channel<25>;    
using int_dma10             = irq_channel<26>;    
using int_dma11             = irq_channel<27>;    
using int_dma12             = irq_channel<28>;    
using int_dma13             = irq_channel<29>;    
using int_dma_error         = irq_channel<32>;    
using int_ftmra             = irq_channel<34>;    
using int_lvd_lvw           = irq_channel<36>;    
using int_watchdog          = irq_channel<38>;    
using int_adc2              = irq_channel<40>;    
using int_spi0              = irq_channel<41>;    
using int_spi1              = irq_channel<42>;    
using int_pdb0              = irq_channel<65>;    
using int_pit0              = irq_channel<69>;    
using int_pit1              = irq_channel<70>;    
using int_porta             = irq_channel<75>;    
using int_portb             = irq_channel<76>;    
using int_portc             = irq_channel<77>;    
using int_portd             = irq_channel<78>;    
using int_porte             = irq_channel<79>;    

static constexpr int numof_interrupt_channels = 80

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
