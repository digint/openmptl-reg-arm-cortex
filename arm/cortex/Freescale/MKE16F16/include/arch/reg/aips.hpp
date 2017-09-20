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
//  Import from CMSIS-SVD: "Freescale/MKE16F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE16F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE16F16 Freescale Microcontroller
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
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using MPL2  = regbits< type, 20,  1 >;  /**< Master 2 Privilege Level     */
    using MTW2  = regbits< type, 21,  1 >;  /**< Master 2 Trusted For Writes  */
    using MTR2  = regbits< type, 22,  1 >;  /**< Master 2 Trusted For Read    */
    using MPL1  = regbits< type, 24,  1 >;  /**< Master 1 Privilege Level     */
    using MTW1  = regbits< type, 25,  1 >;  /**< Master 1 Trusted for Writes  */
    using MTR1  = regbits< type, 26,  1 >;  /**< Master 1 Trusted for Read    */
    using MPL0  = regbits< type, 28,  1 >;  /**< Master 0 Privilege Level     */
    using MTW0  = regbits< type, 29,  1 >;  /**< Master 0 Trusted For Writes  */
    using MTR0  = regbits< type, 30,  1 >;  /**< Master 0 Trusted For Read    */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACR%s
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Off-Platform Peripheral Access Control Register
   */
  struct OPACR%s
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using TP7  = regbits< type,  0,  1 >;  /**< Trusted Protect     */
    using WP7  = regbits< type,  1,  1 >;  /**< Write Protect       */
    using SP7  = regbits< type,  2,  1 >;  /**< Supervisor Protect  */
    using TP6  = regbits< type,  4,  1 >;  /**< Trusted Protect     */
    using WP6  = regbits< type,  5,  1 >;  /**< Write Protect       */
    using SP6  = regbits< type,  6,  1 >;  /**< Supervisor Protect  */
    using TP5  = regbits< type,  8,  1 >;  /**< Trusted Protect     */
    using WP5  = regbits< type,  9,  1 >;  /**< Write Protect       */
    using SP5  = regbits< type, 10,  1 >;  /**< Supervisor Protect  */
    using TP4  = regbits< type, 12,  1 >;  /**< Trusted Protect     */
    using WP4  = regbits< type, 13,  1 >;  /**< Write Protect       */
    using SP4  = regbits< type, 14,  1 >;  /**< Supervisor Protect  */
    using TP3  = regbits< type, 16,  1 >;  /**< Trusted Protect     */
    using WP3  = regbits< type, 17,  1 >;  /**< Write Protect       */
    using SP3  = regbits< type, 18,  1 >;  /**< Supervisor Protect  */
    using TP2  = regbits< type, 20,  1 >;  /**< Trusted Protect     */
    using WP2  = regbits< type, 21,  1 >;  /**< Write Protect       */
    using SP2  = regbits< type, 22,  1 >;  /**< Supervisor Protect  */
    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRU
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using TP1  = regbits< type, 24,  1 >;  /**< Trusted Protect     */
    using WP1  = regbits< type, 25,  1 >;  /**< Write Protect       */
    using SP1  = regbits< type, 26,  1 >;  /**< Supervisor Protect  */
    using TP0  = regbits< type, 28,  1 >;  /**< Trusted Protect     */
    using WP0  = regbits< type, 29,  1 >;  /**< Write Protect       */
    using SP0  = regbits< type, 30,  1 >;  /**< Supervisor Protect  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AIPS_HPP_INCLUDED
