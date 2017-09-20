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

#ifndef ARCH_REG_OTG_FS_HOST_HPP_INCLUDED
#define ARCH_REG_OTG_FS_HOST_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB on the go full speed
 */
struct OTG_FS_HOST
{
  static constexpr reg_addr_t base_addr = 0x50000400;

  /**
   * OTG_FS host configuration register (OTG_FS_HCFG)
   */
  struct FS_HCFG
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using FSLSPCS  = regbits< type,  0,  2 >;  /**< FS/LS PHY clock select   */
    using FSLSS    = regbits< type,  2,  1 >;  /**< FS- and LS-only support  */
  };

  /**
   * OTG_FS Host frame interval register
   */
  struct HFIR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000EA60 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000EA60 >;

    using FRIVL  = regbits< type,  0, 16 >;  /**< Frame interval  */
  };

  /**
   * OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
   */
  struct FS_HFNUM
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00003FFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00003FFF >;

    using FRNUM  = regbits< type,  0, 16 >;  /**< Frame number          */
    using FTREM  = regbits< type, 16, 16 >;  /**< Frame time remaining  */
  };

  /**
   * OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
   */
  struct FS_HPTXSTS
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00080100 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00080100 >;

    using PTXFSAVL  = regbits< type,  0, 16 >;  /**< Periodic transmit data FIFO space available      */
    using PTXQSAV   = regbits< type, 16,  8 >;  /**< Periodic transmit request queue space available  */
    using PTXQTOP   = regbits< type, 24,  8 >;  /**< Top of the periodic transmit request queue       */
  };

  /**
   * OTG_FS Host all channels interrupt register
   */
  struct HAINT
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: HAINT
    using HAINT_ = regbits< type,  0, 16 >;  /**< Channel interrupts  */
  };

  /**
   * OTG_FS host all channels interrupt mask register
   */
  struct HAINTMSK
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using HAINTM  = regbits< type,  0, 16 >;  /**< Channel interrupt mask  */
  };

  /**
   * OTG_FS host port control and status register (OTG_FS_HPRT)
   */
  struct FS_HPRT
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using PCSTS    = regbits< type,  0,  1 >;  /**< Port connect status         */
    using PCDET    = regbits< type,  1,  1 >;  /**< Port connect detected       */
    using PENA     = regbits< type,  2,  1 >;  /**< Port enable                 */
    using PENCHNG  = regbits< type,  3,  1 >;  /**< Port enable/disable change  */
    using POCA     = regbits< type,  4,  1 >;  /**< Port overcurrent active     */
    using POCCHNG  = regbits< type,  5,  1 >;  /**< Port overcurrent change     */
    using PRES     = regbits< type,  6,  1 >;  /**< Port resume                 */
    using PSUSP    = regbits< type,  7,  1 >;  /**< Port suspend                */
    using PRST     = regbits< type,  8,  1 >;  /**< Port reset                  */
    using PLSTS    = regbits< type, 10,  2 >;  /**< Port line status            */
    using PPWR     = regbits< type, 12,  1 >;  /**< Port power                  */
    using PTCTL    = regbits< type, 13,  4 >;  /**< Port test control           */
    using PSPD     = regbits< type, 17,  2 >;  /**< Port speed                  */
  };

  /**
   * OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
   */
  struct FS_HCCHAR0
  : public reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using MCNT    = regbits< type, 20,  2 >;  /**< Multicount           */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable       */
  };

  /**
   * OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
   */
  struct FS_HCCHAR1
  : public reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using MCNT    = regbits< type, 20,  2 >;  /**< Multicount           */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable       */
  };

  /**
   * OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
   */
  struct FS_HCCHAR2
  : public reg< uint32_t, base_addr + 0x140, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0x00000000 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using MCNT    = regbits< type, 20,  2 >;  /**< Multicount           */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable       */
  };

  /**
   * OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
   */
  struct FS_HCCHAR3
  : public reg< uint32_t, base_addr + 0x160, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x160, rw, 0x00000000 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using MCNT    = regbits< type, 20,  2 >;  /**< Multicount           */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable       */
  };

  /**
   * OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
   */
  struct FS_HCCHAR4
  : public reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using MCNT    = regbits< type, 20,  2 >;  /**< Multicount           */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable       */
  };

  /**
   * OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
   */
  struct FS_HCCHAR5
  : public reg< uint32_t, base_addr + 0x1a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a0, rw, 0x00000000 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using MCNT    = regbits< type, 20,  2 >;  /**< Multicount           */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable       */
  };

  /**
   * OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
   */
  struct FS_HCCHAR6
  : public reg< uint32_t, base_addr + 0x1c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c0, rw, 0x00000000 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using MCNT    = regbits< type, 20,  2 >;  /**< Multicount           */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable       */
  };

  /**
   * OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
   */
  struct FS_HCCHAR7
  : public reg< uint32_t, base_addr + 0x1e0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1e0, rw, 0x00000000 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using MCNT    = regbits< type, 20,  2 >;  /**< Multicount           */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable       */
  };

  /**
   * OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
   */
  struct FS_HCINT0
  : public reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >;

    using XFRC   = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH    = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using STALL  = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK    = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using TXERR  = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR  = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR  = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR  = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
   */
  struct FS_HCINT1
  : public reg< uint32_t, base_addr + 0x128, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x00000000 >;

    using XFRC   = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH    = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using STALL  = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK    = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using TXERR  = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR  = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR  = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR  = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
   */
  struct FS_HCINT2
  : public reg< uint32_t, base_addr + 0x148, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x148, rw, 0x00000000 >;

    using XFRC   = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH    = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using STALL  = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK    = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using TXERR  = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR  = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR  = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR  = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
   */
  struct FS_HCINT3
  : public reg< uint32_t, base_addr + 0x168, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x168, rw, 0x00000000 >;

    using XFRC   = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH    = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using STALL  = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK    = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using TXERR  = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR  = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR  = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR  = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
   */
  struct FS_HCINT4
  : public reg< uint32_t, base_addr + 0x188, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0x00000000 >;

    using XFRC   = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH    = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using STALL  = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK    = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using TXERR  = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR  = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR  = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR  = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
   */
  struct FS_HCINT5
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0x00000000 >;

    using XFRC   = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH    = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using STALL  = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK    = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using TXERR  = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR  = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR  = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR  = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
   */
  struct FS_HCINT6
  : public reg< uint32_t, base_addr + 0x1c8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c8, rw, 0x00000000 >;

    using XFRC   = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH    = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using STALL  = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK    = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using TXERR  = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR  = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR  = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR  = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
   */
  struct FS_HCINT7
  : public reg< uint32_t, base_addr + 0x1e8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1e8, rw, 0x00000000 >;

    using XFRC   = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH    = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using STALL  = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK    = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using TXERR  = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR  = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR  = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR  = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
   */
  struct FS_HCINTMSK0
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using STALLM  = regbits< type,  3,  1 >;  /**< STALL response received interrupt mask            */
    using NAKM    = regbits< type,  4,  1 >;  /**< NAK response received interrupt mask              */
    using ACKM    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt mask  */
    using NYET    = regbits< type,  6,  1 >;  /**< response received interrupt mask                  */
    using TXERRM  = regbits< type,  7,  1 >;  /**< Transaction error mask                            */
    using BBERRM  = regbits< type,  8,  1 >;  /**< Babble error mask                                 */
    using FRMORM  = regbits< type,  9,  1 >;  /**< Frame overrun mask                                */
    using DTERRM  = regbits< type, 10,  1 >;  /**< Data toggle error mask                            */
  };

  /**
   * OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
   */
  struct FS_HCINTMSK1
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using STALLM  = regbits< type,  3,  1 >;  /**< STALL response received interrupt mask            */
    using NAKM    = regbits< type,  4,  1 >;  /**< NAK response received interrupt mask              */
    using ACKM    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt mask  */
    using NYET    = regbits< type,  6,  1 >;  /**< response received interrupt mask                  */
    using TXERRM  = regbits< type,  7,  1 >;  /**< Transaction error mask                            */
    using BBERRM  = regbits< type,  8,  1 >;  /**< Babble error mask                                 */
    using FRMORM  = regbits< type,  9,  1 >;  /**< Frame overrun mask                                */
    using DTERRM  = regbits< type, 10,  1 >;  /**< Data toggle error mask                            */
  };

  /**
   * OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
   */
  struct FS_HCINTMSK2
  : public reg< uint32_t, base_addr + 0x14c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14c, rw, 0x00000000 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using STALLM  = regbits< type,  3,  1 >;  /**< STALL response received interrupt mask            */
    using NAKM    = regbits< type,  4,  1 >;  /**< NAK response received interrupt mask              */
    using ACKM    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt mask  */
    using NYET    = regbits< type,  6,  1 >;  /**< response received interrupt mask                  */
    using TXERRM  = regbits< type,  7,  1 >;  /**< Transaction error mask                            */
    using BBERRM  = regbits< type,  8,  1 >;  /**< Babble error mask                                 */
    using FRMORM  = regbits< type,  9,  1 >;  /**< Frame overrun mask                                */
    using DTERRM  = regbits< type, 10,  1 >;  /**< Data toggle error mask                            */
  };

  /**
   * OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
   */
  struct FS_HCINTMSK3
  : public reg< uint32_t, base_addr + 0x16c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x16c, rw, 0x00000000 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using STALLM  = regbits< type,  3,  1 >;  /**< STALL response received interrupt mask            */
    using NAKM    = regbits< type,  4,  1 >;  /**< NAK response received interrupt mask              */
    using ACKM    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt mask  */
    using NYET    = regbits< type,  6,  1 >;  /**< response received interrupt mask                  */
    using TXERRM  = regbits< type,  7,  1 >;  /**< Transaction error mask                            */
    using BBERRM  = regbits< type,  8,  1 >;  /**< Babble error mask                                 */
    using FRMORM  = regbits< type,  9,  1 >;  /**< Frame overrun mask                                */
    using DTERRM  = regbits< type, 10,  1 >;  /**< Data toggle error mask                            */
  };

  /**
   * OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
   */
  struct FS_HCINTMSK4
  : public reg< uint32_t, base_addr + 0x18c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18c, rw, 0x00000000 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using STALLM  = regbits< type,  3,  1 >;  /**< STALL response received interrupt mask            */
    using NAKM    = regbits< type,  4,  1 >;  /**< NAK response received interrupt mask              */
    using ACKM    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt mask  */
    using NYET    = regbits< type,  6,  1 >;  /**< response received interrupt mask                  */
    using TXERRM  = regbits< type,  7,  1 >;  /**< Transaction error mask                            */
    using BBERRM  = regbits< type,  8,  1 >;  /**< Babble error mask                                 */
    using FRMORM  = regbits< type,  9,  1 >;  /**< Frame overrun mask                                */
    using DTERRM  = regbits< type, 10,  1 >;  /**< Data toggle error mask                            */
  };

  /**
   * OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
   */
  struct FS_HCINTMSK5
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0x00000000 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using STALLM  = regbits< type,  3,  1 >;  /**< STALL response received interrupt mask            */
    using NAKM    = regbits< type,  4,  1 >;  /**< NAK response received interrupt mask              */
    using ACKM    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt mask  */
    using NYET    = regbits< type,  6,  1 >;  /**< response received interrupt mask                  */
    using TXERRM  = regbits< type,  7,  1 >;  /**< Transaction error mask                            */
    using BBERRM  = regbits< type,  8,  1 >;  /**< Babble error mask                                 */
    using FRMORM  = regbits< type,  9,  1 >;  /**< Frame overrun mask                                */
    using DTERRM  = regbits< type, 10,  1 >;  /**< Data toggle error mask                            */
  };

  /**
   * OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
   */
  struct FS_HCINTMSK6
  : public reg< uint32_t, base_addr + 0x1cc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1cc, rw, 0x00000000 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using STALLM  = regbits< type,  3,  1 >;  /**< STALL response received interrupt mask            */
    using NAKM    = regbits< type,  4,  1 >;  /**< NAK response received interrupt mask              */
    using ACKM    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt mask  */
    using NYET    = regbits< type,  6,  1 >;  /**< response received interrupt mask                  */
    using TXERRM  = regbits< type,  7,  1 >;  /**< Transaction error mask                            */
    using BBERRM  = regbits< type,  8,  1 >;  /**< Babble error mask                                 */
    using FRMORM  = regbits< type,  9,  1 >;  /**< Frame overrun mask                                */
    using DTERRM  = regbits< type, 10,  1 >;  /**< Data toggle error mask                            */
  };

  /**
   * OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
   */
  struct FS_HCINTMSK7
  : public reg< uint32_t, base_addr + 0x1ec, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1ec, rw, 0x00000000 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using STALLM  = regbits< type,  3,  1 >;  /**< STALL response received interrupt mask            */
    using NAKM    = regbits< type,  4,  1 >;  /**< NAK response received interrupt mask              */
    using ACKM    = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt mask  */
    using NYET    = regbits< type,  6,  1 >;  /**< response received interrupt mask                  */
    using TXERRM  = regbits< type,  7,  1 >;  /**< Transaction error mask                            */
    using BBERRM  = regbits< type,  8,  1 >;  /**< Babble error mask                                 */
    using FRMORM  = regbits< type,  9,  1 >;  /**< Frame overrun mask                                */
    using DTERRM  = regbits< type, 10,  1 >;  /**< Data toggle error mask                            */
  };

  /**
   * OTG_FS host channel-0 transfer size register
   */
  struct FS_HCTSIZ0
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_FS host channel-1 transfer size register
   */
  struct FS_HCTSIZ1
  : public reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_FS host channel-2 transfer size register
   */
  struct FS_HCTSIZ2
  : public reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_FS host channel-3 transfer size register
   */
  struct FS_HCTSIZ3
  : public reg< uint32_t, base_addr + 0x170, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x170, rw, 0x00000000 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_FS host channel-x transfer size register
   */
  struct FS_HCTSIZ4
  : public reg< uint32_t, base_addr + 0x190, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0x00000000 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_FS host channel-5 transfer size register
   */
  struct FS_HCTSIZ5
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0x00000000 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_FS host channel-6 transfer size register
   */
  struct FS_HCTSIZ6
  : public reg< uint32_t, base_addr + 0x1d0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1d0, rw, 0x00000000 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_FS host channel-7 transfer size register
   */
  struct FS_HCTSIZ7
  : public reg< uint32_t, base_addr + 0x1f0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1f0, rw, 0x00000000 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };
};
} // namespace mptl

#endif // ARCH_REG_OTG_FS_HOST_HPP_INCLUDED
