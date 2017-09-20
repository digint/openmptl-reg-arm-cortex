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
//  Import from CMSIS-SVD: "Freescale/MKW21Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW21Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW21Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ZLL_REGS_HPP_INCLUDED
#define ARCH_REG_ZLL_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * ZLL
 */
struct ZLL_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005d000;

  /**
   * INTERRUPT REQUEST STATUS
   */
  struct IRQSTS
  : public reg< uint32_t, base_addr + 0, rw, 0xF00000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xF00000 >;

    using SEQIRQ           = regbits< type,  0,  1 >;  /**< Sequencer IRQ                          */
    using TXIRQ            = regbits< type,  1,  1 >;  /**< TX IRQ                                 */
    using RXIRQ            = regbits< type,  2,  1 >;  /**< RX IRQ                                 */
    using CCAIRQ           = regbits< type,  3,  1 >;  /**< CCA IRQ                                */
    using RXWTRMRKIRQ      = regbits< type,  4,  1 >;  /**< Receive Watermark IRQ                  */
    using FILTERFAIL_IRQ   = regbits< type,  5,  1 >;  /**< Filter Fail IRQ                        */
    using PLL_UNLOCK_IRQ   = regbits< type,  6,  1 >;  /**< PLL Unlock IRQ                         */
    using RX_FRM_PEND      = regbits< type,  7,  1 >;  /**< RX Frame Pending                       */
    using WAKE_IRQ         = regbits< type,  8,  1 >;  /**< WAKE Interrupt Request                 */
    using TSM_IRQ          = regbits< type, 10,  1 >;  /**< TSM IRQ                                */
    using ENH_PKT_STATUS   = regbits< type, 11,  1 >;  /**< Enhanced Packet Status                 */
    using PI               = regbits< type, 12,  1 >;  /**< Poll Indication                        */
    using SRCADDR          = regbits< type, 13,  1 >;  /**< Source Address Match Status            */
    using CCA              = regbits< type, 14,  1 >;  /**< CCA Status                             */
    using CRCVALID         = regbits< type, 15,  1 >;  /**< CRC Valid Status                       */
    using TMR1IRQ          = regbits< type, 16,  1 >;  /**< Timer 1 IRQ                            */
    using TMR2IRQ          = regbits< type, 17,  1 >;  /**< Timer 2 IRQ                            */
    using TMR3IRQ          = regbits< type, 18,  1 >;  /**< Timer 3 IRQ                            */
    using TMR4IRQ          = regbits< type, 19,  1 >;  /**< Timer 4 IRQ                            */
    using TMR1MSK          = regbits< type, 20,  1 >;  /**< Timer Comperator 1 Interrupt Mask bit  */
    using TMR2MSK          = regbits< type, 21,  1 >;  /**< Timer Comperator 2 Interrupt Mask bit  */
    using TMR3MSK          = regbits< type, 22,  1 >;  /**< Timer Comperator 3 Interrupt Mask bit  */
    using TMR4MSK          = regbits< type, 23,  1 >;  /**< Timer Comperator 4 Interrupt Mask bit  */
    using RX_FRAME_LENGTH  = regbits< type, 24,  7 >;  /**< Receive Frame Length                   */
  };

  /**
   * PHY CONTROL
   */
  struct PHY_CTRL
  : public reg< uint32_t, base_addr + 0x4, rw, 0x805FF00 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x805FF00 >;

    using XCVSEQ          = regbits< type,  0,  3 >;  /**< Zigbee Transceiver Sequence Selector  */
    using AUTOACK         = regbits< type,  3,  1 >;  /**< Auto Acknowledge Enable               */
    using RXACKRQD        = regbits< type,  4,  1 >;  /**< Receive Acknowledge Frame required    */
    using CCABFRTX        = regbits< type,  5,  1 >;  /**< CCA Before TX                         */
    using SLOTTED         = regbits< type,  6,  1 >;  /**< Slotted Mode                          */
    using TMRTRIGEN       = regbits< type,  7,  1 >;  /**< Timer2 Trigger Enable                 */
    using SEQMSK          = regbits< type,  8,  1 >;  /**< Sequencer Interrupt Mask              */
    using TXMSK           = regbits< type,  9,  1 >;  /**< TX Interrupt Mask                     */
    using RXMSK           = regbits< type, 10,  1 >;  /**< RX Interrupt Mask                     */
    using CCAMSK          = regbits< type, 11,  1 >;  /**< CCA Interrupt Mask                    */
    using RX_WMRK_MSK     = regbits< type, 12,  1 >;  /**< RX Watermark Interrupt Mask           */
    using FILTERFAIL_MSK  = regbits< type, 13,  1 >;  /**< FilterFail Interrupt Mask             */
    using PLL_UNLOCK_MSK  = regbits< type, 14,  1 >;  /**< PLL Unlock Interrupt Mask             */
    using CRC_MSK         = regbits< type, 15,  1 >;  /**< CRC Mask                              */
    using WAKE_MSK        = regbits< type, 16,  1 >;  /**< no description available              */
    using TSM_MSK         = regbits< type, 18,  1 >;  /**< no description available              */
    using TMR1CMP_EN      = regbits< type, 20,  1 >;  /**< Timer 1 Compare Enable                */
    using TMR2CMP_EN      = regbits< type, 21,  1 >;  /**< Timer 2 Compare Enable                */
    using TMR3CMP_EN      = regbits< type, 22,  1 >;  /**< Timer 3 Compare Enable                */
    using TMR4CMP_EN      = regbits< type, 23,  1 >;  /**< Timer 4 Compare Enable                */
    using TC2PRIME_EN     = regbits< type, 24,  1 >;  /**< Timer 2 Prime Compare Enable          */
    using PROMISCUOUS     = regbits< type, 25,  1 >;  /**< Promiscuous Mode Enable               */
    using CCATYPE         = regbits< type, 27,  2 >;  /**< Clear Channel Assessment Type         */
    using PANCORDNTR0     = regbits< type, 29,  1 >;  /**< Device is a PAN Coordinator on PAN0   */
    using TC3TMOUT        = regbits< type, 30,  1 >;  /**< TMR3 Timeout Enable                   */
    using TRCV_MSK        = regbits< type, 31,  1 >;  /**< Transceiver Global Interrupt Mask     */
  };

  /**
   * EVENT TIMER
   */
  struct EVENT_TMR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using EVENT_TMR_LD    = regbits< type,  0,  1 >;  /**< Event Timer Load Enable           */
    using EVENT_TMR_ADD   = regbits< type,  1,  1 >;  /**< Event Timer Add Enable            */
    using EVENT_TMR_FRAC  = regbits< type,  4,  4 >;  /**< Event Timer Fractional Component  */
    // fixme: Field name equals parent register name: EVENT_TMR
    using EVENT_TMR_      = regbits< type,  8, 24 >;  /**< Event Timer Integer Component     */
  };

  /**
   * TIMESTAMP
   */
  struct TIMESTAMP
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    // fixme: Field name equals parent register name: TIMESTAMP
    using TIMESTAMP_ = regbits< type,  0, 24 >;  /**< Timestamp  */
  };

  /**
   * T1 COMPARE
   */
  struct T1CMP
  : public reg< uint32_t, base_addr + 0x10, rw, 0xFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0xFFFFFF >;

    // fixme: Field name equals parent register name: T1CMP
    using T1CMP_ = regbits< type,  0, 24 >;  /**< TMR1 Compare Value  */
  };

  /**
   * T2 COMPARE
   */
  struct T2CMP
  : public reg< uint32_t, base_addr + 0x14, rw, 0xFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0xFFFFFF >;

    // fixme: Field name equals parent register name: T2CMP
    using T2CMP_ = regbits< type,  0, 24 >;  /**< TMR2 Compare Value  */
  };

  /**
   * T2 PRIME COMPARE
   */
  struct T2PRIMECMP
  : public reg< uint32_t, base_addr + 0x18, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: T2PRIMECMP
    using T2PRIMECMP_ = regbits< type,  0, 16 >;  /**< TMR2 Prime Compare Value  */
  };

  /**
   * T3 COMPARE
   */
  struct T3CMP
  : public reg< uint32_t, base_addr + 0x1c, rw, 0xFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0xFFFFFF >;

    // fixme: Field name equals parent register name: T3CMP
    using T3CMP_ = regbits< type,  0, 24 >;  /**< TMR3 Compare Value  */
  };

  /**
   * T4 COMPARE
   */
  struct T4CMP
  : public reg< uint32_t, base_addr + 0x20, rw, 0xFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0xFFFFFF >;

    // fixme: Field name equals parent register name: T4CMP
    using T4CMP_ = regbits< type,  0, 24 >;  /**< TMR4 Compare Value  */
  };

  /**
   * PA POWER
   */
  struct PA_PWR
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    // fixme: Field name equals parent register name: PA_PWR
    using PA_PWR_ = regbits< type,  0,  6 >;  /**< PA Power  */
  };

  /**
   * CHANNEL NUMBER 0
   */
  struct CHANNEL_NUM0
  : public reg< uint32_t, base_addr + 0x28, rw, 0x12 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x12 >;

    // fixme: Field name equals parent register name: CHANNEL_NUM0
    using CHANNEL_NUM0_ = regbits< type,  0,  7 >;  /**< Channel Number for PAN0  */
  };

  /**
   * LQI AND RSSI
   */
  struct LQI_AND_RSSI
  : public reg< uint32_t, base_addr + 0x2c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0 >;

    using LQI_VALUE    = regbits< type,  0,  8 >;  /**< LQI Value                                      */
    using RSSI         = regbits< type,  8,  8 >;  /**< RSSI Value                                     */
    using CCA1_ED_FNL  = regbits< type, 16,  8 >;  /**< Final Result for CCA Mode 1 and Energy Detect  */
  };

  /**
   * MAC SHORT ADDRESS 0
   */
  struct MACSHORTADDRS0
  : public reg< uint32_t, base_addr + 0x30, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0xFFFFFFFF >;

    using MACPANID0       = regbits< type,  0, 16 >;  /**< MAC PAN ID for PAN0         */
    // fixme: Field name equals parent register name: MACSHORTADDRS0
    using MACSHORTADDRS0_ = regbits< type, 16, 16 >;  /**< MAC SHORT ADDRESS FOR PAN0  */
  };

  /**
   * MAC LONG ADDRESS 0 LSB
   */
  struct MACLONGADDRS0_LSB
  : public reg< uint32_t, base_addr + 0x34, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: MACLONGADDRS0_LSB
    using MACLONGADDRS0_LSB_ = regbits< type,  0, 32 >;  /**< MAC LONG ADDRESS for PAN0 LSB  */
  };

  /**
   * MAC LONG ADDRESS 0 MSB
   */
  struct MACLONGADDRS0_MSB
  : public reg< uint32_t, base_addr + 0x38, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: MACLONGADDRS0_MSB
    using MACLONGADDRS0_MSB_ = regbits< type,  0, 32 >;  /**< MAC LONG ADDRESS for PAN0 MSB  */
  };

  /**
   * RECEIVE FRAME FILTER
   */
  struct RX_FRAME_FILTER
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x30F >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x30F >;

    using BEACON_FT           = regbits< type,  0,  1 >;  /**< Beacon Frame Type Enable                     */
    using DATA_FT             = regbits< type,  1,  1 >;  /**< Data Frame Type Enable                       */
    using ACK_FT              = regbits< type,  2,  1 >;  /**< Ack Frame Type Enable                        */
    using CMD_FT              = regbits< type,  3,  1 >;  /**< MAC Command Frame Type Enable                */
    using LLDN_FT             = regbits< type,  4,  1 >;  /**< LLDN Frame Type Enable                       */
    using MULTIPURPOSE_FT     = regbits< type,  5,  1 >;  /**< Multipurpose Frame Type Enable               */
    using NS_FT               = regbits< type,  6,  1 >;  /**< "Not Specified" Frame Type Enable            */
    using EXTENDED_FT         = regbits< type,  7,  1 >;  /**< Extended Frame Type Enable                   */
    using FRM_VER_FILTER      = regbits< type,  8,  4 >;  /**< Frame Version selector.                      */
    using ACTIVE_PROMISCUOUS  = regbits< type, 14,  1 >;  /**< Active Promiscuous                           */
    using EXTENDED_FCS_CHK    = regbits< type, 15,  1 >;  /**< Verify FCS on Frame Type Extended            */
    using FV2_BEACON_RECD     = regbits< type, 16,  1 >;  /**< Frame Version 2 Beacon Packet Received       */
    using FV2_DATA_RECD       = regbits< type, 17,  1 >;  /**< Frame Version 2 Data Packet Received         */
    using FV2_ACK_RECD        = regbits< type, 18,  1 >;  /**< Frame Version 2 Acknowledge Packet Received  */
    using FV2_CMD_RECD        = regbits< type, 19,  1 >;  /**< Frame Version 2 MAC Command Packet Received  */
    using LLDN_RECD           = regbits< type, 20,  1 >;  /**< LLDN Packet Received                         */
    using MULTIPURPOSE_RECD   = regbits< type, 21,  1 >;  /**< Multipurpose Packet Received                 */
    using EXTENDED_RECD       = regbits< type, 23,  1 >;  /**< Extended Packet Received                     */
  };

  /**
   * CCA AND LQI CONTROL
   */
  struct CCA_LQI_CTRL
  : public reg< uint32_t, base_addr + 0x40, rw, 0x866004B >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x866004B >;

    using CCA1_THRESH      = regbits< type,  0,  8 >;  /**< CCA Mode 1 Threshold     */
    using LQI_OFFSET_COMP  = regbits< type, 16,  8 >;  /**< LQI Offset Compensation  */
    using CCA3_AND_NOT_OR  = regbits< type, 27,  1 >;  /**< CCA Mode 3 AND not OR    */
  };

  /**
   * CCA2 CONTROL
   */
  struct CCA2_CTRL
  : public reg< uint32_t, base_addr + 0x44, rw, 0x8230 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x8230 >;

    using CCA2_NUM_CORR_PEAKS   = regbits< type,  0,  4 >;  /**< CCA Mode 2 Number of Correlation Peaks Detected   */
    using CCA2_MIN_NUM_CORR_TH  = regbits< type,  4,  3 >;  /**< CCA Mode 2 Threshold Number of Correlation Peaks  */
    using CCA2_CORR_THRESH      = regbits< type,  8,  8 >;  /**< CCA Mode 2 Correlation Threshold                  */
  };

  /**
   * DSM CONTROL
   */
  struct DSM_CTRL
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using ZIGBEE_SLEEP_EN  = regbits< type,  0,  1 >;  /**< Zigbee sleep enable  */
  };

  /**
   * BSM CONTROL
   */
  struct BSM_CTRL
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using BSM_EN  = regbits< type,  0,  1 >;  /**< BSM Enable  */
  };

  /**
   * MAC SHORT ADDRESS FOR PAN1
   */
  struct MACSHORTADDRS1
  : public reg< uint32_t, base_addr + 0x54, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0xFFFFFFFF >;

    using MACPANID1       = regbits< type,  0, 16 >;  /**< MAC PAN ID for PAN1         */
    // fixme: Field name equals parent register name: MACSHORTADDRS1
    using MACSHORTADDRS1_ = regbits< type, 16, 16 >;  /**< MAC SHORT ADDRESS for PAN1  */
  };

  /**
   * MAC LONG ADDRESS 1 LSB
   */
  struct MACLONGADDRS1_LSB
  : public reg< uint32_t, base_addr + 0x58, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: MACLONGADDRS1_LSB
    using MACLONGADDRS1_LSB_ = regbits< type,  0, 32 >;  /**< MAC LONG ADDRESS for PAN1 LSB  */
  };

  /**
   * MAC LONG ADDRESS 1 MSB
   */
  struct MACLONGADDRS1_MSB
  : public reg< uint32_t, base_addr + 0x5c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: MACLONGADDRS1_MSB
    using MACLONGADDRS1_MSB_ = regbits< type,  0, 32 >;  /**< MAC LONG ADDRESS for PAN1 MSB  */
  };

  /**
   * DUAL PAN CONTROL
   */
  struct DUAL_PAN_CTRL
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using ACTIVE_NETWORK       = regbits< type,  0,  1 >;  /**< Active Network Selector                                      */
    using DUAL_PAN_AUTO        = regbits< type,  1,  1 >;  /**< Activates automatic Dual PAN operating mode                  */
    using PANCORDNTR1          = regbits< type,  2,  1 >;  /**< Device is a PAN Coordinator on PAN1                          */
    using CURRENT_NETWORK      = regbits< type,  3,  1 >;  /**< Indicates which PAN is currently selected by hardware        */
    using ZB_DP_CHAN_OVRD_EN   = regbits< type,  4,  1 >;  /**< Dual PAN Channel Override Enable                             */
    using ZB_DP_CHAN_OVRD_SEL  = regbits< type,  5,  1 >;  /**< Dual PAN Channel Override Selector                           */
    using DUAL_PAN_DWELL       = regbits< type,  8,  8 >;  /**< Dual PAN Channel Frequency Dwell Time                        */
    using DUAL_PAN_REMAIN      = regbits< type, 16,  6 >;  /**< Time Remaining before next PAN switch in auto Dual PAN mode  */
    using RECD_ON_PAN0         = regbits< type, 22,  1 >;  /**< Last Packet was Received on PAN0                             */
    using RECD_ON_PAN1         = regbits< type, 23,  1 >;  /**< Last Packet was Received on PAN1                             */
  };

  /**
   * CHANNEL NUMBER 1
   */
  struct CHANNEL_NUM1
  : public reg< uint32_t, base_addr + 0x64, rw, 0x7F >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x7F >;

    // fixme: Field name equals parent register name: CHANNEL_NUM1
    using CHANNEL_NUM1_ = regbits< type,  0,  7 >;  /**< Channel Number for PAN1  */
  };

  /**
   * SAM CONTROL
   */
  struct SAM_CTRL
  : public reg< uint32_t, base_addr + 0x68, rw, 0x80804000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x80804000 >;

    using SAP0_EN     = regbits< type,  0,  1 >;  /**< Enables SAP0 Partition of the SAM Table  */
    using SAA0_EN     = regbits< type,  1,  1 >;  /**< Enables SAA0 Partition of the SAM Table  */
    using SAP1_EN     = regbits< type,  2,  1 >;  /**< Enables SAP1 Partition of the SAM Table  */
    using SAA1_EN     = regbits< type,  3,  1 >;  /**< Enables SAA1 Partition of the SAM Table  */
    using SAA0_START  = regbits< type,  8,  8 >;  /**< First Index of SAA0 partition            */
    using SAP1_START  = regbits< type, 16,  8 >;  /**< First Index of SAP1 partition            */
    using SAA1_START  = regbits< type, 24,  8 >;  /**< First Index of SAA1 partition            */
  };

  /**
   * SOURCE ADDRESS MANAGEMENT TABLE
   */
  struct SAM_TABLE
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using SAM_INDEX         = regbits< type,  0,  7 >;  /**< Contains the SAM table index to be enabled or invalidated                      */
    using SAM_INDEX_WR      = regbits< type,  7,  1 >;  /**< Enables SAM Table Contents to be updated                                       */
    using SAM_CHECKSUM      = regbits< type,  8, 16 >;  /**< Software-computed source address checksum, to be installed into a table index  */
    using SAM_INDEX_INV     = regbits< type, 24,  1 >;  /**< Invalidate the SAM table index selected by SAM_INDEX                           */
    using SAM_INDEX_EN      = regbits< type, 25,  1 >;  /**< Enable the SAM table index selected by SAM_INDEX                               */
    using ACK_FRM_PND       = regbits< type, 26,  1 >;  /**< State of AutoTxAck FramePending field when SAM Accelleration is Disabled       */
    using ACK_FRM_PND_CTRL  = regbits< type, 27,  1 >;  /**< Manual Control for AutoTxAck FramePending field                                */
    using FIND_FREE_IDX     = regbits< type, 28,  1 >;  /**< Find First Free Index                                                          */
    using INVALIDATE_ALL    = regbits< type, 29,  1 >;  /**< Invalidate Entire SAM Table                                                    */
    using SAM_BUSY          = regbits< type, 31,  1 >;  /**< SAM Table Update Status Bit                                                    */
  };

  /**
   * SOURCE ADDRESS MANAGEMENT MATCH
   */
  struct SAM_MATCH
  : public reg< uint32_t, base_addr + 0x70, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0 >;

    using SAP0_MATCH         = regbits< type,  0,  7 >;  /**< Index in the SAP0 Partition of the SAM Table corresponding to the first checksum match  */
    using SAP0_ADDR_PRESENT  = regbits< type,  7,  1 >;  /**< A Checksum Match is Present in the SAP0 Partition of the SAM Table                      */
    using SAA0_MATCH         = regbits< type,  8,  7 >;  /**< Index in the SAA0 Partition of the SAM Table corresponding to the first checksum match  */
    using SAA0_ADDR_ABSENT   = regbits< type, 15,  1 >;  /**< A Checksum Match is Absent in the SAA0 Partition of the SAM Table                       */
    using SAP1_MATCH         = regbits< type, 16,  7 >;  /**< Index in the SAP1 Partition of the SAM Table corresponding to the first checksum match  */
    using SAP1_ADDR_PRESENT  = regbits< type, 23,  1 >;  /**< A Checksum Match is Present in the SAP1 Partition of the SAM Table                      */
    using SAA1_MATCH         = regbits< type, 24,  7 >;  /**< Index in the SAA1 Partition of the SAM Table corresponding to the first checksum match  */
    using SAA1_ADDR_ABSENT   = regbits< type, 31,  1 >;  /**< A Checksum Match is Absent in the SAP1 Partition of the SAM Table                       */
  };

  /**
   * SAM FREE INDEX
   */
  struct SAM_FREE_IDX
  : public reg< uint32_t, base_addr + 0x74, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0 >;

    using SAP0_1ST_FREE_IDX  = regbits< type,  0,  8 >;  /**< First non-enabled (invalid) index in the SAP0 partition  */
    using SAA0_1ST_FREE_IDX  = regbits< type,  8,  8 >;  /**< First non-enabled (invalid) index in the SAA0 partition  */
    using SAP1_1ST_FREE_IDX  = regbits< type, 16,  8 >;  /**< First non-enabled (invalid) index in the SAP1 partition  */
    using SAA1_1ST_FREE_IDX  = regbits< type, 24,  8 >;  /**< First non-enabled (invalid) index in the SAA1 partition  */
  };

  /**
   * SEQUENCE CONTROL AND STATUS
   */
  struct SEQ_CTRL_STS
  : public reg< uint32_t, base_addr + 0x78, rw, 0x8 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x8 >;

    using CLR_NEW_SEQ_INHIBIT     = regbits< type,  2,  1 >;  /**< Overrides the automatic hardware locking of the programmed XCVSEQ while an autosequence is underway  */
    using EVENT_TMR_DO_NOT_LATCH  = regbits< type,  3,  1 >;  /**< Overrides the automatic hardware latching of the Event Timer                                         */
    using LATCH_PREAMBLE          = regbits< type,  4,  1 >;  /**< Stickiness Control for Preamble Detection                                                            */
    using NO_RX_RECYCLE           = regbits< type,  5,  1 >;  /**< Disable Automatic RX Sequence Recycling                                                              */
    using FORCE_CRC_ERROR         = regbits< type,  6,  1 >;  /**< Induce a CRC Error in Transmitted Packets                                                            */
    using CONTINUOUS_EN           = regbits< type,  7,  1 >;  /**< Enable Continuous TX or RX Mode                                                                      */
    using XCVSEQ_ACTUAL           = regbits< type,  8,  3 >;  /**< Indicates the programmed sequence that has been recognized by the ZSM Sequence Manager               */
    using SEQ_IDLE                = regbits< type, 11,  1 >;  /**< ZSM Sequence Idle Indicator                                                                          */
    using NEW_SEQ_INHIBIT         = regbits< type, 12,  1 >;  /**< New Sequence Inhibit                                                                                 */
    using RX_TIMEOUT_PENDING      = regbits< type, 13,  1 >;  /**< Indicates a TMR3 RX Timeout is Pending                                                               */
    using RX_MODE                 = regbits< type, 14,  1 >;  /**< RX Operation in Progress                                                                             */
    using TMR2_SEQ_TRIG_ARMED     = regbits< type, 15,  1 >;  /**< indicates that TMR2 has been programmed and is armed to trigger a new autosequence                   */
    using SEQ_T_STATUS            = regbits< type, 16,  6 >;  /**< Status of the just-completed or ongoing Sequence T or Sequence TR                                    */
    using SW_ABORTED              = regbits< type, 24,  1 >;  /**< Autosequence has terminated due to a Software abort.                                                 */
    using TC3_ABORTED             = regbits< type, 25,  1 >;  /**< autosequence has terminated due to an TMR3 timeout                                                   */
    using PLL_ABORTED             = regbits< type, 26,  1 >;  /**< Autosequence has terminated due to an PLL unlock event                                               */
  };

  /**
   * ACK DELAY
   */
  struct ACKDELAY
  : public reg< uint32_t, base_addr + 0x7c, rw, 0x7 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0x7 >;

    // fixme: Field name equals parent register name: ACKDELAY
    using ACKDELAY_ = regbits< type,  0,  6 >;  /**< ACK Delay  */
    using TXDELAY   = regbits< type,  8,  6 >;  /**< TX Delay   */
  };

  /**
   * FILTER FAIL CODE
   */
  struct FILTERFAIL_CODE
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    // fixme: Field name equals parent register name: FILTERFAIL_CODE
    using FILTERFAIL_CODE_    = regbits< type,  0, 10 >;  /**< Filter Fail Code                   */
    using FILTERFAIL_PAN_SEL  = regbits< type, 15,  1 >;  /**< PAN Selector for Filter Fail Code  */
  };

  /**
   * RECEIVE WATER MARK
   */
  struct RX_WTR_MARK
  : public reg< uint32_t, base_addr + 0x84, rw, 0xFF >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0xFF >;

    // fixme: Field name equals parent register name: RX_WTR_MARK
    using RX_WTR_MARK_ = regbits< type,  0,  8 >;  /**< RECEIVE WATER MARK  */
  };

  /**
   * SLOT PRELOAD
   */
  struct SLOT_PRELOAD
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x74 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x74 >;

    // fixme: Field name equals parent register name: SLOT_PRELOAD
    using SLOT_PRELOAD_ = regbits< type,  0,  8 >;  /**< Slotted Mode Preload  */
  };

  /**
   * 802.15.4 SEQUENCE STATE
   */
  struct SEQ_STATE
  : public reg< uint32_t, base_addr + 0x90, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, ro, 0 >;

    // fixme: Field name equals parent register name: SEQ_STATE
    using SEQ_STATE_           = regbits< type,  0,  5 >;  /**< ZSM Sequence State                                      */
    using PREAMBLE_DET         = regbits< type,  8,  1 >;  /**< Preamble Detected                                       */
    using SFD_DET              = regbits< type,  9,  1 >;  /**< SFD Detected                                            */
    using FILTERFAIL_FLAG_SEL  = regbits< type, 10,  1 >;  /**< Consolidated Filter Fail Flag                           */
    using CRCVALID             = regbits< type, 11,  1 >;  /**< CRC Valid Indicator                                     */
    using PLL_ABORT            = regbits< type, 12,  1 >;  /**< Raw PLL Abort Signal                                    */
    using PLL_ABORTED          = regbits< type, 13,  1 >;  /**< Autosequence has terminated due to an PLL unlock event  */
    using RX_BYTE_COUNT        = regbits< type, 16,  8 >;  /**< Realtime Received Byte Count                            */
    using CCCA_BUSY_CNT        = regbits< type, 24,  6 >;  /**< Number of CCA Measurements resulting in Busy Channel    */
  };

  /**
   * TIMER PRESCALER
   */
  struct TMR_PRESCALE
  : public reg< uint32_t, base_addr + 0x94, rw, 0x5 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x5 >;

    // fixme: Field name equals parent register name: TMR_PRESCALE
    using TMR_PRESCALE_ = regbits< type,  0,  3 >;  /**< Timer Prescaler  */
  };

  /**
   * LENIENCY LSB
   */
  struct LENIENCY_LSB
  : public reg< uint32_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0 >;

    // fixme: Field name equals parent register name: LENIENCY_LSB
    using LENIENCY_LSB_ = regbits< type,  0, 32 >;  /**< Leniency LSB Register  */
  };

  /**
   * LENIENCY MSB
   */
  struct LENIENCY_MSB
  : public reg< uint32_t, base_addr + 0x9c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0 >;

    // fixme: Field name equals parent register name: LENIENCY_MSB
    using LENIENCY_MSB_ = regbits< type,  0,  8 >;  /**< Leniency MSB Register  */
  };

  /**
   * PART ID
   */
  struct PART_ID
  : public reg< uint32_t, base_addr + 0xa0, ro, 0x2 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, ro, 0x2 >;

    // fixme: Field name equals parent register name: PART_ID
    using PART_ID_ = regbits< type,  0,  8 >;  /**< 802.15.4 Part ID  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX0
  : public reg< uint16_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x100, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX1
  : public reg< uint16_t, base_addr + 0x102, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x102, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX2
  : public reg< uint16_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x104, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX3
  : public reg< uint16_t, base_addr + 0x106, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x106, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX4
  : public reg< uint16_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x108, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX5
  : public reg< uint16_t, base_addr + 0x10a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10a, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX6
  : public reg< uint16_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10c, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX7
  : public reg< uint16_t, base_addr + 0x10e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10e, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX8
  : public reg< uint16_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x110, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX9
  : public reg< uint16_t, base_addr + 0x112, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x112, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX10
  : public reg< uint16_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x114, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX11
  : public reg< uint16_t, base_addr + 0x116, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x116, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX12
  : public reg< uint16_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x118, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX13
  : public reg< uint16_t, base_addr + 0x11a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x11a, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX14
  : public reg< uint16_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x11c, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX15
  : public reg< uint16_t, base_addr + 0x11e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x11e, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX16
  : public reg< uint16_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x120, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX17
  : public reg< uint16_t, base_addr + 0x122, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x122, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX18
  : public reg< uint16_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x124, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX19
  : public reg< uint16_t, base_addr + 0x126, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x126, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX20
  : public reg< uint16_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x128, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX21
  : public reg< uint16_t, base_addr + 0x12a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12a, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX22
  : public reg< uint16_t, base_addr + 0x12c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12c, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX23
  : public reg< uint16_t, base_addr + 0x12e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12e, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX24
  : public reg< uint16_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x130, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX25
  : public reg< uint16_t, base_addr + 0x132, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x132, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX26
  : public reg< uint16_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x134, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX27
  : public reg< uint16_t, base_addr + 0x136, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x136, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX28
  : public reg< uint16_t, base_addr + 0x138, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x138, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX29
  : public reg< uint16_t, base_addr + 0x13a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x13a, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX30
  : public reg< uint16_t, base_addr + 0x13c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x13c, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX31
  : public reg< uint16_t, base_addr + 0x13e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x13e, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX32
  : public reg< uint16_t, base_addr + 0x140, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x140, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX33
  : public reg< uint16_t, base_addr + 0x142, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x142, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX34
  : public reg< uint16_t, base_addr + 0x144, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x144, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX35
  : public reg< uint16_t, base_addr + 0x146, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x146, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX36
  : public reg< uint16_t, base_addr + 0x148, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x148, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX37
  : public reg< uint16_t, base_addr + 0x14a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14a, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX38
  : public reg< uint16_t, base_addr + 0x14c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14c, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX39
  : public reg< uint16_t, base_addr + 0x14e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14e, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX40
  : public reg< uint16_t, base_addr + 0x150, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x150, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX41
  : public reg< uint16_t, base_addr + 0x152, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x152, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX42
  : public reg< uint16_t, base_addr + 0x154, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x154, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX43
  : public reg< uint16_t, base_addr + 0x156, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x156, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX44
  : public reg< uint16_t, base_addr + 0x158, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x158, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX45
  : public reg< uint16_t, base_addr + 0x15a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x15a, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX46
  : public reg< uint16_t, base_addr + 0x15c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x15c, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX47
  : public reg< uint16_t, base_addr + 0x15e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x15e, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX48
  : public reg< uint16_t, base_addr + 0x160, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x160, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX49
  : public reg< uint16_t, base_addr + 0x162, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x162, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX50
  : public reg< uint16_t, base_addr + 0x164, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x164, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX51
  : public reg< uint16_t, base_addr + 0x166, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x166, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX52
  : public reg< uint16_t, base_addr + 0x168, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x168, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX53
  : public reg< uint16_t, base_addr + 0x16a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16a, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX54
  : public reg< uint16_t, base_addr + 0x16c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16c, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX55
  : public reg< uint16_t, base_addr + 0x16e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16e, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX56
  : public reg< uint16_t, base_addr + 0x170, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x170, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX57
  : public reg< uint16_t, base_addr + 0x172, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x172, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX58
  : public reg< uint16_t, base_addr + 0x174, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x174, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX59
  : public reg< uint16_t, base_addr + 0x176, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x176, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX60
  : public reg< uint16_t, base_addr + 0x178, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x178, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX61
  : public reg< uint16_t, base_addr + 0x17a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x17a, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX62
  : public reg< uint16_t, base_addr + 0x17c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x17c, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer TX
   */
  struct PKT_BUFFER_TX63
  : public reg< uint16_t, base_addr + 0x17e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x17e, rw, 0 >;

    using PKT_BUFFER_TX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX0
  : public reg< uint16_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x180, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX1
  : public reg< uint16_t, base_addr + 0x182, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x182, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX2
  : public reg< uint16_t, base_addr + 0x184, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x184, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX3
  : public reg< uint16_t, base_addr + 0x186, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x186, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX4
  : public reg< uint16_t, base_addr + 0x188, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x188, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX5
  : public reg< uint16_t, base_addr + 0x18a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18a, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX6
  : public reg< uint16_t, base_addr + 0x18c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18c, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX7
  : public reg< uint16_t, base_addr + 0x18e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18e, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX8
  : public reg< uint16_t, base_addr + 0x190, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x190, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX9
  : public reg< uint16_t, base_addr + 0x192, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x192, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX10
  : public reg< uint16_t, base_addr + 0x194, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x194, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX11
  : public reg< uint16_t, base_addr + 0x196, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x196, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX12
  : public reg< uint16_t, base_addr + 0x198, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x198, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX13
  : public reg< uint16_t, base_addr + 0x19a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x19a, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX14
  : public reg< uint16_t, base_addr + 0x19c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x19c, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX15
  : public reg< uint16_t, base_addr + 0x19e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x19e, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX16
  : public reg< uint16_t, base_addr + 0x1a0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a0, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX17
  : public reg< uint16_t, base_addr + 0x1a2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a2, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX18
  : public reg< uint16_t, base_addr + 0x1a4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a4, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX19
  : public reg< uint16_t, base_addr + 0x1a6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a6, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX20
  : public reg< uint16_t, base_addr + 0x1a8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a8, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX21
  : public reg< uint16_t, base_addr + 0x1aa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1aa, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX22
  : public reg< uint16_t, base_addr + 0x1ac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ac, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX23
  : public reg< uint16_t, base_addr + 0x1ae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ae, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX24
  : public reg< uint16_t, base_addr + 0x1b0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b0, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX25
  : public reg< uint16_t, base_addr + 0x1b2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b2, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX26
  : public reg< uint16_t, base_addr + 0x1b4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b4, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX27
  : public reg< uint16_t, base_addr + 0x1b6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b6, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX28
  : public reg< uint16_t, base_addr + 0x1b8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b8, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX29
  : public reg< uint16_t, base_addr + 0x1ba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ba, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX30
  : public reg< uint16_t, base_addr + 0x1bc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1bc, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX31
  : public reg< uint16_t, base_addr + 0x1be, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1be, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX32
  : public reg< uint16_t, base_addr + 0x1c0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c0, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX33
  : public reg< uint16_t, base_addr + 0x1c2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c2, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX34
  : public reg< uint16_t, base_addr + 0x1c4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c4, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX35
  : public reg< uint16_t, base_addr + 0x1c6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c6, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX36
  : public reg< uint16_t, base_addr + 0x1c8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c8, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX37
  : public reg< uint16_t, base_addr + 0x1ca, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ca, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX38
  : public reg< uint16_t, base_addr + 0x1cc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1cc, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX39
  : public reg< uint16_t, base_addr + 0x1ce, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ce, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX40
  : public reg< uint16_t, base_addr + 0x1d0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d0, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX41
  : public reg< uint16_t, base_addr + 0x1d2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d2, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX42
  : public reg< uint16_t, base_addr + 0x1d4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d4, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX43
  : public reg< uint16_t, base_addr + 0x1d6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d6, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX44
  : public reg< uint16_t, base_addr + 0x1d8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d8, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX45
  : public reg< uint16_t, base_addr + 0x1da, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1da, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX46
  : public reg< uint16_t, base_addr + 0x1dc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1dc, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX47
  : public reg< uint16_t, base_addr + 0x1de, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1de, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX48
  : public reg< uint16_t, base_addr + 0x1e0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e0, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX49
  : public reg< uint16_t, base_addr + 0x1e2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e2, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX50
  : public reg< uint16_t, base_addr + 0x1e4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e4, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX51
  : public reg< uint16_t, base_addr + 0x1e6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e6, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX52
  : public reg< uint16_t, base_addr + 0x1e8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e8, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX53
  : public reg< uint16_t, base_addr + 0x1ea, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ea, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX54
  : public reg< uint16_t, base_addr + 0x1ec, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ec, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX55
  : public reg< uint16_t, base_addr + 0x1ee, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ee, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX56
  : public reg< uint16_t, base_addr + 0x1f0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f0, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX57
  : public reg< uint16_t, base_addr + 0x1f2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f2, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX58
  : public reg< uint16_t, base_addr + 0x1f4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f4, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX59
  : public reg< uint16_t, base_addr + 0x1f6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f6, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX60
  : public reg< uint16_t, base_addr + 0x1f8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f8, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX61
  : public reg< uint16_t, base_addr + 0x1fa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1fa, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX62
  : public reg< uint16_t, base_addr + 0x1fc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1fc, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };

  /**
   * Packet Buffer RX
   */
  struct PKT_BUFFER_RX63
  : public reg< uint16_t, base_addr + 0x1fe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1fe, rw, 0 >;

    using PKT_BUFFER_RX  = regbits< type,  0, 16 >;  /**< Packet Buffer Entry  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ZLL_REGS_HPP_INCLUDED
