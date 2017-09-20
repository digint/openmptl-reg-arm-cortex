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
//  Import from CMSIS-SVD: "Fujitsu/MB9AFAAxN.svd"
//
//  name: MB9AFAAxN
//  version: 1.1
//  description: MB9AFAAxN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LCDC_HPP_INCLUDED
#define ARCH_REG_LCDC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * LCD Controller
 */
struct LCDC
{
  static constexpr reg_addr_t base_addr = 0x40032000;

  /**
   * LCDC Control Register 1
   */
  struct LCDCC1
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using LCDEN  = regbits< type,  6,  1 >;  /**< Timer mode operation enable bit             */
    using VSEL   = regbits< type,  5,  1 >;  /**< LCD drive power control bit                 */
    using MS     = regbits< type,  2,  3 >;  /**< LCD controller display mode selection bits  */
  };

  /**
   * LCDC Control Register 2
   */
  struct LCDCC2
  : public reg< uint8_t, base_addr + 0x1, rw, 0x14 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x14 >;

    using RSEL    = regbits< type,  5,  1 >;  /**< Divider resistor value selection bit  */
    using BLS8    = regbits< type,  4,  1 >;  /**< 8 COM mode bias selection bit         */
    using INV     = regbits< type,  3,  1 >;  /**< Reverse display control bit           */
    using BK      = regbits< type,  2,  1 >;  /**< Blank display control bit             */
    using LCDIEN  = regbits< type,  1,  1 >;  /**< Interrupt enable bit                  */
    using LCDIF   = regbits< type,  0,  1 >;  /**< Interrupt request detection bit       */
  };

  /**
   * LCDC Control Register 3
   */
  struct LCDCC3
  : public reg< uint8_t, base_addr + 0x2, rw, 0x3E >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0x3E >;

    using PICTL  = regbits< type,  7,  1 >;  /**< I/O port input control bit    */
    using BLSEL  = regbits< type,  6,  1 >;  /**< Blink interval selection bit  */
    using VE4    = regbits< type,  5,  1 >;  /**< VV4 selection bit             */
    using VE3    = regbits< type,  4,  1 >;  /**< VV3 selection bit             */
    using VE2    = regbits< type,  3,  1 >;  /**< VV2 selection bit             */
    using VE1    = regbits< type,  2,  1 >;  /**< VV1 selection bit             */
    using VE0    = regbits< type,  1,  1 >;  /**< VV0 selection bit             */
  };

  /**
   * LCDC Clock Prescaler Register
   */
  struct LCDC_PSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using CLKSEL  = regbits< type, 22,  1 >;  /**< Source clock selection bit             */
    using CLKDIV  = regbits< type,  0, 22 >;  /**< LCDC clock division ratio setting bit  */
  };

  /**
   * LCDC COM Output Enable Register
   */
  struct LCDC_COMEN
  : public reg< uint8_t, base_addr + 0x8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x00 >;

    using COM7  = regbits< type,  7,  1 >;  /**< Dual purpose COM/SEG port control bits  */
    using COM6  = regbits< type,  6,  1 >;  /**< Dual purpose COM/SEG port control bits  */
    using COM5  = regbits< type,  5,  1 >;  /**< Dual purpose COM/SEG port control bits  */
    using COM4  = regbits< type,  4,  1 >;  /**< Dual purpose COM/SEG port control bits  */
    using COM3  = regbits< type,  3,  1 >;  /**< Dual purpose COM port control bit       */
    using COM2  = regbits< type,  2,  1 >;  /**< Dual purpose COM port control bit       */
    using COM1  = regbits< type,  1,  1 >;  /**< Dual purpose COM port control bit       */
    using COM0  = regbits< type,  0,  1 >;  /**< Dual purpose COM port control bit       */
  };

  /**
   * LCDC SEG Output Enable Register 1
   */
  struct LCDC_SEGEN1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using SEG31  = regbits< type, 31,  1 >;  /**< Segment 31  */
    using SEG30  = regbits< type, 30,  1 >;  /**< Segment 30  */
    using SEG29  = regbits< type, 29,  1 >;  /**< Segment 29  */
    using SEG28  = regbits< type, 28,  1 >;  /**< Segment 28  */
    using SEG27  = regbits< type, 27,  1 >;  /**< Segment 27  */
    using SEG26  = regbits< type, 26,  1 >;  /**< Segment 26  */
    using SEG25  = regbits< type, 25,  1 >;  /**< Segment 25  */
    using SEG24  = regbits< type, 24,  1 >;  /**< Segment 24  */
    using SEG23  = regbits< type, 23,  1 >;  /**< Segment 23  */
    using SEG22  = regbits< type, 22,  1 >;  /**< Segment 22  */
    using SEG21  = regbits< type, 21,  1 >;  /**< Segment 21  */
    using SEG20  = regbits< type, 20,  1 >;  /**< Segment 20  */
    using SEG19  = regbits< type, 19,  1 >;  /**< Segment 19  */
    using SEG18  = regbits< type, 18,  1 >;  /**< Segment 18  */
    using SEG17  = regbits< type, 17,  1 >;  /**< Segment 17  */
    using SEG16  = regbits< type, 16,  1 >;  /**< Segment 16  */
    using SEG15  = regbits< type, 15,  1 >;  /**< Segment 15  */
    using SEG14  = regbits< type, 14,  1 >;  /**< Segment 14  */
    using SEG13  = regbits< type, 13,  1 >;  /**< Segment 13  */
    using SEG12  = regbits< type, 12,  1 >;  /**< Segment 12  */
    using SEG11  = regbits< type, 11,  1 >;  /**< Segment 11  */
    using SEG10  = regbits< type, 10,  1 >;  /**< Segment 10  */
    using SEG09  = regbits< type,  9,  1 >;  /**< Segment 9   */
    using SEG08  = regbits< type,  8,  1 >;  /**< Segment 8   */
    using SEG07  = regbits< type,  7,  1 >;  /**< Segment 7   */
    using SEG06  = regbits< type,  6,  1 >;  /**< Segment 6   */
    using SEG05  = regbits< type,  5,  1 >;  /**< Segment 5   */
    using SEG04  = regbits< type,  4,  1 >;  /**< Segment 4   */
    using SEG03  = regbits< type,  3,  1 >;  /**< Segment 3   */
    using SEG02  = regbits< type,  2,  1 >;  /**< Segment 2   */
    using SEG01  = regbits< type,  1,  1 >;  /**< Segment 1   */
    using SEG00  = regbits< type,  0,  1 >;  /**< Segment 0   */
  };

  /**
   * LCDC SEG Output Enable Register 2
   */
  struct LCDC_SEGEN2
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using SEG39  = regbits< type,  7,  1 >;  /**< Segment 39  */
    using SEG38  = regbits< type,  6,  1 >;  /**< Segment 38  */
    using SEG37  = regbits< type,  5,  1 >;  /**< Segment 37  */
    using SEG36  = regbits< type,  4,  1 >;  /**< Segment 36  */
    using SEG35  = regbits< type,  3,  1 >;  /**< Segment 35  */
    using SEG34  = regbits< type,  2,  1 >;  /**< Segment 34  */
    using SEG33  = regbits< type,  1,  1 >;  /**< Segment 33  */
    using SEG32  = regbits< type,  0,  1 >;  /**< Segment 32  */
  };

  /**
   * LCDC Blink Setting Register
   */
  struct LCDC_BLINK
  : public reg< uint16_t, base_addr + 0x14, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0x0000 >;

    using BLD15  = regbits< type, 15,  1 >;  /**< Blink operation control bit 15  */
    using BLD14  = regbits< type, 14,  1 >;  /**< Blink operation control bit 14  */
    using BLD13  = regbits< type, 13,  1 >;  /**< Blink operation control bit 13  */
    using BLD12  = regbits< type, 12,  1 >;  /**< Blink operation control bit 12  */
    using BLD11  = regbits< type, 11,  1 >;  /**< Blink operation control bit 11  */
    using BLD10  = regbits< type, 10,  1 >;  /**< Blink operation control bit 10  */
    using BLD09  = regbits< type,  9,  1 >;  /**< Blink operation control bit 9   */
    using BLD08  = regbits< type,  8,  1 >;  /**< Blink operation control bit 8   */
    using BLD07  = regbits< type,  7,  1 >;  /**< Blink operation control bit 7   */
    using BLD06  = regbits< type,  6,  1 >;  /**< Blink operation control bit 6   */
    using BLD05  = regbits< type,  5,  1 >;  /**< Blink operation control bit 5   */
    using BLD04  = regbits< type,  4,  1 >;  /**< Blink operation control bit 4   */
    using BLD03  = regbits< type,  3,  1 >;  /**< Blink operation control bit 3   */
    using BLD02  = regbits< type,  2,  1 >;  /**< Blink operation control bit 2   */
    using BLD01  = regbits< type,  1,  1 >;  /**< Blink operation control bit 1   */
    using BLD00  = regbits< type,  0,  1 >;  /**< Blink operation control bit 0   */
  };

  /**
   * Display Data Memory Register 00
   */
  struct LCDRAM00
  : public reg< uint8_t, base_addr + 0x1c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 00  */
  };

  /**
   * Display Data Memory Register 01
   */
  struct LCDRAM01
  : public reg< uint8_t, base_addr + 0x1d, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1d, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 01  */
  };

  /**
   * Display Data Memory Register 02
   */
  struct LCDRAM02
  : public reg< uint8_t, base_addr + 0x1e, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1e, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 02  */
  };

  /**
   * Display Data Memory Register 03
   */
  struct LCDRAM03
  : public reg< uint8_t, base_addr + 0x1f, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1f, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 03  */
  };

  /**
   * Display Data Memory Register 04
   */
  struct LCDRAM04
  : public reg< uint8_t, base_addr + 0x20, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 04  */
  };

  /**
   * Display Data Memory Register 05
   */
  struct LCDRAM05
  : public reg< uint8_t, base_addr + 0x21, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x21, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 05  */
  };

  /**
   * Display Data Memory Register 06
   */
  struct LCDRAM06
  : public reg< uint8_t, base_addr + 0x22, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x22, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 06  */
  };

  /**
   * Display Data Memory Register 07
   */
  struct LCDRAM07
  : public reg< uint8_t, base_addr + 0x23, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x23, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 07  */
  };

  /**
   * Display Data Memory Register 08
   */
  struct LCDRAM08
  : public reg< uint8_t, base_addr + 0x24, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 08  */
  };

  /**
   * Display Data Memory Register 09
   */
  struct LCDRAM09
  : public reg< uint8_t, base_addr + 0x25, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x25, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 09  */
  };

  /**
   * Display Data Memory Register 10
   */
  struct LCDRAM10
  : public reg< uint8_t, base_addr + 0x26, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x26, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 10  */
  };

  /**
   * Display Data Memory Register 11
   */
  struct LCDRAM11
  : public reg< uint8_t, base_addr + 0x27, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x27, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 11  */
  };

  /**
   * Display Data Memory Register 12
   */
  struct LCDRAM12
  : public reg< uint8_t, base_addr + 0x28, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 12  */
  };

  /**
   * Display Data Memory Register 13
   */
  struct LCDRAM13
  : public reg< uint8_t, base_addr + 0x29, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x29, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 13  */
  };

  /**
   * Display Data Memory Register 14
   */
  struct LCDRAM14
  : public reg< uint8_t, base_addr + 0x2a, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2a, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 14  */
  };

  /**
   * Display Data Memory Register 15
   */
  struct LCDRAM15
  : public reg< uint8_t, base_addr + 0x2b, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2b, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 15  */
  };

  /**
   * Display Data Memory Register 16
   */
  struct LCDRAM16
  : public reg< uint8_t, base_addr + 0x2c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2c, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 16  */
  };

  /**
   * Display Data Memory Register 17
   */
  struct LCDRAM17
  : public reg< uint8_t, base_addr + 0x2d, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2d, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 17  */
  };

  /**
   * Display Data Memory Register 18
   */
  struct LCDRAM18
  : public reg< uint8_t, base_addr + 0x2e, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2e, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 18  */
  };

  /**
   * Display Data Memory Register 19
   */
  struct LCDRAM19
  : public reg< uint8_t, base_addr + 0x2f, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2f, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 19  */
  };

  /**
   * Display Data Memory Register 20
   */
  struct LCDRAM20
  : public reg< uint8_t, base_addr + 0x30, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 20  */
  };

  /**
   * Display Data Memory Register 21
   */
  struct LCDRAM21
  : public reg< uint8_t, base_addr + 0x31, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x31, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 21  */
  };

  /**
   * Display Data Memory Register 22
   */
  struct LCDRAM22
  : public reg< uint8_t, base_addr + 0x32, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x32, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 22  */
  };

  /**
   * Display Data Memory Register 23
   */
  struct LCDRAM23
  : public reg< uint8_t, base_addr + 0x33, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x33, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 23  */
  };

  /**
   * Display Data Memory Register 24
   */
  struct LCDRAM24
  : public reg< uint8_t, base_addr + 0x34, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 24  */
  };

  /**
   * Display Data Memory Register 25
   */
  struct LCDRAM25
  : public reg< uint8_t, base_addr + 0x35, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x35, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 25  */
  };

  /**
   * Display Data Memory Register 26
   */
  struct LCDRAM26
  : public reg< uint8_t, base_addr + 0x36, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x36, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 26  */
  };

  /**
   * Display Data Memory Register 27
   */
  struct LCDRAM27
  : public reg< uint8_t, base_addr + 0x37, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x37, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 27  */
  };

  /**
   * Display Data Memory Register 28
   */
  struct LCDRAM28
  : public reg< uint8_t, base_addr + 0x38, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x38, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 28  */
  };

  /**
   * Display Data Memory Register 29
   */
  struct LCDRAM29
  : public reg< uint8_t, base_addr + 0x39, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x39, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 29  */
  };

  /**
   * Display Data Memory Register 30
   */
  struct LCDRAM30
  : public reg< uint8_t, base_addr + 0x3a, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3a, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 30  */
  };

  /**
   * Display Data Memory Register 31
   */
  struct LCDRAM31
  : public reg< uint8_t, base_addr + 0x3b, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3b, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 31  */
  };

  /**
   * Display Data Memory Register 32
   */
  struct LCDRAM32
  : public reg< uint8_t, base_addr + 0x3c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3c, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 32  */
  };

  /**
   * Display Data Memory Register 33
   */
  struct LCDRAM33
  : public reg< uint8_t, base_addr + 0x3d, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3d, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 33  */
  };

  /**
   * Display Data Memory Register 34
   */
  struct LCDRAM34
  : public reg< uint8_t, base_addr + 0x3e, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3e, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 34  */
  };

  /**
   * Display Data Memory Register 35
   */
  struct LCDRAM35
  : public reg< uint8_t, base_addr + 0x3f, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3f, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 35  */
  };

  /**
   * Display Data Memory Register 36
   */
  struct LCDRAM36
  : public reg< uint8_t, base_addr + 0x40, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x40, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 36  */
  };

  /**
   * Display Data Memory Register 37
   */
  struct LCDRAM37
  : public reg< uint8_t, base_addr + 0x41, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x41, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 37  */
  };

  /**
   * Display Data Memory Register 38
   */
  struct LCDRAM38
  : public reg< uint8_t, base_addr + 0x42, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x42, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 38  */
  };

  /**
   * Display Data Memory Register 39
   */
  struct LCDRAM39
  : public reg< uint8_t, base_addr + 0x43, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x43, rw, 0x00 >;

    using LCDRAM  = regbits< type,  0,  8 >;  /**< Display Data 39  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LCDC_HPP_INCLUDED
