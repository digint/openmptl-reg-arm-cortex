/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKE15D7.svd"
//
//  name: MKE15D7
//  version: 1.6
//  description: MKE15D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AIPS_HPP_INCLUDED
#define ARCH_REG_AIPS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AIPS-Lite Bridge
 */
struct AIPS
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Master Privilege Register A
   */
  struct MPRA
  : public reg< uint32_t, base_addr + 0, rw, 0x77700000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x77700000 >;

    using RESERVED  = regbits< type,  0,  4 >;  /**< no description available   */
    using RESERVED  = regbits< type,  4,  4 >;  /**< no description available   */
    using RESERVED  = regbits< type,  8,  4 >;  /**< no description available   */
    using RESERVED  = regbits< type, 12,  4 >;  /**< no description available   */
    using RESERVED  = regbits< type, 16,  4 >;  /**< no description available   */
    using MPL2      = regbits< type, 20,  1 >;  /**< Master Privilege Level     */
    using MTW2      = regbits< type, 21,  1 >;  /**< Master Trusted For Writes  */
    using MTR2      = regbits< type, 22,  1 >;  /**< Master Trusted For Read    */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available   */
    using MPL1      = regbits< type, 24,  1 >;  /**< Master privilege level     */
    using MTW1      = regbits< type, 25,  1 >;  /**< Master trusted for writes  */
    using MTR1      = regbits< type, 26,  1 >;  /**< Master trusted for read    */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available   */
    using MPL0      = regbits< type, 28,  1 >;  /**< Master Privilege Level     */
    using MTW0      = regbits< type, 29,  1 >;  /**< Master Trusted For Writes  */
    using MTR0      = regbits< type, 30,  1 >;  /**< Master Trusted For Read    */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available   */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRA
  : public reg< uint32_t, base_addr + 0x20, rw, 0x44444444 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x44444444 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write Protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted Protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted Protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRB
  : public reg< uint32_t, base_addr + 0x24, rw, 0x44444444 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x44444444 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write Protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted Protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted Protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRC
  : public reg< uint32_t, base_addr + 0x28, rw, 0x44444444 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x44444444 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write Protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted Protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted Protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRD
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x44444444 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x44444444 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write Protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted Protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted Protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRE
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRF
  : public reg< uint32_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRG
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRH
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRI
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRJ
  : public reg< uint32_t, base_addr + 0x54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRK
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRL
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRM
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRN
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRO
  : public reg< uint32_t, base_addr + 0x68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRP
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using TP7       = regbits< type,  0,  1 >;  /**< Trusted Protect           */
    using WP7       = regbits< type,  1,  1 >;  /**< Write Protect             */
    using SP7       = regbits< type,  2,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using TP6       = regbits< type,  4,  1 >;  /**< Trusted Protect           */
    using WP6       = regbits< type,  5,  1 >;  /**< Write Protect             */
    using SP6       = regbits< type,  6,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
    using TP5       = regbits< type,  8,  1 >;  /**< Trusted Protect           */
    using WP5       = regbits< type,  9,  1 >;  /**< Write Protect             */
    using SP5       = regbits< type, 10,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available  */
    using TP4       = regbits< type, 12,  1 >;  /**< Trusted protect           */
    using WP4       = regbits< type, 13,  1 >;  /**< Write Protect             */
    using SP4       = regbits< type, 14,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available  */
    using TP3       = regbits< type, 16,  1 >;  /**< Trusted Protect           */
    using WP3       = regbits< type, 17,  1 >;  /**< Write protect             */
    using SP3       = regbits< type, 18,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available  */
    using TP2       = regbits< type, 20,  1 >;  /**< Trusted protect           */
    using WP2       = regbits< type, 21,  1 >;  /**< Write Protect             */
    using SP2       = regbits< type, 22,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write Protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Peripheral Access Control Register U
   */
  struct PACRU
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using RESERVED  = regbits< type,  0, 24 >;  /**< no description available  */
    using TP1       = regbits< type, 24,  1 >;  /**< Trusted Protect           */
    using WP1       = regbits< type, 25,  1 >;  /**< Write protect             */
    using SP1       = regbits< type, 26,  1 >;  /**< Supervisor Protect        */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available  */
    using TP0       = regbits< type, 28,  1 >;  /**< Trusted Protect           */
    using WP0       = regbits< type, 29,  1 >;  /**< Write Protect             */
    using SP0       = regbits< type, 30,  1 >;  /**< Supervisor protect        */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AIPS_HPP_INCLUDED
