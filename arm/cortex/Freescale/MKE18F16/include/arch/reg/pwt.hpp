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
//  Import from CMSIS-SVD: "Freescale/MKE18F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE18F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE18F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWT_HPP_INCLUDED
#define ARCH_REG_PWT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pulse Width Timer
 */
struct PWT
{
  static constexpr reg_addr_t base_addr = 0x40056000;

  /**
   * Pulse Width Timer Control and Status Register
   */
  struct CS
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using PWTOV   = regbits< type,  0,  1 >;  /**< PWT Counter Overflow                         */
    using PWTRDY  = regbits< type,  1,  1 >;  /**< PWT Pulse Width Valid                        */
    using FCTLE   = regbits< type,  2,  1 >;  /**< First counter load enable after enable       */
    using PWTSR   = regbits< type,  3,  1 >;  /**< PWT Soft Reset                               */
    using POVIE   = regbits< type,  4,  1 >;  /**< PWT Counter Overflow Interrupt Enable        */
    using PRDYIE  = regbits< type,  5,  1 >;  /**< PWT Pulse Width Data Ready Interrupt Enable  */
    using PWTIE   = regbits< type,  6,  1 >;  /**< PWT Module Interrupt Enable                  */
    using PWTEN   = regbits< type,  7,  1 >;  /**< PWT Module Enable                            */
  };

  /**
   * Pulse Width Timer Control Register
   */
  struct CR
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using PRE     = regbits< type,  0,  3 >;  /**< PWT Clock Prescaler (CLKPRE) Setting  */
    using LVL     = regbits< type,  3,  1 >;  /**< PWTIN Level when Overflows            */
    using TGL     = regbits< type,  4,  1 >;  /**< PWTIN states Toggled from last state  */
    using PINSEL  = regbits< type,  5,  2 >;  /**< PWT Pulse Inputs Selection            */
    using PCLKS   = regbits< type,  7,  1 >;  /**< PWT Clock Source Selection            */
  };

  /**
   * Pulse Width Timer Positive Pulse Width Register: High
   */
  struct PPH
  : public reg< uint8_t, base_addr + 0x2, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, ro, 0 >;

    using PPWH  = regbits< type,  0,  8 >;  /**< Positive Pulse Width[15:8]  */
  };

  /**
   * Pulse Width Timer Positive Pulse Width Register: Loq
   */
  struct PPL
  : public reg< uint8_t, base_addr + 0x3, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, ro, 0 >;

    using PPWL  = regbits< type,  0,  8 >;  /**< Positive Pulse Width[7:0]  */
  };

  /**
   * Pulse Width Timer Negative Pulse Width Register: High
   */
  struct NPH
  : public reg< uint8_t, base_addr + 0x4, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0 >;

    using NPWH  = regbits< type,  0,  8 >;  /**< Negative Pulse Width[15:8]  */
  };

  /**
   * Pulse Width Timer Negative Pulse Width Register: Low
   */
  struct NPL
  : public reg< uint8_t, base_addr + 0x5, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, ro, 0 >;

    using NPWL  = regbits< type,  0,  8 >;  /**< Negative Pulse Width[7:0]  */
  };

  /**
   * Pulse Width Timer Counter Register: High
   */
  struct CNTH
  : public reg< uint8_t, base_addr + 0x6, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, ro, 0 >;

    using PWTH  = regbits< type,  0,  8 >;  /**< PWT counter[15:8]  */
  };

  /**
   * Pulse Width Timer Counter Register: Low
   */
  struct CNTL
  : public reg< uint8_t, base_addr + 0x7, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, ro, 0 >;

    using PWTL  = regbits< type,  0,  8 >;  /**< PWT counter[7:0]  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWT_HPP_INCLUDED
