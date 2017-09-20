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
//  Import from CMSIS-SVD: "Fujitsu/MB9BF41xN.svd"
//
//  name: MB9BF41xN
//  version: 1.8
//  description: MB9BF41xN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MFS7_HPP_INCLUDED
#define ARCH_REG_MFS7_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Multi-function Serial Interface 4
 *
 * (derived from: MFS4)
 */
struct MFS7
{
  static constexpr reg_addr_t base_addr = 0x40038700;

  /**
   * Serial Control Register
   */
  struct UART_SCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using UPCL  = regbits< type,  7,  1 >;  /**< Programmable Clear bit                  */
    using RIE   = regbits< type,  4,  1 >;  /**< Received interrupt enable bit           */
    using TIE   = regbits< type,  3,  1 >;  /**< Transmit interrupt enable bit           */
    using TBIE  = regbits< type,  2,  1 >;  /**< Transmit bus idle interrupt enable bit  */
    using RXE   = regbits< type,  1,  1 >;  /**< Received operation enable bit           */
    using TXE   = regbits< type,  0,  1 >;  /**< Transmission operation enable bit       */
  };

  /**
   * Serial Mode Register
   */
  struct UART_SMR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using MD    = regbits< type,  5,  3 >;  /**< Operation mode set bit         */
    using WUCR  = regbits< type,  4,  1 >;  /**< Wake-up control bit            */
    using SBL   = regbits< type,  3,  1 >;  /**< Stop bit length select bit     */
    using BDS   = regbits< type,  2,  1 >;  /**< Transfer direction select bit  */
    using SOE   = regbits< type,  0,  1 >;  /**< Serial data output enable bit  */
  };

  /**
   * Serial Status Register
   */
  struct UART_SSR
  : public reg< uint8_t, base_addr + 0x5, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x03 >;

    using REC   = regbits< type,  7,  1 >;  /**< Received error flag clear bit                               */
    using PE    = regbits< type,  5,  1 >;  /**< Parity error flag bit (only functions in operation mode 0)  */
    using FRE   = regbits< type,  4,  1 >;  /**< Framing error flag bit                                      */
    using ORE   = regbits< type,  3,  1 >;  /**< Overrun error flag bit                                      */
    using RDRF  = regbits< type,  2,  1 >;  /**< Received data full flag bit                                 */
    using TDRE  = regbits< type,  1,  1 >;  /**< Transmit data empty flag bit                                */
    using TBI   = regbits< type,  0,  1 >;  /**< Transmit bus idle flag                                      */
  };

  /**
   * Extended Communication Control Register
   */
  struct UART_ESCR
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using FLWEN  = regbits< type,  7,  1 >;  /**< Flow control enable bit                                 */
    using ESBL   = regbits< type,  6,  1 >;  /**< Extension stop bit length select bit                    */
    using INV    = regbits< type,  5,  1 >;  /**< Inverted serial data format bit                         */
    using PEN    = regbits< type,  4,  1 >;  /**< Parity enable bit (only functions in operation mode 0)  */
    using P      = regbits< type,  3,  1 >;  /**< Parity select bit (only functions in operation mode 0)  */
    using L      = regbits< type,  0,  3 >;  /**< Data length select bit                                  */
  };

  /**
   * Received Data Register
   */
  struct UART_RDR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
  };

  /**
   * Transmit Data Register
   */
  struct UART_TDR
  : public reg< uint16_t, base_addr + 0x8, wo, 0x01FF >
  {
  };

  /**
   * Baud Rate Generator Registers
   */
  struct UART_BGR
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using EXT   = regbits< type, 15,  1 >;  /**< External clock select bit        */
    using BGR1  = regbits< type,  8,  7 >;  /**< Baud Rate Generator Registers 1  */
    using BGR0  = regbits< type,  0,  8 >;  /**< Baud Rate Generator Registers 0  */
  };

  /**
   * FIFO Control Register 1
   */
  struct UART_FCR1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x04 >;

    using FLSTE  = regbits< type,  4,  1 >;  /**< Re-transmission data lost detect enable bit  */
    using FRIIE  = regbits< type,  3,  1 >;  /**< Received FIFO idle detection enable bit      */
    using FDRQ   = regbits< type,  2,  1 >;  /**< Transmit FIFO data request bit               */
    using FTIE   = regbits< type,  1,  1 >;  /**< Transmit FIFO interrupt enable bit           */
    using FSEL   = regbits< type,  0,  1 >;  /**< FIFO select bit                              */
  };

  /**
   * FIFO Control Register 0
   */
  struct UART_FCR0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using FLST  = regbits< type,  6,  1 >;  /**< FIFO re-transmit data lost flag bit  */
    using FLD   = regbits< type,  5,  1 >;  /**< FIFO pointer reload bit              */
    using FSET  = regbits< type,  4,  1 >;  /**< FIFO pointer save bit                */
    using FCL2  = regbits< type,  3,  1 >;  /**< FIFO2 reset bit                      */
    using FCL1  = regbits< type,  2,  1 >;  /**< FIFO1 reset bit                      */
    using FE2   = regbits< type,  1,  1 >;  /**< FIFO2 operation enable bit           */
    using FE1   = regbits< type,  0,  1 >;  /**< FIFO1 operation enable bit           */
  };

  /**
   * FIFO Byte Register 1
   */
  struct UART_FBYTE1
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
  };

  /**
   * FIFO Byte Register 2
   */
  struct UART_FBYTE2
  : public reg< uint8_t, base_addr + 0x19, rw, 0x00 >
  {
  };

  /**
   * Serial Control Register
   */
  struct CSIO_SCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using UPCL  = regbits< type,  7,  1 >;  /**< Programmable clear bit                  */
    using MS    = regbits< type,  6,  1 >;  /**< Master/Slave function select bit        */
    using SPI   = regbits< type,  5,  1 >;  /**< SPI corresponding bit                   */
    using RIE   = regbits< type,  4,  1 >;  /**< Received interrupt enable bit           */
    using TIE   = regbits< type,  3,  1 >;  /**< Transmit interrupt enable bit           */
    using TBIE  = regbits< type,  2,  1 >;  /**< Transmit bus idle interrupt enable bit  */
    using RXE   = regbits< type,  1,  1 >;  /**< Data received enable bit                */
    using TXE   = regbits< type,  0,  1 >;  /**< Data transmission enable bit            */
  };

  /**
   * Serial Mode Register
   */
  struct CSIO_SMR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using MD     = regbits< type,  5,  3 >;  /**< Operation mode set bits                     */
    using WUCR   = regbits< type,  4,  1 >;  /**< Wake-up control bit                         */
    using SCINV  = regbits< type,  3,  1 >;  /**< Serial clock invert bit                     */
    using BDS    = regbits< type,  2,  1 >;  /**< Transfer direction select bit               */
    using SCKE   = regbits< type,  1,  1 >;  /**< Master mode serial clock output enable bit  */
    using SOE    = regbits< type,  0,  1 >;  /**< Serial data output enable bit               */
  };

  /**
   * Serial Status Register
   */
  struct CSIO_SSR
  : public reg< uint8_t, base_addr + 0x5, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x03 >;

    using REC   = regbits< type,  7,  1 >;  /**< Received error flag clear bit  */
    using ORE   = regbits< type,  3,  1 >;  /**< Overrun error flag bit         */
    using RDRF  = regbits< type,  2,  1 >;  /**< Received data full flag bit    */
    using TDRE  = regbits< type,  1,  1 >;  /**< Transmit data empty flag bit   */
    using TBI   = regbits< type,  0,  1 >;  /**< Transmit bus idle flag bit     */
  };

  /**
   * Extended Communication Control Register
   */
  struct CSIO_ESCR
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using SOP  = regbits< type,  7,  1 >;  /**< Serial output pin set bit                */
    using WT   = regbits< type,  3,  2 >;  /**< Data transmit/received wait select bits  */
    using L    = regbits< type,  0,  3 >;  /**< Data length select bits                  */
  };

  /**
   * Received Data Register
   */
  struct CSIO_RDR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
  };

  /**
   * Transmit Data Register
   */
  struct CSIO_TDR
  : public reg< uint16_t, base_addr + 0x8, wo, 0x01FF >
  {
  };

  /**
   * Baud Rate Generator Registers
   */
  struct CSIO_BGR
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using BGR1  = regbits< type,  8,  7 >;  /**< Baud Rate Generator Registers 1  */
    using BGR0  = regbits< type,  0,  8 >;  /**< Baud Rate Generator Registers 0  */
  };

  /**
   * FIFO Control Register 1
   */
  struct CSIO_FCR1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x04 >;

    using FLSTE  = regbits< type,  4,  1 >;  /**< Re-transmission data lost detect enable bit  */
    using FRIIE  = regbits< type,  3,  1 >;  /**< Received FIFO idle detection enable bit      */
    using FDRQ   = regbits< type,  2,  1 >;  /**< Transmit FIFO data request bit               */
    using FTIE   = regbits< type,  1,  1 >;  /**< Transmit FIFO interrupt enable bit           */
    using FSEL   = regbits< type,  0,  1 >;  /**< FIFO select bit                              */
  };

  /**
   * FIFO Control Register 0
   */
  struct CSIO_FCR0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using FLST  = regbits< type,  6,  1 >;  /**< FIFO re-transmit data lost flag bit  */
    using FLD   = regbits< type,  5,  1 >;  /**< FIFO pointer reload bit              */
    using FSET  = regbits< type,  4,  1 >;  /**< FIFO pointer save bit                */
    using FCL2  = regbits< type,  3,  1 >;  /**< FIFO2 reset bit                      */
    using FCL1  = regbits< type,  2,  1 >;  /**< FIFO1 reset bit                      */
    using FE2   = regbits< type,  1,  1 >;  /**< FIFO2 operation enable bit           */
    using FE1   = regbits< type,  0,  1 >;  /**< FIFO1 operation enable bit           */
  };

  /**
   * FIFO Byte Register 1
   */
  struct CSIO_FBYTE1
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
  };

  /**
   * FIFO Byte Register 2
   */
  struct CSIO_FBYTE2
  : public reg< uint8_t, base_addr + 0x19, rw, 0x00 >
  {
  };

  /**
   * Serial Control Register
   */
  struct LIN_SCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using UPCL  = regbits< type,  7,  1 >;  /**< Programmable clear bit                                   */
    using MS    = regbits< type,  6,  1 >;  /**< Master/Slave function select bit                         */
    using LBR   = regbits< type,  5,  1 >;  /**< LIN Break Field setting bit (valid in master mode only)  */
    using RIE   = regbits< type,  4,  1 >;  /**< Received interrupt enable bit                            */
    using TIE   = regbits< type,  3,  1 >;  /**< Transmit interrupt enable bit                            */
    using TBIE  = regbits< type,  2,  1 >;  /**< Transmit bus idle interrupt enable bit                   */
    using RXE   = regbits< type,  1,  1 >;  /**< Data reception enable bit                                */
    using TXE   = regbits< type,  0,  1 >;  /**< Data transmission enable bit                             */
  };

  /**
   * Serial Mode Register
   */
  struct LIN_SMR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using MD    = regbits< type,  5,  3 >;  /**< Operation mode setting bits    */
    using WUCR  = regbits< type,  4,  1 >;  /**< Wake-up control bit            */
    using SBL   = regbits< type,  3,  1 >;  /**< Stop bit length select bit     */
    using SOE   = regbits< type,  0,  1 >;  /**< Serial data output enable bit  */
  };

  /**
   * Serial Status Register
   */
  struct LIN_SSR
  : public reg< uint8_t, base_addr + 0x5, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x03 >;

    using REC   = regbits< type,  7,  1 >;  /**< Received Error flag clear bit       */
    using LBD   = regbits< type,  5,  1 >;  /**< LIN Break field detection flag bit  */
    using FRE   = regbits< type,  4,  1 >;  /**< Framing error flag bit              */
    using ORE   = regbits< type,  3,  1 >;  /**< Overrun error flag bit              */
    using RDRF  = regbits< type,  2,  1 >;  /**< Received data full flag bit         */
    using TDRE  = regbits< type,  1,  1 >;  /**< Transmit data empty flag bit        */
    using TBI   = regbits< type,  0,  1 >;  /**< Transmit bus idle flag bit          */
  };

  /**
   * Extended Communication Control Register
   */
  struct LIN_ESCR
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using ESBL  = regbits< type,  6,  1 >;  /**< Extended stop bit length select bit                                 */
    using LBIE  = regbits< type,  4,  1 >;  /**< LIN Break field detect interrupt enable bit                         */
    using LBL   = regbits< type,  2,  2 >;  /**< LIN Break field length select bits (valid in master mode only)      */
    using DEL   = regbits< type,  0,  2 >;  /**< LIN Break delimiter length select bits (valid in master mode only)  */
  };

  /**
   * Received Data Register
   */
  struct LIN_RDR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
  };

  /**
   * Transmit Data Register
   */
  struct LIN_TDR
  : public reg< uint16_t, base_addr + 0x8, wo, 0x00FF >
  {
  };

  /**
   * Baud Rate Generator Registers
   */
  struct LIN_BGR
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using EXT   = regbits< type, 15,  1 >;  /**< External clock select bit        */
    using BGR1  = regbits< type,  8,  7 >;  /**< Baud Rate Generator Registers 1  */
    using BGR0  = regbits< type,  0,  8 >;  /**< Baud Rate Generator Registers 0  */
  };

  /**
   * FIFO Control Register 1
   */
  struct LIN_FCR1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x04 >;

    using FLSTE  = regbits< type,  4,  1 >;  /**< Re-transmission data lost detect enable bit  */
    using FRIIE  = regbits< type,  3,  1 >;  /**< Received FIFO idle detection enable bit      */
    using FDRQ   = regbits< type,  2,  1 >;  /**< Transmit FIFO data request bit               */
    using FTIE   = regbits< type,  1,  1 >;  /**< Transmit FIFO interrupt enable bit           */
    using FSEL   = regbits< type,  0,  1 >;  /**< FIFO select bit                              */
  };

  /**
   * FIFO Control Register 0
   */
  struct LIN_FCR0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using FLST  = regbits< type,  6,  1 >;  /**< FIFO re-transmit data lost flag bit  */
    using FLD   = regbits< type,  5,  1 >;  /**< FIFO pointer reload bit              */
    using FSET  = regbits< type,  4,  1 >;  /**< FIFO pointer save bit                */
    using FCL2  = regbits< type,  3,  1 >;  /**< FIFO2 reset bit                      */
    using FCL1  = regbits< type,  2,  1 >;  /**< FIFO1 reset bit                      */
    using FE2   = regbits< type,  1,  1 >;  /**< FIFO2 operation enable bit           */
    using FE1   = regbits< type,  0,  1 >;  /**< FIFO1 operation enable bit           */
  };

  /**
   * FIFO Byte Register 1
   */
  struct LIN_FBYTE1
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
  };

  /**
   * FIFO Byte Register 2
   */
  struct LIN_FBYTE2
  : public reg< uint8_t, base_addr + 0x19, rw, 0x00 >
  {
  };

  /**
   * I2C Bus Control Register
   */
  struct I2C_IBCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using MSS      = regbits< type,  7,  1 >;  /**< Master/slave select bit                                  */
    using ACT_SCC  = regbits< type,  6,  1 >;  /**< Operation flag/iteration start condition generation bit  */
    using ACKE     = regbits< type,  5,  1 >;  /**< Data byte acknowledge enable bit                         */
    using WSEL     = regbits< type,  4,  1 >;  /**< Wait selection bit                                       */
    using CNDE     = regbits< type,  3,  1 >;  /**< Condition detection interrupt enable bit                 */
    using INTE     = regbits< type,  2,  1 >;  /**< Interrupt enable bit                                     */
    using BER      = regbits< type,  1,  1 >;  /**< Bus error flag bit                                       */
    using INT      = regbits< type,  0,  1 >;  /**< interrupt flag bit                                       */
  };

  /**
   * Serial Mode Register
   */
  struct I2C_SMR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using MD    = regbits< type,  5,  3 >;  /**< operation mode set bits        */
    using WUCR  = regbits< type,  4,  1 >;  /**< Wake-up control bit            */
    using RIE   = regbits< type,  3,  1 >;  /**< Received interrupt enable bit  */
    using TIE   = regbits< type,  2,  1 >;  /**< Transmit interrupt enable bit  */
  };

  /**
   * I2C Bus Status Register
   */
  struct I2C_IBSR
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using FBT   = regbits< type,  7,  1 >;  /**< First byte bit                       */
    using RACK  = regbits< type,  6,  1 >;  /**< Acknowledge flag bit                 */
    using RSA   = regbits< type,  5,  1 >;  /**< Reserved address detection bit       */
    using TRX   = regbits< type,  4,  1 >;  /**< Data direction bit                   */
    using AL    = regbits< type,  3,  1 >;  /**< Arbitration lost bit                 */
    using RSC   = regbits< type,  2,  1 >;  /**< Iteration start condition check bit  */
    using SPC   = regbits< type,  1,  1 >;  /**< Stop condition check bit             */
    using BB    = regbits< type,  0,  1 >;  /**< Bus state bit                        */
  };

  /**
   * Serial Status Register
   */
  struct I2C_SSR
  : public reg< uint8_t, base_addr + 0x5, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x03 >;

    using REC   = regbits< type,  7,  1 >;  /**< Received error flag clear bit                                                     */
    using TSET  = regbits< type,  6,  1 >;  /**< Transmit empty flag set bit                                                       */
    using DMA   = regbits< type,  5,  1 >;  /**< DMA mode enable bit                                                               */
    using TBIE  = regbits< type,  4,  1 >;  /**< Transmit bus idle interrupt enable bit (Effective only when DMA mode is enabled)  */
    using ORE   = regbits< type,  3,  1 >;  /**< Overrun error flag bit                                                            */
    using RDRF  = regbits< type,  2,  1 >;  /**< Received data full flag bit                                                       */
    using TDRE  = regbits< type,  1,  1 >;  /**< Transmit data empty flag bit                                                      */
    using TBI   = regbits< type,  0,  1 >;  /**< Transmit bus idle flag bit (Effective only when DMA mode is enabled)              */
  };

  /**
   * Received Data Register
   */
  struct I2C_RDR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
  };

  /**
   * Transmit Data Register
   */
  struct I2C_TDR
  : public reg< uint16_t, base_addr + 0x8, wo, 0x00FF >
  {
  };

  /**
   * 7-bit Slave Address Mask Register
   */
  struct I2C_ISMK
  : public reg< uint8_t, base_addr + 0x11, rw, 0x7F >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x7F >;

    using EN  = regbits< type,  7,  1 >;  /**< I2C interface operation enable bit  */
    using SM  = regbits< type,  0,  7 >;  /**< Slave address mask bits             */
  };

  /**
   * 7-bit Slave Address Register
   */
  struct I2C_ISBA
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using SAEN  = regbits< type,  7,  1 >;  /**< Slave address enable bit  */
    using SA    = regbits< type,  0,  7 >;  /**< 7-bit slave address       */
  };

  /**
   * Baud Rate Generator Registers
   */
  struct I2C_BGR
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using BGR1  = regbits< type,  8,  7 >;  /**< Baud Rate Generator Registers 1  */
    using BGR0  = regbits< type,  0,  8 >;  /**< Baud Rate Generator Registers 0  */
  };

  /**
   * FIFO Control Register 1
   */
  struct I2C_FCR1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x04 >;

    using FLSTE  = regbits< type,  4,  1 >;  /**< Re-transmission data lost detect enable bit  */
    using FRIIE  = regbits< type,  3,  1 >;  /**< Received FIFO idle detection enable bit      */
    using FDRQ   = regbits< type,  2,  1 >;  /**< Transmit FIFO data request bit               */
    using FTIE   = regbits< type,  1,  1 >;  /**< Transmit FIFO interrupt enable bit           */
    using FSEL   = regbits< type,  0,  1 >;  /**< FIFO select bit                              */
  };

  /**
   * FIFO Control Register 0
   */
  struct I2C_FCR0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using FLST  = regbits< type,  6,  1 >;  /**< FIFO re-transmit data lost flag bit  */
    using FLD   = regbits< type,  5,  1 >;  /**< FIFO pointer reload bit              */
    using FSET  = regbits< type,  4,  1 >;  /**< FIFO pointer save bit                */
    using FCL2  = regbits< type,  3,  1 >;  /**< FIFO2 reset bit                      */
    using FCL1  = regbits< type,  2,  1 >;  /**< FIFO1 reset bit                      */
    using FE2   = regbits< type,  1,  1 >;  /**< FIFO2 operation enable bit           */
    using FE1   = regbits< type,  0,  1 >;  /**< FIFO1 operation enable bit           */
  };

  /**
   * FIFO Byte Register 1
   */
  struct I2C_FBYTE1
  : public reg< uint8_t, base_addr + 0x18, rw, 0x0000 >
  {
  };

  /**
   * FIFO Byte Register 2
   */
  struct I2C_FBYTE2
  : public reg< uint8_t, base_addr + 0x19, rw, 0x0000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_MFS7_HPP_INCLUDED
