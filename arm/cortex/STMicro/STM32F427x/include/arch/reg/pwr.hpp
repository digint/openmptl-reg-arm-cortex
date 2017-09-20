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
//  Import from CMSIS-SVD: "STMicro/STM32F427x.svd"
//
//  name: STM32F427x
//  version: 1.1
//  description: STM32F427x
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
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000C000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000C000 >;

    using LPDS    = regbits< type,  0,  1 >;  /**< Low-power deep sleep                          */
    using PDDS    = regbits< type,  1,  1 >;  /**< Power down deepsleep                          */
    using CWUF    = regbits< type,  2,  1 >;  /**< Clear wakeup flag                             */
    using CSBF    = regbits< type,  3,  1 >;  /**< Clear standby flag                            */
    using PVDE    = regbits< type,  4,  1 >;  /**< Power voltage detector enable                 */
    using PLS     = regbits< type,  5,  3 >;  /**< PVD level selection                           */
    using DBP     = regbits< type,  8,  1 >;  /**< Disable backup domain write protection        */
    using FPDS    = regbits< type,  9,  1 >;  /**< Flash power down in Stop mode                 */
    using LPUDS   = regbits< type, 10,  1 >;  /**< Low-Power Regulator Low Voltage in deepsleep  */
    using MRUDS   = regbits< type, 11,  1 >;  /**< Main regulator low voltage in deepsleep mode  */
    using VOS     = regbits< type, 14,  2 >;  /**< Regulator voltage scaling output selection    */
    using ODEN    = regbits< type, 16,  1 >;  /**< Over-drive enable                             */
    using ODSWEN  = regbits< type, 17,  1 >;  /**< Over-drive switching enabled                  */
    using UDEN    = regbits< type, 18,  2 >;  /**< Under-drive enable in stop mode               */
  };

  /**
   * power control/status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using WUF      = regbits< type,  0,  1 >;  /**< Wakeup flag                                           */
    using SBF      = regbits< type,  1,  1 >;  /**< Standby flag                                          */
    using PVDO     = regbits< type,  2,  1 >;  /**< PVD output                                            */
    using BRR      = regbits< type,  3,  1 >;  /**< Backup regulator ready                                */
    using EWUP     = regbits< type,  8,  1 >;  /**< Enable WKUP pin                                       */
    using BRE      = regbits< type,  9,  1 >;  /**< Backup regulator enable                               */
    using VOSRDY   = regbits< type, 14,  1 >;  /**< Regulator voltage scaling output selection ready bit  */
    using ODRDY    = regbits< type, 16,  1 >;  /**< Over-drive mode ready                                 */
    using ODSWRDY  = regbits< type, 17,  1 >;  /**< Over-drive mode switching ready                       */
    using UDRDY    = regbits< type, 18,  2 >;  /**< Under-drive ready flag                                */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWR_HPP_INCLUDED
