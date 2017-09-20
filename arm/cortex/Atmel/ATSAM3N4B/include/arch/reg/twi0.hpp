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
//  Import from CMSIS-SVD: "Atmel/ATSAM3N4B.svd"
//
//  vendor: Atmel
//  name: ATSAM3N4B
//  series: SAM3N
//  version: 20130131
//  description: Atmel ATSAM3N4B device: Cortex-M3 Microcontroller with 256KB Flash, 64 Pins (refer to http://www.atmel.com/devices/SAM3N4B.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0x40018000;

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
    using ENDRX   = regbits< type, 12,  1 >;  /**< End of RX buffer                                             */
    using ENDTX   = regbits< type, 13,  1 >;  /**< End of TX buffer                                             */
    using RXBUFF  = regbits< type, 14,  1 >;  /**< RX Buffer Full                                               */
    using TXBUFE  = regbits< type, 15,  1 >;  /**< TX Buffer Empty                                              */
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
    using ENDRX   = regbits< type, 12,  1 >;  /**< End of Receive Buffer Interrupt Enable            */
    using ENDTX   = regbits< type, 13,  1 >;  /**< End of Transmit Buffer Interrupt Enable           */
    using RXBUFF  = regbits< type, 14,  1 >;  /**< Receive Buffer Full Interrupt Enable              */
    using TXBUFE  = regbits< type, 15,  1 >;  /**< Transmit Buffer Empty Interrupt Enable            */
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
    using ENDRX   = regbits< type, 12,  1 >;  /**< End of Receive Buffer Interrupt Disable            */
    using ENDTX   = regbits< type, 13,  1 >;  /**< End of Transmit Buffer Interrupt Disable           */
    using RXBUFF  = regbits< type, 14,  1 >;  /**< Receive Buffer Full Interrupt Disable              */
    using TXBUFE  = regbits< type, 15,  1 >;  /**< Transmit Buffer Empty Interrupt Disable            */
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
    using ENDRX   = regbits< type, 12,  1 >;  /**< End of Receive Buffer Interrupt Mask            */
    using ENDTX   = regbits< type, 13,  1 >;  /**< End of Transmit Buffer Interrupt Mask           */
    using RXBUFF  = regbits< type, 14,  1 >;  /**< Receive Buffer Full Interrupt Mask              */
    using TXBUFE  = regbits< type, 15,  1 >;  /**< Transmit Buffer Empty Interrupt Mask            */
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

  /**
   * Receive Pointer Register
   */
  struct RPR
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >;

    using RXPTR  = regbits< type,  0, 32 >;  /**< Receive Pointer Register  */
  };

  /**
   * Receive Counter Register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >;

    using RXCTR  = regbits< type,  0, 16 >;  /**< Receive Counter Register  */
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
   * Receive Next Pointer Register
   */
  struct RNPR
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >;

    using RXNPTR  = regbits< type,  0, 32 >;  /**< Receive Next Pointer  */
  };

  /**
   * Receive Next Counter Register
   */
  struct RNCR
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >;

    using RXNCTR  = regbits< type,  0, 16 >;  /**< Receive Next Counter  */
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

#endif // ARCH_REG_TWI0_HPP_INCLUDED
