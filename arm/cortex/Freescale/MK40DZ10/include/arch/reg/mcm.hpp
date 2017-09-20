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
//  Import from CMSIS-SVD: "Freescale/MK40DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK40DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK40DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MCM_HPP_INCLUDED
#define ARCH_REG_MCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Core Platform Miscellaneous Control Module
 */
struct MCM
{
  static constexpr reg_addr_t base_addr = 0xe0080000;

  /**
   * Crossbar switch (AXBS) slave configuration
   */
  struct PLASC
  : public reg< uint16_t, base_addr + 0x8, ro, 0x1F >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0x1F >;

    using ASC  = regbits< type,  0,  8 >;  /**< Each bit in the ASC field indicates if there is a corresponding connection to the crossbar switch's slave input port.  */
  };

  /**
   * Crossbar switch (AXBS) master configuration
   */
  struct PLAMC
  : public reg< uint16_t, base_addr + 0xa, ro, 0x3F >
  {
    using type = reg< uint16_t, base_addr + 0xa, ro, 0x3F >;

    using AMC  = regbits< type,  0,  8 >;  /**< Each bit in the AMC field indicates if there is a corresponding connection to the AXBS master input port.  */
  };

  /**
   * SRAM arbitration and protection
   */
  struct SRAMAP
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using SRAMUAP  = regbits< type, 24,  2 >;  /**< SRAM_U arbitration priority  */
    using SRAMUWP  = regbits< type, 26,  1 >;  /**< SRAM_U write protect         */
    using SRAMLAP  = regbits< type, 28,  2 >;  /**< SRAM_L arbitration priority  */
    using SRAMLWP  = regbits< type, 30,  1 >;  /**< SRAM_L write protect         */
  };

  /**
   * Interrupt status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using IRQ  = regbits< type,  1,  1 >;  /**< Normal interrupt pending        */
    using NMI  = regbits< type,  2,  1 >;  /**< Non-maskable interrupt pending  */
  };

  /**
   * ETB counter control register
   */
  struct ETBCC
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using CNTEN  = regbits< type,  0,  1 >;  /**< Counter enable       */
    using RSPT   = regbits< type,  1,  2 >;  /**< Response type        */
    using RLRQ   = regbits< type,  3,  1 >;  /**< Reload request       */
    using ETDIS  = regbits< type,  4,  1 >;  /**< ETM-to-TPIU disable  */
    using ITDIS  = regbits< type,  5,  1 >;  /**< ITM-to-TPIU disable  */
  };

  /**
   * ETB reload register
   */
  struct ETBRL
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using RELOAD  = regbits< type,  0, 11 >;  /**< Byte count reload value  */
  };

  /**
   * ETB counter value register
   */
  struct ETBCNT
  : public reg< uint32_t, base_addr + 0x1c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0 >;

    using COUNTER  = regbits< type,  0, 11 >;  /**< Byte count counter value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCM_HPP_INCLUDED
