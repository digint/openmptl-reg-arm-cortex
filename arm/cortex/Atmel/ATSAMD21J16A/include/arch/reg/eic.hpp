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

#ifndef ARCH_REG_EIC_HPP_INCLUDED
#define ARCH_REG_EIC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * External Interrupt Controller
 */
struct EIC
{
  static constexpr reg_addr_t base_addr = 0x40001800;

  /**
   * Configuration n
   */
  struct CONFIG%s
  : public reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SENSE0   = regbits< type,  0,  3 >;  /**< Input Sense n Configuration  */
    using FILTEN0  = regbits< type,  3,  1 >;  /**< Filter n Enable              */
    using SENSE1   = regbits< type,  4,  3 >;  /**< Input Sense 1 Configuration  */
    using FILTEN1  = regbits< type,  7,  1 >;  /**< Filter 1 Enable              */
    using SENSE2   = regbits< type,  8,  3 >;  /**< Input Sense 2 Configuration  */
    using FILTEN2  = regbits< type, 11,  1 >;  /**< Filter 2 Enable              */
    using SENSE3   = regbits< type, 12,  3 >;  /**< Input Sense 3 Configuration  */
    using FILTEN3  = regbits< type, 15,  1 >;  /**< Filter 3 Enable              */
    using SENSE4   = regbits< type, 16,  3 >;  /**< Input Sense 4 Configuration  */
    using FILTEN4  = regbits< type, 19,  1 >;  /**< Filter 4 Enable              */
    using SENSE5   = regbits< type, 20,  3 >;  /**< Input Sense 5 Configuration  */
    using FILTEN5  = regbits< type, 23,  1 >;  /**< Filter 5 Enable              */
    using SENSE6   = regbits< type, 24,  3 >;  /**< Input Sense 6 Configuration  */
    using FILTEN6  = regbits< type, 27,  1 >;  /**< Filter 6 Enable              */
    using SENSE7   = regbits< type, 28,  3 >;  /**< Input Sense 7 Configuration  */
    using FILTEN7  = regbits< type, 31,  1 >;  /**< Filter 7 Enable              */
  };

  /**
   * Control
   */
  struct CTRL
  : public reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST   = regbits< type,  0,  1 >;  /**< Software Reset  */
    using ENABLE  = regbits< type,  1,  1 >;  /**< Enable          */
  };

  /**
   * Event Control
   */
  struct EVCTRL
  : public reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTINTEO0   = regbits< type,  0,  1 >;  /**< External Interrupt 0 Event Output Enable   */
    using EXTINTEO1   = regbits< type,  1,  1 >;  /**< External Interrupt 1 Event Output Enable   */
    using EXTINTEO2   = regbits< type,  2,  1 >;  /**< External Interrupt 2 Event Output Enable   */
    using EXTINTEO3   = regbits< type,  3,  1 >;  /**< External Interrupt 3 Event Output Enable   */
    using EXTINTEO4   = regbits< type,  4,  1 >;  /**< External Interrupt 4 Event Output Enable   */
    using EXTINTEO5   = regbits< type,  5,  1 >;  /**< External Interrupt 5 Event Output Enable   */
    using EXTINTEO6   = regbits< type,  6,  1 >;  /**< External Interrupt 6 Event Output Enable   */
    using EXTINTEO7   = regbits< type,  7,  1 >;  /**< External Interrupt 7 Event Output Enable   */
    using EXTINTEO8   = regbits< type,  8,  1 >;  /**< External Interrupt 8 Event Output Enable   */
    using EXTINTEO9   = regbits< type,  9,  1 >;  /**< External Interrupt 9 Event Output Enable   */
    using EXTINTEO10  = regbits< type, 10,  1 >;  /**< External Interrupt 10 Event Output Enable  */
    using EXTINTEO11  = regbits< type, 11,  1 >;  /**< External Interrupt 11 Event Output Enable  */
    using EXTINTEO12  = regbits< type, 12,  1 >;  /**< External Interrupt 12 Event Output Enable  */
    using EXTINTEO13  = regbits< type, 13,  1 >;  /**< External Interrupt 13 Event Output Enable  */
    using EXTINTEO14  = regbits< type, 14,  1 >;  /**< External Interrupt 14 Event Output Enable  */
    using EXTINTEO15  = regbits< type, 15,  1 >;  /**< External Interrupt 15 Event Output Enable  */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTINT0   = regbits< type,  0,  1 >;  /**< External Interrupt 0 Enable   */
    using EXTINT1   = regbits< type,  1,  1 >;  /**< External Interrupt 1 Enable   */
    using EXTINT2   = regbits< type,  2,  1 >;  /**< External Interrupt 2 Enable   */
    using EXTINT3   = regbits< type,  3,  1 >;  /**< External Interrupt 3 Enable   */
    using EXTINT4   = regbits< type,  4,  1 >;  /**< External Interrupt 4 Enable   */
    using EXTINT5   = regbits< type,  5,  1 >;  /**< External Interrupt 5 Enable   */
    using EXTINT6   = regbits< type,  6,  1 >;  /**< External Interrupt 6 Enable   */
    using EXTINT7   = regbits< type,  7,  1 >;  /**< External Interrupt 7 Enable   */
    using EXTINT8   = regbits< type,  8,  1 >;  /**< External Interrupt 8 Enable   */
    using EXTINT9   = regbits< type,  9,  1 >;  /**< External Interrupt 9 Enable   */
    using EXTINT10  = regbits< type, 10,  1 >;  /**< External Interrupt 10 Enable  */
    using EXTINT11  = regbits< type, 11,  1 >;  /**< External Interrupt 11 Enable  */
    using EXTINT12  = regbits< type, 12,  1 >;  /**< External Interrupt 12 Enable  */
    using EXTINT13  = regbits< type, 13,  1 >;  /**< External Interrupt 13 Enable  */
    using EXTINT14  = regbits< type, 14,  1 >;  /**< External Interrupt 14 Enable  */
    using EXTINT15  = regbits< type, 15,  1 >;  /**< External Interrupt 15 Enable  */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTINT0   = regbits< type,  0,  1 >;  /**< External Interrupt 0 Enable   */
    using EXTINT1   = regbits< type,  1,  1 >;  /**< External Interrupt 1 Enable   */
    using EXTINT2   = regbits< type,  2,  1 >;  /**< External Interrupt 2 Enable   */
    using EXTINT3   = regbits< type,  3,  1 >;  /**< External Interrupt 3 Enable   */
    using EXTINT4   = regbits< type,  4,  1 >;  /**< External Interrupt 4 Enable   */
    using EXTINT5   = regbits< type,  5,  1 >;  /**< External Interrupt 5 Enable   */
    using EXTINT6   = regbits< type,  6,  1 >;  /**< External Interrupt 6 Enable   */
    using EXTINT7   = regbits< type,  7,  1 >;  /**< External Interrupt 7 Enable   */
    using EXTINT8   = regbits< type,  8,  1 >;  /**< External Interrupt 8 Enable   */
    using EXTINT9   = regbits< type,  9,  1 >;  /**< External Interrupt 9 Enable   */
    using EXTINT10  = regbits< type, 10,  1 >;  /**< External Interrupt 10 Enable  */
    using EXTINT11  = regbits< type, 11,  1 >;  /**< External Interrupt 11 Enable  */
    using EXTINT12  = regbits< type, 12,  1 >;  /**< External Interrupt 12 Enable  */
    using EXTINT13  = regbits< type, 13,  1 >;  /**< External Interrupt 13 Enable  */
    using EXTINT14  = regbits< type, 14,  1 >;  /**< External Interrupt 14 Enable  */
    using EXTINT15  = regbits< type, 15,  1 >;  /**< External Interrupt 15 Enable  */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTINT0   = regbits< type,  0,  1 >;  /**< External Interrupt 0   */
    using EXTINT1   = regbits< type,  1,  1 >;  /**< External Interrupt 1   */
    using EXTINT2   = regbits< type,  2,  1 >;  /**< External Interrupt 2   */
    using EXTINT3   = regbits< type,  3,  1 >;  /**< External Interrupt 3   */
    using EXTINT4   = regbits< type,  4,  1 >;  /**< External Interrupt 4   */
    using EXTINT5   = regbits< type,  5,  1 >;  /**< External Interrupt 5   */
    using EXTINT6   = regbits< type,  6,  1 >;  /**< External Interrupt 6   */
    using EXTINT7   = regbits< type,  7,  1 >;  /**< External Interrupt 7   */
    using EXTINT8   = regbits< type,  8,  1 >;  /**< External Interrupt 8   */
    using EXTINT9   = regbits< type,  9,  1 >;  /**< External Interrupt 9   */
    using EXTINT10  = regbits< type, 10,  1 >;  /**< External Interrupt 10  */
    using EXTINT11  = regbits< type, 11,  1 >;  /**< External Interrupt 11  */
    using EXTINT12  = regbits< type, 12,  1 >;  /**< External Interrupt 12  */
    using EXTINT13  = regbits< type, 13,  1 >;  /**< External Interrupt 13  */
    using EXTINT14  = regbits< type, 14,  1 >;  /**< External Interrupt 14  */
    using EXTINT15  = regbits< type, 15,  1 >;  /**< External Interrupt 15  */
  };

  /**
   * Non-Maskable Interrupt Control
   */
  struct NMICTRL
  : public reg< uint8_t, base_addr + 0x02, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x02, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NMISENSE   = regbits< type,  0,  3 >;  /**< Non-Maskable Interrupt Sense          */
    using NMIFILTEN  = regbits< type,  3,  1 >;  /**< Non-Maskable Interrupt Filter Enable  */
  };

  /**
   * Non-Maskable Interrupt Flag Status and Clear
   */
  struct NMIFLAG
  : public reg< uint8_t, base_addr + 0x03, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x03, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NMI  = regbits< type,  0,  1 >;  /**< Non-Maskable Interrupt  */
  };

  /**
   * Status
   */
  struct STATUS
  : public reg< uint8_t, base_addr + 0x01, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x01, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SYNCBUSY  = regbits< type,  7,  1 >;  /**< Synchronization Busy  */
  };

  /**
   * Wake-Up Enable
   */
  struct WAKEUP
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WAKEUPEN0   = regbits< type,  0,  1 >;  /**< External Interrupt 0 Wake-up Enable   */
    using WAKEUPEN1   = regbits< type,  1,  1 >;  /**< External Interrupt 1 Wake-up Enable   */
    using WAKEUPEN2   = regbits< type,  2,  1 >;  /**< External Interrupt 2 Wake-up Enable   */
    using WAKEUPEN3   = regbits< type,  3,  1 >;  /**< External Interrupt 3 Wake-up Enable   */
    using WAKEUPEN4   = regbits< type,  4,  1 >;  /**< External Interrupt 4 Wake-up Enable   */
    using WAKEUPEN5   = regbits< type,  5,  1 >;  /**< External Interrupt 5 Wake-up Enable   */
    using WAKEUPEN6   = regbits< type,  6,  1 >;  /**< External Interrupt 6 Wake-up Enable   */
    using WAKEUPEN7   = regbits< type,  7,  1 >;  /**< External Interrupt 7 Wake-up Enable   */
    using WAKEUPEN8   = regbits< type,  8,  1 >;  /**< External Interrupt 8 Wake-up Enable   */
    using WAKEUPEN9   = regbits< type,  9,  1 >;  /**< External Interrupt 9 Wake-up Enable   */
    using WAKEUPEN10  = regbits< type, 10,  1 >;  /**< External Interrupt 10 Wake-up Enable  */
    using WAKEUPEN11  = regbits< type, 11,  1 >;  /**< External Interrupt 11 Wake-up Enable  */
    using WAKEUPEN12  = regbits< type, 12,  1 >;  /**< External Interrupt 12 Wake-up Enable  */
    using WAKEUPEN13  = regbits< type, 13,  1 >;  /**< External Interrupt 13 Wake-up Enable  */
    using WAKEUPEN14  = regbits< type, 14,  1 >;  /**< External Interrupt 14 Wake-up Enable  */
    using WAKEUPEN15  = regbits< type, 15,  1 >;  /**< External Interrupt 15 Wake-up Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EIC_HPP_INCLUDED
