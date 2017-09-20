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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C1237E6PZ.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C1237E6PZ
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
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

using gpioa       = irq_channel< 0>;    
using gpiob       = irq_channel< 1>;    
using gpioc       = irq_channel< 2>;    
using gpiod       = irq_channel< 3>;    
using gpioe       = irq_channel< 4>;    
using uart0       = irq_channel< 5>;    
using uart1       = irq_channel< 6>;    
using ssi0        = irq_channel< 7>;    
using i2c0        = irq_channel< 8>;    
using adc0ss0     = irq_channel<14>;    
using adc0ss1     = irq_channel<15>;    
using adc0ss2     = irq_channel<16>;    
using adc0ss3     = irq_channel<17>;    
using watchdog0   = irq_channel<18>;    
using timer0a     = irq_channel<19>;    
using timer0b     = irq_channel<20>;    
using timer1a     = irq_channel<21>;    
using timer1b     = irq_channel<22>;    
using timer2a     = irq_channel<23>;    
using timer2b     = irq_channel<24>;    
using comp0       = irq_channel<25>;    
using comp1       = irq_channel<26>;    
using comp2       = irq_channel<27>;    
using sysctl      = irq_channel<28>;    
using flash_ctrl  = irq_channel<29>;    
using gpiof       = irq_channel<30>;    
using gpiog       = irq_channel<31>;    
using gpioh       = irq_channel<32>;    
using uart2       = irq_channel<33>;    
using ssi1        = irq_channel<34>;    
using timer3a     = irq_channel<35>;    
using timer3b     = irq_channel<36>;    
using i2c1        = irq_channel<37>;    
using can0        = irq_channel<39>;    
using hib         = irq_channel<43>;    
using usb0        = irq_channel<44>;    
using udma        = irq_channel<46>;    
using udmaerr     = irq_channel<47>;    
using adc1ss0     = irq_channel<48>;    
using adc1ss1     = irq_channel<49>;    
using adc1ss2     = irq_channel<50>;    
using adc1ss3     = irq_channel<51>;    
using gpioj       = irq_channel<54>;    
using gpiok       = irq_channel<55>;    
using ssi2        = irq_channel<57>;    
using ssi3        = irq_channel<58>;    
using uart3       = irq_channel<59>;    
using uart4       = irq_channel<60>;    
using uart5       = irq_channel<61>;    
using uart6       = irq_channel<62>;    
using uart7       = irq_channel<63>;    
using i2c2        = irq_channel<68>;    
using i2c3        = irq_channel<69>;    
using timer4a     = irq_channel<70>;    
using timer4b     = irq_channel<71>;    
using timer5a     = irq_channel<92>;    
using timer5b     = irq_channel<93>;    
using wtimer0a    = irq_channel<94>;    
using wtimer0b    = irq_channel<95>;    
using wtimer1a    = irq_channel<96>;    
using wtimer1b    = irq_channel<97>;    
using wtimer2a    = irq_channel<98>;    
using wtimer2b    = irq_channel<99>;    
using wtimer3a    = irq_channel<100>;    
using wtimer3b    = irq_channel<101>;    
using wtimer4a    = irq_channel<102>;    
using wtimer4b    = irq_channel<103>;    
using wtimer5a    = irq_channel<104>;    
using wtimer5b    = irq_channel<105>;    
using sysexc      = irq_channel<106>;    
using i2c4        = irq_channel<109>;    
using i2c5        = irq_channel<110>;    

static constexpr int numof_interrupt_channels = 111

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
