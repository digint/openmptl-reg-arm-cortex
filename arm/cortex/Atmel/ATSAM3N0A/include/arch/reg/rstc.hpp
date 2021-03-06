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
//  Import from CMSIS-SVD: "Atmel/ATSAM3N0A.svd"
//
//  vendor: Atmel
//  name: ATSAM3N0A
//  series: SAM3N
//  version: 20130131
//  description: Atmel ATSAM3N0A device: Cortex-M3 Microcontroller with 32KB Flash, 48 Pins (refer to http://www.atmel.com/devices/SAM3N0A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RSTC_HPP_INCLUDED
#define ARCH_REG_RSTC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Reset Controller
 */
struct RSTC
{
  static constexpr reg_addr_t base_addr = 0x400e1400;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using PROCRST  = regbits< type,  0,  1 >;  /**< Processor Reset   */
    using PERRST   = regbits< type,  2,  1 >;  /**< Peripheral Reset  */
    using EXTRST   = regbits< type,  3,  1 >;  /**< External Reset    */
    using KEY      = regbits< type, 24,  8 >;  /**< Password          */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >;

    using URSTS   = regbits< type,  0,  1 >;  /**< User Reset Status                   */
    using RSTTYP  = regbits< type,  8,  3 >;  /**< Reset Type                          */
    using NRSTL   = regbits< type, 16,  1 >;  /**< NRST Pin Level                      */
    using SRCMP   = regbits< type, 17,  1 >;  /**< Software Reset Command in Progress  */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000001 >;

    using URSTEN   = regbits< type,  0,  1 >;  /**< User Reset Enable            */
    using URSTIEN  = regbits< type,  4,  1 >;  /**< User Reset Interrupt Enable  */
    using ERSTL    = regbits< type,  8,  4 >;  /**< External Reset Length        */
    using KEY      = regbits< type, 24,  8 >;  /**< Password                     */
  };
};
} // namespace mptl

#endif // ARCH_REG_RSTC_HPP_INCLUDED
