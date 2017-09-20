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
//  Import from CMSIS-SVD: "Freescale/MKV58F20.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV58F20
//  series: Kinetis_V
//  version: 1.6
//  description: MKV58F20 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ENET_HPP_INCLUDED
#define ARCH_REG_ENET_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Ethernet MAC-NET Core
 */
struct ENET
{
  static constexpr reg_addr_t base_addr = 0x400c0000;

  /**
   * Interrupt Event Register
   */
  struct EIR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using TS_TIMER  = regbits< type, 15,  1 >;  /**< Timestamp Timer                 */
    using TS_AVAIL  = regbits< type, 16,  1 >;  /**< Transmit Timestamp Available    */
    using WAKEUP    = regbits< type, 17,  1 >;  /**< Node Wakeup Request Indication  */
    using PLR       = regbits< type, 18,  1 >;  /**< Payload Receive Error           */
    using UN        = regbits< type, 19,  1 >;  /**< Transmit FIFO Underrun          */
    using RL        = regbits< type, 20,  1 >;  /**< Collision Retry Limit           */
    using LC        = regbits< type, 21,  1 >;  /**< Late Collision                  */
    using EBERR     = regbits< type, 22,  1 >;  /**< Ethernet Bus Error              */
    using MII       = regbits< type, 23,  1 >;  /**< MII Interrupt.                  */
    using RXB       = regbits< type, 24,  1 >;  /**< Receive Buffer Interrupt        */
    using RXF       = regbits< type, 25,  1 >;  /**< Receive Frame Interrupt         */
    using TXB       = regbits< type, 26,  1 >;  /**< Transmit Buffer Interrupt       */
    using TXF       = regbits< type, 27,  1 >;  /**< Transmit Frame Interrupt        */
    using GRA       = regbits< type, 28,  1 >;  /**< Graceful Stop Complete          */
    using BABT      = regbits< type, 29,  1 >;  /**< Babbling Transmit Error         */
    using BABR      = regbits< type, 30,  1 >;  /**< Babbling Receive Error          */
  };

  /**
   * Interrupt Mask Register
   */
  struct EIMR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using TS_TIMER  = regbits< type, 15,  1 >;  /**< TS_TIMER Interrupt Mask  */
    using TS_AVAIL  = regbits< type, 16,  1 >;  /**< TS_AVAIL Interrupt Mask  */
    using WAKEUP    = regbits< type, 17,  1 >;  /**< WAKEUP Interrupt Mask    */
    using PLR       = regbits< type, 18,  1 >;  /**< PLR Interrupt Mask       */
    using UN        = regbits< type, 19,  1 >;  /**< UN Interrupt Mask        */
    using RL        = regbits< type, 20,  1 >;  /**< RL Interrupt Mask        */
    using LC        = regbits< type, 21,  1 >;  /**< LC Interrupt Mask        */
    using EBERR     = regbits< type, 22,  1 >;  /**< EBERR Interrupt Mask     */
    using MII       = regbits< type, 23,  1 >;  /**< MII Interrupt Mask       */
    using RXB       = regbits< type, 24,  1 >;  /**< RXB Interrupt Mask       */
    using RXF       = regbits< type, 25,  1 >;  /**< RXF Interrupt Mask       */
    using TXB       = regbits< type, 26,  1 >;  /**< TXB Interrupt Mask       */
    using TXF       = regbits< type, 27,  1 >;  /**< TXF Interrupt Mask       */
    using GRA       = regbits< type, 28,  1 >;  /**< GRA Interrupt Mask       */
    using BABT      = regbits< type, 29,  1 >;  /**< BABT Interrupt Mask      */
    using BABR      = regbits< type, 30,  1 >;  /**< BABR Interrupt Mask      */
  };

  /**
   * Receive Descriptor Active Register
   */
  struct RDAR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    // fixme: Field name equals parent register name: RDAR
    using RDAR_ = regbits< type, 24,  1 >;  /**< Receive Descriptor Active  */
  };

  /**
   * Transmit Descriptor Active Register
   */
  struct TDAR
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    // fixme: Field name equals parent register name: TDAR
    using TDAR_ = regbits< type, 24,  1 >;  /**< Transmit Descriptor Active  */
  };

  /**
   * Ethernet Control Register
   */
  struct ECR
  : public reg< uint32_t, base_addr + 0x24, rw, 0xF0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0xF0000000 >;

    using RESET    = regbits< type,  0,  1 >;  /**< Ethernet MAC Reset               */
    using ETHEREN  = regbits< type,  1,  1 >;  /**< Ethernet Enable                  */
    using MAGICEN  = regbits< type,  2,  1 >;  /**< Magic Packet Detection Enable    */
    using SLEEP    = regbits< type,  3,  1 >;  /**< Sleep Mode Enable                */
    using EN1588   = regbits< type,  4,  1 >;  /**< EN1588 Enable                    */
    using DBGEN    = regbits< type,  6,  1 >;  /**< Debug Enable                     */
    using STOPEN   = regbits< type,  7,  1 >;  /**< STOPEN Signal Control            */
    using DBSWP    = regbits< type,  8,  1 >;  /**< Descriptor Byte Swapping Enable  */
  };

  /**
   * MII Management Frame Register
   */
  struct MMFR
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using DATA  = regbits< type,  0, 16 >;  /**< Management Frame Data     */
    using TA    = regbits< type, 16,  2 >;  /**< Turn Around               */
    using RA    = regbits< type, 18,  5 >;  /**< Register Address          */
    using PA    = regbits< type, 23,  5 >;  /**< PHY Address               */
    using OP    = regbits< type, 28,  2 >;  /**< Operation Code            */
    using ST    = regbits< type, 30,  2 >;  /**< Start Of Frame Delimiter  */
  };

  /**
   * MII Speed Control Register
   */
  struct MSCR
  : public reg< uint32_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 >;

    using MII_SPEED  = regbits< type,  1,  6 >;  /**< MII Speed                 */
    using DIS_PRE    = regbits< type,  7,  1 >;  /**< Disable Preamble          */
    using HOLDTIME   = regbits< type,  8,  3 >;  /**< Hold time On MDIO Output  */
  };

  /**
   * MIB Control Register
   */
  struct MIBC
  : public reg< uint32_t, base_addr + 0x64, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0xC0000000 >;

    using MIB_CLEAR  = regbits< type, 29,  1 >;  /**< MIB Clear          */
    using MIB_IDLE   = regbits< type, 30,  1 >;  /**< MIB Idle           */
    using MIB_DIS    = regbits< type, 31,  1 >;  /**< Disable MIB Logic  */
  };

  /**
   * Receive Control Register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x84, rw, 0x5EE0001 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x5EE0001 >;

    using LOOP       = regbits< type,  0,  1 >;  /**< Internal Loopback                       */
    using DRT        = regbits< type,  1,  1 >;  /**< Disable Receive On Transmit             */
    using MII_MODE   = regbits< type,  2,  1 >;  /**< Media Independent Interface Mode        */
    using PROM       = regbits< type,  3,  1 >;  /**< Promiscuous Mode                        */
    using BC_REJ     = regbits< type,  4,  1 >;  /**< Broadcast Frame Reject                  */
    using FCE        = regbits< type,  5,  1 >;  /**< Flow Control Enable                     */
    using RMII_MODE  = regbits< type,  8,  1 >;  /**< RMII Mode Enable                        */
    using RMII_10T   = regbits< type,  9,  1 >;  /**< Enables 10-Mbit/s mode of the RMII .    */
    using PADEN      = regbits< type, 12,  1 >;  /**< Enable Frame Padding Remove On Receive  */
    using PAUFWD     = regbits< type, 13,  1 >;  /**< Terminate/Forward Pause Frames          */
    using CRCFWD     = regbits< type, 14,  1 >;  /**< Terminate/Forward Received CRC          */
    using CFEN       = regbits< type, 15,  1 >;  /**< MAC Control Frame Enable                */
    using MAX_FL     = regbits< type, 16, 14 >;  /**< Maximum Frame Length                    */
    using NLC        = regbits< type, 30,  1 >;  /**< Payload Length Check Disable            */
    using GRS        = regbits< type, 31,  1 >;  /**< Graceful Receive Stopped                */
  };

  /**
   * Transmit Control Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0xc4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0 >;

    using GTS        = regbits< type,  0,  1 >;  /**< Graceful Transmit Stop                   */
    using FDEN       = regbits< type,  2,  1 >;  /**< Full-Duplex Enable                       */
    using TFC_PAUSE  = regbits< type,  3,  1 >;  /**< Transmit Frame Control Pause             */
    using RFC_PAUSE  = regbits< type,  4,  1 >;  /**< Receive Frame Control Pause              */
    using ADDSEL     = regbits< type,  5,  3 >;  /**< Source MAC Address Select On Transmit    */
    using ADDINS     = regbits< type,  8,  1 >;  /**< Set MAC Address On Transmit              */
    using CRCFWD     = regbits< type,  9,  1 >;  /**< Forward Frame From Application With CRC  */
  };

  /**
   * Physical Address Lower Register
   */
  struct PALR
  : public reg< uint32_t, base_addr + 0xe4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0 >;

    using PADDR1  = regbits< type,  0, 32 >;  /**< Pause Address  */
  };

  /**
   * Physical Address Upper Register
   */
  struct PAUR
  : public reg< uint32_t, base_addr + 0xe8, rw, 0x8808 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, rw, 0x8808 >;

    using TYPE    = regbits< type,  0, 16 >;  /**< Type Field In PAUSE Frames                                                                                                                   */
    using PADDR2  = regbits< type, 16, 16 >;  /**< Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address used for exact match, and the source address field in PAUSE frames  */
  };

  /**
   * Opcode/Pause Duration Register
   */
  struct OPD
  : public reg< uint32_t, base_addr + 0xec, rw, 0x10000 >
  {
    using type = reg< uint32_t, base_addr + 0xec, rw, 0x10000 >;

    using PAUSE_DUR  = regbits< type,  0, 16 >;  /**< Pause Duration                */
    using OPCODE     = regbits< type, 16, 16 >;  /**< Opcode Field In PAUSE Frames  */
  };

  /**
   * Descriptor Individual Upper Address Register
   */
  struct IAUR
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using IADDR1  = regbits< type,  0, 32 >;  /**< Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address  */
  };

  /**
   * Descriptor Individual Lower Address Register
   */
  struct IALR
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0 >;

    using IADDR2  = regbits< type,  0, 32 >;  /**< Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address  */
  };

  /**
   * Descriptor Group Upper Address Register
   */
  struct GAUR
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using GADDR1  = regbits< type,  0, 32 >;  /**< Contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address  */
  };

  /**
   * Descriptor Group Lower Address Register
   */
  struct GALR
  : public reg< uint32_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0 >;

    using GADDR2  = regbits< type,  0, 32 >;  /**< Contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address  */
  };

  /**
   * Transmit FIFO Watermark Register
   */
  struct TFWR
  : public reg< uint32_t, base_addr + 0x144, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x144, rw, 0 >;

    // fixme: Field name equals parent register name: TFWR
    using TFWR_   = regbits< type,  0,  6 >;  /**< Transmit FIFO Write       */
    using STRFWD  = regbits< type,  8,  1 >;  /**< Store And Forward Enable  */
  };

  /**
   * Receive Descriptor Ring Start Register
   */
  struct RDSR
  : public reg< uint32_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0 >;

    using R_DES_START  = regbits< type,  3, 29 >;  /**< Pointer to the beginning of the receive buffer descriptor queue.  */
  };

  /**
   * Transmit Buffer Descriptor Ring Start Register
   */
  struct TDSR
  : public reg< uint32_t, base_addr + 0x184, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0 >;

    using X_DES_START  = regbits< type,  3, 29 >;  /**< Pointer to the beginning of the transmit buffer descriptor queue.  */
  };

  /**
   * Maximum Receive Buffer Size Register
   */
  struct MRBR
  : public reg< uint32_t, base_addr + 0x188, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0 >;

    using R_BUF_SIZE  = regbits< type,  4,  7 >;  /**< Receive buffer size in bytes  */
  };

  /**
   * Receive FIFO Section Full Threshold
   */
  struct RSFL
  : public reg< uint32_t, base_addr + 0x190, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0 >;

    using RX_SECTION_FULL  = regbits< type,  0,  8 >;  /**< Value Of Receive FIFO Section Full Threshold  */
  };

  /**
   * Receive FIFO Section Empty Threshold
   */
  struct RSEM
  : public reg< uint32_t, base_addr + 0x194, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x194, rw, 0 >;

    using RX_SECTION_EMPTY    = regbits< type,  0,  8 >;  /**< Value Of The Receive FIFO Section Empty Threshold  */
    using STAT_SECTION_EMPTY  = regbits< type, 16,  5 >;  /**< RX Status FIFO Section Empty Threshold             */
  };

  /**
   * Receive FIFO Almost Empty Threshold
   */
  struct RAEM
  : public reg< uint32_t, base_addr + 0x198, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x198, rw, 0x4 >;

    using RX_ALMOST_EMPTY  = regbits< type,  0,  8 >;  /**< Value Of The Receive FIFO Almost Empty Threshold  */
  };

  /**
   * Receive FIFO Almost Full Threshold
   */
  struct RAFL
  : public reg< uint32_t, base_addr + 0x19c, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x19c, rw, 0x4 >;

    using RX_ALMOST_FULL  = regbits< type,  0,  8 >;  /**< Value Of The Receive FIFO Almost Full Threshold  */
  };

  /**
   * Transmit FIFO Section Empty Threshold
   */
  struct TSEM
  : public reg< uint32_t, base_addr + 0x1a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a0, rw, 0 >;

    using TX_SECTION_EMPTY  = regbits< type,  0,  8 >;  /**< Value Of The Transmit FIFO Section Empty Threshold  */
  };

  /**
   * Transmit FIFO Almost Empty Threshold
   */
  struct TAEM
  : public reg< uint32_t, base_addr + 0x1a4, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x1a4, rw, 0x4 >;

    using TX_ALMOST_EMPTY  = regbits< type,  0,  8 >;  /**< Value of Transmit FIFO Almost Empty Threshold  */
  };

  /**
   * Transmit FIFO Almost Full Threshold
   */
  struct TAFL
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0x8 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0x8 >;

    using TX_ALMOST_FULL  = regbits< type,  0,  8 >;  /**< Value Of The Transmit FIFO Almost Full Threshold  */
  };

  /**
   * Transmit Inter-Packet Gap
   */
  struct TIPG
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0xC >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0xC >;

    using IPG  = regbits< type,  0,  5 >;  /**< Transmit Inter-Packet Gap  */
  };

  /**
   * Frame Truncation Length
   */
  struct FTRL
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0x7FF >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0x7FF >;

    using TRUNC_FL  = regbits< type,  0, 14 >;  /**< Frame Truncation Length  */
  };

  /**
   * Transmit Accelerator Function Configuration
   */
  struct TACC
  : public reg< uint32_t, base_addr + 0x1c0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c0, rw, 0 >;

    using SHIFT16  = regbits< type,  0,  1 >;  /**< TX FIFO Shift-16                          */
    using IPCHK    = regbits< type,  3,  1 >;  /**< Enables insertion of IP header checksum.  */
    using PROCHK   = regbits< type,  4,  1 >;  /**< Enables insertion of protocol checksum.   */
  };

  /**
   * Receive Accelerator Function Configuration
   */
  struct RACC
  : public reg< uint32_t, base_addr + 0x1c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c4, rw, 0 >;

    using PADREM   = regbits< type,  0,  1 >;  /**< Enable Padding Removal For Short IP Frames                */
    using IPDIS    = regbits< type,  1,  1 >;  /**< Enable Discard Of Frames With Wrong IPv4 Header Checksum  */
    using PRODIS   = regbits< type,  2,  1 >;  /**< Enable Discard Of Frames With Wrong Protocol Checksum     */
    using LINEDIS  = regbits< type,  6,  1 >;  /**< Enable Discard Of Frames With MAC Layer Errors            */
    using SHIFT16  = regbits< type,  7,  1 >;  /**< RX FIFO Shift-16                                          */
  };

  /**
   * Reserved Statistic Register
   */
  struct RMON_T_DROP
  : public reg< uint32_t, base_addr + 0x200, ro, 0 >
  {
  };

  /**
   * Tx Packet Count Statistic Register
   */
  struct RMON_T_PACKETS
  : public reg< uint32_t, base_addr + 0x204, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Packet count  */
  };

  /**
   * Tx Broadcast Packets Statistic Register
   */
  struct RMON_T_BC_PKT
  : public reg< uint32_t, base_addr + 0x208, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Broadcast packets  */
  };

  /**
   * Tx Multicast Packets Statistic Register
   */
  struct RMON_T_MC_PKT
  : public reg< uint32_t, base_addr + 0x20c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Multicast packets  */
  };

  /**
   * Tx Packets with CRC/Align Error Statistic Register
   */
  struct RMON_T_CRC_ALIGN
  : public reg< uint32_t, base_addr + 0x210, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x210, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Packets with CRC/align error  */
  };

  /**
   * Tx Packets Less Than Bytes and Good CRC Statistic Register
   */
  struct RMON_T_UNDERSIZE
  : public reg< uint32_t, base_addr + 0x214, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x214, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of transmit packets less than 64 bytes with good CRC  */
  };

  /**
   * Tx Packets GT MAX_FL bytes and Good CRC Statistic Register
   */
  struct RMON_T_OVERSIZE
  : public reg< uint32_t, base_addr + 0x218, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x218, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of transmit packets greater than MAX_FL bytes with good CRC  */
  };

  /**
   * Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register
   */
  struct RMON_T_FRAG
  : public reg< uint32_t, base_addr + 0x21c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x21c, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of packets less than 64 bytes with bad CRC  */
  };

  /**
   * Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
   */
  struct RMON_T_JAB
  : public reg< uint32_t, base_addr + 0x220, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x220, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of transmit packets greater than MAX_FL bytes and bad CRC  */
  };

  /**
   * Tx Collision Count Statistic Register
   */
  struct RMON_T_COL
  : public reg< uint32_t, base_addr + 0x224, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x224, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of transmit collisions  */
  };

  /**
   * Tx 64-Byte Packets Statistic Register
   */
  struct RMON_T_P64
  : public reg< uint32_t, base_addr + 0x228, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x228, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of 64-byte transmit packets  */
  };

  /**
   * Tx 65- to 127-byte Packets Statistic Register
   */
  struct RMON_T_P65TO127
  : public reg< uint32_t, base_addr + 0x22c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x22c, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of 65- to 127-byte transmit packets  */
  };

  /**
   * Tx 128- to 255-byte Packets Statistic Register
   */
  struct RMON_T_P128TO255
  : public reg< uint32_t, base_addr + 0x230, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x230, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of 128- to 255-byte transmit packets  */
  };

  /**
   * Tx 256- to 511-byte Packets Statistic Register
   */
  struct RMON_T_P256TO511
  : public reg< uint32_t, base_addr + 0x234, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x234, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of 256- to 511-byte transmit packets  */
  };

  /**
   * Tx 512- to 1023-byte Packets Statistic Register
   */
  struct RMON_T_P512TO1023
  : public reg< uint32_t, base_addr + 0x238, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x238, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of 512- to 1023-byte transmit packets  */
  };

  /**
   * Tx 1024- to 2047-byte Packets Statistic Register
   */
  struct RMON_T_P1024TO2047
  : public reg< uint32_t, base_addr + 0x23c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x23c, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of 1024- to 2047-byte transmit packets  */
  };

  /**
   * Tx Packets Greater Than 2048 Bytes Statistic Register
   */
  struct RMON_T_P_GTE2048
  : public reg< uint32_t, base_addr + 0x240, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x240, ro, 0 >;

    using TXPKTS  = regbits< type,  0, 16 >;  /**< Number of transmit packets greater than 2048 bytes  */
  };

  /**
   * Tx Octets Statistic Register
   */
  struct RMON_T_OCTETS
  : public reg< uint32_t, base_addr + 0x244, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x244, ro, 0 >;

    using TXOCTS  = regbits< type,  0, 32 >;  /**< Number of transmit octets  */
  };

  /**
   * Reserved Statistic Register
   */
  struct IEEE_T_DROP
  : public reg< uint32_t, base_addr + 0x248, ro, 0 >
  {
  };

  /**
   * Frames Transmitted OK Statistic Register
   */
  struct IEEE_T_FRAME_OK
  : public reg< uint32_t, base_addr + 0x24c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24c, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames transmitted OK  */
  };

  /**
   * Frames Transmitted with Single Collision Statistic Register
   */
  struct IEEE_T_1COL
  : public reg< uint32_t, base_addr + 0x250, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x250, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames transmitted with one collision  */
  };

  /**
   * Frames Transmitted with Multiple Collisions Statistic Register
   */
  struct IEEE_T_MCOL
  : public reg< uint32_t, base_addr + 0x254, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x254, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames transmitted with multiple collisions  */
  };

  /**
   * Frames Transmitted after Deferral Delay Statistic Register
   */
  struct IEEE_T_DEF
  : public reg< uint32_t, base_addr + 0x258, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x258, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames transmitted with deferral delay  */
  };

  /**
   * Frames Transmitted with Late Collision Statistic Register
   */
  struct IEEE_T_LCOL
  : public reg< uint32_t, base_addr + 0x25c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x25c, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames transmitted with late collision  */
  };

  /**
   * Frames Transmitted with Excessive Collisions Statistic Register
   */
  struct IEEE_T_EXCOL
  : public reg< uint32_t, base_addr + 0x260, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x260, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames transmitted with excessive collisions  */
  };

  /**
   * Frames Transmitted with Tx FIFO Underrun Statistic Register
   */
  struct IEEE_T_MACERR
  : public reg< uint32_t, base_addr + 0x264, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x264, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames transmitted with transmit FIFO underrun  */
  };

  /**
   * Frames Transmitted with Carrier Sense Error Statistic Register
   */
  struct IEEE_T_CSERR
  : public reg< uint32_t, base_addr + 0x268, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x268, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames transmitted with carrier sense error  */
  };

  /**
   * Reserved Statistic Register
   */
  struct IEEE_T_SQE
  : public reg< uint32_t, base_addr + 0x26c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x26c, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< This read-only field is reserved and always has the value 0  */
  };

  /**
   * Flow Control Pause Frames Transmitted Statistic Register
   */
  struct IEEE_T_FDXFC
  : public reg< uint32_t, base_addr + 0x270, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x270, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of flow-control pause frames transmitted  */
  };

  /**
   * Octet Count for Frames Transmitted w/o Error Statistic Register
   */
  struct IEEE_T_OCTETS_OK
  : public reg< uint32_t, base_addr + 0x274, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x274, ro, 0 >;

    using COUNT  = regbits< type,  0, 32 >;  /**< Octet count for frames transmitted without error Counts total octets (includes header and FCS fields).  */
  };

  /**
   * Rx Packet Count Statistic Register
   */
  struct RMON_R_PACKETS
  : public reg< uint32_t, base_addr + 0x284, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x284, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of packets received  */
  };

  /**
   * Rx Broadcast Packets Statistic Register
   */
  struct RMON_R_BC_PKT
  : public reg< uint32_t, base_addr + 0x288, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x288, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of receive broadcast packets  */
  };

  /**
   * Rx Multicast Packets Statistic Register
   */
  struct RMON_R_MC_PKT
  : public reg< uint32_t, base_addr + 0x28c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28c, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of receive multicast packets  */
  };

  /**
   * Rx Packets with CRC/Align Error Statistic Register
   */
  struct RMON_R_CRC_ALIGN
  : public reg< uint32_t, base_addr + 0x290, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x290, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of receive packets with CRC or align error  */
  };

  /**
   * Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
   */
  struct RMON_R_UNDERSIZE
  : public reg< uint32_t, base_addr + 0x294, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x294, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of receive packets with less than 64 bytes and good CRC  */
  };

  /**
   * Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
   */
  struct RMON_R_OVERSIZE
  : public reg< uint32_t, base_addr + 0x298, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x298, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of receive packets greater than MAX_FL and good CRC  */
  };

  /**
   * Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register
   */
  struct RMON_R_FRAG
  : public reg< uint32_t, base_addr + 0x29c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x29c, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of receive packets with less than 64 bytes and bad CRC  */
  };

  /**
   * Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register
   */
  struct RMON_R_JAB
  : public reg< uint32_t, base_addr + 0x2a0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a0, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of receive packets greater than MAX_FL and bad CRC  */
  };

  /**
   * Reserved Statistic Register
   */
  struct RMON_R_RESVD_0
  : public reg< uint32_t, base_addr + 0x2a4, ro, 0 >
  {
  };

  /**
   * Rx 64-Byte Packets Statistic Register
   */
  struct RMON_R_P64
  : public reg< uint32_t, base_addr + 0x2a8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a8, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of 64-byte receive packets  */
  };

  /**
   * Rx 65- to 127-Byte Packets Statistic Register
   */
  struct RMON_R_P65TO127
  : public reg< uint32_t, base_addr + 0x2ac, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2ac, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of 65- to 127-byte recieve packets  */
  };

  /**
   * Rx 128- to 255-Byte Packets Statistic Register
   */
  struct RMON_R_P128TO255
  : public reg< uint32_t, base_addr + 0x2b0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b0, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of 128- to 255-byte recieve packets  */
  };

  /**
   * Rx 256- to 511-Byte Packets Statistic Register
   */
  struct RMON_R_P256TO511
  : public reg< uint32_t, base_addr + 0x2b4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b4, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of 256- to 511-byte recieve packets  */
  };

  /**
   * Rx 512- to 1023-Byte Packets Statistic Register
   */
  struct RMON_R_P512TO1023
  : public reg< uint32_t, base_addr + 0x2b8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b8, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of 512- to 1023-byte recieve packets  */
  };

  /**
   * Rx 1024- to 2047-Byte Packets Statistic Register
   */
  struct RMON_R_P1024TO2047
  : public reg< uint32_t, base_addr + 0x2bc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2bc, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of 1024- to 2047-byte recieve packets  */
  };

  /**
   * Rx Packets Greater than 2048 Bytes Statistic Register
   */
  struct RMON_R_P_GTE2048
  : public reg< uint32_t, base_addr + 0x2c0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c0, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of greater-than-2048-byte recieve packets  */
  };

  /**
   * Rx Octets Statistic Register
   */
  struct RMON_R_OCTETS
  : public reg< uint32_t, base_addr + 0x2c4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c4, ro, 0 >;

    using COUNT  = regbits< type,  0, 32 >;  /**< Number of receive octets  */
  };

  /**
   * Frames not Counted Correctly Statistic Register
   */
  struct IEEE_R_DROP
  : public reg< uint32_t, base_addr + 0x2c8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c8, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Frame count  */
  };

  /**
   * Frames Received OK Statistic Register
   */
  struct IEEE_R_FRAME_OK
  : public reg< uint32_t, base_addr + 0x2cc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2cc, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames received OK  */
  };

  /**
   * Frames Received with CRC Error Statistic Register
   */
  struct IEEE_R_CRC
  : public reg< uint32_t, base_addr + 0x2d0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d0, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames received with CRC error  */
  };

  /**
   * Frames Received with Alignment Error Statistic Register
   */
  struct IEEE_R_ALIGN
  : public reg< uint32_t, base_addr + 0x2d4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d4, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of frames received with alignment error  */
  };

  /**
   * Receive FIFO Overflow Count Statistic Register
   */
  struct IEEE_R_MACERR
  : public reg< uint32_t, base_addr + 0x2d8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d8, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Receive FIFO overflow count  */
  };

  /**
   * Flow Control Pause Frames Received Statistic Register
   */
  struct IEEE_R_FDXFC
  : public reg< uint32_t, base_addr + 0x2dc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2dc, ro, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Number of flow-control pause frames received  */
  };

  /**
   * Octet Count for Frames Received without Error Statistic Register
   */
  struct IEEE_R_OCTETS_OK
  : public reg< uint32_t, base_addr + 0x2e0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e0, ro, 0 >;

    using COUNT  = regbits< type,  0, 32 >;  /**< Number of octets for frames received without error  */
  };

  /**
   * Adjustable Timer Control Register
   */
  struct ATCR
  : public reg< uint32_t, base_addr + 0x400, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0 >;

    using EN       = regbits< type,  0,  1 >;  /**< Enable Timer                                           */
    using OFFEN    = regbits< type,  2,  1 >;  /**< Enable One-Shot Offset Event                           */
    using OFFRST   = regbits< type,  3,  1 >;  /**< Reset Timer On Offset Event                            */
    using PEREN    = regbits< type,  4,  1 >;  /**< Enable Periodical Event                                */
    using PINPER   = regbits< type,  7,  1 >;  /**< Enables event signal output assertion on period event  */
    using RESTART  = regbits< type,  9,  1 >;  /**< Reset Timer                                            */
    using CAPTURE  = regbits< type, 11,  1 >;  /**< Capture Timer Value                                    */
    using SLAVE    = regbits< type, 13,  1 >;  /**< Enable Timer Slave Mode                                */
  };

  /**
   * Timer Value Register
   */
  struct ATVR
  : public reg< uint32_t, base_addr + 0x404, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0 >;

    using ATIME  = regbits< type,  0, 32 >;  /**< A write sets the timer  */
  };

  /**
   * Timer Offset Register
   */
  struct ATOFF
  : public reg< uint32_t, base_addr + 0x408, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x408, rw, 0 >;

    using OFFSET  = regbits< type,  0, 32 >;  /**< Offset value for one-shot event generation  */
  };

  /**
   * Timer Period Register
   */
  struct ATPER
  : public reg< uint32_t, base_addr + 0x40c, rw, 0x3B9ACA00 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, rw, 0x3B9ACA00 >;

    using PERIOD  = regbits< type,  0, 32 >;  /**< Value for generating periodic events  */
  };

  /**
   * Timer Correction Register
   */
  struct ATCOR
  : public reg< uint32_t, base_addr + 0x410, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x410, rw, 0 >;

    using COR  = regbits< type,  0, 31 >;  /**< Correction Counter Wrap-Around Value  */
  };

  /**
   * Time-Stamping Clock Period Register
   */
  struct ATINC
  : public reg< uint32_t, base_addr + 0x414, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x414, rw, 0 >;

    using INC       = regbits< type,  0,  7 >;  /**< Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds  */
    using INC_CORR  = regbits< type,  8,  7 >;  /**< Correction Increment Value                                      */
  };

  /**
   * Timestamp of Last Transmitted Frame
   */
  struct ATSTMP
  : public reg< uint32_t, base_addr + 0x418, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x418, ro, 0 >;

    using TIMESTAMP  = regbits< type,  0, 32 >;  /**< Timestamp of the last frame transmitted by the core that had TxBD[TS] set  */
  };

  /**
   * Timer Global Status Register
   */
  struct TGSR
  : public reg< uint32_t, base_addr + 0x604, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x604, rw, 0 >;

    using TF0  = regbits< type,  0,  1 >;  /**< Copy Of Timer Flag For Channel 0  */
    using TF1  = regbits< type,  1,  1 >;  /**< Copy Of Timer Flag For Channel 1  */
    using TF2  = regbits< type,  2,  1 >;  /**< Copy Of Timer Flag For Channel 2  */
    using TF3  = regbits< type,  3,  1 >;  /**< Copy Of Timer Flag For Channel 3  */
  };

  /**
   * Timer Control Status Register
   */
  struct TCSR%s
  : public reg< uint32_t, base_addr + 0x608, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x608, rw, 0 >;

    using TDRE   = regbits< type,  0,  1 >;  /**< Timer DMA Request Enable  */
    using TMODE  = regbits< type,  2,  4 >;  /**< Timer Mode                */
    using TIE    = regbits< type,  6,  1 >;  /**< Timer Interrupt Enable    */
    using TF     = regbits< type,  7,  1 >;  /**< Timer Flag                */
  };

  /**
   * Timer Compare Capture Register
   */
  struct TCCR%s
  : public reg< uint32_t, base_addr + 0x60c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60c, rw, 0 >;

    using TCC  = regbits< type,  0, 32 >;  /**< Timer Capture Compare  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ENET_HPP_INCLUDED
