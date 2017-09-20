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
//  Import from CMSIS-SVD: "Freescale/MKM14ZA5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKM14ZA5
//  series: Kinetis_M
//  version: 1.6
//  description: MKM14ZA5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TMR1_HPP_INCLUDED
#define ARCH_REG_TMR1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Quad Timer
 */
struct TMR1
{
  static constexpr reg_addr_t base_addr = 0x40058000;

  /**
   * Timer Channel Compare Register 1
   */
  struct COMP1
  : public reg< uint16_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0 >;

    using COMPARISON_1  = regbits< type,  0, 16 >;  /**< Comparison Value 1  */
  };

  /**
   * Timer Channel Compare Register 2
   */
  struct COMP2
  : public reg< uint16_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 >;

    using COMPARISON_2  = regbits< type,  0, 16 >;  /**< Comparison Value 2  */
  };

  /**
   * Timer Channel Capture Register
   */
  struct CAPT
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using CAPTURE  = regbits< type,  0, 16 >;  /**< Capture Value  */
  };

  /**
   * Timer Channel Load Register
   */
  struct LOAD
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    // fixme: Field name equals parent register name: LOAD
    using LOAD_ = regbits< type,  0, 16 >;  /**< Timer Load Register  */
  };

  /**
   * Timer Channel Hold Register
   */
  struct HOLD
  : public reg< uint16_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0 >;

    // fixme: Field name equals parent register name: HOLD
    using HOLD_ = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Timer Channel Counter Register
   */
  struct CNTR
  : public reg< uint16_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0 >;

    using COUNTER  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Timer Channel Control Register
   */
  struct CTRL
  : public reg< uint16_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0 >;

    using OUTMODE  = regbits< type,  0,  3 >;  /**< Output Mode                */
    using COINIT   = regbits< type,  3,  1 >;  /**< Co-Channel Initialization  */
    using DIR      = regbits< type,  4,  1 >;  /**< Count Direction            */
    using LENGTH   = regbits< type,  5,  1 >;  /**< Count Length               */
    using ONCE     = regbits< type,  6,  1 >;  /**< Count Once                 */
    using SCS      = regbits< type,  7,  2 >;  /**< Secondary Count Source     */
    using PCS      = regbits< type,  9,  4 >;  /**< Primary Count Source       */
    using CM       = regbits< type, 13,  3 >;  /**< Count Mode                 */
  };

  /**
   * Timer Channel Status and Control Register
   */
  struct SCTRL
  : public reg< uint16_t, base_addr + 0xe, rw, 0x100 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0x100 >;

    using OEN           = regbits< type,  0,  1 >;  /**< Output Enable                         */
    using OPS           = regbits< type,  1,  1 >;  /**< Output Polarity Select                */
    using FORCE         = regbits< type,  2,  1 >;  /**< Force OFLAG Output                    */
    using VAL           = regbits< type,  3,  1 >;  /**< Forced OFLAG Value                    */
    using EEOF          = regbits< type,  4,  1 >;  /**< Enable External OFLAG Force           */
    using MSTR          = regbits< type,  5,  1 >;  /**< Master Mode                           */
    using CAPTURE_MODE  = regbits< type,  6,  2 >;  /**< Input Capture Mode                    */
    using INPUT         = regbits< type,  8,  1 >;  /**< External Input Signal                 */
    using IPS           = regbits< type,  9,  1 >;  /**< Input Polarity Select                 */
    using IEFIE         = regbits< type, 10,  1 >;  /**< Input Edge Flag Interrupt Enable      */
    using IEF           = regbits< type, 11,  1 >;  /**< Input Edge Flag                       */
    using TOFIE         = regbits< type, 12,  1 >;  /**< Timer Overflow Flag Interrupt Enable  */
    using TOF           = regbits< type, 13,  1 >;  /**< Timer Overflow Flag                   */
    using TCFIE         = regbits< type, 14,  1 >;  /**< Timer Compare Flag Interrupt Enable   */
    using TCF           = regbits< type, 15,  1 >;  /**< Timer Compare Flag                    */
  };

  /**
   * Timer Channel Comparator Load Register 1
   */
  struct CMPLD1
  : public reg< uint16_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0 >;

    using COMPARATOR_LOAD_1  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Timer Channel Comparator Load Register 2
   */
  struct CMPLD2
  : public reg< uint16_t, base_addr + 0x12, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0 >;

    using COMPARATOR_LOAD_2  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Timer Channel Comparator Status and Control Register
   */
  struct CSCTRL
  : public reg< uint16_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0 >;

    using CL1       = regbits< type,  0,  2 >;  /**< Compare Load Control 1                  */
    using CL2       = regbits< type,  2,  2 >;  /**< Compare Load Control 2                  */
    using TCF1      = regbits< type,  4,  1 >;  /**< Timer Compare 1 Interrupt Flag          */
    using TCF2      = regbits< type,  5,  1 >;  /**< Timer Compare 2 Interrupt Flag          */
    using TCF1EN    = regbits< type,  6,  1 >;  /**< Timer Compare 1 Interrupt Enable        */
    using TCF2EN    = regbits< type,  7,  1 >;  /**< Timer Compare 2 Interrupt Enable        */
    using OFLAG     = regbits< type,  8,  1 >;  /**< Output flag                             */
    using UP        = regbits< type,  9,  1 >;  /**< Counting Direction Indicator            */
    using TCI       = regbits< type, 10,  1 >;  /**< Triggered Count Initialization Control  */
    using ROC       = regbits< type, 11,  1 >;  /**< Reload on Capture                       */
    using ALT_LOAD  = regbits< type, 12,  1 >;  /**< Alternative Load Enable                 */
    using FAULT     = regbits< type, 13,  1 >;  /**< Fault Enable                            */
    using DBG_EN    = regbits< type, 14,  2 >;  /**< Debug Actions Enable                    */
  };

  /**
   * Timer Channel Input Filter Register
   */
  struct FILT
  : public reg< uint16_t, base_addr + 0x16, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0 >;

    using FILT_PER  = regbits< type,  0,  8 >;  /**< Input Filter Sample Period  */
    using FILT_CNT  = regbits< type,  8,  3 >;  /**< Input Filter Sample Count   */
  };
};
} // namespace mptl

#endif // ARCH_REG_TMR1_HPP_INCLUDED
