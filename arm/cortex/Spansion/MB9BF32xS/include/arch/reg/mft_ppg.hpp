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
//  Import from CMSIS-SVD: "Spansion/MB9BF32xS.svd"
//
//  name: MB9BF32xS
//  version: 1.0
//  description: MB9BF32xS
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MFT_PPG_HPP_INCLUDED
#define ARCH_REG_MFT_PPG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral MFT_PPG
 */
struct MFT_PPG
{
  static constexpr reg_addr_t base_addr = 0x40024000;

  /**
   * register TTCR0
   */
  struct TTCR0
  : public reg< uint16_t, base_addr + 0x0, rw, 0xF000 >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0xF000 >;

    using TRG6O  = regbits< type, 15,  1 >;  /**< bitfield TRG6O  */
    using TRG4O  = regbits< type, 14,  1 >;  /**< bitfield TRG4O  */
    using TRG2O  = regbits< type, 13,  1 >;  /**< bitfield TRG2O  */
    using TRG0O  = regbits< type, 12,  1 >;  /**< bitfield TRG0O  */
    using CS0    = regbits< type, 10,  2 >;  /**< bitfield CS0    */
    using MONI0  = regbits< type,  9,  1 >;  /**< bitfield MONI0  */
    using STR0   = regbits< type,  8,  1 >;  /**< bitfield STR0   */
  };

  /**
   * register COMP0
   */
  struct COMP0
  : public reg< uint16_t, base_addr + 0x08, rw, 0x0000 >
  {
  };

  /**
   * register COMP2
   */
  struct COMP2
  : public reg< uint8_t, base_addr + 0x0c, rw, 0x00 >
  {
  };

  /**
   * register COMP4
   *
   * (derived from: COMP0)
   */
  struct COMP4
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register COMP6
   *
   * (derived from: COMP2)
   */
  struct COMP6
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TRG
   */
  struct TRG
  : public reg< uint16_t, base_addr + 0x100, rw, 0x00 >
  {
    using type = reg< uint16_t, base_addr + 0x100, rw, 0x00 >;

    using PEN07  = regbits< type,  7,  1 >;  /**< bitfield PEN07  */
    using PEN06  = regbits< type,  6,  1 >;  /**< bitfield PEN06  */
    using PEN05  = regbits< type,  5,  1 >;  /**< bitfield PEN05  */
    using PEN04  = regbits< type,  4,  1 >;  /**< bitfield PEN04  */
    using PEN03  = regbits< type,  3,  1 >;  /**< bitfield PEN03  */
    using PEN02  = regbits< type,  2,  1 >;  /**< bitfield PEN02  */
    using PEN01  = regbits< type,  1,  1 >;  /**< bitfield PEN01  */
    using PEN00  = regbits< type,  0,  1 >;  /**< bitfield PEN00  */
  };

  /**
   * register REVC
   */
  struct REVC
  : public reg< uint16_t, base_addr + 0x104, rw, 0x00 >
  {
    using type = reg< uint16_t, base_addr + 0x104, rw, 0x00 >;

    using REV07  = regbits< type,  7,  1 >;  /**< bitfield REV07  */
    using REV06  = regbits< type,  6,  1 >;  /**< bitfield REV06  */
    using REV05  = regbits< type,  5,  1 >;  /**< bitfield REV05  */
    using REV04  = regbits< type,  4,  1 >;  /**< bitfield REV04  */
    using REV03  = regbits< type,  3,  1 >;  /**< bitfield REV03  */
    using REV02  = regbits< type,  2,  1 >;  /**< bitfield REV02  */
    using REV01  = regbits< type,  1,  1 >;  /**< bitfield REV01  */
    using REV00  = regbits< type,  0,  1 >;  /**< bitfield REV00  */
  };

  /**
   * register PPGC0
   */
  struct PPGC0
  : public reg< uint8_t, base_addr + 0x201, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x201, rw, 0x00 >;

    using PIE   = regbits< type,  7,  1 >;  /**< bitfield PIE   */
    using PUF   = regbits< type,  6,  1 >;  /**< bitfield PUF   */
    using INTM  = regbits< type,  5,  1 >;  /**< bitfield INTM  */
    using PCS   = regbits< type,  3,  2 >;  /**< bitfield PCS   */
    using MD    = regbits< type,  1,  2 >;  /**< bitfield MD    */
    using TTRG  = regbits< type,  0,  1 >;  /**< bitfield TTRG  */
  };

  /**
   * register PPGC1
   *
   * (derived from: PPGC0)
   */
  struct PPGC1
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC2
   *
   * (derived from: PPGC0)
   */
  struct PPGC2
  : public reg< uint32_t, base_addr + 0x205, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC3
   *
   * (derived from: PPGC0)
   */
  struct PPGC3
  : public reg< uint32_t, base_addr + 0x204, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC4
   *
   * (derived from: PPGC0)
   */
  struct PPGC4
  : public reg< uint32_t, base_addr + 0x241, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC5
   *
   * (derived from: PPGC0)
   */
  struct PPGC5
  : public reg< uint32_t, base_addr + 0x240, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC6
   *
   * (derived from: PPGC0)
   */
  struct PPGC6
  : public reg< uint32_t, base_addr + 0x245, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC7
   *
   * (derived from: PPGC0)
   */
  struct PPGC7
  : public reg< uint32_t, base_addr + 0x244, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH0
   */
  struct PRLH0
  : public reg< uint8_t, base_addr + 0x209, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x209, rw, 0x00 >;

    using PRLH  = regbits< type,  0,  8 >;  /**< bitfield PRLH  */
  };

  /**
   * register PRLL0
   */
  struct PRLL0
  : public reg< uint8_t, base_addr + 0x208, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x208, rw, 0x00 >;

    using PRLL  = regbits< type,  0,  8 >;  /**< bitfield PRLL  */
  };

  /**
   * register PRLH1
   *
   * (derived from: PRLH0)
   */
  struct PRLH1
  : public reg< uint32_t, base_addr + 0x20d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL1
   *
   * (derived from: PRLL0)
   */
  struct PRLL1
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH2
   *
   * (derived from: PRLH0)
   */
  struct PRLH2
  : public reg< uint32_t, base_addr + 0x211, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL2
   *
   * (derived from: PRLL0)
   */
  struct PRLL2
  : public reg< uint32_t, base_addr + 0x210, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH3
   *
   * (derived from: PRLH0)
   */
  struct PRLH3
  : public reg< uint32_t, base_addr + 0x215, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL3
   *
   * (derived from: PRLL0)
   */
  struct PRLL3
  : public reg< uint32_t, base_addr + 0x214, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH4
   *
   * (derived from: PRLH0)
   */
  struct PRLH4
  : public reg< uint32_t, base_addr + 0x249, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL4
   *
   * (derived from: PRLL0)
   */
  struct PRLL4
  : public reg< uint32_t, base_addr + 0x248, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH5
   *
   * (derived from: PRLH0)
   */
  struct PRLH5
  : public reg< uint32_t, base_addr + 0x24d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL5
   *
   * (derived from: PRLL0)
   */
  struct PRLL5
  : public reg< uint32_t, base_addr + 0x24c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH6
   *
   * (derived from: PRLH0)
   */
  struct PRLH6
  : public reg< uint32_t, base_addr + 0x251, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL6
   *
   * (derived from: PRLL0)
   */
  struct PRLL6
  : public reg< uint32_t, base_addr + 0x250, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH7
   *
   * (derived from: PRLH0)
   */
  struct PRLH7
  : public reg< uint32_t, base_addr + 0x255, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL7
   *
   * (derived from: PRLL0)
   */
  struct PRLL7
  : public reg< uint32_t, base_addr + 0x254, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register GATEC0
   */
  struct GATEC0
  : public reg< uint8_t, base_addr + 0x218, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x218, rw, 0x00 >;

    using STRG2  = regbits< type,  5,  1 >;  /**< bitfield STRG2  */
    using EDGE2  = regbits< type,  4,  1 >;  /**< bitfield EDGE2  */
    using STRG0  = regbits< type,  1,  1 >;  /**< bitfield STRG0  */
    using EDGE0  = regbits< type,  0,  1 >;  /**< bitfield EDGE0  */
  };

  /**
   * register GATEC4
   */
  struct GATEC4
  : public reg< uint8_t, base_addr + 0x258, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x258, rw, 0x00 >;

    using STRG6  = regbits< type,  5,  1 >;  /**< bitfield STRG6  */
    using EDGE6  = regbits< type,  4,  1 >;  /**< bitfield EDGE6  */
    using STRG4  = regbits< type,  1,  1 >;  /**< bitfield STRG4  */
    using EDGE4  = regbits< type,  0,  1 >;  /**< bitfield EDGE4  */
  };

  /**
   * register IGBTC
   */
  struct IGBTC
  : public reg< uint8_t, base_addr + 0x380, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x380, rw, 0x00 >;

    using IGATIH   = regbits< type,  7,  1 >;  /**< bitfield IGATIH   */
    using IGNFW    = regbits< type,  4,  3 >;  /**< bitfield IGNFW    */
    using IGOSEL   = regbits< type,  2,  2 >;  /**< bitfield IGOSEL   */
    using IGTRGLV  = regbits< type,  1,  1 >;  /**< bitfield IGTRGLV  */
    using IGBTMD   = regbits< type,  0,  1 >;  /**< bitfield IGBTMD   */
  };
};
} // namespace mptl

#endif // ARCH_REG_MFT_PPG_HPP_INCLUDED
