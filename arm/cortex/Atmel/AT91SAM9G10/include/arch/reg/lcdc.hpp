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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G10
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G10 device: ARM926EJ Embedded Microprocessor Unit, 266MHz, LCD, USB, 217 Pins (refer to http://www.atmel.com/devices/SAM9G10.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0x00600000;

  /**
   * DMA Base Address Register 1
   */
  struct DMABADDR1
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using BADDR_U  = regbits< type,  2, 30 >;
  };

  /**
   * DMA Base Address Register 2
   */
  struct DMABADDR2
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using BADDR_L  = regbits< type,  0, 32 >;
  };

  /**
   * DMA Frame Pointer Register 1
   */
  struct DMAFRMPT1
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >;

    using FRMPT_U  = regbits< type,  0, 23 >;
  };

  /**
   * DMA Frame Pointer Register 2
   */
  struct DMAFRMPT2
  : public reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >;

    using FRMPT_L  = regbits< type,  0, 23 >;
  };

  /**
   * DMA Frame Address Register 1
   */
  struct DMAFRMADD1
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using FRMADD_U  = regbits< type,  0, 32 >;
  };

  /**
   * DMA Frame Address Register 2
   */
  struct DMAFRMADD2
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >;

    using FRMADD_L  = regbits< type,  0, 32 >;
  };

  /**
   * DMA Frame Configuration Register
   */
  struct DMAFRMCFG
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using FRMSIZE  = regbits< type,  0, 23 >;  /**< Frame Size             */
    using BRSTLN   = regbits< type, 24,  7 >;  /**< Burst Length in Words  */
  };

  /**
   * DMA Control Register
   */
  struct DMACON
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    using DMAEN    = regbits< type,  0,  1 >;  /**< DMA Enable              */
    using DMARST   = regbits< type,  1,  1 >;  /**< DMA Reset (Write-only)  */
    using DMABUSY  = regbits< type,  2,  1 >;  /**< DMA Busy                */
  };

  /**
   * LCD Control Register 1
   */
  struct LCDCON1
  : public reg< uint32_t, base_addr + 0x00000800, rw, 0x00002000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000800, rw, 0x00002000 >;

    using BYPASS   = regbits< type,  0,  1 >;  /**< Bypass LCDDOTCK Divider   */
    using CLKVAL   = regbits< type, 12,  9 >;  /**< Clock Divider             */
    using LINECNT  = regbits< type, 21, 11 >;  /**< Line Counter (Read-only)  */
  };

  /**
   * LCD Control Register 2
   */
  struct LCDCON2
  : public reg< uint32_t, base_addr + 0x00000804, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000804, rw, 0x00000000 >;

    using DISTYPE    = regbits< type,  0,  2 >;  /**< Display Type            */
    using SCANMOD    = regbits< type,  2,  1 >;  /**< Scan Mode               */
    using IFWIDTH    = regbits< type,  3,  2 >;  /**< Interface width (STN)   */
    using PIXELSIZE  = regbits< type,  5,  3 >;  /**< Bits per pixel          */
    using INVVD      = regbits< type,  8,  1 >;  /**< LCDD polarity           */
    using INVFRAME   = regbits< type,  9,  1 >;  /**< LCDVSYNC polarity       */
    using INVLINE    = regbits< type, 10,  1 >;  /**< LCDHSYNC polarity       */
    using INVCLK     = regbits< type, 11,  1 >;  /**< LCDDOTCK polarity       */
    using INVDVAL    = regbits< type, 12,  1 >;  /**< LCDDEN polarity         */
    using CLKMOD     = regbits< type, 15,  1 >;  /**< LCDDOTCK mode           */
    using MEMOR      = regbits< type, 30,  2 >;  /**< Memory Ordering Format  */
  };

  /**
   * LCD Timing Register 1
   */
  struct LCDTIM1
  : public reg< uint32_t, base_addr + 0x00000808, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000808, rw, 0x00000000 >;

    using VFP       = regbits< type,  0,  8 >;  /**< Vertical Front Porch                  */
    using VBP       = regbits< type,  8,  8 >;  /**< Vertical Back Porch                   */
    using VPW       = regbits< type, 16,  6 >;  /**< Vertical Synchronization pulse width  */
    using VHDLY     = regbits< type, 24,  4 >;  /**< Vertical to horizontal delay          */
    using STUCKTO1  = regbits< type, 31,  1 >;
  };

  /**
   * LCD Timing Register 2
   */
  struct LCDTIM2
  : public reg< uint32_t, base_addr + 0x0000080c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000080c, rw, 0x00000000 >;

    using HBP  = regbits< type,  0,  8 >;  /**< Horizontal Back Porch                   */
    using HPW  = regbits< type,  8,  6 >;  /**< Horizontal synchronization pulse width  */
    using HFP  = regbits< type, 21, 11 >;  /**< Horizontal Front Porch                  */
  };

  /**
   * LCD Frame Configuration Register
   */
  struct LCDFRMCFG
  : public reg< uint32_t, base_addr + 0x00000810, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000810, rw, 0x00000000 >;

    using LINEVAL  = regbits< type,  0, 11 >;  /**< Vertical size of LCD module    */
    using HOZVAL   = regbits< type, 21, 11 >;  /**< Horizontal size of LCD module  */
  };

  /**
   * LCD FIFO Register
   */
  struct LCDFIFO
  : public reg< uint32_t, base_addr + 0x00000814, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000814, rw, 0x00000000 >;

    using FIFOTH  = regbits< type,  0, 16 >;  /**< FIFO Threshold  */
  };

  /**
   * LCDMOD Toggle Rate Value Register
   */
  struct LCDMVAL
  : public reg< uint32_t, base_addr + 0x00000818, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000818, rw, 0x00000000 >;

    using MVAL   = regbits< type,  0,  8 >;  /**< LCDMOD toggle rate value   */
    using MMODE  = regbits< type, 31,  1 >;  /**< LCDMOD toggle rate select  */
  };

  /**
   * Dithering Pattern DP1_2
   */
  struct DP1_2
  : public reg< uint32_t, base_addr + 0x0000081c, rw, 0x000000A5 >
  {
    using type = reg< uint32_t, base_addr + 0x0000081c, rw, 0x000000A5 >;

    // fixme: Field name equals parent register name: DP1_2
    using DP1_2_ = regbits< type,  0,  8 >;  /**< Pattern value for half duty cycle  */
  };

  /**
   * Dithering Pattern DP4_7
   */
  struct DP4_7
  : public reg< uint32_t, base_addr + 0x00000820, rw, 0x05AF0FA5 >
  {
    using type = reg< uint32_t, base_addr + 0x00000820, rw, 0x05AF0FA5 >;

    // fixme: Field name equals parent register name: DP4_7
    using DP4_7_ = regbits< type,  0, 28 >;  /**< Pattern value for 4/7 duty cycle  */
  };

  /**
   * Dithering Pattern DP3_5
   */
  struct DP3_5
  : public reg< uint32_t, base_addr + 0x00000824, rw, 0x000A5A5F >
  {
    using type = reg< uint32_t, base_addr + 0x00000824, rw, 0x000A5A5F >;

    // fixme: Field name equals parent register name: DP3_5
    using DP3_5_ = regbits< type,  0, 20 >;  /**< Pattern value for 3/5 duty cycle  */
  };

  /**
   * Dithering Pattern DP2_3
   */
  struct DP2_3
  : public reg< uint32_t, base_addr + 0x00000828, rw, 0x00000A5F >
  {
    using type = reg< uint32_t, base_addr + 0x00000828, rw, 0x00000A5F >;

    // fixme: Field name equals parent register name: DP2_3
    using DP2_3_ = regbits< type,  0, 12 >;  /**< Pattern value for 2/3 duty cycle  */
  };

  /**
   * Dithering Pattern DP5_7
   */
  struct DP5_7
  : public reg< uint32_t, base_addr + 0x0000082c, rw, 0x0FAF5FA5 >
  {
    using type = reg< uint32_t, base_addr + 0x0000082c, rw, 0x0FAF5FA5 >;

    // fixme: Field name equals parent register name: DP5_7
    using DP5_7_ = regbits< type,  0, 28 >;  /**< Pattern value for 5/7 duty cycle  */
  };

  /**
   * Dithering Pattern DP3_4
   */
  struct DP3_4
  : public reg< uint32_t, base_addr + 0x00000830, rw, 0x0000FAF5 >
  {
    using type = reg< uint32_t, base_addr + 0x00000830, rw, 0x0000FAF5 >;

    // fixme: Field name equals parent register name: DP3_4
    using DP3_4_ = regbits< type,  0, 16 >;  /**< Pattern value for 3/4 duty cycle  */
  };

  /**
   * Dithering Pattern DP4_5
   */
  struct DP4_5
  : public reg< uint32_t, base_addr + 0x00000834, rw, 0x000FAF5F >
  {
    using type = reg< uint32_t, base_addr + 0x00000834, rw, 0x000FAF5F >;

    // fixme: Field name equals parent register name: DP4_5
    using DP4_5_ = regbits< type,  0, 20 >;  /**< Pattern value for 4/5 duty cycle  */
  };

  /**
   * Dithering Pattern DP6_7
   */
  struct DP6_7
  : public reg< uint32_t, base_addr + 0x00000838, rw, 0x0F5FFAFF >
  {
    using type = reg< uint32_t, base_addr + 0x00000838, rw, 0x0F5FFAFF >;

    // fixme: Field name equals parent register name: DP6_7
    using DP6_7_ = regbits< type,  0, 28 >;  /**< Pattern value for 6/7 duty cycle  */
  };

  /**
   * Power Control Register
   */
  struct PWRCON
  : public reg< uint32_t, base_addr + 0x0000083c, rw, 0x0000000E >
  {
    using type = reg< uint32_t, base_addr + 0x0000083c, rw, 0x0000000E >;

    using LCD_PWR     = regbits< type,  0,  1 >;  /**< LCD module power control  */
    using GUARD_TIME  = regbits< type,  1,  7 >;
    using LCD_BUSY    = regbits< type, 31,  1 >;
  };

  /**
   * Contrast Control Register
   */
  struct CONTRAST_CTR
  : public reg< uint32_t, base_addr + 0x00000840, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000840, rw, 0x00000000 >;

    using PS   = regbits< type,  0,  2 >;
    using POL  = regbits< type,  2,  1 >;
    using ENA  = regbits< type,  3,  1 >;
  };

  /**
   * Contrast Value Register
   */
  struct CONTRAST_VAL
  : public reg< uint32_t, base_addr + 0x00000844, rw, 0x00000000 >
  {
  };

  /**
   * LCD Interrupt Enable Register
   */
  struct LCD_IER
  : public reg< uint32_t, base_addr + 0x00000848, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000848, wo, 0x00000000 >;

    using LNIE     = regbits< type,  0,  1 >;  /**< Line interrupt enable              */
    using LSTLNIE  = regbits< type,  1,  1 >;  /**< Last line interrupt enable         */
    using EOFIE    = regbits< type,  2,  1 >;  /**< DMA End of frame interrupt enable  */
    using UFLWIE   = regbits< type,  4,  1 >;  /**< FIFO underflow interrupt enable    */
    using OWRIE    = regbits< type,  5,  1 >;  /**< FIFO overwrite interrupt enable    */
    using MERIE    = regbits< type,  6,  1 >;  /**< DMA memory error interrupt enable  */
  };

  /**
   * LCD Interrupt Disable Register
   */
  struct LCD_IDR
  : public reg< uint32_t, base_addr + 0x0000084c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000084c, wo, 0x00000000 >;

    using LNID     = regbits< type,  0,  1 >;  /**< Line interrupt disable              */
    using LSTLNID  = regbits< type,  1,  1 >;  /**< Last line interrupt disable         */
    using EOFID    = regbits< type,  2,  1 >;  /**< DMA End of frame interrupt disable  */
    using UFLWID   = regbits< type,  4,  1 >;  /**< FIFO underflow interrupt disable    */
    using OWRID    = regbits< type,  5,  1 >;  /**< FIFO overwrite interrupt disable    */
    using MERID    = regbits< type,  6,  1 >;  /**< DMA Memory error interrupt disable  */
  };

  /**
   * LCD Interrupt Mask Register
   */
  struct LCD_IMR
  : public reg< uint32_t, base_addr + 0x00000850, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000850, ro, 0x00000000 >;

    using LNIM     = regbits< type,  0,  1 >;  /**< Line interrupt mask              */
    using LSTLNIM  = regbits< type,  1,  1 >;  /**< Last line interrupt mask         */
    using EOFIM    = regbits< type,  2,  1 >;  /**< DMA End of frame interrupt mask  */
    using UFLWIM   = regbits< type,  4,  1 >;  /**< FIFO underflow interrupt mask    */
    using OWRIM    = regbits< type,  5,  1 >;  /**< FIFO overwrite interrupt mask    */
    using MERIM    = regbits< type,  6,  1 >;  /**< DMA Memory error interrupt mask  */
  };

  /**
   * LCD Interrupt Status Register
   */
  struct LCD_ISR
  : public reg< uint32_t, base_addr + 0x00000854, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000854, ro, 0x00000000 >;

    using LNIS     = regbits< type,  0,  1 >;  /**< Line interrupt status              */
    using LSTLNIS  = regbits< type,  1,  1 >;  /**< Last line interrupt status         */
    using EOFIS    = regbits< type,  2,  1 >;  /**< DMA End of frame interrupt status  */
    using UFLWIS   = regbits< type,  4,  1 >;  /**< FIFO underflow interrupt status    */
    using OWRIS    = regbits< type,  5,  1 >;  /**< FIFO overwrite interrupt status    */
    using MERIS    = regbits< type,  6,  1 >;  /**< DMA Memory error interrupt status  */
  };

  /**
   * LCD Interrupt Clear Register
   */
  struct LCD_ICR
  : public reg< uint32_t, base_addr + 0x00000858, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000858, wo, 0x00000000 >;

    using LNIC     = regbits< type,  0,  1 >;  /**< Line interrupt clear              */
    using LSTLNIC  = regbits< type,  1,  1 >;  /**< Last line interrupt clear         */
    using EOFIC    = regbits< type,  2,  1 >;  /**< DMA End of frame interrupt clear  */
    using UFLWIC   = regbits< type,  4,  1 >;  /**< FIFO underflow interrupt clear    */
    using OWRIC    = regbits< type,  5,  1 >;  /**< FIFO overwrite interrupt clear    */
    using MERIC    = regbits< type,  6,  1 >;  /**< DMA Memory error interrupt clear  */
  };

  /**
   * Write Protection Control Register
   */
  struct LCD_WPCR
  : public reg< uint32_t, base_addr + 0x000008e4, rw, 0x00000000 >
  {
  };

  /**
   * Write Protection Status Register
   */
  struct LCD_WPSR
  : public reg< uint32_t, base_addr + 0x000008e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000008e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Enable            */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };

  /**
   * Palette entry
   */
  struct LUTENTRY[%s]
  : public reg< uint32_t, base_addr + 0x00000c00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_LCDC_HPP_INCLUDED
