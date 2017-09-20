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
//  Import from CMSIS-SVD: "Freescale/SKEAZN84.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZN84
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZN84 Freescale Microcontroller
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
 * Real-time counter
 */
struct RTC
{
  static constexpr reg_addr_t base_addr = 0x4003d000;

  /**
   * RTC Status and Control Register
   */
  struct SC
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using RTCO    = regbits< type,  4,  1 >;  /**< Real-Time Counter Output          */
    using RTIE    = regbits< type,  6,  1 >;  /**< Real-Time Interrupt Enable        */
    using RTIF    = regbits< type,  7,  1 >;  /**< Real-Time Interrupt Flag          */
    using RTCPS   = regbits< type,  8,  3 >;  /**< Real-Time Clock Prescaler Select  */
    using RTCLKS  = regbits< type, 14,  2 >;  /**< Real-Time Clock Source Select     */
  };

  /**
   * RTC Modulo Register
   */
  struct MOD
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    // fixme: Field name equals parent register name: MOD
    using MOD_ = regbits< type,  0, 16 >;  /**< RTC Modulo  */
  };

  /**
   * RTC Counter Register
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_ = regbits< type,  0, 16 >;  /**< RTC Count  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
