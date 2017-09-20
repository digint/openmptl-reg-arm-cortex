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
//  Import from CMSIS-SVD: "Freescale/MKV58F22.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV58F22
//  series: Kinetis_V
//  version: 1.6
//  description: MKV58F22 Freescale Microcontroller
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
 * Flex Controller Area Network module
 */
struct CAN0
{
  static constexpr reg_addr_t base_addr = 0x40024000;

  /**
   * Module Configuration Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0, rw, 0xD890000F >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xD890000F >;

    using MAXMB    = regbits< type,  0,  7 >;  /**< Number Of The Last Message Buffer       */
    using IDAM     = regbits< type,  8,  2 >;  /**< ID Acceptance Mode                      */
    using AEN      = regbits< type, 12,  1 >;  /**< Abort Enable                            */
    using LPRIOEN  = regbits< type, 13,  1 >;  /**< Local Priority Enable                   */
    using DMA      = regbits< type, 15,  1 >;  /**< DMA Enable                              */
    using IRMQ     = regbits< type, 16,  1 >;  /**< Individual Rx Masking And Queue Enable  */
    using SRXDIS   = regbits< type, 17,  1 >;  /**< Self Reception Disable                  */
    using DOZE     = regbits< type, 18,  1 >;  /**< Doze Mode Enable                        */
    using WAKSRC   = regbits< type, 19,  1 >;  /**< Wake Up Source                          */
    using LPMACK   = regbits< type, 20,  1 >;  /**< Low-Power Mode Acknowledge              */
    using WRNEN    = regbits< type, 21,  1 >;  /**< Warning Interrupt Enable                */
    using SLFWAK   = regbits< type, 22,  1 >;  /**< Self Wake Up                            */
    using SUPV     = regbits< type, 23,  1 >;  /**< Supervisor Mode                         */
    using FRZACK   = regbits< type, 24,  1 >;  /**< Freeze Mode Acknowledge                 */
    using SOFTRST  = regbits< type, 25,  1 >;  /**< Soft Reset                              */
    using WAKMSK   = regbits< type, 26,  1 >;  /**< Wake Up Interrupt Mask                  */
    using NOTRDY   = regbits< type, 27,  1 >;  /**< FlexCAN Not Ready                       */
    using HALT     = regbits< type, 28,  1 >;  /**< Halt FlexCAN                            */
    using RFEN     = regbits< type, 29,  1 >;  /**< Rx FIFO Enable                          */
    using FRZ      = regbits< type, 30,  1 >;  /**< Freeze Enable                           */
    using MDIS     = regbits< type, 31,  1 >;  /**< Module Disable                          */
  };

  /**
   * Control 1 register
   */
  struct CTRL1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using PROPSEG  = regbits< type,  0,  3 >;  /**< Propagation Segment              */
    using LOM      = regbits< type,  3,  1 >;  /**< Listen-Only Mode                 */
    using LBUF     = regbits< type,  4,  1 >;  /**< Lowest Buffer Transmitted First  */
    using TSYN     = regbits< type,  5,  1 >;  /**< Timer Sync                       */
    using BOFFREC  = regbits< type,  6,  1 >;  /**< Bus Off Recovery                 */
    using SMP      = regbits< type,  7,  1 >;  /**< CAN Bit Sampling                 */
    using RWRNMSK  = regbits< type, 10,  1 >;  /**< Rx Warning Interrupt Mask        */
    using TWRNMSK  = regbits< type, 11,  1 >;  /**< Tx Warning Interrupt Mask        */
    using LPB      = regbits< type, 12,  1 >;  /**< Loop Back Mode                   */
    using CLKSRC   = regbits< type, 13,  1 >;  /**< CAN Engine Clock Source          */
    using ERRMSK   = regbits< type, 14,  1 >;  /**< Error Interrupt Mask             */
    using BOFFMSK  = regbits< type, 15,  1 >;  /**< Bus Off Interrupt Mask           */
    using PSEG2    = regbits< type, 16,  3 >;  /**< Phase Segment 2                  */
    using PSEG1    = regbits< type, 19,  3 >;  /**< Phase Segment 1                  */
    using RJW      = regbits< type, 22,  2 >;  /**< Resync Jump Width                */
    using PRESDIV  = regbits< type, 24,  8 >;  /**< Prescaler Division Factor        */
  };

  /**
   * Free Running Timer
   */
  struct TIMER
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    // fixme: Field name equals parent register name: TIMER
    using TIMER_ = regbits< type,  0, 16 >;  /**< Timer Value  */
  };

  /**
   * Rx Mailboxes Global Mask Register
   */
  struct RXMGMASK
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using MG  = regbits< type,  0, 32 >;  /**< Rx Mailboxes Global Mask Bits  */
  };

  /**
   * Rx 14 Mask register
   */
  struct RX14MASK
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using RX14M  = regbits< type,  0, 32 >;  /**< Rx Buffer 14 Mask Bits  */
  };

  /**
   * Rx 15 Mask register
   */
  struct RX15MASK
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using RX15M  = regbits< type,  0, 32 >;  /**< Rx Buffer 15 Mask Bits  */
  };

  /**
   * Error Counter
   */
  struct ECR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using TXERRCNT  = regbits< type,  0,  8 >;  /**< Transmit Error Counter  */
    using RXERRCNT  = regbits< type,  8,  8 >;  /**< Receive Error Counter   */
  };

  /**
   * Error and Status 1 register
   */
  struct ESR1
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using WAKINT       = regbits< type,  0,  1 >;  /**< Wake-Up Interrupt                                 */
    using ERRINT       = regbits< type,  1,  1 >;  /**< Error Interrupt                                   */
    using BOFFINT      = regbits< type,  2,  1 >;  /**< Bus Off Interrupt                                 */
    using RX           = regbits< type,  3,  1 >;  /**< FlexCAN In Reception                              */
    using FLTCONF      = regbits< type,  4,  2 >;  /**< Fault Confinement State                           */
    using TX           = regbits< type,  6,  1 >;  /**< FlexCAN In Transmission                           */
    using IDLE         = regbits< type,  7,  1 >;  /**< This bit indicates when CAN bus is in IDLE state  */
    using RXWRN        = regbits< type,  8,  1 >;  /**< Rx Error Warning                                  */
    using TXWRN        = regbits< type,  9,  1 >;  /**< TX Error Warning                                  */
    using STFERR       = regbits< type, 10,  1 >;  /**< Stuffing Error                                    */
    using FRMERR       = regbits< type, 11,  1 >;  /**< Form Error                                        */
    using CRCERR       = regbits< type, 12,  1 >;  /**< Cyclic Redundancy Check Error                     */
    using ACKERR       = regbits< type, 13,  1 >;  /**< Acknowledge Error                                 */
    using BIT0ERR      = regbits< type, 14,  1 >;  /**< Bit0 Error                                        */
    using BIT1ERR      = regbits< type, 15,  1 >;  /**< Bit1 Error                                        */
    using RWRNINT      = regbits< type, 16,  1 >;  /**< Rx Warning Interrupt Flag                         */
    using TWRNINT      = regbits< type, 17,  1 >;  /**< Tx Warning Interrupt Flag                         */
    using SYNCH        = regbits< type, 18,  1 >;  /**< CAN Synchronization Status                        */
    using BOFFDONEINT  = regbits< type, 19,  1 >;  /**< Bus Off Done Interrupt                            */
    using ERROVR       = regbits< type, 21,  1 >;  /**< Error Overrun bit                                 */
  };

  /**
   * Interrupt Masks 1 register
   */
  struct IMASK1
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using BUF31TO0M  = regbits< type,  0, 32 >;  /**< Buffer MB i Mask  */
  };

  /**
   * Interrupt Flags 1 register
   */
  struct IFLAG1
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using BUF0I      = regbits< type,  0,  1 >;  /**< Buffer MB0 Interrupt Or Clear FIFO bit                 */
    using BUF4TO1I   = regbits< type,  1,  4 >;  /**< Buffer MB i Interrupt Or "reserved"                    */
    using BUF5I      = regbits< type,  5,  1 >;  /**< Buffer MB5 Interrupt Or "Frames available in Rx FIFO"  */
    using BUF6I      = regbits< type,  6,  1 >;  /**< Buffer MB6 Interrupt Or "Rx FIFO Warning"              */
    using BUF7I      = regbits< type,  7,  1 >;  /**< Buffer MB7 Interrupt Or "Rx FIFO Overflow"             */
    using BUF31TO8I  = regbits< type,  8, 24 >;  /**< Buffer MBi Interrupt                                   */
  };

  /**
   * Control 2 register
   */
  struct CTRL2
  : public reg< uint32_t, base_addr + 0x34, rw, 0xB00000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0xB00000 >;

    using EACEN        = regbits< type, 16,  1 >;  /**< Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes  */
    using RRS          = regbits< type, 17,  1 >;  /**< Remote Request Storing                                             */
    using MRP          = regbits< type, 18,  1 >;  /**< Mailboxes Reception Priority                                       */
    using TASD         = regbits< type, 19,  5 >;  /**< Tx Arbitration Start Delay                                         */
    using RFFN         = regbits< type, 24,  4 >;  /**< Number Of Rx FIFO Filters                                          */
    using BOFFDONEMSK  = regbits< type, 30,  1 >;  /**< Bus Off Done Interrupt Mask                                        */
  };

  /**
   * Error and Status 2 register
   */
  struct ESR2
  : public reg< uint32_t, base_addr + 0x38, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0 >;

    using IMB   = regbits< type, 13,  1 >;  /**< Inactive Mailbox            */
    using VPS   = regbits< type, 14,  1 >;  /**< Valid Priority Status       */
    using LPTM  = regbits< type, 16,  7 >;  /**< Lowest Priority Tx Mailbox  */
  };

  /**
   * CRC Register
   */
  struct CRCR
  : public reg< uint32_t, base_addr + 0x44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0 >;

    using TXCRC  = regbits< type,  0, 15 >;  /**< Transmitted CRC value  */
    using MBCRC  = regbits< type, 16,  7 >;  /**< CRC Mailbox            */
  };

  /**
   * Rx FIFO Global Mask register
   */
  struct RXFGMASK
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using FGM  = regbits< type,  0, 32 >;  /**< Rx FIFO Global Mask Bits  */
  };

  /**
   * Rx FIFO Information Register
   */
  struct RXFIR
  : public reg< uint32_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0 >;

    using IDHIT  = regbits< type,  0,  9 >;  /**< Identifier Acceptance Filter Hit Indicator  */
  };

  /**
   * CAN Bit Timing Register
   */
  struct CBT
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using EPSEG2    = regbits< type,  0,  5 >;  /**< Extended Phase Segment 2            */
    using EPSEG1    = regbits< type,  5,  5 >;  /**< Extended Phase Segment 1            */
    using EPROPSEG  = regbits< type, 10,  6 >;  /**< Extended Propagation Segment        */
    using ERJW      = regbits< type, 16,  4 >;  /**< Extended Resync Jump Width          */
    using EPRESDIV  = regbits< type, 21, 10 >;  /**< Extended Prescaler Division Factor  */
    using BTF       = regbits< type, 31,  1 >;  /**< Bit Timing Format Enable            */
  };

  /**
   * Message Buffer 0 CS Register
   */
  struct CS0
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 0 ID Register
   */
  struct ID0
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 0 WORD0 Register
   */
  struct WORD00
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 0 WORD1 Register
   */
  struct WORD10
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 1 CS Register
   */
  struct CS1
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 1 ID Register
   */
  struct ID1
  : public reg< uint32_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 1 WORD0 Register
   */
  struct WORD01
  : public reg< uint32_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 1 WORD1 Register
   */
  struct WORD11
  : public reg< uint32_t, base_addr + 0x9c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 2 CS Register
   */
  struct CS2
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 2 ID Register
   */
  struct ID2
  : public reg< uint32_t, base_addr + 0xa4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 2 WORD0 Register
   */
  struct WORD02
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 2 WORD1 Register
   */
  struct WORD12
  : public reg< uint32_t, base_addr + 0xac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 3 CS Register
   */
  struct CS3
  : public reg< uint32_t, base_addr + 0xb0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 3 ID Register
   */
  struct ID3
  : public reg< uint32_t, base_addr + 0xb4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 3 WORD0 Register
   */
  struct WORD03
  : public reg< uint32_t, base_addr + 0xb8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 3 WORD1 Register
   */
  struct WORD13
  : public reg< uint32_t, base_addr + 0xbc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 4 CS Register
   */
  struct CS4
  : public reg< uint32_t, base_addr + 0xc0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 4 ID Register
   */
  struct ID4
  : public reg< uint32_t, base_addr + 0xc4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 4 WORD0 Register
   */
  struct WORD04
  : public reg< uint32_t, base_addr + 0xc8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 4 WORD1 Register
   */
  struct WORD14
  : public reg< uint32_t, base_addr + 0xcc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 5 CS Register
   */
  struct CS5
  : public reg< uint32_t, base_addr + 0xd0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 5 ID Register
   */
  struct ID5
  : public reg< uint32_t, base_addr + 0xd4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 5 WORD0 Register
   */
  struct WORD05
  : public reg< uint32_t, base_addr + 0xd8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 5 WORD1 Register
   */
  struct WORD15
  : public reg< uint32_t, base_addr + 0xdc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xdc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 6 CS Register
   */
  struct CS6
  : public reg< uint32_t, base_addr + 0xe0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 6 ID Register
   */
  struct ID6
  : public reg< uint32_t, base_addr + 0xe4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 6 WORD0 Register
   */
  struct WORD06
  : public reg< uint32_t, base_addr + 0xe8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 6 WORD1 Register
   */
  struct WORD16
  : public reg< uint32_t, base_addr + 0xec, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xec, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 7 CS Register
   */
  struct CS7
  : public reg< uint32_t, base_addr + 0xf0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 7 ID Register
   */
  struct ID7
  : public reg< uint32_t, base_addr + 0xf4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 7 WORD0 Register
   */
  struct WORD07
  : public reg< uint32_t, base_addr + 0xf8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 7 WORD1 Register
   */
  struct WORD17
  : public reg< uint32_t, base_addr + 0xfc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 8 CS Register
   */
  struct CS8
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 8 ID Register
   */
  struct ID8
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 8 WORD0 Register
   */
  struct WORD08
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 8 WORD1 Register
   */
  struct WORD18
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 9 CS Register
   */
  struct CS9
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 9 ID Register
   */
  struct ID9
  : public reg< uint32_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 9 WORD0 Register
   */
  struct WORD09
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 9 WORD1 Register
   */
  struct WORD19
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 10 CS Register
   */
  struct CS10
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 10 ID Register
   */
  struct ID10
  : public reg< uint32_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 10 WORD0 Register
   */
  struct WORD010
  : public reg< uint32_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 10 WORD1 Register
   */
  struct WORD110
  : public reg< uint32_t, base_addr + 0x12c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 11 CS Register
   */
  struct CS11
  : public reg< uint32_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 11 ID Register
   */
  struct ID11
  : public reg< uint32_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 11 WORD0 Register
   */
  struct WORD011
  : public reg< uint32_t, base_addr + 0x138, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x138, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 11 WORD1 Register
   */
  struct WORD111
  : public reg< uint32_t, base_addr + 0x13c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x13c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 12 CS Register
   */
  struct CS12
  : public reg< uint32_t, base_addr + 0x140, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 12 ID Register
   */
  struct ID12
  : public reg< uint32_t, base_addr + 0x144, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x144, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 12 WORD0 Register
   */
  struct WORD012
  : public reg< uint32_t, base_addr + 0x148, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x148, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 12 WORD1 Register
   */
  struct WORD112
  : public reg< uint32_t, base_addr + 0x14c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 13 CS Register
   */
  struct CS13
  : public reg< uint32_t, base_addr + 0x150, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x150, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 13 ID Register
   */
  struct ID13
  : public reg< uint32_t, base_addr + 0x154, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 13 WORD0 Register
   */
  struct WORD013
  : public reg< uint32_t, base_addr + 0x158, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x158, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 13 WORD1 Register
   */
  struct WORD113
  : public reg< uint32_t, base_addr + 0x15c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x15c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 14 CS Register
   */
  struct CS14
  : public reg< uint32_t, base_addr + 0x160, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x160, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 14 ID Register
   */
  struct ID14
  : public reg< uint32_t, base_addr + 0x164, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x164, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 14 WORD0 Register
   */
  struct WORD014
  : public reg< uint32_t, base_addr + 0x168, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x168, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 14 WORD1 Register
   */
  struct WORD114
  : public reg< uint32_t, base_addr + 0x16c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x16c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 15 CS Register
   */
  struct CS15
  : public reg< uint32_t, base_addr + 0x170, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x170, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
    using ESI         = regbits< type, 29,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using BRS         = regbits< type, 30,  1 >;  /**< Reserved                                                                                                                                                                                              */
    using EDL         = regbits< type, 31,  1 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 15 ID Register
   */
  struct ID15
  : public reg< uint32_t, base_addr + 0x174, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x174, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 15 WORD0 Register
   */
  struct WORD015
  : public reg< uint32_t, base_addr + 0x178, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x178, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 15 WORD1 Register
   */
  struct WORD115
  : public reg< uint32_t, base_addr + 0x17c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x17c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Rx Individual Mask Registers
   */
  struct RXIMR%s
  : public reg< uint32_t, base_addr + 0x880, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x880, rw, 0 >;

    using MI  = regbits< type,  0, 32 >;  /**< Individual Mask Bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CAN0_HPP_INCLUDED
