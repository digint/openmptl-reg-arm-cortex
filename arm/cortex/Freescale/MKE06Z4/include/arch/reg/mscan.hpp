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
//  Import from CMSIS-SVD: "Freescale/MKE06Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE06Z4
//  series: Kinetis_E
//  version: 1.6
//  description: MKE06Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MSCAN_HPP_INCLUDED
#define ARCH_REG_MSCAN_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Freescale's Scalable Controller Area Network
 */
struct MSCAN
{
  static constexpr reg_addr_t base_addr = 0x40024000;

  /**
   * MSCAN Control Register 0
   */
  struct CANCTL0
  : public reg< uint8_t, base_addr + 0, rw, 0x1 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x1 >;

    using INITRQ  = regbits< type,  0,  1 >;  /**< Initialization Mode Request  */
    using SLPRQ   = regbits< type,  1,  1 >;  /**< Sleep Mode Request           */
    using WUPE    = regbits< type,  2,  1 >;  /**< WakeUp Enable                */
    using TIME    = regbits< type,  3,  1 >;  /**< Timer Enable                 */
    using SYNCH   = regbits< type,  4,  1 >;  /**< Synchronized Status          */
    using CSWAI   = regbits< type,  5,  1 >;  /**< CAN Stops in Wait Mode       */
    using RXACT   = regbits< type,  6,  1 >;  /**< Receiver Active Status       */
    using RXFRM   = regbits< type,  7,  1 >;  /**< Received Frame Flag          */
  };

  /**
   * MSCAN Control Register 1
   */
  struct CANCTL1
  : public reg< uint8_t, base_addr + 0x1, rw, 0x11 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x11 >;

    using INITAK  = regbits< type,  0,  1 >;  /**< Initialization Mode Acknowledge  */
    using SLPAK   = regbits< type,  1,  1 >;  /**< Sleep Mode Acknowledge           */
    using WUPM    = regbits< type,  2,  1 >;  /**< WakeUp Mode                      */
    using BORM    = regbits< type,  3,  1 >;  /**< Bus-Off Recovery Mode            */
    using LISTEN  = regbits< type,  4,  1 >;  /**< Listen Only Mode                 */
    using LOOPB   = regbits< type,  5,  1 >;  /**< Loopback Self Test Mode          */
    using CLKSRC  = regbits< type,  6,  1 >;  /**< MSCAN Clock Source               */
    using CANE    = regbits< type,  7,  1 >;  /**< MSCAN Enable                     */
  };

  /**
   * MSCAN Bus Timing Register 0
   */
  struct CANBTR0
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using BRP  = regbits< type,  0,  6 >;  /**< Baud Rate Prescaler         */
    using SJW  = regbits< type,  6,  2 >;  /**< Synchronization Jump Width  */
  };

  /**
   * MSCAN Bus Timing Register 1
   */
  struct CANBTR1
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using TSEG1  = regbits< type,  0,  4 >;  /**< Time Segment 1  */
    using TSEG2  = regbits< type,  4,  3 >;  /**< Time Segment 2  */
    using SAMP   = regbits< type,  7,  1 >;  /**< Sampling        */
  };

  /**
   * MSCAN Receiver Flag Register
   */
  struct CANRFLG
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using RXF    = regbits< type,  0,  1 >;  /**< Receive Buffer Full Flag          */
    using OVRIF  = regbits< type,  1,  1 >;  /**< Overrun Interrupt Flag            */
    using TSTAT  = regbits< type,  2,  2 >;  /**< Transmitter Status                */
    using RSTAT  = regbits< type,  4,  2 >;  /**< Receiver Status                   */
    using CSCIF  = regbits< type,  6,  1 >;  /**< CAN Status Change Interrupt Flag  */
    using WUPIF  = regbits< type,  7,  1 >;  /**< Wake-Up Interrupt Flag            */
  };

  /**
   * MSCAN Receiver Interrupt Enable Register
   */
  struct CANRIER
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using RXFIE   = regbits< type,  0,  1 >;  /**< Receiver Full Interrupt Enable      */
    using OVRIE   = regbits< type,  1,  1 >;  /**< Overrun Interrupt Enable            */
    using TSTATE  = regbits< type,  2,  2 >;  /**< Transmitter Status Change Enable    */
    using RSTATE  = regbits< type,  4,  2 >;  /**< Receiver Status Change Enable       */
    using CSCIE   = regbits< type,  6,  1 >;  /**< CAN Status Change Interrupt Enable  */
    using WUPIE   = regbits< type,  7,  1 >;  /**< WakeUp Interrupt Enable             */
  };

  /**
   * MSCAN Transmitter Flag Register
   */
  struct CANTFLG
  : public reg< uint8_t, base_addr + 0x6, rw, 0x7 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0x7 >;

    using TXE  = regbits< type,  0,  3 >;  /**< Transmitter Buffer Empty  */
  };

  /**
   * MSCAN Transmitter Interrupt Enable Register
   */
  struct CANTIER
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using TXEIE  = regbits< type,  0,  3 >;  /**< Transmitter Empty Interrupt Enable  */
  };

  /**
   * MSCAN Transmitter Message Abort Request Register
   */
  struct CANTARQ
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using ABTRQ  = regbits< type,  0,  3 >;  /**< Abort Request  */
  };

  /**
   * MSCAN Transmitter Message Abort Acknowledge Register
   */
  struct CANTAAK
  : public reg< uint8_t, base_addr + 0x9, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9, ro, 0 >;

    using ABTAK  = regbits< type,  0,  3 >;  /**< Abort Acknowledge  */
  };

  /**
   * MSCAN Transmit Buffer Selection Register
   */
  struct CANTBSEL
  : public reg< uint8_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0 >;

    using TX  = regbits< type,  0,  3 >;  /**< Transmit Buffer Select  */
  };

  /**
   * MSCAN Identifier Acceptance Control Register
   */
  struct CANIDAC
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    using IDHIT  = regbits< type,  0,  3 >;  /**< Identifier Acceptance Hit Indicator  */
    using IDAM   = regbits< type,  4,  2 >;  /**< Identifier Acceptance Mode           */
  };

  /**
   * MSCAN Miscellaneous Register
   */
  struct CANMISC
  : public reg< uint8_t, base_addr + 0xd, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xd, rw, 0 >;

    using BOHOLD  = regbits< type,  0,  1 >;  /**< Bus-off State Hold Until User Request  */
  };

  /**
   * MSCAN Receive Error Counter
   */
  struct CANRXERR
  : public reg< uint8_t, base_addr + 0xe, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xe, ro, 0 >;

    using RXERR  = regbits< type,  0,  8 >;  /**< Receive Error Counter  */
  };

  /**
   * MSCAN Transmit Error Counter
   */
  struct CANTXERR
  : public reg< uint8_t, base_addr + 0xf, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xf, ro, 0 >;

    using TXERR  = regbits< type,  0,  8 >;  /**< Transmit Error Counter  */
  };

  /**
   * MSCAN Identifier Acceptance Register n of First Bank
   */
  struct CANIDAR0
  : public reg< uint8_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0 >;

    using AC  = regbits< type,  0,  8 >;  /**< Acceptance Code Bits  */
  };

  /**
   * MSCAN Identifier Acceptance Register n of First Bank
   */
  struct CANIDAR1
  : public reg< uint8_t, base_addr + 0x11, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0 >;

    using AC  = regbits< type,  0,  8 >;  /**< Acceptance Code Bits  */
  };

  /**
   * MSCAN Identifier Acceptance Register n of First Bank
   */
  struct CANIDAR2
  : public reg< uint8_t, base_addr + 0x12, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x12, rw, 0 >;

    using AC  = regbits< type,  0,  8 >;  /**< Acceptance Code Bits  */
  };

  /**
   * MSCAN Identifier Acceptance Register n of First Bank
   */
  struct CANIDAR3
  : public reg< uint8_t, base_addr + 0x13, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x13, rw, 0 >;

    using AC  = regbits< type,  0,  8 >;  /**< Acceptance Code Bits  */
  };

  /**
   * MSCAN Identifier Mask Register n of First Bank
   */
  struct CANIDMR0
  : public reg< uint8_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0 >;

    using AM  = regbits< type,  0,  8 >;  /**< Acceptance Mask Bits  */
  };

  /**
   * MSCAN Identifier Mask Register n of First Bank
   */
  struct CANIDMR1
  : public reg< uint8_t, base_addr + 0x15, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0 >;

    using AM  = regbits< type,  0,  8 >;  /**< Acceptance Mask Bits  */
  };

  /**
   * MSCAN Identifier Mask Register n of First Bank
   */
  struct CANIDMR2
  : public reg< uint8_t, base_addr + 0x16, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x16, rw, 0 >;

    using AM  = regbits< type,  0,  8 >;  /**< Acceptance Mask Bits  */
  };

  /**
   * MSCAN Identifier Mask Register n of First Bank
   */
  struct CANIDMR3
  : public reg< uint8_t, base_addr + 0x17, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x17, rw, 0 >;

    using AM  = regbits< type,  0,  8 >;  /**< Acceptance Mask Bits  */
  };

  /**
   * MSCAN Identifier Acceptance Register n of Second Bank
   */
  struct CANIDAR4
  : public reg< uint8_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0 >;

    using AC  = regbits< type,  0,  8 >;  /**< Acceptance Code Bits  */
  };

  /**
   * MSCAN Identifier Acceptance Register n of Second Bank
   */
  struct CANIDAR5
  : public reg< uint8_t, base_addr + 0x19, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x19, rw, 0 >;

    using AC  = regbits< type,  0,  8 >;  /**< Acceptance Code Bits  */
  };

  /**
   * MSCAN Identifier Acceptance Register n of Second Bank
   */
  struct CANIDAR6
  : public reg< uint8_t, base_addr + 0x1a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1a, rw, 0 >;

    using AC  = regbits< type,  0,  8 >;  /**< Acceptance Code Bits  */
  };

  /**
   * MSCAN Identifier Acceptance Register n of Second Bank
   */
  struct CANIDAR7
  : public reg< uint8_t, base_addr + 0x1b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1b, rw, 0 >;

    using AC  = regbits< type,  0,  8 >;  /**< Acceptance Code Bits  */
  };

  /**
   * MSCAN Identifier Mask Register n of Second Bank
   */
  struct CANIDMR4
  : public reg< uint8_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, rw, 0 >;

    using AM  = regbits< type,  0,  8 >;  /**< Acceptance Mask Bits  */
  };

  /**
   * MSCAN Identifier Mask Register n of Second Bank
   */
  struct CANIDMR5
  : public reg< uint8_t, base_addr + 0x1d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1d, rw, 0 >;

    using AM  = regbits< type,  0,  8 >;  /**< Acceptance Mask Bits  */
  };

  /**
   * MSCAN Identifier Mask Register n of Second Bank
   */
  struct CANIDMR6
  : public reg< uint8_t, base_addr + 0x1e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1e, rw, 0 >;

    using AM  = regbits< type,  0,  8 >;  /**< Acceptance Mask Bits  */
  };

  /**
   * MSCAN Identifier Mask Register n of Second Bank
   */
  struct CANIDMR7
  : public reg< uint8_t, base_addr + 0x1f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1f, rw, 0 >;

    using AM  = regbits< type,  0,  8 >;  /**< Acceptance Mask Bits  */
  };

  /**
   * Receive Extended Identifier Register 0
   */
  struct REIDR0
  : public reg< uint8_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0 >;

    using REID28_REID21  = regbits< type,  0,  8 >;  /**< Extended Format Identifier  */
  };

  /**
   * Receive Standard Identifier Register 0
   */
  struct RSIDR0
  : public reg< uint8_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0 >;

    using RSID10_RSID3  = regbits< type,  0,  8 >;  /**< Standard Format Identifier  */
  };

  /**
   * Receive Extended Identifier Register 1
   */
  struct REIDR1
  : public reg< uint8_t, base_addr + 0x21, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x21, rw, 0 >;

    using REID17_REID15  = regbits< type,  0,  3 >;  /**< Extended Format Identifier 17-15  */
    using REIDE          = regbits< type,  3,  1 >;  /**< ID Extended                       */
    using RSRR           = regbits< type,  4,  1 >;  /**< Substitute Remote Request         */
    using REID20_REID18  = regbits< type,  5,  3 >;  /**< Extended Format Identifier 20-18  */
  };

  /**
   * Standard Identifier Register 1
   */
  struct RSIDR1
  : public reg< uint8_t, base_addr + 0x21, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x21, rw, 0 >;

    using RSIDE        = regbits< type,  3,  1 >;  /**< ID Extended                     */
    using RSRTR        = regbits< type,  4,  1 >;  /**< Remote Transmission Request     */
    using RSID2_RSID0  = regbits< type,  5,  3 >;  /**< Standard Format Identifier 2-0  */
  };

  /**
   * Receive Extended Identifier Register 2
   */
  struct REIDR2
  : public reg< uint8_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x22, rw, 0 >;

    using REID14_REID7  = regbits< type,  0,  8 >;  /**< Extended Format Identifier 14-7  */
  };

  /**
   * Receive Extended Identifier Register 3
   */
  struct REIDR3
  : public reg< uint8_t, base_addr + 0x23, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x23, rw, 0 >;

    using RERTR        = regbits< type,  0,  1 >;  /**< Remote Transmission Request     */
    using REID6_REID0  = regbits< type,  1,  7 >;  /**< Extended Format Identifier 6-0  */
  };

  /**
   * Receive Extended Data Segment Register N
   */
  struct REDSR%s
  : public reg< uint8_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0 >;

    using RDB  = regbits< type,  0,  8 >;  /**< Data Bits  */
  };

  /**
   * Receive Data Length Register
   */
  struct RDLR
  : public reg< uint8_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2c, rw, 0 >;

    using RDLC  = regbits< type,  0,  4 >;  /**< Data Length Code Bits  */
  };

  /**
   * Receive Time Stamp Register High
   */
  struct RTSRH
  : public reg< uint8_t, base_addr + 0x2e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2e, rw, 0 >;

    using RTS  = regbits< type,  0,  8 >;  /**< Time Stamp  */
  };

  /**
   * Receive Time Stamp Register Low
   */
  struct RTSRL
  : public reg< uint8_t, base_addr + 0x2f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2f, rw, 0 >;

    using RTS  = regbits< type,  0,  8 >;  /**< Time Stamp  */
  };

  /**
   * Transmit Extended Identifier Register 0
   */
  struct TEIDR0
  : public reg< uint8_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0 >;

    using TEID28_TEID21  = regbits< type,  0,  8 >;  /**< Extended Format Identifier  */
  };

  /**
   * Transmit Standard Identifier Register 0
   */
  struct TSIDR0
  : public reg< uint8_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0 >;

    using TSID10_TSID3  = regbits< type,  0,  8 >;  /**< Standard Format Identifier  */
  };

  /**
   * Transmit Extended Identifier Register 1
   */
  struct TEIDR1
  : public reg< uint8_t, base_addr + 0x31, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31, rw, 0 >;

    using TEID17_TEID15  = regbits< type,  0,  3 >;  /**< Extended Format Identifier 17-15  */
    using TEIDE          = regbits< type,  3,  1 >;  /**< ID Extended                       */
    using TSRR           = regbits< type,  4,  1 >;  /**< Substitute Remote Request         */
    using TEID20_TEID18  = regbits< type,  5,  3 >;  /**< Extended Format Identifier 20-18  */
  };

  /**
   * Transmit Standard Identifier Register 1
   */
  struct TSIDR1
  : public reg< uint8_t, base_addr + 0x31, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31, rw, 0 >;

    using TSIDE        = regbits< type,  3,  1 >;  /**< ID Extended                     */
    using TSRTR        = regbits< type,  4,  1 >;  /**< Remote Transmission Request     */
    using TSID2_TSID0  = regbits< type,  5,  3 >;  /**< Standard Format Identifier 2-0  */
  };

  /**
   * Transmit Extended Identifier Register 2
   */
  struct TEIDR2
  : public reg< uint8_t, base_addr + 0x32, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32, rw, 0 >;

    using TEID14_TEID7  = regbits< type,  0,  8 >;  /**< Extended Format Identifier 14-7  */
  };

  /**
   * Transmit Extended Identifier Register 3
   */
  struct TEIDR3
  : public reg< uint8_t, base_addr + 0x33, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33, rw, 0 >;

    using TERTR        = regbits< type,  0,  1 >;  /**< Remote Transmission Request     */
    using TEID6_TEID0  = regbits< type,  1,  7 >;  /**< Extended Format Identifier 6-0  */
  };

  /**
   * Transmit Extended Data Segment Register N
   */
  struct TEDSR%s
  : public reg< uint8_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0 >;

    using TDB  = regbits< type,  0,  8 >;  /**< Data Bits  */
  };

  /**
   * This register keeps the data length field of the CAN frame.
   */
  struct TDLR
  : public reg< uint8_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3c, rw, 0 >;

    using TDLC  = regbits< type,  0,  4 >;  /**< Data Length Code Bits  */
  };

  /**
   * Transmit Buffer Priority Register
   */
  struct TBPR
  : public reg< uint8_t, base_addr + 0x3d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3d, rw, 0 >;

    using PRIO  = regbits< type,  0,  8 >;  /**< Priority  */
  };

  /**
   * Transmit Time Stamp Register High
   */
  struct TTSRH
  : public reg< uint8_t, base_addr + 0x3e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3e, rw, 0 >;

    using TTS  = regbits< type,  0,  8 >;  /**< Time Stamp  */
  };

  /**
   * Transmit Time Stamp Register Low
   */
  struct TTSRL
  : public reg< uint8_t, base_addr + 0x3f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3f, rw, 0 >;

    using TTS  = regbits< type,  0,  8 >;  /**< Time Stamp  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MSCAN_HPP_INCLUDED
