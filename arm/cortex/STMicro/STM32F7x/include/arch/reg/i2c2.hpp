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
//  Import from CMSIS-SVD: "STMicro/STM32F7x.svd"
//
//  name: STM32F7x
//  version: 1.1
//  description: STM32F7x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2C2_HPP_INCLUDED
#define ARCH_REG_I2C2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Inter-integrated circuit
 *
 * (derived from: I2C1)
 */
struct I2C2
{
  static constexpr reg_addr_t base_addr = 0x40005800;

  /**
   * Control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using PE         = regbits< type,  0,  1 >;  /**< Peripheral enable                            */
    using TXIE       = regbits< type,  1,  1 >;  /**< TX Interrupt enable                          */
    using RXIE       = regbits< type,  2,  1 >;  /**< RX Interrupt enable                          */
    using ADDRIE     = regbits< type,  3,  1 >;  /**< Address match interrupt enable (slave only)  */
    using NACKIE     = regbits< type,  4,  1 >;  /**< Not acknowledge received interrupt enable    */
    using STOPIE     = regbits< type,  5,  1 >;  /**< STOP detection Interrupt enable              */
    using TCIE       = regbits< type,  6,  1 >;  /**< Transfer Complete interrupt enable           */
    using ERRIE      = regbits< type,  7,  1 >;  /**< Error interrupts enable                      */
    using DNF        = regbits< type,  8,  4 >;  /**< Digital noise filter                         */
    using ANFOFF     = regbits< type, 12,  1 >;  /**< Analog noise filter OFF                      */
    using TXDMAEN    = regbits< type, 14,  1 >;  /**< DMA transmission requests enable             */
    using RXDMAEN    = regbits< type, 15,  1 >;  /**< DMA reception requests enable                */
    using SBC        = regbits< type, 16,  1 >;  /**< Slave byte control                           */
    using NOSTRETCH  = regbits< type, 17,  1 >;  /**< Clock stretching disable                     */
    using WUPEN      = regbits< type, 18,  1 >;  /**< Wakeup from STOP enable                      */
    using GCEN       = regbits< type, 19,  1 >;  /**< General call enable                          */
    using SMBHEN     = regbits< type, 20,  1 >;  /**< SMBus Host address enable                    */
    using SMBDEN     = regbits< type, 21,  1 >;  /**< SMBus Device Default address enable          */
    using ALERTEN    = regbits< type, 22,  1 >;  /**< SMBUS alert enable                           */
    using PECEN      = regbits< type, 23,  1 >;  /**< PEC enable                                   */
  };

  /**
   * Control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using PECBYTE  = regbits< type, 26,  1 >;  /**< Packet error checking byte                                        */
    using AUTOEND  = regbits< type, 25,  1 >;  /**< Automatic end mode (master mode)                                  */
    using RELOAD   = regbits< type, 24,  1 >;  /**< NBYTES reload mode                                                */
    using NBYTES   = regbits< type, 16,  8 >;  /**< Number of bytes                                                   */
    using NACK     = regbits< type, 15,  1 >;  /**< NACK generation (slave mode)                                      */
    using STOP     = regbits< type, 14,  1 >;  /**< Stop generation (master mode)                                     */
    using START    = regbits< type, 13,  1 >;  /**< Start generation                                                  */
    using HEAD10R  = regbits< type, 12,  1 >;  /**< 10-bit address header only read direction (master receiver mode)  */
    using ADD10    = regbits< type, 11,  1 >;  /**< 10-bit addressing mode (master mode)                              */
    using RD_WRN   = regbits< type, 10,  1 >;  /**< Transfer direction (master mode)                                  */
    using SADD     = regbits< type,  0, 10 >;  /**< Slave address bit (master mode)                                   */
  };

  /**
   * Own address register 1
   */
  struct OAR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using OA1      = regbits< type,  0, 10 >;  /**< Interface address          */
    using OA1MODE  = regbits< type, 10,  1 >;  /**< Own Address 1 10-bit mode  */
    using OA1EN    = regbits< type, 15,  1 >;  /**< Own Address 1 enable       */
  };

  /**
   * Own address register 2
   */
  struct OAR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using OA2     = regbits< type,  1,  7 >;  /**< Interface address     */
    using OA2MSK  = regbits< type,  8,  3 >;  /**< Own Address 2 masks   */
    using OA2EN   = regbits< type, 15,  1 >;  /**< Own Address 2 enable  */
  };

  /**
   * Timing register
   */
  struct TIMINGR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using SCLL    = regbits< type,  0,  8 >;  /**< SCL low period (master mode)   */
    using SCLH    = regbits< type,  8,  8 >;  /**< SCL high period (master mode)  */
    using SDADEL  = regbits< type, 16,  4 >;  /**< Data hold time                 */
    using SCLDEL  = regbits< type, 20,  4 >;  /**< Data setup time                */
    using PRESC   = regbits< type, 28,  4 >;  /**< Timing prescaler               */
  };

  /**
   * Status register 1
   */
  struct TIMEOUTR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using TIMEOUTA  = regbits< type,  0, 12 >;  /**< Bus timeout A                  */
    using TIDLE     = regbits< type, 12,  1 >;  /**< Idle clock timeout detection   */
    using TIMOUTEN  = regbits< type, 15,  1 >;  /**< Clock timeout enable           */
    using TIMEOUTB  = regbits< type, 16, 12 >;  /**< Bus timeout B                  */
    using TEXTEN    = regbits< type, 31,  1 >;  /**< Extended clock timeout enable  */
  };

  /**
   * Interrupt and Status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000001 >;

    using ADDCODE  = regbits< type, 17,  7 >;  /**< Address match code (Slave mode)              */
    using DIR      = regbits< type, 16,  1 >;  /**< Transfer direction (Slave mode)              */
    using BUSY     = regbits< type, 15,  1 >;  /**< Bus busy                                     */
    using ALERT    = regbits< type, 13,  1 >;  /**< SMBus alert                                  */
    using TIMEOUT  = regbits< type, 12,  1 >;  /**< Timeout or t_low detection flag              */
    using PECERR   = regbits< type, 11,  1 >;  /**< PEC Error in reception                       */
    using OVR      = regbits< type, 10,  1 >;  /**< Overrun/Underrun (slave mode)                */
    using ARLO     = regbits< type,  9,  1 >;  /**< Arbitration lost                             */
    using BERR     = regbits< type,  8,  1 >;  /**< Bus error                                    */
    using TCR      = regbits< type,  7,  1 >;  /**< Transfer Complete Reload                     */
    using TC       = regbits< type,  6,  1 >;  /**< Transfer Complete (master mode)              */
    using STOPF    = regbits< type,  5,  1 >;  /**< Stop detection flag                          */
    using NACKF    = regbits< type,  4,  1 >;  /**< Not acknowledge received flag                */
    using ADDR     = regbits< type,  3,  1 >;  /**< Address matched (slave mode)                 */
    using RXNE     = regbits< type,  2,  1 >;  /**< Receive data register not empty (receivers)  */
    using TXIS     = regbits< type,  1,  1 >;  /**< Transmit interrupt status (transmitters)     */
    using TXE      = regbits< type,  0,  1 >;  /**< Transmit data register empty (transmitters)  */
  };

  /**
   * Interrupt clear register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x1c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, wo, 0x00000000 >;

    using ALERTCF   = regbits< type, 13,  1 >;  /**< Alert flag clear              */
    using TIMOUTCF  = regbits< type, 12,  1 >;  /**< Timeout detection flag clear  */
    using PECCF     = regbits< type, 11,  1 >;  /**< PEC Error flag clear          */
    using OVRCF     = regbits< type, 10,  1 >;  /**< Overrun/Underrun flag clear   */
    using ARLOCF    = regbits< type,  9,  1 >;  /**< Arbitration lost flag clear   */
    using BERRCF    = regbits< type,  8,  1 >;  /**< Bus error flag clear          */
    using STOPCF    = regbits< type,  5,  1 >;  /**< Stop detection flag clear     */
    using NACKCF    = regbits< type,  4,  1 >;  /**< Not Acknowledge flag clear    */
    using ADDRCF    = regbits< type,  3,  1 >;  /**< Address Matched flag clear    */
  };

  /**
   * PEC register
   */
  struct PECR
  : public reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >;

    using PEC  = regbits< type,  0,  8 >;  /**< Packet error checking register  */
  };

  /**
   * Receive data register
   */
  struct RXDR
  : public reg< uint32_t, base_addr + 0x24, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0x00000000 >;

    using RXDATA  = regbits< type,  0,  8 >;  /**< 8-bit receive data  */
  };

  /**
   * Transmit data register
   */
  struct TXDR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using TXDATA  = regbits< type,  0,  8 >;  /**< 8-bit transmit data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2C2_HPP_INCLUDED
