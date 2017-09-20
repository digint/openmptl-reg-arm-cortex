/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKV10Z1287.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV10Z1287
//  series: Kinetis_V
//  version: 1.6
//  description: MKV10Z1287 Freescale Microcontroller
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

using dma0_dma4                = irq_channel< 0>;    
using dma1_dma5                = irq_channel< 1>;    
using dma2_dma6                = irq_channel< 2>;    
using dma3_dma7                = irq_channel< 3>;    
using dma_error                = irq_channel< 4>;    
using ftfa                     = irq_channel< 5>;    
using lvd_lvw                  = irq_channel< 6>;    
using llwu                     = irq_channel< 7>;    
using i2c0                     = irq_channel< 8>;    
using spi0                     = irq_channel<10>;    
using uart0                    = irq_channel<12>;    
using uart1                    = irq_channel<13>;    
using adc0                     = irq_channel<15>;    
using adc1                     = irq_channel<16>;    
using ftm0                     = irq_channel<17>;    
using ftm1                     = irq_channel<18>;    
using ftm2                     = irq_channel<19>;    
using cmp0                     = irq_channel<20>;    
using cmp1                     = irq_channel<21>;    
using ftm3                     = irq_channel<22>;    
using wdog_ewm                 = irq_channel<23>;    
using ftm4                     = irq_channel<24>;    
using dac0                     = irq_channel<25>;    
using ftm5                     = irq_channel<26>;    
using mcg                      = irq_channel<27>;    
using lptmr0                   = irq_channel<28>;    
using pdb0_pdb1                = irq_channel<29>;    
using porta                    = irq_channel<30>;    
using portb_portc_portd_porte  = irq_channel<31>;    

static constexpr int numof_interrupt_channels = 32

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
