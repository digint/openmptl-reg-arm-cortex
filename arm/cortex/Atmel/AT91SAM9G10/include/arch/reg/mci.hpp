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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G10
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G10 device: ARM926EJ Embedded Microprocessor Unit, 266MHz, LCD, USB, 217 Pins (refer to http://www.atmel.com/devices/SAM9G10.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MCI_HPP_INCLUDED
#define ARCH_REG_MCI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * MultiMedia Card Interface
 */
struct MCI
{
  static constexpr reg_addr_t base_addr = 0xfffa8000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using MCIEN   = regbits< type,  0,  1 >;  /**< Multi-Media Interface Enable   */
    using MCIDIS  = regbits< type,  1,  1 >;  /**< Multi-Media Interface Disable  */
    using PWSEN   = regbits< type,  2,  1 >;  /**< Power Save Mode Enable         */
    using PWSDIS  = regbits< type,  3,  1 >;  /**< Power Save Mode Disable        */
    using SWRST   = regbits< type,  7,  1 >;  /**< Software Reset                 */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using CLKDIV    = regbits< type,  0,  8 >;  /**< Clock Divider            */
    using PWSDIV    = regbits< type,  8,  3 >;  /**< Power Saving Divider     */
    using RDPROOF   = regbits< type, 11,  1 >;
    using WRPROOF   = regbits< type, 12,  1 >;
    using PDCFBYTE  = regbits< type, 13,  1 >;  /**< PDC Force Byte Transfer  */
    using PDCPADV   = regbits< type, 14,  1 >;  /**< PDC Padding Value        */
    using PDCMODE   = regbits< type, 15,  1 >;  /**< PDC-oriented Mode        */
    using BLKLEN    = regbits< type, 16, 16 >;  /**< Data Block Length        */
  };

  /**
   * Data Timeout Register
   */
  struct DTOR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using DTOCYC  = regbits< type,  0,  4 >;  /**< Data Timeout Cycle Number  */
    using DTOMUL  = regbits< type,  4,  3 >;  /**< Data Timeout Multiplier    */
  };

  /**
   * SD/SDIO Card Register
   */
  struct SDCR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using SDCSEL  = regbits< type,  0,  2 >;  /**< SDCard/SDIO Slot       */
    using SDCBUS  = regbits< type,  7,  1 >;  /**< SDCard/SDIO Bus Width  */
  };

  /**
   * Argument Register
   */
  struct ARGR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using ARG  = regbits< type,  0, 32 >;  /**< Command Argument  */
  };

  /**
   * Command Register
   */
  struct CMDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using CMDNB    = regbits< type,  0,  6 >;  /**< Command Number                       */
    using RSPTYP   = regbits< type,  6,  2 >;  /**< Response Type                        */
    using SPCMD    = regbits< type,  8,  3 >;  /**< Special Command                      */
    using OPDCMD   = regbits< type, 11,  1 >;  /**< Open Drain Command                   */
    using MAXLAT   = regbits< type, 12,  1 >;  /**< Max Latency for Command to Response  */
    using TRCMD    = regbits< type, 16,  2 >;  /**< Transfer Command                     */
    using TRDIR    = regbits< type, 18,  1 >;  /**< Transfer Direction                   */
    using TRTYP    = regbits< type, 19,  3 >;  /**< Transfer Type                        */
    using IOSPCMD  = regbits< type, 24,  2 >;  /**< SDIO Special Command                 */
  };

  /**
   * Block Register
   */
  struct BLKR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using BCNT    = regbits< type,  0, 16 >;  /**< MMC/SDIO Block Count - SDIO Byte Count  */
    using BLKLEN  = regbits< type, 16, 16 >;  /**< Data Block Length                       */
  };

  /**
   * Response Register
   */
  struct RSPR[%s]
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RSP  = regbits< type,  0, 32 >;  /**< Response  */
  };

  /**
   * Receive Data Register
   */
  struct RDR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data to Read  */
  };

  /**
   * Transmit Data Register
   */
  struct TDR
  : public reg< uint32_t, base_addr + 0x00000034, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, wo, 0 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data to Write  */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x0000C0E5 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x0000C0E5 >;

    using CMDRDY   = regbits< type,  0,  1 >;  /**< Command Ready              */
    using RXRDY    = regbits< type,  1,  1 >;  /**< Receiver Ready             */
    using TXRDY    = regbits< type,  2,  1 >;  /**< Transmit Ready             */
    using BLKE     = regbits< type,  3,  1 >;  /**< Data Block Ended           */
    using DTIP     = regbits< type,  4,  1 >;  /**< Data Transfer in Progress  */
    using NOTBUSY  = regbits< type,  5,  1 >;  /**< MCI Not Busy               */
    using ENDRX    = regbits< type,  6,  1 >;  /**< End of RX Buffer           */
    using ENDTX    = regbits< type,  7,  1 >;  /**< End of TX Buffer           */
    using RXBUFF   = regbits< type, 14,  1 >;  /**< RX Buffer Full             */
    using TXBUFE   = regbits< type, 15,  1 >;  /**< TX Buffer Empty            */
    using RINDE    = regbits< type, 16,  1 >;  /**< Response Index Error       */
    using RDIRE    = regbits< type, 17,  1 >;  /**< Response Direction Error   */
    using RCRCE    = regbits< type, 18,  1 >;  /**< Response CRC Error         */
    using RENDE    = regbits< type, 19,  1 >;  /**< Response End Bit Error     */
    using RTOE     = regbits< type, 20,  1 >;  /**< Response Time-out Error    */
    using DCRCE    = regbits< type, 21,  1 >;  /**< Data CRC Error             */
    using DTOE     = regbits< type, 22,  1 >;  /**< Data Time-out Error        */
    using OVRE     = regbits< type, 30,  1 >;  /**< Overrun                    */
    using UNRE     = regbits< type, 31,  1 >;  /**< Underrun                   */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000044, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, wo, 0 >;

    using CMDRDY   = regbits< type,  0,  1 >;  /**< Command Ready Interrupt Enable              */
    using RXRDY    = regbits< type,  1,  1 >;  /**< Receiver Ready Interrupt Enable             */
    using TXRDY    = regbits< type,  2,  1 >;  /**< Transmit Ready Interrupt Enable             */
    using BLKE     = regbits< type,  3,  1 >;  /**< Data Block Ended Interrupt Enable           */
    using DTIP     = regbits< type,  4,  1 >;  /**< Data Transfer in Progress Interrupt Enable  */
    using NOTBUSY  = regbits< type,  5,  1 >;  /**< Data Not Busy Interrupt Enable              */
    using ENDRX    = regbits< type,  6,  1 >;  /**< End of Receive Buffer Interrupt Enable      */
    using ENDTX    = regbits< type,  7,  1 >;  /**< End of Transmit Buffer Interrupt Enable     */
    using RXBUFF   = regbits< type, 14,  1 >;  /**< Receive Buffer Full Interrupt Enable        */
    using TXBUFE   = regbits< type, 15,  1 >;  /**< Transmit Buffer Empty Interrupt Enable      */
    using RINDE    = regbits< type, 16,  1 >;  /**< Response Index Error Interrupt Enable       */
    using RDIRE    = regbits< type, 17,  1 >;  /**< Response Direction Error Interrupt Enable   */
    using RCRCE    = regbits< type, 18,  1 >;  /**< Response CRC Error Interrupt Enable         */
    using RENDE    = regbits< type, 19,  1 >;  /**< Response End Bit Error Interrupt Enable     */
    using RTOE     = regbits< type, 20,  1 >;  /**< Response Time-out Error Interrupt Enable    */
    using DCRCE    = regbits< type, 21,  1 >;  /**< Data CRC Error Interrupt Enable             */
    using DTOE     = regbits< type, 22,  1 >;  /**< Data Time-out Error Interrupt Enable        */
    using OVRE     = regbits< type, 30,  1 >;  /**< Overrun Interrupt Enable                    */
    using UNRE     = regbits< type, 31,  1 >;  /**< UnderRun Interrupt Enable                   */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000048, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, wo, 0 >;

    using CMDRDY   = regbits< type,  0,  1 >;  /**< Command Ready Interrupt Disable              */
    using RXRDY    = regbits< type,  1,  1 >;  /**< Receiver Ready Interrupt Disable             */
    using TXRDY    = regbits< type,  2,  1 >;  /**< Transmit Ready Interrupt Disable             */
    using BLKE     = regbits< type,  3,  1 >;  /**< Data Block Ended Interrupt Disable           */
    using DTIP     = regbits< type,  4,  1 >;  /**< Data Transfer in Progress Interrupt Disable  */
    using NOTBUSY  = regbits< type,  5,  1 >;  /**< Data Not Busy Interrupt Disable              */
    using ENDRX    = regbits< type,  6,  1 >;  /**< End of Receive Buffer Interrupt Disable      */
    using ENDTX    = regbits< type,  7,  1 >;  /**< End of Transmit Buffer Interrupt Disable     */
    using RXBUFF   = regbits< type, 14,  1 >;  /**< Receive Buffer Full Interrupt Disable        */
    using TXBUFE   = regbits< type, 15,  1 >;  /**< Transmit Buffer Empty Interrupt Disable      */
    using RINDE    = regbits< type, 16,  1 >;  /**< Response Index Error Interrupt Disable       */
    using RDIRE    = regbits< type, 17,  1 >;  /**< Response Direction Error Interrupt Disable   */
    using RCRCE    = regbits< type, 18,  1 >;  /**< Response CRC Error Interrupt Disable         */
    using RENDE    = regbits< type, 19,  1 >;  /**< Response End Bit Error Interrupt Disable     */
    using RTOE     = regbits< type, 20,  1 >;  /**< Response Time-out Error Interrupt Disable    */
    using DCRCE    = regbits< type, 21,  1 >;  /**< Data CRC Error Interrupt Disable             */
    using DTOE     = regbits< type, 22,  1 >;  /**< Data Time-out Error Interrupt Disable        */
    using OVRE     = regbits< type, 30,  1 >;  /**< Overrun Interrupt Disable                    */
    using UNRE     = regbits< type, 31,  1 >;  /**< UnderRun Interrupt Disable                   */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >;

    using CMDRDY   = regbits< type,  0,  1 >;  /**< Command Ready Interrupt Mask              */
    using RXRDY    = regbits< type,  1,  1 >;  /**< Receiver Ready Interrupt Mask             */
    using TXRDY    = regbits< type,  2,  1 >;  /**< Transmit Ready Interrupt Mask             */
    using BLKE     = regbits< type,  3,  1 >;  /**< Data Block Ended Interrupt Mask           */
    using DTIP     = regbits< type,  4,  1 >;  /**< Data Transfer in Progress Interrupt Mask  */
    using NOTBUSY  = regbits< type,  5,  1 >;  /**< Data Not Busy Interrupt Mask              */
    using ENDRX    = regbits< type,  6,  1 >;  /**< End of Receive Buffer Interrupt Mask      */
    using ENDTX    = regbits< type,  7,  1 >;  /**< End of Transmit Buffer Interrupt Mask     */
    using RXBUFF   = regbits< type, 14,  1 >;  /**< Receive Buffer Full Interrupt Mask        */
    using TXBUFE   = regbits< type, 15,  1 >;  /**< Transmit Buffer Empty Interrupt Mask      */
    using RINDE    = regbits< type, 16,  1 >;  /**< Response Index Error Interrupt Mask       */
    using RDIRE    = regbits< type, 17,  1 >;  /**< Response Direction Error Interrupt Mask   */
    using RCRCE    = regbits< type, 18,  1 >;  /**< Response CRC Error Interrupt Mask         */
    using RENDE    = regbits< type, 19,  1 >;  /**< Response End Bit Error Interrupt Mask     */
    using RTOE     = regbits< type, 20,  1 >;  /**< Response Time-out Error Interrupt Mask    */
    using DCRCE    = regbits< type, 21,  1 >;  /**< Data CRC Error Interrupt Mask             */
    using DTOE     = regbits< type, 22,  1 >;  /**< Data Time-out Error Interrupt Mask        */
    using OVRE     = regbits< type, 30,  1 >;  /**< Overrun Interrupt Mask                    */
    using UNRE     = regbits< type, 31,  1 >;  /**< UnderRun Interrupt Mask                   */
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

#endif // ARCH_REG_MCI_HPP_INCLUDED
