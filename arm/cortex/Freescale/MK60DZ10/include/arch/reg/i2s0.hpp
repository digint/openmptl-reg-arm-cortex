/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MK60DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK60DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK60DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2S0_HPP_INCLUDED
#define ARCH_REG_I2S0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Synchronous Serial Interface
 */
struct I2S0
{
  static constexpr reg_addr_t base_addr = 0x4002f000;

  /**
   * I2S Transmit Data Registers 0
   */
  struct TX0
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    // fixme: Field name equals parent register name: TX0
    using TX0_ = regbits< type,  0, 32 >;  /**< I2S transmit data  */
  };

  /**
   * I2S Transmit Data Registers 1
   */
  struct TX1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    // fixme: Field name equals parent register name: TX1
    using TX1_ = regbits< type,  0, 32 >;  /**< I2S transmit data  */
  };

  /**
   * I2S Receive Data Registers 0
   */
  struct RX0
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    // fixme: Field name equals parent register name: RX0
    using RX0_ = regbits< type,  0, 32 >;  /**< I2S Receive Data  */
  };

  /**
   * I2S Receive Data Registers 1
   */
  struct RX1
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    // fixme: Field name equals parent register name: RX1
    using RX1_ = regbits< type,  0, 32 >;  /**< I2S Receive Data  */
  };

  /**
   * I2S Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using I2SEN      = regbits< type,  0,  1 >;  /**< I2S Enable.                                */
    using TE         = regbits< type,  1,  1 >;  /**< Transmit Enable.                           */
    using RE         = regbits< type,  2,  1 >;  /**< Receive Enable.                            */
    using NET        = regbits< type,  3,  1 >;  /**< Network Mode.                              */
    using SYN        = regbits< type,  4,  1 >;  /**< Synchronous Mode.                          */
    using I2SMODE    = regbits< type,  5,  2 >;  /**< I2S Mode Select                            */
    using SYSCLKEN   = regbits< type,  7,  1 >;  /**< System Clock (Oversampling Clock) Enable.  */
    using TCHEN      = regbits< type,  8,  1 >;  /**< Two-Channel Operation Enable.              */
    using CLKIST     = regbits< type,  9,  1 >;  /**< Clock Idle State.                          */
    using TFRCLKDIS  = regbits< type, 10,  1 >;  /**< Transmit Frame Clock Disable.              */
    using RFRCLKDIS  = regbits< type, 11,  1 >;  /**< Receive Frame Clock Disable.               */
    using SYNCTXFS   = regbits< type, 12,  1 >;  /**< no description available                   */
  };

  /**
   * I2S Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x3003 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x3003 >;

    using TFE0   = regbits< type,  0,  1 >;  /**< Transmit FIFO Empty 0.             */
    using TFE1   = regbits< type,  1,  1 >;  /**< Transmit FIFO Empty 1.             */
    using RFF0   = regbits< type,  2,  1 >;  /**< Receive FIFO Full 0.               */
    using RFF1   = regbits< type,  3,  1 >;  /**< Receive FIFO Full 1.               */
    using RLS    = regbits< type,  4,  1 >;  /**< Receive Last Time Slot.            */
    using TLS    = regbits< type,  5,  1 >;  /**< Transmit Last Time Slot.           */
    using RFS    = regbits< type,  6,  1 >;  /**< Receive Frame Sync.                */
    using TFS    = regbits< type,  7,  1 >;  /**< Transmit Frame Sync.               */
    using TUE0   = regbits< type,  8,  1 >;  /**< Transmitter Underrun Error 1.      */
    using TUE1   = regbits< type,  9,  1 >;  /**< Transmitter Underrun Error 1.      */
    using ROE0   = regbits< type, 10,  1 >;  /**< Receiver Overrun Error 0.          */
    using ROE1   = regbits< type, 11,  1 >;  /**< Receiver Overrun Error 1.          */
    using TDE0   = regbits< type, 12,  1 >;  /**< Transmit Data Register Empty 0.    */
    using TDE1   = regbits< type, 13,  1 >;  /**< Transmit Data Register Empty 1.    */
    using RDR0   = regbits< type, 14,  1 >;  /**< Receive Data Ready 0.              */
    using RDR1   = regbits< type, 15,  1 >;  /**< Receive Data Ready 1.              */
    using RXT    = regbits< type, 16,  1 >;  /**< Receive Tag Updated.               */
    using CMDDU  = regbits< type, 17,  1 >;  /**< Command Data Register Updated.     */
    using CMDAU  = regbits< type, 18,  1 >;  /**< Command Address Register Updated.  */
    using TRFC   = regbits< type, 23,  1 >;  /**< Transmit Frame Complete.           */
    using RFRC   = regbits< type, 24,  1 >;  /**< Receive Frame Complete.            */
  };

  /**
   * I2S Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x18, rw, 0x3003 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x3003 >;

    using TFE0EN   = regbits< type,  0,  1 >;  /**< Enable Bit.                 */
    using TFE1EN   = regbits< type,  1,  1 >;  /**< Enable Bit.                 */
    using RFF0EN   = regbits< type,  2,  1 >;  /**< Enable Bit.                 */
    using RFF1EN   = regbits< type,  3,  1 >;  /**< Enable Bit.                 */
    using RLSEN    = regbits< type,  4,  1 >;  /**< Enable Bit.                 */
    using TLSEN    = regbits< type,  5,  1 >;  /**< Enable Bit.                 */
    using RFSEN    = regbits< type,  6,  1 >;  /**< Enable Bit.                 */
    using TFSEN    = regbits< type,  7,  1 >;  /**< Enable Bit.                 */
    using TUE0EN   = regbits< type,  8,  1 >;  /**< Enable Bit.                 */
    using TUE1EN   = regbits< type,  9,  1 >;  /**< Enable Bit.                 */
    using ROE0EN   = regbits< type, 10,  1 >;  /**< Enable Bit.                 */
    using ROE1EN   = regbits< type, 11,  1 >;  /**< Enable Bit.                 */
    using TDE0EN   = regbits< type, 12,  1 >;  /**< Enable Bit.                 */
    using TDE1EN   = regbits< type, 13,  1 >;  /**< Enable Bit.                 */
    using RDR0EN   = regbits< type, 14,  1 >;  /**< Enable Bit.                 */
    using RDR1EN   = regbits< type, 15,  1 >;  /**< Enable Bit.                 */
    using RXTEN    = regbits< type, 16,  1 >;  /**< Enable Bit.                 */
    using CMDDUEN  = regbits< type, 17,  1 >;  /**< Enable Bit.                 */
    using CMDAUEN  = regbits< type, 18,  1 >;  /**< Enable Bit.                 */
    using TIE      = regbits< type, 19,  1 >;  /**< Transmit Interrupt Enable.  */
    using TDMAE    = regbits< type, 20,  1 >;  /**< Transmit DMA Enable.        */
    using RIE      = regbits< type, 21,  1 >;  /**< Receive Interrupt Enable.   */
    using RDMAE    = regbits< type, 22,  1 >;  /**< Receive DMA Enable.         */
    using TFRC_EN  = regbits< type, 23,  1 >;  /**< Enable Bit.                 */
    using RFRC_EN  = regbits< type, 24,  1 >;  /**< Enable Bit.                 */
  };

  /**
   * I2S Transmit Configuration Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x200 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x200 >;

    using TEFS    = regbits< type,  0,  1 >;  /**< Transmit Early Frame Sync.   */
    using TFSL    = regbits< type,  1,  1 >;  /**< Transmit Frame Sync Length.  */
    using TFSI    = regbits< type,  2,  1 >;  /**< Transmit Frame Sync Invert.  */
    using TSCKP   = regbits< type,  3,  1 >;  /**< Transmit Clock Polarity.     */
    using TSHFD   = regbits< type,  4,  1 >;  /**< Transmit Shift Direction.    */
    using TXDIR   = regbits< type,  5,  1 >;  /**< Transmit clock direction     */
    using TFDIR   = regbits< type,  6,  1 >;  /**< Transmit Frame Direction.    */
    using TFEN0   = regbits< type,  7,  1 >;  /**< Transmit FIFO Enable 0.      */
    using TFEN1   = regbits< type,  8,  1 >;  /**< Transmit FIFO Enable 1.      */
    using TXBIT0  = regbits< type,  9,  1 >;  /**< Transmit Bit 0.              */
  };

  /**
   * I2S Receive Configuration Register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x200 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x200 >;

    using REFS    = regbits< type,  0,  1 >;  /**< Receive Early Frame Sync.   */
    using RFSL    = regbits< type,  1,  1 >;  /**< Receive Frame Sync Length.  */
    using RFSI    = regbits< type,  2,  1 >;  /**< Receive Frame Sync Invert.  */
    using RSCKP   = regbits< type,  3,  1 >;  /**< Receive Clock Polarity.     */
    using RSHFD   = regbits< type,  4,  1 >;  /**< Receive Shift Direction.    */
    using RXDIR   = regbits< type,  5,  1 >;  /**< Receive Clock Direction.    */
    using RFDIR   = regbits< type,  6,  1 >;  /**< Receive Frame Direction.    */
    using RFEN0   = regbits< type,  7,  1 >;  /**< Receive FIFO Enable 0.      */
    using RFEN1   = regbits< type,  8,  1 >;  /**< Receive FIFO Enable 1.      */
    using RXBIT0  = regbits< type,  9,  1 >;  /**< Receive Bit 0.              */
    using RXEXT   = regbits< type, 10,  1 >;  /**< Receive Data Extension.     */
  };

  /**
   * I2S Transmit Clock Control Registers
   */
  struct TCCR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x40000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x40000 >;

    using PM    = regbits< type,  0,  8 >;  /**< Prescaler Modulus Select.    */
    using DC    = regbits< type,  8,  5 >;  /**< Frame Rate Divider Control.  */
    using WL    = regbits< type, 13,  4 >;  /**< Word Length Control.         */
    using PSR   = regbits< type, 17,  1 >;  /**< Prescaler Range.             */
    using DIV2  = regbits< type, 18,  1 >;  /**< Divide By 2.                 */
  };

  /**
   * I2S Receive Clock Control Registers
   */
  struct RCCR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x40000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x40000 >;

    using PM    = regbits< type,  0,  8 >;  /**< Prescaler Modulus Select.    */
    using DC    = regbits< type,  8,  5 >;  /**< Frame Rate Divider Control.  */
    using WL    = regbits< type, 13,  4 >;  /**< Word Length Control.         */
    using PSR   = regbits< type, 17,  1 >;  /**< Prescaler Range.             */
    using DIV2  = regbits< type, 18,  1 >;  /**< Divide By 2.                 */
  };

  /**
   * I2S FIFO Control/Status Register
   */
  struct FCSR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x810081 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x810081 >;

    using TFWM0   = regbits< type,  0,  4 >;  /**< Transmit FIFO Empty WaterMark 0.  */
    using RFWM0   = regbits< type,  4,  4 >;  /**< Receive FIFO Full WaterMark 0.    */
    using TFCNT0  = regbits< type,  8,  4 >;  /**< Transmit FIFO Counter 0.          */
    using RFCNT0  = regbits< type, 12,  4 >;  /**< Receive FIFO Counter 0.           */
    using TFWM1   = regbits< type, 16,  4 >;  /**< Transmit FIFO Empty WaterMark 1.  */
    using RFWM1   = regbits< type, 20,  4 >;  /**< Receive FIFO Full WaterMark 1.    */
    using TFCNT1  = regbits< type, 24,  4 >;  /**< Transmit FIFO Counter1.           */
    using RFCNT1  = regbits< type, 28,  4 >;  /**< Receive FIFO Counter1.            */
  };

  /**
   * I2S AC97 Control Register
   */
  struct ACNT
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using AC97EN  = regbits< type,  0,  1 >;  /**< AC97 Mode Enable.          */
    using FV      = regbits< type,  1,  1 >;  /**< Fixed/Variable Operation.  */
    using TIF     = regbits< type,  2,  1 >;  /**< Tag in FIFO.               */
    using RD      = regbits< type,  3,  1 >;  /**< Read Command.              */
    using WR      = regbits< type,  4,  1 >;  /**< Write Command.             */
    using FRDIV   = regbits< type,  5,  6 >;  /**< Frame Rate Divider.        */
  };

  /**
   * I2S AC97 Command Address Register
   */
  struct ACADD
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0 >;

    // fixme: Field name equals parent register name: ACADD
    using ACADD_ = regbits< type,  0, 19 >;  /**< AC97 Command Address.  */
  };

  /**
   * I2S AC97 Command Data Register
   */
  struct ACDAT
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    // fixme: Field name equals parent register name: ACDAT
    using ACDAT_ = regbits< type,  0, 20 >;  /**< AC97 Command Data.  */
  };

  /**
   * I2S AC97 Tag Register
   */
  struct ATAG
  : public reg< uint32_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 >;

    // fixme: Field name equals parent register name: ATAG
    using ATAG_ = regbits< type,  0, 16 >;  /**< AC97 Tag Value.  */
  };

  /**
   * I2S Transmit Time Slot Mask Register
   */
  struct TMSK
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    // fixme: Field name equals parent register name: TMSK
    using TMSK_ = regbits< type,  0, 32 >;  /**< Transmit Mask.  */
  };

  /**
   * I2S Receive Time Slot Mask Register
   */
  struct RMSK
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    // fixme: Field name equals parent register name: RMSK
    using RMSK_ = regbits< type,  0, 32 >;  /**< Receive Mask.  */
  };

  /**
   * I2S AC97 Channel Status Register
   */
  struct ACCST
  : public reg< uint32_t, base_addr + 0x50, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0 >;

    // fixme: Field name equals parent register name: ACCST
    using ACCST_ = regbits< type,  0, 10 >;  /**< AC97 Channel Status.  */
  };

  /**
   * I2S AC97 Channel Enable Register
   */
  struct ACCEN
  : public reg< uint32_t, base_addr + 0x54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0 >;

    // fixme: Field name equals parent register name: ACCEN
    using ACCEN_ = regbits< type,  0, 10 >;  /**< AC97 Channel Enable.  */
  };

  /**
   * I2S AC97 Channel Disable Register
   */
  struct ACCDIS
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    // fixme: Field name equals parent register name: ACCDIS
    using ACCDIS_ = regbits< type,  0, 10 >;  /**< AC97 Channel Disable.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2S0_HPP_INCLUDED
