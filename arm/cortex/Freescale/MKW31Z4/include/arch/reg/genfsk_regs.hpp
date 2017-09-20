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

#ifndef ARCH_REG_GENFSK_REGS_HPP_INCLUDED
#define ARCH_REG_GENFSK_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * GENERIC_FSK
 */
struct GENFSK_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005f000;

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
    using GENERIC_FSK_IRQ_EN   = regbits< type, 26,  1 >;  /**< GENERIC_FSK_IRQ Master Enable    */
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
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using SEQCMD     = regbits< type,  0,  4 >;  /**< Sequence Commands  */
    using CMDDEC_CS  = regbits< type, 24,  3 >;  /**< Command Decode     */
    using XCVR_BUSY  = regbits< type, 31,  1 >;  /**< Transceiver Busy   */
  };

  /**
   * TRANSCEIVER STATUS
   */
  struct XCVR_STS
  : public reg< uint32_t, base_addr + 0x18, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0 >;

    using TX_START_T1_PEND  = regbits< type,  0,  1 >;  /**< TX T1 Start Pending Status                 */
    using TX_START_T2_PEND  = regbits< type,  1,  1 >;  /**< TX T2 Start Pending Status                 */
    using TX_IN_WARMUP      = regbits< type,  2,  1 >;  /**< TX Warmup Status                           */
    using TX_IN_PROGRESS    = regbits< type,  3,  1 >;  /**< TX in Progress Status                      */
    using TX_IN_WARMDN      = regbits< type,  4,  1 >;  /**< TX Warmdown Status                         */
    using RX_START_T1_PEND  = regbits< type,  5,  1 >;  /**< RX T1 Start Pending Status                 */
    using RX_START_T2_PEND  = regbits< type,  6,  1 >;  /**< RX T2 Start Pending Status                 */
    using RX_STOP_T1_PEND   = regbits< type,  7,  1 >;  /**< RX T1 Stop Pending Status                  */
    using RX_STOP_T2_PEND   = regbits< type,  8,  1 >;  /**< RX T2 Start Pending Status                 */
    using RX_IN_WARMUP      = regbits< type,  9,  1 >;  /**< RX Warmup Status                           */
    using RX_IN_SEARCH      = regbits< type, 10,  1 >;  /**< RX Search Status                           */
    using RX_IN_PROGRESS    = regbits< type, 11,  1 >;  /**< RX in Progress Status                      */
    using RX_IN_WARMDN      = regbits< type, 12,  1 >;  /**< RX Warmdown Status                         */
    using LQI_VALID         = regbits< type, 14,  1 >;  /**< LQI Valid Indicator                        */
    using CRC_VALID         = regbits< type, 15,  1 >;  /**< CRC Valid Indicator                        */
    using RSSI              = regbits< type, 16,  8 >;  /**< Received Signal Stength Indicator, in dBm  */
    using LQI               = regbits< type, 24,  8 >;  /**< Link Quality Indicator                     */
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
    using PREAMBLE_SZ      = regbits< type,  4,  3 >;  /**< Preamble Size            */
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

    using NTW_ADR_EN    = regbits< type,  0,  4 >;  /**< Network Address Enable       */
    using NTW_ADR_MCH   = regbits< type,  4,  4 >;  /**< Network Address Match        */
    using NTW_ADR0_SZ   = regbits< type,  8,  2 >;  /**< Network Address 0 Size       */
    using NTW_ADR1_SZ   = regbits< type, 10,  2 >;  /**< Network Address 1 Size       */
    using NTW_ADR2_SZ   = regbits< type, 12,  2 >;  /**< Network Address 2 Size       */
    using NTW_ADR3_SZ   = regbits< type, 14,  2 >;  /**< Network Address 3 Size       */
    using NTW_ADR_THR0  = regbits< type, 16,  3 >;  /**< Network Address 0 Threshold  */
    using NTW_ADR_THR1  = regbits< type, 20,  3 >;  /**< Network Address 1 Threshold  */
    using NTW_ADR_THR2  = regbits< type, 24,  3 >;  /**< Network Address 2 Threshold  */
    using NTW_ADR_THR3  = regbits< type, 28,  3 >;  /**< Network Address 3 Threshold  */
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
   * RECEIVE WATERMARK
   */
  struct RX_WATERMARK
  : public reg< uint32_t, base_addr + 0x3c, rw, 0xFFF >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0xFFF >;

    // fixme: Field name equals parent register name: RX_WATERMARK
    using RX_WATERMARK_ = regbits< type,  0, 13 >;  /**< Receive Watermark  */
    using BYTE_COUNTER  = regbits< type, 16, 13 >;  /**< Byte Counter       */
  };

  /**
   * DSM CONTROL
   */
  struct DSM_CTRL
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using GENERIC_FSK_SLEEP_EN  = regbits< type,  0,  1 >;  /**< GENERIC_FSK DSM Sleep Enable  */
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
   * PACKET CONFIGURATION
   */
  struct PACKET_CFG
  : public reg< uint32_t, base_addr + 0x60, rw, 0x40 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x40 >;

    using LENGTH_SZ       = regbits< type,  0,  5 >;  /**< LENGTH Size                         */
    using LENGTH_BIT_ORD  = regbits< type,  5,  1 >;  /**< LENGTH Bit Order                    */
    using SYNC_ADDR_SZ    = regbits< type,  6,  2 >;  /**< Sync Address Size                   */
    using LENGTH_ADJ      = regbits< type,  8,  6 >;  /**< Length Adjustment                   */
    using LENGTH_FAIL     = regbits< type, 15,  1 >;  /**< Maximum Length Violated Status Bit  */
    using H0_SZ           = regbits< type, 16,  5 >;  /**< H0 Size                             */
    using H0_FAIL         = regbits< type, 23,  1 >;  /**< H0 Violated Status Bit              */
    using H1_SZ           = regbits< type, 24,  5 >;  /**< H1 Size                             */
    using H1_FAIL         = regbits< type, 31,  1 >;  /**< H1 Violated Status Bit              */
  };

  /**
   * H0 CONFIGURATION
   */
  struct H0_CFG
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using H0_MATCH  = regbits< type,  0, 16 >;  /**< H0 Match Register  */
    using H0_MASK   = regbits< type, 16, 16 >;  /**< H0 Mask Register   */
  };

  /**
   * H1 CONFIGURATION
   */
  struct H1_CFG
  : public reg< uint32_t, base_addr + 0x68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0 >;

    using H1_MATCH  = regbits< type,  0, 16 >;  /**< H1 Match Register  */
    using H1_MASK   = regbits< type, 16, 16 >;  /**< H1 Mask Register   */
  };

  /**
   * CRC CONFIGURATION
   */
  struct CRC_CFG
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x2 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x2 >;

    using CRC_SZ          = regbits< type,  0,  3 >;  /**< CRC Size (in octets)       */
    using CRC_START_BYTE  = regbits< type,  8,  4 >;  /**< Configure CRC Start Point  */
    using CRC_REF_IN      = regbits< type, 16,  1 >;  /**< CRC Reflect In             */
    using CRC_REF_OUT     = regbits< type, 17,  1 >;  /**< CRC Reflect Out            */
    using CRC_BYTE_ORD    = regbits< type, 18,  1 >;  /**< CRC Byte Order             */
  };

  /**
   * CRC INITIALIZATION
   */
  struct CRC_INIT
  : public reg< uint32_t, base_addr + 0x70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0 >;

    using CRC_SEED  = regbits< type,  0, 32 >;  /**< CRC Seed Value  */
  };

  /**
   * CRC POLYNOMIAL
   */
  struct CRC_POLY
  : public reg< uint32_t, base_addr + 0x74, rw, 0x10210000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0x10210000 >;

    // fixme: Field name equals parent register name: CRC_POLY
    using CRC_POLY_ = regbits< type,  0, 32 >;  /**< CRC Polynomial.  */
  };

  /**
   * CRC XOR OUT
   */
  struct CRC_XOR_OUT
  : public reg< uint32_t, base_addr + 0x78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0 >;

    // fixme: Field name equals parent register name: CRC_XOR_OUT
    using CRC_XOR_OUT_ = regbits< type,  0, 32 >;  /**< CRC XOR OUT Register  */
  };

  /**
   * WHITENER CONFIGURATION
   */
  struct WHITEN_CFG
  : public reg< uint32_t, base_addr + 0x7c, rw, 0x1FF0918 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0x1FF0918 >;

    using WHITEN_START           = regbits< type,  0,  2 >;  /**< Configure Whitener Start Point                   */
    using WHITEN_END             = regbits< type,  2,  1 >;  /**< Configure end-of-whitening                       */
    using WHITEN_B4_CRC          = regbits< type,  3,  1 >;  /**< Congifure for Whitening-before-CRC               */
    using WHITEN_POLY_TYPE       = regbits< type,  4,  1 >;  /**< Whiten Polynomial Type                           */
    using WHITEN_REF_IN          = regbits< type,  5,  1 >;  /**< Whiten Reflect Input                             */
    using WHITEN_PAYLOAD_REINIT  = regbits< type,  6,  1 >;  /**< Configure for Whitener re-initialization         */
    using WHITEN_SIZE            = regbits< type,  8,  4 >;  /**< Length of Whitener LFSR                          */
    using MANCHESTER_EN          = regbits< type, 12,  1 >;  /**< Configure for Manchester Encoding/Decoding       */
    using MANCHESTER_INV         = regbits< type, 13,  1 >;  /**< Configure for Inverted Manchester Encoding       */
    using MANCHESTER_START       = regbits< type, 14,  1 >;  /**< Configure Manchester Encoding Start Point        */
    using WHITEN_INIT            = regbits< type, 16,  9 >;  /**< Initialization Value for Whitening/De-whitening  */
  };

  /**
   * WHITENER POLYNOMIAL
   */
  struct WHITEN_POLY
  : public reg< uint32_t, base_addr + 0x80, rw, 0x21 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x21 >;

    // fixme: Field name equals parent register name: WHITEN_POLY
    using WHITEN_POLY_ = regbits< type,  0,  9 >;  /**< Whitener Polynomial  */
  };

  /**
   * WHITENER SIZE THRESHOLD
   */
  struct WHITEN_SZ_THR
  : public reg< uint32_t, base_addr + 0x84, rw, 0x800 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x800 >;

    // fixme: Field name equals parent register name: WHITEN_SZ_THR
    using WHITEN_SZ_THR_ = regbits< type,  0, 12 >;  /**< Whitener Size Threshold              */
    using LENGTH_MAX     = regbits< type, 16,  7 >;  /**< Maximum Length for Received Packets  */
    using REC_BAD_PKT    = regbits< type, 23,  1 >;  /**< Receive Bad Packets                  */
  };

  /**
   * BIT RATE
   */
  struct BITRATE
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    // fixme: Field name equals parent register name: BITRATE
    using BITRATE_ = regbits< type,  0,  2 >;  /**< Bit Rate  */
  };

  /**
   * PACKET BUFFER PARTITION POINT
   */
  struct PB_PARTITION
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x220 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x220 >;

    // fixme: Field name equals parent register name: PB_PARTITION
    using PB_PARTITION_ = regbits< type,  0, 11 >;  /**< Packet Buffer Partition Point  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GENFSK_REGS_HPP_INCLUDED
