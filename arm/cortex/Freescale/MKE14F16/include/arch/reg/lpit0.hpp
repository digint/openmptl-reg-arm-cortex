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

#ifndef ARCH_REG_LPIT0_HPP_INCLUDED
#define ARCH_REG_LPIT0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low Power Periodic Interrupt Timer (LPIT)
 */
struct LPIT0
{
  static constexpr reg_addr_t base_addr = 0x40037000;

  /**
   * Version ID Register
   */
  struct VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x1000000 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Feature Number        */
    using MINOR    = regbits< type, 16,  8 >;  /**< Minor Version Number  */
    using MAJOR    = regbits< type, 24,  8 >;  /**< Major Version Number  */
  };

  /**
   * Parameter Register
   */
  struct PARAM
  : public reg< uint32_t, base_addr + 0x4, ro, 0x404 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x404 >;

    using CHANNEL   = regbits< type,  0,  8 >;  /**< Number of Timer Channels           */
    using EXT_TRIG  = regbits< type,  8,  8 >;  /**< Number of External Trigger Inputs  */
  };

  /**
   * Module Control Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using M_CEN    = regbits< type,  0,  1 >;  /**< Module Clock Enable   */
    using SW_RST   = regbits< type,  1,  1 >;  /**< Software Reset Bit    */
    using DOZE_EN  = regbits< type,  2,  1 >;  /**< DOZE Mode Enable Bit  */
    using DBG_EN   = regbits< type,  3,  1 >;  /**< Debug Enable Bit      */
  };

  /**
   * Module Status Register
   */
  struct MSR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using TIF0  = regbits< type,  0,  1 >;  /**< Channel 0 Timer Interrupt Flag  */
    using TIF1  = regbits< type,  1,  1 >;  /**< Channel 1 Timer Interrupt Flag  */
    using TIF2  = regbits< type,  2,  1 >;  /**< Channel 2 Timer Interrupt Flag  */
    using TIF3  = regbits< type,  3,  1 >;  /**< Channel 3 Timer Interrupt Flag  */
  };

  /**
   * Module Interrupt Enable Register
   */
  struct MIER
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using TIE0  = regbits< type,  0,  1 >;  /**< Channel 0 Timer Interrupt Enable  */
    using TIE1  = regbits< type,  1,  1 >;  /**< Channel 1 Timer Interrupt Enable  */
    using TIE2  = regbits< type,  2,  1 >;  /**< Channel 2 Timer Interrupt Enable  */
    using TIE3  = regbits< type,  3,  1 >;  /**< Channel 3 Timer Interrupt Enable  */
  };

  /**
   * Set Timer Enable Register
   */
  struct SETTEN
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using SET_T_EN_0  = regbits< type,  0,  1 >;  /**< Set Timer 0 Enable  */
    using SET_T_EN_1  = regbits< type,  1,  1 >;  /**< Set Timer 1 Enable  */
    using SET_T_EN_2  = regbits< type,  2,  1 >;  /**< Set Timer 2 Enable  */
    using SET_T_EN_3  = regbits< type,  3,  1 >;  /**< Set Timer 3 Enable  */
  };

  /**
   * Clear Timer Enable Register
   */
  struct CLRTEN
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using CLR_T_EN_0  = regbits< type,  0,  1 >;  /**< Clear Timer 0 Enable  */
    using CLR_T_EN_1  = regbits< type,  1,  1 >;  /**< Clear Timer 1 Enable  */
    using CLR_T_EN_2  = regbits< type,  2,  1 >;  /**< Clear Timer 2 Enable  */
    using CLR_T_EN_3  = regbits< type,  3,  1 >;  /**< Clear Timer 3 Enable  */
  };

  /**
   * Timer Value Register
   */
  struct TVAL%s
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using TMR_VAL  = regbits< type,  0, 32 >;  /**< Timer Value  */
  };

  /**
   * Current Timer Value
   */
  struct CVAL%s
  : public reg< uint32_t, base_addr + 0x24, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0xFFFFFFFF >;

    using TMR_CUR_VAL  = regbits< type,  0, 32 >;  /**< Current Timer Value  */
  };

  /**
   * Timer Control Register
   */
  struct TCTRL%s
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using T_EN     = regbits< type,  0,  1 >;  /**< Timer Enable             */
    using CHAIN    = regbits< type,  1,  1 >;  /**< Chain Channel            */
    using MODE     = regbits< type,  2,  2 >;  /**< Timer Operation Mode     */
    using TSOT     = regbits< type, 16,  1 >;  /**< Timer Start On Trigger   */
    using TSOI     = regbits< type, 17,  1 >;  /**< Timer Stop On Interrupt  */
    using TROT     = regbits< type, 18,  1 >;  /**< Timer Reload On Trigger  */
    using TRG_SRC  = regbits< type, 23,  1 >;  /**< Trigger Source           */
    using TRG_SEL  = regbits< type, 24,  4 >;  /**< Trigger Select           */
  };
};
} // namespace mptl

#endif // ARCH_REG_LPIT0_HPP_INCLUDED
