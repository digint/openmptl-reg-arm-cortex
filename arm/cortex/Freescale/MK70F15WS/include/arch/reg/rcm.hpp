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
//  Import from CMSIS-SVD: "Freescale/MK70F15WS.svd"
//
//  name: MK70F15WS
//  version: 1.6
//  description: MK70F15WS Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RCM_HPP_INCLUDED
#define ARCH_REG_RCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Reset Control Module
 */
struct RCM
{
  static constexpr reg_addr_t base_addr = 0x4007f000;

  /**
   * System Reset Status Register 0
   */
  struct SRS0
  : public reg< uint8_t, base_addr + 0, ro, 0x82 >
  {
    using type = reg< uint8_t, base_addr + 0, ro, 0x82 >;

    using WAKEUP    = regbits< type,  0,  1 >;  /**< Low leakage wakeup reset  */
    using LVD       = regbits< type,  1,  1 >;  /**< Low-voltage detect reset  */
    using LOC       = regbits< type,  2,  1 >;  /**< Loss-of-clock reset       */
    using RESERVED  = regbits< type,  3,  2 >;  /**< no description available  */
    using WDOG      = regbits< type,  5,  1 >;  /**< Watchdog                  */
    using PIN       = regbits< type,  6,  1 >;  /**< External reset pin        */
    using POR       = regbits< type,  7,  1 >;  /**< Power-on reset            */
  };

  /**
   * System Reset Status Register 1
   */
  struct SRS1
  : public reg< uint8_t, base_addr + 0x1, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, ro, 0 >;

    using JTAG      = regbits< type,  0,  1 >;  /**< JTAG generated reset               */
    using LOCKUP    = regbits< type,  1,  1 >;  /**< Core Lockup                        */
    using SW        = regbits< type,  2,  1 >;  /**< Software                           */
    using MDM_AP    = regbits< type,  3,  1 >;  /**< MDM-AP system reset request        */
    using EZPT      = regbits< type,  4,  1 >;  /**< EzPort Reset                       */
    using SACKERR   = regbits< type,  5,  1 >;  /**< Stop Mode Acknowledge Error Reset  */
    using RESERVED  = regbits< type,  6,  1 >;  /**< no description available           */
    using TAMPER    = regbits< type,  7,  1 >;  /**< Tamper detect                      */
  };

  /**
   * Reset Pin Filter Control Register
   */
  struct RPFC
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using RSTFLTSRW  = regbits< type,  0,  2 >;  /**< Reset pin filter select in run and wait modes  */
    using RSTFLTSS   = regbits< type,  2,  1 >;  /**< Reset pin filter select in stop mode           */
    using RESERVED   = regbits< type,  3,  5 >;  /**< no description available                       */
  };

  /**
   * Reset Pin Filter Width Register
   */
  struct RPFW
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using RSTFLTSEL  = regbits< type,  0,  5 >;  /**< Reset pin filter bus clock select  */
    using RESERVED   = regbits< type,  5,  3 >;  /**< no description available           */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint8_t, base_addr + 0x7, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, ro, 0 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< no description available  */
    using EZP_MS    = regbits< type,  1,  1 >;  /**< EZP_MS_B pin state        */
    using RESERVED  = regbits< type,  2,  6 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCM_HPP_INCLUDED
