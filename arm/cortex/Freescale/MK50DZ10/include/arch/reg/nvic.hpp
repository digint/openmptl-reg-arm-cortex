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
//  Import from CMSIS-SVD: "Freescale/MK50DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK50DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK50DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_NVIC_HPP_INCLUDED
#define ARCH_REG_NVIC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Nested Vectored Interrupt Controller
 */
struct NVIC
{
  static constexpr reg_addr_t base_addr = 0xe000e100;

  /**
   * Interrupt Set Enable Register n
   */
  struct NVICISER0
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< Interrupt set enable bits  */
  };

  /**
   * Interrupt Set Enable Register n
   */
  struct NVICISER1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< Interrupt set enable bits  */
  };

  /**
   * Interrupt Set Enable Register n
   */
  struct NVICISER2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< Interrupt set enable bits  */
  };

  /**
   * Interrupt Set Enable Register n
   */
  struct NVICISER3
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< Interrupt set enable bits  */
  };

  /**
   * Interrupt Clear Enable Register n
   */
  struct NVICICER0
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< Interrupt clear-enable bits  */
  };

  /**
   * Interrupt Clear Enable Register n
   */
  struct NVICICER1
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< Interrupt clear-enable bits  */
  };

  /**
   * Interrupt Clear Enable Register n
   */
  struct NVICICER2
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< Interrupt clear-enable bits  */
  };

  /**
   * Interrupt Clear Enable Register n
   */
  struct NVICICER3
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< Interrupt clear-enable bits  */
  };

  /**
   * Interrupt Set Pending Register n
   */
  struct NVICISPR0
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< Interrupt set-pending bits  */
  };

  /**
   * Interrupt Set Pending Register n
   */
  struct NVICISPR1
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< Interrupt set-pending bits  */
  };

  /**
   * Interrupt Set Pending Register n
   */
  struct NVICISPR2
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< Interrupt set-pending bits  */
  };

  /**
   * Interrupt Set Pending Register n
   */
  struct NVICISPR3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< Interrupt set-pending bits  */
  };

  /**
   * Interrupt Clear Pending Register n
   */
  struct NVICICPR0
  : public reg< uint32_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< Interrupt clear-pending bits  */
  };

  /**
   * Interrupt Clear Pending Register n
   */
  struct NVICICPR1
  : public reg< uint32_t, base_addr + 0x184, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< Interrupt clear-pending bits  */
  };

  /**
   * Interrupt Clear Pending Register n
   */
  struct NVICICPR2
  : public reg< uint32_t, base_addr + 0x188, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< Interrupt clear-pending bits  */
  };

  /**
   * Interrupt Clear Pending Register n
   */
  struct NVICICPR3
  : public reg< uint32_t, base_addr + 0x18c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18c, rw, 0 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< Interrupt clear-pending bits  */
  };

  /**
   * Interrupt Active bit Register n
   */
  struct NVICIABR0
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< Interrupt active flags  */
  };

  /**
   * Interrupt Active bit Register n
   */
  struct NVICIABR1
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< Interrupt active flags  */
  };

  /**
   * Interrupt Active bit Register n
   */
  struct NVICIABR2
  : public reg< uint32_t, base_addr + 0x208, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< Interrupt active flags  */
  };

  /**
   * Interrupt Active bit Register n
   */
  struct NVICIABR3
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< Interrupt active flags  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP0
  : public reg< uint8_t, base_addr + 0x300, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x300, rw, 0 >;

    using PRI0  = regbits< type,  0,  8 >;  /**< Priority of interrupt 0  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP1
  : public reg< uint8_t, base_addr + 0x301, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x301, rw, 0 >;

    using PRI1  = regbits< type,  0,  8 >;  /**< Priority of interrupt 1  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP2
  : public reg< uint8_t, base_addr + 0x302, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x302, rw, 0 >;

    using PRI2  = regbits< type,  0,  8 >;  /**< Priority of interrupt 2  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP3
  : public reg< uint8_t, base_addr + 0x303, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x303, rw, 0 >;

    using PRI3  = regbits< type,  0,  8 >;  /**< Priority of interrupt 3  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP4
  : public reg< uint8_t, base_addr + 0x304, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x304, rw, 0 >;

    using PRI4  = regbits< type,  0,  8 >;  /**< Priority of interrupt 4  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP5
  : public reg< uint8_t, base_addr + 0x305, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x305, rw, 0 >;

    using PRI5  = regbits< type,  0,  8 >;  /**< Priority of interrupt 5  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP6
  : public reg< uint8_t, base_addr + 0x306, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x306, rw, 0 >;

    using PRI6  = regbits< type,  0,  8 >;  /**< Priority of interrupt 6  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP7
  : public reg< uint8_t, base_addr + 0x307, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x307, rw, 0 >;

    using PRI7  = regbits< type,  0,  8 >;  /**< Priority of interrupt 7  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP8
  : public reg< uint8_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x308, rw, 0 >;

    using PRI8  = regbits< type,  0,  8 >;  /**< Priority of interrupt 8  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP9
  : public reg< uint8_t, base_addr + 0x309, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x309, rw, 0 >;

    using PRI9  = regbits< type,  0,  8 >;  /**< Priority of interrupt 9  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP10
  : public reg< uint8_t, base_addr + 0x30a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30a, rw, 0 >;

    using PRI10  = regbits< type,  0,  8 >;  /**< Priority of interrupt 10  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP11
  : public reg< uint8_t, base_addr + 0x30b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30b, rw, 0 >;

    using PRI11  = regbits< type,  0,  8 >;  /**< Priority of interrupt 11  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP12
  : public reg< uint8_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30c, rw, 0 >;

    using PRI12  = regbits< type,  0,  8 >;  /**< Priority of interrupt 12  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP13
  : public reg< uint8_t, base_addr + 0x30d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30d, rw, 0 >;

    using PRI13  = regbits< type,  0,  8 >;  /**< Priority of interrupt 13  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP14
  : public reg< uint8_t, base_addr + 0x30e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30e, rw, 0 >;

    using PRI14  = regbits< type,  0,  8 >;  /**< Priority of interrupt 14  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP15
  : public reg< uint8_t, base_addr + 0x30f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30f, rw, 0 >;

    using PRI15  = regbits< type,  0,  8 >;  /**< Priority of interrupt 15  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP16
  : public reg< uint8_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x310, rw, 0 >;

    using PRI16  = regbits< type,  0,  8 >;  /**< Priority of interrupt 16  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP17
  : public reg< uint8_t, base_addr + 0x311, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x311, rw, 0 >;

    using PRI17  = regbits< type,  0,  8 >;  /**< Priority of interrupt 17  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP18
  : public reg< uint8_t, base_addr + 0x312, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x312, rw, 0 >;

    using PRI18  = regbits< type,  0,  8 >;  /**< Priority of interrupt 18  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP19
  : public reg< uint8_t, base_addr + 0x313, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x313, rw, 0 >;

    using PRI19  = regbits< type,  0,  8 >;  /**< Priority of interrupt 19  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP20
  : public reg< uint8_t, base_addr + 0x314, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x314, rw, 0 >;

    using PRI20  = regbits< type,  0,  8 >;  /**< Priority of interrupt 20  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP21
  : public reg< uint8_t, base_addr + 0x315, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x315, rw, 0 >;

    using PRI21  = regbits< type,  0,  8 >;  /**< Priority of interrupt 21  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP22
  : public reg< uint8_t, base_addr + 0x316, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x316, rw, 0 >;

    using PRI22  = regbits< type,  0,  8 >;  /**< Priority of interrupt 22  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP23
  : public reg< uint8_t, base_addr + 0x317, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x317, rw, 0 >;

    using PRI23  = regbits< type,  0,  8 >;  /**< Priority of interrupt 23  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP24
  : public reg< uint8_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x318, rw, 0 >;

    using PRI24  = regbits< type,  0,  8 >;  /**< Priority of interrupt 24  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP25
  : public reg< uint8_t, base_addr + 0x319, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x319, rw, 0 >;

    using PRI25  = regbits< type,  0,  8 >;  /**< Priority of interrupt 25  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP26
  : public reg< uint8_t, base_addr + 0x31a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31a, rw, 0 >;

    using PRI26  = regbits< type,  0,  8 >;  /**< Priority of interrupt 26  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP27
  : public reg< uint8_t, base_addr + 0x31b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31b, rw, 0 >;

    using PRI27  = regbits< type,  0,  8 >;  /**< Priority of interrupt 27  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP28
  : public reg< uint8_t, base_addr + 0x31c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31c, rw, 0 >;

    using PRI28  = regbits< type,  0,  8 >;  /**< Priority of interrupt 28  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP29
  : public reg< uint8_t, base_addr + 0x31d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31d, rw, 0 >;

    using PRI29  = regbits< type,  0,  8 >;  /**< Priority of interrupt 29  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP30
  : public reg< uint8_t, base_addr + 0x31e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31e, rw, 0 >;

    using PRI30  = regbits< type,  0,  8 >;  /**< Priority of interrupt 30  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP31
  : public reg< uint8_t, base_addr + 0x31f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31f, rw, 0 >;

    using PRI31  = regbits< type,  0,  8 >;  /**< Priority of interrupt 31  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP32
  : public reg< uint8_t, base_addr + 0x320, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x320, rw, 0 >;

    using PRI32  = regbits< type,  0,  8 >;  /**< Priority of interrupt 32  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP33
  : public reg< uint8_t, base_addr + 0x321, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x321, rw, 0 >;

    using PRI33  = regbits< type,  0,  8 >;  /**< Priority of interrupt 33  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP34
  : public reg< uint8_t, base_addr + 0x322, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x322, rw, 0 >;

    using PRI34  = regbits< type,  0,  8 >;  /**< Priority of interrupt 34  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP35
  : public reg< uint8_t, base_addr + 0x323, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x323, rw, 0 >;

    using PRI35  = regbits< type,  0,  8 >;  /**< Priority of interrupt 35  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP36
  : public reg< uint8_t, base_addr + 0x324, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x324, rw, 0 >;

    using PRI36  = regbits< type,  0,  8 >;  /**< Priority of interrupt 36  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP37
  : public reg< uint8_t, base_addr + 0x325, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x325, rw, 0 >;

    using PRI37  = regbits< type,  0,  8 >;  /**< Priority of interrupt 37  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP38
  : public reg< uint8_t, base_addr + 0x326, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x326, rw, 0 >;

    using PRI38  = regbits< type,  0,  8 >;  /**< Priority of interrupt 38  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP39
  : public reg< uint8_t, base_addr + 0x327, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x327, rw, 0 >;

    using PRI39  = regbits< type,  0,  8 >;  /**< Priority of interrupt 39  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP40
  : public reg< uint8_t, base_addr + 0x328, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x328, rw, 0 >;

    using PRI40  = regbits< type,  0,  8 >;  /**< Priority of interrupt 40  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP41
  : public reg< uint8_t, base_addr + 0x329, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x329, rw, 0 >;

    using PRI41  = regbits< type,  0,  8 >;  /**< Priority of interrupt 41  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP42
  : public reg< uint8_t, base_addr + 0x32a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32a, rw, 0 >;

    using PRI42  = regbits< type,  0,  8 >;  /**< Priority of interrupt 42  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP43
  : public reg< uint8_t, base_addr + 0x32b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32b, rw, 0 >;

    using PRI43  = regbits< type,  0,  8 >;  /**< Priority of interrupt 43  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP44
  : public reg< uint8_t, base_addr + 0x32c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32c, rw, 0 >;

    using PRI44  = regbits< type,  0,  8 >;  /**< Priority of interrupt 44  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP45
  : public reg< uint8_t, base_addr + 0x32d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32d, rw, 0 >;

    using PRI45  = regbits< type,  0,  8 >;  /**< Priority of interrupt 45  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP46
  : public reg< uint8_t, base_addr + 0x32e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32e, rw, 0 >;

    using PRI46  = regbits< type,  0,  8 >;  /**< Priority of interrupt 46  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP47
  : public reg< uint8_t, base_addr + 0x32f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32f, rw, 0 >;

    using PRI47  = regbits< type,  0,  8 >;  /**< Priority of interrupt 47  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP48
  : public reg< uint8_t, base_addr + 0x330, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x330, rw, 0 >;

    using PRI48  = regbits< type,  0,  8 >;  /**< Priority of interrupt 48  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP49
  : public reg< uint8_t, base_addr + 0x331, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x331, rw, 0 >;

    using PRI49  = regbits< type,  0,  8 >;  /**< Priority of interrupt 49  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP50
  : public reg< uint8_t, base_addr + 0x332, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x332, rw, 0 >;

    using PRI50  = regbits< type,  0,  8 >;  /**< Priority of interrupt 50  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP51
  : public reg< uint8_t, base_addr + 0x333, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x333, rw, 0 >;

    using PRI51  = regbits< type,  0,  8 >;  /**< Priority of interrupt 51  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP52
  : public reg< uint8_t, base_addr + 0x334, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x334, rw, 0 >;

    using PRI52  = regbits< type,  0,  8 >;  /**< Priority of interrupt 52  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP53
  : public reg< uint8_t, base_addr + 0x335, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x335, rw, 0 >;

    using PRI53  = regbits< type,  0,  8 >;  /**< Priority of interrupt 53  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP54
  : public reg< uint8_t, base_addr + 0x336, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x336, rw, 0 >;

    using PRI54  = regbits< type,  0,  8 >;  /**< Priority of interrupt 54  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP55
  : public reg< uint8_t, base_addr + 0x337, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x337, rw, 0 >;

    using PRI55  = regbits< type,  0,  8 >;  /**< Priority of interrupt 55  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP56
  : public reg< uint8_t, base_addr + 0x338, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x338, rw, 0 >;

    using PRI56  = regbits< type,  0,  8 >;  /**< Priority of interrupt 56  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP57
  : public reg< uint8_t, base_addr + 0x339, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x339, rw, 0 >;

    using PRI57  = regbits< type,  0,  8 >;  /**< Priority of interrupt 57  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP58
  : public reg< uint8_t, base_addr + 0x33a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33a, rw, 0 >;

    using PRI58  = regbits< type,  0,  8 >;  /**< Priority of interrupt 58  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP59
  : public reg< uint8_t, base_addr + 0x33b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33b, rw, 0 >;

    using PRI59  = regbits< type,  0,  8 >;  /**< Priority of interrupt 59  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP60
  : public reg< uint8_t, base_addr + 0x33c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33c, rw, 0 >;

    using PRI60  = regbits< type,  0,  8 >;  /**< Priority of interrupt 60  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP61
  : public reg< uint8_t, base_addr + 0x33d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33d, rw, 0 >;

    using PRI61  = regbits< type,  0,  8 >;  /**< Priority of interrupt 61  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP62
  : public reg< uint8_t, base_addr + 0x33e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33e, rw, 0 >;

    using PRI62  = regbits< type,  0,  8 >;  /**< Priority of interrupt 62  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP63
  : public reg< uint8_t, base_addr + 0x33f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33f, rw, 0 >;

    using PRI63  = regbits< type,  0,  8 >;  /**< Priority of interrupt 63  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP64
  : public reg< uint8_t, base_addr + 0x340, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x340, rw, 0 >;

    using PRI64  = regbits< type,  0,  8 >;  /**< Priority of interrupt 64  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP65
  : public reg< uint8_t, base_addr + 0x341, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x341, rw, 0 >;

    using PRI65  = regbits< type,  0,  8 >;  /**< Priority of interrupt 65  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP66
  : public reg< uint8_t, base_addr + 0x342, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x342, rw, 0 >;

    using PRI66  = regbits< type,  0,  8 >;  /**< Priority of interrupt 66  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP67
  : public reg< uint8_t, base_addr + 0x343, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x343, rw, 0 >;

    using PRI67  = regbits< type,  0,  8 >;  /**< Priority of interrupt 67  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP68
  : public reg< uint8_t, base_addr + 0x344, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x344, rw, 0 >;

    using PRI68  = regbits< type,  0,  8 >;  /**< Priority of interrupt 68  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP69
  : public reg< uint8_t, base_addr + 0x345, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x345, rw, 0 >;

    using PRI69  = regbits< type,  0,  8 >;  /**< Priority of interrupt 69  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP70
  : public reg< uint8_t, base_addr + 0x346, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x346, rw, 0 >;

    using PRI70  = regbits< type,  0,  8 >;  /**< Priority of interrupt 70  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP71
  : public reg< uint8_t, base_addr + 0x347, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x347, rw, 0 >;

    using PRI71  = regbits< type,  0,  8 >;  /**< Priority of interrupt 71  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP72
  : public reg< uint8_t, base_addr + 0x348, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x348, rw, 0 >;

    using PRI72  = regbits< type,  0,  8 >;  /**< Priority of interrupt 72  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP73
  : public reg< uint8_t, base_addr + 0x349, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x349, rw, 0 >;

    using PRI73  = regbits< type,  0,  8 >;  /**< Priority of interrupt 73  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP74
  : public reg< uint8_t, base_addr + 0x34a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34a, rw, 0 >;

    using PRI74  = regbits< type,  0,  8 >;  /**< Priority of interrupt 74  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP75
  : public reg< uint8_t, base_addr + 0x34b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34b, rw, 0 >;

    using PRI75  = regbits< type,  0,  8 >;  /**< Priority of interrupt 75  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP76
  : public reg< uint8_t, base_addr + 0x34c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34c, rw, 0 >;

    using PRI76  = regbits< type,  0,  8 >;  /**< Priority of interrupt 76  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP77
  : public reg< uint8_t, base_addr + 0x34d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34d, rw, 0 >;

    using PRI77  = regbits< type,  0,  8 >;  /**< Priority of interrupt 77  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP78
  : public reg< uint8_t, base_addr + 0x34e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34e, rw, 0 >;

    using PRI78  = regbits< type,  0,  8 >;  /**< Priority of interrupt 78  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP79
  : public reg< uint8_t, base_addr + 0x34f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34f, rw, 0 >;

    using PRI79  = regbits< type,  0,  8 >;  /**< Priority of interrupt 79  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP80
  : public reg< uint8_t, base_addr + 0x350, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x350, rw, 0 >;

    using PRI80  = regbits< type,  0,  8 >;  /**< Priority of interrupt 80  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP81
  : public reg< uint8_t, base_addr + 0x351, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x351, rw, 0 >;

    using PRI81  = regbits< type,  0,  8 >;  /**< Priority of interrupt 81  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP82
  : public reg< uint8_t, base_addr + 0x352, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x352, rw, 0 >;

    using PRI82  = regbits< type,  0,  8 >;  /**< Priority of interrupt 82  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP83
  : public reg< uint8_t, base_addr + 0x353, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x353, rw, 0 >;

    using PRI83  = regbits< type,  0,  8 >;  /**< Priority of interrupt 83  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP84
  : public reg< uint8_t, base_addr + 0x354, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x354, rw, 0 >;

    using PRI84  = regbits< type,  0,  8 >;  /**< Priority of interrupt 84  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP85
  : public reg< uint8_t, base_addr + 0x355, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x355, rw, 0 >;

    using PRI85  = regbits< type,  0,  8 >;  /**< Priority of interrupt 85  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP86
  : public reg< uint8_t, base_addr + 0x356, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x356, rw, 0 >;

    using PRI86  = regbits< type,  0,  8 >;  /**< Priority of interrupt 86  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP87
  : public reg< uint8_t, base_addr + 0x357, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x357, rw, 0 >;

    using PRI87  = regbits< type,  0,  8 >;  /**< Priority of interrupt 87  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP88
  : public reg< uint8_t, base_addr + 0x358, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x358, rw, 0 >;

    using PRI88  = regbits< type,  0,  8 >;  /**< Priority of interrupt 88  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP89
  : public reg< uint8_t, base_addr + 0x359, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x359, rw, 0 >;

    using PRI89  = regbits< type,  0,  8 >;  /**< Priority of interrupt 89  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP90
  : public reg< uint8_t, base_addr + 0x35a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35a, rw, 0 >;

    using PRI90  = regbits< type,  0,  8 >;  /**< Priority of interrupt 90  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP91
  : public reg< uint8_t, base_addr + 0x35b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35b, rw, 0 >;

    using PRI91  = regbits< type,  0,  8 >;  /**< Priority of interrupt 91  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP92
  : public reg< uint8_t, base_addr + 0x35c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35c, rw, 0 >;

    using PRI92  = regbits< type,  0,  8 >;  /**< Priority of interrupt 92  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP93
  : public reg< uint8_t, base_addr + 0x35d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35d, rw, 0 >;

    using PRI93  = regbits< type,  0,  8 >;  /**< Priority of interrupt 93  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP94
  : public reg< uint8_t, base_addr + 0x35e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35e, rw, 0 >;

    using PRI94  = regbits< type,  0,  8 >;  /**< Priority of interrupt 94  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP95
  : public reg< uint8_t, base_addr + 0x35f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35f, rw, 0 >;

    using PRI95  = regbits< type,  0,  8 >;  /**< Priority of interrupt 95  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP96
  : public reg< uint8_t, base_addr + 0x360, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x360, rw, 0 >;

    using PRI96  = regbits< type,  0,  8 >;  /**< Priority of interrupt 96  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP97
  : public reg< uint8_t, base_addr + 0x361, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x361, rw, 0 >;

    using PRI97  = regbits< type,  0,  8 >;  /**< Priority of interrupt 97  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP98
  : public reg< uint8_t, base_addr + 0x362, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x362, rw, 0 >;

    using PRI98  = regbits< type,  0,  8 >;  /**< Priority of interrupt 98  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP99
  : public reg< uint8_t, base_addr + 0x363, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x363, rw, 0 >;

    using PRI99  = regbits< type,  0,  8 >;  /**< Priority of interrupt 99  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP100
  : public reg< uint8_t, base_addr + 0x364, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x364, rw, 0 >;

    using PRI100  = regbits< type,  0,  8 >;  /**< Priority of interrupt 100  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP101
  : public reg< uint8_t, base_addr + 0x365, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x365, rw, 0 >;

    using PRI101  = regbits< type,  0,  8 >;  /**< Priority of interrupt 101  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP102
  : public reg< uint8_t, base_addr + 0x366, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x366, rw, 0 >;

    using PRI102  = regbits< type,  0,  8 >;  /**< Priority of interrupt 102  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP103
  : public reg< uint8_t, base_addr + 0x367, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x367, rw, 0 >;

    using PRI103  = regbits< type,  0,  8 >;  /**< Priority of interrupt 103  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP104
  : public reg< uint8_t, base_addr + 0x368, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x368, rw, 0 >;

    using PRI104  = regbits< type,  0,  8 >;  /**< Priority of interrupt 104  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVICIP105
  : public reg< uint8_t, base_addr + 0x369, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x369, rw, 0 >;

    using PRI105  = regbits< type,  0,  8 >;  /**< Priority of interrupt 105  */
  };

  /**
   * Software Trigger Interrupt Register
   */
  struct NVICSTIR
  : public reg< uint32_t, base_addr + 0xe00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe00, rw, 0 >;

    using INTID  = regbits< type,  0,  9 >;  /**< Interrupt ID of the interrupt to trigger, in the range 0-239. For example, a value of 0x03 specifies interrupt IRQ3.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
