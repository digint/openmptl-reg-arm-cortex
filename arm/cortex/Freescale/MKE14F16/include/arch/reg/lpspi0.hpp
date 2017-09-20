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
//  Import from CMSIS-SVD: "Freescale/MKE14F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE14F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE14F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LPSPI0_HPP_INCLUDED
#define ARCH_REG_LPSPI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * The LPSPI Memory Map/Register Definition can be found here.
 */
struct LPSPI0
{
  static constexpr reg_addr_t base_addr = 0x4002c000;

  /**
   * Version ID Register
   */
  struct VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x1000004 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x1000004 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Module Identification Number  */
    using MINOR    = regbits< type, 16,  8 >;  /**< Minor Version Number          */
    using MAJOR    = regbits< type, 24,  8 >;  /**< Major Version Number          */
  };

  /**
   * Parameter Register
   */
  struct PARAM
  : public reg< uint32_t, base_addr + 0x4, ro, 0x202 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x202 >;

    using TXFIFO  = regbits< type,  0,  8 >;  /**< Transmit FIFO Size  */
    using RXFIFO  = regbits< type,  8,  8 >;  /**< Receive FIFO Size   */
  };

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using MEN    = regbits< type,  0,  1 >;  /**< Module Enable        */
    using RST    = regbits< type,  1,  1 >;  /**< Software Reset       */
    using DOZEN  = regbits< type,  2,  1 >;  /**< Doze mode enable     */
    using DBGEN  = regbits< type,  3,  1 >;  /**< Debug Enable         */
    using RTF    = regbits< type,  8,  1 >;  /**< Reset Transmit FIFO  */
    using RRF    = regbits< type,  9,  1 >;  /**< Reset Receive FIFO   */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x1 >;

    using TDF  = regbits< type,  0,  1 >;  /**< Transmit Data Flag      */
    using RDF  = regbits< type,  1,  1 >;  /**< Receive Data Flag       */
    using WCF  = regbits< type,  8,  1 >;  /**< Word Complete Flag      */
    using FCF  = regbits< type,  9,  1 >;  /**< Frame Complete Flag     */
    using TCF  = regbits< type, 10,  1 >;  /**< Transfer Complete Flag  */
    using TEF  = regbits< type, 11,  1 >;  /**< Transmit Error Flag     */
    using REF  = regbits< type, 12,  1 >;  /**< Receive Error Flag      */
    using DMF  = regbits< type, 13,  1 >;  /**< Data Match Flag         */
    using MBF  = regbits< type, 24,  1 >;  /**< Module Busy Flag        */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using TDIE  = regbits< type,  0,  1 >;  /**< Transmit Data Interrupt Enable      */
    using RDIE  = regbits< type,  1,  1 >;  /**< Receive Data Interrupt Enable       */
    using WCIE  = regbits< type,  8,  1 >;  /**< Word Complete Interrupt Enable      */
    using FCIE  = regbits< type,  9,  1 >;  /**< Frame Complete Interrupt Enable     */
    using TCIE  = regbits< type, 10,  1 >;  /**< Transfer Complete Interrupt Enable  */
    using TEIE  = regbits< type, 11,  1 >;  /**< Transmit Error Interrupt Enable     */
    using REIE  = regbits< type, 12,  1 >;  /**< Receive Error Interrupt Enable      */
    using DMIE  = regbits< type, 13,  1 >;  /**< Data Match Interrupt Enable         */
  };

  /**
   * DMA Enable Register
   */
  struct DER
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using TDDE  = regbits< type,  0,  1 >;  /**< Transmit Data DMA Enable  */
    using RDDE  = regbits< type,  1,  1 >;  /**< Receive Data DMA Enable   */
  };

  /**
   * Configuration Register 0
   */
  struct CFGR0
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using HREN     = regbits< type,  0,  1 >;  /**< Host Request Enable      */
    using HRPOL    = regbits< type,  1,  1 >;  /**< Host Request Polarity    */
    using HRSEL    = regbits< type,  2,  1 >;  /**< Host Request Select      */
    using CIRFIFO  = regbits< type,  8,  1 >;  /**< Circular FIFO Enable     */
    using RDMO     = regbits< type,  9,  1 >;  /**< Receive Data Match Only  */
  };

  /**
   * Configuration Register 1
   */
  struct CFGR1
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using MASTER   = regbits< type,  0,  1 >;  /**< Master Mode                           */
    using SAMPLE   = regbits< type,  1,  1 >;  /**< Sample Point                          */
    using AUTOPCS  = regbits< type,  2,  1 >;  /**< Automatic PCS                         */
    using NOSTALL  = regbits< type,  3,  1 >;  /**< No Stall                              */
    using PCSPOL   = regbits< type,  8,  4 >;  /**< Peripheral Chip Select Polarity       */
    using MATCFG   = regbits< type, 16,  3 >;  /**< Match Configuration                   */
    using PINCFG   = regbits< type, 24,  2 >;  /**< Pin Configuration                     */
    using OUTCFG   = regbits< type, 26,  1 >;  /**< Output Config                         */
    using PCSCFG   = regbits< type, 27,  1 >;  /**< Peripheral Chip Select Configuration  */
  };

  /**
   * Data Match Register 0
   */
  struct DMR0
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using MATCH0  = regbits< type,  0, 32 >;  /**< Match 0 Value  */
  };

  /**
   * Data Match Register 1
   */
  struct DMR1
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using MATCH1  = regbits< type,  0, 32 >;  /**< Match 1 Value  */
  };

  /**
   * Clock Configuration Register
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using SCKDIV  = regbits< type,  0,  8 >;  /**< SCK Divider              */
    using DBT     = regbits< type,  8,  8 >;  /**< Delay Between Transfers  */
    using PCSSCK  = regbits< type, 16,  8 >;  /**< PCS to SCK Delay         */
    using SCKPCS  = regbits< type, 24,  8 >;  /**< SCK to PCS Delay         */
  };

  /**
   * FIFO Control Register
   */
  struct FCR
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using TXWATER  = regbits< type,  0,  8 >;  /**< Transmit FIFO Watermark  */
    using RXWATER  = regbits< type, 16,  8 >;  /**< Receive FIFO Watermark   */
  };

  /**
   * FIFO Status Register
   */
  struct FSR
  : public reg< uint32_t, base_addr + 0x5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0 >;

    using TXCOUNT  = regbits< type,  0,  8 >;  /**< Transmit FIFO Count  */
    using RXCOUNT  = regbits< type, 16,  8 >;  /**< Receive FIFO Count   */
  };

  /**
   * Transmit Command Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0x60, rw, 0x1F >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x1F >;

    using FRAMESZ   = regbits< type,  0, 12 >;  /**< Frame Size              */
    using WIDTH     = regbits< type, 16,  2 >;  /**< Transfer Width          */
    using TXMSK     = regbits< type, 18,  1 >;  /**< Transmit Data Mask      */
    using RXMSK     = regbits< type, 19,  1 >;  /**< Receive Data Mask       */
    using CONTC     = regbits< type, 20,  1 >;  /**< Continuing Command      */
    using CONT      = regbits< type, 21,  1 >;  /**< Continuous Transfer     */
    using BYSW      = regbits< type, 22,  1 >;  /**< Byte Swap               */
    using LSBF      = regbits< type, 23,  1 >;  /**< LSB First               */
    using PCS       = regbits< type, 24,  2 >;  /**< Peripheral Chip Select  */
    using PRESCALE  = regbits< type, 27,  3 >;  /**< Prescaler Value         */
    using CPHA      = regbits< type, 30,  1 >;  /**< Clock Phase             */
    using CPOL      = regbits< type, 31,  1 >;  /**< Clock Polarity          */
  };

  /**
   * Transmit Data Register
   */
  struct TDR
  : public reg< uint32_t, base_addr + 0x64, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, wo, 0 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Transmit Data  */
  };

  /**
   * Receive Status Register
   */
  struct RSR
  : public reg< uint32_t, base_addr + 0x70, ro, 0x2 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0x2 >;

    using SOF      = regbits< type,  0,  1 >;  /**< Start Of Frame  */
    using RXEMPTY  = regbits< type,  1,  1 >;  /**< RX FIFO Empty   */
  };

  /**
   * Receive Data Register
   */
  struct RDR
  : public reg< uint32_t, base_addr + 0x74, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Receive Data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LPSPI0_HPP_INCLUDED
