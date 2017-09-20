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
//  Import from CMSIS-SVD: "Atmel/ATSAM3N1C.svd"
//
//  vendor: Atmel
//  name: ATSAM3N1C
//  series: SAM3N
//  version: 20130131
//  description: Atmel ATSAM3N1C device: Cortex-M3 Microcontroller with 64KB Flash, 100 Pins (refer to http://www.atmel.com/devices/SAM3N1C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DACC_HPP_INCLUDED
#define ARCH_REG_DACC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Digital-to-Analog Converter Controller
 */
struct DACC
{
  static constexpr reg_addr_t base_addr = 0x4003c000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using SWRST  = regbits< type,  0,  1 >;  /**< Software Reset  */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using TRGEN    = regbits< type,  0,  1 >;  /**< Trigger Enable                          */
    using TRGSEL   = regbits< type,  1,  3 >;  /**< Trigger Selection                       */
    using DACEN    = regbits< type,  4,  1 >;  /**< DAC enable                              */
    using WORD     = regbits< type,  5,  1 >;  /**< Word Transfer                           */
    using STARTUP  = regbits< type,  8,  8 >;  /**< Startup Time Selection                  */
    using CLKDIV   = regbits< type, 16, 16 >;  /**< DAC Clock Divider for Internal Trigger  */
  };

  /**
   * Conversion Data Register
   */
  struct CDR
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0x00000000 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data to Convert  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using TXRDY   = regbits< type,  0,  1 >;  /**< Transmission Ready Interrupt Enable  */
    using ENDTX   = regbits< type,  1,  1 >;  /**< End of PDC Interrupt Enable          */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< Buffer Empty Interrupt Enable        */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using TXRDY   = regbits< type,  0,  1 >;  /**< Transmission Ready Interrupt Disable  */
    using ENDTX   = regbits< type,  1,  1 >;  /**< End of PDC Interrupt Disable          */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< Buffer Empty Interrupt Disable        */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >;

    using TXRDY   = regbits< type,  0,  1 >;  /**< Transmission Ready Interrupt Mask  */
    using ENDTX   = regbits< type,  1,  1 >;  /**< End of PDC Interrupt Mask          */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< Buffer Empty Interrupt Mask        */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using TXRDY   = regbits< type,  0,  1 >;  /**< Transmission Ready Interrupt Flag  */
    using ENDTX   = regbits< type,  1,  1 >;  /**< End of PDC Interrupt Flag          */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< Buffer Empty Interrupt Flag        */
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPROTERR   = regbits< type,  0,  1 >;  /**< Write protection error          */
    using WPROTADDR  = regbits< type,  8,  8 >;  /**< Write protection error address  */
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

#endif // ARCH_REG_DACC_HPP_INCLUDED
