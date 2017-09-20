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
//  Import from CMSIS-SVD: "Nordic/nrf51.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf51
//  series: nrf51
//  version: 522
//  description: nRF51 reference description for radio MCU with ARM 32-bit Cortex-M0 Microcontroller at 16MHz CPU clock
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
 * Factory Information Configuration.
 */
struct FICR
{
  static constexpr reg_addr_t base_addr = 0x10000000;

  /**
   * Code memory page size in bytes.
   */
  struct CODEPAGESIZE
  : public reg< uint32_t, base_addr + 0x010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Code memory size in pages.
   */
  struct CODESIZE
  : public reg< uint32_t, base_addr + 0x014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Length of code region 0 in bytes.
   */
  struct CLENR0
  : public reg< uint32_t, base_addr + 0x028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pre-programmed factory code present.
   */
  struct PPFC
  : public reg< uint32_t, base_addr + 0x02c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x02c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: PPFC
    using PPFC_ = regbits< type,  0,  8 >;  /**< Pre-programmed factory code present.  */
  };

  /**
   * Number of individualy controllable RAM blocks.
   */
  struct NUMRAMBLOCK
  : public reg< uint32_t, base_addr + 0x034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Size of RAM blocks in bytes.
   */
  struct SIZERAMBLOCKS
  : public reg< uint32_t, base_addr + 0x038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Deprecated array of size of RAM block in bytes. This name is kept for backward compatinility purposes. Use SIZERAMBLOCKS instead.
   */
  struct SIZERAMBLOCK[%s]
  : public reg< uint32_t, base_addr + 0x038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Configuration identifier.
   */
  struct CONFIGID
  : public reg< uint32_t, base_addr + 0x05c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x05c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HWID  = regbits< type,  0, 16 >;  /**< Hardware Identification Number.                            */
    using FWID  = regbits< type, 16, 16 >;  /**< Firmware Identification Number pre-loaded into the flash.  */
  };

  /**
   * Device identifier.
   */
  struct DEVICEID[%s]
  : public reg< uint32_t, base_addr + 0x060, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Encryption root.
   */
  struct ER[%s]
  : public reg< uint32_t, base_addr + 0x080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Identity root.
   */
  struct IR[%s]
  : public reg< uint32_t, base_addr + 0x090, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Device address type.
   */
  struct DEVICEADDRTYPE
  : public reg< uint32_t, base_addr + 0x0a0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0a0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DEVICEADDRTYPE
    using DEVICEADDRTYPE_ = regbits< type,  0,  1 >;  /**< Device address type.  */
  };

  /**
   * Device address.
   */
  struct DEVICEADDR[%s]
  : public reg< uint32_t, base_addr + 0x0a4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Radio calibration override enable.
   */
  struct OVERRIDEEN
  : public reg< uint32_t, base_addr + 0x0ac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0ac, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NRF_1MBIT  = regbits< type,  0,  1 >;  /**< Override default values for NRF_1Mbit mode.  */
    using BLE_1MBIT  = regbits< type,  3,  1 >;  /**< Override default values for BLE_1Mbit mode.  */
  };

  /**
   * Override values for the OVERRIDEn registers in RADIO for NRF_1Mbit mode.
   */
  struct NRF_1MBIT[%s]
  : public reg< uint32_t, base_addr + 0x0b0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Override values for the OVERRIDEn registers in RADIO for BLE_1Mbit mode.
   */
  struct BLE_1MBIT[%s]
  : public reg< uint32_t, base_addr + 0x0ec, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_FICR_HPP_INCLUDED
