/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Fujitsu/MB9B360R.svd"
//
//  name: MB9B360R
//  version: 1.3
//  description: MB9B360R Series
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
   * SDRAM Mode Register
   */
  struct SDMODE
  : public reg< uint32_t, base_addr + 0x100, rw, 0x00001300 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x00001300 >;

    using MSDCLKOFF  = regbits< type, 16,  1 >;  /**< MSDCLK OFF             */
    using BASEL      = regbits< type, 12,  4 >;  /**< Bank Address Select    */
    using RASEL      = regbits< type,  8,  4 >;  /**< Row Address Select     */
    using CASEL      = regbits< type,  4,  2 >;  /**< Column Address Select  */
    using ROFF       = regbits< type,  2,  1 >;  /**< Refresh OFF            */
    using PDON       = regbits< type,  1,  1 >;  /**< Power Down ON          */
    using SDON       = regbits< type,  0,  1 >;  /**< SDRAM ON               */
  };

  /**
   * Refresh Timer Register
   */
  struct REFTIM
  : public reg< uint32_t, base_addr + 0x104, rw, 0x00000033 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x00000033 >;

    using PREF  = regbits< type, 24,  1 >;  /**< Pre-Refresh        */
    using NREF  = regbits< type, 16,  8 >;  /**< Number of Refresh  */
    using REFC  = regbits< type,  0, 16 >;  /**< Refresh Count      */
  };

  /**
   * Power Down Count Register
   */
  struct PWRDWN
  : public reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >;

    using PDC  = regbits< type,  0, 16 >;  /**< Power Down Count  */
  };

  /**
   * SDRAM Timing Register
   */
  struct SDTIM
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x00420000 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x00420000 >;

    using TDPL   = regbits< type, 24,  2 >;  /**< Data-in to Precharge Lead Time  */
    using TREFC  = regbits< type, 20,  4 >;  /**< Refresh Cycle time              */
    using TRAS   = regbits< type, 16,  4 >;  /**< RAS active time                 */
    using TRCD   = regbits< type, 12,  4 >;  /**< RAS-CAS Delay                   */
    using TRP    = regbits< type,  8,  4 >;  /**< RAS Precharge time              */
    using TRC    = regbits< type,  4,  4 >;  /**< RAS Cycle time                  */
    using CL     = regbits< type,  0,  2 >;  /**< CAS Latency                     */
  };

  /**
   * SDRAM Command Register
   */
  struct SDCMD
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >;

    using PEND   = regbits< type, 31,  1 >;  /**< Pend                */
    using SDCKE  = regbits< type, 20,  1 >;  /**< SDRAM CKE           */
    using SDCS   = regbits< type, 19,  1 >;  /**< SDRAM Chip Select   */
    using SDRAS  = regbits< type, 18,  1 >;  /**< SDRAM RAS           */
    using SDCAS  = regbits< type, 17,  1 >;  /**< SDRAM CAS           */
    using SDWE   = regbits< type, 16,  1 >;  /**< SDRAM Write Enable  */
    using SDAD   = regbits< type,  0, 16 >;  /**< SDRAM ADress        */
  };

  /**
   * Memory Controller Register
   */
  struct MEMCERR
  : public reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >;

    using SDION  = regbits< type,  3,  1 >;  /**< SDRAM error Interrupt ON       */
    using SFION  = regbits< type,  2,  1 >;  /**< SRAM/Flash error Interrupt ON  */
    using SDER   = regbits< type,  1,  1 >;  /**< SDRAM Error                    */
    using SFER   = regbits< type,  0,  1 >;  /**< SRAM/Flash Error               */
  };

  /**
   * Division Clock Register
   */
  struct DCLKR
  : public reg< uint32_t, base_addr + 0x300, rw, 0x0000000F >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x0000000F >;

    using MCLKON  = regbits< type,  4,  1 >;  /**< MCLK ON                    */
    using MDIV    = regbits< type,  0,  4 >;  /**< MCLK Division Ratio Setup  */
  };

  /**
   * Error Status Register
   */
  struct EST
  : public reg< uint32_t, base_addr + 0x304, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x304, ro, 0x00000000 >;

    using WERR  = regbits< type,  0,  1 >;  /**< WERR  */
  };

  /**
   * Write Error Address Register
   */
  struct WEAD
  : public reg< uint32_t, base_addr + 0x308, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x308, ro, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< ADDR  */
  };

  /**
   * Error Status Clear Register
   */
  struct ESCLR
  : public reg< uint32_t, base_addr + 0x30c, wo, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, wo, 0x00000001 >;

    using WERRCLR  = regbits< type,  0,  1 >;  /**< Write Error Clear  */
  };

  /**
   * Access Mode Register
   */
  struct AMODE
  : public reg< uint32_t, base_addr + 0x310, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0x00000001 >;

    using WAEN  = regbits< type,  0,  1 >;  /**< WAEN  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXBUS_HPP_INCLUDED
