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
//  Import from CMSIS-SVD: "STMicro/STM32F30x.svd"
//
//  name: STM32F30x
//  version: 1.4
//  description: STM32F30x
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
 * Operational amplifier
 */
struct OPAMP
{
  static constexpr reg_addr_t base_addr = 0x40010038;

  /**
   * OPAMP1 control register
   */
  struct OPAMP1_CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using OPAMP1_EN    = regbits< type,  0,  1 >;  /**< OPAMP1 enable                                   */
    using FORCE_VP     = regbits< type,  1,  1 >;  /**< FORCE_VP                                        */
    using VP_SEL       = regbits< type,  2,  2 >;  /**< OPAMP1 Non inverting input selection            */
    using VM_SEL       = regbits< type,  5,  2 >;  /**< OPAMP1 inverting input selection                */
    using TCM_EN       = regbits< type,  7,  1 >;  /**< Timer controlled Mux mode enable                */
    using VMS_SEL      = regbits< type,  8,  1 >;  /**< OPAMP1 inverting input secondary selection      */
    using VPS_SEL      = regbits< type,  9,  2 >;  /**< OPAMP1 Non inverting input secondary selection  */
    using CALON        = regbits< type, 11,  1 >;  /**< Calibration mode enable                         */
    using CALSEL       = regbits< type, 12,  2 >;  /**< Calibration selection                           */
    using PGA_GAIN     = regbits< type, 14,  4 >;  /**< Gain in PGA mode                                */
    using USER_TRIM    = regbits< type, 18,  1 >;  /**< User trimming enable                            */
    using TRIMOFFSETP  = regbits< type, 19,  5 >;  /**< Offset trimming value (PMOS)                    */
    using TRIMOFFSETN  = regbits< type, 24,  5 >;  /**< Offset trimming value (NMOS)                    */
    using TSTREF       = regbits< type, 29,  1 >;  /**< TSTREF                                          */
    using OUTCAL       = regbits< type, 30,  1 >;  /**< OPAMP 1 ouput status flag                       */
    using LOCK         = regbits< type, 31,  1 >;  /**< OPAMP 1 lock                                    */
  };

  /**
   * OPAMP2 control register
   */
  struct OPAMP2_CR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using OPAMP2EN     = regbits< type,  0,  1 >;  /**< OPAMP2 enable                                   */
    using FORCE_VP     = regbits< type,  1,  1 >;  /**< FORCE_VP                                        */
    using VP_SEL       = regbits< type,  2,  2 >;  /**< OPAMP2 Non inverting input selection            */
    using VM_SEL       = regbits< type,  5,  2 >;  /**< OPAMP2 inverting input selection                */
    using TCM_EN       = regbits< type,  7,  1 >;  /**< Timer controlled Mux mode enable                */
    using VMS_SEL      = regbits< type,  8,  1 >;  /**< OPAMP2 inverting input secondary selection      */
    using VPS_SEL      = regbits< type,  9,  2 >;  /**< OPAMP2 Non inverting input secondary selection  */
    using CALON        = regbits< type, 11,  1 >;  /**< Calibration mode enable                         */
    using CAL_SEL      = regbits< type, 12,  2 >;  /**< Calibration selection                           */
    using PGA_GAIN     = regbits< type, 14,  4 >;  /**< Gain in PGA mode                                */
    using USER_TRIM    = regbits< type, 18,  1 >;  /**< User trimming enable                            */
    using TRIMOFFSETP  = regbits< type, 19,  5 >;  /**< Offset trimming value (PMOS)                    */
    using TRIMOFFSETN  = regbits< type, 24,  5 >;  /**< Offset trimming value (NMOS)                    */
    using TSTREF       = regbits< type, 29,  1 >;  /**< TSTREF                                          */
    using OUTCAL       = regbits< type, 30,  1 >;  /**< OPAMP 2 ouput status flag                       */
    using LOCK         = regbits< type, 31,  1 >;  /**< OPAMP 2 lock                                    */
  };

  /**
   * OPAMP3 control register
   */
  struct OPAMP3_CR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using OPAMP3EN     = regbits< type,  0,  1 >;  /**< OPAMP3 enable                                   */
    using FORCE_VP     = regbits< type,  1,  1 >;  /**< FORCE_VP                                        */
    using VP_SEL       = regbits< type,  2,  2 >;  /**< OPAMP3 Non inverting input selection            */
    using VM_SEL       = regbits< type,  5,  2 >;  /**< OPAMP3 inverting input selection                */
    using TCM_EN       = regbits< type,  7,  1 >;  /**< Timer controlled Mux mode enable                */
    using VMS_SEL      = regbits< type,  8,  1 >;  /**< OPAMP3 inverting input secondary selection      */
    using VPS_SEL      = regbits< type,  9,  2 >;  /**< OPAMP3 Non inverting input secondary selection  */
    using CALON        = regbits< type, 11,  1 >;  /**< Calibration mode enable                         */
    using CALSEL       = regbits< type, 12,  2 >;  /**< Calibration selection                           */
    using PGA_GAIN     = regbits< type, 14,  4 >;  /**< Gain in PGA mode                                */
    using USER_TRIM    = regbits< type, 18,  1 >;  /**< User trimming enable                            */
    using TRIMOFFSETP  = regbits< type, 19,  5 >;  /**< Offset trimming value (PMOS)                    */
    using TRIMOFFSETN  = regbits< type, 24,  5 >;  /**< Offset trimming value (NMOS)                    */
    using TSTREF       = regbits< type, 29,  1 >;  /**< TSTREF                                          */
    using OUTCAL       = regbits< type, 30,  1 >;  /**< OPAMP 3 ouput status flag                       */
    using LOCK         = regbits< type, 31,  1 >;  /**< OPAMP 3 lock                                    */
  };

  /**
   * OPAMP4 control register
   */
  struct OPAMP4_CR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using OPAMP4EN     = regbits< type,  0,  1 >;  /**< OPAMP4 enable                                   */
    using FORCE_VP     = regbits< type,  1,  1 >;  /**< FORCE_VP                                        */
    using VP_SEL       = regbits< type,  2,  2 >;  /**< OPAMP4 Non inverting input selection            */
    using VM_SEL       = regbits< type,  5,  2 >;  /**< OPAMP4 inverting input selection                */
    using TCM_EN       = regbits< type,  7,  1 >;  /**< Timer controlled Mux mode enable                */
    using VMS_SEL      = regbits< type,  8,  1 >;  /**< OPAMP4 inverting input secondary selection      */
    using VPS_SEL      = regbits< type,  9,  2 >;  /**< OPAMP4 Non inverting input secondary selection  */
    using CALON        = regbits< type, 11,  1 >;  /**< Calibration mode enable                         */
    using CALSEL       = regbits< type, 12,  2 >;  /**< Calibration selection                           */
    using PGA_GAIN     = regbits< type, 14,  4 >;  /**< Gain in PGA mode                                */
    using USER_TRIM    = regbits< type, 18,  1 >;  /**< User trimming enable                            */
    using TRIMOFFSETP  = regbits< type, 19,  5 >;  /**< Offset trimming value (PMOS)                    */
    using TRIMOFFSETN  = regbits< type, 24,  5 >;  /**< Offset trimming value (NMOS)                    */
    using TSTREF       = regbits< type, 29,  1 >;  /**< TSTREF                                          */
    using OUTCAL       = regbits< type, 30,  1 >;  /**< OPAMP 4 ouput status flag                       */
    using LOCK         = regbits< type, 31,  1 >;  /**< OPAMP 4 lock                                    */
  };
};
} // namespace mptl

#endif // ARCH_REG_OPAMP_HPP_INCLUDED
