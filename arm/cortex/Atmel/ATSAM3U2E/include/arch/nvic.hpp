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
//  Import from CMSIS-SVD: "Atmel/ATSAM3U2E.svd"
//
//  vendor: Atmel
//  name: ATSAM3U2E
//  series: SAM3U
//  version: 20130131
//  description: Atmel ATSAM3U2E device: Cortex-M3 Microcontroller with 128KB Flash, HS USB, 144 Pins (refer to http://www.atmel.com/devices/SAM3U2E.aspx for more)
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
using uart    = irq_channel< 8>;    
using pioa    = irq_channel<10>;    
using piob    = irq_channel<11>;    
using pioc    = irq_channel<12>;    
using usart0  = irq_channel<13>;    
using usart1  = irq_channel<14>;    
using usart2  = irq_channel<15>;    
using usart3  = irq_channel<16>;    
using hsmci   = irq_channel<17>;    
using twi0    = irq_channel<18>;    
using twi1    = irq_channel<19>;    
using spi     = irq_channel<20>;    
using ssc     = irq_channel<21>;    
using tc0     = irq_channel<22>;    
using tc1     = irq_channel<23>;    
using tc2     = irq_channel<24>;    
using pwm     = irq_channel<25>;    
using adc12b  = irq_channel<26>;    
using adc     = irq_channel<27>;    
using dmac    = irq_channel<28>;    
using udphs   = irq_channel<29>;    

static constexpr int numof_interrupt_channels = 30

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
