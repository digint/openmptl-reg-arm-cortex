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
//  Import from CMSIS-SVD: "Spansion/MB9BF10xN.svd"
//
//  name: MB9BF10xN
//  version: 1.7
//  description: MB9BF10xN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DTIM_HPP_INCLUDED
#define ARCH_REG_DTIM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Dual Timer
 */
struct DTIM
{
  static constexpr reg_addr_t base_addr = 0x40015000;

  /**
   * Load Register
   */
  struct TIMER1LOAD
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
  };

  /**
   * Value Register
   */
  struct TIMER1VALUE
  : public reg< uint32_t, base_addr + 0x4, ro, 0xFFFFFFFF >
  {
  };

  /**
   * Control Register
   */
  struct TIMER1CONTROL
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000020 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000020 >;

    using TimerEn    = regbits< type,  7,  1 >;  /**< Enable bit            */
    using TimerMode  = regbits< type,  6,  1 >;  /**< Mode bit              */
    using IntEnable  = regbits< type,  5,  1 >;  /**< Interrupt enable bit  */
    using TimerPre   = regbits< type,  2,  2 >;  /**< Prescale bits         */
    using TimerSize  = regbits< type,  1,  1 >;  /**< Counter size bit      */
    using OneShot    = regbits< type,  0,  1 >;  /**< One-shot mode bit     */
  };

  /**
   * Interrupt Clear Register
   */
  struct TIMER1INTCLR
  : public reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >
  {
  };

  /**
   * Interrupt Status Register
   */
  struct TIMER1RIS
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: TIMER1RIS
    using TIMER1RIS_ = regbits< type,  0,  1 >;  /**< Interrupt Status Register bit  */
  };

  /**
   * Masked Interrupt Status Register
   */
  struct TIMER1MIS
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: TIMER1MIS
    using TIMER1MIS_ = regbits< type,  0,  1 >;  /**< Masked Interrupt Status bit  */
  };

  /**
   * Background Load Register
   */
  struct TIMER1BGLOAD
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
  };

  /**
   * Load Register
   *
   * (derived from: TIMER1LOAD)
   */
  struct TIMER2LOAD
  : public reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Value Register
   *
   * (derived from: TIMER1VALUE)
   */
  struct TIMER2VALUE
  : public reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Control Register
   *
   * (derived from: TIMER1CONTROL)
   */
  struct TIMER2CONTROL
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Interrupt Clear Register
   *
   * (derived from: TIMER1INTCLR)
   */
  struct TIMER2INTCLR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Interrupt Status Register
   *
   * (derived from: TIMER1RIS)
   */
  struct TIMER2RIS
  : public reg< uint32_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Masked Interrupt Status Register
   *
   * (derived from: TIMER1MIS)
   */
  struct TIMER2MIS
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Background Load Register
   *
   * (derived from: TIMER1BGLOAD)
   */
  struct TIMER2BGLOAD
  : public reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_DTIM_HPP_INCLUDED
