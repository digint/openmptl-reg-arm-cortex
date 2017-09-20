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
//  Import from CMSIS-SVD: "STMicro/STM32F37x.svd"
//
//  name: STM32F37x
//  version: 1.3
//  description: STM32F37x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWR_HPP_INCLUDED
#define ARCH_REG_PWR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power control
 */
struct PWR
{
  static constexpr reg_addr_t base_addr = 0x40007000;

  /**
   * power control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using LPDS   = regbits< type,  0,  1 >;  /**< Low-power deep sleep                    */
    using PDDS   = regbits< type,  1,  1 >;  /**< Power down deepsleep                    */
    using CWUF   = regbits< type,  2,  1 >;  /**< Clear wakeup flag                       */
    using CSBF   = regbits< type,  3,  1 >;  /**< Clear standby flag                      */
    using PVDE   = regbits< type,  4,  1 >;  /**< Power voltage detector enable           */
    using PLS    = regbits< type,  5,  3 >;  /**< PVD level selection                     */
    using DBP    = regbits< type,  8,  1 >;  /**< Disable backup domain write protection  */
    using ENSD1  = regbits< type,  9,  1 >;  /**< ENable SD1 ADC                          */
    using ENSD2  = regbits< type, 10,  1 >;  /**< ENable SD2 ADC                          */
    using ENSD3  = regbits< type, 11,  1 >;  /**< ENable SD3 ADC                          */
  };

  /**
   * power control/status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using WUF    = regbits< type,  0,  1 >;  /**< Wakeup flag       */
    using SBF    = regbits< type,  1,  1 >;  /**< Standby flag      */
    using PVDO   = regbits< type,  2,  1 >;  /**< PVD output        */
    using EWUP1  = regbits< type,  8,  1 >;  /**< Enable WKUP1 pin  */
    using EWUP2  = regbits< type,  9,  1 >;  /**< Enable WKUP2 pin  */
    using EWUP3  = regbits< type, 10,  1 >;  /**< Enable WKUP3 pin  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWR_HPP_INCLUDED
