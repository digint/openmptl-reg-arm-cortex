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
//  Import from CMSIS-SVD: "Spansion/MB9BF12xT.svd"
//
//  name: MB9BF12xT
//  version: 1.0
//  description: MB9BF12xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RTC_HPP_INCLUDED
#define ARCH_REG_RTC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral RTC
 */
struct RTC
{
  static constexpr reg_addr_t base_addr = 0x4003b000;

  /**
   * register WTCR1
   */
  struct WTCR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using INTCRIE  = regbits< type, 31,  1 >;  /**< bitfield INTCRIE  */
    using INTERIE  = regbits< type, 30,  1 >;  /**< bitfield INTERIE  */
    using INTALIE  = regbits< type, 29,  1 >;  /**< bitfield INTALIE  */
    using INTTMIE  = regbits< type, 28,  1 >;  /**< bitfield INTTMIE  */
    using INTHIE   = regbits< type, 27,  1 >;  /**< bitfield INTHIE   */
    using INTMIE   = regbits< type, 26,  1 >;  /**< bitfield INTMIE   */
    using INTSIE   = regbits< type, 25,  1 >;  /**< bitfield INTSIE   */
    using INTSSIE  = regbits< type, 24,  1 >;  /**< bitfield INTSSIE  */
    using INTCRI   = regbits< type, 23,  1 >;  /**< bitfield INTCRI   */
    using INTERI   = regbits< type, 22,  1 >;  /**< bitfield INTERI   */
    using INTALI   = regbits< type, 21,  1 >;  /**< bitfield INTALI   */
    using INTTMI   = regbits< type, 20,  1 >;  /**< bitfield INTTMI   */
    using INTHI    = regbits< type, 19,  1 >;  /**< bitfield INTHI    */
    using INTMI    = regbits< type, 18,  1 >;  /**< bitfield INTMI    */
    using INTSI    = regbits< type, 17,  1 >;  /**< bitfield INTSI    */
    using INTSSI   = regbits< type, 16,  1 >;  /**< bitfield INTSSI   */
    using YEN      = regbits< type, 12,  1 >;  /**< bitfield YEN      */
    using MOEN     = regbits< type, 11,  1 >;  /**< bitfield MOEN     */
    using DEN      = regbits< type, 10,  1 >;  /**< bitfield DEN      */
    using HEN      = regbits< type,  9,  1 >;  /**< bitfield HEN      */
    using MIEN     = regbits< type,  8,  1 >;  /**< bitfield MIEN     */
    using BUSY     = regbits< type,  6,  1 >;  /**< bitfield BUSY     */
    using SCRST    = regbits< type,  5,  1 >;  /**< bitfield SCRST    */
    using SCST     = regbits< type,  4,  1 >;  /**< bitfield SCST     */
    using SRST     = regbits< type,  3,  1 >;  /**< bitfield SRST     */
    using RUN      = regbits< type,  2,  1 >;  /**< bitfield RUN      */
    using ST       = regbits< type,  0,  1 >;  /**< bitfield ST       */
  };

  /**
   * register WTCR2
   */
  struct WTCR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TMRUN  = regbits< type, 10,  1 >;  /**< bitfield TMRUN  */
    using TMEN   = regbits< type,  9,  1 >;  /**< bitfield TMEN   */
    using TMST   = regbits< type,  8,  1 >;  /**< bitfield TMST   */
    using CREAD  = regbits< type,  0,  1 >;  /**< bitfield CREAD  */
  };

  /**
   * register WTBR
   */
  struct WTBR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using BR23  = regbits< type, 23,  1 >;  /**< bitfield BR23  */
    using BR22  = regbits< type, 22,  1 >;  /**< bitfield BR22  */
    using BR21  = regbits< type, 21,  1 >;  /**< bitfield BR21  */
    using BR20  = regbits< type, 20,  1 >;  /**< bitfield BR20  */
    using BR19  = regbits< type, 19,  1 >;  /**< bitfield BR19  */
    using BR18  = regbits< type, 18,  1 >;  /**< bitfield BR18  */
    using BR17  = regbits< type, 17,  1 >;  /**< bitfield BR17  */
    using BR16  = regbits< type, 16,  1 >;  /**< bitfield BR16  */
    using BR15  = regbits< type, 15,  1 >;  /**< bitfield BR15  */
    using BR14  = regbits< type, 14,  1 >;  /**< bitfield BR14  */
    using BR13  = regbits< type, 13,  1 >;  /**< bitfield BR13  */
    using BR12  = regbits< type, 12,  1 >;  /**< bitfield BR12  */
    using BR11  = regbits< type, 11,  1 >;  /**< bitfield BR11  */
    using BR10  = regbits< type, 10,  1 >;  /**< bitfield BR10  */
    using BR9   = regbits< type,  9,  1 >;  /**< bitfield BR9   */
    using BR8   = regbits< type,  8,  1 >;  /**< bitfield BR8   */
    using BR7   = regbits< type,  7,  1 >;  /**< bitfield BR7   */
    using BR6   = regbits< type,  6,  1 >;  /**< bitfield BR6   */
    using BR5   = regbits< type,  5,  1 >;  /**< bitfield BR5   */
    using BR4   = regbits< type,  4,  1 >;  /**< bitfield BR4   */
    using BR3   = regbits< type,  3,  1 >;  /**< bitfield BR3   */
    using BR2   = regbits< type,  2,  1 >;  /**< bitfield BR2   */
    using BR1   = regbits< type,  1,  1 >;  /**< bitfield BR1   */
    using BR0   = regbits< type,  0,  1 >;  /**< bitfield BR0   */
  };

  /**
   * register WTDR
   */
  struct WTDR
  : public reg< uint8_t, base_addr + 0xf, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xf, rw, 0x00 >;

    using TD  = regbits< type,  4,  2 >;  /**< bitfield TD  */
    using D   = regbits< type,  0,  4 >;  /**< bitfield D   */
  };

  /**
   * register WTHR
   */
  struct WTHR
  : public reg< uint8_t, base_addr + 0xe, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xe, rw, 0x00 >;

    using TH  = regbits< type,  4,  2 >;  /**< bitfield TH  */
    using H   = regbits< type,  0,  4 >;  /**< bitfield H   */
  };

  /**
   * register WTMIR
   */
  struct WTMIR
  : public reg< uint8_t, base_addr + 0xd, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xd, rw, 0x00 >;

    using TMI  = regbits< type,  4,  3 >;  /**< bitfield TMI  */
    using MI   = regbits< type,  0,  4 >;  /**< bitfield MI   */
  };

  /**
   * register WTSR
   */
  struct WTSR
  : public reg< uint8_t, base_addr + 0xc, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xc, rw, 0x00 >;

    using TS  = regbits< type,  4,  3 >;  /**< bitfield TS  */
    using S   = regbits< type,  0,  4 >;  /**< bitfield S   */
  };

  /**
   * register WTYR
   */
  struct WTYR
  : public reg< uint8_t, base_addr + 0x12, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x12, rw, 0x00 >;

    using TY  = regbits< type,  4,  4 >;  /**< bitfield TY  */
    using Y   = regbits< type,  0,  4 >;  /**< bitfield Y   */
  };

  /**
   * register WTMOR
   */
  struct WTMOR
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using TMO0  = regbits< type,  4,  1 >;  /**< bitfield TMO0  */
    using MO    = regbits< type,  0,  4 >;  /**< bitfield MO    */
  };

  /**
   * register WTDW
   */
  struct WTDW
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using DW  = regbits< type,  0,  3 >;  /**< bitfield DW  */
  };

  /**
   * register ALDR
   */
  struct ALDR
  : public reg< uint8_t, base_addr + 0x17, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x17, rw, 0x00 >;

    using TAD  = regbits< type,  4,  2 >;  /**< bitfield TAD  */
    using AD   = regbits< type,  0,  4 >;  /**< bitfield AD   */
  };

  /**
   * register ALHR
   */
  struct ALHR
  : public reg< uint8_t, base_addr + 0x16, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x16, rw, 0x00 >;

    using TAH  = regbits< type,  4,  2 >;  /**< bitfield TAH  */
    using AH   = regbits< type,  0,  4 >;  /**< bitfield AH   */
  };

  /**
   * register ALMIR
   */
  struct ALMIR
  : public reg< uint8_t, base_addr + 0x15, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x00 >;

    using TAMI  = regbits< type,  4,  3 >;  /**< bitfield TAMI  */
    using AMI   = regbits< type,  0,  4 >;  /**< bitfield AMI   */
  };

  /**
   * register ALYR
   */
  struct ALYR
  : public reg< uint8_t, base_addr + 0x1a, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1a, rw, 0x00 >;

    using TAY  = regbits< type,  4,  4 >;  /**< bitfield TAY  */
    using AY   = regbits< type,  0,  4 >;  /**< bitfield AY   */
  };

  /**
   * register ALMOR
   */
  struct ALMOR
  : public reg< uint8_t, base_addr + 0x19, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x19, rw, 0x00 >;

    using TAMO0  = regbits< type,  4,  1 >;  /**< bitfield TAMO0  */
    using AMO    = regbits< type,  0,  4 >;  /**< bitfield AMO    */
  };

  /**
   * register WTTR
   */
  struct WTTR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using TM17  = regbits< type, 17,  1 >;  /**< bitfield TM17  */
    using TM16  = regbits< type, 16,  1 >;  /**< bitfield TM16  */
    using TM15  = regbits< type, 15,  1 >;  /**< bitfield TM15  */
    using TM14  = regbits< type, 14,  1 >;  /**< bitfield TM14  */
    using TM13  = regbits< type, 13,  1 >;  /**< bitfield TM13  */
    using TM12  = regbits< type, 12,  1 >;  /**< bitfield TM12  */
    using TM11  = regbits< type, 11,  1 >;  /**< bitfield TM11  */
    using TM10  = regbits< type, 10,  1 >;  /**< bitfield TM10  */
    using TM9   = regbits< type,  9,  1 >;  /**< bitfield TM9   */
    using TM8   = regbits< type,  8,  1 >;  /**< bitfield TM8   */
    using TM7   = regbits< type,  7,  1 >;  /**< bitfield TM7   */
    using TM6   = regbits< type,  6,  1 >;  /**< bitfield TM6   */
    using TM5   = regbits< type,  5,  1 >;  /**< bitfield TM5   */
    using TM4   = regbits< type,  4,  1 >;  /**< bitfield TM4   */
    using TM3   = regbits< type,  3,  1 >;  /**< bitfield TM3   */
    using TM2   = regbits< type,  2,  1 >;  /**< bitfield TM2   */
    using TM1   = regbits< type,  1,  1 >;  /**< bitfield TM1   */
    using TM0   = regbits< type,  0,  1 >;  /**< bitfield TM0   */
  };

  /**
   * register WTCLKS
   */
  struct WTCLKS
  : public reg< uint8_t, base_addr + 0x20, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCLKS
    using WTCLKS_ = regbits< type,  0,  1 >;  /**< bitfield WTCLKS  */
  };

  /**
   * register WTCLKM
   */
  struct WTCLKM
  : public reg< uint8_t, base_addr + 0x21, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x21, ro, 0x00 >;

    // fixme: Field name equals parent register name: WTCLKM
    using WTCLKM_ = regbits< type,  0,  2 >;  /**< bitfield WTCLKM  */
  };

  /**
   * register WTCAL
   */
  struct WTCAL
  : public reg< uint16_t, base_addr + 0x24, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0x0000 >;

    // fixme: Field name equals parent register name: WTCAL
    using WTCAL_ = regbits< type,  0, 10 >;  /**< bitfield WTCAL  */
  };

  /**
   * register WTCALEN
   */
  struct WTCALEN
  : public reg< uint8_t, base_addr + 0x26, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x26, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCALEN
    using WTCALEN_ = regbits< type,  0,  1 >;  /**< bitfield WTCALEN  */
  };

  /**
   * register WTDIV
   */
  struct WTDIV
  : public reg< uint8_t, base_addr + 0x28, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTDIV
    using WTDIV_ = regbits< type,  0,  4 >;  /**< bitfield WTDIV  */
  };

  /**
   * register WTDIVEN
   */
  struct WTDIVEN
  : public reg< uint8_t, base_addr + 0x29, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x29, rw, 0x00 >;

    using WTDIVRDY  = regbits< type,  1,  1 >;  /**< bitfield WTDIVRDY  */
    // fixme: Field name equals parent register name: WTDIVEN
    using WTDIVEN_  = regbits< type,  0,  1 >;  /**< bitfield WTDIVEN   */
  };

  /**
   * register WTCALPRD
   */
  struct WTCALPRD
  : public reg< uint8_t, base_addr + 0x2c, rw, 0x13 >
  {
    using type = reg< uint8_t, base_addr + 0x2c, rw, 0x13 >;

    // fixme: Field name equals parent register name: WTCALPRD
    using WTCALPRD_ = regbits< type,  0,  6 >;  /**< bitfield WTCALPRD  */
  };

  /**
   * register WTCOSEL
   */
  struct WTCOSEL
  : public reg< uint8_t, base_addr + 0x30, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCOSEL
    using WTCOSEL_ = regbits< type,  0,  1 >;  /**< bitfield WTCOSEL  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
