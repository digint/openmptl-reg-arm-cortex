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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE1.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE1
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE1 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PCC0_HPP_INCLUDED
#define ARCH_REG_PCC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * PCC-0
 */
struct PCC0
{
  static constexpr reg_addr_t base_addr = 0x4007a000;

  /**
   * PCC CLKCFG Register
   */
  struct PCC_DMA0
  : public reg< uint32_t, base_addr + 0x20, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_XRDC
  : public reg< uint32_t, base_addr + 0x50, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_SEMA42_0
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_FLASH
  : public reg< uint32_t, base_addr + 0x80, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0xC0000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_DMAMUX0
  : public reg< uint32_t, base_addr + 0x84, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_MU0_A
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_INTMUX0
  : public reg< uint32_t, base_addr + 0x90, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_TPM2
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPIT0
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPTMR0
  : public reg< uint32_t, base_addr + 0xd0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_RTC
  : public reg< uint32_t, base_addr + 0xe0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPSPI2
  : public reg< uint32_t, base_addr + 0xf8, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf8, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPI2C2
  : public reg< uint32_t, base_addr + 0x108, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPUART2
  : public reg< uint32_t, base_addr + 0x118, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_SAI0
  : public reg< uint32_t, base_addr + 0x130, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_EMVSIM0
  : public reg< uint32_t, base_addr + 0x138, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x138, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_USB0FS
  : public reg< uint32_t, base_addr + 0x154, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0x80000000 >;

    using PCD    = regbits< type,  0,  3 >;  /**< Peripheral Clock Divider Select    */
    using FRAC   = regbits< type,  3,  1 >;  /**< Peripheral Clock Divider Fraction  */
    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select     */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control                 */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control                 */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_PORTA
  : public reg< uint32_t, base_addr + 0x168, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x168, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_PORTB
  : public reg< uint32_t, base_addr + 0x16c, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x16c, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_PORTC
  : public reg< uint32_t, base_addr + 0x170, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x170, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_PORTD
  : public reg< uint32_t, base_addr + 0x174, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x174, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_PORTE
  : public reg< uint32_t, base_addr + 0x178, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x178, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_TSI0
  : public reg< uint32_t, base_addr + 0x188, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_ADC0
  : public reg< uint32_t, base_addr + 0x198, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x198, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_DAC0
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_CMP0
  : public reg< uint32_t, base_addr + 0x1b8, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b8, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_VREF
  : public reg< uint32_t, base_addr + 0x1c8, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c8, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_CRC
  : public reg< uint32_t, base_addr + 0x1e0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1e0, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };
};
} // namespace mptl

#endif // ARCH_REG_PCC0_HPP_INCLUDED
