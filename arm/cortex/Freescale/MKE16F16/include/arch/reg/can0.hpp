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
//  Import from CMSIS-SVD: "Freescale/MKE16F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE16F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE16F16 Freescale Microcontroller
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
    using PNET_EN  = regbits< type, 14,  1 >;  /**< Pretended Networking Enable             */
    using DMA      = regbits< type, 15,  1 >;  /**< DMA Enable                              */
    using IRMQ     = regbits< type, 16,  1 >;  /**< Individual Rx Masking And Queue Enable  */
    using SRXDIS   = regbits< type, 17,  1 >;  /**< Self Reception Disable                  */
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

    using EDFLTDIS     = regbits< type, 11,  1 >;  /**< Edge Filter Disable                                                */
    using STFCNTEN     = regbits< type, 12,  1 >;  /**< Stuff Count Enable                                                 */
    using PREXCEN      = regbits< type, 14,  1 >;  /**< Protocol Exception Enable                                          */
    using TIMER_SRC    = regbits< type, 15,  1 >;  /**< Timer Source                                                       */
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
    using ERJW      = regbits< type, 16,  5 >;  /**< Extended Resync Jump Width          */
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
   * Message Buffer 16 CS Register
   */
  struct CS16
  : public reg< uint32_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 16 ID Register
   */
  struct ID16
  : public reg< uint32_t, base_addr + 0x184, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 16 WORD0 Register
   */
  struct WORD016
  : public reg< uint32_t, base_addr + 0x188, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 16 WORD1 Register
   */
  struct WORD116
  : public reg< uint32_t, base_addr + 0x18c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 17 CS Register
   */
  struct CS17
  : public reg< uint32_t, base_addr + 0x190, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 17 ID Register
   */
  struct ID17
  : public reg< uint32_t, base_addr + 0x194, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x194, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 17 WORD0 Register
   */
  struct WORD017
  : public reg< uint32_t, base_addr + 0x198, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x198, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 17 WORD1 Register
   */
  struct WORD117
  : public reg< uint32_t, base_addr + 0x19c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x19c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 18 CS Register
   */
  struct CS18
  : public reg< uint32_t, base_addr + 0x1a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 18 ID Register
   */
  struct ID18
  : public reg< uint32_t, base_addr + 0x1a4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 18 WORD0 Register
   */
  struct WORD018
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 18 WORD1 Register
   */
  struct WORD118
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 19 CS Register
   */
  struct CS19
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 19 ID Register
   */
  struct ID19
  : public reg< uint32_t, base_addr + 0x1b4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 19 WORD0 Register
   */
  struct WORD019
  : public reg< uint32_t, base_addr + 0x1b8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 19 WORD1 Register
   */
  struct WORD119
  : public reg< uint32_t, base_addr + 0x1bc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1bc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 20 CS Register
   */
  struct CS20
  : public reg< uint32_t, base_addr + 0x1c0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 20 ID Register
   */
  struct ID20
  : public reg< uint32_t, base_addr + 0x1c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 20 WORD0 Register
   */
  struct WORD020
  : public reg< uint32_t, base_addr + 0x1c8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 20 WORD1 Register
   */
  struct WORD120
  : public reg< uint32_t, base_addr + 0x1cc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1cc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 21 CS Register
   */
  struct CS21
  : public reg< uint32_t, base_addr + 0x1d0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1d0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 21 ID Register
   */
  struct ID21
  : public reg< uint32_t, base_addr + 0x1d4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1d4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 21 WORD0 Register
   */
  struct WORD021
  : public reg< uint32_t, base_addr + 0x1d8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1d8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 21 WORD1 Register
   */
  struct WORD121
  : public reg< uint32_t, base_addr + 0x1dc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1dc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 22 CS Register
   */
  struct CS22
  : public reg< uint32_t, base_addr + 0x1e0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1e0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 22 ID Register
   */
  struct ID22
  : public reg< uint32_t, base_addr + 0x1e4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1e4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 22 WORD0 Register
   */
  struct WORD022
  : public reg< uint32_t, base_addr + 0x1e8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1e8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 22 WORD1 Register
   */
  struct WORD122
  : public reg< uint32_t, base_addr + 0x1ec, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1ec, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 23 CS Register
   */
  struct CS23
  : public reg< uint32_t, base_addr + 0x1f0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1f0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 23 ID Register
   */
  struct ID23
  : public reg< uint32_t, base_addr + 0x1f4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1f4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 23 WORD0 Register
   */
  struct WORD023
  : public reg< uint32_t, base_addr + 0x1f8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1f8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 23 WORD1 Register
   */
  struct WORD123
  : public reg< uint32_t, base_addr + 0x1fc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1fc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 24 CS Register
   */
  struct CS24
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 24 ID Register
   */
  struct ID24
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 24 WORD0 Register
   */
  struct WORD024
  : public reg< uint32_t, base_addr + 0x208, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 24 WORD1 Register
   */
  struct WORD124
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 25 CS Register
   */
  struct CS25
  : public reg< uint32_t, base_addr + 0x210, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x210, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 25 ID Register
   */
  struct ID25
  : public reg< uint32_t, base_addr + 0x214, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x214, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 25 WORD0 Register
   */
  struct WORD025
  : public reg< uint32_t, base_addr + 0x218, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x218, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 25 WORD1 Register
   */
  struct WORD125
  : public reg< uint32_t, base_addr + 0x21c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x21c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 26 CS Register
   */
  struct CS26
  : public reg< uint32_t, base_addr + 0x220, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x220, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 26 ID Register
   */
  struct ID26
  : public reg< uint32_t, base_addr + 0x224, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x224, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 26 WORD0 Register
   */
  struct WORD026
  : public reg< uint32_t, base_addr + 0x228, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x228, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 26 WORD1 Register
   */
  struct WORD126
  : public reg< uint32_t, base_addr + 0x22c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x22c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 27 CS Register
   */
  struct CS27
  : public reg< uint32_t, base_addr + 0x230, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x230, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 27 ID Register
   */
  struct ID27
  : public reg< uint32_t, base_addr + 0x234, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x234, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 27 WORD0 Register
   */
  struct WORD027
  : public reg< uint32_t, base_addr + 0x238, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x238, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 27 WORD1 Register
   */
  struct WORD127
  : public reg< uint32_t, base_addr + 0x23c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x23c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 28 CS Register
   */
  struct CS28
  : public reg< uint32_t, base_addr + 0x240, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x240, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 28 ID Register
   */
  struct ID28
  : public reg< uint32_t, base_addr + 0x244, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x244, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 28 WORD0 Register
   */
  struct WORD028
  : public reg< uint32_t, base_addr + 0x248, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x248, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 28 WORD1 Register
   */
  struct WORD128
  : public reg< uint32_t, base_addr + 0x24c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 29 CS Register
   */
  struct CS29
  : public reg< uint32_t, base_addr + 0x250, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x250, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 29 ID Register
   */
  struct ID29
  : public reg< uint32_t, base_addr + 0x254, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x254, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 29 WORD0 Register
   */
  struct WORD029
  : public reg< uint32_t, base_addr + 0x258, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x258, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 29 WORD1 Register
   */
  struct WORD129
  : public reg< uint32_t, base_addr + 0x25c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x25c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 30 CS Register
   */
  struct CS30
  : public reg< uint32_t, base_addr + 0x260, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x260, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 30 ID Register
   */
  struct ID30
  : public reg< uint32_t, base_addr + 0x264, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x264, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 30 WORD0 Register
   */
  struct WORD030
  : public reg< uint32_t, base_addr + 0x268, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x268, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 30 WORD1 Register
   */
  struct WORD130
  : public reg< uint32_t, base_addr + 0x26c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x26c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 31 CS Register
   */
  struct CS31
  : public reg< uint32_t, base_addr + 0x270, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x270, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 31 ID Register
   */
  struct ID31
  : public reg< uint32_t, base_addr + 0x274, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x274, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 31 WORD0 Register
   */
  struct WORD031
  : public reg< uint32_t, base_addr + 0x278, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x278, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 31 WORD1 Register
   */
  struct WORD131
  : public reg< uint32_t, base_addr + 0x27c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x27c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 32 CS Register
   */
  struct CS32
  : public reg< uint32_t, base_addr + 0x280, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x280, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 32 ID Register
   */
  struct ID32
  : public reg< uint32_t, base_addr + 0x284, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x284, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 32 WORD0 Register
   */
  struct WORD032
  : public reg< uint32_t, base_addr + 0x288, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x288, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 32 WORD1 Register
   */
  struct WORD132
  : public reg< uint32_t, base_addr + 0x28c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 33 CS Register
   */
  struct CS33
  : public reg< uint32_t, base_addr + 0x290, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x290, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 33 ID Register
   */
  struct ID33
  : public reg< uint32_t, base_addr + 0x294, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x294, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 33 WORD0 Register
   */
  struct WORD033
  : public reg< uint32_t, base_addr + 0x298, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x298, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 33 WORD1 Register
   */
  struct WORD133
  : public reg< uint32_t, base_addr + 0x29c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x29c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 34 CS Register
   */
  struct CS34
  : public reg< uint32_t, base_addr + 0x2a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 34 ID Register
   */
  struct ID34
  : public reg< uint32_t, base_addr + 0x2a4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 34 WORD0 Register
   */
  struct WORD034
  : public reg< uint32_t, base_addr + 0x2a8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 34 WORD1 Register
   */
  struct WORD134
  : public reg< uint32_t, base_addr + 0x2ac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2ac, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 35 CS Register
   */
  struct CS35
  : public reg< uint32_t, base_addr + 0x2b0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 35 ID Register
   */
  struct ID35
  : public reg< uint32_t, base_addr + 0x2b4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 35 WORD0 Register
   */
  struct WORD035
  : public reg< uint32_t, base_addr + 0x2b8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 35 WORD1 Register
   */
  struct WORD135
  : public reg< uint32_t, base_addr + 0x2bc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2bc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 36 CS Register
   */
  struct CS36
  : public reg< uint32_t, base_addr + 0x2c0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 36 ID Register
   */
  struct ID36
  : public reg< uint32_t, base_addr + 0x2c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 36 WORD0 Register
   */
  struct WORD036
  : public reg< uint32_t, base_addr + 0x2c8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 36 WORD1 Register
   */
  struct WORD136
  : public reg< uint32_t, base_addr + 0x2cc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2cc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 37 CS Register
   */
  struct CS37
  : public reg< uint32_t, base_addr + 0x2d0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 37 ID Register
   */
  struct ID37
  : public reg< uint32_t, base_addr + 0x2d4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 37 WORD0 Register
   */
  struct WORD037
  : public reg< uint32_t, base_addr + 0x2d8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 37 WORD1 Register
   */
  struct WORD137
  : public reg< uint32_t, base_addr + 0x2dc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2dc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 38 CS Register
   */
  struct CS38
  : public reg< uint32_t, base_addr + 0x2e0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 38 ID Register
   */
  struct ID38
  : public reg< uint32_t, base_addr + 0x2e4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 38 WORD0 Register
   */
  struct WORD038
  : public reg< uint32_t, base_addr + 0x2e8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 38 WORD1 Register
   */
  struct WORD138
  : public reg< uint32_t, base_addr + 0x2ec, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2ec, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 39 CS Register
   */
  struct CS39
  : public reg< uint32_t, base_addr + 0x2f0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2f0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 39 ID Register
   */
  struct ID39
  : public reg< uint32_t, base_addr + 0x2f4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2f4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 39 WORD0 Register
   */
  struct WORD039
  : public reg< uint32_t, base_addr + 0x2f8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2f8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 39 WORD1 Register
   */
  struct WORD139
  : public reg< uint32_t, base_addr + 0x2fc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2fc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 40 CS Register
   */
  struct CS40
  : public reg< uint32_t, base_addr + 0x300, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 40 ID Register
   */
  struct ID40
  : public reg< uint32_t, base_addr + 0x304, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 40 WORD0 Register
   */
  struct WORD040
  : public reg< uint32_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 40 WORD1 Register
   */
  struct WORD140
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 41 CS Register
   */
  struct CS41
  : public reg< uint32_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 41 ID Register
   */
  struct ID41
  : public reg< uint32_t, base_addr + 0x314, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 41 WORD0 Register
   */
  struct WORD041
  : public reg< uint32_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 41 WORD1 Register
   */
  struct WORD141
  : public reg< uint32_t, base_addr + 0x31c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 42 CS Register
   */
  struct CS42
  : public reg< uint32_t, base_addr + 0x320, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x320, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 42 ID Register
   */
  struct ID42
  : public reg< uint32_t, base_addr + 0x324, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x324, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 42 WORD0 Register
   */
  struct WORD042
  : public reg< uint32_t, base_addr + 0x328, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x328, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 42 WORD1 Register
   */
  struct WORD142
  : public reg< uint32_t, base_addr + 0x32c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x32c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 43 CS Register
   */
  struct CS43
  : public reg< uint32_t, base_addr + 0x330, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x330, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 43 ID Register
   */
  struct ID43
  : public reg< uint32_t, base_addr + 0x334, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x334, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 43 WORD0 Register
   */
  struct WORD043
  : public reg< uint32_t, base_addr + 0x338, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x338, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 43 WORD1 Register
   */
  struct WORD143
  : public reg< uint32_t, base_addr + 0x33c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x33c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 44 CS Register
   */
  struct CS44
  : public reg< uint32_t, base_addr + 0x340, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x340, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 44 ID Register
   */
  struct ID44
  : public reg< uint32_t, base_addr + 0x344, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x344, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 44 WORD0 Register
   */
  struct WORD044
  : public reg< uint32_t, base_addr + 0x348, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x348, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 44 WORD1 Register
   */
  struct WORD144
  : public reg< uint32_t, base_addr + 0x34c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 45 CS Register
   */
  struct CS45
  : public reg< uint32_t, base_addr + 0x350, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x350, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 45 ID Register
   */
  struct ID45
  : public reg< uint32_t, base_addr + 0x354, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x354, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 45 WORD0 Register
   */
  struct WORD045
  : public reg< uint32_t, base_addr + 0x358, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x358, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 45 WORD1 Register
   */
  struct WORD145
  : public reg< uint32_t, base_addr + 0x35c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x35c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 46 CS Register
   */
  struct CS46
  : public reg< uint32_t, base_addr + 0x360, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x360, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 46 ID Register
   */
  struct ID46
  : public reg< uint32_t, base_addr + 0x364, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x364, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 46 WORD0 Register
   */
  struct WORD046
  : public reg< uint32_t, base_addr + 0x368, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x368, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 46 WORD1 Register
   */
  struct WORD146
  : public reg< uint32_t, base_addr + 0x36c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x36c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 47 CS Register
   */
  struct CS47
  : public reg< uint32_t, base_addr + 0x370, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x370, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 47 ID Register
   */
  struct ID47
  : public reg< uint32_t, base_addr + 0x374, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x374, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 47 WORD0 Register
   */
  struct WORD047
  : public reg< uint32_t, base_addr + 0x378, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x378, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 47 WORD1 Register
   */
  struct WORD147
  : public reg< uint32_t, base_addr + 0x37c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x37c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 48 CS Register
   */
  struct CS48
  : public reg< uint32_t, base_addr + 0x380, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x380, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 48 ID Register
   */
  struct ID48
  : public reg< uint32_t, base_addr + 0x384, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x384, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 48 WORD0 Register
   */
  struct WORD048
  : public reg< uint32_t, base_addr + 0x388, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x388, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 48 WORD1 Register
   */
  struct WORD148
  : public reg< uint32_t, base_addr + 0x38c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 49 CS Register
   */
  struct CS49
  : public reg< uint32_t, base_addr + 0x390, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x390, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 49 ID Register
   */
  struct ID49
  : public reg< uint32_t, base_addr + 0x394, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x394, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 49 WORD0 Register
   */
  struct WORD049
  : public reg< uint32_t, base_addr + 0x398, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x398, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 49 WORD1 Register
   */
  struct WORD149
  : public reg< uint32_t, base_addr + 0x39c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x39c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 50 CS Register
   */
  struct CS50
  : public reg< uint32_t, base_addr + 0x3a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 50 ID Register
   */
  struct ID50
  : public reg< uint32_t, base_addr + 0x3a4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 50 WORD0 Register
   */
  struct WORD050
  : public reg< uint32_t, base_addr + 0x3a8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 50 WORD1 Register
   */
  struct WORD150
  : public reg< uint32_t, base_addr + 0x3ac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3ac, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 51 CS Register
   */
  struct CS51
  : public reg< uint32_t, base_addr + 0x3b0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3b0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 51 ID Register
   */
  struct ID51
  : public reg< uint32_t, base_addr + 0x3b4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3b4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 51 WORD0 Register
   */
  struct WORD051
  : public reg< uint32_t, base_addr + 0x3b8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3b8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 51 WORD1 Register
   */
  struct WORD151
  : public reg< uint32_t, base_addr + 0x3bc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3bc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 52 CS Register
   */
  struct CS52
  : public reg< uint32_t, base_addr + 0x3c0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 52 ID Register
   */
  struct ID52
  : public reg< uint32_t, base_addr + 0x3c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 52 WORD0 Register
   */
  struct WORD052
  : public reg< uint32_t, base_addr + 0x3c8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 52 WORD1 Register
   */
  struct WORD152
  : public reg< uint32_t, base_addr + 0x3cc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3cc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 53 CS Register
   */
  struct CS53
  : public reg< uint32_t, base_addr + 0x3d0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3d0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 53 ID Register
   */
  struct ID53
  : public reg< uint32_t, base_addr + 0x3d4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3d4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 53 WORD0 Register
   */
  struct WORD053
  : public reg< uint32_t, base_addr + 0x3d8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3d8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 53 WORD1 Register
   */
  struct WORD153
  : public reg< uint32_t, base_addr + 0x3dc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3dc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 54 CS Register
   */
  struct CS54
  : public reg< uint32_t, base_addr + 0x3e0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 54 ID Register
   */
  struct ID54
  : public reg< uint32_t, base_addr + 0x3e4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 54 WORD0 Register
   */
  struct WORD054
  : public reg< uint32_t, base_addr + 0x3e8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 54 WORD1 Register
   */
  struct WORD154
  : public reg< uint32_t, base_addr + 0x3ec, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3ec, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 55 CS Register
   */
  struct CS55
  : public reg< uint32_t, base_addr + 0x3f0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f0, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 55 ID Register
   */
  struct ID55
  : public reg< uint32_t, base_addr + 0x3f4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f4, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 55 WORD0 Register
   */
  struct WORD055
  : public reg< uint32_t, base_addr + 0x3f8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f8, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 55 WORD1 Register
   */
  struct WORD155
  : public reg< uint32_t, base_addr + 0x3fc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3fc, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 56 CS Register
   */
  struct CS56
  : public reg< uint32_t, base_addr + 0x400, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 56 ID Register
   */
  struct ID56
  : public reg< uint32_t, base_addr + 0x404, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 56 WORD0 Register
   */
  struct WORD056
  : public reg< uint32_t, base_addr + 0x408, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x408, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 56 WORD1 Register
   */
  struct WORD156
  : public reg< uint32_t, base_addr + 0x40c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 57 CS Register
   */
  struct CS57
  : public reg< uint32_t, base_addr + 0x410, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x410, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 57 ID Register
   */
  struct ID57
  : public reg< uint32_t, base_addr + 0x414, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x414, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 57 WORD0 Register
   */
  struct WORD057
  : public reg< uint32_t, base_addr + 0x418, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x418, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 57 WORD1 Register
   */
  struct WORD157
  : public reg< uint32_t, base_addr + 0x41c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x41c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 58 CS Register
   */
  struct CS58
  : public reg< uint32_t, base_addr + 0x420, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x420, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 58 ID Register
   */
  struct ID58
  : public reg< uint32_t, base_addr + 0x424, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x424, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 58 WORD0 Register
   */
  struct WORD058
  : public reg< uint32_t, base_addr + 0x428, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x428, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 58 WORD1 Register
   */
  struct WORD158
  : public reg< uint32_t, base_addr + 0x42c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x42c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 59 CS Register
   */
  struct CS59
  : public reg< uint32_t, base_addr + 0x430, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x430, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 59 ID Register
   */
  struct ID59
  : public reg< uint32_t, base_addr + 0x434, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x434, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 59 WORD0 Register
   */
  struct WORD059
  : public reg< uint32_t, base_addr + 0x438, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x438, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 59 WORD1 Register
   */
  struct WORD159
  : public reg< uint32_t, base_addr + 0x43c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x43c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 60 CS Register
   */
  struct CS60
  : public reg< uint32_t, base_addr + 0x440, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x440, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 60 ID Register
   */
  struct ID60
  : public reg< uint32_t, base_addr + 0x444, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x444, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 60 WORD0 Register
   */
  struct WORD060
  : public reg< uint32_t, base_addr + 0x448, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x448, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 60 WORD1 Register
   */
  struct WORD160
  : public reg< uint32_t, base_addr + 0x44c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 61 CS Register
   */
  struct CS61
  : public reg< uint32_t, base_addr + 0x450, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x450, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 61 ID Register
   */
  struct ID61
  : public reg< uint32_t, base_addr + 0x454, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x454, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 61 WORD0 Register
   */
  struct WORD061
  : public reg< uint32_t, base_addr + 0x458, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x458, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 61 WORD1 Register
   */
  struct WORD161
  : public reg< uint32_t, base_addr + 0x45c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x45c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 62 CS Register
   */
  struct CS62
  : public reg< uint32_t, base_addr + 0x460, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x460, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 62 ID Register
   */
  struct ID62
  : public reg< uint32_t, base_addr + 0x464, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x464, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 62 WORD0 Register
   */
  struct WORD062
  : public reg< uint32_t, base_addr + 0x468, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x468, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 62 WORD1 Register
   */
  struct WORD162
  : public reg< uint32_t, base_addr + 0x46c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x46c, rw, 0 >;

    using DATA_BYTE_7  = regbits< type,  0,  8 >;  /**< Data byte 7 of Rx/Tx frame.  */
    using DATA_BYTE_6  = regbits< type,  8,  8 >;  /**< Data byte 6 of Rx/Tx frame.  */
    using DATA_BYTE_5  = regbits< type, 16,  8 >;  /**< Data byte 5 of Rx/Tx frame.  */
    using DATA_BYTE_4  = regbits< type, 24,  8 >;  /**< Data byte 4 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 63 CS Register
   */
  struct CS63
  : public reg< uint32_t, base_addr + 0x470, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x470, rw, 0 >;

    using TIME_STAMP  = regbits< type,  0, 16 >;  /**< Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.  */
    using DLC         = regbits< type, 16,  4 >;  /**< Length of the data to be stored/transmitted.                                                                                                                                                          */
    using RTR         = regbits< type, 20,  1 >;  /**< Remote Transmission Request. One/zero for remote/data frame.                                                                                                                                          */
    using IDE         = regbits< type, 21,  1 >;  /**< ID Extended. One/zero for extended/standard format frame.                                                                                                                                             */
    using SRR         = regbits< type, 22,  1 >;  /**< Substitute Remote Request. Contains a fixed recessive bit.                                                                                                                                            */
    using CODE        = regbits< type, 24,  4 >;  /**< Reserved                                                                                                                                                                                              */
  };

  /**
   * Message Buffer 63 ID Register
   */
  struct ID63
  : public reg< uint32_t, base_addr + 0x474, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x474, rw, 0 >;

    using EXT   = regbits< type,  0, 18 >;  /**< Contains extended (LOW word) identifier of message buffer.                                                                                                                                                                     */
    using STD   = regbits< type, 18, 11 >;  /**< Contains standard/extended (HIGH word) identifier of message buffer.                                                                                                                                                           */
    using PRIO  = regbits< type, 29,  3 >;  /**< Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.  */
  };

  /**
   * Message Buffer 63 WORD0 Register
   */
  struct WORD063
  : public reg< uint32_t, base_addr + 0x478, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x478, rw, 0 >;

    using DATA_BYTE_3  = regbits< type,  0,  8 >;  /**< Data byte 3 of Rx/Tx frame.  */
    using DATA_BYTE_2  = regbits< type,  8,  8 >;  /**< Data byte 2 of Rx/Tx frame.  */
    using DATA_BYTE_1  = regbits< type, 16,  8 >;  /**< Data byte 1 of Rx/Tx frame.  */
    using DATA_BYTE_0  = regbits< type, 24,  8 >;  /**< Data byte 0 of Rx/Tx frame.  */
  };

  /**
   * Message Buffer 63 WORD1 Register
   */
  struct WORD163
  : public reg< uint32_t, base_addr + 0x47c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x47c, rw, 0 >;

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

  /**
   * Pretended Networking Control 1 Register
   */
  struct CTRL1_PN
  : public reg< uint32_t, base_addr + 0xb00, rw, 0x100 >
  {
    using type = reg< uint32_t, base_addr + 0xb00, rw, 0x100 >;

    using FCS       = regbits< type,  0,  2 >;  /**< Filtering Combination Selection                          */
    using IDFS      = regbits< type,  2,  2 >;  /**< ID Filtering Selection                                   */
    using PLFS      = regbits< type,  4,  2 >;  /**< Payload Filtering Selection                              */
    using NMATCH    = regbits< type,  8,  8 >;  /**< Number of Messages Matching the Same Filtering Criteria  */
    using WUMF_MSK  = regbits< type, 16,  1 >;  /**< Wake Up by Match Flag Mask Bit                           */
    using WTOF_MSK  = regbits< type, 17,  1 >;  /**< Wake Up by Timeout Flag Mask Bit                         */
  };

  /**
   * Pretended Networking Control 2 Register
   */
  struct CTRL2_PN
  : public reg< uint32_t, base_addr + 0xb04, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb04, rw, 0 >;

    using MATCHTO  = regbits< type,  0, 16 >;  /**< Timeout for No Message Matching the Filtering Criteria  */
  };

  /**
   * Pretended Networking Wake Up Match Register
   */
  struct WU_MTC
  : public reg< uint32_t, base_addr + 0xb08, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb08, rw, 0 >;

    using MCOUNTER  = regbits< type,  8,  8 >;  /**< Number of Matches while in Pretended Networking  */
    using WUMF      = regbits< type, 16,  1 >;  /**< Wake Up by Match Flag Bit                        */
    using WTOF      = regbits< type, 17,  1 >;  /**< Wake Up by Timeout Flag Bit                      */
  };

  /**
   * Pretended Networking ID Filter 1 Register
   */
  struct FLT_ID1
  : public reg< uint32_t, base_addr + 0xb0c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb0c, rw, 0 >;

    // fixme: Field name equals parent register name: FLT_ID1
    using FLT_ID1_ = regbits< type,  0, 29 >;  /**< ID Filter 1 for Pretended Networking filtering  */
    using FLT_RTR  = regbits< type, 29,  1 >;  /**< Remote Transmission Request Filter              */
    using FLT_IDE  = regbits< type, 30,  1 >;  /**< ID Extended Filter                              */
  };

  /**
   * Pretended Networking DLC Filter Register
   */
  struct FLT_DLC
  : public reg< uint32_t, base_addr + 0xb10, rw, 0x8 >
  {
    using type = reg< uint32_t, base_addr + 0xb10, rw, 0x8 >;

    using FLT_DLC_HI  = regbits< type,  0,  4 >;  /**< Upper Limit for Length of Data Bytes Filter  */
    using FLT_DLC_LO  = regbits< type, 16,  4 >;  /**< Lower Limit for Length of Data Bytes Filter  */
  };

  /**
   * Pretended Networking Payload Low Filter 1 Register
   */
  struct PL1_LO
  : public reg< uint32_t, base_addr + 0xb14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb14, rw, 0 >;

    using Data_byte_3  = regbits< type,  0,  8 >;  /**< Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to the data byte 3.  */
    using Data_byte_2  = regbits< type,  8,  8 >;  /**< Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to the data byte 2.  */
    using Data_byte_1  = regbits< type, 16,  8 >;  /**< Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to the data byte 1.  */
    using Data_byte_0  = regbits< type, 24,  8 >;  /**< Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to the data byte 0.  */
  };

  /**
   * Pretended Networking Payload High Filter 1 Register
   */
  struct PL1_HI
  : public reg< uint32_t, base_addr + 0xb18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb18, rw, 0 >;

    using Data_byte_7  = regbits< type,  0,  8 >;  /**< Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to the data byte 7.  */
    using Data_byte_6  = regbits< type,  8,  8 >;  /**< Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to the data byte 6.  */
    using Data_byte_5  = regbits< type, 16,  8 >;  /**< Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to the data byte 5.  */
    using Data_byte_4  = regbits< type, 24,  8 >;  /**< Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to the data byte 4.  */
  };

  /**
   * Pretended Networking ID Filter 2 Register / ID Mask Register
   */
  struct FLT_ID2_IDMASK
  : public reg< uint32_t, base_addr + 0xb1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb1c, rw, 0 >;

    // fixme: Field name equals parent register name: FLT_ID2_IDMASK
    using FLT_ID2_IDMASK_ = regbits< type,  0, 29 >;  /**< ID Filter 2 for Pretended Networking Filtering / ID Mask Bits for Pretended Networking ID Filtering  */
    using RTR_MSK         = regbits< type, 29,  1 >;  /**< Remote Transmission Request Mask Bit                                                                 */
    using IDE_MSK         = regbits< type, 30,  1 >;  /**< ID Extended Mask Bit                                                                                 */
  };

  /**
   * Pretended Networking Payload Low Filter 2 Register / Payload Low Mask Register
   */
  struct PL2_PLMASK_LO
  : public reg< uint32_t, base_addr + 0xb20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb20, rw, 0 >;

    using Data_byte_3  = regbits< type,  0,  8 >;  /**< Payload Filter 2 low order bits / Payload Mask low order bits for Pretended Networking payload filtering corresponding to the data byte 3.  */
    using Data_byte_2  = regbits< type,  8,  8 >;  /**< Payload Filter 2 low order bits / Payload Mask low order bits for Pretended Networking payload filtering corresponding to the data byte 2.  */
    using Data_byte_1  = regbits< type, 16,  8 >;  /**< Payload Filter 2 low order bits / Payload Mask low order bits for Pretended Networking payload filtering corresponding to the data byte 1.  */
    using Data_byte_0  = regbits< type, 24,  8 >;  /**< Payload Filter 2 low order bits / Payload Mask low order bits for Pretended Networking payload filtering corresponding to the data byte 0.  */
  };

  /**
   * Pretended Networking Payload High Filter 2 low order bits / Payload High Mask Register
   */
  struct PL2_PLMASK_HI
  : public reg< uint32_t, base_addr + 0xb24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb24, rw, 0 >;

    using Data_byte_7  = regbits< type,  0,  8 >;  /**< Payload Filter 2 high order bits / Payload Mask high order bits for Pretended Networking payload filtering corresponding to the data byte 7.  */
    using Data_byte_6  = regbits< type,  8,  8 >;  /**< Payload Filter 2 high order bits / Payload Mask high order bits for Pretended Networking payload filtering corresponding to the data byte 6.  */
    using Data_byte_5  = regbits< type, 16,  8 >;  /**< Payload Filter 2 high order bits / Payload Mask high order bits for Pretended Networking payload filtering corresponding to the data byte 5.  */
    using Data_byte_4  = regbits< type, 24,  8 >;  /**< Payload Filter 2 high order bits / Payload Mask high order bits for Pretended Networking payload filtering corresponding to the data byte 4.  */
  };

  /**
   * Wake Up Message Buffer Register for C/S
   */
  struct WMB%s_CS
  : public reg< uint32_t, base_addr + 0xb40, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb40, ro, 0 >;

    using DLC  = regbits< type, 16,  4 >;  /**< Length of Data in Bytes          */
    using RTR  = regbits< type, 20,  1 >;  /**< Remote Transmission Request Bit  */
    using IDE  = regbits< type, 21,  1 >;  /**< ID Extended Bit                  */
    using SRR  = regbits< type, 22,  1 >;  /**< Substitute Remote Request        */
  };

  /**
   * Wake Up Message Buffer Register for ID
   */
  struct WMB%s_ID
  : public reg< uint32_t, base_addr + 0xb44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb44, ro, 0 >;

    using ID  = regbits< type,  0, 29 >;  /**< Received ID under Pretended Networking mode  */
  };

  /**
   * Wake Up Message Buffer Register for Data 0-3
   */
  struct WMB%s_D03
  : public reg< uint32_t, base_addr + 0xb48, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb48, ro, 0 >;

    using Data_byte_3  = regbits< type,  0,  8 >;  /**< Received payload corresponding to the data byte 3 under Pretended Networking mode  */
    using Data_byte_2  = regbits< type,  8,  8 >;  /**< Received payload corresponding to the data byte 2 under Pretended Networking mode  */
    using Data_byte_1  = regbits< type, 16,  8 >;  /**< Received payload corresponding to the data byte 1 under Pretended Networking mode  */
    using Data_byte_0  = regbits< type, 24,  8 >;  /**< Received payload corresponding to the data byte 0 under Pretended Networking mode  */
  };

  /**
   * Wake Up Message Buffer Register Data 4-7
   */
  struct WMB%s_D47
  : public reg< uint32_t, base_addr + 0xb4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb4c, ro, 0 >;

    using Data_byte_7  = regbits< type,  0,  8 >;  /**< Received payload corresponding to the data byte 7 under Pretended Networking mode  */
    using Data_byte_6  = regbits< type,  8,  8 >;  /**< Received payload corresponding to the data byte 6 under Pretended Networking mode  */
    using Data_byte_5  = regbits< type, 16,  8 >;  /**< Received payload corresponding to the data byte 5 under Pretended Networking mode  */
    using Data_byte_4  = regbits< type, 24,  8 >;  /**< Received payload corresponding to the data byte 4 under Pretended Networking mode  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CAN0_HPP_INCLUDED
