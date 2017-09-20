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
//  Import from CMSIS-SVD: "STMicro/STM32F37x.svd"
//
//  name: STM32F37x
//  version: 1.3
//  description: STM32F37x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CEC_HPP_INCLUDED
#define ARCH_REG_CEC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * HDMI-CEC controller
 */
struct CEC
{
  static constexpr reg_addr_t base_addr = 0x40007800;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using TXEOM  = regbits< type,  2,  1 >;  /**< Tx End Of Message    */
    using TXSOM  = regbits< type,  1,  1 >;  /**< Tx start of message  */
    using CECEN  = regbits< type,  0,  1 >;  /**< CEC Enable           */
  };

  /**
   * configuration register
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using LBPEGEN  = regbits< type, 11,  1 >;  /**< Generate Error-Bit on Long Bit Period Error  */
    using BREGEN   = regbits< type, 10,  1 >;  /**< Generate error-bit on bit rising error       */
    using BRESTP   = regbits< type,  9,  1 >;  /**< Rx-stop on bit rising error                  */
    using RXTOL    = regbits< type,  8,  1 >;  /**< Rx-Tolerance                                 */
    using SFT      = regbits< type,  5,  3 >;  /**< Signal Free Time                             */
    using LSTN     = regbits< type,  4,  1 >;  /**< Listen mode                                  */
    using OAR      = regbits< type,  0,  4 >;  /**< Own Address                                  */
  };

  /**
   * Tx data register
   */
  struct TXDR
  : public reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >;

    using TXD  = regbits< type,  0,  8 >;  /**< Tx Data register  */
  };

  /**
   * Rx Data Register
   */
  struct RXDR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: RXDR
    using RXDR_ = regbits< type,  0,  8 >;  /**< CEC Rx Data Register  */
  };

  /**
   * Interrupt and Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using TXACKE  = regbits< type, 12,  1 >;  /**< Tx-Missing acknowledge error  */
    using TXERR   = regbits< type, 11,  1 >;  /**< Tx-Error                      */
    using TXUDR   = regbits< type, 10,  1 >;  /**< Tx-Buffer Underrun            */
    using TXEND   = regbits< type,  9,  1 >;  /**< End of Transmission           */
    using TXBR    = regbits< type,  8,  1 >;  /**< Tx-Byte Request               */
    using ARBLST  = regbits< type,  7,  1 >;  /**< Arbitration Lost              */
    using RXACKE  = regbits< type,  6,  1 >;  /**< Rx-Missing Acknowledge        */
    using LBPE    = regbits< type,  5,  1 >;  /**< Rx-Long Bit Period Error      */
    using SBPE    = regbits< type,  4,  1 >;  /**< Rx-Short Bit period error     */
    using BRE     = regbits< type,  3,  1 >;  /**< Rx-Bit rising error           */
    using RXOVR   = regbits< type,  2,  1 >;  /**< Rx-Overrun                    */
    using RXEND   = regbits< type,  1,  1 >;  /**< End Of Reception              */
    using RXBR    = regbits< type,  0,  1 >;  /**< Rx-Byte Received              */
  };

  /**
   * interrupt enable register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using TXACKIE   = regbits< type, 12,  1 >;  /**< Tx-Missing Acknowledge Error Interrupt Enable  */
    using TXERRIE   = regbits< type, 11,  1 >;  /**< Tx-Error Interrupt Enable                      */
    using TXUDRIE   = regbits< type, 10,  1 >;  /**< Tx-Underrun interrupt enable                   */
    using TXENDIE   = regbits< type,  9,  1 >;  /**< Tx-End of message interrupt enable             */
    using TXBRIE    = regbits< type,  8,  1 >;  /**< Tx-Byte Request Interrupt Enable               */
    using ARBLSTIE  = regbits< type,  7,  1 >;  /**< Arbitration Lost Interrupt Enable              */
    using RXACKIE   = regbits< type,  6,  1 >;  /**< Rx-Missing Acknowledge Error Interrupt Enable  */
    using LBPEIE    = regbits< type,  5,  1 >;  /**< Long Bit Period Error Interrupt Enable         */
    using SBPEIE    = regbits< type,  4,  1 >;  /**< Short Bit Period Error Interrupt Enable        */
    using BREIE     = regbits< type,  3,  1 >;  /**< Bit Rising Error Interrupt Enable              */
    using RXOVRIE   = regbits< type,  2,  1 >;  /**< Rx-Buffer Overrun Interrupt Enable             */
    using RXENDIE   = regbits< type,  1,  1 >;  /**< End Of Reception Interrupt Enable              */
    using RXBRIE    = regbits< type,  0,  1 >;  /**< Rx-Byte Received Interrupt Enable              */
  };
};
} // namespace mptl

#endif // ARCH_REG_CEC_HPP_INCLUDED
