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
//  Import from CMSIS-SVD: "Atmel/ATSAM3S4A.svd"
//
//  vendor: Atmel
//  name: ATSAM3S4A
//  series: SAM3S
//  version: 20130131
//  description: Atmel ATSAM3S4A device: Cortex-M3 Microcontroller with 256KB Flash, USB, 48 Pins (refer to http://www.atmel.com/devices/SAM3S4A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PIOB_HPP_INCLUDED
#define ARCH_REG_PIOB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Parallel Input/Output Controller B
 */
struct PIOB
{
  static constexpr reg_addr_t base_addr = 0x400e1000;

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

    using P0   = regbits< type,  0,  1 >;  /**< Clear Output Data  */
    using P1   = regbits< type,  1,  1 >;  /**< Clear Output Data  */
    using P2   = regbits< type,  2,  1 >;  /**< Clear Output Data  */
    using P3   = regbits< type,  3,  1 >;  /**< Clear Output Data  */
    using P4   = regbits< type,  4,  1 >;  /**< Clear Output Data  */
    using P5   = regbits< type,  5,  1 >;  /**< Clear Output Data  */
    using P6   = regbits< type,  6,  1 >;  /**< Clear Output Data  */
    using P7   = regbits< type,  7,  1 >;  /**< Clear Output Data  */
    using P8   = regbits< type,  8,  1 >;  /**< Clear Output Data  */
    using P9   = regbits< type,  9,  1 >;  /**< Clear Output Data  */
    using P10  = regbits< type, 10,  1 >;  /**< Clear Output Data  */
    using P11  = regbits< type, 11,  1 >;  /**< Clear Output Data  */
    using P12  = regbits< type, 12,  1 >;  /**< Clear Output Data  */
    using P13  = regbits< type, 13,  1 >;  /**< Clear Output Data  */
    using P14  = regbits< type, 14,  1 >;  /**< Clear Output Data  */
    using P15  = regbits< type, 15,  1 >;  /**< Clear Output Data  */
    using P16  = regbits< type, 16,  1 >;  /**< Clear Output Data  */
    using P17  = regbits< type, 17,  1 >;  /**< Clear Output Data  */
    using P18  = regbits< type, 18,  1 >;  /**< Clear Output Data  */
    using P19  = regbits< type, 19,  1 >;  /**< Clear Output Data  */
    using P20  = regbits< type, 20,  1 >;  /**< Clear Output Data  */
    using P21  = regbits< type, 21,  1 >;  /**< Clear Output Data  */
    using P22  = regbits< type, 22,  1 >;  /**< Clear Output Data  */
    using P23  = regbits< type, 23,  1 >;  /**< Clear Output Data  */
    using P24  = regbits< type, 24,  1 >;  /**< Clear Output Data  */
    using P25  = regbits< type, 25,  1 >;  /**< Clear Output Data  */
    using P26  = regbits< type, 26,  1 >;  /**< Clear Output Data  */
    using P27  = regbits< type, 27,  1 >;  /**< Clear Output Data  */
    using P28  = regbits< type, 28,  1 >;  /**< Clear Output Data  */
    using P29  = regbits< type, 29,  1 >;  /**< Clear Output Data  */
    using P30  = regbits< type, 30,  1 >;  /**< Clear Output Data  */
    using P31  = regbits< type, 31,  1 >;  /**< Clear Output Data  */
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
  : public reg< uint32_t, base_addr + 0x00000068, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, ro, 0 /* svd2hpp: missing resetValue! */ >;

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
   * Peripheral Select Register
   */
  struct ABCDSR[%s]
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using P0   = regbits< type,  0,  1 >;  /**< Peripheral Select.  */
    using P1   = regbits< type,  1,  1 >;  /**< Peripheral Select.  */
    using P2   = regbits< type,  2,  1 >;  /**< Peripheral Select.  */
    using P3   = regbits< type,  3,  1 >;  /**< Peripheral Select.  */
    using P4   = regbits< type,  4,  1 >;  /**< Peripheral Select.  */
    using P5   = regbits< type,  5,  1 >;  /**< Peripheral Select.  */
    using P6   = regbits< type,  6,  1 >;  /**< Peripheral Select.  */
    using P7   = regbits< type,  7,  1 >;  /**< Peripheral Select.  */
    using P8   = regbits< type,  8,  1 >;  /**< Peripheral Select.  */
    using P9   = regbits< type,  9,  1 >;  /**< Peripheral Select.  */
    using P10  = regbits< type, 10,  1 >;  /**< Peripheral Select.  */
    using P11  = regbits< type, 11,  1 >;  /**< Peripheral Select.  */
    using P12  = regbits< type, 12,  1 >;  /**< Peripheral Select.  */
    using P13  = regbits< type, 13,  1 >;  /**< Peripheral Select.  */
    using P14  = regbits< type, 14,  1 >;  /**< Peripheral Select.  */
    using P15  = regbits< type, 15,  1 >;  /**< Peripheral Select.  */
    using P16  = regbits< type, 16,  1 >;  /**< Peripheral Select.  */
    using P17  = regbits< type, 17,  1 >;  /**< Peripheral Select.  */
    using P18  = regbits< type, 18,  1 >;  /**< Peripheral Select.  */
    using P19  = regbits< type, 19,  1 >;  /**< Peripheral Select.  */
    using P20  = regbits< type, 20,  1 >;  /**< Peripheral Select.  */
    using P21  = regbits< type, 21,  1 >;  /**< Peripheral Select.  */
    using P22  = regbits< type, 22,  1 >;  /**< Peripheral Select.  */
    using P23  = regbits< type, 23,  1 >;  /**< Peripheral Select.  */
    using P24  = regbits< type, 24,  1 >;  /**< Peripheral Select.  */
    using P25  = regbits< type, 25,  1 >;  /**< Peripheral Select.  */
    using P26  = regbits< type, 26,  1 >;  /**< Peripheral Select.  */
    using P27  = regbits< type, 27,  1 >;  /**< Peripheral Select.  */
    using P28  = regbits< type, 28,  1 >;  /**< Peripheral Select.  */
    using P29  = regbits< type, 29,  1 >;  /**< Peripheral Select.  */
    using P30  = regbits< type, 30,  1 >;  /**< Peripheral Select.  */
    using P31  = regbits< type, 31,  1 >;  /**< Peripheral Select.  */
  };

  /**
   * Input Filter Slow Clock Disable Register
   */
  struct IFSCDR
  : public reg< uint32_t, base_addr + 0x00000080, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P1   = regbits< type,  1,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P2   = regbits< type,  2,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P3   = regbits< type,  3,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P4   = regbits< type,  4,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P5   = regbits< type,  5,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P6   = regbits< type,  6,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P7   = regbits< type,  7,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P8   = regbits< type,  8,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P9   = regbits< type,  9,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P10  = regbits< type, 10,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P11  = regbits< type, 11,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P12  = regbits< type, 12,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P13  = regbits< type, 13,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P14  = regbits< type, 14,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P15  = regbits< type, 15,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P16  = regbits< type, 16,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P17  = regbits< type, 17,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P18  = regbits< type, 18,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P19  = regbits< type, 19,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P20  = regbits< type, 20,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P21  = regbits< type, 21,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P22  = regbits< type, 22,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P23  = regbits< type, 23,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P24  = regbits< type, 24,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P25  = regbits< type, 25,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P26  = regbits< type, 26,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P27  = regbits< type, 27,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P28  = regbits< type, 28,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P29  = regbits< type, 29,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P30  = regbits< type, 30,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
    using P31  = regbits< type, 31,  1 >;  /**< PIO Clock Glitch Filtering Select.  */
  };

  /**
   * Input Filter Slow Clock Enable Register
   */
  struct IFSCER
  : public reg< uint32_t, base_addr + 0x00000084, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Debouncing Filtering Select.  */
    using P1   = regbits< type,  1,  1 >;  /**< Debouncing Filtering Select.  */
    using P2   = regbits< type,  2,  1 >;  /**< Debouncing Filtering Select.  */
    using P3   = regbits< type,  3,  1 >;  /**< Debouncing Filtering Select.  */
    using P4   = regbits< type,  4,  1 >;  /**< Debouncing Filtering Select.  */
    using P5   = regbits< type,  5,  1 >;  /**< Debouncing Filtering Select.  */
    using P6   = regbits< type,  6,  1 >;  /**< Debouncing Filtering Select.  */
    using P7   = regbits< type,  7,  1 >;  /**< Debouncing Filtering Select.  */
    using P8   = regbits< type,  8,  1 >;  /**< Debouncing Filtering Select.  */
    using P9   = regbits< type,  9,  1 >;  /**< Debouncing Filtering Select.  */
    using P10  = regbits< type, 10,  1 >;  /**< Debouncing Filtering Select.  */
    using P11  = regbits< type, 11,  1 >;  /**< Debouncing Filtering Select.  */
    using P12  = regbits< type, 12,  1 >;  /**< Debouncing Filtering Select.  */
    using P13  = regbits< type, 13,  1 >;  /**< Debouncing Filtering Select.  */
    using P14  = regbits< type, 14,  1 >;  /**< Debouncing Filtering Select.  */
    using P15  = regbits< type, 15,  1 >;  /**< Debouncing Filtering Select.  */
    using P16  = regbits< type, 16,  1 >;  /**< Debouncing Filtering Select.  */
    using P17  = regbits< type, 17,  1 >;  /**< Debouncing Filtering Select.  */
    using P18  = regbits< type, 18,  1 >;  /**< Debouncing Filtering Select.  */
    using P19  = regbits< type, 19,  1 >;  /**< Debouncing Filtering Select.  */
    using P20  = regbits< type, 20,  1 >;  /**< Debouncing Filtering Select.  */
    using P21  = regbits< type, 21,  1 >;  /**< Debouncing Filtering Select.  */
    using P22  = regbits< type, 22,  1 >;  /**< Debouncing Filtering Select.  */
    using P23  = regbits< type, 23,  1 >;  /**< Debouncing Filtering Select.  */
    using P24  = regbits< type, 24,  1 >;  /**< Debouncing Filtering Select.  */
    using P25  = regbits< type, 25,  1 >;  /**< Debouncing Filtering Select.  */
    using P26  = regbits< type, 26,  1 >;  /**< Debouncing Filtering Select.  */
    using P27  = regbits< type, 27,  1 >;  /**< Debouncing Filtering Select.  */
    using P28  = regbits< type, 28,  1 >;  /**< Debouncing Filtering Select.  */
    using P29  = regbits< type, 29,  1 >;  /**< Debouncing Filtering Select.  */
    using P30  = regbits< type, 30,  1 >;  /**< Debouncing Filtering Select.  */
    using P31  = regbits< type, 31,  1 >;  /**< Debouncing Filtering Select.  */
  };

  /**
   * Input Filter Slow Clock Status Register
   */
  struct IFSCSR
  : public reg< uint32_t, base_addr + 0x00000088, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P1   = regbits< type,  1,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P2   = regbits< type,  2,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P3   = regbits< type,  3,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P4   = regbits< type,  4,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P5   = regbits< type,  5,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P6   = regbits< type,  6,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P7   = regbits< type,  7,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P8   = regbits< type,  8,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P9   = regbits< type,  9,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P10  = regbits< type, 10,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P11  = regbits< type, 11,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P12  = regbits< type, 12,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P13  = regbits< type, 13,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P14  = regbits< type, 14,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P15  = regbits< type, 15,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P16  = regbits< type, 16,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P17  = regbits< type, 17,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P18  = regbits< type, 18,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P19  = regbits< type, 19,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P20  = regbits< type, 20,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P21  = regbits< type, 21,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P22  = regbits< type, 22,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P23  = regbits< type, 23,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P24  = regbits< type, 24,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P25  = regbits< type, 25,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P26  = regbits< type, 26,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P27  = regbits< type, 27,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P28  = regbits< type, 28,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P29  = regbits< type, 29,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P30  = regbits< type, 30,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
    using P31  = regbits< type, 31,  1 >;  /**< Glitch or Debouncing Filter Selection Status  */
  };

  /**
   * Slow Clock Divider Debouncing Register
   */
  struct SCDR
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >;

    using DIV  = regbits< type,  0, 14 >;
  };

  /**
   * Pad Pull-down Disable Register
   */
  struct PPDDR
  : public reg< uint32_t, base_addr + 0x00000090, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Pull Down Disable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Pull Down Disable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Pull Down Disable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Pull Down Disable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Pull Down Disable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Pull Down Disable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Pull Down Disable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Pull Down Disable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Pull Down Disable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Pull Down Disable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Pull Down Disable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Pull Down Disable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Pull Down Disable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Pull Down Disable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Pull Down Disable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Pull Down Disable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Pull Down Disable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Pull Down Disable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Pull Down Disable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Pull Down Disable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Pull Down Disable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Pull Down Disable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Pull Down Disable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Pull Down Disable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Pull Down Disable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Pull Down Disable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Pull Down Disable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Pull Down Disable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Pull Down Disable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Pull Down Disable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Pull Down Disable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Pull Down Disable.  */
  };

  /**
   * Pad Pull-down Enable Register
   */
  struct PPDER
  : public reg< uint32_t, base_addr + 0x00000094, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Pull Down Enable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Pull Down Enable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Pull Down Enable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Pull Down Enable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Pull Down Enable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Pull Down Enable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Pull Down Enable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Pull Down Enable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Pull Down Enable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Pull Down Enable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Pull Down Enable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Pull Down Enable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Pull Down Enable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Pull Down Enable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Pull Down Enable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Pull Down Enable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Pull Down Enable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Pull Down Enable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Pull Down Enable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Pull Down Enable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Pull Down Enable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Pull Down Enable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Pull Down Enable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Pull Down Enable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Pull Down Enable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Pull Down Enable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Pull Down Enable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Pull Down Enable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Pull Down Enable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Pull Down Enable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Pull Down Enable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Pull Down Enable.  */
  };

  /**
   * Pad Pull-down Status Register
   */
  struct PPDSR
  : public reg< uint32_t, base_addr + 0x00000098, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using P0   = regbits< type,  0,  1 >;  /**< Pull Down Status.  */
    using P1   = regbits< type,  1,  1 >;  /**< Pull Down Status.  */
    using P2   = regbits< type,  2,  1 >;  /**< Pull Down Status.  */
    using P3   = regbits< type,  3,  1 >;  /**< Pull Down Status.  */
    using P4   = regbits< type,  4,  1 >;  /**< Pull Down Status.  */
    using P5   = regbits< type,  5,  1 >;  /**< Pull Down Status.  */
    using P6   = regbits< type,  6,  1 >;  /**< Pull Down Status.  */
    using P7   = regbits< type,  7,  1 >;  /**< Pull Down Status.  */
    using P8   = regbits< type,  8,  1 >;  /**< Pull Down Status.  */
    using P9   = regbits< type,  9,  1 >;  /**< Pull Down Status.  */
    using P10  = regbits< type, 10,  1 >;  /**< Pull Down Status.  */
    using P11  = regbits< type, 11,  1 >;  /**< Pull Down Status.  */
    using P12  = regbits< type, 12,  1 >;  /**< Pull Down Status.  */
    using P13  = regbits< type, 13,  1 >;  /**< Pull Down Status.  */
    using P14  = regbits< type, 14,  1 >;  /**< Pull Down Status.  */
    using P15  = regbits< type, 15,  1 >;  /**< Pull Down Status.  */
    using P16  = regbits< type, 16,  1 >;  /**< Pull Down Status.  */
    using P17  = regbits< type, 17,  1 >;  /**< Pull Down Status.  */
    using P18  = regbits< type, 18,  1 >;  /**< Pull Down Status.  */
    using P19  = regbits< type, 19,  1 >;  /**< Pull Down Status.  */
    using P20  = regbits< type, 20,  1 >;  /**< Pull Down Status.  */
    using P21  = regbits< type, 21,  1 >;  /**< Pull Down Status.  */
    using P22  = regbits< type, 22,  1 >;  /**< Pull Down Status.  */
    using P23  = regbits< type, 23,  1 >;  /**< Pull Down Status.  */
    using P24  = regbits< type, 24,  1 >;  /**< Pull Down Status.  */
    using P25  = regbits< type, 25,  1 >;  /**< Pull Down Status.  */
    using P26  = regbits< type, 26,  1 >;  /**< Pull Down Status.  */
    using P27  = regbits< type, 27,  1 >;  /**< Pull Down Status.  */
    using P28  = regbits< type, 28,  1 >;  /**< Pull Down Status.  */
    using P29  = regbits< type, 29,  1 >;  /**< Pull Down Status.  */
    using P30  = regbits< type, 30,  1 >;  /**< Pull Down Status.  */
    using P31  = regbits< type, 31,  1 >;  /**< Pull Down Status.  */
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

  /**
   * Additional Interrupt Modes Enable Register
   */
  struct AIMER
  : public reg< uint32_t, base_addr + 0x000000b0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Additional Interrupt Modes Enable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Additional Interrupt Modes Enable.  */
  };

  /**
   * Additional Interrupt Modes Disables Register
   */
  struct AIMDR
  : public reg< uint32_t, base_addr + 0x000000b4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P1   = regbits< type,  1,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P2   = regbits< type,  2,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P3   = regbits< type,  3,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P4   = regbits< type,  4,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P5   = regbits< type,  5,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P6   = regbits< type,  6,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P7   = regbits< type,  7,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P8   = regbits< type,  8,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P9   = regbits< type,  9,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P10  = regbits< type, 10,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P11  = regbits< type, 11,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P12  = regbits< type, 12,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P13  = regbits< type, 13,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P14  = regbits< type, 14,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P15  = regbits< type, 15,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P16  = regbits< type, 16,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P17  = regbits< type, 17,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P18  = regbits< type, 18,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P19  = regbits< type, 19,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P20  = regbits< type, 20,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P21  = regbits< type, 21,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P22  = regbits< type, 22,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P23  = regbits< type, 23,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P24  = regbits< type, 24,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P25  = regbits< type, 25,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P26  = regbits< type, 26,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P27  = regbits< type, 27,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P28  = regbits< type, 28,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P29  = regbits< type, 29,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P30  = regbits< type, 30,  1 >;  /**< Additional Interrupt Modes Disable.  */
    using P31  = regbits< type, 31,  1 >;  /**< Additional Interrupt Modes Disable.  */
  };

  /**
   * Additional Interrupt Modes Mask Register
   */
  struct AIMMR
  : public reg< uint32_t, base_addr + 0x000000b8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Peripheral CD Status.  */
    using P1   = regbits< type,  1,  1 >;  /**< Peripheral CD Status.  */
    using P2   = regbits< type,  2,  1 >;  /**< Peripheral CD Status.  */
    using P3   = regbits< type,  3,  1 >;  /**< Peripheral CD Status.  */
    using P4   = regbits< type,  4,  1 >;  /**< Peripheral CD Status.  */
    using P5   = regbits< type,  5,  1 >;  /**< Peripheral CD Status.  */
    using P6   = regbits< type,  6,  1 >;  /**< Peripheral CD Status.  */
    using P7   = regbits< type,  7,  1 >;  /**< Peripheral CD Status.  */
    using P8   = regbits< type,  8,  1 >;  /**< Peripheral CD Status.  */
    using P9   = regbits< type,  9,  1 >;  /**< Peripheral CD Status.  */
    using P10  = regbits< type, 10,  1 >;  /**< Peripheral CD Status.  */
    using P11  = regbits< type, 11,  1 >;  /**< Peripheral CD Status.  */
    using P12  = regbits< type, 12,  1 >;  /**< Peripheral CD Status.  */
    using P13  = regbits< type, 13,  1 >;  /**< Peripheral CD Status.  */
    using P14  = regbits< type, 14,  1 >;  /**< Peripheral CD Status.  */
    using P15  = regbits< type, 15,  1 >;  /**< Peripheral CD Status.  */
    using P16  = regbits< type, 16,  1 >;  /**< Peripheral CD Status.  */
    using P17  = regbits< type, 17,  1 >;  /**< Peripheral CD Status.  */
    using P18  = regbits< type, 18,  1 >;  /**< Peripheral CD Status.  */
    using P19  = regbits< type, 19,  1 >;  /**< Peripheral CD Status.  */
    using P20  = regbits< type, 20,  1 >;  /**< Peripheral CD Status.  */
    using P21  = regbits< type, 21,  1 >;  /**< Peripheral CD Status.  */
    using P22  = regbits< type, 22,  1 >;  /**< Peripheral CD Status.  */
    using P23  = regbits< type, 23,  1 >;  /**< Peripheral CD Status.  */
    using P24  = regbits< type, 24,  1 >;  /**< Peripheral CD Status.  */
    using P25  = regbits< type, 25,  1 >;  /**< Peripheral CD Status.  */
    using P26  = regbits< type, 26,  1 >;  /**< Peripheral CD Status.  */
    using P27  = regbits< type, 27,  1 >;  /**< Peripheral CD Status.  */
    using P28  = regbits< type, 28,  1 >;  /**< Peripheral CD Status.  */
    using P29  = regbits< type, 29,  1 >;  /**< Peripheral CD Status.  */
    using P30  = regbits< type, 30,  1 >;  /**< Peripheral CD Status.  */
    using P31  = regbits< type, 31,  1 >;  /**< Peripheral CD Status.  */
  };

  /**
   * Edge Select Register
   */
  struct ESR
  : public reg< uint32_t, base_addr + 0x000000c0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Edge Interrupt Selection.  */
    using P1   = regbits< type,  1,  1 >;  /**< Edge Interrupt Selection.  */
    using P2   = regbits< type,  2,  1 >;  /**< Edge Interrupt Selection.  */
    using P3   = regbits< type,  3,  1 >;  /**< Edge Interrupt Selection.  */
    using P4   = regbits< type,  4,  1 >;  /**< Edge Interrupt Selection.  */
    using P5   = regbits< type,  5,  1 >;  /**< Edge Interrupt Selection.  */
    using P6   = regbits< type,  6,  1 >;  /**< Edge Interrupt Selection.  */
    using P7   = regbits< type,  7,  1 >;  /**< Edge Interrupt Selection.  */
    using P8   = regbits< type,  8,  1 >;  /**< Edge Interrupt Selection.  */
    using P9   = regbits< type,  9,  1 >;  /**< Edge Interrupt Selection.  */
    using P10  = regbits< type, 10,  1 >;  /**< Edge Interrupt Selection.  */
    using P11  = regbits< type, 11,  1 >;  /**< Edge Interrupt Selection.  */
    using P12  = regbits< type, 12,  1 >;  /**< Edge Interrupt Selection.  */
    using P13  = regbits< type, 13,  1 >;  /**< Edge Interrupt Selection.  */
    using P14  = regbits< type, 14,  1 >;  /**< Edge Interrupt Selection.  */
    using P15  = regbits< type, 15,  1 >;  /**< Edge Interrupt Selection.  */
    using P16  = regbits< type, 16,  1 >;  /**< Edge Interrupt Selection.  */
    using P17  = regbits< type, 17,  1 >;  /**< Edge Interrupt Selection.  */
    using P18  = regbits< type, 18,  1 >;  /**< Edge Interrupt Selection.  */
    using P19  = regbits< type, 19,  1 >;  /**< Edge Interrupt Selection.  */
    using P20  = regbits< type, 20,  1 >;  /**< Edge Interrupt Selection.  */
    using P21  = regbits< type, 21,  1 >;  /**< Edge Interrupt Selection.  */
    using P22  = regbits< type, 22,  1 >;  /**< Edge Interrupt Selection.  */
    using P23  = regbits< type, 23,  1 >;  /**< Edge Interrupt Selection.  */
    using P24  = regbits< type, 24,  1 >;  /**< Edge Interrupt Selection.  */
    using P25  = regbits< type, 25,  1 >;  /**< Edge Interrupt Selection.  */
    using P26  = regbits< type, 26,  1 >;  /**< Edge Interrupt Selection.  */
    using P27  = regbits< type, 27,  1 >;  /**< Edge Interrupt Selection.  */
    using P28  = regbits< type, 28,  1 >;  /**< Edge Interrupt Selection.  */
    using P29  = regbits< type, 29,  1 >;  /**< Edge Interrupt Selection.  */
    using P30  = regbits< type, 30,  1 >;  /**< Edge Interrupt Selection.  */
    using P31  = regbits< type, 31,  1 >;  /**< Edge Interrupt Selection.  */
  };

  /**
   * Level Select Register
   */
  struct LSR
  : public reg< uint32_t, base_addr + 0x000000c4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Level Interrupt Selection.  */
    using P1   = regbits< type,  1,  1 >;  /**< Level Interrupt Selection.  */
    using P2   = regbits< type,  2,  1 >;  /**< Level Interrupt Selection.  */
    using P3   = regbits< type,  3,  1 >;  /**< Level Interrupt Selection.  */
    using P4   = regbits< type,  4,  1 >;  /**< Level Interrupt Selection.  */
    using P5   = regbits< type,  5,  1 >;  /**< Level Interrupt Selection.  */
    using P6   = regbits< type,  6,  1 >;  /**< Level Interrupt Selection.  */
    using P7   = regbits< type,  7,  1 >;  /**< Level Interrupt Selection.  */
    using P8   = regbits< type,  8,  1 >;  /**< Level Interrupt Selection.  */
    using P9   = regbits< type,  9,  1 >;  /**< Level Interrupt Selection.  */
    using P10  = regbits< type, 10,  1 >;  /**< Level Interrupt Selection.  */
    using P11  = regbits< type, 11,  1 >;  /**< Level Interrupt Selection.  */
    using P12  = regbits< type, 12,  1 >;  /**< Level Interrupt Selection.  */
    using P13  = regbits< type, 13,  1 >;  /**< Level Interrupt Selection.  */
    using P14  = regbits< type, 14,  1 >;  /**< Level Interrupt Selection.  */
    using P15  = regbits< type, 15,  1 >;  /**< Level Interrupt Selection.  */
    using P16  = regbits< type, 16,  1 >;  /**< Level Interrupt Selection.  */
    using P17  = regbits< type, 17,  1 >;  /**< Level Interrupt Selection.  */
    using P18  = regbits< type, 18,  1 >;  /**< Level Interrupt Selection.  */
    using P19  = regbits< type, 19,  1 >;  /**< Level Interrupt Selection.  */
    using P20  = regbits< type, 20,  1 >;  /**< Level Interrupt Selection.  */
    using P21  = regbits< type, 21,  1 >;  /**< Level Interrupt Selection.  */
    using P22  = regbits< type, 22,  1 >;  /**< Level Interrupt Selection.  */
    using P23  = regbits< type, 23,  1 >;  /**< Level Interrupt Selection.  */
    using P24  = regbits< type, 24,  1 >;  /**< Level Interrupt Selection.  */
    using P25  = regbits< type, 25,  1 >;  /**< Level Interrupt Selection.  */
    using P26  = regbits< type, 26,  1 >;  /**< Level Interrupt Selection.  */
    using P27  = regbits< type, 27,  1 >;  /**< Level Interrupt Selection.  */
    using P28  = regbits< type, 28,  1 >;  /**< Level Interrupt Selection.  */
    using P29  = regbits< type, 29,  1 >;  /**< Level Interrupt Selection.  */
    using P30  = regbits< type, 30,  1 >;  /**< Level Interrupt Selection.  */
    using P31  = regbits< type, 31,  1 >;  /**< Level Interrupt Selection.  */
  };

  /**
   * Edge/Level Status Register
   */
  struct ELSR
  : public reg< uint32_t, base_addr + 0x000000c8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P1   = regbits< type,  1,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P2   = regbits< type,  2,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P3   = regbits< type,  3,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P4   = regbits< type,  4,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P5   = regbits< type,  5,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P6   = regbits< type,  6,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P7   = regbits< type,  7,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P8   = regbits< type,  8,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P9   = regbits< type,  9,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P10  = regbits< type, 10,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P11  = regbits< type, 11,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P12  = regbits< type, 12,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P13  = regbits< type, 13,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P14  = regbits< type, 14,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P15  = regbits< type, 15,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P16  = regbits< type, 16,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P17  = regbits< type, 17,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P18  = regbits< type, 18,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P19  = regbits< type, 19,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P20  = regbits< type, 20,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P21  = regbits< type, 21,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P22  = regbits< type, 22,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P23  = regbits< type, 23,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P24  = regbits< type, 24,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P25  = regbits< type, 25,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P26  = regbits< type, 26,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P27  = regbits< type, 27,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P28  = regbits< type, 28,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P29  = regbits< type, 29,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P30  = regbits< type, 30,  1 >;  /**< Edge/Level Interrupt source selection.  */
    using P31  = regbits< type, 31,  1 >;  /**< Edge/Level Interrupt source selection.  */
  };

  /**
   * Falling Edge/Low Level Select Register
   */
  struct FELLSR
  : public reg< uint32_t, base_addr + 0x000000d0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d0, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P1   = regbits< type,  1,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P2   = regbits< type,  2,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P3   = regbits< type,  3,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P4   = regbits< type,  4,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P5   = regbits< type,  5,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P6   = regbits< type,  6,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P7   = regbits< type,  7,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P8   = regbits< type,  8,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P9   = regbits< type,  9,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P10  = regbits< type, 10,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P11  = regbits< type, 11,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P12  = regbits< type, 12,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P13  = regbits< type, 13,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P14  = regbits< type, 14,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P15  = regbits< type, 15,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P16  = regbits< type, 16,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P17  = regbits< type, 17,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P18  = regbits< type, 18,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P19  = regbits< type, 19,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P20  = regbits< type, 20,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P21  = regbits< type, 21,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P22  = regbits< type, 22,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P23  = regbits< type, 23,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P24  = regbits< type, 24,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P25  = regbits< type, 25,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P26  = regbits< type, 26,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P27  = regbits< type, 27,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P28  = regbits< type, 28,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P29  = regbits< type, 29,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P30  = regbits< type, 30,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
    using P31  = regbits< type, 31,  1 >;  /**< Falling Edge/Low Level Interrupt Selection.  */
  };

  /**
   * Rising Edge/ High Level Select Register
   */
  struct REHLSR
  : public reg< uint32_t, base_addr + 0x000000d4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d4, wo, 0 >;

    using P0   = regbits< type,  0,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P1   = regbits< type,  1,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P2   = regbits< type,  2,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P3   = regbits< type,  3,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P4   = regbits< type,  4,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P5   = regbits< type,  5,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P6   = regbits< type,  6,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P7   = regbits< type,  7,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P8   = regbits< type,  8,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P9   = regbits< type,  9,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P10  = regbits< type, 10,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P11  = regbits< type, 11,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P12  = regbits< type, 12,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P13  = regbits< type, 13,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P14  = regbits< type, 14,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P15  = regbits< type, 15,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P16  = regbits< type, 16,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P17  = regbits< type, 17,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P18  = regbits< type, 18,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P19  = regbits< type, 19,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P20  = regbits< type, 20,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P21  = regbits< type, 21,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P22  = regbits< type, 22,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P23  = regbits< type, 23,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P24  = regbits< type, 24,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P25  = regbits< type, 25,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P26  = regbits< type, 26,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P27  = regbits< type, 27,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P28  = regbits< type, 28,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P29  = regbits< type, 29,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P30  = regbits< type, 30,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
    using P31  = regbits< type, 31,  1 >;  /**< Rising Edge /High Level Interrupt Selection.  */
  };

  /**
   * Fall/Rise - Low/High Status Register
   */
  struct FRLHSR
  : public reg< uint32_t, base_addr + 0x000000d8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d8, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P1   = regbits< type,  1,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P2   = regbits< type,  2,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P3   = regbits< type,  3,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P4   = regbits< type,  4,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P5   = regbits< type,  5,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P6   = regbits< type,  6,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P7   = regbits< type,  7,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P8   = regbits< type,  8,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P9   = regbits< type,  9,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P10  = regbits< type, 10,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P11  = regbits< type, 11,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P12  = regbits< type, 12,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P13  = regbits< type, 13,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P14  = regbits< type, 14,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P15  = regbits< type, 15,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P16  = regbits< type, 16,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P17  = regbits< type, 17,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P18  = regbits< type, 18,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P19  = regbits< type, 19,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P20  = regbits< type, 20,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P21  = regbits< type, 21,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P22  = regbits< type, 22,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P23  = regbits< type, 23,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P24  = regbits< type, 24,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P25  = regbits< type, 25,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P26  = regbits< type, 26,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P27  = regbits< type, 27,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P28  = regbits< type, 28,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P29  = regbits< type, 29,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P30  = regbits< type, 30,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
    using P31  = regbits< type, 31,  1 >;  /**< Edge /Level Interrupt Source Selection.  */
  };

  /**
   * Lock Status
   */
  struct LOCKSR
  : public reg< uint32_t, base_addr + 0x000000e0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e0, ro, 0x00000000 >;

    using P0   = regbits< type,  0,  1 >;  /**< Lock Status.  */
    using P1   = regbits< type,  1,  1 >;  /**< Lock Status.  */
    using P2   = regbits< type,  2,  1 >;  /**< Lock Status.  */
    using P3   = regbits< type,  3,  1 >;  /**< Lock Status.  */
    using P4   = regbits< type,  4,  1 >;  /**< Lock Status.  */
    using P5   = regbits< type,  5,  1 >;  /**< Lock Status.  */
    using P6   = regbits< type,  6,  1 >;  /**< Lock Status.  */
    using P7   = regbits< type,  7,  1 >;  /**< Lock Status.  */
    using P8   = regbits< type,  8,  1 >;  /**< Lock Status.  */
    using P9   = regbits< type,  9,  1 >;  /**< Lock Status.  */
    using P10  = regbits< type, 10,  1 >;  /**< Lock Status.  */
    using P11  = regbits< type, 11,  1 >;  /**< Lock Status.  */
    using P12  = regbits< type, 12,  1 >;  /**< Lock Status.  */
    using P13  = regbits< type, 13,  1 >;  /**< Lock Status.  */
    using P14  = regbits< type, 14,  1 >;  /**< Lock Status.  */
    using P15  = regbits< type, 15,  1 >;  /**< Lock Status.  */
    using P16  = regbits< type, 16,  1 >;  /**< Lock Status.  */
    using P17  = regbits< type, 17,  1 >;  /**< Lock Status.  */
    using P18  = regbits< type, 18,  1 >;  /**< Lock Status.  */
    using P19  = regbits< type, 19,  1 >;  /**< Lock Status.  */
    using P20  = regbits< type, 20,  1 >;  /**< Lock Status.  */
    using P21  = regbits< type, 21,  1 >;  /**< Lock Status.  */
    using P22  = regbits< type, 22,  1 >;  /**< Lock Status.  */
    using P23  = regbits< type, 23,  1 >;  /**< Lock Status.  */
    using P24  = regbits< type, 24,  1 >;  /**< Lock Status.  */
    using P25  = regbits< type, 25,  1 >;  /**< Lock Status.  */
    using P26  = regbits< type, 26,  1 >;  /**< Lock Status.  */
    using P27  = regbits< type, 27,  1 >;  /**< Lock Status.  */
    using P28  = regbits< type, 28,  1 >;  /**< Lock Status.  */
    using P29  = regbits< type, 29,  1 >;  /**< Lock Status.  */
    using P30  = regbits< type, 30,  1 >;  /**< Lock Status.  */
    using P31  = regbits< type, 31,  1 >;  /**< Lock Status.  */
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Violation Status  */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };

  /**
   * Schmitt Trigger Register
   */
  struct SCHMITT
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >;

    using SCHMITT0   = regbits< type,  0,  1 >;
    using SCHMITT1   = regbits< type,  1,  1 >;
    using SCHMITT2   = regbits< type,  2,  1 >;
    using SCHMITT3   = regbits< type,  3,  1 >;
    using SCHMITT4   = regbits< type,  4,  1 >;
    using SCHMITT5   = regbits< type,  5,  1 >;
    using SCHMITT6   = regbits< type,  6,  1 >;
    using SCHMITT7   = regbits< type,  7,  1 >;
    using SCHMITT8   = regbits< type,  8,  1 >;
    using SCHMITT9   = regbits< type,  9,  1 >;
    using SCHMITT10  = regbits< type, 10,  1 >;
    using SCHMITT11  = regbits< type, 11,  1 >;
    using SCHMITT12  = regbits< type, 12,  1 >;
    using SCHMITT13  = regbits< type, 13,  1 >;
    using SCHMITT14  = regbits< type, 14,  1 >;
    using SCHMITT15  = regbits< type, 15,  1 >;
    using SCHMITT16  = regbits< type, 16,  1 >;
    using SCHMITT17  = regbits< type, 17,  1 >;
    using SCHMITT18  = regbits< type, 18,  1 >;
    using SCHMITT19  = regbits< type, 19,  1 >;
    using SCHMITT20  = regbits< type, 20,  1 >;
    using SCHMITT21  = regbits< type, 21,  1 >;
    using SCHMITT22  = regbits< type, 22,  1 >;
    using SCHMITT23  = regbits< type, 23,  1 >;
    using SCHMITT24  = regbits< type, 24,  1 >;
    using SCHMITT25  = regbits< type, 25,  1 >;
    using SCHMITT26  = regbits< type, 26,  1 >;
    using SCHMITT27  = regbits< type, 27,  1 >;
    using SCHMITT28  = regbits< type, 28,  1 >;
    using SCHMITT29  = regbits< type, 29,  1 >;
    using SCHMITT30  = regbits< type, 30,  1 >;
    using SCHMITT31  = regbits< type, 31,  1 >;
  };

  /**
   * Parallel Capture Mode Register
   */
  struct PCMR
  : public reg< uint32_t, base_addr + 0x00000150, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000150, rw, 0x00000000 >;

    using PCEN   = regbits< type,  0,  1 >;  /**< Parallel Capture Mode Enable           */
    using DSIZE  = regbits< type,  4,  2 >;  /**< Parallel Capture Mode Data Size        */
    using ALWYS  = regbits< type,  9,  1 >;  /**< Parallel Capture Mode Always Sampling  */
    using HALFS  = regbits< type, 10,  1 >;  /**< Parallel Capture Mode Half Sampling    */
    using FRSTS  = regbits< type, 11,  1 >;  /**< Parallel Capture Mode First Sample     */
  };

  /**
   * Parallel Capture Interrupt Enable Register
   */
  struct PCIER
  : public reg< uint32_t, base_addr + 0x00000154, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000154, wo, 0 >;

    using DRDY    = regbits< type,  0,  1 >;  /**< Parallel Capture Mode Data Ready Interrupt Enable     */
    using OVRE    = regbits< type,  1,  1 >;  /**< Parallel Capture Mode Overrun Error Interrupt Enable  */
    using ENDRX   = regbits< type,  2,  1 >;  /**< End of Reception Transfer Interrupt Enable            */
    using RXBUFF  = regbits< type,  3,  1 >;  /**< Reception Buffer Full Interrupt Enable                */
  };

  /**
   * Parallel Capture Interrupt Disable Register
   */
  struct PCIDR
  : public reg< uint32_t, base_addr + 0x00000158, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000158, wo, 0 >;

    using DRDY    = regbits< type,  0,  1 >;  /**< Parallel Capture Mode Data Ready Interrupt Disable     */
    using OVRE    = regbits< type,  1,  1 >;  /**< Parallel Capture Mode Overrun Error Interrupt Disable  */
    using ENDRX   = regbits< type,  2,  1 >;  /**< End of Reception Transfer Interrupt Disable            */
    using RXBUFF  = regbits< type,  3,  1 >;  /**< Reception Buffer Full Interrupt Disable                */
  };

  /**
   * Parallel Capture Interrupt Mask Register
   */
  struct PCIMR
  : public reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000000 >;

    using DRDY    = regbits< type,  0,  1 >;  /**< Parallel Capture Mode Data Ready Interrupt Mask     */
    using OVRE    = regbits< type,  1,  1 >;  /**< Parallel Capture Mode Overrun Error Interrupt Mask  */
    using ENDRX   = regbits< type,  2,  1 >;  /**< End of Reception Transfer Interrupt Mask            */
    using RXBUFF  = regbits< type,  3,  1 >;  /**< Reception Buffer Full Interrupt Mask                */
  };

  /**
   * Parallel Capture Interrupt Status Register
   */
  struct PCISR
  : public reg< uint32_t, base_addr + 0x00000160, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, ro, 0x00000000 >;

    using DRDY    = regbits< type,  0,  1 >;  /**< Parallel Capture Mode Data Ready      */
    using OVRE    = regbits< type,  1,  1 >;  /**< Parallel Capture Mode Overrun Error.  */
    using ENDRX   = regbits< type,  2,  1 >;  /**< End of Reception Transfer.            */
    using RXBUFF  = regbits< type,  3,  1 >;  /**< Reception Buffer Full                 */
  };

  /**
   * Parallel Capture Reception Holding Register
   */
  struct PCRHR
  : public reg< uint32_t, base_addr + 0x00000164, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, ro, 0x00000000 >;

    using RDATA  = regbits< type,  0, 32 >;  /**< Parallel Capture Mode Reception Data.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PIOB_HPP_INCLUDED
