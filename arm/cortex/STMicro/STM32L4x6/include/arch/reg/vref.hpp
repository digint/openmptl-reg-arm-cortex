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

#ifndef ARCH_REG_VREF_HPP_INCLUDED
#define ARCH_REG_VREF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Voltage reference buffer
 */
struct VREF
{
  static constexpr reg_addr_t base_addr = 0x40010030;

  /**
   * VREF control and status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000002 >;

    using ENVR  = regbits< type,  0,  1 >;  /**< Voltage reference buffer enable  */
    using HIZ   = regbits< type,  1,  1 >;  /**< High impedance mode              */
    using VRS   = regbits< type,  2,  1 >;  /**< Voltage reference scale          */
    using VRR   = regbits< type,  3,  1 >;  /**< Voltage reference buffer ready   */
  };

  /**
   * calibration control register
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TRIM  = regbits< type,  0,  6 >;  /**< Trimming code  */
  };
};
} // namespace mptl

#endif // ARCH_REG_VREF_HPP_INCLUDED
