/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKE14F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE14F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE14F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TRGMUX0_HPP_INCLUDED
#define ARCH_REG_TRGMUX0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * TRGMUX
 */
struct TRGMUX0
{
  static constexpr reg_addr_t base_addr = 0x40062000;

  /**
   * TRGMUX Register
   */
  struct TRGMUX_DMAMUX0
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using SEL3  = regbits< type, 24,  6 >;  /**< Trigger MUX Input 3 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_EXTOUT0
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using SEL3  = regbits< type, 24,  6 >;  /**< Trigger MUX Input 3 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_EXTOUT1
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using SEL3  = regbits< type, 24,  6 >;  /**< Trigger MUX Input 3 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_ADC0
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_ADC1
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_ADC2
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_DAC0
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_CMP0
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_CMP1
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_CMP2
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_FTM0
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using SEL3  = regbits< type, 24,  6 >;  /**< Trigger MUX Input 3 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_FTM1
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_FTM2
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_FTM3
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_PDB0
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_PDB1
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_PDB2
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_FLEXIO
  : public reg< uint32_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using SEL3  = regbits< type, 24,  6 >;  /**< Trigger MUX Input 3 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_LPIT0
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using SEL3  = regbits< type, 24,  6 >;  /**< Trigger MUX Input 3 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_LPUART0
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_LPUART1
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_LPI2C0
  : public reg< uint32_t, base_addr + 0x54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_LPI2C1
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_LPSPI0
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_LPSPI1
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_LPTMR0
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_PWT
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };
};
} // namespace mptl

#endif // ARCH_REG_TRGMUX0_HPP_INCLUDED
