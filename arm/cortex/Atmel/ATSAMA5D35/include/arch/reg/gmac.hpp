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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D35.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D35
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D35 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, dual Ethernet, dual CAN, security (refer to http://www.atmel.com/devices/SAMA5D35.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_GMAC_HPP_INCLUDED
#define ARCH_REG_GMAC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Gigabit Ethernet MAC
 */
struct GMAC
{
  static constexpr reg_addr_t base_addr = 0xf0028000;

  /**
   * Network Control Register
   */
  struct NCR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using LB       = regbits< type,  0,  1 >;  /**< Loop Back                                  */
    using LBL      = regbits< type,  1,  1 >;  /**< Loop Back Local                            */
    using RXEN     = regbits< type,  2,  1 >;  /**< Receive Enable                             */
    using TXEN     = regbits< type,  3,  1 >;  /**< Transmit Enable                            */
    using MPE      = regbits< type,  4,  1 >;  /**< Management Port Enable                     */
    using CLRSTAT  = regbits< type,  5,  1 >;  /**< Clear Statistics Registers                 */
    using INCSTAT  = regbits< type,  6,  1 >;  /**< Increment Statistics Registers             */
    using WESTAT   = regbits< type,  7,  1 >;  /**< Write Enable for Statistics Registers      */
    using BP       = regbits< type,  8,  1 >;  /**< Back pressure                              */
    using TSTART   = regbits< type,  9,  1 >;  /**< Start Transmission                         */
    using THALT    = regbits< type, 10,  1 >;  /**< Transmit Halt                              */
    using TXPF     = regbits< type, 11,  1 >;  /**< Transmit Pause Frame                       */
    using TXZQPF   = regbits< type, 12,  1 >;  /**< Transmit Zero Quantum Pause Frame          */
    using RDS      = regbits< type, 14,  1 >;  /**< Read Snapshot                              */
    using SRTSM    = regbits< type, 15,  1 >;  /**< Store Receive Time Stamp to Memory         */
    using ENPBPR   = regbits< type, 16,  1 >;  /**< Enable PFC Priority-based Pause Reception  */
    using TXPBPF   = regbits< type, 17,  1 >;  /**< Transmit PFC Priority-based Pause Frame    */
    using FNP      = regbits< type, 18,  1 >;  /**< Flush Next Packet                          */
  };

  /**
   * Network Configuration Register
   */
  struct NCFGR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00080000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00080000 >;

    using SPD     = regbits< type,  0,  1 >;  /**< Speed                                  */
    using FD      = regbits< type,  1,  1 >;  /**< Full Duplex                            */
    using DNVLAN  = regbits< type,  2,  1 >;  /**< Discard Non-VLAN FRAMES                */
    using JFRAME  = regbits< type,  3,  1 >;  /**< Jumbo Frame Size                       */
    using CAF     = regbits< type,  4,  1 >;  /**< Copy All Frames                        */
    using NBC     = regbits< type,  5,  1 >;  /**< No Broadcast                           */
    using MTIHEN  = regbits< type,  6,  1 >;  /**< Multicast Hash Enable                  */
    using UNIHEN  = regbits< type,  7,  1 >;  /**< Unicast Hash Enable                    */
    using MAXFS   = regbits< type,  8,  1 >;  /**< 1536 Maximum Frame Size                */
    using GBE     = regbits< type, 10,  1 >;  /**< Gigabit Mode Enable                    */
    using PIS     = regbits< type, 11,  1 >;  /**< Physical Interface Select              */
    using RTY     = regbits< type, 12,  1 >;  /**< Retry Test                             */
    using PEN     = regbits< type, 13,  1 >;  /**< Pause Enable                           */
    using RXBUFO  = regbits< type, 14,  2 >;  /**< Receive Buffer Offset                  */
    using LFERD   = regbits< type, 16,  1 >;  /**< Length Field Error Frame Discard       */
    using RFCS    = regbits< type, 17,  1 >;  /**< Remove FCS                             */
    using CLK     = regbits< type, 18,  3 >;  /**< MDC CLock Division                     */
    using DBW     = regbits< type, 21,  2 >;  /**< Data Bus Width                         */
    using DCPF    = regbits< type, 23,  1 >;  /**< Disable Copy of Pause Frames           */
    using RXCOEN  = regbits< type, 24,  1 >;  /**< Receive Checksum Offload Enable        */
    using EFRHD   = regbits< type, 25,  1 >;  /**< Enable Frames Received in Half Duplex  */
    using IRXFCS  = regbits< type, 26,  1 >;  /**< Ignore RX FCS                          */
    using IPGSEN  = regbits< type, 28,  1 >;  /**< IP Stretch Enable                      */
    using RXBP    = regbits< type, 29,  1 >;  /**< Receive Bad Preamble                   */
    using IRXER   = regbits< type, 30,  1 >;  /**< Ignore IPG rx_er                       */
  };

  /**
   * Network Status Register
   */
  struct NSR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using MDIO  = regbits< type,  1,  1 >;  /**< MDIO Input Status          */
    using IDLE  = regbits< type,  2,  1 >;  /**< PHY Management Logic Idle  */
  };

  /**
   * User Register
   */
  struct UR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using RGMII  = regbits< type,  0,  1 >;  /**< RGMII Mode                */
    using HDFC   = regbits< type,  6,  1 >;  /**< Half Duplex Flow Control  */
    using BPDG   = regbits< type,  7,  1 >;  /**< BPDG Bypass Deglitchers   */
  };

  /**
   * DMA Configuration Register
   */
  struct DCFGR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00020004 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00020004 >;

    using FBLDO   = regbits< type,  0,  5 >;  /**< Fixed Burst Length for DMA Data Operations:                 */
    using ESMA    = regbits< type,  6,  1 >;  /**< Endian Swap Mode Enable for Management Descriptor Accesses  */
    using ESPA    = regbits< type,  7,  1 >;  /**< Endian Swap Mode Enable for Packet Data Accesses            */
    using RXBMS   = regbits< type,  8,  2 >;  /**< Receiver Packet Buffer Memory Size Select                   */
    using TXPBMS  = regbits< type, 10,  1 >;  /**< Transmitter Packet Buffer Memory Size Select                */
    using TXCOEN  = regbits< type, 11,  1 >;  /**< Transmitter Checksum Generation Offload Enable              */
    using DRBS    = regbits< type, 16,  8 >;  /**< DMA Receive Buffer Size                                     */
    using DDRP    = regbits< type, 24,  1 >;  /**< DMA Discard Receive Packets                                 */
  };

  /**
   * Transmit Status Register
   */
  struct TSR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >;

    using UBR     = regbits< type,  0,  1 >;  /**< Used Bit Read                               */
    using COL     = regbits< type,  1,  1 >;  /**< Collision Occurred                          */
    using RLE     = regbits< type,  2,  1 >;  /**< Retry Limit Exceeded                        */
    using TXGO    = regbits< type,  3,  1 >;  /**< Transmit Go                                 */
    using TFC     = regbits< type,  4,  1 >;  /**< Transmit Frame Corruption due to AHB error  */
    using TXCOMP  = regbits< type,  5,  1 >;  /**< Transmit Complete                           */
    using UND     = regbits< type,  6,  1 >;  /**< Transmit Under Run                          */
    using LCO     = regbits< type,  7,  1 >;  /**< Late Collision Occurred                     */
    using HRESP   = regbits< type,  8,  1 >;  /**< HRESP Not OK                                */
  };

  /**
   * Receive Buffer Queue Base Address
   */
  struct RBQB
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using ADDR  = regbits< type,  2, 30 >;  /**< Receive buffer queue base address  */
  };

  /**
   * Transmit Buffer Queue Base Address
   */
  struct TBQB
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    using ADDR  = regbits< type,  2, 30 >;  /**< Transmit Buffer Queue Base Address  */
  };

  /**
   * Receive Status Register
   */
  struct RSR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using BNA    = regbits< type,  0,  1 >;  /**< Buffer Not Available  */
    using REC    = regbits< type,  1,  1 >;  /**< Frame Received        */
    using RXOVR  = regbits< type,  2,  1 >;  /**< Receive Overrun       */
    using HNO    = regbits< type,  3,  1 >;  /**< HRESP Not OK          */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >;

    using MFS     = regbits< type,  0,  1 >;  /**< Management Frame Sent                             */
    using RCOMP   = regbits< type,  1,  1 >;  /**< Receive Complete                                  */
    using RXUBR   = regbits< type,  2,  1 >;  /**< RX Used Bit Read                                  */
    using TXUBR   = regbits< type,  3,  1 >;  /**< TX Used Bit Read                                  */
    using TUR     = regbits< type,  4,  1 >;  /**< Transmit Under Run                                */
    using RLEX    = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded or Late Collision            */
    using TFC     = regbits< type,  6,  1 >;  /**< Transmit Frame Corruption due to AHB error        */
    using TCOMP   = regbits< type,  7,  1 >;  /**< Transmit Complete                                 */
    using ROVR    = regbits< type, 10,  1 >;  /**< Receive Overrun                                   */
    using HRESP   = regbits< type, 11,  1 >;  /**< HRESP Not OK                                      */
    using PFNZ    = regbits< type, 12,  1 >;  /**< Pause Frame with Non-zero Pause Quantum Received  */
    using PTZ     = regbits< type, 13,  1 >;  /**< Pause Time Zero                                   */
    using PFTR    = regbits< type, 14,  1 >;  /**< Pause Frame Transmitted                           */
    using EXINT   = regbits< type, 15,  1 >;  /**< External Interrupt                                */
    using DRQFR   = regbits< type, 18,  1 >;  /**< PTP Delay Request Frame Received                  */
    using SFR     = regbits< type, 19,  1 >;  /**< PTP Sync Frame Received                           */
    using DRQFT   = regbits< type, 20,  1 >;  /**< PTP Delay Request Frame Transmitted               */
    using SFT     = regbits< type, 21,  1 >;  /**< PTP Sync Frame Transmitted                        */
    using PDRQFR  = regbits< type, 22,  1 >;  /**< PDelay Request Frame Received                     */
    using PDRSFR  = regbits< type, 23,  1 >;  /**< PDelay Response Frame Received                    */
    using PDRQFT  = regbits< type, 24,  1 >;  /**< PDelay Request Frame Transmitted                  */
    using PDRSFT  = regbits< type, 25,  1 >;  /**< PDelay Response Frame Transmitted                 */
    using SRI     = regbits< type, 26,  1 >;  /**< TSU Seconds Register Increment                    */
    using WOL     = regbits< type, 28,  1 >;  /**< Wake On LAN                                       */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using MFS     = regbits< type,  0,  1 >;  /**< Management Frame Sent                             */
    using RCOMP   = regbits< type,  1,  1 >;  /**< Receive Complete                                  */
    using RXUBR   = regbits< type,  2,  1 >;  /**< RX Used Bit Read                                  */
    using TXUBR   = regbits< type,  3,  1 >;  /**< TX Used Bit Read                                  */
    using TUR     = regbits< type,  4,  1 >;  /**< Transmit Under Run                                */
    using RLEX    = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded or Late Collision            */
    using TFC     = regbits< type,  6,  1 >;  /**< Transmit Frame Corruption due to AHB error        */
    using TCOMP   = regbits< type,  7,  1 >;  /**< Transmit Complete                                 */
    using ROVR    = regbits< type, 10,  1 >;  /**< Receive Overrun                                   */
    using HRESP   = regbits< type, 11,  1 >;  /**< HRESP Not OK                                      */
    using PFNZ    = regbits< type, 12,  1 >;  /**< Pause Frame with Non-zero Pause Quantum Received  */
    using PTZ     = regbits< type, 13,  1 >;  /**< Pause Time Zero                                   */
    using PFTR    = regbits< type, 14,  1 >;  /**< Pause Frame Transmitted                           */
    using EXINT   = regbits< type, 15,  1 >;  /**< External Interrupt                                */
    using DRQFR   = regbits< type, 18,  1 >;  /**< PTP Delay Request Frame Received                  */
    using SFR     = regbits< type, 19,  1 >;  /**< PTP Sync Frame Received                           */
    using DRQFT   = regbits< type, 20,  1 >;  /**< PTP Delay Request Frame Transmitted               */
    using SFT     = regbits< type, 21,  1 >;  /**< PTP Sync Frame Transmitted                        */
    using PDRQFR  = regbits< type, 22,  1 >;  /**< PDelay Request Frame Received                     */
    using PDRSFR  = regbits< type, 23,  1 >;  /**< PDelay Response Frame Received                    */
    using PDRQFT  = regbits< type, 24,  1 >;  /**< PDelay Request Frame Transmitted                  */
    using PDRSFT  = regbits< type, 25,  1 >;  /**< PDelay Response Frame Transmitted                 */
    using SRI     = regbits< type, 26,  1 >;  /**< TSU Seconds Register Increment                    */
    using WOL     = regbits< type, 28,  1 >;  /**< Wake On LAN                                       */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x0000002c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, wo, 0 >;

    using MFS     = regbits< type,  0,  1 >;  /**< Management Frame Sent                             */
    using RCOMP   = regbits< type,  1,  1 >;  /**< Receive Complete                                  */
    using RXUBR   = regbits< type,  2,  1 >;  /**< RX Used Bit Read                                  */
    using TXUBR   = regbits< type,  3,  1 >;  /**< TX Used Bit Read                                  */
    using TUR     = regbits< type,  4,  1 >;  /**< Transmit Under Run                                */
    using RLEX    = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded or Late Collision            */
    using TFC     = regbits< type,  6,  1 >;  /**< Transmit Frame Corruption due to AHB error        */
    using TCOMP   = regbits< type,  7,  1 >;  /**< Transmit Complete                                 */
    using ROVR    = regbits< type, 10,  1 >;  /**< Receive Overrun                                   */
    using HRESP   = regbits< type, 11,  1 >;  /**< HRESP Not OK                                      */
    using PFNZ    = regbits< type, 12,  1 >;  /**< Pause Frame with Non-zero Pause Quantum Received  */
    using PTZ     = regbits< type, 13,  1 >;  /**< Pause Time Zero                                   */
    using PFTR    = regbits< type, 14,  1 >;  /**< Pause Frame Transmitted                           */
    using EXINT   = regbits< type, 15,  1 >;  /**< External Interrupt                                */
    using DRQFR   = regbits< type, 18,  1 >;  /**< PTP Delay Request Frame Received                  */
    using SFR     = regbits< type, 19,  1 >;  /**< PTP Sync Frame Received                           */
    using DRQFT   = regbits< type, 20,  1 >;  /**< PTP Delay Request Frame Transmitted               */
    using SFT     = regbits< type, 21,  1 >;  /**< PTP Sync Frame Transmitted                        */
    using PDRQFR  = regbits< type, 22,  1 >;  /**< PDelay Request Frame Received                     */
    using PDRSFR  = regbits< type, 23,  1 >;  /**< PDelay Response Frame Received                    */
    using PDRQFT  = regbits< type, 24,  1 >;  /**< PDelay Request Frame Transmitted                  */
    using PDRSFT  = regbits< type, 25,  1 >;  /**< PDelay Response Frame Transmitted                 */
    using SRI     = regbits< type, 26,  1 >;  /**< TSU Seconds Register Increment                    */
    using WOL     = regbits< type, 28,  1 >;  /**< Wake On LAN                                       */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x07FFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x07FFFFFF >;

    using MFS     = regbits< type,  0,  1 >;  /**< Management Frame Sent                             */
    using RCOMP   = regbits< type,  1,  1 >;  /**< Receive Complete                                  */
    using RXUBR   = regbits< type,  2,  1 >;  /**< RX Used Bit Read                                  */
    using TXUBR   = regbits< type,  3,  1 >;  /**< TX Used Bit Read                                  */
    using TUR     = regbits< type,  4,  1 >;  /**< Transmit Under Run                                */
    using RLEX    = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded or Late Collision            */
    using TFC     = regbits< type,  6,  1 >;  /**< Transmit Frame Corruption due to AHB error        */
    using TCOMP   = regbits< type,  7,  1 >;  /**< Transmit Complete                                 */
    using ROVR    = regbits< type, 10,  1 >;  /**< Receive Overrun                                   */
    using HRESP   = regbits< type, 11,  1 >;  /**< HRESP Not OK                                      */
    using PFNZ    = regbits< type, 12,  1 >;  /**< Pause Frame with Non-zero Pause Quantum Received  */
    using PTZ     = regbits< type, 13,  1 >;  /**< Pause Time Zero                                   */
    using PFTR    = regbits< type, 14,  1 >;  /**< Pause Frame Transmitted                           */
    using EXINT   = regbits< type, 15,  1 >;  /**< External Interrupt                                */
    using DRQFR   = regbits< type, 18,  1 >;  /**< PTP Delay Request Frame Received                  */
    using SFR     = regbits< type, 19,  1 >;  /**< PTP Sync Frame Received                           */
    using DRQFT   = regbits< type, 20,  1 >;  /**< PTP Delay Request Frame Transmitted               */
    using SFT     = regbits< type, 21,  1 >;  /**< PTP Sync Frame Transmitted                        */
    using PDRQFR  = regbits< type, 22,  1 >;  /**< PDelay Request Frame Received                     */
    using PDRSFR  = regbits< type, 23,  1 >;  /**< PDelay Response Frame Received                    */
    using PDRQFT  = regbits< type, 24,  1 >;  /**< PDelay Request Frame Transmitted                  */
    using PDRSFT  = regbits< type, 25,  1 >;  /**< PDelay Response Frame Transmitted                 */
  };

  /**
   * PHY Maintenance Register
   */
  struct MAN
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >;

    using DATA   = regbits< type,  0, 16 >;  /**< PHY Data             */
    using WTN    = regbits< type, 16,  2 >;  /**< Write Ten            */
    using REGA   = regbits< type, 18,  5 >;  /**< Register Address     */
    using PHYA   = regbits< type, 23,  5 >;  /**< PHY Address          */
    using OP     = regbits< type, 28,  2 >;  /**< Operation            */
    using CLTTO  = regbits< type, 30,  1 >;  /**< Clause 22 Operation  */
    using WZO    = regbits< type, 31,  1 >;  /**< Write ZERO           */
  };

  /**
   * Received Pause Quantum Register
   */
  struct RPQ
  : public reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: RPQ
    using RPQ_ = regbits< type,  0, 16 >;  /**< Received Pause Quantum  */
  };

  /**
   * Transmit Pause Quantum Register
   */
  struct TPQ
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x0000FFFF >;

    // fixme: Field name equals parent register name: TPQ
    using TPQ_ = regbits< type,  0, 16 >;  /**< Transmit Pause Quantum  */
  };

  /**
   * TX Partial Store and Forward Register
   */
  struct TPSF
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >;

    using TPB1ADR  = regbits< type,  0, 12 >;  /**< tx_pbuf_addr-1:0                               */
    using ENTXP    = regbits< type, 31,  1 >;  /**< Enable TX Partial Store and Forward Operation  */
  };

  /**
   * RX Partial Store and Forward Register
   */
  struct RPSF
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using RPB1ADR  = regbits< type,  0, 12 >;  /**< rx_pbuf_addr-1:0                               */
    using ENRXP    = regbits< type, 31,  1 >;  /**< Enable RX Partial Store and Forward Operation  */
  };

  /**
   * Hash Register Bottom [31:0]
   */
  struct HRB
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< Hash Address  */
  };

  /**
   * Hash Register Top [63:32]
   */
  struct HRT
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< Hash Address  */
  };

  /**
   * Specific Address 1 Bottom [31:0] Register
   */
  struct SAB1
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< Specific Address 1  */
  };

  /**
   * Specific Address 1 Top [47:32] Register
   */
  struct SAT1
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 16 >;  /**< Specific Address 1  */
  };

  /**
   * Specific Address 2 Bottom [31:0] Register
   */
  struct SAB2
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< Specific Address 2  */
  };

  /**
   * Specific Address 2 Top [47:32] Register
   */
  struct SAT2
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 16 >;  /**< Specific Address 2  */
  };

  /**
   * Specific Address 3 Bottom [31:0] Register
   */
  struct SAB3
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< Specific Address 3  */
  };

  /**
   * Specific Address 3 Top [47:32] Register
   */
  struct SAT3
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 16 >;  /**< Specific Address 3  */
  };

  /**
   * Specific Address 4 Bottom [31:0] Register
   */
  struct SAB4
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< Specific Address 4  */
  };

  /**
   * Specific Address 4 Top [47:32] Register
   */
  struct SAT4
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 16 >;  /**< Specific Address 4  */
  };

  /**
   * Type ID Match 1 Register
   */
  struct TIDM[%s]
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TID  = regbits< type,  0, 16 >;  /**< Type ID Match 1  */
  };

  /**
   * Wake on LAN Register
   */
  struct WOL
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >;

    using IP   = regbits< type,  0, 16 >;  /**< ARP Request IP Address                    */
    using MAG  = regbits< type, 16,  1 >;  /**< Magic Packet Event Enable                 */
    using ARP  = regbits< type, 17,  1 >;  /**< ARP Request IP Address                    */
    using SA1  = regbits< type, 18,  1 >;  /**< Specific Address Register 1 Event Enable  */
    using MTI  = regbits< type, 19,  1 >;  /**< Multicast Hash Event Enable               */
  };

  /**
   * IPG Stretch Register
   */
  struct IPGS
  : public reg< uint32_t, base_addr + 0x000000bc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, rw, 0x00000000 >;

    using FL  = regbits< type,  0, 16 >;  /**< Frame Length  */
  };

  /**
   * Stacked VLAN Register
   */
  struct SVLAN
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >;

    using VLAN_TYPE  = regbits< type,  0, 16 >;  /**< User Defined VLAN_TYPE Field         */
    using ESVLAN     = regbits< type, 31,  1 >;  /**< Enable Stacked VLAN Processing Mode  */
  };

  /**
   * Transmit PFC Pause Register
   */
  struct TPFCP
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, rw, 0x00000000 >;

    using PEV  = regbits< type,  0,  8 >;  /**< Priority Enable Vector  */
    using PQ   = regbits< type,  8,  8 >;  /**< Pause Quantum           */
  };

  /**
   * Specific Address 1 Mask Bottom [31:0] Register
   */
  struct SAMB1
  : public reg< uint32_t, base_addr + 0x000000c8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;  /**< Specific Address 1 Mask  */
  };

  /**
   * Specific Address 1 Mask Top [47:32] Register
   */
  struct SAMT1
  : public reg< uint32_t, base_addr + 0x000000cc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000cc, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 16 >;  /**< Specific Address 1 Mask  */
  };

  /**
   * Octets Transmitted [31:0] Register
   */
  struct OTLO
  : public reg< uint32_t, base_addr + 0x00000100, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, ro, 0x00000000 >;

    using TXO  = regbits< type,  0, 32 >;  /**< Transmitted Octets  */
  };

  /**
   * Octets Transmitted [47:32] Register
   */
  struct OTHI
  : public reg< uint32_t, base_addr + 0x00000104, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, ro, 0x00000000 >;

    using TXO  = regbits< type,  0, 16 >;  /**< Transmitted Octets  */
  };

  /**
   * Frames Transmitted Register
   */
  struct FT
  : public reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >;

    using FTX  = regbits< type,  0, 32 >;  /**< Frames Transmitted without Error  */
  };

  /**
   * Broadcast Frames Transmitted Register
   */
  struct BCFT
  : public reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >;

    using BFTX  = regbits< type,  0, 32 >;  /**< Broadcast Frames Transmitted without Error  */
  };

  /**
   * Multicast Frames Transmitted Register
   */
  struct MFT
  : public reg< uint32_t, base_addr + 0x00000110, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, ro, 0x00000000 >;

    using MFTX  = regbits< type,  0, 32 >;  /**< Multicast Frames Transmitted without Error  */
  };

  /**
   * Pause Frames Transmitted Register
   */
  struct PFT
  : public reg< uint32_t, base_addr + 0x00000114, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, ro, 0x00000000 >;

    using PFTX  = regbits< type,  0, 16 >;  /**< Pause Frames Transmitted Register  */
  };

  /**
   * 64 Byte Frames Transmitted Register
   */
  struct BFT64
  : public reg< uint32_t, base_addr + 0x00000118, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, ro, 0x00000000 >;

    using NFTX  = regbits< type,  0, 32 >;  /**< 64 Byte Frames Transmitted without Error  */
  };

  /**
   * 65 to 127 Byte Frames Transmitted Register
   */
  struct TBFT127
  : public reg< uint32_t, base_addr + 0x0000011c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, ro, 0x00000000 >;

    using NFTX  = regbits< type,  0, 32 >;  /**< 65 to 127 Byte Frames Transmitted without Error  */
  };

  /**
   * 128 to 255 Byte Frames Transmitted Register
   */
  struct TBFT255
  : public reg< uint32_t, base_addr + 0x00000120, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, ro, 0x00000000 >;

    using NFTX  = regbits< type,  0, 32 >;  /**< 128 to 255 Byte Frames Transmitted without Error  */
  };

  /**
   * 256 to 511 Byte Frames Transmitted Register
   */
  struct TBFT511
  : public reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >;

    using NFTX  = regbits< type,  0, 32 >;  /**< 256 to 511 Byte Frames Transmitted without Error  */
  };

  /**
   * 512 to 1023 Byte Frames Transmitted Register
   */
  struct TBFT1023
  : public reg< uint32_t, base_addr + 0x00000128, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, ro, 0x00000000 >;

    using NFTX  = regbits< type,  0, 32 >;  /**< 512 to 1023 Byte Frames Transmitted without Error  */
  };

  /**
   * 1024 to 1518 Byte Frames Transmitted Register
   */
  struct TBFT1518
  : public reg< uint32_t, base_addr + 0x0000012c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000012c, ro, 0x00000000 >;

    using NFTX  = regbits< type,  0, 32 >;  /**< 1024 to 1518 Byte Frames Transmitted without Error  */
  };

  /**
   * Greater Than 1518 Byte Frames Transmitted Register
   */
  struct GTBFT1518
  : public reg< uint32_t, base_addr + 0x00000130, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, ro, 0x00000000 >;

    using NFTX  = regbits< type,  0, 32 >;  /**< Greater than 1518 Byte Frames Transmitted without Error  */
  };

  /**
   * Transmit Under Runs Register
   */
  struct TUR
  : public reg< uint32_t, base_addr + 0x00000134, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, ro, 0x00000000 >;

    using TXUNR  = regbits< type,  0, 10 >;  /**< Transmit Under Runs  */
  };

  /**
   * Single Collision Frames Register
   */
  struct SCF
  : public reg< uint32_t, base_addr + 0x00000138, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, ro, 0x00000000 >;

    using SCOL  = regbits< type,  0, 18 >;  /**< Single Collision  */
  };

  /**
   * Multiple Collision Frames Register
   */
  struct MCF
  : public reg< uint32_t, base_addr + 0x0000013c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000013c, ro, 0x00000000 >;

    using MCOL  = regbits< type,  0, 18 >;  /**< Multiple Collision  */
  };

  /**
   * Excessive Collisions Register
   */
  struct EC
  : public reg< uint32_t, base_addr + 0x00000140, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000140, ro, 0x00000000 >;

    using XCOL  = regbits< type,  0, 10 >;  /**< Excessive Collisions  */
  };

  /**
   * Late Collisions Register
   */
  struct LC
  : public reg< uint32_t, base_addr + 0x00000144, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, ro, 0x00000000 >;

    using LCOL  = regbits< type,  0, 10 >;  /**< Late Collisions  */
  };

  /**
   * Deferred Transmission Frames Register
   */
  struct DTF
  : public reg< uint32_t, base_addr + 0x00000148, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000148, ro, 0x00000000 >;

    using DEFT  = regbits< type,  0, 18 >;  /**< Deferred Transmission  */
  };

  /**
   * Carrier Sense Errors Register
   */
  struct CSE
  : public reg< uint32_t, base_addr + 0x0000014c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000014c, ro, 0x00000000 >;

    using CSR  = regbits< type,  0, 10 >;  /**< Carrier Sense Error  */
  };

  /**
   * Octets Received [31:0] Received
   */
  struct ORLO
  : public reg< uint32_t, base_addr + 0x00000150, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000150, ro, 0x00000000 >;

    using RXO  = regbits< type,  0, 32 >;  /**< Received Octets  */
  };

  /**
   * Octets Received [47:32] Received
   */
  struct ORHI
  : public reg< uint32_t, base_addr + 0x00000154, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000154, ro, 0x00000000 >;

    using RXO  = regbits< type,  0, 16 >;  /**< Received Octets  */
  };

  /**
   * Frames Received Register
   */
  struct FR
  : public reg< uint32_t, base_addr + 0x00000158, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000158, ro, 0x00000000 >;

    using FRX  = regbits< type,  0, 32 >;  /**< Frames Received without Error  */
  };

  /**
   * Broadcast Frames Received Register
   */
  struct BCFR
  : public reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000000 >;

    using BFRX  = regbits< type,  0, 32 >;  /**< Broadcast Frames Received without Error  */
  };

  /**
   * Multicast Frames Received Register
   */
  struct MFR
  : public reg< uint32_t, base_addr + 0x00000160, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, ro, 0x00000000 >;

    using MFRX  = regbits< type,  0, 32 >;  /**< Multicast Frames Received without Error  */
  };

  /**
   * Pause Frames Received Register
   */
  struct PFR
  : public reg< uint32_t, base_addr + 0x00000164, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, ro, 0x00000000 >;

    using PFRX  = regbits< type,  0, 16 >;  /**< Pause Frames Received Register  */
  };

  /**
   * 64 Byte Frames Received Register
   */
  struct BFR64
  : public reg< uint32_t, base_addr + 0x00000168, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000168, ro, 0x00000000 >;

    using NFRX  = regbits< type,  0, 32 >;  /**< 64 Byte Frames Received without Error  */
  };

  /**
   * 65 to 127 Byte Frames Received Register
   */
  struct TBFR127
  : public reg< uint32_t, base_addr + 0x0000016c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000016c, ro, 0x00000000 >;

    using NFRX  = regbits< type,  0, 32 >;  /**< 65 to 127 Byte Frames Received without Error  */
  };

  /**
   * 128 to 255 Byte Frames Received Register
   */
  struct TBFR255
  : public reg< uint32_t, base_addr + 0x00000170, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000170, ro, 0x00000000 >;

    using NFRX  = regbits< type,  0, 32 >;  /**< 128 to 255 Byte Frames Received without Error  */
  };

  /**
   * 256 to 511Byte Frames Received Register
   */
  struct TBFR511
  : public reg< uint32_t, base_addr + 0x00000174, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000174, ro, 0x00000000 >;

    using NFRX  = regbits< type,  0, 32 >;  /**< 256 to 511 Byte Frames Received without Error  */
  };

  /**
   * 512 to 1023 Byte Frames Received Register
   */
  struct TBFR1023
  : public reg< uint32_t, base_addr + 0x00000178, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000178, ro, 0x00000000 >;

    using NFRX  = regbits< type,  0, 32 >;  /**< 512 to 1023 Byte Frames Received without Error  */
  };

  /**
   * 1024 to 1518 Byte Frames Received Register
   */
  struct TBFR1518
  : public reg< uint32_t, base_addr + 0x0000017c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000017c, ro, 0x00000000 >;

    using NFRX  = regbits< type,  0, 32 >;  /**< 1024 to 1518 Byte Frames Received without Error  */
  };

  /**
   * 1519 to Maximum Byte Frames Received Register
   */
  struct TMXBFR
  : public reg< uint32_t, base_addr + 0x00000180, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000180, ro, 0x00000000 >;

    using NFRX  = regbits< type,  0, 32 >;  /**< 1519 to Maximum Byte Frames Received without Error  */
  };

  /**
   * Undersize Frames Received Register
   */
  struct UFR
  : public reg< uint32_t, base_addr + 0x00000184, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000184, ro, 0x00000000 >;

    using UFRX  = regbits< type,  0, 10 >;  /**< Undersize Frames Received  */
  };

  /**
   * Oversize Frames Received Register
   */
  struct OFR
  : public reg< uint32_t, base_addr + 0x00000188, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000188, ro, 0x00000000 >;

    using OFRX  = regbits< type,  0, 10 >;  /**< Oversized Frames Received  */
  };

  /**
   * Jabbers Received Register
   */
  struct JR
  : public reg< uint32_t, base_addr + 0x0000018c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000018c, ro, 0x00000000 >;

    using JRX  = regbits< type,  0, 10 >;  /**< Jabbers Received  */
  };

  /**
   * Frame Check Sequence Errors Register
   */
  struct FCSE
  : public reg< uint32_t, base_addr + 0x00000190, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000190, ro, 0x00000000 >;

    using FCKR  = regbits< type,  0, 10 >;  /**< Frame Check Sequence Errors  */
  };

  /**
   * Length Field Frame Errors Register
   */
  struct LFFE
  : public reg< uint32_t, base_addr + 0x00000194, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000194, ro, 0x00000000 >;

    using LFER  = regbits< type,  0, 10 >;  /**< Length Field Frame Errors  */
  };

  /**
   * Receive Symbol Errors Register
   */
  struct RSE
  : public reg< uint32_t, base_addr + 0x00000198, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000198, ro, 0x00000000 >;

    using RXSE  = regbits< type,  0, 10 >;  /**< Receive Symbol Errors  */
  };

  /**
   * Alignment Errors Register
   */
  struct AE
  : public reg< uint32_t, base_addr + 0x0000019c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000019c, ro, 0x00000000 >;

    using AER  = regbits< type,  0, 10 >;  /**< Alignment Errors  */
  };

  /**
   * Receive Resource Errors Register
   */
  struct RRE
  : public reg< uint32_t, base_addr + 0x000001a0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a0, ro, 0x00000000 >;

    using RXRER  = regbits< type,  0, 18 >;  /**< Receive Resource Errors  */
  };

  /**
   * Receive Overrun Register
   */
  struct ROE
  : public reg< uint32_t, base_addr + 0x000001a4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a4, ro, 0x00000000 >;

    using RXOVR  = regbits< type,  0, 10 >;  /**< Receive Overruns  */
  };

  /**
   * IP Header Checksum Errors Register
   */
  struct IHCE
  : public reg< uint32_t, base_addr + 0x000001a8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a8, ro, 0x00000000 >;

    using HCKER  = regbits< type,  0,  8 >;  /**< IP Header Checksum Errors  */
  };

  /**
   * TCP Checksum Errors Register
   */
  struct TCE
  : public reg< uint32_t, base_addr + 0x000001ac, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001ac, ro, 0x00000000 >;

    using TCKER  = regbits< type,  0,  8 >;  /**< TCP Checksum Errors  */
  };

  /**
   * UDP Checksum Errors Register
   */
  struct UCE
  : public reg< uint32_t, base_addr + 0x000001b0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001b0, ro, 0x00000000 >;

    using UCKER  = regbits< type,  0,  8 >;  /**< UDP Checksum Errors  */
  };

  /**
   * 1588 Timer Sync Strobe Seconds Register
   */
  struct TSSS
  : public reg< uint32_t, base_addr + 0x000001c8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001c8, rw, 0x00000000 >;

    using VTS  = regbits< type,  0, 32 >;  /**< Value of Timer Seconds Register Capture  */
  };

  /**
   * 1588 Timer Sync Strobe Nanoseconds Register
   */
  struct TSSN
  : public reg< uint32_t, base_addr + 0x000001cc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001cc, rw, 0x00000000 >;

    using VTN  = regbits< type,  0, 30 >;  /**< Value Timer Nanoseconds Register Capture  */
  };

  /**
   * 1588 Timer Seconds Register
   */
  struct TS
  : public reg< uint32_t, base_addr + 0x000001d0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d0, rw, 0x00000000 >;

    using TCS  = regbits< type,  0, 32 >;  /**< Timer Count in Seconds  */
  };

  /**
   * 1588 Timer Nanoseconds Register
   */
  struct TN
  : public reg< uint32_t, base_addr + 0x000001d4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d4, rw, 0x00000000 >;

    using TNS  = regbits< type,  0, 30 >;  /**< Timer Count in Nanoseconds  */
  };

  /**
   * 1588 Timer Adjust Register
   */
  struct TA
  : public reg< uint32_t, base_addr + 0x000001d8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d8, wo, 0 >;

    using ITDT  = regbits< type,  0, 30 >;  /**< Increment/Decrement  */
    using ADJ   = regbits< type, 31,  1 >;  /**< Adjust 1588 Timer    */
  };

  /**
   * 1588 Timer Increment Register
   */
  struct TI
  : public reg< uint32_t, base_addr + 0x000001dc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001dc, rw, 0x00000000 >;

    using CNS   = regbits< type,  0,  8 >;  /**< Count Nanoseconds              */
    using ACNS  = regbits< type,  8,  8 >;  /**< Alternative Count Nanoseconds  */
    using NIT   = regbits< type, 16,  8 >;  /**< Number of Increments           */
  };

  /**
   * PTP Event Frame Transmitted Seconds
   */
  struct EFTS
  : public reg< uint32_t, base_addr + 0x000001e0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e0, ro, 0x00000000 >;

    using RUD  = regbits< type,  0, 32 >;  /**< Register Update  */
  };

  /**
   * PTP Event Frame Transmitted Nanoseconds
   */
  struct EFTN
  : public reg< uint32_t, base_addr + 0x000001e4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e4, ro, 0x00000000 >;

    using RUD  = regbits< type,  0, 30 >;  /**< Register Update  */
  };

  /**
   * PTP Event Frame Received Seconds
   */
  struct EFRS
  : public reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >;

    using RUD  = regbits< type,  0, 32 >;  /**< Register Update  */
  };

  /**
   * PTP Event Frame Received Nanoseconds
   */
  struct EFRN
  : public reg< uint32_t, base_addr + 0x000001ec, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001ec, ro, 0x00000000 >;

    using RUD  = regbits< type,  0, 30 >;  /**< Register Update  */
  };

  /**
   * PTP Peer Event Frame Transmitted Seconds
   */
  struct PEFTS
  : public reg< uint32_t, base_addr + 0x000001f0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001f0, ro, 0x00000000 >;

    using RUD  = regbits< type,  0, 32 >;  /**< Register Update  */
  };

  /**
   * PTP Peer Event Frame Transmitted Nanoseconds
   */
  struct PEFTN
  : public reg< uint32_t, base_addr + 0x000001f4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001f4, ro, 0x00000000 >;

    using RUD  = regbits< type,  0, 30 >;  /**< Register Update  */
  };

  /**
   * PTP Peer Event Frame Received Seconds
   */
  struct PEFRS
  : public reg< uint32_t, base_addr + 0x000001f8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001f8, ro, 0x00000000 >;

    using RUD  = regbits< type,  0, 32 >;  /**< Register Update  */
  };

  /**
   * PTP Peer Event Frame Received Nanoseconds
   */
  struct PEFRN
  : public reg< uint32_t, base_addr + 0x000001fc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001fc, ro, 0x00000000 >;

    using RUD  = regbits< type,  0, 30 >;  /**< Register Update  */
  };

  /**
   * Interrupt Status Register Priority Queue
   */
  struct ISRPQ[%s]
  : public reg< uint32_t, base_addr + 0x00000400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RCOMP  = regbits< type,  1,  1 >;  /**< Receive Complete                            */
    using RXUBR  = regbits< type,  2,  1 >;  /**< RX Used Bit Read                            */
    using RLEX   = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded or Late Collision      */
    using TFC    = regbits< type,  6,  1 >;  /**< Transmit Frame Corruption due to AHB error  */
    using TCOMP  = regbits< type,  7,  1 >;  /**< Transmit Complete                           */
    using ROVR   = regbits< type, 10,  1 >;  /**< Receive Overrun                             */
    using HRESP  = regbits< type, 11,  1 >;  /**< HRESP Not OK                                */
  };

  /**
   * Transmit Buffer Queue Base Address Priority Queue
   */
  struct TBQBAPQ[%s]
  : public reg< uint32_t, base_addr + 0x00000440, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000440, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXBQBA  = regbits< type,  2,  6 >;  /**< Transmit Buffer Queue Base Address  */
  };

  /**
   * Receive Buffer Queue Base Address Priority Queue
   */
  struct RBQBAPQ[%s]
  : public reg< uint32_t, base_addr + 0x00000480, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000480, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RXBQBA  = regbits< type,  2,  6 >;  /**< Receive Buffer Queue Base Address  */
  };

  /**
   * Receive Buffer Size Register Priority Queue
   */
  struct RBSRPQ[%s]
  : public reg< uint32_t, base_addr + 0x000004a0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000004a0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RBS  = regbits< type,  0, 16 >;  /**< Receive Buffer Size  */
  };

  /**
   * Screening Type1 Register Priority Queue
   */
  struct ST1RPQ[%s]
  : public reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QNB    = regbits< type,  0,  4 >;  /**< Que Number (0->7)                                      */
    using DSTCM  = regbits< type,  4,  8 >;  /**< Differentiated Services or Traffic Class Match         */
    using UDPM   = regbits< type, 12, 16 >;  /**< UDP Port Match                                         */
    using DSTCE  = regbits< type, 28,  1 >;  /**< Differentiated Services or Traffic Class Match Enable  */
    using UDPE   = regbits< type, 29,  1 >;  /**< UDP Port Match Enable                                  */
  };

  /**
   * Screening Type2 Register Priority Queue
   */
  struct ST2RPQ[%s]
  : public reg< uint32_t, base_addr + 0x00000540, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000540, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QNB    = regbits< type,  0,  4 >;  /**< Que Number (0->7)  */
    using VLANP  = regbits< type,  4,  4 >;  /**< VLAN Priority      */
    using VLANE  = regbits< type,  8,  1 >;  /**< VLAN Enable        */
  };

  /**
   * Interrupt Enable Register Priority Queue
   */
  struct IERPQ[%s]
  : public reg< uint32_t, base_addr + 0x00000600, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000600, wo, 0 >;

    using RCOMP  = regbits< type,  1,  1 >;  /**< Receive Complete                            */
    using RXUBR  = regbits< type,  2,  1 >;  /**< RX Used Bit Read                            */
    using RLEX   = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded or Late Collision      */
    using TFC    = regbits< type,  6,  1 >;  /**< Transmit Frame Corruption due to AHB error  */
    using TCOMP  = regbits< type,  7,  1 >;  /**< Transmit Complete                           */
    using ROVR   = regbits< type, 10,  1 >;  /**< Receive Overrun                             */
    using HRESP  = regbits< type, 11,  1 >;  /**< HRESP Not OK                                */
  };

  /**
   * Interrupt Disable Register Priority Queue
   */
  struct IDRPQ[%s]
  : public reg< uint32_t, base_addr + 0x00000620, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000620, wo, 0 >;

    using RCOMP  = regbits< type,  1,  1 >;  /**< Receive Complete                            */
    using RXUBR  = regbits< type,  2,  1 >;  /**< RX Used Bit Read                            */
    using RLEX   = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded or Late Collision      */
    using TFC    = regbits< type,  6,  1 >;  /**< Transmit Frame Corruption due to AHB error  */
    using TCOMP  = regbits< type,  7,  1 >;  /**< Transmit Complete                           */
    using ROVR   = regbits< type, 10,  1 >;  /**< Receive Overrun                             */
    using HRESP  = regbits< type, 11,  1 >;  /**< HRESP Not OK                                */
  };

  /**
   * Interrupt Mask Register Priority Queue
   */
  struct IMRPQ[%s]
  : public reg< uint32_t, base_addr + 0x00000640, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000640, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RCOMP  = regbits< type,  1,  1 >;  /**< Receive Complete                        */
    using RXUBR  = regbits< type,  2,  1 >;  /**< RX Used Bit Read                        */
    using RLEX   = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded or Late Collision  */
    using AHB    = regbits< type,  6,  1 >;  /**< AHB Error                               */
    using TCOMP  = regbits< type,  7,  1 >;  /**< Transmit Complete                       */
    using ROVR   = regbits< type, 10,  1 >;  /**< Receive Overrun                         */
    using HRESP  = regbits< type, 11,  1 >;  /**< HRESP Not OK                            */
  };
};
} // namespace mptl

#endif // ARCH_REG_GMAC_HPP_INCLUDED
