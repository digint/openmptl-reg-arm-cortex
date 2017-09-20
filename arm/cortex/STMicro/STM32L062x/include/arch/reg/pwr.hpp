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
//  Import from CMSIS-SVD: "STMicro/STM32L062x.svd"
//
//  name: STM32L062x
//  version: 1.0
//  description: STM32L062x
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
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00001000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00001000 >;

    using LPDS        = regbits< type,  0,  1 >;  /**< Low-power deep sleep                        */
    using PDDS        = regbits< type,  1,  1 >;  /**< Power down deepsleep                        */
    using CWUF        = regbits< type,  2,  1 >;  /**< Clear wakeup flag                           */
    using CSBF        = regbits< type,  3,  1 >;  /**< Clear standby flag                          */
    using PVDE        = regbits< type,  4,  1 >;  /**< Power voltage detector enable               */
    using PLS         = regbits< type,  5,  3 >;  /**< PVD level selection                         */
    using DBP         = regbits< type,  8,  1 >;  /**< Disable backup domain write protection      */
    using FPDS        = regbits< type,  9,  1 >;  /**< Flash power down in Stop mode               */
    using FWU         = regbits< type, 10,  1 >;  /**< Fast wakeup                                 */
    using VOS         = regbits< type, 11,  2 >;  /**< Voltage scaling range selection             */
    using DS_EE_KOFF  = regbits< type, 13,  1 >;  /**< Deep sleep mode with Flash memory kept off  */
    using LPRUN       = regbits< type, 14,  1 >;  /**< Low power run mode                          */
  };

  /**
   * power control/status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using BRE     = regbits< type,  9,  1 >;  /**< Backup regulator enable      */
    using EWUP    = regbits< type,  8,  1 >;  /**< Enable WKUP pin              */
    using BRR     = regbits< type,  3,  1 >;  /**< Backup regulator ready       */
    using PVDO    = regbits< type,  2,  1 >;  /**< PVD output                   */
    using SBF     = regbits< type,  1,  1 >;  /**< Standby flag                 */
    using WUF     = regbits< type,  0,  1 >;  /**< Wakeup flag                  */
    using VOSF    = regbits< type,  4,  1 >;  /**< Voltage Scaling select flag  */
    using REGLPF  = regbits< type,  5,  1 >;  /**< Regulator LP flag            */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWR_HPP_INCLUDED
