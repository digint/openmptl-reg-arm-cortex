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
//  Import from CMSIS-SVD: "Atmel/ATSAM3X4E.svd"
//
//  vendor: Atmel
//  name: ATSAM3X4E
//  series: SAM3X
//  version: 20130131
//  description: Atmel ATSAM3X4E device: Cortex-M3 Microcontroller with 2x128 KB Flash, HS USB, 144 Pins (refer to http://www.atmel.com/devices/SAM3X4E.aspx for more)
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

using pmc     = irq_channel< 5>;    
using efc0    = irq_channel< 6>;    
using efc1    = irq_channel< 7>;    
using uart    = irq_channel< 8>;    
using pioa    = irq_channel<11>;    
using piob    = irq_channel<12>;    
using pioc    = irq_channel<13>;    
using piod    = irq_channel<14>;    
using usart0  = irq_channel<17>;    
using usart1  = irq_channel<18>;    
using usart2  = irq_channel<19>;    
using usart3  = irq_channel<20>;    
using hsmci   = irq_channel<21>;    
using twi0    = irq_channel<22>;    
using twi1    = irq_channel<23>;    
using spi0    = irq_channel<24>;    
using ssc     = irq_channel<26>;    
using tc0     = irq_channel<27>;    
using tc1     = irq_channel<28>;    
using tc2     = irq_channel<29>;    
using tc3     = irq_channel<30>;    
using tc4     = irq_channel<31>;    
using tc5     = irq_channel<32>;    
using tc6     = irq_channel<33>;    
using tc7     = irq_channel<34>;    
using tc8     = irq_channel<35>;    
using pwm     = irq_channel<36>;    
using adc     = irq_channel<37>;    
using dacc    = irq_channel<38>;    
using dmac    = irq_channel<39>;    
using uotghs  = irq_channel<40>;    
using trng    = irq_channel<41>;    
using emac    = irq_channel<42>;    
using can0    = irq_channel<43>;    
using can1    = irq_channel<44>;    

static constexpr int numof_interrupt_channels = 45

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
