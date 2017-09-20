/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE1.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE1
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE1 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FLEXIO0_HPP_INCLUDED
#define ARCH_REG_FLEXIO0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * FLEXIO0
 */
struct FLEXIO0
{
  static constexpr reg_addr_t base_addr = 0x400ca000;

  /**
   * Version ID Register
   */
  struct FLEXIO0_VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x1010001 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x1010001 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Feature Specification Number  */
    using MINOR    = regbits< type, 16,  8 >;  /**< Minor Version Number          */
    using MAJOR    = regbits< type, 24,  8 >;  /**< Major Version Number          */
  };

  /**
   * Parameter Register
   */
  struct FLEXIO0_PARAM
  : public reg< uint32_t, base_addr + 0x4, ro, 0x10080404 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x10080404 >;

    using SHIFTER  = regbits< type,  0,  8 >;  /**< Shifter Number  */
    using TIMER    = regbits< type,  8,  8 >;  /**< Timer Number    */
    using PIN      = regbits< type, 16,  8 >;  /**< Pin Number      */
    using TRIGGER  = regbits< type, 24,  8 >;  /**< Trigger Number  */
  };

  /**
   * FlexIO Control Register
   */
  struct FLEXIO0_CTRL
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using FLEXEN   = regbits< type,  0,  1 >;  /**< FlexIO Enable   */
    using SWRST    = regbits< type,  1,  1 >;  /**< Software Reset  */
    using FASTACC  = regbits< type,  2,  1 >;  /**< Fast Access     */
    using DBGE     = regbits< type, 30,  1 >;  /**< Debug Enable    */
    using DOZEN    = regbits< type, 31,  1 >;  /**< Doze Enable     */
  };

  /**
   * Pin State Register
   */
  struct FLEXIO0_PIN
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using PDI  = regbits< type,  0, 32 >;  /**< Pin Data Input  */
  };

  /**
   * Shifter Status Register
   */
  struct FLEXIO0_SHIFTSTAT
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using SSF  = regbits< type,  0,  8 >;  /**< Shifter Status Flag  */
  };

  /**
   * Shifter Error Register
   */
  struct FLEXIO0_SHIFTERR
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using SEF  = regbits< type,  0,  8 >;  /**< Shifter Error Flags  */
  };

  /**
   * Timer Status Register
   */
  struct FLEXIO0_TIMSTAT
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using TSF  = regbits< type,  0,  8 >;  /**< Timer Status Flags  */
  };

  /**
   * Shifter Status Interrupt Enable
   */
  struct FLEXIO0_SHIFTSIEN
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using SSIE  = regbits< type,  0,  8 >;  /**< Shifter Status Interrupt Enable  */
  };

  /**
   * Shifter Error Interrupt Enable
   */
  struct FLEXIO0_SHIFTEIEN
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using SEIE  = regbits< type,  0,  8 >;  /**< Shifter Error Interrupt Enable  */
  };

  /**
   * Timer Interrupt Enable Register
   */
  struct FLEXIO0_TIMIEN
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using TEIE  = regbits< type,  0,  8 >;  /**< Timer Status Interrupt Enable  */
  };

  /**
   * Shifter Status DMA Enable
   */
  struct FLEXIO0_SHIFTSDEN
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using SSDE  = regbits< type,  0,  8 >;  /**< Shifter Status DMA Enable  */
  };

  /**
   * Shifter State Register
   */
  struct FLEXIO0_SHIFTSTATE
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using STATE  = regbits< type,  0,  3 >;  /**< Current State Pointer  */
  };

  /**
   * Shifter Control N Register
   */
  struct FLEXIO0_SHIFTCTL0
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using SMOD    = regbits< type,  0,  3 >;  /**< Shifter Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Shifter Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Shifter Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Shifter Pin Configuration  */
    using TIMPOL  = regbits< type, 23,  1 >;  /**< Timer Polarity             */
    using TIMSEL  = regbits< type, 24,  3 >;  /**< Timer Select               */
  };

  /**
   * Shifter Control N Register
   */
  struct FLEXIO0_SHIFTCTL1
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using SMOD    = regbits< type,  0,  3 >;  /**< Shifter Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Shifter Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Shifter Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Shifter Pin Configuration  */
    using TIMPOL  = regbits< type, 23,  1 >;  /**< Timer Polarity             */
    using TIMSEL  = regbits< type, 24,  3 >;  /**< Timer Select               */
  };

  /**
   * Shifter Control N Register
   */
  struct FLEXIO0_SHIFTCTL2
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using SMOD    = regbits< type,  0,  3 >;  /**< Shifter Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Shifter Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Shifter Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Shifter Pin Configuration  */
    using TIMPOL  = regbits< type, 23,  1 >;  /**< Timer Polarity             */
    using TIMSEL  = regbits< type, 24,  3 >;  /**< Timer Select               */
  };

  /**
   * Shifter Control N Register
   */
  struct FLEXIO0_SHIFTCTL3
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0 >;

    using SMOD    = regbits< type,  0,  3 >;  /**< Shifter Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Shifter Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Shifter Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Shifter Pin Configuration  */
    using TIMPOL  = regbits< type, 23,  1 >;  /**< Timer Polarity             */
    using TIMSEL  = regbits< type, 24,  3 >;  /**< Timer Select               */
  };

  /**
   * Shifter Control N Register
   */
  struct FLEXIO0_SHIFTCTL4
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using SMOD    = regbits< type,  0,  3 >;  /**< Shifter Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Shifter Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Shifter Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Shifter Pin Configuration  */
    using TIMPOL  = regbits< type, 23,  1 >;  /**< Timer Polarity             */
    using TIMSEL  = regbits< type, 24,  3 >;  /**< Timer Select               */
  };

  /**
   * Shifter Control N Register
   */
  struct FLEXIO0_SHIFTCTL5
  : public reg< uint32_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0 >;

    using SMOD    = regbits< type,  0,  3 >;  /**< Shifter Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Shifter Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Shifter Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Shifter Pin Configuration  */
    using TIMPOL  = regbits< type, 23,  1 >;  /**< Timer Polarity             */
    using TIMSEL  = regbits< type, 24,  3 >;  /**< Timer Select               */
  };

  /**
   * Shifter Control N Register
   */
  struct FLEXIO0_SHIFTCTL6
  : public reg< uint32_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0 >;

    using SMOD    = regbits< type,  0,  3 >;  /**< Shifter Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Shifter Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Shifter Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Shifter Pin Configuration  */
    using TIMPOL  = regbits< type, 23,  1 >;  /**< Timer Polarity             */
    using TIMSEL  = regbits< type, 24,  3 >;  /**< Timer Select               */
  };

  /**
   * Shifter Control N Register
   */
  struct FLEXIO0_SHIFTCTL7
  : public reg< uint32_t, base_addr + 0x9c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0 >;

    using SMOD    = regbits< type,  0,  3 >;  /**< Shifter Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Shifter Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Shifter Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Shifter Pin Configuration  */
    using TIMPOL  = regbits< type, 23,  1 >;  /**< Timer Polarity             */
    using TIMSEL  = regbits< type, 24,  3 >;  /**< Timer Select               */
  };

  /**
   * Shifter Configuration N Register
   */
  struct FLEXIO0_SHIFTCFG0
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SSTART  = regbits< type,  0,  2 >;  /**< Shifter Start bit  */
    using SSTOP   = regbits< type,  4,  2 >;  /**< Shifter Stop bit   */
    using INSRC   = regbits< type,  8,  1 >;  /**< Input Source       */
    using PWIDTH  = regbits< type, 16,  5 >;  /**< Parallel Width     */
  };

  /**
   * Shifter Configuration N Register
   */
  struct FLEXIO0_SHIFTCFG1
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using SSTART  = regbits< type,  0,  2 >;  /**< Shifter Start bit  */
    using SSTOP   = regbits< type,  4,  2 >;  /**< Shifter Stop bit   */
    using INSRC   = regbits< type,  8,  1 >;  /**< Input Source       */
    using PWIDTH  = regbits< type, 16,  5 >;  /**< Parallel Width     */
  };

  /**
   * Shifter Configuration N Register
   */
  struct FLEXIO0_SHIFTCFG2
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using SSTART  = regbits< type,  0,  2 >;  /**< Shifter Start bit  */
    using SSTOP   = regbits< type,  4,  2 >;  /**< Shifter Stop bit   */
    using INSRC   = regbits< type,  8,  1 >;  /**< Input Source       */
    using PWIDTH  = regbits< type, 16,  5 >;  /**< Parallel Width     */
  };

  /**
   * Shifter Configuration N Register
   */
  struct FLEXIO0_SHIFTCFG3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using SSTART  = regbits< type,  0,  2 >;  /**< Shifter Start bit  */
    using SSTOP   = regbits< type,  4,  2 >;  /**< Shifter Stop bit   */
    using INSRC   = regbits< type,  8,  1 >;  /**< Input Source       */
    using PWIDTH  = regbits< type, 16,  5 >;  /**< Parallel Width     */
  };

  /**
   * Shifter Configuration N Register
   */
  struct FLEXIO0_SHIFTCFG4
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using SSTART  = regbits< type,  0,  2 >;  /**< Shifter Start bit  */
    using SSTOP   = regbits< type,  4,  2 >;  /**< Shifter Stop bit   */
    using INSRC   = regbits< type,  8,  1 >;  /**< Input Source       */
    using PWIDTH  = regbits< type, 16,  5 >;  /**< Parallel Width     */
  };

  /**
   * Shifter Configuration N Register
   */
  struct FLEXIO0_SHIFTCFG5
  : public reg< uint32_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0 >;

    using SSTART  = regbits< type,  0,  2 >;  /**< Shifter Start bit  */
    using SSTOP   = regbits< type,  4,  2 >;  /**< Shifter Stop bit   */
    using INSRC   = regbits< type,  8,  1 >;  /**< Input Source       */
    using PWIDTH  = regbits< type, 16,  5 >;  /**< Parallel Width     */
  };

  /**
   * Shifter Configuration N Register
   */
  struct FLEXIO0_SHIFTCFG6
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using SSTART  = regbits< type,  0,  2 >;  /**< Shifter Start bit  */
    using SSTOP   = regbits< type,  4,  2 >;  /**< Shifter Stop bit   */
    using INSRC   = regbits< type,  8,  1 >;  /**< Input Source       */
    using PWIDTH  = regbits< type, 16,  5 >;  /**< Parallel Width     */
  };

  /**
   * Shifter Configuration N Register
   */
  struct FLEXIO0_SHIFTCFG7
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0 >;

    using SSTART  = regbits< type,  0,  2 >;  /**< Shifter Start bit  */
    using SSTOP   = regbits< type,  4,  2 >;  /**< Shifter Stop bit   */
    using INSRC   = regbits< type,  8,  1 >;  /**< Input Source       */
    using PWIDTH  = regbits< type, 16,  5 >;  /**< Parallel Width     */
  };

  /**
   * Shifter Buffer N Register
   */
  struct FLEXIO0_SHIFTBUF0
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using SHIFTBUF  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Register
   */
  struct FLEXIO0_SHIFTBUF1
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using SHIFTBUF  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Register
   */
  struct FLEXIO0_SHIFTBUF2
  : public reg< uint32_t, base_addr + 0x208, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0 >;

    using SHIFTBUF  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Register
   */
  struct FLEXIO0_SHIFTBUF3
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0 >;

    using SHIFTBUF  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Register
   */
  struct FLEXIO0_SHIFTBUF4
  : public reg< uint32_t, base_addr + 0x210, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x210, rw, 0 >;

    using SHIFTBUF  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Register
   */
  struct FLEXIO0_SHIFTBUF5
  : public reg< uint32_t, base_addr + 0x214, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x214, rw, 0 >;

    using SHIFTBUF  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Register
   */
  struct FLEXIO0_SHIFTBUF6
  : public reg< uint32_t, base_addr + 0x218, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x218, rw, 0 >;

    using SHIFTBUF  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Register
   */
  struct FLEXIO0_SHIFTBUF7
  : public reg< uint32_t, base_addr + 0x21c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x21c, rw, 0 >;

    using SHIFTBUF  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBIS0
  : public reg< uint32_t, base_addr + 0x280, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x280, rw, 0 >;

    using SHIFTBUFBIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBIS1
  : public reg< uint32_t, base_addr + 0x284, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x284, rw, 0 >;

    using SHIFTBUFBIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBIS2
  : public reg< uint32_t, base_addr + 0x288, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x288, rw, 0 >;

    using SHIFTBUFBIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBIS3
  : public reg< uint32_t, base_addr + 0x28c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28c, rw, 0 >;

    using SHIFTBUFBIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBIS4
  : public reg< uint32_t, base_addr + 0x290, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x290, rw, 0 >;

    using SHIFTBUFBIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBIS5
  : public reg< uint32_t, base_addr + 0x294, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x294, rw, 0 >;

    using SHIFTBUFBIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBIS6
  : public reg< uint32_t, base_addr + 0x298, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x298, rw, 0 >;

    using SHIFTBUFBIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBIS7
  : public reg< uint32_t, base_addr + 0x29c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x29c, rw, 0 >;

    using SHIFTBUFBIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBYS0
  : public reg< uint32_t, base_addr + 0x300, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 >;

    using SHIFTBUFBYS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBYS1
  : public reg< uint32_t, base_addr + 0x304, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 >;

    using SHIFTBUFBYS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBYS2
  : public reg< uint32_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 >;

    using SHIFTBUFBYS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBYS3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0 >;

    using SHIFTBUFBYS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBYS4
  : public reg< uint32_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0 >;

    using SHIFTBUFBYS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBYS5
  : public reg< uint32_t, base_addr + 0x314, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0 >;

    using SHIFTBUFBYS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBYS6
  : public reg< uint32_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0 >;

    using SHIFTBUFBYS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBYS7
  : public reg< uint32_t, base_addr + 0x31c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0 >;

    using SHIFTBUFBYS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBBS0
  : public reg< uint32_t, base_addr + 0x380, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x380, rw, 0 >;

    using SHIFTBUFBBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBBS1
  : public reg< uint32_t, base_addr + 0x384, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x384, rw, 0 >;

    using SHIFTBUFBBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBBS2
  : public reg< uint32_t, base_addr + 0x388, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x388, rw, 0 >;

    using SHIFTBUFBBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBBS3
  : public reg< uint32_t, base_addr + 0x38c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38c, rw, 0 >;

    using SHIFTBUFBBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBBS4
  : public reg< uint32_t, base_addr + 0x390, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x390, rw, 0 >;

    using SHIFTBUFBBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBBS5
  : public reg< uint32_t, base_addr + 0x394, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x394, rw, 0 >;

    using SHIFTBUFBBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBBS6
  : public reg< uint32_t, base_addr + 0x398, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x398, rw, 0 >;

    using SHIFTBUFBBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFBBS7
  : public reg< uint32_t, base_addr + 0x39c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x39c, rw, 0 >;

    using SHIFTBUFBBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Timer Control N Register
   */
  struct FLEXIO0_TIMCTL0
  : public reg< uint32_t, base_addr + 0x400, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0 >;

    using TIMOD   = regbits< type,  0,  2 >;  /**< Timer Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Timer Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Timer Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Timer Pin Configuration  */
    using TRGSRC  = regbits< type, 22,  1 >;  /**< Trigger Source           */
    using TRGPOL  = regbits< type, 23,  1 >;  /**< Trigger Polarity         */
    using TRGSEL  = regbits< type, 24,  6 >;  /**< Trigger Select           */
  };

  /**
   * Timer Control N Register
   */
  struct FLEXIO0_TIMCTL1
  : public reg< uint32_t, base_addr + 0x404, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0 >;

    using TIMOD   = regbits< type,  0,  2 >;  /**< Timer Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Timer Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Timer Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Timer Pin Configuration  */
    using TRGSRC  = regbits< type, 22,  1 >;  /**< Trigger Source           */
    using TRGPOL  = regbits< type, 23,  1 >;  /**< Trigger Polarity         */
    using TRGSEL  = regbits< type, 24,  6 >;  /**< Trigger Select           */
  };

  /**
   * Timer Control N Register
   */
  struct FLEXIO0_TIMCTL2
  : public reg< uint32_t, base_addr + 0x408, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x408, rw, 0 >;

    using TIMOD   = regbits< type,  0,  2 >;  /**< Timer Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Timer Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Timer Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Timer Pin Configuration  */
    using TRGSRC  = regbits< type, 22,  1 >;  /**< Trigger Source           */
    using TRGPOL  = regbits< type, 23,  1 >;  /**< Trigger Polarity         */
    using TRGSEL  = regbits< type, 24,  6 >;  /**< Trigger Select           */
  };

  /**
   * Timer Control N Register
   */
  struct FLEXIO0_TIMCTL3
  : public reg< uint32_t, base_addr + 0x40c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, rw, 0 >;

    using TIMOD   = regbits< type,  0,  2 >;  /**< Timer Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Timer Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Timer Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Timer Pin Configuration  */
    using TRGSRC  = regbits< type, 22,  1 >;  /**< Trigger Source           */
    using TRGPOL  = regbits< type, 23,  1 >;  /**< Trigger Polarity         */
    using TRGSEL  = regbits< type, 24,  6 >;  /**< Trigger Select           */
  };

  /**
   * Timer Control N Register
   */
  struct FLEXIO0_TIMCTL4
  : public reg< uint32_t, base_addr + 0x410, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x410, rw, 0 >;

    using TIMOD   = regbits< type,  0,  2 >;  /**< Timer Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Timer Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Timer Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Timer Pin Configuration  */
    using TRGSRC  = regbits< type, 22,  1 >;  /**< Trigger Source           */
    using TRGPOL  = regbits< type, 23,  1 >;  /**< Trigger Polarity         */
    using TRGSEL  = regbits< type, 24,  6 >;  /**< Trigger Select           */
  };

  /**
   * Timer Control N Register
   */
  struct FLEXIO0_TIMCTL5
  : public reg< uint32_t, base_addr + 0x414, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x414, rw, 0 >;

    using TIMOD   = regbits< type,  0,  2 >;  /**< Timer Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Timer Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Timer Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Timer Pin Configuration  */
    using TRGSRC  = regbits< type, 22,  1 >;  /**< Trigger Source           */
    using TRGPOL  = regbits< type, 23,  1 >;  /**< Trigger Polarity         */
    using TRGSEL  = regbits< type, 24,  6 >;  /**< Trigger Select           */
  };

  /**
   * Timer Control N Register
   */
  struct FLEXIO0_TIMCTL6
  : public reg< uint32_t, base_addr + 0x418, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x418, rw, 0 >;

    using TIMOD   = regbits< type,  0,  2 >;  /**< Timer Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Timer Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Timer Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Timer Pin Configuration  */
    using TRGSRC  = regbits< type, 22,  1 >;  /**< Trigger Source           */
    using TRGPOL  = regbits< type, 23,  1 >;  /**< Trigger Polarity         */
    using TRGSEL  = regbits< type, 24,  6 >;  /**< Trigger Select           */
  };

  /**
   * Timer Control N Register
   */
  struct FLEXIO0_TIMCTL7
  : public reg< uint32_t, base_addr + 0x41c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x41c, rw, 0 >;

    using TIMOD   = regbits< type,  0,  2 >;  /**< Timer Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Timer Pin Polarity       */
    using PINSEL  = regbits< type,  8,  5 >;  /**< Timer Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Timer Pin Configuration  */
    using TRGSRC  = regbits< type, 22,  1 >;  /**< Trigger Source           */
    using TRGPOL  = regbits< type, 23,  1 >;  /**< Trigger Polarity         */
    using TRGSEL  = regbits< type, 24,  6 >;  /**< Trigger Select           */
  };

  /**
   * Timer Configuration N Register
   */
  struct FLEXIO0_TIMCFG0
  : public reg< uint32_t, base_addr + 0x480, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x480, rw, 0 >;

    using TSTART  = regbits< type,  1,  1 >;  /**< Timer Start Bit  */
    using TSTOP   = regbits< type,  4,  2 >;  /**< Timer Stop Bit   */
    using TIMENA  = regbits< type,  8,  3 >;  /**< Timer Enable     */
    using TIMDIS  = regbits< type, 12,  3 >;  /**< Timer Disable    */
    using TIMRST  = regbits< type, 16,  3 >;  /**< Timer Reset      */
    using TIMDEC  = regbits< type, 20,  2 >;  /**< Timer Decrement  */
    using TIMOUT  = regbits< type, 24,  2 >;  /**< Timer Output     */
  };

  /**
   * Timer Configuration N Register
   */
  struct FLEXIO0_TIMCFG1
  : public reg< uint32_t, base_addr + 0x484, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x484, rw, 0 >;

    using TSTART  = regbits< type,  1,  1 >;  /**< Timer Start Bit  */
    using TSTOP   = regbits< type,  4,  2 >;  /**< Timer Stop Bit   */
    using TIMENA  = regbits< type,  8,  3 >;  /**< Timer Enable     */
    using TIMDIS  = regbits< type, 12,  3 >;  /**< Timer Disable    */
    using TIMRST  = regbits< type, 16,  3 >;  /**< Timer Reset      */
    using TIMDEC  = regbits< type, 20,  2 >;  /**< Timer Decrement  */
    using TIMOUT  = regbits< type, 24,  2 >;  /**< Timer Output     */
  };

  /**
   * Timer Configuration N Register
   */
  struct FLEXIO0_TIMCFG2
  : public reg< uint32_t, base_addr + 0x488, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x488, rw, 0 >;

    using TSTART  = regbits< type,  1,  1 >;  /**< Timer Start Bit  */
    using TSTOP   = regbits< type,  4,  2 >;  /**< Timer Stop Bit   */
    using TIMENA  = regbits< type,  8,  3 >;  /**< Timer Enable     */
    using TIMDIS  = regbits< type, 12,  3 >;  /**< Timer Disable    */
    using TIMRST  = regbits< type, 16,  3 >;  /**< Timer Reset      */
    using TIMDEC  = regbits< type, 20,  2 >;  /**< Timer Decrement  */
    using TIMOUT  = regbits< type, 24,  2 >;  /**< Timer Output     */
  };

  /**
   * Timer Configuration N Register
   */
  struct FLEXIO0_TIMCFG3
  : public reg< uint32_t, base_addr + 0x48c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48c, rw, 0 >;

    using TSTART  = regbits< type,  1,  1 >;  /**< Timer Start Bit  */
    using TSTOP   = regbits< type,  4,  2 >;  /**< Timer Stop Bit   */
    using TIMENA  = regbits< type,  8,  3 >;  /**< Timer Enable     */
    using TIMDIS  = regbits< type, 12,  3 >;  /**< Timer Disable    */
    using TIMRST  = regbits< type, 16,  3 >;  /**< Timer Reset      */
    using TIMDEC  = regbits< type, 20,  2 >;  /**< Timer Decrement  */
    using TIMOUT  = regbits< type, 24,  2 >;  /**< Timer Output     */
  };

  /**
   * Timer Configuration N Register
   */
  struct FLEXIO0_TIMCFG4
  : public reg< uint32_t, base_addr + 0x490, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x490, rw, 0 >;

    using TSTART  = regbits< type,  1,  1 >;  /**< Timer Start Bit  */
    using TSTOP   = regbits< type,  4,  2 >;  /**< Timer Stop Bit   */
    using TIMENA  = regbits< type,  8,  3 >;  /**< Timer Enable     */
    using TIMDIS  = regbits< type, 12,  3 >;  /**< Timer Disable    */
    using TIMRST  = regbits< type, 16,  3 >;  /**< Timer Reset      */
    using TIMDEC  = regbits< type, 20,  2 >;  /**< Timer Decrement  */
    using TIMOUT  = regbits< type, 24,  2 >;  /**< Timer Output     */
  };

  /**
   * Timer Configuration N Register
   */
  struct FLEXIO0_TIMCFG5
  : public reg< uint32_t, base_addr + 0x494, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x494, rw, 0 >;

    using TSTART  = regbits< type,  1,  1 >;  /**< Timer Start Bit  */
    using TSTOP   = regbits< type,  4,  2 >;  /**< Timer Stop Bit   */
    using TIMENA  = regbits< type,  8,  3 >;  /**< Timer Enable     */
    using TIMDIS  = regbits< type, 12,  3 >;  /**< Timer Disable    */
    using TIMRST  = regbits< type, 16,  3 >;  /**< Timer Reset      */
    using TIMDEC  = regbits< type, 20,  2 >;  /**< Timer Decrement  */
    using TIMOUT  = regbits< type, 24,  2 >;  /**< Timer Output     */
  };

  /**
   * Timer Configuration N Register
   */
  struct FLEXIO0_TIMCFG6
  : public reg< uint32_t, base_addr + 0x498, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x498, rw, 0 >;

    using TSTART  = regbits< type,  1,  1 >;  /**< Timer Start Bit  */
    using TSTOP   = regbits< type,  4,  2 >;  /**< Timer Stop Bit   */
    using TIMENA  = regbits< type,  8,  3 >;  /**< Timer Enable     */
    using TIMDIS  = regbits< type, 12,  3 >;  /**< Timer Disable    */
    using TIMRST  = regbits< type, 16,  3 >;  /**< Timer Reset      */
    using TIMDEC  = regbits< type, 20,  2 >;  /**< Timer Decrement  */
    using TIMOUT  = regbits< type, 24,  2 >;  /**< Timer Output     */
  };

  /**
   * Timer Configuration N Register
   */
  struct FLEXIO0_TIMCFG7
  : public reg< uint32_t, base_addr + 0x49c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x49c, rw, 0 >;

    using TSTART  = regbits< type,  1,  1 >;  /**< Timer Start Bit  */
    using TSTOP   = regbits< type,  4,  2 >;  /**< Timer Stop Bit   */
    using TIMENA  = regbits< type,  8,  3 >;  /**< Timer Enable     */
    using TIMDIS  = regbits< type, 12,  3 >;  /**< Timer Disable    */
    using TIMRST  = regbits< type, 16,  3 >;  /**< Timer Reset      */
    using TIMDEC  = regbits< type, 20,  2 >;  /**< Timer Decrement  */
    using TIMOUT  = regbits< type, 24,  2 >;  /**< Timer Output     */
  };

  /**
   * Timer Compare N Register
   */
  struct FLEXIO0_TIMCMP0
  : public reg< uint32_t, base_addr + 0x500, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Timer Compare Value  */
  };

  /**
   * Timer Compare N Register
   */
  struct FLEXIO0_TIMCMP1
  : public reg< uint32_t, base_addr + 0x504, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Timer Compare Value  */
  };

  /**
   * Timer Compare N Register
   */
  struct FLEXIO0_TIMCMP2
  : public reg< uint32_t, base_addr + 0x508, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Timer Compare Value  */
  };

  /**
   * Timer Compare N Register
   */
  struct FLEXIO0_TIMCMP3
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Timer Compare Value  */
  };

  /**
   * Timer Compare N Register
   */
  struct FLEXIO0_TIMCMP4
  : public reg< uint32_t, base_addr + 0x510, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Timer Compare Value  */
  };

  /**
   * Timer Compare N Register
   */
  struct FLEXIO0_TIMCMP5
  : public reg< uint32_t, base_addr + 0x514, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Timer Compare Value  */
  };

  /**
   * Timer Compare N Register
   */
  struct FLEXIO0_TIMCMP6
  : public reg< uint32_t, base_addr + 0x518, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x518, rw, 0 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Timer Compare Value  */
  };

  /**
   * Timer Compare N Register
   */
  struct FLEXIO0_TIMCMP7
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Timer Compare Value  */
  };

  /**
   * Shifter Buffer N Nibble Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNBS0
  : public reg< uint32_t, base_addr + 0x680, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x680, rw, 0 >;

    using SHIFTBUFNBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNBS1
  : public reg< uint32_t, base_addr + 0x684, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x684, rw, 0 >;

    using SHIFTBUFNBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNBS2
  : public reg< uint32_t, base_addr + 0x688, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x688, rw, 0 >;

    using SHIFTBUFNBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNBS3
  : public reg< uint32_t, base_addr + 0x68c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68c, rw, 0 >;

    using SHIFTBUFNBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNBS4
  : public reg< uint32_t, base_addr + 0x690, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x690, rw, 0 >;

    using SHIFTBUFNBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNBS5
  : public reg< uint32_t, base_addr + 0x694, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x694, rw, 0 >;

    using SHIFTBUFNBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNBS6
  : public reg< uint32_t, base_addr + 0x698, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x698, rw, 0 >;

    using SHIFTBUFNBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Byte Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNBS7
  : public reg< uint32_t, base_addr + 0x69c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x69c, rw, 0 >;

    using SHIFTBUFNBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Half Word Swapped Register
   */
  struct FLEXIO0_SHIFTBUFHWS0
  : public reg< uint32_t, base_addr + 0x700, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x700, rw, 0 >;

    using SHIFTBUFHWS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Half Word Swapped Register
   */
  struct FLEXIO0_SHIFTBUFHWS1
  : public reg< uint32_t, base_addr + 0x704, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x704, rw, 0 >;

    using SHIFTBUFHWS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Half Word Swapped Register
   */
  struct FLEXIO0_SHIFTBUFHWS2
  : public reg< uint32_t, base_addr + 0x708, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x708, rw, 0 >;

    using SHIFTBUFHWS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Half Word Swapped Register
   */
  struct FLEXIO0_SHIFTBUFHWS3
  : public reg< uint32_t, base_addr + 0x70c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70c, rw, 0 >;

    using SHIFTBUFHWS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Half Word Swapped Register
   */
  struct FLEXIO0_SHIFTBUFHWS4
  : public reg< uint32_t, base_addr + 0x710, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x710, rw, 0 >;

    using SHIFTBUFHWS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Half Word Swapped Register
   */
  struct FLEXIO0_SHIFTBUFHWS5
  : public reg< uint32_t, base_addr + 0x714, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x714, rw, 0 >;

    using SHIFTBUFHWS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Half Word Swapped Register
   */
  struct FLEXIO0_SHIFTBUFHWS6
  : public reg< uint32_t, base_addr + 0x718, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x718, rw, 0 >;

    using SHIFTBUFHWS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Half Word Swapped Register
   */
  struct FLEXIO0_SHIFTBUFHWS7
  : public reg< uint32_t, base_addr + 0x71c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x71c, rw, 0 >;

    using SHIFTBUFHWS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNIS0
  : public reg< uint32_t, base_addr + 0x780, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x780, rw, 0 >;

    using SHIFTBUFNIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNIS1
  : public reg< uint32_t, base_addr + 0x784, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x784, rw, 0 >;

    using SHIFTBUFNIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNIS2
  : public reg< uint32_t, base_addr + 0x788, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x788, rw, 0 >;

    using SHIFTBUFNIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNIS3
  : public reg< uint32_t, base_addr + 0x78c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78c, rw, 0 >;

    using SHIFTBUFNIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNIS4
  : public reg< uint32_t, base_addr + 0x790, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x790, rw, 0 >;

    using SHIFTBUFNIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNIS5
  : public reg< uint32_t, base_addr + 0x794, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x794, rw, 0 >;

    using SHIFTBUFNIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNIS6
  : public reg< uint32_t, base_addr + 0x798, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x798, rw, 0 >;

    using SHIFTBUFNIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Nibble Swapped Register
   */
  struct FLEXIO0_SHIFTBUFNIS7
  : public reg< uint32_t, base_addr + 0x79c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x79c, rw, 0 >;

    using SHIFTBUFNIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLEXIO0_HPP_INCLUDED
