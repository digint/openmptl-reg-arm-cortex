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
//  Import from CMSIS-SVD: "Spansion/MB9BF12xS.svd"
//
//  name: MB9BF12xS
//  version: 1.0
//  description: MB9BF12xS
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EXBUS_HPP_INCLUDED
#define ARCH_REG_EXBUS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral EXBUS
 */
struct EXBUS
{
  static constexpr reg_addr_t base_addr = 0x4003f000;

  /**
   * register MODE0
   */
  struct MODE0
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using MOEXEUP   = regbits< type, 13,  1 >;  /**< bitfield MOEXEUP   */
    using MPXCSOF   = regbits< type, 12,  1 >;  /**< bitfield MPXCSOF   */
    using MPXDOFF   = regbits< type, 11,  1 >;  /**< bitfield MPXDOFF   */
    using ALEINV    = regbits< type,  9,  1 >;  /**< bitfield ALEINV    */
    using MPXMODE   = regbits< type,  8,  1 >;  /**< bitfield MPXMODE   */
    using SHRTDOUT  = regbits< type,  7,  1 >;  /**< bitfield SHRTDOUT  */
    using RDY       = regbits< type,  6,  1 >;  /**< bitfield RDY       */
    using PAGE      = regbits< type,  5,  1 >;  /**< bitfield PAGE      */
    using NAND      = regbits< type,  4,  1 >;  /**< bitfield NAND      */
    using WEOFF     = regbits< type,  3,  1 >;  /**< bitfield WEOFF     */
    using RBMON     = regbits< type,  2,  1 >;  /**< bitfield RBMON     */
    using WDTH      = regbits< type,  0,  2 >;  /**< bitfield WDTH      */
  };

  /**
   * register MODE1
   *
   * (derived from: MODE0)
   */
  struct MODE1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register MODE2
   *
   * (derived from: MODE0)
   */
  struct MODE2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register MODE3
   *
   * (derived from: MODE0)
   */
  struct MODE3
  : public reg< uint32_t, base_addr + 0xc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register MODE4
   *
   * (derived from: MODE0)
   */
  struct MODE4
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register MODE5
   *
   * (derived from: MODE0)
   */
  struct MODE5
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register MODE6
   *
   * (derived from: MODE0)
   */
  struct MODE6
  : public reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register MODE7
   *
   * (derived from: MODE0)
   */
  struct MODE7
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIM0
   */
  struct TIM0
  : public reg< uint32_t, base_addr + 0x20, rw, 0x055FF00F >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x055FF00F >;

    using WIDLC  = regbits< type, 28,  4 >;  /**< bitfield WIDLC  */
    using WWEC   = regbits< type, 24,  4 >;  /**< bitfield WWEC   */
    using WADC   = regbits< type, 20,  4 >;  /**< bitfield WADC   */
    using WACC   = regbits< type, 16,  4 >;  /**< bitfield WACC   */
    using RIDLC  = regbits< type, 12,  4 >;  /**< bitfield RIDLC  */
    using FRADC  = regbits< type,  8,  4 >;  /**< bitfield FRADC  */
    using RADC   = regbits< type,  4,  4 >;  /**< bitfield RADC   */
    using RACC   = regbits< type,  0,  4 >;  /**< bitfield RACC   */
  };

  /**
   * register TIM1
   *
   * (derived from: TIM0)
   */
  struct TIM1
  : public reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIM2
   *
   * (derived from: TIM0)
   */
  struct TIM2
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIM3
   *
   * (derived from: TIM0)
   */
  struct TIM3
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIM4
   *
   * (derived from: TIM0)
   */
  struct TIM4
  : public reg< uint32_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIM5
   *
   * (derived from: TIM0)
   */
  struct TIM5
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIM6
   *
   * (derived from: TIM0)
   */
  struct TIM6
  : public reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TIM7
   *
   * (derived from: TIM0)
   */
  struct TIM7
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register AREA0
   */
  struct AREA0
  : public reg< uint32_t, base_addr + 0x40, rw, 0x000F0000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x000F0000 >;

    using MASK  = regbits< type, 16,  7 >;  /**< bitfield MASK  */
    using ADDR  = regbits< type,  0,  8 >;  /**< bitfield ADDR  */
  };

  /**
   * register AREA1
   */
  struct AREA1
  : public reg< uint32_t, base_addr + 0x44, rw, 0x000F0010 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x000F0010 >;

    using MASK  = regbits< type, 16,  7 >;  /**< bitfield MASK  */
    using ADDR  = regbits< type,  0,  8 >;  /**< bitfield ADDR  */
  };

  /**
   * register AREA2
   */
  struct AREA2
  : public reg< uint32_t, base_addr + 0x48, rw, 0x000F0020 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x000F0020 >;

    using MASK  = regbits< type, 16,  7 >;  /**< bitfield MASK  */
    using ADDR  = regbits< type,  0,  8 >;  /**< bitfield ADDR  */
  };

  /**
   * register AREA3
   */
  struct AREA3
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x000F0030 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x000F0030 >;

    using MASK  = regbits< type, 16,  7 >;  /**< bitfield MASK  */
    using ADDR  = regbits< type,  0,  8 >;  /**< bitfield ADDR  */
  };

  /**
   * register AREA4
   */
  struct AREA4
  : public reg< uint32_t, base_addr + 0x50, rw, 0x000F0040 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x000F0040 >;

    using MASK  = regbits< type, 16,  7 >;  /**< bitfield MASK  */
    using ADDR  = regbits< type,  0,  8 >;  /**< bitfield ADDR  */
  };

  /**
   * register AREA5
   */
  struct AREA5
  : public reg< uint32_t, base_addr + 0x54, rw, 0x000F0050 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x000F0050 >;

    using MASK  = regbits< type, 16,  7 >;  /**< bitfield MASK  */
    using ADDR  = regbits< type,  0,  8 >;  /**< bitfield ADDR  */
  };

  /**
   * register AREA6
   */
  struct AREA6
  : public reg< uint32_t, base_addr + 0x58, rw, 0x000F0060 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x000F0060 >;

    using MASK  = regbits< type, 16,  7 >;  /**< bitfield MASK  */
    using ADDR  = regbits< type,  0,  8 >;  /**< bitfield ADDR  */
  };

  /**
   * register AREA7
   */
  struct AREA7
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x000F0070 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x000F0070 >;

    using MASK  = regbits< type, 16,  7 >;  /**< bitfield MASK  */
    using ADDR  = regbits< type,  0,  8 >;  /**< bitfield ADDR  */
  };

  /**
   * register ATIM0
   */
  struct ATIM0
  : public reg< uint32_t, base_addr + 0x60, rw, 0x0000045F >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x0000045F >;

    using ALEW  = regbits< type,  8,  4 >;  /**< bitfield ALEW  */
    using ALES  = regbits< type,  4,  4 >;  /**< bitfield ALES  */
    using ALC   = regbits< type,  0,  4 >;  /**< bitfield ALC   */
  };

  /**
   * register ATIM1
   *
   * (derived from: ATIM0)
   */
  struct ATIM1
  : public reg< uint32_t, base_addr + 0x64, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ATIM2
   *
   * (derived from: ATIM0)
   */
  struct ATIM2
  : public reg< uint32_t, base_addr + 0x68, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ATIM3
   *
   * (derived from: ATIM0)
   */
  struct ATIM3
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ATIM4
   *
   * (derived from: ATIM0)
   */
  struct ATIM4
  : public reg< uint32_t, base_addr + 0x70, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ATIM5
   *
   * (derived from: ATIM0)
   */
  struct ATIM5
  : public reg< uint32_t, base_addr + 0x74, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ATIM6
   *
   * (derived from: ATIM0)
   */
  struct ATIM6
  : public reg< uint32_t, base_addr + 0x78, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ATIM7
   *
   * (derived from: ATIM0)
   */
  struct ATIM7
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DCLKR
   */
  struct DCLKR
  : public reg< uint32_t, base_addr + 0x300, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x00000001 >;

    using MCLKON  = regbits< type,  4,  1 >;  /**< bitfield MCLKON  */
    using MDIV    = regbits< type,  0,  4 >;  /**< bitfield MDIV    */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXBUS_HPP_INCLUDED
