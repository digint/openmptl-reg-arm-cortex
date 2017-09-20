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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G35.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G35
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G35 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, LCD, Touchscreen, Ethernet, HS USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9G35.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HSMCI0_HPP_INCLUDED
#define ARCH_REG_HSMCI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * High Speed MultiMedia Card Interface 0
 */
struct HSMCI0
{
  static constexpr reg_addr_t base_addr = 0xf0008000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using MCIEN   = regbits< type,  0,  1 >;  /**< Multi-Media Interface Enable   */
    using MCIDIS  = regbits< type,  1,  1 >;  /**< Multi-Media Interface Disable  */
    using PWSEN   = regbits< type,  2,  1 >;  /**< Power Save Mode Enable         */
    using PWSDIS  = regbits< type,  3,  1 >;  /**< Power Save Mode Disable        */
    using SWRST   = regbits< type,  7,  1 >;  /**< Software Reset                 */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using CLKDIV   = regbits< type,  0,  8 >;  /**< Clock Divider         */
    using PWSDIV   = regbits< type,  8,  3 >;  /**< Power Saving Divider  */
    using RDPROOF  = regbits< type, 11,  1 >;  /**< Read Proof Enable     */
    using WRPROOF  = regbits< type, 12,  1 >;  /**< Write Proof Enable    */
    using FBYTE    = regbits< type, 13,  1 >;  /**< Force Byte Transfer   */
    using PADV     = regbits< type, 14,  1 >;  /**< Padding Value         */
    using CLKODD   = regbits< type, 16,  1 >;  /**< Clock divider is odd  */
  };

  /**
   * Data Timeout Register
   */
  struct DTOR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using DTOCYC  = regbits< type,  0,  4 >;  /**< Data Timeout Cycle Number  */
    using DTOMUL  = regbits< type,  4,  3 >;  /**< Data Timeout Multiplier    */
  };

  /**
   * SD/SDIO Card Register
   */
  struct SDCR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using SDCSEL  = regbits< type,  0,  2 >;  /**< SDCard/SDIO Slot       */
    using SDCBUS  = regbits< type,  6,  2 >;  /**< SDCard/SDIO Bus Width  */
  };

  /**
   * Argument Register
   */
  struct ARGR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using ARG  = regbits< type,  0, 32 >;  /**< Command Argument  */
  };

  /**
   * Command Register
   */
  struct CMDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using CMDNB     = regbits< type,  0,  6 >;  /**< Command Number                       */
    using RSPTYP    = regbits< type,  6,  2 >;  /**< Response Type                        */
    using SPCMD     = regbits< type,  8,  3 >;  /**< Special Command                      */
    using OPDCMD    = regbits< type, 11,  1 >;  /**< Open Drain Command                   */
    using MAXLAT    = regbits< type, 12,  1 >;  /**< Max Latency for Command to Response  */
    using TRCMD     = regbits< type, 16,  2 >;  /**< Transfer Command                     */
    using TRDIR     = regbits< type, 18,  1 >;  /**< Transfer Direction                   */
    using TRTYP     = regbits< type, 19,  3 >;  /**< Transfer Type                        */
    using IOSPCMD   = regbits< type, 24,  2 >;  /**< SDIO Special Command                 */
    using ATACS     = regbits< type, 26,  1 >;  /**< ATA with Command Completion Signal   */
    using BOOT_ACK  = regbits< type, 27,  1 >;  /**< Boot Operation Acknowledge.          */
  };

  /**
   * Block Register
   */
  struct BLKR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using BCNT    = regbits< type,  0, 16 >;  /**< MMC/SDIO Block Count - SDIO Byte Count  */
    using BLKLEN  = regbits< type, 16, 16 >;  /**< Data Block Length                       */
  };

  /**
   * Completion Signal Timeout Register
   */
  struct CSTOR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    using CSTOCYC  = regbits< type,  0,  4 >;  /**< Completion Signal Timeout Cycle Number  */
    using CSTOMUL  = regbits< type,  4,  3 >;  /**< Completion Signal Timeout Multiplier    */
  };

  /**
   * Response Register
   */
  struct RSPR[%s]
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RSP  = regbits< type,  0, 32 >;  /**< Response  */
  };

  /**
   * Receive Data Register
   */
  struct RDR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data to Read  */
  };

  /**
   * Transmit Data Register
   */
  struct TDR
  : public reg< uint32_t, base_addr + 0x00000034, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, wo, 0 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data to Write  */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x0000C0E5 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x0000C0E5 >;

    using CMDRDY     = regbits< type,  0,  1 >;  /**< Command Ready                        */
    using RXRDY      = regbits< type,  1,  1 >;  /**< Receiver Ready                       */
    using TXRDY      = regbits< type,  2,  1 >;  /**< Transmit Ready                       */
    using BLKE       = regbits< type,  3,  1 >;  /**< Data Block Ended                     */
    using DTIP       = regbits< type,  4,  1 >;  /**< Data Transfer in Progress            */
    using NOTBUSY    = regbits< type,  5,  1 >;  /**< HSMCI Not Busy                       */
    using SDIOIRQA   = regbits< type,  8,  1 >;  /**< SDIO Interrupt for Slot A            */
    using SDIOWAIT   = regbits< type, 12,  1 >;  /**< SDIO Read Wait Operation Status      */
    using CSRCV      = regbits< type, 13,  1 >;  /**< CE-ATA Completion Signal Received    */
    using RINDE      = regbits< type, 16,  1 >;  /**< Response Index Error                 */
    using RDIRE      = regbits< type, 17,  1 >;  /**< Response Direction Error             */
    using RCRCE      = regbits< type, 18,  1 >;  /**< Response CRC Error                   */
    using RENDE      = regbits< type, 19,  1 >;  /**< Response End Bit Error               */
    using RTOE       = regbits< type, 20,  1 >;  /**< Response Time-out Error              */
    using DCRCE      = regbits< type, 21,  1 >;  /**< Data CRC Error                       */
    using DTOE       = regbits< type, 22,  1 >;  /**< Data Time-out Error                  */
    using CSTOE      = regbits< type, 23,  1 >;  /**< Completion Signal Time-out Error     */
    using BLKOVRE    = regbits< type, 24,  1 >;  /**< DMA Block Overrun Error              */
    using DMADONE    = regbits< type, 25,  1 >;  /**< DMA Transfer done                    */
    using FIFOEMPTY  = regbits< type, 26,  1 >;  /**< FIFO empty flag                      */
    using XFRDONE    = regbits< type, 27,  1 >;  /**< Transfer Done flag                   */
    using ACKRCV     = regbits< type, 28,  1 >;  /**< Boot Operation Acknowledge Received  */
    using ACKRCVE    = regbits< type, 29,  1 >;  /**< Boot Operation Acknowledge Error     */
    using OVRE       = regbits< type, 30,  1 >;  /**< Overrun                              */
    using UNRE       = regbits< type, 31,  1 >;  /**< Underrun                             */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000044, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, wo, 0 >;

    using CMDRDY     = regbits< type,  0,  1 >;  /**< Command Ready Interrupt Enable                    */
    using RXRDY      = regbits< type,  1,  1 >;  /**< Receiver Ready Interrupt Enable                   */
    using TXRDY      = regbits< type,  2,  1 >;  /**< Transmit Ready Interrupt Enable                   */
    using BLKE       = regbits< type,  3,  1 >;  /**< Data Block Ended Interrupt Enable                 */
    using DTIP       = regbits< type,  4,  1 >;  /**< Data Transfer in Progress Interrupt Enable        */
    using NOTBUSY    = regbits< type,  5,  1 >;  /**< Data Not Busy Interrupt Enable                    */
    using SDIOIRQA   = regbits< type,  8,  1 >;  /**< SDIO Interrupt for Slot A Interrupt Enable        */
    using SDIOWAIT   = regbits< type, 12,  1 >;  /**< SDIO Read Wait Operation Status Interrupt Enable  */
    using CSRCV      = regbits< type, 13,  1 >;  /**< Completion Signal Received Interrupt Enable       */
    using RINDE      = regbits< type, 16,  1 >;  /**< Response Index Error Interrupt Enable             */
    using RDIRE      = regbits< type, 17,  1 >;  /**< Response Direction Error Interrupt Enable         */
    using RCRCE      = regbits< type, 18,  1 >;  /**< Response CRC Error Interrupt Enable               */
    using RENDE      = regbits< type, 19,  1 >;  /**< Response End Bit Error Interrupt Enable           */
    using RTOE       = regbits< type, 20,  1 >;  /**< Response Time-out Error Interrupt Enable          */
    using DCRCE      = regbits< type, 21,  1 >;  /**< Data CRC Error Interrupt Enable                   */
    using DTOE       = regbits< type, 22,  1 >;  /**< Data Time-out Error Interrupt Enable              */
    using CSTOE      = regbits< type, 23,  1 >;  /**< Completion Signal Timeout Error Interrupt Enable  */
    using BLKOVRE    = regbits< type, 24,  1 >;  /**< DMA Block Overrun Error Interrupt Enable          */
    using DMADONE    = regbits< type, 25,  1 >;  /**< DMA Transfer completed Interrupt Enable           */
    using FIFOEMPTY  = regbits< type, 26,  1 >;  /**< FIFO empty Interrupt enable                       */
    using XFRDONE    = regbits< type, 27,  1 >;  /**< Transfer Done Interrupt enable                    */
    using ACKRCV     = regbits< type, 28,  1 >;  /**< Boot Acknowledge Interrupt Enable                 */
    using ACKRCVE    = regbits< type, 29,  1 >;  /**< Boot Acknowledge Error Interrupt Enable           */
    using OVRE       = regbits< type, 30,  1 >;  /**< Overrun Interrupt Enable                          */
    using UNRE       = regbits< type, 31,  1 >;  /**< Underrun Interrupt Enable                         */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000048, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, wo, 0 >;

    using CMDRDY     = regbits< type,  0,  1 >;  /**< Command Ready Interrupt Disable                     */
    using RXRDY      = regbits< type,  1,  1 >;  /**< Receiver Ready Interrupt Disable                    */
    using TXRDY      = regbits< type,  2,  1 >;  /**< Transmit Ready Interrupt Disable                    */
    using BLKE       = regbits< type,  3,  1 >;  /**< Data Block Ended Interrupt Disable                  */
    using DTIP       = regbits< type,  4,  1 >;  /**< Data Transfer in Progress Interrupt Disable         */
    using NOTBUSY    = regbits< type,  5,  1 >;  /**< Data Not Busy Interrupt Disable                     */
    using SDIOIRQA   = regbits< type,  8,  1 >;  /**< SDIO Interrupt for Slot A Interrupt Disable         */
    using SDIOWAIT   = regbits< type, 12,  1 >;  /**< SDIO Read Wait Operation Status Interrupt Disable   */
    using CSRCV      = regbits< type, 13,  1 >;  /**< Completion Signal received interrupt Disable        */
    using RINDE      = regbits< type, 16,  1 >;  /**< Response Index Error Interrupt Disable              */
    using RDIRE      = regbits< type, 17,  1 >;  /**< Response Direction Error Interrupt Disable          */
    using RCRCE      = regbits< type, 18,  1 >;  /**< Response CRC Error Interrupt Disable                */
    using RENDE      = regbits< type, 19,  1 >;  /**< Response End Bit Error Interrupt Disable            */
    using RTOE       = regbits< type, 20,  1 >;  /**< Response Time-out Error Interrupt Disable           */
    using DCRCE      = regbits< type, 21,  1 >;  /**< Data CRC Error Interrupt Disable                    */
    using DTOE       = regbits< type, 22,  1 >;  /**< Data Time-out Error Interrupt Disable               */
    using CSTOE      = regbits< type, 23,  1 >;  /**< Completion Signal Time out Error Interrupt Disable  */
    using BLKOVRE    = regbits< type, 24,  1 >;  /**< DMA Block Overrun Error Interrupt Disable           */
    using DMADONE    = regbits< type, 25,  1 >;  /**< DMA Transfer completed Interrupt Disable            */
    using FIFOEMPTY  = regbits< type, 26,  1 >;  /**< FIFO empty Interrupt Disable                        */
    using XFRDONE    = regbits< type, 27,  1 >;  /**< Transfer Done Interrupt Disable                     */
    using ACKRCV     = regbits< type, 28,  1 >;  /**< Boot Acknowledge Interrupt Disable                  */
    using ACKRCVE    = regbits< type, 29,  1 >;  /**< Boot Acknowledge Error Interrupt Disable            */
    using OVRE       = regbits< type, 30,  1 >;  /**< Overrun Interrupt Disable                           */
    using UNRE       = regbits< type, 31,  1 >;  /**< Underrun Interrupt Disable                          */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >;

    using CMDRDY     = regbits< type,  0,  1 >;  /**< Command Ready Interrupt Mask                        */
    using RXRDY      = regbits< type,  1,  1 >;  /**< Receiver Ready Interrupt Mask                       */
    using TXRDY      = regbits< type,  2,  1 >;  /**< Transmit Ready Interrupt Mask                       */
    using BLKE       = regbits< type,  3,  1 >;  /**< Data Block Ended Interrupt Mask                     */
    using DTIP       = regbits< type,  4,  1 >;  /**< Data Transfer in Progress Interrupt Mask            */
    using NOTBUSY    = regbits< type,  5,  1 >;  /**< Data Not Busy Interrupt Mask                        */
    using SDIOIRQA   = regbits< type,  8,  1 >;  /**< SDIO Interrupt for Slot A Interrupt Mask            */
    using SDIOWAIT   = regbits< type, 12,  1 >;  /**< SDIO Read Wait Operation Status Interrupt Mask      */
    using CSRCV      = regbits< type, 13,  1 >;  /**< Completion Signal Received Interrupt Mask           */
    using RINDE      = regbits< type, 16,  1 >;  /**< Response Index Error Interrupt Mask                 */
    using RDIRE      = regbits< type, 17,  1 >;  /**< Response Direction Error Interrupt Mask             */
    using RCRCE      = regbits< type, 18,  1 >;  /**< Response CRC Error Interrupt Mask                   */
    using RENDE      = regbits< type, 19,  1 >;  /**< Response End Bit Error Interrupt Mask               */
    using RTOE       = regbits< type, 20,  1 >;  /**< Response Time-out Error Interrupt Mask              */
    using DCRCE      = regbits< type, 21,  1 >;  /**< Data CRC Error Interrupt Mask                       */
    using DTOE       = regbits< type, 22,  1 >;  /**< Data Time-out Error Interrupt Mask                  */
    using CSTOE      = regbits< type, 23,  1 >;  /**< Completion Signal Time-out Error Interrupt Mask     */
    using BLKOVRE    = regbits< type, 24,  1 >;  /**< DMA Block Overrun Error Interrupt Mask              */
    using DMADONE    = regbits< type, 25,  1 >;  /**< DMA Transfer Completed Interrupt Mask               */
    using FIFOEMPTY  = regbits< type, 26,  1 >;  /**< FIFO Empty Interrupt Mask                           */
    using XFRDONE    = regbits< type, 27,  1 >;  /**< Transfer Done Interrupt Mask                        */
    using ACKRCV     = regbits< type, 28,  1 >;  /**< Boot Operation Acknowledge Received Interrupt Mask  */
    using ACKRCVE    = regbits< type, 29,  1 >;  /**< Boot Operation Acknowledge Error Interrupt Mask     */
    using OVRE       = regbits< type, 30,  1 >;  /**< Overrun Interrupt Mask                              */
    using UNRE       = regbits< type, 31,  1 >;  /**< Underrun Interrupt Mask                             */
  };

  /**
   * DMA Configuration Register
   */
  struct DMA
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0x00000000 >;

    using OFFSET   = regbits< type,  0,  2 >;  /**< DMA Write Buffer Offset                */
    using CHKSIZE  = regbits< type,  4,  2 >;  /**< DMA Channel Read and Write Chunk Size  */
    using DMAEN    = regbits< type,  8,  1 >;  /**< DMA Hardware Handshaking Enable        */
    using ROPT     = regbits< type, 12,  1 >;  /**< Read Optimization with padding         */
  };

  /**
   * Configuration Register
   */
  struct CFG
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >;

    using FIFOMODE  = regbits< type,  0,  1 >;  /**< HSMCI Internal FIFO control mode    */
    using FERRCTRL  = regbits< type,  4,  1 >;  /**< Flow Error flag reset control mode  */
    using HSMODE    = regbits< type,  8,  1 >;  /**< High Speed Mode                     */
    using LSYNC     = regbits< type, 12,  1 >;  /**< Synchronize on the last block       */
  };

  /**
   * Write Protection Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WP_EN   = regbits< type,  0,  1 >;  /**< Write Protection Enable        */
    using WP_KEY  = regbits< type,  8, 24 >;  /**< Write Protection Key password  */
  };

  /**
   * Write Protection Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using WP_VS    = regbits< type,  0,  4 >;  /**< Write Protection Violation Status  */
    using WP_VSRC  = regbits< type,  8, 16 >;  /**< Write Protection Violation SouRCe  */
  };

  /**
   * FIFO Memory Aperture0
   */
  struct FIFO[%s]
  : public reg< uint32_t, base_addr + 0x00000200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data to Read or Data to Write  */
  };
};
} // namespace mptl

#endif // ARCH_REG_HSMCI0_HPP_INCLUDED
