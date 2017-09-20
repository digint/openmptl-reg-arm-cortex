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
//  Import from CMSIS-SVD: "Nordic/nrf52.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf52
//  series: nrf52
//  version: 1
//  description: nRF52 reference description for radio MCU with ARM 32-bit Cortex-M4 Microcontroller
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
 * Programmable Peripheral Interconnect
 */
struct PPI
{
  static constexpr reg_addr_t base_addr = 0x4001f000;

  /**
   * Channel enable register
   */
  struct CHEN
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0   = regbits< type,  0,  1 >;  /**< Enable or disable channel 0   */
    using CH1   = regbits< type,  1,  1 >;  /**< Enable or disable channel 1   */
    using CH2   = regbits< type,  2,  1 >;  /**< Enable or disable channel 2   */
    using CH3   = regbits< type,  3,  1 >;  /**< Enable or disable channel 3   */
    using CH4   = regbits< type,  4,  1 >;  /**< Enable or disable channel 4   */
    using CH5   = regbits< type,  5,  1 >;  /**< Enable or disable channel 5   */
    using CH6   = regbits< type,  6,  1 >;  /**< Enable or disable channel 6   */
    using CH7   = regbits< type,  7,  1 >;  /**< Enable or disable channel 7   */
    using CH8   = regbits< type,  8,  1 >;  /**< Enable or disable channel 8   */
    using CH9   = regbits< type,  9,  1 >;  /**< Enable or disable channel 9   */
    using CH10  = regbits< type, 10,  1 >;  /**< Enable or disable channel 10  */
    using CH11  = regbits< type, 11,  1 >;  /**< Enable or disable channel 11  */
    using CH12  = regbits< type, 12,  1 >;  /**< Enable or disable channel 12  */
    using CH13  = regbits< type, 13,  1 >;  /**< Enable or disable channel 13  */
    using CH14  = regbits< type, 14,  1 >;  /**< Enable or disable channel 14  */
    using CH15  = regbits< type, 15,  1 >;  /**< Enable or disable channel 15  */
    using CH16  = regbits< type, 16,  1 >;  /**< Enable or disable channel 16  */
    using CH17  = regbits< type, 17,  1 >;  /**< Enable or disable channel 17  */
    using CH18  = regbits< type, 18,  1 >;  /**< Enable or disable channel 18  */
    using CH19  = regbits< type, 19,  1 >;  /**< Enable or disable channel 19  */
    using CH20  = regbits< type, 20,  1 >;  /**< Enable or disable channel 20  */
    using CH21  = regbits< type, 21,  1 >;  /**< Enable or disable channel 21  */
    using CH22  = regbits< type, 22,  1 >;  /**< Enable or disable channel 22  */
    using CH23  = regbits< type, 23,  1 >;  /**< Enable or disable channel 23  */
    using CH24  = regbits< type, 24,  1 >;  /**< Enable or disable channel 24  */
    using CH25  = regbits< type, 25,  1 >;  /**< Enable or disable channel 25  */
    using CH26  = regbits< type, 26,  1 >;  /**< Enable or disable channel 26  */
    using CH27  = regbits< type, 27,  1 >;  /**< Enable or disable channel 27  */
    using CH28  = regbits< type, 28,  1 >;  /**< Enable or disable channel 28  */
    using CH29  = regbits< type, 29,  1 >;  /**< Enable or disable channel 29  */
    using CH30  = regbits< type, 30,  1 >;  /**< Enable or disable channel 30  */
    using CH31  = regbits< type, 31,  1 >;  /**< Enable or disable channel 31  */
  };

  /**
   * Channel enable set register
   */
  struct CHENSET
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0   = regbits< type,  0,  1 >;  /**< Channel 0 enable set register. Writing '0' has no effect   */
    using CH1   = regbits< type,  1,  1 >;  /**< Channel 1 enable set register. Writing '0' has no effect   */
    using CH2   = regbits< type,  2,  1 >;  /**< Channel 2 enable set register. Writing '0' has no effect   */
    using CH3   = regbits< type,  3,  1 >;  /**< Channel 3 enable set register. Writing '0' has no effect   */
    using CH4   = regbits< type,  4,  1 >;  /**< Channel 4 enable set register. Writing '0' has no effect   */
    using CH5   = regbits< type,  5,  1 >;  /**< Channel 5 enable set register. Writing '0' has no effect   */
    using CH6   = regbits< type,  6,  1 >;  /**< Channel 6 enable set register. Writing '0' has no effect   */
    using CH7   = regbits< type,  7,  1 >;  /**< Channel 7 enable set register. Writing '0' has no effect   */
    using CH8   = regbits< type,  8,  1 >;  /**< Channel 8 enable set register. Writing '0' has no effect   */
    using CH9   = regbits< type,  9,  1 >;  /**< Channel 9 enable set register. Writing '0' has no effect   */
    using CH10  = regbits< type, 10,  1 >;  /**< Channel 10 enable set register. Writing '0' has no effect  */
    using CH11  = regbits< type, 11,  1 >;  /**< Channel 11 enable set register. Writing '0' has no effect  */
    using CH12  = regbits< type, 12,  1 >;  /**< Channel 12 enable set register. Writing '0' has no effect  */
    using CH13  = regbits< type, 13,  1 >;  /**< Channel 13 enable set register. Writing '0' has no effect  */
    using CH14  = regbits< type, 14,  1 >;  /**< Channel 14 enable set register. Writing '0' has no effect  */
    using CH15  = regbits< type, 15,  1 >;  /**< Channel 15 enable set register. Writing '0' has no effect  */
    using CH16  = regbits< type, 16,  1 >;  /**< Channel 16 enable set register. Writing '0' has no effect  */
    using CH17  = regbits< type, 17,  1 >;  /**< Channel 17 enable set register. Writing '0' has no effect  */
    using CH18  = regbits< type, 18,  1 >;  /**< Channel 18 enable set register. Writing '0' has no effect  */
    using CH19  = regbits< type, 19,  1 >;  /**< Channel 19 enable set register. Writing '0' has no effect  */
    using CH20  = regbits< type, 20,  1 >;  /**< Channel 20 enable set register. Writing '0' has no effect  */
    using CH21  = regbits< type, 21,  1 >;  /**< Channel 21 enable set register. Writing '0' has no effect  */
    using CH22  = regbits< type, 22,  1 >;  /**< Channel 22 enable set register. Writing '0' has no effect  */
    using CH23  = regbits< type, 23,  1 >;  /**< Channel 23 enable set register. Writing '0' has no effect  */
    using CH24  = regbits< type, 24,  1 >;  /**< Channel 24 enable set register. Writing '0' has no effect  */
    using CH25  = regbits< type, 25,  1 >;  /**< Channel 25 enable set register. Writing '0' has no effect  */
    using CH26  = regbits< type, 26,  1 >;  /**< Channel 26 enable set register. Writing '0' has no effect  */
    using CH27  = regbits< type, 27,  1 >;  /**< Channel 27 enable set register. Writing '0' has no effect  */
    using CH28  = regbits< type, 28,  1 >;  /**< Channel 28 enable set register. Writing '0' has no effect  */
    using CH29  = regbits< type, 29,  1 >;  /**< Channel 29 enable set register. Writing '0' has no effect  */
    using CH30  = regbits< type, 30,  1 >;  /**< Channel 30 enable set register. Writing '0' has no effect  */
    using CH31  = regbits< type, 31,  1 >;  /**< Channel 31 enable set register. Writing '0' has no effect  */
  };

  /**
   * Channel enable clear register
   */
  struct CHENCLR
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0   = regbits< type,  0,  1 >;  /**< Channel 0 enable clear register. Writing '0' has no effect   */
    using CH1   = regbits< type,  1,  1 >;  /**< Channel 1 enable clear register. Writing '0' has no effect   */
    using CH2   = regbits< type,  2,  1 >;  /**< Channel 2 enable clear register. Writing '0' has no effect   */
    using CH3   = regbits< type,  3,  1 >;  /**< Channel 3 enable clear register. Writing '0' has no effect   */
    using CH4   = regbits< type,  4,  1 >;  /**< Channel 4 enable clear register. Writing '0' has no effect   */
    using CH5   = regbits< type,  5,  1 >;  /**< Channel 5 enable clear register. Writing '0' has no effect   */
    using CH6   = regbits< type,  6,  1 >;  /**< Channel 6 enable clear register. Writing '0' has no effect   */
    using CH7   = regbits< type,  7,  1 >;  /**< Channel 7 enable clear register. Writing '0' has no effect   */
    using CH8   = regbits< type,  8,  1 >;  /**< Channel 8 enable clear register. Writing '0' has no effect   */
    using CH9   = regbits< type,  9,  1 >;  /**< Channel 9 enable clear register. Writing '0' has no effect   */
    using CH10  = regbits< type, 10,  1 >;  /**< Channel 10 enable clear register. Writing '0' has no effect  */
    using CH11  = regbits< type, 11,  1 >;  /**< Channel 11 enable clear register. Writing '0' has no effect  */
    using CH12  = regbits< type, 12,  1 >;  /**< Channel 12 enable clear register. Writing '0' has no effect  */
    using CH13  = regbits< type, 13,  1 >;  /**< Channel 13 enable clear register. Writing '0' has no effect  */
    using CH14  = regbits< type, 14,  1 >;  /**< Channel 14 enable clear register. Writing '0' has no effect  */
    using CH15  = regbits< type, 15,  1 >;  /**< Channel 15 enable clear register. Writing '0' has no effect  */
    using CH16  = regbits< type, 16,  1 >;  /**< Channel 16 enable clear register. Writing '0' has no effect  */
    using CH17  = regbits< type, 17,  1 >;  /**< Channel 17 enable clear register. Writing '0' has no effect  */
    using CH18  = regbits< type, 18,  1 >;  /**< Channel 18 enable clear register. Writing '0' has no effect  */
    using CH19  = regbits< type, 19,  1 >;  /**< Channel 19 enable clear register. Writing '0' has no effect  */
    using CH20  = regbits< type, 20,  1 >;  /**< Channel 20 enable clear register. Writing '0' has no effect  */
    using CH21  = regbits< type, 21,  1 >;  /**< Channel 21 enable clear register. Writing '0' has no effect  */
    using CH22  = regbits< type, 22,  1 >;  /**< Channel 22 enable clear register. Writing '0' has no effect  */
    using CH23  = regbits< type, 23,  1 >;  /**< Channel 23 enable clear register. Writing '0' has no effect  */
    using CH24  = regbits< type, 24,  1 >;  /**< Channel 24 enable clear register. Writing '0' has no effect  */
    using CH25  = regbits< type, 25,  1 >;  /**< Channel 25 enable clear register. Writing '0' has no effect  */
    using CH26  = regbits< type, 26,  1 >;  /**< Channel 26 enable clear register. Writing '0' has no effect  */
    using CH27  = regbits< type, 27,  1 >;  /**< Channel 27 enable clear register. Writing '0' has no effect  */
    using CH28  = regbits< type, 28,  1 >;  /**< Channel 28 enable clear register. Writing '0' has no effect  */
    using CH29  = regbits< type, 29,  1 >;  /**< Channel 29 enable clear register. Writing '0' has no effect  */
    using CH30  = regbits< type, 30,  1 >;  /**< Channel 30 enable clear register. Writing '0' has no effect  */
    using CH31  = regbits< type, 31,  1 >;  /**< Channel 31 enable clear register. Writing '0' has no effect  */
  };

  /**
   * Description collection[0]: Channel group 0
   */
  struct CHG[%s]
  : public reg< uint32_t, base_addr + 0x800, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0   = regbits< type,  0,  1 >;  /**< Include or exclude channel 0   */
    using CH1   = regbits< type,  1,  1 >;  /**< Include or exclude channel 1   */
    using CH2   = regbits< type,  2,  1 >;  /**< Include or exclude channel 2   */
    using CH3   = regbits< type,  3,  1 >;  /**< Include or exclude channel 3   */
    using CH4   = regbits< type,  4,  1 >;  /**< Include or exclude channel 4   */
    using CH5   = regbits< type,  5,  1 >;  /**< Include or exclude channel 5   */
    using CH6   = regbits< type,  6,  1 >;  /**< Include or exclude channel 6   */
    using CH7   = regbits< type,  7,  1 >;  /**< Include or exclude channel 7   */
    using CH8   = regbits< type,  8,  1 >;  /**< Include or exclude channel 8   */
    using CH9   = regbits< type,  9,  1 >;  /**< Include or exclude channel 9   */
    using CH10  = regbits< type, 10,  1 >;  /**< Include or exclude channel 10  */
    using CH11  = regbits< type, 11,  1 >;  /**< Include or exclude channel 11  */
    using CH12  = regbits< type, 12,  1 >;  /**< Include or exclude channel 12  */
    using CH13  = regbits< type, 13,  1 >;  /**< Include or exclude channel 13  */
    using CH14  = regbits< type, 14,  1 >;  /**< Include or exclude channel 14  */
    using CH15  = regbits< type, 15,  1 >;  /**< Include or exclude channel 15  */
    using CH16  = regbits< type, 16,  1 >;  /**< Include or exclude channel 16  */
    using CH17  = regbits< type, 17,  1 >;  /**< Include or exclude channel 17  */
    using CH18  = regbits< type, 18,  1 >;  /**< Include or exclude channel 18  */
    using CH19  = regbits< type, 19,  1 >;  /**< Include or exclude channel 19  */
    using CH20  = regbits< type, 20,  1 >;  /**< Include or exclude channel 20  */
    using CH21  = regbits< type, 21,  1 >;  /**< Include or exclude channel 21  */
    using CH22  = regbits< type, 22,  1 >;  /**< Include or exclude channel 22  */
    using CH23  = regbits< type, 23,  1 >;  /**< Include or exclude channel 23  */
    using CH24  = regbits< type, 24,  1 >;  /**< Include or exclude channel 24  */
    using CH25  = regbits< type, 25,  1 >;  /**< Include or exclude channel 25  */
    using CH26  = regbits< type, 26,  1 >;  /**< Include or exclude channel 26  */
    using CH27  = regbits< type, 27,  1 >;  /**< Include or exclude channel 27  */
    using CH28  = regbits< type, 28,  1 >;  /**< Include or exclude channel 28  */
    using CH29  = regbits< type, 29,  1 >;  /**< Include or exclude channel 29  */
    using CH30  = regbits< type, 30,  1 >;  /**< Include or exclude channel 30  */
    using CH31  = regbits< type, 31,  1 >;  /**< Include or exclude channel 31  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PPI_HPP_INCLUDED
