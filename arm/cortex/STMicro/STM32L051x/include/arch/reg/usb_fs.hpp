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
//  Import from CMSIS-SVD: "STMicro/STM32L051x.svd"
//
//  name: STM32L051x
//  version: 1.0
//  description: STM32L051x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USB_FS_HPP_INCLUDED
#define ARCH_REG_USB_FS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal serial bus full-speed device interface
 */
struct USB_FS
{
  static constexpr reg_addr_t base_addr = 0x40005c00;

  /**
   * endpoint register
   */
  struct EP0R
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using CTR_RX   = regbits< type, 15,  1 >;  /**< CTR_RX   */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< DTOG_RX  */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< STAT_RX  */
    using SETUP    = regbits< type, 11,  1 >;  /**< SETUP    */
    using EPTYPE   = regbits< type,  9,  2 >;  /**< EPTYPE   */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< EP_KIND  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< CTR_TX   */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< DTOG_TX  */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< STAT_TX  */
    using EA       = regbits< type,  0,  4 >;  /**< EA       */
  };

  /**
   * endpoint register
   */
  struct EP1R
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using CTR_RX   = regbits< type, 15,  1 >;  /**< CTR_RX   */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< DTOG_RX  */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< STAT_RX  */
    using SETUP    = regbits< type, 11,  1 >;  /**< SETUP    */
    using EPTYPE   = regbits< type,  9,  2 >;  /**< EPTYPE   */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< EP_KIND  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< CTR_TX   */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< DTOG_TX  */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< STAT_TX  */
    using EA       = regbits< type,  0,  4 >;  /**< EA       */
  };

  /**
   * endpoint register
   */
  struct EP2R
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using CTR_RX   = regbits< type, 15,  1 >;  /**< CTR_RX   */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< DTOG_RX  */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< STAT_RX  */
    using SETUP    = regbits< type, 11,  1 >;  /**< SETUP    */
    using EPTYPE   = regbits< type,  9,  2 >;  /**< EPTYPE   */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< EP_KIND  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< CTR_TX   */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< DTOG_TX  */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< STAT_TX  */
    using EA       = regbits< type,  0,  4 >;  /**< EA       */
  };

  /**
   * endpoint register
   */
  struct EP3R
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using CTR_RX   = regbits< type, 15,  1 >;  /**< CTR_RX   */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< DTOG_RX  */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< STAT_RX  */
    using SETUP    = regbits< type, 11,  1 >;  /**< SETUP    */
    using EPTYPE   = regbits< type,  9,  2 >;  /**< EPTYPE   */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< EP_KIND  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< CTR_TX   */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< DTOG_TX  */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< STAT_TX  */
    using EA       = regbits< type,  0,  4 >;  /**< EA       */
  };

  /**
   * endpoint register
   */
  struct EP4R
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using CTR_RX   = regbits< type, 15,  1 >;  /**< CTR_RX   */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< DTOG_RX  */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< STAT_RX  */
    using SETUP    = regbits< type, 11,  1 >;  /**< SETUP    */
    using EPTYPE   = regbits< type,  9,  2 >;  /**< EPTYPE   */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< EP_KIND  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< CTR_TX   */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< DTOG_TX  */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< STAT_TX  */
    using EA       = regbits< type,  0,  4 >;  /**< EA       */
  };

  /**
   * endpoint register
   */
  struct EP5R
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using CTR_RX   = regbits< type, 15,  1 >;  /**< CTR_RX   */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< DTOG_RX  */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< STAT_RX  */
    using SETUP    = regbits< type, 11,  1 >;  /**< SETUP    */
    using EPTYPE   = regbits< type,  9,  2 >;  /**< EPTYPE   */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< EP_KIND  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< CTR_TX   */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< DTOG_TX  */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< STAT_TX  */
    using EA       = regbits< type,  0,  4 >;  /**< EA       */
  };

  /**
   * endpoint register
   */
  struct EP6R
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0 >;

    using CTR_RX   = regbits< type, 15,  1 >;  /**< CTR_RX   */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< DTOG_RX  */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< STAT_RX  */
    using SETUP    = regbits< type, 11,  1 >;  /**< SETUP    */
    using EPTYPE   = regbits< type,  9,  2 >;  /**< EPTYPE   */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< EP_KIND  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< CTR_TX   */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< DTOG_TX  */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< STAT_TX  */
    using EA       = regbits< type,  0,  4 >;  /**< EA       */
  };

  /**
   * endpoint register
   */
  struct EP7R
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x0 >;

    using CTR_RX   = regbits< type, 15,  1 >;  /**< CTR_RX   */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< DTOG_RX  */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< STAT_RX  */
    using SETUP    = regbits< type, 11,  1 >;  /**< SETUP    */
    using EPTYPE   = regbits< type,  9,  2 >;  /**< EPTYPE   */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< EP_KIND  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< CTR_TX   */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< DTOG_TX  */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< STAT_TX  */
    using EA       = regbits< type,  0,  4 >;  /**< EA       */
  };

  /**
   * control register
   */
  struct CNTR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x0 >;

    using CTRM      = regbits< type, 15,  1 >;  /**< CTRM      */
    using PMAOVRM   = regbits< type, 14,  1 >;  /**< PMAOVRM   */
    using ERRM      = regbits< type, 13,  1 >;  /**< ERRM      */
    using WKUPM     = regbits< type, 12,  1 >;  /**< WKUPM     */
    using SUSPM     = regbits< type, 11,  1 >;  /**< SUSPM     */
    using RESETM    = regbits< type, 10,  1 >;  /**< RESETM    */
    using SOFM      = regbits< type,  9,  1 >;  /**< SOFM      */
    using ESOFM     = regbits< type,  8,  1 >;  /**< ESOFM     */
    using L1REQM    = regbits< type,  7,  1 >;  /**< L1REQM    */
    using L1RESUME  = regbits< type,  5,  1 >;  /**< L1RESUME  */
    using RESUME    = regbits< type,  4,  1 >;  /**< RESUME    */
    using FSUSP     = regbits< type,  3,  1 >;  /**< FSUSP     */
    using LPMODE    = regbits< type,  2,  1 >;  /**< LPMODE    */
    using PDWN      = regbits< type,  1,  1 >;  /**< PDWN      */
    using FRES      = regbits< type,  0,  1 >;  /**< FRES      */
  };

  /**
   * interrupt status register
   */
  struct ISTR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x0 >;

    using CTR     = regbits< type, 15,  1 >;  /**< CTR     */
    using PMAOVR  = regbits< type, 14,  1 >;  /**< PMAOVR  */
    using ERR     = regbits< type, 13,  1 >;  /**< ERR     */
    using WKUP    = regbits< type, 12,  1 >;  /**< WKUP    */
    using SUSP    = regbits< type, 11,  1 >;  /**< SUSP    */
    using RESET   = regbits< type, 10,  1 >;  /**< RESET   */
    using SOF     = regbits< type,  9,  1 >;  /**< SOF     */
    using ESOF    = regbits< type,  8,  1 >;  /**< ESOF    */
    using L1REQ   = regbits< type,  7,  1 >;  /**< L1REQ   */
    using DIR     = regbits< type,  4,  1 >;  /**< DIR     */
    using EP_ID   = regbits< type,  0,  4 >;  /**< EP_ID   */
  };

  /**
   * frame number register
   */
  struct FNR
  : public reg< uint32_t, base_addr + 0x48, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x0 >;

    using RXDP  = regbits< type, 15,  1 >;  /**< RXDP  */
    using RXDM  = regbits< type, 14,  1 >;  /**< RXDM  */
    using LCK   = regbits< type, 13,  1 >;  /**< LCK   */
    using LSOF  = regbits< type, 11,  2 >;  /**< LSOF  */
    using FN    = regbits< type,  0, 11 >;  /**< FN    */
  };

  /**
   * device address
   */
  struct DADDR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x0 >;

    using EF   = regbits< type,  7,  1 >;  /**< EF   */
    using ADD  = regbits< type,  0,  7 >;  /**< ADD  */
  };

  /**
   * Buffer table address
   */
  struct BTABLE
  : public reg< uint32_t, base_addr + 0x50, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x0 >;

    // fixme: Field name equals parent register name: BTABLE
    using BTABLE_ = regbits< type,  3, 13 >;  /**< BTABLE  */
  };

  /**
   * LPM control and status register
   */
  struct LPMCSR
  : public reg< uint32_t, base_addr + 0x54, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x0 >;

    using BESL     = regbits< type,  4,  4 >;  /**< BESL     */
    using REMWAKE  = regbits< type,  3,  1 >;  /**< REMWAKE  */
    using LPMACK   = regbits< type,  1,  1 >;  /**< LPMACK   */
    using LPMEN    = regbits< type,  0,  1 >;  /**< LPMEN    */
  };

  /**
   * Battery charging detector
   */
  struct BCDR
  : public reg< uint32_t, base_addr + 0x58, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x0 >;

    using DPPU    = regbits< type, 15,  1 >;  /**< DPPU    */
    using PS2DET  = regbits< type,  7,  1 >;  /**< PS2DET  */
    using SDET    = regbits< type,  6,  1 >;  /**< SDET    */
    using PDET    = regbits< type,  5,  1 >;  /**< PDET    */
    using DCDET   = regbits< type,  4,  1 >;  /**< DCDET   */
    using SDEN    = regbits< type,  3,  1 >;  /**< SDEN    */
    using PDEN    = regbits< type,  2,  1 >;  /**< PDEN    */
    using DCDEN   = regbits< type,  1,  1 >;  /**< DCDEN   */
    using BCDEN   = regbits< type,  0,  1 >;  /**< BCDEN   */
  };
};
} // namespace mptl

#endif // ARCH_REG_USB_FS_HPP_INCLUDED
