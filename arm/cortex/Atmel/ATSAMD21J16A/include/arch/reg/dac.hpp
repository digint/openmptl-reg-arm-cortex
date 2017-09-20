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

#ifndef ARCH_REG_DAC_HPP_INCLUDED
#define ARCH_REG_DAC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Digital Analog Converter
 */
struct DAC
{
  static constexpr reg_addr_t base_addr = 0x42004800;

  /**
   * Control A
   */
  struct CTRLA
  : public reg< uint8_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST     = regbits< type,  0,  1 >;  /**< Software Reset  */
    using ENABLE    = regbits< type,  1,  1 >;  /**< Enable          */
    using RUNSTDBY  = regbits< type,  2,  1 >;  /**< Run in Standby  */
  };

  /**
   * Control B
   */
  struct CTRLB
  : public reg< uint8_t, base_addr + 0x1, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EOEN     = regbits< type,  0,  1 >;  /**< External Output Enable           */
    using IOEN     = regbits< type,  1,  1 >;  /**< Internal Output Enable           */
    using LEFTADJ  = regbits< type,  2,  1 >;  /**< Left Adjusted Data               */
    using VPD      = regbits< type,  3,  1 >;  /**< Voltage Pump Disable             */
    using BDWP     = regbits< type,  4,  1 >;  /**< Bypass DATABUF Write Protection  */
    using REFSEL   = regbits< type,  6,  2 >;  /**< Reference Selection              */
  };

  /**
   * Data
   */
  struct DATA
  : public reg< uint16_t, base_addr + 0x8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DATA
    using DATA_ = regbits< type,  0, 16 >;  /**< Data value to be converted  */
  };

  /**
   * Data Buffer
   */
  struct DATABUF
  : public reg< uint16_t, base_addr + 0xc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DATABUF
    using DATABUF_ = regbits< type,  0, 16 >;  /**< Data Buffer  */
  };

  /**
   * Event Control
   */
  struct EVCTRL
  : public reg< uint8_t, base_addr + 0x2, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STARTEI  = regbits< type,  0,  1 >;  /**< Start Conversion Event Input    */
    using EMPTYEO  = regbits< type,  1,  1 >;  /**< Data Buffer Empty Event Output  */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint8_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UNDERRUN  = regbits< type,  0,  1 >;  /**< Underrun Interrupt Enable               */
    using EMPTY     = regbits< type,  1,  1 >;  /**< Data Buffer Empty Interrupt Enable      */
    using SYNCRDY   = regbits< type,  2,  1 >;  /**< Synchronization Ready Interrupt Enable  */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint8_t, base_addr + 0x5, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UNDERRUN  = regbits< type,  0,  1 >;  /**< Underrun Interrupt Enable               */
    using EMPTY     = regbits< type,  1,  1 >;  /**< Data Buffer Empty Interrupt Enable      */
    using SYNCRDY   = regbits< type,  2,  1 >;  /**< Synchronization Ready Interrupt Enable  */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint8_t, base_addr + 0x6, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UNDERRUN  = regbits< type,  0,  1 >;  /**< Underrun               */
    using EMPTY     = regbits< type,  1,  1 >;  /**< Data Buffer Empty      */
    using SYNCRDY   = regbits< type,  2,  1 >;  /**< Synchronization Ready  */
  };

  /**
   * Status
   */
  struct STATUS
  : public reg< uint8_t, base_addr + 0x7, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x7, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SYNCBUSY  = regbits< type,  7,  1 >;  /**< Synchronization Busy Status  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC_HPP_INCLUDED
