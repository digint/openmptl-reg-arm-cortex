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
//  Import from CMSIS-SVD: "Atmel/ATSAM3S2C.svd"
//
//  vendor: Atmel
//  name: ATSAM3S2C
//  series: SAM3S
//  version: 20130131
//  description: Atmel ATSAM3S2C device: Cortex-M3 Microcontroller with 128KB Flash, USB, 100 Pins (refer to http://www.atmel.com/devices/SAM3S2C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UART1_HPP_INCLUDED
#define ARCH_REG_UART1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal Asynchronous Receiver Transmitter 1
 */
struct UART1
{
  static constexpr reg_addr_t base_addr = 0x400e0800;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using RSTRX   = regbits< type,  2,  1 >;  /**< Reset Receiver       */
    using RSTTX   = regbits< type,  3,  1 >;  /**< Reset Transmitter    */
    using RXEN    = regbits< type,  4,  1 >;  /**< Receiver Enable      */
    using RXDIS   = regbits< type,  5,  1 >;  /**< Receiver Disable     */
    using TXEN    = regbits< type,  6,  1 >;  /**< Transmitter Enable   */
    using TXDIS   = regbits< type,  7,  1 >;  /**< Transmitter Disable  */
    using RSTSTA  = regbits< type,  8,  1 >;  /**< Reset Status Bits    */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using PAR     = regbits< type,  9,  3 >;  /**< Parity Type   */
    using CHMODE  = regbits< type, 14,  2 >;  /**< Channel Mode  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Enable RXRDY Interrupt                    */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Enable TXRDY Interrupt                    */
    using ENDRX    = regbits< type,  3,  1 >;  /**< Enable End of Receive Transfer Interrupt  */
    using ENDTX    = regbits< type,  4,  1 >;  /**< Enable End of Transmit Interrupt          */
    using OVRE     = regbits< type,  5,  1 >;  /**< Enable Overrun Error Interrupt            */
    using FRAME    = regbits< type,  6,  1 >;  /**< Enable Framing Error Interrupt            */
    using PARE     = regbits< type,  7,  1 >;  /**< Enable Parity Error Interrupt             */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Enable TXEMPTY Interrupt                  */
    using TXBUFE   = regbits< type, 11,  1 >;  /**< Enable Buffer Empty Interrupt             */
    using RXBUFF   = regbits< type, 12,  1 >;  /**< Enable Buffer Full Interrupt              */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Disable RXRDY Interrupt                    */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Disable TXRDY Interrupt                    */
    using ENDRX    = regbits< type,  3,  1 >;  /**< Disable End of Receive Transfer Interrupt  */
    using ENDTX    = regbits< type,  4,  1 >;  /**< Disable End of Transmit Interrupt          */
    using OVRE     = regbits< type,  5,  1 >;  /**< Disable Overrun Error Interrupt            */
    using FRAME    = regbits< type,  6,  1 >;  /**< Disable Framing Error Interrupt            */
    using PARE     = regbits< type,  7,  1 >;  /**< Disable Parity Error Interrupt             */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Disable TXEMPTY Interrupt                  */
    using TXBUFE   = regbits< type, 11,  1 >;  /**< Disable Buffer Empty Interrupt             */
    using RXBUFF   = regbits< type, 12,  1 >;  /**< Disable Buffer Full Interrupt              */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Mask RXRDY Interrupt                    */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Disable TXRDY Interrupt                 */
    using ENDRX    = regbits< type,  3,  1 >;  /**< Mask End of Receive Transfer Interrupt  */
    using ENDTX    = regbits< type,  4,  1 >;  /**< Mask End of Transmit Interrupt          */
    using OVRE     = regbits< type,  5,  1 >;  /**< Mask Overrun Error Interrupt            */
    using FRAME    = regbits< type,  6,  1 >;  /**< Mask Framing Error Interrupt            */
    using PARE     = regbits< type,  7,  1 >;  /**< Mask Parity Error Interrupt             */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Mask TXEMPTY Interrupt                  */
    using TXBUFE   = regbits< type, 11,  1 >;  /**< Mask TXBUFE Interrupt                   */
    using RXBUFF   = regbits< type, 12,  1 >;  /**< Mask RXBUFF Interrupt                   */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Receiver Ready               */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Transmitter Ready            */
    using ENDRX    = regbits< type,  3,  1 >;  /**< End of Receiver Transfer     */
    using ENDTX    = regbits< type,  4,  1 >;  /**< End of Transmitter Transfer  */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error                */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error                */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error                 */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmitter Empty            */
    using TXBUFE   = regbits< type, 11,  1 >;  /**< Transmission Buffer Empty    */
    using RXBUFF   = regbits< type, 12,  1 >;  /**< Receive Buffer Full          */
  };

  /**
   * Receive Holding Register
   */
  struct RHR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using RXCHR  = regbits< type,  0,  8 >;  /**< Received Character  */
  };

  /**
   * Transmit Holding Register
   */
  struct THR
  : public reg< uint32_t, base_addr + 0x0000001c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, wo, 0 >;

    using TXCHR  = regbits< type,  0,  8 >;  /**< Character to be Transmitted  */
  };

  /**
   * Baud Rate Generator Register
   */
  struct BRGR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using CD  = regbits< type,  0, 16 >;  /**< Clock Divisor  */
  };

  /**
   * Receive Pointer Register
   */
  struct RPR
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >;

    using RXPTR  = regbits< type,  0, 32 >;  /**< Receive Pointer Register  */
  };

  /**
   * Receive Counter Register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >;

    using RXCTR  = regbits< type,  0, 16 >;  /**< Receive Counter Register  */
  };

  /**
   * Transmit Pointer Register
   */
  struct TPR
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >;

    using TXPTR  = regbits< type,  0, 32 >;  /**< Transmit Counter Register  */
  };

  /**
   * Transmit Counter Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >;

    using TXCTR  = regbits< type,  0, 16 >;  /**< Transmit Counter Register  */
  };

  /**
   * Receive Next Pointer Register
   */
  struct RNPR
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >;

    using RXNPTR  = regbits< type,  0, 32 >;  /**< Receive Next Pointer  */
  };

  /**
   * Receive Next Counter Register
   */
  struct RNCR
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >;

    using RXNCTR  = regbits< type,  0, 16 >;  /**< Receive Next Counter  */
  };

  /**
   * Transmit Next Pointer Register
   */
  struct TNPR
  : public reg< uint32_t, base_addr + 0x00000118, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, rw, 0x00000000 >;

    using TXNPTR  = regbits< type,  0, 32 >;  /**< Transmit Next Pointer  */
  };

  /**
   * Transmit Next Counter Register
   */
  struct TNCR
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >;

    using TXNCTR  = regbits< type,  0, 16 >;  /**< Transmit Counter Next  */
  };

  /**
   * Transfer Control Register
   */
  struct PTCR
  : public reg< uint32_t, base_addr + 0x00000120, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, wo, 0x00000000 >;

    using RXTEN   = regbits< type,  0,  1 >;  /**< Receiver Transfer Enable      */
    using RXTDIS  = regbits< type,  1,  1 >;  /**< Receiver Transfer Disable     */
    using TXTEN   = regbits< type,  8,  1 >;  /**< Transmitter Transfer Enable   */
    using TXTDIS  = regbits< type,  9,  1 >;  /**< Transmitter Transfer Disable  */
  };

  /**
   * Transfer Status Register
   */
  struct PTSR
  : public reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >;

    using RXTEN  = regbits< type,  0,  1 >;  /**< Receiver Transfer Enable     */
    using TXTEN  = regbits< type,  8,  1 >;  /**< Transmitter Transfer Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UART1_HPP_INCLUDED
