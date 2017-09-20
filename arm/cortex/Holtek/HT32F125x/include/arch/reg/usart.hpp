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
//  Import from CMSIS-SVD: "Holtek/ht32f125x.svd"
//
//  name: HT32F125x
//  version: 1.0
//  description: This is the description for the Holtek HT32F125x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USART_HPP_INCLUDED
#define ARCH_REG_USART_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USART
 */
struct USART
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * USART_RBR
   */
  struct USART_RBR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RD        = regbits< type,  0,  9 >;  /**< RD         */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * USART_TBR
   */
  struct USART_TBR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TD        = regbits< type,  0,  9 >;  /**< TD         */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * USART_IER
   */
  struct USART_IER
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RFTLI_RTOIE  = regbits< type,  0,  1 >;  /**< RFTLI_RTOIE  */
    using TFTLIE       = regbits< type,  1,  1 >;  /**< TFTLIE       */
    using RLSIE        = regbits< type,  2,  1 >;  /**< RLSIE        */
    using MODSIE       = regbits< type,  3,  1 >;  /**< MODSIE       */
    using RESERVED     = regbits< type,  4, 28 >;  /**< Reserved.    */
  };

  /**
   * USART_IIR
   */
  struct USART_IIR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NIP       = regbits< type,  0,  1 >;  /**< NIP        */
    using IID       = regbits< type,  1,  3 >;  /**< IID        */
    using RESERVED  = regbits< type,  4, 28 >;  /**< Reserved.  */
  };

  /**
   * USART_FCR
   */
  struct USART_FCR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FME       = regbits< type,  0,  1 >;  /**< FME        */
    using RFR       = regbits< type,  1,  1 >;  /**< RFR        */
    using TFR       = regbits< type,  2,  1 >;  /**< TFR        */
    using TFTL      = regbits< type,  4,  2 >;  /**< TFTL       */
    using RFTL      = regbits< type,  6,  2 >;  /**< RFTL       */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USART_LCR
   */
  struct USART_LCR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WLS       = regbits< type,  0,  2 >;  /**< WLS        */
    using NSB       = regbits< type,  2,  1 >;  /**< NSB        */
    using PBE       = regbits< type,  3,  1 >;  /**< PBE        */
    using EPE       = regbits< type,  4,  1 >;  /**< EPE        */
    using SPE       = regbits< type,  5,  1 >;  /**< SPE        */
    using BCB       = regbits< type,  6,  1 >;  /**< BCB        */
    using RESERVED  = regbits< type,  7, 25 >;  /**< Reserved.  */
  };

  /**
   * USART_MODCR
   */
  struct USART_MODCR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTR       = regbits< type,  0,  1 >;  /**< DTR        */
    using RTS       = regbits< type,  1,  1 >;  /**< RTS        */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * USART_LSR
   */
  struct USART_LSR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RFDR      = regbits< type,  0,  1 >;  /**< RFDR       */
    using OEI       = regbits< type,  1,  1 >;  /**< OEI        */
    using PEI       = regbits< type,  2,  1 >;  /**< PEI        */
    using FEI       = regbits< type,  3,  1 >;  /**< FEI        */
    using BII       = regbits< type,  4,  1 >;  /**< BII        */
    using TXFEMPT   = regbits< type,  5,  1 >;  /**< TXFEMPT    */
    using TXEMPT    = regbits< type,  6,  1 >;  /**< TXEMPT     */
    using ERRRX     = regbits< type,  7,  1 >;  /**< ERRRX      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USART_MODSR
   */
  struct USART_MODSR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DCTS      = regbits< type,  0,  1 >;  /**< DCTS       */
    using DDSR      = regbits< type,  1,  1 >;  /**< DDSR       */
    using DRI       = regbits< type,  2,  1 >;  /**< DRI        */
    using DDCD      = regbits< type,  3,  1 >;  /**< DDCD       */
    using CTSS      = regbits< type,  4,  1 >;  /**< CTSS       */
    using DSRS      = regbits< type,  5,  1 >;  /**< DSRS       */
    using RIS       = regbits< type,  6,  1 >;  /**< RIS        */
    using DCDS      = regbits< type,  7,  1 >;  /**< DCDS       */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * USART_TPR
   */
  struct USART_TPR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RTOIC     = regbits< type,  0,  7 >;  /**< RTOIC      */
    using RTOIE     = regbits< type,  7,  1 >;  /**< RTOIE      */
    using TG        = regbits< type,  8,  8 >;  /**< TG         */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * USART_MDR
   */
  struct USART_MDR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MODE      = regbits< type,  0,  2 >;  /**< MODE       */
    using TRSM      = regbits< type,  2,  1 >;  /**< TRSM       */
    using RESERVED  = regbits< type,  3, 29 >;  /**< Reserved.  */
  };

  /**
   * USART_IrDACR
   */
  struct USART_IrDACR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IrDAEN    = regbits< type,  0,  1 >;  /**< IrDAEN     */
    using IrDALP    = regbits< type,  1,  1 >;  /**< IrDALP     */
    using TXSEL     = regbits< type,  2,  1 >;  /**< TXSEL      */
    using LB        = regbits< type,  3,  1 >;  /**< LB         */
    using IrDAPSC   = regbits< type,  8,  8 >;  /**< IrDAPSC    */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * USART_RS485CR
   */
  struct USART_RS485CR
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXENP     = regbits< type,  0,  1 >;  /**< TXENP      */
    using RESERVED  = regbits< type,  1, 31 >;  /**< Reserved.  */
  };

  /**
   * USART_SYNCR
   */
  struct USART_SYNCR
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CLKEN     = regbits< type,  0,  1 >;  /**< CLKEN      */
    using CPS       = regbits< type,  2,  1 >;  /**< CPS        */
    using CPO       = regbits< type,  3,  1 >;  /**< CPO        */
    using RESERVED  = regbits< type,  4, 28 >;  /**< Reserved.  */
  };

  /**
   * USART_DEGTSTR
   */
  struct USART_DEGTSTR
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LBM       = regbits< type,  0,  2 >;  /**< LBM        */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * USART_DLR
   */
  struct USART_DLR
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BRD       = regbits< type,  0, 16 >;  /**< BRD        */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USART_HPP_INCLUDED
