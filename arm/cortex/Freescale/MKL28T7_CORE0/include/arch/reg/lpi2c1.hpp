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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE0.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE0
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE0 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LPI2C1_HPP_INCLUDED
#define ARCH_REG_LPI2C1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * The LPI2C Memory Map/Register Definition can be found here.
 */
struct LPI2C1
{
  static constexpr reg_addr_t base_addr = 0x400c1000;

  /**
   * Version ID Register
   */
  struct VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x1000003 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x1000003 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Feature Specification Number  */
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

    using MTXFIFO  = regbits< type,  0,  4 >;  /**< Master Transmit FIFO Size  */
    using MRXFIFO  = regbits< type,  8,  4 >;  /**< Master Receive FIFO Size   */
  };

  /**
   * Master Control Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using MEN    = regbits< type,  0,  1 >;  /**< Master Enable        */
    using RST    = regbits< type,  1,  1 >;  /**< Software Reset       */
    using DOZEN  = regbits< type,  2,  1 >;  /**< Doze mode enable     */
    using DBGEN  = regbits< type,  3,  1 >;  /**< Debug Enable         */
    using RTF    = regbits< type,  8,  1 >;  /**< Reset Transmit FIFO  */
    using RRF    = regbits< type,  9,  1 >;  /**< Reset Receive FIFO   */
  };

  /**
   * Master Status Register
   */
  struct MSR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x1 >;

    using TDF   = regbits< type,  0,  1 >;  /**< Transmit Data Flag     */
    using RDF   = regbits< type,  1,  1 >;  /**< Receive Data Flag      */
    using EPF   = regbits< type,  8,  1 >;  /**< End Packet Flag        */
    using SDF   = regbits< type,  9,  1 >;  /**< STOP Detect Flag       */
    using NDF   = regbits< type, 10,  1 >;  /**< NACK Detect Flag       */
    using ALF   = regbits< type, 11,  1 >;  /**< Arbitration Lost Flag  */
    using FEF   = regbits< type, 12,  1 >;  /**< FIFO Error Flag        */
    using PLTF  = regbits< type, 13,  1 >;  /**< Pin Low Timeout Flag   */
    using DMF   = regbits< type, 14,  1 >;  /**< Data Match Flag        */
    using MBF   = regbits< type, 24,  1 >;  /**< Master Busy Flag       */
    using BBF   = regbits< type, 25,  1 >;  /**< Bus Busy Flag          */
  };

  /**
   * Master Interrupt Enable Register
   */
  struct MIER
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using TDIE   = regbits< type,  0,  1 >;  /**< Transmit Data Interrupt Enable     */
    using RDIE   = regbits< type,  1,  1 >;  /**< Receive Data Interrupt Enable      */
    using EPIE   = regbits< type,  8,  1 >;  /**< End Packet Interrupt Enable        */
    using SDIE   = regbits< type,  9,  1 >;  /**< STOP Detect Interrupt Enable       */
    using NDIE   = regbits< type, 10,  1 >;  /**< NACK Detect Interrupt Enable       */
    using ALIE   = regbits< type, 11,  1 >;  /**< Arbitration Lost Interrupt Enable  */
    using FEIE   = regbits< type, 12,  1 >;  /**< FIFO Error Interrupt Enable        */
    using PLTIE  = regbits< type, 13,  1 >;  /**< Pin Low Timeout Interrupt Enable   */
    using DMIE   = regbits< type, 14,  1 >;  /**< Data Match Interrupt Enable        */
  };

  /**
   * Master DMA Enable Register
   */
  struct MDER
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using TDDE  = regbits< type,  0,  1 >;  /**< Transmit Data DMA Enable  */
    using RDDE  = regbits< type,  1,  1 >;  /**< Receive Data DMA Enable   */
  };

  /**
   * Master Configuration Register 0
   */
  struct MCFGR0
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
   * Master Configuration Register 1
   */
  struct MCFGR1
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using PRESCALE  = regbits< type,  0,  3 >;  /**< Prescaler                                                           */
    using AUTOSTOP  = regbits< type,  8,  1 >;  /**< Automatic STOP Generation                                           */
    using IGNACK    = regbits< type,  9,  1 >;  /**< When set, the received NACK field is ignored and assumed to be ACK  */
    using TIMECFG   = regbits< type, 10,  1 >;  /**< Timeout Configuration                                               */
    using MATCFG    = regbits< type, 16,  3 >;  /**< Match Configuration                                                 */
    using PINCFG    = regbits< type, 24,  3 >;  /**< Pin Configuration                                                   */
  };

  /**
   * Master Configuration Register 2
   */
  struct MCFGR2
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using BUSIDLE  = regbits< type,  0, 12 >;  /**< Bus Idle Timeout   */
    using FILTSCL  = regbits< type, 16,  4 >;  /**< Glitch Filter SCL  */
    using FILTSDA  = regbits< type, 24,  4 >;  /**< Glitch Filter SDA  */
  };

  /**
   * Master Configuration Register 3
   */
  struct MCFGR3
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using PINLOW  = regbits< type,  8, 12 >;  /**< Pin Low Timeout  */
  };

  /**
   * Master Data Match Register
   */
  struct MDMR
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using MATCH0  = regbits< type,  0,  8 >;  /**< Match 0 Value  */
    using MATCH1  = regbits< type, 16,  8 >;  /**< Match 1 Value  */
  };

  /**
   * Master Clock Configuration Register 0
   */
  struct MCCR0
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using CLKLO    = regbits< type,  0,  6 >;  /**< Clock Low Period   */
    using CLKHI    = regbits< type,  8,  6 >;  /**< Clock High Period  */
    using SETHOLD  = regbits< type, 16,  6 >;  /**< Setup Hold Delay   */
    using DATAVD   = regbits< type, 24,  6 >;  /**< Data Valid Delay   */
  };

  /**
   * Master Clock Configuration Register 1
   */
  struct MCCR1
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using CLKLO    = regbits< type,  0,  6 >;  /**< Clock Low Period   */
    using CLKHI    = regbits< type,  8,  6 >;  /**< Clock High Period  */
    using SETHOLD  = regbits< type, 16,  6 >;  /**< Setup Hold Delay   */
    using DATAVD   = regbits< type, 24,  6 >;  /**< Data Valid Delay   */
  };

  /**
   * Master FIFO Control Register
   */
  struct MFCR
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using TXWATER  = regbits< type,  0,  8 >;  /**< Transmit FIFO Watermark  */
    using RXWATER  = regbits< type, 16,  8 >;  /**< Receive FIFO Watermark   */
  };

  /**
   * Master FIFO Status Register
   */
  struct MFSR
  : public reg< uint32_t, base_addr + 0x5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0 >;

    using TXCOUNT  = regbits< type,  0,  8 >;  /**< Transmit FIFO Count  */
    using RXCOUNT  = regbits< type, 16,  8 >;  /**< Receive FIFO Count   */
  };

  /**
   * Master Transmit Data Register
   */
  struct MTDR
  : public reg< uint32_t, base_addr + 0x60, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, wo, 0 >;

    using DATA  = regbits< type,  0,  8 >;  /**< Transmit Data  */
    using CMD   = regbits< type,  8,  3 >;  /**< Command Data   */
  };

  /**
   * Master Receive Data Register
   */
  struct MRDR
  : public reg< uint32_t, base_addr + 0x70, ro, 0x4000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0x4000 >;

    using DATA     = regbits< type,  0,  8 >;  /**< Receive Data  */
    using RXEMPTY  = regbits< type, 14,  1 >;  /**< RX Empty      */
  };

  /**
   * Slave Control Register
   */
  struct SCR
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using SEN     = regbits< type,  0,  1 >;  /**< Slave Enable         */
    using RST     = regbits< type,  1,  1 >;  /**< Software Reset       */
    using FILTEN  = regbits< type,  4,  1 >;  /**< Filter Enable        */
    using FILTDZ  = regbits< type,  5,  1 >;  /**< Filter Doze Enable   */
    using RTF     = regbits< type,  8,  1 >;  /**< Reset Transmit FIFO  */
    using RRF     = regbits< type,  9,  1 >;  /**< Reset Receive FIFO   */
  };

  /**
   * Slave Status Register
   */
  struct SSR
  : public reg< uint32_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0 >;

    using TDF   = regbits< type,  0,  1 >;  /**< Transmit Data Flag         */
    using RDF   = regbits< type,  1,  1 >;  /**< Receive Data Flag          */
    using AVF   = regbits< type,  2,  1 >;  /**< Address Valid Flag         */
    using TAF   = regbits< type,  3,  1 >;  /**< Transmit ACK Flag          */
    using RSF   = regbits< type,  8,  1 >;  /**< Repeated Start Flag        */
    using SDF   = regbits< type,  9,  1 >;  /**< STOP Detect Flag           */
    using BEF   = regbits< type, 10,  1 >;  /**< Bit Error Flag             */
    using FEF   = regbits< type, 11,  1 >;  /**< FIFO Error Flag            */
    using AM0F  = regbits< type, 12,  1 >;  /**< Address Match 0 Flag       */
    using AM1F  = regbits< type, 13,  1 >;  /**< Address Match 1 Flag       */
    using GCF   = regbits< type, 14,  1 >;  /**< General Call Flag          */
    using SARF  = regbits< type, 15,  1 >;  /**< SMBus Alert Response Flag  */
    using SBF   = regbits< type, 24,  1 >;  /**< Slave Busy Flag            */
    using BBF   = regbits< type, 25,  1 >;  /**< Bus Busy Flag              */
  };

  /**
   * Slave Interrupt Enable Register
   */
  struct SIER
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using TDIE   = regbits< type,  0,  1 >;  /**< Transmit Data Interrupt Enable         */
    using RDIE   = regbits< type,  1,  1 >;  /**< Receive Data Interrupt Enable          */
    using AVIE   = regbits< type,  2,  1 >;  /**< Address Valid Interrupt Enable         */
    using TAIE   = regbits< type,  3,  1 >;  /**< Transmit ACK Interrupt Enable          */
    using RSIE   = regbits< type,  8,  1 >;  /**< Repeated Start Interrupt Enable        */
    using SDIE   = regbits< type,  9,  1 >;  /**< STOP Detect Interrupt Enable           */
    using BEIE   = regbits< type, 10,  1 >;  /**< Bit Error Interrupt Enable             */
    using FEIE   = regbits< type, 11,  1 >;  /**< FIFO Error Interrupt Enable            */
    using AM0IE  = regbits< type, 12,  1 >;  /**< Address Match 0 Interrupt Enable       */
    using AM1F   = regbits< type, 13,  1 >;  /**< Address Match 1 Interrupt Enable       */
    using GCIE   = regbits< type, 14,  1 >;  /**< General Call Interrupt Enable          */
    using SARIE  = regbits< type, 15,  1 >;  /**< SMBus Alert Response Interrupt Enable  */
  };

  /**
   * Slave DMA Enable Register
   */
  struct SDER
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0 >;

    using TDDE  = regbits< type,  0,  1 >;  /**< Transmit Data DMA Enable  */
    using RDDE  = regbits< type,  1,  1 >;  /**< Receive Data DMA Enable   */
    using AVDE  = regbits< type,  2,  1 >;  /**< Address Valid DMA Enable  */
  };

  /**
   * Slave Configuration Register 1
   */
  struct SCFGR1
  : public reg< uint32_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0 >;

    using ADRSTALL  = regbits< type,  0,  1 >;  /**< Address SCL Stall            */
    using RXSTALL   = regbits< type,  1,  1 >;  /**< RX SCL Stall                 */
    using TXDSTALL  = regbits< type,  2,  1 >;  /**< TX Data SCL Stall            */
    using ACKSTALL  = regbits< type,  3,  1 >;  /**< ACK SCL Stall                */
    using GCEN      = regbits< type,  8,  1 >;  /**< General Call Enable          */
    using SAEN      = regbits< type,  9,  1 >;  /**< SMBus Alert Enable           */
    using TXCFG     = regbits< type, 10,  1 >;  /**< Transmit Flag Configuration  */
    using RXCFG     = regbits< type, 11,  1 >;  /**< Receive Data Configuration   */
    using IGNACK    = regbits< type, 12,  1 >;  /**< Ignore NACK                  */
    using HSMEN     = regbits< type, 13,  1 >;  /**< High Speed Mode Enable       */
    using ADDRCFG   = regbits< type, 16,  3 >;  /**< Address Configuration        */
  };

  /**
   * Slave Configuration Register 2
   */
  struct SCFGR2
  : public reg< uint32_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0 >;

    using CLKHOLD  = regbits< type,  0,  4 >;  /**< Clock Hold Time    */
    using DATAVD   = regbits< type,  8,  6 >;  /**< Data Valid Delay   */
    using FILTSCL  = regbits< type, 16,  4 >;  /**< Glitch Filter SCL  */
    using FILTSDA  = regbits< type, 24,  4 >;  /**< Glitch Filter SDA  */
  };

  /**
   * Slave Address Match Register
   */
  struct SAMR
  : public reg< uint32_t, base_addr + 0x140, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0 >;

    using ADDR0  = regbits< type,  1, 10 >;  /**< Address 0 Value  */
    using ADDR1  = regbits< type, 17, 10 >;  /**< Address 1 Value  */
  };

  /**
   * Slave Address Status Register
   */
  struct SASR
  : public reg< uint32_t, base_addr + 0x150, ro, 0x4000 >
  {
    using type = reg< uint32_t, base_addr + 0x150, ro, 0x4000 >;

    using RADDR  = regbits< type,  0, 11 >;  /**< Received Address   */
    using ANV    = regbits< type, 14,  1 >;  /**< Address Not Valid  */
  };

  /**
   * Slave Transmit ACK Register
   */
  struct STAR
  : public reg< uint32_t, base_addr + 0x154, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0 >;

    using TXNACK  = regbits< type,  0,  1 >;  /**< Transmit NACK  */
  };

  /**
   * Slave Transmit Data Register
   */
  struct STDR
  : public reg< uint32_t, base_addr + 0x160, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x160, wo, 0 >;

    using DATA  = regbits< type,  0,  8 >;  /**< Transmit Data  */
  };

  /**
   * Slave Receive Data Register
   */
  struct SRDR
  : public reg< uint32_t, base_addr + 0x170, ro, 0x4000 >
  {
    using type = reg< uint32_t, base_addr + 0x170, ro, 0x4000 >;

    using DATA     = regbits< type,  0,  8 >;  /**< Receive Data    */
    using RXEMPTY  = regbits< type, 14,  1 >;  /**< RX Empty        */
    using SOF      = regbits< type, 15,  1 >;  /**< Start Of Frame  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LPI2C1_HPP_INCLUDED
