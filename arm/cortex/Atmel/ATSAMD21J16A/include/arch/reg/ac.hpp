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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21J16A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21J16A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21J16A device: Cortex-M0+ Microcontroller with 64KB Flash, 8KB SRAM, 64-pin package (refer to http://www.atmel.com/devices/SAMD21J16A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AC_HPP_INCLUDED
#define ARCH_REG_AC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog Comparators
 */
struct AC
{
  static constexpr reg_addr_t base_addr = 0x42004400;

  /**
   * Comparator Control n
   */
  struct COMPCTRL%s
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENABLE  = regbits< type,  0,  1 >;  /**< Enable                        */
    using SINGLE  = regbits< type,  1,  1 >;  /**< Single-Shot Mode              */
    using SPEED   = regbits< type,  2,  2 >;  /**< Speed Selection               */
    using INTSEL  = regbits< type,  5,  2 >;  /**< Interrupt Selection           */
    using MUXNEG  = regbits< type,  8,  3 >;  /**< Negative Input Mux Selection  */
    using MUXPOS  = regbits< type, 12,  2 >;  /**< Positive Input Mux Selection  */
    using SWAP    = regbits< type, 15,  1 >;  /**< Swap Inputs and Invert        */
    using OUT     = regbits< type, 16,  2 >;  /**< Output                        */
    using HYST    = regbits< type, 19,  1 >;  /**< Hysteresis Enable             */
    using FLEN    = regbits< type, 24,  3 >;  /**< Filter Length                 */
  };

  /**
   * Control A
   */
  struct CTRLA
  : public reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST     = regbits< type,  0,  1 >;  /**< Software Reset  */
    using ENABLE    = regbits< type,  1,  1 >;  /**< Enable          */
    using RUNSTDBY  = regbits< type,  2,  1 >;  /**< Run in Standby  */
    using LPMUX     = regbits< type,  7,  1 >;  /**< Low-Power Mux   */
  };

  /**
   * Control B
   */
  struct CTRLB
  : public reg< uint8_t, base_addr + 0x01, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x01, wo, 0 >;

    using START0  = regbits< type,  0,  1 >;  /**< Comparator 0 Start Comparison  */
    using START1  = regbits< type,  1,  1 >;  /**< Comparator 1 Start Comparison  */
  };

  /**
   * Event Control
   */
  struct EVCTRL
  : public reg< uint16_t, base_addr + 0x02, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x02, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMPEO0  = regbits< type,  0,  1 >;  /**< Comparator 0 Event Output Enable  */
    using COMPEO1  = regbits< type,  1,  1 >;  /**< Comparator 1 Event Output Enable  */
    using WINEO0   = regbits< type,  4,  1 >;  /**< Window 0 Event Output Enable      */
    using COMPEI0  = regbits< type,  8,  1 >;  /**< Comparator 0 Event Input          */
    using COMPEI1  = regbits< type,  9,  1 >;  /**< Comparator 1 Event Input          */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint8_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP0  = regbits< type,  0,  1 >;  /**< Comparator 0 Interrupt Enable  */
    using COMP1  = regbits< type,  1,  1 >;  /**< Comparator 1 Interrupt Enable  */
    using WIN0   = regbits< type,  4,  1 >;  /**< Window 0 Interrupt Enable      */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint8_t, base_addr + 0x05, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x05, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP0  = regbits< type,  0,  1 >;  /**< Comparator 0 Interrupt Enable  */
    using COMP1  = regbits< type,  1,  1 >;  /**< Comparator 1 Interrupt Enable  */
    using WIN0   = regbits< type,  4,  1 >;  /**< Window 0 Interrupt Enable      */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint8_t, base_addr + 0x06, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x06, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMP0  = regbits< type,  0,  1 >;  /**< Comparator 0  */
    using COMP1  = regbits< type,  1,  1 >;  /**< Comparator 1  */
    using WIN0   = regbits< type,  4,  1 >;  /**< Window 0      */
  };

  /**
   * Scaler n
   */
  struct SCALER%s
  : public reg< uint8_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using VALUE  = regbits< type,  0,  6 >;  /**< Scaler Value  */
  };

  /**
   * Status A
   */
  struct STATUSA
  : public reg< uint8_t, base_addr + 0x08, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x08, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using STATE0   = regbits< type,  0,  1 >;  /**< Comparator 0 Current State  */
    using STATE1   = regbits< type,  1,  1 >;  /**< Comparator 1 Current State  */
    using WSTATE0  = regbits< type,  4,  2 >;  /**< Window 0 Current State      */
  };

  /**
   * Status B
   */
  struct STATUSB
  : public reg< uint8_t, base_addr + 0x09, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x09, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using READY0    = regbits< type,  0,  1 >;  /**< Comparator 0 Ready    */
    using READY1    = regbits< type,  1,  1 >;  /**< Comparator 1 Ready    */
    using SYNCBUSY  = regbits< type,  7,  1 >;  /**< Synchronization Busy  */
  };

  /**
   * Status C
   */
  struct STATUSC
  : public reg< uint8_t, base_addr + 0x0a, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0a, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using STATE0   = regbits< type,  0,  1 >;  /**< Comparator 0 Current State  */
    using STATE1   = regbits< type,  1,  1 >;  /**< Comparator 1 Current State  */
    using WSTATE0  = regbits< type,  4,  2 >;  /**< Window 0 Current State      */
  };

  /**
   * Window Control
   */
  struct WINCTRL
  : public reg< uint8_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WEN0      = regbits< type,  0,  1 >;  /**< Window 0 Mode Enable          */
    using WINTSEL0  = regbits< type,  1,  2 >;  /**< Window 0 Interrupt Selection  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AC_HPP_INCLUDED
