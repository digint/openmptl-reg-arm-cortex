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

#ifndef ARCH_REG_P0_HPP_INCLUDED
#define ARCH_REG_P0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * GPIO Port 1
 */
struct P0
{
  static constexpr reg_addr_t base_addr = 0x50000000;

  /**
   * Write GPIO port
   */
  struct OUT
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< P0.0 pin   */
    using PIN1   = regbits< type,  1,  1 >;  /**< P0.1 pin   */
    using PIN2   = regbits< type,  2,  1 >;  /**< P0.2 pin   */
    using PIN3   = regbits< type,  3,  1 >;  /**< P0.3 pin   */
    using PIN4   = regbits< type,  4,  1 >;  /**< P0.4 pin   */
    using PIN5   = regbits< type,  5,  1 >;  /**< P0.5 pin   */
    using PIN6   = regbits< type,  6,  1 >;  /**< P0.6 pin   */
    using PIN7   = regbits< type,  7,  1 >;  /**< P0.7 pin   */
    using PIN8   = regbits< type,  8,  1 >;  /**< P0.8 pin   */
    using PIN9   = regbits< type,  9,  1 >;  /**< P0.9 pin   */
    using PIN10  = regbits< type, 10,  1 >;  /**< P0.10 pin  */
    using PIN11  = regbits< type, 11,  1 >;  /**< P0.11 pin  */
    using PIN12  = regbits< type, 12,  1 >;  /**< P0.12 pin  */
    using PIN13  = regbits< type, 13,  1 >;  /**< P0.13 pin  */
    using PIN14  = regbits< type, 14,  1 >;  /**< P0.14 pin  */
    using PIN15  = regbits< type, 15,  1 >;  /**< P0.15 pin  */
    using PIN16  = regbits< type, 16,  1 >;  /**< P0.16 pin  */
    using PIN17  = regbits< type, 17,  1 >;  /**< P0.17 pin  */
    using PIN18  = regbits< type, 18,  1 >;  /**< P0.18 pin  */
    using PIN19  = regbits< type, 19,  1 >;  /**< P0.19 pin  */
    using PIN20  = regbits< type, 20,  1 >;  /**< P0.20 pin  */
    using PIN21  = regbits< type, 21,  1 >;  /**< P0.21 pin  */
    using PIN22  = regbits< type, 22,  1 >;  /**< P0.22 pin  */
    using PIN23  = regbits< type, 23,  1 >;  /**< P0.23 pin  */
    using PIN24  = regbits< type, 24,  1 >;  /**< P0.24 pin  */
    using PIN25  = regbits< type, 25,  1 >;  /**< P0.25 pin  */
    using PIN26  = regbits< type, 26,  1 >;  /**< P0.26 pin  */
    using PIN27  = regbits< type, 27,  1 >;  /**< P0.27 pin  */
    using PIN28  = regbits< type, 28,  1 >;  /**< P0.28 pin  */
    using PIN29  = regbits< type, 29,  1 >;  /**< P0.29 pin  */
    using PIN30  = regbits< type, 30,  1 >;  /**< P0.30 pin  */
    using PIN31  = regbits< type, 31,  1 >;  /**< P0.31 pin  */
  };

  /**
   * Set individual bits in GPIO port
   */
  struct OUTSET
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< P0.0 pin   */
    using PIN1   = regbits< type,  1,  1 >;  /**< P0.1 pin   */
    using PIN2   = regbits< type,  2,  1 >;  /**< P0.2 pin   */
    using PIN3   = regbits< type,  3,  1 >;  /**< P0.3 pin   */
    using PIN4   = regbits< type,  4,  1 >;  /**< P0.4 pin   */
    using PIN5   = regbits< type,  5,  1 >;  /**< P0.5 pin   */
    using PIN6   = regbits< type,  6,  1 >;  /**< P0.6 pin   */
    using PIN7   = regbits< type,  7,  1 >;  /**< P0.7 pin   */
    using PIN8   = regbits< type,  8,  1 >;  /**< P0.8 pin   */
    using PIN9   = regbits< type,  9,  1 >;  /**< P0.9 pin   */
    using PIN10  = regbits< type, 10,  1 >;  /**< P0.10 pin  */
    using PIN11  = regbits< type, 11,  1 >;  /**< P0.11 pin  */
    using PIN12  = regbits< type, 12,  1 >;  /**< P0.12 pin  */
    using PIN13  = regbits< type, 13,  1 >;  /**< P0.13 pin  */
    using PIN14  = regbits< type, 14,  1 >;  /**< P0.14 pin  */
    using PIN15  = regbits< type, 15,  1 >;  /**< P0.15 pin  */
    using PIN16  = regbits< type, 16,  1 >;  /**< P0.16 pin  */
    using PIN17  = regbits< type, 17,  1 >;  /**< P0.17 pin  */
    using PIN18  = regbits< type, 18,  1 >;  /**< P0.18 pin  */
    using PIN19  = regbits< type, 19,  1 >;  /**< P0.19 pin  */
    using PIN20  = regbits< type, 20,  1 >;  /**< P0.20 pin  */
    using PIN21  = regbits< type, 21,  1 >;  /**< P0.21 pin  */
    using PIN22  = regbits< type, 22,  1 >;  /**< P0.22 pin  */
    using PIN23  = regbits< type, 23,  1 >;  /**< P0.23 pin  */
    using PIN24  = regbits< type, 24,  1 >;  /**< P0.24 pin  */
    using PIN25  = regbits< type, 25,  1 >;  /**< P0.25 pin  */
    using PIN26  = regbits< type, 26,  1 >;  /**< P0.26 pin  */
    using PIN27  = regbits< type, 27,  1 >;  /**< P0.27 pin  */
    using PIN28  = regbits< type, 28,  1 >;  /**< P0.28 pin  */
    using PIN29  = regbits< type, 29,  1 >;  /**< P0.29 pin  */
    using PIN30  = regbits< type, 30,  1 >;  /**< P0.30 pin  */
    using PIN31  = regbits< type, 31,  1 >;  /**< P0.31 pin  */
  };

  /**
   * Clear individual bits in GPIO port
   */
  struct OUTCLR
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< P0.0 pin   */
    using PIN1   = regbits< type,  1,  1 >;  /**< P0.1 pin   */
    using PIN2   = regbits< type,  2,  1 >;  /**< P0.2 pin   */
    using PIN3   = regbits< type,  3,  1 >;  /**< P0.3 pin   */
    using PIN4   = regbits< type,  4,  1 >;  /**< P0.4 pin   */
    using PIN5   = regbits< type,  5,  1 >;  /**< P0.5 pin   */
    using PIN6   = regbits< type,  6,  1 >;  /**< P0.6 pin   */
    using PIN7   = regbits< type,  7,  1 >;  /**< P0.7 pin   */
    using PIN8   = regbits< type,  8,  1 >;  /**< P0.8 pin   */
    using PIN9   = regbits< type,  9,  1 >;  /**< P0.9 pin   */
    using PIN10  = regbits< type, 10,  1 >;  /**< P0.10 pin  */
    using PIN11  = regbits< type, 11,  1 >;  /**< P0.11 pin  */
    using PIN12  = regbits< type, 12,  1 >;  /**< P0.12 pin  */
    using PIN13  = regbits< type, 13,  1 >;  /**< P0.13 pin  */
    using PIN14  = regbits< type, 14,  1 >;  /**< P0.14 pin  */
    using PIN15  = regbits< type, 15,  1 >;  /**< P0.15 pin  */
    using PIN16  = regbits< type, 16,  1 >;  /**< P0.16 pin  */
    using PIN17  = regbits< type, 17,  1 >;  /**< P0.17 pin  */
    using PIN18  = regbits< type, 18,  1 >;  /**< P0.18 pin  */
    using PIN19  = regbits< type, 19,  1 >;  /**< P0.19 pin  */
    using PIN20  = regbits< type, 20,  1 >;  /**< P0.20 pin  */
    using PIN21  = regbits< type, 21,  1 >;  /**< P0.21 pin  */
    using PIN22  = regbits< type, 22,  1 >;  /**< P0.22 pin  */
    using PIN23  = regbits< type, 23,  1 >;  /**< P0.23 pin  */
    using PIN24  = regbits< type, 24,  1 >;  /**< P0.24 pin  */
    using PIN25  = regbits< type, 25,  1 >;  /**< P0.25 pin  */
    using PIN26  = regbits< type, 26,  1 >;  /**< P0.26 pin  */
    using PIN27  = regbits< type, 27,  1 >;  /**< P0.27 pin  */
    using PIN28  = regbits< type, 28,  1 >;  /**< P0.28 pin  */
    using PIN29  = regbits< type, 29,  1 >;  /**< P0.29 pin  */
    using PIN30  = regbits< type, 30,  1 >;  /**< P0.30 pin  */
    using PIN31  = regbits< type, 31,  1 >;  /**< P0.31 pin  */
  };

  /**
   * Read GPIO port
   */
  struct IN
  : public reg< uint32_t, base_addr + 0x510, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< P0.0 pin   */
    using PIN1   = regbits< type,  1,  1 >;  /**< P0.1 pin   */
    using PIN2   = regbits< type,  2,  1 >;  /**< P0.2 pin   */
    using PIN3   = regbits< type,  3,  1 >;  /**< P0.3 pin   */
    using PIN4   = regbits< type,  4,  1 >;  /**< P0.4 pin   */
    using PIN5   = regbits< type,  5,  1 >;  /**< P0.5 pin   */
    using PIN6   = regbits< type,  6,  1 >;  /**< P0.6 pin   */
    using PIN7   = regbits< type,  7,  1 >;  /**< P0.7 pin   */
    using PIN8   = regbits< type,  8,  1 >;  /**< P0.8 pin   */
    using PIN9   = regbits< type,  9,  1 >;  /**< P0.9 pin   */
    using PIN10  = regbits< type, 10,  1 >;  /**< P0.10 pin  */
    using PIN11  = regbits< type, 11,  1 >;  /**< P0.11 pin  */
    using PIN12  = regbits< type, 12,  1 >;  /**< P0.12 pin  */
    using PIN13  = regbits< type, 13,  1 >;  /**< P0.13 pin  */
    using PIN14  = regbits< type, 14,  1 >;  /**< P0.14 pin  */
    using PIN15  = regbits< type, 15,  1 >;  /**< P0.15 pin  */
    using PIN16  = regbits< type, 16,  1 >;  /**< P0.16 pin  */
    using PIN17  = regbits< type, 17,  1 >;  /**< P0.17 pin  */
    using PIN18  = regbits< type, 18,  1 >;  /**< P0.18 pin  */
    using PIN19  = regbits< type, 19,  1 >;  /**< P0.19 pin  */
    using PIN20  = regbits< type, 20,  1 >;  /**< P0.20 pin  */
    using PIN21  = regbits< type, 21,  1 >;  /**< P0.21 pin  */
    using PIN22  = regbits< type, 22,  1 >;  /**< P0.22 pin  */
    using PIN23  = regbits< type, 23,  1 >;  /**< P0.23 pin  */
    using PIN24  = regbits< type, 24,  1 >;  /**< P0.24 pin  */
    using PIN25  = regbits< type, 25,  1 >;  /**< P0.25 pin  */
    using PIN26  = regbits< type, 26,  1 >;  /**< P0.26 pin  */
    using PIN27  = regbits< type, 27,  1 >;  /**< P0.27 pin  */
    using PIN28  = regbits< type, 28,  1 >;  /**< P0.28 pin  */
    using PIN29  = regbits< type, 29,  1 >;  /**< P0.29 pin  */
    using PIN30  = regbits< type, 30,  1 >;  /**< P0.30 pin  */
    using PIN31  = regbits< type, 31,  1 >;  /**< P0.31 pin  */
  };

  /**
   * Direction of GPIO pins
   */
  struct DIR
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< P0.0 pin   */
    using PIN1   = regbits< type,  1,  1 >;  /**< P0.1 pin   */
    using PIN2   = regbits< type,  2,  1 >;  /**< P0.2 pin   */
    using PIN3   = regbits< type,  3,  1 >;  /**< P0.3 pin   */
    using PIN4   = regbits< type,  4,  1 >;  /**< P0.4 pin   */
    using PIN5   = regbits< type,  5,  1 >;  /**< P0.5 pin   */
    using PIN6   = regbits< type,  6,  1 >;  /**< P0.6 pin   */
    using PIN7   = regbits< type,  7,  1 >;  /**< P0.7 pin   */
    using PIN8   = regbits< type,  8,  1 >;  /**< P0.8 pin   */
    using PIN9   = regbits< type,  9,  1 >;  /**< P0.9 pin   */
    using PIN10  = regbits< type, 10,  1 >;  /**< P0.10 pin  */
    using PIN11  = regbits< type, 11,  1 >;  /**< P0.11 pin  */
    using PIN12  = regbits< type, 12,  1 >;  /**< P0.12 pin  */
    using PIN13  = regbits< type, 13,  1 >;  /**< P0.13 pin  */
    using PIN14  = regbits< type, 14,  1 >;  /**< P0.14 pin  */
    using PIN15  = regbits< type, 15,  1 >;  /**< P0.15 pin  */
    using PIN16  = regbits< type, 16,  1 >;  /**< P0.16 pin  */
    using PIN17  = regbits< type, 17,  1 >;  /**< P0.17 pin  */
    using PIN18  = regbits< type, 18,  1 >;  /**< P0.18 pin  */
    using PIN19  = regbits< type, 19,  1 >;  /**< P0.19 pin  */
    using PIN20  = regbits< type, 20,  1 >;  /**< P0.20 pin  */
    using PIN21  = regbits< type, 21,  1 >;  /**< P0.21 pin  */
    using PIN22  = regbits< type, 22,  1 >;  /**< P0.22 pin  */
    using PIN23  = regbits< type, 23,  1 >;  /**< P0.23 pin  */
    using PIN24  = regbits< type, 24,  1 >;  /**< P0.24 pin  */
    using PIN25  = regbits< type, 25,  1 >;  /**< P0.25 pin  */
    using PIN26  = regbits< type, 26,  1 >;  /**< P0.26 pin  */
    using PIN27  = regbits< type, 27,  1 >;  /**< P0.27 pin  */
    using PIN28  = regbits< type, 28,  1 >;  /**< P0.28 pin  */
    using PIN29  = regbits< type, 29,  1 >;  /**< P0.29 pin  */
    using PIN30  = regbits< type, 30,  1 >;  /**< P0.30 pin  */
    using PIN31  = regbits< type, 31,  1 >;  /**< P0.31 pin  */
  };

  /**
   * DIR set register
   */
  struct DIRSET
  : public reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< Set as output pin 0   */
    using PIN1   = regbits< type,  1,  1 >;  /**< Set as output pin 1   */
    using PIN2   = regbits< type,  2,  1 >;  /**< Set as output pin 2   */
    using PIN3   = regbits< type,  3,  1 >;  /**< Set as output pin 3   */
    using PIN4   = regbits< type,  4,  1 >;  /**< Set as output pin 4   */
    using PIN5   = regbits< type,  5,  1 >;  /**< Set as output pin 5   */
    using PIN6   = regbits< type,  6,  1 >;  /**< Set as output pin 6   */
    using PIN7   = regbits< type,  7,  1 >;  /**< Set as output pin 7   */
    using PIN8   = regbits< type,  8,  1 >;  /**< Set as output pin 8   */
    using PIN9   = regbits< type,  9,  1 >;  /**< Set as output pin 9   */
    using PIN10  = regbits< type, 10,  1 >;  /**< Set as output pin 10  */
    using PIN11  = regbits< type, 11,  1 >;  /**< Set as output pin 11  */
    using PIN12  = regbits< type, 12,  1 >;  /**< Set as output pin 12  */
    using PIN13  = regbits< type, 13,  1 >;  /**< Set as output pin 13  */
    using PIN14  = regbits< type, 14,  1 >;  /**< Set as output pin 14  */
    using PIN15  = regbits< type, 15,  1 >;  /**< Set as output pin 15  */
    using PIN16  = regbits< type, 16,  1 >;  /**< Set as output pin 16  */
    using PIN17  = regbits< type, 17,  1 >;  /**< Set as output pin 17  */
    using PIN18  = regbits< type, 18,  1 >;  /**< Set as output pin 18  */
    using PIN19  = regbits< type, 19,  1 >;  /**< Set as output pin 19  */
    using PIN20  = regbits< type, 20,  1 >;  /**< Set as output pin 20  */
    using PIN21  = regbits< type, 21,  1 >;  /**< Set as output pin 21  */
    using PIN22  = regbits< type, 22,  1 >;  /**< Set as output pin 22  */
    using PIN23  = regbits< type, 23,  1 >;  /**< Set as output pin 23  */
    using PIN24  = regbits< type, 24,  1 >;  /**< Set as output pin 24  */
    using PIN25  = regbits< type, 25,  1 >;  /**< Set as output pin 25  */
    using PIN26  = regbits< type, 26,  1 >;  /**< Set as output pin 26  */
    using PIN27  = regbits< type, 27,  1 >;  /**< Set as output pin 27  */
    using PIN28  = regbits< type, 28,  1 >;  /**< Set as output pin 28  */
    using PIN29  = regbits< type, 29,  1 >;  /**< Set as output pin 29  */
    using PIN30  = regbits< type, 30,  1 >;  /**< Set as output pin 30  */
    using PIN31  = regbits< type, 31,  1 >;  /**< Set as output pin 31  */
  };

  /**
   * DIR clear register
   */
  struct DIRCLR
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< Set as input pin 0   */
    using PIN1   = regbits< type,  1,  1 >;  /**< Set as input pin 1   */
    using PIN2   = regbits< type,  2,  1 >;  /**< Set as input pin 2   */
    using PIN3   = regbits< type,  3,  1 >;  /**< Set as input pin 3   */
    using PIN4   = regbits< type,  4,  1 >;  /**< Set as input pin 4   */
    using PIN5   = regbits< type,  5,  1 >;  /**< Set as input pin 5   */
    using PIN6   = regbits< type,  6,  1 >;  /**< Set as input pin 6   */
    using PIN7   = regbits< type,  7,  1 >;  /**< Set as input pin 7   */
    using PIN8   = regbits< type,  8,  1 >;  /**< Set as input pin 8   */
    using PIN9   = regbits< type,  9,  1 >;  /**< Set as input pin 9   */
    using PIN10  = regbits< type, 10,  1 >;  /**< Set as input pin 10  */
    using PIN11  = regbits< type, 11,  1 >;  /**< Set as input pin 11  */
    using PIN12  = regbits< type, 12,  1 >;  /**< Set as input pin 12  */
    using PIN13  = regbits< type, 13,  1 >;  /**< Set as input pin 13  */
    using PIN14  = regbits< type, 14,  1 >;  /**< Set as input pin 14  */
    using PIN15  = regbits< type, 15,  1 >;  /**< Set as input pin 15  */
    using PIN16  = regbits< type, 16,  1 >;  /**< Set as input pin 16  */
    using PIN17  = regbits< type, 17,  1 >;  /**< Set as input pin 17  */
    using PIN18  = regbits< type, 18,  1 >;  /**< Set as input pin 18  */
    using PIN19  = regbits< type, 19,  1 >;  /**< Set as input pin 19  */
    using PIN20  = regbits< type, 20,  1 >;  /**< Set as input pin 20  */
    using PIN21  = regbits< type, 21,  1 >;  /**< Set as input pin 21  */
    using PIN22  = regbits< type, 22,  1 >;  /**< Set as input pin 22  */
    using PIN23  = regbits< type, 23,  1 >;  /**< Set as input pin 23  */
    using PIN24  = regbits< type, 24,  1 >;  /**< Set as input pin 24  */
    using PIN25  = regbits< type, 25,  1 >;  /**< Set as input pin 25  */
    using PIN26  = regbits< type, 26,  1 >;  /**< Set as input pin 26  */
    using PIN27  = regbits< type, 27,  1 >;  /**< Set as input pin 27  */
    using PIN28  = regbits< type, 28,  1 >;  /**< Set as input pin 28  */
    using PIN29  = regbits< type, 29,  1 >;  /**< Set as input pin 29  */
    using PIN30  = regbits< type, 30,  1 >;  /**< Set as input pin 30  */
    using PIN31  = regbits< type, 31,  1 >;  /**< Set as input pin 31  */
  };

  /**
   * Latch indicating which GPIO pins have met the criteria set in PIN_CNF[n].SENSE register
   */
  struct LATCH
  : public reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: LATCH
    using LATCH_ = regbits< type,  0, 32 >;  /**< Register holding a '1' for each GPIO pins which has met the criteria set in PIN_CNF[n].SENSE  */
  };

  /**
   * Select between default DETECT signal behaviour and LDETECT mode
   */
  struct DETECTMODE
  : public reg< uint32_t, base_addr + 0x524, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DETECTMODE
    using DETECTMODE_ = regbits< type,  0,  1 >;  /**< Select between default DETECT signal behaviour and LDETECT mode  */
  };

  /**
   * Description collection[0]: Configuration of GPIO pins
   */
  struct PIN_CNF[%s]
  : public reg< uint32_t, base_addr + 0x700, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x700, rw, 0x00000002 >;

    using DIR    = regbits< type,  0,  1 >;  /**< Pin direction                       */
    using INPUT  = regbits< type,  1,  1 >;  /**< Connect or disconnect input buffer  */
    using PULL   = regbits< type,  2,  2 >;  /**< Pull configuration                  */
    using DRIVE  = regbits< type,  8,  3 >;  /**< Drive configuration                 */
    using SENSE  = regbits< type, 16,  2 >;  /**< Pin sensing mechanism               */
  };
};
} // namespace mptl

#endif // ARCH_REG_P0_HPP_INCLUDED
