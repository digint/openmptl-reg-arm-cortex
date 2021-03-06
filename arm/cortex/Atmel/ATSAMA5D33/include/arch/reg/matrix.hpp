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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D33.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D33
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D33 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, LCD controller, gigabit Ethernet, security (refer to http://www.atmel.com/devices/SAMA5D33.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0xffffec00;

  /**
   * Master Configuration Register
   */
  struct MCFG[%s]
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ULBT  = regbits< type,  0,  3 >;  /**< Undefined Length Burst Type  */
  };

  /**
   * Slave Configuration Register
   */
  struct SCFG[%s]
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SLOT_CYCLE     = regbits< type,  0,  9 >;  /**< Maximum Bus Grant Duration for Masters  */
    using DEFMSTR_TYPE   = regbits< type, 16,  2 >;  /**< Default Master Type                     */
    using FIXED_DEFMSTR  = regbits< type, 18,  4 >;  /**< Fixed Default Master                    */
  };

  /**
   * Priority Register A for Slave 0
   */
  struct PRAS0
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 0
   */
  struct PRBS0
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 1
   */
  struct PRAS1
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 1
   */
  struct PRBS1
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 2
   */
  struct PRAS2
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 2
   */
  struct PRBS2
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 3
   */
  struct PRAS3
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 3
   */
  struct PRBS3
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 4
   */
  struct PRAS4
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 4
   */
  struct PRBS4
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 5
   */
  struct PRAS5
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 5
   */
  struct PRBS5
  : public reg< uint32_t, base_addr + 0x000000ac, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000ac, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 6
   */
  struct PRAS6
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 6
   */
  struct PRBS6
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 7
   */
  struct PRAS7
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 7
   */
  struct PRBS7
  : public reg< uint32_t, base_addr + 0x000000bc, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 8
   */
  struct PRAS8
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 8
   */
  struct PRBS8
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 9
   */
  struct PRAS9
  : public reg< uint32_t, base_addr + 0x000000c8, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 9
   */
  struct PRBS9
  : public reg< uint32_t, base_addr + 0x000000cc, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000cc, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 10
   */
  struct PRAS10
  : public reg< uint32_t, base_addr + 0x000000d0, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d0, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 10
   */
  struct PRBS10
  : public reg< uint32_t, base_addr + 0x000000d4, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d4, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 11
   */
  struct PRAS11
  : public reg< uint32_t, base_addr + 0x000000d8, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d8, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 11
   */
  struct PRBS11
  : public reg< uint32_t, base_addr + 0x000000dc, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000dc, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 12
   */
  struct PRAS12
  : public reg< uint32_t, base_addr + 0x000000e0, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e0, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 12
   */
  struct PRBS12
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 13
   */
  struct PRAS13
  : public reg< uint32_t, base_addr + 0x000000e8, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 13
   */
  struct PRBS13
  : public reg< uint32_t, base_addr + 0x000000ec, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000ec, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 14
   */
  struct PRAS14
  : public reg< uint32_t, base_addr + 0x000000f0, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000f0, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 14
   */
  struct PRBS14
  : public reg< uint32_t, base_addr + 0x000000f4, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000f4, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Priority Register A for Slave 15
   */
  struct PRAS15
  : public reg< uint32_t, base_addr + 0x000000f8, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000f8, rw, 0x33333333 >;

    using M0PR  = regbits< type,  0,  2 >;  /**< Master 0 Priority  */
    using M1PR  = regbits< type,  4,  2 >;  /**< Master 1 Priority  */
    using M2PR  = regbits< type,  8,  2 >;  /**< Master 2 Priority  */
    using M3PR  = regbits< type, 12,  2 >;  /**< Master 3 Priority  */
    using M4PR  = regbits< type, 16,  2 >;  /**< Master 4 Priority  */
    using M5PR  = regbits< type, 20,  2 >;  /**< Master 5 Priority  */
    using M6PR  = regbits< type, 24,  2 >;  /**< Master 6 Priority  */
    using M7PR  = regbits< type, 28,  2 >;  /**< Master 7 Priority  */
  };

  /**
   * Priority Register B for Slave 15
   */
  struct PRBS15
  : public reg< uint32_t, base_addr + 0x000000fc, rw, 0x33333333 >
  {
    using type = reg< uint32_t, base_addr + 0x000000fc, rw, 0x33333333 >;

    using M8PR   = regbits< type,  0,  2 >;  /**< Master 8 Priority   */
    using M9PR   = regbits< type,  4,  2 >;  /**< Master 9 Priority   */
    using M10PR  = regbits< type,  8,  2 >;  /**< Master 10 Priority  */
    using M11PR  = regbits< type, 12,  2 >;  /**< Master 11 Priority  */
    using M12PR  = regbits< type, 16,  2 >;  /**< Master 12 Priority  */
    using M13PR  = regbits< type, 20,  2 >;  /**< Master 13 Priority  */
    using M14PR  = regbits< type, 24,  2 >;  /**< Master 14 Priority  */
    using M15PR  = regbits< type, 28,  2 >;  /**< Master 15 Priority  */
  };

  /**
   * Master Remap Control Register
   */
  struct MRCR
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >;

    using RCB0   = regbits< type,  0,  1 >;
    using RCB1   = regbits< type,  1,  1 >;
    using RCB2   = regbits< type,  2,  1 >;
    using RCB3   = regbits< type,  3,  1 >;
    using RCB4   = regbits< type,  4,  1 >;
    using RCB5   = regbits< type,  5,  1 >;
    using RCB6   = regbits< type,  6,  1 >;
    using RCB7   = regbits< type,  7,  1 >;
    using RCB8   = regbits< type,  8,  1 >;
    using RCB9   = regbits< type,  9,  1 >;
    using RCB10  = regbits< type, 10,  1 >;
    using RCB11  = regbits< type, 11,  1 >;
    using RCB12  = regbits< type, 12,  1 >;
    using RCB13  = regbits< type, 13,  1 >;
    using RCB14  = regbits< type, 14,  1 >;
    using RCB15  = regbits< type, 15,  1 >;
  };

  /**
   * Special Function Register
   */
  struct SFR[%s]
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SFR  = regbits< type,  0, 32 >;  /**< Special Function Register Fields  */
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000001e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable            */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY (Write-only)  */
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Violation Status  */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MATRIX_HPP_INCLUDED
