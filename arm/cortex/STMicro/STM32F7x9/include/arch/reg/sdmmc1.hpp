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
//  Import from CMSIS-SVD: "STMicro/STM32F7x9.svd"
//
//  name: STM32F7x9
//  version: 1.0
//  description: STM32F7x9
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SDMMC1_HPP_INCLUDED
#define ARCH_REG_SDMMC1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Secure digital input/output interface
 */
struct SDMMC1
{
  static constexpr reg_addr_t base_addr = 0x40012c00;

  /**
   * power control register
   */
  struct POWER
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using PWRCTRL  = regbits< type,  0,  2 >;  /**< PWRCTRL  */
  };

  /**
   * SDI clock control register
   */
  struct CLKCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using HWFC_EN  = regbits< type, 14,  1 >;  /**< HW Flow Control enable           */
    using NEGEDGE  = regbits< type, 13,  1 >;  /**< SDIO_CK dephasing selection bit  */
    using WIDBUS   = regbits< type, 11,  2 >;  /**< Wide bus mode enable bit         */
    using BYPASS   = regbits< type, 10,  1 >;  /**< Clock divider bypass enable bit  */
    using PWRSAV   = regbits< type,  9,  1 >;  /**< Power saving configuration bit   */
    using CLKEN    = regbits< type,  8,  1 >;  /**< Clock enable bit                 */
    using CLKDIV   = regbits< type,  0,  8 >;  /**< Clock divide factor              */
  };

  /**
   * argument register
   */
  struct ARG
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using CMDARG  = regbits< type,  0, 32 >;  /**< Command argument  */
  };

  /**
   * command register
   */
  struct CMD
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using CE_ATACMD    = regbits< type, 14,  1 >;  /**< CE-ATA command                                                  */
    using nIEN         = regbits< type, 13,  1 >;  /**< not Interrupt Enable                                            */
    using ENCMDcompl   = regbits< type, 12,  1 >;  /**< Enable CMD completion                                           */
    using SDIOSuspend  = regbits< type, 11,  1 >;  /**< SD I/O suspend command                                          */
    using CPSMEN       = regbits< type, 10,  1 >;  /**< Command path state machine (CPSM) Enable bit                    */
    using WAITPEND     = regbits< type,  9,  1 >;  /**< CPSM Waits for ends of data transfer (CmdPend internal signal)  */
    using WAITINT      = regbits< type,  8,  1 >;  /**< CPSM waits for interrupt request                                */
    using WAITRESP     = regbits< type,  6,  2 >;  /**< Wait for response bits                                          */
    using CMDINDEX     = regbits< type,  0,  6 >;  /**< Command index                                                   */
  };

  /**
   * command response register
   */
  struct RESPCMD
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: RESPCMD
    using RESPCMD_ = regbits< type,  0,  6 >;  /**< Response command index  */
  };

  /**
   * response 1..4 register
   */
  struct RESP1
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    using CARDSTATUS1  = regbits< type,  0, 32 >;  /**< see Table 132  */
  };

  /**
   * response 1..4 register
   */
  struct RESP2
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >;

    using CARDSTATUS2  = regbits< type,  0, 32 >;  /**< see Table 132  */
  };

  /**
   * response 1..4 register
   */
  struct RESP3
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using CARDSTATUS3  = regbits< type,  0, 32 >;  /**< see Table 132  */
  };

  /**
   * response 1..4 register
   */
  struct RESP4
  : public reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >;

    using CARDSTATUS4  = regbits< type,  0, 32 >;  /**< see Table 132  */
  };

  /**
   * data timer register
   */
  struct DTIMER
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using DATATIME  = regbits< type,  0, 32 >;  /**< Data timeout period  */
  };

  /**
   * data length register
   */
  struct DLEN
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using DATALENGTH  = regbits< type,  0, 25 >;  /**< Data length value  */
  };

  /**
   * data control register
   */
  struct DCTRL
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using SDIOEN      = regbits< type, 11,  1 >;  /**< SD I/O enable functions                                                 */
    using RWMOD       = regbits< type, 10,  1 >;  /**< Read wait mode                                                          */
    using RWSTOP      = regbits< type,  9,  1 >;  /**< Read wait stop                                                          */
    using RWSTART     = regbits< type,  8,  1 >;  /**< Read wait start                                                         */
    using DBLOCKSIZE  = regbits< type,  4,  4 >;  /**< Data block size                                                         */
    using DMAEN       = regbits< type,  3,  1 >;  /**< DMA enable bit                                                          */
    using DTMODE      = regbits< type,  2,  1 >;  /**< Data transfer mode selection 1: Stream or SDIO multibyte data transfer  */
    using DTDIR       = regbits< type,  1,  1 >;  /**< Data transfer direction selection                                       */
    using DTEN        = regbits< type,  0,  1 >;  /**< DTEN                                                                    */
  };

  /**
   * data counter register
   */
  struct DCOUNT
  : public reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >;

    using DATACOUNT  = regbits< type,  0, 25 >;  /**< Data count value  */
  };

  /**
   * status register
   */
  struct STA
  : public reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >;

    using CEATAEND  = regbits< type, 23,  1 >;  /**< CE-ATA command completion signal received for CMD61                      */
    using SDIOIT    = regbits< type, 22,  1 >;  /**< SDIO interrupt received                                                  */
    using RXDAVL    = regbits< type, 21,  1 >;  /**< Data available in receive FIFO                                           */
    using TXDAVL    = regbits< type, 20,  1 >;  /**< Data available in transmit FIFO                                          */
    using RXFIFOE   = regbits< type, 19,  1 >;  /**< Receive FIFO empty                                                       */
    using TXFIFOE   = regbits< type, 18,  1 >;  /**< Transmit FIFO empty                                                      */
    using RXFIFOF   = regbits< type, 17,  1 >;  /**< Receive FIFO full                                                        */
    using TXFIFOF   = regbits< type, 16,  1 >;  /**< Transmit FIFO full                                                       */
    using RXFIFOHF  = regbits< type, 15,  1 >;  /**< Receive FIFO half full: there are at least 8 words in the FIFO           */
    using TXFIFOHE  = regbits< type, 14,  1 >;  /**< Transmit FIFO half empty: at least 8 words can be written into the FIFO  */
    using RXACT     = regbits< type, 13,  1 >;  /**< Data receive in progress                                                 */
    using TXACT     = regbits< type, 12,  1 >;  /**< Data transmit in progress                                                */
    using CMDACT    = regbits< type, 11,  1 >;  /**< Command transfer in progress                                             */
    using DBCKEND   = regbits< type, 10,  1 >;  /**< Data block sent/received (CRC check passed)                              */
    using STBITERR  = regbits< type,  9,  1 >;  /**< Start bit not detected on all data signals in wide bus mode              */
    using DATAEND   = regbits< type,  8,  1 >;  /**< Data end (data counter, SDIDCOUNT, is zero)                              */
    using CMDSENT   = regbits< type,  7,  1 >;  /**< Command sent (no response required)                                      */
    using CMDREND   = regbits< type,  6,  1 >;  /**< Command response received (CRC check passed)                             */
    using RXOVERR   = regbits< type,  5,  1 >;  /**< Received FIFO overrun error                                              */
    using TXUNDERR  = regbits< type,  4,  1 >;  /**< Transmit FIFO underrun error                                             */
    using DTIMEOUT  = regbits< type,  3,  1 >;  /**< Data timeout                                                             */
    using CTIMEOUT  = regbits< type,  2,  1 >;  /**< Command response timeout                                                 */
    using DCRCFAIL  = regbits< type,  1,  1 >;  /**< Data block sent/received (CRC check failed)                              */
    using CCRCFAIL  = regbits< type,  0,  1 >;  /**< Command response received (CRC check failed)                             */
  };

  /**
   * interrupt clear register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using CEATAENDC  = regbits< type, 23,  1 >;  /**< CEATAEND flag clear bit  */
    using SDIOITC    = regbits< type, 22,  1 >;  /**< SDIOIT flag clear bit    */
    using DBCKENDC   = regbits< type, 10,  1 >;  /**< DBCKEND flag clear bit   */
    using STBITERRC  = regbits< type,  9,  1 >;  /**< STBITERR flag clear bit  */
    using DATAENDC   = regbits< type,  8,  1 >;  /**< DATAEND flag clear bit   */
    using CMDSENTC   = regbits< type,  7,  1 >;  /**< CMDSENT flag clear bit   */
    using CMDRENDC   = regbits< type,  6,  1 >;  /**< CMDREND flag clear bit   */
    using RXOVERRC   = regbits< type,  5,  1 >;  /**< RXOVERR flag clear bit   */
    using TXUNDERRC  = regbits< type,  4,  1 >;  /**< TXUNDERR flag clear bit  */
    using DTIMEOUTC  = regbits< type,  3,  1 >;  /**< DTIMEOUT flag clear bit  */
    using CTIMEOUTC  = regbits< type,  2,  1 >;  /**< CTIMEOUT flag clear bit  */
    using DCRCFAILC  = regbits< type,  1,  1 >;  /**< DCRCFAIL flag clear bit  */
    using CCRCFAILC  = regbits< type,  0,  1 >;  /**< CCRCFAIL flag clear bit  */
  };

  /**
   * mask register
   */
  struct MASK
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using CEATAENDIE  = regbits< type, 23,  1 >;  /**< CE-ATA command completion signal received interrupt enable  */
    using SDIOITIE    = regbits< type, 22,  1 >;  /**< SDIO mode interrupt received interrupt enable               */
    using RXDAVLIE    = regbits< type, 21,  1 >;  /**< Data available in Rx FIFO interrupt enable                  */
    using TXDAVLIE    = regbits< type, 20,  1 >;  /**< Data available in Tx FIFO interrupt enable                  */
    using RXFIFOEIE   = regbits< type, 19,  1 >;  /**< Rx FIFO empty interrupt enable                              */
    using TXFIFOEIE   = regbits< type, 18,  1 >;  /**< Tx FIFO empty interrupt enable                              */
    using RXFIFOFIE   = regbits< type, 17,  1 >;  /**< Rx FIFO full interrupt enable                               */
    using TXFIFOFIE   = regbits< type, 16,  1 >;  /**< Tx FIFO full interrupt enable                               */
    using RXFIFOHFIE  = regbits< type, 15,  1 >;  /**< Rx FIFO half full interrupt enable                          */
    using TXFIFOHEIE  = regbits< type, 14,  1 >;  /**< Tx FIFO half empty interrupt enable                         */
    using RXACTIE     = regbits< type, 13,  1 >;  /**< Data receive acting interrupt enable                        */
    using TXACTIE     = regbits< type, 12,  1 >;  /**< Data transmit acting interrupt enable                       */
    using CMDACTIE    = regbits< type, 11,  1 >;  /**< Command acting interrupt enable                             */
    using DBCKENDIE   = regbits< type, 10,  1 >;  /**< Data block end interrupt enable                             */
    using STBITERRIE  = regbits< type,  9,  1 >;  /**< Start bit error interrupt enable                            */
    using DATAENDIE   = regbits< type,  8,  1 >;  /**< Data end interrupt enable                                   */
    using CMDSENTIE   = regbits< type,  7,  1 >;  /**< Command sent interrupt enable                               */
    using CMDRENDIE   = regbits< type,  6,  1 >;  /**< Command response received interrupt enable                  */
    using RXOVERRIE   = regbits< type,  5,  1 >;  /**< Rx FIFO overrun error interrupt enable                      */
    using TXUNDERRIE  = regbits< type,  4,  1 >;  /**< Tx FIFO underrun error interrupt enable                     */
    using DTIMEOUTIE  = regbits< type,  3,  1 >;  /**< Data timeout interrupt enable                               */
    using CTIMEOUTIE  = regbits< type,  2,  1 >;  /**< Command timeout interrupt enable                            */
    using DCRCFAILIE  = regbits< type,  1,  1 >;  /**< Data CRC fail interrupt enable                              */
    using CCRCFAILIE  = regbits< type,  0,  1 >;  /**< Command CRC fail interrupt enable                           */
  };

  /**
   * FIFO counter register
   */
  struct FIFOCNT
  : public reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >;

    using FIFOCOUNT  = regbits< type,  0, 24 >;  /**< Remaining number of words to be written to or read from the FIFO  */
  };

  /**
   * data FIFO register
   */
  struct FIFO
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using FIFOData  = regbits< type,  0, 32 >;  /**< Receive and transmit FIFO data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SDMMC1_HPP_INCLUDED
