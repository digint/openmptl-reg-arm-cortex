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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
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

using tim1     = irq_channel< 0>;    /**< Timer 1 Interrupt              */
using tim2     = irq_channel< 1>;    /**< Timer 2 Interrupt              */
using slptim   = irq_channel< 4>;    /**< Sleep Timer Interrupt          */
using sc1      = irq_channel< 5>;    /**< Serial Controller 1 Interrupt  */
using sc2      = irq_channel< 6>;    /**< Serial Controller 2 Interrupt  */
using mac_tim  = irq_channel< 8>;    /**< MAC Timer Interrupt            */
using adc      = irq_channel<11>;    /**< ADC Interrupt                  */
using extia    = irq_channel<12>;    /**< EXTI port A interrupt          */
using extib    = irq_channel<13>;    /**< EXTI port B interrupt          */
using extic    = irq_channel<14>;    /**< EXTI port C interrupt          */
using extid    = irq_channel<15>;    /**< EXTI port D interrupt          */

static constexpr int numof_interrupt_channels = 16

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
