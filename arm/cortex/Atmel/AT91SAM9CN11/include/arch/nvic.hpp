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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9CN11.svd"
//
//  vendor: Atmel
//  name: AT91SAM9CN11
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9CN11 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Crypto engine, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9CN11.aspx for more)
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
using dbgu    = irq_channel< 1>;    
using pioa    = irq_channel< 2>;    
using pioc    = irq_channel< 3>;    
using fuse    = irq_channel< 4>;    
using usart0  = irq_channel< 5>;    
using usart1  = irq_channel< 6>;    
using usart2  = irq_channel< 7>;    
using usart3  = irq_channel< 8>;    
using twi0    = irq_channel< 9>;    
using twi1    = irq_channel<10>;    
using hsmci   = irq_channel<12>;    
using spi0    = irq_channel<13>;    
using spi1    = irq_channel<14>;    
using uart0   = irq_channel<15>;    
using uart1   = irq_channel<16>;    
using tc0     = irq_channel<17>;    
using pwm     = irq_channel<18>;    
using adc     = irq_channel<19>;    
using dmac    = irq_channel<20>;    
using udp     = irq_channel<23>;    
using lcdc    = irq_channel<25>;    
using sha     = irq_channel<27>;    
using ssc     = irq_channel<28>;    
using aes     = irq_channel<29>;    
using trng    = irq_channel<30>;    
using irq     = irq_channel<31>;    

static constexpr int numof_interrupt_channels = 32

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
