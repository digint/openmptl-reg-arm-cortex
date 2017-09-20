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
//  Import from CMSIS-SVD: "Holtek/ht32f175x.svd"
//
//  name: HT32F175x
//  version: 1.0
//  description: This is the description for the Holtek HT32F175x
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

using systick      = irq_channel<15>;    
using ckcu         = irq_channel<16>;    
using wdt          = irq_channel<19>;    
using rtc          = irq_channel<20>;    
using fmc          = irq_channel<21>;    
using exti0        = irq_channel<24>;    
using exti1        = irq_channel<25>;    
using exti2        = irq_channel<26>;    
using exti3        = irq_channel<27>;    
using exti4        = irq_channel<28>;    
using exti5        = irq_channel<29>;    
using exti6        = irq_channel<30>;    
using exti7        = irq_channel<31>;    
using exti8        = irq_channel<32>;    
using exti9        = irq_channel<33>;    
using exti10       = irq_channel<34>;    
using exti11       = irq_channel<35>;    
using exti12       = irq_channel<36>;    
using exti13       = irq_channel<37>;    
using exti14       = irq_channel<38>;    
using exti15       = irq_channel<39>;    
using opa_cmp      = irq_channel<40>;    
using adc          = irq_channel<41>;    
using mctm_brk     = irq_channel<43>;    
using mctm_up      = irq_channel<44>;    
using mctm_tr_up2  = irq_channel<45>;    
using mctm_cc      = irq_channel<46>;    
using gptm0        = irq_channel<51>;    
using gptm1        = irq_channel<52>;    
using bftm0        = irq_channel<57>;    
using bftn1        = irq_channel<58>;    
using i2c0         = irq_channel<59>;    
using i2c1         = irq_channel<60>;    
using spi0         = irq_channel<61>;    
using spi1         = irq_channel<62>;    
using usart0       = irq_channel<63>;    
using usart1       = irq_channel<64>;    
using sci          = irq_channel<67>;    
using usb          = irq_channel<69>;    
using pdma_ch0     = irq_channel<71>;    
using pdma_ch1     = irq_channel<72>;    
using pdma_ch2     = irq_channel<73>;    
using pdma_ch3     = irq_channel<74>;    
using pdma_ch4     = irq_channel<75>;    
using pdma_ch5     = irq_channel<76>;    
using pdma_ch6     = irq_channel<77>;    
using pdma_ch7     = irq_channel<78>;    
using pdma_ch8     = irq_channel<79>;    
using pdma_ch9     = irq_channel<80>;    
using pdma_ch10    = irq_channel<81>;    
using pdma_ch11    = irq_channel<82>;    

static constexpr int numof_interrupt_channels = 83

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
