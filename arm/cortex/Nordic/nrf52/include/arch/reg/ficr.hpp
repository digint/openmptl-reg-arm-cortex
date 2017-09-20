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
//  Import from CMSIS-SVD: "Nordic/nrf52.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf52
//  series: nrf52
//  version: 1
//  description: nRF52 reference description for radio MCU with ARM 32-bit Cortex-M4 Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FICR_HPP_INCLUDED
#define ARCH_REG_FICR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Factory Information Configuration Registers
 */
struct FICR
{
  static constexpr reg_addr_t base_addr = 0x10000000;

  /**
   * Code memory page size
   */
  struct CODEPAGESIZE
  : public reg< uint32_t, base_addr + 0x010, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x010, ro, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: CODEPAGESIZE
    using CODEPAGESIZE_ = regbits< type,  0, 32 >;  /**< Code memory page size  */
  };

  /**
   * Code memory size
   */
  struct CODESIZE
  : public reg< uint32_t, base_addr + 0x014, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x014, ro, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: CODESIZE
    using CODESIZE_ = regbits< type,  0, 32 >;  /**< Code memory size in number of pages  */
  };

  /**
   * Configuration identifier
   */
  struct CONFIGID
  : public reg< uint32_t, base_addr + 0x05c, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x05c, ro, 0xFFFFFFFF >;

    using HWID  = regbits< type,  0, 16 >;  /**< Identification number for the HW                                                      */
    using FWID  = regbits< type, 16, 16 >;  /**< Deprecated field - Identification number for the FW that is pre-loaded into the chip  */
  };

  /**
   * Description collection[0]: Device identifier
   */
  struct DEVICEID[%s]
  : public reg< uint32_t, base_addr + 0x060, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x060, ro, 0xFFFFFFFF >;

    using DEVICEID  = regbits< type,  0, 32 >;  /**< 64 bit unique device identifier  */
  };

  /**
   * Description collection[0]: Encryption Root, word 0
   */
  struct ER[%s]
  : public reg< uint32_t, base_addr + 0x080, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x080, ro, 0xFFFFFFFF >;

    using ER  = regbits< type,  0, 32 >;  /**< Encryption Root, word n  */
  };

  /**
   * Description collection[0]: Identity Root, word 0
   */
  struct IR[%s]
  : public reg< uint32_t, base_addr + 0x090, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x090, ro, 0xFFFFFFFF >;

    using IR  = regbits< type,  0, 32 >;  /**< Identity Root, word n  */
  };

  /**
   * Device address type
   */
  struct DEVICEADDRTYPE
  : public reg< uint32_t, base_addr + 0x0a0, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x0a0, ro, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: DEVICEADDRTYPE
    using DEVICEADDRTYPE_ = regbits< type,  0,  1 >;  /**< Device address type  */
  };

  /**
   * Description collection[0]: Device address 0
   */
  struct DEVICEADDR[%s]
  : public reg< uint32_t, base_addr + 0x0a4, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x0a4, ro, 0xFFFFFFFF >;

    using DEVICEADDR  = regbits< type,  0, 32 >;  /**< 48 bit device address  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FICR_HPP_INCLUDED
