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
//  Import from CMSIS-SVD: "Atmel/ATSAM4S8B.svd"
//
//  vendor: Atmel
//  name: ATSAM4S8B
//  series: SAM4S
//  version: 20130131
//  description: Atmel ATSAM4S8B device: Cortex-M4 Microcontroller with 512KB Flash, 128KB SRAM, USB, 64 Pins (refer to http://www.atmel.com/devices/SAM4S8B.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RTT_HPP_INCLUDED
#define ARCH_REG_RTT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Real-time Timer
 */
struct RTT
{
  static constexpr reg_addr_t base_addr = 0x400e1430;

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00008000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00008000 >;

    using RTPRES     = regbits< type,  0, 16 >;  /**< Real-time Timer Prescaler Value             */
    using ALMIEN     = regbits< type, 16,  1 >;  /**< Alarm Interrupt Enable                      */
    using RTTINCIEN  = regbits< type, 17,  1 >;  /**< Real-time Timer Increment Interrupt Enable  */
    using RTTRST     = regbits< type, 18,  1 >;  /**< Real-time Timer Restart                     */
    using RTTDIS     = regbits< type, 20,  1 >;  /**< Real-time Timer Disable                     */
    using RTC1HZ     = regbits< type, 24,  1 >;  /**< Real-Time Clock 1Hz Clock Selection         */
  };

  /**
   * Alarm Register
   */
  struct AR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0xFFFFFFFF >;

    using ALMV  = regbits< type,  0, 32 >;  /**< Alarm Value  */
  };

  /**
   * Value Register
   */
  struct VR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >;

    using CRTV  = regbits< type,  0, 32 >;  /**< Current Real-time Value  */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >;

    using ALMS    = regbits< type,  0,  1 >;  /**< Real-time Alarm Status     */
    using RTTINC  = regbits< type,  1,  1 >;  /**< Real-time Timer Increment  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTT_HPP_INCLUDED
