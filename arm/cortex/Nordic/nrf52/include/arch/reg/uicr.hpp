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

#ifndef ARCH_REG_UICR_HPP_INCLUDED
#define ARCH_REG_UICR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * User Information Configuration Registers
 */
struct UICR
{
  static constexpr reg_addr_t base_addr = 0x10001000;

  /**
   * Unspecified
   */
  struct UNUSED0
  : public reg< uint32_t, base_addr + 0x000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Unspecified
   */
  struct UNUSED1
  : public reg< uint32_t, base_addr + 0x004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Unspecified
   */
  struct UNUSED2
  : public reg< uint32_t, base_addr + 0x008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Unspecified
   */
  struct UNUSED3
  : public reg< uint32_t, base_addr + 0x010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Description collection[0]: Reserved for Nordic firmware design
   */
  struct NRFFW[%s]
  : public reg< uint32_t, base_addr + 0x014, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x014, rw, 0xFFFFFFFF >;

    using NRFFW  = regbits< type,  0, 32 >;  /**< Reserved for Nordic firmware design  */
  };

  /**
   * Description collection[0]: Reserved for Nordic hardware design
   */
  struct NRFHW[%s]
  : public reg< uint32_t, base_addr + 0x050, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x050, rw, 0xFFFFFFFF >;

    using NRFHW  = regbits< type,  0, 32 >;  /**< Reserved for Nordic hardware design  */
  };

  /**
   * Description collection[0]: Reserved for customer
   */
  struct CUSTOMER[%s]
  : public reg< uint32_t, base_addr + 0x080, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x080, rw, 0xFFFFFFFF >;

    using CUSTOMER  = regbits< type,  0, 32 >;  /**< Reserved for customer  */
  };

  /**
   * Description collection[0]: Mapping of the nRESET function (see POWER chapter for details)
   */
  struct PSELRESET[%s]
  : public reg< uint32_t, base_addr + 0x200, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0xFFFFFFFF >;

    using PIN      = regbits< type,  0,  5 >;  /**< GPIO number P0.n onto which Reset is exposed  */
    using CONNECT  = regbits< type, 31,  1 >;  /**< Connection                                    */
  };

  /**
   * Access port protection
   */
  struct APPROTECT
  : public reg< uint32_t, base_addr + 0x208, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0xFFFFFFFF >;

    using PALL  = regbits< type,  0,  8 >;  /**< Blocks debugger read/write access to all CPU registers and memory mapped addresses except for the Control Access Port registers.  */
  };

  /**
   * Setting of pins dedicated to NFC functionality: NFC antenna or GPIO
   */
  struct NFCPINS
  : public reg< uint32_t, base_addr + 0x20c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0xFFFFFFFF >;

    using PROTECT  = regbits< type,  0,  1 >;  /**< Setting of pins dedicated to NFC functionality  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UICR_HPP_INCLUDED
