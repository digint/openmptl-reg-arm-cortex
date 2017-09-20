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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9CN12.svd"
//
//  vendor: Atmel
//  name: AT91SAM9CN12
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9CN12 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Secure BootROM, Crypto engine, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9CN12.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DBGU_HPP_INCLUDED
#define ARCH_REG_DBGU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Debug Unit
 */
struct DBGU
{
  static constexpr reg_addr_t base_addr = 0xfffff200;

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

    using RXRDY    = regbits< type,  0,  1 >;  /**< Enable RXRDY Interrupt              */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Enable TXRDY Interrupt              */
    using OVRE     = regbits< type,  5,  1 >;  /**< Enable Overrun Error Interrupt      */
    using FRAME    = regbits< type,  6,  1 >;  /**< Enable Framing Error Interrupt      */
    using PARE     = regbits< type,  7,  1 >;  /**< Enable Parity Error Interrupt       */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Enable TXEMPTY Interrupt            */
    using COMMTX   = regbits< type, 30,  1 >;  /**< Enable COMMTX (from ARM) Interrupt  */
    using COMMRX   = regbits< type, 31,  1 >;  /**< Enable COMMRX (from ARM) Interrupt  */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Disable RXRDY Interrupt              */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Disable TXRDY Interrupt              */
    using OVRE     = regbits< type,  5,  1 >;  /**< Disable Overrun Error Interrupt      */
    using FRAME    = regbits< type,  6,  1 >;  /**< Disable Framing Error Interrupt      */
    using PARE     = regbits< type,  7,  1 >;  /**< Disable Parity Error Interrupt       */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Disable TXEMPTY Interrupt            */
    using COMMTX   = regbits< type, 30,  1 >;  /**< Disable COMMTX (from ARM) Interrupt  */
    using COMMRX   = regbits< type, 31,  1 >;  /**< Disable COMMRX (from ARM) Interrupt  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Mask RXRDY Interrupt          */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Disable TXRDY Interrupt       */
    using OVRE     = regbits< type,  5,  1 >;  /**< Mask Overrun Error Interrupt  */
    using FRAME    = regbits< type,  6,  1 >;  /**< Mask Framing Error Interrupt  */
    using PARE     = regbits< type,  7,  1 >;  /**< Mask Parity Error Interrupt   */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Mask TXEMPTY Interrupt        */
    using COMMTX   = regbits< type, 30,  1 >;  /**< Mask COMMTX Interrupt         */
    using COMMRX   = regbits< type, 31,  1 >;  /**< Mask COMMRX Interrupt         */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Receiver Ready                            */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Transmitter Ready                         */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error                             */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error                             */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error                              */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmitter Empty                         */
    using COMMTX   = regbits< type, 30,  1 >;  /**< Debug Communication Channel Write Status  */
    using COMMRX   = regbits< type, 31,  1 >;  /**< Debug Communication Channel Read Status   */
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
   * Chip ID Register
   */
  struct CIDR
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using VERSION  = regbits< type,  0,  5 >;  /**< Version of the Device            */
    using EPROC    = regbits< type,  5,  3 >;  /**< Embedded Processor               */
    using NVPSIZ   = regbits< type,  8,  4 >;  /**< Nonvolatile Program Memory Size  */
    using NVPSIZ2  = regbits< type, 12,  4 >;
    using SRAMSIZ  = regbits< type, 16,  4 >;  /**< Internal SRAM Size               */
    using ARCH     = regbits< type, 20,  8 >;  /**< Architecture Identifier          */
    using NVPTYP   = regbits< type, 28,  3 >;  /**< Nonvolatile Program Memory Type  */
    using EXT      = regbits< type, 31,  1 >;  /**< Extension Flag                   */
  };

  /**
   * Chip ID Extension Register
   */
  struct EXID
  : public reg< uint32_t, base_addr + 0x00000044, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: EXID
    using EXID_ = regbits< type,  0, 32 >;  /**< Chip ID Extension  */
  };

  /**
   * Force NTRST Register
   */
  struct FNR
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >;

    using FNTRST  = regbits< type,  0,  1 >;  /**< Force NTRST  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DBGU_HPP_INCLUDED
