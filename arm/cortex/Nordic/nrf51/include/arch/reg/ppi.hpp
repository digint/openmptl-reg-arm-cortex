/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Nordic/nrf51.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf51
//  series: nrf51
//  version: 522
//  description: nRF51 reference description for radio MCU with ARM 32-bit Cortex-M0 Microcontroller at 16MHz CPU clock
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PPI_HPP_INCLUDED
#define ARCH_REG_PPI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * PPI controller.
 */
struct PPI
{
  static constexpr reg_addr_t base_addr = 0x4001f000;

  /**
   * Channel enable.
   */
  struct CHEN
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0   = regbits< type,  0,  1 >;  /**< Enable PPI channel 0.   */
    using CH1   = regbits< type,  1,  1 >;  /**< Enable PPI channel 1.   */
    using CH2   = regbits< type,  2,  1 >;  /**< Enable PPI channel 2.   */
    using CH3   = regbits< type,  3,  1 >;  /**< Enable PPI channel 3.   */
    using CH4   = regbits< type,  4,  1 >;  /**< Enable PPI channel 4.   */
    using CH5   = regbits< type,  5,  1 >;  /**< Enable PPI channel 5.   */
    using CH6   = regbits< type,  6,  1 >;  /**< Enable PPI channel 6.   */
    using CH7   = regbits< type,  7,  1 >;  /**< Enable PPI channel 7.   */
    using CH8   = regbits< type,  8,  1 >;  /**< Enable PPI channel 8.   */
    using CH9   = regbits< type,  9,  1 >;  /**< Enable PPI channel 9.   */
    using CH10  = regbits< type, 10,  1 >;  /**< Enable PPI channel 10.  */
    using CH11  = regbits< type, 11,  1 >;  /**< Enable PPI channel 11.  */
    using CH12  = regbits< type, 12,  1 >;  /**< Enable PPI channel 12.  */
    using CH13  = regbits< type, 13,  1 >;  /**< Enable PPI channel 13.  */
    using CH14  = regbits< type, 14,  1 >;  /**< Enable PPI channel 14.  */
    using CH15  = regbits< type, 15,  1 >;  /**< Enable PPI channel 15.  */
    using CH20  = regbits< type, 20,  1 >;  /**< Enable PPI channel 20.  */
    using CH21  = regbits< type, 21,  1 >;  /**< Enable PPI channel 21.  */
    using CH22  = regbits< type, 22,  1 >;  /**< Enable PPI channel 22.  */
    using CH23  = regbits< type, 23,  1 >;  /**< Enable PPI channel 23.  */
    using CH24  = regbits< type, 24,  1 >;  /**< Enable PPI channel 24.  */
    using CH25  = regbits< type, 25,  1 >;  /**< Enable PPI channel 25.  */
    using CH26  = regbits< type, 26,  1 >;  /**< Enable PPI channel 26.  */
    using CH27  = regbits< type, 27,  1 >;  /**< Enable PPI channel 27.  */
    using CH28  = regbits< type, 28,  1 >;  /**< Enable PPI channel 28.  */
    using CH29  = regbits< type, 29,  1 >;  /**< Enable PPI channel 29.  */
    using CH30  = regbits< type, 30,  1 >;  /**< Enable PPI channel 30.  */
    using CH31  = regbits< type, 31,  1 >;  /**< Enable PPI channel 31.  */
  };

  /**
   * Channel enable set.
   */
  struct CHENSET
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0   = regbits< type,  0,  1 >;  /**< Enable PPI channel 0.   */
    using CH1   = regbits< type,  1,  1 >;  /**< Enable PPI channel 1.   */
    using CH2   = regbits< type,  2,  1 >;  /**< Enable PPI channel 2.   */
    using CH3   = regbits< type,  3,  1 >;  /**< Enable PPI channel 3.   */
    using CH4   = regbits< type,  4,  1 >;  /**< Enable PPI channel 4.   */
    using CH5   = regbits< type,  5,  1 >;  /**< Enable PPI channel 5.   */
    using CH6   = regbits< type,  6,  1 >;  /**< Enable PPI channel 6.   */
    using CH7   = regbits< type,  7,  1 >;  /**< Enable PPI channel 7.   */
    using CH8   = regbits< type,  8,  1 >;  /**< Enable PPI channel 8.   */
    using CH9   = regbits< type,  9,  1 >;  /**< Enable PPI channel 9.   */
    using CH10  = regbits< type, 10,  1 >;  /**< Enable PPI channel 10.  */
    using CH11  = regbits< type, 11,  1 >;  /**< Enable PPI channel 11.  */
    using CH12  = regbits< type, 12,  1 >;  /**< Enable PPI channel 12.  */
    using CH13  = regbits< type, 13,  1 >;  /**< Enable PPI channel 13.  */
    using CH14  = regbits< type, 14,  1 >;  /**< Enable PPI channel 14.  */
    using CH15  = regbits< type, 15,  1 >;  /**< Enable PPI channel 15.  */
    using CH20  = regbits< type, 20,  1 >;  /**< Enable PPI channel 20.  */
    using CH21  = regbits< type, 21,  1 >;  /**< Enable PPI channel 21.  */
    using CH22  = regbits< type, 22,  1 >;  /**< Enable PPI channel 22.  */
    using CH23  = regbits< type, 23,  1 >;  /**< Enable PPI channel 23.  */
    using CH24  = regbits< type, 24,  1 >;  /**< Enable PPI channel 24.  */
    using CH25  = regbits< type, 25,  1 >;  /**< Enable PPI channel 25.  */
    using CH26  = regbits< type, 26,  1 >;  /**< Enable PPI channel 26.  */
    using CH27  = regbits< type, 27,  1 >;  /**< Enable PPI channel 27.  */
    using CH28  = regbits< type, 28,  1 >;  /**< Enable PPI channel 28.  */
    using CH29  = regbits< type, 29,  1 >;  /**< Enable PPI channel 29.  */
    using CH30  = regbits< type, 30,  1 >;  /**< Enable PPI channel 30.  */
    using CH31  = regbits< type, 31,  1 >;  /**< Enable PPI channel 31.  */
  };

  /**
   * Channel enable clear.
   */
  struct CHENCLR
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0   = regbits< type,  0,  1 >;  /**< Disable PPI channel 0.   */
    using CH1   = regbits< type,  1,  1 >;  /**< Disable PPI channel 1.   */
    using CH2   = regbits< type,  2,  1 >;  /**< Disable PPI channel 2.   */
    using CH3   = regbits< type,  3,  1 >;  /**< Disable PPI channel 3.   */
    using CH4   = regbits< type,  4,  1 >;  /**< Disable PPI channel 4.   */
    using CH5   = regbits< type,  5,  1 >;  /**< Disable PPI channel 5.   */
    using CH6   = regbits< type,  6,  1 >;  /**< Disable PPI channel 6.   */
    using CH7   = regbits< type,  7,  1 >;  /**< Disable PPI channel 7.   */
    using CH8   = regbits< type,  8,  1 >;  /**< Disable PPI channel 8.   */
    using CH9   = regbits< type,  9,  1 >;  /**< Disable PPI channel 9.   */
    using CH10  = regbits< type, 10,  1 >;  /**< Disable PPI channel 10.  */
    using CH11  = regbits< type, 11,  1 >;  /**< Disable PPI channel 11.  */
    using CH12  = regbits< type, 12,  1 >;  /**< Disable PPI channel 12.  */
    using CH13  = regbits< type, 13,  1 >;  /**< Disable PPI channel 13.  */
    using CH14  = regbits< type, 14,  1 >;  /**< Disable PPI channel 14.  */
    using CH15  = regbits< type, 15,  1 >;  /**< Disable PPI channel 15.  */
    using CH20  = regbits< type, 20,  1 >;  /**< Disable PPI channel 20.  */
    using CH21  = regbits< type, 21,  1 >;  /**< Disable PPI channel 21.  */
    using CH22  = regbits< type, 22,  1 >;  /**< Disable PPI channel 22.  */
    using CH23  = regbits< type, 23,  1 >;  /**< Disable PPI channel 23.  */
    using CH24  = regbits< type, 24,  1 >;  /**< Disable PPI channel 24.  */
    using CH25  = regbits< type, 25,  1 >;  /**< Disable PPI channel 25.  */
    using CH26  = regbits< type, 26,  1 >;  /**< Disable PPI channel 26.  */
    using CH27  = regbits< type, 27,  1 >;  /**< Disable PPI channel 27.  */
    using CH28  = regbits< type, 28,  1 >;  /**< Disable PPI channel 28.  */
    using CH29  = regbits< type, 29,  1 >;  /**< Disable PPI channel 29.  */
    using CH30  = regbits< type, 30,  1 >;  /**< Disable PPI channel 30.  */
    using CH31  = regbits< type, 31,  1 >;  /**< Disable PPI channel 31.  */
  };

  /**
   * Channel group configuration.
   */
  struct CHG[%s]
  : public reg< uint32_t, base_addr + 0x800, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0   = regbits< type,  0,  1 >;  /**< Include CH0 in channel group.   */
    using CH1   = regbits< type,  1,  1 >;  /**< Include CH1 in channel group.   */
    using CH2   = regbits< type,  2,  1 >;  /**< Include CH2 in channel group.   */
    using CH3   = regbits< type,  3,  1 >;  /**< Include CH3 in channel group.   */
    using CH4   = regbits< type,  4,  1 >;  /**< Include CH4 in channel group.   */
    using CH5   = regbits< type,  5,  1 >;  /**< Include CH5 in channel group.   */
    using CH6   = regbits< type,  6,  1 >;  /**< Include CH6 in channel group.   */
    using CH7   = regbits< type,  7,  1 >;  /**< Include CH7 in channel group.   */
    using CH8   = regbits< type,  8,  1 >;  /**< Include CH8 in channel group.   */
    using CH9   = regbits< type,  9,  1 >;  /**< Include CH9 in channel group.   */
    using CH10  = regbits< type, 10,  1 >;  /**< Include CH10 in channel group.  */
    using CH11  = regbits< type, 11,  1 >;  /**< Include CH11 in channel group.  */
    using CH12  = regbits< type, 12,  1 >;  /**< Include CH12 in channel group.  */
    using CH13  = regbits< type, 13,  1 >;  /**< Include CH13 in channel group.  */
    using CH14  = regbits< type, 14,  1 >;  /**< Include CH14 in channel group.  */
    using CH15  = regbits< type, 15,  1 >;  /**< Include CH15 in channel group.  */
    using CH20  = regbits< type, 20,  1 >;  /**< Include CH20 in channel group.  */
    using CH21  = regbits< type, 21,  1 >;  /**< Include CH21 in channel group.  */
    using CH22  = regbits< type, 22,  1 >;  /**< Include CH22 in channel group.  */
    using CH23  = regbits< type, 23,  1 >;  /**< Include CH23 in channel group.  */
    using CH24  = regbits< type, 24,  1 >;  /**< Include CH24 in channel group.  */
    using CH25  = regbits< type, 25,  1 >;  /**< Include CH25 in channel group.  */
    using CH26  = regbits< type, 26,  1 >;  /**< Include CH26 in channel group.  */
    using CH27  = regbits< type, 27,  1 >;  /**< Include CH27 in channel group.  */
    using CH28  = regbits< type, 28,  1 >;  /**< Include CH28 in channel group.  */
    using CH29  = regbits< type, 29,  1 >;  /**< Include CH29 in channel group.  */
    using CH30  = regbits< type, 30,  1 >;  /**< Include CH30 in channel group.  */
    using CH31  = regbits< type, 31,  1 >;  /**< Include CH31 in channel group.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PPI_HPP_INCLUDED
