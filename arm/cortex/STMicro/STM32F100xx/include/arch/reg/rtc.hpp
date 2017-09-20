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
//  Import from CMSIS-SVD: "STMicro/STM32F100xx.svd"
//
//  name: STM32F100xx
//  version: 1.1
//  description: STM32F100xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RTC_HPP_INCLUDED
#define ARCH_REG_RTC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Real time clock
 */
struct RTC
{
  static constexpr reg_addr_t base_addr = 0x40002800;

  /**
   * RTC Control Register High
   */
  struct CRH
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using SECIE  = regbits< type,  0,  1 >;  /**< Second interrupt Enable    */
    using ALRIE  = regbits< type,  1,  1 >;  /**< Alarm interrupt Enable     */
    using OWIE   = regbits< type,  2,  1 >;  /**< Overflow interrupt Enable  */
  };

  /**
   * RTC Control Register Low
   */
  struct CRL
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000020 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000020 >;

    using SECF   = regbits< type,  0,  1 >;  /**< Second Flag                  */
    using ALRF   = regbits< type,  1,  1 >;  /**< Alarm Flag                   */
    using OWF    = regbits< type,  2,  1 >;  /**< Overflow Flag                */
    using RSF    = regbits< type,  3,  1 >;  /**< Registers Synchronized Flag  */
    using CNF    = regbits< type,  4,  1 >;  /**< Configuration Flag           */
    using RTOFF  = regbits< type,  5,  1 >;  /**< RTC operation OFF            */
  };

  /**
   * RTC Prescaler Load Register High
   */
  struct PRLH
  : public reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: PRLH
    using PRLH_ = regbits< type,  0,  4 >;  /**< RTC Prescaler Load Register High  */
  };

  /**
   * RTC Prescaler Load Register Low
   */
  struct PRLL
  : public reg< uint32_t, base_addr + 0xc, wo, 0x8000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, wo, 0x8000 >;

    // fixme: Field name equals parent register name: PRLL
    using PRLL_ = regbits< type,  0, 16 >;  /**< RTC Prescaler Divider Register Low  */
  };

  /**
   * RTC Prescaler Divider Register High
   */
  struct DIVH
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: DIVH
    using DIVH_ = regbits< type,  0,  4 >;  /**< RTC prescaler divider register high  */
  };

  /**
   * RTC Prescaler Divider Register Low
   */
  struct DIVL
  : public reg< uint32_t, base_addr + 0x14, ro, 0x8000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x8000 >;

    // fixme: Field name equals parent register name: DIVL
    using DIVL_ = regbits< type,  0, 16 >;  /**< RTC prescaler divider register Low  */
  };

  /**
   * RTC Counter Register High
   */
  struct CNTH
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CNTH
    using CNTH_ = regbits< type,  0, 16 >;  /**< RTC counter register high  */
  };

  /**
   * RTC Counter Register Low
   */
  struct CNTL
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CNTL
    using CNTL_ = regbits< type,  0, 16 >;  /**< RTC counter register Low  */
  };

  /**
   * RTC Alarm Register High
   */
  struct ALRH
  : public reg< uint32_t, base_addr + 0x20, wo, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x20, wo, 0xFFFF >;

    // fixme: Field name equals parent register name: ALRH
    using ALRH_ = regbits< type,  0, 16 >;  /**< RTC alarm register high  */
  };

  /**
   * RTC Alarm Register Low
   */
  struct ALRL
  : public reg< uint32_t, base_addr + 0x24, wo, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x24, wo, 0xFFFF >;

    // fixme: Field name equals parent register name: ALRL
    using ALRL_ = regbits< type,  0, 16 >;  /**< RTC alarm register low  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
