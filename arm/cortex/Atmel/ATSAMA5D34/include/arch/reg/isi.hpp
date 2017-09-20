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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D34.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D34
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D34 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, LCD controller, gigabit Ethernet, dual CAN, security (refer to http://www.atmel.com/devices/SAMA5D34.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ISI_HPP_INCLUDED
#define ARCH_REG_ISI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Image Sensor Interface
 */
struct ISI
{
  static constexpr reg_addr_t base_addr = 0xf0034000;

  /**
   * ISI Configuration 1 Register
   */
  struct CFG1
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using HSYNC_POL   = regbits< type,  2,  1 >;  /**< Horizontal Synchronization Polarity  */
    using VSYNC_POL   = regbits< type,  3,  1 >;  /**< Vertical Synchronization Polarity    */
    using PIXCLK_POL  = regbits< type,  4,  1 >;  /**< Pixel Clock Polarity                 */
    using EMB_SYNC    = regbits< type,  6,  1 >;  /**< Embedded Synchronization             */
    using CRC_SYNC    = regbits< type,  7,  1 >;  /**< Embedded Synchronization Correction  */
    using FRATE       = regbits< type,  8,  3 >;  /**< Frame Rate [0..7]                    */
    using DISCR       = regbits< type, 11,  1 >;  /**< Disable Codec Request                */
    using FULL        = regbits< type, 12,  1 >;  /**< Full Mode is Allowed                 */
    using THMASK      = regbits< type, 13,  2 >;  /**< Threshold Mask                       */
    using SLD         = regbits< type, 16,  8 >;  /**< Start of Line Delay                  */
    using SFD         = regbits< type, 24,  8 >;  /**< Start of Frame Delay                 */
  };

  /**
   * ISI Configuration 2 Register
   */
  struct CFG2
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using IM_VSIZE   = regbits< type,  0, 11 >;  /**< Vertical Size of the Image Sensor [0..2047]:   */
    using GS_MODE    = regbits< type, 11,  1 >;
    using RGB_MODE   = regbits< type, 12,  1 >;  /**< RGB Input Mode:                                */
    using GRAYSCALE  = regbits< type, 13,  1 >;
    using RGB_SWAP   = regbits< type, 14,  1 >;
    using COL_SPACE  = regbits< type, 15,  1 >;  /**< Color Space for the Image Data                 */
    using IM_HSIZE   = regbits< type, 16, 11 >;  /**< Horizontal Size of the Image Sensor [0..2047]  */
    using YCC_SWAP   = regbits< type, 28,  2 >;  /**< Defines the YCC Image Data                     */
    using RGB_CFG    = regbits< type, 30,  2 >;  /**< Defines RGB Pattern when RGB_MODE is set to 1  */
  };

  /**
   * ISI Preview Size Register
   */
  struct PSIZE
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using PREV_VSIZE  = regbits< type,  0, 10 >;  /**< Vertical Size for the Preview Path    */
    using PREV_HSIZE  = regbits< type, 16, 10 >;  /**< Horizontal Size for the Preview Path  */
  };

  /**
   * ISI Preview Decimation Factor Register
   */
  struct PDECF
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000010 >;

    using DEC_FACTOR  = regbits< type,  0,  8 >;  /**< Decimation Factor  */
  };

  /**
   * ISI CSC YCrCb To RGB Set 0 Register
   */
  struct Y2R_SET0
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x6832CC95 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x6832CC95 >;

    using C0  = regbits< type,  0,  8 >;  /**< Color Space Conversion Matrix Coefficient C0  */
    using C1  = regbits< type,  8,  8 >;  /**< Color Space Conversion Matrix Coefficient C1  */
    using C2  = regbits< type, 16,  8 >;  /**< Color Space Conversion Matrix Coefficient C2  */
    using C3  = regbits< type, 24,  8 >;  /**< Color Space Conversion Matrix Coefficient C3  */
  };

  /**
   * ISI CSC YCrCb To RGB Set 1 Register
   */
  struct Y2R_SET1
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00007102 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00007102 >;

    using C4     = regbits< type,  0,  9 >;  /**< Color Space Conversion Matrix Coefficient C4            */
    using Yoff   = regbits< type, 12,  1 >;  /**< Color Space Conversion Luminance Default Offset         */
    using Croff  = regbits< type, 13,  1 >;  /**< Color Space Conversion Red Chrominance Default Offset   */
    using Cboff  = regbits< type, 14,  1 >;  /**< Color Space Conversion Blue Chrominance Default Offset  */
  };

  /**
   * ISI CSC RGB To YCrCb Set 0 Register
   */
  struct R2Y_SET0
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x01324145 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x01324145 >;

    using C0    = regbits< type,  0,  7 >;  /**< Color Space Conversion Matrix Coefficient C0  */
    using C1    = regbits< type,  8,  7 >;  /**< Color Space Conversion Matrix Coefficient C1  */
    using C2    = regbits< type, 16,  7 >;  /**< Color Space Conversion Matrix Coefficient C2  */
    using Roff  = regbits< type, 24,  1 >;  /**< Color Space Conversion Red Component Offset   */
  };

  /**
   * ISI CSC RGB To YCrCb Set 1 Register
   */
  struct R2Y_SET1
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x01245E38 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x01245E38 >;

    using C3    = regbits< type,  0,  7 >;  /**< Color Space Conversion Matrix Coefficient C3   */
    using C4    = regbits< type,  8,  7 >;  /**< Color Space Conversion Matrix Coefficient C4   */
    using C5    = regbits< type, 16,  7 >;  /**< Color Space Conversion Matrix Coefficient C5   */
    using Goff  = regbits< type, 24,  1 >;  /**< Color Space Conversion Green Component Offset  */
  };

  /**
   * ISI CSC RGB To YCrCb Set 2 Register
   */
  struct R2Y_SET2
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x01384A4B >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x01384A4B >;

    using C6    = regbits< type,  0,  7 >;  /**< Color Space Conversion Matrix Coefficient C6  */
    using C7    = regbits< type,  8,  7 >;  /**< Color Space Conversion Matrix Coefficient C7  */
    using C8    = regbits< type, 16,  7 >;  /**< Color Space Conversion Matrix Coefficient C8  */
    using Boff  = regbits< type, 24,  1 >;  /**< Color Space Conversion Blue Component Offset  */
  };

  /**
   * ISI Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0x00000000 >;

    using ISI_EN    = regbits< type,  0,  1 >;  /**< ISI Module Enable Request   */
    using ISI_DIS   = regbits< type,  1,  1 >;  /**< ISI Module Disable Request  */
    using ISI_SRST  = regbits< type,  2,  1 >;  /**< ISI Software Reset Request  */
    using ISI_CDC   = regbits< type,  8,  1 >;  /**< ISI Codec Request           */
  };

  /**
   * ISI Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >;

    using ENABLE     = regbits< type,  0,  1 >;
    using DIS_DONE   = regbits< type,  1,  1 >;  /**< Module Disable Request has Terminated               */
    using SRST       = regbits< type,  2,  1 >;  /**< Module Software Reset Request has Terminated        */
    using CDC_PND    = regbits< type,  8,  1 >;  /**< Pending Codec Request (this bit is a status bit)    */
    using VSYNC      = regbits< type, 10,  1 >;  /**< Vertical Synchronization                            */
    using PXFR_DONE  = regbits< type, 16,  1 >;  /**< Preview DMA Transfer has Terminated.                */
    using CXFR_DONE  = regbits< type, 17,  1 >;  /**< Codec DMA Transfer has Terminated.                  */
    using SIP        = regbits< type, 19,  1 >;  /**< Synchronization in Progress (this is a status bit)  */
    using P_OVR      = regbits< type, 24,  1 >;  /**< Preview Datapath Overflow                           */
    using C_OVR      = regbits< type, 25,  1 >;  /**< Codec Datapath Overflow                             */
    using CRC_ERR    = regbits< type, 26,  1 >;  /**< CRC Synchronization Error                           */
    using FR_OVR     = regbits< type, 27,  1 >;  /**< Frame Rate Overrun                                  */
  };

  /**
   * ISI Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x0000002c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, wo, 0x00000000 >;

    using DIS_DONE   = regbits< type,  1,  1 >;  /**< Disable Done Interrupt Enable                        */
    using SRST       = regbits< type,  2,  1 >;  /**< Software Reset Interrupt Enable                      */
    using VSYNC      = regbits< type, 10,  1 >;  /**< Vertical Synchronization Interrupt Enable            */
    using PXFR_DONE  = regbits< type, 16,  1 >;  /**< Preview DMA Transfer Done Interrupt Enable           */
    using CXFR_DONE  = regbits< type, 17,  1 >;  /**< Codec DMA Transfer Done Interrupt Enable             */
    using P_OVR      = regbits< type, 24,  1 >;  /**< Preview Datapath Overflow Interrupt Enable           */
    using C_OVR      = regbits< type, 25,  1 >;  /**< Codec Datapath Overflow Interrupt Enable             */
    using CRC_ERR    = regbits< type, 26,  1 >;  /**< Embedded Synchronization CRC Error Interrupt Enable  */
    using FR_OVR     = regbits< type, 27,  1 >;  /**< Frame Rate Overflow Interrupt Enable                 */
  };

  /**
   * ISI Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000030, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, wo, 0x00000000 >;

    using DIS_DONE   = regbits< type,  1,  1 >;  /**< Disable Done Interrupt Disable                        */
    using SRST       = regbits< type,  2,  1 >;  /**< Software Reset Interrupt Disable                      */
    using VSYNC      = regbits< type, 10,  1 >;  /**< Vertical Synchronization Interrupt Disable            */
    using PXFR_DONE  = regbits< type, 16,  1 >;  /**< Preview DMA Transfer Done Interrupt Disable           */
    using CXFR_DONE  = regbits< type, 17,  1 >;  /**< Codec DMA Transfer Done Interrupt Disable             */
    using P_OVR      = regbits< type, 24,  1 >;  /**< Preview Datapath Overflow Interrupt Disable           */
    using C_OVR      = regbits< type, 25,  1 >;  /**< Codec Datapath Overflow Interrupt Disable             */
    using CRC_ERR    = regbits< type, 26,  1 >;  /**< Embedded Synchronization CRC Error Interrupt Disable  */
    using FR_OVR     = regbits< type, 27,  1 >;  /**< Frame Rate Overflow Interrupt Disable                 */
  };

  /**
   * ISI Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >;

    using DIS_DONE   = regbits< type,  1,  1 >;  /**< Module Disable Operation Completed  */
    using SRST       = regbits< type,  2,  1 >;  /**< Software Reset Completed            */
    using VSYNC      = regbits< type, 10,  1 >;  /**< Vertical Synchronization            */
    using PXFR_DONE  = regbits< type, 16,  1 >;  /**< Preview DMA Transfer Interrupt      */
    using CXFR_DONE  = regbits< type, 17,  1 >;  /**< Codec DMA Transfer Interrupt        */
    using P_OVR      = regbits< type, 24,  1 >;  /**< FIFO Preview Overflow               */
    using C_OVR      = regbits< type, 25,  1 >;  /**< FIFO Codec Overflow                 */
    using CRC_ERR    = regbits< type, 26,  1 >;  /**< CRC Synchronization Error           */
    using FR_OVR     = regbits< type, 27,  1 >;  /**< Frame Rate Overrun                  */
  };

  /**
   * DMA Channel Enable Register
   */
  struct DMA_CHER
  : public reg< uint32_t, base_addr + 0x00000038, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, wo, 0x00000000 >;

    using P_CH_EN  = regbits< type,  0,  1 >;  /**< Preview Channel Enable  */
    using C_CH_EN  = regbits< type,  1,  1 >;  /**< Codec Channel Enable    */
  };

  /**
   * DMA Channel Disable Register
   */
  struct DMA_CHDR
  : public reg< uint32_t, base_addr + 0x0000003c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, wo, 0x00000000 >;

    using P_CH_DIS  = regbits< type,  0,  1 >;
    using C_CH_DIS  = regbits< type,  1,  1 >;
  };

  /**
   * DMA Channel Status Register
   */
  struct DMA_CHSR
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >;

    using P_CH_S  = regbits< type,  0,  1 >;
    using C_CH_S  = regbits< type,  1,  1 >;
  };

  /**
   * DMA Preview Base Address Register
   */
  struct DMA_P_ADDR
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using P_ADDR  = regbits< type,  2, 30 >;  /**< Preview Image Base Address. (This address is word aligned.)  */
  };

  /**
   * DMA Preview Control Register
   */
  struct DMA_P_CTRL
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >;

    using P_FETCH  = regbits< type,  0,  1 >;  /**< Descriptor Fetch Control Field               */
    using P_WB     = regbits< type,  1,  1 >;  /**< Descriptor Writeback Control Field           */
    using P_IEN    = regbits< type,  2,  1 >;  /**< Transfer Done Flag Control                   */
    using P_DONE   = regbits< type,  3,  1 >;  /**< (This field is only updated in the memory.)  */
  };

  /**
   * DMA Preview Descriptor Address Register
   */
  struct DMA_P_DSCR
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >;

    using P_DSCR  = regbits< type,  2, 30 >;  /**< Preview Descriptor Base Address (This address is word aligned.)  */
  };

  /**
   * DMA Codec Base Address Register
   */
  struct DMA_C_ADDR
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0x00000000 >;

    using C_ADDR  = regbits< type,  2, 30 >;  /**< Codec Image Base Address (This address is word aligned.)  */
  };

  /**
   * DMA Codec Control Register
   */
  struct DMA_C_CTRL
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >;

    using C_FETCH  = regbits< type,  0,  1 >;  /**< Descriptor Fetch Control Field               */
    using C_WB     = regbits< type,  1,  1 >;  /**< Descriptor Writeback Control Field           */
    using C_IEN    = regbits< type,  2,  1 >;  /**< Transfer Done flag control                   */
    using C_DONE   = regbits< type,  3,  1 >;  /**< (This field is only updated in the memory.)  */
  };

  /**
   * DMA Codec Descriptor Address Register
   */
  struct DMA_C_DSCR
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >;

    using C_DSCR  = regbits< type,  2, 30 >;  /**< Codec Descriptor Base Address (This address is word aligned.)  */
  };

  /**
   * Write Protection Control Register
   */
  struct WPCR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WP_EN   = regbits< type,  0,  1 >;  /**< Write Protection Enable        */
    using WP_KEY  = regbits< type,  8, 24 >;  /**< Write Protection KEY Password  */
  };

  /**
   * Write Protection Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WP_VS    = regbits< type,  0,  4 >;  /**< Write Protection Violation Status  */
    using WP_VSRC  = regbits< type,  8, 16 >;  /**< Write Protection Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ISI_HPP_INCLUDED
