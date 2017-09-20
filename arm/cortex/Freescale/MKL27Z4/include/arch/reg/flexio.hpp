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
//  Import from CMSIS-SVD: "Freescale/MKL27Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL27Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL27Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FLEXIO_HPP_INCLUDED
#define ARCH_REG_FLEXIO_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * The FLEXIO Memory Map/Register Definition can be found here.
 */
struct FLEXIO
{
  static constexpr reg_addr_t base_addr = 0x4005f000;

  /**
   * Version ID Register
   */
  struct VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x1000000 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Feature Specification Number  */
    using MINOR    = regbits< type, 16,  8 >;  /**< Minor Version Number          */
    using MAJOR    = regbits< type, 24,  8 >;  /**< Major Version Number          */
  };

  /**
   * Parameter Register
   */
  struct PARAM
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
  struct CTRL
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
   * Shifter Status Register
   */
  struct SHIFTSTAT
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using SSF  = regbits< type,  0,  4 >;  /**< Shifter Status Flag  */
  };

  /**
   * Shifter Error Register
   */
  struct SHIFTERR
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using SEF  = regbits< type,  0,  4 >;  /**< Shifter Error Flags  */
  };

  /**
   * Timer Status Register
   */
  struct TIMSTAT
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using TSF  = regbits< type,  0,  4 >;  /**< Timer Status Flags  */
  };

  /**
   * Shifter Status Interrupt Enable
   */
  struct SHIFTSIEN
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using SSIE  = regbits< type,  0,  4 >;  /**< Shifter Status Interrupt Enable  */
  };

  /**
   * Shifter Error Interrupt Enable
   */
  struct SHIFTEIEN
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using SEIE  = regbits< type,  0,  4 >;  /**< Shifter Error Interrupt Enable  */
  };

  /**
   * Timer Interrupt Enable Register
   */
  struct TIMIEN
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using TEIE  = regbits< type,  0,  4 >;  /**< Timer Status Interrupt Enable  */
  };

  /**
   * Shifter Status DMA Enable
   */
  struct SHIFTSDEN
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using SSDE  = regbits< type,  0,  4 >;  /**< Shifter Status DMA Enable  */
  };

  /**
   * Shifter Control N Register
   */
  struct SHIFTCTL%s
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using SMOD    = regbits< type,  0,  3 >;  /**< Shifter Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Shifter Pin Polarity       */
    using PINSEL  = regbits< type,  8,  3 >;  /**< Shifter Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Shifter Pin Configuration  */
    using TIMPOL  = regbits< type, 23,  1 >;  /**< Timer Polarity             */
    using TIMSEL  = regbits< type, 24,  2 >;  /**< Timer Select               */
  };

  /**
   * Shifter Configuration N Register
   */
  struct SHIFTCFG%s
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SSTART  = regbits< type,  0,  2 >;  /**< Shifter Start bit  */
    using SSTOP   = regbits< type,  4,  2 >;  /**< Shifter Stop bit   */
    using INSRC   = regbits< type,  8,  1 >;  /**< Input Source       */
  };

  /**
   * Shifter Buffer N Register
   */
  struct SHIFTBUF%s
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using SHIFTBUF  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Swapped Register
   */
  struct SHIFTBUFBIS%s
  : public reg< uint32_t, base_addr + 0x280, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x280, rw, 0 >;

    using SHIFTBUFBIS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Byte Swapped Register
   */
  struct SHIFTBUFBYS%s
  : public reg< uint32_t, base_addr + 0x300, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 >;

    using SHIFTBUFBYS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Shifter Buffer N Bit Byte Swapped Register
   */
  struct SHIFTBUFBBS%s
  : public reg< uint32_t, base_addr + 0x380, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x380, rw, 0 >;

    using SHIFTBUFBBS  = regbits< type,  0, 32 >;  /**< Shift Buffer  */
  };

  /**
   * Timer Control N Register
   */
  struct TIMCTL%s
  : public reg< uint32_t, base_addr + 0x400, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0 >;

    using TIMOD   = regbits< type,  0,  2 >;  /**< Timer Mode               */
    using PINPOL  = regbits< type,  7,  1 >;  /**< Timer Pin Polarity       */
    using PINSEL  = regbits< type,  8,  3 >;  /**< Timer Pin Select         */
    using PINCFG  = regbits< type, 16,  2 >;  /**< Timer Pin Configuration  */
    using TRGSRC  = regbits< type, 22,  1 >;  /**< Trigger Source           */
    using TRGPOL  = regbits< type, 23,  1 >;  /**< Trigger Polarity         */
    using TRGSEL  = regbits< type, 24,  4 >;  /**< Trigger Select           */
  };

  /**
   * Timer Configuration N Register
   */
  struct TIMCFG%s
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
   * Timer Compare N Register
   */
  struct TIMCMP%s
  : public reg< uint32_t, base_addr + 0x500, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Timer Compare Value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLEXIO_HPP_INCLUDED
