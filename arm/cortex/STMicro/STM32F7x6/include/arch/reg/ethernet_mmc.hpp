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
//  Import from CMSIS-SVD: "STMicro/STM32F7x6.svd"
//
//  name: STM32F7x6
//  version: 1.0
//  description: STM32F7x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ETHERNET_MMC_HPP_INCLUDED
#define ARCH_REG_ETHERNET_MMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Ethernet: MAC management counters
 */
struct Ethernet_MMC
{
  static constexpr reg_addr_t base_addr = 0x40028100;

  /**
   * Ethernet MMC control register
   */
  struct MMCCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using CR     = regbits< type,  0,  1 >;  /**< no description available  */
    using CSR    = regbits< type,  1,  1 >;  /**< no description available  */
    using ROR    = regbits< type,  2,  1 >;  /**< no description available  */
    using MCF    = regbits< type,  3,  1 >;  /**< no description available  */
    using MCP    = regbits< type,  4,  1 >;  /**< no description available  */
    using MCFHP  = regbits< type,  5,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet MMC receive interrupt register
   */
  struct MMCRIR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using RFCES  = regbits< type,  5,  1 >;  /**< no description available  */
    using RFAES  = regbits< type,  6,  1 >;  /**< no description available  */
    using RGUFS  = regbits< type, 17,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet MMC transmit interrupt register
   */
  struct MMCTIR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using TGFSCS   = regbits< type, 14,  1 >;  /**< no description available  */
    using TGFMSCS  = regbits< type, 15,  1 >;  /**< no description available  */
    using TGFS     = regbits< type, 21,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet MMC receive interrupt mask register
   */
  struct MMCRIMR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using RFCEM  = regbits< type,  5,  1 >;  /**< no description available  */
    using RFAEM  = regbits< type,  6,  1 >;  /**< no description available  */
    using RGUFM  = regbits< type, 17,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet MMC transmit interrupt mask register
   */
  struct MMCTIMR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using TGFSCM   = regbits< type, 14,  1 >;  /**< no description available  */
    using TGFMSCM  = regbits< type, 15,  1 >;  /**< no description available  */
    using TGFM     = regbits< type, 16,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet MMC transmitted good frames after a single collision counter
   */
  struct MMCTGFSCCR
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >;

    using TGFSCC  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet MMC transmitted good frames after more than a single collision
   */
  struct MMCTGFMSCCR
  : public reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >;

    using TGFMSCC  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet MMC transmitted good frames counter register
   */
  struct MMCTGFCR
  : public reg< uint32_t, base_addr + 0x68, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, ro, 0x00000000 >;

    using TGFC  = regbits< type,  0, 32 >;  /**< HTL  */
  };

  /**
   * Ethernet MMC received frames with CRC error counter register
   */
  struct MMCRFCECR
  : public reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >;

    using RFCFC  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet MMC received frames with alignment error counter register
   */
  struct MMCRFAECR
  : public reg< uint32_t, base_addr + 0x98, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, ro, 0x00000000 >;

    using RFAEC  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * MMC received good unicast frames counter register
   */
  struct MMCRGUFCR
  : public reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >;

    using RGUFC  = regbits< type,  0, 32 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ETHERNET_MMC_HPP_INCLUDED
