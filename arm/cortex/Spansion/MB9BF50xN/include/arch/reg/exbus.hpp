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
//  Import from CMSIS-SVD: "Spansion/MB9BF50xN.svd"
//
//  name: MB9BF50xN
//  version: 1.7
//  description: MB9BF50xN
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
 * External Bus Interface
 */
struct EXBUS
{
  static constexpr reg_addr_t base_addr = 0x4003f000;

  /**
   * Mode Register 0
   */
  struct MODE0
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using SHRTDOUT  = regbits< type,  7,  1 >;  /**< select to which idle cycle the write data output is extended  */
    using RDY       = regbits< type,  6,  1 >;  /**< control the external RDY function                             */
    using PAGE      = regbits< type,  5,  1 >;  /**< NOR Flash memory page access mode                             */
    using NAND      = regbits< type,  4,  1 >;  /**< NAND Flash memory mode                                        */
    using WEOFF     = regbits< type,  3,  1 >;  /**< disable the write enable signal (MWEX) operation              */
    using RBMON     = regbits< type,  2,  1 >;  /**< Read Byte Mask ON                                             */
    using WDTH      = regbits< type,  0,  2 >;  /**< specify Data Width                                            */
  };

  /**
   * Mode Register 1
   *
   * (derived from: MODE0)
   */
  struct MODE1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Mode Register 2
   *
   * (derived from: MODE0)
   */
  struct MODE2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Mode Register 3
   *
   * (derived from: MODE0)
   */
  struct MODE3
  : public reg< uint32_t, base_addr + 0xc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Mode Register 7
   *
   * (derived from: MODE0)
   */
  struct MODE7
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Timing Register 0
   */
  struct TIM0
  : public reg< uint32_t, base_addr + 0x20, rw, 0x055FF00F >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x055FF00F >;

    using WIDLC  = regbits< type, 28,  4 >;  /**< Write Idle Cycle           */
    using WWEC   = regbits< type, 24,  4 >;  /**< Write Enable Cycle         */
    using WADC   = regbits< type, 20,  4 >;  /**< Write Address Setup cycle  */
    using WACC   = regbits< type, 16,  4 >;  /**< Write Access Cycle         */
    using RIDLC  = regbits< type, 12,  4 >;  /**< Read Idle Cycle            */
    using FRADC  = regbits< type,  8,  4 >;  /**< First Read Address Cycle   */
    using RADC   = regbits< type,  4,  4 >;  /**< Read Address Setup cycle   */
    using RACC   = regbits< type,  0,  4 >;  /**< Read Access Cycle          */
  };

  /**
   * Timing Register 1
   *
   * (derived from: TIM0)
   */
  struct TIM1
  : public reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Timing Register 2
   *
   * (derived from: TIM0)
   */
  struct TIM2
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Timing Register 3
   *
   * (derived from: TIM0)
   */
  struct TIM3
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Timing Register 7
   *
   * (derived from: TIM0)
   */
  struct TIM7
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Area Register 0
   */
  struct AREA0
  : public reg< uint32_t, base_addr + 0x40, rw, 0x000F0000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x000F0000 >;

    using MASK  = regbits< type, 16,  7 >;  /**< address mask  */
    using ADDR  = regbits< type,  0,  8 >;  /**< Address       */
  };

  /**
   * Area Register 1
   */
  struct AREA1
  : public reg< uint32_t, base_addr + 0x44, rw, 0x000F0010 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x000F0010 >;

    using MASK  = regbits< type, 16,  7 >;  /**< address mask  */
    using ADDR  = regbits< type,  0,  8 >;  /**< Address       */
  };

  /**
   * Area Register 2
   */
  struct AREA2
  : public reg< uint32_t, base_addr + 0x48, rw, 0x000F0020 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x000F0020 >;

    using MASK  = regbits< type, 16,  7 >;  /**< address mask  */
    using ADDR  = regbits< type,  0,  8 >;  /**< Address       */
  };

  /**
   * Area Register 3
   */
  struct AREA3
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x000F0030 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x000F0030 >;

    using MASK  = regbits< type, 16,  7 >;  /**< address mask  */
    using ADDR  = regbits< type,  0,  8 >;  /**< Address       */
  };

  /**
   * Area Register 7
   */
  struct AREA7
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x000F0070 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x000F0070 >;

    using MASK  = regbits< type, 16,  7 >;  /**< address mask  */
    using ADDR  = regbits< type,  0,  8 >;  /**< Address       */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXBUS_HPP_INCLUDED
