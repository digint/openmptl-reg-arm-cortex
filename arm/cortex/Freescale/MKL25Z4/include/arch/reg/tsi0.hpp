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
//  Import from CMSIS-SVD: "Freescale/MKL25Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL25Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL25Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TSI0_HPP_INCLUDED
#define ARCH_REG_TSI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Touch sense input
 */
struct TSI0
{
  static constexpr reg_addr_t base_addr = 0x40045000;

  /**
   * TSI General Control and Status Register
   */
  struct GENCS
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using CURSW    = regbits< type,  1,  1 >;  /**< CURSW                                            */
    using EOSF     = regbits< type,  2,  1 >;  /**< End of Scan Flag                                 */
    using SCNIP    = regbits< type,  3,  1 >;  /**< Scan In Progress Status                          */
    using STM      = regbits< type,  4,  1 >;  /**< Scan Trigger Mode                                */
    using STPE     = regbits< type,  5,  1 >;  /**< TSI STOP Enable                                  */
    using TSIIEN   = regbits< type,  6,  1 >;  /**< Touch Sensing Input Interrupt Enable             */
    using TSIEN    = regbits< type,  7,  1 >;  /**< Touch Sensing Input Module Enable                */
    using NSCN     = regbits< type,  8,  5 >;  /**< NSCN                                             */
    using PS       = regbits< type, 13,  3 >;  /**< PS                                               */
    using EXTCHRG  = regbits< type, 16,  3 >;  /**< EXTCHRG                                          */
    using DVOLT    = regbits< type, 19,  2 >;  /**< DVOLT                                            */
    using REFCHRG  = regbits< type, 21,  3 >;  /**< REFCHRG                                          */
    using MODE     = regbits< type, 24,  4 >;  /**< TSI analog modes setup and status bits.          */
    using ESOR     = regbits< type, 28,  1 >;  /**< End-of-scan or Out-of-Range Interrupt Selection  */
    using OUTRGF   = regbits< type, 31,  1 >;  /**< Out of Range Flag.                               */
  };

  /**
   * TSI DATA Register
   */
  struct DATA
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using TSICNT  = regbits< type,  0, 16 >;  /**< TSI Conversion Counter Value  */
    using SWTS    = regbits< type, 22,  1 >;  /**< Software Trigger Start        */
    using DMAEN   = regbits< type, 23,  1 >;  /**< DMA Transfer Enabled          */
    using TSICH   = regbits< type, 28,  4 >;  /**< TSICH                         */
  };

  /**
   * TSI Threshold Register
   */
  struct TSHD
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using THRESL  = regbits< type,  0, 16 >;  /**< TSI Wakeup Channel Low-threshold   */
    using THRESH  = regbits< type, 16, 16 >;  /**< TSI Wakeup Channel High-threshold  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TSI0_HPP_INCLUDED
