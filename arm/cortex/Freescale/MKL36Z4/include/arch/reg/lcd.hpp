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
//  Import from CMSIS-SVD: "Freescale/MKL36Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL36Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL36Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LCD_HPP_INCLUDED
#define ARCH_REG_LCD_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Segment Liquid Crystal Display
 */
struct LCD
{
  static constexpr reg_addr_t base_addr = 0x40053000;

  /**
   * LCD General Control Register
   */
  struct GCR
  : public reg< uint32_t, base_addr + 0, rw, 0x8300003 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x8300003 >;

    using DUTY       = regbits< type,  0,  3 >;  /**< LCD duty select                                */
    using LCLK       = regbits< type,  3,  3 >;  /**< LCD Clock Prescaler                            */
    using SOURCE     = regbits< type,  6,  1 >;  /**< LCD Clock Source Select                        */
    using LCDEN      = regbits< type,  7,  1 >;  /**< LCD Driver Enable                              */
    using LCDSTP     = regbits< type,  8,  1 >;  /**< LCD Stop                                       */
    using LCDDOZE    = regbits< type,  9,  1 >;  /**< LCD Doze enable                                */
    using FFR        = regbits< type, 10,  1 >;  /**< Fast Frame Rate Select                         */
    using ALTSOURCE  = regbits< type, 11,  1 >;  /**< Selects the alternate clock source             */
    using ALTDIV     = regbits< type, 12,  2 >;  /**< LCD AlternateClock Divider                     */
    using FDCIEN     = regbits< type, 14,  1 >;  /**< LCD Fault Detection Complete Interrupt Enable  */
    using PADSAFE    = regbits< type, 15,  1 >;  /**< Pad Safe State Enable                          */
    using VSUPPLY    = regbits< type, 17,  1 >;  /**< Voltage Supply Control                         */
    using LADJ       = regbits< type, 20,  2 >;  /**< Load Adjust                                    */
    using CPSEL      = regbits< type, 23,  1 >;  /**< Charge Pump or Resistor Bias Select            */
    using RVTRIM     = regbits< type, 24,  4 >;  /**< Regulated Voltage Trim                         */
    using RVEN       = regbits< type, 31,  1 >;  /**< Regulated Voltage Enable                       */
  };

  /**
   * LCD Auxiliary Register
   */
  struct AR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using BRATE  = regbits< type,  0,  3 >;  /**< Blink-rate configuration  */
    using BMODE  = regbits< type,  3,  1 >;  /**< Blink mode                */
    using BLANK  = regbits< type,  5,  1 >;  /**< Blank display mode        */
    using ALT    = regbits< type,  6,  1 >;  /**< Alternate display mode    */
    using BLINK  = regbits< type,  7,  1 >;  /**< Blink command             */
  };

  /**
   * LCD Fault Detect Control Register
   */
  struct FDCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using FDPINID  = regbits< type,  0,  6 >;  /**< Fault Detect Pin ID               */
    using FDBPEN   = regbits< type,  6,  1 >;  /**< Fault Detect Back Plane Enable    */
    using FDEN     = regbits< type,  7,  1 >;  /**< Fault Detect Enable               */
    using FDSWW    = regbits< type,  9,  3 >;  /**< Fault Detect Sample Window Width  */
    using FDPRS    = regbits< type, 12,  3 >;  /**< Fault Detect Clock Prescaler      */
  };

  /**
   * LCD Fault Detect Status Register
   */
  struct FDSR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using FDCNT  = regbits< type,  0,  8 >;  /**< Fault Detect Counter           */
    using FDCF   = regbits< type, 15,  1 >;  /**< Fault Detection Complete Flag  */
  };

  /**
   * LCD Pin Enable register
   */
  struct PEN%s
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using PEN  = regbits< type,  0, 32 >;  /**< LCD Pin Enable  */
  };

  /**
   * LCD Back Plane Enable register
   */
  struct BPEN%s
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using BPEN  = regbits< type,  0, 32 >;  /**< Back Plane Enable  */
  };

  /**
   * LCD Waveform register
   */
  struct WF3TO0
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using WF0  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P0 as described above for WF3.                                                                                                                                                */
    using WF1  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P1 as described above for WF3.                                                                                                                                                */
    using WF2  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P2 as described above for WF3.                                                                                                                                                */
    using WF3  = regbits< type, 24,  8 >;  /**< Segment-on front plane operation - Each bit turns on or off the segments associated with LCD_P3 in the following pattern: HGFEDCBA (most significant bit controls segment H and least significant bit controls segment A)  */
  };

  /**
   * LCD Waveform Register 0.
   */
  struct WF0
  : public reg< uint8_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0 >;

    using BPALCD0  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD0  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD0  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD0  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD0  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD0  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD0  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD0  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 1.
   */
  struct WF1
  : public reg< uint8_t, base_addr + 0x21, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x21, rw, 0 >;

    using BPALCD1  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD1  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD1  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD1  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD1  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD1  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD1  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD1  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 2.
   */
  struct WF2
  : public reg< uint8_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x22, rw, 0 >;

    using BPALCD2  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD2  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD2  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD2  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD2  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD2  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD2  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD2  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 3.
   */
  struct WF3
  : public reg< uint8_t, base_addr + 0x23, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x23, rw, 0 >;

    using BPALCD3  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD3  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD3  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD3  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD3  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD3  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD3  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD3  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF7TO4
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using WF4  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P4 as described above for WF3TO0[WF3].  */
    using WF5  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P5 as described above for WF3TO0[WF3].  */
    using WF6  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P6 as described above for WF3TO0[WF3].  */
    using WF7  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P7 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 4.
   */
  struct WF4
  : public reg< uint8_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0 >;

    using BPALCD4  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD4  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD4  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD4  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD4  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD4  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD4  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD4  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 5.
   */
  struct WF5
  : public reg< uint8_t, base_addr + 0x25, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x25, rw, 0 >;

    using BPALCD5  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD5  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD5  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD5  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD5  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD5  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD5  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD5  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 6.
   */
  struct WF6
  : public reg< uint8_t, base_addr + 0x26, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x26, rw, 0 >;

    using BPALCD6  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD6  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD6  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD6  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD6  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD6  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD6  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD6  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 7.
   */
  struct WF7
  : public reg< uint8_t, base_addr + 0x27, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x27, rw, 0 >;

    using BPALCD7  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD7  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD7  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD7  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD7  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD7  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD7  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD7  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF11TO8
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using WF8   = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P8 as described above for WF3TO0[WF3].   */
    using WF9   = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P9 as described above for WF3TO0[WF3].   */
    using WF10  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P10 as described above for WF3TO0[WF3].  */
    using WF11  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P11 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 8.
   */
  struct WF8
  : public reg< uint8_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0 >;

    using BPALCD8  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD8  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD8  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD8  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD8  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD8  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD8  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD8  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 9.
   */
  struct WF9
  : public reg< uint8_t, base_addr + 0x29, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x29, rw, 0 >;

    using BPALCD9  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD9  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD9  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD9  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD9  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD9  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD9  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD9  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 10.
   */
  struct WF10
  : public reg< uint8_t, base_addr + 0x2a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2a, rw, 0 >;

    using BPALCD10  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD10  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD10  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD10  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD10  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD10  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD10  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD10  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 11.
   */
  struct WF11
  : public reg< uint8_t, base_addr + 0x2b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2b, rw, 0 >;

    using BPALCD11  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD11  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD11  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD11  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD11  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD11  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD11  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD11  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF15TO12
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using WF12  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P12 as described above for WF3TO0[WF3].  */
    using WF13  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P13 as described above for WF3TO0[WF3].  */
    using WF14  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P14 as described above for WF3TO0[WF3].  */
    using WF15  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P15 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 12.
   */
  struct WF12
  : public reg< uint8_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2c, rw, 0 >;

    using BPALCD12  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD12  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD12  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD12  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD12  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD12  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD12  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD12  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 13.
   */
  struct WF13
  : public reg< uint8_t, base_addr + 0x2d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2d, rw, 0 >;

    using BPALCD13  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD13  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD13  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD13  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD13  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD13  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD13  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD13  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 14.
   */
  struct WF14
  : public reg< uint8_t, base_addr + 0x2e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2e, rw, 0 >;

    using BPALCD14  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD14  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD14  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD14  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD14  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD14  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD14  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD14  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 15.
   */
  struct WF15
  : public reg< uint8_t, base_addr + 0x2f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2f, rw, 0 >;

    using BPALCD15  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD15  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD15  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD15  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD15  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD15  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD15  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD15  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF19TO16
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using WF16  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P16 as described above for WF3TO0[WF3].  */
    using WF17  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P17 as described above for WF3TO0[WF3].  */
    using WF18  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P18 as described above for WF3TO0[WF3].  */
    using WF19  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P19 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 16.
   */
  struct WF16
  : public reg< uint8_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0 >;

    using BPALCD16  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD16  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD16  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD16  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD16  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD16  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD16  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD16  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 17.
   */
  struct WF17
  : public reg< uint8_t, base_addr + 0x31, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31, rw, 0 >;

    using BPALCD17  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD17  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD17  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD17  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD17  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD17  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD17  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD17  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 18.
   */
  struct WF18
  : public reg< uint8_t, base_addr + 0x32, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32, rw, 0 >;

    using BPALCD18  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD18  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD18  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD18  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD18  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD18  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD18  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD18  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 19.
   */
  struct WF19
  : public reg< uint8_t, base_addr + 0x33, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33, rw, 0 >;

    using BPALCD19  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD19  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD19  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD19  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD19  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD19  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD19  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD19  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF23TO20
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using WF20  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P20 as described above for WF3TO0[WF3].  */
    using WF21  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P21 as described above for WF3TO0[WF3].  */
    using WF22  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P22 as described above for WF3TO0[WF3].  */
    using WF23  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P23 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 20.
   */
  struct WF20
  : public reg< uint8_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0 >;

    using BPALCD20  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD20  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD20  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD20  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD20  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD20  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD20  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD20  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 21.
   */
  struct WF21
  : public reg< uint8_t, base_addr + 0x35, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35, rw, 0 >;

    using BPALCD21  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD21  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD21  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD21  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD21  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD21  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD21  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD21  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 22.
   */
  struct WF22
  : public reg< uint8_t, base_addr + 0x36, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x36, rw, 0 >;

    using BPALCD22  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD22  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD22  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD22  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD22  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD22  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD22  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD22  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 23.
   */
  struct WF23
  : public reg< uint8_t, base_addr + 0x37, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x37, rw, 0 >;

    using BPALCD23  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD23  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD23  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD23  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD23  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD23  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD23  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD23  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF27TO24
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using WF24  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P24 as described above for WF3TO0[WF3].  */
    using WF25  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P25 as described above for WF3TO0[WF3].  */
    using WF26  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P26 as described above for WF3TO0[WF3].  */
    using WF27  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P27 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 24.
   */
  struct WF24
  : public reg< uint8_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x38, rw, 0 >;

    using BPALCD24  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD24  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD24  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD24  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD24  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD24  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD24  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD24  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 25.
   */
  struct WF25
  : public reg< uint8_t, base_addr + 0x39, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x39, rw, 0 >;

    using BPALCD25  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD25  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD25  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD25  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD25  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD25  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD25  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD25  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 26.
   */
  struct WF26
  : public reg< uint8_t, base_addr + 0x3a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3a, rw, 0 >;

    using BPALCD26  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD26  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD26  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD26  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD26  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD26  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD26  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD26  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 27.
   */
  struct WF27
  : public reg< uint8_t, base_addr + 0x3b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3b, rw, 0 >;

    using BPALCD27  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD27  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD27  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD27  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD27  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD27  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD27  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD27  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF31TO28
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0 >;

    using WF28  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P28 as described above for WF3TO0[WF3].  */
    using WF29  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P29 as described above for WF3TO0[WF3].  */
    using WF30  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P30 as described above for WF3TO0[WF3].  */
    using WF31  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P31 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 28.
   */
  struct WF28
  : public reg< uint8_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3c, rw, 0 >;

    using BPALCD28  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD28  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD28  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD28  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD28  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD28  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD28  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD28  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 29.
   */
  struct WF29
  : public reg< uint8_t, base_addr + 0x3d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3d, rw, 0 >;

    using BPALCD29  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD29  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD29  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD29  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD29  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD29  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD29  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD29  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 30.
   */
  struct WF30
  : public reg< uint8_t, base_addr + 0x3e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3e, rw, 0 >;

    using BPALCD30  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD30  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD30  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD30  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD30  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD30  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD30  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD30  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 31.
   */
  struct WF31
  : public reg< uint8_t, base_addr + 0x3f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3f, rw, 0 >;

    using BPALCD31  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD31  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD31  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD31  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD31  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD31  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD31  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD31  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF35TO32
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using WF32  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P32 as described above for WF3TO0[WF3].  */
    using WF33  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P33 as described above for WF3TO0[WF3].  */
    using WF34  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P34 as described above for WF3TO0[WF3].  */
    using WF35  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P35 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 32.
   */
  struct WF32
  : public reg< uint8_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x40, rw, 0 >;

    using BPALCD32  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD32  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD32  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD32  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD32  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD32  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD32  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD32  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 33.
   */
  struct WF33
  : public reg< uint8_t, base_addr + 0x41, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x41, rw, 0 >;

    using BPALCD33  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD33  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD33  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD33  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD33  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD33  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD33  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD33  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 34.
   */
  struct WF34
  : public reg< uint8_t, base_addr + 0x42, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x42, rw, 0 >;

    using BPALCD34  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD34  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD34  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD34  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD34  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD34  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD34  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD34  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 35.
   */
  struct WF35
  : public reg< uint8_t, base_addr + 0x43, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x43, rw, 0 >;

    using BPALCD35  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD35  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD35  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD35  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD35  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD35  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD35  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD35  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF39TO36
  : public reg< uint32_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 >;

    using WF36  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P36 as described above for WF3TO0[WF3].  */
    using WF37  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P37 as described above for WF3TO0[WF3].  */
    using WF38  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P38 as described above for WF3TO0[WF3].  */
    using WF39  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P39 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 36.
   */
  struct WF36
  : public reg< uint8_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x44, rw, 0 >;

    using BPALCD36  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD36  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD36  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD36  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD36  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD36  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD36  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD36  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 37.
   */
  struct WF37
  : public reg< uint8_t, base_addr + 0x45, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x45, rw, 0 >;

    using BPALCD37  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD37  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD37  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD37  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD37  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD37  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD37  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD37  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 38.
   */
  struct WF38
  : public reg< uint8_t, base_addr + 0x46, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x46, rw, 0 >;

    using BPALCD38  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD38  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD38  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD38  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD38  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD38  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD38  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD38  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 39.
   */
  struct WF39
  : public reg< uint8_t, base_addr + 0x47, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x47, rw, 0 >;

    using BPALCD39  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD39  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD39  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD39  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD39  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD39  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD39  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD39  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF43TO40
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using WF40  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P40 as described above for WF3TO0[WF3].  */
    using WF41  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P41 as described above for WF3TO0[WF3].  */
    using WF42  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P42 as described above for WF3TO0[WF3].  */
    using WF43  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P43 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 40.
   */
  struct WF40
  : public reg< uint8_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x48, rw, 0 >;

    using BPALCD40  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD40  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD40  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD40  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD40  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD40  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD40  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD40  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 41.
   */
  struct WF41
  : public reg< uint8_t, base_addr + 0x49, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x49, rw, 0 >;

    using BPALCD41  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD41  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD41  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD41  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD41  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD41  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD41  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD41  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 42.
   */
  struct WF42
  : public reg< uint8_t, base_addr + 0x4a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4a, rw, 0 >;

    using BPALCD42  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD42  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD42  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD42  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD42  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD42  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD42  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD42  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 43.
   */
  struct WF43
  : public reg< uint8_t, base_addr + 0x4b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4b, rw, 0 >;

    using BPALCD43  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD43  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD43  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD43  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD43  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD43  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD43  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD43  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF47TO44
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using WF44  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P44 as described above for WF3TO0[WF3].  */
    using WF45  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P45 as described above for WF3TO0[WF3].  */
    using WF46  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P46 as described above for WF3TO0[WF3].  */
    using WF47  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P47 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 44.
   */
  struct WF44
  : public reg< uint8_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4c, rw, 0 >;

    using BPALCD44  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD44  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD44  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD44  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD44  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD44  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD44  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD44  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 45.
   */
  struct WF45
  : public reg< uint8_t, base_addr + 0x4d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4d, rw, 0 >;

    using BPALCD45  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD45  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD45  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD45  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD45  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD45  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD45  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD45  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 46.
   */
  struct WF46
  : public reg< uint8_t, base_addr + 0x4e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4e, rw, 0 >;

    using BPALCD46  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD46  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD46  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD46  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD46  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD46  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD46  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD46  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 47.
   */
  struct WF47
  : public reg< uint8_t, base_addr + 0x4f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4f, rw, 0 >;

    using BPALCD47  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD47  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD47  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD47  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD47  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD47  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD47  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD47  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF51TO48
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using WF48  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P48 as described above for WF3TO0[WF3].  */
    using WF49  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P49 as described above for WF3TO0[WF3].  */
    using WF50  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P50 as described above for WF3TO0[WF3].  */
    using WF51  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P51 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 48.
   */
  struct WF48
  : public reg< uint8_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x50, rw, 0 >;

    using BPALCD48  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD48  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD48  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD48  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD48  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD48  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD48  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD48  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 49.
   */
  struct WF49
  : public reg< uint8_t, base_addr + 0x51, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x51, rw, 0 >;

    using BPALCD49  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD49  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD49  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD49  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD49  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD49  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD49  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD49  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 50.
   */
  struct WF50
  : public reg< uint8_t, base_addr + 0x52, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x52, rw, 0 >;

    using BPALCD50  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD50  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD50  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD50  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD50  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD50  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD50  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD50  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 51.
   */
  struct WF51
  : public reg< uint8_t, base_addr + 0x53, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x53, rw, 0 >;

    using BPALCD51  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD51  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD51  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD51  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD51  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD51  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD51  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD51  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF55TO52
  : public reg< uint32_t, base_addr + 0x54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0 >;

    using WF52  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P52 as described above for WF3TO0[WF3].  */
    using WF53  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P53 as described above for WF3TO0[WF3].  */
    using WF54  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P54 as described above for WF3TO0[WF3].  */
    using WF55  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P55 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 52.
   */
  struct WF52
  : public reg< uint8_t, base_addr + 0x54, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x54, rw, 0 >;

    using BPALCD52  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD52  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD52  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD52  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD52  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD52  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD52  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD52  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 53.
   */
  struct WF53
  : public reg< uint8_t, base_addr + 0x55, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x55, rw, 0 >;

    using BPALCD53  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD53  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD53  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD53  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD53  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD53  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD53  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD53  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 54.
   */
  struct WF54
  : public reg< uint8_t, base_addr + 0x56, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x56, rw, 0 >;

    using BPALCD54  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD54  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD54  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD54  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD54  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD54  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD54  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD54  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 55.
   */
  struct WF55
  : public reg< uint8_t, base_addr + 0x57, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x57, rw, 0 >;

    using BPALCD55  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD55  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD55  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD55  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD55  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD55  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD55  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD55  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF59TO56
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using WF56  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P56 as described above for WF3TO0[WF3].  */
    using WF57  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P57 as described above for WF3TO0[WF3].  */
    using WF58  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P58 as described above for WF3TO0[WF3].  */
    using WF59  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P59 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 56.
   */
  struct WF56
  : public reg< uint8_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x58, rw, 0 >;

    using BPALCD56  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD56  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD56  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD56  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD56  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD56  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD56  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD56  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 57.
   */
  struct WF57
  : public reg< uint8_t, base_addr + 0x59, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x59, rw, 0 >;

    using BPALCD57  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD57  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD57  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD57  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD57  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD57  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD57  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD57  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 58.
   */
  struct WF58
  : public reg< uint8_t, base_addr + 0x5a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5a, rw, 0 >;

    using BPALCD58  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD58  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD58  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD58  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD58  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD58  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD58  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD58  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 59.
   */
  struct WF59
  : public reg< uint8_t, base_addr + 0x5b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5b, rw, 0 >;

    using BPALCD59  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD59  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD59  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD59  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD59  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD59  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD59  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD59  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform register
   */
  struct WF63TO60
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0 >;

    using WF60  = regbits< type,  0,  8 >;  /**< Controls segments or phases connected to LCD_P60 as described above for WF3TO0[WF3].  */
    using WF61  = regbits< type,  8,  8 >;  /**< Controls segments or phases connected to LCD_P61 as described above for WF3TO0[WF3].  */
    using WF62  = regbits< type, 16,  8 >;  /**< Controls segments or phases connected to LCD_P62 as described above for WF3TO0[WF3].  */
    using WF63  = regbits< type, 24,  8 >;  /**< Controls segments or phases connected to LCD_P63 as described above for WF3TO0[WF3].  */
  };

  /**
   * LCD Waveform Register 60.
   */
  struct WF60
  : public reg< uint8_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5c, rw, 0 >;

    using BPALCD60  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD60  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD60  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD60  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD60  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD60  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD60  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD60  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 61.
   */
  struct WF61
  : public reg< uint8_t, base_addr + 0x5d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5d, rw, 0 >;

    using BPALCD61  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD61  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD61  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD61  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD61  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD61  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD61  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD61  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 62.
   */
  struct WF62
  : public reg< uint8_t, base_addr + 0x5e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5e, rw, 0 >;

    using BPALCD62  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD62  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD62  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD62  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD62  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD62  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD62  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD62  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * LCD Waveform Register 63.
   */
  struct WF63
  : public reg< uint8_t, base_addr + 0x5f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5f, rw, 0 >;

    using BPALCD63  = regbits< type,  0,  1 >;  /**< no description available  */
    using BPBLCD63  = regbits< type,  1,  1 >;  /**< no description available  */
    using BPCLCD63  = regbits< type,  2,  1 >;  /**< no description available  */
    using BPDLCD63  = regbits< type,  3,  1 >;  /**< no description available  */
    using BPELCD63  = regbits< type,  4,  1 >;  /**< no description available  */
    using BPFLCD63  = regbits< type,  5,  1 >;  /**< no description available  */
    using BPGLCD63  = regbits< type,  6,  1 >;  /**< no description available  */
    using BPHLCD63  = regbits< type,  7,  1 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LCD_HPP_INCLUDED
