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
//  Import from CMSIS-SVD: "Nordic/nrf52.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf52
//  series: nrf52
//  version: 1
//  description: nRF52 reference description for radio MCU with ARM 32-bit Cortex-M4 Microcontroller
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

using power_clock                        = irq_channel< 0>;    
using radio                              = irq_channel< 1>;    
using uarte0_uart0                       = irq_channel< 2>;    
using spim0_spis0_twim0_twis0_spi0_twi0  = irq_channel< 3>;    
using spim1_spis1_twim1_twis1_spi1_twi1  = irq_channel< 4>;    
using nfct                               = irq_channel< 5>;    
using gpiote                             = irq_channel< 6>;    
using saadc                              = irq_channel< 7>;    
using timer0                             = irq_channel< 8>;    
using timer1                             = irq_channel< 9>;    
using timer2                             = irq_channel<10>;    
using rtc0                               = irq_channel<11>;    
using temp                               = irq_channel<12>;    
using rng                                = irq_channel<13>;    
using ecb                                = irq_channel<14>;    
using ccm_aar                            = irq_channel<15>;    
using wdt                                = irq_channel<16>;    
using rtc1                               = irq_channel<17>;    
using qdec                               = irq_channel<18>;    
using comp_lpcomp                        = irq_channel<19>;    
using swi0_egu0                          = irq_channel<20>;    
using swi1_egu1                          = irq_channel<21>;    
using swi2_egu2                          = irq_channel<22>;    
using swi3_egu3                          = irq_channel<23>;    
using swi4_egu4                          = irq_channel<24>;    
using swi5_egu5                          = irq_channel<25>;    
using timer3                             = irq_channel<26>;    
using timer4                             = irq_channel<27>;    
using pwm0                               = irq_channel<28>;    
using pdm                                = irq_channel<29>;    
using mwu                                = irq_channel<32>;    
using pwm1                               = irq_channel<33>;    
using pwm2                               = irq_channel<34>;    
using spim2_spis2_spi2                   = irq_channel<35>;    
using rtc2                               = irq_channel<36>;    
using i2s                                = irq_channel<37>;    

static constexpr int numof_interrupt_channels = 38

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
