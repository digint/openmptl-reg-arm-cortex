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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9N12.svd"
//
//  vendor: Atmel
//  name: AT91SAM9N12
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9N12 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9N12.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PMECC_HPP_INCLUDED
#define ARCH_REG_PMECC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Programmable Multibit Error Corrected Code Controller
 */
struct PMECC
{
  static constexpr reg_addr_t base_addr = 0xffffe000;

  /**
   * PMECC Configuration Register
   */
  struct CFG
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using BCH_ERR   = regbits< type,  0,  3 >;  /**< Error Correct Capability       */
    using SECTORSZ  = regbits< type,  4,  1 >;  /**< Sector Size                    */
    using PAGESIZE  = regbits< type,  8,  2 >;  /**< Number of Sectors in the Page  */
    using NANDWR    = regbits< type, 12,  1 >;  /**< NAND Write Access              */
    using SPAREEN   = regbits< type, 16,  1 >;  /**< Spare Enable                   */
    using AUTO      = regbits< type, 20,  1 >;  /**< Automatic Mode Enable          */
  };

  /**
   * PMECC Spare Area Size Register
   */
  struct SAREA
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using SPARESIZE  = regbits< type,  0,  9 >;  /**< Spare Area Size  */
  };

  /**
   * PMECC Start Address Register
   */
  struct SADDR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using STARTADDR  = regbits< type,  0,  9 >;  /**< ECC Area Start Address (byte oriented address)  */
  };

  /**
   * PMECC End Address Register
   */
  struct EADDR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using ENDADDR  = regbits< type,  0,  9 >;  /**< ECC Area End Address (byte oriented address)  */
  };

  /**
   * PMECC Clock Control Register
   */
  struct CLK
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using CLKCTRL  = regbits< type,  0,  3 >;  /**< Clock Control Register  */
  };

  /**
   * PMECC Control Register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0x00000000 >;

    using RST      = regbits< type,  0,  1 >;  /**< Reset the PMECC Module   */
    using DATA     = regbits< type,  1,  1 >;  /**< Start a Data Phase       */
    using USER     = regbits< type,  2,  1 >;  /**< Start a User Mode Phase  */
    using ENABLE   = regbits< type,  4,  1 >;  /**< PMECC Module Enable      */
    using DISABLE  = regbits< type,  5,  1 >;  /**< PMECC Module Disable     */
  };

  /**
   * PMECC Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using BUSY    = regbits< type,  0,  1 >;  /**< The Kernel of the PMECC is Busy  */
    using ENABLE  = regbits< type,  4,  1 >;  /**< PMECC Module Status              */
  };

  /**
   * PMECC Interrupt Enable register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x0000001c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, wo, 0x00000000 >;

    using ERRIE  = regbits< type,  0,  1 >;  /**< Error Interrupt Enable  */
  };

  /**
   * PMECC Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0 >;

    using ERRID  = regbits< type,  0,  1 >;  /**< Error Interrupt Disable  */
  };

  /**
   * PMECC Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >;

    using ERRIM  = regbits< type,  0,  1 >;  /**< Error Interrupt Enable  */
  };

  /**
   * PMECC Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >;

    using ERRIS  = regbits< type,  0,  8 >;  /**< Error Interrupt Status Register  */
  };

  /**
   * PMECC ECC 0 Register (sec_num = 0)
   */
  struct ECC0_0
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 1 Register (sec_num = 0)
   */
  struct ECC1_0
  : public reg< uint32_t, base_addr + 0x00000044, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 2 Register (sec_num = 0)
   */
  struct ECC2_0
  : public reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 3 Register (sec_num = 0)
   */
  struct ECC3_0
  : public reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 4 Register (sec_num = 0)
   */
  struct ECC4_0
  : public reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 5 Register (sec_num = 0)
   */
  struct ECC5_0
  : public reg< uint32_t, base_addr + 0x00000054, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 6 Register (sec_num = 0)
   */
  struct ECC6_0
  : public reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 7 Register (sec_num = 0)
   */
  struct ECC7_0
  : public reg< uint32_t, base_addr + 0x0000005c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 8 Register (sec_num = 0)
   */
  struct ECC8_0
  : public reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 9 Register (sec_num = 0)
   */
  struct ECC9_0
  : public reg< uint32_t, base_addr + 0x00000064, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 10 Register (sec_num = 0)
   */
  struct ECC10_0
  : public reg< uint32_t, base_addr + 0x00000068, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 0 Register (sec_num = 1)
   */
  struct ECC0_1
  : public reg< uint32_t, base_addr + 0x00000080, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 1 Register (sec_num = 1)
   */
  struct ECC1_1
  : public reg< uint32_t, base_addr + 0x00000084, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 2 Register (sec_num = 1)
   */
  struct ECC2_1
  : public reg< uint32_t, base_addr + 0x00000088, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 3 Register (sec_num = 1)
   */
  struct ECC3_1
  : public reg< uint32_t, base_addr + 0x0000008c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 4 Register (sec_num = 1)
   */
  struct ECC4_1
  : public reg< uint32_t, base_addr + 0x00000090, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 5 Register (sec_num = 1)
   */
  struct ECC5_1
  : public reg< uint32_t, base_addr + 0x00000094, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 6 Register (sec_num = 1)
   */
  struct ECC6_1
  : public reg< uint32_t, base_addr + 0x00000098, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 7 Register (sec_num = 1)
   */
  struct ECC7_1
  : public reg< uint32_t, base_addr + 0x0000009c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 8 Register (sec_num = 1)
   */
  struct ECC8_1
  : public reg< uint32_t, base_addr + 0x000000a0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 9 Register (sec_num = 1)
   */
  struct ECC9_1
  : public reg< uint32_t, base_addr + 0x000000a4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 10 Register (sec_num = 1)
   */
  struct ECC10_1
  : public reg< uint32_t, base_addr + 0x000000a8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 0 Register (sec_num = 2)
   */
  struct ECC0_2
  : public reg< uint32_t, base_addr + 0x000000c0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 1 Register (sec_num = 2)
   */
  struct ECC1_2
  : public reg< uint32_t, base_addr + 0x000000c4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 2 Register (sec_num = 2)
   */
  struct ECC2_2
  : public reg< uint32_t, base_addr + 0x000000c8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 3 Register (sec_num = 2)
   */
  struct ECC3_2
  : public reg< uint32_t, base_addr + 0x000000cc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000cc, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 4 Register (sec_num = 2)
   */
  struct ECC4_2
  : public reg< uint32_t, base_addr + 0x000000d0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d0, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 5 Register (sec_num = 2)
   */
  struct ECC5_2
  : public reg< uint32_t, base_addr + 0x000000d4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d4, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 6 Register (sec_num = 2)
   */
  struct ECC6_2
  : public reg< uint32_t, base_addr + 0x000000d8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d8, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 7 Register (sec_num = 2)
   */
  struct ECC7_2
  : public reg< uint32_t, base_addr + 0x000000dc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000dc, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 8 Register (sec_num = 2)
   */
  struct ECC8_2
  : public reg< uint32_t, base_addr + 0x000000e0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e0, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 9 Register (sec_num = 2)
   */
  struct ECC9_2
  : public reg< uint32_t, base_addr + 0x000000e4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 10 Register (sec_num = 2)
   */
  struct ECC10_2
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 0 Register (sec_num = 3)
   */
  struct ECC0_3
  : public reg< uint32_t, base_addr + 0x00000100, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 1 Register (sec_num = 3)
   */
  struct ECC1_3
  : public reg< uint32_t, base_addr + 0x00000104, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 2 Register (sec_num = 3)
   */
  struct ECC2_3
  : public reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 3 Register (sec_num = 3)
   */
  struct ECC3_3
  : public reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 4 Register (sec_num = 3)
   */
  struct ECC4_3
  : public reg< uint32_t, base_addr + 0x00000110, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 5 Register (sec_num = 3)
   */
  struct ECC5_3
  : public reg< uint32_t, base_addr + 0x00000114, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 6 Register (sec_num = 3)
   */
  struct ECC6_3
  : public reg< uint32_t, base_addr + 0x00000118, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 7 Register (sec_num = 3)
   */
  struct ECC7_3
  : public reg< uint32_t, base_addr + 0x0000011c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 8 Register (sec_num = 3)
   */
  struct ECC8_3
  : public reg< uint32_t, base_addr + 0x00000120, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 9 Register (sec_num = 3)
   */
  struct ECC9_3
  : public reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 10 Register (sec_num = 3)
   */
  struct ECC10_3
  : public reg< uint32_t, base_addr + 0x00000128, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 0 Register (sec_num = 4)
   */
  struct ECC0_4
  : public reg< uint32_t, base_addr + 0x00000140, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000140, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 1 Register (sec_num = 4)
   */
  struct ECC1_4
  : public reg< uint32_t, base_addr + 0x00000144, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 2 Register (sec_num = 4)
   */
  struct ECC2_4
  : public reg< uint32_t, base_addr + 0x00000148, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000148, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 3 Register (sec_num = 4)
   */
  struct ECC3_4
  : public reg< uint32_t, base_addr + 0x0000014c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000014c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 4 Register (sec_num = 4)
   */
  struct ECC4_4
  : public reg< uint32_t, base_addr + 0x00000150, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000150, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 5 Register (sec_num = 4)
   */
  struct ECC5_4
  : public reg< uint32_t, base_addr + 0x00000154, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000154, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 6 Register (sec_num = 4)
   */
  struct ECC6_4
  : public reg< uint32_t, base_addr + 0x00000158, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000158, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 7 Register (sec_num = 4)
   */
  struct ECC7_4
  : public reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 8 Register (sec_num = 4)
   */
  struct ECC8_4
  : public reg< uint32_t, base_addr + 0x00000160, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 9 Register (sec_num = 4)
   */
  struct ECC9_4
  : public reg< uint32_t, base_addr + 0x00000164, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 10 Register (sec_num = 4)
   */
  struct ECC10_4
  : public reg< uint32_t, base_addr + 0x00000168, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000168, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 0 Register (sec_num = 5)
   */
  struct ECC0_5
  : public reg< uint32_t, base_addr + 0x00000180, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000180, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 1 Register (sec_num = 5)
   */
  struct ECC1_5
  : public reg< uint32_t, base_addr + 0x00000184, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000184, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 2 Register (sec_num = 5)
   */
  struct ECC2_5
  : public reg< uint32_t, base_addr + 0x00000188, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000188, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 3 Register (sec_num = 5)
   */
  struct ECC3_5
  : public reg< uint32_t, base_addr + 0x0000018c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000018c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 4 Register (sec_num = 5)
   */
  struct ECC4_5
  : public reg< uint32_t, base_addr + 0x00000190, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000190, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 5 Register (sec_num = 5)
   */
  struct ECC5_5
  : public reg< uint32_t, base_addr + 0x00000194, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000194, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 6 Register (sec_num = 5)
   */
  struct ECC6_5
  : public reg< uint32_t, base_addr + 0x00000198, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000198, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 7 Register (sec_num = 5)
   */
  struct ECC7_5
  : public reg< uint32_t, base_addr + 0x0000019c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000019c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 8 Register (sec_num = 5)
   */
  struct ECC8_5
  : public reg< uint32_t, base_addr + 0x000001a0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a0, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 9 Register (sec_num = 5)
   */
  struct ECC9_5
  : public reg< uint32_t, base_addr + 0x000001a4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a4, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 10 Register (sec_num = 5)
   */
  struct ECC10_5
  : public reg< uint32_t, base_addr + 0x000001a8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a8, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 0 Register (sec_num = 6)
   */
  struct ECC0_6
  : public reg< uint32_t, base_addr + 0x000001c0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001c0, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 1 Register (sec_num = 6)
   */
  struct ECC1_6
  : public reg< uint32_t, base_addr + 0x000001c4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001c4, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 2 Register (sec_num = 6)
   */
  struct ECC2_6
  : public reg< uint32_t, base_addr + 0x000001c8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001c8, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 3 Register (sec_num = 6)
   */
  struct ECC3_6
  : public reg< uint32_t, base_addr + 0x000001cc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001cc, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 4 Register (sec_num = 6)
   */
  struct ECC4_6
  : public reg< uint32_t, base_addr + 0x000001d0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d0, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 5 Register (sec_num = 6)
   */
  struct ECC5_6
  : public reg< uint32_t, base_addr + 0x000001d4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d4, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 6 Register (sec_num = 6)
   */
  struct ECC6_6
  : public reg< uint32_t, base_addr + 0x000001d8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d8, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 7 Register (sec_num = 6)
   */
  struct ECC7_6
  : public reg< uint32_t, base_addr + 0x000001dc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001dc, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 8 Register (sec_num = 6)
   */
  struct ECC8_6
  : public reg< uint32_t, base_addr + 0x000001e0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e0, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 9 Register (sec_num = 6)
   */
  struct ECC9_6
  : public reg< uint32_t, base_addr + 0x000001e4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e4, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 10 Register (sec_num = 6)
   */
  struct ECC10_6
  : public reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 0 Register (sec_num = 7)
   */
  struct ECC0_7
  : public reg< uint32_t, base_addr + 0x00000200, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000200, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 1 Register (sec_num = 7)
   */
  struct ECC1_7
  : public reg< uint32_t, base_addr + 0x00000204, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000204, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 2 Register (sec_num = 7)
   */
  struct ECC2_7
  : public reg< uint32_t, base_addr + 0x00000208, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000208, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 3 Register (sec_num = 7)
   */
  struct ECC3_7
  : public reg< uint32_t, base_addr + 0x0000020c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000020c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 4 Register (sec_num = 7)
   */
  struct ECC4_7
  : public reg< uint32_t, base_addr + 0x00000210, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000210, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 5 Register (sec_num = 7)
   */
  struct ECC5_7
  : public reg< uint32_t, base_addr + 0x00000214, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000214, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 6 Register (sec_num = 7)
   */
  struct ECC6_7
  : public reg< uint32_t, base_addr + 0x00000218, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000218, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 7 Register (sec_num = 7)
   */
  struct ECC7_7
  : public reg< uint32_t, base_addr + 0x0000021c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000021c, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 8 Register (sec_num = 7)
   */
  struct ECC8_7
  : public reg< uint32_t, base_addr + 0x00000220, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000220, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 9 Register (sec_num = 7)
   */
  struct ECC9_7
  : public reg< uint32_t, base_addr + 0x00000224, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000224, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC ECC 10 Register (sec_num = 7)
   */
  struct ECC10_7
  : public reg< uint32_t, base_addr + 0x00000228, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000228, ro, 0x00000000 >;

    using ECC  = regbits< type,  0, 32 >;  /**< BCH Redundancy  */
  };

  /**
   * PMECC REM 0 Register (sec_num = 0)
   */
  struct REM0_0
  : public reg< uint32_t, base_addr + 0x00000240, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000240, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 1 Register (sec_num = 0)
   */
  struct REM1_0
  : public reg< uint32_t, base_addr + 0x00000244, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000244, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 2 Register (sec_num = 0)
   */
  struct REM2_0
  : public reg< uint32_t, base_addr + 0x00000248, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000248, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 3 Register (sec_num = 0)
   */
  struct REM3_0
  : public reg< uint32_t, base_addr + 0x0000024c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000024c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 4 Register (sec_num = 0)
   */
  struct REM4_0
  : public reg< uint32_t, base_addr + 0x00000250, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000250, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 5 Register (sec_num = 0)
   */
  struct REM5_0
  : public reg< uint32_t, base_addr + 0x00000254, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000254, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 6 Register (sec_num = 0)
   */
  struct REM6_0
  : public reg< uint32_t, base_addr + 0x00000258, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000258, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 7 Register (sec_num = 0)
   */
  struct REM7_0
  : public reg< uint32_t, base_addr + 0x0000025c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000025c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 8 Register (sec_num = 0)
   */
  struct REM8_0
  : public reg< uint32_t, base_addr + 0x00000260, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000260, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 9 Register (sec_num = 0)
   */
  struct REM9_0
  : public reg< uint32_t, base_addr + 0x00000264, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000264, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 10 Register (sec_num = 0)
   */
  struct REM10_0
  : public reg< uint32_t, base_addr + 0x00000268, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000268, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 11 Register (sec_num = 0)
   */
  struct REM11_0
  : public reg< uint32_t, base_addr + 0x0000026c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000026c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 0 Register (sec_num = 1)
   */
  struct REM0_1
  : public reg< uint32_t, base_addr + 0x00000280, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000280, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 1 Register (sec_num = 1)
   */
  struct REM1_1
  : public reg< uint32_t, base_addr + 0x00000284, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000284, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 2 Register (sec_num = 1)
   */
  struct REM2_1
  : public reg< uint32_t, base_addr + 0x00000288, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000288, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 3 Register (sec_num = 1)
   */
  struct REM3_1
  : public reg< uint32_t, base_addr + 0x0000028c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000028c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 4 Register (sec_num = 1)
   */
  struct REM4_1
  : public reg< uint32_t, base_addr + 0x00000290, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000290, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 5 Register (sec_num = 1)
   */
  struct REM5_1
  : public reg< uint32_t, base_addr + 0x00000294, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000294, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 6 Register (sec_num = 1)
   */
  struct REM6_1
  : public reg< uint32_t, base_addr + 0x00000298, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000298, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 7 Register (sec_num = 1)
   */
  struct REM7_1
  : public reg< uint32_t, base_addr + 0x0000029c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000029c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 8 Register (sec_num = 1)
   */
  struct REM8_1
  : public reg< uint32_t, base_addr + 0x000002a0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a0, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 9 Register (sec_num = 1)
   */
  struct REM9_1
  : public reg< uint32_t, base_addr + 0x000002a4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a4, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 10 Register (sec_num = 1)
   */
  struct REM10_1
  : public reg< uint32_t, base_addr + 0x000002a8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a8, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 11 Register (sec_num = 1)
   */
  struct REM11_1
  : public reg< uint32_t, base_addr + 0x000002ac, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002ac, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 0 Register (sec_num = 2)
   */
  struct REM0_2
  : public reg< uint32_t, base_addr + 0x000002c0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c0, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 1 Register (sec_num = 2)
   */
  struct REM1_2
  : public reg< uint32_t, base_addr + 0x000002c4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c4, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 2 Register (sec_num = 2)
   */
  struct REM2_2
  : public reg< uint32_t, base_addr + 0x000002c8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c8, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 3 Register (sec_num = 2)
   */
  struct REM3_2
  : public reg< uint32_t, base_addr + 0x000002cc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002cc, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 4 Register (sec_num = 2)
   */
  struct REM4_2
  : public reg< uint32_t, base_addr + 0x000002d0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d0, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 5 Register (sec_num = 2)
   */
  struct REM5_2
  : public reg< uint32_t, base_addr + 0x000002d4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d4, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 6 Register (sec_num = 2)
   */
  struct REM6_2
  : public reg< uint32_t, base_addr + 0x000002d8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d8, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 7 Register (sec_num = 2)
   */
  struct REM7_2
  : public reg< uint32_t, base_addr + 0x000002dc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002dc, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 8 Register (sec_num = 2)
   */
  struct REM8_2
  : public reg< uint32_t, base_addr + 0x000002e0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e0, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 9 Register (sec_num = 2)
   */
  struct REM9_2
  : public reg< uint32_t, base_addr + 0x000002e4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e4, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 10 Register (sec_num = 2)
   */
  struct REM10_2
  : public reg< uint32_t, base_addr + 0x000002e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e8, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 11 Register (sec_num = 2)
   */
  struct REM11_2
  : public reg< uint32_t, base_addr + 0x000002ec, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002ec, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 0 Register (sec_num = 3)
   */
  struct REM0_3
  : public reg< uint32_t, base_addr + 0x00000300, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000300, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 1 Register (sec_num = 3)
   */
  struct REM1_3
  : public reg< uint32_t, base_addr + 0x00000304, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000304, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 2 Register (sec_num = 3)
   */
  struct REM2_3
  : public reg< uint32_t, base_addr + 0x00000308, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000308, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 3 Register (sec_num = 3)
   */
  struct REM3_3
  : public reg< uint32_t, base_addr + 0x0000030c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000030c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 4 Register (sec_num = 3)
   */
  struct REM4_3
  : public reg< uint32_t, base_addr + 0x00000310, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000310, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 5 Register (sec_num = 3)
   */
  struct REM5_3
  : public reg< uint32_t, base_addr + 0x00000314, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000314, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 6 Register (sec_num = 3)
   */
  struct REM6_3
  : public reg< uint32_t, base_addr + 0x00000318, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000318, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 7 Register (sec_num = 3)
   */
  struct REM7_3
  : public reg< uint32_t, base_addr + 0x0000031c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000031c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 8 Register (sec_num = 3)
   */
  struct REM8_3
  : public reg< uint32_t, base_addr + 0x00000320, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000320, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 9 Register (sec_num = 3)
   */
  struct REM9_3
  : public reg< uint32_t, base_addr + 0x00000324, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000324, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 10 Register (sec_num = 3)
   */
  struct REM10_3
  : public reg< uint32_t, base_addr + 0x00000328, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000328, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 11 Register (sec_num = 3)
   */
  struct REM11_3
  : public reg< uint32_t, base_addr + 0x0000032c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000032c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 0 Register (sec_num = 4)
   */
  struct REM0_4
  : public reg< uint32_t, base_addr + 0x00000340, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000340, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 1 Register (sec_num = 4)
   */
  struct REM1_4
  : public reg< uint32_t, base_addr + 0x00000344, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000344, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 2 Register (sec_num = 4)
   */
  struct REM2_4
  : public reg< uint32_t, base_addr + 0x00000348, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000348, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 3 Register (sec_num = 4)
   */
  struct REM3_4
  : public reg< uint32_t, base_addr + 0x0000034c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000034c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 4 Register (sec_num = 4)
   */
  struct REM4_4
  : public reg< uint32_t, base_addr + 0x00000350, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000350, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 5 Register (sec_num = 4)
   */
  struct REM5_4
  : public reg< uint32_t, base_addr + 0x00000354, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000354, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 6 Register (sec_num = 4)
   */
  struct REM6_4
  : public reg< uint32_t, base_addr + 0x00000358, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000358, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 7 Register (sec_num = 4)
   */
  struct REM7_4
  : public reg< uint32_t, base_addr + 0x0000035c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000035c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 8 Register (sec_num = 4)
   */
  struct REM8_4
  : public reg< uint32_t, base_addr + 0x00000360, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000360, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 9 Register (sec_num = 4)
   */
  struct REM9_4
  : public reg< uint32_t, base_addr + 0x00000364, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000364, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 10 Register (sec_num = 4)
   */
  struct REM10_4
  : public reg< uint32_t, base_addr + 0x00000368, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000368, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 11 Register (sec_num = 4)
   */
  struct REM11_4
  : public reg< uint32_t, base_addr + 0x0000036c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000036c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 0 Register (sec_num = 5)
   */
  struct REM0_5
  : public reg< uint32_t, base_addr + 0x00000380, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000380, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 1 Register (sec_num = 5)
   */
  struct REM1_5
  : public reg< uint32_t, base_addr + 0x00000384, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000384, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 2 Register (sec_num = 5)
   */
  struct REM2_5
  : public reg< uint32_t, base_addr + 0x00000388, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000388, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 3 Register (sec_num = 5)
   */
  struct REM3_5
  : public reg< uint32_t, base_addr + 0x0000038c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000038c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 4 Register (sec_num = 5)
   */
  struct REM4_5
  : public reg< uint32_t, base_addr + 0x00000390, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000390, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 5 Register (sec_num = 5)
   */
  struct REM5_5
  : public reg< uint32_t, base_addr + 0x00000394, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000394, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 6 Register (sec_num = 5)
   */
  struct REM6_5
  : public reg< uint32_t, base_addr + 0x00000398, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000398, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 7 Register (sec_num = 5)
   */
  struct REM7_5
  : public reg< uint32_t, base_addr + 0x0000039c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000039c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 8 Register (sec_num = 5)
   */
  struct REM8_5
  : public reg< uint32_t, base_addr + 0x000003a0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003a0, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 9 Register (sec_num = 5)
   */
  struct REM9_5
  : public reg< uint32_t, base_addr + 0x000003a4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003a4, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 10 Register (sec_num = 5)
   */
  struct REM10_5
  : public reg< uint32_t, base_addr + 0x000003a8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003a8, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 11 Register (sec_num = 5)
   */
  struct REM11_5
  : public reg< uint32_t, base_addr + 0x000003ac, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003ac, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 0 Register (sec_num = 6)
   */
  struct REM0_6
  : public reg< uint32_t, base_addr + 0x000003c0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003c0, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 1 Register (sec_num = 6)
   */
  struct REM1_6
  : public reg< uint32_t, base_addr + 0x000003c4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003c4, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 2 Register (sec_num = 6)
   */
  struct REM2_6
  : public reg< uint32_t, base_addr + 0x000003c8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003c8, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 3 Register (sec_num = 6)
   */
  struct REM3_6
  : public reg< uint32_t, base_addr + 0x000003cc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003cc, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 4 Register (sec_num = 6)
   */
  struct REM4_6
  : public reg< uint32_t, base_addr + 0x000003d0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003d0, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 5 Register (sec_num = 6)
   */
  struct REM5_6
  : public reg< uint32_t, base_addr + 0x000003d4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003d4, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 6 Register (sec_num = 6)
   */
  struct REM6_6
  : public reg< uint32_t, base_addr + 0x000003d8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003d8, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 7 Register (sec_num = 6)
   */
  struct REM7_6
  : public reg< uint32_t, base_addr + 0x000003dc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003dc, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 8 Register (sec_num = 6)
   */
  struct REM8_6
  : public reg< uint32_t, base_addr + 0x000003e0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003e0, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 9 Register (sec_num = 6)
   */
  struct REM9_6
  : public reg< uint32_t, base_addr + 0x000003e4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003e4, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 10 Register (sec_num = 6)
   */
  struct REM10_6
  : public reg< uint32_t, base_addr + 0x000003e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003e8, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 11 Register (sec_num = 6)
   */
  struct REM11_6
  : public reg< uint32_t, base_addr + 0x000003ec, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000003ec, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 0 Register (sec_num = 7)
   */
  struct REM0_7
  : public reg< uint32_t, base_addr + 0x00000400, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000400, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 1 Register (sec_num = 7)
   */
  struct REM1_7
  : public reg< uint32_t, base_addr + 0x00000404, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000404, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 2 Register (sec_num = 7)
   */
  struct REM2_7
  : public reg< uint32_t, base_addr + 0x00000408, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000408, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 3 Register (sec_num = 7)
   */
  struct REM3_7
  : public reg< uint32_t, base_addr + 0x0000040c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000040c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 4 Register (sec_num = 7)
   */
  struct REM4_7
  : public reg< uint32_t, base_addr + 0x00000410, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000410, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 5 Register (sec_num = 7)
   */
  struct REM5_7
  : public reg< uint32_t, base_addr + 0x00000414, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000414, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 6 Register (sec_num = 7)
   */
  struct REM6_7
  : public reg< uint32_t, base_addr + 0x00000418, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000418, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 7 Register (sec_num = 7)
   */
  struct REM7_7
  : public reg< uint32_t, base_addr + 0x0000041c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000041c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 8 Register (sec_num = 7)
   */
  struct REM8_7
  : public reg< uint32_t, base_addr + 0x00000420, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000420, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 9 Register (sec_num = 7)
   */
  struct REM9_7
  : public reg< uint32_t, base_addr + 0x00000424, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000424, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 10 Register (sec_num = 7)
   */
  struct REM10_7
  : public reg< uint32_t, base_addr + 0x00000428, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000428, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };

  /**
   * PMECC REM 11 Register (sec_num = 7)
   */
  struct REM11_7
  : public reg< uint32_t, base_addr + 0x0000042c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000042c, ro, 0x00000000 >;

    using REM2NP1  = regbits< type,  0, 14 >;  /**< BCH Remainder 2 * N + 1  */
    using REM2NP3  = regbits< type, 16, 14 >;  /**< BCH Remainder 2 * N + 3  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PMECC_HPP_INCLUDED
