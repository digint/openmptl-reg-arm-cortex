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
//  Import from CMSIS-SVD: "STMicro/STM32F102xx.svd"
//
//  name: STM32F102xx
//  version: 1.1
//  description: STM32F102xx
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
   * Power control register (PWR_CR)
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using LPDS  = regbits< type,  0,  1 >;  /**< Low Power Deep Sleep                    */
    using PDDS  = regbits< type,  1,  1 >;  /**< Power Down Deep Sleep                   */
    using CWUF  = regbits< type,  2,  1 >;  /**< Clear Wake-up Flag                      */
    using CSBF  = regbits< type,  3,  1 >;  /**< Clear STANDBY Flag                      */
    using PVDE  = regbits< type,  4,  1 >;  /**< Power Voltage Detector Enable           */
    using PLS   = regbits< type,  5,  3 >;  /**< PVD Level Selection                     */
    using DBP   = regbits< type,  8,  1 >;  /**< Disable Backup Domain write protection  */
  };

  /**
   * Power control register (PWR_CR)
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using WUF   = regbits< type,  0,  1 >;  /**< Wake-Up Flag     */
    using SBF   = regbits< type,  1,  1 >;  /**< STANDBY Flag     */
    using PVDO  = regbits< type,  2,  1 >;  /**< PVD Output       */
    using EWUP  = regbits< type,  8,  1 >;  /**< Enable WKUP pin  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWR_HPP_INCLUDED
