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
//  Import from CMSIS-SVD: "Atmel/ATSAM3S4B.svd"
//
//  vendor: Atmel
//  name: ATSAM3S4B
//  series: SAM3S
//  version: 20130131
//  description: Atmel ATSAM3S4B device: Cortex-M3 Microcontroller with 256KB Flash, USB, 64 Pins (refer to http://www.atmel.com/devices/SAM3S4B.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SSC_HPP_INCLUDED
#define ARCH_REG_SSC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Synchronous Serial Controller
 */
struct SSC
{
  static constexpr reg_addr_t base_addr = 0x40004000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using RXEN   = regbits< type,  0,  1 >;  /**< Receive Enable    */
    using RXDIS  = regbits< type,  1,  1 >;  /**< Receive Disable   */
    using TXEN   = regbits< type,  8,  1 >;  /**< Transmit Enable   */
    using TXDIS  = regbits< type,  9,  1 >;  /**< Transmit Disable  */
    using SWRST  = regbits< type, 15,  1 >;  /**< Software Reset    */
  };

  /**
   * Clock Mode Register
   */
  struct CMR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using DIV  = regbits< type,  0, 12 >;  /**< Clock Divider  */
  };

  /**
   * Receive Clock Mode Register
   */
  struct RCMR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using CKS     = regbits< type,  0,  2 >;  /**< Receive Clock Selection              */
    using CKO     = regbits< type,  2,  3 >;  /**< Receive Clock Output Mode Selection  */
    using CKI     = regbits< type,  5,  1 >;  /**< Receive Clock Inversion              */
    using CKG     = regbits< type,  6,  2 >;  /**< Receive Clock Gating Selection       */
    using START   = regbits< type,  8,  4 >;  /**< Receive Start Selection              */
    using STOP    = regbits< type, 12,  1 >;  /**< Receive Stop Selection               */
    using STTDLY  = regbits< type, 16,  8 >;  /**< Receive Start Delay                  */
    using PERIOD  = regbits< type, 24,  8 >;  /**< Receive Period Divider Selection     */
  };

  /**
   * Receive Frame Mode Register
   */
  struct RFMR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >;

    using DATLEN     = regbits< type,  0,  5 >;  /**< Data Length                          */
    using LOOP       = regbits< type,  5,  1 >;  /**< Loop Mode                            */
    using MSBF       = regbits< type,  7,  1 >;  /**< Most Significant Bit First           */
    using DATNB      = regbits< type,  8,  4 >;  /**< Data Number per Frame                */
    using FSLEN      = regbits< type, 16,  4 >;  /**< Receive Frame Sync Length            */
    using FSOS       = regbits< type, 20,  3 >;  /**< Receive Frame Sync Output Selection  */
    using FSEDGE     = regbits< type, 24,  1 >;  /**< Frame Sync Edge Detection            */
    using FSLEN_EXT  = regbits< type, 28,  4 >;  /**< FSLEN Field Extension                */
  };

  /**
   * Transmit Clock Mode Register
   */
  struct TCMR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using CKS     = regbits< type,  0,  2 >;  /**< Transmit Clock Selection              */
    using CKO     = regbits< type,  2,  3 >;  /**< Transmit Clock Output Mode Selection  */
    using CKI     = regbits< type,  5,  1 >;  /**< Transmit Clock Inversion              */
    using CKG     = regbits< type,  6,  2 >;  /**< Transmit Clock Gating Selection       */
    using START   = regbits< type,  8,  4 >;  /**< Transmit Start Selection              */
    using STTDLY  = regbits< type, 16,  8 >;  /**< Transmit Start Delay                  */
    using PERIOD  = regbits< type, 24,  8 >;  /**< Transmit Period Divider Selection     */
  };

  /**
   * Transmit Frame Mode Register
   */
  struct TFMR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    using DATLEN     = regbits< type,  0,  5 >;  /**< Data Length                           */
    using DATDEF     = regbits< type,  5,  1 >;  /**< Data Default Value                    */
    using MSBF       = regbits< type,  7,  1 >;  /**< Most Significant Bit First            */
    using DATNB      = regbits< type,  8,  4 >;  /**< Data Number per frame                 */
    using FSLEN      = regbits< type, 16,  4 >;  /**< Transmit Frame Sync Length            */
    using FSOS       = regbits< type, 20,  3 >;  /**< Transmit Frame Sync Output Selection  */
    using FSDEN      = regbits< type, 23,  1 >;  /**< Frame Sync Data Enable                */
    using FSEDGE     = regbits< type, 24,  1 >;  /**< Frame Sync Edge Detection             */
    using FSLEN_EXT  = regbits< type, 28,  4 >;  /**< FSLEN Field Extension                 */
  };

  /**
   * Receive Holding Register
   */
  struct RHR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using RDAT  = regbits< type,  0, 32 >;  /**< Receive Data  */
  };

  /**
   * Transmit Holding Register
   */
  struct THR
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using TDAT  = regbits< type,  0, 32 >;  /**< Transmit Data  */
  };

  /**
   * Receive Sync. Holding Register
   */
  struct RSHR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using RSDAT  = regbits< type,  0, 16 >;  /**< Receive Synchronization Data  */
  };

  /**
   * Transmit Sync. Holding Register
   */
  struct TSHR
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >;

    using TSDAT  = regbits< type,  0, 16 >;  /**< Transmit Synchronization Data  */
  };

  /**
   * Receive Compare 0 Register
   */
  struct RC0R
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >;

    using CP0  = regbits< type,  0, 16 >;  /**< Receive Compare Data 0  */
  };

  /**
   * Receive Compare 1 Register
   */
  struct RC1R
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >;

    using CP1  = regbits< type,  0, 16 >;  /**< Receive Compare Data 1  */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x000000CC >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x000000CC >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Ready         */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Transmit Empty         */
    using ENDTX    = regbits< type,  2,  1 >;  /**< End of Transmission    */
    using TXBUFE   = regbits< type,  3,  1 >;  /**< Transmit Buffer Empty  */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Receive Ready          */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun        */
    using ENDRX    = regbits< type,  6,  1 >;  /**< End of Reception       */
    using RXBUFF   = regbits< type,  7,  1 >;  /**< Receive Buffer Full    */
    using CP0      = regbits< type,  8,  1 >;  /**< Compare 0              */
    using CP1      = regbits< type,  9,  1 >;  /**< Compare 1              */
    using TXSYN    = regbits< type, 10,  1 >;  /**< Transmit Sync          */
    using RXSYN    = regbits< type, 11,  1 >;  /**< Receive Sync           */
    using TXEN     = regbits< type, 16,  1 >;  /**< Transmit Enable        */
    using RXEN     = regbits< type, 17,  1 >;  /**< Receive Enable         */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000044, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, wo, 0 >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Ready Interrupt Enable         */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Transmit Empty Interrupt Enable         */
    using ENDTX    = regbits< type,  2,  1 >;  /**< End of Transmission Interrupt Enable    */
    using TXBUFE   = regbits< type,  3,  1 >;  /**< Transmit Buffer Empty Interrupt Enable  */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Receive Ready Interrupt Enable          */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun Interrupt Enable        */
    using ENDRX    = regbits< type,  6,  1 >;  /**< End of Reception Interrupt Enable       */
    using RXBUFF   = regbits< type,  7,  1 >;  /**< Receive Buffer Full Interrupt Enable    */
    using CP0      = regbits< type,  8,  1 >;  /**< Compare 0 Interrupt Enable              */
    using CP1      = regbits< type,  9,  1 >;  /**< Compare 1 Interrupt Enable              */
    using TXSYN    = regbits< type, 10,  1 >;  /**< Tx Sync Interrupt Enable                */
    using RXSYN    = regbits< type, 11,  1 >;  /**< Rx Sync Interrupt Enable                */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000048, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, wo, 0 >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Ready Interrupt Disable         */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Transmit Empty Interrupt Disable         */
    using ENDTX    = regbits< type,  2,  1 >;  /**< End of Transmission Interrupt Disable    */
    using TXBUFE   = regbits< type,  3,  1 >;  /**< Transmit Buffer Empty Interrupt Disable  */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Receive Ready Interrupt Disable          */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun Interrupt Disable        */
    using ENDRX    = regbits< type,  6,  1 >;  /**< End of Reception Interrupt Disable       */
    using RXBUFF   = regbits< type,  7,  1 >;  /**< Receive Buffer Full Interrupt Disable    */
    using CP0      = regbits< type,  8,  1 >;  /**< Compare 0 Interrupt Disable              */
    using CP1      = regbits< type,  9,  1 >;  /**< Compare 1 Interrupt Disable              */
    using TXSYN    = regbits< type, 10,  1 >;  /**< Tx Sync Interrupt Enable                 */
    using RXSYN    = regbits< type, 11,  1 >;  /**< Rx Sync Interrupt Enable                 */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Ready Interrupt Mask         */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Transmit Empty Interrupt Mask         */
    using ENDTX    = regbits< type,  2,  1 >;  /**< End of Transmission Interrupt Mask    */
    using TXBUFE   = regbits< type,  3,  1 >;  /**< Transmit Buffer Empty Interrupt Mask  */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Receive Ready Interrupt Mask          */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun Interrupt Mask        */
    using ENDRX    = regbits< type,  6,  1 >;  /**< End of Reception Interrupt Mask       */
    using RXBUFF   = regbits< type,  7,  1 >;  /**< Receive Buffer Full Interrupt Mask    */
    using CP0      = regbits< type,  8,  1 >;  /**< Compare 0 Interrupt Mask              */
    using CP1      = regbits< type,  9,  1 >;  /**< Compare 1 Interrupt Mask              */
    using TXSYN    = regbits< type, 10,  1 >;  /**< Tx Sync Interrupt Mask                */
    using RXSYN    = regbits< type, 11,  1 >;  /**< Rx Sync Interrupt Mask                */
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

#endif // ARCH_REG_SSC_HPP_INCLUDED
