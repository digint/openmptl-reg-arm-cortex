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
//  Import from CMSIS-SVD: "STMicro/STM32F40x.svd"
//
//  name: STM32F40x
//  version: 1.5
//  description: STM32F40x
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
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00002000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00002000 >;

    using TSE         = regbits< type,  0,  1 >;  /**< no description available  */
    using TSFCU       = regbits< type,  1,  1 >;  /**< no description available  */
    using TSPTPPSV2E  = regbits< type, 10,  1 >;  /**< no description available  */
    using TSSPTPOEFE  = regbits< type, 11,  1 >;  /**< no description available  */
    using TSSIPV6FE   = regbits< type, 12,  1 >;  /**< no description available  */
    using TSSIPV4FE   = regbits< type, 13,  1 >;  /**< no description available  */
    using TSSEME      = regbits< type, 14,  1 >;  /**< no description available  */
    using TSSMRME     = regbits< type, 15,  1 >;  /**< no description available  */
    using TSCNT       = regbits< type, 16,  2 >;  /**< no description available  */
    using TSPFFMAE    = regbits< type, 18,  1 >;  /**< no description available  */
    using TSSTI       = regbits< type,  2,  1 >;  /**< no description available  */
    using TSSTU       = regbits< type,  3,  1 >;  /**< no description available  */
    using TSITE       = regbits< type,  4,  1 >;  /**< no description available  */
    using TTSARU      = regbits< type,  5,  1 >;  /**< no description available  */
    using TSSARFE     = regbits< type,  8,  1 >;  /**< no description available  */
    using TSSSR       = regbits< type,  9,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet PTP subsecond increment register
   */
  struct PTPSSIR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using STSSI  = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * Ethernet PTP time stamp high register
   */
  struct PTPTSHR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using STS  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet PTP time stamp low register
   */
  struct PTPTSLR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using STSS   = regbits< type,  0, 31 >;  /**< no description available  */
    using STPNS  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet PTP time stamp high update register
   */
  struct PTPTSHUR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using TSUS  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet PTP time stamp low update register
   */
  struct PTPTSLUR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using TSUSS   = regbits< type,  0, 31 >;  /**< no description available  */
    using TSUPNS  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet PTP time stamp addend register
   */
  struct PTPTSAR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using TSA  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet PTP target time high register
   */
  struct PTPTTHR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using TTSH  = regbits< type,  0, 32 >;
  };

  /**
   * Ethernet PTP target time low register
   */
  struct PTPTTLR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using TTSL  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet PTP time stamp status register
   */
  struct PTPTSSR
  : public reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >;

    using TSSO   = regbits< type,  0,  1 >;  /**< no description available  */
    using TSTTR  = regbits< type,  1,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet PTP PPS control register
   */
  struct PTPPPSCR
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >;

    using TSSO   = regbits< type,  0,  1 >;  /**< TSSO   */
    using TSTTR  = regbits< type,  1,  1 >;  /**< TSTTR  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ETHERNET_PTP_HPP_INCLUDED
