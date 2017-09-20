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
//  Import from CMSIS-SVD: "STMicro/STM32F301x.svd"
//
//  name: STM32F301x
//  version: 1.0
//  description: STM32F301x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TSC_HPP_INCLUDED
#define ARCH_REG_TSC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Touch sensing controller
 */
struct TSC
{
  static constexpr reg_addr_t base_addr = 0x40024000;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using CTPH     = regbits< type, 28,  4 >;  /**< Charge transfer pulse high       */
    using CTPL     = regbits< type, 24,  4 >;  /**< Charge transfer pulse low        */
    using SSD      = regbits< type, 17,  7 >;  /**< Spread spectrum deviation        */
    using SSE      = regbits< type, 16,  1 >;  /**< Spread spectrum enable           */
    using SSPSC    = regbits< type, 15,  1 >;  /**< Spread spectrum prescaler        */
    using PGPSC    = regbits< type, 12,  3 >;  /**< pulse generator prescaler        */
    using MCV      = regbits< type,  5,  3 >;  /**< Max count value                  */
    using IODEF    = regbits< type,  4,  1 >;  /**< I/O Default mode                 */
    using SYNCPOL  = regbits< type,  3,  1 >;  /**< Synchronization pin polarity     */
    using AM       = regbits< type,  2,  1 >;  /**< Acquisition mode                 */
    using START    = regbits< type,  1,  1 >;  /**< Start a new acquisition          */
    using TSCE     = regbits< type,  0,  1 >;  /**< Touch sensing controller enable  */
  };

  /**
   * interrupt enable register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using MCEIE  = regbits< type,  1,  1 >;  /**< Max count error interrupt enable     */
    using EOAIE  = regbits< type,  0,  1 >;  /**< End of acquisition interrupt enable  */
  };

  /**
   * interrupt clear register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using MCEIC  = regbits< type,  1,  1 >;  /**< Max count error interrupt clear     */
    using EOAIC  = regbits< type,  0,  1 >;  /**< End of acquisition interrupt clear  */
  };

  /**
   * interrupt status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using MCEF  = regbits< type,  1,  1 >;  /**< Max count error flag     */
    using EOAF  = regbits< type,  0,  1 >;  /**< End of acquisition flag  */
  };

  /**
   * I/O hysteresis control register
   */
  struct IOHCR
  : public reg< uint32_t, base_addr + 0x10, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0xFFFFFFFF >;

    using G1_IO1  = regbits< type,  0,  1 >;  /**< G1_IO1 Schmitt trigger hysteresis mode  */
    using G1_IO2  = regbits< type,  1,  1 >;  /**< G1_IO2 Schmitt trigger hysteresis mode  */
    using G1_IO3  = regbits< type,  2,  1 >;  /**< G1_IO3 Schmitt trigger hysteresis mode  */
    using G1_IO4  = regbits< type,  3,  1 >;  /**< G1_IO4 Schmitt trigger hysteresis mode  */
    using G2_IO1  = regbits< type,  4,  1 >;  /**< G2_IO1 Schmitt trigger hysteresis mode  */
    using G2_IO2  = regbits< type,  5,  1 >;  /**< G2_IO2 Schmitt trigger hysteresis mode  */
    using G2_IO3  = regbits< type,  6,  1 >;  /**< G2_IO3 Schmitt trigger hysteresis mode  */
    using G2_IO4  = regbits< type,  7,  1 >;  /**< G2_IO4 Schmitt trigger hysteresis mode  */
    using G3_IO1  = regbits< type,  8,  1 >;  /**< G3_IO1 Schmitt trigger hysteresis mode  */
    using G3_IO2  = regbits< type,  9,  1 >;  /**< G3_IO2 Schmitt trigger hysteresis mode  */
    using G3_IO3  = regbits< type, 10,  1 >;  /**< G3_IO3 Schmitt trigger hysteresis mode  */
    using G3_IO4  = regbits< type, 11,  1 >;  /**< G3_IO4 Schmitt trigger hysteresis mode  */
    using G4_IO1  = regbits< type, 12,  1 >;  /**< G4_IO1 Schmitt trigger hysteresis mode  */
    using G4_IO2  = regbits< type, 13,  1 >;  /**< G4_IO2 Schmitt trigger hysteresis mode  */
    using G4_IO3  = regbits< type, 14,  1 >;  /**< G4_IO3 Schmitt trigger hysteresis mode  */
    using G4_IO4  = regbits< type, 15,  1 >;  /**< G4_IO4 Schmitt trigger hysteresis mode  */
    using G5_IO1  = regbits< type, 16,  1 >;  /**< G5_IO1 Schmitt trigger hysteresis mode  */
    using G5_IO2  = regbits< type, 17,  1 >;  /**< G5_IO2 Schmitt trigger hysteresis mode  */
    using G5_IO3  = regbits< type, 18,  1 >;  /**< G5_IO3 Schmitt trigger hysteresis mode  */
    using G5_IO4  = regbits< type, 19,  1 >;  /**< G5_IO4 Schmitt trigger hysteresis mode  */
    using G6_IO1  = regbits< type, 20,  1 >;  /**< G6_IO1 Schmitt trigger hysteresis mode  */
    using G6_IO2  = regbits< type, 21,  1 >;  /**< G6_IO2 Schmitt trigger hysteresis mode  */
    using G6_IO3  = regbits< type, 22,  1 >;  /**< G6_IO3 Schmitt trigger hysteresis mode  */
    using G6_IO4  = regbits< type, 23,  1 >;  /**< G6_IO4 Schmitt trigger hysteresis mode  */
    using G7_IO1  = regbits< type, 24,  1 >;  /**< G7_IO1 Schmitt trigger hysteresis mode  */
    using G7_IO2  = regbits< type, 25,  1 >;  /**< G7_IO2 Schmitt trigger hysteresis mode  */
    using G7_IO3  = regbits< type, 26,  1 >;  /**< G7_IO3 Schmitt trigger hysteresis mode  */
    using G7_IO4  = regbits< type, 27,  1 >;  /**< G7_IO4 Schmitt trigger hysteresis mode  */
    using G8_IO1  = regbits< type, 28,  1 >;  /**< G8_IO1 Schmitt trigger hysteresis mode  */
    using G8_IO2  = regbits< type, 29,  1 >;  /**< G8_IO2 Schmitt trigger hysteresis mode  */
    using G8_IO3  = regbits< type, 30,  1 >;  /**< G8_IO3 Schmitt trigger hysteresis mode  */
    using G8_IO4  = regbits< type, 31,  1 >;  /**< G8_IO4 Schmitt trigger hysteresis mode  */
  };

  /**
   * I/O analog switch control register
   */
  struct IOASCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using G1_IO1  = regbits< type,  0,  1 >;  /**< G1_IO1 analog switch enable  */
    using G1_IO2  = regbits< type,  1,  1 >;  /**< G1_IO2 analog switch enable  */
    using G1_IO3  = regbits< type,  2,  1 >;  /**< G1_IO3 analog switch enable  */
    using G1_IO4  = regbits< type,  3,  1 >;  /**< G1_IO4 analog switch enable  */
    using G2_IO1  = regbits< type,  4,  1 >;  /**< G2_IO1 analog switch enable  */
    using G2_IO2  = regbits< type,  5,  1 >;  /**< G2_IO2 analog switch enable  */
    using G2_IO3  = regbits< type,  6,  1 >;  /**< G2_IO3 analog switch enable  */
    using G2_IO4  = regbits< type,  7,  1 >;  /**< G2_IO4 analog switch enable  */
    using G3_IO1  = regbits< type,  8,  1 >;  /**< G3_IO1 analog switch enable  */
    using G3_IO2  = regbits< type,  9,  1 >;  /**< G3_IO2 analog switch enable  */
    using G3_IO3  = regbits< type, 10,  1 >;  /**< G3_IO3 analog switch enable  */
    using G3_IO4  = regbits< type, 11,  1 >;  /**< G3_IO4 analog switch enable  */
    using G4_IO1  = regbits< type, 12,  1 >;  /**< G4_IO1 analog switch enable  */
    using G4_IO2  = regbits< type, 13,  1 >;  /**< G4_IO2 analog switch enable  */
    using G4_IO3  = regbits< type, 14,  1 >;  /**< G4_IO3 analog switch enable  */
    using G4_IO4  = regbits< type, 15,  1 >;  /**< G4_IO4 analog switch enable  */
    using G5_IO1  = regbits< type, 16,  1 >;  /**< G5_IO1 analog switch enable  */
    using G5_IO2  = regbits< type, 17,  1 >;  /**< G5_IO2 analog switch enable  */
    using G5_IO3  = regbits< type, 18,  1 >;  /**< G5_IO3 analog switch enable  */
    using G5_IO4  = regbits< type, 19,  1 >;  /**< G5_IO4 analog switch enable  */
    using G6_IO1  = regbits< type, 20,  1 >;  /**< G6_IO1 analog switch enable  */
    using G6_IO2  = regbits< type, 21,  1 >;  /**< G6_IO2 analog switch enable  */
    using G6_IO3  = regbits< type, 22,  1 >;  /**< G6_IO3 analog switch enable  */
    using G6_IO4  = regbits< type, 23,  1 >;  /**< G6_IO4 analog switch enable  */
    using G7_IO1  = regbits< type, 24,  1 >;  /**< G7_IO1 analog switch enable  */
    using G7_IO2  = regbits< type, 25,  1 >;  /**< G7_IO2 analog switch enable  */
    using G7_IO3  = regbits< type, 26,  1 >;  /**< G7_IO3 analog switch enable  */
    using G7_IO4  = regbits< type, 27,  1 >;  /**< G7_IO4 analog switch enable  */
    using G8_IO1  = regbits< type, 28,  1 >;  /**< G8_IO1 analog switch enable  */
    using G8_IO2  = regbits< type, 29,  1 >;  /**< G8_IO2 analog switch enable  */
    using G8_IO3  = regbits< type, 30,  1 >;  /**< G8_IO3 analog switch enable  */
    using G8_IO4  = regbits< type, 31,  1 >;  /**< G8_IO4 analog switch enable  */
  };

  /**
   * I/O sampling control register
   */
  struct IOSCR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using G1_IO1  = regbits< type,  0,  1 >;  /**< G1_IO1 sampling mode  */
    using G1_IO2  = regbits< type,  1,  1 >;  /**< G1_IO2 sampling mode  */
    using G1_IO3  = regbits< type,  2,  1 >;  /**< G1_IO3 sampling mode  */
    using G1_IO4  = regbits< type,  3,  1 >;  /**< G1_IO4 sampling mode  */
    using G2_IO1  = regbits< type,  4,  1 >;  /**< G2_IO1 sampling mode  */
    using G2_IO2  = regbits< type,  5,  1 >;  /**< G2_IO2 sampling mode  */
    using G2_IO3  = regbits< type,  6,  1 >;  /**< G2_IO3 sampling mode  */
    using G2_IO4  = regbits< type,  7,  1 >;  /**< G2_IO4 sampling mode  */
    using G3_IO1  = regbits< type,  8,  1 >;  /**< G3_IO1 sampling mode  */
    using G3_IO2  = regbits< type,  9,  1 >;  /**< G3_IO2 sampling mode  */
    using G3_IO3  = regbits< type, 10,  1 >;  /**< G3_IO3 sampling mode  */
    using G3_IO4  = regbits< type, 11,  1 >;  /**< G3_IO4 sampling mode  */
    using G4_IO1  = regbits< type, 12,  1 >;  /**< G4_IO1 sampling mode  */
    using G4_IO2  = regbits< type, 13,  1 >;  /**< G4_IO2 sampling mode  */
    using G4_IO3  = regbits< type, 14,  1 >;  /**< G4_IO3 sampling mode  */
    using G4_IO4  = regbits< type, 15,  1 >;  /**< G4_IO4 sampling mode  */
    using G5_IO1  = regbits< type, 16,  1 >;  /**< G5_IO1 sampling mode  */
    using G5_IO2  = regbits< type, 17,  1 >;  /**< G5_IO2 sampling mode  */
    using G5_IO3  = regbits< type, 18,  1 >;  /**< G5_IO3 sampling mode  */
    using G5_IO4  = regbits< type, 19,  1 >;  /**< G5_IO4 sampling mode  */
    using G6_IO1  = regbits< type, 20,  1 >;  /**< G6_IO1 sampling mode  */
    using G6_IO2  = regbits< type, 21,  1 >;  /**< G6_IO2 sampling mode  */
    using G6_IO3  = regbits< type, 22,  1 >;  /**< G6_IO3 sampling mode  */
    using G6_IO4  = regbits< type, 23,  1 >;  /**< G6_IO4 sampling mode  */
    using G7_IO1  = regbits< type, 24,  1 >;  /**< G7_IO1 sampling mode  */
    using G7_IO2  = regbits< type, 25,  1 >;  /**< G7_IO2 sampling mode  */
    using G7_IO3  = regbits< type, 26,  1 >;  /**< G7_IO3 sampling mode  */
    using G7_IO4  = regbits< type, 27,  1 >;  /**< G7_IO4 sampling mode  */
    using G8_IO1  = regbits< type, 28,  1 >;  /**< G8_IO1 sampling mode  */
    using G8_IO2  = regbits< type, 29,  1 >;  /**< G8_IO2 sampling mode  */
    using G8_IO3  = regbits< type, 30,  1 >;  /**< G8_IO3 sampling mode  */
    using G8_IO4  = regbits< type, 31,  1 >;  /**< G8_IO4 sampling mode  */
  };

  /**
   * I/O channel control register
   */
  struct IOCCR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using G1_IO1  = regbits< type,  0,  1 >;  /**< G1_IO1 channel mode  */
    using G1_IO2  = regbits< type,  1,  1 >;  /**< G1_IO2 channel mode  */
    using G1_IO3  = regbits< type,  2,  1 >;  /**< G1_IO3 channel mode  */
    using G1_IO4  = regbits< type,  3,  1 >;  /**< G1_IO4 channel mode  */
    using G2_IO1  = regbits< type,  4,  1 >;  /**< G2_IO1 channel mode  */
    using G2_IO2  = regbits< type,  5,  1 >;  /**< G2_IO2 channel mode  */
    using G2_IO3  = regbits< type,  6,  1 >;  /**< G2_IO3 channel mode  */
    using G2_IO4  = regbits< type,  7,  1 >;  /**< G2_IO4 channel mode  */
    using G3_IO1  = regbits< type,  8,  1 >;  /**< G3_IO1 channel mode  */
    using G3_IO2  = regbits< type,  9,  1 >;  /**< G3_IO2 channel mode  */
    using G3_IO3  = regbits< type, 10,  1 >;  /**< G3_IO3 channel mode  */
    using G3_IO4  = regbits< type, 11,  1 >;  /**< G3_IO4 channel mode  */
    using G4_IO1  = regbits< type, 12,  1 >;  /**< G4_IO1 channel mode  */
    using G4_IO2  = regbits< type, 13,  1 >;  /**< G4_IO2 channel mode  */
    using G4_IO3  = regbits< type, 14,  1 >;  /**< G4_IO3 channel mode  */
    using G4_IO4  = regbits< type, 15,  1 >;  /**< G4_IO4 channel mode  */
    using G5_IO1  = regbits< type, 16,  1 >;  /**< G5_IO1 channel mode  */
    using G5_IO2  = regbits< type, 17,  1 >;  /**< G5_IO2 channel mode  */
    using G5_IO3  = regbits< type, 18,  1 >;  /**< G5_IO3 channel mode  */
    using G5_IO4  = regbits< type, 19,  1 >;  /**< G5_IO4 channel mode  */
    using G6_IO1  = regbits< type, 20,  1 >;  /**< G6_IO1 channel mode  */
    using G6_IO2  = regbits< type, 21,  1 >;  /**< G6_IO2 channel mode  */
    using G6_IO3  = regbits< type, 22,  1 >;  /**< G6_IO3 channel mode  */
    using G6_IO4  = regbits< type, 23,  1 >;  /**< G6_IO4 channel mode  */
    using G7_IO1  = regbits< type, 24,  1 >;  /**< G7_IO1 channel mode  */
    using G7_IO2  = regbits< type, 25,  1 >;  /**< G7_IO2 channel mode  */
    using G7_IO3  = regbits< type, 26,  1 >;  /**< G7_IO3 channel mode  */
    using G7_IO4  = regbits< type, 27,  1 >;  /**< G7_IO4 channel mode  */
    using G8_IO1  = regbits< type, 28,  1 >;  /**< G8_IO1 channel mode  */
    using G8_IO2  = regbits< type, 29,  1 >;  /**< G8_IO2 channel mode  */
    using G8_IO3  = regbits< type, 30,  1 >;  /**< G8_IO3 channel mode  */
    using G8_IO4  = regbits< type, 31,  1 >;  /**< G8_IO4 channel mode  */
  };

  /**
   * I/O group control status register
   */
  struct IOGCSR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using G8S  = regbits< type, 23,  1 >;  /**< Analog I/O group x status  */
    using G7S  = regbits< type, 22,  1 >;  /**< Analog I/O group x status  */
    using G6S  = regbits< type, 21,  1 >;  /**< Analog I/O group x status  */
    using G5S  = regbits< type, 20,  1 >;  /**< Analog I/O group x status  */
    using G4S  = regbits< type, 19,  1 >;  /**< Analog I/O group x status  */
    using G3S  = regbits< type, 18,  1 >;  /**< Analog I/O group x status  */
    using G2S  = regbits< type, 17,  1 >;  /**< Analog I/O group x status  */
    using G1S  = regbits< type, 16,  1 >;  /**< Analog I/O group x status  */
    using G8E  = regbits< type,  7,  1 >;  /**< Analog I/O group x enable  */
    using G7E  = regbits< type,  6,  1 >;  /**< Analog I/O group x enable  */
    using G6E  = regbits< type,  5,  1 >;  /**< Analog I/O group x enable  */
    using G5E  = regbits< type,  4,  1 >;  /**< Analog I/O group x enable  */
    using G4E  = regbits< type,  3,  1 >;  /**< Analog I/O group x enable  */
    using G3E  = regbits< type,  2,  1 >;  /**< Analog I/O group x enable  */
    using G2E  = regbits< type,  1,  1 >;  /**< Analog I/O group x enable  */
    using G1E  = regbits< type,  0,  1 >;  /**< Analog I/O group x enable  */
  };

  /**
   * I/O group x counter register
   */
  struct IOG1CR
  : public reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 14 >;  /**< Counter value  */
  };

  /**
   * I/O group x counter register
   */
  struct IOG2CR
  : public reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 14 >;  /**< Counter value  */
  };

  /**
   * I/O group x counter register
   */
  struct IOG3CR
  : public reg< uint32_t, base_addr + 0x3c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 14 >;  /**< Counter value  */
  };

  /**
   * I/O group x counter register
   */
  struct IOG4CR
  : public reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 14 >;  /**< Counter value  */
  };

  /**
   * I/O group x counter register
   */
  struct IOG5CR
  : public reg< uint32_t, base_addr + 0x44, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 14 >;  /**< Counter value  */
  };

  /**
   * I/O group x counter register
   */
  struct IOG6CR
  : public reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 14 >;  /**< Counter value  */
  };

  /**
   * I/O group x counter register
   */
  struct IOG7CR
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 14 >;  /**< Counter value  */
  };

  /**
   * I/O group x counter register
   */
  struct IOG8CR
  : public reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 14 >;  /**< Counter value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TSC_HPP_INCLUDED
