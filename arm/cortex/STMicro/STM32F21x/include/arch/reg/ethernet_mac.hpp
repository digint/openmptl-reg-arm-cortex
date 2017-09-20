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
//  Import from CMSIS-SVD: "STMicro/STM32F21x.svd"
//
//  name: STM32F21x
//  version: 1.0
//  description: STM32F21x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ETHERNET_MAC_HPP_INCLUDED
#define ARCH_REG_ETHERNET_MAC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Ethernet: media access control (MAC)
 */
struct Ethernet_MAC
{
  static constexpr reg_addr_t base_addr = 0x40028000;

  /**
   * Ethernet MAC configuration register
   */
  struct MACCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x8000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x8000 >;

    using RE    = regbits< type,  2,  1 >;  /**< RE    */
    using TE    = regbits< type,  3,  1 >;  /**< TE    */
    using DC    = regbits< type,  4,  1 >;  /**< DC    */
    using BL    = regbits< type,  5,  2 >;  /**< BL    */
    using APCS  = regbits< type,  7,  1 >;  /**< APCS  */
    using RD    = regbits< type,  9,  1 >;  /**< RD    */
    using IPCO  = regbits< type, 10,  1 >;  /**< IPCO  */
    using DM    = regbits< type, 11,  1 >;  /**< DM    */
    using LM    = regbits< type, 12,  1 >;  /**< LM    */
    using ROD   = regbits< type, 13,  1 >;  /**< ROD   */
    using FES   = regbits< type, 14,  1 >;  /**< FES   */
    using CSD   = regbits< type, 16,  1 >;  /**< CSD   */
    using IFG   = regbits< type, 17,  3 >;  /**< IFG   */
    using JD    = regbits< type, 22,  1 >;  /**< JD    */
    using WD    = regbits< type, 23,  1 >;  /**< WD    */
    using CSTF  = regbits< type, 25,  1 >;  /**< CSTF  */
  };

  /**
   * Ethernet MAC frame filter register
   */
  struct MACFFR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using PM    = regbits< type,  0,  1 >;  /**< Promiscuous mode                       */
    using HU    = regbits< type,  1,  1 >;  /**< Hash unicast                           */
    using HM    = regbits< type,  2,  1 >;  /**< Hash multicast                         */
    using DAIF  = regbits< type,  3,  1 >;  /**< Destination address inverse filtering  */
    using PAM   = regbits< type,  4,  1 >;  /**< Pass all multicast                     */
    using BFD   = regbits< type,  5,  1 >;  /**< Broadcast frames disable               */
    using PCF   = regbits< type,  6,  1 >;  /**< Pass control frames                    */
    using SAIF  = regbits< type,  8,  1 >;  /**< Source address inverse filtering       */
    using SAF   = regbits< type,  9,  1 >;  /**< Source address filter                  */
    using HPF   = regbits< type, 10,  1 >;  /**< Hash or perfect filter                 */
    using RA    = regbits< type, 31,  1 >;  /**< Receive all                            */
  };

  /**
   * Ethernet MAC hash table high register
   */
  struct MACHTHR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using HTH  = regbits< type,  0, 32 >;  /**< Hash table high  */
  };

  /**
   * Ethernet MAC hash table low register
   */
  struct MACHTLR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using HTL  = regbits< type,  0, 32 >;  /**< Hash table low  */
  };

  /**
   * Ethernet MAC MII address register
   */
  struct MACMIIAR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using MB  = regbits< type,  0,  1 >;  /**< MII busy      */
    using MW  = regbits< type,  1,  1 >;  /**< MII write     */
    using CR  = regbits< type,  2,  3 >;  /**< Clock range   */
    using MR  = regbits< type,  6,  5 >;  /**< MII register  */
    using PA  = regbits< type, 11,  5 >;  /**< PHY address   */
  };

  /**
   * Ethernet MAC MII data register
   */
  struct MACMIIDR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using MD  = regbits< type,  0, 16 >;  /**< MII data  */
  };

  /**
   * Ethernet MAC flow control register
   */
  struct MACFCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using FCB   = regbits< type,  0,  1 >;  /**< Flow control busy/back pressure activate  */
    using TFCE  = regbits< type,  1,  1 >;  /**< Transmit flow control enable              */
    using RFCE  = regbits< type,  2,  1 >;  /**< Receive flow control enable               */
    using UPFD  = regbits< type,  3,  1 >;  /**< Unicast pause frame detect                */
    using PLT   = regbits< type,  4,  2 >;  /**< Pause low threshold                       */
    using ZQPD  = regbits< type,  7,  1 >;  /**< Zero-quanta pause disable                 */
    using PT    = regbits< type, 16, 16 >;  /**< Pause time                                */
  };

  /**
   * Ethernet MAC VLAN tag register
   */
  struct MACVLANTR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using VLANTI  = regbits< type,  0, 16 >;  /**< VLAN tag identifier         */
    using VLANTC  = regbits< type, 16,  1 >;  /**< 12-bit VLAN tag comparison  */
  };

  /**
   * Ethernet MAC PMT control and status register
   */
  struct MACPMTCSR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using PD      = regbits< type,  0,  1 >;  /**< Power down                                  */
    using MPE     = regbits< type,  1,  1 >;  /**< Magic Packet enable                         */
    using WFE     = regbits< type,  2,  1 >;  /**< Wakeup frame enable                         */
    using MPR     = regbits< type,  5,  1 >;  /**< Magic packet received                       */
    using WFR     = regbits< type,  6,  1 >;  /**< Wakeup frame received                       */
    using GU      = regbits< type,  9,  1 >;  /**< Global unicast                              */
    using WFFRPR  = regbits< type, 31,  1 >;  /**< Wakeup frame filter register pointer reset  */
  };

  /**
   * Ethernet MAC debug register
   */
  struct MACDBGR
  : public reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >;

    using MMRPEA   = regbits< type,  0,  1 >;  /**< MAC MII receive protocol engine active          */
    using MSFRWCS  = regbits< type,  1,  1 >;  /**< MAC small FIFO read / write controllers status  */
    using RFWRA    = regbits< type,  4,  1 >;  /**< Rx FIFO write controller active                 */
    using RFRCS    = regbits< type,  5,  1 >;  /**< Rx FIFO read controller status                  */
    using RFFL     = regbits< type,  8,  1 >;  /**< Rx FIFO fill level                              */
    using MMTEA    = regbits< type, 16,  1 >;  /**< MAC MII transmit engine active                  */
    using MTFCS    = regbits< type, 17,  2 >;  /**< MAC transmit frame controller status            */
    using MTP      = regbits< type, 19,  1 >;  /**< MAC transmitter in pause                        */
    using TFRS     = regbits< type, 20,  2 >;  /**< Tx FIFO read status                             */
    using TFWA     = regbits< type, 22,  1 >;  /**< Tx FIFO write active                            */
    using TFNE     = regbits< type, 24,  1 >;  /**< Tx FIFO not empty                               */
    using TFF      = regbits< type, 25,  1 >;  /**< Tx FIFO full                                    */
  };

  /**
   * Ethernet MAC interrupt status register
   */
  struct MACSR
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using PMTS   = regbits< type,  3,  1 >;  /**< PMT status                 */
    using MMCS   = regbits< type,  4,  1 >;  /**< MMC status                 */
    using MMCRS  = regbits< type,  5,  1 >;  /**< MMC receive status         */
    using MMCTS  = regbits< type,  6,  1 >;  /**< MMC transmit status        */
    using TSTS   = regbits< type,  9,  1 >;  /**< Time stamp trigger status  */
  };

  /**
   * Ethernet MAC interrupt mask register
   */
  struct MACIMR
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using PMTIM  = regbits< type,  3,  1 >;  /**< PMT interrupt mask                 */
    using TSTIM  = regbits< type,  9,  1 >;  /**< Time stamp trigger interrupt mask  */
  };

  /**
   * Ethernet MAC address 0 high register
   */
  struct MACA0HR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x0010FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x0010FFFF >;

    using MACA0H  = regbits< type,  0, 16 >;  /**< MAC address0 high  */
    using MO      = regbits< type, 31,  1 >;  /**< MO                 */
  };

  /**
   * Ethernet MAC address 0 low register
   */
  struct MACA0LR
  : public reg< uint32_t, base_addr + 0x44, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0xFFFFFFFF >;

    using MACA0L  = regbits< type,  0, 32 >;  /**< MAC address0 low  */
  };

  /**
   * Ethernet MAC address 1 high register
   */
  struct MACA1HR
  : public reg< uint32_t, base_addr + 0x48, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0xFFFF >;

    using MACA1H  = regbits< type,  0, 16 >;  /**< MAC address1 high  */
    using MBC     = regbits< type, 24,  6 >;  /**< Mask byte control  */
    using SA      = regbits< type, 30,  1 >;  /**< Source address     */
    using AE      = regbits< type, 31,  1 >;  /**< Address enable     */
  };

  /**
   * Ethernet MAC address1 low register
   */
  struct MACA1LR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: MACA1LR
    using MACA1LR_ = regbits< type,  0, 32 >;  /**< MAC address1 low  */
  };

  /**
   * Ethernet MAC address 2 high register
   */
  struct MACA2HR
  : public reg< uint32_t, base_addr + 0x50, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0xFFFF >;

    using MAC2AH  = regbits< type,  0, 16 >;  /**< MAC address2 high  */
    using MBC     = regbits< type, 24,  6 >;  /**< Mask byte control  */
    using SA      = regbits< type, 30,  1 >;  /**< Source address     */
    using AE      = regbits< type, 31,  1 >;  /**< Address enable     */
  };

  /**
   * Ethernet MAC address 2 low register
   */
  struct MACA2LR
  : public reg< uint32_t, base_addr + 0x54, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0xFFFFFFFF >;

    using MACA2L  = regbits< type,  0, 31 >;  /**< MAC address2 low  */
  };

  /**
   * Ethernet MAC address 3 high register
   */
  struct MACA3HR
  : public reg< uint32_t, base_addr + 0x58, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0xFFFF >;

    using MACA3H  = regbits< type,  0, 16 >;  /**< MAC address3 high  */
    using MBC     = regbits< type, 24,  6 >;  /**< Mask byte control  */
    using SA      = regbits< type, 30,  1 >;  /**< Source address     */
    using AE      = regbits< type, 31,  1 >;  /**< Address enable     */
  };

  /**
   * Ethernet MAC address 3 low register
   */
  struct MACA3LR
  : public reg< uint32_t, base_addr + 0x5c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0xFFFFFFFF >;

    using MBCA3L  = regbits< type,  0, 32 >;  /**< MAC address3 low  */
  };

  /**
   * Ethernet MAC remote wakeup frame filter register
   */
  struct MACRWUFFR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_ETHERNET_MAC_HPP_INCLUDED
