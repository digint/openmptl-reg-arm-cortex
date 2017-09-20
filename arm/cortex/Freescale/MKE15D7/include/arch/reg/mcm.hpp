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
   * Crossbar Switch (AXBS) Slave Configuration
   */
  struct PLASC
  : public reg< uint16_t, base_addr + 0x8, ro, 0x1B >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0x1B >;

    using ASC       = regbits< type,  0,  8 >;  /**< Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.  */
    using RESERVED  = regbits< type,  8,  8 >;  /**< no description available                                                                                                    */
  };

  /**
   * Crossbar Switch (AXBS) Master Configuration
   */
  struct PLAMC
  : public reg< uint16_t, base_addr + 0xa, ro, 0x7 >
  {
    using type = reg< uint16_t, base_addr + 0xa, ro, 0x7 >;

    using AMC       = regbits< type,  0,  8 >;  /**< Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.  */
    using RESERVED  = regbits< type,  8,  8 >;  /**< no description available                                                                                        */
  };

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using RESERVED  = regbits< type,  0,  9 >;  /**< no description available                 */
    using CBRR      = regbits< type,  9,  1 >;  /**< Crossbar round-robin arbitration enable  */
    using RESERVED  = regbits< type, 10, 14 >;  /**< no description available                 */
    using SRAMUAP   = regbits< type, 24,  2 >;  /**< SRAM_U arbitration priority              */
    using SRAMUWP   = regbits< type, 26,  1 >;  /**< SRAM_U write protect                     */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available                 */
    using SRAMLAP   = regbits< type, 28,  2 >;  /**< SRAM_L arbitration priority              */
    using SRAMLWP   = regbits< type, 30,  1 >;  /**< SRAM_L Write Protect                     */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available                 */
  };

  /**
   * Process ID register
   */
  struct PID
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    // fixme: Field name equals parent register name: PID
    using PID_      = regbits< type,  0,  8 >;  /**< M0_PID And M1_PID For MPU  */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available   */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCM_HPP_INCLUDED
