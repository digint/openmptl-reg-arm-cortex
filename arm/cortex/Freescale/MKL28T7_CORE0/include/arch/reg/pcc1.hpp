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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE0.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE0
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE0 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PCC1_HPP_INCLUDED
#define ARCH_REG_PCC1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * PCC-1
 */
struct PCC1
{
  static constexpr reg_addr_t base_addr = 0x400fa000;

  /**
   * PCC CLKCFG Register
   */
  struct PCC_DMA1
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
  struct PCC_SEMA42_1
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
  struct PCC_DMAMUX1
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
  struct PCC_MU0_B
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
  struct PCC_INTMUX1
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
  struct PCC_TRNG
  : public reg< uint32_t, base_addr + 0x94, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_TPM0
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_TPM1
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPIT1
  : public reg< uint32_t, base_addr + 0xc4, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPTMR1
  : public reg< uint32_t, base_addr + 0xd4, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd4, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPSPI0
  : public reg< uint32_t, base_addr + 0xf0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPSPI1
  : public reg< uint32_t, base_addr + 0xf4, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPI2C0
  : public reg< uint32_t, base_addr + 0x100, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPI2C1
  : public reg< uint32_t, base_addr + 0x104, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPUART0
  : public reg< uint32_t, base_addr + 0x110, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_LPUART1
  : public reg< uint32_t, base_addr + 0x114, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_FLEXIO0
  : public reg< uint32_t, base_addr + 0x128, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control              */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_PORTM
  : public reg< uint32_t, base_addr + 0x180, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC CLKCFG Register
   */
  struct PCC_CMP1
  : public reg< uint32_t, base_addr + 0x1bc, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1bc, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Gate Control  */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };
};
} // namespace mptl

#endif // ARCH_REG_PCC1_HPP_INCLUDED
