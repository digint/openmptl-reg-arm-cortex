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
//  Import from CMSIS-SVD: "STMicro/STM32L053x.svd"
//
//  name: STM32L053x
//  version: 1.0
//  description: STM32L053x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LCD_HPP_INCLUDED
#define ARCH_REG_LCD_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Liquid crystal display controller
 */
struct LCD
{
  static constexpr reg_addr_t base_addr = 0x40002400;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using BIAS   = regbits< type,  5,  2 >;  /**< Bias selector             */
    using DUTY   = regbits< type,  2,  3 >;  /**< Duty selection            */
    using VSEL   = regbits< type,  1,  1 >;  /**< Voltage source selection  */
    using LCDEN  = regbits< type,  0,  1 >;  /**< LCD controller enable     */
  };

  /**
   * frame control register
   */
  struct FCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using PS      = regbits< type, 22,  4 >;  /**< PS 16-bit prescaler                   */
    using DIV     = regbits< type, 18,  4 >;  /**< DIV clock divider                     */
    using BLINK   = regbits< type, 16,  2 >;  /**< Blink mode selection                  */
    using BLINKF  = regbits< type, 13,  3 >;  /**< Blink frequency selection             */
    using CC      = regbits< type, 10,  3 >;  /**< Contrast control                      */
    using DEAD    = regbits< type,  7,  3 >;  /**< Dead time duration                    */
    using PON     = regbits< type,  4,  3 >;  /**< Pulse ON duration                     */
    using UDDIE   = regbits< type,  3,  1 >;  /**< Update display done interrupt enable  */
    using SOFIE   = regbits< type,  1,  1 >;  /**< Start of frame interrupt enable       */
    using HD      = regbits< type,  0,  1 >;  /**< High drive enable                     */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000020 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000020 >;

    using FCRSF  = regbits< type,  5,  1 >;  /**< LCD Frame Control Register Synchronization flag  */
    using RDY    = regbits< type,  4,  1 >;  /**< Ready flag                                       */
    using UDD    = regbits< type,  3,  1 >;  /**< Update Display Done                              */
    using UDR    = regbits< type,  2,  1 >;  /**< Update display request                           */
    using SOF    = regbits< type,  1,  1 >;  /**< Start of frame flag                              */
    using ENS    = regbits< type,  0,  1 >;  /**< ENS                                              */
  };

  /**
   * clear register
   */
  struct CLR
  : public reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >;

    using UDDC  = regbits< type,  3,  1 >;  /**< Update display done clear  */
    using SOFC  = regbits< type,  1,  1 >;  /**< Start of frame flag clear  */
  };

  /**
   * display memory
   */
  struct RAM_COM0
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using S30  = regbits< type, 30,  1 >;  /**< S30  */
    using S29  = regbits< type, 29,  1 >;  /**< S29  */
    using S28  = regbits< type, 28,  1 >;  /**< S28  */
    using S27  = regbits< type, 27,  1 >;  /**< S27  */
    using S26  = regbits< type, 26,  1 >;  /**< S26  */
    using S25  = regbits< type, 25,  1 >;  /**< S25  */
    using S24  = regbits< type, 24,  1 >;  /**< S24  */
    using S23  = regbits< type, 23,  1 >;  /**< S23  */
    using S22  = regbits< type, 22,  1 >;  /**< S22  */
    using S21  = regbits< type, 21,  1 >;  /**< S21  */
    using S20  = regbits< type, 20,  1 >;  /**< S20  */
    using S19  = regbits< type, 19,  1 >;  /**< S19  */
    using S18  = regbits< type, 18,  1 >;  /**< S18  */
    using S17  = regbits< type, 17,  1 >;  /**< S17  */
    using S16  = regbits< type, 16,  1 >;  /**< S16  */
    using S15  = regbits< type, 15,  1 >;  /**< S15  */
    using S14  = regbits< type, 14,  1 >;  /**< S14  */
    using S13  = regbits< type, 13,  1 >;  /**< S13  */
    using S12  = regbits< type, 12,  1 >;  /**< S12  */
    using S11  = regbits< type, 11,  1 >;  /**< S11  */
    using S10  = regbits< type, 10,  1 >;  /**< S10  */
    using S09  = regbits< type,  9,  1 >;  /**< S09  */
    using S08  = regbits< type,  8,  1 >;  /**< S08  */
    using S07  = regbits< type,  7,  1 >;  /**< S07  */
    using S06  = regbits< type,  6,  1 >;  /**< S06  */
    using S05  = regbits< type,  5,  1 >;  /**< S05  */
    using S04  = regbits< type,  4,  1 >;  /**< S04  */
    using S03  = regbits< type,  3,  1 >;  /**< S03  */
    using S02  = regbits< type,  2,  1 >;  /**< S02  */
    using S01  = regbits< type,  1,  1 >;  /**< S01  */
    using S00  = regbits< type,  0,  1 >;  /**< S00  */
  };

  /**
   * display memory
   */
  struct RAM_COM1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using S31  = regbits< type, 31,  1 >;  /**< S31  */
    using S30  = regbits< type, 30,  1 >;  /**< S30  */
    using S29  = regbits< type, 29,  1 >;  /**< S29  */
    using S28  = regbits< type, 28,  1 >;  /**< S28  */
    using S27  = regbits< type, 27,  1 >;  /**< S27  */
    using S26  = regbits< type, 26,  1 >;  /**< S26  */
    using S25  = regbits< type, 25,  1 >;  /**< S25  */
    using S24  = regbits< type, 24,  1 >;  /**< S24  */
    using S23  = regbits< type, 23,  1 >;  /**< S23  */
    using S22  = regbits< type, 22,  1 >;  /**< S22  */
    using S21  = regbits< type, 21,  1 >;  /**< S21  */
    using S20  = regbits< type, 20,  1 >;  /**< S20  */
    using S19  = regbits< type, 19,  1 >;  /**< S19  */
    using S18  = regbits< type, 18,  1 >;  /**< S18  */
    using S17  = regbits< type, 17,  1 >;  /**< S17  */
    using S16  = regbits< type, 16,  1 >;  /**< S16  */
    using S15  = regbits< type, 15,  1 >;  /**< S15  */
    using S14  = regbits< type, 14,  1 >;  /**< S14  */
    using S13  = regbits< type, 13,  1 >;  /**< S13  */
    using S12  = regbits< type, 12,  1 >;  /**< S12  */
    using S11  = regbits< type, 11,  1 >;  /**< S11  */
    using S10  = regbits< type, 10,  1 >;  /**< S10  */
    using S09  = regbits< type,  9,  1 >;  /**< S09  */
    using S08  = regbits< type,  8,  1 >;  /**< S08  */
    using S07  = regbits< type,  7,  1 >;  /**< S07  */
    using S06  = regbits< type,  6,  1 >;  /**< S06  */
    using S05  = regbits< type,  5,  1 >;  /**< S05  */
    using S04  = regbits< type,  4,  1 >;  /**< S04  */
    using S03  = regbits< type,  3,  1 >;  /**< S03  */
    using S02  = regbits< type,  2,  1 >;  /**< S02  */
    using S01  = regbits< type,  1,  1 >;  /**< S01  */
    using S00  = regbits< type,  0,  1 >;  /**< S00  */
  };

  /**
   * display memory
   */
  struct RAM_COM2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using S31  = regbits< type, 31,  1 >;  /**< S31  */
    using S30  = regbits< type, 30,  1 >;  /**< S30  */
    using S29  = regbits< type, 29,  1 >;  /**< S29  */
    using S28  = regbits< type, 28,  1 >;  /**< S28  */
    using S27  = regbits< type, 27,  1 >;  /**< S27  */
    using S26  = regbits< type, 26,  1 >;  /**< S26  */
    using S25  = regbits< type, 25,  1 >;  /**< S25  */
    using S24  = regbits< type, 24,  1 >;  /**< S24  */
    using S23  = regbits< type, 23,  1 >;  /**< S23  */
    using S22  = regbits< type, 22,  1 >;  /**< S22  */
    using S21  = regbits< type, 21,  1 >;  /**< S21  */
    using S20  = regbits< type, 20,  1 >;  /**< S20  */
    using S19  = regbits< type, 19,  1 >;  /**< S19  */
    using S18  = regbits< type, 18,  1 >;  /**< S18  */
    using S17  = regbits< type, 17,  1 >;  /**< S17  */
    using S16  = regbits< type, 16,  1 >;  /**< S16  */
    using S15  = regbits< type, 15,  1 >;  /**< S15  */
    using S14  = regbits< type, 14,  1 >;  /**< S14  */
    using S13  = regbits< type, 13,  1 >;  /**< S13  */
    using S12  = regbits< type, 12,  1 >;  /**< S12  */
    using S11  = regbits< type, 11,  1 >;  /**< S11  */
    using S10  = regbits< type, 10,  1 >;  /**< S10  */
    using S09  = regbits< type,  9,  1 >;  /**< S09  */
    using S08  = regbits< type,  8,  1 >;  /**< S08  */
    using S07  = regbits< type,  7,  1 >;  /**< S07  */
    using S06  = regbits< type,  6,  1 >;  /**< S06  */
    using S05  = regbits< type,  5,  1 >;  /**< S05  */
    using S04  = regbits< type,  4,  1 >;  /**< S04  */
    using S03  = regbits< type,  3,  1 >;  /**< S03  */
    using S02  = regbits< type,  2,  1 >;  /**< S02  */
    using S01  = regbits< type,  1,  1 >;  /**< S01  */
    using S00  = regbits< type,  0,  1 >;  /**< S00  */
  };

  /**
   * display memory
   */
  struct RAM_COM3
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using S31  = regbits< type, 31,  1 >;  /**< S31  */
    using S30  = regbits< type, 30,  1 >;  /**< S30  */
    using S29  = regbits< type, 29,  1 >;  /**< S29  */
    using S28  = regbits< type, 28,  1 >;  /**< S28  */
    using S27  = regbits< type, 27,  1 >;  /**< S27  */
    using S26  = regbits< type, 26,  1 >;  /**< S26  */
    using S25  = regbits< type, 25,  1 >;  /**< S25  */
    using S24  = regbits< type, 24,  1 >;  /**< S24  */
    using S23  = regbits< type, 23,  1 >;  /**< S23  */
    using S22  = regbits< type, 22,  1 >;  /**< S22  */
    using S21  = regbits< type, 21,  1 >;  /**< S21  */
    using S20  = regbits< type, 20,  1 >;  /**< S20  */
    using S19  = regbits< type, 19,  1 >;  /**< S19  */
    using S18  = regbits< type, 18,  1 >;  /**< S18  */
    using S17  = regbits< type, 17,  1 >;  /**< S17  */
    using S16  = regbits< type, 16,  1 >;  /**< S16  */
    using S15  = regbits< type, 15,  1 >;  /**< S15  */
    using S14  = regbits< type, 14,  1 >;  /**< S14  */
    using S13  = regbits< type, 13,  1 >;  /**< S13  */
    using S12  = regbits< type, 12,  1 >;  /**< S12  */
    using S11  = regbits< type, 11,  1 >;  /**< S11  */
    using S10  = regbits< type, 10,  1 >;  /**< S10  */
    using S09  = regbits< type,  9,  1 >;  /**< S09  */
    using S08  = regbits< type,  8,  1 >;  /**< S08  */
    using S07  = regbits< type,  7,  1 >;  /**< S07  */
    using S06  = regbits< type,  6,  1 >;  /**< S06  */
    using S05  = regbits< type,  5,  1 >;  /**< S05  */
    using S04  = regbits< type,  4,  1 >;  /**< S04  */
    using S03  = regbits< type,  3,  1 >;  /**< S03  */
    using S02  = regbits< type,  2,  1 >;  /**< S02  */
    using S01  = regbits< type,  1,  1 >;  /**< S01  */
    using S00  = regbits< type,  0,  1 >;  /**< S00  */
  };

  /**
   * display memory
   */
  struct RAM_COM4
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using S31  = regbits< type, 31,  1 >;  /**< S31  */
    using S30  = regbits< type, 30,  1 >;  /**< S30  */
    using S29  = regbits< type, 29,  1 >;  /**< S29  */
    using S28  = regbits< type, 28,  1 >;  /**< S28  */
    using S27  = regbits< type, 27,  1 >;  /**< S27  */
    using S26  = regbits< type, 26,  1 >;  /**< S26  */
    using S25  = regbits< type, 25,  1 >;  /**< S25  */
    using S24  = regbits< type, 24,  1 >;  /**< S24  */
    using S23  = regbits< type, 23,  1 >;  /**< S23  */
    using S22  = regbits< type, 22,  1 >;  /**< S22  */
    using S21  = regbits< type, 21,  1 >;  /**< S21  */
    using S20  = regbits< type, 20,  1 >;  /**< S20  */
    using S19  = regbits< type, 19,  1 >;  /**< S19  */
    using S18  = regbits< type, 18,  1 >;  /**< S18  */
    using S17  = regbits< type, 17,  1 >;  /**< S17  */
    using S16  = regbits< type, 16,  1 >;  /**< S16  */
    using S15  = regbits< type, 15,  1 >;  /**< S15  */
    using S14  = regbits< type, 14,  1 >;  /**< S14  */
    using S13  = regbits< type, 13,  1 >;  /**< S13  */
    using S12  = regbits< type, 12,  1 >;  /**< S12  */
    using S11  = regbits< type, 11,  1 >;  /**< S11  */
    using S10  = regbits< type, 10,  1 >;  /**< S10  */
    using S09  = regbits< type,  9,  1 >;  /**< S09  */
    using S08  = regbits< type,  8,  1 >;  /**< S08  */
    using S07  = regbits< type,  7,  1 >;  /**< S07  */
    using S06  = regbits< type,  6,  1 >;  /**< S06  */
    using S05  = regbits< type,  5,  1 >;  /**< S05  */
    using S04  = regbits< type,  4,  1 >;  /**< S04  */
    using S03  = regbits< type,  3,  1 >;  /**< S03  */
    using S02  = regbits< type,  2,  1 >;  /**< S02  */
    using S01  = regbits< type,  1,  1 >;  /**< S01  */
    using S00  = regbits< type,  0,  1 >;  /**< S00  */
  };

  /**
   * display memory
   */
  struct RAM_COM5
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using S31  = regbits< type, 31,  1 >;  /**< S31  */
    using S30  = regbits< type, 30,  1 >;  /**< S30  */
    using S29  = regbits< type, 29,  1 >;  /**< S29  */
    using S28  = regbits< type, 28,  1 >;  /**< S28  */
    using S27  = regbits< type, 27,  1 >;  /**< S27  */
    using S26  = regbits< type, 26,  1 >;  /**< S26  */
    using S25  = regbits< type, 25,  1 >;  /**< S25  */
    using S24  = regbits< type, 24,  1 >;  /**< S24  */
    using S23  = regbits< type, 23,  1 >;  /**< S23  */
    using S22  = regbits< type, 22,  1 >;  /**< S22  */
    using S21  = regbits< type, 21,  1 >;  /**< S21  */
    using S20  = regbits< type, 20,  1 >;  /**< S20  */
    using S19  = regbits< type, 19,  1 >;  /**< S19  */
    using S18  = regbits< type, 18,  1 >;  /**< S18  */
    using S17  = regbits< type, 17,  1 >;  /**< S17  */
    using S16  = regbits< type, 16,  1 >;  /**< S16  */
    using S15  = regbits< type, 15,  1 >;  /**< S15  */
    using S14  = regbits< type, 14,  1 >;  /**< S14  */
    using S13  = regbits< type, 13,  1 >;  /**< S13  */
    using S12  = regbits< type, 12,  1 >;  /**< S12  */
    using S11  = regbits< type, 11,  1 >;  /**< S11  */
    using S10  = regbits< type, 10,  1 >;  /**< S10  */
    using S09  = regbits< type,  9,  1 >;  /**< S09  */
    using S08  = regbits< type,  8,  1 >;  /**< S08  */
    using S07  = regbits< type,  7,  1 >;  /**< S07  */
    using S06  = regbits< type,  6,  1 >;  /**< S06  */
    using S05  = regbits< type,  5,  1 >;  /**< S05  */
    using S04  = regbits< type,  4,  1 >;  /**< S04  */
    using S03  = regbits< type,  3,  1 >;  /**< S03  */
    using S02  = regbits< type,  2,  1 >;  /**< S02  */
    using S01  = regbits< type,  1,  1 >;  /**< S01  */
    using S00  = regbits< type,  0,  1 >;  /**< S00  */
  };

  /**
   * display memory
   */
  struct RAM_COM6
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using S31  = regbits< type, 31,  1 >;  /**< S31  */
    using S30  = regbits< type, 30,  1 >;  /**< S30  */
    using S29  = regbits< type, 29,  1 >;  /**< S29  */
    using S28  = regbits< type, 28,  1 >;  /**< S28  */
    using S27  = regbits< type, 27,  1 >;  /**< S27  */
    using S26  = regbits< type, 26,  1 >;  /**< S26  */
    using S25  = regbits< type, 25,  1 >;  /**< S25  */
    using S24  = regbits< type, 24,  1 >;  /**< S24  */
    using S23  = regbits< type, 23,  1 >;  /**< S23  */
    using S22  = regbits< type, 22,  1 >;  /**< S22  */
    using S21  = regbits< type, 21,  1 >;  /**< S21  */
    using S20  = regbits< type, 20,  1 >;  /**< S20  */
    using S19  = regbits< type, 19,  1 >;  /**< S19  */
    using S18  = regbits< type, 18,  1 >;  /**< S18  */
    using S17  = regbits< type, 17,  1 >;  /**< S17  */
    using S16  = regbits< type, 16,  1 >;  /**< S16  */
    using S15  = regbits< type, 15,  1 >;  /**< S15  */
    using S14  = regbits< type, 14,  1 >;  /**< S14  */
    using S13  = regbits< type, 13,  1 >;  /**< S13  */
    using S12  = regbits< type, 12,  1 >;  /**< S12  */
    using S11  = regbits< type, 11,  1 >;  /**< S11  */
    using S10  = regbits< type, 10,  1 >;  /**< S10  */
    using S09  = regbits< type,  9,  1 >;  /**< S09  */
    using S08  = regbits< type,  8,  1 >;  /**< S08  */
    using S07  = regbits< type,  7,  1 >;  /**< S07  */
    using S06  = regbits< type,  6,  1 >;  /**< S06  */
    using S05  = regbits< type,  5,  1 >;  /**< S05  */
    using S04  = regbits< type,  4,  1 >;  /**< S04  */
    using S03  = regbits< type,  3,  1 >;  /**< S03  */
    using S02  = regbits< type,  2,  1 >;  /**< S02  */
    using S01  = regbits< type,  1,  1 >;  /**< S01  */
    using S00  = regbits< type,  0,  1 >;  /**< S00  */
  };

  /**
   * display memory
   */
  struct RAM_COM7
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using S31  = regbits< type, 31,  1 >;  /**< S31  */
    using S30  = regbits< type, 30,  1 >;  /**< S30  */
    using S29  = regbits< type, 29,  1 >;  /**< S29  */
    using S28  = regbits< type, 28,  1 >;  /**< S28  */
    using S27  = regbits< type, 27,  1 >;  /**< S27  */
    using S26  = regbits< type, 26,  1 >;  /**< S26  */
    using S25  = regbits< type, 25,  1 >;  /**< S25  */
    using S24  = regbits< type, 24,  1 >;  /**< S24  */
    using S23  = regbits< type, 23,  1 >;  /**< S23  */
    using S22  = regbits< type, 22,  1 >;  /**< S22  */
    using S21  = regbits< type, 21,  1 >;  /**< S21  */
    using S20  = regbits< type, 20,  1 >;  /**< S20  */
    using S19  = regbits< type, 19,  1 >;  /**< S19  */
    using S18  = regbits< type, 18,  1 >;  /**< S18  */
    using S17  = regbits< type, 17,  1 >;  /**< S17  */
    using S16  = regbits< type, 16,  1 >;  /**< S16  */
    using S15  = regbits< type, 15,  1 >;  /**< S15  */
    using S14  = regbits< type, 14,  1 >;  /**< S14  */
    using S13  = regbits< type, 13,  1 >;  /**< S13  */
    using S12  = regbits< type, 12,  1 >;  /**< S12  */
    using S11  = regbits< type, 11,  1 >;  /**< S11  */
    using S10  = regbits< type, 10,  1 >;  /**< S10  */
    using S09  = regbits< type,  9,  1 >;  /**< S09  */
    using S08  = regbits< type,  8,  1 >;  /**< S08  */
    using S07  = regbits< type,  7,  1 >;  /**< S07  */
    using S06  = regbits< type,  6,  1 >;  /**< S06  */
    using S05  = regbits< type,  5,  1 >;  /**< S05  */
    using S04  = regbits< type,  4,  1 >;  /**< S04  */
    using S03  = regbits< type,  3,  1 >;  /**< S03  */
    using S02  = regbits< type,  2,  1 >;  /**< S02  */
    using S01  = regbits< type,  1,  1 >;  /**< S01  */
    using S00  = regbits< type,  0,  1 >;  /**< S00  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LCD_HPP_INCLUDED
