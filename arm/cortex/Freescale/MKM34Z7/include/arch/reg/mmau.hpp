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
//  Import from CMSIS-SVD: "Freescale/MKM34Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKM34Z7
//  series: Kinetis_M
//  version: 1.6
//  description: MKM34Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MMAU_HPP_INCLUDED
#define ARCH_REG_MMAU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Memory-Mapped Arithmetic Unit
 */
struct MMAU
{
  static constexpr reg_addr_t base_addr = 0xf0004000;

  /**
   * Operand Register X0
   */
  struct X0
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    // fixme: Field name equals parent register name: X0
    using X0_ = regbits< type,  0, 32 >;  /**< Operand Register X0  */
  };

  /**
   * Operand Register X1
   */
  struct X1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    // fixme: Field name equals parent register name: X1
    using X1_ = regbits< type,  0, 32 >;  /**< Operand Register X1  */
  };

  /**
   * Operand Register X2
   */
  struct X2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    // fixme: Field name equals parent register name: X2
    using X2_ = regbits< type,  0, 32 >;  /**< Operand Register X2  */
  };

  /**
   * Operand Register X3
   */
  struct X3
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    // fixme: Field name equals parent register name: X3
    using X3_ = regbits< type,  0, 32 >;  /**< Operand Register X3  */
  };

  /**
   * Accumulator Register A0
   */
  struct A0
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    // fixme: Field name equals parent register name: A0
    using A0_ = regbits< type,  0, 32 >;  /**< Accumulator Register A0  */
  };

  /**
   * Accumulator Register A1
   */
  struct A1
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    // fixme: Field name equals parent register name: A1
    using A1_ = regbits< type,  0, 32 >;  /**< Accumulator Register A1  */
  };

  /**
   * Control/Status Register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using Q     = regbits< type,  0,  1 >;  /**< Q flag: Accumulation Overflow                             */
    using V     = regbits< type,  1,  1 >;  /**< V flag: Multiply or Divide overflow                       */
    using DZ    = regbits< type,  2,  1 >;  /**< DZ flag: Divide by Zero                                   */
    using N     = regbits< type,  3,  1 >;  /**< N flag: Signed calculation result is negative             */
    using QIF   = regbits< type,  4,  1 >;  /**< Q Interrupt Flag: Accumulation Overflow Interrupt Status  */
    using VIF   = regbits< type,  5,  1 >;  /**< V Interrupt Flag: Multiply or Divide overflow             */
    using DZIF  = regbits< type,  6,  1 >;  /**< DZ Interrupt Flag: Divide by Zero                         */
    using QIE   = regbits< type, 12,  1 >;  /**< Accumulation Overflow (Q flag) Interrupt Enable           */
    using VIE   = regbits< type, 13,  1 >;  /**< Divide/Multiply Overflow (V flag) Interrupt Enable        */
    using DZIE  = regbits< type, 14,  1 >;  /**< Divide-by-Zero Interrupt Enable                           */
    using DRE   = regbits< type, 16,  1 >;  /**< DMA Request Enable                                        */
    using SO    = regbits< type, 17,  1 >;  /**< Supervisor-Only                                           */
    using HDR   = regbits< type, 20,  4 >;  /**< Hardware Revision Level                                   */
    using BUSY  = regbits< type, 31,  1 >;  /**< BUSY                                                      */
  };

  /**
   * CSR Interrupt Flags Clearance Register
   */
  struct CSR_IF_CLR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using Q     = regbits< type,  0,  1 >;  /**< Q flag: Accumulation Overflow                             */
    using V     = regbits< type,  1,  1 >;  /**< V flag: Multiply or Divide overflow                       */
    using DZ    = regbits< type,  2,  1 >;  /**< DZ flag: Divide by Zero                                   */
    using N     = regbits< type,  3,  1 >;  /**< N flag: Signed calculation result is negative             */
    using QIF   = regbits< type,  4,  1 >;  /**< Q Interrupt Flag: Accumulation Overflow Interrupt Status  */
    using VIF   = regbits< type,  5,  1 >;  /**< V Interrupt Flag: Multiply or Divide overflow             */
    using DZIF  = regbits< type,  6,  1 >;  /**< DZ Interrupt Flag: Divide by Zero                         */
  };
};
} // namespace mptl

#endif // ARCH_REG_MMAU_HPP_INCLUDED
