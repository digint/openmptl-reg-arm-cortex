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
//  Import from CMSIS-SVD: "Freescale/MK22F12810.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK22F12810
//  series: Kinetis_K
//  version: 1.6
//  description: MK22F12810 Freescale Microcontroller
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

using dma0            = irq_channel< 0>;    
using dma1            = irq_channel< 1>;    
using dma2            = irq_channel< 2>;    
using dma3            = irq_channel< 3>;    
using dma_error       = irq_channel<16>;    
using mcm             = irq_channel<17>;    
using ftf             = irq_channel<18>;    
using read_collision  = irq_channel<19>;    
using lvd_lvw         = irq_channel<20>;    
using llwu            = irq_channel<21>;    
using wdog_ewm        = irq_channel<22>;    
using i2c0            = irq_channel<24>;    
using i2c1            = irq_channel<25>;    
using spi0            = irq_channel<26>;    
using spi1            = irq_channel<27>;    
using i2s0_tx         = irq_channel<28>;    
using i2s0_rx         = irq_channel<29>;    
using lpuart0         = irq_channel<30>;    
using uart0_rx_tx     = irq_channel<31>;    
using uart0_err       = irq_channel<32>;    
using uart1_rx_tx     = irq_channel<33>;    
using uart1_err       = irq_channel<34>;    
using uart2_rx_tx     = irq_channel<35>;    
using uart2_err       = irq_channel<36>;    
using adc0            = irq_channel<39>;    
using cmp0            = irq_channel<40>;    
using cmp1            = irq_channel<41>;    
using ftm0            = irq_channel<42>;    
using ftm1            = irq_channel<43>;    
using ftm2            = irq_channel<44>;    
using rtc             = irq_channel<46>;    
using rtc_seconds     = irq_channel<47>;    
using pit0            = irq_channel<48>;    
using pit1            = irq_channel<49>;    
using pit2            = irq_channel<50>;    
using pit3            = irq_channel<51>;    
using pdb0            = irq_channel<52>;    
using usb0            = irq_channel<53>;    
using dac0            = irq_channel<56>;    
using lptmr0          = irq_channel<58>;    
using porta           = irq_channel<59>;    
using portb           = irq_channel<60>;    
using portc           = irq_channel<61>;    
using portd           = irq_channel<62>;    
using porte           = irq_channel<63>;    
using adc1            = irq_channel<73>;    

static constexpr int numof_interrupt_channels = 74

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
