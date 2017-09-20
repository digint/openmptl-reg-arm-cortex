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
//  Import from CMSIS-SVD: "STMicro/STM32F429x.svd"
//
//  name: STM32F429x
//  version: 1.0
//  description: STM32F429x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CRC_HPP_INCLUDED
#define ARCH_REG_CRC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Cryptographic processor
 */
struct CRC
{
  static constexpr reg_addr_t base_addr = 0x40023000;

  /**
   * Data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x0, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: DR
    using DR_ = regbits< type,  0, 32 >;  /**< Data Register  */
  };

  /**
   * Independent Data register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: IDR
    using IDR_ = regbits< type,  0,  8 >;  /**< Independent Data register  */
  };

  /**
   * Control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: CR
    using CR_ = regbits< type,  0,  1 >;  /**< Control regidter  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRC_HPP_INCLUDED
