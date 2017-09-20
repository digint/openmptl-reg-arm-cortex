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
//  Import from CMSIS-SVD: "STMicro/STM32F7x7.svd"
//
//  name: STM32F7x7
//  version: 1.0
//  description: STM32F7x7
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LTCD_HPP_INCLUDED
#define ARCH_REG_LTCD_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * LCD-TFT Controller
 */
struct LTCD
{
  static constexpr reg_addr_t base_addr = 0x40016800;

  /**
   * Synchronization Size Configuration Register
   */
  struct SSCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using HSW  = regbits< type, 16, 10 >;  /**< Horizontal Synchronization Width (in units of pixel clock period)   */
    using VSH  = regbits< type,  0, 11 >;  /**< Vertical Synchronization Height (in units of horizontal scan line)  */
  };

  /**
   * Back Porch Configuration Register
   */
  struct BPCR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using AHBP  = regbits< type, 16, 10 >;  /**< Accumulated Horizontal back porch (in units of pixel clock period)  */
    using AVBP  = regbits< type,  0, 11 >;  /**< Accumulated Vertical back porch (in units of horizontal scan line)  */
  };

  /**
   * Active Width Configuration Register
   */
  struct AWCR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using AAV  = regbits< type, 16, 10 >;  /**< AAV                                                           */
    using AAH  = regbits< type,  0, 11 >;  /**< Accumulated Active Height (in units of horizontal scan line)  */
  };

  /**
   * Total Width Configuration Register
   */
  struct TWCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using TOTALW  = regbits< type, 16, 10 >;  /**< Total Width (in units of pixel clock period)     */
    using TOTALH  = regbits< type,  0, 11 >;  /**< Total Height (in units of horizontal scan line)  */
  };

  /**
   * Global Control Register
   */
  struct GCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00002220 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00002220 >;

    using HSPOL   = regbits< type, 31,  1 >;  /**< Horizontal Synchronization Polarity  */
    using VSPOL   = regbits< type, 30,  1 >;  /**< Vertical Synchronization Polarity    */
    using DEPOL   = regbits< type, 29,  1 >;  /**< Data Enable Polarity                 */
    using PCPOL   = regbits< type, 28,  1 >;  /**< Pixel Clock Polarity                 */
    using DEN     = regbits< type, 16,  1 >;  /**< Dither Enable                        */
    using DRW     = regbits< type, 12,  3 >;  /**< Dither Red Width                     */
    using DGW     = regbits< type,  8,  3 >;  /**< Dither Green Width                   */
    using DBW     = regbits< type,  4,  3 >;  /**< Dither Blue Width                    */
    using LTDCEN  = regbits< type,  0,  1 >;  /**< LCD-TFT controller enable bit        */
  };

  /**
   * Shadow Reload Configuration Register
   */
  struct SRCR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using VBR  = regbits< type,  1,  1 >;  /**< Vertical Blanking Reload  */
    using IMR  = regbits< type,  0,  1 >;  /**< Immediate Reload          */
  };

  /**
   * Background Color Configuration Register
   */
  struct BCCR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using BC  = regbits< type,  0, 24 >;  /**< Background Color Red value  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using RRIE    = regbits< type,  3,  1 >;  /**< Register Reload interrupt enable  */
    using TERRIE  = regbits< type,  2,  1 >;  /**< Transfer Error Interrupt Enable   */
    using FUIE    = regbits< type,  1,  1 >;  /**< FIFO Underrun Interrupt Enable    */
    using LIE     = regbits< type,  0,  1 >;  /**< Line Interrupt Enable             */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >;

    using RRIF    = regbits< type,  3,  1 >;  /**< Register Reload Interrupt Flag  */
    using TERRIF  = regbits< type,  2,  1 >;  /**< Transfer Error interrupt flag   */
    using FUIF    = regbits< type,  1,  1 >;  /**< FIFO Underrun Interrupt flag    */
    using LIF     = regbits< type,  0,  1 >;  /**< Line Interrupt flag             */
  };

  /**
   * Interrupt Clear Register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x3c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, wo, 0x00000000 >;

    using CRRIF    = regbits< type,  3,  1 >;  /**< Clears Register Reload Interrupt Flag     */
    using CTERRIF  = regbits< type,  2,  1 >;  /**< Clears the Transfer Error Interrupt Flag  */
    using CFUIF    = regbits< type,  1,  1 >;  /**< Clears the FIFO Underrun Interrupt flag   */
    using CLIF     = regbits< type,  0,  1 >;  /**< Clears the Line Interrupt Flag            */
  };

  /**
   * Line Interrupt Position Configuration Register
   */
  struct LIPCR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using LIPOS  = regbits< type,  0, 11 >;  /**< Line Interrupt Position  */
  };

  /**
   * Current Position Status Register
   */
  struct CPSR
  : public reg< uint32_t, base_addr + 0x44, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0x00000000 >;

    using CXPOS  = regbits< type, 16, 16 >;  /**< Current X Position  */
    using CYPOS  = regbits< type,  0, 16 >;  /**< Current Y Position  */
  };

  /**
   * Current Display Status Register
   */
  struct CDSR
  : public reg< uint32_t, base_addr + 0x48, ro, 0x0000000F >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x0000000F >;

    using HSYNCS  = regbits< type,  3,  1 >;  /**< Horizontal Synchronization display Status  */
    using VSYNCS  = regbits< type,  2,  1 >;  /**< Vertical Synchronization display Status    */
    using HDES    = regbits< type,  1,  1 >;  /**< Horizontal Data Enable display Status      */
    using VDES    = regbits< type,  0,  1 >;  /**< Vertical Data Enable display Status        */
  };

  /**
   * Layerx Control Register
   */
  struct L1CR
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >;

    using CLUTEN  = regbits< type,  4,  1 >;  /**< Color Look-Up Table Enable  */
    using COLKEN  = regbits< type,  1,  1 >;  /**< Color Keying Enable         */
    using LEN     = regbits< type,  0,  1 >;  /**< Layer Enable                */
  };

  /**
   * Layerx Window Horizontal Position Configuration Register
   */
  struct L1WHPCR
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using WHSPPOS  = regbits< type, 16, 12 >;  /**< Window Horizontal Stop Position   */
    using WHSTPOS  = regbits< type,  0, 12 >;  /**< Window Horizontal Start Position  */
  };

  /**
   * Layerx Window Vertical Position Configuration Register
   */
  struct L1WVPCR
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >;

    using WVSPPOS  = regbits< type, 16, 11 >;  /**< Window Vertical Stop Position   */
    using WVSTPOS  = regbits< type,  0, 11 >;  /**< Window Vertical Start Position  */
  };

  /**
   * Layerx Color Keying Configuration Register
   */
  struct L1CKCR
  : public reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >;

    using CKRED    = regbits< type, 16,  8 >;  /**< Color Key Red value    */
    using CKGREEN  = regbits< type,  8,  8 >;  /**< Color Key Green value  */
    using CKBLUE   = regbits< type,  0,  8 >;  /**< Color Key Blue value   */
  };

  /**
   * Layerx Pixel Format Configuration Register
   */
  struct L1PFCR
  : public reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >;

    using PF  = regbits< type,  0,  3 >;  /**< Pixel Format  */
  };

  /**
   * Layerx Constant Alpha Configuration Register
   */
  struct L1CACR
  : public reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >;

    using CONSTA  = regbits< type,  0,  8 >;  /**< Constant Alpha  */
  };

  /**
   * Layerx Default Color Configuration Register
   */
  struct L1DCCR
  : public reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >;

    using DCALPHA  = regbits< type, 24,  8 >;  /**< Default Color Alpha  */
    using DCRED    = regbits< type, 16,  8 >;  /**< Default Color Red    */
    using DCGREEN  = regbits< type,  8,  8 >;  /**< Default Color Green  */
    using DCBLUE   = regbits< type,  0,  8 >;  /**< Default Color Blue   */
  };

  /**
   * Layerx Blending Factors Configuration Register
   */
  struct L1BFCR
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x00000607 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x00000607 >;

    using BF1  = regbits< type,  8,  3 >;  /**< Blending Factor 1  */
    using BF2  = regbits< type,  0,  3 >;  /**< Blending Factor 2  */
  };

  /**
   * Layerx Color Frame Buffer Address Register
   */
  struct L1CFBAR
  : public reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >;

    using CFBADD  = regbits< type,  0, 32 >;  /**< Color Frame Buffer Start Address  */
  };

  /**
   * Layerx Color Frame Buffer Length Register
   */
  struct L1CFBLR
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >;

    using CFBP   = regbits< type, 16, 13 >;  /**< Color Frame Buffer Pitch in bytes  */
    using CFBLL  = regbits< type,  0, 13 >;  /**< Color Frame Buffer Line Length     */
  };

  /**
   * Layerx ColorFrame Buffer Line Number Register
   */
  struct L1CFBLNR
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >;

    using CFBLNBR  = regbits< type,  0, 11 >;  /**< Frame Buffer Line Number  */
  };

  /**
   * Layerx CLUT Write Register
   */
  struct L1CLUTWR
  : public reg< uint32_t, base_addr + 0xc4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, wo, 0x00000000 >;

    using CLUTADD  = regbits< type, 24,  8 >;  /**< CLUT Address  */
    using RED      = regbits< type, 16,  8 >;  /**< Red value     */
    using GREEN    = regbits< type,  8,  8 >;  /**< Green value   */
    using BLUE     = regbits< type,  0,  8 >;  /**< Blue value    */
  };

  /**
   * Layerx Control Register
   */
  struct L2CR
  : public reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >;

    using CLUTEN  = regbits< type,  4,  1 >;  /**< Color Look-Up Table Enable  */
    using COLKEN  = regbits< type,  1,  1 >;  /**< Color Keying Enable         */
    using LEN     = regbits< type,  0,  1 >;  /**< Layer Enable                */
  };

  /**
   * Layerx Window Horizontal Position Configuration Register
   */
  struct L2WHPCR
  : public reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >;

    using WHSPPOS  = regbits< type, 16, 12 >;  /**< Window Horizontal Stop Position   */
    using WHSTPOS  = regbits< type,  0, 12 >;  /**< Window Horizontal Start Position  */
  };

  /**
   * Layerx Window Vertical Position Configuration Register
   */
  struct L2WVPCR
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >;

    using WVSPPOS  = regbits< type, 16, 11 >;  /**< Window Vertical Stop Position   */
    using WVSTPOS  = regbits< type,  0, 11 >;  /**< Window Vertical Start Position  */
  };

  /**
   * Layerx Color Keying Configuration Register
   */
  struct L2CKCR
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >;

    using CKRED    = regbits< type, 15,  9 >;  /**< Color Key Red value    */
    using CKGREEN  = regbits< type,  8,  7 >;  /**< Color Key Green value  */
    using CKBLUE   = regbits< type,  0,  8 >;  /**< Color Key Blue value   */
  };

  /**
   * Layerx Pixel Format Configuration Register
   */
  struct L2PFCR
  : public reg< uint32_t, base_addr + 0x114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x00000000 >;

    using PF  = regbits< type,  0,  3 >;  /**< Pixel Format  */
  };

  /**
   * Layerx Constant Alpha Configuration Register
   */
  struct L2CACR
  : public reg< uint32_t, base_addr + 0x118, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0x00000000 >;

    using CONSTA  = regbits< type,  0,  8 >;  /**< Constant Alpha  */
  };

  /**
   * Layerx Default Color Configuration Register
   */
  struct L2DCCR
  : public reg< uint32_t, base_addr + 0x11c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0x00000000 >;

    using DCALPHA  = regbits< type, 24,  8 >;  /**< Default Color Alpha  */
    using DCRED    = regbits< type, 16,  8 >;  /**< Default Color Red    */
    using DCGREEN  = regbits< type,  8,  8 >;  /**< Default Color Green  */
    using DCBLUE   = regbits< type,  0,  8 >;  /**< Default Color Blue   */
  };

  /**
   * Layerx Blending Factors Configuration Register
   */
  struct L2BFCR
  : public reg< uint32_t, base_addr + 0x120, rw, 0x00000607 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x00000607 >;

    using BF1  = regbits< type,  8,  3 >;  /**< Blending Factor 1  */
    using BF2  = regbits< type,  0,  3 >;  /**< Blending Factor 2  */
  };

  /**
   * Layerx Color Frame Buffer Address Register
   */
  struct L2CFBAR
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >;

    using CFBADD  = regbits< type,  0, 32 >;  /**< Color Frame Buffer Start Address  */
  };

  /**
   * Layerx Color Frame Buffer Length Register
   */
  struct L2CFBLR
  : public reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >;

    using CFBP   = regbits< type, 16, 13 >;  /**< Color Frame Buffer Pitch in bytes  */
    using CFBLL  = regbits< type,  0, 13 >;  /**< Color Frame Buffer Line Length     */
  };

  /**
   * Layerx ColorFrame Buffer Line Number Register
   */
  struct L2CFBLNR
  : public reg< uint32_t, base_addr + 0x134, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0x00000000 >;

    using CFBLNBR  = regbits< type,  0, 11 >;  /**< Frame Buffer Line Number  */
  };

  /**
   * Layerx CLUT Write Register
   */
  struct L2CLUTWR
  : public reg< uint32_t, base_addr + 0x144, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x144, wo, 0x00000000 >;

    using CLUTADD  = regbits< type, 24,  8 >;  /**< CLUT Address  */
    using RED      = regbits< type, 16,  8 >;  /**< Red value     */
    using GREEN    = regbits< type,  8,  8 >;  /**< Green value   */
    using BLUE     = regbits< type,  0,  8 >;  /**< Blue value    */
  };
};
} // namespace mptl

#endif // ARCH_REG_LTCD_HPP_INCLUDED
