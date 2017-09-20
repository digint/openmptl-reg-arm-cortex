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
//  Import from CMSIS-SVD: "Spansion/MB9BF52xS.svd"
//
//  name: MB9BF52xS
//  version: 1.0
//  description: MB9BF52xS
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_BT1_HPP_INCLUDED
#define ARCH_REG_BT1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral BT0
 *
 * (derived from: BT0)
 */
struct BT1
{
  static constexpr reg_addr_t base_addr = 0x40025040;

  /**
   * register PWM_TMCR
   */
  struct PWM_TMCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >;

    using CKS2_0  = regbits< type, 12,  3 >;  /**< bitfield CKS2_0  */
    using RTGEN   = regbits< type, 11,  1 >;  /**< bitfield RTGEN   */
    using PMSK    = regbits< type, 10,  1 >;  /**< bitfield PMSK    */
    using EGS     = regbits< type,  8,  2 >;  /**< bitfield EGS     */
    using FMD     = regbits< type,  4,  3 >;  /**< bitfield FMD     */
    using OSEL    = regbits< type,  3,  1 >;  /**< bitfield OSEL    */
    using MDSE    = regbits< type,  2,  1 >;  /**< bitfield MDSE    */
    using CTEN    = regbits< type,  1,  1 >;  /**< bitfield CTEN    */
    using STRG    = regbits< type,  0,  1 >;  /**< bitfield STRG    */
  };

  /**
   * register PWM_TMCR2
   */
  struct PWM_TMCR2
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using CKS3  = regbits< type,  0,  1 >;  /**< bitfield CKS3  */
  };

  /**
   * register PWM_STC
   */
  struct PWM_STC
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using TGIE  = regbits< type,  6,  1 >;  /**< bitfield TGIE  */
    using DTIE  = regbits< type,  5,  1 >;  /**< bitfield DTIE  */
    using UDIE  = regbits< type,  4,  1 >;  /**< bitfield UDIE  */
    using TGIR  = regbits< type,  2,  1 >;  /**< bitfield TGIR  */
    using DTIR  = regbits< type,  1,  1 >;  /**< bitfield DTIR  */
    using UDIR  = regbits< type,  0,  1 >;  /**< bitfield UDIR  */
  };

  /**
   * register PWM_PCSR
   */
  struct PWM_PCSR
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
  };

  /**
   * register PWM_PDUT
   */
  struct PWM_PDUT
  : public reg< uint16_t, base_addr + 0x04, rw, 0x0000 >
  {
  };

  /**
   * register PWM_TMR
   */
  struct PWM_TMR
  : public reg< uint16_t, base_addr + 0x08, ro, 0x0000 >
  {
  };

  /**
   * register PPG_TMCR
   */
  struct PPG_TMCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >;

    using CKS2_0  = regbits< type, 12,  3 >;  /**< bitfield CKS2_0  */
    using RTGEN   = regbits< type, 11,  1 >;  /**< bitfield RTGEN   */
    using PMSK    = regbits< type, 10,  1 >;  /**< bitfield PMSK    */
    using EGS     = regbits< type,  8,  2 >;  /**< bitfield EGS     */
    using FMD     = regbits< type,  4,  3 >;  /**< bitfield FMD     */
    using OSEL    = regbits< type,  3,  1 >;  /**< bitfield OSEL    */
    using MDSE    = regbits< type,  2,  1 >;  /**< bitfield MDSE    */
    using CTEN    = regbits< type,  1,  1 >;  /**< bitfield CTEN    */
    using STRG    = regbits< type,  0,  1 >;  /**< bitfield STRG    */
  };

  /**
   * register PPG_TMCR2
   */
  struct PPG_TMCR2
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using CKS3  = regbits< type,  1,  1 >;  /**< bitfield CKS3  */
  };

  /**
   * register PPG_STC
   */
  struct PPG_STC
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using TGIE  = regbits< type,  6,  1 >;  /**< bitfield TGIE  */
    using UDIE  = regbits< type,  4,  1 >;  /**< bitfield UDIE  */
    using TGIR  = regbits< type,  2,  1 >;  /**< bitfield TGIR  */
    using UDIR  = regbits< type,  0,  1 >;  /**< bitfield UDIR  */
  };

  /**
   * register PPG_PRLL
   */
  struct PPG_PRLL
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
  };

  /**
   * register PPG_PRLH
   */
  struct PPG_PRLH
  : public reg< uint16_t, base_addr + 0x04, rw, 0x0000 >
  {
  };

  /**
   * register PPG_TMR
   */
  struct PPG_TMR
  : public reg< uint16_t, base_addr + 0x08, ro, 0x0000 >
  {
  };

  /**
   * register RT_TMCR
   */
  struct RT_TMCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >;

    using CKS2_0  = regbits< type, 12,  3 >;  /**< bitfield CKS2_0  */
    using EGS     = regbits< type,  8,  2 >;  /**< bitfield EGS     */
    using T32     = regbits< type,  7,  1 >;  /**< bitfield T32     */
    using FMD     = regbits< type,  4,  3 >;  /**< bitfield FMD     */
    using OSEL    = regbits< type,  3,  1 >;  /**< bitfield OSEL    */
    using MDSE    = regbits< type,  2,  1 >;  /**< bitfield MDSE    */
    using CTEN    = regbits< type,  1,  1 >;  /**< bitfield CTEN    */
    using STRG    = regbits< type,  0,  1 >;  /**< bitfield STRG    */
  };

  /**
   * register RT_TMCR2
   */
  struct RT_TMCR2
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using CKS3  = regbits< type,  0,  1 >;  /**< bitfield CKS3  */
  };

  /**
   * register RT_STC
   */
  struct RT_STC
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using TGIE  = regbits< type,  6,  1 >;  /**< bitfield TGIE  */
    using UDIE  = regbits< type,  4,  1 >;  /**< bitfield UDIE  */
    using TGIR  = regbits< type,  2,  1 >;  /**< bitfield TGIR  */
    using UDIR  = regbits< type,  0,  1 >;  /**< bitfield UDIR  */
  };

  /**
   * register RT_PCSR
   */
  struct RT_PCSR
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
  };

  /**
   * register RT_TMR
   */
  struct RT_TMR
  : public reg< uint16_t, base_addr + 0x08, ro, 0x0000 >
  {
  };

  /**
   * register PWC_TMCR
   */
  struct PWC_TMCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >;

    using CKS2_0  = regbits< type, 12,  3 >;  /**< bitfield CKS2_0  */
    using EGS     = regbits< type,  8,  3 >;  /**< bitfield EGS     */
    using T32     = regbits< type,  7,  1 >;  /**< bitfield T32     */
    using FMD     = regbits< type,  4,  3 >;  /**< bitfield FMD     */
    using MDSE    = regbits< type,  2,  1 >;  /**< bitfield MDSE    */
    using CTEN    = regbits< type,  1,  1 >;  /**< bitfield CTEN    */
  };

  /**
   * register PWC_TMCR2
   */
  struct PWC_TMCR2
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using CKS3  = regbits< type,  0,  1 >;  /**< bitfield CKS3  */
  };

  /**
   * register PWC_STC
   */
  struct PWC_STC
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using ERR   = regbits< type,  7,  1 >;  /**< bitfield ERR   */
    using EDIE  = regbits< type,  6,  1 >;  /**< bitfield EDIE  */
    using OVIE  = regbits< type,  4,  1 >;  /**< bitfield OVIE  */
    using EDIR  = regbits< type,  2,  1 >;  /**< bitfield EDIR  */
    using OVIR  = regbits< type,  0,  1 >;  /**< bitfield OVIR  */
  };

  /**
   * register PWC_DTBF
   */
  struct PWC_DTBF
  : public reg< uint16_t, base_addr + 0x04, ro, 0x0000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_BT1_HPP_INCLUDED
