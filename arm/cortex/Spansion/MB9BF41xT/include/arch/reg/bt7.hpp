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
//  Import from CMSIS-SVD: "Spansion/MB9BF41xT.svd"
//
//  name: MB9BF41xT
//  version: 1.7
//  description: MB9BF41xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_BT7_HPP_INCLUDED
#define ARCH_REG_BT7_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Base Timer 0
 *
 * (derived from: BT0)
 */
struct BT7
{
  static constexpr reg_addr_t base_addr = 0x400252c0;

  /**
   * Timer Control Register
   */
  struct PWM_TMCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >;

    using CKS2_0  = regbits< type, 12,  3 >;  /**< Count clock selection bit          */
    using RTGEN   = regbits< type, 11,  1 >;  /**< Restart enable bit                 */
    using PMSK    = regbits< type, 10,  1 >;  /**< Pulse output mask bit              */
    using EGS     = regbits< type,  8,  2 >;  /**< Trigger input edge selection bits  */
    using FMD     = regbits< type,  4,  3 >;  /**< Timer function selection bits      */
    using OSEL    = regbits< type,  3,  1 >;  /**< Output polarity specification bit  */
    using MDSE    = regbits< type,  2,  1 >;  /**< Mode selection bit                 */
    using CTEN    = regbits< type,  1,  1 >;  /**< Count operation enable bit         */
    using STRG    = regbits< type,  0,  1 >;  /**< Software trigger bit               */
  };

  /**
   * Timer Control Register 2
   */
  struct PWM_TMCR2
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using CKS3  = regbits< type,  0,  1 >;  /**< Count clock selection bit  */
  };

  /**
   * Status Control Register
   */
  struct PWM_STC
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using TGIE  = regbits< type,  6,  1 >;  /**< Trigger interrupt request enable bit     */
    using DTIE  = regbits< type,  5,  1 >;  /**< Duty match interrupt request enable bit  */
    using UDIE  = regbits< type,  4,  1 >;  /**< Underflow interrupt request enable bit   */
    using TGIR  = regbits< type,  2,  1 >;  /**< Trigger interrupt request bit            */
    using DTIR  = regbits< type,  1,  1 >;  /**< Duty match interrupt request bit         */
    using UDIR  = regbits< type,  0,  1 >;  /**< Underflow interrupt request bit          */
  };

  /**
   * PWM Cycle Set Register
   */
  struct PWM_PCSR
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
  };

  /**
   * PWM Duty Set Register
   */
  struct PWM_PDUT
  : public reg< uint16_t, base_addr + 0x04, rw, 0x0000 >
  {
  };

  /**
   * Timer Register
   */
  struct PWM_TMR
  : public reg< uint16_t, base_addr + 0x08, ro, 0x0000 >
  {
  };

  /**
   * Timer Control Register
   */
  struct PPG_TMCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >;

    using CKS2_0  = regbits< type, 12,  3 >;  /**< Count clock selection bit          */
    using RTGEN   = regbits< type, 11,  1 >;  /**< Restart enable bit                 */
    using PMSK    = regbits< type, 10,  1 >;  /**< Pulse output mask bit              */
    using EGS     = regbits< type,  8,  2 >;  /**< Trigger input edge selection bits  */
    using FMD     = regbits< type,  4,  3 >;  /**< Timer function selection bits      */
    using OSEL    = regbits< type,  3,  1 >;  /**< Output polarity specification bit  */
    using MDSE    = regbits< type,  2,  1 >;  /**< Mode selection bit                 */
    using CTEN    = regbits< type,  1,  1 >;  /**< Count operation enable bit         */
    using STRG    = regbits< type,  0,  1 >;  /**< Software trigger bit               */
  };

  /**
   * Timer Control Register 2
   */
  struct PPG_TMCR2
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using CKS3  = regbits< type,  1,  1 >;  /**< Count clock selection bit  */
  };

  /**
   * Status Control Register
   */
  struct PPG_STC
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using TGIE  = regbits< type,  6,  1 >;  /**< Trigger interrupt request enable bit    */
    using UDIE  = regbits< type,  4,  1 >;  /**< Underflow interrupt request enable bit  */
    using TGIR  = regbits< type,  2,  1 >;  /**< Trigger interrupt request bit           */
    using UDIR  = regbits< type,  0,  1 >;  /**< Underflow interrupt request bit         */
  };

  /**
   * LOW Width Reload Register
   */
  struct PPG_PRLL
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
  };

  /**
   * HIGH Width Reload Register
   */
  struct PPG_PRLH
  : public reg< uint16_t, base_addr + 0x04, rw, 0x0000 >
  {
  };

  /**
   * Timer Register
   */
  struct PPG_TMR
  : public reg< uint16_t, base_addr + 0x08, ro, 0x0000 >
  {
  };

  /**
   * Timer Control Register
   */
  struct RT_TMCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >;

    using CKS2_0  = regbits< type, 12,  3 >;  /**< Count clock selection bit          */
    using EGS     = regbits< type,  8,  2 >;  /**< Trigger input edge selection bits  */
    using T32     = regbits< type,  7,  1 >;  /**< 32-bit timer selection bit         */
    using FMD     = regbits< type,  4,  3 >;  /**< Timer function selection bits      */
    using OSEL    = regbits< type,  3,  1 >;  /**< Output polarity specification bit  */
    using MDSE    = regbits< type,  2,  1 >;  /**< Mode selection bit                 */
    using CTEN    = regbits< type,  1,  1 >;  /**< Timer enable bit                   */
    using STRG    = regbits< type,  0,  1 >;  /**< Software trigger bit               */
  };

  /**
   * Timer Control Register 2
   */
  struct RT_TMCR2
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using CKS3  = regbits< type,  0,  1 >;  /**< Count clock selection bit  */
  };

  /**
   * Status Control Register
   */
  struct RT_STC
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using TGIE  = regbits< type,  6,  1 >;  /**< Trigger interrupt request enable bit    */
    using UDIE  = regbits< type,  4,  1 >;  /**< Underflow interrupt request enable bit  */
    using TGIR  = regbits< type,  2,  1 >;  /**< Trigger interrupt request bit           */
    using UDIR  = regbits< type,  0,  1 >;  /**< Underflow interrupt request bit         */
  };

  /**
   * PWM Cycle Set Register
   */
  struct RT_PCSR
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
  };

  /**
   * Timer Register
   */
  struct RT_TMR
  : public reg< uint16_t, base_addr + 0x08, ro, 0x0000 >
  {
  };

  /**
   * Timer Control Register
   */
  struct PWC_TMCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >;

    using CKS2_0  = regbits< type, 12,  3 >;  /**< Count clock selection bit        */
    using EGS     = regbits< type,  8,  3 >;  /**< Measurement edge selection bits  */
    using T32     = regbits< type,  7,  1 >;  /**< 32-bit timer selection bit       */
    using FMD     = regbits< type,  4,  3 >;  /**< Timer function selection bits    */
    using MDSE    = regbits< type,  2,  1 >;  /**< Mode selection bit               */
    using CTEN    = regbits< type,  1,  1 >;  /**< Timer enable bit                 */
  };

  /**
   * Timer Control Register 2
   */
  struct PWC_TMCR2
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using CKS3  = regbits< type,  0,  1 >;  /**< Count clock selection bit  */
  };

  /**
   * Status Control Register
   */
  struct PWC_STC
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using ERR   = regbits< type,  7,  1 >;  /**< Error flag bit                                       */
    using EDIE  = regbits< type,  6,  1 >;  /**< Measurement completion interrupt request enable bit  */
    using OVIE  = regbits< type,  4,  1 >;  /**< Overflow interrupt request enable bit                */
    using EDIR  = regbits< type,  2,  1 >;  /**< Measurement completion interrupt request bit         */
    using OVIR  = regbits< type,  0,  1 >;  /**< Overflow interrupt request bit                       */
  };

  /**
   * Data Buffer Register
   */
  struct PWC_DTBF
  : public reg< uint16_t, base_addr + 0x04, ro, 0x0000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_BT7_HPP_INCLUDED
