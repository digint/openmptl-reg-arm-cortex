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

#ifndef ARCH_REG_GPIO_HPP_INCLUDED
#define ARCH_REG_GPIO_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General purpose input and output.
 */
struct GPIO
{
  static constexpr reg_addr_t base_addr = 0x50000000;

  /**
   * Write GPIO port.
   */
  struct OUT
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< Pin 0.   */
    using PIN1   = regbits< type,  1,  1 >;  /**< Pin 1.   */
    using PIN2   = regbits< type,  2,  1 >;  /**< Pin 2.   */
    using PIN3   = regbits< type,  3,  1 >;  /**< Pin 3.   */
    using PIN4   = regbits< type,  4,  1 >;  /**< Pin 4.   */
    using PIN5   = regbits< type,  5,  1 >;  /**< Pin 5.   */
    using PIN6   = regbits< type,  6,  1 >;  /**< Pin 6.   */
    using PIN7   = regbits< type,  7,  1 >;  /**< Pin 7.   */
    using PIN8   = regbits< type,  8,  1 >;  /**< Pin 8.   */
    using PIN9   = regbits< type,  9,  1 >;  /**< Pin 9.   */
    using PIN10  = regbits< type, 10,  1 >;  /**< Pin 10.  */
    using PIN11  = regbits< type, 11,  1 >;  /**< Pin 11.  */
    using PIN12  = regbits< type, 12,  1 >;  /**< Pin 12.  */
    using PIN13  = regbits< type, 13,  1 >;  /**< Pin 13.  */
    using PIN14  = regbits< type, 14,  1 >;  /**< Pin 14.  */
    using PIN15  = regbits< type, 15,  1 >;  /**< Pin 15.  */
    using PIN16  = regbits< type, 16,  1 >;  /**< Pin 16.  */
    using PIN17  = regbits< type, 17,  1 >;  /**< Pin 17.  */
    using PIN18  = regbits< type, 18,  1 >;  /**< Pin 18.  */
    using PIN19  = regbits< type, 19,  1 >;  /**< Pin 19.  */
    using PIN20  = regbits< type, 20,  1 >;  /**< Pin 20.  */
    using PIN21  = regbits< type, 21,  1 >;  /**< Pin 21.  */
    using PIN22  = regbits< type, 22,  1 >;  /**< Pin 22.  */
    using PIN23  = regbits< type, 23,  1 >;  /**< Pin 23.  */
    using PIN24  = regbits< type, 24,  1 >;  /**< Pin 24.  */
    using PIN25  = regbits< type, 25,  1 >;  /**< Pin 25.  */
    using PIN26  = regbits< type, 26,  1 >;  /**< Pin 26.  */
    using PIN27  = regbits< type, 27,  1 >;  /**< Pin 27.  */
    using PIN28  = regbits< type, 28,  1 >;  /**< Pin 28.  */
    using PIN29  = regbits< type, 29,  1 >;  /**< Pin 29.  */
    using PIN30  = regbits< type, 30,  1 >;  /**< Pin 30.  */
    using PIN31  = regbits< type, 31,  1 >;  /**< Pin 31.  */
  };

  /**
   * Set individual bits in GPIO port.
   */
  struct OUTSET
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< Pin 0.   */
    using PIN1   = regbits< type,  1,  1 >;  /**< Pin 1.   */
    using PIN2   = regbits< type,  2,  1 >;  /**< Pin 2.   */
    using PIN3   = regbits< type,  3,  1 >;  /**< Pin 3.   */
    using PIN4   = regbits< type,  4,  1 >;  /**< Pin 4.   */
    using PIN5   = regbits< type,  5,  1 >;  /**< Pin 5.   */
    using PIN6   = regbits< type,  6,  1 >;  /**< Pin 6.   */
    using PIN7   = regbits< type,  7,  1 >;  /**< Pin 7.   */
    using PIN8   = regbits< type,  8,  1 >;  /**< Pin 8.   */
    using PIN9   = regbits< type,  9,  1 >;  /**< Pin 9.   */
    using PIN10  = regbits< type, 10,  1 >;  /**< Pin 10.  */
    using PIN11  = regbits< type, 11,  1 >;  /**< Pin 11.  */
    using PIN12  = regbits< type, 12,  1 >;  /**< Pin 12.  */
    using PIN13  = regbits< type, 13,  1 >;  /**< Pin 13.  */
    using PIN14  = regbits< type, 14,  1 >;  /**< Pin 14.  */
    using PIN15  = regbits< type, 15,  1 >;  /**< Pin 15.  */
    using PIN16  = regbits< type, 16,  1 >;  /**< Pin 16.  */
    using PIN17  = regbits< type, 17,  1 >;  /**< Pin 17.  */
    using PIN18  = regbits< type, 18,  1 >;  /**< Pin 18.  */
    using PIN19  = regbits< type, 19,  1 >;  /**< Pin 19.  */
    using PIN20  = regbits< type, 20,  1 >;  /**< Pin 20.  */
    using PIN21  = regbits< type, 21,  1 >;  /**< Pin 21.  */
    using PIN22  = regbits< type, 22,  1 >;  /**< Pin 22.  */
    using PIN23  = regbits< type, 23,  1 >;  /**< Pin 23.  */
    using PIN24  = regbits< type, 24,  1 >;  /**< Pin 24.  */
    using PIN25  = regbits< type, 25,  1 >;  /**< Pin 25.  */
    using PIN26  = regbits< type, 26,  1 >;  /**< Pin 26.  */
    using PIN27  = regbits< type, 27,  1 >;  /**< Pin 27.  */
    using PIN28  = regbits< type, 28,  1 >;  /**< Pin 28.  */
    using PIN29  = regbits< type, 29,  1 >;  /**< Pin 29.  */
    using PIN30  = regbits< type, 30,  1 >;  /**< Pin 30.  */
    using PIN31  = regbits< type, 31,  1 >;  /**< Pin 31.  */
  };

  /**
   * Clear individual bits in GPIO port.
   */
  struct OUTCLR
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< Pin 0.   */
    using PIN1   = regbits< type,  1,  1 >;  /**< Pin 1.   */
    using PIN2   = regbits< type,  2,  1 >;  /**< Pin 2.   */
    using PIN3   = regbits< type,  3,  1 >;  /**< Pin 3.   */
    using PIN4   = regbits< type,  4,  1 >;  /**< Pin 4.   */
    using PIN5   = regbits< type,  5,  1 >;  /**< Pin 5.   */
    using PIN6   = regbits< type,  6,  1 >;  /**< Pin 6.   */
    using PIN7   = regbits< type,  7,  1 >;  /**< Pin 7.   */
    using PIN8   = regbits< type,  8,  1 >;  /**< Pin 8.   */
    using PIN9   = regbits< type,  9,  1 >;  /**< Pin 9.   */
    using PIN10  = regbits< type, 10,  1 >;  /**< Pin 10.  */
    using PIN11  = regbits< type, 11,  1 >;  /**< Pin 11.  */
    using PIN12  = regbits< type, 12,  1 >;  /**< Pin 12.  */
    using PIN13  = regbits< type, 13,  1 >;  /**< Pin 13.  */
    using PIN14  = regbits< type, 14,  1 >;  /**< Pin 14.  */
    using PIN15  = regbits< type, 15,  1 >;  /**< Pin 15.  */
    using PIN16  = regbits< type, 16,  1 >;  /**< Pin 16.  */
    using PIN17  = regbits< type, 17,  1 >;  /**< Pin 17.  */
    using PIN18  = regbits< type, 18,  1 >;  /**< Pin 18.  */
    using PIN19  = regbits< type, 19,  1 >;  /**< Pin 19.  */
    using PIN20  = regbits< type, 20,  1 >;  /**< Pin 20.  */
    using PIN21  = regbits< type, 21,  1 >;  /**< Pin 21.  */
    using PIN22  = regbits< type, 22,  1 >;  /**< Pin 22.  */
    using PIN23  = regbits< type, 23,  1 >;  /**< Pin 23.  */
    using PIN24  = regbits< type, 24,  1 >;  /**< Pin 24.  */
    using PIN25  = regbits< type, 25,  1 >;  /**< Pin 25.  */
    using PIN26  = regbits< type, 26,  1 >;  /**< Pin 26.  */
    using PIN27  = regbits< type, 27,  1 >;  /**< Pin 27.  */
    using PIN28  = regbits< type, 28,  1 >;  /**< Pin 28.  */
    using PIN29  = regbits< type, 29,  1 >;  /**< Pin 29.  */
    using PIN30  = regbits< type, 30,  1 >;  /**< Pin 30.  */
    using PIN31  = regbits< type, 31,  1 >;  /**< Pin 31.  */
  };

  /**
   * Read GPIO port.
   */
  struct IN
  : public reg< uint32_t, base_addr + 0x510, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< Pin 0.   */
    using PIN1   = regbits< type,  1,  1 >;  /**< Pin 1.   */
    using PIN2   = regbits< type,  2,  1 >;  /**< Pin 2.   */
    using PIN3   = regbits< type,  3,  1 >;  /**< Pin 3.   */
    using PIN4   = regbits< type,  4,  1 >;  /**< Pin 4.   */
    using PIN5   = regbits< type,  5,  1 >;  /**< Pin 5.   */
    using PIN6   = regbits< type,  6,  1 >;  /**< Pin 6.   */
    using PIN7   = regbits< type,  7,  1 >;  /**< Pin 7.   */
    using PIN8   = regbits< type,  8,  1 >;  /**< Pin 8.   */
    using PIN9   = regbits< type,  9,  1 >;  /**< Pin 9.   */
    using PIN10  = regbits< type, 10,  1 >;  /**< Pin 10.  */
    using PIN11  = regbits< type, 11,  1 >;  /**< Pin 11.  */
    using PIN12  = regbits< type, 12,  1 >;  /**< Pin 12.  */
    using PIN13  = regbits< type, 13,  1 >;  /**< Pin 13.  */
    using PIN14  = regbits< type, 14,  1 >;  /**< Pin 14.  */
    using PIN15  = regbits< type, 15,  1 >;  /**< Pin 15.  */
    using PIN16  = regbits< type, 16,  1 >;  /**< Pin 16.  */
    using PIN17  = regbits< type, 17,  1 >;  /**< Pin 17.  */
    using PIN18  = regbits< type, 18,  1 >;  /**< Pin 18.  */
    using PIN19  = regbits< type, 19,  1 >;  /**< Pin 19.  */
    using PIN20  = regbits< type, 20,  1 >;  /**< Pin 20.  */
    using PIN21  = regbits< type, 21,  1 >;  /**< Pin 21.  */
    using PIN22  = regbits< type, 22,  1 >;  /**< Pin 22.  */
    using PIN23  = regbits< type, 23,  1 >;  /**< Pin 23.  */
    using PIN24  = regbits< type, 24,  1 >;  /**< Pin 24.  */
    using PIN25  = regbits< type, 25,  1 >;  /**< Pin 25.  */
    using PIN26  = regbits< type, 26,  1 >;  /**< Pin 26.  */
    using PIN27  = regbits< type, 27,  1 >;  /**< Pin 27.  */
    using PIN28  = regbits< type, 28,  1 >;  /**< Pin 28.  */
    using PIN29  = regbits< type, 29,  1 >;  /**< Pin 29.  */
    using PIN30  = regbits< type, 30,  1 >;  /**< Pin 30.  */
    using PIN31  = regbits< type, 31,  1 >;  /**< Pin 31.  */
  };

  /**
   * Direction of GPIO pins.
   */
  struct DIR
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< Pin 0.   */
    using PIN1   = regbits< type,  1,  1 >;  /**< Pin 1.   */
    using PIN2   = regbits< type,  2,  1 >;  /**< Pin 2.   */
    using PIN3   = regbits< type,  3,  1 >;  /**< Pin 3.   */
    using PIN4   = regbits< type,  4,  1 >;  /**< Pin 4.   */
    using PIN5   = regbits< type,  5,  1 >;  /**< Pin 5.   */
    using PIN6   = regbits< type,  6,  1 >;  /**< Pin 6.   */
    using PIN7   = regbits< type,  7,  1 >;  /**< Pin 7.   */
    using PIN8   = regbits< type,  8,  1 >;  /**< Pin 8.   */
    using PIN9   = regbits< type,  9,  1 >;  /**< Pin 9.   */
    using PIN10  = regbits< type, 10,  1 >;  /**< Pin 10.  */
    using PIN11  = regbits< type, 11,  1 >;  /**< Pin 11.  */
    using PIN12  = regbits< type, 12,  1 >;  /**< Pin 12.  */
    using PIN13  = regbits< type, 13,  1 >;  /**< Pin 13.  */
    using PIN14  = regbits< type, 14,  1 >;  /**< Pin 14.  */
    using PIN15  = regbits< type, 15,  1 >;  /**< Pin 15.  */
    using PIN16  = regbits< type, 16,  1 >;  /**< Pin 16.  */
    using PIN17  = regbits< type, 17,  1 >;  /**< Pin 17.  */
    using PIN18  = regbits< type, 18,  1 >;  /**< Pin 18.  */
    using PIN19  = regbits< type, 19,  1 >;  /**< Pin 19.  */
    using PIN20  = regbits< type, 20,  1 >;  /**< Pin 20.  */
    using PIN21  = regbits< type, 21,  1 >;  /**< Pin 21.  */
    using PIN22  = regbits< type, 22,  1 >;  /**< Pin 22.  */
    using PIN23  = regbits< type, 23,  1 >;  /**< Pin 23.  */
    using PIN24  = regbits< type, 24,  1 >;  /**< Pin 24.  */
    using PIN25  = regbits< type, 25,  1 >;  /**< Pin 25.  */
    using PIN26  = regbits< type, 26,  1 >;  /**< Pin 26.  */
    using PIN27  = regbits< type, 27,  1 >;  /**< Pin 27.  */
    using PIN28  = regbits< type, 28,  1 >;  /**< Pin 28.  */
    using PIN29  = regbits< type, 29,  1 >;  /**< Pin 29.  */
    using PIN30  = regbits< type, 30,  1 >;  /**< Pin 30.  */
    using PIN31  = regbits< type, 31,  1 >;  /**< Pin 31.  */
  };

  /**
   * DIR set register.
   */
  struct DIRSET
  : public reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< Set as output pin 0.   */
    using PIN1   = regbits< type,  1,  1 >;  /**< Set as output pin 1.   */
    using PIN2   = regbits< type,  2,  1 >;  /**< Set as output pin 2.   */
    using PIN3   = regbits< type,  3,  1 >;  /**< Set as output pin 3.   */
    using PIN4   = regbits< type,  4,  1 >;  /**< Set as output pin 4.   */
    using PIN5   = regbits< type,  5,  1 >;  /**< Set as output pin 5.   */
    using PIN6   = regbits< type,  6,  1 >;  /**< Set as output pin 6.   */
    using PIN7   = regbits< type,  7,  1 >;  /**< Set as output pin 7.   */
    using PIN8   = regbits< type,  8,  1 >;  /**< Set as output pin 8.   */
    using PIN9   = regbits< type,  9,  1 >;  /**< Set as output pin 9.   */
    using PIN10  = regbits< type, 10,  1 >;  /**< Set as output pin 10.  */
    using PIN11  = regbits< type, 11,  1 >;  /**< Set as output pin 11.  */
    using PIN12  = regbits< type, 12,  1 >;  /**< Set as output pin 12.  */
    using PIN13  = regbits< type, 13,  1 >;  /**< Set as output pin 13.  */
    using PIN14  = regbits< type, 14,  1 >;  /**< Set as output pin 14.  */
    using PIN15  = regbits< type, 15,  1 >;  /**< Set as output pin 15.  */
    using PIN16  = regbits< type, 16,  1 >;  /**< Set as output pin 16.  */
    using PIN17  = regbits< type, 17,  1 >;  /**< Set as output pin 17.  */
    using PIN18  = regbits< type, 18,  1 >;  /**< Set as output pin 18.  */
    using PIN19  = regbits< type, 19,  1 >;  /**< Set as output pin 19.  */
    using PIN20  = regbits< type, 20,  1 >;  /**< Set as output pin 20.  */
    using PIN21  = regbits< type, 21,  1 >;  /**< Set as output pin 21.  */
    using PIN22  = regbits< type, 22,  1 >;  /**< Set as output pin 22.  */
    using PIN23  = regbits< type, 23,  1 >;  /**< Set as output pin 23.  */
    using PIN24  = regbits< type, 24,  1 >;  /**< Set as output pin 24.  */
    using PIN25  = regbits< type, 25,  1 >;  /**< Set as output pin 25.  */
    using PIN26  = regbits< type, 26,  1 >;  /**< Set as output pin 26.  */
    using PIN27  = regbits< type, 27,  1 >;  /**< Set as output pin 27.  */
    using PIN28  = regbits< type, 28,  1 >;  /**< Set as output pin 28.  */
    using PIN29  = regbits< type, 29,  1 >;  /**< Set as output pin 29.  */
    using PIN30  = regbits< type, 30,  1 >;  /**< Set as output pin 30.  */
    using PIN31  = regbits< type, 31,  1 >;  /**< Set as output pin 31.  */
  };

  /**
   * DIR clear register.
   */
  struct DIRCLR
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PIN0   = regbits< type,  0,  1 >;  /**< Set as input pin 0.   */
    using PIN1   = regbits< type,  1,  1 >;  /**< Set as input pin 1.   */
    using PIN2   = regbits< type,  2,  1 >;  /**< Set as input pin 2.   */
    using PIN3   = regbits< type,  3,  1 >;  /**< Set as input pin 3.   */
    using PIN4   = regbits< type,  4,  1 >;  /**< Set as input pin 4.   */
    using PIN5   = regbits< type,  5,  1 >;  /**< Set as input pin 5.   */
    using PIN6   = regbits< type,  6,  1 >;  /**< Set as input pin 6.   */
    using PIN7   = regbits< type,  7,  1 >;  /**< Set as input pin 7.   */
    using PIN8   = regbits< type,  8,  1 >;  /**< Set as input pin 8.   */
    using PIN9   = regbits< type,  9,  1 >;  /**< Set as input pin 9.   */
    using PIN10  = regbits< type, 10,  1 >;  /**< Set as input pin 10.  */
    using PIN11  = regbits< type, 11,  1 >;  /**< Set as input pin 11.  */
    using PIN12  = regbits< type, 12,  1 >;  /**< Set as input pin 12.  */
    using PIN13  = regbits< type, 13,  1 >;  /**< Set as input pin 13.  */
    using PIN14  = regbits< type, 14,  1 >;  /**< Set as input pin 14.  */
    using PIN15  = regbits< type, 15,  1 >;  /**< Set as input pin 15.  */
    using PIN16  = regbits< type, 16,  1 >;  /**< Set as input pin 16.  */
    using PIN17  = regbits< type, 17,  1 >;  /**< Set as input pin 17.  */
    using PIN18  = regbits< type, 18,  1 >;  /**< Set as input pin 18.  */
    using PIN19  = regbits< type, 19,  1 >;  /**< Set as input pin 19.  */
    using PIN20  = regbits< type, 20,  1 >;  /**< Set as input pin 20.  */
    using PIN21  = regbits< type, 21,  1 >;  /**< Set as input pin 21.  */
    using PIN22  = regbits< type, 22,  1 >;  /**< Set as input pin 22.  */
    using PIN23  = regbits< type, 23,  1 >;  /**< Set as input pin 23.  */
    using PIN24  = regbits< type, 24,  1 >;  /**< Set as input pin 24.  */
    using PIN25  = regbits< type, 25,  1 >;  /**< Set as input pin 25.  */
    using PIN26  = regbits< type, 26,  1 >;  /**< Set as input pin 26.  */
    using PIN27  = regbits< type, 27,  1 >;  /**< Set as input pin 27.  */
    using PIN28  = regbits< type, 28,  1 >;  /**< Set as input pin 28.  */
    using PIN29  = regbits< type, 29,  1 >;  /**< Set as input pin 29.  */
    using PIN30  = regbits< type, 30,  1 >;  /**< Set as input pin 30.  */
    using PIN31  = regbits< type, 31,  1 >;  /**< Set as input pin 31.  */
  };

  /**
   * Configuration of GPIO pins.
   */
  struct PIN_CNF[%s]
  : public reg< uint32_t, base_addr + 0x700, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x700, rw, 0x00000002 >;

    using DIR    = regbits< type,  0,  1 >;  /**< Pin direction.                     */
    using INPUT  = regbits< type,  1,  1 >;  /**< Connect or disconnect input path.  */
    using PULL   = regbits< type,  2,  2 >;  /**< Pull-up or -down configuration.    */
    using DRIVE  = regbits< type,  8,  3 >;  /**< Drive configuration.               */
    using SENSE  = regbits< type, 16,  2 >;  /**< Pin sensing mechanism.             */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIO_HPP_INCLUDED
