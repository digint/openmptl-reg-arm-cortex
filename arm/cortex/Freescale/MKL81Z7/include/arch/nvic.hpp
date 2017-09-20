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
//  Import from CMSIS-SVD: "Freescale/MKL81Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL81Z7
//  series: Kinetis_L
//  version: 1.6
//  description: MKL81Z7 Freescale Microcontroller
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

using dma0_dma4    = irq_channel< 0>;    
using dma1_dma5    = irq_channel< 1>;    
using dma2_dma6    = irq_channel< 2>;    
using dma3_dma7    = irq_channel< 3>;    
using dma_error    = irq_channel< 4>;    
using flexio0      = irq_channel< 5>;    
using tpm0         = irq_channel< 6>;    
using tpm1         = irq_channel< 7>;    
using tpm2         = irq_channel< 8>;    
using pit0         = irq_channel< 9>;    
using spi0         = irq_channel<10>;    
using emvsim0      = irq_channel<11>;    
using lpuart0      = irq_channel<12>;    
using lpuart1      = irq_channel<13>;    
using i2c0         = irq_channel<14>;    
using qspi0        = irq_channel<15>;    
using tamper       = irq_channel<16>;    
using porta        = irq_channel<17>;    
using portb        = irq_channel<18>;    
using portc        = irq_channel<19>;    
using portd        = irq_channel<20>;    
using porte        = irq_channel<21>;    
using llwu         = irq_channel<22>;    
using ltc0         = irq_channel<23>;    
using usb0         = irq_channel<24>;    
using adc0         = irq_channel<25>;    
using lptmr0       = irq_channel<26>;    
using rtc_seconds  = irq_channel<27>;    
using intmux0_0    = irq_channel<28>;    
using intmux0_1    = irq_channel<29>;    
using intmux0_2    = irq_channel<30>;    
using intmux0_3    = irq_channel<31>;    
using lptmr1       = irq_channel<32>;    
using spi1         = irq_channel<36>;    
using lpuart2      = irq_channel<37>;    
using emvsim1      = irq_channel<38>;    
using i2c1         = irq_channel<39>;    
using tsi0         = irq_channel<40>;    
using pmc          = irq_channel<41>;    
using ftfa         = irq_channel<42>;    
using mcg          = irq_channel<43>;    
using wdog_ewm     = irq_channel<44>;    
using dac0         = irq_channel<45>;    
using trng0        = irq_channel<46>;    
using cmp0         = irq_channel<48>;    
using rtc_alarm    = irq_channel<50>;    
using dma4         = irq_channel<56>;    
using dma5         = irq_channel<57>;    
using dma6         = irq_channel<58>;    
using dma7         = irq_channel<59>;    

static constexpr int numof_interrupt_channels = 60

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
