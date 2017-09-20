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
//  Import from CMSIS-SVD: "Holtek/ht32f175x.svd"
//
//  name: HT32F175x
//  version: 1.0
//  description: This is the description for the Holtek HT32F175x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USART1_HPP_INCLUDED
#define ARCH_REG_USART1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USART1
 */
struct USART1
{
  static constexpr reg_addr_t base_addr = 0x40040000;

  /**
   * USART1_RBR
   */
  struct USART1_RBR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RD        = regbits< type,  0,  9 >;  /**< RD         */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * USART1_TBR
   */
  struct USART1_TBR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TD        = regbits< type,  0,  9 >;  /**< TD         */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * USART1_IER
   */
  struct USART1_IER
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
   * USART1_IIR
   */
  struct USART1_IIR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NIP       = regbits< type,  0,  1 >;  /**< NIP        */
    using IID       = regbits< type,  1,  3 >;  /**< IID        */
    using RESERVED  = regbits< type,  4, 28 >;  /**< Reserved.  */
  };

  /**
   * USART1_FCR
   */
  struct USART1_FCR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FME       = regbits< type,  0,  1 >;  /**< FME        */
    using RFR       = regbits< type,  1,  1 >;  /**< RFR        */
    using TFR       = regbits< type,  2,  1 >;  /**< TFR        */
    using TFTL      = regbits< type,  4,  2 >;  /**< TFTL       */
    using RFTL      = regbits< type,  6,  2 >;  /**< RFTL       */
    using URTXEN    = regbits< type,  8,  1 >;  /**< URTXEN     */
    using URRXEN    = regbits< type,  9,  1 >;  /**< URRXEN     */
    using RESERVED  = regbits< type, 10, 22 >;  /**< Reserved.  */
  };

  /**
   * USART1_LCR
   */
  struct USART1_LCR
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
   * USART1_MODCR
   */
  struct USART1_MODCR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DTR       = regbits< type,  0,  1 >;  /**< DTR        */
    using RTS       = regbits< type,  1,  1 >;  /**< RTS        */
    using HFCEN     = regbits< type,  2,  1 >;  /**< HFCEN      */
    using RESERVED  = regbits< type,  3, 29 >;  /**< Reserved.  */
  };

  /**
   * USART1_LSR
   */
  struct USART1_LSR
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
    using RSADDEF   = regbits< type,  8,  1 >;  /**< RSADDEF    */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * USART1_MODSR
   */
  struct USART1_MODSR
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
   * USART1_TPR
   */
  struct USART1_TPR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RTOIC     = regbits< type,  0,  7 >;  /**< RTOIC      */
    using RTOIE     = regbits< type,  7,  1 >;  /**< RTOIE      */
    using TG        = regbits< type,  8,  8 >;  /**< TG         */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * USART1_MDR
   */
  struct USART1_MDR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MODE      = regbits< type,  0,  2 >;  /**< MODE       */
    using TRSM      = regbits< type,  2,  1 >;  /**< TRSM       */
    using TXDMAEN   = regbits< type,  4,  1 >;  /**< TXDMAEN    */
    using RXDMAEN   = regbits< type,  5,  1 >;  /**< RXDMAEN    */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * USART1_IrDACR
   */
  struct USART1_IrDACR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IrDAEN    = regbits< type,  0,  1 >;  /**< IrDAEN     */
    using IrDALP    = regbits< type,  1,  1 >;  /**< IrDALP     */
    using TXSEL     = regbits< type,  2,  1 >;  /**< TXSEL      */
    using LB        = regbits< type,  3,  1 >;  /**< LB         */
    using TXINV     = regbits< type,  4,  1 >;  /**< TXINV      */
    using RXINV     = regbits< type,  5,  1 >;  /**< RXINV      */
    using IrDAPSC   = regbits< type,  8,  8 >;  /**< IrDAPSC    */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * USART1_RS485CR
   */
  struct USART1_RS485CR
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXENP     = regbits< type,  0,  1 >;  /**< TXENP      */
    using RSNMM     = regbits< type,  1,  1 >;  /**< RSNMM      */
    using RSAAD     = regbits< type,  2,  1 >;  /**< RSAAD      */
    using ADDMATCH  = regbits< type,  8,  8 >;  /**< ADDMATCH   */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * USART1_SYNCR
   */
  struct USART1_SYNCR
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CLKEN     = regbits< type,  0,  1 >;  /**< CLKEN      */
    using CPS       = regbits< type,  2,  1 >;  /**< CPS        */
    using CPO       = regbits< type,  3,  1 >;  /**< CPO        */
    using RESERVED  = regbits< type,  4, 28 >;  /**< Reserved.  */
  };

  /**
   * USART1_FSR
   */
  struct USART1_FSR
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXFS      = regbits< type,  0,  5 >;  /**< TXFS       */
    using RXFS      = regbits< type,  8,  5 >;  /**< RXFS       */
    using RESERVED  = regbits< type, 13, 19 >;  /**< Reserved.  */
  };

  /**
   * USART1_DLR
   */
  struct USART1_DLR
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BRD       = regbits< type,  0, 16 >;  /**< BRD        */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * USART1_DEGTSTR
   */
  struct USART1_DEGTSTR
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LBM       = regbits< type,  0,  2 >;  /**< LBM        */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USART1_HPP_INCLUDED
