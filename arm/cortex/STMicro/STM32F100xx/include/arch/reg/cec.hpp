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
//  Import from CMSIS-SVD: "STMicro/STM32F100xx.svd"
//
//  name: STM32F100xx
//  version: 1.1
//  description: STM32F100xx
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
   * configuration register
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using PE    = regbits< type,  0,  1 >;  /**< Peripheral enable      */
    using IE    = regbits< type,  1,  1 >;  /**< Interrupt enable       */
    using BTEM  = regbits< type,  2,  1 >;  /**< Bit timing error mode  */
    using BPEM  = regbits< type,  3,  1 >;  /**< Bit period error mode  */
  };

  /**
   * CEC own address register
   */
  struct OAR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using OA  = regbits< type,  0,  4 >;  /**< Own address  */
  };

  /**
   * Rx Data Register
   */
  struct PRES
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using PRESC  = regbits< type,  0, 14 >;  /**< CEC Rx Data Register  */
  };

  /**
   * CEC error status register
   */
  struct ESR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using BTE    = regbits< type,  0,  1 >;  /**< Bit timing error                  */
    using BPE    = regbits< type,  1,  1 >;  /**< Bit period error                  */
    using RBTFE  = regbits< type,  2,  1 >;  /**< Rx block transfer finished error  */
    using SBE    = regbits< type,  3,  1 >;  /**< Start bit error                   */
    using ACKE   = regbits< type,  4,  1 >;  /**< Block acknowledge error           */
    using LINE   = regbits< type,  5,  1 >;  /**< Line error                        */
    using TBTFE  = regbits< type,  6,  1 >;  /**< Tx block transfer finished error  */
  };

  /**
   * CEC control and status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using TSOM   = regbits< type,  0,  1 >;  /**< Tx start of message                                  */
    using TEOM   = regbits< type,  1,  1 >;  /**< Tx end of message                                    */
    using TERR   = regbits< type,  2,  1 >;  /**< Tx error                                             */
    using TBTRF  = regbits< type,  3,  1 >;  /**< Tx byte transfer request or block transfer finished  */
    using RSOM   = regbits< type,  4,  1 >;  /**< Rx start of message                                  */
    using REOM   = regbits< type,  5,  1 >;  /**< Rx end of message                                    */
    using RERR   = regbits< type,  6,  1 >;  /**< Rx error                                             */
    using RBTF   = regbits< type,  7,  1 >;  /**< Rx byte/block transfer finished                      */
  };

  /**
   * CEC Tx data register
   */
  struct TXD
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: TXD
    using TXD_ = regbits< type,  0,  8 >;  /**< Tx Data register  */
  };

  /**
   * CEC Rx data register
   */
  struct RXD
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: RXD
    using RXD_ = regbits< type,  0,  8 >;  /**< Rx data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CEC_HPP_INCLUDED
