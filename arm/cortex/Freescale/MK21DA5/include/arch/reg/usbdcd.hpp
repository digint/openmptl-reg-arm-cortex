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
//  Import from CMSIS-SVD: "Freescale/MK21DA5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK21DA5
//  series: Kinetis_K
//  version: 1.6
//  description: MK21DA5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USBDCD_HPP_INCLUDED
#define ARCH_REG_USBDCD_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB Device Charger Detection module
 */
struct USBDCD
{
  static constexpr reg_addr_t base_addr = 0x40035000;

  /**
   * Control register
   */
  struct CONTROL
  : public reg< uint32_t, base_addr + 0, rw, 0x10000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x10000 >;

    using IACK   = regbits< type,  0,  1 >;  /**< Interrupt Acknowledge            */
    using IF     = regbits< type,  8,  1 >;  /**< Interrupt Flag                   */
    using IE     = regbits< type, 16,  1 >;  /**< Interrupt Enable                 */
    using START  = regbits< type, 24,  1 >;  /**< Start Change Detection Sequence  */
    using SR     = regbits< type, 25,  1 >;  /**< Software Reset                   */
  };

  /**
   * Clock register
   */
  struct CLOCK
  : public reg< uint32_t, base_addr + 0x4, rw, 0xC1 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xC1 >;

    using CLOCK_UNIT   = regbits< type,  0,  1 >;  /**< Unit of Measurement Encoding for Clock Speed  */
    using CLOCK_SPEED  = regbits< type,  2, 10 >;  /**< Numerical Value of Clock Speed in Binary      */
  };

  /**
   * Status register
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0 >;

    using SEQ_RES   = regbits< type, 16,  2 >;  /**< Charger Detection Sequence Results  */
    using SEQ_STAT  = regbits< type, 18,  2 >;  /**< Charger Detection Sequence Status   */
    using ERR       = regbits< type, 20,  1 >;  /**< Error Flag                          */
    using TO        = regbits< type, 21,  1 >;  /**< Timeout Flag                        */
    using ACTIVE    = regbits< type, 22,  1 >;  /**< Active Status Indicator             */
  };

  /**
   * TIMER0 register
   */
  struct TIMER0
  : public reg< uint32_t, base_addr + 0x10, rw, 0x100000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x100000 >;

    using TUNITCON   = regbits< type,  0, 12 >;  /**< Unit Connection Timer Elapse (in ms)  */
    using TSEQ_INIT  = regbits< type, 16, 10 >;  /**< Sequence Initiation Time              */
  };

  /**
   * TIMER1 register
   */
  struct TIMER1
  : public reg< uint32_t, base_addr + 0x14, rw, 0xA0028 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0xA0028 >;

    using TVDPSRC_ON  = regbits< type,  0, 10 >;  /**< Time Period Comparator Enabled     */
    using TDCD_DBNC   = regbits< type, 16, 10 >;  /**< Time Period to Debounce D+ Signal  */
  };

  /**
   * TIMER2 register
   */
  struct TIMER2
  : public reg< uint32_t, base_addr + 0x18, rw, 0x280001 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x280001 >;

    using CHECK_DM     = regbits< type,  0,  4 >;  /**< Time Before Check of D- Line           */
    using TVDPSRC_CON  = regbits< type, 16, 10 >;  /**< Time Period Before Enabling D+ Pullup  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USBDCD_HPP_INCLUDED
