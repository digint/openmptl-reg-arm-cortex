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
//  Import from CMSIS-SVD: "Freescale/MK70F15WS.svd"
//
//  name: MK70F15WS
//  version: 1.6
//  description: MK70F15WS Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USBHS_HPP_INCLUDED
#define ARCH_REG_USBHS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB HS/FS/LS OTG Controller
 */
struct USBHS
{
  static constexpr reg_addr_t base_addr = 0x40034000;

  /**
   * Identification Register
   */
  struct ID
  : public reg< uint32_t, base_addr + 0, ro, 0xE461FA05 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0xE461FA05 >;

    // fixme: Field name equals parent register name: ID
    using ID_        = regbits< type,  0,  6 >;  /**< Configuration number      */
    using RESERVED   = regbits< type,  6,  2 >;  /**< Reserved                  */
    using NID        = regbits< type,  8,  6 >;  /**< no description available  */
    using RESERVED   = regbits< type, 14,  2 >;  /**< Reserved                  */
    using TAG        = regbits< type, 16,  5 >;  /**< Tag                       */
    using REVISION   = regbits< type, 21,  4 >;  /**< Revision                  */
    using VERSION    = regbits< type, 25,  4 >;  /**< Version                   */
    using VERSIONID  = regbits< type, 29,  3 >;  /**< Version ID                */
  };

  /**
   * General Hardware Parameters Register
   */
  struct HWGENERAL
  : public reg< uint32_t, base_addr + 0x4, ro, 0x85 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x85 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< Reserved     */
    using RESERVED  = regbits< type,  1,  1 >;  /**< Reserved     */
    using RESERVED  = regbits< type,  2,  1 >;  /**< Reserved     */
    using RESERVED  = regbits< type,  3,  3 >;  /**< Reserved     */
    using PHYM      = regbits< type,  6,  3 >;  /**< PHY Mode     */
    using SM        = regbits< type,  9,  2 >;  /**< Serial mode  */
    using RESERVED  = regbits< type, 11, 21 >;  /**< Reserved     */
  };

  /**
   * Host Hardware Parameters Register
   */
  struct HWHOST
  : public reg< uint32_t, base_addr + 0x8, ro, 0x10020001 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x10020001 >;

    using HC        = regbits< type,  0,  1 >;  /**< Host Capable                               */
    using NPORT     = regbits< type,  1,  3 >;  /**< Number of Ports                            */
    using RESERVED  = regbits< type,  4, 12 >;  /**< Reserved                                   */
    using TTASY     = regbits< type, 16,  8 >;  /**< Transaction translator contexts.           */
    using TTPER     = regbits< type, 24,  8 >;  /**< Transaction translator periodic contexts.  */
  };

  /**
   * Device Hardware Parameters Register
   */
  struct HWDEVICE
  : public reg< uint32_t, base_addr + 0xc, ro, 0x9 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x9 >;

    using DC        = regbits< type,  0,  1 >;  /**< Device Capable     */
    using DEVEP     = regbits< type,  1,  5 >;  /**< Device endpoints.  */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved           */
  };

  /**
   * Transmit Buffer Hardware Parameters Register
   */
  struct HWTXBUF
  : public reg< uint32_t, base_addr + 0x10, ro, 0x80070908 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x80070908 >;

    using TXBURST    = regbits< type,  0,  8 >;  /**< Transmit Burst.                   */
    using TXADD      = regbits< type,  8,  8 >;  /**< Transmit Address.                 */
    using TXCHANADD  = regbits< type, 16,  8 >;  /**< Transmit Channel Address          */
    using RESERVED   = regbits< type, 24,  7 >;  /**< Reserved                          */
    using TXLC       = regbits< type, 31,  1 >;  /**< Transmit local Context Registers  */
  };

  /**
   * Receive Buffer Hardware Parameters Register
   */
  struct HWRXBUF
  : public reg< uint32_t, base_addr + 0x14, ro, 0x808 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x808 >;

    using RXBURST   = regbits< type,  0,  8 >;  /**< Receive Burst.    */
    using RXADD     = regbits< type,  8,  8 >;  /**< Receive Address.  */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved          */
  };

  /**
   * General Purpose Timer n Load Register
   */
  struct GPTIMER%sLD
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using GPTLD     = regbits< type,  0, 24 >;  /**< no description available  */
    using RESERVED  = regbits< type, 24,  8 >;  /**< Reserved                  */
  };

  /**
   * General Purpose Timer n Control Register
   */
  struct GPTIMER%sCTL
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using GPTCNT    = regbits< type,  0, 24 >;  /**< Timer Count  */
    using MODE      = regbits< type, 24,  1 >;  /**< Timer Mode   */
    using RESERVED  = regbits< type, 25,  5 >;  /**< Reserved     */
    using RST       = regbits< type, 30,  1 >;  /**< Timer Reset  */
    using RUN       = regbits< type, 31,  1 >;  /**< Timer Run    */
  };

  /**
   * System Bus Interface Configuration Register
   */
  struct USB_SBUSCFG
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using BURSTMODE  = regbits< type,  0,  3 >;  /**< Burst mode  */
    using RESERVED   = regbits< type,  3, 29 >;  /**< Reserved    */
  };

  /**
   * Host Controller Interface Version and Capability Registers Length Register
   */
  struct HCIVERSION
  : public reg< uint32_t, base_addr + 0x100, ro, 0x1000040 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0x1000040 >;

    using CAPLENGTH   = regbits< type,  0,  8 >;  /**< Capability registers length  */
    using RESERVED    = regbits< type,  8,  8 >;  /**< Reserved                     */
    // fixme: Field name equals parent register name: HCIVERSION
    using HCIVERSION_ = regbits< type, 16, 16 >;  /**< EHCI revision number         */
  };

  /**
   * Host Controller Structural Parameters Register
   */
  struct HCSPARAMS
  : public reg< uint32_t, base_addr + 0x104, ro, 0x10011 >
  {
    using type = reg< uint32_t, base_addr + 0x104, ro, 0x10011 >;

    using N_PORTS   = regbits< type,  0,  4 >;  /**< Number of Ports                     */
    using PPC       = regbits< type,  4,  1 >;  /**< Power Port Control                  */
    using RESERVED  = regbits< type,  5,  3 >;  /**< Reserved                            */
    using N_PCC     = regbits< type,  8,  4 >;  /**< Number Ports per CC                 */
    using N_CC      = regbits< type, 12,  4 >;  /**< Number of Companion Controllers     */
    using PI        = regbits< type, 16,  1 >;  /**< Port Indicators                     */
    using RESERVED  = regbits< type, 17,  3 >;  /**< Reserved                            */
    using N_PTT     = regbits< type, 20,  4 >;  /**< Ports per Transaction Translator    */
    using N_TT      = regbits< type, 24,  4 >;  /**< Number of Transaction Translators.  */
    using RESERVED  = regbits< type, 28,  4 >;  /**< Reserved                            */
  };

  /**
   * Host Controller Capability Parameters Register
   */
  struct HCCPARAMS
  : public reg< uint32_t, base_addr + 0x108, ro, 0x6 >
  {
    using type = reg< uint32_t, base_addr + 0x108, ro, 0x6 >;

    using ADC       = regbits< type,  0,  1 >;  /**< 64-bit addressing capability.          */
    using PFL       = regbits< type,  1,  1 >;  /**< Programmable Frame List flag           */
    using ASP       = regbits< type,  2,  1 >;  /**< Asynchronous Schedule Park capability  */
    using RESERVED  = regbits< type,  3,  1 >;  /**< Reserved                               */
    using IST       = regbits< type,  4,  4 >;  /**< Isochronous Scheduling Threshold       */
    using EECP      = regbits< type,  8,  8 >;  /**< EHCI Extended Capabilities Pointer     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved                               */
  };

  /**
   * Device Controller Interface Version
   */
  struct DCIVERSION
  : public reg< uint16_t, base_addr + 0x122, ro, 0x1 >
  {
    using type = reg< uint16_t, base_addr + 0x122, ro, 0x1 >;

    // fixme: Field name equals parent register name: DCIVERSION
    using DCIVERSION_ = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Device Controller Capability Parameters
   */
  struct DCCPARAMS
  : public reg< uint32_t, base_addr + 0x124, ro, 0x184 >
  {
    using type = reg< uint32_t, base_addr + 0x124, ro, 0x184 >;

    using DEN       = regbits< type,  0,  5 >;  /**< Device Endpoint Number  */
    using RESERVED  = regbits< type,  5,  2 >;  /**< Reserved                */
    using DC        = regbits< type,  7,  1 >;  /**< Device Capable          */
    using HC        = regbits< type,  8,  1 >;  /**< Host Capable            */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved                */
  };

  /**
   * USB Command Register
   */
  struct USBCMD
  : public reg< uint32_t, base_addr + 0x140, rw, 0x80000 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0x80000 >;

    using RS        = regbits< type,  0,  1 >;  /**< Run/Stop                                */
    using RST       = regbits< type,  1,  1 >;  /**< Controller Reset                        */
    using FS        = regbits< type,  2,  2 >;  /**< Frame list Size                         */
    using PSE       = regbits< type,  4,  1 >;  /**< Periodic Schedule Enable                */
    using ASE       = regbits< type,  5,  1 >;  /**< Asynchronous Schedule Enable            */
    using IAA       = regbits< type,  6,  1 >;  /**< Interrupt on Async Advance doorbell     */
    using RESERVED  = regbits< type,  7,  1 >;  /**< Reserved                                */
    using ASP       = regbits< type,  8,  2 >;  /**< Asynchronous Schedule Park mode count   */
    using RESERVED  = regbits< type, 10,  1 >;  /**< Reserved                                */
    using ASPE      = regbits< type, 11,  1 >;  /**< Asynchronous Schedule Park mode Enable  */
    using RESERVED  = regbits< type, 12,  1 >;  /**< Reserved                                */
    using SUTW      = regbits< type, 13,  1 >;  /**< Setup TripWire                          */
    using ATDTW     = regbits< type, 14,  1 >;  /**< Add dTD TripWire                        */
    using FS2       = regbits< type, 15,  1 >;  /**< Frame list Size 2                       */
    using ITC       = regbits< type, 16,  8 >;  /**< Interrupt Threshold Control             */
    using RESERVED  = regbits< type, 24,  8 >;  /**< Reserved                                */
  };

  /**
   * USB Status Register
   */
  struct USBSTS
  : public reg< uint32_t, base_addr + 0x144, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x144, rw, 0 >;

    using UI        = regbits< type,  0,  1 >;  /**< USB Interrupt (USBINT)             */
    using UEI       = regbits< type,  1,  1 >;  /**< USB Error Interrupt                */
    using PCI       = regbits< type,  2,  1 >;  /**< Port Change detect                 */
    using FRI       = regbits< type,  3,  1 >;  /**< Frame-list Rollover                */
    using SEI       = regbits< type,  4,  1 >;  /**< System Error                       */
    using AAI       = regbits< type,  5,  1 >;  /**< Interrupt on Async Advance         */
    using URI       = regbits< type,  6,  1 >;  /**< USB Reset received                 */
    using SRI       = regbits< type,  7,  1 >;  /**< SOF Received                       */
    using SLI       = regbits< type,  8,  1 >;  /**< Device-controller suspend          */
    using RESERVED  = regbits< type,  9,  1 >;  /**< Reserved                           */
    using ULPII     = regbits< type, 10,  1 >;  /**< ULPI Interrupt                     */
    using RESERVED  = regbits< type, 11,  1 >;  /**< Reserved                           */
    using HCH       = regbits< type, 12,  1 >;  /**< Host Controller Halted             */
    using RCL       = regbits< type, 13,  1 >;  /**< Reclamation                        */
    using PS        = regbits< type, 14,  1 >;  /**< Periodic schedule Status           */
    using AS        = regbits< type, 15,  1 >;  /**< Asynchronous schedule Status       */
    using NAKI      = regbits< type, 16,  1 >;  /**< NAK Interrupt                      */
    using RESERVED  = regbits< type, 17,  1 >;  /**< Reserved                           */
    using UAI       = regbits< type, 18,  1 >;  /**< USB host Asynchronous Interrupt    */
    using UPI       = regbits< type, 19,  1 >;  /**< USB host Periodic Interrupt        */
    using RESERVED  = regbits< type, 20,  4 >;  /**< Reserved                           */
    using TI0       = regbits< type, 24,  1 >;  /**< General purpose Timer 0 Interrupt  */
    using TI1       = regbits< type, 25,  1 >;  /**< General purpose Timer 1 Interrupt  */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved                           */
  };

  /**
   * USB Interrupt Enable Register
   */
  struct USBINTR
  : public reg< uint32_t, base_addr + 0x148, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x148, rw, 0 >;

    using UE        = regbits< type,  0,  1 >;  /**< USB interrupt Enable                      */
    using UEE       = regbits< type,  1,  1 >;  /**< USB Error interrupt Enable                */
    using PCE       = regbits< type,  2,  1 >;  /**< Port Change detect Enable                 */
    using FRE       = regbits< type,  3,  1 >;  /**< Frame list Rollover Enable                */
    using SEE       = regbits< type,  4,  1 >;  /**< System Error Enable                       */
    using AAE       = regbits< type,  5,  1 >;  /**< Interrupt on Async advance Enable         */
    using URE       = regbits< type,  6,  1 >;  /**< USB-Reset Enable                          */
    using SRE       = regbits< type,  7,  1 >;  /**< SOF-Received Enable                       */
    using SLE       = regbits< type,  8,  1 >;  /**< Sleep (DC suspend) Enable                 */
    using RESERVED  = regbits< type,  9,  1 >;  /**< Reserved                                  */
    using ULPIE     = regbits< type, 10,  1 >;  /**< ULPI Enable                               */
    using RESERVED  = regbits< type, 11,  5 >;  /**< Reserved                                  */
    using NAKE      = regbits< type, 16,  1 >;  /**< NAK Interrupt Enable                      */
    using RESERVED  = regbits< type, 17,  1 >;  /**< Reserved                                  */
    using UAIE      = regbits< type, 18,  1 >;  /**< USB host Asynchronous Interrupt Enable    */
    using UPIE      = regbits< type, 19,  1 >;  /**< USB host Periodic Interrupt Enable        */
    using RESERVED  = regbits< type, 20,  4 >;  /**< Reserved                                  */
    using TIE0      = regbits< type, 24,  1 >;  /**< General purpose Timer 0 Interrupt Enable  */
    using TIE1      = regbits< type, 25,  1 >;  /**< General purpose Timer 1 Interrupt Enable  */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved                                  */
  };

  /**
   * Frame Index Register
   */
  struct FRINDEX
  : public reg< uint32_t, base_addr + 0x14c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14c, rw, 0 >;

    // fixme: Field name equals parent register name: FRINDEX
    using FRINDEX_ = regbits< type,  0, 14 >;  /**< Frame Index  */
    using Reerved  = regbits< type, 14, 18 >;  /**< Reserved     */
  };

  /**
   * Periodic Frame List Base Address Register
   */
  struct PERIODICLISTBASE
  : public reg< uint32_t, base_addr + 0x154, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0 >;

    using RESERVED  = regbits< type,  0, 12 >;  /**< Reserved      */
    using PERBASE   = regbits< type, 12, 20 >;  /**< Base address  */
  };

  /**
   * Device Address Register
   */
  struct DEVICEADDR
  : public reg< uint32_t, base_addr + 0x154, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0 >;

    using RESERVED  = regbits< type,  0, 24 >;  /**< Reserved                */
    using USBADRA   = regbits< type, 24,  1 >;  /**< Device Address Advance  */
    using USBADR    = regbits< type, 25,  7 >;  /**< Device Address          */
  };

  /**
   * Current Asynchronous List Address Register
   */
  struct ASYNCLISTADDR
  : public reg< uint32_t, base_addr + 0x158, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x158, rw, 0 >;

    using RESERVED  = regbits< type,  0,  5 >;  /**< Reserved                */
    using ASYBASE   = regbits< type,  5, 27 >;  /**< Link pointer low (LPL)  */
  };

  /**
   * Endpoint List Address Register
   */
  struct EPLISTADDR
  : public reg< uint32_t, base_addr + 0x158, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x158, rw, 0 >;

    using RESERVED  = regbits< type,  0, 11 >;  /**< Reserved               */
    using EPBASE    = regbits< type, 11, 21 >;  /**< Endpoint list address  */
  };

  /**
   * Host TT Asynchronous Buffer Control
   */
  struct TTCTRL
  : public reg< uint32_t, base_addr + 0x15c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x15c, ro, 0 >;

    using RESERVED  = regbits< type,  0, 24 >;  /**< Reserved        */
    using TTHA      = regbits< type, 24,  7 >;  /**< TT Hub Address  */
    using Reerved   = regbits< type, 31,  1 >;  /**< Reserved        */
  };

  /**
   * Master Interface Data Burst Size Register
   */
  struct BURSTSIZE
  : public reg< uint32_t, base_addr + 0x160, rw, 0x8080 >
  {
    using type = reg< uint32_t, base_addr + 0x160, rw, 0x8080 >;

    using RXPBURST  = regbits< type,  0,  8 >;  /**< Programable RX Burst length  */
    using TXPBURST  = regbits< type,  8,  8 >;  /**< Programable TX Burst length  */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved                     */
  };

  /**
   * Transmit FIFO Tuning Control Register
   */
  struct TXFILLTUNING
  : public reg< uint32_t, base_addr + 0x164, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x164, rw, 0 >;

    using TXSCHOH      = regbits< type,  0,  7 >;  /**< Scheduler Overhead        */
    using RESERVED     = regbits< type,  7,  1 >;  /**< Reserved                  */
    using TXSCHHEALTH  = regbits< type,  8,  5 >;  /**< Scheduler Health counter  */
    using RESERVED     = regbits< type, 13,  3 >;  /**< Reserved                  */
    using TXFIFOTHRES  = regbits< type, 16,  6 >;  /**< FIFO burst Threshold      */
    using RESERVED     = regbits< type, 22, 10 >;  /**< Reserved                  */
  };

  /**
   * ULPI Register Access
   */
  struct ULPI_VIEWPORT
  : public reg< uint32_t, base_addr + 0x170, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x170, rw, 0 >;

    using ULPI_DATWR  = regbits< type,  0,  8 >;  /**< ULPI Data Write    */
    using ULPI_DATRD  = regbits< type,  8,  8 >;  /**< ULPI Data Read     */
    using ULPI_ADDR   = regbits< type, 16,  8 >;  /**< ULPI data Address  */
    using ULPI_PORT   = regbits< type, 24,  3 >;  /**< ULPI Port number   */
    using ULPI_SS     = regbits< type, 27,  1 >;  /**< ULPI Sync State    */
    using RESERVED    = regbits< type, 28,  1 >;  /**< Reserved           */
    using ULPI_RW     = regbits< type, 29,  1 >;  /**< ULPI Read/Write    */
    using ULPI_RUN    = regbits< type, 30,  1 >;  /**< ULPI Run           */
    using ULPI_WU     = regbits< type, 31,  1 >;  /**< ULPI Wake-Up       */
  };

  /**
   * Endpoint NAK Register
   */
  struct ENDPTNAK
  : public reg< uint32_t, base_addr + 0x178, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x178, rw, 0 >;

    using EPRN      = regbits< type,  0,  4 >;  /**< RX Endpoint NAK  */
    using RESERVED  = regbits< type,  4, 12 >;  /**< Reserved         */
    using EPTN      = regbits< type, 16,  4 >;  /**< TX Endpoint NAK  */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved         */
  };

  /**
   * Endpoint NAK Enable Register
   */
  struct ENDPTNAKEN
  : public reg< uint32_t, base_addr + 0x17c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x17c, rw, 0 >;

    using EPRNE     = regbits< type,  0,  4 >;  /**< RX Endpoint NAK  */
    using RESERVED  = regbits< type,  4, 12 >;  /**< Reserved         */
    using EPTNE     = regbits< type, 16,  4 >;  /**< TX Endpoint NAK  */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved         */
  };

  /**
   * Configure Flag Register
   */
  struct CONFIGFLAG
  : public reg< uint32_t, base_addr + 0x180, ro, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x180, ro, 0x1 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< Reserved  */
    using RESERVED  = regbits< type,  1, 31 >;  /**< Reserved  */
  };

  /**
   * Port Status and Control Registers
   */
  struct PORTSC1
  : public reg< uint32_t, base_addr + 0x184, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0x80000000 >;

    using CCS       = regbits< type,  0,  1 >;  /**< Current Connect Status         */
    using CSC       = regbits< type,  1,  1 >;  /**< Connect Change Status          */
    using PE        = regbits< type,  2,  1 >;  /**< Port Enabled/disabled          */
    using PEC       = regbits< type,  3,  1 >;  /**< Port Enable/disable Change     */
    using OCA       = regbits< type,  4,  1 >;  /**< Over-current active            */
    using OCC       = regbits< type,  5,  1 >;  /**< Over-Current Change            */
    using FPR       = regbits< type,  6,  1 >;  /**< Force Port Resume              */
    using SUSP      = regbits< type,  7,  1 >;  /**< Suspend                        */
    using PR        = regbits< type,  8,  1 >;  /**< Port Reset                     */
    using HSP       = regbits< type,  9,  1 >;  /**< High Speed Port.               */
    using LS        = regbits< type, 10,  2 >;  /**< Line Status                    */
    using PP        = regbits< type, 12,  1 >;  /**< Port Power                     */
    using PO        = regbits< type, 13,  1 >;  /**< Port Owner                     */
    using PIC       = regbits< type, 14,  2 >;  /**< Port Indicator Control         */
    using PTC       = regbits< type, 16,  4 >;  /**< Port Test Control              */
    using WKCN      = regbits< type, 20,  1 >;  /**< Wake on Connect enable         */
    using WKDS      = regbits< type, 21,  1 >;  /**< Wake on Disconnect enable      */
    using WKOC      = regbits< type, 22,  1 >;  /**< Wake on Over-Current enable    */
    using PHCD      = regbits< type, 23,  1 >;  /**< PHY low power suspend          */
    using PFSC      = regbits< type, 24,  1 >;  /**< Port force Full-Speed Connect  */
    using RESERVED  = regbits< type, 25,  1 >;  /**< Reserved                       */
    using PSPD      = regbits< type, 26,  2 >;  /**< Port Speed                     */
    using RESERVED  = regbits< type, 28,  1 >;  /**< Reserved                       */
    using RESERVED  = regbits< type, 29,  1 >;  /**< Reserved                       */
    using PTS       = regbits< type, 30,  2 >;  /**< Port Transceiver Select        */
  };

  /**
   * On-the-Go Status and Control Register
   */
  struct OTGSC
  : public reg< uint32_t, base_addr + 0x1a4, rw, 0x1020 >
  {
    using type = reg< uint32_t, base_addr + 0x1a4, rw, 0x1020 >;

    using VD        = regbits< type,  0,  1 >;  /**< VBUS Discharge                             */
    using VC        = regbits< type,  1,  1 >;  /**< VBUS Charge                                */
    using HAAR      = regbits< type,  2,  1 >;  /**< Hardware Assist Auto-Reset                 */
    using OT        = regbits< type,  3,  1 >;  /**< OTG Termination                            */
    using DP        = regbits< type,  4,  1 >;  /**< Data Pulsing                               */
    using IDPU      = regbits< type,  5,  1 >;  /**< ID Pull-Up                                 */
    using RESERVED  = regbits< type,  6,  1 >;  /**< Reserved                                   */
    using HABA      = regbits< type,  7,  1 >;  /**< Hardware Assist B-Disconnect to A-connect  */
    using ID        = regbits< type,  8,  1 >;  /**< USB ID                                     */
    using AVV       = regbits< type,  9,  1 >;  /**< A VBus Valid                               */
    using ASV       = regbits< type, 10,  1 >;  /**< A Session Valid                            */
    using BSV       = regbits< type, 11,  1 >;  /**< B Session Valid                            */
    using BSE       = regbits< type, 12,  1 >;  /**< B Session End                              */
    using MST       = regbits< type, 13,  1 >;  /**< 1 Milli-Second timer Toggle                */
    using DPS       = regbits< type, 14,  1 >;  /**< Data bus Pulsing Status                    */
    using RESERVED  = regbits< type, 15,  1 >;  /**< Reserved                                   */
    using IDIS      = regbits< type, 16,  1 >;  /**< USB ID Interrupt Status                    */
    using AVVIS     = regbits< type, 17,  1 >;  /**< A VBUS Valid Interrupt Status              */
    using ASVIS     = regbits< type, 18,  1 >;  /**< A Session Valid Interrupt Status           */
    using BSVIS     = regbits< type, 19,  1 >;  /**< B Session Valid Interrupt Status           */
    using BSEIS     = regbits< type, 20,  1 >;  /**< B Session End Interrupt Status             */
    using MSS       = regbits< type, 21,  1 >;  /**< 1 Milli-Second timer interrupt Status      */
    using DPIS      = regbits< type, 22,  1 >;  /**< Data Pulse interrupt Status                */
    using RESERVED  = regbits< type, 23,  1 >;  /**< Reserved                                   */
    using IDIE      = regbits< type, 24,  1 >;  /**< USB ID Interrupt Enable                    */
    using AVVIE     = regbits< type, 25,  1 >;  /**< A VBUS Valid Interrupt Enable              */
    using ASVIE     = regbits< type, 26,  1 >;  /**< A Session Valid Interrupt Enable           */
    using BSVIE     = regbits< type, 27,  1 >;  /**< B Session Valid Interrupt Enable           */
    using BSEIE     = regbits< type, 28,  1 >;  /**< B Session End Interrupt Enable             */
    using MSE       = regbits< type, 29,  1 >;  /**< 1 Milli-Second timer interrupt Enable      */
    using DPIE      = regbits< type, 30,  1 >;  /**< Data Pulse Interrupt Enable                */
    using RESERVED  = regbits< type, 31,  1 >;  /**< Reserved                                   */
  };

  /**
   * USB Mode Register
   */
  struct USBMODE
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0x5000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0x5000 >;

    using CM        = regbits< type,  0,  2 >;  /**< Controller Mode      */
    using ES        = regbits< type,  2,  1 >;  /**< Endian Select        */
    using SLOM      = regbits< type,  3,  1 >;  /**< Setup Lock-Out Mode  */
    using SDIS      = regbits< type,  4,  1 >;  /**< Stream DISable       */
    using RESERVED  = regbits< type,  5,  7 >;  /**< Reserved             */
    using TXHSD     = regbits< type, 12,  3 >;  /**< Tx to Tx HS Delay    */
    using RESERVED  = regbits< type, 15, 17 >;  /**< Reserved             */
  };

  /**
   * Endpoint Setup Status Register
   */
  struct EPSETUPSR
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0 >;

    using EPSETUPSTAT  = regbits< type,  0,  4 >;  /**< Setup Endpoint Status  */
    using RESERVED     = regbits< type,  4, 28 >;  /**< Reserved               */
  };

  /**
   * Endpoint Initialization Register
   */
  struct EPPRIME
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0 >;

    using PERB      = regbits< type,  0,  4 >;  /**< Prime Endpoint Receive Buffer   */
    using RESERVED  = regbits< type,  4, 12 >;  /**< Reserved                        */
    using PETB      = regbits< type, 16,  4 >;  /**< Prime Endpoint tTansmit Buffer  */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved                        */
  };

  /**
   * Endpoint Flush Register
   */
  struct EPFLUSH
  : public reg< uint32_t, base_addr + 0x1b4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b4, rw, 0 >;

    using FERB      = regbits< type,  0,  4 >;  /**< Flush Endpoint Receive Buffer   */
    using RESERVED  = regbits< type,  4, 12 >;  /**< Reserved                        */
    using FETB      = regbits< type, 16,  4 >;  /**< Flush Endpoint Transmit Buffer  */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved                        */
  };

  /**
   * Endpoint Status Register
   */
  struct EPSR
  : public reg< uint32_t, base_addr + 0x1b8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b8, ro, 0 >;

    using ERBR      = regbits< type,  0,  4 >;  /**< Endpoint Receive Buffer Ready   */
    using RESERVED  = regbits< type,  4, 12 >;  /**< Reserved                        */
    using ETBR      = regbits< type, 16,  4 >;  /**< Endpoint Transmit Buffer Ready  */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved                        */
  };

  /**
   * Endpoint Complete Register
   */
  struct EPCOMPLETE
  : public reg< uint32_t, base_addr + 0x1bc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1bc, rw, 0 >;

    using ERCE      = regbits< type,  0,  4 >;  /**< Endpoint Receive Complete Event   */
    using RESERVED  = regbits< type,  4, 12 >;  /**< Reserved                          */
    using ETCE      = regbits< type, 16,  4 >;  /**< Endpoint Transmit Complete Event  */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved                          */
  };

  /**
   * Endpoint Control Register 0
   */
  struct EPCR0
  : public reg< uint32_t, base_addr + 0x1c0, rw, 0x800080 >
  {
    using type = reg< uint32_t, base_addr + 0x1c0, rw, 0x800080 >;

    using RXS       = regbits< type,  0,  1 >;  /**< RX endpoint Stall                                                                                                  */
    using RESERVED  = regbits< type,  1,  1 >;  /**< Reserved                                                                                                           */
    using RXT       = regbits< type,  2,  2 >;  /**< RX endpoint Type                                                                                                   */
    using RESERVED  = regbits< type,  4,  3 >;  /**< Reserved                                                                                                           */
    using RXE       = regbits< type,  7,  1 >;  /**< RX endpoint Enable                                                                                                 */
    using RESERVED  = regbits< type,  8,  8 >;  /**< Reserved                                                                                                           */
    using TXS       = regbits< type, 16,  1 >;  /**< TX Endpoint Stall                                                                                                  */
    using RESERVED  = regbits< type, 17,  1 >;  /**< Reserved                                                                                                           */
    using TXT       = regbits< type, 18,  2 >;  /**< TX Endpoint Type                                                                                                   */
    using RESERVED  = regbits< type, 20,  3 >;  /**< Reserved                                                                                                           */
    using TXE       = regbits< type, 23,  1 >;  /**< TX Endpoint Enable                                                                                                 */
    using RESERVED  = regbits< type, 24,  8 >;  /**< This register is not defined in the EHCI specification. Every device implements endpoint 0 as a control endpoint.  */
  };

  /**
   * Endpoint Control Register n
   */
  struct EPCR%s
  : public reg< uint32_t, base_addr + 0x1c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c4, rw, 0 >;

    using RXS       = regbits< type,  0,  1 >;  /**< RX endpoint Stall        */
    using RXD       = regbits< type,  1,  1 >;  /**< RX endpoint Data sink    */
    using RXT       = regbits< type,  2,  2 >;  /**< RX endpoint Type         */
    using RESERVED  = regbits< type,  4,  1 >;  /**< Reserved                 */
    using RXI       = regbits< type,  5,  1 >;  /**< RX data toggle Inhibit   */
    using RXR       = regbits< type,  6,  1 >;  /**< RX data toggle Reset     */
    using RXE       = regbits< type,  7,  1 >;  /**< RX endpoint Enable       */
    using RESERVED  = regbits< type,  8,  8 >;  /**< Reserved                 */
    using TXS       = regbits< type, 16,  1 >;  /**< TX endpoint Stall        */
    using TXD       = regbits< type, 17,  1 >;  /**< TX endpoint Data source  */
    using TXT       = regbits< type, 18,  2 >;  /**< TX endpoint Type         */
    using RESERVED  = regbits< type, 20,  1 >;  /**< Reserved                 */
    using TXI       = regbits< type, 21,  1 >;  /**< TX data toggle Inhibit   */
    using TXR       = regbits< type, 22,  1 >;  /**< TX data toggle Reset     */
    using TXE       = regbits< type, 23,  1 >;  /**< TX endpoint Enable       */
    using RESERVED  = regbits< type, 24,  8 >;  /**< Reserved                 */
  };

  /**
   * USB General Control Register
   */
  struct USBGENCTRL
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using WU_IE       = regbits< type,  0,  1 >;  /**< Wakeup Interrupt Enable         */
    using WU_ULPI_EN  = regbits< type,  1,  1 >;  /**< Wakeup on ULPI Interrupt Event  */
    using RESERVED    = regbits< type,  2,  3 >;  /**< Reserved                        */
    using WU_INT_CLR  = regbits< type,  5,  1 >;  /**< Wakeup Interrupt Clear          */
    using RESERVED    = regbits< type,  6, 26 >;  /**< Reserved                        */
  };
};
} // namespace mptl

#endif // ARCH_REG_USBHS_HPP_INCLUDED
