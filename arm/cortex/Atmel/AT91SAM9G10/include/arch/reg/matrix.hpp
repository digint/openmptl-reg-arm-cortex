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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G10
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G10 device: ARM926EJ Embedded Microprocessor Unit, 266MHz, LCD, USB, 217 Pins (refer to http://www.atmel.com/devices/SAM9G10.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MATRIX_HPP_INCLUDED
#define ARCH_REG_MATRIX_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AHB Bus Matrix
 */
struct MATRIX
{
  static constexpr reg_addr_t base_addr = 0xffffee00;

  /**
   * Master Configuration Register
   */
  struct MATRIX_MCFG
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0x00000000 >;

    using RCB0  = regbits< type,  0,  1 >;  /**< Remap Command Bit for AHB Master 0  */
    using RCB1  = regbits< type,  1,  1 >;  /**< Remap Command Bit for AHB Master 1  */
  };

  /**
   * Slave Configuration Register
   */
  struct MATRIX_SCFG[%s]
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SLOT_CYCLE     = regbits< type,  0,  8 >;  /**< Maximum Number of Allowed Cycles for a Burst  */
    using DEFMSTR_TYPE   = regbits< type, 16,  2 >;
    using FIXED_DEFMSTR  = regbits< type, 18,  3 >;  /**< Fixed Index of Default Master                 */
  };

  /**
   * MATRIX TCM Configuration Register
   */
  struct MATRIX_TCR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >;

    using ITCM_SIZE  = regbits< type,  0,  4 >;  /**< Size of ITCM enabled memory block  */
    using DTCM_SIZE  = regbits< type,  4,  4 >;  /**< Size of DTCM enabled memory block  */
  };

  /**
   * EBI Chip Select Assignment Register
   */
  struct EBI_CSA
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x00000000 >;

    using EBI_CS1A   = regbits< type,  1,  1 >;  /**< EBI Chip Select 1 Assignment        */
    using EBI_CS3A   = regbits< type,  3,  1 >;  /**< EBI Chip Select 3 Assignment        */
    using EBI_CS4A   = regbits< type,  4,  1 >;  /**< EBI Chip Select 4 Assignment        */
    using EBI_CS5A   = regbits< type,  5,  1 >;  /**< EBI Chip Select 5 Assignment        */
    using EBI_DBPUC  = regbits< type,  8,  1 >;  /**< EBI Data Bus Pull-Up Configuration  */
  };

  /**
   * USB Pad Pull-up Control Register
   */
  struct USB_PUCR
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >;

    using UDP_PUP_ON  = regbits< type, 30,  1 >;  /**< UDP Pad Pull-up Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MATRIX_HPP_INCLUDED
