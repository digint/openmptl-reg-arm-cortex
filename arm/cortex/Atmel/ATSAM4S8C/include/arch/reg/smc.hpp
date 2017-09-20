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
//  Import from CMSIS-SVD: "Atmel/ATSAM4S8C.svd"
//
//  vendor: Atmel
//  name: ATSAM4S8C
//  series: SAM4S
//  version: 20130131
//  description: Atmel ATSAM4S8C device: Cortex-M4 Microcontroller with 512KB Flash, 128KB SRAM, USB, 100 Pins (refer to http://www.atmel.com/devices/SAM4S8C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SMC_HPP_INCLUDED
#define ARCH_REG_SMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Static Memory Controller
 */
struct SMC
{
  static constexpr reg_addr_t base_addr = 0x400e0000;

  /**
   * SMC Setup Register (CS_number = 0)
   */
  struct SETUP0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 0)
   */
  struct PULSE0
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 0)
   */
  struct CYCLE0
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 0)
   */
  struct MODE0
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC Setup Register (CS_number = 1)
   */
  struct SETUP1
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 1)
   */
  struct PULSE1
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 1)
   */
  struct CYCLE1
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 1)
   */
  struct MODE1
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC Setup Register (CS_number = 2)
   */
  struct SETUP2
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 2)
   */
  struct PULSE2
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 2)
   */
  struct CYCLE2
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 2)
   */
  struct MODE2
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC Setup Register (CS_number = 3)
   */
  struct SETUP3
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in WRITE Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in READ Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 3)
   */
  struct PULSE3
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  7 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  7 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  7 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  7 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 3)
   */
  struct CYCLE3
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Mode Register (CS_number = 3)
   */
  struct MODE3
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode         */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time    */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization   */
    using PMEN        = regbits< type, 24,  1 >;  /**< Page Mode Enabled  */
    using PS          = regbits< type, 28,  2 >;  /**< Page Size          */
  };

  /**
   * SMC OCMS MODE Register
   */
  struct OCMS
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >;

    using SMSE   = regbits< type,  0,  1 >;  /**< Static Memory Controller Scrambling Enable  */
    using CS0SE  = regbits< type, 16,  1 >;  /**< Chip Select (x = 0 to 3) Scrambling Enable  */
    using CS1SE  = regbits< type, 17,  1 >;  /**< Chip Select (x = 0 to 3) Scrambling Enable  */
    using CS2SE  = regbits< type, 18,  1 >;  /**< Chip Select (x = 0 to 3) Scrambling Enable  */
    using CS3SE  = regbits< type, 19,  1 >;  /**< Chip Select (x = 0 to 3) Scrambling Enable  */
  };

  /**
   * SMC OCMS KEY1 Register
   */
  struct KEY1
  : public reg< uint32_t, base_addr + 0x00000084, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: KEY1
    using KEY1_ = regbits< type,  0, 32 >;  /**< Off Chip Memory Scrambling (OCMS) Key Part 1  */
  };

  /**
   * SMC OCMS KEY2 Register
   */
  struct KEY2
  : public reg< uint32_t, base_addr + 0x00000088, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: KEY2
    using KEY2_ = regbits< type,  0, 32 >;  /**< Off Chip Memory Scrambling (OCMS) Key Part 2  */
  };

  /**
   * SMC Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * SMC Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Enable            */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SMC_HPP_INCLUDED
