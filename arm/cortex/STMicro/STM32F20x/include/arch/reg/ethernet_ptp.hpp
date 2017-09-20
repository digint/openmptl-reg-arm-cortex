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

#ifndef ARCH_REG_ETHERNET_PTP_HPP_INCLUDED
#define ARCH_REG_ETHERNET_PTP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Ethernet: Precision time protocol
 */
struct Ethernet_PTP
{
  static constexpr reg_addr_t base_addr = 0x40028700;

  /**
   * Ethernet PTP time stamp control register
   */
  struct PTPTSCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x2000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x2000 >;

    using TSE         = regbits< type,  0,  1 >;  /**< Time stamp enable                                                  */
    using TSFCU       = regbits< type,  1,  1 >;  /**< Time stamp fine or coarse update                                   */
    using TSSTI       = regbits< type,  2,  1 >;  /**< Time stamp system time initialize                                  */
    using TSSTU       = regbits< type,  3,  1 >;  /**< Time stamp system time update                                      */
    using TSITE       = regbits< type,  4,  1 >;  /**< Time stamp interrupt trigger enable                                */
    using TTSARU      = regbits< type,  5,  1 >;  /**< Time stamp addend register update                                  */
    using TSSARFE     = regbits< type,  8,  1 >;  /**< Time stamp snapshot for all received frames enable                 */
    using TSSSR       = regbits< type,  9,  1 >;  /**< Time stamp subsecond rollover: digital or binary rollover control  */
    using TSPTPPSV2E  = regbits< type, 10,  1 >;  /**< Time stamp PTP packet snooping for version2 format enable          */
    using TSSPTPOEFE  = regbits< type, 11,  1 >;  /**< Time stamp snapshot for PTP over ethernet frames enable            */
    using TSSIPV6FE   = regbits< type, 12,  1 >;  /**< Time stamp snapshot for IPv6 frames enable                         */
    using TSSIPV4FE   = regbits< type, 13,  1 >;  /**< Time stamp snapshot for IPv4 frames enable                         */
    using TSSEME      = regbits< type, 14,  1 >;  /**< Time stamp snapshot for event message enable                       */
    using TSSMRME     = regbits< type, 15,  1 >;  /**< Time stamp snapshot for message relevant to master enable          */
    using TSCNT       = regbits< type, 16,  2 >;  /**< Time stamp clock node type                                         */
    using TSPFFMAE    = regbits< type, 18,  1 >;  /**< Time stamp PTP frame filtering MAC address enable                  */
  };

  /**
   * Ethernet PTP subsecond increment register
   */
  struct PTPSSIR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using STSSI  = regbits< type,  0,  8 >;  /**< System time subsecond increment  */
  };

  /**
   * Ethernet PTP time stamp high register
   */
  struct PTPTSHR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using STS  = regbits< type,  0, 32 >;  /**< System time second  */
  };

  /**
   * Ethernet PTP time stamp low register
   */
  struct PTPTSLR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using STSS   = regbits< type,  0, 31 >;  /**< System time subseconds                 */
    using STPNS  = regbits< type, 31,  1 >;  /**< System time positive or negative sign  */
  };

  /**
   * Ethernet PTP time stamp high update register
   */
  struct PTPTSHUR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using TSUS  = regbits< type,  0, 32 >;  /**< Time stamp update second  */
  };

  /**
   * Ethernet PTP time stamp low update register
   */
  struct PTPTSLUR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using TSUSS   = regbits< type,  0, 31 >;  /**< Time stamp update subseconds                 */
    using TSUPNS  = regbits< type, 31,  1 >;  /**< Time stamp update positive or negative sign  */
  };

  /**
   * Ethernet PTP time stamp addend register
   */
  struct PTPTSAR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using TSA  = regbits< type,  0, 32 >;  /**< Time stamp addend  */
  };

  /**
   * Ethernet PTP target time high register
   */
  struct PTPTTHR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using TTSH  = regbits< type,  0, 32 >;  /**< Target time stamp high  */
  };

  /**
   * Ethernet PTP target time low register
   */
  struct PTPTTLR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using TTSL  = regbits< type,  0, 32 >;  /**< Target time stamp low  */
  };

  /**
   * Ethernet PTP time stamp status register
   */
  struct PTPTSSR
  : public reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >;

    using TSSO   = regbits< type,  0,  1 >;  /**< Time stamp second overflow      */
    using TSTTR  = regbits< type,  1,  1 >;  /**< Time stamp target time reached  */
  };

  /**
   * Ethernet PTP PPS control register
   */
  struct PTPPPSCR
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >;

    using PPSFREQ  = regbits< type,  0,  4 >;  /**< PPS frequency selection  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ETHERNET_PTP_HPP_INCLUDED
