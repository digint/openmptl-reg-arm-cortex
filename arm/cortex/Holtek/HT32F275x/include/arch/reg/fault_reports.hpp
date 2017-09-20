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

#ifndef ARCH_REG_FAULT_REPORTS_HPP_INCLUDED
#define ARCH_REG_FAULT_REPORTS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Fault_Reports
 */
struct Fault_Reports
{
  static constexpr reg_addr_t base_addr = 0xe000ed28;

  /**
   * CFSR
   */
  struct CFSR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MFSR  = regbits< type,  0,  8 >;  /**< MFSR  */
    using BFSR  = regbits< type,  8,  8 >;  /**< BFSR  */
    using UFSR  = regbits< type, 16, 16 >;  /**< UFSR  */
  };

  /**
   * MFSR
   */
  struct MFSR
  : public reg< uint8_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IACCVIOL   = regbits< type,  0,  1 >;  /**< IACCVIOL   */
    using DACCVIOL   = regbits< type,  1,  1 >;  /**< DACCVIOL   */
    using MUNSTKERR  = regbits< type,  3,  1 >;  /**< MUNSTKERR  */
    using MSTKERR    = regbits< type,  4,  1 >;  /**< MSTKERR    */
    using MMARVALID  = regbits< type,  7,  1 >;  /**< MMARVALID  */
  };

  /**
   * MMFAR
   */
  struct MMFAR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADDRESS  = regbits< type,  0, 32 >;  /**< ADDRESS  */
  };

  /**
   * BFSR
   */
  struct BFSR
  : public reg< uint8_t, base_addr + 0x00000001, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000001, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IBUSERR      = regbits< type,  0,  1 >;  /**< IBUSERR      */
    using PRECISERR    = regbits< type,  1,  1 >;  /**< PRECISERR    */
    using IMPRECISERR  = regbits< type,  2,  1 >;  /**< IMPRECISERR  */
    using UNSTKERR     = regbits< type,  3,  1 >;  /**< UNSTKERR     */
    using STKERR       = regbits< type,  4,  1 >;  /**< STKERR       */
    using BFARVALID    = regbits< type,  7,  1 >;  /**< BFARVALID    */
  };

  /**
   * BFAR
   */
  struct BFAR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADDRESS  = regbits< type,  0, 32 >;  /**< ADDRESS  */
  };

  /**
   * UFSR
   */
  struct UFSR
  : public reg< uint16_t, base_addr + 0x00000002, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000002, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UNDEFINSTR  = regbits< type,  0,  1 >;  /**< UNDEFINSTR  */
    using INVSTATE    = regbits< type,  1,  1 >;  /**< INVSTATE    */
    using INVPC       = regbits< type,  2,  1 >;  /**< INVPC       */
    using NOCP        = regbits< type,  3,  1 >;  /**< NOCP        */
    using UNALIGNED   = regbits< type,  8,  1 >;  /**< UNALIGNED   */
    using DIVBYZERO   = regbits< type,  9,  1 >;  /**< DIVBYZERO   */
    using RESERVED    = regbits< type, 10,  6 >;  /**< Reserved.   */
  };

  /**
   * HFSR
   */
  struct HFSR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using VECTTBL   = regbits< type,  1,  1 >;  /**< VECTTBL   */
    using FORCED    = regbits< type, 30,  1 >;  /**< FORCED    */
    using DEBUGEVT  = regbits< type, 31,  1 >;  /**< DEBUGEVT  */
  };

  /**
   * DFSR
   */
  struct DFSR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HALTED    = regbits< type,  0,  1 >;  /**< HALTED     */
    using BKPT      = regbits< type,  1,  1 >;  /**< BKPT       */
    using DWTTRAP   = regbits< type,  2,  1 >;  /**< DWTTRAP    */
    using VCATCH    = regbits< type,  3,  1 >;  /**< VCATCH     */
    using EXTERNAL  = regbits< type,  4,  1 >;  /**< EXTERNAL   */
    using RESERVED  = regbits< type,  5, 27 >;  /**< Reserved.  */
  };

  /**
   * AFSR
   */
  struct AFSR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IMPDEF  = regbits< type,  0, 32 >;  /**< IMPDEF  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FAULT_REPORTS_HPP_INCLUDED
