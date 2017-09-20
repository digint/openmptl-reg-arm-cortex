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
//  Import from CMSIS-SVD: "STMicro/STM32F410xx.svd"
//
//  name: STM32F410xx
//  version: 1.0
//  description: STM32F410xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_IWDG_HPP_INCLUDED
#define ARCH_REG_IWDG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Independent watchdog
 */
struct IWDG
{
  static constexpr reg_addr_t base_addr = 0x40003000;

  /**
   * Key register
   */
  struct KR
  : public reg< uint32_t, base_addr + 0x0, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, wo, 0x00000000 >;

    using KEY  = regbits< type,  0, 16 >;  /**< Key value  */
  };

  /**
   * Prescaler register
   */
  struct PR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: PR
    using PR_ = regbits< type,  0,  3 >;  /**< Prescaler divider  */
  };

  /**
   * Reload register
   */
  struct RLR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000FFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000FFF >;

    using RL  = regbits< type,  0, 12 >;  /**< Watchdog counter reload value  */
  };

  /**
   * Status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using RVU  = regbits< type,  1,  1 >;  /**< Watchdog counter reload value update  */
    using PVU  = regbits< type,  0,  1 >;  /**< Watchdog prescaler value update       */
  };
};
} // namespace mptl

#endif // ARCH_REG_IWDG_HPP_INCLUDED
