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
//  Import from CMSIS-SVD: "Holtek/ht32f175x.svd"
//
//  name: HT32F175x
//  version: 1.0
//  description: This is the description for the Holtek HT32F175x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWRCU_HPP_INCLUDED
#define ARCH_REG_PWRCU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * PWRCU
 */
struct PWRCU
{
  static constexpr reg_addr_t base_addr = 0x4006a100;

  /**
   * PWRCU_BAKSR
   */
  struct PWRCU_BAKSR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKPORF   = regbits< type,  0,  1 >;  /**< BAKPORF    */
    using PDF       = regbits< type,  1,  1 >;  /**< PDF        */
    using WUPF      = regbits< type,  8,  1 >;  /**< WUPF       */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * PWRCU_BAKCR
   */
  struct PWRCU_BAKCR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKRST    = regbits< type,  0,  1 >;  /**< BAKRST     */
    using LDOOFF    = regbits< type,  3,  1 >;  /**< LDOOFF     */
    using DMOSON    = regbits< type,  7,  1 >;  /**< DMOSON     */
    using WUPEN     = regbits< type,  8,  1 >;  /**< WUPEN      */
    using WUPIEN    = regbits< type,  9,  1 >;  /**< WUPIEN     */
    using V18RDYSC  = regbits< type, 12,  1 >;  /**< V18RDYSC   */
    using DMOSSTS   = regbits< type, 15,  1 >;  /**< DMOSSTS    */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * PWRCU_BAKTEST
   */
  struct PWRCU_BAKTEST
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKTEST   = regbits< type,  0,  8 >;  /**< BAKTEST    */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * PWRCU_HSIRCR
   */
  struct PWRCU_HSIRCR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HSIRCBL   = regbits< type,  0,  2 >;  /**< HSIRCBL    */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * PWRCU_LVDCSR
   */
  struct PWRCU_LVDCSR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BODEN     = regbits< type,  0,  1 >;  /**< BODEN      */
    using BODRIS    = regbits< type,  1,  1 >;  /**< BODRIS     */
    using BODF      = regbits< type,  3,  1 >;  /**< BODF       */
    using LVDEN     = regbits< type, 16,  1 >;  /**< LVDEN      */
    using LVDS      = regbits< type, 17,  2 >;  /**< LVDS       */
    using LVDF      = regbits< type, 19,  1 >;  /**< LVDF       */
    using LVDIWEN   = regbits< type, 20,  1 >;  /**< LVDIWEN    */
    using LVDEWEN   = regbits< type, 21,  1 >;  /**< LVDEWEN    */
    using RESERVED  = regbits< type, 22, 10 >;  /**< Reserved.  */
  };

  /**
   * PWRCU_BAKREG0
   */
  struct PWRCU_BAKREG0
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };

  /**
   * PWRCU_BAKREG1
   */
  struct PWRCU_BAKREG1
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };

  /**
   * PWRCU_BAKREG2
   */
  struct PWRCU_BAKREG2
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };

  /**
   * PWRCU_BAKREG3
   */
  struct PWRCU_BAKREG3
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };

  /**
   * PWRCU_BAKREG4
   */
  struct PWRCU_BAKREG4
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };

  /**
   * PWRCU_BAKREG5
   */
  struct PWRCU_BAKREG5
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };

  /**
   * PWRCU_BAKREG6
   */
  struct PWRCU_BAKREG6
  : public reg< uint32_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };

  /**
   * PWRCU_BAKREG7
   */
  struct PWRCU_BAKREG7
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };

  /**
   * PWRCU_BAKREG8
   */
  struct PWRCU_BAKREG8
  : public reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };

  /**
   * PWRCU_BAKREG9
   */
  struct PWRCU_BAKREG9
  : public reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BAKREG  = regbits< type,  0, 32 >;  /**< BAKREG  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWRCU_HPP_INCLUDED
