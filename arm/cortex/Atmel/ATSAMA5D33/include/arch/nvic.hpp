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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D33.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D33
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D33 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, LCD controller, gigabit Ethernet, security (refer to http://www.atmel.com/devices/SAMA5D33.aspx for more)
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
using pmc     = irq_channel< 1>;    
using dbgu    = irq_channel< 2>;    
using pioa    = irq_channel< 6>;    
using piob    = irq_channel< 7>;    
using pioc    = irq_channel< 8>;    
using piod    = irq_channel< 9>;    
using pioe    = irq_channel<10>;    
using smd     = irq_channel<11>;    
using usart0  = irq_channel<12>;    
using usart1  = irq_channel<13>;    
using usart2  = irq_channel<14>;    
using usart3  = irq_channel<15>;    
using twi0    = irq_channel<18>;    
using twi1    = irq_channel<19>;    
using twi2    = irq_channel<20>;    
using hsmci0  = irq_channel<21>;    
using hsmci1  = irq_channel<22>;    
using spi0    = irq_channel<24>;    
using spi1    = irq_channel<25>;    
using tc0     = irq_channel<26>;    
using tc1     = irq_channel<27>;    
using pwm     = irq_channel<28>;    
using adc     = irq_channel<29>;    
using dmac0   = irq_channel<30>;    
using dmac1   = irq_channel<31>;    
using udphs   = irq_channel<33>;    
using gmac    = irq_channel<34>;    
using lcdc    = irq_channel<36>;    
using isi     = irq_channel<37>;    
using ssc0    = irq_channel<38>;    
using ssc1    = irq_channel<39>;    
using trng    = irq_channel<45>;    
using irq     = irq_channel<47>;    
using fuse    = irq_channel<48>;    

static constexpr int numof_interrupt_channels = 49

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
