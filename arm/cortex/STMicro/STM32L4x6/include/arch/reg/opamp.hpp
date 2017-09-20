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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OPAMP_HPP_INCLUDED
#define ARCH_REG_OPAMP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Operational amplifiers
 */
struct OPAMP
{
  static constexpr reg_addr_t base_addr = 0x40007800;

  /**
   * OPAMP1 control/status register
   */
  struct OPAMP1_CSR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using OPAEN      = regbits< type,  0,  1 >;  /**< Operational amplifier Enable                                   */
    using OPALPM     = regbits< type,  1,  1 >;  /**< Operational amplifier Low Power Mode                           */
    using OPAMODE    = regbits< type,  2,  2 >;  /**< Operational amplifier PGA mode                                 */
    using PGA_GAIN   = regbits< type,  4,  2 >;  /**< Operational amplifier Programmable amplifier gain value        */
    using VM_SEL     = regbits< type,  8,  2 >;  /**< Inverting input selection                                      */
    using VP_SEL     = regbits< type, 10,  1 >;  /**< Non inverted input selection                                   */
    using CALON      = regbits< type, 12,  1 >;  /**< Calibration mode enabled                                       */
    using CALSEL     = regbits< type, 13,  1 >;  /**< Calibration selection                                          */
    using USERTRIM   = regbits< type, 14,  1 >;  /**< allows to switch from AOP offset trimmed values to AOP offset  */
    using CALOUT     = regbits< type, 15,  1 >;  /**< Operational amplifier calibration output                       */
    using OPA_RANGE  = regbits< type, 31,  1 >;  /**< Operational amplifier power supply range for stability         */
  };

  /**
   * OPAMP1 offset trimming register in normal mode
   */
  struct OPAMP1_OTR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TRIMOFFSETN  = regbits< type,  0,  5 >;  /**< Trim for NMOS differential pairs  */
    using TRIMOFFSETP  = regbits< type,  8,  5 >;  /**< Trim for PMOS differential pairs  */
  };

  /**
   * OPAMP1 offset trimming register in low-power mode
   */
  struct OPAMP1_LPOTR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using TRIMLPOFFSETN  = regbits< type,  0,  5 >;  /**< Trim for NMOS differential pairs  */
    using TRIMLPOFFSETP  = regbits< type,  8,  5 >;  /**< Trim for PMOS differential pairs  */
  };

  /**
   * OPAMP2 control/status register
   */
  struct OPAMP2_CSR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using OPAEN     = regbits< type,  0,  1 >;  /**< Operational amplifier Enable                                   */
    using OPALPM    = regbits< type,  1,  1 >;  /**< Operational amplifier Low Power Mode                           */
    using OPAMODE   = regbits< type,  2,  2 >;  /**< Operational amplifier PGA mode                                 */
    using PGA_GAIN  = regbits< type,  4,  2 >;  /**< Operational amplifier Programmable amplifier gain value        */
    using VM_SEL    = regbits< type,  8,  2 >;  /**< Inverting input selection                                      */
    using VP_SEL    = regbits< type, 10,  1 >;  /**< Non inverted input selection                                   */
    using CALON     = regbits< type, 12,  1 >;  /**< Calibration mode enabled                                       */
    using CALSEL    = regbits< type, 13,  1 >;  /**< Calibration selection                                          */
    using USERTRIM  = regbits< type, 14,  1 >;  /**< allows to switch from AOP offset trimmed values to AOP offset  */
    using CALOUT    = regbits< type, 15,  1 >;  /**< Operational amplifier calibration output                       */
  };

  /**
   * OPAMP2 offset trimming register in normal mode
   */
  struct OPAMP2_OTR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using TRIMOFFSETN  = regbits< type,  0,  5 >;  /**< Trim for NMOS differential pairs  */
    using TRIMOFFSETP  = regbits< type,  8,  5 >;  /**< Trim for PMOS differential pairs  */
  };

  /**
   * OPAMP2 offset trimming register in low-power mode
   */
  struct OPAMP2_LPOTR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using TRIMLPOFFSETN  = regbits< type,  0,  5 >;  /**< Trim for NMOS differential pairs  */
    using TRIMLPOFFSETP  = regbits< type,  8,  5 >;  /**< Trim for PMOS differential pairs  */
  };
};
} // namespace mptl

#endif // ARCH_REG_OPAMP_HPP_INCLUDED
