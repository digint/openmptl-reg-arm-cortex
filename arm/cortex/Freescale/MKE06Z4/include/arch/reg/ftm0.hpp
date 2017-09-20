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
//  Import from CMSIS-SVD: "Freescale/MKE06Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE06Z4
//  series: Kinetis_E
//  version: 1.6
//  description: MKE06Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FTM0_HPP_INCLUDED
#define ARCH_REG_FTM0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * FlexTimer Module
 */
struct FTM0
{
  static constexpr reg_addr_t base_addr = 0x40038000;

  /**
   * Status And Control
   */
  struct SC
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using PS     = regbits< type,  0,  3 >;  /**< Prescale Factor Selection        */
    using CLKS   = regbits< type,  3,  2 >;  /**< Clock Source Selection           */
    using CPWMS  = regbits< type,  5,  1 >;  /**< Center-Aligned PWM Select        */
    using TOIE   = regbits< type,  6,  1 >;  /**< Timer Overflow Interrupt Enable  */
    using TOF    = regbits< type,  7,  1 >;  /**< Timer Overflow Flag              */
  };

  /**
   * Counter
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };

  /**
   * Modulo
   */
  struct MOD
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    // fixme: Field name equals parent register name: MOD
    using MOD_ = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Channel (n) Status And Control
   */
  struct C%sSC
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using ELSA  = regbits< type,  2,  1 >;  /**< Edge or Level Select      */
    using ELSB  = regbits< type,  3,  1 >;  /**< Edge or Level Select      */
    using MSA   = regbits< type,  4,  1 >;  /**< Channel Mode Select       */
    using MSB   = regbits< type,  5,  1 >;  /**< Channel Mode Select       */
    using CHIE  = regbits< type,  6,  1 >;  /**< Channel Interrupt Enable  */
    using CHF   = regbits< type,  7,  1 >;  /**< Channel Flag              */
  };

  /**
   * Channel (n) Value
   */
  struct C%sV
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using VAL  = regbits< type,  0, 16 >;  /**< Channel Value  */
  };

  /**
   * FTM External Trigger
   */
  struct EXTTRIG
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using CH2TRIG     = regbits< type,  0,  1 >;  /**< Channel 2 Trigger Enable       */
    using CH3TRIG     = regbits< type,  1,  1 >;  /**< Channel 3 Trigger Enable       */
    using CH4TRIG     = regbits< type,  2,  1 >;  /**< Channel 4 Trigger Enable       */
    using CH5TRIG     = regbits< type,  3,  1 >;  /**< Channel 5 Trigger Enable       */
    using CH0TRIG     = regbits< type,  4,  1 >;  /**< Channel 0 Trigger Enable       */
    using CH1TRIG     = regbits< type,  5,  1 >;  /**< Channel 1 Trigger Enable       */
    using INITTRIGEN  = regbits< type,  6,  1 >;  /**< Initialization Trigger Enable  */
    using TRIGF       = regbits< type,  7,  1 >;  /**< Channel Trigger Flag           */
  };
};
} // namespace mptl

#endif // ARCH_REG_FTM0_HPP_INCLUDED
