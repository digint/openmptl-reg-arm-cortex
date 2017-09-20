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
//  Import from CMSIS-SVD: "Fujitsu/S6E2CC.svd"
//
//  name: S6E2CC
//  version: 1.1
//  description: S6E2CC
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CANFD_HPP_INCLUDED
#define ARCH_REG_CANFD_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * CAN FD Registers
 */
struct CANFD
{
  static constexpr reg_addr_t base_addr = 0x40070000;

  /**
   * Core Release Register
   */
  struct CREL
  : public reg< uint32_t, base_addr + 0x00, ro, 0x30130506 >
  {
    using type = reg< uint32_t, base_addr + 0x00, ro, 0x30130506 >;

    using REL      = regbits< type, 28,  4 >;  /**< Core Release              */
    using STEP     = regbits< type, 24,  4 >;  /**< Step of Core Release      */
    using SUBSTEP  = regbits< type, 20,  4 >;  /**< Sub-step of Core Release  */
    using YEAR     = regbits< type, 16,  4 >;  /**< Time Stamp Year           */
    using MON      = regbits< type,  8,  8 >;  /**< Time Stamp Month          */
    using DAY      = regbits< type,  0,  8 >;  /**< Time Stamp Day            */
  };

  /**
   * Endian Register
   */
  struct ENDN
  : public reg< uint32_t, base_addr + 0x04, ro, 0x87654321 >
  {
    using type = reg< uint32_t, base_addr + 0x04, ro, 0x87654321 >;

    using ETV  = regbits< type,  0, 32 >;  /**< Endianness Test Value  */
  };

  /**
   * Fast Bit Timing and Prescaler Register
   */
  struct FBTP
  : public reg< uint32_t, base_addr + 0x0c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0c, rw, 0x00000000 >;

    using TDCO    = regbits< type, 24,  5 >;  /**< Transceiver Delay Compensation Offset  */
    using TDC     = regbits< type, 23,  1 >;  /**< Transceiver Delay Compensation         */
    using FBRP    = regbits< type, 16,  5 >;  /**< Fast Baud Rate Prescaler               */
    using FTSEG1  = regbits< type,  8,  4 >;  /**< Fast time segment before sample point  */
    using FTSEG2  = regbits< type,  4,  3 >;  /**< Fast time segment after sample point   */
    using FSJW    = regbits< type,  0,  2 >;  /**< Fast (Re) Synchronization Jump Width   */
  };

  /**
   * Test Register
   */
  struct TEST
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using TDCV  = regbits< type,  8,  6 >;  /**< Transceiver Delay Compensation Value  */
    using RX    = regbits< type,  7,  1 >;  /**< Receive Pin                           */
    using TX    = regbits< type,  5,  2 >;  /**< Control of Transmit Pin               */
    using LBCK  = regbits< type,  4,  1 >;  /**< Loop Back Mode                        */
  };

  /**
   * RAM Watchdog
   */
  struct RWD
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using WDV  = regbits< type,  8,  8 >;  /**< Watchdog Value          */
    using WDC  = regbits< type,  0,  8 >;  /**< Watchdog Configuration  */
  };

  /**
   * CC Control Register
   */
  struct CCCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000001 >;

    using TXP   = regbits< type, 14,  1 >;  /**< Transmit Pause                    */
    using FDBS  = regbits< type, 13,  1 >;  /**< CAN FD Bit Rate Switching         */
    using FDO   = regbits< type, 12,  1 >;  /**< CAN FD Operation                  */
    using CMR   = regbits< type, 10,  2 >;  /**< CAN Mode Request                  */
    using CME   = regbits< type,  8,  2 >;  /**< CAN Mode Enable                   */
    using TEST  = regbits< type,  7,  1 >;  /**< Test Mode Enable                  */
    using DAR   = regbits< type,  6,  1 >;  /**< Disable Automatic Retransmission  */
    using MON   = regbits< type,  5,  1 >;  /**< Bus Monitoring Mode               */
    using CSR   = regbits< type,  4,  1 >;  /**< Clock Stop Request                */
    using CSA   = regbits< type,  3,  1 >;  /**< Clock Stop Acknowledge            */
    using ASM   = regbits< type,  2,  1 >;  /**< Restricted Operation Mode         */
    using CCE   = regbits< type,  1,  1 >;  /**< Configuration Change Enable       */
    using INIT  = regbits< type,  0,  1 >;  /**< Initialization                    */
  };

  /**
   * Bit Timing and Prescaler Register
   */
  struct BTP
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000A33 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000A33 >;

    using BRP    = regbits< type, 16, 10 >;  /**< Baud Rate Prescaler               */
    using TSEG1  = regbits< type,  8,  6 >;  /**< Time segment before sample point  */
    using TSEG2  = regbits< type,  4,  4 >;  /**< Time segment after sample point   */
    using SJW    = regbits< type,  0,  4 >;  /**< (Re) Synchronization Jump Width   */
  };

  /**
   * Timestamp Counter Configuration
   */
  struct TSCC
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using TCP  = regbits< type, 16,  4 >;  /**< Timestamp Counter Prescaler  */
    using TSS  = regbits< type,  0,  2 >;  /**< Timestamp Select             */
  };

  /**
   * Timestamp Counter Value
   */
  struct TSCV
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using TSC  = regbits< type,  0, 16 >;  /**< Timestamp Counter  */
  };

  /**
   * Timeout Counter Configuration
   */
  struct TOCC
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using TOP   = regbits< type, 16, 16 >;  /**< Timeout Period          */
    using TOS   = regbits< type,  1,  2 >;  /**< Timeout Select          */
    using ETOC  = regbits< type,  0,  1 >;  /**< Enable Timeout Counter  */
  };

  /**
   * Timeout Counter Value
   */
  struct TOCV
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x0000FFFF >;

    using TOC  = regbits< type,  0, 16 >;  /**< Timeout Counter  */
  };

  /**
   * Error Counter Register
   */
  struct ECR
  : public reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >;

    using CEL  = regbits< type, 16,  8 >;  /**< CAN Error Logging       */
    using RP   = regbits< type, 15,  1 >;  /**< Receive Error Passive   */
    using REC  = regbits< type,  8,  7 >;  /**< Receive Error Counter   */
    using TEC  = regbits< type,  0,  8 >;  /**< Transmit Error Counter  */
  };

  /**
   * Protocol Status Register
   */
  struct PSR
  : public reg< uint32_t, base_addr + 0x44, ro, 0x00000707 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0x00000707 >;

    using REDL  = regbits< type, 13,  1 >;  /**< Received a CAN FD Message                 */
    using RBRS  = regbits< type, 12,  1 >;  /**< BRS flag of last received CAN FD Message  */
    using RESI  = regbits< type, 11,  1 >;  /**< ESI flag of last received CAN FD Message  */
    using FLEC  = regbits< type,  8,  3 >;  /**< Fast Last Error Code                      */
    using BO    = regbits< type,  7,  1 >;  /**< Bus_Off Status                            */
    using EW    = regbits< type,  6,  1 >;  /**< Warning Status                            */
    using EP    = regbits< type,  5,  1 >;  /**< Error Passive                             */
    using ACT   = regbits< type,  3,  2 >;  /**< Activity                                  */
    using LEC   = regbits< type,  0,  3 >;  /**< Last Error Code                           */
  };

  /**
   * Interrupt Register
   */
  struct IR
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using STE   = regbits< type, 31,  1 >;  /**< Stuff Error                            */
    using FOE   = regbits< type, 30,  1 >;  /**< Format Error                           */
    using ACKE  = regbits< type, 29,  1 >;  /**< Acknowledge Error                      */
    using BE    = regbits< type, 28,  1 >;  /**< Bit Error                              */
    using CRCE  = regbits< type, 27,  1 >;  /**< CRC Error                              */
    using WDI   = regbits< type, 26,  1 >;  /**< Watchdog Interrupt                     */
    using BO    = regbits< type, 25,  1 >;  /**< Bus_Off Status                         */
    using EW    = regbits< type, 24,  1 >;  /**< Warning Status                         */
    using EP    = regbits< type, 23,  1 >;  /**< Error Passive                          */
    using ELO   = regbits< type, 22,  1 >;  /**< Error Logging Overflow                 */
    using BEU   = regbits< type, 21,  1 >;  /**< Bit Error Uncorrected                  */
    using BEC   = regbits< type, 20,  1 >;  /**< Bit Error Corrected                    */
    using DRX   = regbits< type, 19,  1 >;  /**< Message stored to Dedicated Rx Buffer  */
    using TOO   = regbits< type, 18,  1 >;  /**< Timeout Occurred                       */
    using MRAF  = regbits< type, 17,  1 >;  /**< Message RAM Access Failure             */
    using TSW   = regbits< type, 16,  1 >;  /**< Timestamp Wraparound                   */
    using TEFL  = regbits< type, 15,  1 >;  /**< Tx Event FIFO Element Lost             */
    using TEFF  = regbits< type, 14,  1 >;  /**< Tx Event FIFO Full                     */
    using TEFW  = regbits< type, 13,  1 >;  /**< Tx Event FIFO Watermark Reached        */
    using TEFN  = regbits< type, 12,  1 >;  /**< Tx Event FIFO New Entry                */
    using TFE   = regbits< type, 11,  1 >;  /**< Tx FIFO Empty                          */
    using TCF   = regbits< type, 10,  1 >;  /**< Transmission Cancellation Finished     */
    using TC    = regbits< type,  9,  1 >;  /**< Transmission Completed                 */
    using HPM   = regbits< type,  8,  1 >;  /**< High Priority Message                  */
    using RF1L  = regbits< type,  7,  1 >;  /**< Rx FIFO 1 Message Lost                 */
    using RF1F  = regbits< type,  6,  1 >;  /**< Rx FIFO 1 Full                         */
    using RF1W  = regbits< type,  5,  1 >;  /**< Rx FIFO 1 Watermark Reached            */
    using RF1N  = regbits< type,  4,  1 >;  /**< Rx FIFO 1 New Message                  */
    using RF0L  = regbits< type,  3,  1 >;  /**< Rx FIFO 0 Message Lost                 */
    using RF0F  = regbits< type,  2,  1 >;  /**< Rx FIFO 0 Full                         */
    using RF0W  = regbits< type,  1,  1 >;  /**< Rx FIFO 0 Watermark Reached            */
    using RF0N  = regbits< type,  0,  1 >;  /**< Rx FIFO 0 New Message                  */
  };

  /**
   * Interrupt Enable
   */
  struct IE
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using STEE   = regbits< type, 31,  1 >;  /**< Stuff Error Interrupt Enable                            */
    using FOEE   = regbits< type, 30,  1 >;  /**< Format Error Interrupt Enable                           */
    using ACKEE  = regbits< type, 29,  1 >;  /**< Acknowledge Error Interrupt Enable                      */
    using BEE    = regbits< type, 28,  1 >;  /**< Bit Error Interrupt Enable                              */
    using CRCEE  = regbits< type, 27,  1 >;  /**< CRC Error Interrupt Enable                              */
    using WDIE   = regbits< type, 26,  1 >;  /**< Watchdog Interrupt Interrupt Enable                     */
    using BOE    = regbits< type, 25,  1 >;  /**< Bus_Off Status Interrupt Enable                         */
    using EWE    = regbits< type, 24,  1 >;  /**< Warning Status Interrupt Enable                         */
    using EPE    = regbits< type, 23,  1 >;  /**< Error Passive Interrupt Enable                          */
    using ELOE   = regbits< type, 22,  1 >;  /**< Error Logging Overflow Interrupt Enable                 */
    using BEUE   = regbits< type, 21,  1 >;  /**< Bit Error Uncorrected Interrupt Enable                  */
    using BECE   = regbits< type, 20,  1 >;  /**< Bit Error Corrected Interrupt Enable                    */
    using DRXE   = regbits< type, 19,  1 >;  /**< Message stored to Dedicated Rx Buffer Interrupt Enable  */
    using TOOE   = regbits< type, 18,  1 >;  /**< Timeout Occurred Interrupt Enable                       */
    using MRAFE  = regbits< type, 17,  1 >;  /**< Message RAM Access Failure Interrupt Enable             */
    using TSWE   = regbits< type, 16,  1 >;  /**< Timestamp Wraparound Interrupt Enable                   */
    using TEFLE  = regbits< type, 15,  1 >;  /**< Tx Event FIFO Element Lost Interrupt Enable             */
    using TEFFE  = regbits< type, 14,  1 >;  /**< Tx Event FIFO Full Interrupt Enable                     */
    using TEFWE  = regbits< type, 13,  1 >;  /**< Tx Event FIFO Watermark Reached Interrupt Enable        */
    using TEFNE  = regbits< type, 12,  1 >;  /**< Tx Event FIFO New Entry Interrupt Enable                */
    using TFEE   = regbits< type, 11,  1 >;  /**< Tx FIFO Empty Interrupt Enable                          */
    using TCFE   = regbits< type, 10,  1 >;  /**< Transmission Cancellation Finished Interrupt Enable     */
    using TCE    = regbits< type,  9,  1 >;  /**< Transmission Completed Interrupt Enable                 */
    using HPME   = regbits< type,  8,  1 >;  /**< High Priority Message Interrupt Enable                  */
    using RF1LE  = regbits< type,  7,  1 >;  /**< Rx FIFO 1 Message Lost Interrupt Enable                 */
    using RF1FE  = regbits< type,  6,  1 >;  /**< Rx FIFO 1 Full Interrupt Enable                         */
    using RF1WE  = regbits< type,  5,  1 >;  /**< Rx FIFO 1 Watermark Reached Interrupt Enable            */
    using RF1NE  = regbits< type,  4,  1 >;  /**< Rx FIFO 1 New Message Interrupt Enable                  */
    using RF0LE  = regbits< type,  3,  1 >;  /**< Rx FIFO 0 Message Lost Interrupt Enable                 */
    using RF0FE  = regbits< type,  2,  1 >;  /**< Rx FIFO 0 Full Interrupt Enable                         */
    using RF0WE  = regbits< type,  1,  1 >;  /**< Rx FIFO 0 Watermark Reached Interrupt Enable            */
    using RF0NE  = regbits< type,  0,  1 >;  /**< Rx FIFO 0 New Message Interrupt Enable                  */
  };

  /**
   * Interrupt Line Select
   */
  struct ILS
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using STEL   = regbits< type, 31,  1 >;  /**< Stuff Error Interrupt Line                            */
    using FOEL   = regbits< type, 30,  1 >;  /**< Format Error Interrupt Line                           */
    using ACKEL  = regbits< type, 29,  1 >;  /**< Acknowledge Error Interrupt Line                      */
    using BEL    = regbits< type, 28,  1 >;  /**< Bit Error Interrupt Line                              */
    using CRCEL  = regbits< type, 27,  1 >;  /**< CRC Error Interrupt Line                              */
    using WDIL   = regbits< type, 26,  1 >;  /**< Watchdog Interrupt Interrupt Line                     */
    using BOL    = regbits< type, 25,  1 >;  /**< Bus_Off Status Interrupt Line                         */
    using EWL    = regbits< type, 24,  1 >;  /**< Warning Status Interrupt Line                         */
    using EPL    = regbits< type, 23,  1 >;  /**< Error Passive Interrupt Line                          */
    using ELOL   = regbits< type, 22,  1 >;  /**< Error Logging Overflow Interrupt Line                 */
    using BEUL   = regbits< type, 21,  1 >;  /**< Bit Error Uncorrected Interrupt Line                  */
    using BECL   = regbits< type, 20,  1 >;  /**< Bit Error Corrected Interrupt Line                    */
    using DRXL   = regbits< type, 19,  1 >;  /**< Message stored to Dedicated Rx Buffer Interrupt Line  */
    using TOOL   = regbits< type, 18,  1 >;  /**< Timeout Occurred Interrupt Line                       */
    using MRAFL  = regbits< type, 17,  1 >;  /**< Message RAM Access Failure Interrupt Line             */
    using TSWL   = regbits< type, 16,  1 >;  /**< Timestamp Wraparound Interrupt Line                   */
    using TEFLL  = regbits< type, 15,  1 >;  /**< Tx Event FIFO Element Lost Interrupt Line             */
    using TEFFL  = regbits< type, 14,  1 >;  /**< Tx Event FIFO Full Interrupt Line                     */
    using TEFWL  = regbits< type, 13,  1 >;  /**< Tx Event FIFO Watermark Reached Interrupt Line        */
    using TEFNL  = regbits< type, 12,  1 >;  /**< Tx Event FIFO New Entry Interrupt Line                */
    using TFEL   = regbits< type, 11,  1 >;  /**< Tx FIFO Empty Interrupt Line                          */
    using TCFL   = regbits< type, 10,  1 >;  /**< Transmission Cancellation Finished Interrupt Line     */
    using TCL    = regbits< type,  9,  1 >;  /**< Transmission Completed Interrupt Line                 */
    using HPML   = regbits< type,  8,  1 >;  /**< High Priority Message Interrupt Line                  */
    using RF1LL  = regbits< type,  7,  1 >;  /**< Rx FIFO 1 Message Lost Interrupt Line                 */
    using RF1FL  = regbits< type,  6,  1 >;  /**< Rx FIFO 1 Full Interrupt Line                         */
    using RF1WL  = regbits< type,  5,  1 >;  /**< Rx FIFO 1 Watermark Reached Interrupt Line            */
    using RF1NL  = regbits< type,  4,  1 >;  /**< Rx FIFO 1 New Message Interrupt Line                  */
    using RF0LL  = regbits< type,  3,  1 >;  /**< Rx FIFO 0 Message Lost Interrupt Line                 */
    using RF0FL  = regbits< type,  2,  1 >;  /**< Rx FIFO 0 Full Interrupt Line                         */
    using RF0WL  = regbits< type,  1,  1 >;  /**< Rx FIFO 0 Watermark Reached Interrupt Line            */
    using RF0NL  = regbits< type,  0,  1 >;  /**< Rx FIFO 0 New Message Interrupt Line                  */
  };

  /**
   * Interrupt Line Enable
   */
  struct ILE
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using EINT1  = regbits< type,  1,  1 >;  /**< Enable Interrupt Line 1  */
    using EINT0  = regbits< type,  0,  1 >;  /**< Enable Interrupt Line 0  */
  };

  /**
   * Global Filter Configuration
   */
  struct GFC
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using ANFS  = regbits< type,  4,  2 >;  /**< Accept Non-matching Frames Standard  */
    using ANFE  = regbits< type,  2,  2 >;  /**< Accept Non-matching Frames Extended  */
    using RRFS  = regbits< type,  1,  1 >;  /**< Reject Remote Frames Standard        */
    using RRFE  = regbits< type,  0,  1 >;  /**< Reject Remote Frames Extended        */
  };

  /**
   * Standard ID Filter Configuration
   */
  struct SIDFC
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >;

    using LSS    = regbits< type, 16,  8 >;  /**< List Size Standard                  */
    using FLSSA  = regbits< type,  2, 14 >;  /**< Filter List Standard Start Address  */
  };

  /**
   * Extended ID Filter Configuration
   */
  struct XIDFC
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using LSE    = regbits< type, 16,  7 >;  /**< List Size Extended                  */
    using FLESA  = regbits< type,  2, 14 >;  /**< Filter List Extended Start Address  */
  };

  /**
   * Extended ID AND Mask
   */
  struct XIDAM
  : public reg< uint32_t, base_addr + 0x90, rw, 0x1FFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x1FFFFFFF >;

    using EIDM  = regbits< type,  0, 29 >;  /**< Extended ID Mask  */
  };

  /**
   * High Priority Message Status
   */
  struct HPMS
  : public reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >;

    using FLST  = regbits< type, 15,  1 >;  /**< Filter List                */
    using FIDX  = regbits< type,  8,  7 >;  /**< Filter Index               */
    using MSI   = regbits< type,  6,  2 >;  /**< Message Storage Indicator  */
    using BIDX  = regbits< type,  0,  6 >;  /**< Buffer Index               */
  };

  /**
   * New Data 1
   */
  struct NDAT1
  : public reg< uint32_t, base_addr + 0x98, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, ro, 0x00000000 >;

    using ND31  = regbits< type, 31,  1 >;  /**< New Data flag of Rx Buffer 31  */
    using ND30  = regbits< type, 30,  1 >;  /**< New Data flag of Rx Buffer 30  */
    using ND29  = regbits< type, 29,  1 >;  /**< New Data flag of Rx Buffer 29  */
    using ND28  = regbits< type, 28,  1 >;  /**< New Data flag of Rx Buffer 28  */
    using ND27  = regbits< type, 27,  1 >;  /**< New Data flag of Rx Buffer 27  */
    using ND26  = regbits< type, 26,  1 >;  /**< New Data flag of Rx Buffer 26  */
    using ND25  = regbits< type, 25,  1 >;  /**< New Data flag of Rx Buffer 25  */
    using ND24  = regbits< type, 24,  1 >;  /**< New Data flag of Rx Buffer 24  */
    using ND23  = regbits< type, 23,  1 >;  /**< New Data flag of Rx Buffer 23  */
    using ND22  = regbits< type, 22,  1 >;  /**< New Data flag of Rx Buffer 22  */
    using ND21  = regbits< type, 21,  1 >;  /**< New Data flag of Rx Buffer 21  */
    using ND20  = regbits< type, 20,  1 >;  /**< New Data flag of Rx Buffer 20  */
    using ND19  = regbits< type, 19,  1 >;  /**< New Data flag of Rx Buffer 19  */
    using ND18  = regbits< type, 18,  1 >;  /**< New Data flag of Rx Buffer 18  */
    using ND17  = regbits< type, 17,  1 >;  /**< New Data flag of Rx Buffer 17  */
    using ND16  = regbits< type, 16,  1 >;  /**< New Data flag of Rx Buffer 16  */
    using ND15  = regbits< type, 15,  1 >;  /**< New Data flag of Rx Buffer 15  */
    using ND14  = regbits< type, 14,  1 >;  /**< New Data flag of Rx Buffer 14  */
    using ND13  = regbits< type, 13,  1 >;  /**< New Data flag of Rx Buffer 13  */
    using ND12  = regbits< type, 12,  1 >;  /**< New Data flag of Rx Buffer 12  */
    using ND11  = regbits< type, 11,  1 >;  /**< New Data flag of Rx Buffer 11  */
    using ND10  = regbits< type, 10,  1 >;  /**< New Data flag of Rx Buffer 10  */
    using ND9   = regbits< type,  9,  1 >;  /**< New Data flag of Rx Buffer 9   */
    using ND8   = regbits< type,  8,  1 >;  /**< New Data flag of Rx Buffer 8   */
    using ND7   = regbits< type,  7,  1 >;  /**< New Data flag of Rx Buffer 7   */
    using ND6   = regbits< type,  6,  1 >;  /**< New Data flag of Rx Buffer 6   */
    using ND5   = regbits< type,  5,  1 >;  /**< New Data flag of Rx Buffer 5   */
    using ND4   = regbits< type,  4,  1 >;  /**< New Data flag of Rx Buffer 4   */
    using ND3   = regbits< type,  3,  1 >;  /**< New Data flag of Rx Buffer 3   */
    using ND2   = regbits< type,  2,  1 >;  /**< New Data flag of Rx Buffer 2   */
    using ND1   = regbits< type,  1,  1 >;  /**< New Data flag of Rx Buffer 1   */
    using ND0   = regbits< type,  0,  1 >;  /**< New Data flag of Rx Buffer 0   */
  };

  /**
   * New Data 2
   */
  struct NDAT2
  : public reg< uint32_t, base_addr + 0x9c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, ro, 0x00000000 >;

    using ND63  = regbits< type, 31,  1 >;  /**< New Data flag of Rx Buffer 63  */
    using ND62  = regbits< type, 30,  1 >;  /**< New Data flag of Rx Buffer 62  */
    using ND61  = regbits< type, 29,  1 >;  /**< New Data flag of Rx Buffer 61  */
    using ND60  = regbits< type, 28,  1 >;  /**< New Data flag of Rx Buffer 60  */
    using ND59  = regbits< type, 27,  1 >;  /**< New Data flag of Rx Buffer 59  */
    using ND58  = regbits< type, 26,  1 >;  /**< New Data flag of Rx Buffer 58  */
    using ND57  = regbits< type, 25,  1 >;  /**< New Data flag of Rx Buffer 57  */
    using ND56  = regbits< type, 24,  1 >;  /**< New Data flag of Rx Buffer 56  */
    using ND55  = regbits< type, 23,  1 >;  /**< New Data flag of Rx Buffer 55  */
    using ND54  = regbits< type, 22,  1 >;  /**< New Data flag of Rx Buffer 54  */
    using ND53  = regbits< type, 21,  1 >;  /**< New Data flag of Rx Buffer 53  */
    using ND52  = regbits< type, 20,  1 >;  /**< New Data flag of Rx Buffer 52  */
    using ND51  = regbits< type, 19,  1 >;  /**< New Data flag of Rx Buffer 51  */
    using ND50  = regbits< type, 18,  1 >;  /**< New Data flag of Rx Buffer 50  */
    using ND49  = regbits< type, 17,  1 >;  /**< New Data flag of Rx Buffer 49  */
    using ND48  = regbits< type, 16,  1 >;  /**< New Data flag of Rx Buffer 48  */
    using ND47  = regbits< type, 15,  1 >;  /**< New Data flag of Rx Buffer 47  */
    using ND46  = regbits< type, 14,  1 >;  /**< New Data flag of Rx Buffer 46  */
    using ND45  = regbits< type, 13,  1 >;  /**< New Data flag of Rx Buffer 45  */
    using ND44  = regbits< type, 12,  1 >;  /**< New Data flag of Rx Buffer 44  */
    using ND43  = regbits< type, 11,  1 >;  /**< New Data flag of Rx Buffer 43  */
    using ND42  = regbits< type, 10,  1 >;  /**< New Data flag of Rx Buffer 42  */
    using ND41  = regbits< type,  9,  1 >;  /**< New Data flag of Rx Buffer 41  */
    using ND40  = regbits< type,  8,  1 >;  /**< New Data flag of Rx Buffer 40  */
    using ND39  = regbits< type,  7,  1 >;  /**< New Data flag of Rx Buffer 39  */
    using ND38  = regbits< type,  6,  1 >;  /**< New Data flag of Rx Buffer 38  */
    using ND37  = regbits< type,  5,  1 >;  /**< New Data flag of Rx Buffer 37  */
    using ND36  = regbits< type,  4,  1 >;  /**< New Data flag of Rx Buffer 36  */
    using ND35  = regbits< type,  3,  1 >;  /**< New Data flag of Rx Buffer 35  */
    using ND34  = regbits< type,  2,  1 >;  /**< New Data flag of Rx Buffer 34  */
    using ND33  = regbits< type,  1,  1 >;  /**< New Data flag of Rx Buffer 33  */
    using ND32  = regbits< type,  0,  1 >;  /**< New Data flag of Rx Buffer 32  */
  };

  /**
   * Rx FIFO 0 Configuration
   */
  struct RXF0C
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >;

    using F0OM  = regbits< type, 31,  1 >;  /**< FIFO 0 Operation Mode    */
    using F0WM  = regbits< type, 24,  7 >;  /**< Rx FIFO 0 Watermark      */
    using F0S   = regbits< type, 16,  7 >;  /**< Rx FIFO 0 Size           */
    using F0SA  = regbits< type,  2, 14 >;  /**< Rx FIFO 0 Start Address  */
  };

  /**
   * Rx FIFO 0 Status
   */
  struct RXF0S
  : public reg< uint32_t, base_addr + 0xa4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, ro, 0x00000000 >;

    using RF0L  = regbits< type, 25,  1 >;  /**< Rx FIFO 0 Message Lost  */
    using F0F   = regbits< type, 24,  1 >;  /**< Rx FIFO 0 Full          */
    using F0PI  = regbits< type, 16,  6 >;  /**< Rx FIFO 0 Put Index     */
    using F0GI  = regbits< type,  8,  6 >;  /**< Rx FIFO 0 Get Index     */
    using F0FL  = regbits< type,  0,  7 >;  /**< Rx FIFO 0 Fill Level    */
  };

  /**
   * Rx FIFO 0 Acknowledge
   */
  struct RXF0A
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >;

    using F0AI  = regbits< type,  0,  6 >;  /**< Rx FIFO 0 Acknowledge Index  */
  };

  /**
   * Rx Buffer Configuration
   */
  struct RXBC
  : public reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >;

    using RBSA  = regbits< type,  2, 14 >;  /**< 2  */
  };

  /**
   * Rx FIFO 1 Configuration
   */
  struct RXF1C
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >;

    using F1OM  = regbits< type, 31,  1 >;  /**< FIFO 1 Operation Mode    */
    using F1WM  = regbits< type, 24,  7 >;  /**< Rx FIFO 1 Watermark      */
    using F1S   = regbits< type, 16,  7 >;  /**< Rx FIFO 1 Size           */
    using F1SA  = regbits< type,  2, 14 >;  /**< Rx FIFO 1 Start Address  */
  };

  /**
   * Rx FIFO 1 Status
   */
  struct RXF1S
  : public reg< uint32_t, base_addr + 0xb4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, ro, 0x00000000 >;

    using DMS   = regbits< type, 30,  2 >;  /**< Debug Message Status  */
    using RF1L  = regbits< type, 25,  1 >;  /**< FIFO 1 Message Lost   */
    using F1F   = regbits< type, 24,  1 >;  /**< Rx FIFO 1 Full        */
    using F1PI  = regbits< type, 16,  6 >;  /**< Rx FIFO 1 Put Index   */
    using F1GI  = regbits< type,  8,  6 >;  /**< Rx FIFO 1 Get Index   */
    using F1FL  = regbits< type,  0,  7 >;  /**< Rx FIFO 1 Fill Level  */
  };

  /**
   * Rx FIFO 1 Acknowledge
   */
  struct RXF1A
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >;

    using F1AI  = regbits< type,  0,  6 >;  /**< Rx FIFO 1 Acknowledge Index  */
  };

  /**
   * Rx Buffer/FIFO Element Size Configuration
   */
  struct RXESC
  : public reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >;

    using RBDS  = regbits< type,  8,  3 >;  /**< Rx Buffer Data Field Size  */
    using F1DS  = regbits< type,  4,  3 >;  /**< Rx FIFO 1 Data Field Size  */
    using F0DS  = regbits< type,  0,  3 >;  /**< Rx FIFO 0 Data Field Size  */
  };

  /**
   * Tx Buffer Configuration
   */
  struct TXBC
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >;

    using TFQM  = regbits< type, 30,  1 >;  /**< Tx FIFO/Queue Mode                    */
    using TFQS  = regbits< type, 24,  6 >;  /**< Transmit FIFO/Queue Size              */
    using NDTB  = regbits< type, 16,  6 >;  /**< Number of Dedicated Transmit Buffers  */
    using TBSA  = regbits< type,  2, 14 >;  /**< Tx Buffers Start Address              */
  };

  /**
   * Tx FIFO/Queue Status
   */
  struct TXFQS
  : public reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >;

    using TFQF   = regbits< type, 21,  1 >;  /**< Tx FIFO/Queue Full       */
    using TFQPI  = regbits< type, 16,  5 >;  /**< Tx FIFO/Queue Put Index  */
    using TFGI   = regbits< type,  8,  5 >;  /**< Tx FIFO Get Index        */
    using TFFL   = regbits< type,  0,  6 >;  /**< Tx FIFO Free Level       */
  };

  /**
   * Tx Buffer Element Size Configuration
   */
  struct TXESC
  : public reg< uint32_t, base_addr + 0xc8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, ro, 0x00000000 >;

    using TBDS  = regbits< type,  0,  3 >;  /**< Tx Buffer Data Field Size  */
  };

  /**
   * Tx Buffer Request Pending
   */
  struct TXBRP
  : public reg< uint32_t, base_addr + 0xcc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, ro, 0x00000000 >;

    using TRP31  = regbits< type, 31,  1 >;  /**< Transmission Request Pending of Tx Buffer 31  */
    using TRP30  = regbits< type, 30,  1 >;  /**< Transmission Request Pending of Tx Buffer 30  */
    using TRP29  = regbits< type, 29,  1 >;  /**< Transmission Request Pending of Tx Buffer 29  */
    using TRP28  = regbits< type, 28,  1 >;  /**< Transmission Request Pending of Tx Buffer 28  */
    using TRP27  = regbits< type, 27,  1 >;  /**< Transmission Request Pending of Tx Buffer 27  */
    using TRP26  = regbits< type, 26,  1 >;  /**< Transmission Request Pending of Tx Buffer 26  */
    using TRP25  = regbits< type, 25,  1 >;  /**< Transmission Request Pending of Tx Buffer 25  */
    using TRP24  = regbits< type, 24,  1 >;  /**< Transmission Request Pending of Tx Buffer 24  */
    using TRP23  = regbits< type, 23,  1 >;  /**< Transmission Request Pending of Tx Buffer 23  */
    using TRP22  = regbits< type, 22,  1 >;  /**< Transmission Request Pending of Tx Buffer 22  */
    using TRP21  = regbits< type, 21,  1 >;  /**< Transmission Request Pending of Tx Buffer 21  */
    using TRP20  = regbits< type, 20,  1 >;  /**< Transmission Request Pending of Tx Buffer 20  */
    using TRP19  = regbits< type, 19,  1 >;  /**< Transmission Request Pending of Tx Buffer 19  */
    using TRP18  = regbits< type, 18,  1 >;  /**< Transmission Request Pending of Tx Buffer 18  */
    using TRP17  = regbits< type, 17,  1 >;  /**< Transmission Request Pending of Tx Buffer 17  */
    using TRP16  = regbits< type, 16,  1 >;  /**< Transmission Request Pending of Tx Buffer 16  */
    using TRP15  = regbits< type, 15,  1 >;  /**< Transmission Request Pending of Tx Buffer 15  */
    using TRP14  = regbits< type, 14,  1 >;  /**< Transmission Request Pending of Tx Buffer 14  */
    using TRP13  = regbits< type, 13,  1 >;  /**< Transmission Request Pending of Tx Buffer 13  */
    using TRP12  = regbits< type, 12,  1 >;  /**< Transmission Request Pending of Tx Buffer 12  */
    using TRP11  = regbits< type, 11,  1 >;  /**< Transmission Request Pending of Tx Buffer 11  */
    using TRP10  = regbits< type, 10,  1 >;  /**< Transmission Request Pending of Tx Buffer 10  */
    using TRP9   = regbits< type,  9,  1 >;  /**< Transmission Request Pending of Tx Buffer 9   */
    using TRP8   = regbits< type,  8,  1 >;  /**< Transmission Request Pending of Tx Buffer 8   */
    using TRP7   = regbits< type,  7,  1 >;  /**< Transmission Request Pending of Tx Buffer 7   */
    using TRP6   = regbits< type,  6,  1 >;  /**< Transmission Request Pending of Tx Buffer 6   */
    using TRP5   = regbits< type,  5,  1 >;  /**< Transmission Request Pending of Tx Buffer 5   */
    using TRP4   = regbits< type,  4,  1 >;  /**< Transmission Request Pending of Tx Buffer 4   */
    using TRP3   = regbits< type,  3,  1 >;  /**< Transmission Request Pending of Tx Buffer 3   */
    using TRP2   = regbits< type,  2,  1 >;  /**< Transmission Request Pending of Tx Buffer 2   */
    using TRP1   = regbits< type,  1,  1 >;  /**< Transmission Request Pending of Tx Buffer 1   */
    using TRP0   = regbits< type,  0,  1 >;  /**< Transmission Request Pending of Tx Buffer 0   */
  };

  /**
   * Tx Buffer Add Request
   */
  struct TXBAR
  : public reg< uint32_t, base_addr + 0xd0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, ro, 0x00000000 >;

    using AR31  = regbits< type, 31,  1 >;  /**< Add Request of Tx Buffer 31  */
    using AR30  = regbits< type, 30,  1 >;  /**< Add Request of Tx Buffer 30  */
    using AR29  = regbits< type, 29,  1 >;  /**< Add Request of Tx Buffer 29  */
    using AR28  = regbits< type, 28,  1 >;  /**< Add Request of Tx Buffer 28  */
    using AR27  = regbits< type, 27,  1 >;  /**< Add Request of Tx Buffer 27  */
    using AR26  = regbits< type, 26,  1 >;  /**< Add Request of Tx Buffer 26  */
    using AR25  = regbits< type, 25,  1 >;  /**< Add Request of Tx Buffer 25  */
    using AR24  = regbits< type, 24,  1 >;  /**< Add Request of Tx Buffer 24  */
    using AR23  = regbits< type, 23,  1 >;  /**< Add Request of Tx Buffer 23  */
    using AR22  = regbits< type, 22,  1 >;  /**< Add Request of Tx Buffer 22  */
    using AR21  = regbits< type, 21,  1 >;  /**< Add Request of Tx Buffer 21  */
    using AR20  = regbits< type, 20,  1 >;  /**< Add Request of Tx Buffer 20  */
    using AR19  = regbits< type, 19,  1 >;  /**< Add Request of Tx Buffer 19  */
    using AR18  = regbits< type, 18,  1 >;  /**< Add Request of Tx Buffer 18  */
    using AR17  = regbits< type, 17,  1 >;  /**< Add Request of Tx Buffer 17  */
    using AR16  = regbits< type, 16,  1 >;  /**< Add Request of Tx Buffer 16  */
    using AR15  = regbits< type, 15,  1 >;  /**< Add Request of Tx Buffer 15  */
    using AR14  = regbits< type, 14,  1 >;  /**< Add Request of Tx Buffer 14  */
    using AR13  = regbits< type, 13,  1 >;  /**< Add Request of Tx Buffer 13  */
    using AR12  = regbits< type, 12,  1 >;  /**< Add Request of Tx Buffer 12  */
    using AR11  = regbits< type, 11,  1 >;  /**< Add Request of Tx Buffer 11  */
    using AR10  = regbits< type, 10,  1 >;  /**< Add Request of Tx Buffer 10  */
    using AR9   = regbits< type,  9,  1 >;  /**< Add Request of Tx Buffer 9   */
    using AR8   = regbits< type,  8,  1 >;  /**< Add Request of Tx Buffer 8   */
    using AR7   = regbits< type,  7,  1 >;  /**< Add Request of Tx Buffer 7   */
    using AR6   = regbits< type,  6,  1 >;  /**< Add Request of Tx Buffer 6   */
    using AR5   = regbits< type,  5,  1 >;  /**< Add Request of Tx Buffer 5   */
    using AR4   = regbits< type,  4,  1 >;  /**< Add Request of Tx Buffer 4   */
    using AR3   = regbits< type,  3,  1 >;  /**< Add Request of Tx Buffer 3   */
    using AR2   = regbits< type,  2,  1 >;  /**< Add Request of Tx Buffer 2   */
    using AR1   = regbits< type,  1,  1 >;  /**< Add Request of Tx Buffer 1   */
    using AR0   = regbits< type,  0,  1 >;  /**< Add Request of Tx Buffer 0   */
  };

  /**
   * Tx Buffer Cancellation Request
   */
  struct TXBCR
  : public reg< uint32_t, base_addr + 0xd4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd4, ro, 0x00000000 >;

    using CR31  = regbits< type, 31,  1 >;  /**< Cancellation Request of Tx Buffer 31  */
    using CR30  = regbits< type, 30,  1 >;  /**< Cancellation Request of Tx Buffer 30  */
    using CR29  = regbits< type, 29,  1 >;  /**< Cancellation Request of Tx Buffer 29  */
    using CR28  = regbits< type, 28,  1 >;  /**< Cancellation Request of Tx Buffer 28  */
    using CR27  = regbits< type, 27,  1 >;  /**< Cancellation Request of Tx Buffer 27  */
    using CR26  = regbits< type, 26,  1 >;  /**< Cancellation Request of Tx Buffer 26  */
    using CR25  = regbits< type, 25,  1 >;  /**< Cancellation Request of Tx Buffer 25  */
    using CR24  = regbits< type, 24,  1 >;  /**< Cancellation Request of Tx Buffer 24  */
    using CR23  = regbits< type, 23,  1 >;  /**< Cancellation Request of Tx Buffer 23  */
    using CR22  = regbits< type, 22,  1 >;  /**< Cancellation Request of Tx Buffer 22  */
    using CR21  = regbits< type, 21,  1 >;  /**< Cancellation Request of Tx Buffer 21  */
    using CR20  = regbits< type, 20,  1 >;  /**< Cancellation Request of Tx Buffer 20  */
    using CR19  = regbits< type, 19,  1 >;  /**< Cancellation Request of Tx Buffer 19  */
    using CR18  = regbits< type, 18,  1 >;  /**< Cancellation Request of Tx Buffer 18  */
    using CR17  = regbits< type, 17,  1 >;  /**< Cancellation Request of Tx Buffer 17  */
    using CR16  = regbits< type, 16,  1 >;  /**< Cancellation Request of Tx Buffer 16  */
    using CR15  = regbits< type, 15,  1 >;  /**< Cancellation Request of Tx Buffer 15  */
    using CR14  = regbits< type, 14,  1 >;  /**< Cancellation Request of Tx Buffer 14  */
    using CR13  = regbits< type, 13,  1 >;  /**< Cancellation Request of Tx Buffer 13  */
    using CR12  = regbits< type, 12,  1 >;  /**< Cancellation Request of Tx Buffer 12  */
    using CR11  = regbits< type, 11,  1 >;  /**< Cancellation Request of Tx Buffer 11  */
    using CR10  = regbits< type, 10,  1 >;  /**< Cancellation Request of Tx Buffer 10  */
    using CR9   = regbits< type,  9,  1 >;  /**< Cancellation Request of Tx Buffer 9   */
    using CR8   = regbits< type,  8,  1 >;  /**< Cancellation Request of Tx Buffer 8   */
    using CR7   = regbits< type,  7,  1 >;  /**< Cancellation Request of Tx Buffer 7   */
    using CR6   = regbits< type,  6,  1 >;  /**< Cancellation Request of Tx Buffer 6   */
    using CR5   = regbits< type,  5,  1 >;  /**< Cancellation Request of Tx Buffer 5   */
    using CR4   = regbits< type,  4,  1 >;  /**< Cancellation Request of Tx Buffer 4   */
    using CR3   = regbits< type,  3,  1 >;  /**< Cancellation Request of Tx Buffer 3   */
    using CR2   = regbits< type,  2,  1 >;  /**< Cancellation Request of Tx Buffer 2   */
    using CR1   = regbits< type,  1,  1 >;  /**< Cancellation Request of Tx Buffer 1   */
    using CR0   = regbits< type,  0,  1 >;  /**< Cancellation Request of Tx Buffer 0   */
  };

  /**
   * Tx Buffer Transmission Occurred
   */
  struct TXBTO
  : public reg< uint32_t, base_addr + 0xd8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, ro, 0x00000000 >;

    using TO31  = regbits< type, 31,  1 >;  /**< Transmission Occurred of Tx Buffer 31  */
    using TO30  = regbits< type, 30,  1 >;  /**< Transmission Occurred of Tx Buffer 30  */
    using TO29  = regbits< type, 29,  1 >;  /**< Transmission Occurred of Tx Buffer 29  */
    using TO28  = regbits< type, 28,  1 >;  /**< Transmission Occurred of Tx Buffer 28  */
    using TO27  = regbits< type, 27,  1 >;  /**< Transmission Occurred of Tx Buffer 27  */
    using TO26  = regbits< type, 26,  1 >;  /**< Transmission Occurred of Tx Buffer 26  */
    using TO25  = regbits< type, 25,  1 >;  /**< Transmission Occurred of Tx Buffer 25  */
    using TO24  = regbits< type, 24,  1 >;  /**< Transmission Occurred of Tx Buffer 24  */
    using TO23  = regbits< type, 23,  1 >;  /**< Transmission Occurred of Tx Buffer 23  */
    using TO22  = regbits< type, 22,  1 >;  /**< Transmission Occurred of Tx Buffer 22  */
    using TO21  = regbits< type, 21,  1 >;  /**< Transmission Occurred of Tx Buffer 21  */
    using TO20  = regbits< type, 20,  1 >;  /**< Transmission Occurred of Tx Buffer 20  */
    using TO19  = regbits< type, 19,  1 >;  /**< Transmission Occurred of Tx Buffer 19  */
    using TO18  = regbits< type, 18,  1 >;  /**< Transmission Occurred of Tx Buffer 18  */
    using TO17  = regbits< type, 17,  1 >;  /**< Transmission Occurred of Tx Buffer 17  */
    using TO16  = regbits< type, 16,  1 >;  /**< Transmission Occurred of Tx Buffer 16  */
    using TO15  = regbits< type, 15,  1 >;  /**< Transmission Occurred of Tx Buffer 15  */
    using TO14  = regbits< type, 14,  1 >;  /**< Transmission Occurred of Tx Buffer 14  */
    using TO13  = regbits< type, 13,  1 >;  /**< Transmission Occurred of Tx Buffer 13  */
    using TO12  = regbits< type, 12,  1 >;  /**< Transmission Occurred of Tx Buffer 12  */
    using TO11  = regbits< type, 11,  1 >;  /**< Transmission Occurred of Tx Buffer 11  */
    using TO10  = regbits< type, 10,  1 >;  /**< Transmission Occurred of Tx Buffer 10  */
    using TO9   = regbits< type,  9,  1 >;  /**< Transmission Occurred of Tx Buffer 9   */
    using TO8   = regbits< type,  8,  1 >;  /**< Transmission Occurred of Tx Buffer 8   */
    using TO7   = regbits< type,  7,  1 >;  /**< Transmission Occurred of Tx Buffer 7   */
    using TO6   = regbits< type,  6,  1 >;  /**< Transmission Occurred of Tx Buffer 6   */
    using TO5   = regbits< type,  5,  1 >;  /**< Transmission Occurred of Tx Buffer 5   */
    using TO4   = regbits< type,  4,  1 >;  /**< Transmission Occurred of Tx Buffer 4   */
    using TO3   = regbits< type,  3,  1 >;  /**< Transmission Occurred of Tx Buffer 3   */
    using TO2   = regbits< type,  2,  1 >;  /**< Transmission Occurred of Tx Buffer 2   */
    using TO1   = regbits< type,  1,  1 >;  /**< Transmission Occurred of Tx Buffer 1   */
    using TO0   = regbits< type,  0,  1 >;  /**< Transmission Occurred of Tx Buffer 0   */
  };

  /**
   * Tx Buffer Cancellation Finished
   */
  struct TXBCF
  : public reg< uint32_t, base_addr + 0xdc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xdc, ro, 0x00000000 >;

    using CF31  = regbits< type, 31,  1 >;  /**< Cancellation Finished of Tx Buffer 31  */
    using CF30  = regbits< type, 30,  1 >;  /**< Cancellation Finished of Tx Buffer 30  */
    using CF29  = regbits< type, 29,  1 >;  /**< Cancellation Finished of Tx Buffer 29  */
    using CF28  = regbits< type, 28,  1 >;  /**< Cancellation Finished of Tx Buffer 28  */
    using CF27  = regbits< type, 27,  1 >;  /**< Cancellation Finished of Tx Buffer 27  */
    using CF26  = regbits< type, 26,  1 >;  /**< Cancellation Finished of Tx Buffer 26  */
    using CF25  = regbits< type, 25,  1 >;  /**< Cancellation Finished of Tx Buffer 25  */
    using CF24  = regbits< type, 24,  1 >;  /**< Cancellation Finished of Tx Buffer 24  */
    using CF23  = regbits< type, 23,  1 >;  /**< Cancellation Finished of Tx Buffer 23  */
    using CF22  = regbits< type, 22,  1 >;  /**< Cancellation Finished of Tx Buffer 22  */
    using CF21  = regbits< type, 21,  1 >;  /**< Cancellation Finished of Tx Buffer 21  */
    using CF20  = regbits< type, 20,  1 >;  /**< Cancellation Finished of Tx Buffer 20  */
    using CF19  = regbits< type, 19,  1 >;  /**< Cancellation Finished of Tx Buffer 19  */
    using CF18  = regbits< type, 18,  1 >;  /**< Cancellation Finished of Tx Buffer 18  */
    using CF17  = regbits< type, 17,  1 >;  /**< Cancellation Finished of Tx Buffer 17  */
    using CF16  = regbits< type, 16,  1 >;  /**< Cancellation Finished of Tx Buffer 16  */
    using CF15  = regbits< type, 15,  1 >;  /**< Cancellation Finished of Tx Buffer 15  */
    using CF14  = regbits< type, 14,  1 >;  /**< Cancellation Finished of Tx Buffer 14  */
    using CF13  = regbits< type, 13,  1 >;  /**< Cancellation Finished of Tx Buffer 13  */
    using CF12  = regbits< type, 12,  1 >;  /**< Cancellation Finished of Tx Buffer 12  */
    using CF11  = regbits< type, 11,  1 >;  /**< Cancellation Finished of Tx Buffer 11  */
    using CF10  = regbits< type, 10,  1 >;  /**< Cancellation Finished of Tx Buffer 10  */
    using CF9   = regbits< type,  9,  1 >;  /**< Cancellation Finished of Tx Buffer 9   */
    using CF8   = regbits< type,  8,  1 >;  /**< Cancellation Finished of Tx Buffer 8   */
    using CF7   = regbits< type,  7,  1 >;  /**< Cancellation Finished of Tx Buffer 7   */
    using CF6   = regbits< type,  6,  1 >;  /**< Cancellation Finished of Tx Buffer 6   */
    using CF5   = regbits< type,  5,  1 >;  /**< Cancellation Finished of Tx Buffer 5   */
    using CF4   = regbits< type,  4,  1 >;  /**< Cancellation Finished of Tx Buffer 4   */
    using CF3   = regbits< type,  3,  1 >;  /**< Cancellation Finished of Tx Buffer 3   */
    using CF2   = regbits< type,  2,  1 >;  /**< Cancellation Finished of Tx Buffer 2   */
    using CF1   = regbits< type,  1,  1 >;  /**< Cancellation Finished of Tx Buffer 1   */
    using CF0   = regbits< type,  0,  1 >;  /**< Cancellation Finished of Tx Buffer 0   */
  };

  /**
   * Tx Buffer Transmission Interrupt Enable
   */
  struct TXBTIE
  : public reg< uint32_t, base_addr + 0xe0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, ro, 0x00000000 >;

    using TIE31  = regbits< type, 31,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 31  */
    using TIE30  = regbits< type, 30,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 30  */
    using TIE29  = regbits< type, 29,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 29  */
    using TIE28  = regbits< type, 28,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 28  */
    using TIE27  = regbits< type, 27,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 27  */
    using TIE26  = regbits< type, 26,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 26  */
    using TIE25  = regbits< type, 25,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 25  */
    using TIE24  = regbits< type, 24,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 24  */
    using TIE23  = regbits< type, 23,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 23  */
    using TIE22  = regbits< type, 22,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 22  */
    using TIE21  = regbits< type, 21,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 21  */
    using TIE20  = regbits< type, 20,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 20  */
    using TIE19  = regbits< type, 19,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 19  */
    using TIE18  = regbits< type, 18,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 18  */
    using TIE17  = regbits< type, 17,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 17  */
    using TIE16  = regbits< type, 16,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 16  */
    using TIE15  = regbits< type, 15,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 15  */
    using TIE14  = regbits< type, 14,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 14  */
    using TIE13  = regbits< type, 13,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 13  */
    using TIE12  = regbits< type, 12,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 12  */
    using TIE11  = regbits< type, 11,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 11  */
    using TIE10  = regbits< type, 10,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 10  */
    using TIE9   = regbits< type,  9,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 9   */
    using TIE8   = regbits< type,  8,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 8   */
    using TIE7   = regbits< type,  7,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 7   */
    using TIE6   = regbits< type,  6,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 6   */
    using TIE5   = regbits< type,  5,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 5   */
    using TIE4   = regbits< type,  4,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 4   */
    using TIE3   = regbits< type,  3,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 3   */
    using TIE2   = regbits< type,  2,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 2   */
    using TIE1   = regbits< type,  1,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 1   */
    using TIE0   = regbits< type,  0,  1 >;  /**< Transmission Interrupt Enable of Tx Buffer 0   */
  };

  /**
   * Tx Buffer Cancellation Finished Interrupt Enable
   */
  struct TXBCIE
  : public reg< uint32_t, base_addr + 0xe4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, ro, 0x00000000 >;

    using CFIE31  = regbits< type, 31,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 31  */
    using CFIE30  = regbits< type, 30,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 30  */
    using CFIE29  = regbits< type, 29,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 29  */
    using CFIE28  = regbits< type, 28,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 28  */
    using CFIE27  = regbits< type, 27,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 27  */
    using CFIE26  = regbits< type, 26,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 26  */
    using CFIE25  = regbits< type, 25,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 25  */
    using CFIE24  = regbits< type, 24,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 24  */
    using CFIE23  = regbits< type, 23,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 23  */
    using CFIE22  = regbits< type, 22,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 22  */
    using CFIE21  = regbits< type, 21,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 21  */
    using CFIE20  = regbits< type, 20,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 20  */
    using CFIE19  = regbits< type, 19,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 19  */
    using CFIE18  = regbits< type, 18,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 18  */
    using CFIE17  = regbits< type, 17,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 17  */
    using CFIE16  = regbits< type, 16,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 16  */
    using CFIE15  = regbits< type, 15,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 15  */
    using CFIE14  = regbits< type, 14,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 14  */
    using CFIE13  = regbits< type, 13,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 13  */
    using CFIE12  = regbits< type, 12,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 12  */
    using CFIE11  = regbits< type, 11,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 11  */
    using CFIE10  = regbits< type, 10,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 10  */
    using CFIE9   = regbits< type,  9,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 9   */
    using CFIE8   = regbits< type,  8,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 8   */
    using CFIE7   = regbits< type,  7,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 7   */
    using CFIE6   = regbits< type,  6,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 6   */
    using CFIE5   = regbits< type,  5,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 5   */
    using CFIE4   = regbits< type,  4,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 4   */
    using CFIE3   = regbits< type,  3,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 3   */
    using CFIE2   = regbits< type,  2,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 2   */
    using CFIE1   = regbits< type,  1,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 1   */
    using CFIE0   = regbits< type,  0,  1 >;  /**< Cancellation Finished Interrupt Enable of Tx Buffer 0   */
  };

  /**
   * Tx Event FIFO Configuration
   */
  struct TXEFC
  : public reg< uint32_t, base_addr + 0xf0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, rw, 0x00000000 >;

    using EFWM  = regbits< type, 24,  6 >;  /**< Event FIFO Watermark      */
    using EFS   = regbits< type, 16,  6 >;  /**< Event FIFO Size           */
    using EFSA  = regbits< type,  2, 14 >;  /**< Event FIFO Start Address  */
  };

  /**
   * Tx Event FIFO Status
   */
  struct TXFS
  : public reg< uint32_t, base_addr + 0xf4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, ro, 0x00000000 >;

    using TEFL  = regbits< type, 25,  1 >;  /**< Tx Event FIFO Element Lost  */
    using EFF   = regbits< type, 24,  1 >;  /**< Event FIFO Full             */
    using EFPI  = regbits< type, 16,  5 >;  /**< Event FIFO Put Index        */
    using EFGI  = regbits< type,  8,  5 >;  /**< Event FIFO Get Index        */
    using EFFL  = regbits< type,  0,  6 >;  /**< Event FIFO Fill Level       */
  };

  /**
   * Tx Event FIFO Acknowledge
   */
  struct TXFA
  : public reg< uint32_t, base_addr + 0xf8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf8, rw, 0x00000000 >;

    using EFAI  = regbits< type,  0,  5 >;  /**< Event FIFO Acknowledge Index  */
  };

  /**
   * CAN FD ECC Error Control Register
   */
  struct FDECR
  : public reg< uint8_t, base_addr + 0x200, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x200, rw, 0x00 >;

    using CEIV   = regbits< type,  3,  1 >;  /**< ECC check disable bit                         */
    using CEREN  = regbits< type,  2,  1 >;  /**< ECC error response enable bit                 */
    using DEIE   = regbits< type,  1,  1 >;  /**< Double-bit error factor interrupt enable bit  */
    using SEIE   = regbits< type,  0,  1 >;  /**< Single-bit error factor interrupt enable bit  */
  };

  /**
   * CAN FD ECC Error Status Register
   */
  struct FDESR
  : public reg< uint8_t, base_addr + 0x201, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x201, ro, 0x00 >;

    using DEI  = regbits< type,  1,  1 >;  /**< Double-bit error occurrence bit  */
    using SEI  = regbits< type,  0,  1 >;  /**< Single-bit error occurrence bit  */
  };

  /**
   * CAN FD ECC Single-bit Error Address Register
   */
  struct FDSEAR
  : public reg< uint16_t, base_addr + 0x202, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x202, ro, 0x0000 >;

    using SRA  = regbits< type,  0, 16 >;  /**< Single-bit error Message RAM address bits  */
  };

  /**
   * CAN FD ECC Error Status Clear Register
   */
  struct FDESCR
  : public reg< uint8_t, base_addr + 0x205, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x205, ro, 0x00 >;

    using DEIC  = regbits< type,  1,  1 >;  /**< Double-bit error clear bit  */
    using SEIC  = regbits< type,  0,  1 >;  /**< Sngle-bit error clear bit   */
  };

  /**
   * CAN FD ECC Double-bit Error Address Register
   */
  struct FDDEAR
  : public reg< uint16_t, base_addr + 0x206, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x206, ro, 0x0000 >;

    using DRA  = regbits< type,  0, 16 >;  /**< Double-bit error Message RAM address bits  */
  };

  /**
   * Time Stamp Control Register
   */
  struct TSCNTR
  : public reg< uint16_t, base_addr + 0x210, wo, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x210, wo, 0x0000 >;

    using CCLR  = regbits< type,  0,  1 >;  /**< Counter clear bit  */
  };

  /**
   * Time Stamp Mode Register
   */
  struct TSMDR
  : public reg< uint16_t, base_addr + 0x212, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x212, rw, 0x0000 >;

    using CNTEN  = regbits< type,  0,  1 >;  /**< Counter enable bit  */
  };

  /**
   * Time Stamp Divider Register
   */
  struct TSDIVR
  : public reg< uint32_t, base_addr + 0x214, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x214, rw, 0x00000000 >;

    using CDIV  = regbits< type,  0, 16 >;  /**< Counter clock division ratio setting bit  */
  };

  /**
   * Time Stamp Counter Data Register
   */
  struct TSCDTR
  : public reg< uint16_t, base_addr + 0x218, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x218, ro, 0x0000 >;

    using CNT  = regbits< type,  0, 16 >;  /**< Counter value bits  */
  };

  /**
   * Time Stamp Compare Clear Register
   */
  struct TSCPCLR
  : public reg< uint16_t, base_addr + 0x21a, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x21a, rw, 0x0000 >;

    using CMP  = regbits< type,  0, 16 >;  /**< Compare clear setting bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CANFD_HPP_INCLUDED
