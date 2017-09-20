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
//  Import from CMSIS-SVD: "STMicro/STM32F20x.svd"
//
//  name: STM32F20x
//  version: 1.0
//  description: STM32F20x
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

    using CR     = regbits< type,  0,  1 >;  /**< Counter reset                 */
    using CSR    = regbits< type,  1,  1 >;  /**< Counter stop rollover         */
    using ROR    = regbits< type,  2,  1 >;  /**< Reset on read                 */
    using MCF    = regbits< type,  3,  1 >;  /**< MMC counter freeze            */
    using MCP    = regbits< type,  4,  1 >;  /**< MMC counter preset            */
    using MCFHP  = regbits< type,  5,  1 >;  /**< MMC counter Full-Half preset  */
  };

  /**
   * Ethernet MMC receive interrupt register
   */
  struct MMCRIR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using RFCES  = regbits< type,  5,  1 >;  /**< Received frames CRC error status        */
    using RFAES  = regbits< type,  6,  1 >;  /**< Received frames alignment error status  */
    using RGUFS  = regbits< type, 17,  1 >;  /**< Received Good Unicast Frames Status     */
  };

  /**
   * Ethernet MMC transmit interrupt register
   */
  struct MMCTIR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using TGFSCS   = regbits< type, 14,  1 >;  /**< Transmitted good frames single collision status       */
    using TGFMSCS  = regbits< type, 15,  1 >;  /**< Transmitted good frames more single collision status  */
    using TGFS     = regbits< type, 21,  1 >;  /**< Transmitted good frames status                        */
  };

  /**
   * Ethernet MMC receive interrupt mask register
   */
  struct MMCRIMR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using RFCEM  = regbits< type,  5,  1 >;  /**< Received frame CRC error mask         */
    using RFAEM  = regbits< type,  6,  1 >;  /**< Received frames alignment error mask  */
    using RGUFM  = regbits< type, 17,  1 >;  /**< Received good unicast frames mask     */
  };

  /**
   * Ethernet MMC transmit interrupt mask register
   */
  struct MMCTIMR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using TGFSCM   = regbits< type, 14,  1 >;  /**< Transmitted good frames single collision mask       */
    using TGFMSCM  = regbits< type, 15,  1 >;  /**< Transmitted good frames more single collision mask  */
    using TGFM     = regbits< type, 21,  1 >;  /**< Transmitted good frames mask                        */
  };

  /**
   * Ethernet MMC transmitted good frames after a single collision counter
   */
  struct MMCTGFSCCR
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >;

    using TGFSCC  = regbits< type,  0, 32 >;  /**< Transmitted good frames single collision counter  */
  };

  /**
   * Ethernet MMC transmitted good frames after more than a single collision
   */
  struct MMCTGFMSCCR
  : public reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >;

    using TGFMSCC  = regbits< type,  0, 32 >;  /**< Transmitted good frames more single collision counter  */
  };

  /**
   * Ethernet MMC transmitted good frames counter register
   */
  struct MMCTGFCR
  : public reg< uint32_t, base_addr + 0x68, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, ro, 0x00000000 >;

    using TGFC  = regbits< type,  0, 32 >;  /**< Transmitted good frames counter  */
  };

  /**
   * Ethernet MMC received frames with CRC error counter register
   */
  struct MMCRFCECR
  : public reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >;

    using RFCFC  = regbits< type,  0, 32 >;  /**< Received frames CRC error counter  */
  };

  /**
   * Ethernet MMC received frames with alignment error counter register
   */
  struct MMCRFAECR
  : public reg< uint32_t, base_addr + 0x98, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, ro, 0x00000000 >;

    using RFAEC  = regbits< type,  0, 32 >;  /**< Received frames alignment error counter  */
  };

  /**
   * MMC received good unicast frames counter register
   */
  struct MMCRGUFCR
  : public reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >;

    using RGUFC  = regbits< type,  0, 32 >;  /**< Received good unicast frames counter  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ETHERNET_MMC_HPP_INCLUDED
