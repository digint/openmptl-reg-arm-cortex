/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Fujitsu/MB9BF21xT.svd"
//
//  name: MB9BF21xT
//  version: 1.8
//  description: MB9BF21xT
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
 * PPG Configuration
 */
struct MFT_PPG
{
  static constexpr reg_addr_t base_addr = 0x40024000;

  /**
   * PPG Start Trigger Control Register 0
   */
  struct TTCR0
  : public reg< uint16_t, base_addr + 0x0, rw, 0xF000 >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0xF000 >;

    using TRG6O  = regbits< type, 15,  1 >;  /**< PPG6 trigger stop bit                                        */
    using TRG4O  = regbits< type, 14,  1 >;  /**< PPG4 trigger stop bit                                        */
    using TRG2O  = regbits< type, 13,  1 >;  /**< PPG2 trigger stop bit                                        */
    using TRG0O  = regbits< type, 12,  1 >;  /**< PPG0 trigger stop bit                                        */
    using CS0    = regbits< type, 10,  2 >;  /**< 8-bit UP counter clock select bits for comparison            */
    using MONI0  = regbits< type,  9,  1 >;  /**< 8-bit UP counter operation state monitor bit for comparison  */
    using STR0   = regbits< type,  8,  1 >;  /**< 8-bit UP counter operation enable bit for comparison         */
  };

  /**
   * PPG Start Trigger Control Register 1
   */
  struct TTCR1
  : public reg< uint16_t, base_addr + 0x20, rw, 0xF000 >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0xF000 >;

    using TRG7O  = regbits< type, 15,  1 >;  /**< PPG7 trigger stop bit                                        */
    using TRG5O  = regbits< type, 14,  1 >;  /**< PPG5 trigger stop bit                                        */
    using TRG3O  = regbits< type, 13,  1 >;  /**< PPG3 trigger stop bit                                        */
    using TRG1O  = regbits< type, 12,  1 >;  /**< PPG1 trigger stop bit                                        */
    using CS1    = regbits< type, 10,  2 >;  /**< 8-bit UP counter clock select bits for comparison            */
    using MONI1  = regbits< type,  9,  1 >;  /**< 8-bit UP counter operation state monitor bit for comparison  */
    using STR1   = regbits< type,  8,  1 >;  /**< 8-bit UP counter operation enable bit for comparison         */
  };

  /**
   * PPG Start Trigger Control Register 2
   */
  struct TTCR2
  : public reg< uint16_t, base_addr + 0x40, rw, 0xF000 >
  {
    using type = reg< uint16_t, base_addr + 0x40, rw, 0xF000 >;

    using TRG22O  = regbits< type, 15,  1 >;  /**< PPG22 trigger stop bit                                       */
    using TRG20O  = regbits< type, 14,  1 >;  /**< PPG20 trigger stop bit                                       */
    using TRG18O  = regbits< type, 13,  1 >;  /**< PPG18 trigger stop bit                                       */
    using TRG16O  = regbits< type, 12,  1 >;  /**< PPG16 trigger stop bit                                       */
    using CS2     = regbits< type, 10,  2 >;  /**< 8-bit UP counter clock select bits for comparison            */
    using MONI2   = regbits< type,  9,  1 >;  /**< 8-bit UP counter operation state monitor bit for comparison  */
    using STR2    = regbits< type,  8,  1 >;  /**< 8-bit UP counter operation enable bit for comparison         */
  };

  /**
   * PPG Compare Register 0
   */
  struct COMP0
  : public reg< uint16_t, base_addr + 0x08, rw, 0x0000 >
  {
  };

  /**
   * PPG Compare Register 2
   */
  struct COMP2
  : public reg< uint8_t, base_addr + 0x0c, rw, 0x00 >
  {
  };

  /**
   * PPG Compare Register 4
   *
   * (derived from: COMP0)
   */
  struct COMP4
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Compare Register 6
   *
   * (derived from: COMP2)
   */
  struct COMP6
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Compare Register 1
   *
   * (derived from: COMP0)
   */
  struct COMP1
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Compare Register 3
   *
   * (derived from: COMP2)
   */
  struct COMP3
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Compare Register 5
   *
   * (derived from: COMP0)
   */
  struct COMP5
  : public reg< uint32_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Compare Register 7
   *
   * (derived from: COMP2)
   */
  struct COMP7
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Compare Register 8
   *
   * (derived from: COMP0)
   */
  struct COMP8
  : public reg< uint32_t, base_addr + 0x48, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Compare Register 10
   *
   * (derived from: COMP2)
   */
  struct COMP10
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Compare Register 12
   *
   * (derived from: COMP0)
   */
  struct COMP12
  : public reg< uint32_t, base_addr + 0x50, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Compare Register 14
   *
   * (derived from: COMP2)
   */
  struct COMP14
  : public reg< uint32_t, base_addr + 0x54, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Start Register 0
   */
  struct TRG
  : public reg< uint16_t, base_addr + 0x100, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x100, rw, 0x0000 >;

    using PEN15  = regbits< type, 15,  1 >;  /**< PPG15 Start Trigger bit  */
    using PEN14  = regbits< type, 14,  1 >;  /**< PPG14 Start Trigger bit  */
    using PEN13  = regbits< type, 13,  1 >;  /**< PPG13 Start Trigger bit  */
    using PEN12  = regbits< type, 12,  1 >;  /**< PPG12 Start Trigger bit  */
    using PEN11  = regbits< type, 11,  1 >;  /**< PPG11 Start Trigger bit  */
    using PEN10  = regbits< type, 10,  1 >;  /**< PPG10 Start Trigger bit  */
    using PEN09  = regbits< type,  9,  1 >;  /**< PPG9 Start Trigger bit   */
    using PEN08  = regbits< type,  8,  1 >;  /**< PPG8 Start Trigger bit   */
    using PEN07  = regbits< type,  7,  1 >;  /**< PPG7 Start Trigger bit   */
    using PEN06  = regbits< type,  6,  1 >;  /**< PPG6 Start Trigger bit   */
    using PEN05  = regbits< type,  5,  1 >;  /**< PPG5 Start Trigger bit   */
    using PEN04  = regbits< type,  4,  1 >;  /**< PPG4 Start Trigger bit   */
    using PEN03  = regbits< type,  3,  1 >;  /**< PPG3 Start Trigger bit   */
    using PEN02  = regbits< type,  2,  1 >;  /**< PPG2 Start Trigger bit   */
    using PEN01  = regbits< type,  1,  1 >;  /**< PPG1 Start Trigger bit   */
    using PEN00  = regbits< type,  0,  1 >;  /**< PPG0 Start Trigger bit   */
  };

  /**
   * PPG Start Register 1
   */
  struct TRG1
  : public reg< uint16_t, base_addr + 0x140, rw, 0x00 >
  {
    using type = reg< uint16_t, base_addr + 0x140, rw, 0x00 >;

    using PEN23  = regbits< type,  7,  1 >;  /**< PPG23 Start Trigger bit  */
    using PEN22  = regbits< type,  6,  1 >;  /**< PPG22 Start Trigger bit  */
    using PEN21  = regbits< type,  5,  1 >;  /**< PPG21 Start Trigger bit  */
    using PEN20  = regbits< type,  4,  1 >;  /**< PPG20 Start Trigger bit  */
    using PEN19  = regbits< type,  3,  1 >;  /**< PPG19 Start Trigger bit  */
    using PEN18  = regbits< type,  2,  1 >;  /**< PPG18 Start Trigger bit  */
    using PEN17  = regbits< type,  1,  1 >;  /**< PPG17 Start Trigger bit  */
    using PEN16  = regbits< type,  0,  1 >;  /**< PPG16 Start Trigger bit  */
  };

  /**
   * Output Reverse Register 0
   */
  struct REVC
  : public reg< uint16_t, base_addr + 0x104, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x104, rw, 0x0000 >;

    using REV15  = regbits< type, 15,  1 >;  /**< PPG15 Output Reverse Enable bit  */
    using REV14  = regbits< type, 14,  1 >;  /**< PPG14 Output Reverse Enable bit  */
    using REV13  = regbits< type, 13,  1 >;  /**< PPG13 Output Reverse Enable bit  */
    using REV12  = regbits< type, 12,  1 >;  /**< PPG12 Output Reverse Enable bit  */
    using REV11  = regbits< type, 11,  1 >;  /**< PPG11 Output Reverse Enable bit  */
    using REV10  = regbits< type, 10,  1 >;  /**< PPG10 Output Reverse Enable bit  */
    using REV09  = regbits< type,  9,  1 >;  /**< PPG9 Output Reverse Enable bit   */
    using REV08  = regbits< type,  8,  1 >;  /**< PPG8 Output Reverse Enable bit   */
    using REV07  = regbits< type,  7,  1 >;  /**< PPG7 Output Reverse Enable bit   */
    using REV06  = regbits< type,  6,  1 >;  /**< PPG6 Output Reverse Enable bit   */
    using REV05  = regbits< type,  5,  1 >;  /**< PPG5 Output Reverse Enable bit   */
    using REV04  = regbits< type,  4,  1 >;  /**< PPG4 Output Reverse Enable bit   */
    using REV03  = regbits< type,  3,  1 >;  /**< PPG3 Output Reverse Enable bit   */
    using REV02  = regbits< type,  2,  1 >;  /**< PPG2 Output Reverse Enable bit   */
    using REV01  = regbits< type,  1,  1 >;  /**< PPG1 Output Reverse Enable bit   */
    using REV00  = regbits< type,  0,  1 >;  /**< PPG0 Output Reverse Enable bit   */
  };

  /**
   * Output Reverse Register 1
   */
  struct REVC1
  : public reg< uint16_t, base_addr + 0x144, rw, 0x00 >
  {
    using type = reg< uint16_t, base_addr + 0x144, rw, 0x00 >;

    using REV23  = regbits< type,  7,  1 >;  /**< PPG23 Output Reverse Enable bit  */
    using REV22  = regbits< type,  6,  1 >;  /**< PPG22 Output Reverse Enable bit  */
    using REV21  = regbits< type,  5,  1 >;  /**< PPG21 Output Reverse Enable bit  */
    using REV20  = regbits< type,  4,  1 >;  /**< PPG20 Output Reverse Enable bit  */
    using REV19  = regbits< type,  3,  1 >;  /**< PPG19 Output Reverse Enable bit  */
    using REV18  = regbits< type,  2,  1 >;  /**< PPG18 Output Reverse Enable bit  */
    using REV17  = regbits< type,  1,  1 >;  /**< PPG17 Output Reverse Enable bit  */
    using REV16  = regbits< type,  0,  1 >;  /**< PPG16 Output Reverse Enable bit  */
  };

  /**
   * PPG Operation Mode Control Register 0
   */
  struct PPGC0
  : public reg< uint8_t, base_addr + 0x201, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x201, rw, 0x00 >;

    using PIE   = regbits< type,  7,  1 >;  /**< PPG Interrupt Enable bit                      */
    using PUF   = regbits< type,  6,  1 >;  /**< PPG Counter Underflow bit                     */
    using INTM  = regbits< type,  5,  1 >;  /**< Interrupt Mode Select bit                     */
    using PCS   = regbits< type,  3,  2 >;  /**< PPG DOWN Counter Operation Clock Select bits  */
    using MD    = regbits< type,  1,  2 >;  /**< PPG Operation Mode Set bits                   */
    using TTRG  = regbits< type,  0,  1 >;  /**< PPG start trigger select bit                  */
  };

  /**
   * PPG Operation Mode Control Register 1
   *
   * (derived from: PPGC0)
   */
  struct PPGC1
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 2
   *
   * (derived from: PPGC0)
   */
  struct PPGC2
  : public reg< uint32_t, base_addr + 0x205, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 3
   *
   * (derived from: PPGC0)
   */
  struct PPGC3
  : public reg< uint32_t, base_addr + 0x204, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 4
   *
   * (derived from: PPGC0)
   */
  struct PPGC4
  : public reg< uint32_t, base_addr + 0x241, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 5
   *
   * (derived from: PPGC0)
   */
  struct PPGC5
  : public reg< uint32_t, base_addr + 0x240, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 6
   *
   * (derived from: PPGC0)
   */
  struct PPGC6
  : public reg< uint32_t, base_addr + 0x245, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 7
   *
   * (derived from: PPGC0)
   */
  struct PPGC7
  : public reg< uint32_t, base_addr + 0x244, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 8
   *
   * (derived from: PPGC0)
   */
  struct PPGC8
  : public reg< uint32_t, base_addr + 0x281, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 9
   *
   * (derived from: PPGC0)
   */
  struct PPGC9
  : public reg< uint32_t, base_addr + 0x280, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 10
   *
   * (derived from: PPGC0)
   */
  struct PPGC10
  : public reg< uint32_t, base_addr + 0x285, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 11
   *
   * (derived from: PPGC0)
   */
  struct PPGC11
  : public reg< uint32_t, base_addr + 0x284, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 12
   *
   * (derived from: PPGC0)
   */
  struct PPGC12
  : public reg< uint32_t, base_addr + 0x2c1, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 13
   *
   * (derived from: PPGC0)
   */
  struct PPGC13
  : public reg< uint32_t, base_addr + 0x2c0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 14
   *
   * (derived from: PPGC0)
   */
  struct PPGC14
  : public reg< uint32_t, base_addr + 0x2c5, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 15
   *
   * (derived from: PPGC0)
   */
  struct PPGC15
  : public reg< uint32_t, base_addr + 0x2c4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 16
   *
   * (derived from: PPGC0)
   */
  struct PPGC16
  : public reg< uint32_t, base_addr + 0x301, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 17
   *
   * (derived from: PPGC0)
   */
  struct PPGC17
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 18
   *
   * (derived from: PPGC0)
   */
  struct PPGC18
  : public reg< uint32_t, base_addr + 0x305, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 19
   *
   * (derived from: PPGC0)
   */
  struct PPGC19
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 20
   *
   * (derived from: PPGC0)
   */
  struct PPGC20
  : public reg< uint32_t, base_addr + 0x341, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 21
   *
   * (derived from: PPGC0)
   */
  struct PPGC21
  : public reg< uint32_t, base_addr + 0x340, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 22
   *
   * (derived from: PPGC0)
   */
  struct PPGC22
  : public reg< uint32_t, base_addr + 0x345, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Operation Mode Control Register 23
   *
   * (derived from: PPGC0)
   */
  struct PPGC23
  : public reg< uint32_t, base_addr + 0x344, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG0 Reload Registers High
   */
  struct PRLH0
  : public reg< uint8_t, base_addr + 0x209, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x209, rw, 0x00 >;

    using PRLH  = regbits< type,  0,  8 >;  /**< Reload Registers High  */
  };

  /**
   * PPG0 Reload Registers Low
   */
  struct PRLL0
  : public reg< uint8_t, base_addr + 0x208, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x208, rw, 0x00 >;

    using PRLL  = regbits< type,  0,  8 >;  /**< Reload Registers Low  */
  };

  /**
   * PPG1 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH1
  : public reg< uint32_t, base_addr + 0x20d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG1 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL1
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG2 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH2
  : public reg< uint32_t, base_addr + 0x211, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG2 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL2
  : public reg< uint32_t, base_addr + 0x210, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG3 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH3
  : public reg< uint32_t, base_addr + 0x215, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG3 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL3
  : public reg< uint32_t, base_addr + 0x214, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG4 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH4
  : public reg< uint32_t, base_addr + 0x249, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG4 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL4
  : public reg< uint32_t, base_addr + 0x248, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG5 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH5
  : public reg< uint32_t, base_addr + 0x24d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG5 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL5
  : public reg< uint32_t, base_addr + 0x24c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG6 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH6
  : public reg< uint32_t, base_addr + 0x251, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG6 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL6
  : public reg< uint32_t, base_addr + 0x250, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG7 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH7
  : public reg< uint32_t, base_addr + 0x255, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG7 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL7
  : public reg< uint32_t, base_addr + 0x254, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG8 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH8
  : public reg< uint32_t, base_addr + 0x289, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG8 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL8
  : public reg< uint32_t, base_addr + 0x288, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG9 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH9
  : public reg< uint32_t, base_addr + 0x28d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG9 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL9
  : public reg< uint32_t, base_addr + 0x28c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG10 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH10
  : public reg< uint32_t, base_addr + 0x291, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG10 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL10
  : public reg< uint32_t, base_addr + 0x290, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG11 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH11
  : public reg< uint32_t, base_addr + 0x295, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG11 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL11
  : public reg< uint32_t, base_addr + 0x294, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG12 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH12
  : public reg< uint32_t, base_addr + 0x2c9, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG12 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL12
  : public reg< uint32_t, base_addr + 0x2c8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG13 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH13
  : public reg< uint32_t, base_addr + 0x2cd, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG13 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL13
  : public reg< uint32_t, base_addr + 0x2cc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG14 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH14
  : public reg< uint32_t, base_addr + 0x2d1, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG14 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL14
  : public reg< uint32_t, base_addr + 0x2d0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG15 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH15
  : public reg< uint32_t, base_addr + 0x2d5, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG15 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL15
  : public reg< uint32_t, base_addr + 0x2d4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG16 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH16
  : public reg< uint32_t, base_addr + 0x309, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG16 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL16
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG17 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH17
  : public reg< uint32_t, base_addr + 0x30d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG17 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL17
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG18 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH18
  : public reg< uint32_t, base_addr + 0x311, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG18 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL18
  : public reg< uint32_t, base_addr + 0x310, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG19 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH19
  : public reg< uint32_t, base_addr + 0x315, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG19 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL19
  : public reg< uint32_t, base_addr + 0x314, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG20 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH20
  : public reg< uint32_t, base_addr + 0x349, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG20 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL20
  : public reg< uint32_t, base_addr + 0x348, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG21 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH21
  : public reg< uint32_t, base_addr + 0x34d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG21 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL21
  : public reg< uint32_t, base_addr + 0x34c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG22 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH22
  : public reg< uint32_t, base_addr + 0x351, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG22 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL22
  : public reg< uint32_t, base_addr + 0x350, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG23 Reload Registers High
   *
   * (derived from: PRLH0)
   */
  struct PRLH23
  : public reg< uint32_t, base_addr + 0x355, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG23 Reload Registers Low
   *
   * (derived from: PRLL0)
   */
  struct PRLL23
  : public reg< uint32_t, base_addr + 0x354, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PPG Gate Function Control Registers 0
   */
  struct GATEC0
  : public reg< uint8_t, base_addr + 0x218, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x218, rw, 0x00 >;

    using STRG2  = regbits< type,  5,  1 >;  /**< Select a trigger for PPG2              */
    using EDGE2  = regbits< type,  4,  1 >;  /**< Select Start Effective Level for PPG2  */
    using STRG0  = regbits< type,  1,  1 >;  /**< Select a trigger for PPG0              */
    using EDGE0  = regbits< type,  0,  1 >;  /**< Select Start Effective Level for PPG0  */
  };

  /**
   * PPG Gate Function Control Registers 4
   */
  struct GATEC4
  : public reg< uint8_t, base_addr + 0x258, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x258, rw, 0x00 >;

    using STRG6  = regbits< type,  5,  1 >;  /**< Select a trigger for PPG6              */
    using EDGE6  = regbits< type,  4,  1 >;  /**< Select Start Effective Level for PPG6  */
    using STRG4  = regbits< type,  1,  1 >;  /**< Select a trigger for PPG4              */
    using EDGE4  = regbits< type,  0,  1 >;  /**< Select Start Effective Level for PPG4  */
  };

  /**
   * PPG Gate Function Control Registers 8
   */
  struct GATEC8
  : public reg< uint8_t, base_addr + 0x298, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x298, rw, 0x00 >;

    using STRG10  = regbits< type,  5,  1 >;  /**< Select a trigger for PPG10              */
    using EDGE10  = regbits< type,  4,  1 >;  /**< Select Start Effective Level for PPG10  */
    using STRG8   = regbits< type,  1,  1 >;  /**< Select a trigger for PPG8               */
    using EDGE8   = regbits< type,  0,  1 >;  /**< Select Start Effective Level for PPG8   */
  };

  /**
   * PPG Gate Function Control Registers 12
   */
  struct GATEC12
  : public reg< uint8_t, base_addr + 0x2d8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2d8, rw, 0x00 >;

    using STRG14  = regbits< type,  5,  1 >;  /**< Select a trigger for PPG14              */
    using EDGE14  = regbits< type,  4,  1 >;  /**< Select Start Effective Level for PPG14  */
    using STRG12  = regbits< type,  1,  1 >;  /**< Select a trigger for PPG12              */
    using EDGE12  = regbits< type,  0,  1 >;  /**< Select Start Effective Level for PPG12  */
  };

  /**
   * PPG Gate Function Control Registers 16
   */
  struct GATEC16
  : public reg< uint8_t, base_addr + 0x318, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x318, rw, 0x00 >;

    using STRG18  = regbits< type,  5,  1 >;  /**< Select a trigger for PPG18              */
    using EDGE18  = regbits< type,  4,  1 >;  /**< Select Start Effective Level for PPG18  */
    using STRG16  = regbits< type,  1,  1 >;  /**< Select a trigger for PPG16              */
    using EDGE16  = regbits< type,  0,  1 >;  /**< Select Start Effective Level for PPG16  */
  };

  /**
   * PPG Gate Function Control Registers 20
   */
  struct GATEC20
  : public reg< uint8_t, base_addr + 0x358, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x358, rw, 0x00 >;

    using STRG22  = regbits< type,  5,  1 >;  /**< Select a trigger for PPG22              */
    using EDGE22  = regbits< type,  4,  1 >;  /**< Select Start Effective Level for PPG22  */
    using STRG20  = regbits< type,  1,  1 >;  /**< Select a trigger for PPG20              */
    using EDGE20  = regbits< type,  0,  1 >;  /**< Select Start Effective Level for PPG20  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MFT_PPG_HPP_INCLUDED
