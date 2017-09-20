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
//  Import from CMSIS-SVD: "Freescale/MKV44F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV44F15
//  series: Kinetis_V
//  version: 1.6
//  description: MKV44F15 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ENC_HPP_INCLUDED
#define ARCH_REG_ENC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Quadrature Decoder
 */
struct ENC
{
  static constexpr reg_addr_t base_addr = 0x40055000;

  /**
   * Control Register
   */
  struct CTRL
  : public reg< uint16_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0 >;

    using CMPIE   = regbits< type,  0,  1 >;  /**< Compare Interrupt Enable                                              */
    using CMPIRQ  = regbits< type,  1,  1 >;  /**< Compare Interrupt Request                                             */
    using WDE     = regbits< type,  2,  1 >;  /**< Watchdog Enable                                                       */
    using DIE     = regbits< type,  3,  1 >;  /**< Watchdog Timeout Interrupt Enable                                     */
    using DIRQ    = regbits< type,  4,  1 >;  /**< Watchdog Timeout Interrupt Request                                    */
    using XNE     = regbits< type,  5,  1 >;  /**< Use Negative Edge of INDEX Pulse                                      */
    using XIP     = regbits< type,  6,  1 >;  /**< INDEX Triggered Initialization of Position Counters UPOS and LPOS     */
    using XIE     = regbits< type,  7,  1 >;  /**< INDEX Pulse Interrupt Enable                                          */
    using XIRQ    = regbits< type,  8,  1 >;  /**< INDEX Pulse Interrupt Request                                         */
    using PH1     = regbits< type,  9,  1 >;  /**< Enable Signal Phase Count Mode                                        */
    using REV     = regbits< type, 10,  1 >;  /**< Enable Reverse Direction Counting                                     */
    using SWIP    = regbits< type, 11,  1 >;  /**< Software Triggered Initialization of Position Counters UPOS and LPOS  */
    using HNE     = regbits< type, 12,  1 >;  /**< Use Negative Edge of HOME Input                                       */
    using HIP     = regbits< type, 13,  1 >;  /**< Enable HOME to Initialize Position Counters UPOS and LPOS             */
    using HIE     = regbits< type, 14,  1 >;  /**< HOME Interrupt Enable                                                 */
    using HIRQ    = regbits< type, 15,  1 >;  /**< HOME Signal Transition Interrupt Request                              */
  };

  /**
   * Input Filter Register
   */
  struct FILT
  : public reg< uint16_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 >;

    using FILT_PER  = regbits< type,  0,  8 >;  /**< Input Filter Sample Period  */
    using FILT_CNT  = regbits< type,  8,  3 >;  /**< Input Filter Sample Count   */
  };

  /**
   * Watchdog Timeout Register
   */
  struct WTR
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using WDOG  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Position Difference Counter Register
   */
  struct POSD
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    // fixme: Field name equals parent register name: POSD
    using POSD_ = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Position Difference Hold Register
   */
  struct POSDH
  : public reg< uint16_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0 >;

    // fixme: Field name equals parent register name: POSDH
    using POSDH_ = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Revolution Counter Register
   */
  struct REV
  : public reg< uint16_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0 >;

    // fixme: Field name equals parent register name: REV
    using REV_ = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Revolution Hold Register
   */
  struct REVH
  : public reg< uint16_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc, ro, 0 >;

    // fixme: Field name equals parent register name: REVH
    using REVH_ = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Upper Position Counter Register
   */
  struct UPOS
  : public reg< uint16_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0 >;

    using POS  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Lower Position Counter Register
   */
  struct LPOS
  : public reg< uint16_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0 >;

    using POS  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Upper Position Hold Register
   */
  struct UPOSH
  : public reg< uint16_t, base_addr + 0x12, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12, ro, 0 >;

    using POSH  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Lower Position Hold Register
   */
  struct LPOSH
  : public reg< uint16_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14, ro, 0 >;

    using POSH  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Upper Initialization Register
   */
  struct UINIT
  : public reg< uint16_t, base_addr + 0x16, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0 >;

    using INIT  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Lower Initialization Register
   */
  struct LINIT
  : public reg< uint16_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0 >;

    using INIT  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Input Monitor Register
   */
  struct IMR
  : public reg< uint16_t, base_addr + 0x1a, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a, ro, 0 >;

    using HOME   = regbits< type,  0,  1 >;  /**< no description available  */
    using INDEX  = regbits< type,  1,  1 >;  /**< no description available  */
    using PHB    = regbits< type,  2,  1 >;  /**< no description available  */
    using PHA    = regbits< type,  3,  1 >;  /**< no description available  */
    using FHOM   = regbits< type,  4,  1 >;  /**< no description available  */
    using FIND   = regbits< type,  5,  1 >;  /**< no description available  */
    using FPHB   = regbits< type,  6,  1 >;  /**< no description available  */
    using FPHA   = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * Test Register
   */
  struct TST
  : public reg< uint16_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0 >;

    using TEST_COUNT   = regbits< type,  0,  8 >;  /**< no description available            */
    using TEST_PERIOD  = regbits< type,  8,  5 >;  /**< no description available            */
    using QDN          = regbits< type, 13,  1 >;  /**< Quadrature Decoder Negative Signal  */
    using TCE          = regbits< type, 14,  1 >;  /**< Test Counter Enable                 */
    using TEN          = regbits< type, 15,  1 >;  /**< Test Mode Enable                    */
  };

  /**
   * Control 2 Register
   */
  struct CTRL2
  : public reg< uint16_t, base_addr + 0x1e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e, rw, 0 >;

    using UPDHLD  = regbits< type,  0,  1 >;  /**< Update Hold Registers                                    */
    using UPDPOS  = regbits< type,  1,  1 >;  /**< Update Position Registers                                */
    using MOD     = regbits< type,  2,  1 >;  /**< Enable Modulo Counting                                   */
    using DIR     = regbits< type,  3,  1 >;  /**< Count Direction Flag                                     */
    using RUIE    = regbits< type,  4,  1 >;  /**< Roll-under Interrupt Enable                              */
    using RUIRQ   = regbits< type,  5,  1 >;  /**< Roll-under Interrupt Request                             */
    using ROIE    = regbits< type,  6,  1 >;  /**< Roll-over Interrupt Enable                               */
    using ROIRQ   = regbits< type,  7,  1 >;  /**< Roll-over Interrupt Request                              */
    using REVMOD  = regbits< type,  8,  1 >;  /**< Revolution Counter Modulus Enable                        */
    using OUTCTL  = regbits< type,  9,  1 >;  /**< Output Control                                           */
    using SABIE   = regbits< type, 10,  1 >;  /**< Simultaneous PHASEA and PHASEB Change Interrupt Enable   */
    using SABIRQ  = regbits< type, 11,  1 >;  /**< Simultaneous PHASEA and PHASEB Change Interrupt Request  */
  };

  /**
   * Upper Modulus Register
   */
  struct UMOD
  : public reg< uint16_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0 >;

    using MOD  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Lower Modulus Register
   */
  struct LMOD
  : public reg< uint16_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x22, rw, 0 >;

    using MOD  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Upper Position Compare Register
   */
  struct UCOMP
  : public reg< uint16_t, base_addr + 0x24, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0xFFFF >;

    using COMP  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Lower Position Compare Register
   */
  struct LCOMP
  : public reg< uint16_t, base_addr + 0x26, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x26, rw, 0xFFFF >;

    using COMP  = regbits< type,  0, 16 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ENC_HPP_INCLUDED
