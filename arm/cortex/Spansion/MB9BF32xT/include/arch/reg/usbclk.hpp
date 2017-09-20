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
//  Import from CMSIS-SVD: "Spansion/MB9BF32xT.svd"
//
//  name: MB9BF32xT
//  version: 1.0
//  description: MB9BF32xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USBCLK_HPP_INCLUDED
#define ARCH_REG_USBCLK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral USBCLK
 */
struct USBCLK
{
  static constexpr reg_addr_t base_addr = 0x40036000;

  /**
   * register UCCR
   */
  struct UCCR
  : public reg< uint8_t, base_addr + 0x00, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x00, rw, 0x00 >;

    using UCSEL  = regbits< type,  1,  1 >;  /**< bitfield UCSEL  */
    using UCEN   = regbits< type,  0,  1 >;  /**< bitfield UCEN   */
  };

  /**
   * register UPCR1
   */
  struct UPCR1
  : public reg< uint8_t, base_addr + 0x04, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x04, rw, 0x00 >;

    using UPINC   = regbits< type,  1,  1 >;  /**< bitfield UPINC   */
    using UPLLEN  = regbits< type,  0,  1 >;  /**< bitfield UPLLEN  */
  };

  /**
   * register UPCR2
   */
  struct UPCR2
  : public reg< uint8_t, base_addr + 0x08, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x08, rw, 0x00 >;

    using UPOWT  = regbits< type,  0,  3 >;  /**< bitfield UPOWT  */
  };

  /**
   * register UPCR3
   */
  struct UPCR3
  : public reg< uint8_t, base_addr + 0x0c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0c, rw, 0x00 >;

    using UPLLK  = regbits< type,  0,  5 >;  /**< bitfield UPLLK  */
  };

  /**
   * register UPCR4
   */
  struct UPCR4
  : public reg< uint8_t, base_addr + 0x10, rw, 0x17 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x17 >;

    using UPLLN  = regbits< type,  0,  5 >;  /**< bitfield UPLLN  */
  };

  /**
   * register UPCR5
   */
  struct UPCR5
  : public reg< uint8_t, base_addr + 0x24, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0x04 >;

    using UPLLM  = regbits< type,  0,  4 >;  /**< bitfield UPLLM  */
  };

  /**
   * register UP_STR
   */
  struct UP_STR
  : public reg< uint8_t, base_addr + 0x14, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, ro, 0x00 >;

    using UPRDY  = regbits< type,  0,  1 >;  /**< bitfield UPRDY  */
  };

  /**
   * register UPINT_ENR
   */
  struct UPINT_ENR
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x00 >;

    using UPCSE  = regbits< type,  0,  1 >;  /**< bitfield UPCSE  */
  };

  /**
   * register UPINT_STR
   */
  struct UPINT_STR
  : public reg< uint8_t, base_addr + 0x20, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, ro, 0x00 >;

    using UPCSI  = regbits< type,  0,  1 >;  /**< bitfield UPCSI  */
  };

  /**
   * register UPINT_CLR
   */
  struct UPINT_CLR
  : public reg< uint8_t, base_addr + 0x1c, wo, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, wo, 0x00 >;

    using UPCSC  = regbits< type,  0,  1 >;  /**< bitfield UPCSC  */
  };

  /**
   * register USBEN
   */
  struct USBEN
  : public reg< uint8_t, base_addr + 0x30, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x00 >;

    // fixme: Field name equals parent register name: USBEN
    using USBEN_ = regbits< type,  0,  1 >;  /**< bitfield USBEN  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USBCLK_HPP_INCLUDED
