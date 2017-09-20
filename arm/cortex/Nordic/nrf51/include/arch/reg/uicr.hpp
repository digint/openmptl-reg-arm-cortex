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

#ifndef ARCH_REG_UICR_HPP_INCLUDED
#define ARCH_REG_UICR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * User Information Configuration.
 */
struct UICR
{
  static constexpr reg_addr_t base_addr = 0x10001000;

  /**
   * Length of code region 0.
   */
  struct CLENR0
  : public reg< uint32_t, base_addr + 0x000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Readback protection configuration.
   */
  struct RBPCONF
  : public reg< uint32_t, base_addr + 0x004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PR0   = regbits< type,  0,  8 >;  /**< Readback protect region 0. Will be ignored if pre-programmed factory code is present on the chip.  */
    using PALL  = regbits< type,  8,  8 >;  /**< Readback protect all code in the device.                                                           */
  };

  /**
   * Reset value for CLOCK XTALFREQ register.
   */
  struct XTALFREQ
  : public reg< uint32_t, base_addr + 0x008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: XTALFREQ
    using XTALFREQ_ = regbits< type,  0,  8 >;  /**< Reset value for CLOCK XTALFREQ register.  */
  };

  /**
   * Firmware ID.
   */
  struct FWID
  : public reg< uint32_t, base_addr + 0x010, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x010, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: FWID
    using FWID_ = regbits< type,  0, 16 >;  /**< Identification number for the firmware loaded into the chip.  */
  };

  /**
   * Bootloader start address.
   */
  struct BOOTLOADERADDR
  : public reg< uint32_t, base_addr + 0x014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Reserved for Nordic firmware design.
   */
  struct NRFFW[%s]
  : public reg< uint32_t, base_addr + 0x014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Reserved for Nordic hardware design.
   */
  struct NRFHW[%s]
  : public reg< uint32_t, base_addr + 0x050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Reserved for customer.
   */
  struct CUSTOMER[%s]
  : public reg< uint32_t, base_addr + 0x080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_UICR_HPP_INCLUDED
