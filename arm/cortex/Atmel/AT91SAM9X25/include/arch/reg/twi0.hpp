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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9X25.svd"
//
//  vendor: Atmel
//  name: AT91SAM9X25
//  series: SAM9X
//  version: 20130207
//  description: Atmel AT91SAM9X25 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Dual Ethernet and CAN, HS USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9X25.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TWI0_HPP_INCLUDED
#define ARCH_REG_TWI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Two-wire Interface 0
 */
struct TWI0
{
  static constexpr reg_addr_t base_addr = 0xf8010000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using START  = regbits< type,  0,  1 >;  /**< Send a START Condition    */
    using STOP   = regbits< type,  1,  1 >;  /**< Send a STOP Condition     */
    using MSEN   = regbits< type,  2,  1 >;  /**< TWI Master Mode Enabled   */
    using MSDIS  = regbits< type,  3,  1 >;  /**< TWI Master Mode Disabled  */
    using SVEN   = regbits< type,  4,  1 >;  /**< TWI Slave Mode Enabled    */
    using SVDIS  = regbits< type,  5,  1 >;  /**< TWI Slave Mode Disabled   */
    using QUICK  = regbits< type,  6,  1 >;  /**< SMBUS Quick Command       */
    using SWRST  = regbits< type,  7,  1 >;  /**< Software Reset            */
  };

  /**
   * Master Mode Register
   */
  struct MMR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using IADRSZ  = regbits< type,  8,  2 >;  /**< Internal Device Address Size  */
    using MREAD   = regbits< type, 12,  1 >;  /**< Master Read Direction         */
    using DADR    = regbits< type, 16,  7 >;  /**< Device Address                */
  };

  /**
   * Slave Mode Register
   */
  struct SMR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using SADR  = regbits< type, 16,  7 >;  /**< Slave Address  */
  };

  /**
   * Internal Address Register
   */
  struct IADR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: IADR
    using IADR_ = regbits< type,  0, 24 >;  /**< Internal Address  */
  };

  /**
   * Clock Waveform Generator Register
   */
  struct CWGR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using CLDIV  = regbits< type,  0,  8 >;  /**< Clock Low Divider   */
    using CHDIV  = regbits< type,  8,  8 >;  /**< Clock High Divider  */
    using CKDIV  = regbits< type, 16,  3 >;  /**< Clock Divider       */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x0000F009 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x0000F009 >;

    using TXCOMP  = regbits< type,  0,  1 >;  /**< Transmission Completed (automatically set / reset)           */
    using RXRDY   = regbits< type,  1,  1 >;  /**< Receive Holding Register Ready (automatically set / reset)   */
    using TXRDY   = regbits< type,  2,  1 >;  /**< Transmit Holding Register Ready (automatically set / reset)  */
    using SVREAD  = regbits< type,  3,  1 >;  /**< Slave Read (automatically set / reset)                       */
    using SVACC   = regbits< type,  4,  1 >;  /**< Slave Access (automatically set / reset)                     */
    using GACC    = regbits< type,  5,  1 >;  /**< General Call Access (clear on read)                          */
    using OVRE    = regbits< type,  6,  1 >;  /**< Overrun Error (clear on read)                                */
    using NACK    = regbits< type,  8,  1 >;  /**< Not Acknowledged (clear on read)                             */
    using ARBLST  = regbits< type,  9,  1 >;  /**< Arbitration Lost (clear on read)                             */
    using SCLWS   = regbits< type, 10,  1 >;  /**< Clock Wait State (automatically set / reset)                 */
    using EOSACC  = regbits< type, 11,  1 >;  /**< End Of Slave Access (clear on read)                          */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using TXCOMP  = regbits< type,  0,  1 >;  /**< Transmission Completed Interrupt Enable           */
    using RXRDY   = regbits< type,  1,  1 >;  /**< Receive Holding Register Ready Interrupt Enable   */
    using TXRDY   = regbits< type,  2,  1 >;  /**< Transmit Holding Register Ready Interrupt Enable  */
    using SVACC   = regbits< type,  4,  1 >;  /**< Slave Access Interrupt Enable                     */
    using GACC    = regbits< type,  5,  1 >;  /**< General Call Access Interrupt Enable              */
    using OVRE    = regbits< type,  6,  1 >;  /**< Overrun Error Interrupt Enable                    */
    using NACK    = regbits< type,  8,  1 >;  /**< Not Acknowledge Interrupt Enable                  */
    using ARBLST  = regbits< type,  9,  1 >;  /**< Arbitration Lost Interrupt Enable                 */
    using SCL_WS  = regbits< type, 10,  1 >;  /**< Clock Wait State Interrupt Enable                 */
    using EOSACC  = regbits< type, 11,  1 >;  /**< End Of Slave Access Interrupt Enable              */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using TXCOMP  = regbits< type,  0,  1 >;  /**< Transmission Completed Interrupt Disable           */
    using RXRDY   = regbits< type,  1,  1 >;  /**< Receive Holding Register Ready Interrupt Disable   */
    using TXRDY   = regbits< type,  2,  1 >;  /**< Transmit Holding Register Ready Interrupt Disable  */
    using SVACC   = regbits< type,  4,  1 >;  /**< Slave Access Interrupt Disable                     */
    using GACC    = regbits< type,  5,  1 >;  /**< General Call Access Interrupt Disable              */
    using OVRE    = regbits< type,  6,  1 >;  /**< Overrun Error Interrupt Disable                    */
    using NACK    = regbits< type,  8,  1 >;  /**< Not Acknowledge Interrupt Disable                  */
    using ARBLST  = regbits< type,  9,  1 >;  /**< Arbitration Lost Interrupt Disable                 */
    using SCL_WS  = regbits< type, 10,  1 >;  /**< Clock Wait State Interrupt Disable                 */
    using EOSACC  = regbits< type, 11,  1 >;  /**< End Of Slave Access Interrupt Disable              */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using TXCOMP  = regbits< type,  0,  1 >;  /**< Transmission Completed Interrupt Mask           */
    using RXRDY   = regbits< type,  1,  1 >;  /**< Receive Holding Register Ready Interrupt Mask   */
    using TXRDY   = regbits< type,  2,  1 >;  /**< Transmit Holding Register Ready Interrupt Mask  */
    using SVACC   = regbits< type,  4,  1 >;  /**< Slave Access Interrupt Mask                     */
    using GACC    = regbits< type,  5,  1 >;  /**< General Call Access Interrupt Mask              */
    using OVRE    = regbits< type,  6,  1 >;  /**< Overrun Error Interrupt Mask                    */
    using NACK    = regbits< type,  8,  1 >;  /**< Not Acknowledge Interrupt Mask                  */
    using ARBLST  = regbits< type,  9,  1 >;  /**< Arbitration Lost Interrupt Mask                 */
    using SCL_WS  = regbits< type, 10,  1 >;  /**< Clock Wait State Interrupt Mask                 */
    using EOSACC  = regbits< type, 11,  1 >;  /**< End Of Slave Access Interrupt Mask              */
  };

  /**
   * Receive Holding Register
   */
  struct RHR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using RXDATA  = regbits< type,  0,  8 >;  /**< Master or Slave Receive Holding Data  */
  };

  /**
   * Transmit Holding Register
   */
  struct THR
  : public reg< uint32_t, base_addr + 0x00000034, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, wo, 0x00000000 >;

    using TXDATA  = regbits< type,  0,  8 >;  /**< Master or Slave Transmit Holding Data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TWI0_HPP_INCLUDED
