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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G25.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G25
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G25 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Ethernet, HS USB, LPDDR/DDR2/MLC NAND support, 217 and 247 Pins (refer to http://www.atmel.com/devices/SAM9G25.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USART1_HPP_INCLUDED
#define ARCH_REG_USART1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal Synchronous Asynchronous Receiver Transmitter 1
 */
struct USART1
{
  static constexpr reg_addr_t base_addr = 0xf8020000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using RSTRX    = regbits< type,  2,  1 >;  /**< Reset Receiver           */
    using RSTTX    = regbits< type,  3,  1 >;  /**< Reset Transmitter        */
    using RXEN     = regbits< type,  4,  1 >;  /**< Receiver Enable          */
    using RXDIS    = regbits< type,  5,  1 >;  /**< Receiver Disable         */
    using TXEN     = regbits< type,  6,  1 >;  /**< Transmitter Enable       */
    using TXDIS    = regbits< type,  7,  1 >;  /**< Transmitter Disable      */
    using RSTSTA   = regbits< type,  8,  1 >;  /**< Reset Status Bits        */
    using STTBRK   = regbits< type,  9,  1 >;  /**< Start Break              */
    using STPBRK   = regbits< type, 10,  1 >;  /**< Stop Break               */
    using STTTO    = regbits< type, 11,  1 >;  /**< Start Time-out           */
    using SENDA    = regbits< type, 12,  1 >;  /**< Send Address             */
    using RSTIT    = regbits< type, 13,  1 >;  /**< Reset Iterations         */
    using RSTNACK  = regbits< type, 14,  1 >;  /**< Reset Non Acknowledge    */
    using RETTO    = regbits< type, 15,  1 >;  /**< Rearm Time-out           */
    using RTSEN    = regbits< type, 18,  1 >;  /**< Request to Send Enable   */
    using RTSDIS   = regbits< type, 19,  1 >;  /**< Request to Send Disable  */
    using LINABT   = regbits< type, 20,  1 >;  /**< Abort LIN Transmission   */
    using LINWKUP  = regbits< type, 21,  1 >;  /**< Send LIN Wakeup Signal   */
  };

  /**
   * Control Register
   */
  struct CR_SPI_MODE
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using RSTRX   = regbits< type,  2,  1 >;  /**< Reset Receiver           */
    using RSTTX   = regbits< type,  3,  1 >;  /**< Reset Transmitter        */
    using RXEN    = regbits< type,  4,  1 >;  /**< Receiver Enable          */
    using RXDIS   = regbits< type,  5,  1 >;  /**< Receiver Disable         */
    using TXEN    = regbits< type,  6,  1 >;  /**< Transmitter Enable       */
    using TXDIS   = regbits< type,  7,  1 >;  /**< Transmitter Disable      */
    using RSTSTA  = regbits< type,  8,  1 >;  /**< Reset Status Bits        */
    using FCS     = regbits< type, 18,  1 >;  /**< Force SPI Chip Select    */
    using RCS     = regbits< type, 19,  1 >;  /**< Release SPI Chip Select  */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USART_MODE     = regbits< type,  0,  4 >;  /**< USART Mode of Operation                                              */
    using USCLKS         = regbits< type,  4,  2 >;  /**< Clock Selection                                                      */
    using CHRL           = regbits< type,  6,  2 >;  /**< Character Length.                                                    */
    using SYNC           = regbits< type,  8,  1 >;  /**< Synchronous Mode Select                                              */
    using PAR            = regbits< type,  9,  3 >;  /**< Parity Type                                                          */
    using NBSTOP         = regbits< type, 12,  2 >;  /**< Number of Stop Bits                                                  */
    using CHMODE         = regbits< type, 14,  2 >;  /**< Channel Mode                                                         */
    using MSBF           = regbits< type, 16,  1 >;  /**< Bit Order                                                            */
    using MODE9          = regbits< type, 17,  1 >;  /**< 9-bit Character Length                                               */
    using CLKO           = regbits< type, 18,  1 >;  /**< Clock Output Select                                                  */
    using OVER           = regbits< type, 19,  1 >;  /**< Oversampling Mode                                                    */
    using INACK          = regbits< type, 20,  1 >;  /**< Inhibit Non Acknowledge                                              */
    using DSNACK         = regbits< type, 21,  1 >;  /**< Disable Successive NACK                                              */
    using VAR_SYNC       = regbits< type, 22,  1 >;  /**< Variable Synchronization of Command/Data Sync Start Frame Delimiter  */
    using MAX_ITERATION  = regbits< type, 24,  3 >;  /**< Maximum Number of Automatic Iteration                                */
    using FILTER         = regbits< type, 28,  1 >;  /**< Infrared Receive Line Filter                                         */
    using MAN            = regbits< type, 29,  1 >;  /**< Manchester Encoder/Decoder Enable                                    */
    using MODSYNC        = regbits< type, 30,  1 >;  /**< Manchester Synchronization Mode                                      */
    using ONEBIT         = regbits< type, 31,  1 >;  /**< Start Frame Delimiter Selector                                       */
  };

  /**
   * Mode Register
   */
  struct MR_SPI_MODE
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USART_MODE  = regbits< type,  0,  4 >;  /**< USART Mode of Operation         */
    using USCLKS      = regbits< type,  4,  2 >;  /**< Clock Selection                 */
    using CHRL        = regbits< type,  6,  2 >;  /**< Character Length.               */
    using CPHA        = regbits< type,  8,  1 >;  /**< SPI Clock Phase                 */
    using CPOL        = regbits< type, 16,  1 >;  /**< SPI Clock Polarity              */
    using WRDBT       = regbits< type, 20,  1 >;  /**< Wait Read Data Before Transfer  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< RXRDY Interrupt Enable                              */
    using TXRDY    = regbits< type,  1,  1 >;  /**< TXRDY Interrupt Enable                              */
    using RXBRK    = regbits< type,  2,  1 >;  /**< Receiver Break Interrupt Enable                     */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error Interrupt Enable                      */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error Interrupt Enable                      */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error Interrupt Enable                       */
    using TIMEOUT  = regbits< type,  8,  1 >;  /**< Time-out Interrupt Enable                           */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< TXEMPTY Interrupt Enable                            */
    using ITER     = regbits< type, 10,  1 >;  /**< Max number of Repetitions Reached Interrupt Enable  */
    using NACK     = regbits< type, 13,  1 >;  /**< Non Acknowledge Interrupt Enable                    */
    using CTSIC    = regbits< type, 19,  1 >;  /**< Clear to Send Input Change Interrupt Enable         */
    using MANE     = regbits< type, 24,  1 >;  /**< Manchester Error Interrupt Enable                   */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER_SPI_MODE
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< RXRDY Interrupt Enable               */
    using TXRDY    = regbits< type,  1,  1 >;  /**< TXRDY Interrupt Enable               */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error Interrupt Enable       */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< TXEMPTY Interrupt Enable             */
    using UNRE     = regbits< type, 10,  1 >;  /**< SPI Underrun Error Interrupt Enable  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER_LIN_MODE
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< RXRDY Interrupt Enable                                           */
    using TXRDY    = regbits< type,  1,  1 >;  /**< TXRDY Interrupt Enable                                           */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error Interrupt Enable                                   */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error Interrupt Enable                                   */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error Interrupt Enable                                    */
    using TIMEOUT  = regbits< type,  8,  1 >;  /**< Time-out Interrupt Enable                                        */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< TXEMPTY Interrupt Enable                                         */
    using LINBK    = regbits< type, 13,  1 >;  /**< LIN Break Sent or LIN Break Received Interrupt Enable            */
    using LINID    = regbits< type, 14,  1 >;  /**< LIN Identifier Sent or LIN Identifier Received Interrupt Enable  */
    using LINTC    = regbits< type, 15,  1 >;  /**< LIN Transfer Completed Interrupt Enable                          */
    using LINBE    = regbits< type, 25,  1 >;  /**< LIN Bus Error Interrupt Enable                                   */
    using LINISFE  = regbits< type, 26,  1 >;  /**< LIN Inconsistent Synch Field Error Interrupt Enable              */
    using LINIPE   = regbits< type, 27,  1 >;  /**< LIN Identifier Parity Interrupt Enable                           */
    using LINCE    = regbits< type, 28,  1 >;  /**< LIN Checksum Error Interrupt Enable                              */
    using LINSNRE  = regbits< type, 29,  1 >;  /**< LIN Slave Not Responding Error Interrupt Enable                  */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< RXRDY Interrupt Disable                              */
    using TXRDY    = regbits< type,  1,  1 >;  /**< TXRDY Interrupt Disable                              */
    using RXBRK    = regbits< type,  2,  1 >;  /**< Receiver Break Interrupt Disable                     */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error Interrupt Enable                       */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error Interrupt Disable                      */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error Interrupt Disable                       */
    using TIMEOUT  = regbits< type,  8,  1 >;  /**< Time-out Interrupt Disable                           */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< TXEMPTY Interrupt Disable                            */
    using ITER     = regbits< type, 10,  1 >;  /**< Max Number of Repetitions Reached Interrupt Disable  */
    using NACK     = regbits< type, 13,  1 >;  /**< Non Acknowledge Interrupt Disable                    */
    using CTSIC    = regbits< type, 19,  1 >;  /**< Clear to Send Input Change Interrupt Disable         */
    using MANE     = regbits< type, 24,  1 >;  /**< Manchester Error Interrupt Disable                   */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR_SPI_MODE
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< RXRDY Interrupt Disable               */
    using TXRDY    = regbits< type,  1,  1 >;  /**< TXRDY Interrupt Disable               */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error Interrupt Disable       */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< TXEMPTY Interrupt Disable             */
    using UNRE     = regbits< type, 10,  1 >;  /**< SPI Underrun Error Interrupt Disable  */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR_LIN_MODE
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< RXRDY Interrupt Disable                                           */
    using TXRDY    = regbits< type,  1,  1 >;  /**< TXRDY Interrupt Disable                                           */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error Interrupt Disable                                   */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error Interrupt Disable                                   */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error Interrupt Disable                                    */
    using TIMEOUT  = regbits< type,  8,  1 >;  /**< Time-out Interrupt Disable                                        */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< TXEMPTY Interrupt Disable                                         */
    using LINBK    = regbits< type, 13,  1 >;  /**< LIN Break Sent or LIN Break Received Interrupt Disable            */
    using LINID    = regbits< type, 14,  1 >;  /**< LIN Identifier Sent or LIN Identifier Received Interrupt Disable  */
    using LINTC    = regbits< type, 15,  1 >;  /**< LIN Transfer Completed Interrupt Disable                          */
    using LINBE    = regbits< type, 25,  1 >;  /**< LIN Bus Error Interrupt Disable                                   */
    using LINISFE  = regbits< type, 26,  1 >;  /**< LIN Inconsistent Synch Field Error Interrupt Disable              */
    using LINIPE   = regbits< type, 27,  1 >;  /**< LIN Identifier Parity Interrupt Disable                           */
    using LINCE    = regbits< type, 28,  1 >;  /**< LIN Checksum Error Interrupt Disable                              */
    using LINSNRE  = regbits< type, 29,  1 >;  /**< LIN Slave Not Responding Error Interrupt Disable                  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< RXRDY Interrupt Mask                              */
    using TXRDY    = regbits< type,  1,  1 >;  /**< TXRDY Interrupt Mask                              */
    using RXBRK    = regbits< type,  2,  1 >;  /**< Receiver Break Interrupt Mask                     */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error Interrupt Mask                      */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error Interrupt Mask                      */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error Interrupt Mask                       */
    using TIMEOUT  = regbits< type,  8,  1 >;  /**< Time-out Interrupt Mask                           */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< TXEMPTY Interrupt Mask                            */
    using ITER     = regbits< type, 10,  1 >;  /**< Max Number of Repetitions Reached Interrupt Mask  */
    using NACK     = regbits< type, 13,  1 >;  /**< Non Acknowledge Interrupt Mask                    */
    using CTSIC    = regbits< type, 19,  1 >;  /**< Clear to Send Input Change Interrupt Mask         */
    using MANE     = regbits< type, 24,  1 >;  /**< Manchester Error Interrupt Mask                   */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR_SPI_MODE
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< RXRDY Interrupt Mask               */
    using TXRDY    = regbits< type,  1,  1 >;  /**< TXRDY Interrupt Mask               */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error Interrupt Mask       */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< TXEMPTY Interrupt Mask             */
    using UNRE     = regbits< type, 10,  1 >;  /**< SPI Underrun Error Interrupt Mask  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR_LIN_MODE
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< RXRDY Interrupt Mask                                           */
    using TXRDY    = regbits< type,  1,  1 >;  /**< TXRDY Interrupt Mask                                           */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error Interrupt Mask                                   */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error Interrupt Mask                                   */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error Interrupt Mask                                    */
    using TIMEOUT  = regbits< type,  8,  1 >;  /**< Time-out Interrupt Mask                                        */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< TXEMPTY Interrupt Mask                                         */
    using LINBK    = regbits< type, 13,  1 >;  /**< LIN Break Sent or LIN Break Received Interrupt Mask            */
    using LINID    = regbits< type, 14,  1 >;  /**< LIN Identifier Sent or LIN Identifier Received Interrupt Mask  */
    using LINTC    = regbits< type, 15,  1 >;  /**< LIN Transfer Completed Interrupt Mask                          */
    using LINBE    = regbits< type, 25,  1 >;  /**< LIN Bus Error Interrupt Mask                                   */
    using LINISFE  = regbits< type, 26,  1 >;  /**< LIN Inconsistent Synch Field Error Interrupt Mask              */
    using LINIPE   = regbits< type, 27,  1 >;  /**< LIN Identifier Parity Interrupt Mask                           */
    using LINCE    = regbits< type, 28,  1 >;  /**< LIN Checksum Error Interrupt Mask                              */
    using LINSNRE  = regbits< type, 29,  1 >;  /**< LIN Slave Not Responding Error Interrupt Mask                  */
  };

  /**
   * Channel Status Register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Receiver Ready                    */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Transmitter Ready                 */
    using RXBRK    = regbits< type,  2,  1 >;  /**< Break Received/End of Break       */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error                     */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error                     */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error                      */
    using TIMEOUT  = regbits< type,  8,  1 >;  /**< Receiver Time-out                 */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmitter Empty                 */
    using ITER     = regbits< type, 10,  1 >;  /**< MaxNumber of Repetitions Reached  */
    using NACK     = regbits< type, 13,  1 >;  /**< Non Acknowledge Interrupt         */
    using CTSIC    = regbits< type, 19,  1 >;  /**< Clear to Send Input Change Flag   */
    using CTS      = regbits< type, 23,  1 >;  /**< Image of CTS Input                */
    using MANERR   = regbits< type, 24,  1 >;  /**< Manchester Error                  */
  };

  /**
   * Channel Status Register
   */
  struct CSR_SPI_MODE
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Receiver Ready     */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Transmitter Ready  */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error      */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmitter Empty  */
    using UNRE     = regbits< type, 10,  1 >;  /**< Underrun Error     */
  };

  /**
   * Channel Status Register
   */
  struct CSR_LIN_MODE
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXRDY    = regbits< type,  0,  1 >;  /**< Receiver Ready                                  */
    using TXRDY    = regbits< type,  1,  1 >;  /**< Transmitter Ready                               */
    using OVRE     = regbits< type,  5,  1 >;  /**< Overrun Error                                   */
    using FRAME    = regbits< type,  6,  1 >;  /**< Framing Error                                   */
    using PARE     = regbits< type,  7,  1 >;  /**< Parity Error                                    */
    using TIMEOUT  = regbits< type,  8,  1 >;  /**< Receiver Time-out                               */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmitter Empty                               */
    using LINBK    = regbits< type, 13,  1 >;  /**< LIN Break Sent or LIN Break Received            */
    using LINID    = regbits< type, 14,  1 >;  /**< LIN Identifier Sent or LIN Identifier Received  */
    using LINTC    = regbits< type, 15,  1 >;  /**< LIN Transfer Completed                          */
    using LINBLS   = regbits< type, 23,  1 >;  /**< LIN Bus Line Status                             */
    using LINBE    = regbits< type, 25,  1 >;  /**< LIN Bit Error                                   */
    using LINISFE  = regbits< type, 26,  1 >;  /**< LIN Inconsistent Synch Field Error              */
    using LINIPE   = regbits< type, 27,  1 >;  /**< LIN Identifier Parity Error                     */
    using LINCE    = regbits< type, 28,  1 >;  /**< LIN Checksum Error                              */
    using LINSNRE  = regbits< type, 29,  1 >;  /**< LIN Slave Not Responding Error                  */
  };

  /**
   * Receiver Holding Register
   */
  struct RHR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using RXCHR   = regbits< type,  0,  9 >;  /**< Received Character  */
    using RXSYNH  = regbits< type, 15,  1 >;  /**< Received Sync       */
  };

  /**
   * Transmitter Holding Register
   */
  struct THR
  : public reg< uint32_t, base_addr + 0x0000001c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, wo, 0 >;

    using TXCHR   = regbits< type,  0,  9 >;  /**< Character to be Transmitted   */
    using TXSYNH  = regbits< type, 15,  1 >;  /**< Sync Field to be Transmitted  */
  };

  /**
   * Baud Rate Generator Register
   */
  struct BRGR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using CD  = regbits< type,  0, 16 >;  /**< Clock Divider    */
    using FP  = regbits< type, 16,  3 >;  /**< Fractional Part  */
  };

  /**
   * Receiver Time-out Register
   */
  struct RTOR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >;

    using TO  = regbits< type,  0, 17 >;  /**< Time-out Value  */
  };

  /**
   * Transmitter Timeguard Register
   */
  struct TTGR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    using TG  = regbits< type,  0,  8 >;  /**< Timeguard Value  */
  };

  /**
   * FI DI Ratio Register
   */
  struct FIDI
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000174 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000174 >;

    using FI_DI_RATIO  = regbits< type,  0, 11 >;  /**< FI Over DI Ratio Value  */
  };

  /**
   * Number of Errors Register
   */
  struct NER
  : public reg< uint32_t, base_addr + 0x00000044, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using NB_ERRORS  = regbits< type,  0,  8 >;  /**< Number of Errors  */
  };

  /**
   * IrDA Filter Register
   */
  struct IF
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >;

    using IRDA_FILTER  = regbits< type,  0,  8 >;  /**< IrDA Filter  */
  };

  /**
   * Manchester Encoder Decoder Register
   */
  struct MAN
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0xB0011004 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0xB0011004 >;

    using TX_PL    = regbits< type,  0,  4 >;  /**< Transmitter Preamble Length         */
    using TX_PP    = regbits< type,  8,  2 >;  /**< Transmitter Preamble Pattern        */
    using TX_MPOL  = regbits< type, 12,  1 >;  /**< Transmitter Manchester Polarity     */
    using RX_PL    = regbits< type, 16,  4 >;  /**< Receiver Preamble Length            */
    using RX_PP    = regbits< type, 24,  2 >;  /**< Receiver Preamble Pattern detected  */
    using RX_MPOL  = regbits< type, 28,  1 >;  /**< Receiver Manchester Polarity        */
    using ONE      = regbits< type, 29,  1 >;  /**< Must Be Set to 1                    */
    using DRIFT    = regbits< type, 30,  1 >;  /**< Drift Compensation                  */
  };

  /**
   * LIN Mode Register
   */
  struct LINMR
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >;

    using NACT     = regbits< type,  0,  2 >;  /**< LIN Node Action          */
    using PARDIS   = regbits< type,  2,  1 >;  /**< Parity Disable           */
    using CHKDIS   = regbits< type,  3,  1 >;  /**< Checksum Disable         */
    using CHKTYP   = regbits< type,  4,  1 >;  /**< Checksum Type            */
    using DLM      = regbits< type,  5,  1 >;  /**< Data Length Mode         */
    using FSDIS    = regbits< type,  6,  1 >;  /**< Frame Slot Mode Disable  */
    using WKUPTYP  = regbits< type,  7,  1 >;  /**< Wakeup Signal Type       */
    using DLC      = regbits< type,  8,  8 >;  /**< Data Length Control      */
    using PDCM     = regbits< type, 16,  1 >;  /**< DMAC Mode                */
  };

  /**
   * LIN Identifier Register
   */
  struct LINIR
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >;

    using IDCHR  = regbits< type,  0,  8 >;  /**< Identifier Character  */
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Violation Status  */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USART1_HPP_INCLUDED
