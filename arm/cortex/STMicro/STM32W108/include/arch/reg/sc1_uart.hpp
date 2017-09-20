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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SC1_UART_HPP_INCLUDED
#define ARCH_REG_SC1_UART_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial controller 1 (Universal Asynchronous Receiver/Transmitter)
 */
struct SC1_UART
{
  static constexpr reg_addr_t base_addr = 0x4000c848;

  /**
   * Serial controller UART status register
   */
  struct SC1_UARTSR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000040 >;

    using IDLE  = regbits< type,  6,  1 >;  /**< IDLE  */
    using PE    = regbits< type,  5,  1 >;  /**< PE    */
    using FE    = regbits< type,  4,  1 >;  /**< FE    */
    using OVR   = regbits< type,  3,  1 >;  /**< OVR   */
    using TXE   = regbits< type,  2,  1 >;  /**< TXE   */
    using RXNE  = regbits< type,  1,  1 >;  /**< RXNE  */
    using CTS   = regbits< type,  0,  1 >;  /**< CTS   */
  };

  /**
   * Serial controller UART control register
   */
  struct SC1_UARTCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using AHFCE  = regbits< type,  6,  1 >;  /**< AHFCE  */
    using HFCE   = regbits< type,  5,  1 >;  /**< HFCE   */
    using PS     = regbits< type,  4,  1 >;  /**< PS     */
    using PCE    = regbits< type,  3,  1 >;  /**< PCE    */
    using STOP   = regbits< type,  2,  1 >;  /**< STOP   */
    using M      = regbits< type,  1,  1 >;  /**< M      */
    using nRTS   = regbits< type,  0,  1 >;  /**< nRTS   */
  };

  /**
   * Serial controller UART baud rate register 1
   */
  struct SC1_UARTBRR1
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using N  = regbits< type,  0, 16 >;  /**< N  */
  };

  /**
   * Serial controller UART baud rate register 2
   */
  struct SC1_UARTBRR2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using F  = regbits< type,  0,  1 >;  /**< F  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SC1_UART_HPP_INCLUDED
