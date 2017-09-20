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
//  Import from CMSIS-SVD: "STMicro/STM32F107xx.svd"
//
//  name: STM32F107xx
//  version: 1.2
//  description: STM32F107xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USB_OTG_PWRCLK_HPP_INCLUDED
#define ARCH_REG_USB_OTG_PWRCLK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB on the go full speed
 */
struct USB_OTG_PWRCLK
{
  static constexpr reg_addr_t base_addr = 0x50000e00;

  /**
   * OTG_FS power and clock gating control register (OTG_FS_PCGCCTL)
   */
  struct FS_PCGCCTL
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using STPPCLK   = regbits< type,  0,  1 >;  /**< Stop PHY clock  */
    using GATEHCLK  = regbits< type,  1,  1 >;  /**< Gate HCLK       */
    using PHYSUSP   = regbits< type,  4,  1 >;  /**< PHY Suspended   */
  };
};
} // namespace mptl

#endif // ARCH_REG_USB_OTG_PWRCLK_HPP_INCLUDED
