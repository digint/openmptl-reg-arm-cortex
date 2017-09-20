/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9BF12xS.svd"
//
//  name: MB9BF12xS
//  version: 1.0
//  description: MB9BF12xS
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MFS3_HPP_INCLUDED
#define ARCH_REG_MFS3_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral MFS0
 *
 * (derived from: MFS0)
 */
struct MFS3
{
  static constexpr reg_addr_t base_addr = 0x40038300;

  /**
   * register UART_SCR
   */
  struct UART_SCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using UPCL  = regbits< type,  7,  1 >;  /**< bitfield UPCL  */
    using RIE   = regbits< type,  4,  1 >;  /**< bitfield RIE   */
    using TIE   = regbits< type,  3,  1 >;  /**< bitfield TIE   */
    using TBIE  = regbits< type,  2,  1 >;  /**< bitfield TBIE  */
    using RXE   = regbits< type,  1,  1 >;  /**< bitfield RXE   */
    using TXE   = regbits< type,  0,  1 >;  /**< bitfield TXE   */
  };

  /**
   * register UART_SMR
   */
  struct UART_SMR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using MD    = regbits< type,  5,  3 >;  /**< bitfield MD    */
    using WUCR  = regbits< type,  4,  1 >;  /**< bitfield WUCR  */
    using SBL   = regbits< type,  3,  1 >;  /**< bitfield SBL   */
    using BDS   = regbits< type,  2,  1 >;  /**< bitfield BDS   */
    using SOE   = regbits< type,  0,  1 >;  /**< bitfield SOE   */
  };

  /**
   * register UART_SSR
   */
  struct UART_SSR
  : public reg< uint8_t, base_addr + 0x5, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x03 >;

    using REC   = regbits< type,  7,  1 >;  /**< bitfield REC   */
    using PE    = regbits< type,  5,  1 >;  /**< bitfield PE    */
    using FRE   = regbits< type,  4,  1 >;  /**< bitfield FRE   */
    using ORE   = regbits< type,  3,  1 >;  /**< bitfield ORE   */
    using RDRF  = regbits< type,  2,  1 >;  /**< bitfield RDRF  */
    using TDRE  = regbits< type,  1,  1 >;  /**< bitfield TDRE  */
    using TBI   = regbits< type,  0,  1 >;  /**< bitfield TBI   */
  };

  /**
   * register UART_ESCR
   */
  struct UART_ESCR
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using FLWEN  = regbits< type,  7,  1 >;  /**< bitfield FLWEN  */
    using ESBL   = regbits< type,  6,  1 >;  /**< bitfield ESBL   */
    using INV    = regbits< type,  5,  1 >;  /**< bitfield INV    */
    using PEN    = regbits< type,  4,  1 >;  /**< bitfield PEN    */
    using P      = regbits< type,  3,  1 >;  /**< bitfield P      */
    using L      = regbits< type,  0,  3 >;  /**< bitfield L      */
  };

  /**
   * register UART_RDR
   */
  struct UART_RDR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
  };

  /**
   * register UART_TDR
   */
  struct UART_TDR
  : public reg< uint16_t, base_addr + 0x8, wo, 0x01FF >
  {
  };

  /**
   * register UART_BGR
   */
  struct UART_BGR
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using EXT   = regbits< type, 15,  1 >;  /**< bitfield EXT   */
    using BGR1  = regbits< type,  8,  7 >;  /**< bitfield BGR1  */
    using BGR0  = regbits< type,  0,  8 >;  /**< bitfield BGR0  */
  };

  /**
   * register UART_FCR1
   */
  struct UART_FCR1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x04 >;

    using FLSTE  = regbits< type,  4,  1 >;  /**< bitfield FLSTE  */
    using FRIIE  = regbits< type,  3,  1 >;  /**< bitfield FRIIE  */
    using FDRQ   = regbits< type,  2,  1 >;  /**< bitfield FDRQ   */
    using FTIE   = regbits< type,  1,  1 >;  /**< bitfield FTIE   */
    using FSEL   = regbits< type,  0,  1 >;  /**< bitfield FSEL   */
  };

  /**
   * register UART_FCR0
   */
  struct UART_FCR0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using FLST  = regbits< type,  6,  1 >;  /**< bitfield FLST  */
    using FLD   = regbits< type,  5,  1 >;  /**< bitfield FLD   */
    using FSET  = regbits< type,  4,  1 >;  /**< bitfield FSET  */
    using FCL2  = regbits< type,  3,  1 >;  /**< bitfield FCL2  */
    using FCL1  = regbits< type,  2,  1 >;  /**< bitfield FCL1  */
    using FE2   = regbits< type,  1,  1 >;  /**< bitfield FE2   */
    using FE1   = regbits< type,  0,  1 >;  /**< bitfield FE1   */
  };

  /**
   * register UART_FBYTE1
   */
  struct UART_FBYTE1
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
  };

  /**
   * register UART_FBYTE2
   */
  struct UART_FBYTE2
  : public reg< uint8_t, base_addr + 0x19, rw, 0x00 >
  {
  };

  /**
   * register CSIO_SCR
   */
  struct CSIO_SCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using UPCL  = regbits< type,  7,  1 >;  /**< bitfield UPCL  */
    using MS    = regbits< type,  6,  1 >;  /**< bitfield MS    */
    using SPI   = regbits< type,  5,  1 >;  /**< bitfield SPI   */
    using RIE   = regbits< type,  4,  1 >;  /**< bitfield RIE   */
    using TIE   = regbits< type,  3,  1 >;  /**< bitfield TIE   */
    using TBIE  = regbits< type,  2,  1 >;  /**< bitfield TBIE  */
    using RXE   = regbits< type,  1,  1 >;  /**< bitfield RXE   */
    using TXE   = regbits< type,  0,  1 >;  /**< bitfield TXE   */
  };

  /**
   * register CSIO_SMR
   */
  struct CSIO_SMR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using MD     = regbits< type,  5,  3 >;  /**< bitfield MD     */
    using WUCR   = regbits< type,  4,  1 >;  /**< bitfield WUCR   */
    using SCINV  = regbits< type,  3,  1 >;  /**< bitfield SCINV  */
    using BDS    = regbits< type,  2,  1 >;  /**< bitfield BDS    */
    using SCKE   = regbits< type,  1,  1 >;  /**< bitfield SCKE   */
    using SOE    = regbits< type,  0,  1 >;  /**< bitfield SOE    */
  };

  /**
   * register CSIO_SSR
   */
  struct CSIO_SSR
  : public reg< uint8_t, base_addr + 0x5, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x03 >;

    using REC   = regbits< type,  7,  1 >;  /**< bitfield REC   */
    using ORE   = regbits< type,  3,  1 >;  /**< bitfield ORE   */
    using RDRF  = regbits< type,  2,  1 >;  /**< bitfield RDRF  */
    using TDRE  = regbits< type,  1,  1 >;  /**< bitfield TDRE  */
    using TBI   = regbits< type,  0,  1 >;  /**< bitfield TBI   */
  };

  /**
   * register CSIO_ESCR
   */
  struct CSIO_ESCR
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using SOP  = regbits< type,  7,  1 >;  /**< bitfield SOP  */
    using WT   = regbits< type,  3,  2 >;  /**< bitfield WT   */
    using L    = regbits< type,  0,  3 >;  /**< bitfield L    */
  };

  /**
   * register CSIO_RDR
   */
  struct CSIO_RDR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
  };

  /**
   * register CSIO_TDR
   */
  struct CSIO_TDR
  : public reg< uint16_t, base_addr + 0x8, wo, 0x01FF >
  {
  };

  /**
   * register CSIO_BGR
   */
  struct CSIO_BGR
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using BGR1  = regbits< type,  8,  7 >;  /**< bitfield BGR1  */
    using BGR0  = regbits< type,  0,  8 >;  /**< bitfield BGR0  */
  };

  /**
   * register CSIO_FCR1
   */
  struct CSIO_FCR1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x04 >;

    using FLSTE  = regbits< type,  4,  1 >;  /**< bitfield FLSTE  */
    using FRIIE  = regbits< type,  3,  1 >;  /**< bitfield FRIIE  */
    using FDRQ   = regbits< type,  2,  1 >;  /**< bitfield FDRQ   */
    using FTIE   = regbits< type,  1,  1 >;  /**< bitfield FTIE   */
    using FSEL   = regbits< type,  0,  1 >;  /**< bitfield FSEL   */
  };

  /**
   * register CSIO_FCR0
   */
  struct CSIO_FCR0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using FLST  = regbits< type,  6,  1 >;  /**< bitfield FLST  */
    using FLD   = regbits< type,  5,  1 >;  /**< bitfield FLD   */
    using FSET  = regbits< type,  4,  1 >;  /**< bitfield FSET  */
    using FCL2  = regbits< type,  3,  1 >;  /**< bitfield FCL2  */
    using FCL1  = regbits< type,  2,  1 >;  /**< bitfield FCL1  */
    using FE2   = regbits< type,  1,  1 >;  /**< bitfield FE2   */
    using FE1   = regbits< type,  0,  1 >;  /**< bitfield FE1   */
  };

  /**
   * register CSIO_FBYTE1
   */
  struct CSIO_FBYTE1
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
  };

  /**
   * register CSIO_FBYTE2
   */
  struct CSIO_FBYTE2
  : public reg< uint8_t, base_addr + 0x19, rw, 0x00 >
  {
  };

  /**
   * register LIN_SCR
   */
  struct LIN_SCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using UPCL  = regbits< type,  7,  1 >;  /**< bitfield UPCL  */
    using MS    = regbits< type,  6,  1 >;  /**< bitfield MS    */
    using LBR   = regbits< type,  5,  1 >;  /**< bitfield LBR   */
    using RIE   = regbits< type,  4,  1 >;  /**< bitfield RIE   */
    using TIE   = regbits< type,  3,  1 >;  /**< bitfield TIE   */
    using TBIE  = regbits< type,  2,  1 >;  /**< bitfield TBIE  */
    using RXE   = regbits< type,  1,  1 >;  /**< bitfield RXE   */
    using TXE   = regbits< type,  0,  1 >;  /**< bitfield TXE   */
  };

  /**
   * register LIN_SMR
   */
  struct LIN_SMR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using MD    = regbits< type,  5,  3 >;  /**< bitfield MD    */
    using WUCR  = regbits< type,  4,  1 >;  /**< bitfield WUCR  */
    using SBL   = regbits< type,  3,  1 >;  /**< bitfield SBL   */
    using SOE   = regbits< type,  0,  1 >;  /**< bitfield SOE   */
  };

  /**
   * register LIN_SSR
   */
  struct LIN_SSR
  : public reg< uint8_t, base_addr + 0x5, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x03 >;

    using REC   = regbits< type,  7,  1 >;  /**< bitfield REC   */
    using LBD   = regbits< type,  5,  1 >;  /**< bitfield LBD   */
    using FRE   = regbits< type,  4,  1 >;  /**< bitfield FRE   */
    using ORE   = regbits< type,  3,  1 >;  /**< bitfield ORE   */
    using RDRF  = regbits< type,  2,  1 >;  /**< bitfield RDRF  */
    using TDRE  = regbits< type,  1,  1 >;  /**< bitfield TDRE  */
    using TBI   = regbits< type,  0,  1 >;  /**< bitfield TBI   */
  };

  /**
   * register LIN_ESCR
   */
  struct LIN_ESCR
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using ESBL  = regbits< type,  6,  1 >;  /**< bitfield ESBL  */
    using LBIE  = regbits< type,  4,  1 >;  /**< bitfield LBIE  */
    using LBL   = regbits< type,  2,  2 >;  /**< bitfield LBL   */
    using DEL   = regbits< type,  0,  2 >;  /**< bitfield DEL   */
  };

  /**
   * register LIN_RDR
   */
  struct LIN_RDR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
  };

  /**
   * register LIN_TDR
   */
  struct LIN_TDR
  : public reg< uint16_t, base_addr + 0x8, wo, 0x00FF >
  {
  };

  /**
   * register LIN_BGR
   */
  struct LIN_BGR
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using EXT   = regbits< type, 15,  1 >;  /**< bitfield EXT   */
    using BGR1  = regbits< type,  8,  7 >;  /**< bitfield BGR1  */
    using BGR0  = regbits< type,  0,  8 >;  /**< bitfield BGR0  */
  };

  /**
   * register LIN_FCR1
   */
  struct LIN_FCR1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x04 >;

    using FLSTE  = regbits< type,  4,  1 >;  /**< bitfield FLSTE  */
    using FRIIE  = regbits< type,  3,  1 >;  /**< bitfield FRIIE  */
    using FDRQ   = regbits< type,  2,  1 >;  /**< bitfield FDRQ   */
    using FTIE   = regbits< type,  1,  1 >;  /**< bitfield FTIE   */
    using FSEL   = regbits< type,  0,  1 >;  /**< bitfield FSEL   */
  };

  /**
   * register LIN_FCR0
   */
  struct LIN_FCR0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using FLST  = regbits< type,  6,  1 >;  /**< bitfield FLST  */
    using FLD   = regbits< type,  5,  1 >;  /**< bitfield FLD   */
    using FSET  = regbits< type,  4,  1 >;  /**< bitfield FSET  */
    using FCL2  = regbits< type,  3,  1 >;  /**< bitfield FCL2  */
    using FCL1  = regbits< type,  2,  1 >;  /**< bitfield FCL1  */
    using FE2   = regbits< type,  1,  1 >;  /**< bitfield FE2   */
    using FE1   = regbits< type,  0,  1 >;  /**< bitfield FE1   */
  };

  /**
   * register LIN_FBYTE1
   */
  struct LIN_FBYTE1
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
  };

  /**
   * register LIN_FBYTE2
   */
  struct LIN_FBYTE2
  : public reg< uint8_t, base_addr + 0x19, rw, 0x00 >
  {
  };

  /**
   * register I2C_IBCR
   */
  struct I2C_IBCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using MSS      = regbits< type,  7,  1 >;  /**< bitfield MSS      */
    using ACT_SCC  = regbits< type,  6,  1 >;  /**< bitfield ACT_SCC  */
    using ACKE     = regbits< type,  5,  1 >;  /**< bitfield ACKE     */
    using WSEL     = regbits< type,  4,  1 >;  /**< bitfield WSEL     */
    using CNDE     = regbits< type,  3,  1 >;  /**< bitfield CNDE     */
    using INTE     = regbits< type,  2,  1 >;  /**< bitfield INTE     */
    using BER      = regbits< type,  1,  1 >;  /**< bitfield BER      */
    using INT      = regbits< type,  0,  1 >;  /**< bitfield INT      */
  };

  /**
   * register I2C_SMR
   */
  struct I2C_SMR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using MD    = regbits< type,  5,  3 >;  /**< bitfield MD    */
    using WUCR  = regbits< type,  4,  1 >;  /**< bitfield WUCR  */
    using RIE   = regbits< type,  3,  1 >;  /**< bitfield RIE   */
    using TIE   = regbits< type,  2,  1 >;  /**< bitfield TIE   */
  };

  /**
   * register I2C_IBSR
   */
  struct I2C_IBSR
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using FBT   = regbits< type,  7,  1 >;  /**< bitfield FBT   */
    using RACK  = regbits< type,  6,  1 >;  /**< bitfield RACK  */
    using RSA   = regbits< type,  5,  1 >;  /**< bitfield RSA   */
    using TRX   = regbits< type,  4,  1 >;  /**< bitfield TRX   */
    using AL    = regbits< type,  3,  1 >;  /**< bitfield AL    */
    using RSC   = regbits< type,  2,  1 >;  /**< bitfield RSC   */
    using SPC   = regbits< type,  1,  1 >;  /**< bitfield SPC   */
    using BB    = regbits< type,  0,  1 >;  /**< bitfield BB    */
  };

  /**
   * register I2C_SSR
   */
  struct I2C_SSR
  : public reg< uint8_t, base_addr + 0x5, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x03 >;

    using REC   = regbits< type,  7,  1 >;  /**< bitfield REC   */
    using TSET  = regbits< type,  6,  1 >;  /**< bitfield TSET  */
    using DMA   = regbits< type,  5,  1 >;  /**< bitfield DMA   */
    using TBIE  = regbits< type,  4,  1 >;  /**< bitfield TBIE  */
    using ORE   = regbits< type,  3,  1 >;  /**< bitfield ORE   */
    using RDRF  = regbits< type,  2,  1 >;  /**< bitfield RDRF  */
    using TDRE  = regbits< type,  1,  1 >;  /**< bitfield TDRE  */
    using TBI   = regbits< type,  0,  1 >;  /**< bitfield TBI   */
  };

  /**
   * register I2C_RDR
   */
  struct I2C_RDR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
  };

  /**
   * register I2C_TDR
   */
  struct I2C_TDR
  : public reg< uint16_t, base_addr + 0x8, wo, 0x00FF >
  {
  };

  /**
   * register I2C_BGR
   */
  struct I2C_BGR
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using BGR1  = regbits< type,  8,  7 >;  /**< bitfield BGR1  */
    using BGR0  = regbits< type,  0,  8 >;  /**< bitfield BGR0  */
  };

  /**
   * register I2C_ISMK
   */
  struct I2C_ISMK
  : public reg< uint8_t, base_addr + 0x11, rw, 0x7F >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x7F >;

    using EN  = regbits< type,  7,  1 >;  /**< bitfield EN  */
    using SM  = regbits< type,  0,  7 >;  /**< bitfield SM  */
  };

  /**
   * register I2C_ISBA
   */
  struct I2C_ISBA
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using SAEN  = regbits< type,  7,  1 >;  /**< bitfield SAEN  */
    using SA    = regbits< type,  0,  7 >;  /**< bitfield SA    */
  };

  /**
   * register I2C_FCR1
   */
  struct I2C_FCR1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x04 >;

    using FLSTE  = regbits< type,  4,  1 >;  /**< bitfield FLSTE  */
    using FRIIE  = regbits< type,  3,  1 >;  /**< bitfield FRIIE  */
    using FDRQ   = regbits< type,  2,  1 >;  /**< bitfield FDRQ   */
    using FTIE   = regbits< type,  1,  1 >;  /**< bitfield FTIE   */
    using FSEL   = regbits< type,  0,  1 >;  /**< bitfield FSEL   */
  };

  /**
   * register I2C_FCR0
   */
  struct I2C_FCR0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using FLST  = regbits< type,  6,  1 >;  /**< bitfield FLST  */
    using FLD   = regbits< type,  5,  1 >;  /**< bitfield FLD   */
    using FSET  = regbits< type,  4,  1 >;  /**< bitfield FSET  */
    using FCL2  = regbits< type,  3,  1 >;  /**< bitfield FCL2  */
    using FCL1  = regbits< type,  2,  1 >;  /**< bitfield FCL1  */
    using FE2   = regbits< type,  1,  1 >;  /**< bitfield FE2   */
    using FE1   = regbits< type,  0,  1 >;  /**< bitfield FE1   */
  };

  /**
   * register I2C_FBYTE1
   */
  struct I2C_FBYTE1
  : public reg< uint8_t, base_addr + 0x18, rw, 0x0000 >
  {
  };

  /**
   * register I2C_FBYTE2
   */
  struct I2C_FBYTE2
  : public reg< uint8_t, base_addr + 0x19, rw, 0x0000 >
  {
  };

  /**
   * register I2C_EIBCR
   */
  struct I2C_EIBCR
  : public reg< uint8_t, base_addr + 0x1d, rw, 0x0C >
  {
    using type = reg< uint8_t, base_addr + 0x1d, rw, 0x0C >;

    using SDAS  = regbits< type,  5,  1 >;  /**< bitfield SDAS  */
    using SCLS  = regbits< type,  4,  1 >;  /**< bitfield SCLS  */
    using SDAC  = regbits< type,  3,  1 >;  /**< bitfield SDAC  */
    using SCLC  = regbits< type,  2,  1 >;  /**< bitfield SCLC  */
    using SOCE  = regbits< type,  1,  1 >;  /**< bitfield SOCE  */
    using BEC   = regbits< type,  0,  1 >;  /**< bitfield BEC   */
  };
};
} // namespace mptl

#endif // ARCH_REG_MFS3_HPP_INCLUDED
