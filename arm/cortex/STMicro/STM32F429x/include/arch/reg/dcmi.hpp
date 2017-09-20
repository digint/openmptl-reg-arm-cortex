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
//  Import from CMSIS-SVD: "STMicro/STM32F429x.svd"
//
//  name: STM32F429x
//  version: 1.0
//  description: STM32F429x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DCMI_HPP_INCLUDED
#define ARCH_REG_DCMI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Digital camera interface
 */
struct DCMI
{
  static constexpr reg_addr_t base_addr = 0x50050000;

  /**
   * control register 1
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using ENABLE   = regbits< type, 14,  1 >;  /**< DCMI enable                          */
    using EDM      = regbits< type, 10,  2 >;  /**< Extended data mode                   */
    using FCRC     = regbits< type,  8,  2 >;  /**< Frame capture rate control           */
    using VSPOL    = regbits< type,  7,  1 >;  /**< Vertical synchronization polarity    */
    using HSPOL    = regbits< type,  6,  1 >;  /**< Horizontal synchronization polarity  */
    using PCKPOL   = regbits< type,  5,  1 >;  /**< Pixel clock polarity                 */
    using ESS      = regbits< type,  4,  1 >;  /**< Embedded synchronization select      */
    using JPEG     = regbits< type,  3,  1 >;  /**< JPEG format                          */
    using CROP     = regbits< type,  2,  1 >;  /**< Crop feature                         */
    using CM       = regbits< type,  1,  1 >;  /**< Capture mode                         */
    using CAPTURE  = regbits< type,  0,  1 >;  /**< Capture enable                       */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x0000 >;

    using FNE    = regbits< type,  2,  1 >;  /**< FIFO not empty  */
    using VSYNC  = regbits< type,  1,  1 >;  /**< VSYNC           */
    using HSYNC  = regbits< type,  0,  1 >;  /**< HSYNC           */
  };

  /**
   * raw interrupt status register
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x8, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x0000 >;

    using LINE_RIS   = regbits< type,  4,  1 >;  /**< Line raw interrupt status                   */
    using VSYNC_RIS  = regbits< type,  3,  1 >;  /**< VSYNC raw interrupt status                  */
    using ERR_RIS    = regbits< type,  2,  1 >;  /**< Synchronization error raw interrupt status  */
    using OVR_RIS    = regbits< type,  1,  1 >;  /**< Overrun raw interrupt status                */
    using FRAME_RIS  = regbits< type,  0,  1 >;  /**< Capture complete raw interrupt status       */
  };

  /**
   * interrupt enable register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using LINE_IE   = regbits< type,  4,  1 >;  /**< Line interrupt enable                   */
    using VSYNC_IE  = regbits< type,  3,  1 >;  /**< VSYNC interrupt enable                  */
    using ERR_IE    = regbits< type,  2,  1 >;  /**< Synchronization error interrupt enable  */
    using OVR_IE    = regbits< type,  1,  1 >;  /**< Overrun interrupt enable                */
    using FRAME_IE  = regbits< type,  0,  1 >;  /**< Capture complete interrupt enable       */
  };

  /**
   * masked interrupt status register
   */
  struct MIS
  : public reg< uint32_t, base_addr + 0x10, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x0000 >;

    using LINE_MIS   = regbits< type,  4,  1 >;  /**< Line masked interrupt status                   */
    using VSYNC_MIS  = regbits< type,  3,  1 >;  /**< VSYNC masked interrupt status                  */
    using ERR_MIS    = regbits< type,  2,  1 >;  /**< Synchronization error masked interrupt status  */
    using OVR_MIS    = regbits< type,  1,  1 >;  /**< Overrun masked interrupt status                */
    using FRAME_MIS  = regbits< type,  0,  1 >;  /**< Capture complete masked interrupt status       */
  };

  /**
   * interrupt clear register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x0000 >;

    using LINE_ISC   = regbits< type,  4,  1 >;  /**< line interrupt status clear                   */
    using VSYNC_ISC  = regbits< type,  3,  1 >;  /**< Vertical synch interrupt status clear         */
    using ERR_ISC    = regbits< type,  2,  1 >;  /**< Synchronization error interrupt status clear  */
    using OVR_ISC    = regbits< type,  1,  1 >;  /**< Overrun interrupt status clear                */
    using FRAME_ISC  = regbits< type,  0,  1 >;  /**< Capture complete interrupt status clear       */
  };

  /**
   * embedded synchronization code register
   */
  struct ESCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0000 >;

    using FEC  = regbits< type, 24,  8 >;  /**< Frame end delimiter code    */
    using LEC  = regbits< type, 16,  8 >;  /**< Line end delimiter code     */
    using LSC  = regbits< type,  8,  8 >;  /**< Line start delimiter code   */
    using FSC  = regbits< type,  0,  8 >;  /**< Frame start delimiter code  */
  };

  /**
   * embedded synchronization unmask register
   */
  struct ESUR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x0000 >;

    using FEU  = regbits< type, 24,  8 >;  /**< Frame end delimiter unmask    */
    using LEU  = regbits< type, 16,  8 >;  /**< Line end delimiter unmask     */
    using LSU  = regbits< type,  8,  8 >;  /**< Line start delimiter unmask   */
    using FSU  = regbits< type,  0,  8 >;  /**< Frame start delimiter unmask  */
  };

  /**
   * crop window start
   */
  struct CWSTRT
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0000 >;

    using VST      = regbits< type, 16, 13 >;  /**< Vertical start line count  */
    using HOFFCNT  = regbits< type,  0, 14 >;  /**< Horizontal offset count    */
  };

  /**
   * crop window size
   */
  struct CWSIZE
  : public reg< uint32_t, base_addr + 0x24, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x0000 >;

    using VLINE   = regbits< type, 16, 14 >;  /**< Vertical line count  */
    using CAPCNT  = regbits< type,  0, 14 >;  /**< Capture count        */
  };

  /**
   * data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x28, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0x0000 >;

    using Byte3  = regbits< type, 24,  8 >;  /**< Data byte 3  */
    using Byte2  = regbits< type, 16,  8 >;  /**< Data byte 2  */
    using Byte1  = regbits< type,  8,  8 >;  /**< Data byte 1  */
    using Byte0  = regbits< type,  0,  8 >;  /**< Data byte 0  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DCMI_HPP_INCLUDED
