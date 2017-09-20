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
//  Import from CMSIS-SVD: "STMicro/STM32F103xx.svd"
//
//  name: STM32F103xx
//  version: 1.3
//  description: STM32F103xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SDIO_HPP_INCLUDED
#define ARCH_REG_SDIO_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Secure digital input/output interface
 */
struct SDIO
{
  static constexpr reg_addr_t base_addr = 0x40018000;

  /**
   * Bits 1:0 = PWRCTRL: Power supply control bits
   */
  struct POWER
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using PWRCTRL  = regbits< type,  0,  2 >;  /**< PWRCTRL  */
  };

  /**
   * SDI clock control register (SDIO_CLKCR)
   */
  struct CLKCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using CLKDIV   = regbits< type,  0,  8 >;  /**< Clock divide factor              */
    using CLKEN    = regbits< type,  8,  1 >;  /**< Clock enable bit                 */
    using PWRSAV   = regbits< type,  9,  1 >;  /**< Power saving configuration bit   */
    using BYPASS   = regbits< type, 10,  1 >;  /**< Clock divider bypass enable bit  */
    using WIDBUS   = regbits< type, 11,  2 >;  /**< Wide bus mode enable bit         */
    using NEGEDGE  = regbits< type, 13,  1 >;  /**< SDIO_CK dephasing selection bit  */
    using HWFC_EN  = regbits< type, 14,  1 >;  /**< HW Flow Control enable           */
  };

  /**
   * Bits 31:0 = : Command argument
   */
  struct ARG
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using CMDARG  = regbits< type,  0, 32 >;  /**< Command argument  */
  };

  /**
   * SDIO command register (SDIO_CMD)
   */
  struct CMD
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using CMDINDEX     = regbits< type,  0,  6 >;  /**< CMDINDEX     */
    using WAITRESP     = regbits< type,  6,  2 >;  /**< WAITRESP     */
    using WAITINT      = regbits< type,  8,  1 >;  /**< WAITINT      */
    using WAITPEND     = regbits< type,  9,  1 >;  /**< WAITPEND     */
    using CPSMEN       = regbits< type, 10,  1 >;  /**< CPSMEN       */
    using SDIOSuspend  = regbits< type, 11,  1 >;  /**< SDIOSuspend  */
    using ENCMDcompl   = regbits< type, 12,  1 >;  /**< ENCMDcompl   */
    using nIEN         = regbits< type, 13,  1 >;  /**< nIEN         */
    using CE_ATACMD    = regbits< type, 14,  1 >;  /**< CE_ATACMD    */
  };

  /**
   * SDIO command register
   */
  struct RESPCMD
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: RESPCMD
    using RESPCMD_ = regbits< type,  0,  6 >;  /**< RESPCMD  */
  };

  /**
   * Bits 31:0 = CARDSTATUS1
   */
  struct RESPI1
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    using CARDSTATUS1  = regbits< type,  0, 32 >;  /**< CARDSTATUS1  */
  };

  /**
   * Bits 31:0 = CARDSTATUS2
   */
  struct RESP2
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >;

    using CARDSTATUS2  = regbits< type,  0, 32 >;  /**< CARDSTATUS2  */
  };

  /**
   * Bits 31:0 = CARDSTATUS3
   */
  struct RESP3
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using CARDSTATUS3  = regbits< type,  0, 32 >;  /**< CARDSTATUS3  */
  };

  /**
   * Bits 31:0 = CARDSTATUS4
   */
  struct RESP4
  : public reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >;

    using CARDSTATUS4  = regbits< type,  0, 32 >;  /**< CARDSTATUS4  */
  };

  /**
   * Bits 31:0 = DATATIME: Data timeout period
   */
  struct DTIMER
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using DATATIME  = regbits< type,  0, 32 >;  /**< Data timeout period  */
  };

  /**
   * Bits 24:0 = DATALENGTH: Data length value
   */
  struct DLEN
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using DATALENGTH  = regbits< type,  0, 25 >;  /**< Data length value  */
  };

  /**
   * SDIO data control register (SDIO_DCTRL)
   */
  struct DCTRL
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using DTEN        = regbits< type,  0,  1 >;  /**< DTEN        */
    using DTDIR       = regbits< type,  1,  1 >;  /**< DTDIR       */
    using DTMODE      = regbits< type,  2,  1 >;  /**< DTMODE      */
    using DMAEN       = regbits< type,  3,  1 >;  /**< DMAEN       */
    using DBLOCKSIZE  = regbits< type,  4,  4 >;  /**< DBLOCKSIZE  */
    using PWSTART     = regbits< type,  8,  1 >;  /**< PWSTART     */
    using PWSTOP      = regbits< type,  9,  1 >;  /**< PWSTOP      */
    using RWMOD       = regbits< type, 10,  1 >;  /**< RWMOD       */
    using SDIOEN      = regbits< type, 11,  1 >;  /**< SDIOEN      */
  };

  /**
   * Bits 24:0 = DATACOUNT: Data count value
   */
  struct DCOUNT
  : public reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >;

    using DATACOUNT  = regbits< type,  0, 25 >;  /**< Data count value  */
  };

  /**
   * SDIO status register (SDIO_STA)
   */
  struct STA
  : public reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >;

    using CCRCFAIL  = regbits< type,  0,  1 >;  /**< CCRCFAIL  */
    using DCRCFAIL  = regbits< type,  1,  1 >;  /**< DCRCFAIL  */
    using CTIMEOUT  = regbits< type,  2,  1 >;  /**< CTIMEOUT  */
    using DTIMEOUT  = regbits< type,  3,  1 >;  /**< DTIMEOUT  */
    using TXUNDERR  = regbits< type,  4,  1 >;  /**< TXUNDERR  */
    using RXOVERR   = regbits< type,  5,  1 >;  /**< RXOVERR   */
    using CMDREND   = regbits< type,  6,  1 >;  /**< CMDREND   */
    using CMDSENT   = regbits< type,  7,  1 >;  /**< CMDSENT   */
    using DATAEND   = regbits< type,  8,  1 >;  /**< DATAEND   */
    using STBITERR  = regbits< type,  9,  1 >;  /**< STBITERR  */
    using DBCKEND   = regbits< type, 10,  1 >;  /**< DBCKEND   */
    using CMDACT    = regbits< type, 11,  1 >;  /**< CMDACT    */
    using TXACT     = regbits< type, 12,  1 >;  /**< TXACT     */
    using RXACT     = regbits< type, 13,  1 >;  /**< RXACT     */
    using TXFIFOHE  = regbits< type, 14,  1 >;  /**< TXFIFOHE  */
    using RXFIFOHF  = regbits< type, 15,  1 >;  /**< RXFIFOHF  */
    using TXFIFOF   = regbits< type, 16,  1 >;  /**< TXFIFOF   */
    using RXFIFOF   = regbits< type, 17,  1 >;  /**< RXFIFOF   */
    using TXFIFOE   = regbits< type, 18,  1 >;  /**< TXFIFOE   */
    using RXFIFOE   = regbits< type, 19,  1 >;  /**< RXFIFOE   */
    using TXDAVL    = regbits< type, 20,  1 >;  /**< TXDAVL    */
    using RXDAVL    = regbits< type, 21,  1 >;  /**< RXDAVL    */
    using SDIOIT    = regbits< type, 22,  1 >;  /**< SDIOIT    */
    using CEATAEND  = regbits< type, 23,  1 >;  /**< CEATAEND  */
  };

  /**
   * SDIO interrupt clear register (SDIO_ICR)
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using CCRCFAILC  = regbits< type,  0,  1 >;  /**< CCRCFAILC  */
    using DCRCFAILC  = regbits< type,  1,  1 >;  /**< DCRCFAILC  */
    using CTIMEOUTC  = regbits< type,  2,  1 >;  /**< CTIMEOUTC  */
    using DTIMEOUTC  = regbits< type,  3,  1 >;  /**< DTIMEOUTC  */
    using TXUNDERRC  = regbits< type,  4,  1 >;  /**< TXUNDERRC  */
    using RXOVERRC   = regbits< type,  5,  1 >;  /**< RXOVERRC   */
    using CMDRENDC   = regbits< type,  6,  1 >;  /**< CMDRENDC   */
    using CMDSENTC   = regbits< type,  7,  1 >;  /**< CMDSENTC   */
    using DATAENDC   = regbits< type,  8,  1 >;  /**< DATAENDC   */
    using STBITERRC  = regbits< type,  9,  1 >;  /**< STBITERRC  */
    using DBCKENDC   = regbits< type, 10,  1 >;  /**< DBCKENDC   */
    using SDIOITC    = regbits< type, 22,  1 >;  /**< SDIOITC    */
    using CEATAENDC  = regbits< type, 23,  1 >;  /**< CEATAENDC  */
  };

  /**
   * SDIO mask register (SDIO_MASK)
   */
  struct MASK
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using CCRCFAILIE  = regbits< type,  0,  1 >;  /**< CCRCFAILIE  */
    using DCRCFAILIE  = regbits< type,  1,  1 >;  /**< DCRCFAILIE  */
    using CTIMEOUTIE  = regbits< type,  2,  1 >;  /**< CTIMEOUTIE  */
    using DTIMEOUTIE  = regbits< type,  3,  1 >;  /**< DTIMEOUTIE  */
    using TXUNDERRIE  = regbits< type,  4,  1 >;  /**< TXUNDERRIE  */
    using RXOVERRIE   = regbits< type,  5,  1 >;  /**< RXOVERRIE   */
    using CMDRENDIE   = regbits< type,  6,  1 >;  /**< CMDRENDIE   */
    using CMDSENTIE   = regbits< type,  7,  1 >;  /**< CMDSENTIE   */
    using DATAENDIE   = regbits< type,  8,  1 >;  /**< DATAENDIE   */
    using STBITERRIE  = regbits< type,  9,  1 >;  /**< STBITERRIE  */
    using DBACKENDIE  = regbits< type, 10,  1 >;  /**< DBACKENDIE  */
    using CMDACTIE    = regbits< type, 11,  1 >;  /**< CMDACTIE    */
    using TXACTIE     = regbits< type, 12,  1 >;  /**< TXACTIE     */
    using RXACTIE     = regbits< type, 13,  1 >;  /**< RXACTIE     */
    using TXFIFOHEIE  = regbits< type, 14,  1 >;  /**< TXFIFOHEIE  */
    using RXFIFOHFIE  = regbits< type, 15,  1 >;  /**< RXFIFOHFIE  */
    using TXFIFOFIE   = regbits< type, 16,  1 >;  /**< TXFIFOFIE   */
    using RXFIFOFIE   = regbits< type, 17,  1 >;  /**< RXFIFOFIE   */
    using TXFIFOEIE   = regbits< type, 18,  1 >;  /**< TXFIFOEIE   */
    using RXFIFOEIE   = regbits< type, 19,  1 >;  /**< RXFIFOEIE   */
    using TXDAVLIE    = regbits< type, 20,  1 >;  /**< TXDAVLIE    */
    using RXDAVLIE    = regbits< type, 21,  1 >;  /**< RXDAVLIE    */
    using SDIOITIE    = regbits< type, 22,  1 >;  /**< SDIOITIE    */
    using CEATENDIE   = regbits< type, 23,  1 >;  /**< CEATENDIE   */
  };

  /**
   * Bits 23:0 = FIFOCOUNT: Remaining number of words to be written to or read from the FIFO
   */
  struct FIFOCNT
  : public reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >;

    using FIF0COUNT  = regbits< type,  0, 24 >;  /**< FIF0COUNT  */
  };

  /**
   * bits 31:0 = FIFOData: Receive and transmit FIFO data
   */
  struct FIFO
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using FIFOData  = regbits< type,  0, 32 >;  /**< FIFOData  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SDIO_HPP_INCLUDED
