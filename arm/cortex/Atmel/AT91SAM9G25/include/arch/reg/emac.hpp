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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G25.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G25
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G25 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Ethernet, HS USB, LPDDR/DDR2/MLC NAND support, 217 and 247 Pins (refer to http://www.atmel.com/devices/SAM9G25.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EMAC_HPP_INCLUDED
#define ARCH_REG_EMAC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Ethernet MAC 10/100
 */
struct EMAC
{
  static constexpr reg_addr_t base_addr = 0xf802c000;

  /**
   * Network Control Register
   */
  struct NCR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using LB       = regbits< type,  0,  1 >;  /**< LoopBack                               */
    using LLB      = regbits< type,  1,  1 >;  /**< Loopback local                         */
    using RE       = regbits< type,  2,  1 >;  /**< Receive enable                         */
    using TE       = regbits< type,  3,  1 >;  /**< Transmit enable                        */
    using MPE      = regbits< type,  4,  1 >;  /**< Management port enable                 */
    using CLRSTAT  = regbits< type,  5,  1 >;  /**< Clear statistics registers             */
    using INCSTAT  = regbits< type,  6,  1 >;  /**< Increment statistics registers         */
    using WESTAT   = regbits< type,  7,  1 >;  /**< Write enable for statistics registers  */
    using BP       = regbits< type,  8,  1 >;  /**< Back pressure                          */
    using TSTART   = regbits< type,  9,  1 >;  /**< Start transmission                     */
    using THALT    = regbits< type, 10,  1 >;  /**< Transmit halt                          */
  };

  /**
   * Network Configuration Register
   */
  struct NCFGR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000800 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000800 >;

    using SPD     = regbits< type,  0,  1 >;  /**< Speed                                 */
    using FD      = regbits< type,  1,  1 >;  /**< Full Duplex                           */
    using JFRAME  = regbits< type,  3,  1 >;  /**< Jumbo Frames                          */
    using CAF     = regbits< type,  4,  1 >;  /**< Copy All Frames                       */
    using NBC     = regbits< type,  5,  1 >;  /**< No Broadcast                          */
    using MTI     = regbits< type,  6,  1 >;  /**< Multicast Hash Enable                 */
    using UNI     = regbits< type,  7,  1 >;  /**< Unicast Hash Enable                   */
    using BIG     = regbits< type,  8,  1 >;  /**< Receive 1536 bytes frames             */
    using CLK     = regbits< type, 10,  2 >;  /**< MDC clock divider                     */
    using RTY     = regbits< type, 12,  1 >;  /**< Retry test                            */
    using PAE     = regbits< type, 13,  1 >;  /**< Pause Enable                          */
    using RBOF    = regbits< type, 14,  2 >;  /**< Receive Buffer Offset                 */
    using RLCE    = regbits< type, 16,  1 >;  /**< Receive Length field Checking Enable  */
    using DRFCS   = regbits< type, 17,  1 >;  /**< Discard Receive FCS                   */
    using EFRHD   = regbits< type, 18,  1 >;
    using IRXFCS  = regbits< type, 19,  1 >;  /**< Ignore RX FCS                         */
  };

  /**
   * Network Status Register
   */
  struct NSR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using MDIO  = regbits< type,  1,  1 >;
    using IDLE  = regbits< type,  2,  1 >;
  };

  /**
   * Transmit Status Register
   */
  struct TSR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >;

    using UBR   = regbits< type,  0,  1 >;  /**< Used Bit Read                */
    using COL   = regbits< type,  1,  1 >;  /**< Collision Occurred           */
    using RLES  = regbits< type,  2,  1 >;  /**< Retry Limit exceeded         */
    using TGO   = regbits< type,  3,  1 >;  /**< Transmit Go                  */
    using BEX   = regbits< type,  4,  1 >;  /**< Buffers exhausted mid frame  */
    using COMP  = regbits< type,  5,  1 >;  /**< Transmit Complete            */
    using UND   = regbits< type,  6,  1 >;  /**< Transmit Underrun            */
  };

  /**
   * Receive Buffer Queue Pointer Register
   */
  struct RBQP
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using ADDR  = regbits< type,  2, 30 >;  /**< Receive buffer queue pointer address  */
  };

  /**
   * Transmit Buffer Queue Pointer Register
   */
  struct TBQP
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    using ADDR  = regbits< type,  2, 30 >;  /**< Transmit buffer queue pointer address  */
  };

  /**
   * Receive Status Register
   */
  struct RSR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using BNA  = regbits< type,  0,  1 >;  /**< Buffer Not Available  */
    using REC  = regbits< type,  1,  1 >;  /**< Frame Received        */
    using OVR  = regbits< type,  2,  1 >;  /**< Receive Overrun       */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >;

    using MFD    = regbits< type,  0,  1 >;  /**< Management Frame Done              */
    using RCOMP  = regbits< type,  1,  1 >;  /**< Receive Complete                   */
    using RXUBR  = regbits< type,  2,  1 >;  /**< Receive Used Bit Read              */
    using TXUBR  = regbits< type,  3,  1 >;  /**< Transmit Used Bit Read             */
    using TUND   = regbits< type,  4,  1 >;  /**< Ethernet Transmit Buffer Underrun  */
    using RLEX   = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded               */
    using TXERR  = regbits< type,  6,  1 >;  /**< Transmit Error                     */
    using TCOMP  = regbits< type,  7,  1 >;  /**< Transmit Complete                  */
    using ROVR   = regbits< type, 10,  1 >;  /**< Receive Overrun                    */
    using HRESP  = regbits< type, 11,  1 >;  /**< Hresp not OK                       */
    using PFRE   = regbits< type, 12,  1 >;  /**< Pause Frame Received               */
    using PTZ    = regbits< type, 13,  1 >;  /**< Pause Time Zero                    */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using MFD    = regbits< type,  0,  1 >;  /**< Management Frame sent              */
    using RCOMP  = regbits< type,  1,  1 >;  /**< Receive Complete                   */
    using RXUBR  = regbits< type,  2,  1 >;  /**< Receive Used Bit Read              */
    using TXUBR  = regbits< type,  3,  1 >;  /**< Transmit Used Bit Read             */
    using TUND   = regbits< type,  4,  1 >;  /**< Ethernet Transmit Buffer Underrun  */
    using RLE    = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded               */
    using TXERR  = regbits< type,  6,  1 >;
    using TCOMP  = regbits< type,  7,  1 >;  /**< Transmit Complete                  */
    using ROVR   = regbits< type, 10,  1 >;  /**< Receive Overrun                    */
    using HRESP  = regbits< type, 11,  1 >;  /**< Hresp not OK                       */
    using PFR    = regbits< type, 12,  1 >;  /**< Pause Frame Received               */
    using PTZ    = regbits< type, 13,  1 >;  /**< Pause Time Zero                    */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x0000002c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, wo, 0 >;

    using MFD    = regbits< type,  0,  1 >;  /**< Management Frame sent              */
    using RCOMP  = regbits< type,  1,  1 >;  /**< Receive Complete                   */
    using RXUBR  = regbits< type,  2,  1 >;  /**< Receive Used Bit Read              */
    using TXUBR  = regbits< type,  3,  1 >;  /**< Transmit Used Bit Read             */
    using TUND   = regbits< type,  4,  1 >;  /**< Ethernet Transmit Buffer Underrun  */
    using RLE    = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded               */
    using TXERR  = regbits< type,  6,  1 >;
    using TCOMP  = regbits< type,  7,  1 >;  /**< Transmit Complete                  */
    using ROVR   = regbits< type, 10,  1 >;  /**< Receive Overrun                    */
    using HRESP  = regbits< type, 11,  1 >;  /**< Hresp not OK                       */
    using PFR    = regbits< type, 12,  1 >;  /**< Pause Frame Received               */
    using PTZ    = regbits< type, 13,  1 >;  /**< Pause Time Zero                    */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00003FFF >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00003FFF >;

    using MFD    = regbits< type,  0,  1 >;  /**< Management Frame sent              */
    using RCOMP  = regbits< type,  1,  1 >;  /**< Receive Complete                   */
    using RXUBR  = regbits< type,  2,  1 >;  /**< Receive Used Bit Read              */
    using TXUBR  = regbits< type,  3,  1 >;  /**< Transmit Used Bit Read             */
    using TUND   = regbits< type,  4,  1 >;  /**< Ethernet Transmit Buffer Underrun  */
    using RLE    = regbits< type,  5,  1 >;  /**< Retry Limit Exceeded               */
    using TXERR  = regbits< type,  6,  1 >;
    using TCOMP  = regbits< type,  7,  1 >;  /**< Transmit Complete                  */
    using ROVR   = regbits< type, 10,  1 >;  /**< Receive Overrun                    */
    using HRESP  = regbits< type, 11,  1 >;  /**< Hresp not OK                       */
    using PFR    = regbits< type, 12,  1 >;  /**< Pause Frame Received               */
    using PTZ    = regbits< type, 13,  1 >;  /**< Pause Time Zero                    */
  };

  /**
   * Phy Maintenance Register
   */
  struct MAN
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >;

    using DATA  = regbits< type,  0, 16 >;
    using CODE  = regbits< type, 16,  2 >;
    using REGA  = regbits< type, 18,  5 >;  /**< Register Address  */
    using PHYA  = regbits< type, 23,  5 >;  /**< PHY Address       */
    using RW    = regbits< type, 28,  2 >;  /**< Read-write        */
    using SOF   = regbits< type, 30,  2 >;  /**< Start of frame    */
  };

  /**
   * Pause Time Register
   */
  struct PTR
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >;

    using PTIME  = regbits< type,  0, 16 >;  /**< Pause Time  */
  };

  /**
   * Pause Frames Received Register
   */
  struct PFR
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >;

    using FROK  = regbits< type,  0, 16 >;  /**< Pause Frames received OK  */
  };

  /**
   * Frames Transmitted Ok Register
   */
  struct FTO
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >;

    using FTOK  = regbits< type,  0, 24 >;  /**< Frames Transmitted OK  */
  };

  /**
   * Single Collision Frames Register
   */
  struct SCF
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SCF
    using SCF_ = regbits< type,  0, 16 >;  /**< Single Collision Frames  */
  };

  /**
   * Multiple Collision Frames Register
   */
  struct MCF
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: MCF
    using MCF_ = regbits< type,  0, 16 >;  /**< Multicollision Frames  */
  };

  /**
   * Frames Received Ok Register
   */
  struct FRO
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >;

    using FROK  = regbits< type,  0, 24 >;  /**< Frames Received OK  */
  };

  /**
   * Frame Check Sequence Errors Register
   */
  struct FCSE
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: FCSE
    using FCSE_ = regbits< type,  0,  8 >;  /**< Frame Check Sequence Errors  */
  };

  /**
   * Alignment Errors Register
   */
  struct ALE
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: ALE
    using ALE_ = regbits< type,  0,  8 >;  /**< Alignment Errors  */
  };

  /**
   * Deferred Transmission Frames Register
   */
  struct DTF
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: DTF
    using DTF_ = regbits< type,  0, 16 >;  /**< Deferred Transmission Frames  */
  };

  /**
   * Late Collisions Register
   */
  struct LCOL
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: LCOL
    using LCOL_ = regbits< type,  0,  8 >;  /**< Late Collisions  */
  };

  /**
   * Excessive Collisions Register
   */
  struct ECOL
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0x00000000 >;

    using EXCOL  = regbits< type,  0,  8 >;  /**< Excessive Collisions  */
  };

  /**
   * Transmit Underrun Errors Register
   */
  struct TUND
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: TUND
    using TUND_ = regbits< type,  0,  8 >;  /**< Transmit Underruns  */
  };

  /**
   * Carrier Sense Errors Register
   */
  struct CSE
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSE
    using CSE_ = regbits< type,  0,  8 >;  /**< Carrier Sense Errors  */
  };

  /**
   * Receive Resource Errors Register
   */
  struct RRE
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: RRE
    using RRE_ = regbits< type,  0, 16 >;  /**< Receive Resource Errors  */
  };

  /**
   * Receive Overrun Errors Register
   */
  struct ROV
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >;

    using ROVR  = regbits< type,  0,  8 >;  /**< Receive Overrun  */
  };

  /**
   * Receive Symbol Errors Register
   */
  struct RSE
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: RSE
    using RSE_ = regbits< type,  0,  8 >;  /**< Receive Symbol Errors  */
  };

  /**
   * Excessive Length Errors Register
   */
  struct ELE
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0x00000000 >;

    using EXL  = regbits< type,  0,  8 >;  /**< Excessive Length Errors  */
  };

  /**
   * Receive Jabbers Register
   */
  struct RJA
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >;

    using RJB  = regbits< type,  0,  8 >;  /**< Receive Jabbers  */
  };

  /**
   * Undersize Frames Register
   */
  struct USF
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: USF
    using USF_ = regbits< type,  0,  8 >;  /**< Undersize frames  */
  };

  /**
   * SQE Test Errors Register
   */
  struct STE
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >;

    using SQER  = regbits< type,  0,  8 >;  /**< SQE test errors  */
  };

  /**
   * Received Length Field Mismatch Register
   */
  struct RLE
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >;

    using RLFM  = regbits< type,  0,  8 >;  /**< Receive Length Field Mismatch  */
  };

  /**
   * Hash Register Bottom [31:0] Register
   */
  struct HRB
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;
  };

  /**
   * Hash Register Top [63:32] Register
   */
  struct HRT
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;
  };

  /**
   * Specific Address 1 Bottom Register
   */
  struct SA1B
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;
  };

  /**
   * Specific Address 1 Top Register
   */
  struct SA1T
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 16 >;
  };

  /**
   * Specific Address 2 Bottom Register
   */
  struct SA2B
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;
  };

  /**
   * Specific Address 2 Top Register
   */
  struct SA2T
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 16 >;
  };

  /**
   * Specific Address 3 Bottom Register
   */
  struct SA3B
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;
  };

  /**
   * Specific Address 3 Top Register
   */
  struct SA3T
  : public reg< uint32_t, base_addr + 0x000000ac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000ac, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 16 >;
  };

  /**
   * Specific Address 4 Bottom Register
   */
  struct SA4B
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 32 >;
  };

  /**
   * Specific Address 4 Top Register
   */
  struct SA4T
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0x00000000 >;

    using ADDR  = regbits< type,  0, 16 >;
  };

  /**
   * Type ID Checking Register
   */
  struct TID
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: TID
    using TID_ = regbits< type,  0, 16 >;  /**< Type ID checking  */
  };

  /**
   * User Input/Output Register
   */
  struct USRIO
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >;

    using RMII   = regbits< type,  0,  1 >;  /**< Reduce MII    */
    using CLKEN  = regbits< type,  1,  1 >;  /**< Clock Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EMAC_HPP_INCLUDED
