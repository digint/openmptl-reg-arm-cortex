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
//  Import from CMSIS-SVD: "Atmel/ATSAM4S16C.svd"
//
//  vendor: Atmel
//  name: ATSAM4S16C
//  series: SAM4S
//  version: 20130131
//  description: Atmel ATSAM4S16C device: Cortex-M4 Microcontroller with 1MB Flash, 128KB SRAM, USB, 100 Pins (refer to http://www.atmel.com/devices/SAM4S16C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EFC0_HPP_INCLUDED
#define ARCH_REG_EFC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Embedded Flash Controller 0
 */
struct EFC0
{
  static constexpr reg_addr_t base_addr = 0x400e0a00;

  /**
   * EEFC Flash Mode Register
   */
  struct FMR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x04000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x04000000 >;

    using FRDY  = regbits< type,  0,  1 >;  /**< Ready Interrupt Enable                */
    using FWS   = regbits< type,  8,  4 >;  /**< Flash Wait State                      */
    using SCOD  = regbits< type, 16,  1 >;  /**< Sequential Code Optimization Disable  */
    using FAM   = regbits< type, 24,  1 >;  /**< Flash Access Mode                     */
    using CLOE  = regbits< type, 26,  1 >;  /**< Code Loops Optimization Enable        */
  };

  /**
   * EEFC Flash Command Register
   */
  struct FCR
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using FCMD  = regbits< type,  0,  8 >;  /**< Flash Command                 */
    using FARG  = regbits< type,  8, 16 >;  /**< Flash Command Argument        */
    using FKEY  = regbits< type, 24,  8 >;  /**< Flash Writing Protection Key  */
  };

  /**
   * EEFC Flash Status Register
   */
  struct FSR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000001 >;

    using FRDY    = regbits< type,  0,  1 >;  /**< Flash Ready Status          */
    using FCMDE   = regbits< type,  1,  1 >;  /**< Flash Command Error Status  */
    using FLOCKE  = regbits< type,  2,  1 >;  /**< Flash Lock Error Status     */
    using FLERR   = regbits< type,  3,  1 >;  /**< Flash Error Status          */
  };

  /**
   * EEFC Flash Result Register
   */
  struct FRR
  : public reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >;

    using FVALUE  = regbits< type,  0, 32 >;  /**< Flash Result Value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EFC0_HPP_INCLUDED
