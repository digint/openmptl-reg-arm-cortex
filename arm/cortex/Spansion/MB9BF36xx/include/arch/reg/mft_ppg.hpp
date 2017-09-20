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
//  Import from CMSIS-SVD: "Spansion/MB9BF36xx.svd"
//
//  name: MB9BF36xx
//  version: 1.0
//  description: MB9BF36xx
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
   * register TTCR1
   */
  struct TTCR1
  : public reg< uint16_t, base_addr + 0x20, rw, 0xF000 >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0xF000 >;

    using TRG7O  = regbits< type, 15,  1 >;  /**< bitfield TRG7O  */
    using TRG5O  = regbits< type, 14,  1 >;  /**< bitfield TRG5O  */
    using TRG3O  = regbits< type, 13,  1 >;  /**< bitfield TRG3O  */
    using TRG1O  = regbits< type, 12,  1 >;  /**< bitfield TRG1O  */
    using CS1    = regbits< type, 10,  2 >;  /**< bitfield CS1    */
    using MONI1  = regbits< type,  9,  1 >;  /**< bitfield MONI1  */
    using STR1   = regbits< type,  8,  1 >;  /**< bitfield STR1   */
  };

  /**
   * register TTCR2
   */
  struct TTCR2
  : public reg< uint16_t, base_addr + 0x40, rw, 0xF000 >
  {
    using type = reg< uint16_t, base_addr + 0x40, rw, 0xF000 >;

    using TRG22O  = regbits< type, 15,  1 >;  /**< bitfield TRG22O  */
    using TRG20O  = regbits< type, 14,  1 >;  /**< bitfield TRG20O  */
    using TRG18O  = regbits< type, 13,  1 >;  /**< bitfield TRG18O  */
    using TRG16O  = regbits< type, 12,  1 >;  /**< bitfield TRG16O  */
    using CS2     = regbits< type, 10,  2 >;  /**< bitfield CS2     */
    using MONI2   = regbits< type,  9,  1 >;  /**< bitfield MONI2   */
    using STR2    = regbits< type,  8,  1 >;  /**< bitfield STR2    */
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
   * register COMP1
   *
   * (derived from: COMP0)
   */
  struct COMP1
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register COMP3
   *
   * (derived from: COMP2)
   */
  struct COMP3
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register COMP5
   *
   * (derived from: COMP0)
   */
  struct COMP5
  : public reg< uint32_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register COMP7
   *
   * (derived from: COMP2)
   */
  struct COMP7
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register COMP8
   *
   * (derived from: COMP0)
   */
  struct COMP8
  : public reg< uint32_t, base_addr + 0x48, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register COMP10
   *
   * (derived from: COMP2)
   */
  struct COMP10
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register COMP12
   *
   * (derived from: COMP0)
   */
  struct COMP12
  : public reg< uint32_t, base_addr + 0x50, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register COMP14
   *
   * (derived from: COMP2)
   */
  struct COMP14
  : public reg< uint32_t, base_addr + 0x54, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TRG
   */
  struct TRG
  : public reg< uint16_t, base_addr + 0x100, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x100, rw, 0x0000 >;

    using PEN15  = regbits< type, 15,  1 >;  /**< bitfield PEN15  */
    using PEN14  = regbits< type, 14,  1 >;  /**< bitfield PEN14  */
    using PEN13  = regbits< type, 13,  1 >;  /**< bitfield PEN13  */
    using PEN12  = regbits< type, 12,  1 >;  /**< bitfield PEN12  */
    using PEN11  = regbits< type, 11,  1 >;  /**< bitfield PEN11  */
    using PEN10  = regbits< type, 10,  1 >;  /**< bitfield PEN10  */
    using PEN09  = regbits< type,  9,  1 >;  /**< bitfield PEN09  */
    using PEN08  = regbits< type,  8,  1 >;  /**< bitfield PEN08  */
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
   * register TRG1
   */
  struct TRG1
  : public reg< uint16_t, base_addr + 0x140, rw, 0x00 >
  {
    using type = reg< uint16_t, base_addr + 0x140, rw, 0x00 >;

    using PEN23  = regbits< type,  7,  1 >;  /**< bitfield PEN23  */
    using PEN22  = regbits< type,  6,  1 >;  /**< bitfield PEN22  */
    using PEN21  = regbits< type,  5,  1 >;  /**< bitfield PEN21  */
    using PEN20  = regbits< type,  4,  1 >;  /**< bitfield PEN20  */
    using PEN19  = regbits< type,  3,  1 >;  /**< bitfield PEN19  */
    using PEN18  = regbits< type,  2,  1 >;  /**< bitfield PEN18  */
    using PEN17  = regbits< type,  1,  1 >;  /**< bitfield PEN17  */
    using PEN16  = regbits< type,  0,  1 >;  /**< bitfield PEN16  */
  };

  /**
   * register REVC
   */
  struct REVC
  : public reg< uint16_t, base_addr + 0x104, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x104, rw, 0x0000 >;

    using REV15  = regbits< type, 15,  1 >;  /**< bitfield REV15  */
    using REV14  = regbits< type, 14,  1 >;  /**< bitfield REV14  */
    using REV13  = regbits< type, 13,  1 >;  /**< bitfield REV13  */
    using REV12  = regbits< type, 12,  1 >;  /**< bitfield REV12  */
    using REV11  = regbits< type, 11,  1 >;  /**< bitfield REV11  */
    using REV10  = regbits< type, 10,  1 >;  /**< bitfield REV10  */
    using REV09  = regbits< type,  9,  1 >;  /**< bitfield REV09  */
    using REV08  = regbits< type,  8,  1 >;  /**< bitfield REV08  */
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
   * register REVC1
   */
  struct REVC1
  : public reg< uint16_t, base_addr + 0x144, rw, 0x00 >
  {
    using type = reg< uint16_t, base_addr + 0x144, rw, 0x00 >;

    using REV23  = regbits< type,  7,  1 >;  /**< bitfield REV23  */
    using REV22  = regbits< type,  6,  1 >;  /**< bitfield REV22  */
    using REV21  = regbits< type,  5,  1 >;  /**< bitfield REV21  */
    using REV20  = regbits< type,  4,  1 >;  /**< bitfield REV20  */
    using REV19  = regbits< type,  3,  1 >;  /**< bitfield REV19  */
    using REV18  = regbits< type,  2,  1 >;  /**< bitfield REV18  */
    using REV17  = regbits< type,  1,  1 >;  /**< bitfield REV17  */
    using REV16  = regbits< type,  0,  1 >;  /**< bitfield REV16  */
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
   * register PPGC8
   *
   * (derived from: PPGC0)
   */
  struct PPGC8
  : public reg< uint32_t, base_addr + 0x281, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC9
   *
   * (derived from: PPGC0)
   */
  struct PPGC9
  : public reg< uint32_t, base_addr + 0x280, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC10
   *
   * (derived from: PPGC0)
   */
  struct PPGC10
  : public reg< uint32_t, base_addr + 0x285, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC11
   *
   * (derived from: PPGC0)
   */
  struct PPGC11
  : public reg< uint32_t, base_addr + 0x284, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC12
   *
   * (derived from: PPGC0)
   */
  struct PPGC12
  : public reg< uint32_t, base_addr + 0x2c1, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC13
   *
   * (derived from: PPGC0)
   */
  struct PPGC13
  : public reg< uint32_t, base_addr + 0x2c0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC14
   *
   * (derived from: PPGC0)
   */
  struct PPGC14
  : public reg< uint32_t, base_addr + 0x2c5, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC15
   *
   * (derived from: PPGC0)
   */
  struct PPGC15
  : public reg< uint32_t, base_addr + 0x2c4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC16
   *
   * (derived from: PPGC0)
   */
  struct PPGC16
  : public reg< uint32_t, base_addr + 0x301, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC17
   *
   * (derived from: PPGC0)
   */
  struct PPGC17
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC18
   *
   * (derived from: PPGC0)
   */
  struct PPGC18
  : public reg< uint32_t, base_addr + 0x305, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC19
   *
   * (derived from: PPGC0)
   */
  struct PPGC19
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC20
   *
   * (derived from: PPGC0)
   */
  struct PPGC20
  : public reg< uint32_t, base_addr + 0x341, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC21
   *
   * (derived from: PPGC0)
   */
  struct PPGC21
  : public reg< uint32_t, base_addr + 0x340, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC22
   *
   * (derived from: PPGC0)
   */
  struct PPGC22
  : public reg< uint32_t, base_addr + 0x345, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PPGC23
   *
   * (derived from: PPGC0)
   */
  struct PPGC23
  : public reg< uint32_t, base_addr + 0x344, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * register PRLH8
   *
   * (derived from: PRLH0)
   */
  struct PRLH8
  : public reg< uint32_t, base_addr + 0x289, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL8
   *
   * (derived from: PRLL0)
   */
  struct PRLL8
  : public reg< uint32_t, base_addr + 0x288, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH9
   *
   * (derived from: PRLH0)
   */
  struct PRLH9
  : public reg< uint32_t, base_addr + 0x28d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL9
   *
   * (derived from: PRLL0)
   */
  struct PRLL9
  : public reg< uint32_t, base_addr + 0x28c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH10
   *
   * (derived from: PRLH0)
   */
  struct PRLH10
  : public reg< uint32_t, base_addr + 0x291, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL10
   *
   * (derived from: PRLL0)
   */
  struct PRLL10
  : public reg< uint32_t, base_addr + 0x290, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH11
   *
   * (derived from: PRLH0)
   */
  struct PRLH11
  : public reg< uint32_t, base_addr + 0x295, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL11
   *
   * (derived from: PRLL0)
   */
  struct PRLL11
  : public reg< uint32_t, base_addr + 0x294, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH12
   *
   * (derived from: PRLH0)
   */
  struct PRLH12
  : public reg< uint32_t, base_addr + 0x2c9, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL12
   *
   * (derived from: PRLL0)
   */
  struct PRLL12
  : public reg< uint32_t, base_addr + 0x2c8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH13
   *
   * (derived from: PRLH0)
   */
  struct PRLH13
  : public reg< uint32_t, base_addr + 0x2cd, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL13
   *
   * (derived from: PRLL0)
   */
  struct PRLL13
  : public reg< uint32_t, base_addr + 0x2cc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH14
   *
   * (derived from: PRLH0)
   */
  struct PRLH14
  : public reg< uint32_t, base_addr + 0x2d1, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL14
   *
   * (derived from: PRLL0)
   */
  struct PRLL14
  : public reg< uint32_t, base_addr + 0x2d0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH15
   *
   * (derived from: PRLH0)
   */
  struct PRLH15
  : public reg< uint32_t, base_addr + 0x2d5, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL15
   *
   * (derived from: PRLL0)
   */
  struct PRLL15
  : public reg< uint32_t, base_addr + 0x2d4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH16
   *
   * (derived from: PRLH0)
   */
  struct PRLH16
  : public reg< uint32_t, base_addr + 0x309, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL16
   *
   * (derived from: PRLL0)
   */
  struct PRLL16
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH17
   *
   * (derived from: PRLH0)
   */
  struct PRLH17
  : public reg< uint32_t, base_addr + 0x30d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL17
   *
   * (derived from: PRLL0)
   */
  struct PRLL17
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH18
   *
   * (derived from: PRLH0)
   */
  struct PRLH18
  : public reg< uint32_t, base_addr + 0x311, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL18
   *
   * (derived from: PRLL0)
   */
  struct PRLL18
  : public reg< uint32_t, base_addr + 0x310, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH19
   *
   * (derived from: PRLH0)
   */
  struct PRLH19
  : public reg< uint32_t, base_addr + 0x315, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL19
   *
   * (derived from: PRLL0)
   */
  struct PRLL19
  : public reg< uint32_t, base_addr + 0x314, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH20
   *
   * (derived from: PRLH0)
   */
  struct PRLH20
  : public reg< uint32_t, base_addr + 0x349, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL20
   *
   * (derived from: PRLL0)
   */
  struct PRLL20
  : public reg< uint32_t, base_addr + 0x348, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH21
   *
   * (derived from: PRLH0)
   */
  struct PRLH21
  : public reg< uint32_t, base_addr + 0x34d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL21
   *
   * (derived from: PRLL0)
   */
  struct PRLL21
  : public reg< uint32_t, base_addr + 0x34c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH22
   *
   * (derived from: PRLH0)
   */
  struct PRLH22
  : public reg< uint32_t, base_addr + 0x351, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL22
   *
   * (derived from: PRLL0)
   */
  struct PRLL22
  : public reg< uint32_t, base_addr + 0x350, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLH23
   *
   * (derived from: PRLH0)
   */
  struct PRLH23
  : public reg< uint32_t, base_addr + 0x355, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PRLL23
   *
   * (derived from: PRLL0)
   */
  struct PRLL23
  : public reg< uint32_t, base_addr + 0x354, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * register GATEC8
   */
  struct GATEC8
  : public reg< uint8_t, base_addr + 0x298, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x298, rw, 0x00 >;

    using STRG10  = regbits< type,  5,  1 >;  /**< bitfield STRG10  */
    using EDGE10  = regbits< type,  4,  1 >;  /**< bitfield EDGE10  */
    using STRG8   = regbits< type,  1,  1 >;  /**< bitfield STRG8   */
    using EDGE8   = regbits< type,  0,  1 >;  /**< bitfield EDGE8   */
  };

  /**
   * register GATEC12
   */
  struct GATEC12
  : public reg< uint8_t, base_addr + 0x2d8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2d8, rw, 0x00 >;

    using STRG14  = regbits< type,  5,  1 >;  /**< bitfield STRG14  */
    using EDGE14  = regbits< type,  4,  1 >;  /**< bitfield EDGE14  */
    using STRG12  = regbits< type,  1,  1 >;  /**< bitfield STRG12  */
    using EDGE12  = regbits< type,  0,  1 >;  /**< bitfield EDGE12  */
  };

  /**
   * register GATEC16
   */
  struct GATEC16
  : public reg< uint8_t, base_addr + 0x318, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x318, rw, 0x00 >;

    using STRG18  = regbits< type,  5,  1 >;  /**< bitfield STRG18  */
    using EDGE18  = regbits< type,  4,  1 >;  /**< bitfield EDGE18  */
    using STRG16  = regbits< type,  1,  1 >;  /**< bitfield STRG16  */
    using EDGE16  = regbits< type,  0,  1 >;  /**< bitfield EDGE16  */
  };

  /**
   * register GATEC20
   */
  struct GATEC20
  : public reg< uint8_t, base_addr + 0x358, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x358, rw, 0x00 >;

    using STRG22  = regbits< type,  5,  1 >;  /**< bitfield STRG22  */
    using EDGE22  = regbits< type,  4,  1 >;  /**< bitfield EDGE22  */
    using STRG20  = regbits< type,  1,  1 >;  /**< bitfield STRG20  */
    using EDGE20  = regbits< type,  0,  1 >;  /**< bitfield EDGE20  */
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
