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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9X25.svd"
//
//  vendor: Atmel
//  name: AT91SAM9X25
//  series: SAM9X
//  version: 20130207
//  description: Atmel AT91SAM9X25 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Dual Ethernet and CAN, HS USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9X25.aspx for more)
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
 * Controller Area Network 0
 */
struct CAN0
{
  static constexpr reg_addr_t base_addr = 0xf8000000;

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using CANEN   = regbits< type,  0,  1 >;  /**< CAN Controller Enable                    */
    using LPM     = regbits< type,  1,  1 >;  /**< Disable/Enable Low Power Mode            */
    using ABM     = regbits< type,  2,  1 >;  /**< Disable/Enable Autobaud/Listen mode      */
    using OVL     = regbits< type,  3,  1 >;  /**< Disable/Enable Overload Frame            */
    using TEOF    = regbits< type,  4,  1 >;  /**< Timestamp messages at each end of Frame  */
    using TTM     = regbits< type,  5,  1 >;  /**< Disable/Enable Time Triggered Mode       */
    using TIMFRZ  = regbits< type,  6,  1 >;  /**< Enable Timer Freeze                      */
    using DRPT    = regbits< type,  7,  1 >;  /**< Disable Repeat                           */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using MB0     = regbits< type,  0,  1 >;  /**< Mailbox 0 Interrupt Enable             */
    using MB1     = regbits< type,  1,  1 >;  /**< Mailbox 1 Interrupt Enable             */
    using MB2     = regbits< type,  2,  1 >;  /**< Mailbox 2 Interrupt Enable             */
    using MB3     = regbits< type,  3,  1 >;  /**< Mailbox 3 Interrupt Enable             */
    using MB4     = regbits< type,  4,  1 >;  /**< Mailbox 4 Interrupt Enable             */
    using MB5     = regbits< type,  5,  1 >;  /**< Mailbox 5 Interrupt Enable             */
    using MB6     = regbits< type,  6,  1 >;  /**< Mailbox 6 Interrupt Enable             */
    using MB7     = regbits< type,  7,  1 >;  /**< Mailbox 7 Interrupt Enable             */
    using ERRA    = regbits< type, 16,  1 >;  /**< Error Active Mode Interrupt Enable     */
    using WARN    = regbits< type, 17,  1 >;  /**< Warning Limit Interrupt Enable         */
    using ERRP    = regbits< type, 18,  1 >;  /**< Error Passive Mode Interrupt Enable    */
    using BOFF    = regbits< type, 19,  1 >;  /**< Bus Off Mode Interrupt Enable          */
    using SLEEP   = regbits< type, 20,  1 >;  /**< Sleep Interrupt Enable                 */
    using WAKEUP  = regbits< type, 21,  1 >;  /**< Wakeup Interrupt Enable                */
    using TOVF    = regbits< type, 22,  1 >;  /**< Timer Overflow Interrupt Enable        */
    using TSTP    = regbits< type, 23,  1 >;  /**< TimeStamp Interrupt Enable             */
    using CERR    = regbits< type, 24,  1 >;  /**< CRC Error Interrupt Enable             */
    using SERR    = regbits< type, 25,  1 >;  /**< Stuffing Error Interrupt Enable        */
    using AERR    = regbits< type, 26,  1 >;  /**< Acknowledgment Error Interrupt Enable  */
    using FERR    = regbits< type, 27,  1 >;  /**< Form Error Interrupt Enable            */
    using BERR    = regbits< type, 28,  1 >;  /**< Bit Error Interrupt Enable             */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0 >;

    using MB0     = regbits< type,  0,  1 >;  /**< Mailbox 0 Interrupt Disable             */
    using MB1     = regbits< type,  1,  1 >;  /**< Mailbox 1 Interrupt Disable             */
    using MB2     = regbits< type,  2,  1 >;  /**< Mailbox 2 Interrupt Disable             */
    using MB3     = regbits< type,  3,  1 >;  /**< Mailbox 3 Interrupt Disable             */
    using MB4     = regbits< type,  4,  1 >;  /**< Mailbox 4 Interrupt Disable             */
    using MB5     = regbits< type,  5,  1 >;  /**< Mailbox 5 Interrupt Disable             */
    using MB6     = regbits< type,  6,  1 >;  /**< Mailbox 6 Interrupt Disable             */
    using MB7     = regbits< type,  7,  1 >;  /**< Mailbox 7 Interrupt Disable             */
    using ERRA    = regbits< type, 16,  1 >;  /**< Error Active Mode Interrupt Disable     */
    using WARN    = regbits< type, 17,  1 >;  /**< Warning Limit Interrupt Disable         */
    using ERRP    = regbits< type, 18,  1 >;  /**< Error Passive Mode Interrupt Disable    */
    using BOFF    = regbits< type, 19,  1 >;  /**< Bus Off Mode Interrupt Disable          */
    using SLEEP   = regbits< type, 20,  1 >;  /**< Sleep Interrupt Disable                 */
    using WAKEUP  = regbits< type, 21,  1 >;  /**< Wakeup Interrupt Disable                */
    using TOVF    = regbits< type, 22,  1 >;  /**< Timer Overflow Interrupt                */
    using TSTP    = regbits< type, 23,  1 >;  /**< TimeStamp Interrupt Disable             */
    using CERR    = regbits< type, 24,  1 >;  /**< CRC Error Interrupt Disable             */
    using SERR    = regbits< type, 25,  1 >;  /**< Stuffing Error Interrupt Disable        */
    using AERR    = regbits< type, 26,  1 >;  /**< Acknowledgment Error Interrupt Disable  */
    using FERR    = regbits< type, 27,  1 >;  /**< Form Error Interrupt Disable            */
    using BERR    = regbits< type, 28,  1 >;  /**< Bit Error Interrupt Disable             */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >;

    using MB0     = regbits< type,  0,  1 >;  /**< Mailbox 0 Interrupt Mask             */
    using MB1     = regbits< type,  1,  1 >;  /**< Mailbox 1 Interrupt Mask             */
    using MB2     = regbits< type,  2,  1 >;  /**< Mailbox 2 Interrupt Mask             */
    using MB3     = regbits< type,  3,  1 >;  /**< Mailbox 3 Interrupt Mask             */
    using MB4     = regbits< type,  4,  1 >;  /**< Mailbox 4 Interrupt Mask             */
    using MB5     = regbits< type,  5,  1 >;  /**< Mailbox 5 Interrupt Mask             */
    using MB6     = regbits< type,  6,  1 >;  /**< Mailbox 6 Interrupt Mask             */
    using MB7     = regbits< type,  7,  1 >;  /**< Mailbox 7 Interrupt Mask             */
    using ERRA    = regbits< type, 16,  1 >;  /**< Error Active Mode Interrupt Mask     */
    using WARN    = regbits< type, 17,  1 >;  /**< Warning Limit Interrupt Mask         */
    using ERRP    = regbits< type, 18,  1 >;  /**< Error Passive Mode Interrupt Mask    */
    using BOFF    = regbits< type, 19,  1 >;  /**< Bus Off Mode Interrupt Mask          */
    using SLEEP   = regbits< type, 20,  1 >;  /**< Sleep Interrupt Mask                 */
    using WAKEUP  = regbits< type, 21,  1 >;  /**< Wakeup Interrupt Mask                */
    using TOVF    = regbits< type, 22,  1 >;  /**< Timer Overflow Interrupt Mask        */
    using TSTP    = regbits< type, 23,  1 >;  /**< Timestamp Interrupt Mask             */
    using CERR    = regbits< type, 24,  1 >;  /**< CRC Error Interrupt Mask             */
    using SERR    = regbits< type, 25,  1 >;  /**< Stuffing Error Interrupt Mask        */
    using AERR    = regbits< type, 26,  1 >;  /**< Acknowledgment Error Interrupt Mask  */
    using FERR    = regbits< type, 27,  1 >;  /**< Form Error Interrupt Mask            */
    using BERR    = regbits< type, 28,  1 >;  /**< Bit Error Interrupt Mask             */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using MB0     = regbits< type,  0,  1 >;  /**< Mailbox 0 Event                          */
    using MB1     = regbits< type,  1,  1 >;  /**< Mailbox 1 Event                          */
    using MB2     = regbits< type,  2,  1 >;  /**< Mailbox 2 Event                          */
    using MB3     = regbits< type,  3,  1 >;  /**< Mailbox 3 Event                          */
    using MB4     = regbits< type,  4,  1 >;  /**< Mailbox 4 Event                          */
    using MB5     = regbits< type,  5,  1 >;  /**< Mailbox 5 Event                          */
    using MB6     = regbits< type,  6,  1 >;  /**< Mailbox 6 Event                          */
    using MB7     = regbits< type,  7,  1 >;  /**< Mailbox 7 Event                          */
    using ERRA    = regbits< type, 16,  1 >;  /**< Error Active Mode                        */
    using WARN    = regbits< type, 17,  1 >;  /**< Warning Limit                            */
    using ERRP    = regbits< type, 18,  1 >;  /**< Error Passive Mode                       */
    using BOFF    = regbits< type, 19,  1 >;  /**< Bus Off Mode                             */
    using SLEEP   = regbits< type, 20,  1 >;  /**< CAN controller in Low power Mode         */
    using WAKEUP  = regbits< type, 21,  1 >;  /**< CAN controller is not in Low power Mode  */
    using TOVF    = regbits< type, 22,  1 >;  /**< Timer Overflow                           */
    using TSTP    = regbits< type, 23,  1 >;
    using CERR    = regbits< type, 24,  1 >;  /**< Mailbox CRC Error                        */
    using SERR    = regbits< type, 25,  1 >;  /**< Mailbox Stuffing Error                   */
    using AERR    = regbits< type, 26,  1 >;  /**< Acknowledgment Error                     */
    using FERR    = regbits< type, 27,  1 >;  /**< Form Error                               */
    using BERR    = regbits< type, 28,  1 >;  /**< Bit Error                                */
    using RBSY    = regbits< type, 29,  1 >;  /**< Receiver busy                            */
    using TBSY    = regbits< type, 30,  1 >;  /**< Transmitter busy                         */
    using OVLSY   = regbits< type, 31,  1 >;  /**< Overload busy                            */
  };

  /**
   * Baudrate Register
   */
  struct BR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >;

    using PHASE2  = regbits< type,  0,  3 >;  /**< Phase 2 segment                */
    using PHASE1  = regbits< type,  4,  3 >;  /**< Phase 1 segment                */
    using PROPAG  = regbits< type,  8,  3 >;  /**< Programming time segment       */
    using SJW     = regbits< type, 12,  2 >;  /**< Re-synchronization jump width  */
    using BRP     = regbits< type, 16,  7 >;  /**< Baudrate Prescaler.            */
    using SMP     = regbits< type, 24,  1 >;  /**< Sampling Mode                  */
  };

  /**
   * Timer Register
   */
  struct TIM
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using TIMER  = regbits< type,  0, 16 >;  /**< Timer  */
  };

  /**
   * Timestamp Register
   */
  struct TIMESTP
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using MTIMESTAMP  = regbits< type,  0, 16 >;  /**< Timestamp  */
  };

  /**
   * Error Counter Register
   */
  struct ECR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using REC  = regbits< type,  0,  8 >;  /**< Receive Error Counter   */
    using TEC  = regbits< type, 16,  9 >;  /**< Transmit Error Counter  */
  };

  /**
   * Transfer Command Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using MB0     = regbits< type,  0,  1 >;  /**< Transfer Request for Mailbox 0  */
    using MB1     = regbits< type,  1,  1 >;  /**< Transfer Request for Mailbox 1  */
    using MB2     = regbits< type,  2,  1 >;  /**< Transfer Request for Mailbox 2  */
    using MB3     = regbits< type,  3,  1 >;  /**< Transfer Request for Mailbox 3  */
    using MB4     = regbits< type,  4,  1 >;  /**< Transfer Request for Mailbox 4  */
    using MB5     = regbits< type,  5,  1 >;  /**< Transfer Request for Mailbox 5  */
    using MB6     = regbits< type,  6,  1 >;  /**< Transfer Request for Mailbox 6  */
    using MB7     = regbits< type,  7,  1 >;  /**< Transfer Request for Mailbox 7  */
    using TIMRST  = regbits< type, 31,  1 >;  /**< Timer Reset                     */
  };

  /**
   * Abort Command Register
   */
  struct ACR
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using MB0  = regbits< type,  0,  1 >;  /**< Abort Request for Mailbox 0  */
    using MB1  = regbits< type,  1,  1 >;  /**< Abort Request for Mailbox 1  */
    using MB2  = regbits< type,  2,  1 >;  /**< Abort Request for Mailbox 2  */
    using MB3  = regbits< type,  3,  1 >;  /**< Abort Request for Mailbox 3  */
    using MB4  = regbits< type,  4,  1 >;  /**< Abort Request for Mailbox 4  */
    using MB5  = regbits< type,  5,  1 >;  /**< Abort Request for Mailbox 5  */
    using MB6  = regbits< type,  6,  1 >;  /**< Abort Request for Mailbox 6  */
    using MB7  = regbits< type,  7,  1 >;  /**< Abort Request for Mailbox 7  */
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protection Enable            */
    using WPKEY  = regbits< type,  8, 24 >;  /**< SPI Write Protection Key Password  */
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protection Violation Status  */
    using WPVSRC  = regbits< type,  8,  8 >;  /**< Write Protection Violation Source  */
  };

  /**
   * Mailbox Mode Register (MB = 0)
   */
  struct MMR0
  : public reg< uint32_t, base_addr + 0x00000200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000200, rw, 0x00000000 >;

    using MTIMEMARK  = regbits< type,  0, 16 >;  /**< Mailbox Timemark     */
    using PRIOR      = regbits< type, 16,  4 >;  /**< Mailbox Priority     */
    using MOT        = regbits< type, 24,  3 >;  /**< Mailbox Object Type  */
  };

  /**
   * Mailbox Acceptance Mask Register (MB = 0)
   */
  struct MAM0
  : public reg< uint32_t, base_addr + 0x00000204, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000204, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox ID Register (MB = 0)
   */
  struct MID0
  : public reg< uint32_t, base_addr + 0x00000208, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000208, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox Family ID Register (MB = 0)
   */
  struct MFID0
  : public reg< uint32_t, base_addr + 0x0000020c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000020c, ro, 0x00000000 >;

    using MFID  = regbits< type,  0, 29 >;  /**< Family ID  */
  };

  /**
   * Mailbox Status Register (MB = 0)
   */
  struct MSR0
  : public reg< uint32_t, base_addr + 0x00000210, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000210, ro, 0x00000000 >;

    using MTIMESTAMP  = regbits< type,  0, 16 >;  /**< Timer value                          */
    using MDLC        = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR        = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MABT        = regbits< type, 22,  1 >;  /**< Mailbox Message Abort                */
    using MRDY        = regbits< type, 23,  1 >;  /**< Mailbox Ready                        */
    using MMI         = regbits< type, 24,  1 >;  /**< Mailbox Message Ignored              */
  };

  /**
   * Mailbox Data Low Register (MB = 0)
   */
  struct MDL0
  : public reg< uint32_t, base_addr + 0x00000214, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000214, rw, 0x00000000 >;

    using MDL  = regbits< type,  0, 32 >;  /**< Message Data Low Value  */
  };

  /**
   * Mailbox Data High Register (MB = 0)
   */
  struct MDH0
  : public reg< uint32_t, base_addr + 0x00000218, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000218, rw, 0x00000000 >;

    using MDH  = regbits< type,  0, 32 >;  /**< Message Data High Value  */
  };

  /**
   * Mailbox Control Register (MB = 0)
   */
  struct MCR0
  : public reg< uint32_t, base_addr + 0x0000021c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000021c, wo, 0 >;

    using MDLC  = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR  = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MACR  = regbits< type, 22,  1 >;  /**< Abort Request for Mailbox x          */
    using MTCR  = regbits< type, 23,  1 >;  /**< Mailbox Transfer Command             */
  };

  /**
   * Mailbox Mode Register (MB = 1)
   */
  struct MMR1
  : public reg< uint32_t, base_addr + 0x00000220, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000220, rw, 0x00000000 >;

    using MTIMEMARK  = regbits< type,  0, 16 >;  /**< Mailbox Timemark     */
    using PRIOR      = regbits< type, 16,  4 >;  /**< Mailbox Priority     */
    using MOT        = regbits< type, 24,  3 >;  /**< Mailbox Object Type  */
  };

  /**
   * Mailbox Acceptance Mask Register (MB = 1)
   */
  struct MAM1
  : public reg< uint32_t, base_addr + 0x00000224, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000224, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox ID Register (MB = 1)
   */
  struct MID1
  : public reg< uint32_t, base_addr + 0x00000228, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000228, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox Family ID Register (MB = 1)
   */
  struct MFID1
  : public reg< uint32_t, base_addr + 0x0000022c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000022c, ro, 0x00000000 >;

    using MFID  = regbits< type,  0, 29 >;  /**< Family ID  */
  };

  /**
   * Mailbox Status Register (MB = 1)
   */
  struct MSR1
  : public reg< uint32_t, base_addr + 0x00000230, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000230, ro, 0x00000000 >;

    using MTIMESTAMP  = regbits< type,  0, 16 >;  /**< Timer value                          */
    using MDLC        = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR        = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MABT        = regbits< type, 22,  1 >;  /**< Mailbox Message Abort                */
    using MRDY        = regbits< type, 23,  1 >;  /**< Mailbox Ready                        */
    using MMI         = regbits< type, 24,  1 >;  /**< Mailbox Message Ignored              */
  };

  /**
   * Mailbox Data Low Register (MB = 1)
   */
  struct MDL1
  : public reg< uint32_t, base_addr + 0x00000234, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000234, rw, 0x00000000 >;

    using MDL  = regbits< type,  0, 32 >;  /**< Message Data Low Value  */
  };

  /**
   * Mailbox Data High Register (MB = 1)
   */
  struct MDH1
  : public reg< uint32_t, base_addr + 0x00000238, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000238, rw, 0x00000000 >;

    using MDH  = regbits< type,  0, 32 >;  /**< Message Data High Value  */
  };

  /**
   * Mailbox Control Register (MB = 1)
   */
  struct MCR1
  : public reg< uint32_t, base_addr + 0x0000023c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000023c, wo, 0 >;

    using MDLC  = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR  = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MACR  = regbits< type, 22,  1 >;  /**< Abort Request for Mailbox x          */
    using MTCR  = regbits< type, 23,  1 >;  /**< Mailbox Transfer Command             */
  };

  /**
   * Mailbox Mode Register (MB = 2)
   */
  struct MMR2
  : public reg< uint32_t, base_addr + 0x00000240, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000240, rw, 0x00000000 >;

    using MTIMEMARK  = regbits< type,  0, 16 >;  /**< Mailbox Timemark     */
    using PRIOR      = regbits< type, 16,  4 >;  /**< Mailbox Priority     */
    using MOT        = regbits< type, 24,  3 >;  /**< Mailbox Object Type  */
  };

  /**
   * Mailbox Acceptance Mask Register (MB = 2)
   */
  struct MAM2
  : public reg< uint32_t, base_addr + 0x00000244, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000244, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox ID Register (MB = 2)
   */
  struct MID2
  : public reg< uint32_t, base_addr + 0x00000248, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000248, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox Family ID Register (MB = 2)
   */
  struct MFID2
  : public reg< uint32_t, base_addr + 0x0000024c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000024c, ro, 0x00000000 >;

    using MFID  = regbits< type,  0, 29 >;  /**< Family ID  */
  };

  /**
   * Mailbox Status Register (MB = 2)
   */
  struct MSR2
  : public reg< uint32_t, base_addr + 0x00000250, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000250, ro, 0x00000000 >;

    using MTIMESTAMP  = regbits< type,  0, 16 >;  /**< Timer value                          */
    using MDLC        = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR        = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MABT        = regbits< type, 22,  1 >;  /**< Mailbox Message Abort                */
    using MRDY        = regbits< type, 23,  1 >;  /**< Mailbox Ready                        */
    using MMI         = regbits< type, 24,  1 >;  /**< Mailbox Message Ignored              */
  };

  /**
   * Mailbox Data Low Register (MB = 2)
   */
  struct MDL2
  : public reg< uint32_t, base_addr + 0x00000254, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000254, rw, 0x00000000 >;

    using MDL  = regbits< type,  0, 32 >;  /**< Message Data Low Value  */
  };

  /**
   * Mailbox Data High Register (MB = 2)
   */
  struct MDH2
  : public reg< uint32_t, base_addr + 0x00000258, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000258, rw, 0x00000000 >;

    using MDH  = regbits< type,  0, 32 >;  /**< Message Data High Value  */
  };

  /**
   * Mailbox Control Register (MB = 2)
   */
  struct MCR2
  : public reg< uint32_t, base_addr + 0x0000025c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000025c, wo, 0 >;

    using MDLC  = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR  = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MACR  = regbits< type, 22,  1 >;  /**< Abort Request for Mailbox x          */
    using MTCR  = regbits< type, 23,  1 >;  /**< Mailbox Transfer Command             */
  };

  /**
   * Mailbox Mode Register (MB = 3)
   */
  struct MMR3
  : public reg< uint32_t, base_addr + 0x00000260, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000260, rw, 0x00000000 >;

    using MTIMEMARK  = regbits< type,  0, 16 >;  /**< Mailbox Timemark     */
    using PRIOR      = regbits< type, 16,  4 >;  /**< Mailbox Priority     */
    using MOT        = regbits< type, 24,  3 >;  /**< Mailbox Object Type  */
  };

  /**
   * Mailbox Acceptance Mask Register (MB = 3)
   */
  struct MAM3
  : public reg< uint32_t, base_addr + 0x00000264, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000264, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox ID Register (MB = 3)
   */
  struct MID3
  : public reg< uint32_t, base_addr + 0x00000268, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000268, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox Family ID Register (MB = 3)
   */
  struct MFID3
  : public reg< uint32_t, base_addr + 0x0000026c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000026c, ro, 0x00000000 >;

    using MFID  = regbits< type,  0, 29 >;  /**< Family ID  */
  };

  /**
   * Mailbox Status Register (MB = 3)
   */
  struct MSR3
  : public reg< uint32_t, base_addr + 0x00000270, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000270, ro, 0x00000000 >;

    using MTIMESTAMP  = regbits< type,  0, 16 >;  /**< Timer value                          */
    using MDLC        = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR        = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MABT        = regbits< type, 22,  1 >;  /**< Mailbox Message Abort                */
    using MRDY        = regbits< type, 23,  1 >;  /**< Mailbox Ready                        */
    using MMI         = regbits< type, 24,  1 >;  /**< Mailbox Message Ignored              */
  };

  /**
   * Mailbox Data Low Register (MB = 3)
   */
  struct MDL3
  : public reg< uint32_t, base_addr + 0x00000274, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000274, rw, 0x00000000 >;

    using MDL  = regbits< type,  0, 32 >;  /**< Message Data Low Value  */
  };

  /**
   * Mailbox Data High Register (MB = 3)
   */
  struct MDH3
  : public reg< uint32_t, base_addr + 0x00000278, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000278, rw, 0x00000000 >;

    using MDH  = regbits< type,  0, 32 >;  /**< Message Data High Value  */
  };

  /**
   * Mailbox Control Register (MB = 3)
   */
  struct MCR3
  : public reg< uint32_t, base_addr + 0x0000027c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000027c, wo, 0 >;

    using MDLC  = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR  = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MACR  = regbits< type, 22,  1 >;  /**< Abort Request for Mailbox x          */
    using MTCR  = regbits< type, 23,  1 >;  /**< Mailbox Transfer Command             */
  };

  /**
   * Mailbox Mode Register (MB = 4)
   */
  struct MMR4
  : public reg< uint32_t, base_addr + 0x00000280, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000280, rw, 0x00000000 >;

    using MTIMEMARK  = regbits< type,  0, 16 >;  /**< Mailbox Timemark     */
    using PRIOR      = regbits< type, 16,  4 >;  /**< Mailbox Priority     */
    using MOT        = regbits< type, 24,  3 >;  /**< Mailbox Object Type  */
  };

  /**
   * Mailbox Acceptance Mask Register (MB = 4)
   */
  struct MAM4
  : public reg< uint32_t, base_addr + 0x00000284, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000284, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox ID Register (MB = 4)
   */
  struct MID4
  : public reg< uint32_t, base_addr + 0x00000288, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000288, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox Family ID Register (MB = 4)
   */
  struct MFID4
  : public reg< uint32_t, base_addr + 0x0000028c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000028c, ro, 0x00000000 >;

    using MFID  = regbits< type,  0, 29 >;  /**< Family ID  */
  };

  /**
   * Mailbox Status Register (MB = 4)
   */
  struct MSR4
  : public reg< uint32_t, base_addr + 0x00000290, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000290, ro, 0x00000000 >;

    using MTIMESTAMP  = regbits< type,  0, 16 >;  /**< Timer value                          */
    using MDLC        = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR        = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MABT        = regbits< type, 22,  1 >;  /**< Mailbox Message Abort                */
    using MRDY        = regbits< type, 23,  1 >;  /**< Mailbox Ready                        */
    using MMI         = regbits< type, 24,  1 >;  /**< Mailbox Message Ignored              */
  };

  /**
   * Mailbox Data Low Register (MB = 4)
   */
  struct MDL4
  : public reg< uint32_t, base_addr + 0x00000294, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000294, rw, 0x00000000 >;

    using MDL  = regbits< type,  0, 32 >;  /**< Message Data Low Value  */
  };

  /**
   * Mailbox Data High Register (MB = 4)
   */
  struct MDH4
  : public reg< uint32_t, base_addr + 0x00000298, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000298, rw, 0x00000000 >;

    using MDH  = regbits< type,  0, 32 >;  /**< Message Data High Value  */
  };

  /**
   * Mailbox Control Register (MB = 4)
   */
  struct MCR4
  : public reg< uint32_t, base_addr + 0x0000029c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000029c, wo, 0 >;

    using MDLC  = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR  = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MACR  = regbits< type, 22,  1 >;  /**< Abort Request for Mailbox x          */
    using MTCR  = regbits< type, 23,  1 >;  /**< Mailbox Transfer Command             */
  };

  /**
   * Mailbox Mode Register (MB = 5)
   */
  struct MMR5
  : public reg< uint32_t, base_addr + 0x000002a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a0, rw, 0x00000000 >;

    using MTIMEMARK  = regbits< type,  0, 16 >;  /**< Mailbox Timemark     */
    using PRIOR      = regbits< type, 16,  4 >;  /**< Mailbox Priority     */
    using MOT        = regbits< type, 24,  3 >;  /**< Mailbox Object Type  */
  };

  /**
   * Mailbox Acceptance Mask Register (MB = 5)
   */
  struct MAM5
  : public reg< uint32_t, base_addr + 0x000002a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a4, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox ID Register (MB = 5)
   */
  struct MID5
  : public reg< uint32_t, base_addr + 0x000002a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002a8, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox Family ID Register (MB = 5)
   */
  struct MFID5
  : public reg< uint32_t, base_addr + 0x000002ac, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002ac, ro, 0x00000000 >;

    using MFID  = regbits< type,  0, 29 >;  /**< Family ID  */
  };

  /**
   * Mailbox Status Register (MB = 5)
   */
  struct MSR5
  : public reg< uint32_t, base_addr + 0x000002b0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002b0, ro, 0x00000000 >;

    using MTIMESTAMP  = regbits< type,  0, 16 >;  /**< Timer value                          */
    using MDLC        = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR        = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MABT        = regbits< type, 22,  1 >;  /**< Mailbox Message Abort                */
    using MRDY        = regbits< type, 23,  1 >;  /**< Mailbox Ready                        */
    using MMI         = regbits< type, 24,  1 >;  /**< Mailbox Message Ignored              */
  };

  /**
   * Mailbox Data Low Register (MB = 5)
   */
  struct MDL5
  : public reg< uint32_t, base_addr + 0x000002b4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002b4, rw, 0x00000000 >;

    using MDL  = regbits< type,  0, 32 >;  /**< Message Data Low Value  */
  };

  /**
   * Mailbox Data High Register (MB = 5)
   */
  struct MDH5
  : public reg< uint32_t, base_addr + 0x000002b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002b8, rw, 0x00000000 >;

    using MDH  = regbits< type,  0, 32 >;  /**< Message Data High Value  */
  };

  /**
   * Mailbox Control Register (MB = 5)
   */
  struct MCR5
  : public reg< uint32_t, base_addr + 0x000002bc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002bc, wo, 0 >;

    using MDLC  = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR  = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MACR  = regbits< type, 22,  1 >;  /**< Abort Request for Mailbox x          */
    using MTCR  = regbits< type, 23,  1 >;  /**< Mailbox Transfer Command             */
  };

  /**
   * Mailbox Mode Register (MB = 6)
   */
  struct MMR6
  : public reg< uint32_t, base_addr + 0x000002c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c0, rw, 0x00000000 >;

    using MTIMEMARK  = regbits< type,  0, 16 >;  /**< Mailbox Timemark     */
    using PRIOR      = regbits< type, 16,  4 >;  /**< Mailbox Priority     */
    using MOT        = regbits< type, 24,  3 >;  /**< Mailbox Object Type  */
  };

  /**
   * Mailbox Acceptance Mask Register (MB = 6)
   */
  struct MAM6
  : public reg< uint32_t, base_addr + 0x000002c4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c4, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox ID Register (MB = 6)
   */
  struct MID6
  : public reg< uint32_t, base_addr + 0x000002c8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002c8, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox Family ID Register (MB = 6)
   */
  struct MFID6
  : public reg< uint32_t, base_addr + 0x000002cc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002cc, ro, 0x00000000 >;

    using MFID  = regbits< type,  0, 29 >;  /**< Family ID  */
  };

  /**
   * Mailbox Status Register (MB = 6)
   */
  struct MSR6
  : public reg< uint32_t, base_addr + 0x000002d0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d0, ro, 0x00000000 >;

    using MTIMESTAMP  = regbits< type,  0, 16 >;  /**< Timer value                          */
    using MDLC        = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR        = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MABT        = regbits< type, 22,  1 >;  /**< Mailbox Message Abort                */
    using MRDY        = regbits< type, 23,  1 >;  /**< Mailbox Ready                        */
    using MMI         = regbits< type, 24,  1 >;  /**< Mailbox Message Ignored              */
  };

  /**
   * Mailbox Data Low Register (MB = 6)
   */
  struct MDL6
  : public reg< uint32_t, base_addr + 0x000002d4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d4, rw, 0x00000000 >;

    using MDL  = regbits< type,  0, 32 >;  /**< Message Data Low Value  */
  };

  /**
   * Mailbox Data High Register (MB = 6)
   */
  struct MDH6
  : public reg< uint32_t, base_addr + 0x000002d8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002d8, rw, 0x00000000 >;

    using MDH  = regbits< type,  0, 32 >;  /**< Message Data High Value  */
  };

  /**
   * Mailbox Control Register (MB = 6)
   */
  struct MCR6
  : public reg< uint32_t, base_addr + 0x000002dc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002dc, wo, 0 >;

    using MDLC  = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR  = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MACR  = regbits< type, 22,  1 >;  /**< Abort Request for Mailbox x          */
    using MTCR  = regbits< type, 23,  1 >;  /**< Mailbox Transfer Command             */
  };

  /**
   * Mailbox Mode Register (MB = 7)
   */
  struct MMR7
  : public reg< uint32_t, base_addr + 0x000002e0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e0, rw, 0x00000000 >;

    using MTIMEMARK  = regbits< type,  0, 16 >;  /**< Mailbox Timemark     */
    using PRIOR      = regbits< type, 16,  4 >;  /**< Mailbox Priority     */
    using MOT        = regbits< type, 24,  3 >;  /**< Mailbox Object Type  */
  };

  /**
   * Mailbox Acceptance Mask Register (MB = 7)
   */
  struct MAM7
  : public reg< uint32_t, base_addr + 0x000002e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e4, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox ID Register (MB = 7)
   */
  struct MID7
  : public reg< uint32_t, base_addr + 0x000002e8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002e8, rw, 0x00000000 >;

    using MIDvB  = regbits< type,  0, 18 >;  /**< Complementary bits for identifier in extended frame mode  */
    using MIDvA  = regbits< type, 18, 11 >;  /**< Identifier for standard frame mode                        */
    using MIDE   = regbits< type, 29,  1 >;  /**< Identifier Version                                        */
  };

  /**
   * Mailbox Family ID Register (MB = 7)
   */
  struct MFID7
  : public reg< uint32_t, base_addr + 0x000002ec, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002ec, ro, 0x00000000 >;

    using MFID  = regbits< type,  0, 29 >;  /**< Family ID  */
  };

  /**
   * Mailbox Status Register (MB = 7)
   */
  struct MSR7
  : public reg< uint32_t, base_addr + 0x000002f0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002f0, ro, 0x00000000 >;

    using MTIMESTAMP  = regbits< type,  0, 16 >;  /**< Timer value                          */
    using MDLC        = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR        = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MABT        = regbits< type, 22,  1 >;  /**< Mailbox Message Abort                */
    using MRDY        = regbits< type, 23,  1 >;  /**< Mailbox Ready                        */
    using MMI         = regbits< type, 24,  1 >;  /**< Mailbox Message Ignored              */
  };

  /**
   * Mailbox Data Low Register (MB = 7)
   */
  struct MDL7
  : public reg< uint32_t, base_addr + 0x000002f4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002f4, rw, 0x00000000 >;

    using MDL  = regbits< type,  0, 32 >;  /**< Message Data Low Value  */
  };

  /**
   * Mailbox Data High Register (MB = 7)
   */
  struct MDH7
  : public reg< uint32_t, base_addr + 0x000002f8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000002f8, rw, 0x00000000 >;

    using MDH  = regbits< type,  0, 32 >;  /**< Message Data High Value  */
  };

  /**
   * Mailbox Control Register (MB = 7)
   */
  struct MCR7
  : public reg< uint32_t, base_addr + 0x000002fc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000002fc, wo, 0 >;

    using MDLC  = regbits< type, 16,  4 >;  /**< Mailbox Data Length Code             */
    using MRTR  = regbits< type, 20,  1 >;  /**< Mailbox Remote Transmission Request  */
    using MACR  = regbits< type, 22,  1 >;  /**< Abort Request for Mailbox x          */
    using MTCR  = regbits< type, 23,  1 >;  /**< Mailbox Transfer Command             */
  };
};
} // namespace mptl

#endif // ARCH_REG_CAN0_HPP_INCLUDED
