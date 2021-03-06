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
//  Import from CMSIS-SVD: "Atmel/ATSAMR21E16A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMR21E16A
//  series: SAMR21
//  version: A
//  description: Atmel ATSAMR21E16A device: Cortex-M0+ Microcontroller with 64KB Flash, 16KB SRAM, 233-pin package (refer to http://www.atmel.com/devices/SAMR21E16A.aspx for more)
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

using pm       = irq_channel< 0>;    
using sysctrl  = irq_channel< 1>;    
using wdt      = irq_channel< 2>;    
using rtc      = irq_channel< 3>;    
using eic      = irq_channel< 4>;    
using nvmctrl  = irq_channel< 5>;    
using dmac     = irq_channel< 6>;    
using usb      = irq_channel< 7>;    
using evsys    = irq_channel< 8>;    
using sercom0  = irq_channel< 9>;    
using sercom1  = irq_channel<10>;    
using sercom2  = irq_channel<11>;    
using sercom3  = irq_channel<12>;    
using sercom4  = irq_channel<13>;    
using sercom5  = irq_channel<14>;    
using tcc0     = irq_channel<15>;    
using tcc1     = irq_channel<16>;    
using tcc2     = irq_channel<17>;    
using tc3      = irq_channel<18>;    
using tc4      = irq_channel<19>;    
using tc5      = irq_channel<20>;    
using tc6      = irq_channel<21>;    
using tc7      = irq_channel<22>;    
using adc      = irq_channel<23>;    
using ac       = irq_channel<24>;    

static constexpr int numof_interrupt_channels = 25

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
