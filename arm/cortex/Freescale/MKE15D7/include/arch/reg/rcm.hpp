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

#ifndef ARCH_REG_RCM_HPP_INCLUDED
#define ARCH_REG_RCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Reset control module
 */
struct RCM
{
  static constexpr reg_addr_t base_addr = 0x40057000;

  /**
   * RCM System Reset Status Low Register
   */
  struct SRSL
  : public reg< uint8_t, base_addr + 0, ro, 0x82 >
  {
    using type = reg< uint8_t, base_addr + 0, ro, 0x82 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< no description available  */
    using LVD       = regbits< type,  1,  1 >;  /**< Low Voltage Detect        */
    using LOC       = regbits< type,  2,  1 >;  /**< Loss Of Clock Reset       */
    using RESERVED  = regbits< type,  3,  2 >;  /**< no description available  */
    using COP       = regbits< type,  5,  1 >;  /**< COP Watchdog Reset        */
    using PIN       = regbits< type,  6,  1 >;  /**< External RESETb Pin       */
    using POR       = regbits< type,  7,  1 >;  /**< Power On Reset            */
  };

  /**
   * RCM System Reset Status High Register
   */
  struct SRSH
  : public reg< uint8_t, base_addr + 0x1, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, ro, 0 >;

    using JTAG      = regbits< type,  0,  1 >;  /**< JTAG Reset                         */
    using LOCKUP    = regbits< type,  1,  1 >;  /**< CPU LOCKUP Reset                   */
    using SW        = regbits< type,  2,  1 >;  /**< Software Reset                     */
    using MDMAP     = regbits< type,  3,  1 >;  /**< MDM-AP system reset request        */
    using RESERVED  = regbits< type,  4,  1 >;  /**< no description available           */
    using SACKERR   = regbits< type,  5,  1 >;  /**< Stop Mode Acknowledge Error Reset  */
    using RESERVED  = regbits< type,  6,  2 >;  /**< no description available           */
  };

  /**
   * RCM RESETb Pin Filter Control Register
   */
  struct RPFC
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using RSTFLTSRW  = regbits< type,  0,  2 >;  /**< Reset Pin Filter Select in Run and Wait Modes  */
    using RSTFLTSS   = regbits< type,  2,  1 >;  /**< Reset Pin Filter Select in Stop Modes          */
    using RESERVED   = regbits< type,  3,  5 >;  /**< no description available                       */
  };

  /**
   * RCM RESETb Pin Filter Width Register
   */
  struct RPFW
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using RSTFLTSS  = regbits< type,  0,  5 >;  /**< RESETb Pin bus clock filter width  */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available           */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCM_HPP_INCLUDED
