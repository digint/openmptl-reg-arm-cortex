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
//  Import from CMSIS-SVD: "Holtek/ht32f275x.svd"
//
//  name: HT32F275x
//  version: 1.0
//  description: This is the description for the Holtek HT32F275x
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
 * RTC
 */
struct RTC
{
  static constexpr reg_addr_t base_addr = 0x4006a000;

  /**
   * RTC_CNT
   */
  struct RTC_CNT
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RTCCNT  = regbits< type,  0, 32 >;  /**< RTCCNT  */
  };

  /**
   * RTC_CMP
   */
  struct RTC_CMP
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RTCCMP  = regbits< type,  0, 32 >;  /**< RTCCMP  */
  };

  /**
   * RTC_CR
   */
  struct RTC_CR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RTCEN     = regbits< type,  0,  1 >;  /**< RTCEN      */
    using RTCSRC    = regbits< type,  1,  1 >;  /**< RTCSRC     */
    using LSIEN     = regbits< type,  2,  1 >;  /**< LSIEN      */
    using LSEEN     = regbits< type,  3,  1 >;  /**< LSEEN      */
    using CMPCLR    = regbits< type,  4,  1 >;  /**< CMPCLR     */
    using LSESM     = regbits< type,  5,  1 >;  /**< LSESM      */
    using RPRE      = regbits< type,  8,  4 >;  /**< RPRE       */
    using ROEN      = regbits< type, 16,  1 >;  /**< ROEN       */
    using ROES      = regbits< type, 17,  1 >;  /**< ROES       */
    using ROWM      = regbits< type, 18,  1 >;  /**< ROWM       */
    using ROAP      = regbits< type, 19,  1 >;  /**< ROAP       */
    using ROLF      = regbits< type, 20,  1 >;  /**< ROLF       */
    using RESERVED  = regbits< type, 21, 11 >;  /**< Reserved.  */
  };

  /**
   * RTC_SR
   */
  struct RTC_SR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CSECFLAG  = regbits< type,  0,  1 >;  /**< CSECFLAG   */
    using CMFLAG    = regbits< type,  1,  1 >;  /**< CMFLAG     */
    using OVFLAG    = regbits< type,  2,  1 >;  /**< OVFLAG     */
    using RESERVED  = regbits< type,  3, 29 >;  /**< Reserved.  */
  };

  /**
   * RTC_IWEN
   */
  struct RTC_IWEN
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CSECIEN   = regbits< type,  0,  1 >;  /**< CSECIEN    */
    using CMIEN     = regbits< type,  1,  1 >;  /**< CMIEN      */
    using OVIEN     = regbits< type,  2,  1 >;  /**< OVIEN      */
    using CSECWEN   = regbits< type,  8,  1 >;  /**< CSECWEN    */
    using CMWEN     = regbits< type,  9,  1 >;  /**< CMWEN      */
    using OVWEN     = regbits< type, 10,  1 >;  /**< OVWEN      */
    using RESERVED  = regbits< type, 11, 21 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
