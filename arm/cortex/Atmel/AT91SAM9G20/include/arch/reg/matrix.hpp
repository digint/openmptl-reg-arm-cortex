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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G20.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G20
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G20 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, USB, Ethernet, 217 and 247 Pins (refer to http://www.atmel.com/devices/SAM9G20.aspx for more)
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
  struct MATRIX_MCFG[%s]
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ULBT  = regbits< type,  0,  3 >;  /**< Undefined Length Burst Type  */
  };

  /**
   * Slave Configuration Register
   */
  struct MATRIX_SCFG[%s]
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SLOT_CYCLE     = regbits< type,  0,  8 >;  /**< Maximum Number of Allowed Cycles for a Burst  */
    using DEFMSTR_TYPE   = regbits< type, 16,  2 >;  /**< Default Master Type                           */
    using FIXED_DEFMSTR  = regbits< type, 18,  3 >;  /**< Fixed Default Master                          */
    using ARBT           = regbits< type, 24,  2 >;  /**< Arbitration Type                              */
  };

  /**
   * Priority Register A for Slave 0
   */
  struct MATRIX_PRAS0
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
  };

  /**
   * Priority Register A for Slave 1
   */
  struct MATRIX_PRAS1
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
  };

  /**
   * Priority Register A for Slave 2
   */
  struct MATRIX_PRAS2
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
  };

  /**
   * Priority Register A for Slave 3
   */
  struct MATRIX_PRAS3
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
  };

  /**
   * Priority Register A for Slave 4
   */
  struct MATRIX_PRAS4
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0x00000000 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
  };

  /**
   * Master Remap Control Register
   */
  struct MATRIX_MRCR
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >;

    using RCB0  = regbits< type,  0,  1 >;  /**< Remap Command Bit for AHB Master 0  */
    using RCB1  = regbits< type,  1,  1 >;  /**< Remap Command Bit for AHB Master 1  */
  };

  /**
   * EBI Chip Select Assignment Register
   */
  struct EBI_CSA
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0x00010000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0x00010000 >;

    using EBI_CS1A   = regbits< type,  1,  1 >;  /**< EBI Chip Select 1 Assignment        */
    using EBI_CS3A   = regbits< type,  3,  1 >;  /**< EBI Chip Select 3 Assignment        */
    using EBI_CS4A   = regbits< type,  4,  1 >;  /**< EBI Chip Select 4 Assignment        */
    using EBI_CS5A   = regbits< type,  5,  1 >;  /**< EBI Chip Select 5 Assignment        */
    using EBI_DBPUC  = regbits< type,  8,  1 >;  /**< EBI Data Bus Pull-Up Configuration  */
    using VDDIOMSEL  = regbits< type, 16,  1 >;  /**< Memory voltage selection            */
    using IOSR       = regbits< type, 17,  1 >;  /**< I/O Slew Rate Selection             */
  };
};
} // namespace mptl

#endif // ARCH_REG_MATRIX_HPP_INCLUDED
