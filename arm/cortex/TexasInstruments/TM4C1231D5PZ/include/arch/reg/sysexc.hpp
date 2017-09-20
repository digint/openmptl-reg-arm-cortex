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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C1231D5PZ.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C1231D5PZ
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SYSEXC_HPP_INCLUDED
#define ARCH_REG_SYSEXC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for SYSEXC peripheral
 */
struct SYSEXC
{
  static constexpr reg_addr_t base_addr = 0x400f9000;

  /**
   * System Exception Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSEXC_RIS_FPIDCRIS  = regbits< type,  0,  1 >;  /**< Floating-Point Input Denormal Exception Raw Interrupt Status  */
    using SYSEXC_RIS_FPDZCRIS  = regbits< type,  1,  1 >;  /**< Floating-Point Divide By 0 Exception Raw Interrupt Status     */
    using SYSEXC_RIS_FPIOCRIS  = regbits< type,  2,  1 >;  /**< Floating-Point Invalid Operation Raw Interrupt Status         */
    using SYSEXC_RIS_FPUFCRIS  = regbits< type,  3,  1 >;  /**< Floating-Point Underflow Exception Raw Interrupt Status       */
    using SYSEXC_RIS_FPOFCRIS  = regbits< type,  4,  1 >;  /**< Floating-Point Overflow Exception Raw Interrupt Status        */
    using SYSEXC_RIS_FPIXCRIS  = regbits< type,  5,  1 >;  /**< Floating-Point Inexact Exception Raw Interrupt Status         */
  };

  /**
   * System Exception Interrupt Mask
   */
  struct IM
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSEXC_IM_FPIDCIM  = regbits< type,  0,  1 >;  /**< Floating-Point Input Denormal Exception Interrupt Mask  */
    using SYSEXC_IM_FPDZCIM  = regbits< type,  1,  1 >;  /**< Floating-Point Divide By 0 Exception Interrupt Mask     */
    using SYSEXC_IM_FPIOCIM  = regbits< type,  2,  1 >;  /**< Floating-Point Invalid Operation Interrupt Mask         */
    using SYSEXC_IM_FPUFCIM  = regbits< type,  3,  1 >;  /**< Floating-Point Underflow Exception Interrupt Mask       */
    using SYSEXC_IM_FPOFCIM  = regbits< type,  4,  1 >;  /**< Floating-Point Overflow Exception Interrupt Mask        */
    using SYSEXC_IM_FPIXCIM  = regbits< type,  5,  1 >;  /**< Floating-Point Inexact Exception Interrupt Mask         */
  };

  /**
   * System Exception Masked Interrupt Status
   */
  struct MIS
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSEXC_MIS_FPIDCMIS  = regbits< type,  0,  1 >;  /**< Floating-Point Input Denormal Exception Masked Interrupt Status  */
    using SYSEXC_MIS_FPDZCMIS  = regbits< type,  1,  1 >;  /**< Floating-Point Divide By 0 Exception Masked Interrupt Status     */
    using SYSEXC_MIS_FPIOCMIS  = regbits< type,  2,  1 >;  /**< Floating-Point Invalid Operation Masked Interrupt Status         */
    using SYSEXC_MIS_FPUFCMIS  = regbits< type,  3,  1 >;  /**< Floating-Point Underflow Exception Masked Interrupt Status       */
    using SYSEXC_MIS_FPOFCMIS  = regbits< type,  4,  1 >;  /**< Floating-Point Overflow Exception Masked Interrupt Status        */
    using SYSEXC_MIS_FPIXCMIS  = regbits< type,  5,  1 >;  /**< Floating-Point Inexact Exception Masked Interrupt Status         */
  };

  /**
   * System Exception Interrupt Clear
   */
  struct IC
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using SYSEXC_IC_FPIDCIC  = regbits< type,  0,  1 >;  /**< Floating-Point Input Denormal Exception Interrupt Clear  */
    using SYSEXC_IC_FPDZCIC  = regbits< type,  1,  1 >;  /**< Floating-Point Divide By 0 Exception Interrupt Clear     */
    using SYSEXC_IC_FPIOCIC  = regbits< type,  2,  1 >;  /**< Floating-Point Invalid Operation Interrupt Clear         */
    using SYSEXC_IC_FPUFCIC  = regbits< type,  3,  1 >;  /**< Floating-Point Underflow Exception Interrupt Clear       */
    using SYSEXC_IC_FPOFCIC  = regbits< type,  4,  1 >;  /**< Floating-Point Overflow Exception Interrupt Clear        */
    using SYSEXC_IC_FPIXCIC  = regbits< type,  5,  1 >;  /**< Floating-Point Inexact Exception Interrupt Clear         */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSEXC_HPP_INCLUDED
