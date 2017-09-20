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
//  Import from CMSIS-SVD: "Atmel/ATSAM4S8B.svd"
//
//  vendor: Atmel
//  name: ATSAM4S8B
//  series: SAM4S
//  version: 20130131
//  description: Atmel ATSAM4S8B device: Cortex-M4 Microcontroller with 512KB Flash, 128KB SRAM, USB, 64 Pins (refer to http://www.atmel.com/devices/SAM4S8B.aspx for more)
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

    using TRGEN     = regbits< type,  0,  1 >;  /**< Trigger Enable          */
    using TRGSEL    = regbits< type,  1,  3 >;  /**< Trigger Selection       */
    using WORD      = regbits< type,  4,  1 >;  /**< Word Transfer           */
    using SLEEP     = regbits< type,  5,  1 >;  /**< Sleep Mode              */
    using FASTWKUP  = regbits< type,  6,  1 >;  /**< Fast Wake up Mode       */
    using REFRESH   = regbits< type,  8,  8 >;  /**< Refresh Period          */
    using USER_SEL  = regbits< type, 16,  2 >;  /**< User Channel Selection  */
    using TAG       = regbits< type, 20,  1 >;  /**< Tag Selection Mode      */
    using MAXS      = regbits< type, 21,  1 >;  /**< Max Speed Mode          */
    using STARTUP   = regbits< type, 24,  6 >;  /**< Startup Time Selection  */
  };

  /**
   * Channel Enable Register
   */
  struct CHER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using CH0  = regbits< type,  0,  1 >;  /**< Channel 0 Enable  */
    using CH1  = regbits< type,  1,  1 >;  /**< Channel 1 Enable  */
  };

  /**
   * Channel Disable Register
   */
  struct CHDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using CH0  = regbits< type,  0,  1 >;  /**< Channel 0 Disable  */
    using CH1  = regbits< type,  1,  1 >;  /**< Channel 1 Disable  */
  };

  /**
   * Channel Status Register
   */
  struct CHSR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using CH0  = regbits< type,  0,  1 >;  /**< Channel 0 Status  */
    using CH1  = regbits< type,  1,  1 >;  /**< Channel 1 Status  */
  };

  /**
   * Conversion Data Register
   */
  struct CDR
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0x00000000 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data to Convert  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using TXRDY   = regbits< type,  0,  1 >;  /**< Transmit Ready Interrupt Enable          */
    using EOC     = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Enable       */
    using ENDTX   = regbits< type,  2,  1 >;  /**< End of Transmit Buffer Interrupt Enable  */
    using TXBUFE  = regbits< type,  3,  1 >;  /**< Transmit Buffer Empty Interrupt Enable   */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using TXRDY   = regbits< type,  0,  1 >;  /**< Transmit Ready Interrupt Disable.         */
    using EOC     = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Disable       */
    using ENDTX   = regbits< type,  2,  1 >;  /**< End of Transmit Buffer Interrupt Disable  */
    using TXBUFE  = regbits< type,  3,  1 >;  /**< Transmit Buffer Empty Interrupt Disable   */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using TXRDY   = regbits< type,  0,  1 >;  /**< Transmit Ready Interrupt Mask          */
    using EOC     = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Mask       */
    using ENDTX   = regbits< type,  2,  1 >;  /**< End of Transmit Buffer Interrupt Mask  */
    using TXBUFE  = regbits< type,  3,  1 >;  /**< Transmit Buffer Empty Interrupt Mask   */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using TXRDY   = regbits< type,  0,  1 >;  /**< Transmit Ready Interrupt Flag     */
    using EOC     = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Flag  */
    using ENDTX   = regbits< type,  2,  1 >;  /**< End of DMA Interrupt Flag         */
    using TXBUFE  = regbits< type,  3,  1 >;  /**< Transmit Buffer Empty             */
  };

  /**
   * Analog Current Register
   */
  struct ACR
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >;

    using IBCTLCH0      = regbits< type,  0,  2 >;  /**< Analog Output Current Control      */
    using IBCTLCH1      = regbits< type,  2,  2 >;  /**< Analog Output Current Control      */
    using IBCTLDACCORE  = regbits< type,  8,  2 >;  /**< Bias Current Control for DAC Core  */
  };

  /**
   * Write Protect Mode register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * Write Protect Status register
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
