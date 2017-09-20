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
//  Import from CMSIS-SVD: "STMicro/STM32F7x6.svd"
//
//  name: STM32F7x6
//  version: 1.0
//  description: STM32F7x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TIM11_HPP_INCLUDED
#define ARCH_REG_TIM11_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General-purpose-timers
 *
 * (derived from: TIM10)
 */
struct TIM11
{
  static constexpr reg_addr_t base_addr = 0x40014800;

  /**
   * control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using CKD   = regbits< type,  8,  2 >;  /**< Clock division              */
    using ARPE  = regbits< type,  7,  1 >;  /**< Auto-reload preload enable  */
    using URS   = regbits< type,  2,  1 >;  /**< Update request source       */
    using UDIS  = regbits< type,  1,  1 >;  /**< Update disable              */
    using CEN   = regbits< type,  0,  1 >;  /**< Counter enable              */
  };

  /**
   * DMA/Interrupt enable register
   */
  struct DIER
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using CC1IE  = regbits< type,  1,  1 >;  /**< Capture/Compare 1 interrupt enable  */
    using UIE    = regbits< type,  0,  1 >;  /**< Update interrupt enable             */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using CC1OF  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 overcapture flag  */
    using CC1IF  = regbits< type,  1,  1 >;  /**< Capture/compare 1 interrupt flag    */
    using UIF    = regbits< type,  0,  1 >;  /**< Update interrupt flag               */
  };

  /**
   * event generation register
   */
  struct EGR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x0000 >;

    using CC1G  = regbits< type,  1,  1 >;  /**< Capture/compare 1 generation  */
    using UG    = regbits< type,  0,  1 >;  /**< Update generation             */
  };

  /**
   * capture/compare mode register 1 (output mode)
   */
  struct CCMR1_Output
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using OC1M   = regbits< type,  4,  3 >;  /**< Output Compare 1 mode            */
    using OC1PE  = regbits< type,  3,  1 >;  /**< Output Compare 1 preload enable  */
    using OC1FE  = regbits< type,  2,  1 >;  /**< Output Compare 1 fast enable     */
    using CC1S   = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection      */
  };

  /**
   * capture/compare mode register 1 (input mode)
   */
  struct CCMR1_Input
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using IC1F   = regbits< type,  4,  4 >;  /**< Input capture 1 filter       */
    using ICPCS  = regbits< type,  2,  2 >;  /**< Input capture 1 prescaler    */
    using CC1S   = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection  */
  };

  /**
   * capture/compare enable register
   */
  struct CCER
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0000 >;

    using CC1NP  = regbits< type,  3,  1 >;  /**< Capture/Compare 1 output Polarity  */
    using CC1P   = regbits< type,  1,  1 >;  /**< Capture/Compare 1 output Polarity  */
    using CC1E   = regbits< type,  0,  1 >;  /**< Capture/Compare 1 output enable    */
  };

  /**
   * counter
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_ = regbits< type,  0, 16 >;  /**< counter value  */
  };

  /**
   * prescaler
   */
  struct PSC
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0000 >;

    // fixme: Field name equals parent register name: PSC
    using PSC_ = regbits< type,  0, 16 >;  /**< Prescaler value  */
  };

  /**
   * auto-reload register
   */
  struct ARR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: ARR
    using ARR_ = regbits< type,  0, 16 >;  /**< Auto-reload value  */
  };

  /**
   * capture/compare register 1
   */
  struct CCR1
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR1
    using CCR1_ = regbits< type,  0, 16 >;  /**< Capture/Compare 1 value  */
  };

  /**
   * slave mode control register
   */
  struct SMCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using SMS3  = regbits< type, 16,  1 >;  /**< Slave mode selection        */
    using ETP   = regbits< type, 15,  1 >;  /**< External trigger polarity   */
    using ECE   = regbits< type, 14,  1 >;  /**< External clock enable       */
    using ETPS  = regbits< type, 12,  2 >;  /**< External trigger prescaler  */
    using ETF   = regbits< type,  8,  4 >;  /**< External trigger filter     */
    using MSM   = regbits< type,  7,  1 >;  /**< Master/slave mode           */
    using TS    = regbits< type,  4,  3 >;  /**< Trigger selection           */
    using SMS   = regbits< type,  0,  3 >;  /**< Slave mode selection        */
  };

  /**
   * option register
   */
  struct OR
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using TI1_RMP  = regbits< type,  0,  2 >;  /**< TIM11 Input 1 remapping capability  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TIM11_HPP_INCLUDED
