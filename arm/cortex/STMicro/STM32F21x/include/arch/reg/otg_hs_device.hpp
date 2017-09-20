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

#ifndef ARCH_REG_OTG_HS_DEVICE_HPP_INCLUDED
#define ARCH_REG_OTG_HS_DEVICE_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB on the go high speed
 */
struct OTG_HS_DEVICE
{
  static constexpr reg_addr_t base_addr = 0x40040800;

  /**
   * OTG_HS device configuration register
   */
  struct OTG_HS_DCFG
  : public reg< uint32_t, base_addr + 0x0, rw, 0x02200000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x02200000 >;

    using DSPD       = regbits< type,  0,  2 >;  /**< Device speed                         */
    using NZLSOHSK   = regbits< type,  2,  1 >;  /**< Nonzero-length status OUT handshake  */
    using DAD        = regbits< type,  4,  7 >;  /**< Device address                       */
    using PFIVL      = regbits< type, 11,  2 >;  /**< Periodic (micro)frame interval       */
    using PERSCHIVL  = regbits< type, 24,  2 >;  /**< Periodic scheduling interval         */
  };

  /**
   * OTG_HS device control register
   */
  struct OTG_HS_DCTL
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

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
   * OTG_HS device status register
   */
  struct OTG_HS_DSTS
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000010 >;

    using SUSPSTS  = regbits< type,  0,  1 >;  /**< Suspend status                    */
    using ENUMSPD  = regbits< type,  1,  2 >;  /**< Enumerated speed                  */
    using EERR     = regbits< type,  3,  1 >;  /**< Erratic error                     */
    using FNSOF    = regbits< type,  8, 14 >;  /**< Frame number of the received SOF  */
  };

  /**
   * OTG_HS device IN endpoint common interrupt mask register
   */
  struct OTG_HS_DIEPMSK
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using XFRCM      = regbits< type,  0,  1 >;  /**< Transfer completed interrupt mask                  */
    using EPDM       = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt mask                   */
    using TOM        = regbits< type,  3,  1 >;  /**< Timeout condition mask (nonisochronous endpoints)  */
    using ITTXFEMSK  = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO empty mask           */
    using INEPNMM    = regbits< type,  5,  1 >;  /**< IN token received with EP mismatch mask            */
    using INEPNEM    = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective mask                     */
    using TXFURM     = regbits< type,  8,  1 >;  /**< FIFO underrun mask                                 */
    using BIM        = regbits< type,  9,  1 >;  /**< BNA interrupt mask                                 */
  };

  /**
   * OTG_HS device OUT endpoint common interrupt mask register
   */
  struct OTG_HS_DOEPMSK
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using XFRCM    = regbits< type,  0,  1 >;  /**< Transfer completed interrupt mask               */
    using EPDM     = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt mask                */
    using STUPM    = regbits< type,  3,  1 >;  /**< SETUP phase done mask                           */
    using OTEPDM   = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled mask  */
    using B2BSTUP  = regbits< type,  6,  1 >;  /**< Back-to-back SETUP packets received mask        */
    using OPEM     = regbits< type,  8,  1 >;  /**< OUT packet error mask                           */
    using BOIM     = regbits< type,  9,  1 >;  /**< BNA interrupt mask                              */
  };

  /**
   * OTG_HS device all endpoints interrupt register
   */
  struct OTG_HS_DAINT
  : public reg< uint32_t, base_addr + 0x18, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x0 >;

    using IEPINT  = regbits< type,  0, 16 >;  /**< IN endpoint interrupt bits   */
    using OEPINT  = regbits< type, 16, 16 >;  /**< OUT endpoint interrupt bits  */
  };

  /**
   * OTG_HS all endpoints interrupt mask register
   */
  struct OTG_HS_DAINTMSK
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x0 >;

    using IEPM  = regbits< type,  0, 16 >;  /**< IN EP interrupt mask bits   */
    using OEPM  = regbits< type, 16, 16 >;  /**< OUT EP interrupt mask bits  */
  };

  /**
   * OTG_HS device VBUS discharge time register
   */
  struct OTG_HS_DVBUSDIS
  : public reg< uint32_t, base_addr + 0x28, rw, 0x000017D7 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x000017D7 >;

    using VBUSDT  = regbits< type,  0, 16 >;  /**< Device VBUS discharge time  */
  };

  /**
   * OTG_HS device VBUS pulsing time register
   */
  struct OTG_HS_DVBUSPULSE
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x000005B8 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x000005B8 >;

    using DVBUSP  = regbits< type,  0, 12 >;  /**< Device VBUS pulsing time  */
  };

  /**
   * OTG_HS Device threshold control register
   */
  struct OTG_HS_DTHRCTL
  : public reg< uint32_t, base_addr + 0x30, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x0 >;

    using NONISOTHREN  = regbits< type,  0,  1 >;  /**< Nonisochronous IN endpoints threshold enable  */
    using ISOTHREN     = regbits< type,  1,  1 >;  /**< ISO IN endpoint threshold enable              */
    using TXTHRLEN     = regbits< type,  2,  9 >;  /**< Transmit threshold length                     */
    using RXTHREN      = regbits< type, 16,  1 >;  /**< Receive threshold enable                      */
    using RXTHRLEN     = regbits< type, 17,  9 >;  /**< Receive threshold length                      */
    using ARPEN        = regbits< type, 27,  1 >;  /**< Arbiter parking enable                        */
  };

  /**
   * OTG_HS device IN endpoint FIFO empty interrupt mask register
   */
  struct OTG_HS_DIEPEMPMSK
  : public reg< uint32_t, base_addr + 0x34, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x0 >;

    using INEPTXFEM  = regbits< type,  0, 16 >;  /**< IN EP Tx FIFO empty interrupt mask bits  */
  };

  /**
   * OTG_HS device each endpoint interrupt register
   */
  struct OTG_HS_DEACHINT
  : public reg< uint32_t, base_addr + 0x38, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x0 >;

    using IEP1INT  = regbits< type,  1,  1 >;  /**< IN endpoint 1interrupt bit    */
    using OEP1INT  = regbits< type, 17,  1 >;  /**< OUT endpoint 1 interrupt bit  */
  };

  /**
   * OTG_HS device each endpoint interrupt register mask
   */
  struct OTG_HS_DEACHINTMSK
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x0 >;

    using IEP1INTM  = regbits< type,  1,  1 >;  /**< IN Endpoint 1 interrupt mask bit   */
    using OEP1INTM  = regbits< type, 17,  1 >;  /**< OUT Endpoint 1 interrupt mask bit  */
  };

  /**
   * OTG_HS device each in endpoint-1 interrupt register
   */
  struct OTG_HS_DIEPEACHMSK1
  : public reg< uint32_t, base_addr + 0x40, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x0 >;

    using XFRCM      = regbits< type,  0,  1 >;  /**< Transfer completed interrupt mask                  */
    using EPDM       = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt mask                   */
    using TOM        = regbits< type,  3,  1 >;  /**< Timeout condition mask (nonisochronous endpoints)  */
    using ITTXFEMSK  = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO empty mask           */
    using INEPNMM    = regbits< type,  5,  1 >;  /**< IN token received with EP mismatch mask            */
    using INEPNEM    = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective mask                     */
    using TXFURM     = regbits< type,  8,  1 >;  /**< FIFO underrun mask                                 */
    using BIM        = regbits< type,  9,  1 >;  /**< BNA interrupt mask                                 */
    using NAKM       = regbits< type, 13,  1 >;  /**< NAK interrupt mask                                 */
  };

  /**
   * OTG_HS device each OUT endpoint-1 interrupt register
   */
  struct OTG_HS_DOEPEACHMSK1
  : public reg< uint32_t, base_addr + 0x80, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x0 >;

    using XFRCM      = regbits< type,  0,  1 >;  /**< Transfer completed interrupt mask         */
    using EPDM       = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt mask          */
    using TOM        = regbits< type,  3,  1 >;  /**< Timeout condition mask                    */
    using ITTXFEMSK  = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO empty mask  */
    using INEPNMM    = regbits< type,  5,  1 >;  /**< IN token received with EP mismatch mask   */
    using INEPNEM    = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective mask            */
    using TXFURM     = regbits< type,  8,  1 >;  /**< OUT packet error mask                     */
    using BIM        = regbits< type,  9,  1 >;  /**< BNA interrupt mask                        */
    using BERRM      = regbits< type, 12,  1 >;  /**< Bubble error interrupt mask               */
    using NAKM       = regbits< type, 13,  1 >;  /**< NAK interrupt mask                        */
    using NYETM      = regbits< type, 14,  1 >;  /**< NYET interrupt mask                       */
  };

  /**
   * OTG device endpoint-0 control register
   */
  struct OTG_HS_DIEPCTL0
  : public reg< uint32_t, base_addr + 0x100, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even/odd frame       */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TxFIFO number        */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK              */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID        */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame        */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-1 control register
   */
  struct OTG_HS_DIEPCTL1
  : public reg< uint32_t, base_addr + 0x120, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even/odd frame       */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TxFIFO number        */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK              */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID        */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame        */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-2 control register
   */
  struct OTG_HS_DIEPCTL2
  : public reg< uint32_t, base_addr + 0x140, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even/odd frame       */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TxFIFO number        */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK              */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID        */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame        */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-3 control register
   */
  struct OTG_HS_DIEPCTL3
  : public reg< uint32_t, base_addr + 0x160, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x160, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even/odd frame       */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TxFIFO number        */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK              */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID        */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame        */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-4 control register
   */
  struct OTG_HS_DIEPCTL4
  : public reg< uint32_t, base_addr + 0x180, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even/odd frame       */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TxFIFO number        */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK              */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID        */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame        */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-5 control register
   */
  struct OTG_HS_DIEPCTL5
  : public reg< uint32_t, base_addr + 0x1a0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a0, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even/odd frame       */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TxFIFO number        */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK              */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID        */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame        */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-6 control register
   */
  struct OTG_HS_DIEPCTL6
  : public reg< uint32_t, base_addr + 0x1c0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c0, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even/odd frame       */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TxFIFO number        */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK              */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID        */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame        */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-7 control register
   */
  struct OTG_HS_DIEPCTL7
  : public reg< uint32_t, base_addr + 0x1e0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1e0, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size  */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even/odd frame       */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using TXFNUM          = regbits< type, 22,  4 >;  /**< TxFIFO number        */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK              */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID        */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame        */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-0 interrupt register
   */
  struct OTG_HS_DIEPINT0
  : public reg< uint32_t, base_addr + 0x108, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x00000080 >;

    using XFRC        = regbits< type,  0,  1 >;  /**< Transfer completed interrupt            */
    using EPDISD      = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt             */
    using TOC         = regbits< type,  3,  1 >;  /**< Timeout condition                       */
    using ITTXFE      = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO is empty  */
    using INEPNE      = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective               */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO empty                     */
    using TXFIFOUDRN  = regbits< type,  8,  1 >;  /**< Transmit Fifo Underrun                  */
    using BNA         = regbits< type,  9,  1 >;  /**< Buffer not available interrupt          */
    using PKTDRPSTS   = regbits< type, 11,  1 >;  /**< Packet dropped status                   */
    using BERR        = regbits< type, 12,  1 >;  /**< Babble error interrupt                  */
    using NAK         = regbits< type, 13,  1 >;  /**< NAK interrupt                           */
  };

  /**
   * OTG device endpoint-1 interrupt register
   */
  struct OTG_HS_DIEPINT1
  : public reg< uint32_t, base_addr + 0x128, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x0 >;

    using XFRC        = regbits< type,  0,  1 >;  /**< Transfer completed interrupt            */
    using EPDISD      = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt             */
    using TOC         = regbits< type,  3,  1 >;  /**< Timeout condition                       */
    using ITTXFE      = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO is empty  */
    using INEPNE      = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective               */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO empty                     */
    using TXFIFOUDRN  = regbits< type,  8,  1 >;  /**< Transmit Fifo Underrun                  */
    using BNA         = regbits< type,  9,  1 >;  /**< Buffer not available interrupt          */
    using PKTDRPSTS   = regbits< type, 11,  1 >;  /**< Packet dropped status                   */
    using BERR        = regbits< type, 12,  1 >;  /**< Babble error interrupt                  */
    using NAK         = regbits< type, 13,  1 >;  /**< NAK interrupt                           */
  };

  /**
   * OTG device endpoint-2 interrupt register
   */
  struct OTG_HS_DIEPINT2
  : public reg< uint32_t, base_addr + 0x148, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x148, rw, 0x0 >;

    using XFRC        = regbits< type,  0,  1 >;  /**< Transfer completed interrupt            */
    using EPDISD      = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt             */
    using TOC         = regbits< type,  3,  1 >;  /**< Timeout condition                       */
    using ITTXFE      = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO is empty  */
    using INEPNE      = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective               */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO empty                     */
    using TXFIFOUDRN  = regbits< type,  8,  1 >;  /**< Transmit Fifo Underrun                  */
    using BNA         = regbits< type,  9,  1 >;  /**< Buffer not available interrupt          */
    using PKTDRPSTS   = regbits< type, 11,  1 >;  /**< Packet dropped status                   */
    using BERR        = regbits< type, 12,  1 >;  /**< Babble error interrupt                  */
    using NAK         = regbits< type, 13,  1 >;  /**< NAK interrupt                           */
  };

  /**
   * OTG device endpoint-3 interrupt register
   */
  struct OTG_HS_DIEPINT3
  : public reg< uint32_t, base_addr + 0x168, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x168, rw, 0x0 >;

    using XFRC        = regbits< type,  0,  1 >;  /**< Transfer completed interrupt            */
    using EPDISD      = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt             */
    using TOC         = regbits< type,  3,  1 >;  /**< Timeout condition                       */
    using ITTXFE      = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO is empty  */
    using INEPNE      = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective               */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO empty                     */
    using TXFIFOUDRN  = regbits< type,  8,  1 >;  /**< Transmit Fifo Underrun                  */
    using BNA         = regbits< type,  9,  1 >;  /**< Buffer not available interrupt          */
    using PKTDRPSTS   = regbits< type, 11,  1 >;  /**< Packet dropped status                   */
    using BERR        = regbits< type, 12,  1 >;  /**< Babble error interrupt                  */
    using NAK         = regbits< type, 13,  1 >;  /**< NAK interrupt                           */
  };

  /**
   * OTG device endpoint-4 interrupt register
   */
  struct OTG_HS_DIEPINT4
  : public reg< uint32_t, base_addr + 0x188, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0x0 >;

    using XFRC        = regbits< type,  0,  1 >;  /**< Transfer completed interrupt            */
    using EPDISD      = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt             */
    using TOC         = regbits< type,  3,  1 >;  /**< Timeout condition                       */
    using ITTXFE      = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO is empty  */
    using INEPNE      = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective               */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO empty                     */
    using TXFIFOUDRN  = regbits< type,  8,  1 >;  /**< Transmit Fifo Underrun                  */
    using BNA         = regbits< type,  9,  1 >;  /**< Buffer not available interrupt          */
    using PKTDRPSTS   = regbits< type, 11,  1 >;  /**< Packet dropped status                   */
    using BERR        = regbits< type, 12,  1 >;  /**< Babble error interrupt                  */
    using NAK         = regbits< type, 13,  1 >;  /**< NAK interrupt                           */
  };

  /**
   * OTG device endpoint-5 interrupt register
   */
  struct OTG_HS_DIEPINT5
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0x0 >;

    using XFRC        = regbits< type,  0,  1 >;  /**< Transfer completed interrupt            */
    using EPDISD      = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt             */
    using TOC         = regbits< type,  3,  1 >;  /**< Timeout condition                       */
    using ITTXFE      = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO is empty  */
    using INEPNE      = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective               */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO empty                     */
    using TXFIFOUDRN  = regbits< type,  8,  1 >;  /**< Transmit Fifo Underrun                  */
    using BNA         = regbits< type,  9,  1 >;  /**< Buffer not available interrupt          */
    using PKTDRPSTS   = regbits< type, 11,  1 >;  /**< Packet dropped status                   */
    using BERR        = regbits< type, 12,  1 >;  /**< Babble error interrupt                  */
    using NAK         = regbits< type, 13,  1 >;  /**< NAK interrupt                           */
  };

  /**
   * OTG device endpoint-6 interrupt register
   */
  struct OTG_HS_DIEPINT6
  : public reg< uint32_t, base_addr + 0x1c8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c8, rw, 0x0 >;

    using XFRC        = regbits< type,  0,  1 >;  /**< Transfer completed interrupt            */
    using EPDISD      = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt             */
    using TOC         = regbits< type,  3,  1 >;  /**< Timeout condition                       */
    using ITTXFE      = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO is empty  */
    using INEPNE      = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective               */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO empty                     */
    using TXFIFOUDRN  = regbits< type,  8,  1 >;  /**< Transmit Fifo Underrun                  */
    using BNA         = regbits< type,  9,  1 >;  /**< Buffer not available interrupt          */
    using PKTDRPSTS   = regbits< type, 11,  1 >;  /**< Packet dropped status                   */
    using BERR        = regbits< type, 12,  1 >;  /**< Babble error interrupt                  */
    using NAK         = regbits< type, 13,  1 >;  /**< NAK interrupt                           */
  };

  /**
   * OTG device endpoint-7 interrupt register
   */
  struct OTG_HS_DIEPINT7
  : public reg< uint32_t, base_addr + 0x1e8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1e8, rw, 0x0 >;

    using XFRC        = regbits< type,  0,  1 >;  /**< Transfer completed interrupt            */
    using EPDISD      = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt             */
    using TOC         = regbits< type,  3,  1 >;  /**< Timeout condition                       */
    using ITTXFE      = regbits< type,  4,  1 >;  /**< IN token received when TxFIFO is empty  */
    using INEPNE      = regbits< type,  6,  1 >;  /**< IN endpoint NAK effective               */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO empty                     */
    using TXFIFOUDRN  = regbits< type,  8,  1 >;  /**< Transmit Fifo Underrun                  */
    using BNA         = regbits< type,  9,  1 >;  /**< Buffer not available interrupt          */
    using PKTDRPSTS   = regbits< type, 11,  1 >;  /**< Packet dropped status                   */
    using BERR        = regbits< type, 12,  1 >;  /**< Babble error interrupt                  */
    using NAK         = regbits< type, 13,  1 >;  /**< NAK interrupt                           */
  };

  /**
   * OTG_HS device IN endpoint 0 transfer size register
   */
  struct OTG_HS_DIEPTSIZ0
  : public reg< uint32_t, base_addr + 0x110, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0,  7 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19,  2 >;  /**< Packet count   */
  };

  /**
   * OTG_HS device endpoint-1 DMA address register
   */
  struct OTG_HS_DIEPDMA1
  : public reg< uint32_t, base_addr + 0x114, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS device endpoint-2 DMA address register
   */
  struct OTG_HS_DIEPDMA2
  : public reg< uint32_t, base_addr + 0x134, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS device endpoint-3 DMA address register
   */
  struct OTG_HS_DIEPDMA3
  : public reg< uint32_t, base_addr + 0x154, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS device endpoint-4 DMA address register
   */
  struct OTG_HS_DIEPDMA4
  : public reg< uint32_t, base_addr + 0x174, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x174, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS device endpoint-5 DMA address register
   */
  struct OTG_HS_DIEPDMA5
  : public reg< uint32_t, base_addr + 0x194, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x194, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO status register
   */
  struct OTG_HS_DTXFSTS0
  : public reg< uint32_t, base_addr + 0x118, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, ro, 0x0 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space avail  */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO status register
   */
  struct OTG_HS_DTXFSTS1
  : public reg< uint32_t, base_addr + 0x138, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x138, ro, 0x0 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space avail  */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO status register
   */
  struct OTG_HS_DTXFSTS2
  : public reg< uint32_t, base_addr + 0x158, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x158, ro, 0x0 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space avail  */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO status register
   */
  struct OTG_HS_DTXFSTS3
  : public reg< uint32_t, base_addr + 0x178, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x178, ro, 0x0 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space avail  */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO status register
   */
  struct OTG_HS_DTXFSTS4
  : public reg< uint32_t, base_addr + 0x198, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x198, ro, 0x0 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space avail  */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO status register
   */
  struct OTG_HS_DTXFSTS5
  : public reg< uint32_t, base_addr + 0x1b8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b8, ro, 0x0 >;

    using INEPTFSAV  = regbits< type,  0, 16 >;  /**< IN endpoint TxFIFO space avail  */
  };

  /**
   * OTG_HS device endpoint transfer size register
   */
  struct OTG_HS_DIEPTSIZ1
  : public reg< uint32_t, base_addr + 0x130, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using MCNT    = regbits< type, 29,  2 >;  /**< Multi count    */
  };

  /**
   * OTG_HS device endpoint transfer size register
   */
  struct OTG_HS_DIEPTSIZ2
  : public reg< uint32_t, base_addr + 0x150, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x150, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using MCNT    = regbits< type, 29,  2 >;  /**< Multi count    */
  };

  /**
   * OTG_HS device endpoint transfer size register
   */
  struct OTG_HS_DIEPTSIZ3
  : public reg< uint32_t, base_addr + 0x170, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x170, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using MCNT    = regbits< type, 29,  2 >;  /**< Multi count    */
  };

  /**
   * OTG_HS device endpoint transfer size register
   */
  struct OTG_HS_DIEPTSIZ4
  : public reg< uint32_t, base_addr + 0x190, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using MCNT    = regbits< type, 29,  2 >;  /**< Multi count    */
  };

  /**
   * OTG_HS device endpoint transfer size register
   */
  struct OTG_HS_DIEPTSIZ5
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using MCNT    = regbits< type, 29,  2 >;  /**< Multi count    */
  };

  /**
   * OTG_HS device control OUT endpoint 0 control register
   */
  struct OTG_HS_DOEPCTL0
  : public reg< uint32_t, base_addr + 0x300, rw, 0x00008000 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x00008000 >;

    using MPSIZ   = regbits< type,  0,  2 >;  /**< Maximum packet size  */
    using USBAEP  = regbits< type, 15,  1 >;  /**< USB active endpoint  */
    using NAKSTS  = regbits< type, 17,  1 >;  /**< NAK status           */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type        */
    using SNPM    = regbits< type, 20,  1 >;  /**< Snoop mode           */
    using Stall   = regbits< type, 21,  1 >;  /**< STALL handshake      */
    using CNAK    = regbits< type, 26,  1 >;  /**< Clear NAK            */
    using SNAK    = regbits< type, 27,  1 >;  /**< Set NAK              */
    using EPDIS   = regbits< type, 30,  1 >;  /**< Endpoint disable     */
    using EPENA   = regbits< type, 31,  1 >;  /**< Endpoint enable      */
  };

  /**
   * OTG device endpoint-1 control register
   */
  struct OTG_HS_DOEPCTL1
  : public reg< uint32_t, base_addr + 0x320, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x320, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size               */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint               */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even odd frame/Endpoint data PID  */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status                        */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type                     */
    using SNPM            = regbits< type, 20,  1 >;  /**< Snoop mode                        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake                   */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK                         */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK                           */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID/Set even frame      */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame                     */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable                  */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable                   */
  };

  /**
   * OTG device endpoint-2 control register
   */
  struct OTG_HS_DOEPCTL2
  : public reg< uint32_t, base_addr + 0x340, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x340, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size               */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint               */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even odd frame/Endpoint data PID  */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status                        */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type                     */
    using SNPM            = regbits< type, 20,  1 >;  /**< Snoop mode                        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake                   */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK                         */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK                           */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID/Set even frame      */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame                     */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable                  */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable                   */
  };

  /**
   * OTG device endpoint-3 control register
   */
  struct OTG_HS_DOEPCTL3
  : public reg< uint32_t, base_addr + 0x360, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x360, rw, 0x0 >;

    using MPSIZ           = regbits< type,  0, 11 >;  /**< Maximum packet size               */
    using USBAEP          = regbits< type, 15,  1 >;  /**< USB active endpoint               */
    using EONUM_DPID      = regbits< type, 16,  1 >;  /**< Even odd frame/Endpoint data PID  */
    using NAKSTS          = regbits< type, 17,  1 >;  /**< NAK status                        */
    using EPTYP           = regbits< type, 18,  2 >;  /**< Endpoint type                     */
    using SNPM            = regbits< type, 20,  1 >;  /**< Snoop mode                        */
    using Stall           = regbits< type, 21,  1 >;  /**< STALL handshake                   */
    using CNAK            = regbits< type, 26,  1 >;  /**< Clear NAK                         */
    using SNAK            = regbits< type, 27,  1 >;  /**< Set NAK                           */
    using SD0PID_SEVNFRM  = regbits< type, 28,  1 >;  /**< Set DATA0 PID/Set even frame      */
    using SODDFRM         = regbits< type, 29,  1 >;  /**< Set odd frame                     */
    using EPDIS           = regbits< type, 30,  1 >;  /**< Endpoint disable                  */
    using EPENA           = regbits< type, 31,  1 >;  /**< Endpoint enable                   */
  };

  /**
   * OTG_HS device endpoint-0 interrupt register
   */
  struct OTG_HS_DOEPINT0
  : public reg< uint32_t, base_addr + 0x308, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0x00000080 >;

    using XFRC     = regbits< type,  0,  1 >;  /**< Transfer completed interrupt               */
    using EPDISD   = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt                */
    using STUP     = regbits< type,  3,  1 >;  /**< SETUP phase done                           */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled  */
    using B2BSTUP  = regbits< type,  6,  1 >;  /**< Back-to-back SETUP packets received        */
    using NYET     = regbits< type, 14,  1 >;  /**< NYET interrupt                             */
  };

  /**
   * OTG_HS device endpoint-1 interrupt register
   */
  struct OTG_HS_DOEPINT1
  : public reg< uint32_t, base_addr + 0x328, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x328, rw, 0x0 >;

    using XFRC     = regbits< type,  0,  1 >;  /**< Transfer completed interrupt               */
    using EPDISD   = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt                */
    using STUP     = regbits< type,  3,  1 >;  /**< SETUP phase done                           */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled  */
    using B2BSTUP  = regbits< type,  6,  1 >;  /**< Back-to-back SETUP packets received        */
    using NYET     = regbits< type, 14,  1 >;  /**< NYET interrupt                             */
  };

  /**
   * OTG_HS device endpoint-2 interrupt register
   */
  struct OTG_HS_DOEPINT2
  : public reg< uint32_t, base_addr + 0x348, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x348, rw, 0x0 >;

    using XFRC     = regbits< type,  0,  1 >;  /**< Transfer completed interrupt               */
    using EPDISD   = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt                */
    using STUP     = regbits< type,  3,  1 >;  /**< SETUP phase done                           */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled  */
    using B2BSTUP  = regbits< type,  6,  1 >;  /**< Back-to-back SETUP packets received        */
    using NYET     = regbits< type, 14,  1 >;  /**< NYET interrupt                             */
  };

  /**
   * OTG_HS device endpoint-3 interrupt register
   */
  struct OTG_HS_DOEPINT3
  : public reg< uint32_t, base_addr + 0x368, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x368, rw, 0x0 >;

    using XFRC     = regbits< type,  0,  1 >;  /**< Transfer completed interrupt               */
    using EPDISD   = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt                */
    using STUP     = regbits< type,  3,  1 >;  /**< SETUP phase done                           */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled  */
    using B2BSTUP  = regbits< type,  6,  1 >;  /**< Back-to-back SETUP packets received        */
    using NYET     = regbits< type, 14,  1 >;  /**< NYET interrupt                             */
  };

  /**
   * OTG_HS device endpoint-4 interrupt register
   */
  struct OTG_HS_DOEPINT4
  : public reg< uint32_t, base_addr + 0x388, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x388, rw, 0x0 >;

    using XFRC     = regbits< type,  0,  1 >;  /**< Transfer completed interrupt               */
    using EPDISD   = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt                */
    using STUP     = regbits< type,  3,  1 >;  /**< SETUP phase done                           */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled  */
    using B2BSTUP  = regbits< type,  6,  1 >;  /**< Back-to-back SETUP packets received        */
    using NYET     = regbits< type, 14,  1 >;  /**< NYET interrupt                             */
  };

  /**
   * OTG_HS device endpoint-5 interrupt register
   */
  struct OTG_HS_DOEPINT5
  : public reg< uint32_t, base_addr + 0x3a8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a8, rw, 0x0 >;

    using XFRC     = regbits< type,  0,  1 >;  /**< Transfer completed interrupt               */
    using EPDISD   = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt                */
    using STUP     = regbits< type,  3,  1 >;  /**< SETUP phase done                           */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled  */
    using B2BSTUP  = regbits< type,  6,  1 >;  /**< Back-to-back SETUP packets received        */
    using NYET     = regbits< type, 14,  1 >;  /**< NYET interrupt                             */
  };

  /**
   * OTG_HS device endpoint-6 interrupt register
   */
  struct OTG_HS_DOEPINT6
  : public reg< uint32_t, base_addr + 0x3c8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c8, rw, 0x0 >;

    using XFRC     = regbits< type,  0,  1 >;  /**< Transfer completed interrupt               */
    using EPDISD   = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt                */
    using STUP     = regbits< type,  3,  1 >;  /**< SETUP phase done                           */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled  */
    using B2BSTUP  = regbits< type,  6,  1 >;  /**< Back-to-back SETUP packets received        */
    using NYET     = regbits< type, 14,  1 >;  /**< NYET interrupt                             */
  };

  /**
   * OTG_HS device endpoint-7 interrupt register
   */
  struct OTG_HS_DOEPINT7
  : public reg< uint32_t, base_addr + 0x3e8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e8, rw, 0x0 >;

    using XFRC     = regbits< type,  0,  1 >;  /**< Transfer completed interrupt               */
    using EPDISD   = regbits< type,  1,  1 >;  /**< Endpoint disabled interrupt                */
    using STUP     = regbits< type,  3,  1 >;  /**< SETUP phase done                           */
    using OTEPDIS  = regbits< type,  4,  1 >;  /**< OUT token received when endpoint disabled  */
    using B2BSTUP  = regbits< type,  6,  1 >;  /**< Back-to-back SETUP packets received        */
    using NYET     = regbits< type, 14,  1 >;  /**< NYET interrupt                             */
  };

  /**
   * OTG_HS device endpoint-1 transfer size register
   */
  struct OTG_HS_DOEPTSIZ0
  : public reg< uint32_t, base_addr + 0x310, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0x0 >;

    using XFRSIZ   = regbits< type,  0,  7 >;  /**< Transfer size       */
    using PKTCNT   = regbits< type, 19,  1 >;  /**< Packet count        */
    using STUPCNT  = regbits< type, 29,  2 >;  /**< SETUP packet count  */
  };

  /**
   * OTG_HS device endpoint-2 transfer size register
   */
  struct OTG_HS_DOEPTSIZ1
  : public reg< uint32_t, base_addr + 0x330, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x330, rw, 0x0 >;

    using XFRSIZ          = regbits< type,  0, 19 >;  /**< Transfer size                         */
    using PKTCNT          = regbits< type, 19, 10 >;  /**< Packet count                          */
    using RXDPID_STUPCNT  = regbits< type, 29,  2 >;  /**< Received data PID/SETUP packet count  */
  };

  /**
   * OTG_HS device endpoint-3 transfer size register
   */
  struct OTG_HS_DOEPTSIZ2
  : public reg< uint32_t, base_addr + 0x350, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x350, rw, 0x0 >;

    using XFRSIZ          = regbits< type,  0, 19 >;  /**< Transfer size                         */
    using PKTCNT          = regbits< type, 19, 10 >;  /**< Packet count                          */
    using RXDPID_STUPCNT  = regbits< type, 29,  2 >;  /**< Received data PID/SETUP packet count  */
  };

  /**
   * OTG_HS device endpoint-4 transfer size register
   */
  struct OTG_HS_DOEPTSIZ3
  : public reg< uint32_t, base_addr + 0x370, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x370, rw, 0x0 >;

    using XFRSIZ          = regbits< type,  0, 19 >;  /**< Transfer size                         */
    using PKTCNT          = regbits< type, 19, 10 >;  /**< Packet count                          */
    using RXDPID_STUPCNT  = regbits< type, 29,  2 >;  /**< Received data PID/SETUP packet count  */
  };

  /**
   * OTG_HS device endpoint-5 transfer size register
   */
  struct OTG_HS_DOEPTSIZ4
  : public reg< uint32_t, base_addr + 0x390, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x390, rw, 0x0 >;

    using XFRSIZ          = regbits< type,  0, 19 >;  /**< Transfer size                         */
    using PKTCNT          = regbits< type, 19, 10 >;  /**< Packet count                          */
    using RXDPID_STUPCNT  = regbits< type, 29,  2 >;  /**< Received data PID/SETUP packet count  */
  };
};
} // namespace mptl

#endif // ARCH_REG_OTG_HS_DEVICE_HPP_INCLUDED
