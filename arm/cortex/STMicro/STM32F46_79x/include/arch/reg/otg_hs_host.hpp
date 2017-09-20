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
//  Import from CMSIS-SVD: "STMicro/STM32F46_79x.svd"
//
//  name: STM32F46_79x
//  version: 1.0
//  description: STM32F46_79x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OTG_HS_HOST_HPP_INCLUDED
#define ARCH_REG_OTG_HS_HOST_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB on the go high speed
 */
struct OTG_HS_HOST
{
  static constexpr reg_addr_t base_addr = 0x40040400;

  /**
   * OTG_HS host configuration register
   */
  struct OTG_HS_HCFG
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using FSLSPCS  = regbits< type,  0,  2 >;  /**< FS/LS PHY clock select   */
    using FSLSS    = regbits< type,  2,  1 >;  /**< FS- and LS-only support  */
  };

  /**
   * OTG_HS Host frame interval register
   */
  struct OTG_HS_HFIR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000EA60 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000EA60 >;

    using FRIVL  = regbits< type,  0, 16 >;  /**< Frame interval  */
  };

  /**
   * OTG_HS host frame number/frame time remaining register
   */
  struct OTG_HS_HFNUM
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00003FFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00003FFF >;

    using FRNUM  = regbits< type,  0, 16 >;  /**< Frame number          */
    using FTREM  = regbits< type, 16, 16 >;  /**< Frame time remaining  */
  };

  /**
   * OTG_HS_Host periodic transmit FIFO/queue status register
   */
  struct OTG_HS_HPTXSTS
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00080100 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00080100 >;

    using PTXFSAVL  = regbits< type,  0, 16 >;  /**< Periodic transmit data FIFO space available      */
    using PTXQSAV   = regbits< type, 16,  8 >;  /**< Periodic transmit request queue space available  */
    using PTXQTOP   = regbits< type, 24,  8 >;  /**< Top of the periodic transmit request queue       */
  };

  /**
   * OTG_HS Host all channels interrupt register
   */
  struct OTG_HS_HAINT
  : public reg< uint32_t, base_addr + 0x14, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x0 >;

    using HAINT  = regbits< type,  0, 16 >;  /**< Channel interrupts  */
  };

  /**
   * OTG_HS host all channels interrupt mask register
   */
  struct OTG_HS_HAINTMSK
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0 >;

    using HAINTM  = regbits< type,  0, 16 >;  /**< Channel interrupt mask  */
  };

  /**
   * OTG_HS host port control and status register
   */
  struct OTG_HS_HPRT
  : public reg< uint32_t, base_addr + 0x40, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x0 >;

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
   * OTG_HS host channel-0 characteristics register
   */
  struct OTG_HS_HCCHAR0
  : public reg< uint32_t, base_addr + 0x100, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-1 characteristics register
   */
  struct OTG_HS_HCCHAR1
  : public reg< uint32_t, base_addr + 0x120, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-2 characteristics register
   */
  struct OTG_HS_HCCHAR2
  : public reg< uint32_t, base_addr + 0x140, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-3 characteristics register
   */
  struct OTG_HS_HCCHAR3
  : public reg< uint32_t, base_addr + 0x160, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x160, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-4 characteristics register
   */
  struct OTG_HS_HCCHAR4
  : public reg< uint32_t, base_addr + 0x180, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-5 characteristics register
   */
  struct OTG_HS_HCCHAR5
  : public reg< uint32_t, base_addr + 0x1a0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a0, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-6 characteristics register
   */
  struct OTG_HS_HCCHAR6
  : public reg< uint32_t, base_addr + 0x1c0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c0, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-7 characteristics register
   */
  struct OTG_HS_HCCHAR7
  : public reg< uint32_t, base_addr + 0x1e0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1e0, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-8 characteristics register
   */
  struct OTG_HS_HCCHAR8
  : public reg< uint32_t, base_addr + 0x200, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-9 characteristics register
   */
  struct OTG_HS_HCCHAR9
  : public reg< uint32_t, base_addr + 0x220, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x220, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-10 characteristics register
   */
  struct OTG_HS_HCCHAR10
  : public reg< uint32_t, base_addr + 0x240, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x240, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-11 characteristics register
   */
  struct OTG_HS_HCCHAR11
  : public reg< uint32_t, base_addr + 0x260, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x260, rw, 0x0 >;

    using MPSIZ   = regbits< type,  0, 11 >;  /**< Maximum packet size                  */
    using EPNUM   = regbits< type, 11,  4 >;  /**< Endpoint number                      */
    using EPDIR   = regbits< type, 15,  1 >;  /**< Endpoint direction                   */
    using LSDEV   = regbits< type, 17,  1 >;  /**< Low-speed device                     */
    using EPTYP   = regbits< type, 18,  2 >;  /**< Endpoint type                        */
    using MC      = regbits< type, 20,  2 >;  /**< Multi Count (MC) / Error Count (EC)  */
    using DAD     = regbits< type, 22,  7 >;  /**< Device address                       */
    using ODDFRM  = regbits< type, 29,  1 >;  /**< Odd frame                            */
    using CHDIS   = regbits< type, 30,  1 >;  /**< Channel disable                      */
    using CHENA   = regbits< type, 31,  1 >;  /**< Channel enable                       */
  };

  /**
   * OTG_HS host channel-0 split control register
   */
  struct OTG_HS_HCSPLT0
  : public reg< uint32_t, base_addr + 0x104, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-1 split control register
   */
  struct OTG_HS_HCSPLT1
  : public reg< uint32_t, base_addr + 0x124, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-2 split control register
   */
  struct OTG_HS_HCSPLT2
  : public reg< uint32_t, base_addr + 0x144, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x144, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-3 split control register
   */
  struct OTG_HS_HCSPLT3
  : public reg< uint32_t, base_addr + 0x164, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x164, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-4 split control register
   */
  struct OTG_HS_HCSPLT4
  : public reg< uint32_t, base_addr + 0x184, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-5 split control register
   */
  struct OTG_HS_HCSPLT5
  : public reg< uint32_t, base_addr + 0x1a4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a4, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-6 split control register
   */
  struct OTG_HS_HCSPLT6
  : public reg< uint32_t, base_addr + 0x1c4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c4, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-7 split control register
   */
  struct OTG_HS_HCSPLT7
  : public reg< uint32_t, base_addr + 0x1e4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1e4, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-8 split control register
   */
  struct OTG_HS_HCSPLT8
  : public reg< uint32_t, base_addr + 0x204, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-9 split control register
   */
  struct OTG_HS_HCSPLT9
  : public reg< uint32_t, base_addr + 0x224, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x224, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-10 split control register
   */
  struct OTG_HS_HCSPLT10
  : public reg< uint32_t, base_addr + 0x244, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x244, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-11 split control register
   */
  struct OTG_HS_HCSPLT11
  : public reg< uint32_t, base_addr + 0x264, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x264, rw, 0x0 >;

    using PRTADDR    = regbits< type,  0,  7 >;  /**< Port address       */
    using HUBADDR    = regbits< type,  7,  7 >;  /**< Hub address        */
    using XACTPOS    = regbits< type, 14,  2 >;  /**< XACTPOS            */
    using COMPLSPLT  = regbits< type, 16,  1 >;  /**< Do complete split  */
    using SPLITEN    = regbits< type, 31,  1 >;  /**< Split enable       */
  };

  /**
   * OTG_HS host channel-11 interrupt register
   */
  struct OTG_HS_HCINT0
  : public reg< uint32_t, base_addr + 0x108, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-1 interrupt register
   */
  struct OTG_HS_HCINT1
  : public reg< uint32_t, base_addr + 0x128, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-2 interrupt register
   */
  struct OTG_HS_HCINT2
  : public reg< uint32_t, base_addr + 0x148, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x148, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-3 interrupt register
   */
  struct OTG_HS_HCINT3
  : public reg< uint32_t, base_addr + 0x168, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x168, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-4 interrupt register
   */
  struct OTG_HS_HCINT4
  : public reg< uint32_t, base_addr + 0x188, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-5 interrupt register
   */
  struct OTG_HS_HCINT5
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-6 interrupt register
   */
  struct OTG_HS_HCINT6
  : public reg< uint32_t, base_addr + 0x1c8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c8, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-7 interrupt register
   */
  struct OTG_HS_HCINT7
  : public reg< uint32_t, base_addr + 0x1e8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1e8, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-8 interrupt register
   */
  struct OTG_HS_HCINT8
  : public reg< uint32_t, base_addr + 0x208, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-9 interrupt register
   */
  struct OTG_HS_HCINT9
  : public reg< uint32_t, base_addr + 0x228, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x228, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-10 interrupt register
   */
  struct OTG_HS_HCINT10
  : public reg< uint32_t, base_addr + 0x248, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x248, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-11 interrupt register
   */
  struct OTG_HS_HCINT11
  : public reg< uint32_t, base_addr + 0x268, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x268, rw, 0x0 >;

    using XFRC    = regbits< type,  0,  1 >;  /**< Transfer completed                           */
    using CHH     = regbits< type,  1,  1 >;  /**< Channel halted                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                    */
    using STALL   = regbits< type,  3,  1 >;  /**< STALL response received interrupt            */
    using NAK     = regbits< type,  4,  1 >;  /**< NAK response received interrupt              */
    using ACK     = regbits< type,  5,  1 >;  /**< ACK response received/transmitted interrupt  */
    using NYET    = regbits< type,  6,  1 >;  /**< Response received interrupt                  */
    using TXERR   = regbits< type,  7,  1 >;  /**< Transaction error                            */
    using BBERR   = regbits< type,  8,  1 >;  /**< Babble error                                 */
    using FRMOR   = regbits< type,  9,  1 >;  /**< Frame overrun                                */
    using DTERR   = regbits< type, 10,  1 >;  /**< Data toggle error                            */
  };

  /**
   * OTG_HS host channel-11 interrupt mask register
   */
  struct OTG_HS_HCINTMSK0
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-1 interrupt mask register
   */
  struct OTG_HS_HCINTMSK1
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-2 interrupt mask register
   */
  struct OTG_HS_HCINTMSK2
  : public reg< uint32_t, base_addr + 0x14c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14c, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-3 interrupt mask register
   */
  struct OTG_HS_HCINTMSK3
  : public reg< uint32_t, base_addr + 0x16c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x16c, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-4 interrupt mask register
   */
  struct OTG_HS_HCINTMSK4
  : public reg< uint32_t, base_addr + 0x18c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18c, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-5 interrupt mask register
   */
  struct OTG_HS_HCINTMSK5
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-6 interrupt mask register
   */
  struct OTG_HS_HCINTMSK6
  : public reg< uint32_t, base_addr + 0x1cc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1cc, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-7 interrupt mask register
   */
  struct OTG_HS_HCINTMSK7
  : public reg< uint32_t, base_addr + 0x1ec, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1ec, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-8 interrupt mask register
   */
  struct OTG_HS_HCINTMSK8
  : public reg< uint32_t, base_addr + 0x20c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-9 interrupt mask register
   */
  struct OTG_HS_HCINTMSK9
  : public reg< uint32_t, base_addr + 0x22c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x22c, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-10 interrupt mask register
   */
  struct OTG_HS_HCINTMSK10
  : public reg< uint32_t, base_addr + 0x24c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x24c, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-11 interrupt mask register
   */
  struct OTG_HS_HCINTMSK11
  : public reg< uint32_t, base_addr + 0x26c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x26c, rw, 0x0 >;

    using XFRCM   = regbits< type,  0,  1 >;  /**< Transfer completed mask                           */
    using CHHM    = regbits< type,  1,  1 >;  /**< Channel halted mask                               */
    using AHBERR  = regbits< type,  2,  1 >;  /**< AHB error                                         */
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
   * OTG_HS host channel-11 transfer size register
   */
  struct OTG_HS_HCTSIZ0
  : public reg< uint32_t, base_addr + 0x110, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-1 transfer size register
   */
  struct OTG_HS_HCTSIZ1
  : public reg< uint32_t, base_addr + 0x130, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-2 transfer size register
   */
  struct OTG_HS_HCTSIZ2
  : public reg< uint32_t, base_addr + 0x150, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x150, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-3 transfer size register
   */
  struct OTG_HS_HCTSIZ3
  : public reg< uint32_t, base_addr + 0x170, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x170, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-4 transfer size register
   */
  struct OTG_HS_HCTSIZ4
  : public reg< uint32_t, base_addr + 0x190, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-5 transfer size register
   */
  struct OTG_HS_HCTSIZ5
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-6 transfer size register
   */
  struct OTG_HS_HCTSIZ6
  : public reg< uint32_t, base_addr + 0x1d0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1d0, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-7 transfer size register
   */
  struct OTG_HS_HCTSIZ7
  : public reg< uint32_t, base_addr + 0x1f0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1f0, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-8 transfer size register
   */
  struct OTG_HS_HCTSIZ8
  : public reg< uint32_t, base_addr + 0x210, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x210, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-9 transfer size register
   */
  struct OTG_HS_HCTSIZ9
  : public reg< uint32_t, base_addr + 0x230, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x230, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-10 transfer size register
   */
  struct OTG_HS_HCTSIZ10
  : public reg< uint32_t, base_addr + 0x250, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x250, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-11 transfer size register
   */
  struct OTG_HS_HCTSIZ11
  : public reg< uint32_t, base_addr + 0x270, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x270, rw, 0x0 >;

    using XFRSIZ  = regbits< type,  0, 19 >;  /**< Transfer size  */
    using PKTCNT  = regbits< type, 19, 10 >;  /**< Packet count   */
    using DPID    = regbits< type, 29,  2 >;  /**< Data PID       */
  };

  /**
   * OTG_HS host channel-0 DMA address register
   */
  struct OTG_HS_HCDMA0
  : public reg< uint32_t, base_addr + 0x114, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-1 DMA address register
   */
  struct OTG_HS_HCDMA1
  : public reg< uint32_t, base_addr + 0x134, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-2 DMA address register
   */
  struct OTG_HS_HCDMA2
  : public reg< uint32_t, base_addr + 0x154, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-3 DMA address register
   */
  struct OTG_HS_HCDMA3
  : public reg< uint32_t, base_addr + 0x174, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x174, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-4 DMA address register
   */
  struct OTG_HS_HCDMA4
  : public reg< uint32_t, base_addr + 0x194, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x194, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-5 DMA address register
   */
  struct OTG_HS_HCDMA5
  : public reg< uint32_t, base_addr + 0x1b4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b4, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-6 DMA address register
   */
  struct OTG_HS_HCDMA6
  : public reg< uint32_t, base_addr + 0x1d4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1d4, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-7 DMA address register
   */
  struct OTG_HS_HCDMA7
  : public reg< uint32_t, base_addr + 0x1f4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1f4, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-8 DMA address register
   */
  struct OTG_HS_HCDMA8
  : public reg< uint32_t, base_addr + 0x214, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x214, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-9 DMA address register
   */
  struct OTG_HS_HCDMA9
  : public reg< uint32_t, base_addr + 0x234, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x234, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-10 DMA address register
   */
  struct OTG_HS_HCDMA10
  : public reg< uint32_t, base_addr + 0x254, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x254, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };

  /**
   * OTG_HS host channel-11 DMA address register
   */
  struct OTG_HS_HCDMA11
  : public reg< uint32_t, base_addr + 0x274, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x274, rw, 0x0 >;

    using DMAADDR  = regbits< type,  0, 32 >;  /**< DMA address  */
  };
};
} // namespace mptl

#endif // ARCH_REG_OTG_HS_HOST_HPP_INCLUDED
