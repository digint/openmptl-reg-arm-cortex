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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G10
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G10 device: ARM926EJ Embedded Microprocessor Unit, 266MHz, LCD, USB, 217 Pins (refer to http://www.atmel.com/devices/SAM9G10.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PIOC_HPP_INCLUDED
#define ARCH_REG_PIOC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Parallel Input/Output Controller C
 */
struct PIOC
{
  static constexpr reg_addr_t base_addr = 0xfffff800;

  /**
   * PIO Enable Register
   */
  struct PER
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< PIO Enable  */
    using P1   = regbits< type,  1,  1 >;  /**< PIO Enable  */
    using P2   = regbits< type,  2,  1 >;  /**< PIO Enable  */
    using P3   = regbits< type,  3,  1 >;  /**< PIO Enable  */
    using P4   = regbits< type,  4,  1 >;  /**< PIO Enable  */
    using P5   = regbits< type,  5,  1 >;  /**< PIO Enable  */
    using P6   = regbits< type,  6,  1 >;  /**< PIO Enable  */
    using P7   = regbits< type,  7,  1 >;  /**< PIO Enable  */
    using P8   = regbits< type,  8,  1 >;  /**< PIO Enable  */
    using P9   = regbits< type,  9,  1 >;  /**< PIO Enable  */
    using P10  = regbits< type, 10,  1 >;  /**< PIO Enable  */
    using P11  = regbits< type, 11,  1 >;  /**< PIO Enable  */
    using P12  = regbits< type, 12,  1 >;  /**< PIO Enable  */
    using P13  = regbits< type, 13,  1 >;  /**< PIO Enable  */
    using P14  = regbits< type, 14,  1 >;  /**< PIO Enable  */
    using P15  = regbits< type, 15,  1 >;  /**< PIO Enable  */
    using P16  = regbits< type, 16,  1 >;  /**< PIO Enable  */
    using P17  = regbits< type, 17,  1 >;  /**< PIO Enable  */
    using P18  = regbits< type, 18,  1 >;  /**< PIO Enable  */
    using P19  = regbits< type, 19,  1 >;  /**< PIO Enable  */
    using P20  = regbits< type, 20,  1 >;  /**< PIO Enable  */
    using P21  = regbits< type, 21,  1 >;  /**< PIO Enable  */
    using P22  = regbits< type, 22,  1 >;  /**< PIO Enable  */
    using P23  = regbits< type, 23,  1 >;  /**< PIO Enable  */
    using P24  = regbits< type, 24,  1 >;  /**< PIO Enable  */
    using P25  = regbits< type, 25,  1 >;  /**< PIO Enable  */
    using P26  = regbits< type, 26,  1 >;  /**< PIO Enable  */
    using P27  = regbits< type, 27,  1 >;  /**< PIO Enable  */
    using P28  = regbits< type, 28,  1 >;  /**< PIO Enable  */
    using P29  = regbits< type, 29,  1 >;  /**< PIO Enable  */
    using P30  = regbits< type, 30,  1 >;  /**< PIO Enable  */
    using P31  = regbits< type, 31,  1 >;  /**< PIO Enable  */
  };

  /**
   * PIO Disable Register
   */
  struct PDR
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< PIO Disable  */
    using P1   = regbits< type,  1,  1 >;  /**< PIO Disable  */
    using P2   = regbits< type,  2,  1 >;  /**< PIO Disable  */
    using P3   = regbits< type,  3,  1 >;  /**< PIO Disable  */
    using P4   = regbits< type,  4,  1 >;  /**< PIO Disable  */
    using P5   = regbits< type,  5,  1 >;  /**< PIO Disable  */
    using P6   = regbits< type,  6,  1 >;  /**< PIO Disable  */
    using P7   = regbits< type,  7,  1 >;  /**< PIO Disable  */
    using P8   = regbits< type,  8,  1 >;  /**< PIO Disable  */
    using P9   = regbits< type,  9,  1 >;  /**< PIO Disable  */
    using P10  = regbits< type, 10,  1 >;  /**< PIO Disable  */
    using P11  = regbits< type, 11,  1 >;  /**< PIO Disable  */
    using P12  = regbits< type, 12,  1 >;  /**< PIO Disable  */
    using P13  = regbits< type, 13,  1 >;  /**< PIO Disable  */
    using P14  = regbits< type, 14,  1 >;  /**< PIO Disable  */
    using P15  = regbits< type, 15,  1 >;  /**< PIO Disable  */
    using P16  = regbits< type, 16,  1 >;  /**< PIO Disable  */
    using P17  = regbits< type, 17,  1 >;  /**< PIO Disable  */
    using P18  = regbits< type, 18,  1 >;  /**< PIO Disable  */
    using P19  = regbits< type, 19,  1 >;  /**< PIO Disable  */
    using P20  = regbits< type, 20,  1 >;  /**< PIO Disable  */
    using P21  = regbits< type, 21,  1 >;  /**< PIO Disable  */
    using P22  = regbits< type, 22,  1 >;  /**< PIO Disable  */
    using P23  = regbits< type, 23,  1 >;  /**< PIO Disable  */
    using P24  = regbits< type, 24,  1 >;  /**< PIO Disable  */
    using P25  = regbits< type, 25,  1 >;  /**< PIO Disable  */
    using P26  = regbits< type, 26,  1 >;  /**< PIO Disable  */
    using P27  = regbits< type, 27,  1 >;  /**< PIO Disable  */
    using P28  = regbits< type, 28,  1 >;  /**< PIO Disable  */
    using P29  = regbits< type, 29,  1 >;  /**< PIO Disable  */
    using P30  = regbits< type, 30,  1 >;  /**< PIO Disable  */
    using P31  = regbits< type, 31,  1 >;  /**< PIO Disable  */
  };

  /**
   * PIO Status Register
   */
  struct PSR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using P0   = regbits< type,  0,  1 >;  /**< PIO Status  */
    using P1   = regbits< type,  1,  1 >;  /**< PIO Status  */
    using P2   = regbits< type,  2,  1 >;  /**< PIO Status  */
    using P3   = regbits< type,  3,  1 >;  /**< PIO Status  */
    using P4   = regbits< type,  4,  1 >;  /**< PIO Status  */
    using P5   = regbits< type,  5,  1 >;  /**< PIO Status  */
    using P6   = regbits< type,  6,  1 >;  /**< PIO Status  */
    using P7   = regbits< type,  7,  1 >;  /**< PIO Status  */
    using P8   = regbits< type,  8,  1 >;  /**< PIO Status  */
    using P9   = regbits< type,  9,  1 >;  /**< PIO Status  */
    using P10  = regbits< type, 10,  1 >;  /**< PIO Status  */
    using P11  = regbits< type, 11,  1 >;  /**< PIO Status  */
    using P12  = regbits< type, 12,  1 >;  /**< PIO Status  */
    using P13  = regbits< type, 13,  1 >;  /**< PIO Status  */
    using P14  = regbits< type, 14,  1 >;  /**< PIO Status  */
    using P15  = regbits< type, 15,  1 >;  /**< PIO Status  */
    using P16  = regbits< type, 16,  1 >;  /**< PIO Status  */
    using P17  = regbits< type, 17,  1 >;  /**< PIO Status  */
    using P18  = regbits< type, 18,  1 >;  /**< PIO Status  */
    using P19  = regbits< type, 19,  1 >;  /**< PIO Status  */
    using P20  = regbits< type, 20,  1 >;  /**< PIO Status  */
    using P21  = regbits< type, 21,  1 >;  /**< PIO Status  */
    using P22  = regbits< type, 22,  1 >;  /**< PIO Status  */
    using P23  = regbits< type, 23,  1 >;  /**< PIO Status  */
    using P24  = regbits< type, 24,  1 >;  /**< PIO Status  */
    using P25  = regbits< type, 25,  1 >;  /**< PIO Status  */
    using P26  = regbits< type, 26,  1 >;  /**< PIO Status  */
    using P27  = regbits< type, 27,  1 >;  /**< PIO Status  */
    using P28  = regbits< type, 28,  1 >;  /**< PIO Status  */
    using P29  = regbits< type, 29,  1 >;  /**< PIO Status  */
    using P30  = regbits< type, 30,  1 >;  /**< PIO Status  */
    using P31  = regbits< type, 31,  1 >;  /**< PIO Status  */
  };

  /**
   * Output Enable Register
   */
  struct OER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Output Enable  */
    using P1   = regbits< type,  1,  1 >;  /**< Output Enable  */
    using P2   = regbits< type,  2,  1 >;  /**< Output Enable  */
    using P3   = regbits< type,  3,  1 >;  /**< Output Enable  */
    using P4   = regbits< type,  4,  1 >;  /**< Output Enable  */
    using P5   = regbits< type,  5,  1 >;  /**< Output Enable  */
    using P6   = regbits< type,  6,  1 >;  /**< Output Enable  */
    using P7   = regbits< type,  7,  1 >;  /**< Output Enable  */
    using P8   = regbits< type,  8,  1 >;  /**< Output Enable  */
    using P9   = regbits< type,  9,  1 >;  /**< Output Enable  */
    using P10  = regbits< type, 10,  1 >;  /**< Output Enable  */
    using P11  = regbits< type, 11,  1 >;  /**< Output Enable  */
    using P12  = regbits< type, 12,  1 >;  /**< Output Enable  */
    using P13  = regbits< type, 13,  1 >;  /**< Output Enable  */
    using P14  = regbits< type, 14,  1 >;  /**< Output Enable  */
    using P15  = regbits< type, 15,  1 >;  /**< Output Enable  */
    using P16  = regbits< type, 16,  1 >;  /**< Output Enable  */
    using P17  = regbits< type, 17,  1 >;  /**< Output Enable  */
    using P18  = regbits< type, 18,  1 >;  /**< Output Enable  */
    using P19  = regbits< type, 19,  1 >;  /**< Output Enable  */
    using P20  = regbits< type, 20,  1 >;  /**< Output Enable  */
    using P21  = regbits< type, 21,  1 >;  /**< Output Enable  */
    using P22  = regbits< type, 22,  1 >;  /**< Output Enable  */
    using P23  = regbits< type, 23,  1 >;  /**< Output Enable  */
    using P24  = regbits< type, 24,  1 >;  /**< Output Enable  */
    using P25  = regbits< type, 25,  1 >;  /**< Output Enable  */
    using P26  = regbits< type, 26,  1 >;  /**< Output Enable  */
    using P27  = regbits< type, 27,  1 >;  /**< Output Enable  */
    using P28  = regbits< type, 28,  1 >;  /**< Output Enable  */
    using P29  = regbits< type, 29,  1 >;  /**< Output Enable  */
    using P30  = regbits< type, 30,  1 >;  /**< Output Enable  */
    using P31  = regbits< type, 31,  1 >;  /**< Output Enable  */
  };

  /**
   * Output Disable Register
   */
  struct ODR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Output Disable  */
    using P1   = regbits< type,  1,  1 >;  /**< Output Disable  */
    using P2   = regbits< type,  2,  1 >;  /**< Output Disable  */
    using P3   = regbits< type,  3,  1 >;  /**< Output Disable  */
    using P4   = regbits< type,  4,  1 >;  /**< Output Disable  */
    using P5   = regbits< type,  5,  1 >;  /**< Output Disable  */
    using P6   = regbits< type,  6,  1 >;  /**< Output Disable  */
    using P7   = regbits< type,  7,  1 >;  /**< Output Disable  */
    using P8   = regbits< type,  8,  1 >;  /**< Output Disable  */
    using P9   = regbits< type,  9,  1 >;  /**< Output Disable  */
    using P10  = regbits< type, 10,  1 >;  /**< Output Disable  */
    using P11  = regbits< type, 11,  1 >;  /**< Output Disable  */
    using P12  = regbits< type, 12,  1 >;  /**< Output Disable  */
    using P13  = regbits< type, 13,  1 >;  /**< Output Disable  */
    using P14  = regbits< type, 14,  1 >;  /**< Output Disable  */
    using P15  = regbits< type, 15,  1 >;  /**< Output Disable  */
    using P16  = regbits< type, 16,  1 >;  /**< Output Disable  */
    using P17  = regbits< type, 17,  1 >;  /**< Output Disable  */
    using P18  = regbits< type, 18,  1 >;  /**< Output Disable  */
    using P19  = regbits< type, 19,  1 >;  /**< Output Disable  */
    using P20  = regbits< type, 20,  1 >;  /**< Output Disable  */
    using P21  = regbits< type, 21,  1 >;  /**< Output Disable  */
    using P22  = regbits< type, 22,  1 >;  /**< Output Disable  */
    using P23  = regbits< type, 23,  1 >;  /**< Output Disable  */
    using P24  = regbits< type, 24,  1 >;  /**< Output Disable  */
    using P25  = regbits< type, 25,  1 >;  /**< Output Disable  */
    using P26  = regbits< type, 26,  1 >;  /**< Output Disable  */
    using P27  = regbits< type, 27,  1 >;  /**< Output Disable  */
    using P28  = regbits< type, 28,  1 >;  /**< Output Disable  */
    using P29  = regbits< type, 29,  1 >;  /**< Output Disable  */
    using P30  = regbits< type, 30,  1 >;  /**< Output Disable  */
    using P31  = regbits< type, 31,  1 >;  /**< Output Disable  */
  };

  /**
   * Output Status Register
   */
  struct OSR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Output Status  */
    using P1   = regbits< type,  1,  1 >;  /**< Output Status  */
    using P2   = regbits< type,  2,  1 >;  /**< Output Status  */
    using P3   = regbits< type,  3,  1 >;  /**< Output Status  */
    using P4   = regbits< type,  4,  1 >;  /**< Output Status  */
    using P5   = regbits< type,  5,  1 >;  /**< Output Status  */
    using P6   = regbits< type,  6,  1 >;  /**< Output Status  */
    using P7   = regbits< type,  7,  1 >;  /**< Output Status  */
    using P8   = regbits< type,  8,  1 >;  /**< Output Status  */
    using P9   = regbits< type,  9,  1 >;  /**< Output Status  */
    using P10  = regbits< type, 10,  1 >;  /**< Output Status  */
    using P11  = regbits< type, 11,  1 >;  /**< Output Status  */
    using P12  = regbits< type, 12,  1 >;  /**< Output Status  */
    using P13  = regbits< type, 13,  1 >;  /**< Output Status  */
    using P14  = regbits< type, 14,  1 >;  /**< Output Status  */
    using P15  = regbits< type, 15,  1 >;  /**< Output Status  */
    using P16  = regbits< type, 16,  1 >;  /**< Output Status  */
    using P17  = regbits< type, 17,  1 >;  /**< Output Status  */
    using P18  = regbits< type, 18,  1 >;  /**< Output Status  */
    using P19  = regbits< type, 19,  1 >;  /**< Output Status  */
    using P20  = regbits< type, 20,  1 >;  /**< Output Status  */
    using P21  = regbits< type, 21,  1 >;  /**< Output Status  */
    using P22  = regbits< type, 22,  1 >;  /**< Output Status  */
    using P23  = regbits< type, 23,  1 >;  /**< Output Status  */
    using P24  = regbits< type, 24,  1 >;  /**< Output Status  */
    using P25  = regbits< type, 25,  1 >;  /**< Output Status  */
    using P26  = regbits< type, 26,  1 >;  /**< Output Status  */
    using P27  = regbits< type, 27,  1 >;  /**< Output Status  */
    using P28  = regbits< type, 28,  1 >;  /**< Output Status  */
    using P29  = regbits< type, 29,  1 >;  /**< Output Status  */
    using P30  = regbits< type, 30,  1 >;  /**< Output Status  */
    using P31  = regbits< type, 31,  1 >;  /**< Output Status  */
  };

  /**
   * Glitch Input Filter Enable Register
   */
  struct IFER
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Input Filter Enable  */
    using P1   = regbits< type,  1,  1 >;  /**< Input Filter Enable  */
    using P2   = regbits< type,  2,  1 >;  /**< Input Filter Enable  */
    using P3   = regbits< type,  3,  1 >;  /**< Input Filter Enable  */
    using P4   = regbits< type,  4,  1 >;  /**< Input Filter Enable  */
    using P5   = regbits< type,  5,  1 >;  /**< Input Filter Enable  */
    using P6   = regbits< type,  6,  1 >;  /**< Input Filter Enable  */
    using P7   = regbits< type,  7,  1 >;  /**< Input Filter Enable  */
    using P8   = regbits< type,  8,  1 >;  /**< Input Filter Enable  */
    using P9   = regbits< type,  9,  1 >;  /**< Input Filter Enable  */
    using P10  = regbits< type, 10,  1 >;  /**< Input Filter Enable  */
    using P11  = regbits< type, 11,  1 >;  /**< Input Filter Enable  */
    using P12  = regbits< type, 12,  1 >;  /**< Input Filter Enable  */
    using P13  = regbits< type, 13,  1 >;  /**< Input Filter Enable  */
    using P14  = regbits< type, 14,  1 >;  /**< Input Filter Enable  */
    using P15  = regbits< type, 15,  1 >;  /**< Input Filter Enable  */
    using P16  = regbits< type, 16,  1 >;  /**< Input Filter Enable  */
    using P17  = regbits< type, 17,  1 >;  /**< Input Filter Enable  */
    using P18  = regbits< type, 18,  1 >;  /**< Input Filter Enable  */
    using P19  = regbits< type, 19,  1 >;  /**< Input Filter Enable  */
    using P20  = regbits< type, 20,  1 >;  /**< Input Filter Enable  */
    using P21  = regbits< type, 21,  1 >;  /**< Input Filter Enable  */
    using P22  = regbits< type, 22,  1 >;  /**< Input Filter Enable  */
    using P23  = regbits< type, 23,  1 >;  /**< Input Filter Enable  */
    using P24  = regbits< type, 24,  1 >;  /**< Input Filter Enable  */
    using P25  = regbits< type, 25,  1 >;  /**< Input Filter Enable  */
    using P26  = regbits< type, 26,  1 >;  /**< Input Filter Enable  */
    using P27  = regbits< type, 27,  1 >;  /**< Input Filter Enable  */
    using P28  = regbits< type, 28,  1 >;  /**< Input Filter Enable  */
    using P29  = regbits< type, 29,  1 >;  /**< Input Filter Enable  */
    using P30  = regbits< type, 30,  1 >;  /**< Input Filter Enable  */
    using P31  = regbits< type, 31,  1 >;  /**< Input Filter Enable  */
  };

  /**
   * Glitch Input Filter Disable Register
   */
  struct IFDR
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Input Filter Disable  */
    using P1   = regbits< type,  1,  1 >;  /**< Input Filter Disable  */
    using P2   = regbits< type,  2,  1 >;  /**< Input Filter Disable  */
    using P3   = regbits< type,  3,  1 >;  /**< Input Filter Disable  */
    using P4   = regbits< type,  4,  1 >;  /**< Input Filter Disable  */
    using P5   = regbits< type,  5,  1 >;  /**< Input Filter Disable  */
    using P6   = regbits< type,  6,  1 >;  /**< Input Filter Disable  */
    using P7   = regbits< type,  7,  1 >;  /**< Input Filter Disable  */
    using P8   = regbits< type,  8,  1 >;  /**< Input Filter Disable  */
    using P9   = regbits< type,  9,  1 >;  /**< Input Filter Disable  */
    using P10  = regbits< type, 10,  1 >;  /**< Input Filter Disable  */
    using P11  = regbits< type, 11,  1 >;  /**< Input Filter Disable  */
    using P12  = regbits< type, 12,  1 >;  /**< Input Filter Disable  */
    using P13  = regbits< type, 13,  1 >;  /**< Input Filter Disable  */
    using P14  = regbits< type, 14,  1 >;  /**< Input Filter Disable  */
    using P15  = regbits< type, 15,  1 >;  /**< Input Filter Disable  */
    using P16  = regbits< type, 16,  1 >;  /**< Input Filter Disable  */
    using P17  = regbits< type, 17,  1 >;  /**< Input Filter Disable  */
    using P18  = regbits< type, 18,  1 >;  /**< Input Filter Disable  */
    using P19  = regbits< type, 19,  1 >;  /**< Input Filter Disable  */
    using P20  = regbits< type, 20,  1 >;  /**< Input Filter Disable  */
    using P21  = regbits< type, 21,  1 >;  /**< Input Filter Disable  */
    using P22  = regbits< type, 22,  1 >;  /**< Input Filter Disable  */
    using P23  = regbits< type, 23,  1 >;  /**< Input Filter Disable  */
    using P24  = regbits< type, 24,  1 >;  /**< Input Filter Disable  */
    using P25  = regbits< type, 25,  1 >;  /**< Input Filter Disable  */
    using P26  = regbits< type, 26,  1 >;  /**< Input Filter Disable  */
    using P27  = regbits< type, 27,  1 >;  /**< Input Filter Disable  */
    using P28  = regbits< type, 28,  1 >;  /**< Input Filter Disable  */
    using P29  = regbits< type, 29,  1 >;  /**< Input Filter Disable  */
    using P30  = regbits< type, 30,  1 >;  /**< Input Filter Disable  */
    using P31  = regbits< type, 31,  1 >;  /**< Input Filter Disable  */
  };

  /**
   * Glitch Input Filter Status Register
   */
  struct IFSR
  : public reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Input Filer Status  */
    using P1   = regbits< type,  1,  1 >;  /**< Input Filer Status  */
    using P2   = regbits< type,  2,  1 >;  /**< Input Filer Status  */
    using P3   = regbits< type,  3,  1 >;  /**< Input Filer Status  */
    using P4   = regbits< type,  4,  1 >;  /**< Input Filer Status  */
    using P5   = regbits< type,  5,  1 >;  /**< Input Filer Status  */
    using P6   = regbits< type,  6,  1 >;  /**< Input Filer Status  */
    using P7   = regbits< type,  7,  1 >;  /**< Input Filer Status  */
    using P8   = regbits< type,  8,  1 >;  /**< Input Filer Status  */
    using P9   = regbits< type,  9,  1 >;  /**< Input Filer Status  */
    using P10  = regbits< type, 10,  1 >;  /**< Input Filer Status  */
    using P11  = regbits< type, 11,  1 >;  /**< Input Filer Status  */
    using P12  = regbits< type, 12,  1 >;  /**< Input Filer Status  */
    using P13  = regbits< type, 13,  1 >;  /**< Input Filer Status  */
    using P14  = regbits< type, 14,  1 >;  /**< Input Filer Status  */
    using P15  = regbits< type, 15,  1 >;  /**< Input Filer Status  */
    using P16  = regbits< type, 16,  1 >;  /**< Input Filer Status  */
    using P17  = regbits< type, 17,  1 >;  /**< Input Filer Status  */
    using P18  = regbits< type, 18,  1 >;  /**< Input Filer Status  */
    using P19  = regbits< type, 19,  1 >;  /**< Input Filer Status  */
    using P20  = regbits< type, 20,  1 >;  /**< Input Filer Status  */
    using P21  = regbits< type, 21,  1 >;  /**< Input Filer Status  */
    using P22  = regbits< type, 22,  1 >;  /**< Input Filer Status  */
    using P23  = regbits< type, 23,  1 >;  /**< Input Filer Status  */
    using P24  = regbits< type, 24,  1 >;  /**< Input Filer Status  */
    using P25  = regbits< type, 25,  1 >;  /**< Input Filer Status  */
    using P26  = regbits< type, 26,  1 >;  /**< Input Filer Status  */
    using P27  = regbits< type, 27,  1 >;  /**< Input Filer Status  */
    using P28  = regbits< type, 28,  1 >;  /**< Input Filer Status  */
    using P29  = regbits< type, 29,  1 >;  /**< Input Filer Status  */
    using P30  = regbits< type, 30,  1 >;  /**< Input Filer Status  */
    using P31  = regbits< type, 31,  1 >;  /**< Input Filer Status  */
  };

  /**
   * Set Output Data Register
   */
  struct SODR
  : public reg< uint32_t, base_addr + 0x00000030, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Set Output Data  */
    using P1   = regbits< type,  1,  1 >;  /**< Set Output Data  */
    using P2   = regbits< type,  2,  1 >;  /**< Set Output Data  */
    using P3   = regbits< type,  3,  1 >;  /**< Set Output Data  */
    using P4   = regbits< type,  4,  1 >;  /**< Set Output Data  */
    using P5   = regbits< type,  5,  1 >;  /**< Set Output Data  */
    using P6   = regbits< type,  6,  1 >;  /**< Set Output Data  */
    using P7   = regbits< type,  7,  1 >;  /**< Set Output Data  */
    using P8   = regbits< type,  8,  1 >;  /**< Set Output Data  */
    using P9   = regbits< type,  9,  1 >;  /**< Set Output Data  */
    using P10  = regbits< type, 10,  1 >;  /**< Set Output Data  */
    using P11  = regbits< type, 11,  1 >;  /**< Set Output Data  */
    using P12  = regbits< type, 12,  1 >;  /**< Set Output Data  */
    using P13  = regbits< type, 13,  1 >;  /**< Set Output Data  */
    using P14  = regbits< type, 14,  1 >;  /**< Set Output Data  */
    using P15  = regbits< type, 15,  1 >;  /**< Set Output Data  */
    using P16  = regbits< type, 16,  1 >;  /**< Set Output Data  */
    using P17  = regbits< type, 17,  1 >;  /**< Set Output Data  */
    using P18  = regbits< type, 18,  1 >;  /**< Set Output Data  */
    using P19  = regbits< type, 19,  1 >;  /**< Set Output Data  */
    using P20  = regbits< type, 20,  1 >;  /**< Set Output Data  */
    using P21  = regbits< type, 21,  1 >;  /**< Set Output Data  */
    using P22  = regbits< type, 22,  1 >;  /**< Set Output Data  */
    using P23  = regbits< type, 23,  1 >;  /**< Set Output Data  */
    using P24  = regbits< type, 24,  1 >;  /**< Set Output Data  */
    using P25  = regbits< type, 25,  1 >;  /**< Set Output Data  */
    using P26  = regbits< type, 26,  1 >;  /**< Set Output Data  */
    using P27  = regbits< type, 27,  1 >;  /**< Set Output Data  */
    using P28  = regbits< type, 28,  1 >;  /**< Set Output Data  */
    using P29  = regbits< type, 29,  1 >;  /**< Set Output Data  */
    using P30  = regbits< type, 30,  1 >;  /**< Set Output Data  */
    using P31  = regbits< type, 31,  1 >;  /**< Set Output Data  */
  };

  /**
   * Clear Output Data Register
   */
  struct CODR
  : public reg< uint32_t, base_addr + 0x00000034, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Set Output Data  */
    using P1   = regbits< type,  1,  1 >;  /**< Set Output Data  */
    using P2   = regbits< type,  2,  1 >;  /**< Set Output Data  */
    using P3   = regbits< type,  3,  1 >;  /**< Set Output Data  */
    using P4   = regbits< type,  4,  1 >;  /**< Set Output Data  */
    using P5   = regbits< type,  5,  1 >;  /**< Set Output Data  */
    using P6   = regbits< type,  6,  1 >;  /**< Set Output Data  */
    using P7   = regbits< type,  7,  1 >;  /**< Set Output Data  */
    using P8   = regbits< type,  8,  1 >;  /**< Set Output Data  */
    using P9   = regbits< type,  9,  1 >;  /**< Set Output Data  */
    using P10  = regbits< type, 10,  1 >;  /**< Set Output Data  */
    using P11  = regbits< type, 11,  1 >;  /**< Set Output Data  */
    using P12  = regbits< type, 12,  1 >;  /**< Set Output Data  */
    using P13  = regbits< type, 13,  1 >;  /**< Set Output Data  */
    using P14  = regbits< type, 14,  1 >;  /**< Set Output Data  */
    using P15  = regbits< type, 15,  1 >;  /**< Set Output Data  */
    using P16  = regbits< type, 16,  1 >;  /**< Set Output Data  */
    using P17  = regbits< type, 17,  1 >;  /**< Set Output Data  */
    using P18  = regbits< type, 18,  1 >;  /**< Set Output Data  */
    using P19  = regbits< type, 19,  1 >;  /**< Set Output Data  */
    using P20  = regbits< type, 20,  1 >;  /**< Set Output Data  */
    using P21  = regbits< type, 21,  1 >;  /**< Set Output Data  */
    using P22  = regbits< type, 22,  1 >;  /**< Set Output Data  */
    using P23  = regbits< type, 23,  1 >;  /**< Set Output Data  */
    using P24  = regbits< type, 24,  1 >;  /**< Set Output Data  */
    using P25  = regbits< type, 25,  1 >;  /**< Set Output Data  */
    using P26  = regbits< type, 26,  1 >;  /**< Set Output Data  */
    using P27  = regbits< type, 27,  1 >;  /**< Set Output Data  */
    using P28  = regbits< type, 28,  1 >;  /**< Set Output Data  */
    using P29  = regbits< type, 29,  1 >;  /**< Set Output Data  */
    using P30  = regbits< type, 30,  1 >;  /**< Set Output Data  */
    using P31  = regbits< type, 31,  1 >;  /**< Set Output Data  */
  };

  /**
   * Output Data Status Register
   */
  struct ODSR
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using P0   = regbits< type,  0,  1 >;  /**< Output Data Status  */
    using P1   = regbits< type,  1,  1 >;  /**< Output Data Status  */
    using P2   = regbits< type,  2,  1 >;  /**< Output Data Status  */
    using P3   = regbits< type,  3,  1 >;  /**< Output Data Status  */
    using P4   = regbits< type,  4,  1 >;  /**< Output Data Status  */
    using P5   = regbits< type,  5,  1 >;  /**< Output Data Status  */
    using P6   = regbits< type,  6,  1 >;  /**< Output Data Status  */
    using P7   = regbits< type,  7,  1 >;  /**< Output Data Status  */
    using P8   = regbits< type,  8,  1 >;  /**< Output Data Status  */
    using P9   = regbits< type,  9,  1 >;  /**< Output Data Status  */
    using P10  = regbits< type, 10,  1 >;  /**< Output Data Status  */
    using P11  = regbits< type, 11,  1 >;  /**< Output Data Status  */
    using P12  = regbits< type, 12,  1 >;  /**< Output Data Status  */
    using P13  = regbits< type, 13,  1 >;  /**< Output Data Status  */
    using P14  = regbits< type, 14,  1 >;  /**< Output Data Status  */
    using P15  = regbits< type, 15,  1 >;  /**< Output Data Status  */
    using P16  = regbits< type, 16,  1 >;  /**< Output Data Status  */
    using P17  = regbits< type, 17,  1 >;  /**< Output Data Status  */
    using P18  = regbits< type, 18,  1 >;  /**< Output Data Status  */
    using P19  = regbits< type, 19,  1 >;  /**< Output Data Status  */
    using P20  = regbits< type, 20,  1 >;  /**< Output Data Status  */
    using P21  = regbits< type, 21,  1 >;  /**< Output Data Status  */
    using P22  = regbits< type, 22,  1 >;  /**< Output Data Status  */
    using P23  = regbits< type, 23,  1 >;  /**< Output Data Status  */
    using P24  = regbits< type, 24,  1 >;  /**< Output Data Status  */
    using P25  = regbits< type, 25,  1 >;  /**< Output Data Status  */
    using P26  = regbits< type, 26,  1 >;  /**< Output Data Status  */
    using P27  = regbits< type, 27,  1 >;  /**< Output Data Status  */
    using P28  = regbits< type, 28,  1 >;  /**< Output Data Status  */
    using P29  = regbits< type, 29,  1 >;  /**< Output Data Status  */
    using P30  = regbits< type, 30,  1 >;  /**< Output Data Status  */
    using P31  = regbits< type, 31,  1 >;  /**< Output Data Status  */
  };

  /**
   * Pin Data Status Register
   */
  struct PDSR
  : public reg< uint32_t, base_addr + 0x0000003c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using P0   = regbits< type,  0,  1 >;  /**< Output Data Status  */
    using P1   = regbits< type,  1,  1 >;  /**< Output Data Status  */
    using P2   = regbits< type,  2,  1 >;  /**< Output Data Status  */
    using P3   = regbits< type,  3,  1 >;  /**< Output Data Status  */
    using P4   = regbits< type,  4,  1 >;  /**< Output Data Status  */
    using P5   = regbits< type,  5,  1 >;  /**< Output Data Status  */
    using P6   = regbits< type,  6,  1 >;  /**< Output Data Status  */
    using P7   = regbits< type,  7,  1 >;  /**< Output Data Status  */
    using P8   = regbits< type,  8,  1 >;  /**< Output Data Status  */
    using P9   = regbits< type,  9,  1 >;  /**< Output Data Status  */
    using P10  = regbits< type, 10,  1 >;  /**< Output Data Status  */
    using P11  = regbits< type, 11,  1 >;  /**< Output Data Status  */
    using P12  = regbits< type, 12,  1 >;  /**< Output Data Status  */
    using P13  = regbits< type, 13,  1 >;  /**< Output Data Status  */
    using P14  = regbits< type, 14,  1 >;  /**< Output Data Status  */
    using P15  = regbits< type, 15,  1 >;  /**< Output Data Status  */
    using P16  = regbits< type, 16,  1 >;  /**< Output Data Status  */
    using P17  = regbits< type, 17,  1 >;  /**< Output Data Status  */
    using P18  = regbits< type, 18,  1 >;  /**< Output Data Status  */
    using P19  = regbits< type, 19,  1 >;  /**< Output Data Status  */
    using P20  = regbits< type, 20,  1 >;  /**< Output Data Status  */
    using P21  = regbits< type, 21,  1 >;  /**< Output Data Status  */
    using P22  = regbits< type, 22,  1 >;  /**< Output Data Status  */
    using P23  = regbits< type, 23,  1 >;  /**< Output Data Status  */
    using P24  = regbits< type, 24,  1 >;  /**< Output Data Status  */
    using P25  = regbits< type, 25,  1 >;  /**< Output Data Status  */
    using P26  = regbits< type, 26,  1 >;  /**< Output Data Status  */
    using P27  = regbits< type, 27,  1 >;  /**< Output Data Status  */
    using P28  = regbits< type, 28,  1 >;  /**< Output Data Status  */
    using P29  = regbits< type, 29,  1 >;  /**< Output Data Status  */
    using P30  = regbits< type, 30,  1 >;  /**< Output Data Status  */
    using P31  = regbits< type, 31,  1 >;  /**< Output Data Status  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000040, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Input Change Interrupt Enable  */
    using P1   = regbits< type,  1,  1 >;  /**< Input Change Interrupt Enable  */
    using P2   = regbits< type,  2,  1 >;  /**< Input Change Interrupt Enable  */
    using P3   = regbits< type,  3,  1 >;  /**< Input Change Interrupt Enable  */
    using P4   = regbits< type,  4,  1 >;  /**< Input Change Interrupt Enable  */
    using P5   = regbits< type,  5,  1 >;  /**< Input Change Interrupt Enable  */
    using P6   = regbits< type,  6,  1 >;  /**< Input Change Interrupt Enable  */
    using P7   = regbits< type,  7,  1 >;  /**< Input Change Interrupt Enable  */
    using P8   = regbits< type,  8,  1 >;  /**< Input Change Interrupt Enable  */
    using P9   = regbits< type,  9,  1 >;  /**< Input Change Interrupt Enable  */
    using P10  = regbits< type, 10,  1 >;  /**< Input Change Interrupt Enable  */
    using P11  = regbits< type, 11,  1 >;  /**< Input Change Interrupt Enable  */
    using P12  = regbits< type, 12,  1 >;  /**< Input Change Interrupt Enable  */
    using P13  = regbits< type, 13,  1 >;  /**< Input Change Interrupt Enable  */
    using P14  = regbits< type, 14,  1 >;  /**< Input Change Interrupt Enable  */
    using P15  = regbits< type, 15,  1 >;  /**< Input Change Interrupt Enable  */
    using P16  = regbits< type, 16,  1 >;  /**< Input Change Interrupt Enable  */
    using P17  = regbits< type, 17,  1 >;  /**< Input Change Interrupt Enable  */
    using P18  = regbits< type, 18,  1 >;  /**< Input Change Interrupt Enable  */
    using P19  = regbits< type, 19,  1 >;  /**< Input Change Interrupt Enable  */
    using P20  = regbits< type, 20,  1 >;  /**< Input Change Interrupt Enable  */
    using P21  = regbits< type, 21,  1 >;  /**< Input Change Interrupt Enable  */
    using P22  = regbits< type, 22,  1 >;  /**< Input Change Interrupt Enable  */
    using P23  = regbits< type, 23,  1 >;  /**< Input Change Interrupt Enable  */
    using P24  = regbits< type, 24,  1 >;  /**< Input Change Interrupt Enable  */
    using P25  = regbits< type, 25,  1 >;  /**< Input Change Interrupt Enable  */
    using P26  = regbits< type, 26,  1 >;  /**< Input Change Interrupt Enable  */
    using P27  = regbits< type, 27,  1 >;  /**< Input Change Interrupt Enable  */
    using P28  = regbits< type, 28,  1 >;  /**< Input Change Interrupt Enable  */
    using P29  = regbits< type, 29,  1 >;  /**< Input Change Interrupt Enable  */
    using P30  = regbits< type, 30,  1 >;  /**< Input Change Interrupt Enable  */
    using P31  = regbits< type, 31,  1 >;  /**< Input Change Interrupt Enable  */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000044, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Input Change Interrupt Disable  */
    using P1   = regbits< type,  1,  1 >;  /**< Input Change Interrupt Disable  */
    using P2   = regbits< type,  2,  1 >;  /**< Input Change Interrupt Disable  */
    using P3   = regbits< type,  3,  1 >;  /**< Input Change Interrupt Disable  */
    using P4   = regbits< type,  4,  1 >;  /**< Input Change Interrupt Disable  */
    using P5   = regbits< type,  5,  1 >;  /**< Input Change Interrupt Disable  */
    using P6   = regbits< type,  6,  1 >;  /**< Input Change Interrupt Disable  */
    using P7   = regbits< type,  7,  1 >;  /**< Input Change Interrupt Disable  */
    using P8   = regbits< type,  8,  1 >;  /**< Input Change Interrupt Disable  */
    using P9   = regbits< type,  9,  1 >;  /**< Input Change Interrupt Disable  */
    using P10  = regbits< type, 10,  1 >;  /**< Input Change Interrupt Disable  */
    using P11  = regbits< type, 11,  1 >;  /**< Input Change Interrupt Disable  */
    using P12  = regbits< type, 12,  1 >;  /**< Input Change Interrupt Disable  */
    using P13  = regbits< type, 13,  1 >;  /**< Input Change Interrupt Disable  */
    using P14  = regbits< type, 14,  1 >;  /**< Input Change Interrupt Disable  */
    using P15  = regbits< type, 15,  1 >;  /**< Input Change Interrupt Disable  */
    using P16  = regbits< type, 16,  1 >;  /**< Input Change Interrupt Disable  */
    using P17  = regbits< type, 17,  1 >;  /**< Input Change Interrupt Disable  */
    using P18  = regbits< type, 18,  1 >;  /**< Input Change Interrupt Disable  */
    using P19  = regbits< type, 19,  1 >;  /**< Input Change Interrupt Disable  */
    using P20  = regbits< type, 20,  1 >;  /**< Input Change Interrupt Disable  */
    using P21  = regbits< type, 21,  1 >;  /**< Input Change Interrupt Disable  */
    using P22  = regbits< type, 22,  1 >;  /**< Input Change Interrupt Disable  */
    using P23  = regbits< type, 23,  1 >;  /**< Input Change Interrupt Disable  */
    using P24  = regbits< type, 24,  1 >;  /**< Input Change Interrupt Disable  */
    using P25  = regbits< type, 25,  1 >;  /**< Input Change Interrupt Disable  */
    using P26  = regbits< type, 26,  1 >;  /**< Input Change Interrupt Disable  */
    using P27  = regbits< type, 27,  1 >;  /**< Input Change Interrupt Disable  */
    using P28  = regbits< type, 28,  1 >;  /**< Input Change Interrupt Disable  */
    using P29  = regbits< type, 29,  1 >;  /**< Input Change Interrupt Disable  */
    using P30  = regbits< type, 30,  1 >;  /**< Input Change Interrupt Disable  */
    using P31  = regbits< type, 31,  1 >;  /**< Input Change Interrupt Disable  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Input Change Interrupt Mask  */
    using P1   = regbits< type,  1,  1 >;  /**< Input Change Interrupt Mask  */
    using P2   = regbits< type,  2,  1 >;  /**< Input Change Interrupt Mask  */
    using P3   = regbits< type,  3,  1 >;  /**< Input Change Interrupt Mask  */
    using P4   = regbits< type,  4,  1 >;  /**< Input Change Interrupt Mask  */
    using P5   = regbits< type,  5,  1 >;  /**< Input Change Interrupt Mask  */
    using P6   = regbits< type,  6,  1 >;  /**< Input Change Interrupt Mask  */
    using P7   = regbits< type,  7,  1 >;  /**< Input Change Interrupt Mask  */
    using P8   = regbits< type,  8,  1 >;  /**< Input Change Interrupt Mask  */
    using P9   = regbits< type,  9,  1 >;  /**< Input Change Interrupt Mask  */
    using P10  = regbits< type, 10,  1 >;  /**< Input Change Interrupt Mask  */
    using P11  = regbits< type, 11,  1 >;  /**< Input Change Interrupt Mask  */
    using P12  = regbits< type, 12,  1 >;  /**< Input Change Interrupt Mask  */
    using P13  = regbits< type, 13,  1 >;  /**< Input Change Interrupt Mask  */
    using P14  = regbits< type, 14,  1 >;  /**< Input Change Interrupt Mask  */
    using P15  = regbits< type, 15,  1 >;  /**< Input Change Interrupt Mask  */
    using P16  = regbits< type, 16,  1 >;  /**< Input Change Interrupt Mask  */
    using P17  = regbits< type, 17,  1 >;  /**< Input Change Interrupt Mask  */
    using P18  = regbits< type, 18,  1 >;  /**< Input Change Interrupt Mask  */
    using P19  = regbits< type, 19,  1 >;  /**< Input Change Interrupt Mask  */
    using P20  = regbits< type, 20,  1 >;  /**< Input Change Interrupt Mask  */
    using P21  = regbits< type, 21,  1 >;  /**< Input Change Interrupt Mask  */
    using P22  = regbits< type, 22,  1 >;  /**< Input Change Interrupt Mask  */
    using P23  = regbits< type, 23,  1 >;  /**< Input Change Interrupt Mask  */
    using P24  = regbits< type, 24,  1 >;  /**< Input Change Interrupt Mask  */
    using P25  = regbits< type, 25,  1 >;  /**< Input Change Interrupt Mask  */
    using P26  = regbits< type, 26,  1 >;  /**< Input Change Interrupt Mask  */
    using P27  = regbits< type, 27,  1 >;  /**< Input Change Interrupt Mask  */
    using P28  = regbits< type, 28,  1 >;  /**< Input Change Interrupt Mask  */
    using P29  = regbits< type, 29,  1 >;  /**< Input Change Interrupt Mask  */
    using P30  = regbits< type, 30,  1 >;  /**< Input Change Interrupt Mask  */
    using P31  = regbits< type, 31,  1 >;  /**< Input Change Interrupt Mask  */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Input Change Interrupt Status  */
    using P1   = regbits< type,  1,  1 >;  /**< Input Change Interrupt Status  */
    using P2   = regbits< type,  2,  1 >;  /**< Input Change Interrupt Status  */
    using P3   = regbits< type,  3,  1 >;  /**< Input Change Interrupt Status  */
    using P4   = regbits< type,  4,  1 >;  /**< Input Change Interrupt Status  */
    using P5   = regbits< type,  5,  1 >;  /**< Input Change Interrupt Status  */
    using P6   = regbits< type,  6,  1 >;  /**< Input Change Interrupt Status  */
    using P7   = regbits< type,  7,  1 >;  /**< Input Change Interrupt Status  */
    using P8   = regbits< type,  8,  1 >;  /**< Input Change Interrupt Status  */
    using P9   = regbits< type,  9,  1 >;  /**< Input Change Interrupt Status  */
    using P10  = regbits< type, 10,  1 >;  /**< Input Change Interrupt Status  */
    using P11  = regbits< type, 11,  1 >;  /**< Input Change Interrupt Status  */
    using P12  = regbits< type, 12,  1 >;  /**< Input Change Interrupt Status  */
    using P13  = regbits< type, 13,  1 >;  /**< Input Change Interrupt Status  */
    using P14  = regbits< type, 14,  1 >;  /**< Input Change Interrupt Status  */
    using P15  = regbits< type, 15,  1 >;  /**< Input Change Interrupt Status  */
    using P16  = regbits< type, 16,  1 >;  /**< Input Change Interrupt Status  */
    using P17  = regbits< type, 17,  1 >;  /**< Input Change Interrupt Status  */
    using P18  = regbits< type, 18,  1 >;  /**< Input Change Interrupt Status  */
    using P19  = regbits< type, 19,  1 >;  /**< Input Change Interrupt Status  */
    using P20  = regbits< type, 20,  1 >;  /**< Input Change Interrupt Status  */
    using P21  = regbits< type, 21,  1 >;  /**< Input Change Interrupt Status  */
    using P22  = regbits< type, 22,  1 >;  /**< Input Change Interrupt Status  */
    using P23  = regbits< type, 23,  1 >;  /**< Input Change Interrupt Status  */
    using P24  = regbits< type, 24,  1 >;  /**< Input Change Interrupt Status  */
    using P25  = regbits< type, 25,  1 >;  /**< Input Change Interrupt Status  */
    using P26  = regbits< type, 26,  1 >;  /**< Input Change Interrupt Status  */
    using P27  = regbits< type, 27,  1 >;  /**< Input Change Interrupt Status  */
    using P28  = regbits< type, 28,  1 >;  /**< Input Change Interrupt Status  */
    using P29  = regbits< type, 29,  1 >;  /**< Input Change Interrupt Status  */
    using P30  = regbits< type, 30,  1 >;  /**< Input Change Interrupt Status  */
    using P31  = regbits< type, 31,  1 >;  /**< Input Change Interrupt Status  */
  };

  /**
   * Multi-driver Enable Register
   */
  struct MDER
  : public reg< uint32_t, base_addr + 0x00000050, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Multi Drive Enable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Multi Drive Enable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Multi Drive Enable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Multi Drive Enable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Multi Drive Enable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Multi Drive Enable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Multi Drive Enable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Multi Drive Enable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Multi Drive Enable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Multi Drive Enable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Multi Drive Enable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Multi Drive Enable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Multi Drive Enable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Multi Drive Enable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Multi Drive Enable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Multi Drive Enable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Multi Drive Enable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Multi Drive Enable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Multi Drive Enable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Multi Drive Enable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Multi Drive Enable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Multi Drive Enable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Multi Drive Enable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Multi Drive Enable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Multi Drive Enable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Multi Drive Enable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Multi Drive Enable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Multi Drive Enable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Multi Drive Enable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Multi Drive Enable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Multi Drive Enable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Multi Drive Enable.  */
  };

  /**
   * Multi-driver Disable Register
   */
  struct MDDR
  : public reg< uint32_t, base_addr + 0x00000054, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Multi Drive Disable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Multi Drive Disable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Multi Drive Disable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Multi Drive Disable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Multi Drive Disable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Multi Drive Disable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Multi Drive Disable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Multi Drive Disable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Multi Drive Disable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Multi Drive Disable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Multi Drive Disable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Multi Drive Disable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Multi Drive Disable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Multi Drive Disable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Multi Drive Disable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Multi Drive Disable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Multi Drive Disable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Multi Drive Disable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Multi Drive Disable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Multi Drive Disable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Multi Drive Disable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Multi Drive Disable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Multi Drive Disable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Multi Drive Disable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Multi Drive Disable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Multi Drive Disable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Multi Drive Disable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Multi Drive Disable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Multi Drive Disable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Multi Drive Disable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Multi Drive Disable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Multi Drive Disable.  */
  };

  /**
   * Multi-driver Status Register
   */
  struct MDSR
  : public reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Multi Drive Status.  */
    using P1   = regbits< type,  1,  1 >;  /**< Multi Drive Status.  */
    using P2   = regbits< type,  2,  1 >;  /**< Multi Drive Status.  */
    using P3   = regbits< type,  3,  1 >;  /**< Multi Drive Status.  */
    using P4   = regbits< type,  4,  1 >;  /**< Multi Drive Status.  */
    using P5   = regbits< type,  5,  1 >;  /**< Multi Drive Status.  */
    using P6   = regbits< type,  6,  1 >;  /**< Multi Drive Status.  */
    using P7   = regbits< type,  7,  1 >;  /**< Multi Drive Status.  */
    using P8   = regbits< type,  8,  1 >;  /**< Multi Drive Status.  */
    using P9   = regbits< type,  9,  1 >;  /**< Multi Drive Status.  */
    using P10  = regbits< type, 10,  1 >;  /**< Multi Drive Status.  */
    using P11  = regbits< type, 11,  1 >;  /**< Multi Drive Status.  */
    using P12  = regbits< type, 12,  1 >;  /**< Multi Drive Status.  */
    using P13  = regbits< type, 13,  1 >;  /**< Multi Drive Status.  */
    using P14  = regbits< type, 14,  1 >;  /**< Multi Drive Status.  */
    using P15  = regbits< type, 15,  1 >;  /**< Multi Drive Status.  */
    using P16  = regbits< type, 16,  1 >;  /**< Multi Drive Status.  */
    using P17  = regbits< type, 17,  1 >;  /**< Multi Drive Status.  */
    using P18  = regbits< type, 18,  1 >;  /**< Multi Drive Status.  */
    using P19  = regbits< type, 19,  1 >;  /**< Multi Drive Status.  */
    using P20  = regbits< type, 20,  1 >;  /**< Multi Drive Status.  */
    using P21  = regbits< type, 21,  1 >;  /**< Multi Drive Status.  */
    using P22  = regbits< type, 22,  1 >;  /**< Multi Drive Status.  */
    using P23  = regbits< type, 23,  1 >;  /**< Multi Drive Status.  */
    using P24  = regbits< type, 24,  1 >;  /**< Multi Drive Status.  */
    using P25  = regbits< type, 25,  1 >;  /**< Multi Drive Status.  */
    using P26  = regbits< type, 26,  1 >;  /**< Multi Drive Status.  */
    using P27  = regbits< type, 27,  1 >;  /**< Multi Drive Status.  */
    using P28  = regbits< type, 28,  1 >;  /**< Multi Drive Status.  */
    using P29  = regbits< type, 29,  1 >;  /**< Multi Drive Status.  */
    using P30  = regbits< type, 30,  1 >;  /**< Multi Drive Status.  */
    using P31  = regbits< type, 31,  1 >;  /**< Multi Drive Status.  */
  };

  /**
   * Pull-up Disable Register
   */
  struct PUDR
  : public reg< uint32_t, base_addr + 0x00000060, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Pull Up Disable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Pull Up Disable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Pull Up Disable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Pull Up Disable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Pull Up Disable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Pull Up Disable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Pull Up Disable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Pull Up Disable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Pull Up Disable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Pull Up Disable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Pull Up Disable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Pull Up Disable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Pull Up Disable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Pull Up Disable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Pull Up Disable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Pull Up Disable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Pull Up Disable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Pull Up Disable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Pull Up Disable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Pull Up Disable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Pull Up Disable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Pull Up Disable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Pull Up Disable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Pull Up Disable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Pull Up Disable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Pull Up Disable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Pull Up Disable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Pull Up Disable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Pull Up Disable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Pull Up Disable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Pull Up Disable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Pull Up Disable.  */
  };

  /**
   * Pull-up Enable Register
   */
  struct PUER
  : public reg< uint32_t, base_addr + 0x00000064, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Pull Up Enable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Pull Up Enable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Pull Up Enable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Pull Up Enable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Pull Up Enable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Pull Up Enable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Pull Up Enable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Pull Up Enable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Pull Up Enable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Pull Up Enable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Pull Up Enable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Pull Up Enable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Pull Up Enable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Pull Up Enable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Pull Up Enable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Pull Up Enable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Pull Up Enable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Pull Up Enable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Pull Up Enable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Pull Up Enable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Pull Up Enable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Pull Up Enable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Pull Up Enable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Pull Up Enable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Pull Up Enable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Pull Up Enable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Pull Up Enable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Pull Up Enable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Pull Up Enable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Pull Up Enable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Pull Up Enable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Pull Up Enable.  */
  };

  /**
   * Pad Pull-up Status Register
   */
  struct PUSR
  : public reg< uint32_t, base_addr + 0x00000068, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Pull Up Status.  */
    using P1   = regbits< type,  1,  1 >;  /**< Pull Up Status.  */
    using P2   = regbits< type,  2,  1 >;  /**< Pull Up Status.  */
    using P3   = regbits< type,  3,  1 >;  /**< Pull Up Status.  */
    using P4   = regbits< type,  4,  1 >;  /**< Pull Up Status.  */
    using P5   = regbits< type,  5,  1 >;  /**< Pull Up Status.  */
    using P6   = regbits< type,  6,  1 >;  /**< Pull Up Status.  */
    using P7   = regbits< type,  7,  1 >;  /**< Pull Up Status.  */
    using P8   = regbits< type,  8,  1 >;  /**< Pull Up Status.  */
    using P9   = regbits< type,  9,  1 >;  /**< Pull Up Status.  */
    using P10  = regbits< type, 10,  1 >;  /**< Pull Up Status.  */
    using P11  = regbits< type, 11,  1 >;  /**< Pull Up Status.  */
    using P12  = regbits< type, 12,  1 >;  /**< Pull Up Status.  */
    using P13  = regbits< type, 13,  1 >;  /**< Pull Up Status.  */
    using P14  = regbits< type, 14,  1 >;  /**< Pull Up Status.  */
    using P15  = regbits< type, 15,  1 >;  /**< Pull Up Status.  */
    using P16  = regbits< type, 16,  1 >;  /**< Pull Up Status.  */
    using P17  = regbits< type, 17,  1 >;  /**< Pull Up Status.  */
    using P18  = regbits< type, 18,  1 >;  /**< Pull Up Status.  */
    using P19  = regbits< type, 19,  1 >;  /**< Pull Up Status.  */
    using P20  = regbits< type, 20,  1 >;  /**< Pull Up Status.  */
    using P21  = regbits< type, 21,  1 >;  /**< Pull Up Status.  */
    using P22  = regbits< type, 22,  1 >;  /**< Pull Up Status.  */
    using P23  = regbits< type, 23,  1 >;  /**< Pull Up Status.  */
    using P24  = regbits< type, 24,  1 >;  /**< Pull Up Status.  */
    using P25  = regbits< type, 25,  1 >;  /**< Pull Up Status.  */
    using P26  = regbits< type, 26,  1 >;  /**< Pull Up Status.  */
    using P27  = regbits< type, 27,  1 >;  /**< Pull Up Status.  */
    using P28  = regbits< type, 28,  1 >;  /**< Pull Up Status.  */
    using P29  = regbits< type, 29,  1 >;  /**< Pull Up Status.  */
    using P30  = regbits< type, 30,  1 >;  /**< Pull Up Status.  */
    using P31  = regbits< type, 31,  1 >;  /**< Pull Up Status.  */
  };

  /**
   * Peripheral A Select Register
   */
  struct ASR
  : public reg< uint32_t, base_addr + 0x00000070, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Peripheral A Select.  */
    using P1   = regbits< type,  1,  1 >;  /**< Peripheral A Select.  */
    using P2   = regbits< type,  2,  1 >;  /**< Peripheral A Select.  */
    using P3   = regbits< type,  3,  1 >;  /**< Peripheral A Select.  */
    using P4   = regbits< type,  4,  1 >;  /**< Peripheral A Select.  */
    using P5   = regbits< type,  5,  1 >;  /**< Peripheral A Select.  */
    using P6   = regbits< type,  6,  1 >;  /**< Peripheral A Select.  */
    using P7   = regbits< type,  7,  1 >;  /**< Peripheral A Select.  */
    using P8   = regbits< type,  8,  1 >;  /**< Peripheral A Select.  */
    using P9   = regbits< type,  9,  1 >;  /**< Peripheral A Select.  */
    using P10  = regbits< type, 10,  1 >;  /**< Peripheral A Select.  */
    using P11  = regbits< type, 11,  1 >;  /**< Peripheral A Select.  */
    using P12  = regbits< type, 12,  1 >;  /**< Peripheral A Select.  */
    using P13  = regbits< type, 13,  1 >;  /**< Peripheral A Select.  */
    using P14  = regbits< type, 14,  1 >;  /**< Peripheral A Select.  */
    using P15  = regbits< type, 15,  1 >;  /**< Peripheral A Select.  */
    using P16  = regbits< type, 16,  1 >;  /**< Peripheral A Select.  */
    using P17  = regbits< type, 17,  1 >;  /**< Peripheral A Select.  */
    using P18  = regbits< type, 18,  1 >;  /**< Peripheral A Select.  */
    using P19  = regbits< type, 19,  1 >;  /**< Peripheral A Select.  */
    using P20  = regbits< type, 20,  1 >;  /**< Peripheral A Select.  */
    using P21  = regbits< type, 21,  1 >;  /**< Peripheral A Select.  */
    using P22  = regbits< type, 22,  1 >;  /**< Peripheral A Select.  */
    using P23  = regbits< type, 23,  1 >;  /**< Peripheral A Select.  */
    using P24  = regbits< type, 24,  1 >;  /**< Peripheral A Select.  */
    using P25  = regbits< type, 25,  1 >;  /**< Peripheral A Select.  */
    using P26  = regbits< type, 26,  1 >;  /**< Peripheral A Select.  */
    using P27  = regbits< type, 27,  1 >;  /**< Peripheral A Select.  */
    using P28  = regbits< type, 28,  1 >;  /**< Peripheral A Select.  */
    using P29  = regbits< type, 29,  1 >;  /**< Peripheral A Select.  */
    using P30  = regbits< type, 30,  1 >;  /**< Peripheral A Select.  */
    using P31  = regbits< type, 31,  1 >;  /**< Peripheral A Select.  */
  };

  /**
   * Peripheral B Select Register
   */
  struct BSR
  : public reg< uint32_t, base_addr + 0x00000074, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Peripheral B Select.  */
    using P1   = regbits< type,  1,  1 >;  /**< Peripheral B Select.  */
    using P2   = regbits< type,  2,  1 >;  /**< Peripheral B Select.  */
    using P3   = regbits< type,  3,  1 >;  /**< Peripheral B Select.  */
    using P4   = regbits< type,  4,  1 >;  /**< Peripheral B Select.  */
    using P5   = regbits< type,  5,  1 >;  /**< Peripheral B Select.  */
    using P6   = regbits< type,  6,  1 >;  /**< Peripheral B Select.  */
    using P7   = regbits< type,  7,  1 >;  /**< Peripheral B Select.  */
    using P8   = regbits< type,  8,  1 >;  /**< Peripheral B Select.  */
    using P9   = regbits< type,  9,  1 >;  /**< Peripheral B Select.  */
    using P10  = regbits< type, 10,  1 >;  /**< Peripheral B Select.  */
    using P11  = regbits< type, 11,  1 >;  /**< Peripheral B Select.  */
    using P12  = regbits< type, 12,  1 >;  /**< Peripheral B Select.  */
    using P13  = regbits< type, 13,  1 >;  /**< Peripheral B Select.  */
    using P14  = regbits< type, 14,  1 >;  /**< Peripheral B Select.  */
    using P15  = regbits< type, 15,  1 >;  /**< Peripheral B Select.  */
    using P16  = regbits< type, 16,  1 >;  /**< Peripheral B Select.  */
    using P17  = regbits< type, 17,  1 >;  /**< Peripheral B Select.  */
    using P18  = regbits< type, 18,  1 >;  /**< Peripheral B Select.  */
    using P19  = regbits< type, 19,  1 >;  /**< Peripheral B Select.  */
    using P20  = regbits< type, 20,  1 >;  /**< Peripheral B Select.  */
    using P21  = regbits< type, 21,  1 >;  /**< Peripheral B Select.  */
    using P22  = regbits< type, 22,  1 >;  /**< Peripheral B Select.  */
    using P23  = regbits< type, 23,  1 >;  /**< Peripheral B Select.  */
    using P24  = regbits< type, 24,  1 >;  /**< Peripheral B Select.  */
    using P25  = regbits< type, 25,  1 >;  /**< Peripheral B Select.  */
    using P26  = regbits< type, 26,  1 >;  /**< Peripheral B Select.  */
    using P27  = regbits< type, 27,  1 >;  /**< Peripheral B Select.  */
    using P28  = regbits< type, 28,  1 >;  /**< Peripheral B Select.  */
    using P29  = regbits< type, 29,  1 >;  /**< Peripheral B Select.  */
    using P30  = regbits< type, 30,  1 >;  /**< Peripheral B Select.  */
    using P31  = regbits< type, 31,  1 >;  /**< Peripheral B Select.  */
  };

  /**
   * AB Status Register
   */
  struct ABSR
  : public reg< uint32_t, base_addr + 0x00000078, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Peripheral A B Status.  */
    using P1   = regbits< type,  1,  1 >;  /**< Peripheral A B Status.  */
    using P2   = regbits< type,  2,  1 >;  /**< Peripheral A B Status.  */
    using P3   = regbits< type,  3,  1 >;  /**< Peripheral A B Status.  */
    using P4   = regbits< type,  4,  1 >;  /**< Peripheral A B Status.  */
    using P5   = regbits< type,  5,  1 >;  /**< Peripheral A B Status.  */
    using P6   = regbits< type,  6,  1 >;  /**< Peripheral A B Status.  */
    using P7   = regbits< type,  7,  1 >;  /**< Peripheral A B Status.  */
    using P8   = regbits< type,  8,  1 >;  /**< Peripheral A B Status.  */
    using P9   = regbits< type,  9,  1 >;  /**< Peripheral A B Status.  */
    using P10  = regbits< type, 10,  1 >;  /**< Peripheral A B Status.  */
    using P11  = regbits< type, 11,  1 >;  /**< Peripheral A B Status.  */
    using P12  = regbits< type, 12,  1 >;  /**< Peripheral A B Status.  */
    using P13  = regbits< type, 13,  1 >;  /**< Peripheral A B Status.  */
    using P14  = regbits< type, 14,  1 >;  /**< Peripheral A B Status.  */
    using P15  = regbits< type, 15,  1 >;  /**< Peripheral A B Status.  */
    using P16  = regbits< type, 16,  1 >;  /**< Peripheral A B Status.  */
    using P17  = regbits< type, 17,  1 >;  /**< Peripheral A B Status.  */
    using P18  = regbits< type, 18,  1 >;  /**< Peripheral A B Status.  */
    using P19  = regbits< type, 19,  1 >;  /**< Peripheral A B Status.  */
    using P20  = regbits< type, 20,  1 >;  /**< Peripheral A B Status.  */
    using P21  = regbits< type, 21,  1 >;  /**< Peripheral A B Status.  */
    using P22  = regbits< type, 22,  1 >;  /**< Peripheral A B Status.  */
    using P23  = regbits< type, 23,  1 >;  /**< Peripheral A B Status.  */
    using P24  = regbits< type, 24,  1 >;  /**< Peripheral A B Status.  */
    using P25  = regbits< type, 25,  1 >;  /**< Peripheral A B Status.  */
    using P26  = regbits< type, 26,  1 >;  /**< Peripheral A B Status.  */
    using P27  = regbits< type, 27,  1 >;  /**< Peripheral A B Status.  */
    using P28  = regbits< type, 28,  1 >;  /**< Peripheral A B Status.  */
    using P29  = regbits< type, 29,  1 >;  /**< Peripheral A B Status.  */
    using P30  = regbits< type, 30,  1 >;  /**< Peripheral A B Status.  */
    using P31  = regbits< type, 31,  1 >;  /**< Peripheral A B Status.  */
  };

  /**
   * Output Write Enable
   */
  struct OWER
  : public reg< uint32_t, base_addr + 0x000000a0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Output Write Enable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Output Write Enable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Output Write Enable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Output Write Enable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Output Write Enable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Output Write Enable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Output Write Enable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Output Write Enable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Output Write Enable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Output Write Enable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Output Write Enable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Output Write Enable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Output Write Enable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Output Write Enable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Output Write Enable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Output Write Enable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Output Write Enable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Output Write Enable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Output Write Enable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Output Write Enable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Output Write Enable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Output Write Enable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Output Write Enable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Output Write Enable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Output Write Enable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Output Write Enable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Output Write Enable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Output Write Enable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Output Write Enable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Output Write Enable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Output Write Enable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Output Write Enable.  */
  };

  /**
   * Output Write Disable
   */
  struct OWDR
  : public reg< uint32_t, base_addr + 0x000000a4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Output Write Disable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Output Write Disable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Output Write Disable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Output Write Disable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Output Write Disable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Output Write Disable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Output Write Disable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Output Write Disable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Output Write Disable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Output Write Disable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Output Write Disable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Output Write Disable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Output Write Disable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Output Write Disable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Output Write Disable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Output Write Disable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Output Write Disable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Output Write Disable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Output Write Disable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Output Write Disable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Output Write Disable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Output Write Disable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Output Write Disable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Output Write Disable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Output Write Disable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Output Write Disable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Output Write Disable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Output Write Disable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Output Write Disable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Output Write Disable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Output Write Disable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Output Write Disable.  */
  };

  /**
   * Output Write Status Register
   */
  struct OWSR
  : public reg< uint32_t, base_addr + 0x000000a8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Output Write Status.  */
    using P1   = regbits< type,  1,  1 >;  /**< Output Write Status.  */
    using P2   = regbits< type,  2,  1 >;  /**< Output Write Status.  */
    using P3   = regbits< type,  3,  1 >;  /**< Output Write Status.  */
    using P4   = regbits< type,  4,  1 >;  /**< Output Write Status.  */
    using P5   = regbits< type,  5,  1 >;  /**< Output Write Status.  */
    using P6   = regbits< type,  6,  1 >;  /**< Output Write Status.  */
    using P7   = regbits< type,  7,  1 >;  /**< Output Write Status.  */
    using P8   = regbits< type,  8,  1 >;  /**< Output Write Status.  */
    using P9   = regbits< type,  9,  1 >;  /**< Output Write Status.  */
    using P10  = regbits< type, 10,  1 >;  /**< Output Write Status.  */
    using P11  = regbits< type, 11,  1 >;  /**< Output Write Status.  */
    using P12  = regbits< type, 12,  1 >;  /**< Output Write Status.  */
    using P13  = regbits< type, 13,  1 >;  /**< Output Write Status.  */
    using P14  = regbits< type, 14,  1 >;  /**< Output Write Status.  */
    using P15  = regbits< type, 15,  1 >;  /**< Output Write Status.  */
    using P16  = regbits< type, 16,  1 >;  /**< Output Write Status.  */
    using P17  = regbits< type, 17,  1 >;  /**< Output Write Status.  */
    using P18  = regbits< type, 18,  1 >;  /**< Output Write Status.  */
    using P19  = regbits< type, 19,  1 >;  /**< Output Write Status.  */
    using P20  = regbits< type, 20,  1 >;  /**< Output Write Status.  */
    using P21  = regbits< type, 21,  1 >;  /**< Output Write Status.  */
    using P22  = regbits< type, 22,  1 >;  /**< Output Write Status.  */
    using P23  = regbits< type, 23,  1 >;  /**< Output Write Status.  */
    using P24  = regbits< type, 24,  1 >;  /**< Output Write Status.  */
    using P25  = regbits< type, 25,  1 >;  /**< Output Write Status.  */
    using P26  = regbits< type, 26,  1 >;  /**< Output Write Status.  */
    using P27  = regbits< type, 27,  1 >;  /**< Output Write Status.  */
    using P28  = regbits< type, 28,  1 >;  /**< Output Write Status.  */
    using P29  = regbits< type, 29,  1 >;  /**< Output Write Status.  */
    using P30  = regbits< type, 30,  1 >;  /**< Output Write Status.  */
    using P31  = regbits< type, 31,  1 >;  /**< Output Write Status.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PIOC_HPP_INCLUDED
