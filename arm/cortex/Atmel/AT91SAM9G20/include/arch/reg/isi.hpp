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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G20.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G20
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G20 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, USB, Ethernet, 217 and 247 Pins (refer to http://www.atmel.com/devices/SAM9G20.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0xfffc0000;

  /**
   * ISI Control 1 Register
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000002 >;

    using ISI_RST     = regbits< type,  0,  1 >;  /**< Image sensor interface reset         */
    using ISI_DIS     = regbits< type,  1,  1 >;  /**< Image sensor disable:                */
    using HSYNC_POL   = regbits< type,  2,  1 >;  /**< Horizontal synchronization polarity  */
    using VSYNC_POL   = regbits< type,  3,  1 >;  /**< Vertical synchronization polarity    */
    using PIXCLK_POL  = regbits< type,  4,  1 >;  /**< Pixel clock polarity                 */
    using EMB_SYNC    = regbits< type,  6,  1 >;  /**< Embedded synchronization             */
    using CRC_SYNC    = regbits< type,  7,  1 >;  /**< Embedded synchronization             */
    using FRATE       = regbits< type,  8,  3 >;  /**< Frame rate [0..7]                    */
    using FULL        = regbits< type, 12,  1 >;  /**< Full mode is allowed                 */
    using THMASK      = regbits< type, 13,  2 >;  /**< Threshold mask                       */
    using CODEC_ON    = regbits< type, 15,  1 >;  /**< Enable the codec path enable bit     */
    using SLD         = regbits< type, 16,  8 >;  /**< Start of Line Delay                  */
    using SFD         = regbits< type, 24,  8 >;  /**< Start of Frame Delay                 */
  };

  /**
   * ISI Control 2 Register
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using IM_VSIZE   = regbits< type,  0, 11 >;  /**< Vertical size of the Image sensor [0..2047]    */
    using GS_MODE    = regbits< type, 11,  1 >;
    using RGB_MODE   = regbits< type, 12,  1 >;  /**< RGB input mode                                 */
    using GRAYSCALE  = regbits< type, 13,  1 >;
    using RGB_SWAP   = regbits< type, 14,  1 >;
    using COL_SPACE  = regbits< type, 15,  1 >;  /**< Color space for the image data                 */
    using IM_HSIZE   = regbits< type, 16, 11 >;  /**< Horizontal size of the Image sensor [0..2047]  */
    using YCC_SWAP   = regbits< type, 28,  2 >;  /**< Defines the YCC image data                     */
    using RGB_CFG    = regbits< type, 30,  2 >;  /**< Defines RGB pattern when RGB_MODE is set to 1  */
  };

  /**
   * ISI Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >;

    using SOF       = regbits< type,  0,  1 >;  /**< Start of frame                  */
    using DIS       = regbits< type,  1,  1 >;  /**< Image Sensor Interface disable  */
    using SOFTRST   = regbits< type,  2,  1 >;  /**< Software reset                  */
    using CDC_PND   = regbits< type,  3,  1 >;  /**< Codec request pending           */
    using CRC_ERR   = regbits< type,  4,  1 >;  /**< CRC synchronization error       */
    using FO_C_OVF  = regbits< type,  5,  1 >;  /**< FIFO codec overflow             */
    using FO_P_OVF  = regbits< type,  6,  1 >;  /**< FIFO preview overflow           */
    using FO_P_EMP  = regbits< type,  7,  1 >;
    using FO_C_EMP  = regbits< type,  8,  1 >;
    using FR_OVR    = regbits< type,  9,  1 >;  /**< Frame rate overrun              */
  };

  /**
   * ISI Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using SOF       = regbits< type,  0,  1 >;  /**< Start of Frame                  */
    using DIS       = regbits< type,  1,  1 >;  /**< Image Sensor Interface disable  */
    using SOFTRST   = regbits< type,  2,  1 >;  /**< Soft Reset                      */
    using CRC_ERR   = regbits< type,  4,  1 >;  /**< CRC synchronization error       */
    using FO_C_OVF  = regbits< type,  5,  1 >;  /**< FIFO codec Overflow             */
    using FO_P_OVF  = regbits< type,  6,  1 >;  /**< FIFO preview Overflow           */
    using FO_P_EMP  = regbits< type,  7,  1 >;
    using FO_C_EMP  = regbits< type,  8,  1 >;
    using FR_OVR    = regbits< type,  9,  1 >;  /**< Frame overrun                   */
  };

  /**
   * ISI Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using SOF       = regbits< type,  0,  1 >;  /**< Start of Frame                  */
    using DIS       = regbits< type,  1,  1 >;  /**< Image Sensor Interface disable  */
    using SOFTRST   = regbits< type,  2,  1 >;
    using CRC_ERR   = regbits< type,  4,  1 >;  /**< CRC synchronization error       */
    using FO_C_OVF  = regbits< type,  5,  1 >;  /**< FIFO codec overflow             */
    using FO_P_OVF  = regbits< type,  6,  1 >;  /**< FIFO preview overflow           */
    using FO_P_EMP  = regbits< type,  7,  1 >;
    using FO_C_EMP  = regbits< type,  8,  1 >;
    using FR_OVR    = regbits< type,  9,  1 >;
  };

  /**
   * ISI Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >;

    using SOF       = regbits< type,  0,  1 >;  /**< Start of Frame                  */
    using DIS       = regbits< type,  1,  1 >;  /**< Image sensor interface disable  */
    using SOFTRST   = regbits< type,  2,  1 >;
    using CRC_ERR   = regbits< type,  4,  1 >;  /**< CRC synchronization error       */
    using FO_C_OVF  = regbits< type,  5,  1 >;  /**< FIFO codec overflow             */
    using FO_P_OVF  = regbits< type,  6,  1 >;  /**< FIFO preview overflow           */
    using FO_P_EMP  = regbits< type,  7,  1 >;
    using FO_C_EMP  = regbits< type,  8,  1 >;
    using FR_OVR    = regbits< type,  9,  1 >;  /**< Frame Rate Overrun              */
  };

  /**
   * ISI Preview Size Register
   */
  struct PSIZE
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using PREV_VSIZE  = regbits< type,  0, 10 >;  /**< Vertical size for the preview path    */
    using PREV_HSIZE  = regbits< type, 16, 10 >;  /**< Horizontal size for the preview path  */
  };

  /**
   * ISI Preview Decimation Factor Register
   */
  struct PDECF
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x00000010 >;

    using DEC_FACTOR  = regbits< type,  0,  8 >;  /**< Decimation factor  */
  };

  /**
   * ISI Preview Primary FBD Register
   */
  struct PPFBD
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    using PREV_FBD_ADDR  = regbits< type,  0, 32 >;  /**< Base address for preview frame buffer descriptor  */
  };

  /**
   * ISI Codec DMA Base Address Register
   */
  struct CDBA
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >;

    using CODEC_DMA_ADDR  = regbits< type,  0, 32 >;  /**< Base address for codec DMA  */
  };

  /**
   * ISI CSC YCrCb To RGB Set 0 Register
   */
  struct Y2R_SET0
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x6832CC95 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x6832CC95 >;

    using C0  = regbits< type,  0,  8 >;  /**< Color Space Conversion Matrix Coefficient C0  */
    using C1  = regbits< type,  8,  8 >;  /**< Color Space Conversion Matrix Coefficient C1  */
    using C2  = regbits< type, 16,  8 >;  /**< Color Space Conversion Matrix Coefficient C2  */
    using C3  = regbits< type, 24,  8 >;  /**< Color Space Conversion Matrix Coefficient C3  */
  };

  /**
   * ISI CSC YCrCb To RGB Set 1 Register
   */
  struct Y2R_SET1
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x00007102 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x00007102 >;

    using C4     = regbits< type,  0,  9 >;  /**< Color Space Conversion Matrix coefficient C4            */
    using Yoff   = regbits< type, 12,  1 >;  /**< Color Space Conversion Luminance default offset         */
    using Croff  = regbits< type, 13,  1 >;  /**< Color Space Conversion Red Chrominance default offset   */
    using Cboff  = regbits< type, 14,  1 >;  /**< Color Space Conversion Blue Chrominance default offset  */
  };

  /**
   * ISI CSC RGB To YCrCb Set 0 Register
   */
  struct R2Y_SET0
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x01324145 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x01324145 >;

    using C0    = regbits< type,  0,  8 >;  /**< Color Space Conversion Matrix coefficient C0  */
    using C1    = regbits< type,  8,  8 >;  /**< Color Space Conversion Matrix coefficient C1  */
    using C2    = regbits< type, 16,  8 >;  /**< Color Space Conversion Matrix coefficient C2  */
    using Roff  = regbits< type, 24,  1 >;  /**< Color Space Conversion Red component offset   */
  };

  /**
   * ISI CSC RGB To YCrCb Set 1 Register
   */
  struct R2Y_SET1
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x01245E38 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x01245E38 >;

    using C3    = regbits< type,  0,  8 >;  /**< Color Space Conversion Matrix coefficient C3   */
    using C4    = regbits< type,  8,  8 >;  /**< Color Space Conversion Matrix coefficient C4   */
    using C5    = regbits< type, 16,  8 >;  /**< Color Space Conversion Matrix coefficient C5   */
    using Goff  = regbits< type, 24,  1 >;  /**< Color Space Conversion Green component offset  */
  };

  /**
   * ISI CSC RGB To YCrCb Set 2 Register
   */
  struct R2Y_SET2
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x01384A4B >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x01384A4B >;

    using C6    = regbits< type,  0,  8 >;  /**< Color Space Conversion Matrix coefficient C6  */
    using C7    = regbits< type,  8,  8 >;  /**< Color Space Conversion Matrix coefficient C7  */
    using C8    = regbits< type, 16,  8 >;  /**< Color Space Conversion Matrix coefficient C8  */
    using Boff  = regbits< type, 24,  1 >;  /**< Color Space Conversion Blue component offset  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ISI_HPP_INCLUDED
