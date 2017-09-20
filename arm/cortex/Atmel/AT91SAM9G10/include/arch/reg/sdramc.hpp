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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G10
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G10 device: ARM926EJ Embedded Microprocessor Unit, 266MHz, LCD, USB, 217 Pins (refer to http://www.atmel.com/devices/SAM9G10.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SDRAMC_HPP_INCLUDED
#define ARCH_REG_SDRAMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * SDRAM Controller
 */
struct SDRAMC
{
  static constexpr reg_addr_t base_addr = 0xffffea00;

  /**
   * SDRAMC Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using MODE  = regbits< type,  0,  3 >;  /**< SDRAMC Command Mode  */
  };

  /**
   * SDRAMC Refresh Timer Register
   */
  struct TR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using COUNT  = regbits< type,  0, 12 >;  /**< SDRAMC Refresh Timer Count  */
  };

  /**
   * SDRAMC Configuration Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x852372C0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x852372C0 >;

    using NC    = regbits< type,  0,  2 >;  /**< Number of Column Bits              */
    using NR    = regbits< type,  2,  2 >;  /**< Number of Row Bits                 */
    using NB    = regbits< type,  4,  1 >;  /**< Number of Banks                    */
    using CAS   = regbits< type,  5,  2 >;  /**< CAS Latency                        */
    using DBW   = regbits< type,  7,  1 >;  /**< Data Bus Width                     */
    using TWR   = regbits< type,  8,  4 >;  /**< Write Recovery Delay               */
    using TRC   = regbits< type, 12,  4 >;  /**< Row Cycle Delay                    */
    using TRP   = regbits< type, 16,  4 >;  /**< Row Precharge Delay                */
    using TRCD  = regbits< type, 20,  4 >;  /**< Row to Column Delay                */
    using TRAS  = regbits< type, 24,  4 >;  /**< Active to Precharge Delay          */
    using TXSR  = regbits< type, 28,  4 >;  /**< Exit Self Refresh to Active Delay  */
  };

  /**
   * SDRAMC Low Power Register
   */
  struct LPR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using LPCB     = regbits< type,  0,  2 >;  /**< Low-power Configuration Bits                                     */
    using PASR     = regbits< type,  4,  3 >;  /**< Partial Array Self-refresh (only for low-power SDRAM)            */
    using TCSR     = regbits< type,  8,  2 >;  /**< Temperature Compensated Self-Refresh (only for low-power SDRAM)  */
    using DS       = regbits< type, 10,  2 >;  /**< Drive Strength (only for low-power SDRAM)                        */
    using TIMEOUT  = regbits< type, 12,  2 >;  /**< Time to define when low-power mode is enabled                    */
  };

  /**
   * SDRAMC Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using RES  = regbits< type,  0,  1 >;  /**< Refresh Error Status  */
  };

  /**
   * SDRAMC Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000018, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, wo, 0 >;

    using RES  = regbits< type,  0,  1 >;  /**< Refresh Error Status  */
  };

  /**
   * SDRAMC Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using RES  = regbits< type,  0,  1 >;  /**< Refresh Error Status  */
  };

  /**
   * SDRAMC Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using RES  = regbits< type,  0,  1 >;  /**< Refresh Error Status  */
  };

  /**
   * SDRAMC Memory Device Register
   */
  struct MDR
  : public reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >;

    using MD  = regbits< type,  0,  2 >;  /**< Memory Device Type  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SDRAMC_HPP_INCLUDED
