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
//  Import from CMSIS-SVD: "Spansion/MB9BF16xx.svd"
//
//  name: MB9BF16xx
//  version: 1.0
//  description: MB9BF16xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DS_HPP_INCLUDED
#define ARCH_REG_DS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral DS
 */
struct DS
{
  static constexpr reg_addr_t base_addr = 0x40035100;

  /**
   * register RCK_CTL
   */
  struct RCK_CTL
  : public reg< uint8_t, base_addr + 0x4, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x01 >;

    using RTCCKE  = regbits< type,  0,  1 >;  /**< bitfield RTCCKE  */
  };

  /**
   * register PMD_CTL
   */
  struct PMD_CTL
  : public reg< uint8_t, base_addr + 0x700, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x700, rw, 0x00 >;

    using RTCE  = regbits< type,  0,  1 >;  /**< bitfield RTCE  */
  };

  /**
   * register WRFSR
   */
  struct WRFSR
  : public reg< uint8_t, base_addr + 0x704, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x704, rw, 0x00 >;

    using WLVDH   = regbits< type,  1,  1 >;  /**< bitfield WLVDH   */
    using WINITX  = regbits< type,  0,  1 >;  /**< bitfield WINITX  */
  };

  /**
   * register WIFSR
   */
  struct WIFSR
  : public reg< uint16_t, base_addr + 0x708, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x708, ro, 0x0000 >;

    using WUI5   = regbits< type,  7,  1 >;  /**< bitfield WUI5   */
    using WUI4   = regbits< type,  6,  1 >;  /**< bitfield WUI4   */
    using WUI3   = regbits< type,  5,  1 >;  /**< bitfield WUI3   */
    using WUI2   = regbits< type,  4,  1 >;  /**< bitfield WUI2   */
    using WUI1   = regbits< type,  3,  1 >;  /**< bitfield WUI1   */
    using WUI0   = regbits< type,  2,  1 >;  /**< bitfield WUI0   */
    using WLVDI  = regbits< type,  1,  1 >;  /**< bitfield WLVDI  */
    using WRTCI  = regbits< type,  0,  1 >;  /**< bitfield WRTCI  */
  };

  /**
   * register WIER
   */
  struct WIER
  : public reg< uint16_t, base_addr + 0x70c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x70c, rw, 0x0000 >;

    using WUI5E  = regbits< type,  7,  1 >;  /**< bitfield WUI5E  */
    using WUI4E  = regbits< type,  6,  1 >;  /**< bitfield WUI4E  */
    using WUI3E  = regbits< type,  5,  1 >;  /**< bitfield WUI3E  */
    using WUI2E  = regbits< type,  4,  1 >;  /**< bitfield WUI2E  */
    using WUI1E  = regbits< type,  3,  1 >;  /**< bitfield WUI1E  */
    using WLVDE  = regbits< type,  1,  1 >;  /**< bitfield WLVDE  */
    using WRTCE  = regbits< type,  0,  1 >;  /**< bitfield WRTCE  */
  };

  /**
   * register WILVR
   */
  struct WILVR
  : public reg< uint8_t, base_addr + 0x710, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x710, rw, 0x00 >;

    using WUI5LV  = regbits< type,  4,  1 >;  /**< bitfield WUI5LV  */
    using WUI4LV  = regbits< type,  3,  1 >;  /**< bitfield WUI4LV  */
    using WUI3LV  = regbits< type,  2,  1 >;  /**< bitfield WUI3LV  */
    using WUI2LV  = regbits< type,  1,  1 >;  /**< bitfield WUI2LV  */
    using WUI1LV  = regbits< type,  0,  1 >;  /**< bitfield WUI1LV  */
  };

  /**
   * register DSRAMR
   */
  struct DSRAMR
  : public reg< uint8_t, base_addr + 0x714, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x714, rw, 0x00 >;

    using SRAMR  = regbits< type,  0,  2 >;  /**< bitfield SRAMR  */
  };

  /**
   * register BUR01
   */
  struct BUR01
  : public reg< uint8_t, base_addr + 0x800, rw, 0x00 >
  {
  };

  /**
   * register BUR02
   */
  struct BUR02
  : public reg< uint8_t, base_addr + 0x801, rw, 0x00 >
  {
  };

  /**
   * register BUR03
   */
  struct BUR03
  : public reg< uint8_t, base_addr + 0x802, rw, 0x00 >
  {
  };

  /**
   * register BUR04
   */
  struct BUR04
  : public reg< uint8_t, base_addr + 0x803, rw, 0x00 >
  {
  };

  /**
   * register BUR05
   */
  struct BUR05
  : public reg< uint8_t, base_addr + 0x804, rw, 0x00 >
  {
  };

  /**
   * register BUR06
   */
  struct BUR06
  : public reg< uint8_t, base_addr + 0x805, rw, 0x00 >
  {
  };

  /**
   * register BUR07
   */
  struct BUR07
  : public reg< uint8_t, base_addr + 0x806, rw, 0x00 >
  {
  };

  /**
   * register BUR08
   */
  struct BUR08
  : public reg< uint8_t, base_addr + 0x807, rw, 0x00 >
  {
  };

  /**
   * register BUR09
   */
  struct BUR09
  : public reg< uint8_t, base_addr + 0x808, rw, 0x00 >
  {
  };

  /**
   * register BUR10
   */
  struct BUR10
  : public reg< uint8_t, base_addr + 0x809, rw, 0x00 >
  {
  };

  /**
   * register BUR11
   */
  struct BUR11
  : public reg< uint8_t, base_addr + 0x80a, rw, 0x00 >
  {
  };

  /**
   * register BUR12
   */
  struct BUR12
  : public reg< uint8_t, base_addr + 0x80b, rw, 0x00 >
  {
  };

  /**
   * register BUR13
   */
  struct BUR13
  : public reg< uint8_t, base_addr + 0x80c, rw, 0x00 >
  {
  };

  /**
   * register BUR14
   */
  struct BUR14
  : public reg< uint8_t, base_addr + 0x80d, rw, 0x00 >
  {
  };

  /**
   * register BUR15
   */
  struct BUR15
  : public reg< uint8_t, base_addr + 0x80e, rw, 0x00 >
  {
  };

  /**
   * register BUR16
   */
  struct BUR16
  : public reg< uint8_t, base_addr + 0x80f, rw, 0x00 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_DS_HPP_INCLUDED
