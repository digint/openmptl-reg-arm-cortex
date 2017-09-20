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
//  Import from CMSIS-SVD: "Freescale/MKV42F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV42F16
//  series: Kinetis_V
//  version: 1.6
//  description: MKV42F16 Freescale Microcontroller
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

using dma0                      = irq_channel< 0>;    
using dma1                      = irq_channel< 1>;    
using dma2                      = irq_channel< 2>;    
using dma3                      = irq_channel< 3>;    
using dma4                      = irq_channel< 4>;    
using dma5                      = irq_channel< 5>;    
using dma6                      = irq_channel< 6>;    
using dma7                      = irq_channel< 7>;    
using dma8                      = irq_channel< 8>;    
using dma9                      = irq_channel< 9>;    
using dma10                     = irq_channel<10>;    
using dma11                     = irq_channel<11>;    
using dma12                     = irq_channel<12>;    
using dma13                     = irq_channel<13>;    
using dma14                     = irq_channel<14>;    
using dma15                     = irq_channel<15>;    
using dma_error                 = irq_channel<16>;    
using mcm                       = irq_channel<17>;    
using ftfa                      = irq_channel<18>;    
using ftfa_collision            = irq_channel<19>;    
using pmc                       = irq_channel<20>;    
using llwu                      = irq_channel<21>;    
using wdog_ewm                  = irq_channel<22>;    
using i2c0                      = irq_channel<24>;    
using spi0                      = irq_channel<26>;    
using uart0_rx_tx               = irq_channel<31>;    
using uart0_err                 = irq_channel<32>;    
using uart1_rx_tx               = irq_channel<33>;    
using uart1_err                 = irq_channel<34>;    
using adc_err                   = irq_channel<38>;    
using adca                      = irq_channel<39>;    
using cmp0                      = irq_channel<40>;    
using cmp1                      = irq_channel<41>;    
using ftm0                      = irq_channel<42>;    
using ftm1                      = irq_channel<43>;    
using pit0                      = irq_channel<48>;    
using pit1                      = irq_channel<49>;    
using pit2                      = irq_channel<50>;    
using pit3                      = irq_channel<51>;    
using pdb0                      = irq_channel<52>;    
using xbara                     = irq_channel<54>;    
using pdb1                      = irq_channel<55>;    
using mcg                       = irq_channel<57>;    
using lptmr0                    = irq_channel<58>;    
using porta                     = irq_channel<59>;    
using portb                     = irq_channel<60>;    
using portc                     = irq_channel<61>;    
using portd                     = irq_channel<62>;    
using porte                     = irq_channel<63>;    
using enc0_compare              = irq_channel<66>;    
using enc0_home                 = irq_channel<67>;    
using enc0_wdog_sab             = irq_channel<68>;    
using enc0_index                = irq_channel<69>;    
using cmp2                      = irq_channel<70>;    
using ftm3                      = irq_channel<71>;    
using adcb                      = irq_channel<73>;    
using can0_ored_message_buffer  = irq_channel<75>;    
using can0_bus_off              = irq_channel<76>;    
using can0_error                = irq_channel<77>;    
using can0_tx_warning           = irq_channel<78>;    
using can0_rx_warning           = irq_channel<79>;    
using can0_wake_up              = irq_channel<80>;    
using cmp3                      = irq_channel<92>;    
using can1_ored_message_buffer  = irq_channel<94>;    
using can1_bus_off              = irq_channel<95>;    
using can1_error                = irq_channel<96>;    
using can1_tx_warning           = irq_channel<97>;    
using can1_rx_warning           = irq_channel<98>;    
using can1_wake_up              = irq_channel<99>;    

static constexpr int numof_interrupt_channels = 100

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
