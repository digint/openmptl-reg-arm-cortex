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
//  Import from CMSIS-SVD: "Fujitsu/MB9AFA3xN.svd"
//
//  name: MB9AFA3xN
//  version: 1.8
//  description: MB9AFA3xN
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
   * PPG Start Register 0
   */
  struct TRG
  : public reg< uint16_t, base_addr + 0x100, rw, 0x00 >
  {
    using type = reg< uint16_t, base_addr + 0x100, rw, 0x00 >;

    using PEN07  = regbits< type,  7,  1 >;  /**< PPG7 Start Trigger bit  */
    using PEN06  = regbits< type,  6,  1 >;  /**< PPG6 Start Trigger bit  */
    using PEN05  = regbits< type,  5,  1 >;  /**< PPG5 Start Trigger bit  */
    using PEN04  = regbits< type,  4,  1 >;  /**< PPG4 Start Trigger bit  */
    using PEN03  = regbits< type,  3,  1 >;  /**< PPG3 Start Trigger bit  */
    using PEN02  = regbits< type,  2,  1 >;  /**< PPG2 Start Trigger bit  */
    using PEN01  = regbits< type,  1,  1 >;  /**< PPG1 Start Trigger bit  */
    using PEN00  = regbits< type,  0,  1 >;  /**< PPG0 Start Trigger bit  */
  };

  /**
   * Output Reverse Register 0
   */
  struct REVC
  : public reg< uint16_t, base_addr + 0x104, rw, 0x00 >
  {
    using type = reg< uint16_t, base_addr + 0x104, rw, 0x00 >;

    using REV07  = regbits< type,  7,  1 >;  /**< PPG7 Output Reverse Enable bit  */
    using REV06  = regbits< type,  6,  1 >;  /**< PPG6 Output Reverse Enable bit  */
    using REV05  = regbits< type,  5,  1 >;  /**< PPG5 Output Reverse Enable bit  */
    using REV04  = regbits< type,  4,  1 >;  /**< PPG4 Output Reverse Enable bit  */
    using REV03  = regbits< type,  3,  1 >;  /**< PPG3 Output Reverse Enable bit  */
    using REV02  = regbits< type,  2,  1 >;  /**< PPG2 Output Reverse Enable bit  */
    using REV01  = regbits< type,  1,  1 >;  /**< PPG1 Output Reverse Enable bit  */
    using REV00  = regbits< type,  0,  1 >;  /**< PPG0 Output Reverse Enable bit  */
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
   * IGBT Mode Control Register
   */
  struct IGBTC
  : public reg< uint8_t, base_addr + 0x380, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x380, rw, 0x00 >;

    using IGATIH   = regbits< type,  7,  1 >;  /**< Stop prohibition mode selection in output active bit  */
    using IGNFW    = regbits< type,  4,  3 >;  /**< Noise filter width selection bit                      */
    using IGOSEL   = regbits< type,  2,  2 >;  /**< Output level selection bit                            */
    using IGTRGLV  = regbits< type,  1,  1 >;  /**< Trigger input level selection bit                     */
    using IGBTMD   = regbits< type,  0,  1 >;  /**< IGBT mode selection bit                               */
  };
};
} // namespace mptl

#endif // ARCH_REG_MFT_PPG_HPP_INCLUDED
