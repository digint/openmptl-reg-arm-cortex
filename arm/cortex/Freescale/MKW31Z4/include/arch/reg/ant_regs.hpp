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
//  Import from CMSIS-SVD: "Freescale/MKW31Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW31Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW31Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ANT_REGS_HPP_INCLUDED
#define ARCH_REG_ANT_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * ANT
 */
struct ANT_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005e000;

  /**
   * IRQ CONTROL
   */
  struct IRQ_CTRL
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using SEQ_END_IRQ          = regbits< type,  0,  1 >;  /**< Sequence End Interrupt           */
    using TX_IRQ               = regbits< type,  1,  1 >;  /**< TX Interrupt                     */
    using RX_IRQ               = regbits< type,  2,  1 >;  /**< RX Interrupt                     */
    using NTW_ADR_IRQ          = regbits< type,  3,  1 >;  /**< Network Address Match Interrupt  */
    using T1_IRQ               = regbits< type,  4,  1 >;  /**< Timer1 (T1) Compare Interrupt    */
    using T2_IRQ               = regbits< type,  5,  1 >;  /**< Timer2 (T2) Compare Interrupt    */
    using PLL_UNLOCK_IRQ       = regbits< type,  6,  1 >;  /**< PLL Unlock Interrupt             */
    using WAKE_IRQ             = regbits< type,  7,  1 >;  /**< Wake Interrrupt                  */
    using RX_WATERMARK_IRQ     = regbits< type,  8,  1 >;  /**< RX Watermark Interrupt           */
    using TSM_IRQ              = regbits< type,  9,  1 >;  /**< TSM Interrupt                    */
    using SEQ_END_IRQ_EN       = regbits< type, 16,  1 >;  /**< SEQ_END_IRQ Enable               */
    using TX_IRQ_EN            = regbits< type, 17,  1 >;  /**< TX_IRQ Enable                    */
    using RX_IRQ_EN            = regbits< type, 18,  1 >;  /**< RX_IRQ Enable                    */
    using NTW_ADR_IRQ_EN       = regbits< type, 19,  1 >;  /**< NTW_ADR_IRQ Enable               */
    using T1_IRQ_EN            = regbits< type, 20,  1 >;  /**< T1_IRQ Enable                    */
    using T2_IRQ_EN            = regbits< type, 21,  1 >;  /**< T2_IRQ Enable                    */
    using PLL_UNLOCK_IRQ_EN    = regbits< type, 22,  1 >;  /**< PLL_UNLOCK_IRQ Enable            */
    using WAKE_IRQ_EN          = regbits< type, 23,  1 >;  /**< WAKE_IRQ Enable                  */
    using RX_WATERMARK_IRQ_EN  = regbits< type, 24,  1 >;  /**< RX_WATERMARK_IRQ Enable          */
    using TSM_IRQ_EN           = regbits< type, 25,  1 >;  /**< TSM_IRQ Enable                   */
    using ANT_IRQ_EN           = regbits< type, 26,  1 >;  /**< ANT_IRQ Master Enable            */
    using CRC_IGNORE           = regbits< type, 27,  1 >;  /**< CRC Ignore                       */
    using CRC_VALID            = regbits< type, 31,  1 >;  /**< CRC Valid                        */
  };

  /**
   * EVENT TIMER
   */
  struct EVENT_TMR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    // fixme: Field name equals parent register name: EVENT_TMR
    using EVENT_TMR_     = regbits< type,  0, 24 >;  /**< Event Timer       */
    using EVENT_TMR_LD   = regbits< type, 24,  1 >;  /**< Event Timer Load  */
    using EVENT_TMR_ADD  = regbits< type, 25,  1 >;  /**< Event Timer Add   */
  };

  /**
   * T1 COMPARE
   */
  struct T1_CMP
  : public reg< uint32_t, base_addr + 0x8, rw, 0xFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0xFFFFFF >;

    // fixme: Field name equals parent register name: T1_CMP
    using T1_CMP_    = regbits< type,  0, 24 >;  /**< Timer1 (T1) Compare Value   */
    using T1_CMP_EN  = regbits< type, 24,  1 >;  /**< Timer1 (T1) Compare Enable  */
  };

  /**
   * T2 COMPARE
   */
  struct T2_CMP
  : public reg< uint32_t, base_addr + 0xc, rw, 0xFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0xFFFFFF >;

    // fixme: Field name equals parent register name: T2_CMP
    using T2_CMP_    = regbits< type,  0, 24 >;  /**< Timer2 (T2) Compare Value   */
    using T2_CMP_EN  = regbits< type, 24,  1 >;  /**< Timer2 (T2) Compare Enable  */
  };

  /**
   * TIMESTAMP
   */
  struct TIMESTAMP
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    // fixme: Field name equals parent register name: TIMESTAMP
    using TIMESTAMP_ = regbits< type,  0, 24 >;  /**< Received Packet Timestamp  */
  };

  /**
   * TRANSCEIVER CONTROL
   */
  struct XCVR_CTRL
  : public reg< uint32_t, base_addr + 0x14, rw, 0x121200 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x121200 >;

    using SEQCMD         = regbits< type,  0,  4 >;  /**< Sequence Commands       */
    using TX_PKT_LENGTH  = regbits< type,  8,  6 >;  /**< Transmit Packet Length  */
    using RX_PKT_LENGTH  = regbits< type, 16,  6 >;  /**< Receive Packet Length   */
    using CMDDEC_CS      = regbits< type, 24,  3 >;  /**< Command Decode          */
    using XCVR_BUSY      = regbits< type, 31,  1 >;  /**< Transceiver Busy        */
  };

  /**
   * TRANSCEIVER STATUS
   */
  struct XCVR_STS
  : public reg< uint32_t, base_addr + 0x18, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0 >;

    using TX_START_T1_PEND  = regbits< type,  0,  1 >;  /**< TX T1 Start Pending Status         */
    using TX_START_T2_PEND  = regbits< type,  1,  1 >;  /**< TX T2 Start Pending Status         */
    using TX_IN_WARMUP      = regbits< type,  2,  1 >;  /**< TX Warmup Status                   */
    using TX_IN_PROGRESS    = regbits< type,  3,  1 >;  /**< TX in Progress Status              */
    using TX_IN_WARMDN      = regbits< type,  4,  1 >;  /**< TX Warmdown Status                 */
    using RX_START_T1_PEND  = regbits< type,  5,  1 >;  /**< RX T1 Start Pending Status         */
    using RX_START_T2_PEND  = regbits< type,  6,  1 >;  /**< RX T2 Start Pending Status         */
    using RX_STOP_T1_PEND   = regbits< type,  7,  1 >;  /**< RX T1 Stop Pending Status          */
    using RX_STOP_T2_PEND   = regbits< type,  8,  1 >;  /**< RX T2 Start Pending Status         */
    using RX_IN_WARMUP      = regbits< type,  9,  1 >;  /**< RX Warmup Status                   */
    using RX_IN_SEARCH      = regbits< type, 10,  1 >;  /**< RX Search Status                   */
    using RX_IN_PROGRESS    = regbits< type, 11,  1 >;  /**< RX in Progress Status              */
    using RX_IN_WARMDN      = regbits< type, 12,  1 >;  /**< RX Warmdown Status                 */
    using CRC_VALID         = regbits< type, 15,  1 >;  /**< CRC Valid Indicator                */
    using RSSI              = regbits< type, 16,  8 >;  /**< Received Signal Stength Indicator  */
  };

  /**
   * TRANSCEIVER CONFIGURATION
   */
  struct XCVR_CFG
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using TX_WHITEN_DIS    = regbits< type,  0,  1 >;  /**< TX Whitening Disable     */
    using RX_DEWHITEN_DIS  = regbits< type,  1,  1 >;  /**< RX De-Whitening Disable  */
    using SW_CRC_EN        = regbits< type,  2,  1 >;  /**< Software CRC Enable      */
    using PREAMBLE_SZ      = regbits< type,  4,  2 >;  /**< Preamble Size            */
    using TX_WARMUP        = regbits< type,  8,  8 >;  /**< Transmit Warmup Time     */
    using RX_WARMUP        = regbits< type, 16,  8 >;  /**< Receive Warmup Time      */
  };

  /**
   * CHANNEL NUMBER
   */
  struct CHANNEL_NUM
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    // fixme: Field name equals parent register name: CHANNEL_NUM
    using CHANNEL_NUM_ = regbits< type,  0,  7 >;  /**< Channel Number  */
  };

  /**
   * TRANSMIT POWER
   */
  struct TX_POWER
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    // fixme: Field name equals parent register name: TX_POWER
    using TX_POWER_ = regbits< type,  0,  6 >;  /**< Transmit Power  */
  };

  /**
   * NETWORK ADDRESS CONTROL
   */
  struct NTW_ADR_CTRL
  : public reg< uint32_t, base_addr + 0x28, rw, 0x5500 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x5500 >;

    using NTW_ADR_EN    = regbits< type,  0,  4 >;  /**< Network Address Match Enable                 */
    using NTW_ADR_MCH   = regbits< type,  4,  4 >;  /**< Network Address Match Status                 */
    using NTW_ADR0_SZ   = regbits< type,  8,  2 >;  /**< Network Address Match Size                   */
    using NTW_ADR1_SZ   = regbits< type, 10,  2 >;  /**< Network Address Match Size                   */
    using NTW_ADR2_SZ   = regbits< type, 12,  2 >;  /**< Network Address Match Size                   */
    using NTW_ADR3_SZ   = regbits< type, 14,  2 >;  /**< Network Address Match Size                   */
    using NTW_ADR_THR0  = regbits< type, 16,  3 >;  /**< Network Address Match Bit Error Threshold 0  */
    using NTW_ADR_THR1  = regbits< type, 20,  3 >;  /**< Network Address Match Bit Error Threshold 1  */
    using NTW_ADR_THR2  = regbits< type, 24,  3 >;  /**< Network Address Match Bit Error Threshold 2  */
    using NTW_ADR_THR3  = regbits< type, 28,  3 >;  /**< Network Address Match Bit Error Threshold 3  */
  };

  /**
   * NETWORK ADDRESS 0
   */
  struct NTW_ADR_0
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x55555555 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x55555555 >;

    // fixme: Field name equals parent register name: NTW_ADR_0
    using NTW_ADR_0_ = regbits< type,  0, 32 >;  /**< Network Address 0  */
  };

  /**
   * NETWORK ADDRESS 1
   */
  struct NTW_ADR_1
  : public reg< uint32_t, base_addr + 0x30, rw, 0x55555555 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x55555555 >;

    // fixme: Field name equals parent register name: NTW_ADR_1
    using NTW_ADR_1_ = regbits< type,  0, 32 >;  /**< Network Address 1  */
  };

  /**
   * NETWORK ADDRESS 2
   */
  struct NTW_ADR_2
  : public reg< uint32_t, base_addr + 0x34, rw, 0x55555555 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x55555555 >;

    // fixme: Field name equals parent register name: NTW_ADR_2
    using NTW_ADR_2_ = regbits< type,  0, 32 >;  /**< Network Address 2  */
  };

  /**
   * NETWORK ADDRESS 3
   */
  struct NTW_ADR_3
  : public reg< uint32_t, base_addr + 0x38, rw, 0x55555555 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x55555555 >;

    // fixme: Field name equals parent register name: NTW_ADR_3
    using NTW_ADR_3_ = regbits< type,  0, 32 >;  /**< Network Address 2  */
  };

  /**
   * RX WATERMARK
   */
  struct RX_WATERMARK
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x7F >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x7F >;

    // fixme: Field name equals parent register name: RX_WATERMARK
    using RX_WATERMARK_ = regbits< type,  0,  7 >;  /**< RX Watermark  */
    using BYTE_COUNTER  = regbits< type, 16,  7 >;  /**< Byte Counter  */
  };

  /**
   * DSM CONTROL
   */
  struct DSM_CTRL
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using ANT_SLEEP_EN  = regbits< type,  0,  1 >;  /**< ANT DSM Sleep Enable  */
  };

  /**
   * PART ID
   */
  struct PART_ID
  : public reg< uint32_t, base_addr + 0x44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0 >;

    // fixme: Field name equals parent register name: PART_ID
    using PART_ID_ = regbits< type,  0,  8 >;  /**< Part ID  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_0
  : public reg< uint16_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x100, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_1
  : public reg< uint16_t, base_addr + 0x102, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x102, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_2
  : public reg< uint16_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x104, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_3
  : public reg< uint16_t, base_addr + 0x106, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x106, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_4
  : public reg< uint16_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x108, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_5
  : public reg< uint16_t, base_addr + 0x10a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10a, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_6
  : public reg< uint16_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10c, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_7
  : public reg< uint16_t, base_addr + 0x10e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10e, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_8
  : public reg< uint16_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x110, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_9
  : public reg< uint16_t, base_addr + 0x112, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x112, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_10
  : public reg< uint16_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x114, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_11
  : public reg< uint16_t, base_addr + 0x116, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x116, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_12
  : public reg< uint16_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x118, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_13
  : public reg< uint16_t, base_addr + 0x11a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x11a, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_14
  : public reg< uint16_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x11c, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_15
  : public reg< uint16_t, base_addr + 0x11e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x11e, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_16
  : public reg< uint16_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x120, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_17
  : public reg< uint16_t, base_addr + 0x122, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x122, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_18
  : public reg< uint16_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x124, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_19
  : public reg< uint16_t, base_addr + 0x126, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x126, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_20
  : public reg< uint16_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x128, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_21
  : public reg< uint16_t, base_addr + 0x12a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12a, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_22
  : public reg< uint16_t, base_addr + 0x12c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12c, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_23
  : public reg< uint16_t, base_addr + 0x12e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12e, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_24
  : public reg< uint16_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x130, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_25
  : public reg< uint16_t, base_addr + 0x132, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x132, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_26
  : public reg< uint16_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x134, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_27
  : public reg< uint16_t, base_addr + 0x136, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x136, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_28
  : public reg< uint16_t, base_addr + 0x138, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x138, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_29
  : public reg< uint16_t, base_addr + 0x13a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x13a, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_30
  : public reg< uint16_t, base_addr + 0x13c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x13c, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_31
  : public reg< uint16_t, base_addr + 0x13e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x13e, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_32
  : public reg< uint16_t, base_addr + 0x140, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x140, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_33
  : public reg< uint16_t, base_addr + 0x142, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x142, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_34
  : public reg< uint16_t, base_addr + 0x144, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x144, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_35
  : public reg< uint16_t, base_addr + 0x146, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x146, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_36
  : public reg< uint16_t, base_addr + 0x148, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x148, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_37
  : public reg< uint16_t, base_addr + 0x14a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14a, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_38
  : public reg< uint16_t, base_addr + 0x14c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14c, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_39
  : public reg< uint16_t, base_addr + 0x14e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14e, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_40
  : public reg< uint16_t, base_addr + 0x150, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x150, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_41
  : public reg< uint16_t, base_addr + 0x152, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x152, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_42
  : public reg< uint16_t, base_addr + 0x154, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x154, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_43
  : public reg< uint16_t, base_addr + 0x156, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x156, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_44
  : public reg< uint16_t, base_addr + 0x158, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x158, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_45
  : public reg< uint16_t, base_addr + 0x15a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x15a, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_46
  : public reg< uint16_t, base_addr + 0x15c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x15c, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_47
  : public reg< uint16_t, base_addr + 0x15e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x15e, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_48
  : public reg< uint16_t, base_addr + 0x160, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x160, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_49
  : public reg< uint16_t, base_addr + 0x162, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x162, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_50
  : public reg< uint16_t, base_addr + 0x164, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x164, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_51
  : public reg< uint16_t, base_addr + 0x166, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x166, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_52
  : public reg< uint16_t, base_addr + 0x168, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x168, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_53
  : public reg< uint16_t, base_addr + 0x16a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16a, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_54
  : public reg< uint16_t, base_addr + 0x16c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16c, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_55
  : public reg< uint16_t, base_addr + 0x16e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16e, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_56
  : public reg< uint16_t, base_addr + 0x170, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x170, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_57
  : public reg< uint16_t, base_addr + 0x172, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x172, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_58
  : public reg< uint16_t, base_addr + 0x174, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x174, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_59
  : public reg< uint16_t, base_addr + 0x176, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x176, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_60
  : public reg< uint16_t, base_addr + 0x178, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x178, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_61
  : public reg< uint16_t, base_addr + 0x17a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x17a, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_62
  : public reg< uint16_t, base_addr + 0x17c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x17c, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };

  /**
   * PACKET BUFFER
   */
  struct PACKET_BUFFER_63
  : public reg< uint16_t, base_addr + 0x17e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x17e, rw, 0 >;

    using PACKET_BUFFER  = regbits< type,  0, 16 >;  /**< PACKET BUFFER RAM  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ANT_REGS_HPP_INCLUDED
