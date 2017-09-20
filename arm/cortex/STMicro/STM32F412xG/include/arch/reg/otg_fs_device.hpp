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
//  Import from CMSIS-SVD: "STMicro/STM32F412xG.svd"
//
//  name: STM32F412xG
//  version: 1.0
//  description: STM32F412xG
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OTG_FS_DEVICE_HPP_INCLUDED
#define ARCH_REG_OTG_FS_DEVICE_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB on the go full speed
 */
struct OTG_FS_DEVICE
{
  static constexpr reg_addr_t base_addr = 0x50000800;

  /**
   * OTG_FS device configuration register (OTG_FS_DCFG)
   */
  struct FS_DCFG
  : public reg< uint32_t, base_addr + 0x0, rw, 0x02200000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x02200000 >;

    using DSPD      = regbits< type,  0,  2 >;  /**< Device speed                          */
    using NZLSOHSK  = regbits< type,  2,  1 >;  /**< Non-zero-length status OUT handshake  */
    using DAD       = regbits< type,  4,  7 >;  /**< Device address                        */
    using PFIVL     = regbits< type, 11,  2 >;  /**< Periodic frame interval               */
  };

  /**
   * OTG_FS device control register (OTG_FS_DCTL)
   */
  struct FS_DCTL
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using RWUSIG    = regbits< type,  0,  1 >;  /**< Remote wakeup signaling    */
    using SDIS      = regbits< type,  1,  1 >;  /**< Soft disconnect            */
    using GINSTS    = regbits< type,  2,  1 >;  /**< Global IN NAK status       */
    using GONSTS    = regbits< type,  3,  1 >;  /**< Global OUT NAK status      */
    using TCTL      = regbits< type,  4,  3 >;  /**< Test control               */
    using SGINAK    = regbits< type,  7,  1 >;  /**< Set global IN NAK          */
    using CGINAK    = regbits< type,  8,  1 >;  /**< Clear global IN NAK        */
    using SGONAK    = regbits< type,  9,  1 >;  /**< Set global OUT NAK         */
    using CGONAK    = regbits< type, 10,  1 >;  /**< Clear global OUT NAK       */
    using POPRGDNE  = regbits< type, 11,  1 >;  /**< Power-on programming done  */
  };

  /**
   * OTG_FS device status register (OTG_FS_DSTS)
   */
  struct FS_DSTS
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000010 >;

    using SUSPSTS  = regbits< type,  0,  1 >;  /**< Suspend status                    */
    using ENUMSPD  = regbits< type,  1,  2 >;  /**< Enumerated speed                  */
    using EERR     = regbits< type,  3,  1 >;  /**< Erratic error                     */
    using FNSOF    = regbits< type,  8, 14 >;  /**< Frame number of the received SOF  */
  };

  /**
   * OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
   */
  struct FS_DIEPMSK
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using XFRCM      = regbits< type,  0,  1 >;  /**< Transfer completed interrupt mask                   */
    using EPDM       = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt mask                    */
    using TOM        = regbits< type,  3,  1 >;  /**< Timeout condition mask (Non-isochronous endpoints)  */
    using ITTXFEMSK  = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO empty mask            */
    using INEPNMM    = regbits< type,  5,  1 >;  /**< IN token received with EP mismatch mask             */
    using INEPNEM    = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective mask                      */
  };

  /**
   * OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
   */
  struct FS_DOEPMSK
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed interrupt mask               */
    using EPDM    = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt mask                */
    using STUPM   = regbits< type,  3,  1 >;  /**< SETUP phase done mask                           */
    using OTEPDM  = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled mask  */
  };

  /**
   * OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
   */
  struct FS_DAINT
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >;

    using IEPINT  = regbits< type,  0, 16 >;  /**< IN endpoint interrupt bits   */
    using OEPINT  = regbits< type, 16, 16 >;  /**< OUT endpoint interrupt bits  */
  };

  /**
   * OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
   */
  struct FS_DAINTMSK
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using IEPM    = regbits< type,  0, 16 >;  /**< IN EP interrupt mask bits    */
    using OEPINT  = regbits< type, 16, 16 >;  /**< OUT endpoint interrupt bits  */
  };

  /**
   * OTG_FS device VBUS discharge time register
   */
  struct DVBUSDIS
  : public reg< uint32_t, base_addr + 0x28, rw, 0x000017D7 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x000017D7 >;

    using VBUSDT  = regbits< type,  0, 16 >;  /**< Device VBUS discharge time  */
  };

  /**
   * OTG_FS device VBUS pulsing time register
   */
  struct DVBUSPULSE
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x000005B8 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x000005B8 >;

    using DVBUSP  = regbits< type,  0, 12 >;  /**< Device VBUS pulsing time  */
  };

  /**
   * OTG_FS device IN endpoint FIFO empty interrupt mask register
   */
  struct DIEPEMPMSK
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using INEPTXFEM  = regbits< type,  0, 16 >;  /**< IN EP Tx FIFO empty interrupt mask bits  */
  };

  /**
   * OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
   */
  struct FS_DIEPCTL0
  : public reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >;

    using MPSIZ   = regbits< type,  0,  2 >;  /**< Maximum packet size  */
    using USBAEP  = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using NAKSTS  = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using STALL   = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using TXFNUM  = regbits< type, 22,  4 >;  /**< TxFIFO number        */
    using CNAK    = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK    = regbits< type, 27,  1 >;  /**< Set NAK              */
    using EPDIS   = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA   = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-1 control register
   */
  struct DIEPCTL1
  : public reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >;

    using EPENA           = regbits< type, 31,  1 >;  /**< EPENA           */
    using EPDIS           = regbits< type, 30,  1 >;  /**< EPDIS           */
    using SODDFRM_SD1PID  = regbits< type, 29,  1 >;  /**< SODDFRM/SD1PID  */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< SD0PID/SEVNFRM  */
    using SNAK            = regbits< type, 27,  1 >;  /**< SNAK            */
    using CNAK            = regbits< type, 26,  1 >;  /**< CNAK            */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TXFNUM          */
    using Stall           = regbits< type, 21,  1 >;  /**< Stall           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< EPTYP           */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAKSTS          */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< EONUM/DPID      */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USBAEP          */
    using MPSIZ           = regbits< type,  0, 11 >;  /**< MPSIZ           */
  };

  /**
   * OTG device endpoint-2 control register
   */
  struct DIEPCTL2
  : public reg< uint32_t, base_addr + 0x140, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0x00000000 >;

    using EPENA           = regbits< type, 31,  1 >;  /**< EPENA           */
    using EPDIS           = regbits< type, 30,  1 >;  /**< EPDIS           */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< SODDFRM         */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< SD0PID/SEVNFRM  */
    using SNAK            = regbits< type, 27,  1 >;  /**< SNAK            */
    using CNAK            = regbits< type, 26,  1 >;  /**< CNAK            */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TXFNUM          */
    using Stall           = regbits< type, 21,  1 >;  /**< Stall           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< EPTYP           */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAKSTS          */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< EONUM/DPID      */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USBAEP          */
    using MPSIZ           = regbits< type,  0, 11 >;  /**< MPSIZ           */
  };

  /**
   * OTG device endpoint-3 control register
   */
  struct DIEPCTL3
  : public reg< uint32_t, base_addr + 0x160, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x160, rw, 0x00000000 >;

    using EPENA           = regbits< type, 31,  1 >;  /**< EPENA           */
    using EPDIS           = regbits< type, 30,  1 >;  /**< EPDIS           */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< SODDFRM         */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< SD0PID/SEVNFRM  */
    using SNAK            = regbits< type, 27,  1 >;  /**< SNAK            */
    using CNAK            = regbits< type, 26,  1 >;  /**< CNAK            */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TXFNUM          */
    using Stall           = regbits< type, 21,  1 >;  /**< Stall           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< EPTYP           */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAKSTS          */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< EONUM/DPID      */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USBAEP          */
    using MPSIZ           = regbits< type,  0, 11 >;  /**< MPSIZ           */
  };

  /**
   * device endpoint-0 control register
   */
  struct DOEPCTL0
  : public reg< uint32_t, base_addr + 0x300, rw, 0x00008000 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x00008000 >;

    using EPENA   = regbits< type, 31,  1 >;  /**< EPENA   */
    using EPDIS   = regbits< type, 30,  1 >;  /**< EPDIS   */
    using SNAK    = regbits< type, 27,  1 >;  /**< SNAK    */
    using CNAK    = regbits< type, 26,  1 >;  /**< CNAK    */
    using Stall   = regbits< type, 21,  1 >;  /**< Stall   */
    using SNPM    = regbits< type, 20,  1 >;  /**< SNPM    */
    using EPTYP   = regbits< type, 18,  2 >;  /**< EPTYP   */
    using NAKSTS  = regbits< type, 17,  1 >;  /**< NAKSTS  */
    using USBAEP  = regbits< type, 15,  1 >;  /**< USBAEP  */
    using MPSIZ   = regbits< type,  0,  2 >;  /**< MPSIZ   */
  };

  /**
   * device endpoint-1 control register
   */
  struct DOEPCTL1
  : public reg< uint32_t, base_addr + 0x320, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x320, rw, 0x00000000 >;

    using EPENA           = regbits< type, 31,  1 >;  /**< EPENA           */
    using EPDIS           = regbits< type, 30,  1 >;  /**< EPDIS           */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< SODDFRM         */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< SD0PID/SEVNFRM  */
    using SNAK            = regbits< type, 27,  1 >;  /**< SNAK            */
    using CNAK            = regbits< type, 26,  1 >;  /**< CNAK            */
    using Stall           = regbits< type, 21,  1 >;  /**< Stall           */
    using SNPM            = regbits< type, 20,  1 >;  /**< SNPM            */
    using EPTYP           = regbits< type, 18,  2 >;  /**< EPTYP           */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAKSTS          */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< EONUM/DPID      */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USBAEP          */
    using MPSIZ           = regbits< type,  0, 11 >;  /**< MPSIZ           */
  };

  /**
   * device endpoint-2 control register
   */
  struct DOEPCTL2
  : public reg< uint32_t, base_addr + 0x340, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x340, rw, 0x00000000 >;

    using EPENA           = regbits< type, 31,  1 >;  /**< EPENA           */
    using EPDIS           = regbits< type, 30,  1 >;  /**< EPDIS           */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< SODDFRM         */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< SD0PID/SEVNFRM  */
    using SNAK            = regbits< type, 27,  1 >;  /**< SNAK            */
    using CNAK            = regbits< type, 26,  1 >;  /**< CNAK            */
    using Stall           = regbits< type, 21,  1 >;  /**< Stall           */
    using SNPM            = regbits< type, 20,  1 >;  /**< SNPM            */
    using EPTYP           = regbits< type, 18,  2 >;  /**< EPTYP           */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAKSTS          */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< EONUM/DPID      */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USBAEP          */
    using MPSIZ           = regbits< type,  0, 11 >;  /**< MPSIZ           */
  };

  /**
   * device endpoint-3 control register
   */
  struct DOEPCTL3
  : public reg< uint32_t, base_addr + 0x360, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x360, rw, 0x00000000 >;

    using EPENA           = regbits< type, 31,  1 >;  /**< EPENA           */
    using EPDIS           = regbits< type, 30,  1 >;  /**< EPDIS           */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< SODDFRM         */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< SD0PID/SEVNFRM  */
    using SNAK            = regbits< type, 27,  1 >;  /**< SNAK            */
    using CNAK            = regbits< type, 26,  1 >;  /**< CNAK            */
    using Stall           = regbits< type, 21,  1 >;  /**< Stall           */
    using SNPM            = regbits< type, 20,  1 >;  /**< SNPM            */
    using EPTYP           = regbits< type, 18,  2 >;  /**< EPTYP           */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAKSTS          */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< EONUM/DPID      */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USBAEP          */
    using MPSIZ           = regbits< type,  0, 11 >;  /**< MPSIZ           */
  };

  /**
   * device endpoint-x interrupt register
   */
  struct DIEPINT0
  : public reg< uint32_t, base_addr + 0x108, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x00000080 >;

    using TXFE    = regbits< type,  7,  1 >;  /**< TXFE    */
    using INEPNE  = regbits< type,  6,  1 >;  /**< INEPNE  */
    using ITTXFE  = regbits< type,  4,  1 >;  /**< ITTXFE  */
    using TOC     = regbits< type,  3,  1 >;  /**< TOC     */
    using EPDISD  = regbits< type,  1,  1 >;  /**< EPDISD  */
    using XFRC    = regbits< type,  0,  1 >;  /**< XFRC    */
  };

  /**
   * device endpoint-1 interrupt register
   */
  struct DIEPINT1
  : public reg< uint32_t, base_addr + 0x128, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x00000080 >;

    using TXFE    = regbits< type,  7,  1 >;  /**< TXFE    */
    using INEPNE  = regbits< type,  6,  1 >;  /**< INEPNE  */
    using ITTXFE  = regbits< type,  4,  1 >;  /**< ITTXFE  */
    using TOC     = regbits< type,  3,  1 >;  /**< TOC     */
    using EPDISD  = regbits< type,  1,  1 >;  /**< EPDISD  */
    using XFRC    = regbits< type,  0,  1 >;  /**< XFRC    */
  };

  /**
   * device endpoint-2 interrupt register
   */
  struct DIEPINT2
  : public reg< uint32_t, base_addr + 0x148, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x148, rw, 0x00000080 >;

    using TXFE    = regbits< type,  7,  1 >;  /**< TXFE    */
    using INEPNE  = regbits< type,  6,  1 >;  /**< INEPNE  */
    using ITTXFE  = regbits< type,  4,  1 >;  /**< ITTXFE  */
    using TOC     = regbits< type,  3,  1 >;  /**< TOC     */
    using EPDISD  = regbits< type,  1,  1 >;  /**< EPDISD  */
    using XFRC    = regbits< type,  0,  1 >;  /**< XFRC    */
  };

  /**
   * device endpoint-3 interrupt register
   */
  struct DIEPINT3
  : public reg< uint32_t, base_addr + 0x168, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x168, rw, 0x00000080 >;

    using TXFE    = regbits< type,  7,  1 >;  /**< TXFE    */
    using INEPNE  = regbits< type,  6,  1 >;  /**< INEPNE  */
    using ITTXFE  = regbits< type,  4,  1 >;  /**< ITTXFE  */
    using TOC     = regbits< type,  3,  1 >;  /**< TOC     */
    using EPDISD  = regbits< type,  1,  1 >;  /**< EPDISD  */
    using XFRC    = regbits< type,  0,  1 >;  /**< XFRC    */
  };

  /**
   * device endpoint-0 interrupt register
   */
  struct DOEPINT0
  : public reg< uint32_t, base_addr + 0x308, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0x00000080 >;

    using B2BSTUP  = regbits< type,  6,  1 >;  /**< B2BSTUP  */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OTEPDIS  */
    using STUP     = regbits< type,  3,  1 >;  /**< STUP     */
    using EPDISD   = regbits< type,  1,  1 >;  /**< EPDISD   */
    using XFRC     = regbits< type,  0,  1 >;  /**< XFRC     */
  };

  /**
   * device endpoint-1 interrupt register
   */
  struct DOEPINT1
  : public reg< uint32_t, base_addr + 0x328, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x328, rw, 0x00000080 >;

    using B2BSTUP  = regbits< type,  6,  1 >;  /**< B2BSTUP  */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OTEPDIS  */
    using STUP     = regbits< type,  3,  1 >;  /**< STUP     */
    using EPDISD   = regbits< type,  1,  1 >;  /**< EPDISD   */
    using XFRC     = regbits< type,  0,  1 >;  /**< XFRC     */
  };

  /**
   * device endpoint-2 interrupt register
   */
  struct DOEPINT2
  : public reg< uint32_t, base_addr + 0x348, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x348, rw, 0x00000080 >;

    using B2BSTUP  = regbits< type,  6,  1 >;  /**< B2BSTUP  */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OTEPDIS  */
    using STUP     = regbits< type,  3,  1 >;  /**< STUP     */
    using EPDISD   = regbits< type,  1,  1 >;  /**< EPDISD   */
    using XFRC     = regbits< type,  0,  1 >;  /**< XFRC     */
  };

  /**
   * device endpoint-3 interrupt register
   */
  struct DOEPINT3
  : public reg< uint32_t, base_addr + 0x368, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x368, rw, 0x00000080 >;

    using B2BSTUP  = regbits< type,  6,  1 >;  /**< B2BSTUP  */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OTEPDIS  */
    using STUP     = regbits< type,  3,  1 >;  /**< STUP     */
    using EPDISD   = regbits< type,  1,  1 >;  /**< EPDISD   */
    using XFRC     = regbits< type,  0,  1 >;  /**< XFRC     */
  };

  /**
   * device endpoint-0 transfer size register
   */
  struct DIEPTSIZ0
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >;

    using PKTCNT  = regbits< type, 19,  2 >;  /**< Packet count   */
    using XFRSIZ  = regbits< type,  0,  7 >;  /**< Transfer size  */
  };

  /**
   * device OUT endpoint-0 transfer size register
   */
  struct DOEPTSIZ0
  : public reg< uint32_t, base_addr + 0x310, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0x00000000 >;

    using STUPCNT  = regbits< type, 29,  2 >;  /**< SETUP packet count  */
    using PKTCNT   = regbits< type, 19,  1 >;  /**< Packet count        */
    using XFRSIZ   = regbits< type,  0,  7 >;  /**< Transfer size       */
  };

  /**
   * device endpoint-1 transfer size register
   */
  struct DIEPTSIZ1
  : public reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >;

    using MCNT    = regbits< type, 29,  2 >;  /**< Multi count    */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
  };

  /**
   * device endpoint-2 transfer size register
   */
  struct DIEPTSIZ2
  : public reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >;

    using MCNT    = regbits< type, 29,  2 >;  /**< Multi count    */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
  };

  /**
   * device endpoint-3 transfer size register
   */
  struct DIEPTSIZ3
  : public reg< uint32_t, base_addr + 0x170, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x170, rw, 0x00000000 >;

    using MCNT    = regbits< type, 29,  2 >;  /**< Multi count    */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
  };

  /**
   * OTG_FS device IN endpoint transmit FIFO status register
   */
  struct DTXFSTS0
  : public reg< uint32_t, base_addr + 0x118, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x118, ro, 0x00000000 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space available  */
  };

  /**
   * OTG_FS device IN endpoint transmit FIFO status register
   */
  struct DTXFSTS1
  : public reg< uint32_t, base_addr + 0x138, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x138, ro, 0x00000000 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space available  */
  };

  /**
   * OTG_FS device IN endpoint transmit FIFO status register
   */
  struct DTXFSTS2
  : public reg< uint32_t, base_addr + 0x158, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x158, ro, 0x00000000 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space available  */
  };

  /**
   * OTG_FS device IN endpoint transmit FIFO status register
   */
  struct DTXFSTS3
  : public reg< uint32_t, base_addr + 0x178, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x178, ro, 0x00000000 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space available  */
  };

  /**
   * device OUT endpoint-1 transfer size register
   */
  struct DOEPTSIZ1
  : public reg< uint32_t, base_addr + 0x330, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x330, rw, 0x00000000 >;

    using RXDPID_STUPCNT  = regbits< type, 29,  2 >;  /**< Received data PID/SETUP packet count  */
    using PKTCNT          = regbits< type, 19, 10 >;  /**< Packet count                          */
    using XFRSIZ          = regbits< type,  0, 19 >;  /**< Transfer size                         */
  };

  /**
   * device OUT endpoint-2 transfer size register
   */
  struct DOEPTSIZ2
  : public reg< uint32_t, base_addr + 0x350, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x350, rw, 0x00000000 >;

    using RXDPID_STUPCNT  = regbits< type, 29,  2 >;  /**< Received data PID/SETUP packet count  */
    using PKTCNT          = regbits< type, 19, 10 >;  /**< Packet count                          */
    using XFRSIZ          = regbits< type,  0, 19 >;  /**< Transfer size                         */
  };

  /**
   * device OUT endpoint-3 transfer size register
   */
  struct DOEPTSIZ3
  : public reg< uint32_t, base_addr + 0x370, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x370, rw, 0x00000000 >;

    using RXDPID_STUPCNT  = regbits< type, 29,  2 >;  /**< Received data PID/SETUP packet count  */
    using PKTCNT          = regbits< type, 19, 10 >;  /**< Packet count                          */
    using XFRSIZ          = regbits< type,  0, 19 >;  /**< Transfer size                         */
  };
};
} // namespace mptl

#endif // ARCH_REG_OTG_FS_DEVICE_HPP_INCLUDED
