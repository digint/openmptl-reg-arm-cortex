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
//  Import from CMSIS-SVD: "Spansion/MB9BF12xJ.svd"
//
//  name: MB9BF12xJ
//  version: 1.0
//  description: MB9BF12xJ
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
 * peripheral DTIM
 */
struct DTIM
{
  static constexpr reg_addr_t base_addr = 0x40015000;

  /**
   * register TIMER1LOAD
   */
  struct TIMER1LOAD
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
  };

  /**
   * register TIMER1VALUE
   */
  struct TIMER1VALUE
  : public reg< uint32_t, base_addr + 0x4, ro, 0xFFFFFFFF >
  {
  };

  /**
   * register TIMER1CONTROL
   */
  struct TIMER1CONTROL
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000020 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000020 >;

    using TimerEn    = regbits< type,  7,  1 >;  /**< bitfield TimerEn    */
    using TimerMode  = regbits< type,  6,  1 >;  /**< bitfield TimerMode  */
    using IntEnable  = regbits< type,  5,  1 >;  /**< bitfield IntEnable  */
    using TimerPre   = regbits< type,  2,  2 >;  /**< bitfield TimerPre   */
    using TimerSize  = regbits< type,  1,  1 >;  /**< bitfield TimerSize  */
    using OneShot    = regbits< type,  0,  1 >;  /**< bitfield OneShot    */
  };

  /**
   * register TIMER1INTCLR
   */
  struct TIMER1INTCLR
  : public reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >
  {
  };

  /**
   * register TIMER1RIS
   */
  struct TIMER1RIS
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: TIMER1RIS
    using TIMER1RIS_ = regbits< type,  0,  1 >;  /**< bitfield TIMER1RIS  */
  };

  /**
   * register TIMER1MIS
   */
  struct TIMER1MIS
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: TIMER1MIS
    using TIMER1MIS_ = regbits< type,  0,  1 >;  /**< bitfield TIMER1MIS  */
  };

  /**
   * register TIMER1BGLOAD
   */
  struct TIMER1BGLOAD
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
  };

  /**
   * register TIMER2LOAD
   *
   * (derived from: TIMER1LOAD)
   */
  struct TIMER2LOAD
  : public reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIMER2VALUE
   *
   * (derived from: TIMER1VALUE)
   */
  struct TIMER2VALUE
  : public reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIMER2CONTROL
   *
   * (derived from: TIMER1CONTROL)
   */
  struct TIMER2CONTROL
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIMER2INTCLR
   *
   * (derived from: TIMER1INTCLR)
   */
  struct TIMER2INTCLR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIMER2RIS
   *
   * (derived from: TIMER1RIS)
   */
  struct TIMER2RIS
  : public reg< uint32_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIMER2MIS
   *
   * (derived from: TIMER1MIS)
   */
  struct TIMER2MIS
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIMER2BGLOAD
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
