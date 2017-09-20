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
//  Import from CMSIS-SVD: "STMicro/STM32L063x.svd"
//
//  name: STM32L063x
//  version: 1.0
//  description: STM32L063x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FIREWALL_HPP_INCLUDED
#define ARCH_REG_FIREWALL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Firewall
 */
struct Firewall
{
  static constexpr reg_addr_t base_addr = 0x40011c00;

  /**
   * Code segment start address
   */
  struct FIREWALL_CSSA
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using ADD  = regbits< type,  8, 16 >;  /**< code segment start address  */
  };

  /**
   * Code segment length
   */
  struct FIREWALL_CSL
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using LENG  = regbits< type,  8, 14 >;  /**< code segment length  */
  };

  /**
   * Non-volatile data segment start address
   */
  struct FIREWALL_NVDSSA
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using ADD  = regbits< type,  8, 16 >;  /**< Non-volatile data segment start address  */
  };

  /**
   * Non-volatile data segment length
   */
  struct FIREWALL_NVDSL
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using LENG  = regbits< type,  8, 14 >;  /**< Non-volatile data segment length  */
  };

  /**
   * Volatile data segment start address
   */
  struct FIREWALL_VDSSA
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using ADD  = regbits< type,  6, 10 >;  /**< Volatile data segment start address  */
  };

  /**
   * Volatile data segment length
   */
  struct FIREWALL_VDSL
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using LENG  = regbits< type,  6, 10 >;  /**< Non-volatile data segment length  */
  };

  /**
   * Configuration register
   */
  struct FIREWALL_CR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using VDE  = regbits< type,  2,  1 >;  /**< Volatile data execution  */
    using VDS  = regbits< type,  1,  1 >;  /**< Volatile data shared     */
    using FPA  = regbits< type,  0,  1 >;  /**< Firewall pre alarm       */
  };
};
} // namespace mptl

#endif // ARCH_REG_FIREWALL_HPP_INCLUDED
