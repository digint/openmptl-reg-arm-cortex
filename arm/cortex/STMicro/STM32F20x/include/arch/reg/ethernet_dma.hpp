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
//  Import from CMSIS-SVD: "STMicro/STM32F20x.svd"
//
//  name: STM32F20x
//  version: 1.0
//  description: STM32F20x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ETHERNET_DMA_HPP_INCLUDED
#define ARCH_REG_ETHERNET_DMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Ethernet: DMA controller operation
 */
struct Ethernet_DMA
{
  static constexpr reg_addr_t base_addr = 0x40029000;

  /**
   * Ethernet DMA bus mode register
   */
  struct DMABMR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x20101 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x20101 >;

    using SR    = regbits< type,  0,  1 >;  /**< Software reset                     */
    using DA    = regbits< type,  1,  1 >;  /**< DMA Arbitration                    */
    using DSL   = regbits< type,  2,  5 >;  /**< Descriptor skip length             */
    using EDFE  = regbits< type,  7,  1 >;  /**< Enhanced descriptor format enable  */
    using PBL   = regbits< type,  8,  6 >;  /**< Programmable burst length          */
    using RTPR  = regbits< type, 14,  2 >;  /**< Rx Tx priority ratio               */
    using FB    = regbits< type, 16,  1 >;  /**< Fixed burst                        */
    using RDP   = regbits< type, 17,  6 >;  /**< Rx DMA PBL                         */
    using USP   = regbits< type, 23,  1 >;  /**< Use separate PBL                   */
    using FPM   = regbits< type, 24,  1 >;  /**< 4xPBL mode                         */
    using AAB   = regbits< type, 25,  1 >;  /**< Address-aligned beats              */
    using MB    = regbits< type, 26,  1 >;  /**< Mixed burst                        */
  };

  /**
   * Ethernet DMA transmit poll demand register
   */
  struct DMATPDR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TPD  = regbits< type,  0, 32 >;  /**< Transmit poll demand  */
  };

  /**
   * EHERNET DMA receive poll demand register
   */
  struct DMARPDR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using RPD  = regbits< type,  0, 32 >;  /**< Receive poll demand  */
  };

  /**
   * Ethernet DMA receive descriptor list address register
   */
  struct DMARDLAR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using SRL  = regbits< type,  0, 32 >;  /**< Start of receive list  */
  };

  /**
   * Ethernet DMA transmit descriptor list address register
   */
  struct DMATDLAR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using STL  = regbits< type,  0, 32 >;  /**< Start of transmit list  */
  };

  /**
   * Ethernet DMA status register
   */
  struct DMASR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using TS    = regbits< type,  0,  1 >;  /**< Transmit status                     */
    using TPSS  = regbits< type,  1,  1 >;  /**< Transmit process stopped status     */
    using TBUS  = regbits< type,  2,  1 >;  /**< Transmit buffer unavailable status  */
    using TJTS  = regbits< type,  3,  1 >;  /**< Transmit jabber timeout status      */
    using ROS   = regbits< type,  4,  1 >;  /**< Receive overflow status             */
    using TUS   = regbits< type,  5,  1 >;  /**< Transmit underflow status           */
    using RS    = regbits< type,  6,  1 >;  /**< Receive status                      */
    using RBUS  = regbits< type,  7,  1 >;  /**< Receive buffer unavailable status   */
    using RPSS  = regbits< type,  8,  1 >;  /**< Receive process stopped status      */
    using PWTS  = regbits< type,  9,  1 >;  /**< Receive watchdog timeout status     */
    using ETS   = regbits< type, 10,  1 >;  /**< Early transmit status               */
    using FBES  = regbits< type, 13,  1 >;  /**< Fatal bus error status              */
    using ERS   = regbits< type, 14,  1 >;  /**< Early receive status                */
    using AIS   = regbits< type, 15,  1 >;  /**< Abnormal interrupt summary          */
    using NIS   = regbits< type, 16,  1 >;  /**< Normal interrupt summary            */
    using RPS   = regbits< type, 17,  3 >;  /**< Receive process state               */
    using TPS   = regbits< type, 20,  3 >;  /**< Transmit process state              */
    using EBS   = regbits< type, 23,  3 >;  /**< Error bits status                   */
    using MMCS  = regbits< type, 27,  1 >;  /**< MMC status                          */
    using PMTS  = regbits< type, 28,  1 >;  /**< PMT status                          */
    using TSTS  = regbits< type, 29,  1 >;  /**< Time stamp trigger status           */
  };

  /**
   * Ethernet DMA operation mode register
   */
  struct DMAOMR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using SR      = regbits< type,  1,  1 >;  /**< SR      */
    using OSF     = regbits< type,  2,  1 >;  /**< OSF     */
    using RTC     = regbits< type,  3,  2 >;  /**< RTC     */
    using FUGF    = regbits< type,  6,  1 >;  /**< FUGF    */
    using FEF     = regbits< type,  7,  1 >;  /**< FEF     */
    using ST      = regbits< type, 13,  1 >;  /**< ST      */
    using TTC     = regbits< type, 14,  3 >;  /**< TTC     */
    using FTF     = regbits< type, 20,  1 >;  /**< FTF     */
    using TSF     = regbits< type, 21,  1 >;  /**< TSF     */
    using DFRF    = regbits< type, 24,  1 >;  /**< DFRF    */
    using RSF     = regbits< type, 25,  1 >;  /**< RSF     */
    using DTCEFD  = regbits< type, 26,  1 >;  /**< DTCEFD  */
  };

  /**
   * Ethernet DMA interrupt enable register
   */
  struct DMAIER
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using TIE    = regbits< type,  0,  1 >;  /**< Transmit interrupt enable                     */
    using TPSIE  = regbits< type,  1,  1 >;  /**< Transmit process stopped interrupt enable     */
    using TBUIE  = regbits< type,  2,  1 >;  /**< Transmit buffer unavailable interrupt enable  */
    using TJTIE  = regbits< type,  3,  1 >;  /**< Transmit jabber timeout interrupt enable      */
    using ROIE   = regbits< type,  4,  1 >;  /**< Overflow interrupt enable                     */
    using TUIE   = regbits< type,  5,  1 >;  /**< Underflow interrupt enable                    */
    using RIE    = regbits< type,  6,  1 >;  /**< Receive interrupt enable                      */
    using RBUIE  = regbits< type,  7,  1 >;  /**< Receive buffer unavailable interrupt enable   */
    using RPSIE  = regbits< type,  8,  1 >;  /**< Receive process stopped interrupt enable      */
    using RWTIE  = regbits< type,  9,  1 >;  /**< receive watchdog timeout interrupt enable     */
    using ETIE   = regbits< type, 10,  1 >;  /**< Early transmit interrupt enable               */
    using FBEIE  = regbits< type, 13,  1 >;  /**< Fatal bus error interrupt enable              */
    using ERIE   = regbits< type, 14,  1 >;  /**< Early receive interrupt enable                */
    using AISE   = regbits< type, 15,  1 >;  /**< Abnormal interrupt summary enable             */
    using NISE   = regbits< type, 16,  1 >;  /**< Normal interrupt summary enable               */
  };

  /**
   * Ethernet DMA missed frame and buffer overflow counter register
   */
  struct DMAMFBOCR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using MFC   = regbits< type,  0, 16 >;  /**< Missed frames by the controller         */
    using OMFC  = regbits< type, 16,  1 >;  /**< Overflow bit for missed frame counter   */
    using MFA   = regbits< type, 17, 11 >;  /**< Missed frames by the application        */
    using OFOC  = regbits< type, 28,  1 >;  /**< Overflow bit for FIFO overflow counter  */
  };

  /**
   * Ethernet DMA receive status watchdog timer register
   */
  struct DMARSWTR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using RSWTC  = regbits< type,  0,  8 >;  /**< Receive status watchdog timer count  */
  };

  /**
   * Ethernet DMA current host transmit descriptor register
   */
  struct DMACHTDR
  : public reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >;

    using HTDAP  = regbits< type,  0, 32 >;  /**< Host transmit descriptor address pointer  */
  };

  /**
   * Ethernet DMA current host receive descriptor register
   */
  struct DMACHRDR
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >;

    using HRDAP  = regbits< type,  0, 32 >;  /**< Host receive descriptor address pointer  */
  };

  /**
   * Ethernet DMA current host transmit buffer address register
   */
  struct DMACHTBAR
  : public reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >;

    using HTBAP  = regbits< type,  0, 32 >;  /**< Host transmit buffer address pointer  */
  };

  /**
   * Ethernet DMA current host receive buffer address register
   */
  struct DMACHRBAR
  : public reg< uint32_t, base_addr + 0x54, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0x00000000 >;

    using HRBAP  = regbits< type,  0, 32 >;  /**< Host receive buffer address pointer  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ETHERNET_DMA_HPP_INCLUDED
