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
//  Import from CMSIS-SVD: "Freescale/MKE15Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE15Z7
//  series: Kinetis_E
//  version: 1.6
//  description: MKE15Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PCC_HPP_INCLUDED
#define ARCH_REG_PCC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * PCC
 */
struct PCC
{
  static constexpr reg_addr_t base_addr = 0x40065000;

  /**
   * PCC Register
   */
  struct PCC_DMA0
  : public reg< uint32_t, base_addr + 0x20, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0xC0000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_FLASH
  : public reg< uint32_t, base_addr + 0x80, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0xC0000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_DMAMUX0
  : public reg< uint32_t, base_addr + 0x84, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_ADC1
  : public reg< uint32_t, base_addr + 0x9c, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0xC0000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_LPSPI0
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_LPSPI1
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_CRC
  : public reg< uint32_t, base_addr + 0xc8, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_PDB0
  : public reg< uint32_t, base_addr + 0xd8, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_LPIT0
  : public reg< uint32_t, base_addr + 0xdc, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xdc, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_FLEXTMR0
  : public reg< uint32_t, base_addr + 0xe0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_FLEXTMR1
  : public reg< uint32_t, base_addr + 0xe4, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_FLEXTMR2
  : public reg< uint32_t, base_addr + 0xe8, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_ADC0
  : public reg< uint32_t, base_addr + 0xec, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0xec, rw, 0xC0000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_RTC
  : public reg< uint32_t, base_addr + 0xf4, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, rw, 0x80000000 >;

    using PCD    = regbits< type,  0,  3 >;  /**< Peripheral Clock Divider Select    */
    using FRAC   = regbits< type,  3,  1 >;  /**< Peripheral Clock Divider Fraction  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control                 */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                      */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * PCC Register
   */
  struct PCC_LPTMR0
  : public reg< uint32_t, base_addr + 0x100, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x80000000 >;

    using PCD    = regbits< type,  0,  3 >;  /**< Peripheral Clock Divider Select    */
    using FRAC   = regbits< type,  3,  1 >;  /**< Peripheral Clock Divider Fraction  */
    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select     */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control                 */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                      */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * PCC Register
   */
  struct PCC_TSI
  : public reg< uint32_t, base_addr + 0x114, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_PORTA
  : public reg< uint32_t, base_addr + 0x124, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_PORTB
  : public reg< uint32_t, base_addr + 0x128, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_PORTC
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_PORTD
  : public reg< uint32_t, base_addr + 0x130, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_PORTE
  : public reg< uint32_t, base_addr + 0x134, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_PWT
  : public reg< uint32_t, base_addr + 0x158, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x158, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_FLEXIO
  : public reg< uint32_t, base_addr + 0x168, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x168, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_OSC32
  : public reg< uint32_t, base_addr + 0x180, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_EWM
  : public reg< uint32_t, base_addr + 0x184, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_LPI2C0
  : public reg< uint32_t, base_addr + 0x198, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x198, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_LPI2C1
  : public reg< uint32_t, base_addr + 0x19c, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x19c, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_LPUART0
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_LPUART1
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_LPUART2
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0x80000000 >;

    using PCS    = regbits< type, 24,  3 >;  /**< Peripheral Clock Source Select  */
    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control              */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control                   */
    using PR     = regbits< type, 31,  1 >;  /**< Enable                          */
  };

  /**
   * PCC Register
   */
  struct PCC_CMP0
  : public reg< uint32_t, base_addr + 0x1cc, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1cc, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };

  /**
   * PCC Register
   */
  struct PCC_CMP1
  : public reg< uint32_t, base_addr + 0x1d0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1d0, rw, 0x80000000 >;

    using INUSE  = regbits< type, 29,  1 >;  /**< Clock Gate Control  */
    using CGC    = regbits< type, 30,  1 >;  /**< Clock Control       */
    using PR     = regbits< type, 31,  1 >;  /**< Enable              */
  };
};
} // namespace mptl

#endif // ARCH_REG_PCC_HPP_INCLUDED
