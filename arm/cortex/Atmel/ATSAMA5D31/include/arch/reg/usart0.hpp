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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D31.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D31
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D31 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, LCD controller, 10/100 Ethernet, security (refer to http://www.atmel.com/devices/SAMA5D31.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USART0_HPP_INCLUDED
#define ARCH_REG_USART0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal Synchronous Asynchronous Receiver Transmitter 0
 */
struct USART0
{
  static constexpr reg_addr_t base_addr = 0xf001c000;

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
    using INVDATA        = regbits< type, 23,  1 >;  /**< Inverted Data                                                        */
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
    using NACK     = regbits< type, 13,  1 >;  /**< Non AcknowledgeInterrupt Enable                     */
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
    using NACK     = regbits< type, 13,  1 >;  /**< Non AcknowledgeInterrupt Disable                     */
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
    using NACK     = regbits< type, 13,  1 >;  /**< Non AcknowledgeInterrupt Mask                     */
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
    using NACK     = regbits< type, 13,  1 >;  /**< Non AcknowledgeInterrupt          */
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

    using TO  = regbits< type,  0, 16 >;  /**< Time-out Value  */
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

#endif // ARCH_REG_USART0_HPP_INCLUDED
