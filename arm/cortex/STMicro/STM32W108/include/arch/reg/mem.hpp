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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MEM_HPP_INCLUDED
#define ARCH_REG_MEM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Memory Control registers
 */
struct MEM
{
  static constexpr reg_addr_t base_addr = 0x40005000;

  /**
   * Memory protection register1
   */
  struct RAMPROTR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using RAMPROT1  = regbits< type,  0, 32 >;  /**< RAMPROT1  */
  };

  /**
   * Memory protection register2
   */
  struct RAMPROTR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using RAMPROT2  = regbits< type,  0, 32 >;  /**< RAMPROT2  */
  };

  /**
   * Memory protection register3
   */
  struct RAMPROTR3
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using RAMPROT3  = regbits< type,  0, 32 >;  /**< RAMPROT1  */
  };

  /**
   * Memory protection register4
   */
  struct RAMPROTR4
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using RAMPROT4  = regbits< type,  0, 32 >;  /**< RAMPROT4  */
  };

  /**
   * Memory protection register5
   */
  struct RAMPROTR5
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using RAMPROT5  = regbits< type,  0, 32 >;  /**< RAMPROT5  */
  };

  /**
   * Memory protection register6
   */
  struct RAMPROTR6
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using RAMPROT6  = regbits< type,  0, 32 >;  /**< RAMPROT6  */
  };

  /**
   * Memory protection register7
   */
  struct RAMPROTR7
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using RAMPROT7  = regbits< type,  0, 32 >;  /**< RAMPROT7  */
  };

  /**
   * Memory protection register8
   */
  struct RAMPROTR8
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using RAMPROT8  = regbits< type,  0, 32 >;  /**< RAMPROT8  */
  };

  /**
   * DMA protection register1
   */
  struct DMAPROTR1
  : public reg< uint32_t, base_addr + 0x20, ro, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x20000000 >;

    using ADDRESS  = regbits< type,  0, 14 >;  /**< DMA protection fault, faulting address  */
    using OFFSET   = regbits< type, 14, 18 >;  /**< offset in RAM                           */
  };

  /**
   * DMA protection register2
   */
  struct DMAPROTR2
  : public reg< uint32_t, base_addr + 0x24, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0x00000000 >;

    using CHANNEL  = regbits< type,  0,  3 >;  /**< DMA protection fault, faulting channel  */
  };

  /**
   * Memory configuration register
   */
  struct RAMCR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using WEN  = regbits< type,  2,  1 >;  /**< Makes all RAM write access  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MEM_HPP_INCLUDED
