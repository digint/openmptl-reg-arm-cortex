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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9M10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9M10
//  series: SAM9M
//  version: 20130207
//  description: Atmel AT91SAM9M10 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, DDR2/LPDDR, Video Decoder, LCD, HS USB, 10/100 Ethernet, Dual EBI, 324 Pins (refer to http://www.atmel.com/devices/SAM9M10.aspx for more)
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

using fiq     = irq_channel< 0>;    
using pioa    = irq_channel< 2>;    
using piob    = irq_channel< 3>;    
using pioc    = irq_channel< 4>;    
using piod    = irq_channel< 5>;    
using trng    = irq_channel< 6>;    
using usart0  = irq_channel< 7>;    
using usart1  = irq_channel< 8>;    
using usart2  = irq_channel< 9>;    
using usart3  = irq_channel<10>;    
using hsmci0  = irq_channel<11>;    
using twi0    = irq_channel<12>;    
using twi1    = irq_channel<13>;    
using spi0    = irq_channel<14>;    
using spi1    = irq_channel<15>;    
using ssc0    = irq_channel<16>;    
using ssc1    = irq_channel<17>;    
using tc0     = irq_channel<18>;    
using pwm     = irq_channel<19>;    
using tsadcc  = irq_channel<20>;    
using dmac    = irq_channel<21>;    
using lcdc    = irq_channel<23>;    
using ac97c   = irq_channel<24>;    
using emac    = irq_channel<25>;    
using isi     = irq_channel<26>;    
using udphs   = irq_channel<27>;    
using hsmci1  = irq_channel<29>;    
using vdec    = irq_channel<30>;    
using irq     = irq_channel<31>;    

static constexpr int numof_interrupt_channels = 32

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
