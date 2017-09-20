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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9CN11.svd"
//
//  vendor: Atmel
//  name: AT91SAM9CN11
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9CN11 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Crypto engine, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9CN11.aspx for more)
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

    using CLKPOL     = regbits< type,  0,  1 >;  /**< LCD Controller Clock Polarity                    */
    using CLKSEL     = regbits< type,  2,  1 >;  /**< LCD Controller Clock Source Selection            */
    using CLKPWMSEL  = regbits< type,  3,  1 >;  /**< LCD Controller PWM Clock Source Selection        */
    using CGDISBASE  = regbits< type,  8,  1 >;  /**< Clock Gating Disable Control for the Base Layer  */
    using CLKDIV     = regbits< type, 16,  8 >;  /**< LCD Controller Clock Divider                     */
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
