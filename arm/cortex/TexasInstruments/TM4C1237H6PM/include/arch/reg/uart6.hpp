/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "TexasInstruments/TM4C1237H6PM.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C1237H6PM
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UART6_HPP_INCLUDED
#define ARCH_REG_UART6_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for UART0 peripheral
 *
 * (derived from: UART0)
 */
struct UART6
{
  static constexpr reg_addr_t base_addr = 0x40012000;

  /**
   * UART Data
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_DR_DATA  = regbits< type,  0,  8 >;  /**< Data Transmitted or Received  */
    using UART_DR_FE    = regbits< type,  8,  1 >;  /**< UART Framing Error            */
    using UART_DR_PE    = regbits< type,  9,  1 >;  /**< UART Parity Error             */
    using UART_DR_BE    = regbits< type, 10,  1 >;  /**< UART Break Error              */
    using UART_DR_OE    = regbits< type, 11,  1 >;  /**< UART Overrun Error            */
  };

  /**
   * UART Receive Status/Error Clear
   */
  struct RSR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_RSR_FE  = regbits< type,  0,  1 >;  /**< UART Framing Error  */
    using UART_RSR_PE  = regbits< type,  1,  1 >;  /**< UART Parity Error   */
    using UART_RSR_BE  = regbits< type,  2,  1 >;  /**< UART Break Error    */
    using UART_RSR_OE  = regbits< type,  3,  1 >;  /**< UART Overrun Error  */
  };

  /**
   * UART Receive Status/Error Clear
   */
  struct ECR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_ECR_DATA  = regbits< type,  0,  8 >;  /**< Error Clear  */
  };

  /**
   * UART Flag
   */
  struct FR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_FR_CTS   = regbits< type,  0,  1 >;  /**< Clear To Send             */
    using UART_FR_BUSY  = regbits< type,  3,  1 >;  /**< UART Busy                 */
    using UART_FR_RXFE  = regbits< type,  4,  1 >;  /**< UART Receive FIFO Empty   */
    using UART_FR_TXFF  = regbits< type,  5,  1 >;  /**< UART Transmit FIFO Full   */
    using UART_FR_RXFF  = regbits< type,  6,  1 >;  /**< UART Receive FIFO Full    */
    using UART_FR_TXFE  = regbits< type,  7,  1 >;  /**< UART Transmit FIFO Empty  */
  };

  /**
   * UART IrDA Low-Power Register
   */
  struct ILPR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_ILPR_ILPDVSR  = regbits< type,  0,  8 >;  /**< IrDA Low-Power Divisor  */
  };

  /**
   * UART Integer Baud-Rate Divisor
   */
  struct IBRD
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_IBRD_DIVINT  = regbits< type,  0, 16 >;  /**< Integer Baud-Rate Divisor  */
  };

  /**
   * UART Fractional Baud-Rate Divisor
   */
  struct FBRD
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_FBRD_DIVFRAC  = regbits< type,  0,  6 >;  /**< Fractional Baud-Rate Divisor  */
  };

  /**
   * UART Line Control
   */
  struct LCRH
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_LCRH_BRK   = regbits< type,  0,  1 >;  /**< UART Send Break            */
    using UART_LCRH_PEN   = regbits< type,  1,  1 >;  /**< UART Parity Enable         */
    using UART_LCRH_EPS   = regbits< type,  2,  1 >;  /**< UART Even Parity Select    */
    using UART_LCRH_STP2  = regbits< type,  3,  1 >;  /**< UART Two Stop Bits Select  */
    using UART_LCRH_FEN   = regbits< type,  4,  1 >;  /**< UART Enable FIFOs          */
    using UART_LCRH_WLEN  = regbits< type,  5,  2 >;  /**< UART Word Length           */
    using UART_LCRH_SPS   = regbits< type,  7,  1 >;  /**< UART Stick Parity Select   */
  };

  /**
   * UART Control
   */
  struct CTL
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_CTL_UARTEN  = regbits< type,  0,  1 >;  /**< UART Enable                  */
    using UART_CTL_SIREN   = regbits< type,  1,  1 >;  /**< UART SIR Enable              */
    using UART_CTL_SIRLP   = regbits< type,  2,  1 >;  /**< UART SIR Low-Power Mode      */
    using UART_CTL_SMART   = regbits< type,  3,  1 >;  /**< ISO 7816 Smart Card Support  */
    using UART_CTL_EOT     = regbits< type,  4,  1 >;  /**< End of Transmission          */
    using UART_CTL_HSE     = regbits< type,  5,  1 >;  /**< High-Speed Enable            */
    using UART_CTL_LBE     = regbits< type,  7,  1 >;  /**< UART Loop Back Enable        */
    using UART_CTL_TXE     = regbits< type,  8,  1 >;  /**< UART Transmit Enable         */
    using UART_CTL_RXE     = regbits< type,  9,  1 >;  /**< UART Receive Enable          */
    using UART_CTL_RTS     = regbits< type, 11,  1 >;  /**< Request to Send              */
    using UART_CTL_RTSEN   = regbits< type, 14,  1 >;  /**< Enable Request to Send       */
    using UART_CTL_CTSEN   = regbits< type, 15,  1 >;  /**< Enable Clear To Send         */
  };

  /**
   * UART Interrupt FIFO Level Select
   */
  struct IFLS
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_IFLS_TX  = regbits< type,  0,  3 >;  /**< UART Transmit Interrupt FIFO Level Select  */
    using UART_IFLS_RX  = regbits< type,  3,  3 >;  /**< UART Receive Interrupt FIFO Level Select   */
  };

  /**
   * UART Interrupt Mask
   */
  struct IM
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_IM_CTSMIM  = regbits< type,  1,  1 >;  /**< UART Clear to Send Modem Interrupt Mask  */
    using UART_IM_RXIM    = regbits< type,  4,  1 >;  /**< UART Receive Interrupt Mask              */
    using UART_IM_TXIM    = regbits< type,  5,  1 >;  /**< UART Transmit Interrupt Mask             */
    using UART_IM_RTIM    = regbits< type,  6,  1 >;  /**< UART Receive Time-Out Interrupt Mask     */
    using UART_IM_FEIM    = regbits< type,  7,  1 >;  /**< UART Framing Error Interrupt Mask        */
    using UART_IM_PEIM    = regbits< type,  8,  1 >;  /**< UART Parity Error Interrupt Mask         */
    using UART_IM_BEIM    = regbits< type,  9,  1 >;  /**< UART Break Error Interrupt Mask          */
    using UART_IM_OEIM    = regbits< type, 10,  1 >;  /**< UART Overrun Error Interrupt Mask        */
    using UART_IM_9BITIM  = regbits< type, 12,  1 >;  /**< 9-Bit Mode Interrupt Mask                */
  };

  /**
   * UART Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_RIS_CTSRIS   = regbits< type,  1,  1 >;  /**< UART Clear to Send Modem Raw Interrupt Status  */
    using UART_RIS_RXRIS    = regbits< type,  4,  1 >;  /**< UART Receive Raw Interrupt Status              */
    using UART_RIS_TXRIS    = regbits< type,  5,  1 >;  /**< UART Transmit Raw Interrupt Status             */
    using UART_RIS_RTRIS    = regbits< type,  6,  1 >;  /**< UART Receive Time-Out Raw Interrupt Status     */
    using UART_RIS_FERIS    = regbits< type,  7,  1 >;  /**< UART Framing Error Raw Interrupt Status        */
    using UART_RIS_PERIS    = regbits< type,  8,  1 >;  /**< UART Parity Error Raw Interrupt Status         */
    using UART_RIS_BERIS    = regbits< type,  9,  1 >;  /**< UART Break Error Raw Interrupt Status          */
    using UART_RIS_OERIS    = regbits< type, 10,  1 >;  /**< UART Overrun Error Raw Interrupt Status        */
    using UART_RIS_9BITRIS  = regbits< type, 12,  1 >;  /**< 9-Bit Mode Raw Interrupt Status                */
  };

  /**
   * UART Masked Interrupt Status
   */
  struct MIS
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_MIS_CTSMIS   = regbits< type,  1,  1 >;  /**< UART Clear to Send Modem Masked Interrupt Status  */
    using UART_MIS_RXMIS    = regbits< type,  4,  1 >;  /**< UART Receive Masked Interrupt Status              */
    using UART_MIS_TXMIS    = regbits< type,  5,  1 >;  /**< UART Transmit Masked Interrupt Status             */
    using UART_MIS_RTMIS    = regbits< type,  6,  1 >;  /**< UART Receive Time-Out Masked Interrupt Status     */
    using UART_MIS_FEMIS    = regbits< type,  7,  1 >;  /**< UART Framing Error Masked Interrupt Status        */
    using UART_MIS_PEMIS    = regbits< type,  8,  1 >;  /**< UART Parity Error Masked Interrupt Status         */
    using UART_MIS_BEMIS    = regbits< type,  9,  1 >;  /**< UART Break Error Masked Interrupt Status          */
    using UART_MIS_OEMIS    = regbits< type, 10,  1 >;  /**< UART Overrun Error Masked Interrupt Status        */
    using UART_MIS_9BITMIS  = regbits< type, 12,  1 >;  /**< 9-Bit Mode Masked Interrupt Status                */
  };

  /**
   * UART Interrupt Clear
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x00000044, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, wo, 0 >;

    using UART_ICR_CTSMIC  = regbits< type,  1,  1 >;  /**< UART Clear to Send Modem Interrupt Clear  */
    using UART_ICR_RXIC    = regbits< type,  4,  1 >;  /**< Receive Interrupt Clear                   */
    using UART_ICR_TXIC    = regbits< type,  5,  1 >;  /**< Transmit Interrupt Clear                  */
    using UART_ICR_RTIC    = regbits< type,  6,  1 >;  /**< Receive Time-Out Interrupt Clear          */
    using UART_ICR_FEIC    = regbits< type,  7,  1 >;  /**< Framing Error Interrupt Clear             */
    using UART_ICR_PEIC    = regbits< type,  8,  1 >;  /**< Parity Error Interrupt Clear              */
    using UART_ICR_BEIC    = regbits< type,  9,  1 >;  /**< Break Error Interrupt Clear               */
    using UART_ICR_OEIC    = regbits< type, 10,  1 >;  /**< Overrun Error Interrupt Clear             */
    using UART_ICR_9BITIC  = regbits< type, 12,  1 >;  /**< 9-Bit Mode Interrupt Clear                */
  };

  /**
   * UART DMA Control
   */
  struct DMACTL
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_DMACTL_RXDMAE  = regbits< type,  0,  1 >;  /**< Receive DMA Enable   */
    using UART_DMACTL_TXDMAE  = regbits< type,  1,  1 >;  /**< Transmit DMA Enable  */
    using UART_DMACTL_DMAERR  = regbits< type,  2,  1 >;  /**< DMA on Error         */
  };

  /**
   * UART 9-Bit Self Address
   */
  struct _9BITADDR
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_9BITADDR_ADDR    = regbits< type,  0,  8 >;  /**< Self Address for 9-Bit Mode  */
    using UART_9BITADDR_9BITEN  = regbits< type, 15,  1 >;  /**< Enable 9-Bit Mode            */
  };

  /**
   * UART 9-Bit Self Address Mask
   */
  struct _9BITAMASK
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_9BITAMASK_MASK  = regbits< type,  0,  8 >;  /**< Self Address Mask for 9-Bit Mode  */
  };

  /**
   * UART Peripheral Properties
   */
  struct PP
  : public reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_PP_SC  = regbits< type,  0,  1 >;  /**< Smart Card Support  */
    using UART_PP_NB  = regbits< type,  1,  1 >;  /**< 9-Bit Support       */
  };

  /**
   * UART Clock Configuration
   */
  struct CC
  : public reg< uint32_t, base_addr + 0x00000fc8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UART_CC_CS  = regbits< type,  0,  4 >;  /**< UART Baud Clock Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UART6_HPP_INCLUDED
