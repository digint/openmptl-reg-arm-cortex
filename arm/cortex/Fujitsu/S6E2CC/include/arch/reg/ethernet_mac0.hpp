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

#ifndef ARCH_REG_ETHERNET_MAC0_HPP_INCLUDED
#define ARCH_REG_ETHERNET_MAC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Ethernet-MAC 0
 */
struct ETHERNET_MAC0
{
  static constexpr reg_addr_t base_addr = 0x40064000;

  /**
   * MAC Configuration Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using CST   = regbits< type, 25,  1 >;  /**< CRC stripping for Type frames             */
    using TC    = regbits< type, 24,  1 >;  /**< Transmit Configuration in RGMII           */
    using WD    = regbits< type, 23,  1 >;  /**< Watchdog Disable                          */
    using JD    = regbits< type, 22,  1 >;  /**< Jabber Disable                            */
    using BE    = regbits< type, 21,  1 >;  /**< Frame Burst Enable                        */
    using JE    = regbits< type, 20,  1 >;  /**< Jumbo Frame Enable                        */
    using IFG   = regbits< type, 17,  3 >;  /**< Inter-Frame GAP                           */
    using DCRS  = regbits< type, 16,  1 >;  /**< Disable Carrier Sense During Transaction  */
    using PS    = regbits< type, 15,  1 >;  /**< Port Select                               */
    using FES   = regbits< type, 14,  1 >;  /**< Speed                                     */
    using DO    = regbits< type, 13,  1 >;  /**< Disable Receive Own                       */
    using LM    = regbits< type, 12,  1 >;  /**< Loop-back Mode                            */
    using DM    = regbits< type, 11,  1 >;  /**< Duplex mode                               */
    using IPC   = regbits< type, 10,  1 >;  /**< Checksum Offload                          */
    using DR    = regbits< type,  9,  1 >;  /**< Disable Retry                             */
    using LUD   = regbits< type,  8,  1 >;  /**< Link Up/Down in RGMII                     */
    using ACS   = regbits< type,  7,  1 >;  /**< Automatic Pad/CRC Stripping               */
    using BL    = regbits< type,  5,  2 >;  /**< Back-off Limit                            */
    using DC    = regbits< type,  4,  1 >;  /**< Deferral Check                            */
    using TE    = regbits< type,  3,  1 >;  /**< Transmitter Enable                        */
    using RE    = regbits< type,  2,  1 >;  /**< Receiver Enable                           */
  };

  /**
   * MAC Frame Filter Register
   */
  struct MFFR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using RA    = regbits< type, 31,  1 >;  /**< Receive All                    */
    using HPF   = regbits< type, 10,  1 >;  /**< Hash or Perfect Filter         */
    using SAF   = regbits< type,  9,  1 >;  /**< Source Address Filter          */
    using SAIF  = regbits< type,  8,  1 >;  /**< Source Address Inverse Filter  */
    using PCF   = regbits< type,  6,  2 >;  /**< Pass Control Frames            */
    using DB    = regbits< type,  5,  1 >;  /**< Disable Broadcast Frames       */
    using PM    = regbits< type,  4,  1 >;  /**< Pass All Multicast             */
    using DAIF  = regbits< type,  3,  1 >;  /**< DA Inverse Filtering           */
    using HMC   = regbits< type,  2,  1 >;  /**< Hash Multicast                 */
    using HUC   = regbits< type,  1,  1 >;  /**< Hash Unicast                   */
    using PR    = regbits< type,  0,  1 >;  /**< Promiscuous Mode               */
  };

  /**
   * MAC Hash Table Register (High)
   */
  struct MHTRH
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using HTH  = regbits< type,  0, 32 >;  /**< the upper 32 bits of the hash table in the HTH  */
  };

  /**
   * MAC Hash Table Register (Low)
   */
  struct MHTRL
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using HTL  = regbits< type,  0, 32 >;  /**< the lower 32 bits of the hash table in the HTL  */
  };

  /**
   * GMII/MII Address Register
   */
  struct GAR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using PA  = regbits< type, 11,  5 >;  /**< Physical Layer Address   */
    using GR  = regbits< type,  6,  5 >;  /**< GMII Register            */
    using CR  = regbits< type,  2,  4 >;  /**< Application Clock Range  */
    using GW  = regbits< type,  1,  1 >;  /**< GMII/MII Write           */
    using GB  = regbits< type,  0,  1 >;  /**< GMII/MII Busy            */
  };

  /**
   * GMII/MII Data Register
   */
  struct GDR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using GD  = regbits< type,  0, 16 >;  /**< GMII/MII Data Register  */
  };

  /**
   * Flow Control Register
   */
  struct FCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using PT       = regbits< type, 16, 16 >;  /**< Pause Time                               */
    using DZPQ     = regbits< type,  7,  1 >;  /**< Disable Zero-Quanta Pause                */
    using PLT      = regbits< type,  4,  2 >;  /**< Pause Low Threshold                      */
    using UP       = regbits< type,  3,  1 >;  /**< Unicast Pause Frame detect               */
    using RFE      = regbits< type,  2,  1 >;  /**< Receive Flow Control Enable              */
    using TFE      = regbits< type,  1,  1 >;  /**< Transmit Flow Control Enable             */
    using FCB_BPA  = regbits< type,  0,  1 >;  /**< Flow Control Busy/Backpressure Activate  */
  };

  /**
   * VLAN TAG Register
   */
  struct VTR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using ETV  = regbits< type, 16,  1 >;  /**< Enable 12-Bit VLAN Tag Comparison  */
    using VL   = regbits< type,  0, 16 >;  /**< VLAN Tag Identifier                */
  };

  /**
   * Remote Wake-up Frame Filter Register
   */
  struct RWFFR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: RWFFR
    using RWFFR_ = regbits< type,  0, 32 >;  /**< Remote Wake-up Frame Filter Register  */
  };

  /**
   * PMT Register
   */
  struct PMTR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using RWFFRPR  = regbits< type, 31,  1 >;  /**< Remote Wake-up Frame Filter Register Pointer Reset  */
    using GU       = regbits< type,  9,  1 >;  /**< Global Unicast                                      */
    using WPR      = regbits< type,  6,  1 >;  /**< Wake Up Frame Receive                               */
    using MPR      = regbits< type,  5,  1 >;  /**< Magic Packet Received                               */
    using WFE      = regbits< type,  2,  1 >;  /**< Wake-Up Frame Enable                                */
    using MPE      = regbits< type,  1,  1 >;  /**< Magic Packet Enable                                 */
    using PD       = regbits< type,  0,  1 >;  /**< Power Down                                          */
  };

  /**
   * LPI Control and Status Register
   */
  struct LPICSR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using LPITXA  = regbits< type, 19,  1 >;  /**< LPI TX Automate         */
    using PLSEN   = regbits< type, 18,  1 >;  /**< PHY Link Status Enable  */
    using PLS     = regbits< type, 17,  1 >;  /**< PHY Link Status         */
    using LPIEN   = regbits< type, 16,  1 >;  /**< LPI Enable              */
    using RLPIST  = regbits< type,  9,  1 >;  /**< Receive LPI State       */
    using TLPIST  = regbits< type,  8,  1 >;  /**< Transmit LPI State      */
    using RLPIEX  = regbits< type,  3,  1 >;  /**< Receive LPI Exit        */
    using RLPIEN  = regbits< type,  2,  1 >;  /**< Receive LPI Entry       */
    using TLPIEX  = regbits< type,  1,  1 >;  /**< Transmit LPI Exit       */
    using TLPIEN  = regbits< type,  0,  1 >;  /**< Transmit LPI Entry      */
  };

  /**
   * LPI Timers Control Register
   */
  struct LPITCR
  : public reg< uint32_t, base_addr + 0x34, rw, 0x03E80000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x03E80000 >;

    using LIT  = regbits< type, 16, 10 >;  /**< LPI LS TIMER  */
    using TWT  = regbits< type,  0, 16 >;  /**< LPI TW TIMER  */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >;

    using LPIIS  = regbits< type, 10,  1 >;  /**< LPI Interrupt Status                           */
    using TSIS   = regbits< type,  9,  1 >;  /**< Time Stamp Interrupt Status                    */
    using COIS   = regbits< type,  7,  1 >;  /**< MMC Receive Checksum Offload Interrupt Status  */
    using TIS    = regbits< type,  6,  1 >;  /**< MMC Transmit Interrupt Status                  */
    using RIS    = regbits< type,  5,  1 >;  /**< MMC Receive Interrupt Status                   */
    using MIS    = regbits< type,  4,  1 >;  /**< MMC Interrupt Status                           */
    using PIS    = regbits< type,  3,  1 >;  /**< PMT Interrupt Status                           */
    using RGIS   = regbits< type,  0,  1 >;  /**< RGMII Interrupt Status                         */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using LPIIM  = regbits< type, 10,  1 >;  /**< LPI Interrupt Mask         */
    using TSIM   = regbits< type,  9,  1 >;  /**< Time Stamp Interrupt Mask  */
    using PIM    = regbits< type,  3,  1 >;  /**< PMT Interrupt Mask         */
    using RGIM   = regbits< type,  0,  1 >;  /**< RGMII Interrupt Mask       */
  };

  /**
   * MAC Address0 Register (High)
   */
  struct MAR0H
  : public reg< uint32_t, base_addr + 0x40, rw, 0x8000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x8000FFFF >;

    using MO  = regbits< type, 31,  1 >;  /**< Must be one   */
    using A0  = regbits< type,  0, 16 >;  /**< MAC Address0  */
  };

  /**
   * MAC Address0 Register (Low)
   */
  struct MAR0L
  : public reg< uint32_t, base_addr + 0x44, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0xFFFFFFFF >;

    using A0  = regbits< type,  0, 32 >;  /**< MAC Address0  */
  };

  /**
   * MAC Address1 Register -High
   */
  struct MAR1H
  : public reg< uint32_t, base_addr + 0x48, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x0000FFFF >;

    using AE   = regbits< type, 31,  1 >;  /**< Address Enable     */
    using SA   = regbits< type, 30,  1 >;  /**< Source Address     */
    using MBC  = regbits< type, 24,  6 >;  /**< Mask Byte Control  */
    using A    = regbits< type,  0, 16 >;  /**< MAC Address        */
  };

  /**
   * MAC Address1 Register -Low
   */
  struct MAR1L
  : public reg< uint32_t, base_addr + 0x4c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0xFFFFFFFF >;

    using A  = regbits< type,  0, 32 >;  /**< MAC Address  */
  };

  /**
   * MAC Address2 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR2H
  : public reg< uint32_t, base_addr + 0x50, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address2 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR2L
  : public reg< uint32_t, base_addr + 0x54, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address3 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR3H
  : public reg< uint32_t, base_addr + 0x58, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address3 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR3L
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address4 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR4H
  : public reg< uint32_t, base_addr + 0x60, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address4 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR4L
  : public reg< uint32_t, base_addr + 0x64, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address5 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR5H
  : public reg< uint32_t, base_addr + 0x68, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address5 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR5L
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address6 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR6H
  : public reg< uint32_t, base_addr + 0x70, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address6 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR6L
  : public reg< uint32_t, base_addr + 0x74, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address7 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR7H
  : public reg< uint32_t, base_addr + 0x78, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address7 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR7L
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address8 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR8H
  : public reg< uint32_t, base_addr + 0x80, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address8 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR8L
  : public reg< uint32_t, base_addr + 0x84, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address9 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR9H
  : public reg< uint32_t, base_addr + 0x88, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address9 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR9L
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address10 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR10H
  : public reg< uint32_t, base_addr + 0x90, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address10 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR10L
  : public reg< uint32_t, base_addr + 0x94, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address11 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR11H
  : public reg< uint32_t, base_addr + 0x98, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address11 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR11L
  : public reg< uint32_t, base_addr + 0x9c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address12 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR12H
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address12 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR12L
  : public reg< uint32_t, base_addr + 0xa4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address13 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR13H
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address13 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR13L
  : public reg< uint32_t, base_addr + 0xac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address14 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR14H
  : public reg< uint32_t, base_addr + 0xb0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address14 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR14L
  : public reg< uint32_t, base_addr + 0xb4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address15 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR15H
  : public reg< uint32_t, base_addr + 0xb8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address15 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR15L
  : public reg< uint32_t, base_addr + 0xbc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RGMII Status Register)
   */
  struct RGSR
  : public reg< uint32_t, base_addr + 0xd8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, ro, 0x00000000 >;

    using LS   = regbits< type,  3,  1 >;  /**< Link Status  */
    using LSP  = regbits< type,  1,  2 >;  /**< Link Speed   */
    using LM   = regbits< type,  0,  1 >;  /**< Link Mode    */
  };

  /**
   * MMC Control Register
   */
  struct mmc_cntl
  : public reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >
  {
  };

  /**
   * Receive Interrupt Register
   */
  struct mmc_intr_rx
  : public reg< uint32_t, base_addr + 0x104, ro, 0x00000000 >
  {
  };

  /**
   * MMC Transmit Interrupt Register
   */
  struct mmc_intr_tx
  : public reg< uint32_t, base_addr + 0x108, ro, 0x00000000 >
  {
  };

  /**
   * MMC Receive Interrupt Mask Register
   */
  struct mmc_intr_mask_rx
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >
  {
  };

  /**
   * MMC Transmit Interrupt Mask Register
   */
  struct mmc_intr_mask_tx
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >
  {
  };

  /**
   * "Number of bytes transmitted, exclusive of preamble and retried bytes, in good and bad frames"
   */
  struct txoctetcount_gb
  : public reg< uint32_t, base_addr + 0x114, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames transmitted, exclusive of retried frames"
   */
  struct txframecount_gb
  : public reg< uint32_t, base_addr + 0x118, ro, 0x00000000 >
  {
  };

  /**
   * Number of good broadcast frames transmitted
   */
  struct txbroadcastframes_g
  : public reg< uint32_t, base_addr + 0x11c, ro, 0x00000000 >
  {
  };

  /**
   * Number of good multicast frames transmitted
   */
  struct txmulticastframes_g
  : public reg< uint32_t, base_addr + 0x120, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames transmitted with length of 64 bytes, exclusive of preamble and retried frames"
   */
  struct tx64octets_gb
  : public reg< uint32_t, base_addr + 0x124, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames transmitted with length between 65 and 127 (inclusive) bytes, exclusive of preamble and retried frames"
   */
  struct tx65to127octets_gb
  : public reg< uint32_t, base_addr + 0x128, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames transmitted with length between 128 and 255 (inclusive) bytes, exclusive of preamble and retried frames"
   */
  struct tx128to255octets_gb
  : public reg< uint32_t, base_addr + 0x12c, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames transmitted with length between 256 and 511 (inclusive) bytes, exclusive of preamble and retried frames"
   */
  struct tx256to511octets_gb
  : public reg< uint32_t, base_addr + 0x130, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames transmitted with length between 512 and 1023 (inclusive) bytes, exclusive of preamble and retried frames"
   */
  struct tx512to1023octets_gb
  : public reg< uint32_t, base_addr + 0x134, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames transmitted with length between 1024 and Maxsize (inclusive) bytes, exclusive of preamble and retried frames"
   */
  struct tx1024tomaxoctets_gb
  : public reg< uint32_t, base_addr + 0x138, ro, 0x00000000 >
  {
  };

  /**
   * Number of good and bad unicast frames transmitted
   */
  struct txunicastframes_gb
  : public reg< uint32_t, base_addr + 0x13c, ro, 0x00000000 >
  {
  };

  /**
   * Number of good and bad multicast frames transmitted
   */
  struct txmulticastframes_gb
  : public reg< uint32_t, base_addr + 0x140, ro, 0x00000000 >
  {
  };

  /**
   * Number of good and bad broadcast frames transmitted
   */
  struct txbroadcastframes_gb
  : public reg< uint32_t, base_addr + 0x144, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames aborted due to frame underflow error
   */
  struct txunderflowerror
  : public reg< uint32_t, base_addr + 0x148, ro, 0x00000000 >
  {
  };

  /**
   * Number of successfully transmitted frames after a single collision in Half-duplex mode
   */
  struct txsinglecol_g
  : public reg< uint32_t, base_addr + 0x14c, ro, 0x00000000 >
  {
  };

  /**
   * Number of successfully transmitted frames after more than a single collision in Half-duplex mode
   */
  struct txmulticol_g
  : public reg< uint32_t, base_addr + 0x150, ro, 0x00000000 >
  {
  };

  /**
   * Number of successfully transmitted frames after a deferral in Half-duplex mode.
   */
  struct txdeferred
  : public reg< uint32_t, base_addr + 0x154, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames aborted due to late collision error.
   */
  struct txlatecol
  : public reg< uint32_t, base_addr + 0x158, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames aborted due to excessive (16) collision errors.
   */
  struct txexesscol
  : public reg< uint32_t, base_addr + 0x15c, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames aborted due to carrier sense error (no carrier or loss of carrier).
   */
  struct txcarriererror
  : public reg< uint32_t, base_addr + 0x160, ro, 0x00000000 >
  {
  };

  /**
   * "Number of bytes transmitted, exclusive of preamble, in good frames only. "
   */
  struct txoctetcount_g
  : public reg< uint32_t, base_addr + 0x164, ro, 0x00000000 >
  {
  };

  /**
   * Number of good frames transmitted.
   */
  struct txframecount_g
  : public reg< uint32_t, base_addr + 0x168, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames aborted due to excessive deferral error (deferred for more than two max-sized frame times).
   */
  struct txexecessdef_g
  : public reg< uint32_t, base_addr + 0x16c, ro, 0x00000000 >
  {
  };

  /**
   * Number of good PAUSE frames transmitted.
   */
  struct txpauseframes
  : public reg< uint32_t, base_addr + 0x170, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good VLAN frames transmitted, exclusive of retried frames. "
   */
  struct txvlanframes_g
  : public reg< uint32_t, base_addr + 0x174, ro, 0x00000000 >
  {
  };

  /**
   * Number of good and bad frames received.
   */
  struct rxframecount_gb
  : public reg< uint32_t, base_addr + 0x180, ro, 0x00000000 >
  {
  };

  /**
   * "Number of bytes received, exclusive of preamble, in good and bad frames. "
   */
  struct rxoctetcount_gb
  : public reg< uint32_t, base_addr + 0x184, ro, 0x00000000 >
  {
  };

  /**
   * "Number of bytes received, exclusive of preamble, only in good frames. "
   */
  struct rxoctetcount_g
  : public reg< uint32_t, base_addr + 0x188, ro, 0x00000000 >
  {
  };

  /**
   * Number of good broadcast frames received.
   */
  struct rxbroadcastframes_g
  : public reg< uint32_t, base_addr + 0x18c, ro, 0x00000000 >
  {
  };

  /**
   * Number of good multicast frames received.
   */
  struct rxmulticastframes_g
  : public reg< uint32_t, base_addr + 0x190, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames received with CRC error.
   */
  struct rxcrcerror
  : public reg< uint32_t, base_addr + 0x194, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames received with alignment (dribble) error. Valid only in 10/100 mode.
   */
  struct rxallignmenterror
  : public reg< uint32_t, base_addr + 0x198, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames received with runt (64 bytes and CRC error) error.
   */
  struct rxrunterror
  : public reg< uint32_t, base_addr + 0x19c, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames received with length greater than 1518 bytes with CRC error.
   */
  struct rxjabbererror
  : public reg< uint32_t, base_addr + 0x1a0, ro, 0x00000000 >
  {
  };

  /**
   * "Number of frames received with length less than 64 bytes, without any errors. "
   */
  struct rxundersize_g
  : public reg< uint32_t, base_addr + 0x1a4, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames received with length greater than the maxsize without error.
   */
  struct rxoversize_g
  : public reg< uint32_t, base_addr + 0x1a8, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames received with length 64 bytes, exclusive of preamble. "
   */
  struct rx64octets_gb
  : public reg< uint32_t, base_addr + 0x1ac, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames received with length between 65 and 127 (inclusive) bytes, exclusive of preamble. "
   */
  struct rx65to127octets_gb
  : public reg< uint32_t, base_addr + 0x1b0, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames received with length between 128 and 255 (inclusive) bytes, exclusive of preamble. "
   */
  struct rx128to255octets_gb
  : public reg< uint32_t, base_addr + 0x1b4, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames received with length between 256 and 511 (inclusive) bytes, exclusive of preamble. "
   */
  struct rx256to511octets_gb
  : public reg< uint32_t, base_addr + 0x1b8, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames received with length between 512 and 1023 (inclusive) bytes, exclusive of preamble. "
   */
  struct rx512to1023octets_gb
  : public reg< uint32_t, base_addr + 0x1bc, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good and bad frames received with length between 1024 and maxsize (inclusive) bytes, exclusive of preamble. "
   */
  struct rx1024tomaxoctets_gb
  : public reg< uint32_t, base_addr + 0x1c0, ro, 0x00000000 >
  {
  };

  /**
   * Number of good unicast frames received.
   */
  struct rxunicastframes_g
  : public reg< uint32_t, base_addr + 0x1c4, ro, 0x00000000 >
  {
  };

  /**
   * "Number of frames received with length error (Length type field is not the frame size), for all frames with valid length field. "
   */
  struct rxlengtherror
  : public reg< uint32_t, base_addr + 0x1c8, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames received with length/type field not equal to the valid frame size (>1500)
   */
  struct rxoutofrangetype
  : public reg< uint32_t, base_addr + 0x1cc, ro, 0x00000000 >
  {
  };

  /**
   * Number of good and valid PAUSE frames received.
   */
  struct rxpauseframes
  : public reg< uint32_t, base_addr + 0x1d0, ro, 0x00000000 >
  {
  };

  /**
   * Number of missed received frames due to FIFO overflow.
   */
  struct rxfifooverflow
  : public reg< uint32_t, base_addr + 0x1d4, ro, 0x00000000 >
  {
  };

  /**
   * Number of good and bad VLAN frames received.
   */
  struct rxvlanframes_gb
  : public reg< uint32_t, base_addr + 0x1d8, ro, 0x00000000 >
  {
  };

  /**
   * Number of frames received with error due to watchdog timeout error (frames with a data load larger than 2048 bytes).
   */
  struct rxwatchdogerror
  : public reg< uint32_t, base_addr + 0x1dc, ro, 0x00000000 >
  {
  };

  /**
   * MMC Receive Checksum Offload Interrupt Mask Register
   */
  struct mmc_ipc_intr_mask_rx
  : public reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >
  {
  };

  /**
   * MMC Receive Checksum Offload Interrupt Register
   */
  struct mmc_ipc_intr_rx
  : public reg< uint32_t, base_addr + 0x208, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good IPv4 datagrams received with the TCP, UDP, or ICMP payload "
   */
  struct rxipv4_gd_frms
  : public reg< uint32_t, base_addr + 0x210, ro, 0x00000000 >
  {
  };

  /**
   * "Number of IPv4 datagrams received with header errors (checksum, length, or version mismatch) "
   */
  struct rxipv4_hdrerr_frms
  : public reg< uint32_t, base_addr + 0x214, ro, 0x00000000 >
  {
  };

  /**
   * "Number of IPv4 datagram frames received that did not have a TCP, UDP, or ICMP payload processed by the Checksum engine "
   */
  struct rxipv4_nopay_frms
  : public reg< uint32_t, base_addr + 0x218, ro, 0x00000000 >
  {
  };

  /**
   * Number of good IPv4 datagrams with fragmentation
   */
  struct rxipv4_frag_frms
  : public reg< uint32_t, base_addr + 0x21c, ro, 0x00000000 >
  {
  };

  /**
   * Number of good IPv4 datagrams received that had a UDP payload with checksum disabled
   */
  struct rxipv4_udsbl_frms
  : public reg< uint32_t, base_addr + 0x220, ro, 0x00000000 >
  {
  };

  /**
   * "Number of good IPv6 datagrams received with TCP, UDP, or ICMP payloads "
   */
  struct rxipv6_gd_frms
  : public reg< uint32_t, base_addr + 0x224, ro, 0x00000000 >
  {
  };

  /**
   * Number of IPv6 datagrams received with header errors (length or version mismatch)
   */
  struct rxipv6_hdrerr_frms
  : public reg< uint32_t, base_addr + 0x228, ro, 0x00000000 >
  {
  };

  /**
   * "Number of IPv6 datagram frames received that did not have a TCP, UDP, or ICMP payload. This includes all IPv6 datagrams with fragmentation or security extension headers "
   */
  struct rxipv6_nopay_frms
  : public reg< uint32_t, base_addr + 0x22c, ro, 0x00000000 >
  {
  };

  /**
   * Number of good IP datagrams with a good UDP payload. This counter is not updated when the rxipv4_udsbl_frms counter is incremented.
   */
  struct rxudp_gd_frms
  : public reg< uint32_t, base_addr + 0x230, ro, 0x00000000 >
  {
  };

  /**
   * Number of good IP datagrams whose UDP payload has a checksum error
   */
  struct rxudp_err_frms
  : public reg< uint32_t, base_addr + 0x234, ro, 0x00000000 >
  {
  };

  /**
   * Number of good IP datagrams with a good TCP payload
   */
  struct rxtcp_gd_frms
  : public reg< uint32_t, base_addr + 0x238, ro, 0x00000000 >
  {
  };

  /**
   * Number of good IP datagrams whose TCP payload has a checksum error
   */
  struct rxtcp_err_frms
  : public reg< uint32_t, base_addr + 0x23c, ro, 0x00000000 >
  {
  };

  /**
   * Number of good IP datagrams with a good ICMP payload
   */
  struct rxicmp_gd_frms
  : public reg< uint32_t, base_addr + 0x240, ro, 0x00000000 >
  {
  };

  /**
   * Number of good IP datagrams whose ICMP payload has a checksum error
   */
  struct rxicmp_err_frms
  : public reg< uint32_t, base_addr + 0x244, ro, 0x00000000 >
  {
  };

  /**
   * "Number of bytes received in good IPv4 datagrams encapsulating TCP, UDP, or ICMP data. (Ethernet header, FCS, pad, or IP pad bytes are not included in this counter or in the octet counters listed below). "
   */
  struct rxipv4_gd_octets
  : public reg< uint32_t, base_addr + 0x250, ro, 0x00000000 >
  {
  };

  /**
   * "Number of bytes received in IPv4 datagrams with header errors (checksum, length, version mismatch). The value in the Length field of IPv4 header is used to update this counter. "
   */
  struct rxipv4_hdrerr_octets
  : public reg< uint32_t, base_addr + 0x254, ro, 0x00000000 >
  {
  };

  /**
   * "Number of bytes received in IPv4 datagrams that did not have a TCP, UDP, or ICMP payload. The value in the IPv4 header's Length field is used to update this counter. "
   */
  struct rxipv4_nopay_octets
  : public reg< uint32_t, base_addr + 0x258, ro, 0x00000000 >
  {
  };

  /**
   * Number of bytes received in fragmented IPv4 datagrams. The value in the IPv4 header's Length field is used to update this counter.
   */
  struct rxipv4_frag_octets
  : public reg< uint32_t, base_addr + 0x25c, ro, 0x00000000 >
  {
  };

  /**
   * Number of bytes received in a UDP segment that had the UDP checksum disabled. This counter does not count IP Header bytes.
   */
  struct rxipv4_udsbl_octets
  : public reg< uint32_t, base_addr + 0x260, ro, 0x00000000 >
  {
  };

  /**
   * "Number of bytes received in good IPv6 datagrams encapsulating TCP, UDP or ICMPv6 data"
   */
  struct rxipv6_gd_octets
  : public reg< uint32_t, base_addr + 0x264, ro, 0x00000000 >
  {
  };

  /**
   * "Number of bytes received in IPv6 datagrams with header errors (length, version mismatch). The value in the IPv6 header's Length field is used to update this counter. "
   */
  struct rxipv6_hdrerr_octets
  : public reg< uint32_t, base_addr + 0x268, ro, 0x00000000 >
  {
  };

  /**
   * "Number of bytes received in IPv6 datagrams that did not have a TCP, UDP, or ICMP payload. The value in the IPv6 header's Length field is used to update this counter. "
   */
  struct rxipv6_nopay_octets
  : public reg< uint32_t, base_addr + 0x26c, ro, 0x00000000 >
  {
  };

  /**
   * Number of bytes received in a good UDP segment. This counter (and the counters below) does not count IP header bytes.
   */
  struct rxudp_gd_octets
  : public reg< uint32_t, base_addr + 0x270, ro, 0x00000000 >
  {
  };

  /**
   * Number of bytes received in a UDP segment that had checksum errors
   */
  struct rxudp_err_octets
  : public reg< uint32_t, base_addr + 0x274, ro, 0x00000000 >
  {
  };

  /**
   * Number of bytes received in a good TCP segment
   */
  struct rxtcp_gd_octets
  : public reg< uint32_t, base_addr + 0x278, ro, 0x00000000 >
  {
  };

  /**
   * Number of bytes received in a TCP segment with checksum errors
   */
  struct rxtcp_err_octets
  : public reg< uint32_t, base_addr + 0x27c, ro, 0x00000000 >
  {
  };

  /**
   * Number of bytes received in a good ICMP segment
   */
  struct rxicmp_gd_octets
  : public reg< uint32_t, base_addr + 0x280, ro, 0x00000000 >
  {
  };

  /**
   * Number of bytes received in an ICMP segment with checksum errors
   */
  struct rxicmp_err_octets
  : public reg< uint32_t, base_addr + 0x284, ro, 0x00000000 >
  {
  };

  /**
   * Time Stamp Control Register
   */
  struct TSCR
  : public reg< uint32_t, base_addr + 0x700, rw, 0x00002000 >
  {
    using type = reg< uint32_t, base_addr + 0x700, rw, 0x00002000 >;

    using ATSFC   = regbits< type, 24,  1 >;  /**< Auxiliary Snapshot FIFO Clear                            */
    using TSENMF  = regbits< type, 18,  1 >;  /**< Enable MAC address for PTP frame filtering               */
    using TSPS    = regbits< type, 16,  2 >;  /**< SelectPTP packets for taking snapshots                   */
    using TSMRM   = regbits< type, 15,  1 >;  /**< Enable Snapshot for Messages Relevant to Master          */
    using TETSEM  = regbits< type, 14,  1 >;  /**< Enable Time Stamp Snapshot for Event Messages            */
    using TSIP4E  = regbits< type, 13,  1 >;  /**< Enable Time Stamp Snapshot for IPv4 frames               */
    using TSIP6E  = regbits< type, 12,  1 >;  /**< Enable Time Stamp Snapshot for IPv6 frames               */
    using TETSP   = regbits< type, 11,  1 >;  /**< Enable Time Stamp Snapshot for PTP over Ethernet frames  */
    using TSV2E   = regbits< type, 10,  1 >;  /**< Enable PTP packet snooping for version 2 format          */
    using TSDB    = regbits< type,  9,  1 >;  /**< Time Stamp Digital or Binary rollover control            */
    using TSEA    = regbits< type,  8,  1 >;  /**< Enable Time Stamp for All Frames                         */
    using TARU    = regbits< type,  5,  1 >;  /**< Addend Register Update                                   */
    using TITE    = regbits< type,  4,  1 >;  /**< Time Stamp Interrupt Trigger Enable                      */
    using TSU     = regbits< type,  3,  1 >;  /**< Time Stamp Update                                        */
    using TSI     = regbits< type,  2,  1 >;  /**< Time Stamp Initialize                                    */
    using TFCU    = regbits< type,  1,  1 >;  /**< Time Stamp Fine or Coarse Update                         */
    using TSE     = regbits< type,  0,  1 >;  /**< Time Stamp Enable                                        */
  };

  /**
   * Sub-Second Increment Register
   */
  struct SSIR
  : public reg< uint32_t, base_addr + 0x704, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x704, rw, 0x00000000 >;

    using SSINC  = regbits< type,  0,  8 >;  /**< Sub-Second Increment Value  */
  };

  /**
   * System Time - Seconds Register
   */
  struct STSR
  : public reg< uint32_t, base_addr + 0x708, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x708, ro, 0x00000000 >;

    using TSS  = regbits< type,  0, 32 >;  /**< Time Stamp Second  */
  };

  /**
   * System Time - Nanoseconds Register
   */
  struct STNR
  : public reg< uint32_t, base_addr + 0x70c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70c, ro, 0x00000000 >;

    using TSSS  = regbits< type,  0, 31 >;  /**< Time Stamp Sub-Seconds  */
  };

  /**
   * System Time - Seconds Update Register
   */
  struct STSUR
  : public reg< uint32_t, base_addr + 0x710, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x710, rw, 0x00000000 >;

    using TSS  = regbits< type,  0, 32 >;  /**< Time Stamp Second  */
  };

  /**
   * System Time - Nanoseconds Update Register
   */
  struct STNUR
  : public reg< uint32_t, base_addr + 0x714, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x714, rw, 0x00000000 >;

    using ADDSUB  = regbits< type, 31,  1 >;  /**< Add or Subtract Time    */
    using TSSS    = regbits< type,  0, 31 >;  /**< Time Stamp Sub-Seconds  */
  };

  /**
   * Time Stamp Addend Register
   */
  struct TSAR
  : public reg< uint32_t, base_addr + 0x718, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x718, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: TSAR
    using TSAR_ = regbits< type,  0, 32 >;  /**< Time Stamp Addend Register  */
  };

  /**
   * Target Time Seconds Register
   */
  struct TTSR
  : public reg< uint32_t, base_addr + 0x71c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x71c, rw, 0x00000000 >;

    using TSTR  = regbits< type,  0, 32 >;  /**< Target Time Stamp Seconds Register  */
  };

  /**
   * Target Time Nanoseconds Register
   */
  struct TTNR
  : public reg< uint32_t, base_addr + 0x720, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x720, rw, 0x00000000 >;

    using TSTR  = regbits< type,  0, 31 >;  /**< Target Time Stamp Nanoseconds Register  */
  };

  /**
   * System Time - Higher Word Seconds Register
   */
  struct STHWSR
  : public reg< uint32_t, base_addr + 0x724, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x724, rw, 0x00000000 >;

    using TSHWR  = regbits< type,  0, 16 >;  /**< Time Stamp Higher Word Register  */
  };

  /**
   * Time Stamp Status Register
   */
  struct TSR
  : public reg< uint32_t, base_addr + 0x728, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x728, ro, 0x00000000 >;

    using ATSNS   = regbits< type, 25,  3 >;  /**< Auxiliary Time Stamp Number of Snapshots      */
    using ATSSTM  = regbits< type, 24,  1 >;  /**< Auxiliary Time Stamp Snapshot Trigger Missed  */
    using TRGTER  = regbits< type,  3,  1 >;  /**< Timestamp Target Time Error                   */
    using ATSTS   = regbits< type,  2,  1 >;  /**< Auxiliary Time Stamp Trigger Snapshot         */
    using TSTART  = regbits< type,  1,  1 >;  /**< Time Stamp Target Time Reached                */
    using TSSOVF  = regbits< type,  0,  1 >;  /**< Time Stamp Seconds Overflow                   */
  };

  /**
   * PPS Control Register
   */
  struct PPSCR
  : public reg< uint32_t, base_addr + 0x72c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x72c, rw, 0x00000000 >;

    using PPSCTRL  = regbits< type,  0,  4 >;  /**< Controls the frequency of the PPS output  */
  };

  /**
   * Auxiliary Time Stamp - Nanoseconds Register
   */
  struct ATNR
  : public reg< uint32_t, base_addr + 0x730, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x730, ro, 0x00000000 >;

    using ATN  = regbits< type,  0, 31 >;  /**< ATN  */
  };

  /**
   * Auxiliary Time Stamp - Seconds Register
   */
  struct ATSR
  : public reg< uint32_t, base_addr + 0x734, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x734, ro, 0x00000000 >;

    using ATS  = regbits< type,  0, 32 >;  /**< ATS  */
  };

  /**
   * MAC Address16 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR16H
  : public reg< uint32_t, base_addr + 0x800, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address16 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR16L
  : public reg< uint32_t, base_addr + 0x804, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address17 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR17H
  : public reg< uint32_t, base_addr + 0x808, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address17 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR17L
  : public reg< uint32_t, base_addr + 0x80c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address18 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR18H
  : public reg< uint32_t, base_addr + 0x810, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address18 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR18L
  : public reg< uint32_t, base_addr + 0x814, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address19 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR19H
  : public reg< uint32_t, base_addr + 0x818, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address19 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR19L
  : public reg< uint32_t, base_addr + 0x81c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address20 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR20H
  : public reg< uint32_t, base_addr + 0x820, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address20 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR20L
  : public reg< uint32_t, base_addr + 0x824, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address21 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR21H
  : public reg< uint32_t, base_addr + 0x828, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address21 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR21L
  : public reg< uint32_t, base_addr + 0x82c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address22 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR22H
  : public reg< uint32_t, base_addr + 0x830, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address22 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR22L
  : public reg< uint32_t, base_addr + 0x834, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address23 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR23H
  : public reg< uint32_t, base_addr + 0x838, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address23 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR23L
  : public reg< uint32_t, base_addr + 0x83c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address24 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR24H
  : public reg< uint32_t, base_addr + 0x840, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address24 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR24L
  : public reg< uint32_t, base_addr + 0x844, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address25 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR25H
  : public reg< uint32_t, base_addr + 0x848, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address25 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR25L
  : public reg< uint32_t, base_addr + 0x84c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address26 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR26H
  : public reg< uint32_t, base_addr + 0x850, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address26 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR26L
  : public reg< uint32_t, base_addr + 0x854, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address27 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR27H
  : public reg< uint32_t, base_addr + 0x858, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address27 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR27L
  : public reg< uint32_t, base_addr + 0x85c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address28 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR28H
  : public reg< uint32_t, base_addr + 0x860, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address28 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR28L
  : public reg< uint32_t, base_addr + 0x864, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address29 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR29H
  : public reg< uint32_t, base_addr + 0x868, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address29 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR29L
  : public reg< uint32_t, base_addr + 0x86c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address30 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR30H
  : public reg< uint32_t, base_addr + 0x870, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address30 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR30L
  : public reg< uint32_t, base_addr + 0x874, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address31 Register -High
   *
   * (derived from: MAR1H)
   */
  struct MAR31H
  : public reg< uint32_t, base_addr + 0x878, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * MAC Address31 Register -Low
   *
   * (derived from: MAR1L)
   */
  struct MAR31L
  : public reg< uint32_t, base_addr + 0x87c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Bus Mode Register
   */
  struct BMR
  : public reg< uint32_t, base_addr + 0x1000, rw, 0x00020101 >
  {
    using type = reg< uint32_t, base_addr + 0x1000, rw, 0x00020101 >;

    using TXPR    = regbits< type, 27,  1 >;  /**< Transmit Priority          */
    using MB      = regbits< type, 26,  1 >;  /**< Mixed Burst                */
    using AAL     = regbits< type, 25,  1 >;  /**< Address-Aligned Beats      */
    using _8XPBL  = regbits< type, 24,  1 >;  /**< 8xPBL Mode                 */
    using USP     = regbits< type, 23,  1 >;  /**< Use Separate PBL           */
    using RPBL    = regbits< type, 17,  6 >;  /**< RxDMA PBL                  */
    using FB      = regbits< type, 16,  1 >;  /**< Fixed Burst                */
    using PR      = regbits< type, 14,  2 >;  /**< Rx:Tx priority ratio       */
    using PBL     = regbits< type,  8,  6 >;  /**< Programmable Burst Length  */
    using ATDS    = regbits< type,  7,  1 >;  /**< Alternate Descriptor Size  */
    using DSL     = regbits< type,  2,  5 >;  /**< Descriptor Skip Length     */
    using DA      = regbits< type,  1,  1 >;  /**< DMA Arbitration scheme     */
    using SWR     = regbits< type,  0,  1 >;  /**< Software Reset             */
  };

  /**
   * Transmit Poll Demand Register)
   */
  struct TPDR
  : public reg< uint32_t, base_addr + 0x1004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0x00000000 >;

    using TPD  = regbits< type,  0, 32 >;  /**< Transmit Poll Demand  */
  };

  /**
   * Receive Poll Demand Register
   */
  struct RPDR
  : public reg< uint32_t, base_addr + 0x1008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1008, rw, 0x00000000 >;

    using RPD  = regbits< type,  0, 32 >;  /**< Receive Poll Demand  */
  };

  /**
   * Receive Descriptor List Address Register)
   */
  struct RDLAR
  : public reg< uint32_t, base_addr + 0x100c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100c, rw, 0x00000000 >;

    using SRL  = regbits< type,  2, 30 >;  /**< Start of Receive List  */
  };

  /**
   * Transmit Descriptor List Address Register
   */
  struct TDLAR
  : public reg< uint32_t, base_addr + 0x1010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0x00000000 >;

    using STL  = regbits< type,  2, 30 >;  /**< Start of Transmit List  */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x1014, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1014, ro, 0x00000000 >;

    using GLPII  = regbits< type, 30,  1 >;  /**< GMAC LPI Interrupt             */
    using TTI    = regbits< type, 29,  1 >;  /**< Time-Stamp Trigger Interrupt   */
    using GPI    = regbits< type, 28,  1 >;  /**< GMAC PMT Interrupt             */
    using GMI    = regbits< type, 27,  1 >;  /**< GMAC MMC Interrupt             */
    using GLI    = regbits< type, 26,  1 >;  /**< GMAC Line interface Interrupt  */
    using EB     = regbits< type, 23,  3 >;  /**< Error Bits                     */
    using TS     = regbits< type, 20,  3 >;  /**< Transmit Process State         */
    using RS     = regbits< type, 17,  3 >;  /**< Receive Process State          */
    using NIS    = regbits< type, 16,  1 >;  /**< Normal Interrupt Summary       */
    using AIS    = regbits< type, 15,  1 >;  /**< Abnormal Interrupt Summary     */
    using ERI    = regbits< type, 14,  1 >;  /**< Early Receive Interrupt        */
    using FBI    = regbits< type, 13,  1 >;  /**< Fatal Bus Error Interrupt      */
    using ETI    = regbits< type, 10,  1 >;  /**< Early Transmit Interrupt       */
    using RWT    = regbits< type,  9,  1 >;  /**< Receive Watchdog Timeout       */
    using RPS    = regbits< type,  8,  1 >;  /**< Receive process Stopped        */
    using RU     = regbits< type,  7,  1 >;  /**< Receive Buffer Unavailable     */
    using RI     = regbits< type,  6,  1 >;  /**< Receive Interrupt              */
    using UNF    = regbits< type,  5,  1 >;  /**< Transmit underflow             */
    using OVF    = regbits< type,  4,  1 >;  /**< Receive Overflow               */
    using TJT    = regbits< type,  3,  1 >;  /**< Transmit Jabber Timeout        */
    using TU     = regbits< type,  2,  1 >;  /**< Transmit Buffer Unavailable    */
    using TPS    = regbits< type,  1,  1 >;  /**< Transmit Process Stopped       */
    using TI     = regbits< type,  0,  1 >;  /**< Transmit Interrupt             */
  };

  /**
   * Operation Mode Register
   */
  struct OMR
  : public reg< uint32_t, base_addr + 0x1018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1018, rw, 0x00000000 >;

    using DT   = regbits< type, 26,  1 >;  /**< Disable Dropping of TCP/IP Checksum Error Frames  */
    using RSF  = regbits< type, 25,  1 >;  /**< Receive Store and Forward                         */
    using DFF  = regbits< type, 24,  1 >;  /**< Disable Flushing of Received Frames               */
    using TSF  = regbits< type, 21,  1 >;  /**< Transmit Store Forward                            */
    using FTF  = regbits< type, 20,  1 >;  /**< Flush Transmit FIFO                               */
    using TTC  = regbits< type, 14,  3 >;  /**< Transmit Threshold Control                        */
    using ST   = regbits< type, 13,  1 >;  /**< Start/Stop Transmission Command                   */
    using FEF  = regbits< type,  7,  1 >;  /**< Forward Error Frames                              */
    using FUF  = regbits< type,  6,  1 >;  /**< Forward Undersized Good Frames                    */
    using RTC  = regbits< type,  3,  2 >;  /**< Receive Threshold Control                         */
    using OSF  = regbits< type,  2,  1 >;  /**< Operate on Second Frame                           */
    using SR   = regbits< type,  1,  1 >;  /**< Start/Stop Receive                                */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x101c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x101c, rw, 0x00000000 >;

    using NIE  = regbits< type, 16,  1 >;  /**< Normal Interrupt Summary Enable    */
    using AIE  = regbits< type, 15,  1 >;  /**< Abnormal Interrupt Summary Enable  */
    using ERE  = regbits< type, 14,  1 >;  /**< Early Receive Interrupt Enable     */
    using FBE  = regbits< type, 13,  1 >;  /**< Fatal Bus Error Enable             */
    using ETE  = regbits< type, 10,  1 >;  /**< Early Transmit Interrupt Enable    */
    using RWE  = regbits< type,  9,  1 >;  /**< Receive Watchdog Timeout Enable    */
    using RSE  = regbits< type,  8,  1 >;  /**< Receive Process Stopped Enable     */
    using RUE  = regbits< type,  7,  1 >;  /**< Receive Buffer Unavailable Enable  */
    using RIE  = regbits< type,  6,  1 >;  /**< Receive Interrupt Enable           */
    using UNE  = regbits< type,  5,  1 >;  /**< Transmit underflow Enable          */
    using OVE  = regbits< type,  4,  1 >;  /**< Receive Overflow Enable            */
    using TJE  = regbits< type,  3,  1 >;  /**< Transmit Jabber Timeout            */
    using TUE  = regbits< type,  2,  1 >;  /**< Transmit Buffer Unavailable        */
    using TSE  = regbits< type,  1,  1 >;  /**< Transmit Process Stopped           */
    using TIE  = regbits< type,  0,  1 >;  /**< Transmit Interrupt                 */
  };

  /**
   * Missed Frame and Buffer Overflow Counter Register
   */
  struct MFBOCR
  : public reg< uint32_t, base_addr + 0x1020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1020, ro, 0x00000000 >;

    using ONMFF  = regbits< type, 28,  1 >;  /**< Overflow NMFF                           */
    using NMFF   = regbits< type, 17, 11 >;  /**< Number of Missed frame by Ethernet-MAC  */
    using ONMFH  = regbits< type, 16,  1 >;  /**< Overflow NMFH                           */
    using NMFH   = regbits< type,  0, 16 >;  /**< Number of Missed frame by HOST          */
  };

  /**
   * Receive Interrupt Watchdog Timer Register
   */
  struct RIWTR
  : public reg< uint32_t, base_addr + 0x1024, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0x00000000 >;

    using RIWT  = regbits< type,  0,  8 >;  /**< RI Watchdog Timer count  */
  };

  /**
   * AHB Status Register
   */
  struct AHBSR
  : public reg< uint32_t, base_addr + 0x102c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x102c, ro, 0x00000000 >;

    using AHBS  = regbits< type,  0,  1 >;  /**< AHB Status  */
  };

  /**
   * Current Host Transmit Descriptor Register
   */
  struct CHTDR
  : public reg< uint32_t, base_addr + 0x1048, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1048, ro, 0x00000000 >;

    using HTDAP  = regbits< type,  0, 32 >;  /**< Host Transmit Descriptor Address Pointer  */
  };

  /**
   * Current Host Receive Descriptor Register
   */
  struct CHRDR
  : public reg< uint32_t, base_addr + 0x104c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, ro, 0x00000000 >;

    using HRDAP  = regbits< type,  0, 32 >;  /**< Host Receive Descriptor Address Pointer  */
  };

  /**
   * Current Host Transmit Buffer Address Register
   */
  struct CHTBAR
  : public reg< uint32_t, base_addr + 0x1050, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0x00000000 >;

    using HTBAR  = regbits< type,  0, 32 >;  /**< Host Transmit Buffer Address Register  */
  };

  /**
   * Current Host Receive Buffer Address Register
   */
  struct CHRBAR
  : public reg< uint32_t, base_addr + 0x1054, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1054, ro, 0x00000000 >;

    using HRBAR  = regbits< type,  0, 32 >;  /**< Host Receive Buffer Address Register  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ETHERNET_MAC0_HPP_INCLUDED
