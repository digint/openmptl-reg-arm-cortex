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
//  Import from CMSIS-SVD: "STMicro/STM32L15xxE.svd"
//
//  name: STM32L15xxE
//  version: 1.0
//  description: STM32L15xxE
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USB_SRAM_HPP_INCLUDED
#define ARCH_REG_USB_SRAM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal serial bus full-speed device interface
 *
 * (derived from: USB)
 */
struct USB_SRAM
{
  static constexpr reg_addr_t base_addr = 0x40006000;

  /**
   * endpoint 0 register
   */
  struct USB_EP0R
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using EA       = regbits< type,  0,  4 >;  /**< Endpoint address                         */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< Status bits, for transmission transfers  */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< Data Toggle, for transmission transfers  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< Correct Transfer for transmission        */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< Endpoint kind                            */
    using EP_TYPE  = regbits< type,  9,  2 >;  /**< Endpoint type                            */
    using SETUP    = regbits< type, 11,  1 >;  /**< Setup transaction completed              */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< Status bits, for reception transfers     */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< Data Toggle, for reception transfers     */
    using CTR_RX   = regbits< type, 15,  1 >;  /**< Correct transfer for reception           */
  };

  /**
   * endpoint 1 register
   */
  struct USB_EP1R
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using EA       = regbits< type,  0,  4 >;  /**< Endpoint address                         */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< Status bits, for transmission transfers  */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< Data Toggle, for transmission transfers  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< Correct Transfer for transmission        */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< Endpoint kind                            */
    using EP_TYPE  = regbits< type,  9,  2 >;  /**< Endpoint type                            */
    using SETUP    = regbits< type, 11,  1 >;  /**< Setup transaction completed              */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< Status bits, for reception transfers     */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< Data Toggle, for reception transfers     */
    using CTR_RX   = regbits< type, 15,  1 >;  /**< Correct transfer for reception           */
  };

  /**
   * endpoint 2 register
   */
  struct USB_EP2R
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using EA       = regbits< type,  0,  4 >;  /**< Endpoint address                         */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< Status bits, for transmission transfers  */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< Data Toggle, for transmission transfers  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< Correct Transfer for transmission        */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< Endpoint kind                            */
    using EP_TYPE  = regbits< type,  9,  2 >;  /**< Endpoint type                            */
    using SETUP    = regbits< type, 11,  1 >;  /**< Setup transaction completed              */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< Status bits, for reception transfers     */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< Data Toggle, for reception transfers     */
    using CTR_RX   = regbits< type, 15,  1 >;  /**< Correct transfer for reception           */
  };

  /**
   * endpoint 3 register
   */
  struct USB_EP3R
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using EA       = regbits< type,  0,  4 >;  /**< Endpoint address                         */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< Status bits, for transmission transfers  */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< Data Toggle, for transmission transfers  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< Correct Transfer for transmission        */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< Endpoint kind                            */
    using EP_TYPE  = regbits< type,  9,  2 >;  /**< Endpoint type                            */
    using SETUP    = regbits< type, 11,  1 >;  /**< Setup transaction completed              */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< Status bits, for reception transfers     */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< Data Toggle, for reception transfers     */
    using CTR_RX   = regbits< type, 15,  1 >;  /**< Correct transfer for reception           */
  };

  /**
   * endpoint 4 register
   */
  struct USB_EP4R
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using EA       = regbits< type,  0,  4 >;  /**< Endpoint address                         */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< Status bits, for transmission transfers  */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< Data Toggle, for transmission transfers  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< Correct Transfer for transmission        */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< Endpoint kind                            */
    using EP_TYPE  = regbits< type,  9,  2 >;  /**< Endpoint type                            */
    using SETUP    = regbits< type, 11,  1 >;  /**< Setup transaction completed              */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< Status bits, for reception transfers     */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< Data Toggle, for reception transfers     */
    using CTR_RX   = regbits< type, 15,  1 >;  /**< Correct transfer for reception           */
  };

  /**
   * endpoint 5 register
   */
  struct USB_EP5R
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using EA       = regbits< type,  0,  4 >;  /**< Endpoint address                         */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< Status bits, for transmission transfers  */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< Data Toggle, for transmission transfers  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< Correct Transfer for transmission        */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< Endpoint kind                            */
    using EP_TYPE  = regbits< type,  9,  2 >;  /**< Endpoint type                            */
    using SETUP    = regbits< type, 11,  1 >;  /**< Setup transaction completed              */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< Status bits, for reception transfers     */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< Data Toggle, for reception transfers     */
    using CTR_RX   = regbits< type, 15,  1 >;  /**< Correct transfer for reception           */
  };

  /**
   * endpoint 6 register
   */
  struct USB_EP6R
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using EA       = regbits< type,  0,  4 >;  /**< Endpoint address                         */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< Status bits, for transmission transfers  */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< Data Toggle, for transmission transfers  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< Correct Transfer for transmission        */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< Endpoint kind                            */
    using EP_TYPE  = regbits< type,  9,  2 >;  /**< Endpoint type                            */
    using SETUP    = regbits< type, 11,  1 >;  /**< Setup transaction completed              */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< Status bits, for reception transfers     */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< Data Toggle, for reception transfers     */
    using CTR_RX   = regbits< type, 15,  1 >;  /**< Correct transfer for reception           */
  };

  /**
   * endpoint 7 register
   */
  struct USB_EP7R
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using EA       = regbits< type,  0,  4 >;  /**< Endpoint address                         */
    using STAT_TX  = regbits< type,  4,  2 >;  /**< Status bits, for transmission transfers  */
    using DTOG_TX  = regbits< type,  6,  1 >;  /**< Data Toggle, for transmission transfers  */
    using CTR_TX   = regbits< type,  7,  1 >;  /**< Correct Transfer for transmission        */
    using EP_KIND  = regbits< type,  8,  1 >;  /**< Endpoint kind                            */
    using EP_TYPE  = regbits< type,  9,  2 >;  /**< Endpoint type                            */
    using SETUP    = regbits< type, 11,  1 >;  /**< Setup transaction completed              */
    using STAT_RX  = regbits< type, 12,  2 >;  /**< Status bits, for reception transfers     */
    using DTOG_RX  = regbits< type, 14,  1 >;  /**< Data Toggle, for reception transfers     */
    using CTR_RX   = regbits< type, 15,  1 >;  /**< Correct transfer for reception           */
  };

  /**
   * control register
   */
  struct USB_CNTR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000003 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000003 >;

    using FRES     = regbits< type,  0,  1 >;  /**< Force USB Reset                                    */
    using PDWN     = regbits< type,  1,  1 >;  /**< Power down                                         */
    using LPMODE   = regbits< type,  2,  1 >;  /**< Low-power mode                                     */
    using FSUSP    = regbits< type,  3,  1 >;  /**< Force suspend                                      */
    using RESUME   = regbits< type,  4,  1 >;  /**< Resume request                                     */
    using ESOFM    = regbits< type,  8,  1 >;  /**< Expected start of frame interrupt mask             */
    using SOFM     = regbits< type,  9,  1 >;  /**< Start of frame interrupt mask                      */
    using RESETM   = regbits< type, 10,  1 >;  /**< USB reset interrupt mask                           */
    using SUSPM    = regbits< type, 11,  1 >;  /**< Suspend mode interrupt mask                        */
    using WKUPM    = regbits< type, 12,  1 >;  /**< Wakeup interrupt mask                              */
    using ERRM     = regbits< type, 13,  1 >;  /**< Error interrupt mask                               */
    using PMAOVRM  = regbits< type, 14,  1 >;  /**< Packet memory area over / underrun interrupt mask  */
    using CTRM     = regbits< type, 15,  1 >;  /**< Correct transfer interrupt mask                    */
  };

  /**
   * interrupt status register
   */
  struct ISTR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using EP_ID   = regbits< type,  0,  4 >;  /**< Endpoint Identifier                 */
    using DIR     = regbits< type,  4,  1 >;  /**< Direction of transaction            */
    using ESOF    = regbits< type,  8,  1 >;  /**< Expected start frame                */
    using SOF     = regbits< type,  9,  1 >;  /**< start of frame                      */
    using RESET   = regbits< type, 10,  1 >;  /**< reset request                       */
    using SUSP    = regbits< type, 11,  1 >;  /**< Suspend mode request                */
    using WKUP    = regbits< type, 12,  1 >;  /**< Wakeup                              */
    using ERR     = regbits< type, 13,  1 >;  /**< Error                               */
    using PMAOVR  = regbits< type, 14,  1 >;  /**< Packet memory area over / underrun  */
    using CTR     = regbits< type, 15,  1 >;  /**< Correct transfer                    */
  };

  /**
   * frame number register
   */
  struct FNR
  : public reg< uint32_t, base_addr + 0x48, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x0000 >;

    using FN    = regbits< type,  0, 11 >;  /**< Frame number                */
    using LSOF  = regbits< type, 11,  2 >;  /**< Lost SOF                    */
    using LCK   = regbits< type, 13,  1 >;  /**< Locked                      */
    using RXDM  = regbits< type, 14,  1 >;  /**< Receive data - line status  */
    using RXDP  = regbits< type, 15,  1 >;  /**< Receive data + line status  */
  };

  /**
   * device address
   */
  struct DADDR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x0000 >;

    using ADD  = regbits< type,  0,  7 >;  /**< Device address   */
    using EF   = regbits< type,  7,  1 >;  /**< Enable function  */
  };

  /**
   * Buffer table address
   */
  struct BTABLE
  : public reg< uint32_t, base_addr + 0x50, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x0000 >;

    // fixme: Field name equals parent register name: BTABLE
    using BTABLE_ = regbits< type,  3, 13 >;  /**< Buffer table  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USB_SRAM_HPP_INCLUDED
