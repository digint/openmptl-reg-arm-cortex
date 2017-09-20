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
//  Import from CMSIS-SVD: "STMicro/STM32L15xxE.svd"
//
//  name: STM32L15xxE
//  version: 1.0
//  description: STM32L15xxE
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
 * Inter-integrated circuit
 */
struct I2C1
{
  static constexpr reg_addr_t base_addr = 0x40005400;

  /**
   * CR1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using SWRST      = regbits< type, 15,  1 >;  /**< Software reset                                 */
    using ALERT      = regbits< type, 13,  1 >;  /**< SMBus alert                                    */
    using PEC        = regbits< type, 12,  1 >;  /**< Packet error checking                          */
    using POS        = regbits< type, 11,  1 >;  /**< Acknowledge/PEC Position (for data reception)  */
    using ACK        = regbits< type, 10,  1 >;  /**< Acknowledge enable                             */
    using STOP       = regbits< type,  9,  1 >;  /**< Stop generation                                */
    using START      = regbits< type,  8,  1 >;  /**< Start generation                               */
    using NOSTRETCH  = regbits< type,  7,  1 >;  /**< Clock stretching disable (Slave mode)          */
    using ENGC       = regbits< type,  6,  1 >;  /**< General call enable                            */
    using ENPEC      = regbits< type,  5,  1 >;  /**< PEC enable                                     */
    using ENARP      = regbits< type,  4,  1 >;  /**< ARP enable                                     */
    using SMBTYPE    = regbits< type,  3,  1 >;  /**< SMBus type                                     */
    using SMBUS      = regbits< type,  1,  1 >;  /**< SMBus mode                                     */
    using PE         = regbits< type,  0,  1 >;  /**< Peripheral enable                              */
  };

  /**
   * CR2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using LAST     = regbits< type, 12,  1 >;  /**< DMA last transfer           */
    using DMAEN    = regbits< type, 11,  1 >;  /**< DMA requests enable         */
    using ITBUFEN  = regbits< type, 10,  1 >;  /**< Buffer interrupt enable     */
    using ITEVTEN  = regbits< type,  9,  1 >;  /**< Event interrupt enable      */
    using ITERREN  = regbits< type,  8,  1 >;  /**< Error interrupt enable      */
    using FREQ     = regbits< type,  0,  6 >;  /**< Peripheral clock frequency  */
  };

  /**
   * OAR1
   */
  struct OAR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using ADDMODE  = regbits< type, 15,  1 >;  /**< ADDMODE            */
    using ADD_8_9  = regbits< type,  8,  2 >;  /**< Interface address  */
    using ADD_1_7  = regbits< type,  1,  7 >;  /**< Interface address  */
    using ADD_0    = regbits< type,  0,  1 >;  /**< Interface address  */
  };

  /**
   * OAR2
   */
  struct OAR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using ADD2    = regbits< type,  1,  7 >;  /**< Interface address            */
    using ENDUAL  = regbits< type,  0,  1 >;  /**< Dual addressing mode enable  */
  };

  /**
   * DR
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    // fixme: Field name equals parent register name: DR
    using DR_ = regbits< type,  0,  8 >;  /**< -bit data register  */
  };

  /**
   * SR1
   */
  struct SR1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000 >;

    using SMBALERT  = regbits< type, 15,  1 >;  /**< SMBus alert                                      */
    using TIMEOUT   = regbits< type, 14,  1 >;  /**< Timeout or Tlow error                            */
    using PECERR    = regbits< type, 12,  1 >;  /**< PEC Error in reception                           */
    using OVR       = regbits< type, 11,  1 >;  /**< Overrun/Underrun                                 */
    using AF        = regbits< type, 10,  1 >;  /**< Acknowledge failure                              */
    using ARLO      = regbits< type,  9,  1 >;  /**< Arbitration lost (master mode)                   */
    using BERR      = regbits< type,  8,  1 >;  /**< Bus error                                        */
    using TxE       = regbits< type,  7,  1 >;  /**< Data register empty (transmitters)               */
    using RxNE      = regbits< type,  6,  1 >;  /**< Data register not empty (receivers)              */
    using STOPF     = regbits< type,  4,  1 >;  /**< Stop detection (slave mode)                      */
    using ADD10     = regbits< type,  3,  1 >;  /**< 10-bit header sent (Master mode)                 */
    using BTF       = regbits< type,  2,  1 >;  /**< Byte transfer finished                           */
    using ADDR      = regbits< type,  1,  1 >;  /**< Address sent (master mode)/matched (slave mode)  */
    using SB        = regbits< type,  0,  1 >;  /**< Start bit (Master mode)                          */
  };

  /**
   * SR2
   */
  struct SR2
  : public reg< uint32_t, base_addr + 0x18, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x0000 >;

    using PEC         = regbits< type,  8,  8 >;  /**< acket error checking register              */
    using DUALF       = regbits< type,  7,  1 >;  /**< Dual flag (Slave mode)                     */
    using SMBHOST     = regbits< type,  6,  1 >;  /**< SMBus host header (Slave mode)             */
    using SMBDEFAULT  = regbits< type,  5,  1 >;  /**< SMBus device default address (Slave mode)  */
    using GENCALL     = regbits< type,  4,  1 >;  /**< General call address (Slave mode)          */
    using TRA         = regbits< type,  2,  1 >;  /**< Transmitter/receiver                       */
    using BUSY        = regbits< type,  1,  1 >;  /**< Bus busy                                   */
    using MSL         = regbits< type,  0,  1 >;  /**< Master/slave                               */
  };

  /**
   * CCR
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x0000 >;

    using F_S   = regbits< type, 15,  1 >;  /**< I2C master mode selection                                   */
    using DUTY  = regbits< type, 14,  1 >;  /**< Fast mode duty cycle                                        */
    // fixme: Field name equals parent register name: CCR
    using CCR_  = regbits< type,  0, 12 >;  /**< Clock control register in Fast/Standard mode (Master mode)  */
  };

  /**
   * TRISE
   */
  struct TRISE
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0002 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0002 >;

    // fixme: Field name equals parent register name: TRISE
    using TRISE_ = regbits< type,  0,  6 >;  /**< Maximum rise time in Fast/Standard mode (Master mode)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2C1_HPP_INCLUDED
