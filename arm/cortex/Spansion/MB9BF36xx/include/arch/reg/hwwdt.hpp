/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9BF36xx.svd"
//
//  name: MB9BF36xx
//  version: 1.0
//  description: MB9BF36xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HWWDT_HPP_INCLUDED
#define ARCH_REG_HWWDT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral HWWDT
 */
struct HWWDT
{
  static constexpr reg_addr_t base_addr = 0x40011000;

  /**
   * register WDG_LDR
   */
  struct WDG_LDR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000FFFF >
  {
  };

  /**
   * register WDG_VLR
   */
  struct WDG_VLR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
  };

  /**
   * register WDG_CTL
   */
  struct WDG_CTL
  : public reg< uint8_t, base_addr + 0x8, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x03 >;

    using RESEN  = regbits< type,  1,  1 >;  /**< bitfield RESEN  */
    using INTEN  = regbits< type,  0,  1 >;  /**< bitfield INTEN  */
  };

  /**
   * register WDG_ICL
   */
  struct WDG_ICL
  : public reg< uint8_t, base_addr + 0xc, rw, 0xFF >
  {
  };

  /**
   * register WDG_RIS
   */
  struct WDG_RIS
  : public reg< uint8_t, base_addr + 0x10, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x10, ro, 0xFF >;

    using RIS  = regbits< type,  0,  1 >;  /**< bitfield RIS  */
  };

  /**
   * register WDG_LCK
   */
  struct WDG_LCK
  : public reg< uint32_t, base_addr + 0xc00, rw, 0x00000001 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_HWWDT_HPP_INCLUDED
