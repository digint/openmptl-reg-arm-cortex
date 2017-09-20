/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123GH6PGE.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123GH6PGE
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_COMP_HPP_INCLUDED
#define ARCH_REG_COMP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for COMP peripheral
 */
struct COMP
{
  static constexpr reg_addr_t base_addr = 0x4003c000;

  /**
   * Analog Comparator Masked Interrupt Status
   */
  struct ACMIS
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACMIS_IN0  = regbits< type,  0,  1 >;  /**< Comparator 0 Masked Interrupt Status  */
    using COMP_ACMIS_IN1  = regbits< type,  1,  1 >;  /**< Comparator 1 Masked Interrupt Status  */
    using COMP_ACMIS_IN2  = regbits< type,  2,  1 >;  /**< Comparator 2 Masked Interrupt Status  */
  };

  /**
   * Analog Comparator Raw Interrupt Status
   */
  struct ACRIS
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACRIS_IN0  = regbits< type,  0,  1 >;  /**< Comparator 0 Interrupt Status  */
    using COMP_ACRIS_IN1  = regbits< type,  1,  1 >;  /**< Comparator 1 Interrupt Status  */
    using COMP_ACRIS_IN2  = regbits< type,  2,  1 >;  /**< Comparator 2 Interrupt Status  */
  };

  /**
   * Analog Comparator Interrupt Enable
   */
  struct ACINTEN
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACINTEN_IN0  = regbits< type,  0,  1 >;  /**< Comparator 0 Interrupt Enable  */
    using COMP_ACINTEN_IN1  = regbits< type,  1,  1 >;  /**< Comparator 1 Interrupt Enable  */
    using COMP_ACINTEN_IN2  = regbits< type,  2,  1 >;  /**< Comparator 2 Interrupt Enable  */
  };

  /**
   * Analog Comparator Reference Voltage Control
   */
  struct ACREFCTL
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACREFCTL_VREF  = regbits< type,  0,  4 >;  /**< Resistor Ladder Voltage Ref  */
    using COMP_ACREFCTL_RNG   = regbits< type,  8,  1 >;  /**< Resistor Ladder Range        */
    using COMP_ACREFCTL_EN    = regbits< type,  9,  1 >;  /**< Resistor Ladder Enable       */
  };

  /**
   * Analog Comparator Status 0
   */
  struct ACSTAT0
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACSTAT0_OVAL  = regbits< type,  1,  1 >;  /**< Comparator Output Value  */
  };

  /**
   * Analog Comparator Control 0
   */
  struct ACCTL0
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACCTL0_CINV    = regbits< type,  1,  1 >;  /**< Comparator Output Invert     */
    using COMP_ACCTL0_ISEN    = regbits< type,  2,  2 >;  /**< Interrupt Sense              */
    using COMP_ACCTL0_ISLVAL  = regbits< type,  4,  1 >;  /**< Interrupt Sense Level Value  */
    using COMP_ACCTL0_TSEN    = regbits< type,  5,  2 >;  /**< Trigger Sense                */
    using COMP_ACCTL0_TSLVAL  = regbits< type,  7,  1 >;  /**< Trigger Sense Level Value    */
    using COMP_ACCTL0_ASRCP   = regbits< type,  9,  2 >;  /**< Analog Source Positive       */
    using COMP_ACCTL0_TOEN    = regbits< type, 11,  1 >;  /**< Trigger Output Enable        */
  };

  /**
   * Analog Comparator Status 1
   */
  struct ACSTAT1
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACSTAT1_OVAL  = regbits< type,  1,  1 >;  /**< Comparator Output Value  */
  };

  /**
   * Analog Comparator Control 1
   */
  struct ACCTL1
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACCTL1_CINV    = regbits< type,  1,  1 >;  /**< Comparator Output Invert     */
    using COMP_ACCTL1_ISEN    = regbits< type,  2,  2 >;  /**< Interrupt Sense              */
    using COMP_ACCTL1_ISLVAL  = regbits< type,  4,  1 >;  /**< Interrupt Sense Level Value  */
    using COMP_ACCTL1_TSEN    = regbits< type,  5,  2 >;  /**< Trigger Sense                */
    using COMP_ACCTL1_TSLVAL  = regbits< type,  7,  1 >;  /**< Trigger Sense Level Value    */
    using COMP_ACCTL1_ASRCP   = regbits< type,  9,  2 >;  /**< Analog Source Positive       */
    using COMP_ACCTL1_TOEN    = regbits< type, 11,  1 >;  /**< Trigger Output Enable        */
  };

  /**
   * Analog Comparator Status 2
   */
  struct ACSTAT2
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACSTAT2_OVAL  = regbits< type,  1,  1 >;  /**< Comparator Output Value  */
  };

  /**
   * Analog Comparator Control 2
   */
  struct ACCTL2
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_ACCTL2_CINV    = regbits< type,  1,  1 >;  /**< Comparator Output Invert     */
    using COMP_ACCTL2_ISEN    = regbits< type,  2,  2 >;  /**< Interrupt Sense              */
    using COMP_ACCTL2_ISLVAL  = regbits< type,  4,  1 >;  /**< Interrupt Sense Level Value  */
    using COMP_ACCTL2_TSEN    = regbits< type,  5,  2 >;  /**< Trigger Sense                */
    using COMP_ACCTL2_TSLVAL  = regbits< type,  7,  1 >;  /**< Trigger Sense Level Value    */
    using COMP_ACCTL2_ASRCP   = regbits< type,  9,  2 >;  /**< Analog Source Positive       */
    using COMP_ACCTL2_TOEN    = regbits< type, 11,  1 >;  /**< Trigger Output Enable        */
  };

  /**
   * Analog Comparator Peripheral Properties
   */
  struct PP
  : public reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP_PP_CMP0  = regbits< type,  0,  1 >;  /**< Comparator 0 Present         */
    using COMP_PP_CMP1  = regbits< type,  1,  1 >;  /**< Comparator 1 Present         */
    using COMP_PP_CMP2  = regbits< type,  2,  1 >;  /**< Comparator 2 Present         */
    using COMP_PP_C0O   = regbits< type, 16,  1 >;  /**< Comparator Output 0 Present  */
    using COMP_PP_C1O   = regbits< type, 17,  1 >;  /**< Comparator Output 1 Present  */
    using COMP_PP_C2O   = regbits< type, 18,  1 >;  /**< Comparator Output 2 Present  */
  };
};
} // namespace mptl

#endif // ARCH_REG_COMP_HPP_INCLUDED
