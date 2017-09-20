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
//  Import from CMSIS-SVD: "Nordic/nrf51.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf51
//  series: nrf51
//  version: 522
//  description: nRF51 reference description for radio MCU with ARM 32-bit Cortex-M0 Microcontroller at 16MHz CPU clock
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

using power_clock  = irq_channel< 0>;    
using radio        = irq_channel< 1>;    
using uart0        = irq_channel< 2>;    
using spi0_twi0    = irq_channel< 3>;    
using spi1_twi1    = irq_channel< 4>;    
using gpiote       = irq_channel< 6>;    
using adc          = irq_channel< 7>;    
using timer0       = irq_channel< 8>;    
using timer1       = irq_channel< 9>;    
using timer2       = irq_channel<10>;    
using rtc0         = irq_channel<11>;    
using temp         = irq_channel<12>;    
using rng          = irq_channel<13>;    
using ecb          = irq_channel<14>;    
using ccm_aar      = irq_channel<15>;    
using wdt          = irq_channel<16>;    
using rtc1         = irq_channel<17>;    
using qdec         = irq_channel<18>;    
using lpcomp       = irq_channel<19>;    
using swi0         = irq_channel<20>;    
using swi1         = irq_channel<21>;    
using swi2         = irq_channel<22>;    
using swi3         = irq_channel<23>;    
using swi4         = irq_channel<24>;    
using swi5         = irq_channel<25>;    

static constexpr int numof_interrupt_channels = 26

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
