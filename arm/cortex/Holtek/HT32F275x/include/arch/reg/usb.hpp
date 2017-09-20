/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Holtek/ht32f275x.svd"
//
//  name: HT32F275x
//  version: 1.0
//  description: This is the description for the Holtek HT32F275x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USB_HPP_INCLUDED
#define ARCH_REG_USB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB
 */
struct USB
{
  static constexpr reg_addr_t base_addr = 0x4004e000;

  /**
   * USB_CSR
   */
  struct USB_CSR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FRES      = regbits< type,  1,  1 >;  /**< FRES       */
    using PDWN      = regbits< type,  2,  1 >;  /**< PDWN       */
    using LPMODE    = regbits< type,  3,  1 >;  /**< LPMODE     */
    using GENRSM    = regbits< type,  5,  1 >;  /**< GENRSM     */
    using RXDP      = regbits< type,  6,  1 >;  /**< RXDP       */
    using RXDM      = regbits< type,  7,  1 >;  /**< RXDM       */
    using ADRSET    = regbits< type,  8,  1 >;  /**< ADRSET     */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * USB_IER
   */
  struct USB_IER
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UGIE      = regbits< type,  0,  1 >;  /**< UGIE       */
    using SOFIE     = regbits< type,  1,  1 >;  /**< SOFIE      */
    using URSTIE    = regbits< type,  2,  1 >;  /**< URSTIE     */
    using RSMIE     = regbits< type,  3,  1 >;  /**< RSMIE      */
    using SUSPIE    = regbits< type,  4,  1 >;  /**< SUSPIE     */
    using ESOFIE    = regbits< type,  5,  1 >;  /**< ESOFIE     */
    using EP0IE     = regbits< type,  8,  1 >;  /**< EP0IE      */
    using EP1IE     = regbits< type,  9,  1 >;  /**< EP1IE      */
    using EP2IE     = regbits< type, 10,  1 >;  /**< EP2IE      */
    using EP3IE     = regbits< type, 11,  1 >;  /**< EP3IE      */
    using EP4IE     = regbits< type, 12,  1 >;  /**< EP4IE      */
    using EP5IE     = regbits< type, 13,  1 >;  /**< EP5IE      */
    using EP6IE     = regbits< type, 14,  1 >;  /**< EP6IE      */
    using EP7IE     = regbits< type, 15,  1 >;  /**< EP7IE      */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * USB_ISR
   */
  struct USB_ISR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SOFIF     = regbits< type,  1,  1 >;  /**< SOFIF      */
    using URSTIF    = regbits< type,  2,  1 >;  /**< URSTIF     */
    using RSMIF     = regbits< type,  3,  1 >;  /**< RSMIF      */
    using SUSPIF    = regbits< type,  4,  1 >;  /**< SUSPIF     */
    using ESOFIF    = regbits< type,  5,  1 >;  /**< ESOFIF     */
    using EP0IF     = regbits< type,  8,  1 >;  /**< EP0IF      */
    using EP1IF     = regbits< type,  9,  1 >;  /**< EP1IF      */
    using EP2IF     = regbits< type, 10,  1 >;  /**< EP2IF      */
    using EP3IF     = regbits< type, 11,  1 >;  /**< EP3IF      */
    using EP4IF     = regbits< type, 12,  1 >;  /**< EP4IF      */
    using EP5IF     = regbits< type, 13,  1 >;  /**< EP5IF      */
    using EP6IF     = regbits< type, 14,  1 >;  /**< EP6IF      */
    using EP7IF     = regbits< type, 15,  1 >;  /**< EP7IF      */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * USB_FCR
   */
  struct USB_FCR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FRNUM     = regbits< type,  0, 11 >;  /**< FRNUM      */
    using SOFLCK    = regbits< type, 16,  1 >;  /**< SOFLCK     */
    using LSOF      = regbits< type, 17,  2 >;  /**< LSOF       */
    using RESERVED  = regbits< type, 19, 13 >;  /**< Reserved.  */
  };

  /**
   * USB_DEVAR
   */
  struct USB_DEVAR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DEVA      = regbits< type,  0,  7 >;  /**< DEVA       */
    using RESERVED  = regbits< type,  7, 25 >;  /**< Reserved.  */
  };

  /**
   * USB_EP0CSR
   */
  struct USB_EP0CSR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTGTX     = regbits< type,  0,  1 >;  /**< DTGTX      */
    using NAKTX     = regbits< type,  1,  1 >;  /**< NAKTX      */
    using STLTX     = regbits< type,  2,  1 >;  /**< STLTX      */
    using DTGRX     = regbits< type,  3,  1 >;  /**< DTGRX      */
    using NAKRX     = regbits< type,  4,  1 >;  /**< NAKRX      */
    using STLRX     = regbits< type,  5,  1 >;  /**< STLRX      */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * USB_EP0IER
   */
  struct USB_EP0IER
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIE    = regbits< type,  0,  1 >;  /**< OTRXIE     */
    using ODRXIE    = regbits< type,  1,  1 >;  /**< ODRXIE     */
    using ODOVIE    = regbits< type,  2,  1 >;  /**< ODOVIE     */
    using ITRXIE    = regbits< type,  3,  1 >;  /**< ITRXIE     */
    using IDTXIE    = regbits< type,  4,  1 >;  /**< IDTXIE     */
    using NAKIE     = regbits< type,  5,  1 >;  /**< NAKIE      */
    using STLIE     = regbits< type,  6,  1 >;  /**< STLIE      */
    using UERIE     = regbits< type,  7,  1 >;  /**< UERIE      */
    using STRXIE    = regbits< type,  8,  1 >;  /**< STRXIE     */
    using SDRXIE    = regbits< type,  9,  1 >;  /**< SDRXIE     */
    using SDERIE    = regbits< type, 10,  1 >;  /**< SDERIE     */
    using ZLRXIE    = regbits< type, 11,  1 >;  /**< ZLRXIE     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * USB_EP0ISR
   */
  struct USB_EP0ISR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIF    = regbits< type,  0,  1 >;  /**< OTRXIF     */
    using ODRXIF    = regbits< type,  1,  1 >;  /**< ODRXIF     */
    using ODOVIF    = regbits< type,  2,  1 >;  /**< ODOVIF     */
    using ITRXIF    = regbits< type,  3,  1 >;  /**< ITRXIF     */
    using IDTXIF    = regbits< type,  4,  1 >;  /**< IDTXIF     */
    using NAKIF     = regbits< type,  5,  1 >;  /**< NAKIF      */
    using STLIF     = regbits< type,  6,  1 >;  /**< STLIF      */
    using UERIF     = regbits< type,  7,  1 >;  /**< UERIF      */
    using STRXIF    = regbits< type,  8,  1 >;  /**< STRXIF     */
    using SDRXIF    = regbits< type,  9,  1 >;  /**< SDRXIF     */
    using SDERIF    = regbits< type, 10,  1 >;  /**< SDERIF     */
    using ZLRXIF    = regbits< type, 11,  1 >;  /**< ZLRXIF     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * USB_EP0TCR
   */
  struct USB_EP0TCR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXCNT     = regbits< type,  0,  7 >;  /**< TXCNT      */
    using RXCNT     = regbits< type, 16,  7 >;  /**< RXCNT      */
    using RESERVED  = regbits< type, 23,  9 >;  /**< Reserved.  */
  };

  /**
   * USB_EP0CFGR
   */
  struct USB_EP0CFGR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EPBUFA  = regbits< type,  0, 10 >;  /**< EPBUFA  */
    using EPLEN   = regbits< type, 10,  7 >;  /**< EPLEN   */
    using EPADR   = regbits< type, 24,  4 >;  /**< EPADR   */
    using EPEN    = regbits< type, 31,  1 >;  /**< EPEN    */
  };

  /**
   * USB_EP1CSR
   */
  struct USB_EP1CSR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTGTX     = regbits< type,  0,  1 >;  /**< DTGTX      */
    using NAKTX     = regbits< type,  1,  1 >;  /**< NAKTX      */
    using STLTX     = regbits< type,  2,  1 >;  /**< STLTX      */
    using DTGRX     = regbits< type,  3,  1 >;  /**< DTGRX      */
    using NAKRX     = regbits< type,  4,  1 >;  /**< NAKRX      */
    using STLRX     = regbits< type,  5,  1 >;  /**< STLRX      */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * USB_EP1IER
   */
  struct USB_EP1IER
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIE    = regbits< type,  0,  1 >;  /**< OTRXIE     */
    using ODRXIE    = regbits< type,  1,  1 >;  /**< ODRXIE     */
    using ODOVIE    = regbits< type,  2,  1 >;  /**< ODOVIE     */
    using ITRXIE    = regbits< type,  3,  1 >;  /**< ITRXIE     */
    using IDTXIE    = regbits< type,  4,  1 >;  /**< IDTXIE     */
    using NAKIE     = regbits< type,  5,  1 >;  /**< NAKIE      */
    using STLIE     = regbits< type,  6,  1 >;  /**< STLIE      */
    using UERIE     = regbits< type,  7,  1 >;  /**< UERIE      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP1ISR
   */
  struct USB_EP1ISR
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIF    = regbits< type,  0,  1 >;  /**< OTRXIF     */
    using ODRXIF    = regbits< type,  1,  1 >;  /**< ODRXIF     */
    using ODOVIF    = regbits< type,  2,  1 >;  /**< ODOVIF     */
    using ITRXIF    = regbits< type,  3,  1 >;  /**< ITRXIF     */
    using IDTXIF    = regbits< type,  4,  1 >;  /**< IDTXIF     */
    using NAKIF     = regbits< type,  5,  1 >;  /**< NAKIF      */
    using STLIF     = regbits< type,  6,  1 >;  /**< STLIF      */
    using UERIF     = regbits< type,  7,  1 >;  /**< UERIF      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP1TCR
   */
  struct USB_EP1TCR
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TCNT      = regbits< type,  0,  9 >;  /**< TCNT       */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * USB_EP1CFGR
   */
  struct USB_EP1CFGR
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EPBUFA  = regbits< type,  0, 10 >;  /**< EPBUFA  */
    using EPLEN   = regbits< type, 10,  7 >;  /**< EPLEN   */
    using EPADR   = regbits< type, 24,  4 >;  /**< EPADR   */
    using EPDIR   = regbits< type, 28,  1 >;  /**< EPDIR   */
    using EPTYPE  = regbits< type, 29,  1 >;  /**< EPTYPE  */
    using EPEN    = regbits< type, 31,  1 >;  /**< EPEN    */
  };

  /**
   * USB_EP2CSR
   */
  struct USB_EP2CSR
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTGTX     = regbits< type,  0,  1 >;  /**< DTGTX      */
    using NAKTX     = regbits< type,  1,  1 >;  /**< NAKTX      */
    using STLTX     = regbits< type,  2,  1 >;  /**< STLTX      */
    using DTGRX     = regbits< type,  3,  1 >;  /**< DTGRX      */
    using NAKRX     = regbits< type,  4,  1 >;  /**< NAKRX      */
    using STLRX     = regbits< type,  5,  1 >;  /**< STLRX      */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * USB_EP2IER
   */
  struct USB_EP2IER
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIE    = regbits< type,  0,  1 >;  /**< OTRXIE     */
    using ODRXIE    = regbits< type,  1,  1 >;  /**< ODRXIE     */
    using ODOVIE    = regbits< type,  2,  1 >;  /**< ODOVIE     */
    using ITRXIE    = regbits< type,  3,  1 >;  /**< ITRXIE     */
    using IDTXIE    = regbits< type,  4,  1 >;  /**< IDTXIE     */
    using NAKIE     = regbits< type,  5,  1 >;  /**< NAKIE      */
    using STLIE     = regbits< type,  6,  1 >;  /**< STLIE      */
    using UERIE     = regbits< type,  7,  1 >;  /**< UERIE      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP2ISR
   */
  struct USB_EP2ISR
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIF    = regbits< type,  0,  1 >;  /**< OTRXIF     */
    using ODRXIF    = regbits< type,  1,  1 >;  /**< ODRXIF     */
    using ODOVIF    = regbits< type,  2,  1 >;  /**< ODOVIF     */
    using ITRXIF    = regbits< type,  3,  1 >;  /**< ITRXIF     */
    using IDTXIF    = regbits< type,  4,  1 >;  /**< IDTXIF     */
    using NAKIF     = regbits< type,  5,  1 >;  /**< NAKIF      */
    using STLIF     = regbits< type,  6,  1 >;  /**< STLIF      */
    using UERIF     = regbits< type,  7,  1 >;  /**< UERIF      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP2TCR
   */
  struct USB_EP2TCR
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TCNT      = regbits< type,  0,  9 >;  /**< TCNT       */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * USB_EP2CFGR
   */
  struct USB_EP2CFGR
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EPBUFA  = regbits< type,  0, 10 >;  /**< EPBUFA  */
    using EPLEN   = regbits< type, 10,  7 >;  /**< EPLEN   */
    using EPADR   = regbits< type, 24,  4 >;  /**< EPADR   */
    using EPDIR   = regbits< type, 28,  1 >;  /**< EPDIR   */
    using EPTYPE  = regbits< type, 29,  1 >;  /**< EPTYPE  */
    using EPEN    = regbits< type, 31,  1 >;  /**< EPEN    */
  };

  /**
   * USB_EP3CSR
   */
  struct USB_EP3CSR
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTGTX     = regbits< type,  0,  1 >;  /**< DTGTX      */
    using NAKTX     = regbits< type,  1,  1 >;  /**< NAKTX      */
    using STLTX     = regbits< type,  2,  1 >;  /**< STLTX      */
    using DTGRX     = regbits< type,  3,  1 >;  /**< DTGRX      */
    using NAKRX     = regbits< type,  4,  1 >;  /**< NAKRX      */
    using STLRX     = regbits< type,  5,  1 >;  /**< STLRX      */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * USB_EP3IER
   */
  struct USB_EP3IER
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIE    = regbits< type,  0,  1 >;  /**< OTRXIE     */
    using ODRXIE    = regbits< type,  1,  1 >;  /**< ODRXIE     */
    using ODOVIE    = regbits< type,  2,  1 >;  /**< ODOVIE     */
    using ITRXIE    = regbits< type,  3,  1 >;  /**< ITRXIE     */
    using IDTXIE    = regbits< type,  4,  1 >;  /**< IDTXIE     */
    using NAKIE     = regbits< type,  5,  1 >;  /**< NAKIE      */
    using STLIE     = regbits< type,  6,  1 >;  /**< STLIE      */
    using UERIE     = regbits< type,  7,  1 >;  /**< UERIE      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP3ISR
   */
  struct USB_EP3ISR
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIF    = regbits< type,  0,  1 >;  /**< OTRXIF     */
    using ODRXIF    = regbits< type,  1,  1 >;  /**< ODRXIF     */
    using ODOVIF    = regbits< type,  2,  1 >;  /**< ODOVIF     */
    using ITRXIF    = regbits< type,  3,  1 >;  /**< ITRXIF     */
    using IDTXIF    = regbits< type,  4,  1 >;  /**< IDTXIF     */
    using NAKIF     = regbits< type,  5,  1 >;  /**< NAKIF      */
    using STLIF     = regbits< type,  6,  1 >;  /**< STLIF      */
    using UERIF     = regbits< type,  7,  1 >;  /**< UERIF      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP3TCR
   */
  struct USB_EP3TCR
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TCNT      = regbits< type,  0,  9 >;  /**< TCNT       */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * USB_EP3CFGR
   */
  struct USB_EP3CFGR
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EPBUFA  = regbits< type,  0, 10 >;  /**< EPBUFA  */
    using EPLEN   = regbits< type, 10,  7 >;  /**< EPLEN   */
    using EPADR   = regbits< type, 24,  4 >;  /**< EPADR   */
    using EPDIR   = regbits< type, 28,  1 >;  /**< EPDIR   */
    using EPTYPE  = regbits< type, 29,  1 >;  /**< EPTYPE  */
    using EPEN    = regbits< type, 31,  1 >;  /**< EPEN    */
  };

  /**
   * USB_EP4CSR
   */
  struct USB_EP4CSR
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTGTX     = regbits< type,  0,  1 >;  /**< DTGTX      */
    using NAKTX     = regbits< type,  1,  1 >;  /**< NAKTX      */
    using STLTX     = regbits< type,  2,  1 >;  /**< STLTX      */
    using DTGRX     = regbits< type,  3,  1 >;  /**< DTGRX      */
    using NAKRX     = regbits< type,  4,  1 >;  /**< NAKRX      */
    using STLRX     = regbits< type,  5,  1 >;  /**< STLRX      */
    using MDBTG     = regbits< type,  6,  1 >;  /**< MDBTG      */
    using UDBTG     = regbits< type,  7,  1 >;  /**< UDBTG      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP4IER
   */
  struct USB_EP4IER
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIE    = regbits< type,  0,  1 >;  /**< OTRXIE     */
    using ODRXIE    = regbits< type,  1,  1 >;  /**< ODRXIE     */
    using ODOVIE    = regbits< type,  2,  1 >;  /**< ODOVIE     */
    using ITRXIE    = regbits< type,  3,  1 >;  /**< ITRXIE     */
    using IDTXIE    = regbits< type,  4,  1 >;  /**< IDTXIE     */
    using NAKIE     = regbits< type,  5,  1 >;  /**< NAKIE      */
    using STLIE     = regbits< type,  6,  1 >;  /**< STLIE      */
    using UERIE     = regbits< type,  7,  1 >;  /**< UERIE      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP4ISR
   */
  struct USB_EP4ISR
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIF    = regbits< type,  0,  1 >;  /**< OTRXIF     */
    using ODRXIF    = regbits< type,  1,  1 >;  /**< ODRXIF     */
    using ODOVIF    = regbits< type,  2,  1 >;  /**< ODOVIF     */
    using ITRXIF    = regbits< type,  3,  1 >;  /**< ITRXIF     */
    using IDTXIF    = regbits< type,  4,  1 >;  /**< IDTXIF     */
    using NAKIF     = regbits< type,  5,  1 >;  /**< NAKIF      */
    using STLIF     = regbits< type,  6,  1 >;  /**< STLIF      */
    using UERIF     = regbits< type,  7,  1 >;  /**< UERIF      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP4TCR
   */
  struct USB_EP4TCR
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TCNT0     = regbits< type,  0, 10 >;  /**< TCNT0      */
    using TCNT1     = regbits< type, 16, 10 >;  /**< TCNT1      */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved.  */
  };

  /**
   * USB_EP4CFGR
   */
  struct USB_EP4CFGR
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EPBUFA  = regbits< type,  0, 10 >;  /**< EPBUFA  */
    using EPLEN   = regbits< type, 10, 10 >;  /**< EPLEN   */
    using SDBS    = regbits< type, 23,  1 >;  /**< SDBS    */
    using EPADR   = regbits< type, 24,  4 >;  /**< EPADR   */
    using EPDIR   = regbits< type, 28,  1 >;  /**< EPDIR   */
    using EPTYPE  = regbits< type, 29,  1 >;  /**< EPTYPE  */
    using EPEN    = regbits< type, 31,  1 >;  /**< EPEN    */
  };

  /**
   * USB_EP5CSR
   */
  struct USB_EP5CSR
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTGTX     = regbits< type,  0,  1 >;  /**< DTGTX      */
    using NAKTX     = regbits< type,  1,  1 >;  /**< NAKTX      */
    using STLTX     = regbits< type,  2,  1 >;  /**< STLTX      */
    using DTGRX     = regbits< type,  3,  1 >;  /**< DTGRX      */
    using NAKRX     = regbits< type,  4,  1 >;  /**< NAKRX      */
    using STLRX     = regbits< type,  5,  1 >;  /**< STLRX      */
    using MDBTG     = regbits< type,  6,  1 >;  /**< MDBTG      */
    using UDBTG     = regbits< type,  7,  1 >;  /**< UDBTG      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP5IER
   */
  struct USB_EP5IER
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIE    = regbits< type,  0,  1 >;  /**< OTRXIE     */
    using ODRXIE    = regbits< type,  1,  1 >;  /**< ODRXIE     */
    using ODOVIE    = regbits< type,  2,  1 >;  /**< ODOVIE     */
    using ITRXIE    = regbits< type,  3,  1 >;  /**< ITRXIE     */
    using IDTXIE    = regbits< type,  4,  1 >;  /**< IDTXIE     */
    using NAKIE     = regbits< type,  5,  1 >;  /**< NAKIE      */
    using STLIE     = regbits< type,  6,  1 >;  /**< STLIE      */
    using UERIE     = regbits< type,  7,  1 >;  /**< UERIE      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP5ISR
   */
  struct USB_EP5ISR
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIF    = regbits< type,  0,  1 >;  /**< OTRXIF     */
    using ODRXIF    = regbits< type,  1,  1 >;  /**< ODRXIF     */
    using ODOVIF    = regbits< type,  2,  1 >;  /**< ODOVIF     */
    using ITRXIF    = regbits< type,  3,  1 >;  /**< ITRXIF     */
    using IDTXIF    = regbits< type,  4,  1 >;  /**< IDTXIF     */
    using NAKIF     = regbits< type,  5,  1 >;  /**< NAKIF      */
    using STLIF     = regbits< type,  6,  1 >;  /**< STLIF      */
    using UERIF     = regbits< type,  7,  1 >;  /**< UERIF      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP5TCR
   */
  struct USB_EP5TCR
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TCNT0     = regbits< type,  0, 10 >;  /**< TCNT0      */
    using TCNT1     = regbits< type, 16, 10 >;  /**< TCNT1      */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved.  */
  };

  /**
   * USB_EP5CFGR
   */
  struct USB_EP5CFGR
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EPBUFA  = regbits< type,  0, 10 >;  /**< EPBUFA  */
    using EPLEN   = regbits< type, 10, 10 >;  /**< EPLEN   */
    using SDBS    = regbits< type, 23,  1 >;  /**< SDBS    */
    using EPADR   = regbits< type, 24,  4 >;  /**< EPADR   */
    using EPDIR   = regbits< type, 28,  1 >;  /**< EPDIR   */
    using EPTYPE  = regbits< type, 29,  1 >;  /**< EPTYPE  */
    using EPEN    = regbits< type, 31,  1 >;  /**< EPEN    */
  };

  /**
   * USB_EP6CSR
   */
  struct USB_EP6CSR
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTGTX     = regbits< type,  0,  1 >;  /**< DTGTX      */
    using NAKTX     = regbits< type,  1,  1 >;  /**< NAKTX      */
    using STLTX     = regbits< type,  2,  1 >;  /**< STLTX      */
    using DTGRX     = regbits< type,  3,  1 >;  /**< DTGRX      */
    using NAKRX     = regbits< type,  4,  1 >;  /**< NAKRX      */
    using STLRX     = regbits< type,  5,  1 >;  /**< STLRX      */
    using MDBTG     = regbits< type,  6,  1 >;  /**< MDBTG      */
    using UDBTG     = regbits< type,  7,  1 >;  /**< UDBTG      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP6IER
   */
  struct USB_EP6IER
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIE    = regbits< type,  0,  1 >;  /**< OTRXIE     */
    using ODRXIE    = regbits< type,  1,  1 >;  /**< ODRXIE     */
    using ODOVIE    = regbits< type,  2,  1 >;  /**< ODOVIE     */
    using ITRXIE    = regbits< type,  3,  1 >;  /**< ITRXIE     */
    using IDTXIE    = regbits< type,  4,  1 >;  /**< IDTXIE     */
    using NAKIE     = regbits< type,  5,  1 >;  /**< NAKIE      */
    using STLIE     = regbits< type,  6,  1 >;  /**< STLIE      */
    using UERIE     = regbits< type,  7,  1 >;  /**< UERIE      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP6ISR
   */
  struct USB_EP6ISR
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIF    = regbits< type,  0,  1 >;  /**< OTRXIF     */
    using ODRXIF    = regbits< type,  1,  1 >;  /**< ODRXIF     */
    using ODOVIF    = regbits< type,  2,  1 >;  /**< ODOVIF     */
    using ITRXIF    = regbits< type,  3,  1 >;  /**< ITRXIF     */
    using IDTXIF    = regbits< type,  4,  1 >;  /**< IDTXIF     */
    using NAKIF     = regbits< type,  5,  1 >;  /**< NAKIF      */
    using STLIF     = regbits< type,  6,  1 >;  /**< STLIF      */
    using UERIF     = regbits< type,  7,  1 >;  /**< UERIF      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP6TCR
   */
  struct USB_EP6TCR
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TCNT0     = regbits< type,  0, 10 >;  /**< TCNT0      */
    using TCNT1     = regbits< type, 16, 10 >;  /**< TCNT1      */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved.  */
  };

  /**
   * USB_EP6CFGR
   */
  struct USB_EP6CFGR
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EPBUFA  = regbits< type,  0, 10 >;  /**< EPBUFA  */
    using EPLEN   = regbits< type, 10, 10 >;  /**< EPLEN   */
    using SDBS    = regbits< type, 23,  1 >;  /**< SDBS    */
    using EPADR   = regbits< type, 24,  4 >;  /**< EPADR   */
    using EPDIR   = regbits< type, 28,  1 >;  /**< EPDIR   */
    using EPTYPE  = regbits< type, 29,  1 >;  /**< EPTYPE  */
    using EPEN    = regbits< type, 31,  1 >;  /**< EPEN    */
  };

  /**
   * USB_EP7CSR
   */
  struct USB_EP7CSR
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTGTX     = regbits< type,  0,  1 >;  /**< DTGTX      */
    using NAKTX     = regbits< type,  1,  1 >;  /**< NAKTX      */
    using STLTX     = regbits< type,  2,  1 >;  /**< STLTX      */
    using DTGRX     = regbits< type,  3,  1 >;  /**< DTGRX      */
    using NAKRX     = regbits< type,  4,  1 >;  /**< NAKRX      */
    using STLRX     = regbits< type,  5,  1 >;  /**< STLRX      */
    using MDBTG     = regbits< type,  6,  1 >;  /**< MDBTG      */
    using UDBTG     = regbits< type,  7,  1 >;  /**< UDBTG      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP7IER
   */
  struct USB_EP7IER
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIE    = regbits< type,  0,  1 >;  /**< OTRXIE     */
    using ODRXIE    = regbits< type,  1,  1 >;  /**< ODRXIE     */
    using ODOVIE    = regbits< type,  2,  1 >;  /**< ODOVIE     */
    using ITRXIE    = regbits< type,  3,  1 >;  /**< ITRXIE     */
    using IDTXIE    = regbits< type,  4,  1 >;  /**< IDTXIE     */
    using NAKIE     = regbits< type,  5,  1 >;  /**< NAKIE      */
    using STLIE     = regbits< type,  6,  1 >;  /**< STLIE      */
    using UERIE     = regbits< type,  7,  1 >;  /**< UERIE      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP7ISR
   */
  struct USB_EP7ISR
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTRXIF    = regbits< type,  0,  1 >;  /**< OTRXIF     */
    using ODRXIF    = regbits< type,  1,  1 >;  /**< ODRXIF     */
    using ODOVIF    = regbits< type,  2,  1 >;  /**< ODOVIF     */
    using ITRXIF    = regbits< type,  3,  1 >;  /**< ITRXIF     */
    using IDTXIF    = regbits< type,  4,  1 >;  /**< IDTXIF     */
    using NAKIF     = regbits< type,  5,  1 >;  /**< NAKIF      */
    using STLIF     = regbits< type,  6,  1 >;  /**< STLIF      */
    using UERIF     = regbits< type,  7,  1 >;  /**< UERIF      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USB_EP7TCR
   */
  struct USB_EP7TCR
  : public reg< uint32_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TCNT0     = regbits< type,  0, 10 >;  /**< TCNT0      */
    using TCNT1     = regbits< type, 16, 10 >;  /**< TCNT1      */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved.  */
  };

  /**
   * USB_EP7CFGR
   */
  struct USB_EP7CFGR
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EPBUFA  = regbits< type,  0, 10 >;  /**< EPBUFA  */
    using EPLEN   = regbits< type, 10, 10 >;  /**< EPLEN   */
    using SDBS    = regbits< type, 23,  1 >;  /**< SDBS    */
    using EPADR   = regbits< type, 24,  4 >;  /**< EPADR   */
    using EPDIR   = regbits< type, 28,  1 >;  /**< EPDIR   */
    using EPTYPE  = regbits< type, 29,  1 >;  /**< EPTYPE  */
    using EPEN    = regbits< type, 31,  1 >;  /**< EPEN    */
  };
};
} // namespace mptl

#endif // ARCH_REG_USB_HPP_INCLUDED
