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
//  Import from CMSIS-SVD: "STMicro/STM32L1xx.svd"
//
//  name: STM32L1xx
//  version: 1.1
//  description: STM32L1xx
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
  static constexpr reg_addr_t base_addr = 0x40007c5c;

  /**
   * control/status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00010101 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00010101 >;

    using OPA3CALOUT  = regbits< type, 31,  1 >;  /**< OPAMP3 calibration output                          */
    using OPA2CALOUT  = regbits< type, 30,  1 >;  /**< OPAMP2 calibration output                          */
    using OPA1CALOUT  = regbits< type, 29,  1 >;  /**< OPAMP1 calibration output                          */
    using AOP_RANGE   = regbits< type, 28,  1 >;  /**< Power range selection                              */
    using S7SEL2      = regbits< type, 27,  1 >;  /**< Switch 7 for OPAMP2 enable                         */
    using ANAWSEL3    = regbits< type, 26,  1 >;  /**< Switch SanA enable for OPAMP3                      */
    using ANAWSEL2    = regbits< type, 25,  1 >;  /**< Switch SanA enable for OPAMP2                      */
    using ANAWSEL1    = regbits< type, 24,  1 >;  /**< Switch SanA enable for OPAMP1                      */
    using OPA3LPM     = regbits< type, 23,  1 >;  /**< OPAMP3 low power mode                              */
    using OPA3CAL_H   = regbits< type, 22,  1 >;  /**< OPAMP3 offset calibration for N differential pair  */
    using OPA3CAL_L   = regbits< type, 21,  1 >;  /**< OPAMP3 offset Calibration for P differential pair  */
    using S6SEL3      = regbits< type, 20,  1 >;  /**< Switch 6 for OPAMP3 enable                         */
    using S5SEL3      = regbits< type, 19,  1 >;  /**< Switch 5 for OPAMP3 enable                         */
    using S4SEL3      = regbits< type, 18,  1 >;  /**< Switch 4 for OPAMP3 enable                         */
    using S3SEL3      = regbits< type, 17,  1 >;  /**< Switch 3 for OPAMP3 Enable                         */
    using OPA3PD      = regbits< type, 16,  1 >;  /**< OPAMP3 power down                                  */
    using OPA2LPM     = regbits< type, 15,  1 >;  /**< OPAMP2 low power mode                              */
    using OPA2CAL_H   = regbits< type, 14,  1 >;  /**< OPAMP2 offset calibration for N differential pair  */
    using OPA2CAL_L   = regbits< type, 13,  1 >;  /**< OPAMP2 offset Calibration for P differential pair  */
    using S6SEL2      = regbits< type, 12,  1 >;  /**< Switch 6 for OPAMP2 enable                         */
    using S5SEL2      = regbits< type, 11,  1 >;  /**< Switch 5 for OPAMP2 enable                         */
    using S4SEL2      = regbits< type, 10,  1 >;  /**< Switch 4 for OPAMP2 enable                         */
    using S3SEL2      = regbits< type,  9,  1 >;  /**< Switch 3 for OPAMP2 enable                         */
    using OPA2PD      = regbits< type,  8,  1 >;  /**< OPAMP2 power down                                  */
    using OPA1LPM     = regbits< type,  7,  1 >;  /**< OPAMP1 low power mode                              */
    using OPA1CAL_H   = regbits< type,  6,  1 >;  /**< OPAMP1 offset calibration for N differential pair  */
    using OPA1CAL_L   = regbits< type,  5,  1 >;  /**< OPAMP1 offset calibration for P differential pair  */
    using S6SEL1      = regbits< type,  4,  1 >;  /**< Switch 6 for OPAMP1 enable                         */
    using S5SEL1      = regbits< type,  3,  1 >;  /**< Switch 5 for OPAMP1 enable                         */
    using S4SEL1      = regbits< type,  2,  1 >;  /**< Switch 4 for OPAMP1 enable                         */
    using S3SEL1      = regbits< type,  1,  1 >;  /**< Switch 3 for OPAMP1 enable                         */
    using OPA1PD      = regbits< type,  0,  1 >;  /**< OPAMP1 power down                                  */
  };

  /**
   * offset trimming register for normal mode
   */
  struct OTR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using OT_USER              = regbits< type, 31,  1 >;  /**< Select user or factory trimming value             */
    using AO3_OPT_OFFSET_TRIM  = regbits< type, 20, 10 >;  /**< OPAMP3, 10-bit offset trim value for normal mode  */
    using AO2_OPT_OFFSET_TRIM  = regbits< type, 10, 10 >;  /**< OPAMP2, 10-bit offset trim value for normal mode  */
    using AO1_OPT_OFFSET_TRIM  = regbits< type,  0, 10 >;  /**< OPAMP1, 10-bit offset trim value for normal mode  */
  };

  /**
   * OPAMP offset trimming register for low power mode
   */
  struct LPOTR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using AO3_OPT_OFFSET_TRIM_LP  = regbits< type, 20, 10 >;  /**< OPAMP3, 10-bit offset trim value for low power mode  */
    using AO2_OPT_OFFSET_TRIM_LP  = regbits< type, 10, 10 >;  /**< OPAMP2, 10-bit offset trim value for low power mode  */
    using AO1_OPT_OFFSET_TRIM_LP  = regbits< type,  0, 10 >;  /**< OPAMP1, 10-bit offset trim value for low power mode  */
  };
};
} // namespace mptl

#endif // ARCH_REG_OPAMP_HPP_INCLUDED
