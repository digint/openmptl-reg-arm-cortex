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
//  Import from CMSIS-SVD: "Spansion/MB9BF41xR.svd"
//
//  name: MB9BF41xR
//  version: 1.7
//  description: MB9BF41xR
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

    using MOEXEUP   = regbits< type, 13,  1 >;  /**< select how to set the MOEX width                                                 */
    using MPXCSOF   = regbits< type, 12,  1 >;  /**< select a CS assertion from the start of accessing to the end of address output   */
    using MPXDOFF   = regbits< type, 11,  1 >;  /**< select whether or not the address is output to the data lines in multiplex mode  */
    using ALEINV    = regbits< type,  9,  1 >;  /**< set up the polarity of the ALE signal                                            */
    using MPXMODE   = regbits< type,  8,  1 >;  /**< select operation bus mode                                                        */
    using SHRTDOUT  = regbits< type,  7,  1 >;  /**< select to which idle cycle the write data output is extended                     */
    using RDY       = regbits< type,  6,  1 >;  /**< control the external RDY function                                                */
    using PAGE      = regbits< type,  5,  1 >;  /**< NOR Flash memory page access mode                                                */
    using NAND      = regbits< type,  4,  1 >;  /**< NAND Flash memory mode                                                           */
    using WEOFF     = regbits< type,  3,  1 >;  /**< disable the write enable signal (MWEX) operation                                 */
    using RBMON     = regbits< type,  2,  1 >;  /**< Read Byte Mask ON                                                                */
    using WDTH      = regbits< type,  0,  2 >;  /**< specify Data Width                                                               */
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
   * Mode Register 4
   *
   * (derived from: MODE0)
   */
  struct MODE4
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Mode Register 5
   *
   * (derived from: MODE0)
   */
  struct MODE5
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Mode Register 6
   *
   * (derived from: MODE0)
   */
  struct MODE6
  : public reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * Timing Register 4
   *
   * (derived from: TIM0)
   */
  struct TIM4
  : public reg< uint32_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Timing Register 5
   *
   * (derived from: TIM0)
   */
  struct TIM5
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Timing Register 6
   *
   * (derived from: TIM0)
   */
  struct TIM6
  : public reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * Area Register 4
   */
  struct AREA4
  : public reg< uint32_t, base_addr + 0x50, rw, 0x000F0040 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x000F0040 >;

    using MASK  = regbits< type, 16,  7 >;  /**< address mask  */
    using ADDR  = regbits< type,  0,  8 >;  /**< Address       */
  };

  /**
   * Area Register 5
   */
  struct AREA5
  : public reg< uint32_t, base_addr + 0x54, rw, 0x000F0050 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x000F0050 >;

    using MASK  = regbits< type, 16,  7 >;  /**< address mask  */
    using ADDR  = regbits< type,  0,  8 >;  /**< Address       */
  };

  /**
   * Area Register 6
   */
  struct AREA6
  : public reg< uint32_t, base_addr + 0x58, rw, 0x000F0060 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x000F0060 >;

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

  /**
   * ALE Timing Register 0
   */
  struct ATIM0
  : public reg< uint32_t, base_addr + 0x60, rw, 0x0000045F >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x0000045F >;

    using ALEW  = regbits< type,  8,  4 >;  /**< Address Latch Enable Width        */
    using ALES  = regbits< type,  4,  4 >;  /**< Address Latch Enable Setup cycle  */
    using ALC   = regbits< type,  0,  4 >;  /**< Address Latch Cycle               */
  };

  /**
   * ALE Timing Register 1
   *
   * (derived from: ATIM0)
   */
  struct ATIM1
  : public reg< uint32_t, base_addr + 0x64, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ALE Timing Register 2
   *
   * (derived from: ATIM0)
   */
  struct ATIM2
  : public reg< uint32_t, base_addr + 0x68, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ALE Timing Register 3
   *
   * (derived from: ATIM0)
   */
  struct ATIM3
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ALE Timing Register 4
   *
   * (derived from: ATIM0)
   */
  struct ATIM4
  : public reg< uint32_t, base_addr + 0x70, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ALE Timing Register 5
   *
   * (derived from: ATIM0)
   */
  struct ATIM5
  : public reg< uint32_t, base_addr + 0x74, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ALE Timing Register 6
   *
   * (derived from: ATIM0)
   */
  struct ATIM6
  : public reg< uint32_t, base_addr + 0x78, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ALE Timing Register 7
   *
   * (derived from: ATIM0)
   */
  struct ATIM7
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Division Clock Register
   */
  struct DCLKR
  : public reg< uint32_t, base_addr + 0x300, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x00000001 >;

    using MCLKON  = regbits< type,  4,  1 >;  /**< MCLK ON                    */
    using MDIV    = regbits< type,  0,  4 >;  /**< MCLK Division Ratio Setup  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXBUS_HPP_INCLUDED
