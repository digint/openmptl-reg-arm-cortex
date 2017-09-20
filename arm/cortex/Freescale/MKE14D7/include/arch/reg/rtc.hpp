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
//  Import from CMSIS-SVD: "Freescale/MKE14D7.svd"
//
//  name: MKE14D7
//  version: 1.6
//  description: MKE14D7 Freescale Microcontroller
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
  static constexpr reg_addr_t base_addr = 0x4002d000;

  /**
   * RTC Status and Control Register
   */
  struct SC
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using RESERVED  = regbits< type,  0,  4 >;  /**< no description available          */
    using RTCO      = regbits< type,  4,  1 >;  /**< Real-Time Counter Output          */
    using DMAE      = regbits< type,  5,  1 >;  /**< DMA Enable                        */
    using RTIE      = regbits< type,  6,  1 >;  /**< Real-Time Interrupt Enable        */
    using RTIF      = regbits< type,  7,  1 >;  /**< Real-Time Interrupt Flag          */
    using RTCPS     = regbits< type,  8,  3 >;  /**< Real-Time Clock Prescaler Select  */
    using RESERVED  = regbits< type, 11,  3 >;  /**< no description available          */
    using RTCLKS    = regbits< type, 14,  2 >;  /**< Real-Time Clock Source Select     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available          */
  };

  /**
   * RTC Modulo Register
   */
  struct MOD
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    // fixme: Field name equals parent register name: MOD
    using MOD_      = regbits< type,  0, 16 >;  /**< RTC Modulo                */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * RTC Counter Register
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_      = regbits< type,  0, 16 >;  /**< RTC Count                 */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
