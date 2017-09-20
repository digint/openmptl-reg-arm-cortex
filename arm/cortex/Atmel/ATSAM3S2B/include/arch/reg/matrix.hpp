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
//  Import from CMSIS-SVD: "Atmel/ATSAM3S2B.svd"
//
//  vendor: Atmel
//  name: ATSAM3S2B
//  series: SAM3S
//  version: 20130131
//  description: Atmel ATSAM3S2B device: Cortex-M3 Microcontroller with 128KB Flash, USB, 64 Pins (refer to http://www.atmel.com/devices/SAM3S2B.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0x400e0200;

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
  };

  /**
   * System I/O Configuration register
   */
  struct CCFG_SYSIO
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >;

    using SYSIO4   = regbits< type,  4,  1 >;  /**< PB4 or TDI Assignment           */
    using SYSIO5   = regbits< type,  5,  1 >;  /**< PB5 or TDO/TRACESWO Assignment  */
    using SYSIO6   = regbits< type,  6,  1 >;  /**< PB6 or TMS/SWDIO Assignment     */
    using SYSIO7   = regbits< type,  7,  1 >;  /**< PB7 or TCK/SWCLK Assignment     */
    using SYSIO10  = regbits< type, 10,  1 >;  /**< PB10 or DDM Assignment          */
    using SYSIO11  = regbits< type, 11,  1 >;  /**< PB11 or DDP Assignment          */
    using SYSIO12  = regbits< type, 12,  1 >;  /**< PB12 or ERASE Assignment        */
  };

  /**
   * SMC Chip Select NAND Flash Assignment Register
   */
  struct CCFG_SMCNFCS
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >;

    using SMC_NFCS0  = regbits< type,  0,  1 >;  /**< SMC NAND Flash Chip Select 0 Assignment  */
    using SMC_NFCS1  = regbits< type,  1,  1 >;  /**< SMC NAND Flash Chip Select 1 Assignment  */
    using SMC_NFCS2  = regbits< type,  2,  1 >;  /**< SMC NAND Flash Chip Select 2 Assignment  */
    using SMC_NFCS3  = regbits< type,  3,  1 >;  /**< SMC NAND Flash Chip Select 3 Assignment  */
  };

  /**
   * Write Protect Mode Register
   */
  struct MATRIX_WPMR
  : public reg< uint32_t, base_addr + 0x000001e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect ENable            */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY (Write-only)  */
  };

  /**
   * Write Protect Status Register
   */
  struct MATRIX_WPSR
  : public reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Violation Status  */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MATRIX_HPP_INCLUDED
