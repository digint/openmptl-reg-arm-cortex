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
//  Import from CMSIS-SVD: "STMicro/STM32F21x.svd"
//
//  name: STM32F21x
//  version: 1.0
//  description: STM32F21x
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

    using FPDS  = regbits< type,  9,  1 >;  /**< Flash power down in Stop mode           */
    using DBP   = regbits< type,  8,  1 >;  /**< Disable backup domain write protection  */
    using PLS   = regbits< type,  5,  3 >;  /**< PVD level selection                     */
    using PVDE  = regbits< type,  4,  1 >;  /**< Power voltage detector enable           */
    using CSBF  = regbits< type,  3,  1 >;  /**< Clear standby flag                      */
    using CWUF  = regbits< type,  2,  1 >;  /**< Clear wakeup flag                       */
    using PDDS  = regbits< type,  1,  1 >;  /**< Power down deepsleep                    */
    using LPDS  = regbits< type,  0,  1 >;  /**< Low-power deep sleep                    */
  };

  /**
   * power control/status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using BRE   = regbits< type,  9,  1 >;  /**< Backup regulator enable  */
    using EWUP  = regbits< type,  8,  1 >;  /**< Enable WKUP pin          */
    using BRR   = regbits< type,  3,  1 >;  /**< Backup regulator ready   */
    using PVDO  = regbits< type,  2,  1 >;  /**< PVD output               */
    using SBF   = regbits< type,  1,  1 >;  /**< Standby flag             */
    using WUF   = regbits< type,  0,  1 >;  /**< Wakeup flag              */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWR_HPP_INCLUDED
