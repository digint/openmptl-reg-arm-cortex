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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C1237E6PM.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C1237E6PM
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

#ifndef ARCH_REG_CAN0_HPP_INCLUDED
#define ARCH_REG_CAN0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for CAN0 peripheral
 */
struct CAN0
{
  static constexpr reg_addr_t base_addr = 0x40040000;

  /**
   * CAN Control
   */
  struct CTL
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_CTL_INIT  = regbits< type,  0,  1 >;  /**< Initialization                    */
    using CAN_CTL_IE    = regbits< type,  1,  1 >;  /**< CAN Interrupt Enable              */
    using CAN_CTL_SIE   = regbits< type,  2,  1 >;  /**< Status Interrupt Enable           */
    using CAN_CTL_EIE   = regbits< type,  3,  1 >;  /**< Error Interrupt Enable            */
    using CAN_CTL_DAR   = regbits< type,  5,  1 >;  /**< Disable Automatic-Retransmission  */
    using CAN_CTL_CCE   = regbits< type,  6,  1 >;  /**< Configuration Change Enable       */
    using CAN_CTL_TEST  = regbits< type,  7,  1 >;  /**< Test Mode Enable                  */
  };

  /**
   * CAN Status
   */
  struct STS
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_STS_LEC    = regbits< type,  0,  3 >;  /**< Last Error Code                     */
    using CAN_STS_TXOK   = regbits< type,  3,  1 >;  /**< Transmitted a Message Successfully  */
    using CAN_STS_RXOK   = regbits< type,  4,  1 >;  /**< Received a Message Successfully     */
    using CAN_STS_EPASS  = regbits< type,  5,  1 >;  /**< Error Passive                       */
    using CAN_STS_EWARN  = regbits< type,  6,  1 >;  /**< Warning Status                      */
    using CAN_STS_BOFF   = regbits< type,  7,  1 >;  /**< Bus-Off Status                      */
  };

  /**
   * CAN Error Counter
   */
  struct ERR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_ERR_TEC  = regbits< type,  0,  8 >;  /**< Transmit Error Counter  */
    using CAN_ERR_REC  = regbits< type,  8,  7 >;  /**< Receive Error Counter   */
    using CAN_ERR_RP   = regbits< type, 15,  1 >;  /**< Received Error Passive  */
  };

  /**
   * CAN Bit Timing
   */
  struct BIT
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_BIT_BRP    = regbits< type,  0,  6 >;  /**< Baud Rate Prescaler               */
    using CAN_BIT_SJW    = regbits< type,  6,  2 >;  /**< (Re)Synchronization Jump Width    */
    using CAN_BIT_TSEG1  = regbits< type,  8,  4 >;  /**< Time Segment Before Sample Point  */
    using CAN_BIT_TSEG2  = regbits< type, 12,  3 >;  /**< Time Segment after Sample Point   */
  };

  /**
   * CAN Interrupt
   */
  struct INT
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_INT_INTID  = regbits< type,  0, 16 >;  /**< Interrupt Identifier  */
  };

  /**
   * CAN Test
   */
  struct TST
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_TST_BASIC   = regbits< type,  2,  1 >;  /**< Basic Mode           */
    using CAN_TST_SILENT  = regbits< type,  3,  1 >;  /**< Silent Mode          */
    using CAN_TST_LBACK   = regbits< type,  4,  1 >;  /**< Loopback Mode        */
    using CAN_TST_TX      = regbits< type,  5,  2 >;  /**< Transmit Control     */
    using CAN_TST_RX      = regbits< type,  7,  1 >;  /**< Receive Observation  */
  };

  /**
   * CAN Baud Rate Prescaler Extension
   */
  struct BRPE
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_BRPE_BRPE  = regbits< type,  0,  4 >;  /**< Baud Rate Prescaler Extension  */
  };

  /**
   * CAN IF1 Command Request
   */
  struct IF1CRQ
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1CRQ_MNUM  = regbits< type,  0,  6 >;  /**< Message Number  */
    using CAN_IF1CRQ_BUSY  = regbits< type, 15,  1 >;  /**< Busy Flag       */
  };

  /**
   * CAN IF1 Command Mask
   */
  struct IF1CMSK
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1CMSK_DATAB      = regbits< type,  0,  1 >;  /**< Access Data Byte 4 to 7      */
    using CAN_IF1CMSK_DATAA      = regbits< type,  1,  1 >;  /**< Access Data Byte 0 to 3      */
    using CAN_IF1CMSK_NEWDAT     = regbits< type,  2,  1 >;  /**< Access New Data              */
    using CAN_IF1CMSK_CLRINTPND  = regbits< type,  3,  1 >;  /**< Clear Interrupt Pending Bit  */
    using CAN_IF1CMSK_CONTROL    = regbits< type,  4,  1 >;  /**< Access Control Bits          */
    using CAN_IF1CMSK_ARB        = regbits< type,  5,  1 >;  /**< Access Arbitration Bits      */
    using CAN_IF1CMSK_MASK       = regbits< type,  6,  1 >;  /**< Access Mask Bits             */
    using CAN_IF1CMSK_WRNRD      = regbits< type,  7,  1 >;  /**< Write, Not Read              */
  };

  /**
   * CAN IF1 Command Mask
   */
  struct IF1CMSK
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1CMSK_TXRQST  = regbits< type,  2,  1 >;  /**< Access Transmission Request  */
  };

  /**
   * CAN IF1 Mask 1
   */
  struct IF1MSK1
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1MSK1_IDMSK  = regbits< type,  0, 16 >;  /**< Identifier Mask  */
  };

  /**
   * CAN IF1 Mask 2
   */
  struct IF1MSK2
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1MSK2_IDMSK  = regbits< type,  0, 13 >;  /**< Identifier Mask           */
    using CAN_IF1MSK2_MDIR   = regbits< type, 14,  1 >;  /**< Mask Message Direction    */
    using CAN_IF1MSK2_MXTD   = regbits< type, 15,  1 >;  /**< Mask Extended Identifier  */
  };

  /**
   * CAN IF1 Arbitration 1
   */
  struct IF1ARB1
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1ARB1_ID  = regbits< type,  0, 16 >;  /**< Message Identifier  */
  };

  /**
   * CAN IF1 Arbitration 2
   */
  struct IF1ARB2
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1ARB2_ID      = regbits< type,  0, 13 >;  /**< Message Identifier   */
    using CAN_IF1ARB2_DIR     = regbits< type, 13,  1 >;  /**< Message Direction    */
    using CAN_IF1ARB2_XTD     = regbits< type, 14,  1 >;  /**< Extended Identifier  */
    using CAN_IF1ARB2_MSGVAL  = regbits< type, 15,  1 >;  /**< Message Valid        */
  };

  /**
   * CAN IF1 Message Control
   */
  struct IF1MCTL
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1MCTL_DLC     = regbits< type,  0,  4 >;  /**< Data Length Code           */
    using CAN_IF1MCTL_EOB     = regbits< type,  7,  1 >;  /**< End of Buffer              */
    using CAN_IF1MCTL_TXRQST  = regbits< type,  8,  1 >;  /**< Transmit Request           */
    using CAN_IF1MCTL_RMTEN   = regbits< type,  9,  1 >;  /**< Remote Enable              */
    using CAN_IF1MCTL_RXIE    = regbits< type, 10,  1 >;  /**< Receive Interrupt Enable   */
    using CAN_IF1MCTL_TXIE    = regbits< type, 11,  1 >;  /**< Transmit Interrupt Enable  */
    using CAN_IF1MCTL_UMASK   = regbits< type, 12,  1 >;  /**< Use Acceptance Mask        */
    using CAN_IF1MCTL_INTPND  = regbits< type, 13,  1 >;  /**< Interrupt Pending          */
    using CAN_IF1MCTL_MSGLST  = regbits< type, 14,  1 >;  /**< Message Lost               */
    using CAN_IF1MCTL_NEWDAT  = regbits< type, 15,  1 >;  /**< New Data                   */
  };

  /**
   * CAN IF1 Data A1
   */
  struct IF1DA1
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1DA1_DATA  = regbits< type,  0, 16 >;  /**< Data  */
  };

  /**
   * CAN IF1 Data A2
   */
  struct IF1DA2
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1DA2_DATA  = regbits< type,  0, 16 >;  /**< Data  */
  };

  /**
   * CAN IF1 Data B1
   */
  struct IF1DB1
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1DB1_DATA  = regbits< type,  0, 16 >;  /**< Data  */
  };

  /**
   * CAN IF1 Data B2
   */
  struct IF1DB2
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF1DB2_DATA  = regbits< type,  0, 16 >;  /**< Data  */
  };

  /**
   * CAN IF2 Command Request
   */
  struct IF2CRQ
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2CRQ_MNUM  = regbits< type,  0,  6 >;  /**< Message Number  */
    using CAN_IF2CRQ_BUSY  = regbits< type, 15,  1 >;  /**< Busy Flag       */
  };

  /**
   * CAN IF2 Command Mask
   */
  struct IF2CMSK
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2CMSK_DATAB      = regbits< type,  0,  1 >;  /**< Access Data Byte 4 to 7      */
    using CAN_IF2CMSK_DATAA      = regbits< type,  1,  1 >;  /**< Access Data Byte 0 to 3      */
    using CAN_IF2CMSK_NEWDAT     = regbits< type,  2,  1 >;  /**< Access New Data              */
    using CAN_IF2CMSK_CLRINTPND  = regbits< type,  3,  1 >;  /**< Clear Interrupt Pending Bit  */
    using CAN_IF2CMSK_CONTROL    = regbits< type,  4,  1 >;  /**< Access Control Bits          */
    using CAN_IF2CMSK_ARB        = regbits< type,  5,  1 >;  /**< Access Arbitration Bits      */
    using CAN_IF2CMSK_MASK       = regbits< type,  6,  1 >;  /**< Access Mask Bits             */
    using CAN_IF2CMSK_WRNRD      = regbits< type,  7,  1 >;  /**< Write, Not Read              */
  };

  /**
   * CAN IF2 Command Mask
   */
  struct IF2CMSK
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2CMSK_TXRQST  = regbits< type,  2,  1 >;  /**< Access Transmission Request  */
  };

  /**
   * CAN IF2 Mask 1
   */
  struct IF2MSK1
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2MSK1_IDMSK  = regbits< type,  0, 16 >;  /**< Identifier Mask  */
  };

  /**
   * CAN IF2 Mask 2
   */
  struct IF2MSK2
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2MSK2_IDMSK  = regbits< type,  0, 13 >;  /**< Identifier Mask           */
    using CAN_IF2MSK2_MDIR   = regbits< type, 14,  1 >;  /**< Mask Message Direction    */
    using CAN_IF2MSK2_MXTD   = regbits< type, 15,  1 >;  /**< Mask Extended Identifier  */
  };

  /**
   * CAN IF2 Arbitration 1
   */
  struct IF2ARB1
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2ARB1_ID  = regbits< type,  0, 16 >;  /**< Message Identifier  */
  };

  /**
   * CAN IF2 Arbitration 2
   */
  struct IF2ARB2
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2ARB2_ID      = regbits< type,  0, 13 >;  /**< Message Identifier   */
    using CAN_IF2ARB2_DIR     = regbits< type, 13,  1 >;  /**< Message Direction    */
    using CAN_IF2ARB2_XTD     = regbits< type, 14,  1 >;  /**< Extended Identifier  */
    using CAN_IF2ARB2_MSGVAL  = regbits< type, 15,  1 >;  /**< Message Valid        */
  };

  /**
   * CAN IF2 Message Control
   */
  struct IF2MCTL
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2MCTL_DLC     = regbits< type,  0,  4 >;  /**< Data Length Code           */
    using CAN_IF2MCTL_EOB     = regbits< type,  7,  1 >;  /**< End of Buffer              */
    using CAN_IF2MCTL_TXRQST  = regbits< type,  8,  1 >;  /**< Transmit Request           */
    using CAN_IF2MCTL_RMTEN   = regbits< type,  9,  1 >;  /**< Remote Enable              */
    using CAN_IF2MCTL_RXIE    = regbits< type, 10,  1 >;  /**< Receive Interrupt Enable   */
    using CAN_IF2MCTL_TXIE    = regbits< type, 11,  1 >;  /**< Transmit Interrupt Enable  */
    using CAN_IF2MCTL_UMASK   = regbits< type, 12,  1 >;  /**< Use Acceptance Mask        */
    using CAN_IF2MCTL_INTPND  = regbits< type, 13,  1 >;  /**< Interrupt Pending          */
    using CAN_IF2MCTL_MSGLST  = regbits< type, 14,  1 >;  /**< Message Lost               */
    using CAN_IF2MCTL_NEWDAT  = regbits< type, 15,  1 >;  /**< New Data                   */
  };

  /**
   * CAN IF2 Data A1
   */
  struct IF2DA1
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2DA1_DATA  = regbits< type,  0, 16 >;  /**< Data  */
  };

  /**
   * CAN IF2 Data A2
   */
  struct IF2DA2
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2DA2_DATA  = regbits< type,  0, 16 >;  /**< Data  */
  };

  /**
   * CAN IF2 Data B1
   */
  struct IF2DB1
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2DB1_DATA  = regbits< type,  0, 16 >;  /**< Data  */
  };

  /**
   * CAN IF2 Data B2
   */
  struct IF2DB2
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_IF2DB2_DATA  = regbits< type,  0, 16 >;  /**< Data  */
  };

  /**
   * CAN Transmission Request 1
   */
  struct TXRQ1
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_TXRQ1_TXRQST  = regbits< type,  0, 16 >;  /**< Transmission Request Bits  */
  };

  /**
   * CAN Transmission Request 2
   */
  struct TXRQ2
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_TXRQ2_TXRQST  = regbits< type,  0, 16 >;  /**< Transmission Request Bits  */
  };

  /**
   * CAN New Data 1
   */
  struct NWDA1
  : public reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_NWDA1_NEWDAT  = regbits< type,  0, 16 >;  /**< New Data Bits  */
  };

  /**
   * CAN New Data 2
   */
  struct NWDA2
  : public reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_NWDA2_NEWDAT  = regbits< type,  0, 16 >;  /**< New Data Bits  */
  };

  /**
   * CAN Message 1 Interrupt Pending
   */
  struct MSG1INT
  : public reg< uint32_t, base_addr + 0x00000140, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000140, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_MSG1INT_INTPND  = regbits< type,  0, 16 >;  /**< Interrupt Pending Bits  */
  };

  /**
   * CAN Message 2 Interrupt Pending
   */
  struct MSG2INT
  : public reg< uint32_t, base_addr + 0x00000144, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_MSG2INT_INTPND  = regbits< type,  0, 16 >;  /**< Interrupt Pending Bits  */
  };

  /**
   * CAN Message 1 Valid
   */
  struct MSG1VAL
  : public reg< uint32_t, base_addr + 0x00000160, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_MSG1VAL_MSGVAL  = regbits< type,  0, 16 >;  /**< Message Valid Bits  */
  };

  /**
   * CAN Message 2 Valid
   */
  struct MSG2VAL
  : public reg< uint32_t, base_addr + 0x00000164, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CAN_MSG2VAL_MSGVAL  = regbits< type,  0, 16 >;  /**< Message Valid Bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CAN0_HPP_INCLUDED
