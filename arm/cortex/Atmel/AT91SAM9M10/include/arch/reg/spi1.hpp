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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9M10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9M10
//  series: SAM9M
//  version: 20130207
//  description: Atmel AT91SAM9M10 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, DDR2/LPDDR, Video Decoder, LCD, HS USB, 10/100 Ethernet, Dual EBI, 324 Pins (refer to http://www.atmel.com/devices/SAM9M10.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SPI1_HPP_INCLUDED
#define ARCH_REG_SPI1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial Peripheral Interface 1
 */
struct SPI1
{
  static constexpr reg_addr_t base_addr = 0xfffa8000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using SPIEN     = regbits< type,  0,  1 >;  /**< SPI Enable          */
    using SPIDIS    = regbits< type,  1,  1 >;  /**< SPI Disable         */
    using SWRST     = regbits< type,  7,  1 >;  /**< SPI Software Reset  */
    using LASTXFER  = regbits< type, 24,  1 >;  /**< Last Transfer       */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using MSTR     = regbits< type,  0,  1 >;  /**< Master/Slave Mode               */
    using PS       = regbits< type,  1,  1 >;  /**< Peripheral Select               */
    using PCSDEC   = regbits< type,  2,  1 >;  /**< Chip Select Decode              */
    using MODFDIS  = regbits< type,  4,  1 >;  /**< Mode Fault Detection            */
    using WDRBT    = regbits< type,  5,  1 >;  /**< Wait Data Read Before Transfer  */
    using LLB      = regbits< type,  7,  1 >;  /**< Local Loopback Enable           */
    using PCS      = regbits< type, 16,  4 >;  /**< Peripheral Chip Select          */
    using DLYBCS   = regbits< type, 24,  8 >;  /**< Delay Between Chip Selects      */
  };

  /**
   * Receive Data Register
   */
  struct RDR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >;

    using RD   = regbits< type,  0, 16 >;  /**< Receive Data            */
    using PCS  = regbits< type, 16,  4 >;  /**< Peripheral Chip Select  */
  };

  /**
   * Transmit Data Register
   */
  struct TDR
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using TD        = regbits< type,  0, 16 >;  /**< Transmit Data           */
    using PCS       = regbits< type, 16,  4 >;  /**< Peripheral Chip Select  */
    using LASTXFER  = regbits< type, 24,  1 >;  /**< Last Transfer           */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x000000F0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x000000F0 >;

    using RDRF     = regbits< type,  0,  1 >;  /**< Receive Data Register Full    */
    using TDRE     = regbits< type,  1,  1 >;  /**< Transmit Data Register Empty  */
    using MODF     = regbits< type,  2,  1 >;  /**< Mode Fault Error              */
    using OVRES    = regbits< type,  3,  1 >;  /**< Overrun Error Status          */
    using ENDRX    = regbits< type,  4,  1 >;  /**< End of RX buffer              */
    using ENDTX    = regbits< type,  5,  1 >;  /**< End of TX buffer              */
    using RXBUFF   = regbits< type,  6,  1 >;  /**< RX Buffer Full                */
    using TXBUFE   = regbits< type,  7,  1 >;  /**< TX Buffer Empty               */
    using NSSR     = regbits< type,  8,  1 >;  /**< NSS Rising                    */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmission Registers Empty  */
    using SPIENS   = regbits< type, 16,  1 >;  /**< SPI Enable Status             */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using RDRF     = regbits< type,  0,  1 >;  /**< Receive Data Register Full Interrupt Enable        */
    using TDRE     = regbits< type,  1,  1 >;  /**< SPI Transmit Data Register Empty Interrupt Enable  */
    using MODF     = regbits< type,  2,  1 >;  /**< Mode Fault Error Interrupt Enable                  */
    using OVRES    = regbits< type,  3,  1 >;  /**< Overrun Error Interrupt Enable                     */
    using ENDRX    = regbits< type,  4,  1 >;  /**< End of Receive Buffer Interrupt Enable             */
    using ENDTX    = regbits< type,  5,  1 >;  /**< End of Transmit Buffer Interrupt Enable            */
    using RXBUFF   = regbits< type,  6,  1 >;  /**< Receive Buffer Full Interrupt Enable               */
    using TXBUFE   = regbits< type,  7,  1 >;  /**< Transmit Buffer Empty Interrupt Enable             */
    using NSSR     = regbits< type,  8,  1 >;  /**< NSS Rising Interrupt Enable                        */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmission Registers Empty Enable                */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000018, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, wo, 0 >;

    using RDRF     = regbits< type,  0,  1 >;  /**< Receive Data Register Full Interrupt Disable        */
    using TDRE     = regbits< type,  1,  1 >;  /**< SPI Transmit Data Register Empty Interrupt Disable  */
    using MODF     = regbits< type,  2,  1 >;  /**< Mode Fault Error Interrupt Disable                  */
    using OVRES    = regbits< type,  3,  1 >;  /**< Overrun Error Interrupt Disable                     */
    using ENDRX    = regbits< type,  4,  1 >;  /**< End of Receive Buffer Interrupt Disable             */
    using ENDTX    = regbits< type,  5,  1 >;  /**< End of Transmit Buffer Interrupt Disable            */
    using RXBUFF   = regbits< type,  6,  1 >;  /**< Receive Buffer Full Interrupt Disable               */
    using TXBUFE   = regbits< type,  7,  1 >;  /**< Transmit Buffer Empty Interrupt Disable             */
    using NSSR     = regbits< type,  8,  1 >;  /**< NSS Rising Interrupt Disable                        */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmission Registers Empty Disable                */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using RDRF     = regbits< type,  0,  1 >;  /**< Receive Data Register Full Interrupt Mask        */
    using TDRE     = regbits< type,  1,  1 >;  /**< SPI Transmit Data Register Empty Interrupt Mask  */
    using MODF     = regbits< type,  2,  1 >;  /**< Mode Fault Error Interrupt Mask                  */
    using OVRES    = regbits< type,  3,  1 >;  /**< Overrun Error Interrupt Mask                     */
    using ENDRX    = regbits< type,  4,  1 >;  /**< End of Receive Buffer Interrupt Mask             */
    using ENDTX    = regbits< type,  5,  1 >;  /**< End of Transmit Buffer Interrupt Mask            */
    using RXBUFF   = regbits< type,  6,  1 >;  /**< Receive Buffer Full Interrupt Mask               */
    using TXBUFE   = regbits< type,  7,  1 >;  /**< Transmit Buffer Empty Interrupt Mask             */
    using NSSR     = regbits< type,  8,  1 >;  /**< NSS Rising Interrupt Mask                        */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmission Registers Empty Mask                */
  };

  /**
   * Chip Select Register
   */
  struct CSR[%s]
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CPOL    = regbits< type,  0,  1 >;  /**< Clock Polarity                       */
    using NCPHA   = regbits< type,  1,  1 >;  /**< Clock Phase                          */
    using CSAAT   = regbits< type,  3,  1 >;  /**< Chip Select Active After Transfer    */
    using BITS    = regbits< type,  4,  4 >;  /**< Bits Per Transfer                    */
    using SCBR    = regbits< type,  8,  8 >;  /**< Serial Clock Baud Rate               */
    using DLYBS   = regbits< type, 16,  8 >;  /**< Delay Before SPCK                    */
    using DLYBCT  = regbits< type, 24,  8 >;  /**< Delay Between Consecutive Transfers  */
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

#endif // ARCH_REG_SPI1_HPP_INCLUDED
