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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C1231E6PZ.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C1231E6PZ
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

#ifndef ARCH_REG_EEPROM_HPP_INCLUDED
#define ARCH_REG_EEPROM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for EEPROM peripheral
 */
struct EEPROM
{
  static constexpr reg_addr_t base_addr = 0x400af000;

  /**
   * EEPROM Size Information
   */
  struct EESIZE
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EESIZE_WORDCNT  = regbits< type,  0, 16 >;  /**< Number of 32-Bit Words    */
    using EEPROM_EESIZE_BLKCNT   = regbits< type, 16, 11 >;  /**< Number of 16-Word Blocks  */
  };

  /**
   * EEPROM Current Block
   */
  struct EEBLOCK
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEBLOCK_BLOCK  = regbits< type,  0, 16 >;  /**< Current Block  */
  };

  /**
   * EEPROM Current Offset
   */
  struct EEOFFSET
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEOFFSET_OFFSET  = regbits< type,  0,  4 >;  /**< Current Address Offset  */
  };

  /**
   * EEPROM Read-Write
   */
  struct EERDWR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EERDWR_VALUE  = regbits< type,  0, 32 >;  /**< EEPROM Read or Write Data  */
  };

  /**
   * EEPROM Read-Write with Increment
   */
  struct EERDWRINC
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EERDWRINC_VALUE  = regbits< type,  0, 32 >;  /**< EEPROM Read or Write Data with Increment  */
  };

  /**
   * EEPROM Done Status
   */
  struct EEDONE
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEDONE_WORKING  = regbits< type,  0,  1 >;  /**< EEPROM Working                 */
    using EEPROM_EEDONE_WKERASE  = regbits< type,  2,  1 >;  /**< Working on an Erase            */
    using EEPROM_EEDONE_WKCOPY   = regbits< type,  3,  1 >;  /**< Working on a Copy              */
    using EEPROM_EEDONE_NOPERM   = regbits< type,  4,  1 >;  /**< Write Without Permission       */
    using EEPROM_EEDONE_WRBUSY   = regbits< type,  5,  1 >;  /**< Write Busy                     */
    using EEPROM_EEDONE_INVPL    = regbits< type,  8,  1 >;  /**< Invalid Program Voltage Level  */
  };

  /**
   * EEPROM Support Control and Status
   */
  struct EESUPP
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EESUPP_START   = regbits< type,  0,  1 >;  /**< Start Erase                  */
    using EEPROM_EESUPP_EREQ    = regbits< type,  1,  1 >;  /**< Erase Required               */
    using EEPROM_EESUPP_ERETRY  = regbits< type,  2,  1 >;  /**< Erase Must Be Retried        */
    using EEPROM_EESUPP_PRETRY  = regbits< type,  3,  1 >;  /**< Programming Must Be Retried  */
  };

  /**
   * EEPROM Unlock
   */
  struct EEUNLOCK
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEUNLOCK_UNLOCK  = regbits< type,  0, 32 >;  /**< EEPROM Unlock  */
  };

  /**
   * EEPROM Protection
   */
  struct EEPROT
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEPROT_PROT  = regbits< type,  0,  3 >;  /**< Protection Control  */
    using EEPROM_EEPROT_ACC   = regbits< type,  3,  1 >;  /**< Access Control      */
  };

  /**
   * EEPROM Password
   */
  struct EEPASS0
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEPASS0_PASS  = regbits< type,  0, 32 >;  /**< Password  */
  };

  /**
   * EEPROM Password
   */
  struct EEPASS1
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEPASS1_PASS  = regbits< type,  0, 32 >;  /**< Password  */
  };

  /**
   * EEPROM Password
   */
  struct EEPASS2
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEPASS2_PASS  = regbits< type,  0, 32 >;  /**< Password  */
  };

  /**
   * EEPROM Interrupt
   */
  struct EEINT
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEINT_INT  = regbits< type,  0,  1 >;  /**< Interrupt Enable  */
  };

  /**
   * EEPROM Block Hide
   */
  struct EEHIDE
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEHIDE_HN  = regbits< type,  1, 31 >;  /**< Hide Block  */
  };

  /**
   * EEPROM Debug Mass Erase
   */
  struct EEDBGME
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_EEDBGME_ME   = regbits< type,  0,  1 >;  /**< Mass Erase  */
    using EEPROM_EEDBGME_KEY  = regbits< type, 16, 16 >;  /**< Erase Key   */
  };

  /**
   * EEPROM Peripheral Properties
   */
  struct PP
  : public reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EEPROM_PP_SIZE  = regbits< type,  0,  5 >;  /**< EEPROM Size  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EEPROM_HPP_INCLUDED
