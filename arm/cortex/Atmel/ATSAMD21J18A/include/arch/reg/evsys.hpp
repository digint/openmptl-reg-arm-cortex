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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21J18A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21J18A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21J18A device: Cortex-M0+ Microcontroller with 256KB Flash, 32KB SRAM, 64-pin package (refer to http://www.atmel.com/devices/SAMD21J18A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EVSYS_HPP_INCLUDED
#define ARCH_REG_EVSYS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Event System Interface
 */
struct EVSYS
{
  static constexpr reg_addr_t base_addr = 0x42000400;

  /**
   * Channel
   */
  struct CHANNEL
  : public reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CHANNEL
    using CHANNEL_ = regbits< type,  0,  4 >;  /**< Channel Selection          */
    using SWEVT    = regbits< type,  8,  1 >;  /**< Software Event             */
    using EVGEN    = regbits< type, 16,  7 >;  /**< Event Generator Selection  */
    using PATH     = regbits< type, 24,  2 >;  /**< Path Selection             */
    using EDGSEL   = regbits< type, 26,  2 >;  /**< Edge Detection Selection   */
  };

  /**
   * Channel Status
   */
  struct CHSTATUS
  : public reg< uint32_t, base_addr + 0x0c, ro, 0x000F00FF >
  {
    using type = reg< uint32_t, base_addr + 0x0c, ro, 0x000F00FF >;

    using USRRDY0   = regbits< type,  0,  1 >;  /**< Channel 0 User Ready   */
    using USRRDY1   = regbits< type,  1,  1 >;  /**< Channel 1 User Ready   */
    using USRRDY2   = regbits< type,  2,  1 >;  /**< Channel 2 User Ready   */
    using USRRDY3   = regbits< type,  3,  1 >;  /**< Channel 3 User Ready   */
    using USRRDY4   = regbits< type,  4,  1 >;  /**< Channel 4 User Ready   */
    using USRRDY5   = regbits< type,  5,  1 >;  /**< Channel 5 User Ready   */
    using USRRDY6   = regbits< type,  6,  1 >;  /**< Channel 6 User Ready   */
    using USRRDY7   = regbits< type,  7,  1 >;  /**< Channel 7 User Ready   */
    using CHBUSY0   = regbits< type,  8,  1 >;  /**< Channel 0 Busy         */
    using CHBUSY1   = regbits< type,  9,  1 >;  /**< Channel 1 Busy         */
    using CHBUSY2   = regbits< type, 10,  1 >;  /**< Channel 2 Busy         */
    using CHBUSY3   = regbits< type, 11,  1 >;  /**< Channel 3 Busy         */
    using CHBUSY4   = regbits< type, 12,  1 >;  /**< Channel 4 Busy         */
    using CHBUSY5   = regbits< type, 13,  1 >;  /**< Channel 5 Busy         */
    using CHBUSY6   = regbits< type, 14,  1 >;  /**< Channel 6 Busy         */
    using CHBUSY7   = regbits< type, 15,  1 >;  /**< Channel 7 Busy         */
    using USRRDY8   = regbits< type, 16,  1 >;  /**< Channel 8 User Ready   */
    using USRRDY9   = regbits< type, 17,  1 >;  /**< Channel 9 User Ready   */
    using USRRDY10  = regbits< type, 18,  1 >;  /**< Channel 10 User Ready  */
    using USRRDY11  = regbits< type, 19,  1 >;  /**< Channel 11 User Ready  */
    using CHBUSY8   = regbits< type, 24,  1 >;  /**< Channel 8 Busy         */
    using CHBUSY9   = regbits< type, 25,  1 >;  /**< Channel 9 Busy         */
    using CHBUSY10  = regbits< type, 26,  1 >;  /**< Channel 10 Busy        */
    using CHBUSY11  = regbits< type, 27,  1 >;  /**< Channel 11 Busy        */
  };

  /**
   * Control
   */
  struct CTRL
  : public reg< uint8_t, base_addr + 0x00, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x00, wo, 0 >;

    using SWRST    = regbits< type,  0,  1 >;  /**< Software Reset          */
    using GCLKREQ  = regbits< type,  4,  1 >;  /**< Generic Clock Requests  */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVR0   = regbits< type,  0,  1 >;  /**< Channel 0 Overrun Interrupt Enable           */
    using OVR1   = regbits< type,  1,  1 >;  /**< Channel 1 Overrun Interrupt Enable           */
    using OVR2   = regbits< type,  2,  1 >;  /**< Channel 2 Overrun Interrupt Enable           */
    using OVR3   = regbits< type,  3,  1 >;  /**< Channel 3 Overrun Interrupt Enable           */
    using OVR4   = regbits< type,  4,  1 >;  /**< Channel 4 Overrun Interrupt Enable           */
    using OVR5   = regbits< type,  5,  1 >;  /**< Channel 5 Overrun Interrupt Enable           */
    using OVR6   = regbits< type,  6,  1 >;  /**< Channel 6 Overrun Interrupt Enable           */
    using OVR7   = regbits< type,  7,  1 >;  /**< Channel 7 Overrun Interrupt Enable           */
    using EVD0   = regbits< type,  8,  1 >;  /**< Channel 0 Event Detection Interrupt Enable   */
    using EVD1   = regbits< type,  9,  1 >;  /**< Channel 1 Event Detection Interrupt Enable   */
    using EVD2   = regbits< type, 10,  1 >;  /**< Channel 2 Event Detection Interrupt Enable   */
    using EVD3   = regbits< type, 11,  1 >;  /**< Channel 3 Event Detection Interrupt Enable   */
    using EVD4   = regbits< type, 12,  1 >;  /**< Channel 4 Event Detection Interrupt Enable   */
    using EVD5   = regbits< type, 13,  1 >;  /**< Channel 5 Event Detection Interrupt Enable   */
    using EVD6   = regbits< type, 14,  1 >;  /**< Channel 6 Event Detection Interrupt Enable   */
    using EVD7   = regbits< type, 15,  1 >;  /**< Channel 7 Event Detection Interrupt Enable   */
    using OVR8   = regbits< type, 16,  1 >;  /**< Channel 8 Overrun Interrupt Enable           */
    using OVR9   = regbits< type, 17,  1 >;  /**< Channel 9 Overrun Interrupt Enable           */
    using OVR10  = regbits< type, 18,  1 >;  /**< Channel 10 Overrun Interrupt Enable          */
    using OVR11  = regbits< type, 19,  1 >;  /**< Channel 11 Overrun Interrupt Enable          */
    using EVD8   = regbits< type, 24,  1 >;  /**< Channel 8 Event Detection Interrupt Enable   */
    using EVD9   = regbits< type, 25,  1 >;  /**< Channel 9 Event Detection Interrupt Enable   */
    using EVD10  = regbits< type, 26,  1 >;  /**< Channel 10 Event Detection Interrupt Enable  */
    using EVD11  = regbits< type, 27,  1 >;  /**< Channel 11 Event Detection Interrupt Enable  */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVR0   = regbits< type,  0,  1 >;  /**< Channel 0 Overrun Interrupt Enable           */
    using OVR1   = regbits< type,  1,  1 >;  /**< Channel 1 Overrun Interrupt Enable           */
    using OVR2   = regbits< type,  2,  1 >;  /**< Channel 2 Overrun Interrupt Enable           */
    using OVR3   = regbits< type,  3,  1 >;  /**< Channel 3 Overrun Interrupt Enable           */
    using OVR4   = regbits< type,  4,  1 >;  /**< Channel 4 Overrun Interrupt Enable           */
    using OVR5   = regbits< type,  5,  1 >;  /**< Channel 5 Overrun Interrupt Enable           */
    using OVR6   = regbits< type,  6,  1 >;  /**< Channel 6 Overrun Interrupt Enable           */
    using OVR7   = regbits< type,  7,  1 >;  /**< Channel 7 Overrun Interrupt Enable           */
    using EVD0   = regbits< type,  8,  1 >;  /**< Channel 0 Event Detection Interrupt Enable   */
    using EVD1   = regbits< type,  9,  1 >;  /**< Channel 1 Event Detection Interrupt Enable   */
    using EVD2   = regbits< type, 10,  1 >;  /**< Channel 2 Event Detection Interrupt Enable   */
    using EVD3   = regbits< type, 11,  1 >;  /**< Channel 3 Event Detection Interrupt Enable   */
    using EVD4   = regbits< type, 12,  1 >;  /**< Channel 4 Event Detection Interrupt Enable   */
    using EVD5   = regbits< type, 13,  1 >;  /**< Channel 5 Event Detection Interrupt Enable   */
    using EVD6   = regbits< type, 14,  1 >;  /**< Channel 6 Event Detection Interrupt Enable   */
    using EVD7   = regbits< type, 15,  1 >;  /**< Channel 7 Event Detection Interrupt Enable   */
    using OVR8   = regbits< type, 16,  1 >;  /**< Channel 8 Overrun Interrupt Enable           */
    using OVR9   = regbits< type, 17,  1 >;  /**< Channel 9 Overrun Interrupt Enable           */
    using OVR10  = regbits< type, 18,  1 >;  /**< Channel 10 Overrun Interrupt Enable          */
    using OVR11  = regbits< type, 19,  1 >;  /**< Channel 11 Overrun Interrupt Enable          */
    using EVD8   = regbits< type, 24,  1 >;  /**< Channel 8 Event Detection Interrupt Enable   */
    using EVD9   = regbits< type, 25,  1 >;  /**< Channel 9 Event Detection Interrupt Enable   */
    using EVD10  = regbits< type, 26,  1 >;  /**< Channel 10 Event Detection Interrupt Enable  */
    using EVD11  = regbits< type, 27,  1 >;  /**< Channel 11 Event Detection Interrupt Enable  */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVR0   = regbits< type,  0,  1 >;  /**< Channel 0 Overrun           */
    using OVR1   = regbits< type,  1,  1 >;  /**< Channel 1 Overrun           */
    using OVR2   = regbits< type,  2,  1 >;  /**< Channel 2 Overrun           */
    using OVR3   = regbits< type,  3,  1 >;  /**< Channel 3 Overrun           */
    using OVR4   = regbits< type,  4,  1 >;  /**< Channel 4 Overrun           */
    using OVR5   = regbits< type,  5,  1 >;  /**< Channel 5 Overrun           */
    using OVR6   = regbits< type,  6,  1 >;  /**< Channel 6 Overrun           */
    using OVR7   = regbits< type,  7,  1 >;  /**< Channel 7 Overrun           */
    using EVD0   = regbits< type,  8,  1 >;  /**< Channel 0 Event Detection   */
    using EVD1   = regbits< type,  9,  1 >;  /**< Channel 1 Event Detection   */
    using EVD2   = regbits< type, 10,  1 >;  /**< Channel 2 Event Detection   */
    using EVD3   = regbits< type, 11,  1 >;  /**< Channel 3 Event Detection   */
    using EVD4   = regbits< type, 12,  1 >;  /**< Channel 4 Event Detection   */
    using EVD5   = regbits< type, 13,  1 >;  /**< Channel 5 Event Detection   */
    using EVD6   = regbits< type, 14,  1 >;  /**< Channel 6 Event Detection   */
    using EVD7   = regbits< type, 15,  1 >;  /**< Channel 7 Event Detection   */
    using OVR8   = regbits< type, 16,  1 >;  /**< Channel 8 Overrun           */
    using OVR9   = regbits< type, 17,  1 >;  /**< Channel 9 Overrun           */
    using OVR10  = regbits< type, 18,  1 >;  /**< Channel 10 Overrun          */
    using OVR11  = regbits< type, 19,  1 >;  /**< Channel 11 Overrun          */
    using EVD8   = regbits< type, 24,  1 >;  /**< Channel 8 Event Detection   */
    using EVD9   = regbits< type, 25,  1 >;  /**< Channel 9 Event Detection   */
    using EVD10  = regbits< type, 26,  1 >;  /**< Channel 10 Event Detection  */
    using EVD11  = regbits< type, 27,  1 >;  /**< Channel 11 Event Detection  */
  };

  /**
   * User Multiplexer
   */
  struct USER
  : public reg< uint16_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: USER
    using USER_    = regbits< type,  0,  5 >;  /**< User Multiplexer Selection  */
    using CHANNEL  = regbits< type,  8,  5 >;  /**< Channel Event Selection     */
  };
};
} // namespace mptl

#endif // ARCH_REG_EVSYS_HPP_INCLUDED
