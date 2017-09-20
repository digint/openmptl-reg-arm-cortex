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
//  Import from CMSIS-SVD: "Freescale/MKE14D7.svd"
//
//  name: MKE14D7
//  version: 1.6
//  description: MKE14D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2C0_HPP_INCLUDED
#define ARCH_REG_I2C0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Inter-Integrated Circuit
 */
struct I2C0
{
  static constexpr reg_addr_t base_addr = 0x40047000;

  /**
   * I2C Address Register 1
   */
  struct A1
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< no description available  */
    using AD        = regbits< type,  1,  7 >;  /**< Address                   */
  };

  /**
   * I2C Frequency Divider register
   */
  struct F
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using ICR   = regbits< type,  0,  6 >;  /**< ClockRate                 */
    using MULT  = regbits< type,  6,  2 >;  /**< no description available  */
  };

  /**
   * I2C Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using DMAEN  = regbits< type,  0,  1 >;  /**< DMA Enable                   */
    using WUEN   = regbits< type,  1,  1 >;  /**< Wakeup Enable                */
    using RSTA   = regbits< type,  2,  1 >;  /**< Repeat START                 */
    using TXAK   = regbits< type,  3,  1 >;  /**< Transmit Acknowledge Enable  */
    using TX     = regbits< type,  4,  1 >;  /**< Transmit Mode Select         */
    using MST    = regbits< type,  5,  1 >;  /**< Master Mode Select           */
    using IICIE  = regbits< type,  6,  1 >;  /**< I2C Interrupt Enable         */
    using IICEN  = regbits< type,  7,  1 >;  /**< I2C Enable                   */
  };

  /**
   * I2C Status register
   */
  struct S
  : public reg< uint8_t, base_addr + 0x3, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0x80 >;

    using RXAK   = regbits< type,  0,  1 >;  /**< Receive Acknowledge     */
    using IICIF  = regbits< type,  1,  1 >;  /**< Interrupt Flag          */
    using SRW    = regbits< type,  2,  1 >;  /**< Slave Read/Write        */
    using RAM    = regbits< type,  3,  1 >;  /**< Range Address Match     */
    using ARBL   = regbits< type,  4,  1 >;  /**< Arbitration Lost        */
    using BUSY   = regbits< type,  5,  1 >;  /**< Bus Busy                */
    using IAAS   = regbits< type,  6,  1 >;  /**< Addressed As A Slave    */
    using TCF    = regbits< type,  7,  1 >;  /**< Transfer Complete Flag  */
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

    using AD     = regbits< type,  0,  3 >;  /**< Slave Address                  */
    using RMEN   = regbits< type,  3,  1 >;  /**< Range Address Matching Enable  */
    using SBRC   = regbits< type,  4,  1 >;  /**< Slave Baud Rate Control        */
    using HDRS   = regbits< type,  5,  1 >;  /**< High Drive Select              */
    using ADEXT  = regbits< type,  6,  1 >;  /**< Address Extension              */
    using GCAEN  = regbits< type,  7,  1 >;  /**< General Call Address Enable    */
  };

  /**
   * I2C Programmable Input Glitch Filter register
   */
  struct FLT
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    // fixme: Field name equals parent register name: FLT
    using FLT_    = regbits< type,  0,  5 >;  /**< I2C Programmable Filter Factor  */
    using STOPIE  = regbits< type,  5,  1 >;  /**< I2C Bus Stop Interrupt Enable   */
    using STOPF   = regbits< type,  6,  1 >;  /**< I2C Bus Stop Detect Flag        */
    using SHEN    = regbits< type,  7,  1 >;  /**< Stop Hold Enable                */
  };

  /**
   * I2C Range Address register
   */
  struct RA
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< no description available  */
    using RAD       = regbits< type,  1,  7 >;  /**< Range Slave Address       */
  };

  /**
   * I2C SMBus Control and Status register
   */
  struct SMB
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using SHTF2IE  = regbits< type,  0,  1 >;  /**< SHTF2 Interrupt Enable               */
    using SHTF2    = regbits< type,  1,  1 >;  /**< SCL High Timeout Flag 2              */
    using SHTF1    = regbits< type,  2,  1 >;  /**< SCL High Timeout Flag 1              */
    using SLTF     = regbits< type,  3,  1 >;  /**< SCL Low Timeout Flag                 */
    using TCKSEL   = regbits< type,  4,  1 >;  /**< Timeout Counter Clock Select         */
    using SIICAEN  = regbits< type,  5,  1 >;  /**< Second I2C Address Enable            */
    using ALERTEN  = regbits< type,  6,  1 >;  /**< SMBus Alert Response Address Enable  */
    using FACK     = regbits< type,  7,  1 >;  /**< Fast NACK/ACK Enable                 */
  };

  /**
   * I2C Address Register 2
   */
  struct A2
  : public reg< uint8_t, base_addr + 0x9, rw, 0xC2 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0xC2 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< no description available  */
    using SAD       = regbits< type,  1,  7 >;  /**< SMBus Address             */
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

#endif // ARCH_REG_I2C0_HPP_INCLUDED
