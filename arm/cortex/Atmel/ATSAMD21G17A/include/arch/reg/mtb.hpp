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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21G17A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21G17A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21G17A device: Cortex-M0+ Microcontroller with 128KB Flash, 16KB SRAM, 48-pin package (refer to http://www.atmel.com/devices/SAMD21G17A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MTB_HPP_INCLUDED
#define ARCH_REG_MTB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Cortex-M0+ Micro-Trace Buffer
 */
struct MTB
{
  static constexpr reg_addr_t base_addr = 0x41006000;

  /**
   * MTB Authentication Status
   */
  struct AUTHSTATUS
  : public reg< uint32_t, base_addr + 0xfb8, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Base
   */
  struct BASE
  : public reg< uint32_t, base_addr + 0x00c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct CID0
  : public reg< uint32_t, base_addr + 0xff0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct CID1
  : public reg< uint32_t, base_addr + 0xff4, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct CID2
  : public reg< uint32_t, base_addr + 0xff8, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct CID3
  : public reg< uint32_t, base_addr + 0xffc, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Claim Clear
   */
  struct CLAIMCLR
  : public reg< uint32_t, base_addr + 0xfa4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Claim Set
   */
  struct CLAIMSET
  : public reg< uint32_t, base_addr + 0xfa0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Device Architecture
   */
  struct DEVARCH
  : public reg< uint32_t, base_addr + 0xfbc, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Device Configuration
   */
  struct DEVID
  : public reg< uint32_t, base_addr + 0xfc8, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Device Type
   */
  struct DEVTYPE
  : public reg< uint32_t, base_addr + 0xfcc, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Flow
   */
  struct FLOW
  : public reg< uint32_t, base_addr + 0x008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using AUTOSTOP   = regbits< type,  0,  1 >;  /**< Auto Stop Tracing  */
    using AUTOHALT   = regbits< type,  1,  1 >;  /**< Auto Halt Request  */
    using WATERMARK  = regbits< type,  3, 29 >;  /**< Watermark value    */
  };

  /**
   * MTB Integration Mode Control
   */
  struct ITCTRL
  : public reg< uint32_t, base_addr + 0xf00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Lock Access
   */
  struct LOCKACCESS
  : public reg< uint32_t, base_addr + 0xfb0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Lock Status
   */
  struct LOCKSTATUS
  : public reg< uint32_t, base_addr + 0xfb4, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Master
   */
  struct MASTER
  : public reg< uint32_t, base_addr + 0x004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MASK      = regbits< type,  0,  5 >;  /**< Maximum Value of the Trace Buffer in SRAM  */
    using TSTARTEN  = regbits< type,  5,  1 >;  /**< Trace Start Input Enable                   */
    using TSTOPEN   = regbits< type,  6,  1 >;  /**< Trace Stop Input Enable                    */
    using SFRWPRIV  = regbits< type,  7,  1 >;  /**< Special Function Register Write Privilege  */
    using RAMPRIV   = regbits< type,  8,  1 >;  /**< SRAM Privilege                             */
    using HALTREQ   = regbits< type,  9,  1 >;  /**< Halt Request                               */
    using EN        = regbits< type, 31,  1 >;  /**< Main Trace Enable                          */
  };

  /**
   * CoreSight
   */
  struct PID0
  : public reg< uint32_t, base_addr + 0xfe0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct PID1
  : public reg< uint32_t, base_addr + 0xfe4, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct PID2
  : public reg< uint32_t, base_addr + 0xfe8, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct PID3
  : public reg< uint32_t, base_addr + 0xfec, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct PID4
  : public reg< uint32_t, base_addr + 0xfd0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct PID5
  : public reg< uint32_t, base_addr + 0xfd4, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct PID6
  : public reg< uint32_t, base_addr + 0xfd8, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CoreSight
   */
  struct PID7
  : public reg< uint32_t, base_addr + 0xfdc, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MTB Position
   */
  struct POSITION
  : public reg< uint32_t, base_addr + 0x000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WRAP     = regbits< type,  2,  1 >;  /**< Pointer Value Wraps            */
    using POINTER  = regbits< type,  3, 29 >;  /**< Trace Packet Location Pointer  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MTB_HPP_INCLUDED
