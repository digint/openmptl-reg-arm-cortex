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
//  Import from CMSIS-SVD: "Spansion/MB9BF56xx.svd"
//
//  name: MB9BF56xx
//  version: 1.0
//  description: MB9BF56xx
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
   * register WTCR10
   */
  struct WTCR10
  : public reg< uint8_t, base_addr + 0x100, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x100, rw, 0x00 >;

    using TRANS  = regbits< type,  7,  1 >;  /**< bitfield TRANS  */
    using BUSY   = regbits< type,  6,  1 >;  /**< bitfield BUSY   */
    using SCRST  = regbits< type,  5,  1 >;  /**< bitfield SCRST  */
    using SCST   = regbits< type,  4,  1 >;  /**< bitfield SCST   */
    using SRST   = regbits< type,  3,  1 >;  /**< bitfield SRST   */
    using RUN    = regbits< type,  2,  1 >;  /**< bitfield RUN    */
    using ST     = regbits< type,  0,  1 >;  /**< bitfield ST     */
  };

  /**
   * register WTCR11
   */
  struct WTCR11
  : public reg< uint8_t, base_addr + 0x104, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x104, rw, 0x00 >;

    using YEN   = regbits< type,  4,  1 >;  /**< bitfield YEN   */
    using MOEN  = regbits< type,  3,  1 >;  /**< bitfield MOEN  */
    using DEN   = regbits< type,  2,  1 >;  /**< bitfield DEN   */
    using HEN   = regbits< type,  1,  1 >;  /**< bitfield HEN   */
    using MIEN  = regbits< type,  0,  1 >;  /**< bitfield MIEN  */
  };

  /**
   * register WTCR12
   */
  struct WTCR12
  : public reg< uint8_t, base_addr + 0x108, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x108, rw, 0x00 >;

    using INTCRI  = regbits< type,  7,  1 >;  /**< bitfield INTCRI  */
    using INTERI  = regbits< type,  6,  1 >;  /**< bitfield INTERI  */
    using INTALI  = regbits< type,  5,  1 >;  /**< bitfield INTALI  */
    using INTTMI  = regbits< type,  4,  1 >;  /**< bitfield INTTMI  */
    using INTHI   = regbits< type,  3,  1 >;  /**< bitfield INTHI   */
    using INTMI   = regbits< type,  2,  1 >;  /**< bitfield INTMI   */
    using INTSI   = regbits< type,  1,  1 >;  /**< bitfield INTSI   */
    using INTSSI  = regbits< type,  0,  1 >;  /**< bitfield INTSSI  */
  };

  /**
   * register WTCR13
   */
  struct WTCR13
  : public reg< uint8_t, base_addr + 0x10c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10c, rw, 0x00 >;

    using INTCRIE  = regbits< type,  7,  1 >;  /**< bitfield INTCRIE  */
    using INTERIE  = regbits< type,  6,  1 >;  /**< bitfield INTERIE  */
    using INTALIE  = regbits< type,  5,  1 >;  /**< bitfield INTALIE  */
    using INTTMIE  = regbits< type,  4,  1 >;  /**< bitfield INTTMIE  */
    using INTHIE   = regbits< type,  3,  1 >;  /**< bitfield INTHIE   */
    using INTMIE   = regbits< type,  2,  1 >;  /**< bitfield INTMIE   */
    using INTSIE   = regbits< type,  1,  1 >;  /**< bitfield INTSIE   */
    using INTSSIE  = regbits< type,  0,  1 >;  /**< bitfield INTSSIE  */
  };

  /**
   * register WTCR20
   */
  struct WTCR20
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x00 >;

    using PWRITE  = regbits< type,  5,  1 >;  /**< bitfield PWRITE  */
    using PREAD   = regbits< type,  4,  1 >;  /**< bitfield PREAD   */
    using BWRITE  = regbits< type,  3,  1 >;  /**< bitfield BWRITE  */
    using BREAD   = regbits< type,  2,  1 >;  /**< bitfield BREAD   */
    using CWRITE  = regbits< type,  1,  1 >;  /**< bitfield CWRITE  */
    using CREAD   = regbits< type,  0,  1 >;  /**< bitfield CREAD   */
  };

  /**
   * register WTCR21
   */
  struct WTCR21
  : public reg< uint32_t, base_addr + 0x114, rw, 0x00 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x00 >;

    using TMRUN  = regbits< type,  2,  1 >;  /**< bitfield TMRUN  */
    using TMEN   = regbits< type,  1,  1 >;  /**< bitfield TMEN   */
    using TMST   = regbits< type,  0,  1 >;  /**< bitfield TMST   */
  };

  /**
   * register WTSR
   */
  struct WTSR
  : public reg< uint8_t, base_addr + 0x11c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11c, rw, 0x00 >;

    using TS  = regbits< type,  4,  3 >;  /**< bitfield TS  */
    using S   = regbits< type,  0,  4 >;  /**< bitfield S   */
  };

  /**
   * register WTMIR
   */
  struct WTMIR
  : public reg< uint8_t, base_addr + 0x120, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x120, rw, 0x00 >;

    using TMI  = regbits< type,  4,  3 >;  /**< bitfield TMI  */
    using MI   = regbits< type,  0,  4 >;  /**< bitfield MI   */
  };

  /**
   * register WTHR
   */
  struct WTHR
  : public reg< uint8_t, base_addr + 0x124, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x124, rw, 0x00 >;

    using TH  = regbits< type,  4,  2 >;  /**< bitfield TH  */
    using H   = regbits< type,  0,  4 >;  /**< bitfield H   */
  };

  /**
   * register WTDR
   */
  struct WTDR
  : public reg< uint8_t, base_addr + 0x128, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x128, rw, 0x00 >;

    using TD  = regbits< type,  4,  2 >;  /**< bitfield TD  */
    using D   = regbits< type,  0,  4 >;  /**< bitfield D   */
  };

  /**
   * register WTDW
   */
  struct WTDW
  : public reg< uint8_t, base_addr + 0x12c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x12c, rw, 0x00 >;

    using DW  = regbits< type,  0,  3 >;  /**< bitfield DW  */
  };

  /**
   * register WTMOR
   */
  struct WTMOR
  : public reg< uint8_t, base_addr + 0x130, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x130, rw, 0x00 >;

    using TMO0  = regbits< type,  4,  1 >;  /**< bitfield TMO0  */
    using MO    = regbits< type,  0,  4 >;  /**< bitfield MO    */
  };

  /**
   * register WTYR
   */
  struct WTYR
  : public reg< uint8_t, base_addr + 0x134, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x134, rw, 0x00 >;

    using TY  = regbits< type,  4,  4 >;  /**< bitfield TY  */
    using Y   = regbits< type,  0,  4 >;  /**< bitfield Y   */
  };

  /**
   * register ALMIR
   */
  struct ALMIR
  : public reg< uint8_t, base_addr + 0x138, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x138, rw, 0x00 >;

    using TAMI  = regbits< type,  4,  3 >;  /**< bitfield TAMI  */
    using AMI   = regbits< type,  0,  4 >;  /**< bitfield AMI   */
  };

  /**
   * register ALHR
   */
  struct ALHR
  : public reg< uint8_t, base_addr + 0x13c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x13c, rw, 0x00 >;

    using TAH  = regbits< type,  4,  2 >;  /**< bitfield TAH  */
    using AH   = regbits< type,  0,  4 >;  /**< bitfield AH   */
  };

  /**
   * register ALDR
   */
  struct ALDR
  : public reg< uint8_t, base_addr + 0x140, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x140, rw, 0x00 >;

    using TAD  = regbits< type,  4,  2 >;  /**< bitfield TAD  */
    using AD   = regbits< type,  0,  4 >;  /**< bitfield AD   */
  };

  /**
   * register ALMOR
   */
  struct ALMOR
  : public reg< uint8_t, base_addr + 0x144, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x144, rw, 0x00 >;

    using TAMO0  = regbits< type,  4,  1 >;  /**< bitfield TAMO0  */
    using AMO    = regbits< type,  0,  4 >;  /**< bitfield AMO    */
  };

  /**
   * register ALYR
   */
  struct ALYR
  : public reg< uint8_t, base_addr + 0x148, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x148, rw, 0x00 >;

    using TAY  = regbits< type,  4,  4 >;  /**< bitfield TAY  */
    using AY   = regbits< type,  0,  4 >;  /**< bitfield AY   */
  };

  /**
   * register WTTR0
   */
  struct WTTR0
  : public reg< uint8_t, base_addr + 0x14c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14c, rw, 0x00 >;

    using TM7  = regbits< type,  7,  1 >;  /**< bitfield TM7  */
    using TM6  = regbits< type,  6,  1 >;  /**< bitfield TM6  */
    using TM5  = regbits< type,  5,  1 >;  /**< bitfield TM5  */
    using TM4  = regbits< type,  4,  1 >;  /**< bitfield TM4  */
    using TM3  = regbits< type,  3,  1 >;  /**< bitfield TM3  */
    using TM2  = regbits< type,  2,  1 >;  /**< bitfield TM2  */
    using TM1  = regbits< type,  1,  1 >;  /**< bitfield TM1  */
    using TM0  = regbits< type,  0,  1 >;  /**< bitfield TM0  */
  };

  /**
   * register WTTR1
   */
  struct WTTR1
  : public reg< uint8_t, base_addr + 0x150, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x150, rw, 0x00 >;

    using TM15  = regbits< type,  7,  1 >;  /**< bitfield TM15  */
    using TM14  = regbits< type,  6,  1 >;  /**< bitfield TM14  */
    using TM13  = regbits< type,  5,  1 >;  /**< bitfield TM13  */
    using TM12  = regbits< type,  4,  1 >;  /**< bitfield TM12  */
    using TM11  = regbits< type,  3,  1 >;  /**< bitfield TM11  */
    using TM10  = regbits< type,  2,  1 >;  /**< bitfield TM10  */
    using TM9   = regbits< type,  1,  1 >;  /**< bitfield TM9   */
    using TM8   = regbits< type,  0,  1 >;  /**< bitfield TM8   */
  };

  /**
   * register WTTR2
   */
  struct WTTR2
  : public reg< uint8_t, base_addr + 0x154, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x154, rw, 0x00 >;

    using TM17  = regbits< type,  1,  1 >;  /**< bitfield TM17  */
    using TM16  = regbits< type,  0,  1 >;  /**< bitfield TM16  */
  };

  /**
   * register WTCAL0
   */
  struct WTCAL0
  : public reg< uint8_t, base_addr + 0x158, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x158, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCAL0
    using WTCAL0_ = regbits< type,  0,  8 >;  /**< bitfield WTCAL0  */
  };

  /**
   * register WTCAL1
   */
  struct WTCAL1
  : public reg< uint8_t, base_addr + 0x15c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x15c, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCAL1
    using WTCAL1_ = regbits< type,  0,  2 >;  /**< bitfield WTCAL1  */
  };

  /**
   * register WTCALEN
   */
  struct WTCALEN
  : public reg< uint8_t, base_addr + 0x160, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x160, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCALEN
    using WTCALEN_ = regbits< type,  0,  1 >;  /**< bitfield WTCALEN  */
  };

  /**
   * register WTDIV
   */
  struct WTDIV
  : public reg< uint8_t, base_addr + 0x164, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x164, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTDIV
    using WTDIV_ = regbits< type,  0,  4 >;  /**< bitfield WTDIV  */
  };

  /**
   * register WTDIVEN
   */
  struct WTDIVEN
  : public reg< uint8_t, base_addr + 0x168, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x168, rw, 0x00 >;

    using WTDIVRDY  = regbits< type,  1,  1 >;  /**< bitfield WTDIVRDY  */
    // fixme: Field name equals parent register name: WTDIVEN
    using WTDIVEN_  = regbits< type,  0,  1 >;  /**< bitfield WTDIVEN   */
  };

  /**
   * register WTCALPRD
   */
  struct WTCALPRD
  : public reg< uint8_t, base_addr + 0x16c, rw, 0x13 >
  {
    using type = reg< uint8_t, base_addr + 0x16c, rw, 0x13 >;

    // fixme: Field name equals parent register name: WTCALPRD
    using WTCALPRD_ = regbits< type,  0,  6 >;  /**< bitfield WTCALPRD  */
  };

  /**
   * register WTCOSEL
   */
  struct WTCOSEL
  : public reg< uint8_t, base_addr + 0x170, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x170, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCOSEL
    using WTCOSEL_ = regbits< type,  0,  1 >;  /**< bitfield WTCOSEL  */
  };

  /**
   * register VB_CLKDIV
   */
  struct VB_CLKDIV
  : public reg< uint8_t, base_addr + 0x174, rw, 0x07 >
  {
    using type = reg< uint8_t, base_addr + 0x174, rw, 0x07 >;

    using DIV  = regbits< type,  0,  8 >;  /**< bitfield DIV  */
  };

  /**
   * register WTOSCCNT
   */
  struct WTOSCCNT
  : public reg< uint8_t, base_addr + 0x178, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x178, rw, 0x01 >;

    using SOSCNTL  = regbits< type,  1,  1 >;  /**< bitfield SOSCNTL  */
    using SOSCEX   = regbits< type,  0,  1 >;  /**< bitfield SOSCEX   */
  };

  /**
   * register CCS
   */
  struct CCS
  : public reg< uint8_t, base_addr + 0x17c, rw, 0x08 >
  {
  };

  /**
   * register CCB
   */
  struct CCB
  : public reg< uint8_t, base_addr + 0x180, rw, 0x10 >
  {
  };

  /**
   * register TRIM
   */
  struct TRIM
  : public reg< uint8_t, base_addr + 0x184, rw, 0x00 >
  {
  };

  /**
   * register BOOST
   */
  struct BOOST
  : public reg< uint8_t, base_addr + 0x188, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x188, rw, 0x03 >;

    // fixme: Field name equals parent register name: BOOST
    using BOOST_ = regbits< type,  0,  2 >;  /**< bitfield BOOST  */
  };

  /**
   * register EWKUP
   */
  struct EWKUP
  : public reg< uint8_t, base_addr + 0x18c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x18c, rw, 0x00 >;

    using WUP0  = regbits< type,  0,  1 >;  /**< bitfield WUP0  */
  };

  /**
   * register VDET
   */
  struct VDET
  : public reg< uint8_t, base_addr + 0x190, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x190, rw, 0x80 >;

    using PON  = regbits< type,  7,  1 >;  /**< bitfield PON  */
  };

  /**
   * register FDET
   */
  struct FDET
  : public reg< uint8_t, base_addr + 0x194, rw, 0x00 >
  {
  };

  /**
   * register HIBRST
   */
  struct HIBRST
  : public reg< uint8_t, base_addr + 0x198, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x198, rw, 0x00 >;

    // fixme: Field name equals parent register name: HIBRST
    using HIBRST_ = regbits< type,  0,  1 >;  /**< bitfield HIBRST  */
  };

  /**
   * register VBPFR
   */
  struct VBPFR
  : public reg< uint8_t, base_addr + 0x19c, rw, 0x1C >
  {
    using type = reg< uint8_t, base_addr + 0x19c, rw, 0x1C >;

    using SPSR1  = regbits< type,  5,  1 >;  /**< bitfield SPSR1  */
    using SPSR0  = regbits< type,  4,  1 >;  /**< bitfield SPSR0  */
    using VPFR3  = regbits< type,  3,  1 >;  /**< bitfield VPFR3  */
    using VPFR2  = regbits< type,  2,  1 >;  /**< bitfield VPFR2  */
    using VPFR1  = regbits< type,  1,  1 >;  /**< bitfield VPFR1  */
    using VPFR0  = regbits< type,  0,  1 >;  /**< bitfield VPFR0  */
  };

  /**
   * register VBPCR
   */
  struct VBPCR
  : public reg< uint8_t, base_addr + 0x1a0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1a0, rw, 0x00 >;

    using VPCR3  = regbits< type,  3,  1 >;  /**< bitfield VPCR3  */
    using VPCR2  = regbits< type,  2,  1 >;  /**< bitfield VPCR2  */
    using VPCR1  = regbits< type,  1,  1 >;  /**< bitfield VPCR1  */
    using VPCR0  = regbits< type,  0,  1 >;  /**< bitfield VPCR0  */
  };

  /**
   * register VBDDR
   */
  struct VBDDR
  : public reg< uint8_t, base_addr + 0x1a4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1a4, rw, 0x00 >;

    using VDDR3  = regbits< type,  3,  1 >;  /**< bitfield VDDR3  */
    using VDDR2  = regbits< type,  2,  1 >;  /**< bitfield VDDR2  */
    using VDDR1  = regbits< type,  1,  1 >;  /**< bitfield VDDR1  */
    using VDDR0  = regbits< type,  0,  1 >;  /**< bitfield VDDR0  */
  };

  /**
   * register VBDIR
   */
  struct VBDIR
  : public reg< uint8_t, base_addr + 0x1a8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1a8, rw, 0x00 >;

    using VDIR3  = regbits< type,  3,  1 >;  /**< bitfield VDIR3  */
    using VDIR2  = regbits< type,  2,  1 >;  /**< bitfield VDIR2  */
    using VDIR1  = regbits< type,  1,  1 >;  /**< bitfield VDIR1  */
    using VDIR0  = regbits< type,  0,  1 >;  /**< bitfield VDIR0  */
  };

  /**
   * register VBDOR
   */
  struct VBDOR
  : public reg< uint8_t, base_addr + 0x1ac, rw, 0x0F >
  {
    using type = reg< uint8_t, base_addr + 0x1ac, rw, 0x0F >;

    using VDOR3  = regbits< type,  3,  1 >;  /**< bitfield VDOR3  */
    using VDOR2  = regbits< type,  2,  1 >;  /**< bitfield VDOR2  */
    using VDOR1  = regbits< type,  1,  1 >;  /**< bitfield VDOR1  */
    using VDOR0  = regbits< type,  0,  1 >;  /**< bitfield VDOR0  */
  };

  /**
   * register VBPZR
   */
  struct VBPZR
  : public reg< uint8_t, base_addr + 0x1b0, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x1b0, rw, 0x03 >;

    using VPZR1  = regbits< type,  1,  1 >;  /**< bitfield VPZR1  */
    using VPZR0  = regbits< type,  0,  1 >;  /**< bitfield VPZR0  */
  };

  /**
   * register BREG00
   */
  struct BREG00
  : public reg< uint8_t, base_addr + 0x200, rw, 0x00 >
  {
  };

  /**
   * register BREG01
   */
  struct BREG01
  : public reg< uint8_t, base_addr + 0x201, rw, 0x00 >
  {
  };

  /**
   * register BREG02
   */
  struct BREG02
  : public reg< uint8_t, base_addr + 0x202, rw, 0x00 >
  {
  };

  /**
   * register BREG03
   */
  struct BREG03
  : public reg< uint8_t, base_addr + 0x203, rw, 0x00 >
  {
  };

  /**
   * register BREG04
   */
  struct BREG04
  : public reg< uint8_t, base_addr + 0x204, rw, 0x00 >
  {
  };

  /**
   * register BREG05
   */
  struct BREG05
  : public reg< uint8_t, base_addr + 0x205, rw, 0x00 >
  {
  };

  /**
   * register BREG06
   */
  struct BREG06
  : public reg< uint8_t, base_addr + 0x206, rw, 0x00 >
  {
  };

  /**
   * register BREG07
   */
  struct BREG07
  : public reg< uint8_t, base_addr + 0x207, rw, 0x00 >
  {
  };

  /**
   * register BREG08
   */
  struct BREG08
  : public reg< uint8_t, base_addr + 0x208, rw, 0x00 >
  {
  };

  /**
   * register BREG09
   */
  struct BREG09
  : public reg< uint8_t, base_addr + 0x209, rw, 0x00 >
  {
  };

  /**
   * register BREG0A
   */
  struct BREG0A
  : public reg< uint8_t, base_addr + 0x20a, rw, 0x00 >
  {
  };

  /**
   * register BREG0B
   */
  struct BREG0B
  : public reg< uint8_t, base_addr + 0x20b, rw, 0x00 >
  {
  };

  /**
   * register BREG0C
   */
  struct BREG0C
  : public reg< uint8_t, base_addr + 0x20c, rw, 0x00 >
  {
  };

  /**
   * register BREG0D
   */
  struct BREG0D
  : public reg< uint8_t, base_addr + 0x20d, rw, 0x00 >
  {
  };

  /**
   * register BREG0E
   */
  struct BREG0E
  : public reg< uint8_t, base_addr + 0x20e, rw, 0x00 >
  {
  };

  /**
   * register BREG0F
   */
  struct BREG0F
  : public reg< uint8_t, base_addr + 0x20f, rw, 0x00 >
  {
  };

  /**
   * register BREG10
   */
  struct BREG10
  : public reg< uint8_t, base_addr + 0x210, rw, 0x00 >
  {
  };

  /**
   * register BREG11
   */
  struct BREG11
  : public reg< uint8_t, base_addr + 0x211, rw, 0x00 >
  {
  };

  /**
   * register BREG12
   */
  struct BREG12
  : public reg< uint8_t, base_addr + 0x212, rw, 0x00 >
  {
  };

  /**
   * register BREG13
   */
  struct BREG13
  : public reg< uint8_t, base_addr + 0x213, rw, 0x00 >
  {
  };

  /**
   * register BREG14
   */
  struct BREG14
  : public reg< uint8_t, base_addr + 0x214, rw, 0x00 >
  {
  };

  /**
   * register BREG15
   */
  struct BREG15
  : public reg< uint8_t, base_addr + 0x215, rw, 0x00 >
  {
  };

  /**
   * register BREG16
   */
  struct BREG16
  : public reg< uint8_t, base_addr + 0x216, rw, 0x00 >
  {
  };

  /**
   * register BREG17
   */
  struct BREG17
  : public reg< uint8_t, base_addr + 0x217, rw, 0x00 >
  {
  };

  /**
   * register BREG18
   */
  struct BREG18
  : public reg< uint8_t, base_addr + 0x218, rw, 0x00 >
  {
  };

  /**
   * register BREG19
   */
  struct BREG19
  : public reg< uint8_t, base_addr + 0x219, rw, 0x00 >
  {
  };

  /**
   * register BREG1A
   */
  struct BREG1A
  : public reg< uint8_t, base_addr + 0x21a, rw, 0x00 >
  {
  };

  /**
   * register BREG1B
   */
  struct BREG1B
  : public reg< uint8_t, base_addr + 0x21b, rw, 0x00 >
  {
  };

  /**
   * register BREG1C
   */
  struct BREG1C
  : public reg< uint8_t, base_addr + 0x21c, rw, 0x00 >
  {
  };

  /**
   * register BREG1D
   */
  struct BREG1D
  : public reg< uint8_t, base_addr + 0x21d, rw, 0x00 >
  {
  };

  /**
   * register BREG1E
   */
  struct BREG1E
  : public reg< uint8_t, base_addr + 0x21e, rw, 0x00 >
  {
  };

  /**
   * register BREG1F
   */
  struct BREG1F
  : public reg< uint8_t, base_addr + 0x21f, rw, 0x00 >
  {
  };

  /**
   * register BREG20
   */
  struct BREG20
  : public reg< uint8_t, base_addr + 0x220, rw, 0x00 >
  {
  };

  /**
   * register BREG21
   */
  struct BREG21
  : public reg< uint8_t, base_addr + 0x221, rw, 0x00 >
  {
  };

  /**
   * register BREG22
   */
  struct BREG22
  : public reg< uint8_t, base_addr + 0x222, rw, 0x00 >
  {
  };

  /**
   * register BREG23
   */
  struct BREG23
  : public reg< uint8_t, base_addr + 0x223, rw, 0x00 >
  {
  };

  /**
   * register BREG24
   */
  struct BREG24
  : public reg< uint8_t, base_addr + 0x224, rw, 0x00 >
  {
  };

  /**
   * register BREG25
   */
  struct BREG25
  : public reg< uint8_t, base_addr + 0x225, rw, 0x00 >
  {
  };

  /**
   * register BREG26
   */
  struct BREG26
  : public reg< uint8_t, base_addr + 0x226, rw, 0x00 >
  {
  };

  /**
   * register BREG27
   */
  struct BREG27
  : public reg< uint8_t, base_addr + 0x227, rw, 0x00 >
  {
  };

  /**
   * register BREG28
   */
  struct BREG28
  : public reg< uint8_t, base_addr + 0x228, rw, 0x00 >
  {
  };

  /**
   * register BREG29
   */
  struct BREG29
  : public reg< uint8_t, base_addr + 0x229, rw, 0x00 >
  {
  };

  /**
   * register BREG2A
   */
  struct BREG2A
  : public reg< uint8_t, base_addr + 0x22a, rw, 0x00 >
  {
  };

  /**
   * register BREG2B
   */
  struct BREG2B
  : public reg< uint8_t, base_addr + 0x22b, rw, 0x00 >
  {
  };

  /**
   * register BREG2C
   */
  struct BREG2C
  : public reg< uint8_t, base_addr + 0x22c, rw, 0x00 >
  {
  };

  /**
   * register BREG2D
   */
  struct BREG2D
  : public reg< uint8_t, base_addr + 0x22d, rw, 0x00 >
  {
  };

  /**
   * register BREG2E
   */
  struct BREG2E
  : public reg< uint8_t, base_addr + 0x22e, rw, 0x00 >
  {
  };

  /**
   * register BREG2F
   */
  struct BREG2F
  : public reg< uint8_t, base_addr + 0x22f, rw, 0x00 >
  {
  };

  /**
   * register BREG30
   */
  struct BREG30
  : public reg< uint8_t, base_addr + 0x230, rw, 0x00 >
  {
  };

  /**
   * register BREG31
   */
  struct BREG31
  : public reg< uint8_t, base_addr + 0x231, rw, 0x00 >
  {
  };

  /**
   * register BREG32
   */
  struct BREG32
  : public reg< uint8_t, base_addr + 0x232, rw, 0x00 >
  {
  };

  /**
   * register BREG33
   */
  struct BREG33
  : public reg< uint8_t, base_addr + 0x233, rw, 0x00 >
  {
  };

  /**
   * register BREG34
   */
  struct BREG34
  : public reg< uint8_t, base_addr + 0x234, rw, 0x00 >
  {
  };

  /**
   * register BREG35
   */
  struct BREG35
  : public reg< uint8_t, base_addr + 0x235, rw, 0x00 >
  {
  };

  /**
   * register BREG36
   */
  struct BREG36
  : public reg< uint8_t, base_addr + 0x236, rw, 0x00 >
  {
  };

  /**
   * register BREG37
   */
  struct BREG37
  : public reg< uint8_t, base_addr + 0x237, rw, 0x00 >
  {
  };

  /**
   * register BREG38
   */
  struct BREG38
  : public reg< uint8_t, base_addr + 0x238, rw, 0x00 >
  {
  };

  /**
   * register BREG39
   */
  struct BREG39
  : public reg< uint8_t, base_addr + 0x239, rw, 0x00 >
  {
  };

  /**
   * register BREG3A
   */
  struct BREG3A
  : public reg< uint8_t, base_addr + 0x23a, rw, 0x00 >
  {
  };

  /**
   * register BREG3B
   */
  struct BREG3B
  : public reg< uint8_t, base_addr + 0x23b, rw, 0x00 >
  {
  };

  /**
   * register BREG3C
   */
  struct BREG3C
  : public reg< uint8_t, base_addr + 0x23c, rw, 0x00 >
  {
  };

  /**
   * register BREG3D
   */
  struct BREG3D
  : public reg< uint8_t, base_addr + 0x23d, rw, 0x00 >
  {
  };

  /**
   * register BREG3E
   */
  struct BREG3E
  : public reg< uint8_t, base_addr + 0x23e, rw, 0x00 >
  {
  };

  /**
   * register BREG3F
   */
  struct BREG3F
  : public reg< uint8_t, base_addr + 0x23f, rw, 0x00 >
  {
  };

  /**
   * register BREG40
   */
  struct BREG40
  : public reg< uint8_t, base_addr + 0x240, rw, 0x00 >
  {
  };

  /**
   * register BREG41
   */
  struct BREG41
  : public reg< uint8_t, base_addr + 0x241, rw, 0x00 >
  {
  };

  /**
   * register BREG42
   */
  struct BREG42
  : public reg< uint8_t, base_addr + 0x242, rw, 0x00 >
  {
  };

  /**
   * register BREG43
   */
  struct BREG43
  : public reg< uint8_t, base_addr + 0x243, rw, 0x00 >
  {
  };

  /**
   * register BREG44
   */
  struct BREG44
  : public reg< uint8_t, base_addr + 0x244, rw, 0x00 >
  {
  };

  /**
   * register BREG45
   */
  struct BREG45
  : public reg< uint8_t, base_addr + 0x245, rw, 0x00 >
  {
  };

  /**
   * register BREG46
   */
  struct BREG46
  : public reg< uint8_t, base_addr + 0x246, rw, 0x00 >
  {
  };

  /**
   * register BREG47
   */
  struct BREG47
  : public reg< uint8_t, base_addr + 0x247, rw, 0x00 >
  {
  };

  /**
   * register BREG48
   */
  struct BREG48
  : public reg< uint8_t, base_addr + 0x248, rw, 0x00 >
  {
  };

  /**
   * register BREG49
   */
  struct BREG49
  : public reg< uint8_t, base_addr + 0x249, rw, 0x00 >
  {
  };

  /**
   * register BREG4A
   */
  struct BREG4A
  : public reg< uint8_t, base_addr + 0x24a, rw, 0x00 >
  {
  };

  /**
   * register BREG4B
   */
  struct BREG4B
  : public reg< uint8_t, base_addr + 0x24b, rw, 0x00 >
  {
  };

  /**
   * register BREG4C
   */
  struct BREG4C
  : public reg< uint8_t, base_addr + 0x24c, rw, 0x00 >
  {
  };

  /**
   * register BREG4D
   */
  struct BREG4D
  : public reg< uint8_t, base_addr + 0x24d, rw, 0x00 >
  {
  };

  /**
   * register BREG4E
   */
  struct BREG4E
  : public reg< uint8_t, base_addr + 0x24e, rw, 0x00 >
  {
  };

  /**
   * register BREG4F
   */
  struct BREG4F
  : public reg< uint8_t, base_addr + 0x24f, rw, 0x00 >
  {
  };

  /**
   * register BREG50
   */
  struct BREG50
  : public reg< uint8_t, base_addr + 0x250, rw, 0x00 >
  {
  };

  /**
   * register BREG51
   */
  struct BREG51
  : public reg< uint8_t, base_addr + 0x251, rw, 0x00 >
  {
  };

  /**
   * register BREG52
   */
  struct BREG52
  : public reg< uint8_t, base_addr + 0x252, rw, 0x00 >
  {
  };

  /**
   * register BREG53
   */
  struct BREG53
  : public reg< uint8_t, base_addr + 0x253, rw, 0x00 >
  {
  };

  /**
   * register BREG54
   */
  struct BREG54
  : public reg< uint8_t, base_addr + 0x254, rw, 0x00 >
  {
  };

  /**
   * register BREG55
   */
  struct BREG55
  : public reg< uint8_t, base_addr + 0x255, rw, 0x00 >
  {
  };

  /**
   * register BREG56
   */
  struct BREG56
  : public reg< uint8_t, base_addr + 0x256, rw, 0x00 >
  {
  };

  /**
   * register BREG57
   */
  struct BREG57
  : public reg< uint8_t, base_addr + 0x257, rw, 0x00 >
  {
  };

  /**
   * register BREG58
   */
  struct BREG58
  : public reg< uint8_t, base_addr + 0x258, rw, 0x00 >
  {
  };

  /**
   * register BREG59
   */
  struct BREG59
  : public reg< uint8_t, base_addr + 0x259, rw, 0x00 >
  {
  };

  /**
   * register BREG5A
   */
  struct BREG5A
  : public reg< uint8_t, base_addr + 0x25a, rw, 0x00 >
  {
  };

  /**
   * register BREG5B
   */
  struct BREG5B
  : public reg< uint8_t, base_addr + 0x25b, rw, 0x00 >
  {
  };

  /**
   * register BREG5C
   */
  struct BREG5C
  : public reg< uint8_t, base_addr + 0x25c, rw, 0x00 >
  {
  };

  /**
   * register BREG5D
   */
  struct BREG5D
  : public reg< uint8_t, base_addr + 0x25d, rw, 0x00 >
  {
  };

  /**
   * register BREG5E
   */
  struct BREG5E
  : public reg< uint8_t, base_addr + 0x25e, rw, 0x00 >
  {
  };

  /**
   * register BREG5F
   */
  struct BREG5F
  : public reg< uint8_t, base_addr + 0x25f, rw, 0x00 >
  {
  };

  /**
   * register BREG60
   */
  struct BREG60
  : public reg< uint8_t, base_addr + 0x260, rw, 0x00 >
  {
  };

  /**
   * register BREG61
   */
  struct BREG61
  : public reg< uint8_t, base_addr + 0x261, rw, 0x00 >
  {
  };

  /**
   * register BREG62
   */
  struct BREG62
  : public reg< uint8_t, base_addr + 0x262, rw, 0x00 >
  {
  };

  /**
   * register BREG63
   */
  struct BREG63
  : public reg< uint8_t, base_addr + 0x263, rw, 0x00 >
  {
  };

  /**
   * register BREG64
   */
  struct BREG64
  : public reg< uint8_t, base_addr + 0x264, rw, 0x00 >
  {
  };

  /**
   * register BREG65
   */
  struct BREG65
  : public reg< uint8_t, base_addr + 0x265, rw, 0x00 >
  {
  };

  /**
   * register BREG66
   */
  struct BREG66
  : public reg< uint8_t, base_addr + 0x266, rw, 0x00 >
  {
  };

  /**
   * register BREG67
   */
  struct BREG67
  : public reg< uint8_t, base_addr + 0x267, rw, 0x00 >
  {
  };

  /**
   * register BREG68
   */
  struct BREG68
  : public reg< uint8_t, base_addr + 0x268, rw, 0x00 >
  {
  };

  /**
   * register BREG69
   */
  struct BREG69
  : public reg< uint8_t, base_addr + 0x269, rw, 0x00 >
  {
  };

  /**
   * register BREG6A
   */
  struct BREG6A
  : public reg< uint8_t, base_addr + 0x26a, rw, 0x00 >
  {
  };

  /**
   * register BREG6B
   */
  struct BREG6B
  : public reg< uint8_t, base_addr + 0x26b, rw, 0x00 >
  {
  };

  /**
   * register BREG6C
   */
  struct BREG6C
  : public reg< uint8_t, base_addr + 0x26c, rw, 0x00 >
  {
  };

  /**
   * register BREG6D
   */
  struct BREG6D
  : public reg< uint8_t, base_addr + 0x26d, rw, 0x00 >
  {
  };

  /**
   * register BREG6E
   */
  struct BREG6E
  : public reg< uint8_t, base_addr + 0x26e, rw, 0x00 >
  {
  };

  /**
   * register BREG6F
   */
  struct BREG6F
  : public reg< uint8_t, base_addr + 0x26f, rw, 0x00 >
  {
  };

  /**
   * register BREG70
   */
  struct BREG70
  : public reg< uint8_t, base_addr + 0x270, rw, 0x00 >
  {
  };

  /**
   * register BREG71
   */
  struct BREG71
  : public reg< uint8_t, base_addr + 0x271, rw, 0x00 >
  {
  };

  /**
   * register BREG72
   */
  struct BREG72
  : public reg< uint8_t, base_addr + 0x272, rw, 0x00 >
  {
  };

  /**
   * register BREG73
   */
  struct BREG73
  : public reg< uint8_t, base_addr + 0x273, rw, 0x00 >
  {
  };

  /**
   * register BREG74
   */
  struct BREG74
  : public reg< uint8_t, base_addr + 0x274, rw, 0x00 >
  {
  };

  /**
   * register BREG75
   */
  struct BREG75
  : public reg< uint8_t, base_addr + 0x275, rw, 0x00 >
  {
  };

  /**
   * register BREG76
   */
  struct BREG76
  : public reg< uint8_t, base_addr + 0x276, rw, 0x00 >
  {
  };

  /**
   * register BREG77
   */
  struct BREG77
  : public reg< uint8_t, base_addr + 0x277, rw, 0x00 >
  {
  };

  /**
   * register BREG78
   */
  struct BREG78
  : public reg< uint8_t, base_addr + 0x278, rw, 0x00 >
  {
  };

  /**
   * register BREG79
   */
  struct BREG79
  : public reg< uint8_t, base_addr + 0x279, rw, 0x00 >
  {
  };

  /**
   * register BREG7A
   */
  struct BREG7A
  : public reg< uint8_t, base_addr + 0x27a, rw, 0x00 >
  {
  };

  /**
   * register BREG7B
   */
  struct BREG7B
  : public reg< uint8_t, base_addr + 0x27b, rw, 0x00 >
  {
  };

  /**
   * register BREG7C
   */
  struct BREG7C
  : public reg< uint8_t, base_addr + 0x27c, rw, 0x00 >
  {
  };

  /**
   * register BREG7D
   */
  struct BREG7D
  : public reg< uint8_t, base_addr + 0x27d, rw, 0x00 >
  {
  };

  /**
   * register BREG7E
   */
  struct BREG7E
  : public reg< uint8_t, base_addr + 0x27e, rw, 0x00 >
  {
  };

  /**
   * register BREG7F
   */
  struct BREG7F
  : public reg< uint8_t, base_addr + 0x27f, rw, 0x00 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
