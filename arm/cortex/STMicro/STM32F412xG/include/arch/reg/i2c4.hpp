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
//  Import from CMSIS-SVD: "STMicro/STM32F412xG.svd"
//
//  name: STM32F412xG
//  version: 1.0
//  description: STM32F412xG
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2C4_HPP_INCLUDED
#define ARCH_REG_I2C4_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Inter-integrated circuit
 */
struct I2C4
{
  static constexpr reg_addr_t base_addr = 0x40006000;

  /**
   * Control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using PE         = regbits< type,  0,  1 >;  /**< Peripheral enable  */
    using TXIE       = regbits< type,  1,  1 >;  /**< TXIE               */
    using RXIE       = regbits< type,  2,  1 >;  /**< RXIE               */
    using ADDRE      = regbits< type,  3,  1 >;  /**< ADDRE              */
    using NACKIE     = regbits< type,  4,  1 >;  /**< NACKIE             */
    using STOPIE     = regbits< type,  5,  1 >;  /**< STOPIE             */
    using TCIE       = regbits< type,  6,  1 >;  /**< TCIE               */
    using ERRIE      = regbits< type,  7,  1 >;  /**< ERRIE              */
    using DNF        = regbits< type,  8,  4 >;  /**< DNF                */
    using ANFOFF     = regbits< type, 12,  1 >;  /**< ANFOFF             */
    using TCDMAEN    = regbits< type, 14,  1 >;  /**< TCDMAEN            */
    using RXDMAEN    = regbits< type, 15,  1 >;  /**< RXDMAEN            */
    using SBC        = regbits< type, 16,  1 >;  /**< SBC                */
    using NOSTRETCH  = regbits< type, 17,  1 >;  /**< NOSTRETCH          */
    using WUPEN      = regbits< type, 18,  1 >;  /**< WUPEN              */
    using GCEN       = regbits< type, 19,  1 >;  /**< GCEN               */
    using SMBHEN     = regbits< type, 20,  1 >;  /**< SMBHEN             */
    using SMBDEN     = regbits< type, 21,  1 >;  /**< SMBDEN             */
    using ALERTEN    = regbits< type, 22,  1 >;  /**< ALERTEN            */
    using PECEN      = regbits< type, 23,  1 >;  /**< PECEN              */
  };

  /**
   * Control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using SADD0    = regbits< type,  0,  1 >;  /**< Slave address bit 0                        */
    using SADD1_7  = regbits< type,  1,  7 >;  /**< Slave address bit 7_1                      */
    using SADD8_9  = regbits< type,  8,  2 >;  /**< Slave address bit 8_9                      */
    using RD_WRN   = regbits< type, 10,  1 >;  /**< Transfer direction                         */
    using ADD10    = regbits< type, 11,  1 >;  /**< 10-bit addressing mode                     */
    using HEAD10R  = regbits< type, 12,  1 >;  /**< 10-bit address header only read direction  */
    using START    = regbits< type, 13,  1 >;  /**< Start generation                           */
    using STOP     = regbits< type, 14,  1 >;  /**< Stop generation                            */
    using NACK     = regbits< type, 15,  1 >;  /**< NACK generation                            */
    using NBYTES   = regbits< type, 16,  8 >;  /**< Number of bytes                            */
    using RELOAD   = regbits< type, 24,  1 >;  /**< NBYTES reload mode                         */
    using AUTOEND  = regbits< type, 25,  1 >;  /**< Automatic end mode                         */
    using PECBYTE  = regbits< type, 26,  1 >;  /**< Packet error checking byte                 */
  };

  /**
   * Own address register 1
   */
  struct OAR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using OA1      = regbits< type,  0,  1 >;  /**< OA1      */
    using OA11_7   = regbits< type,  1,  7 >;  /**< OA11_7   */
    using OA18_9   = regbits< type,  8,  2 >;  /**< OA18_9   */
    using OA1MODE  = regbits< type, 10,  1 >;  /**< OA1MODE  */
    using OA1EN    = regbits< type, 15,  1 >;  /**< OA1EN    */
  };

  /**
   * Own address register 2
   */
  struct OAR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using OA21_7  = regbits< type,  1,  7 >;  /**< OA21_7  */
    using OA2MSK  = regbits< type,  8,  3 >;  /**< OA2MSK  */
    using OA2EN   = regbits< type, 15,  1 >;  /**< OA2EN   */
  };

  /**
   * Timing register
   */
  struct TIMINGR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using SCLL    = regbits< type,  0,  8 >;  /**< SCLL    */
    using SCLH    = regbits< type,  8,  8 >;  /**< SCLH    */
    using SDADEL  = regbits< type, 16,  4 >;  /**< SDADEL  */
    using SCLDEL  = regbits< type, 20,  4 >;  /**< SCLDEL  */
    using PRESC   = regbits< type, 28,  4 >;  /**< PRESC   */
  };

  /**
   * Timeout register
   */
  struct TIMEOUTR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000 >;

    using TIMEOUTA  = regbits< type,  0, 12 >;  /**< TIMEOUTA  */
    using TIDLE     = regbits< type, 12,  1 >;  /**< TIDLE     */
    using TIMOUTEN  = regbits< type, 15,  1 >;  /**< TIMOUTEN  */
    using TIMEOUTB  = regbits< type, 16, 12 >;  /**< TIMEOUTB  */
    using TEXTEN    = regbits< type, 31,  1 >;  /**< TEXTEN    */
  };

  /**
   * Interrupt and Status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x000000001 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x000000001 >;

    using TXE      = regbits< type,  0,  1 >;  /**< TXE      */
    using TXIS     = regbits< type,  1,  1 >;  /**< TXIS     */
    using RXNE     = regbits< type,  2,  1 >;  /**< RXNE     */
    using ADDR     = regbits< type,  3,  1 >;  /**< ADDR     */
    using NACKF    = regbits< type,  4,  1 >;  /**< NACKF    */
    using STOPF    = regbits< type,  5,  1 >;  /**< STOPF    */
    using TC       = regbits< type,  6,  1 >;  /**< TC       */
    using TCR      = regbits< type,  7,  1 >;  /**< TCR      */
    using BERR     = regbits< type,  8,  1 >;  /**< BERR     */
    using ARLO     = regbits< type,  9,  1 >;  /**< ARLO     */
    using OVR      = regbits< type, 10,  1 >;  /**< OVR      */
    using PECERR   = regbits< type, 11,  1 >;  /**< PECERR   */
    using TIMEOUT  = regbits< type, 12,  1 >;  /**< TIMEOUT  */
    using ALERT    = regbits< type, 13,  1 >;  /**< ALERT    */
    using BUSY     = regbits< type, 15,  1 >;  /**< BUSY     */
    using DIR      = regbits< type, 16,  1 >;  /**< DIR      */
    using ADDCODE  = regbits< type, 17,  7 >;  /**< ADDCODE  */
  };

  /**
   * Interrupt clear register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x1c, wo, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, wo, 0x0000 >;

    using ADDRCF    = regbits< type,  3,  1 >;  /**< ADDRCF    */
    using NACKCF    = regbits< type,  4,  1 >;  /**< NACKCF    */
    using STOPCF    = regbits< type,  5,  1 >;  /**< STOPCF    */
    using BERRCF    = regbits< type,  8,  1 >;  /**< BERRCF    */
    using ARLOCF    = regbits< type,  9,  1 >;  /**< ARLOCF    */
    using OVRCF     = regbits< type, 10,  1 >;  /**< OVRCF     */
    using PECCF     = regbits< type, 11,  1 >;  /**< PECCF     */
    using TIMOUTCF  = regbits< type, 12,  1 >;  /**< TIMOUTCF  */
    using ALERTC    = regbits< type, 13,  1 >;  /**< ALERTC    */
  };

  /**
   * PEC register
   */
  struct PECR
  : public reg< uint32_t, base_addr + 0x20, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x0000 >;

    using PEC  = regbits< type,  0,  8 >;  /**< PEC  */
  };

  /**
   * Receive data register
   */
  struct RXDR
  : public reg< uint32_t, base_addr + 0x24, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0x0000 >;

    using RXDATA  = regbits< type,  0,  8 >;  /**< RXDATA  */
  };

  /**
   * Transmit data register
   */
  struct TXDR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0000 >;

    using TXDATA  = regbits< type,  0,  8 >;  /**< TXDATA  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2C4_HPP_INCLUDED
