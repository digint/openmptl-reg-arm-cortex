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
//  Import from CMSIS-SVD: "Freescale/MK70F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK70F15
//  series: Kinetis_K
//  version: 1.6
//  description: MK70F15 Freescale Microcontroller
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
 * Liquid Crystal Display Controller
 */
struct LCDC
{
  static constexpr reg_addr_t base_addr = 0x400b6000;

  /**
   * LCDC screen start address register
   */
  struct LSSAR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using SSA  = regbits< type,  2, 30 >;  /**< Screen start address of LCD panel  */
  };

  /**
   * LCDC size register
   */
  struct LSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using YMAX  = regbits< type,  0, 10 >;  /**< Screen height               */
    using XMAX  = regbits< type, 20,  7 >;  /**< Screen width divided by 16  */
  };

  /**
   * LCDC virtual page width register
   */
  struct LVPWR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using VPW  = regbits< type,  0, 11 >;  /**< Virtual page width  */
  };

  /**
   * LCDC cursor position register
   */
  struct LCPR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using CYP  = regbits< type,  0, 10 >;  /**< Cursor Y position             */
    using CXP  = regbits< type, 16, 10 >;  /**< Cursor X position             */
    using OP   = regbits< type, 28,  1 >;  /**< Arithmetic operation control  */
    using CC   = regbits< type, 30,  2 >;  /**< Cursor control                */
  };

  /**
   * LCDC cursor width, height, and blink register
   */
  struct LCWHB
  : public reg< uint32_t, base_addr + 0x10, rw, 0x10100FF >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x10100FF >;

    using BD     = regbits< type,  0,  8 >;  /**< Blink divisor  */
    using CH     = regbits< type, 16,  5 >;  /**< Cursor height  */
    using CW     = regbits< type, 24,  5 >;  /**< Cursor width   */
    using BK_EN  = regbits< type, 31,  1 >;  /**< Blink enable   */
  };

  /**
   * LCDC color cursor mapping register
   */
  struct LCCMR
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using CUR_COL_B  = regbits< type,  0,  6 >;  /**< Cursor blue field   */
    using CUR_COL_G  = regbits< type,  6,  6 >;  /**< Cursor green field  */
    using CUR_COL_R  = regbits< type, 12,  6 >;  /**< Cursor red field    */
  };

  /**
   * LCDC panel configuration register
   */
  struct LPCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using PCD       = regbits< type,  0,  6 >;  /**< Pixel clock divider          */
    using SCLKSEL   = regbits< type,  7,  1 >;  /**< LSCLK select                 */
    using ACD       = regbits< type,  8,  7 >;  /**< Alternate crystal direction  */
    using ACDSEL    = regbits< type, 15,  1 >;  /**< ACD clock source select      */
    using REV_VS    = regbits< type, 16,  1 >;  /**< Reverse vertical scan        */
    using SWAP_SEL  = regbits< type, 17,  1 >;  /**< Swap select                  */
    using END_SEL   = regbits< type, 18,  1 >;  /**< Endian select                */
    using SCLKIDLE  = regbits< type, 19,  1 >;  /**< LSCLK idle enable            */
    using OEPOL     = regbits< type, 20,  1 >;  /**< Output enable polarity       */
    using CLKPOL    = regbits< type, 21,  1 >;  /**< LCD shift clock polarity     */
    using LPPOL     = regbits< type, 22,  1 >;  /**< Line pulse polarity          */
    using FLMPOL    = regbits< type, 23,  1 >;  /**< First line marker polarity   */
    using PIXPOL    = regbits< type, 24,  1 >;  /**< Pixel polarity               */
    using BPIX      = regbits< type, 25,  3 >;  /**< Bits per pixel               */
    using PBSIZ     = regbits< type, 28,  2 >;  /**< Panel bus width              */
    using COLOR     = regbits< type, 30,  1 >;  /**< Interfaces to color display  */
    using TFT       = regbits< type, 31,  1 >;  /**< Interfaces to TFT display    */
  };

  /**
   * LCDC horizontal configuration register
   */
  struct LHCR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x4000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x4000000 >;

    using H_WAIT_2  = regbits< type,  0,  8 >;  /**< Wait between HSYNC and start of next line  */
    using H_WAIT_1  = regbits< type,  8,  8 >;  /**< Wait between OE and HSYNC                  */
    using H_WIDTH   = regbits< type, 26,  6 >;  /**< Horizontal sync pulse width                */
  };

  /**
   * LCDC vertical configuration register
   */
  struct LVCR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x4000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x4000000 >;

    using V_WAIT_2  = regbits< type,  0,  8 >;  /**< Wait between frames 2      */
    using V_WAIT_1  = regbits< type,  8,  8 >;  /**< Wait between frames 1      */
    using V_WIDTH   = regbits< type, 26,  6 >;  /**< Vertical sync pulse width  */
  };

  /**
   * LCDC panning offset register
   */
  struct LPOR
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using POS  = regbits< type,  0,  5 >;  /**< Panning offset  */
  };

  /**
   * LCDC PWM contrast control register
   */
  struct LPCCR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using PW     = regbits< type,  0,  8 >;  /**< Pulse-width              */
    using CC_EN  = regbits< type,  8,  1 >;  /**< Contrast control enable  */
    using SCR    = regbits< type,  9,  2 >;  /**< Source select            */
    using LDMSK  = regbits< type, 15,  1 >;  /**< LD mask                  */
  };

  /**
   * LCDC DMA control register
   */
  struct LDCR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x80040060 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x80040060 >;

    using TM     = regbits< type,  0,  7 >;  /**< DMA trigger mark  */
    using HM     = regbits< type, 16,  7 >;  /**< DMA high mark     */
    using BURST  = regbits< type, 31,  1 >;  /**< Burst length      */
  };

  /**
   * LCDC refresh mode control register
   */
  struct LRMCR
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using SELF_REF  = regbits< type,  0,  1 >;  /**< Self-refresh  */
  };

  /**
   * LCDC interrupt configuration register
   */
  struct LICR
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using INTCON      = regbits< type,  0,  1 >;  /**< Interrupt condition                 */
    using INTSYN      = regbits< type,  2,  1 >;  /**< Interrupt source                    */
    using GW_INT_CON  = regbits< type,  4,  1 >;  /**< Graphic window interrupt condition  */
  };

  /**
   * LCDC interrupt enable register
   */
  struct LIER
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0 >;

    using BOF_EN         = regbits< type,  0,  1 >;  /**< Beginning of frame interrupt enable                 */
    using EOF_EN         = regbits< type,  1,  1 >;  /**< End of frame interrupt enable                       */
    using UDR_ERR_EN     = regbits< type,  3,  1 >;  /**< Under run error interrupt enable                    */
    using GW_BOF_EN      = regbits< type,  4,  1 >;  /**< Graphic window beginning of frame interrupt enable  */
    using GW_EOF_EN      = regbits< type,  5,  1 >;  /**< Graphic window end of frame interrupt enable        */
    using GW_UDR_ERR_EN  = regbits< type,  7,  1 >;  /**< Graphic window under run error interrupt enable     */
  };

  /**
   * LCDC interrupt status register
   */
  struct LISR
  : public reg< uint32_t, base_addr + 0x40, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0 >;

    using BOF         = regbits< type,  0,  1 >;  /**< Beginning of frame                 */
    using EOF         = regbits< type,  1,  1 >;  /**< End of frame                       */
    using UDR_ERR     = regbits< type,  3,  1 >;  /**< Under run error                    */
    using GW_BOF      = regbits< type,  4,  1 >;  /**< Graphic window beginning of frame  */
    using GW_EOF      = regbits< type,  5,  1 >;  /**< Graphic window end of frame        */
    using GW_UDR_ERR  = regbits< type,  7,  1 >;  /**< Graphic window under run error     */
  };

  /**
   * LCDC graphic window start address register
   */
  struct LGWSAR
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using GWSA  = regbits< type,  2, 30 >;  /**< Graphic window start address on LCD screen  */
  };

  /**
   * LCDC graphic window size register
   */
  struct LGWSR
  : public reg< uint32_t, base_addr + 0x54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0 >;

    using GWH  = regbits< type,  0, 10 >;  /**< Graphic window height               */
    using GWW  = regbits< type, 20,  7 >;  /**< Graphic window width divided by 16  */
  };

  /**
   * LCDC graphic window virtual page width register
   */
  struct LGWVPWR
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using GWVPW  = regbits< type,  0, 11 >;  /**< Graphic window virtual page width  */
  };

  /**
   * LCDC graphic window panning offset register
   */
  struct LGWPOR
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0 >;

    using GWPO  = regbits< type,  0,  5 >;  /**< Graphic window panning offset  */
  };

  /**
   * LCDC graphic window position register
   */
  struct LGWPR
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using GWYP  = regbits< type,  0, 10 >;  /**< Graphic window Y position  */
    using GWXP  = regbits< type, 16, 10 >;  /**< Graphic window X position  */
  };

  /**
   * LCDC graphic window control register
   */
  struct LGWCR
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using GWCKB   = regbits< type,  0,  6 >;  /**< Graphic window color keying blue component   */
    using GWCKG   = regbits< type,  6,  6 >;  /**< Graphic window color keying green component  */
    using GWCKR   = regbits< type, 12,  6 >;  /**< Graphic window color keying red component    */
    using GW_RVS  = regbits< type, 21,  1 >;  /**< Graphic window reverse vertical scan         */
    using GWE     = regbits< type, 22,  1 >;  /**< Graphic window enable                        */
    using GWCKE   = regbits< type, 23,  1 >;  /**< Graphic window color keying enable           */
    using GWAV    = regbits< type, 24,  8 >;  /**< Graphic window alpha value                   */
  };

  /**
   * LCDC graphic window DMA control register
   */
  struct LGWDCR
  : public reg< uint32_t, base_addr + 0x68, rw, 0x80040060 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x80040060 >;

    using GWTM  = regbits< type,  0,  7 >;  /**< Graphic window DMA low mark    */
    using GWHM  = regbits< type, 16,  7 >;  /**< Graphic window DMA high mark   */
    using GWBT  = regbits< type, 31,  1 >;  /**< Graphic window DMA burst type  */
  };

  /**
   * LCDC AUS mode control register
   */
  struct LAUSCR
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using AGWCKB    = regbits< type,  0,  8 >;  /**< AUS graphic window color keying blue component   */
    using AGWCKG    = regbits< type,  8,  8 >;  /**< AUS graphic window color keying green component  */
    using AGWCKR    = regbits< type, 16,  8 >;  /**< AUS graphic window color keying red component    */
    using AUS_Mode  = regbits< type, 31,  1 >;  /**< AUS mode control                                 */
  };

  /**
   * LCDC AUS mode cursor control register
   */
  struct LAUSCCR
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using ACUR_COL_B  = regbits< type,  0,  8 >;  /**< AUS cursor red field    */
    using ACUR_COL_G  = regbits< type,  8,  8 >;  /**< AUS cursor green field  */
    using ACUR_COL_R  = regbits< type, 16,  8 >;  /**< AUS cursor red field    */
  };
};
} // namespace mptl

#endif // ARCH_REG_LCDC_HPP_INCLUDED
