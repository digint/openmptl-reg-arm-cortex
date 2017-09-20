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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9X35.svd"
//
//  vendor: Atmel
//  name: AT91SAM9X35
//  series: SAM9X
//  version: 20130207
//  description: Atmel AT91SAM9X35 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, LCD, Touchscreen, Ethernet, Dual CAN, HS USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9X35.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0xf8038000;

  /**
   * LCD Controller Configuration Register 0
   */
  struct LCDCFG0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using CLKPOL     = regbits< type,  0,  1 >;  /**< LCD Controller Clock Polarity                               */
    using CLKSEL     = regbits< type,  2,  1 >;  /**< LCD Controller Clock Source Selection                       */
    using CLKPWMSEL  = regbits< type,  3,  1 >;  /**< LCD Controller PWM Clock Source Selection                   */
    using CGDISBASE  = regbits< type,  8,  1 >;  /**< Clock Gating Disable Control for the Base Layer             */
    using CGDISOVR1  = regbits< type,  9,  1 >;  /**< Clock Gating Disable Control for the Overlay 1 Layer        */
    using CGDISHEO   = regbits< type, 11,  1 >;  /**< Clock Gating Disable Control for the High End Overlay       */
    using CGDISHCR   = regbits< type, 12,  1 >;  /**< Clock Gating Disable Control for the Hardware Cursor Layer  */
    using CLKDIV     = regbits< type, 16,  8 >;  /**< LCD Controller Clock Divider                                */
  };

  /**
   * LCD Controller Configuration Register 1
   */
  struct LCDCFG1
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using HSPW  = regbits< type,  0,  6 >;  /**< Horizontal Synchronization Pulse Width  */
    using VSPW  = regbits< type, 16,  6 >;  /**< Vertical Synchronization Pulse Width    */
  };

  /**
   * LCD Controller Configuration Register 2
   */
  struct LCDCFG2
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using VFPW  = regbits< type,  0,  6 >;  /**< Vertical Front Porch Width  */
    using VBPW  = regbits< type, 16,  6 >;  /**< Vertical Back Porch Width   */
  };

  /**
   * LCD Controller Configuration Register 3
   */
  struct LCDCFG3
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using HFPW  = regbits< type,  0,  8 >;  /**< Horizontal Front Porch Width  */
    using HBPW  = regbits< type, 16,  8 >;  /**< Horizontal Back Porch Width   */
  };

  /**
   * LCD Controller Configuration Register 4
   */
  struct LCDCFG4
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using PPL  = regbits< type,  0, 11 >;  /**< Number of Pixels Per Line        */
    using RPF  = regbits< type, 16, 11 >;  /**< Number of Active Rows Per Frame  */
  };

  /**
   * LCD Controller Configuration Register 5
   */
  struct LCDCFG5
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >;

    using HSPOL      = regbits< type,  0,  1 >;  /**< Horizontal Synchronization Pulse Polarity                          */
    using VSPOL      = regbits< type,  1,  1 >;  /**< Vertical Synchronization Pulse Polarity                            */
    using VSPDLYS    = regbits< type,  2,  1 >;  /**< Vertical Synchronization Pulse Start                               */
    using VSPDLYE    = regbits< type,  3,  1 >;  /**< Vertical Synchronization Pulse End                                 */
    using DISPPOL    = regbits< type,  4,  1 >;  /**< Display Signal Polarity                                            */
    using DITHER     = regbits< type,  6,  1 >;  /**< LCD Controller Dithering                                           */
    using DISPDLY    = regbits< type,  7,  1 >;  /**< LCD Controller Display Power Signal Synchronization                */
    using MODE       = regbits< type,  8,  2 >;  /**< LCD Controller Output Mode                                         */
    using VSPSU      = regbits< type, 12,  1 >;  /**< LCD Controller Vertical Synchronization Pulse Setup Configuration  */
    using VSPHO      = regbits< type, 13,  1 >;  /**< LCD Controller Vertical Synchronization Pulse Hold Configuration   */
    using GUARDTIME  = regbits< type, 16,  5 >;  /**< LCD DISPLAY Guard Time                                             */
  };

  /**
   * LCD Controller Configuration Register 6
   */
  struct LCDCFG6
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using PWMPS    = regbits< type,  0,  3 >;  /**< PWM Clock Prescaler                 */
    using PWMPOL   = regbits< type,  4,  1 >;  /**< LCD Controller PWM Signal Polarity  */
    using PWMCVAL  = regbits< type,  8,  8 >;  /**< LCD Controller PWM Compare Value    */
  };

  /**
   * LCD Controller Enable Register
   */
  struct LCDEN
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0 >;

    using CLKEN   = regbits< type,  0,  1 >;  /**< LCD Controller Pixel Clock Enable                              */
    using SYNCEN  = regbits< type,  1,  1 >;  /**< LCD Controller Horizontal and Vertical Synchronization Enable  */
    using DISPEN  = regbits< type,  2,  1 >;  /**< LCD Controller DISP Signal Enable                              */
    using PWMEN   = regbits< type,  3,  1 >;  /**< LCD Controller Pulse Width Modulation Enable                   */
  };

  /**
   * LCD Controller Disable Register
   */
  struct LCDDIS
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using CLKDIS   = regbits< type,  0,  1 >;  /**< LCD Controller Pixel Clock Disable                              */
    using SYNCDIS  = regbits< type,  1,  1 >;  /**< LCD Controller Horizontal and Vertical Synchronization Disable  */
    using DISPDIS  = regbits< type,  2,  1 >;  /**< LCD Controller DISP Signal Disable                              */
    using PWMDIS   = regbits< type,  3,  1 >;  /**< LCD Controller Pulse Width Modulation Disable                   */
    using CLKRST   = regbits< type,  8,  1 >;  /**< LCD Controller Clock Reset                                      */
    using SYNCRST  = regbits< type,  9,  1 >;  /**< LCD Controller Horizontal and Vertical Synchronization Reset    */
    using DISPRST  = regbits< type, 10,  1 >;  /**< LCD Controller DISP Signal Reset                                */
    using PWMRST   = regbits< type, 11,  1 >;  /**< LCD Controller PWM Reset                                        */
  };

  /**
   * LCD Controller Status Register
   */
  struct LCDSR
  : public reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >;

    using CLKSTS   = regbits< type,  0,  1 >;  /**< Clock Status                           */
    using LCDSTS   = regbits< type,  1,  1 >;  /**< LCD Controller Synchronization status  */
    using DISPSTS  = regbits< type,  2,  1 >;  /**< LCD Controller DISP Signal Status      */
    using PWMSTS   = regbits< type,  3,  1 >;  /**< LCD Controller PWM Signal Status       */
    using SIPSTS   = regbits< type,  4,  1 >;  /**< Synchronization In Progress            */
  };

  /**
   * LCD Controller Interrupt Enable Register
   */
  struct LCDIER
  : public reg< uint32_t, base_addr + 0x0000002c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, wo, 0 >;

    using SOFIE      = regbits< type,  0,  1 >;  /**< Start of Frame Interrupt Enable Register                     */
    using DISIE      = regbits< type,  1,  1 >;  /**< LCD Disable Interrupt Enable Register                        */
    using DISPIE     = regbits< type,  2,  1 >;  /**< Power UP/Down Sequence Terminated Interrupt Enable Register  */
    using FIFOERRIE  = regbits< type,  4,  1 >;  /**< Output FIFO Error Interrupt Enable Register                  */
    using BASEIE     = regbits< type,  8,  1 >;  /**< Base Layer Interrupt Enable Register                         */
    using OVR1IE     = regbits< type,  9,  1 >;  /**< Overlay 1 Interrupt Enable Register                          */
    using HEOIE      = regbits< type, 10,  1 >;  /**< High End Overlay Interrupt Enable Register                   */
    using HCRIE      = regbits< type, 11,  1 >;  /**< Hardware Cursor Interrupt Enable Register                    */
  };

  /**
   * LCD Controller Interrupt Disable Register
   */
  struct LCDIDR
  : public reg< uint32_t, base_addr + 0x00000030, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, wo, 0 >;

    using SOFID      = regbits< type,  0,  1 >;  /**< Start of Frame Interrupt Disable Register                     */
    using DISID      = regbits< type,  1,  1 >;  /**< LCD Disable Interrupt Disable Register                        */
    using DISPID     = regbits< type,  2,  1 >;  /**< Power UP/Down Sequence Terminated Interrupt Disable Register  */
    using FIFOERRID  = regbits< type,  4,  1 >;  /**< Output FIFO Error Interrupt Disable Register                  */
    using BASEID     = regbits< type,  8,  1 >;  /**< Base Layer Interrupt Disable Register                         */
    using OVR1ID     = regbits< type,  9,  1 >;  /**< Overlay 1 Interrupt Disable Register                          */
    using HEOID      = regbits< type, 10,  1 >;  /**< High End Overlay Interrupt Disable Register                   */
    using HCRID      = regbits< type, 11,  1 >;  /**< Hardware Cursor Interrupt Disable Register                    */
  };

  /**
   * LCD Controller Interrupt Mask Register
   */
  struct LCDIMR
  : public reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >;

    using SOFIM      = regbits< type,  0,  1 >;  /**< Start of Frame Interrupt Mask Register                     */
    using DISIM      = regbits< type,  1,  1 >;  /**< LCD Disable Interrupt Mask Register                        */
    using DISPIM     = regbits< type,  2,  1 >;  /**< Power UP/Down Sequence Terminated Interrupt Mask Register  */
    using FIFOERRIM  = regbits< type,  4,  1 >;  /**< Output FIFO Error Interrupt Mask Register                  */
    using BASEIM     = regbits< type,  8,  1 >;  /**< Base Layer Interrupt Mask Register                         */
    using OVR1IM     = regbits< type,  9,  1 >;  /**< Overlay 1 Interrupt Mask Register                          */
    using HEOIM      = regbits< type, 10,  1 >;  /**< High End Overlay Interrupt Mask Register                   */
    using HCRIM      = regbits< type, 11,  1 >;  /**< Hardware Cursor Interrupt Mask Register                    */
  };

  /**
   * LCD Controller Interrupt Status Register
   */
  struct LCDISR
  : public reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >;

    using SOF      = regbits< type,  0,  1 >;  /**< Start of Frame Interrupt Status Register                           */
    using DIS      = regbits< type,  1,  1 >;  /**< LCD Disable Interrupt Status Register                              */
    using DISP     = regbits< type,  2,  1 >;  /**< Power-up/Power-down Sequence Terminated Interrupt Status Register  */
    using FIFOERR  = regbits< type,  4,  1 >;  /**< Output FIFO Error                                                  */
    using BASE     = regbits< type,  8,  1 >;  /**< Base Layer Raw Interrupt Status Register                           */
    using OVR1     = regbits< type,  9,  1 >;  /**< Overlay 1 Raw Interrupt Status Register                            */
    using HEO      = regbits< type, 10,  1 >;  /**< High End Overlay Raw Interrupt Status Register                     */
    using HCR      = regbits< type, 11,  1 >;  /**< Hardware Cursor Raw Interrupt Status Register                      */
  };

  /**
   * Base Layer Channel Enable Register
   */
  struct BASECHER
  : public reg< uint32_t, base_addr + 0x00000040, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, wo, 0x00000000 >;

    using CHEN      = regbits< type,  0,  1 >;  /**< Channel Enable Register                    */
    using UPDATEEN  = regbits< type,  1,  1 >;  /**< Update Overlay Attributes Enable Register  */
    using A2QEN     = regbits< type,  2,  1 >;  /**< Add Head Pointer Enable Register           */
  };

  /**
   * Base Layer Channel Disable Register
   */
  struct BASECHDR
  : public reg< uint32_t, base_addr + 0x00000044, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, wo, 0x00000000 >;

    using CHDIS  = regbits< type,  0,  1 >;  /**< Channel Disable Register  */
    using CHRST  = regbits< type,  8,  1 >;  /**< Channel Reset Register    */
  };

  /**
   * Base Layer Channel Status Register
   */
  struct BASECHSR
  : public reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >;

    using CHSR      = regbits< type,  0,  1 >;  /**< Channel Status Register                */
    using UPDATESR  = regbits< type,  1,  1 >;  /**< Update Overlay Attributes In Progress  */
    using A2QSR     = regbits< type,  2,  1 >;  /**< Add To Queue Pending Register          */
  };

  /**
   * Base Layer Interrupt Enable Register
   */
  struct BASEIER
  : public reg< uint32_t, base_addr + 0x0000004c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, wo, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable Register     */
    using DSCR  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable Register       */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Enable Register  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable Register             */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Interrupt Enable Register                */
  };

  /**
   * Base Layer Interrupt Disabled Register
   */
  struct BASEIDR
  : public reg< uint32_t, base_addr + 0x00000050, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, wo, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Disable Register     */
    using DSCR  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Disable Register       */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Disable Register  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Interrupt Disable Register             */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Interrupt Disable Register                */
  };

  /**
   * Base Layer Interrupt Mask Register
   */
  struct BASEIMR
  : public reg< uint32_t, base_addr + 0x00000054, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, ro, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Mask Register     */
    using DSCR  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Mask Register       */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Mask Register  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Interrupt Mask Register             */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Interrupt Mask Register                */
  };

  /**
   * Base Layer Interrupt status Register
   */
  struct BASEISR
  : public reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer     */
    using DSCR  = regbits< type,  3,  1 >;  /**< DMA Descriptor Loaded   */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Detected    */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Detected       */
  };

  /**
   * Base Layer DMA Head Register
   */
  struct BASEHEAD
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >;

    using HEAD  = regbits< type,  2, 30 >;  /**< DMA Head Pointer  */
  };

  /**
   * Base Layer DMA Address Register
   */
  struct BASEADDR
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< DMA Transfer Start Address  */
  };

  /**
   * Base Layer DMA Control Register
   */
  struct BASECTRL
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >;

    using DFETCH   = regbits< type,  0,  1 >;  /**< Transfer Descriptor Fetch Enable               */
    using LFETCH   = regbits< type,  1,  1 >;  /**< Lookup Table Fetch Enable                      */
    using DMAIEN   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable           */
    using DSCRIEN  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable             */
    using ADDIEN   = regbits< type,  4,  1 >;  /**< Add Head Descriptor to Queue Interrupt Enable  */
    using DONEIEN  = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable                   */
  };

  /**
   * Base Layer DMA Next Register
   */
  struct BASENEXT
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >;

    using NEXT  = regbits< type,  0, 32 >;  /**< DMA Descriptor Next Address  */
  };

  /**
   * Base Layer Configuration Register 0
   */
  struct BASECFG0
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >;

    using BLEN  = regbits< type,  4,  2 >;  /**< AHB Burst Length                                        */
    using DLBO  = regbits< type,  8,  1 >;  /**< Defined Length Burst Only For Channel Bus Transaction.  */
  };

  /**
   * Base Layer Configuration Register 1
   */
  struct BASECFG1
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >;

    using CLUTEN    = regbits< type,  0,  1 >;  /**< Color Lookup Table Enable                */
    using RGBMODE   = regbits< type,  4,  4 >;  /**< RGB Input Mode Selection                 */
    using CLUTMODE  = regbits< type,  8,  2 >;  /**< Color Lookup Table Input Mode Selection  */
  };

  /**
   * Base Layer Configuration Register 2
   */
  struct BASECFG2
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >;

    using XSTRIDE  = regbits< type,  0, 32 >;  /**< Horizontal Stride  */
  };

  /**
   * Base Layer Configuration Register 3
   */
  struct BASECFG3
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0x00000000 >;

    using BDEF  = regbits< type,  0,  8 >;  /**< Blue Default   */
    using GDEF  = regbits< type,  8,  8 >;  /**< Green Default  */
    using RDEF  = regbits< type, 16,  8 >;  /**< Red Default    */
  };

  /**
   * Base Layer Configuration Register 4
   */
  struct BASECFG4
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >;

    using DMA  = regbits< type,  8,  1 >;  /**< Use DMA Data Path                                     */
    using REP  = regbits< type,  9,  1 >;  /**< Use Replication logic to expand RGB color to 24 bits  */
  };

  /**
   * Overlay 1 Channel Enable Register
   */
  struct OVRCHER1
  : public reg< uint32_t, base_addr + 0x00000100, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, wo, 0x00000000 >;

    using CHEN      = regbits< type,  0,  1 >;  /**< Channel Enable Register                    */
    using UPDATEEN  = regbits< type,  1,  1 >;  /**< Update Overlay Attributes Enable Register  */
    using A2QEN     = regbits< type,  2,  1 >;  /**< Add Head Pointer Enable Register           */
  };

  /**
   * Overlay 1 Channel Disable Register
   */
  struct OVRCHDR1
  : public reg< uint32_t, base_addr + 0x00000104, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, wo, 0x00000000 >;

    using CHDIS  = regbits< type,  0,  1 >;  /**< Channel Disable Register  */
    using CHRST  = regbits< type,  8,  1 >;  /**< Channel Reset Register    */
  };

  /**
   * Overlay 1 Channel Status Register
   */
  struct OVRCHSR1
  : public reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >;

    using CHSR      = regbits< type,  0,  1 >;  /**< Channel Status Register                */
    using UPDATESR  = regbits< type,  1,  1 >;  /**< Update Overlay Attributes In Progress  */
    using A2QSR     = regbits< type,  2,  1 >;  /**< Add to Queue Pending Register          */
  };

  /**
   * Overlay 1 Interrupt Enable Register
   */
  struct OVRIER1
  : public reg< uint32_t, base_addr + 0x0000010c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, wo, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable Register     */
    using DSCR  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable Register       */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Enable Register  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable Register             */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Interrupt Enable Register                */
  };

  /**
   * Overlay 1 Interrupt Disable Register
   */
  struct OVRIDR1
  : public reg< uint32_t, base_addr + 0x00000110, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, wo, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Disable Register     */
    using DSCR  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Disable Register       */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Disable Register  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Interrupt Disable Register             */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Interrupt Disable Register                */
  };

  /**
   * Overlay 1 Interrupt Mask Register
   */
  struct OVRIMR1
  : public reg< uint32_t, base_addr + 0x00000114, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, ro, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Mask Register     */
    using DSCR  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Mask Register       */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Mask Register  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Interrupt Mask Register             */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Interrupt Mask Register                */
  };

  /**
   * Overlay 1 Interrupt Status Register
   */
  struct OVRISR1
  : public reg< uint32_t, base_addr + 0x00000118, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, ro, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer            */
    using DSCR  = regbits< type,  3,  1 >;  /**< DMA Descriptor Loaded          */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded         */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Detected Register  */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Detected              */
  };

  /**
   * Overlay 1 DMA Head Register
   */
  struct OVRHEAD1
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >;

    using HEAD  = regbits< type,  2, 30 >;  /**< DMA Head Pointer  */
  };

  /**
   * Overlay 1 DMA Address Register
   */
  struct OVRADDR1
  : public reg< uint32_t, base_addr + 0x00000120, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< DMA Transfer Overlay 1 Address  */
  };

  /**
   * Overlay1 DMA Control Register
   */
  struct OVRCTRL1
  : public reg< uint32_t, base_addr + 0x00000124, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, rw, 0x00000000 >;

    using DFETCH   = regbits< type,  0,  1 >;  /**< Transfer Descriptor Fetch Enable               */
    using LFETCH   = regbits< type,  1,  1 >;  /**< Lookup Table Fetch Enable                      */
    using DMAIEN   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable           */
    using DSCRIEN  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable             */
    using ADDIEN   = regbits< type,  4,  1 >;  /**< Add Head Descriptor to Queue Interrupt Enable  */
    using DONEIEN  = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable                   */
  };

  /**
   * Overlay1 DMA Next Register
   */
  struct OVRNEXT1
  : public reg< uint32_t, base_addr + 0x00000128, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, rw, 0x00000000 >;

    using NEXT  = regbits< type,  0, 32 >;  /**< DMA Descriptor Next Address  */
  };

  /**
   * Overlay 1 Configuration 0 Register
   */
  struct OVR1CFG0
  : public reg< uint32_t, base_addr + 0x0000012c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000012c, rw, 0x00000000 >;

    using BLEN     = regbits< type,  4,  2 >;  /**< AHB Burst Length                                        */
    using DLBO     = regbits< type,  8,  1 >;  /**< Defined Length Burst Only for Channel Bus Transaction.  */
    using ROTDIS   = regbits< type, 12,  1 >;  /**< Hardware Rotation Optimization Disable                  */
    using LOCKDIS  = regbits< type, 13,  1 >;  /**< Hardware Rotation Lock Disable                          */
  };

  /**
   * Overlay 1 Configuration 1 Register
   */
  struct OVR1CFG1
  : public reg< uint32_t, base_addr + 0x00000130, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, rw, 0x00000000 >;

    using CLUTEN    = regbits< type,  0,  1 >;  /**< Color Lookup Table Enable                */
    using RGBMODE   = regbits< type,  4,  4 >;  /**< RGB Input Mode Selection                 */
    using CLUTMODE  = regbits< type,  8,  2 >;  /**< Color Lookup table input mode selection  */
  };

  /**
   * Overlay 1 Configuration 2 Register
   */
  struct OVR1CFG2
  : public reg< uint32_t, base_addr + 0x00000134, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, rw, 0x00000000 >;

    using XPOS  = regbits< type,  0, 11 >;  /**< Horizontal Window Position  */
    using YPOS  = regbits< type, 16, 11 >;  /**< Vertical Window Position    */
  };

  /**
   * Overlay 1 Configuration 3 Register
   */
  struct OVR1CFG3
  : public reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >;

    using XSIZE  = regbits< type,  0, 11 >;  /**< Horizontal Window Size  */
    using YSIZE  = regbits< type, 16, 11 >;  /**< Vertical Window Size    */
  };

  /**
   * Overlay 1 Configuration 4 Register
   */
  struct OVR1CFG4
  : public reg< uint32_t, base_addr + 0x0000013c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000013c, rw, 0x00000000 >;

    using XSTRIDE  = regbits< type,  0, 32 >;  /**< Horizontal Stride  */
  };

  /**
   * Overlay 1 Configuration 5 Register
   */
  struct OVR1CFG5
  : public reg< uint32_t, base_addr + 0x00000140, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000140, rw, 0x00000000 >;

    using PSTRIDE  = regbits< type,  0, 32 >;  /**< Pixel Stride  */
  };

  /**
   * Overlay 1 Configuration 6 Register
   */
  struct OVR1CFG6
  : public reg< uint32_t, base_addr + 0x00000144, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, rw, 0x00000000 >;

    using BDEF  = regbits< type,  0,  8 >;  /**< Blue Default   */
    using GDEF  = regbits< type,  8,  8 >;  /**< Green Default  */
    using RDEF  = regbits< type, 16,  8 >;  /**< Red Default    */
  };

  /**
   * Overlay 1 Configuration 7 Register
   */
  struct OVR1CFG7
  : public reg< uint32_t, base_addr + 0x00000148, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000148, rw, 0x00000000 >;

    using BKEY  = regbits< type,  0,  8 >;  /**< Blue Color Component Chroma Key   */
    using GKEY  = regbits< type,  8,  8 >;  /**< Green Color Component Chroma Key  */
    using RKEY  = regbits< type, 16,  8 >;  /**< Red Color Component Chroma Key    */
  };

  /**
   * Overlay 1 Configuration 8 Register
   */
  struct OVR1CFG8
  : public reg< uint32_t, base_addr + 0x0000014c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000014c, rw, 0x00000000 >;

    using BMASK  = regbits< type,  0,  8 >;  /**< Blue Color Component Chroma Key Mask   */
    using GMASK  = regbits< type,  8,  8 >;  /**< Green Color Component Chroma Key Mask  */
    using RMASK  = regbits< type, 16,  8 >;  /**< Red Color Component Chroma Key Mask    */
  };

  /**
   * Overlay 1 Configuration 9 Register
   */
  struct OVR1CFG9
  : public reg< uint32_t, base_addr + 0x00000150, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000150, rw, 0x00000000 >;

    using CRKEY     = regbits< type,  0,  1 >;  /**< Blender Chroma Key Enable                             */
    using INV       = regbits< type,  1,  1 >;  /**< Blender Inverted Blender Output Enable                */
    using ITER2BL   = regbits< type,  2,  1 >;  /**< Blender Iterated Color Enable                         */
    using ITER      = regbits< type,  3,  1 >;  /**< Blender Use Iterated Color                            */
    using REVALPHA  = regbits< type,  4,  1 >;  /**< Blender Reverse Alpha                                 */
    using GAEN      = regbits< type,  5,  1 >;  /**< Blender Global Alpha Enable                           */
    using LAEN      = regbits< type,  6,  1 >;  /**< Blender Local Alpha Enable                            */
    using OVR       = regbits< type,  7,  1 >;  /**< Blender Overlay Layer Enable                          */
    using DMA       = regbits< type,  8,  1 >;  /**< Blender DMA Layer Enable                              */
    using REP       = regbits< type,  9,  1 >;  /**< Use Replication logic to expand RGB color to 24 bits  */
    using DSTKEY    = regbits< type, 10,  1 >;  /**< Destination Chroma Keying                             */
    using GA        = regbits< type, 16,  8 >;  /**< Blender Global Alpha                                  */
  };

  /**
   * High End Overlay Channel Enable Register
   */
  struct HEOCHER
  : public reg< uint32_t, base_addr + 0x00000280, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000280, wo, 0x00000000 >;

    using CHEN      = regbits< type,  0,  1 >;  /**< Channel Enable Register                    */
    using UPDATEEN  = regbits< type,  1,  1 >;  /**< Update Overlay Attributes Enable Register  */
    using A2QEN     = regbits< type,  2,  1 >;  /**< Add Head Pointer Enable Register           */
  };

  /**
   * High End Overlay Channel Disable Register
   */
  struct HEOCHDR
  : public reg< uint32_t, base_addr + 0x00000284, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000284, wo, 0x00000000 >;

    using CHDIS  = regbits< type,  0,  1 >;  /**< Channel Disable Register  */
    using CHRST  = regbits< type,  8,  1 >;  /**< Channel Reset Register    */
  };

  /**
   * High End Overlay Channel Status Register
   */
  struct HEOCHSR
  : public reg< uint32_t, base_addr + 0x00000288, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000288, ro, 0x00000000 >;

    using CHSR      = regbits< type,  0,  1 >;  /**< Channel Status Register                */
    using UPDATESR  = regbits< type,  1,  1 >;  /**< Update Overlay Attributes In Progress  */
    using A2QSR     = regbits< type,  2,  1 >;  /**< Add To Queue Pending Register          */
  };

  /**
   * High End Overlay Interrupt Enable Register
   */
  struct HEOIER
  : public reg< uint32_t, base_addr + 0x0000028c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000028c, wo, 0x00000000 >;

    using DMA    = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable Register                             */
    using DSCR   = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable Register                               */
    using ADD    = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Enable Register                          */
    using DONE   = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable Register                                     */
    using OVR    = regbits< type,  6,  1 >;  /**< Overflow Interrupt Enable Register                                        */
    using UDMA   = regbits< type, 10,  1 >;  /**< End of DMA Transfer for U or UV Chrominance Interrupt Enable Register     */
    using UDSCR  = regbits< type, 11,  1 >;  /**< Descriptor Loaded for U or UV Chrominance Interrupt Enable Register       */
    using UADD   = regbits< type, 12,  1 >;  /**< Head Descriptor Loaded for U or UV Chrominance Interrupt Enable Register  */
    using UDONE  = regbits< type, 13,  1 >;  /**< End of List for U or UV Chrominance Interrupt Enable Register             */
    using UOVR   = regbits< type, 14,  1 >;  /**< Overflow for U or UV Chrominance Interrupt Enable Register                */
    using VDMA   = regbits< type, 18,  1 >;  /**< End of DMA for V Chrominance Transfer Interrupt Enable Register           */
    using VDSCR  = regbits< type, 19,  1 >;  /**< Descriptor Loaded for V Chrominance Interrupt Enable Register             */
    using VADD   = regbits< type, 20,  1 >;  /**< Head Descriptor Loaded for V Chrominance Interrupt Enable Register        */
    using VDONE  = regbits< type, 21,  1 >;  /**< End of List for V Chrominance Interrupt Enable Register                   */
    using VOVR   = regbits< type, 22,  1 >;  /**< Overflow for V Chrominance Interrupt Enable Register                      */
  };

  /**
   * High End Overlay Interrupt Disable Register
   */
  struct HEOIDR
  : public reg< uint32_t, base_addr + 0x00000290, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000290, wo, 0x00000000 >;

    using DMA    = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Disable Register                                       */
    using DSCR   = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Disable Register                                         */
    using ADD    = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Disable Register                                    */
    using DONE   = regbits< type,  5,  1 >;  /**< End of List Interrupt Disable Register                                               */
    using OVR    = regbits< type,  6,  1 >;  /**< Overflow Interrupt Disable Register                                                  */
    using UDMA   = regbits< type, 10,  1 >;  /**< End of DMA Transfer for U or UV Chrominance Component Interrupt Disable Register     */
    using UDSCR  = regbits< type, 11,  1 >;  /**< Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Register       */
    using UADD   = regbits< type, 12,  1 >;  /**< Head Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Register  */
    using UDONE  = regbits< type, 13,  1 >;  /**< End of List Interrupt for U or UV Chrominance Component Disable Register             */
    using UOVR   = regbits< type, 14,  1 >;  /**< Overflow Interrupt for U or UV Chrominance Component Disable Register                */
    using VDMA   = regbits< type, 18,  1 >;  /**< End of DMA Transfer for V Chrominance Component Interrupt Disable Register           */
    using VDSCR  = regbits< type, 19,  1 >;  /**< Descriptor Loaded for V Chrominance Component Interrupt Disable Register             */
    using VADD   = regbits< type, 20,  1 >;  /**< Head Descriptor Loaded for V Chrominance Component Interrupt Disable Register        */
    using VDONE  = regbits< type, 21,  1 >;  /**< End of List for V Chrominance Component Interrupt Disable Register                   */
    using VOVR   = regbits< type, 22,  1 >;  /**< Overflow for V Chrominance Component Interrupt Disable Register                      */
  };

  /**
   * High End Overlay Interrupt Mask Register
   */
  struct HEOIMR
  : public reg< uint32_t, base_addr + 0x00000294, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000294, ro, 0x00000000 >;

    using DMA    = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Mask Register                                    */
    using DSCR   = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Mask Register                                      */
    using ADD    = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Mask Register                                 */
    using DONE   = regbits< type,  5,  1 >;  /**< End of List Interrupt Mask Register                                            */
    using OVR    = regbits< type,  6,  1 >;  /**< Overflow Interrupt Mask Register                                               */
    using UDMA   = regbits< type, 10,  1 >;  /**< End of DMA Transfer for U or UV Chrominance Component Interrupt Mask Register  */
    using UDSCR  = regbits< type, 11,  1 >;  /**< Descriptor Loaded for U or UV Chrominance Component Interrupt Mask Register    */
    using UADD   = regbits< type, 12,  1 >;  /**< Head Descriptor Loaded for U or UV Chrominance Component Mask Register         */
    using UDONE  = regbits< type, 13,  1 >;  /**< End of List for U or UV Chrominance Component Mask Register                    */
    using UOVR   = regbits< type, 14,  1 >;  /**< Overflow for U Chrominance Interrupt Mask Register                             */
    using VDMA   = regbits< type, 18,  1 >;  /**< End of DMA Transfer for V Chrominance Component Interrupt Mask Register        */
    using VDSCR  = regbits< type, 19,  1 >;  /**< Descriptor Loaded for V Chrominance Component Interrupt Mask Register          */
    using VADD   = regbits< type, 20,  1 >;  /**< Head Descriptor Loaded for V Chrominance Component Mask Register               */
    using VDONE  = regbits< type, 21,  1 >;  /**< End of List for V Chrominance Component Mask Register                          */
    using VOVR   = regbits< type, 22,  1 >;  /**< Overflow for V Chrominance Interrupt Mask Register                             */
  };

  /**
   * High End Overlay Interrupt Status Register
   */
  struct HEOISR
  : public reg< uint32_t, base_addr + 0x00000298, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000298, ro, 0x00000000 >;

    using DMA    = regbits< type,  2,  1 >;  /**< End of DMA Transfer                     */
    using DSCR   = regbits< type,  3,  1 >;  /**< DMA Descriptor Loaded                   */
    using ADD    = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded                  */
    using DONE   = regbits< type,  5,  1 >;  /**< End of List Detected                    */
    using OVR    = regbits< type,  6,  1 >;  /**< Overflow Detected                       */
    using UDMA   = regbits< type, 10,  1 >;  /**< End of DMA Transfer for U component     */
    using UDSCR  = regbits< type, 11,  1 >;  /**< DMA Descriptor Loaded for U component   */
    using UADD   = regbits< type, 12,  1 >;  /**< Head Descriptor Loaded for U component  */
    using UDONE  = regbits< type, 13,  1 >;  /**< End of List Detected for U component    */
    using UOVR   = regbits< type, 14,  1 >;  /**< Overflow Detected for U component       */
    using VDMA   = regbits< type, 18,  1 >;  /**< End of DMA Transfer for V component     */
    using VDSCR  = regbits< type, 19,  1 >;  /**< DMA Descriptor Loaded for V component   */
    using VADD   = regbits< type, 20,  1 >;  /**< Head Descriptor Loaded for V component  */
    using VDONE  = regbits< type, 21,  1 >;  /**< End of List Detected for V component    */
    using VOVR   = regbits< type, 22,  1 >;  /**< Overflow Detected for V component       */
  };

  /**
   * High End Overlay DMA Head Register
   */
  struct HEOHEAD
  : public reg< uint32_t, base_addr + 0x0000029c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000029c, rw, 0x00000000 >;

    using HEAD  = regbits< type,  2, 30 >;  /**< DMA Head Pointer  */
  };

  /**
   * High End Overlay DMA Address Register
   */
  struct HEOADDR
  : public reg< uint32_t, base_addr + 0x000002a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a0, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< DMA Transfer start Address  */
  };

  /**
   * High End Overlay DMA Control Register
   */
  struct HEOCTRL
  : public reg< uint32_t, base_addr + 0x000002a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a4, rw, 0x00000000 >;

    using DFETCH   = regbits< type,  0,  1 >;  /**< Transfer Descriptor Fetch Enable               */
    using LFETCH   = regbits< type,  1,  1 >;  /**< Lookup Table Fetch Enable                      */
    using DMAIEN   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable           */
    using DSCRIEN  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable             */
    using ADDIEN   = regbits< type,  4,  1 >;  /**< Add Head Descriptor to Queue Interrupt Enable  */
    using DONEIEN  = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable                   */
  };

  /**
   * High End Overlay DMA Next Register
   */
  struct HEONEXT
  : public reg< uint32_t, base_addr + 0x000002a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a8, rw, 0x00000000 >;

    using NEXT  = regbits< type,  0, 32 >;  /**< DMA Descriptor Next Address  */
  };

  /**
   * High End Overlay U DMA Head Register
   */
  struct HEOUHEAD
  : public reg< uint32_t, base_addr + 0x000002ac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002ac, rw, 0x00000000 >;

    using UHEAD  = regbits< type,  0, 32 >;  /**< DMA Head Pointer  */
  };

  /**
   * High End Overlay U DMA Address Register
   */
  struct HEOUADDR
  : public reg< uint32_t, base_addr + 0x000002b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002b0, rw, 0x00000000 >;

    using UADDR  = regbits< type,  0, 32 >;  /**< DMA Transfer Start Address for U or UV Chrominance  */
  };

  /**
   * High End Overlay U DMA Control Register
   */
  struct HEOUCTRL
  : public reg< uint32_t, base_addr + 0x000002b4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002b4, rw, 0x00000000 >;

    using UDFETCH   = regbits< type,  0,  1 >;  /**< Transfer Descriptor Fetch Enable               */
    using UDMAIEN   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable           */
    using UDSCRIEN  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable             */
    using UADDIEN   = regbits< type,  4,  1 >;  /**< Add Head Descriptor to Queue Interrupt Enable  */
    using UDONEIEN  = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable                   */
  };

  /**
   * High End Overlay U DMA Next Register
   */
  struct HEOUNEXT
  : public reg< uint32_t, base_addr + 0x000002b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002b8, rw, 0x00000000 >;

    using UNEXT  = regbits< type,  0, 32 >;  /**< DMA Descriptor Next Address  */
  };

  /**
   * High End Overlay V DMA Head Register
   */
  struct HEOVHEAD
  : public reg< uint32_t, base_addr + 0x000002bc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002bc, rw, 0x00000000 >;

    using VHEAD  = regbits< type,  0, 32 >;  /**< DMA Head Pointer  */
  };

  /**
   * High End Overlay V DMA Address Register
   */
  struct HEOVADDR
  : public reg< uint32_t, base_addr + 0x000002c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c0, rw, 0x00000000 >;

    using VADDR  = regbits< type,  0, 32 >;  /**< DMA Transfer Start Address for V Chrominance  */
  };

  /**
   * High End Overlay V DMA Control Register
   */
  struct HEOVCTRL
  : public reg< uint32_t, base_addr + 0x000002c4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c4, rw, 0x00000000 >;

    using VDFETCH   = regbits< type,  0,  1 >;  /**< Transfer Descriptor Fetch Enable               */
    using VDMAIEN   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable           */
    using VDSCRIEN  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable             */
    using VADDIEN   = regbits< type,  4,  1 >;  /**< Add Head Descriptor to Queue Interrupt Enable  */
    using VDONEIEN  = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable                   */
  };

  /**
   * High End Overlay VDMA Next Register
   */
  struct HEOVNEXT
  : public reg< uint32_t, base_addr + 0x000002c8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c8, rw, 0x00000000 >;

    using VNEXT  = regbits< type,  0, 32 >;  /**< DMA Descriptor Next Address  */
  };

  /**
   * High End Overlay Configuration Register 0
   */
  struct HEOCFG0
  : public reg< uint32_t, base_addr + 0x000002cc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002cc, rw, 0x00000000 >;

    using BLEN     = regbits< type,  4,  2 >;  /**< AHB Burst Length                                       */
    using BLENUV   = regbits< type,  6,  2 >;  /**< AHB Burst Length for U-V Channel                       */
    using DLBO     = regbits< type,  8,  1 >;  /**< Defined Length Burst Only For Channel Bus Transaction  */
    using ROTDIS   = regbits< type, 12,  1 >;  /**< Hardware Rotation Optimization Disable                 */
    using LOCKDIS  = regbits< type, 13,  1 >;  /**< Hardware Rotation Lock Disable                         */
  };

  /**
   * High End Overlay Configuration Register 1
   */
  struct HEOCFG1
  : public reg< uint32_t, base_addr + 0x000002d0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d0, rw, 0x00000000 >;

    using CLUTEN     = regbits< type,  0,  1 >;  /**< Color Lookup Table Enable                */
    using YUVEN      = regbits< type,  1,  1 >;  /**< YUV Color Space Enable                   */
    using RGBMODE    = regbits< type,  4,  4 >;  /**< RGB input mode selection                 */
    using CLUTMODE   = regbits< type,  8,  2 >;  /**< Color Lookup table input mode selection  */
    using YUVMODE    = regbits< type, 12,  4 >;  /**< YUV input mode selection                 */
    using YUV422ROT  = regbits< type, 16,  1 >;  /**< YUV 4:2:2 Rotation                       */
    using YUV422SWP  = regbits< type, 17,  1 >;  /**< YUV 4:2:2 SWAP                           */
  };

  /**
   * High End Overlay Configuration Register 2
   */
  struct HEOCFG2
  : public reg< uint32_t, base_addr + 0x000002d4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d4, rw, 0x00000000 >;

    using XPOS  = regbits< type,  0, 11 >;  /**< Horizontal Window Position  */
    using YPOS  = regbits< type, 16, 11 >;  /**< Vertical Window Position    */
  };

  /**
   * High End Overlay Configuration Register 3
   */
  struct HEOCFG3
  : public reg< uint32_t, base_addr + 0x000002d8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d8, rw, 0x00000000 >;

    using XSIZE  = regbits< type,  0, 11 >;  /**< Horizontal Window Size  */
    using YSIZE  = regbits< type, 16, 11 >;  /**< Vertical Window Size    */
  };

  /**
   * High End Overlay Configuration Register 4
   */
  struct HEOCFG4
  : public reg< uint32_t, base_addr + 0x000002dc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002dc, rw, 0x00000000 >;

    using XMEM_SIZE  = regbits< type,  0, 11 >;  /**< Horizontal image Size in Memory  */
    using YMEM_SIZE  = regbits< type, 16, 11 >;  /**< Vertical image Size in Memory    */
  };

  /**
   * High End Overlay Configuration Register 5
   */
  struct HEOCFG5
  : public reg< uint32_t, base_addr + 0x000002e0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e0, rw, 0x00000000 >;

    using XSTRIDE  = regbits< type,  0, 32 >;  /**< Horizontal Stride  */
  };

  /**
   * High End Overlay Configuration Register 6
   */
  struct HEOCFG6
  : public reg< uint32_t, base_addr + 0x000002e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e4, rw, 0x00000000 >;

    using PSTRIDE  = regbits< type,  0, 32 >;  /**< Pixel Stride  */
  };

  /**
   * High End Overlay Configuration Register 7
   */
  struct HEOCFG7
  : public reg< uint32_t, base_addr + 0x000002e8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e8, rw, 0x00000000 >;

    using UVXSTRIDE  = regbits< type,  0, 32 >;  /**< UV Horizontal Stride  */
  };

  /**
   * High End Overlay Configuration Register 8
   */
  struct HEOCFG8
  : public reg< uint32_t, base_addr + 0x000002ec, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002ec, rw, 0x00000000 >;

    using UVPSTRIDE  = regbits< type,  0, 32 >;  /**< UV Pixel Stride  */
  };

  /**
   * High End Overlay Configuration Register 9
   */
  struct HEOCFG9
  : public reg< uint32_t, base_addr + 0x000002f0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002f0, rw, 0x00000000 >;

    using BDEF  = regbits< type,  0,  8 >;  /**< Blue Default   */
    using GDEF  = regbits< type,  8,  8 >;  /**< Green Default  */
    using RDEF  = regbits< type, 16,  8 >;  /**< Red Default    */
  };

  /**
   * High End Overlay Configuration Register 10
   */
  struct HEOCFG10
  : public reg< uint32_t, base_addr + 0x000002f4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002f4, rw, 0x00000000 >;

    using BKEY  = regbits< type,  0,  8 >;  /**< Blue Color Component Chroma Key   */
    using GKEY  = regbits< type,  8,  8 >;  /**< Green Color Component Chroma Key  */
    using RKEY  = regbits< type, 16,  8 >;  /**< Red Color Component Chroma Key    */
  };

  /**
   * High End Overlay Configuration Register 11
   */
  struct HEOCFG11
  : public reg< uint32_t, base_addr + 0x000002f8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002f8, rw, 0x00000000 >;

    using BMASK  = regbits< type,  0,  8 >;  /**< Blue Color Component Chroma Key Mask   */
    using GMASK  = regbits< type,  8,  8 >;  /**< Green Color Component Chroma Key Mask  */
    using RMASK  = regbits< type, 16,  8 >;  /**< Red Color Component Chroma Key Mask    */
  };

  /**
   * High End Overlay Configuration Register 12
   */
  struct HEOCFG12
  : public reg< uint32_t, base_addr + 0x000002fc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002fc, rw, 0x00000000 >;

    using CRKEY     = regbits< type,  0,  1 >;  /**< Blender Chroma Key Enable                             */
    using INV       = regbits< type,  1,  1 >;  /**< Blender Inverted Blender Output Enable                */
    using ITER2BL   = regbits< type,  2,  1 >;  /**< Blender Iterated Color Enable                         */
    using ITER      = regbits< type,  3,  1 >;  /**< Blender Use Iterated Color                            */
    using REVALPHA  = regbits< type,  4,  1 >;  /**< Blender Reverse Alpha                                 */
    using GAEN      = regbits< type,  5,  1 >;  /**< Blender Global Alpha Enable                           */
    using LAEN      = regbits< type,  6,  1 >;  /**< Blender Local Alpha Enable                            */
    using OVR       = regbits< type,  7,  1 >;  /**< Blender Overlay Layer Enable                          */
    using DMA       = regbits< type,  8,  1 >;  /**< Blender DMA Layer Enable                              */
    using REP       = regbits< type,  9,  1 >;  /**< Use Replication logic to expand RGB color to 24 bits  */
    using DSTKEY    = regbits< type, 10,  1 >;  /**< Destination Chroma Keying                             */
    using VIDPRI    = regbits< type, 12,  1 >;  /**< Video Priority                                        */
    using GA        = regbits< type, 16,  8 >;  /**< Blender Global Alpha                                  */
  };

  /**
   * High End Overlay Configuration Register 13
   */
  struct HEOCFG13
  : public reg< uint32_t, base_addr + 0x00000300, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000300, rw, 0x00000000 >;

    using XFACTOR  = regbits< type,  0, 13 >;  /**< Horizontal Scaling Factor  */
    using YFACTOR  = regbits< type, 16, 13 >;  /**< Vertical Scaling Factor    */
    using SCALEN   = regbits< type, 31,  1 >;  /**< Hardware Scaler Enable     */
  };

  /**
   * High End Overlay Configuration Register 14
   */
  struct HEOCFG14
  : public reg< uint32_t, base_addr + 0x00000304, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000304, rw, 0x00000000 >;

    using CSCRY    = regbits< type,  0, 10 >;  /**< Color Space Conversion Y coefficient for Red Component 1:2:7 format  */
    using CSCRU    = regbits< type, 10, 10 >;  /**< Color Space Conversion U coefficient for Red Component 1:2:7 format  */
    using CSCRV    = regbits< type, 20, 10 >;  /**< Color Space Conversion V coefficient for Red Component 1:2:7 format  */
    using CSCYOFF  = regbits< type, 30,  1 >;  /**< Color Space Conversion Offset                                        */
  };

  /**
   * High End Overlay Configuration Register 15
   */
  struct HEOCFG15
  : public reg< uint32_t, base_addr + 0x00000308, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000308, rw, 0x00000000 >;

    using CSCGY    = regbits< type,  0, 10 >;  /**< Color Space Conversion Y coefficient for Green Component 1:2:7 format  */
    using CSCGU    = regbits< type, 10, 10 >;  /**< Color Space Conversion U coefficient for Green Component 1:2:7 format  */
    using CSCGV    = regbits< type, 20, 10 >;  /**< Color Space Conversion V coefficient for Green Component 1:2:7 format  */
    using CSCUOFF  = regbits< type, 30,  1 >;  /**< Color Space Conversion Offset                                          */
  };

  /**
   * High End Overlay Configuration Register 16
   */
  struct HEOCFG16
  : public reg< uint32_t, base_addr + 0x0000030c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000030c, rw, 0x00000000 >;

    using CSCBY    = regbits< type,  0, 10 >;  /**< Color Space Conversion Y coefficient for Blue Component 1:2:7 format  */
    using CSCBU    = regbits< type, 10, 10 >;  /**< Color Space Conversion U coefficient for Blue Component 1:2:7 format  */
    using CSCBV    = regbits< type, 20, 10 >;  /**< Color Space Conversion V coefficient for Blue Component 1:2:7 format  */
    using CSCVOFF  = regbits< type, 30,  1 >;  /**< Color Space Conversion Offset                                         */
  };

  /**
   * Hardware Cursor Channel Enable Register
   */
  struct HCRCHER
  : public reg< uint32_t, base_addr + 0x00000340, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000340, wo, 0x00000000 >;

    using CHEN      = regbits< type,  0,  1 >;  /**< Channel Enable Register                    */
    using UPDATEEN  = regbits< type,  1,  1 >;  /**< Update Overlay Attributes Enable Register  */
    using A2QEN     = regbits< type,  2,  1 >;  /**< Add Head Pointer Enable Register           */
  };

  /**
   * Hardware Cursor Channel Disable Register
   */
  struct HCRCHDR
  : public reg< uint32_t, base_addr + 0x00000344, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000344, wo, 0x00000000 >;

    using CHDIS  = regbits< type,  0,  1 >;  /**< Channel Disable Register  */
    using CHRST  = regbits< type,  8,  1 >;  /**< Channel Reset Register    */
  };

  /**
   * Hardware Cursor Channel Status Register
   */
  struct HCRCHSR
  : public reg< uint32_t, base_addr + 0x00000348, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000348, ro, 0x00000000 >;

    using CHSR      = regbits< type,  0,  1 >;  /**< Channel Status Register                */
    using UPDATESR  = regbits< type,  1,  1 >;  /**< Update Overlay Attributes In Progress  */
    using A2QSR     = regbits< type,  2,  1 >;  /**< Add To Queue Pending Register          */
  };

  /**
   * Hardware Cursor Interrupt Enable Register
   */
  struct HCRIER
  : public reg< uint32_t, base_addr + 0x0000034c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000034c, wo, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable Register     */
    using DSCR  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable Register       */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Enable Register  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable Register             */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Interrupt Enable Register                */
  };

  /**
   * Hardware Cursor Interrupt Disable Register
   */
  struct HCRIDR
  : public reg< uint32_t, base_addr + 0x00000350, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000350, wo, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Disable Register     */
    using DSCR  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Disable Register       */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Disable Register  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Interrupt Disable Register             */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Interrupt Disable Register                */
  };

  /**
   * Hardware Cursor Interrupt Mask Register
   */
  struct HCRIMR
  : public reg< uint32_t, base_addr + 0x00000354, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000354, ro, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Mask Register     */
    using DSCR  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Mask Register       */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded Interrupt Mask Register  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Interrupt Mask Register             */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Interrupt Mask Register                */
  };

  /**
   * Hardware Cursor Interrupt Status Register
   */
  struct HCRISR
  : public reg< uint32_t, base_addr + 0x00000358, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000358, ro, 0x00000000 >;

    using DMA   = regbits< type,  2,  1 >;  /**< End of DMA Transfer     */
    using DSCR  = regbits< type,  3,  1 >;  /**< DMA Descriptor Loaded   */
    using ADD   = regbits< type,  4,  1 >;  /**< Head Descriptor Loaded  */
    using DONE  = regbits< type,  5,  1 >;  /**< End of List Detected    */
    using OVR   = regbits< type,  6,  1 >;  /**< Overflow Detected       */
  };

  /**
   * Hardware Cursor DMA Head Register
   */
  struct HCRHEAD
  : public reg< uint32_t, base_addr + 0x0000035c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000035c, rw, 0x00000000 >;

    using HEAD  = regbits< type,  2, 30 >;  /**< DMA Head Pointer  */
  };

  /**
   * Hardware cursor DMA Address Register
   */
  struct HCRADDR
  : public reg< uint32_t, base_addr + 0x00000360, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000360, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< DMA Transfer start address  */
  };

  /**
   * Hardware Cursor DMA Control Register
   */
  struct HCRCTRL
  : public reg< uint32_t, base_addr + 0x00000364, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000364, rw, 0x00000000 >;

    using DFETCH   = regbits< type,  0,  1 >;  /**< Transfer Descriptor Fetch Enable               */
    using LFETCH   = regbits< type,  1,  1 >;  /**< Lookup Table Fetch Enable                      */
    using DMAIEN   = regbits< type,  2,  1 >;  /**< End of DMA Transfer Interrupt Enable           */
    using DSCRIEN  = regbits< type,  3,  1 >;  /**< Descriptor Loaded Interrupt Enable             */
    using ADDIEN   = regbits< type,  4,  1 >;  /**< Add Head Descriptor to Queue Interrupt Enable  */
    using DONEIEN  = regbits< type,  5,  1 >;  /**< End of List Interrupt Enable                   */
  };

  /**
   * Hardware Cursor DMA NExt Register
   */
  struct HCRNEXT
  : public reg< uint32_t, base_addr + 0x00000368, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000368, rw, 0x00000000 >;

    using NEXT  = regbits< type,  0, 32 >;  /**< DMA Descriptor Next Address  */
  };

  /**
   * Hardware Cursor Configuration 0 Register
   */
  struct HCRCFG0
  : public reg< uint32_t, base_addr + 0x0000036c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000036c, rw, 0x00000000 >;

    using BLEN  = regbits< type,  4,  2 >;  /**< AHB Burst Length                                        */
    using DLBO  = regbits< type,  8,  1 >;  /**< Defined Length Burst Only for Channel Bus Transaction.  */
  };

  /**
   * Hardware Cursor Configuration 1 Register
   */
  struct HCRCFG1
  : public reg< uint32_t, base_addr + 0x00000370, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000370, rw, 0x00000000 >;

    using CLUTEN    = regbits< type,  0,  1 >;  /**< Color Lookup Table Enable                */
    using RGBMODE   = regbits< type,  4,  4 >;  /**< RGB input mode selection                 */
    using CLUTMODE  = regbits< type,  8,  2 >;  /**< Color Lookup table input mode selection  */
  };

  /**
   * Hardware Cursor Configuration 2 Register
   */
  struct HCRCFG2
  : public reg< uint32_t, base_addr + 0x00000374, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000374, rw, 0x00000000 >;

    using XPOS  = regbits< type,  0, 11 >;  /**< Horizontal Window Position  */
    using YPOS  = regbits< type, 16, 11 >;  /**< Vertical Window Position    */
  };

  /**
   * Hardware Cursor Configuration 3 Register
   */
  struct HCRCFG3
  : public reg< uint32_t, base_addr + 0x00000378, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000378, rw, 0x00000000 >;

    using XSIZE  = regbits< type,  0,  7 >;  /**< Horizontal Window Size  */
    using YSIZE  = regbits< type, 16,  7 >;  /**< Vertical Window Size    */
  };

  /**
   * Hardware Cursor Configuration 4 Register
   */
  struct HCRCFG4
  : public reg< uint32_t, base_addr + 0x0000037c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000037c, rw, 0x00000000 >;

    using XSTRIDE  = regbits< type,  0, 32 >;  /**< Horizontal Stride  */
  };

  /**
   * Hardware Cursor Configuration 6 Register
   */
  struct HCRCFG6
  : public reg< uint32_t, base_addr + 0x00000384, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000384, rw, 0x00000000 >;

    using BDEF  = regbits< type,  0,  8 >;  /**< Blue Default   */
    using GDEF  = regbits< type,  8,  8 >;  /**< Green Default  */
    using RDEF  = regbits< type, 16,  8 >;  /**< Red Default    */
  };

  /**
   * Hardware Cursor Configuration 7 Register
   */
  struct HCRCFG7
  : public reg< uint32_t, base_addr + 0x00000388, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000388, rw, 0x00000000 >;

    using BKEY  = regbits< type,  0,  8 >;  /**< Blue Color Component Chroma Key   */
    using GKEY  = regbits< type,  8,  8 >;  /**< Green Color Component Chroma Key  */
    using RKEY  = regbits< type, 16,  8 >;  /**< Red Color Component Chroma Key    */
  };

  /**
   * Hardware Cursor Configuration 8 Register
   */
  struct HCRCFG8
  : public reg< uint32_t, base_addr + 0x0000038c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000038c, rw, 0x00000000 >;

    using BMASK  = regbits< type,  0,  8 >;  /**< Blue Color Component Chroma Key Mask   */
    using GMASK  = regbits< type,  8,  8 >;  /**< Green Color Component Chroma Key Mask  */
    using RMASK  = regbits< type, 16,  8 >;  /**< Red Color Component Chroma Key Mask    */
  };

  /**
   * Hardware Cursor Configuration 9 Register
   */
  struct HCRCFG9
  : public reg< uint32_t, base_addr + 0x00000390, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000390, rw, 0x00000000 >;

    using CRKEY     = regbits< type,  0,  1 >;  /**< Blender Chroma Key Enable                             */
    using INV       = regbits< type,  1,  1 >;  /**< Blender Inverted Blender Output Enable                */
    using ITER2BL   = regbits< type,  2,  1 >;  /**< Blender Iterated Color Enable                         */
    using ITER      = regbits< type,  3,  1 >;  /**< Blender Use Iterated Color                            */
    using REVALPHA  = regbits< type,  4,  1 >;  /**< Blender Reverse Alpha                                 */
    using GAEN      = regbits< type,  5,  1 >;  /**< Blender Global Alpha Enable                           */
    using LAEN      = regbits< type,  6,  1 >;  /**< Blender Local Alpha Enable                            */
    using OVR       = regbits< type,  7,  1 >;  /**< Blender Overlay Layer Enable                          */
    using DMA       = regbits< type,  8,  1 >;  /**< Blender DMA Layer Enable                              */
    using REP       = regbits< type,  9,  1 >;  /**< Use Replication logic to expand RGB color to 24 bits  */
    using DSTKEY    = regbits< type, 10,  1 >;  /**< Destination Chroma Keying                             */
    using GA        = regbits< type, 16,  8 >;  /**< Blender Global Alpha                                  */
  };

  /**
   * Base CLUT Register
   */
  struct BASECLUT[%s]
  : public reg< uint32_t, base_addr + 0x00000400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000400, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BCLUT  = regbits< type,  0,  8 >;  /**< Blue Color entry   */
    using GCLUT  = regbits< type,  8,  8 >;  /**< Green Color entry  */
    using RCLUT  = regbits< type, 16,  8 >;  /**< Red Color entry    */
  };

  /**
   * Overlay 1 CLUT Register
   */
  struct OVR1CLUT[%s]
  : public reg< uint32_t, base_addr + 0x00000800, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000800, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BCLUT  = regbits< type,  0,  8 >;  /**< Blue Color entry   */
    using GCLUT  = regbits< type,  8,  8 >;  /**< Green Color entry  */
    using RCLUT  = regbits< type, 16,  8 >;  /**< Red Color entry    */
    using ACLUT  = regbits< type, 24,  8 >;  /**< Alpha Color entry  */
  };

  /**
   * High End Overlay CLUT Register
   */
  struct HEOCLUT[%s]
  : public reg< uint32_t, base_addr + 0x00001000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00001000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BCLUT  = regbits< type,  0,  8 >;  /**< Blue Color entry   */
    using GCLUT  = regbits< type,  8,  8 >;  /**< Green Color entry  */
    using RCLUT  = regbits< type, 16,  8 >;  /**< Red Color entry    */
    using ACLUT  = regbits< type, 24,  8 >;  /**< Alpha Color entry  */
  };

  /**
   * Hardware Cursor CLUT Register
   */
  struct HCRCLUT[%s]
  : public reg< uint32_t, base_addr + 0x00001400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00001400, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BCLUT  = regbits< type,  0,  8 >;  /**< Blue Color entry   */
    using GCLUT  = regbits< type,  8,  8 >;  /**< Green Color entry  */
    using RCLUT  = regbits< type, 16,  8 >;  /**< Red Color entry    */
    using ACLUT  = regbits< type, 24,  8 >;  /**< Alpha Color entry  */
  };

  /**
   * Address Size Register
   */
  struct ADDRSIZE
  : public reg< uint32_t, base_addr + 0x00001fec, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * IP Name1 Register
   */
  struct IPNAME[%s]
  : public reg< uint32_t, base_addr + 0x00001ff0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Features Register
   */
  struct FEATURES
  : public reg< uint32_t, base_addr + 0x00001ff8, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Version Register
   */
  struct VERSION
  : public reg< uint32_t, base_addr + 0x00001ffc, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_LCDC_HPP_INCLUDED
