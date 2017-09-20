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
//  Import from CMSIS-SVD: "Freescale/MK20DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK20DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK20DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2C1_HPP_INCLUDED
#define ARCH_REG_I2C1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Inter-Integrated Circuit
 */
struct I2C1
{
  static constexpr reg_addr_t base_addr = 0x40067000;

  /**
   * I2C Address Register 1
   */
  struct A1
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using AD  = regbits< type,  1,  7 >;  /**< Address  */
  };

  /**
   * I2C Frequency Divider register
   */
  struct F
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using ICR   = regbits< type,  0,  6 >;  /**< Clock rate                */
    using MULT  = regbits< type,  6,  2 >;  /**< no description available  */
  };

  /**
   * I2C Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using DMAEN  = regbits< type,  0,  1 >;  /**< DMA enable                   */
    using WUEN   = regbits< type,  1,  1 >;  /**< Wakeup enable                */
    using RSTA   = regbits< type,  2,  1 >;  /**< Repeat START                 */
    using TXAK   = regbits< type,  3,  1 >;  /**< Transmit acknowledge enable  */
    using TX     = regbits< type,  4,  1 >;  /**< Transmit mode select         */
    using MST    = regbits< type,  5,  1 >;  /**< Master mode select           */
    using IICIE  = regbits< type,  6,  1 >;  /**< I2C interrupt enable         */
    using IICEN  = regbits< type,  7,  1 >;  /**< I2C enable                   */
  };

  /**
   * I2C Status Register
   */
  struct S
  : public reg< uint8_t, base_addr + 0x3, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0x80 >;

    using RXAK   = regbits< type,  0,  1 >;  /**< Receive acknowledge     */
    using IICIF  = regbits< type,  1,  1 >;  /**< Interrupt flag          */
    using SRW    = regbits< type,  2,  1 >;  /**< Slave read/write        */
    using RAM    = regbits< type,  3,  1 >;  /**< Range address match     */
    using ARBL   = regbits< type,  4,  1 >;  /**< Arbitration lost        */
    using BUSY   = regbits< type,  5,  1 >;  /**< Bus busy                */
    using IAAS   = regbits< type,  6,  1 >;  /**< Addressed as a slave    */
    using TCF    = regbits< type,  7,  1 >;  /**< Transfer complete flag  */
  };

  /**
   * I2C Data I/O register
   */
  struct D
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using DATA  = regbits< type,  0,  8 >;  /**< Data  */
  };

  /**
   * I2C Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using AD     = regbits< type,  0,  3 >;  /**< Slave address                  */
    using RMEN   = regbits< type,  3,  1 >;  /**< Range address matching enable  */
    using SBRC   = regbits< type,  4,  1 >;  /**< Slave baud rate control        */
    using HDRS   = regbits< type,  5,  1 >;  /**< High drive select              */
    using ADEXT  = regbits< type,  6,  1 >;  /**< Address extension              */
    using GCAEN  = regbits< type,  7,  1 >;  /**< General call address enable    */
  };

  /**
   * I2C Programmable Input Glitch Filter register
   */
  struct FLT
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    // fixme: Field name equals parent register name: FLT
    using FLT_ = regbits< type,  0,  5 >;  /**< I2C programmable filter factor  */
  };

  /**
   * I2C Range Address register
   */
  struct RA
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using RAD  = regbits< type,  1,  7 >;  /**< Range slave address  */
  };

  /**
   * I2C SMBus Control and Status register
   */
  struct SMB
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using SHTF2IE  = regbits< type,  0,  1 >;  /**< SHTF2 interrupt enable               */
    using SHTF2    = regbits< type,  1,  1 >;  /**< SCL high timeout flag 2              */
    using SHTF1    = regbits< type,  2,  1 >;  /**< SCL high timeout flag 1              */
    using SLTF     = regbits< type,  3,  1 >;  /**< SCL low timeout flag                 */
    using TCKSEL   = regbits< type,  4,  1 >;  /**< Timeout counter clock select         */
    using SIICAEN  = regbits< type,  5,  1 >;  /**< Second I2C address enable            */
    using ALERTEN  = regbits< type,  6,  1 >;  /**< SMBus alert response address enable  */
    using FACK     = regbits< type,  7,  1 >;  /**< Fast NACK/ACK enable                 */
  };

  /**
   * I2C Address Register 2
   */
  struct A2
  : public reg< uint8_t, base_addr + 0x9, rw, 0xC2 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0xC2 >;

    using SAD  = regbits< type,  1,  7 >;  /**< SMBus address  */
  };

  /**
   * I2C SCL Low Timeout Register High
   */
  struct SLTH
  : public reg< uint8_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0 >;

    using SSLT  = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * I2C SCL Low Timeout Register Low
   */
  struct SLTL
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    using SSLT  = regbits< type,  0,  8 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2C1_HPP_INCLUDED
