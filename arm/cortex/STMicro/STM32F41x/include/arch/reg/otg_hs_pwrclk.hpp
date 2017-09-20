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
//  Import from CMSIS-SVD: "STMicro/STM32F41x.svd"
//
//  name: STM32F41x
//  version: 1.5
//  description: STM32F41x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OTG_HS_PWRCLK_HPP_INCLUDED
#define ARCH_REG_OTG_HS_PWRCLK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB on the go high speed
 */
struct OTG_HS_PWRCLK
{
  static constexpr reg_addr_t base_addr = 0x40040e00;

  /**
   * Power and clock gating control register
   */
  struct OTG_HS_PCGCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using STPPCLK   = regbits< type,  0,  1 >;  /**< Stop PHY clock  */
    using GATEHCLK  = regbits< type,  1,  1 >;  /**< Gate HCLK       */
    using PHYSUSP   = regbits< type,  4,  1 >;  /**< PHY suspended   */
  };
};
} // namespace mptl

#endif // ARCH_REG_OTG_HS_PWRCLK_HPP_INCLUDED
