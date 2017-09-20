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
//  Import from CMSIS-SVD: "STMicro/STM32L100.svd"
//
//  name: STM32L100
//  version: 1.0
//  description: STM32L100
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TIM6_HPP_INCLUDED
#define ARCH_REG_TIM6_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Basic timers
 */
struct TIM6
{
  static constexpr reg_addr_t base_addr = 0x40001000;

  /**
   * TIM6 control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using ARPE  = regbits< type,  7,  1 >;  /**< Auto-reload preload enable  */
    using OPM   = regbits< type,  3,  1 >;  /**< One-pulse mode              */
    using URS   = regbits< type,  2,  1 >;  /**< Update request source       */
    using UDIS  = regbits< type,  1,  1 >;  /**< Update disable              */
    using CEN   = regbits< type,  0,  1 >;  /**< Counter enable              */
  };

  /**
   * TIM6 control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using MMS  = regbits< type,  4,  3 >;  /**< Master mode selection  */
  };

  /**
   * TIM6 DMA/Interrupt enable register
   */
  struct DIER
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using UDE  = regbits< type,  8,  1 >;  /**< Update DMA request enable  */
    using UIE  = regbits< type,  0,  1 >;  /**< Update interrupt enable    */
  };

  /**
   * TIM6 status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using UIF  = regbits< type,  0,  1 >;  /**< Update interrupt flag  */
  };

  /**
   * TIM6 event generation register
   */
  struct EGR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x0000 >;

    using UG  = regbits< type,  0,  1 >;  /**< Update generation  */
  };

  /**
   * TIM6 counter
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x24, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x0000 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_ = regbits< type,  0, 16 >;  /**< CNT  */
  };

  /**
   * TIM6 prescaler
   */
  struct PSC
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0000 >;

    // fixme: Field name equals parent register name: PSC
    using PSC_ = regbits< type,  0, 16 >;  /**< Prescaler valueThe counter clock frequency CK_CNT is equal to fCK_PSC / (PSC[15:0] + 1).  */
  };

  /**
   * TIM6 auto-reload register
   */
  struct ARR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x0000 >;

    // fixme: Field name equals parent register name: ARR
    using ARR_ = regbits< type,  0, 16 >;  /**< Prescaler value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TIM6_HPP_INCLUDED
