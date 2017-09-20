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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123FH6PM.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123FH6PM
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2C0_HPP_INCLUDED
#define ARCH_REG_I2C0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for I2C0 peripheral
 */
struct I2C0
{
  static constexpr reg_addr_t base_addr = 0x40020000;

  /**
   * I2C Master Slave Address
   */
  struct MSA
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MSA_RS  = regbits< type,  0,  1 >;  /**< Receive not send   */
    using I2C_MSA_SA  = regbits< type,  1,  7 >;  /**< I2C Slave Address  */
  };

  /**
   * I2C Master Control/Status
   */
  struct MCS
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MCS_RUN     = regbits< type,  0,  1 >;  /**< I2C Master Enable        */
    using I2C_MCS_START   = regbits< type,  1,  1 >;  /**< Generate START           */
    using I2C_MCS_ADRACK  = regbits< type,  2,  1 >;  /**< Acknowledge Address      */
    using I2C_MCS_ACK     = regbits< type,  3,  1 >;  /**< Data Acknowledge Enable  */
    using I2C_MCS_ARBLST  = regbits< type,  4,  1 >;  /**< Arbitration Lost         */
    using I2C_MCS_IDLE    = regbits< type,  5,  1 >;  /**< I2C Idle                 */
    using I2C_MCS_CLKTO   = regbits< type,  7,  1 >;  /**< Clock Timeout Error      */
  };

  /**
   * I2C Master Control/Status
   */
  struct MCS
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MCS_BUSY    = regbits< type,  0,  1 >;  /**< I2C Busy           */
    using I2C_MCS_ERROR   = regbits< type,  1,  1 >;  /**< Error              */
    using I2C_MCS_STOP    = regbits< type,  2,  1 >;  /**< Generate STOP      */
    using I2C_MCS_DATACK  = regbits< type,  3,  1 >;  /**< Acknowledge Data   */
    using I2C_MCS_HS      = regbits< type,  4,  1 >;  /**< High-Speed Enable  */
    using I2C_MCS_BUSBSY  = regbits< type,  6,  1 >;  /**< Bus Busy           */
  };

  /**
   * I2C Master Data
   */
  struct MDR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MDR_DATA  = regbits< type,  0,  8 >;  /**< Data Transferred  */
  };

  /**
   * I2C Master Timer Period
   */
  struct MTPR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MTPR_TPR  = regbits< type,  0,  7 >;  /**< Timer Period       */
    using I2C_MTPR_HS   = regbits< type,  7,  1 >;  /**< High-Speed Enable  */
  };

  /**
   * I2C Master Interrupt Mask
   */
  struct MIMR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MIMR_IM     = regbits< type,  0,  1 >;  /**< Master Interrupt Mask         */
    using I2C_MIMR_CLKIM  = regbits< type,  1,  1 >;  /**< Clock Timeout Interrupt Mask  */
  };

  /**
   * I2C Master Raw Interrupt Status
   */
  struct MRIS
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MRIS_RIS     = regbits< type,  0,  1 >;  /**< Master Raw Interrupt Status         */
    using I2C_MRIS_CLKRIS  = regbits< type,  1,  1 >;  /**< Clock Timeout Raw Interrupt Status  */
  };

  /**
   * I2C Master Masked Interrupt Status
   */
  struct MMIS
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MMIS_MIS     = regbits< type,  0,  1 >;  /**< Masked Interrupt Status                */
    using I2C_MMIS_CLKMIS  = regbits< type,  1,  1 >;  /**< Clock Timeout Masked Interrupt Status  */
  };

  /**
   * I2C Master Interrupt Clear
   */
  struct MICR
  : public reg< uint32_t, base_addr + 0x0000001c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, wo, 0 >;

    using I2C_MICR_IC     = regbits< type,  0,  1 >;  /**< Master Interrupt Clear         */
    using I2C_MICR_CLKIC  = regbits< type,  1,  1 >;  /**< Clock Timeout Interrupt Clear  */
  };

  /**
   * I2C Master Configuration
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MCR_LPBK  = regbits< type,  0,  1 >;  /**< I2C Loopback                */
    using I2C_MCR_MFE   = regbits< type,  4,  1 >;  /**< I2C Master Function Enable  */
    using I2C_MCR_SFE   = regbits< type,  5,  1 >;  /**< I2C Slave Function Enable   */
    using I2C_MCR_GFE   = regbits< type,  6,  1 >;  /**< I2C Glitch Filter Enable    */
  };

  /**
   * I2C Master Clock Low Timeout Count
   */
  struct MCLKOCNT
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MCLKOCNT_CNTL  = regbits< type,  0,  8 >;  /**< I2C Master Count  */
  };

  /**
   * I2C Master Bus Monitor
   */
  struct MBMON
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MBMON_SCL  = regbits< type,  0,  1 >;  /**< I2C SCL Status  */
    using I2C_MBMON_SDA  = regbits< type,  1,  1 >;  /**< I2C SDA Status  */
  };

  /**
   * I2C Master Configuration 2
   */
  struct MCR2
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_MCR2_GFPW  = regbits< type,  4,  3 >;  /**< I2C Glitch Filter Pulse Width  */
  };

  /**
   * I2C Slave Own Address
   */
  struct SOAR
  : public reg< uint32_t, base_addr + 0x00000800, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000800, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_SOAR_OAR  = regbits< type,  0,  7 >;  /**< I2C Slave Own Address  */
  };

  /**
   * I2C Slave Control/Status
   */
  struct SCSR
  : public reg< uint32_t, base_addr + 0x00000804, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000804, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_SCSR_RREQ     = regbits< type,  0,  1 >;  /**< Receive Request       */
    using I2C_SCSR_FBR      = regbits< type,  2,  1 >;  /**< First Byte Received   */
    using I2C_SCSR_OAR2SEL  = regbits< type,  3,  1 >;  /**< OAR2 Address Matched  */
  };

  /**
   * I2C Slave Control/Status
   */
  struct SCSR
  : public reg< uint32_t, base_addr + 0x00000804, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000804, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_SCSR_DA    = regbits< type,  0,  1 >;  /**< Device Active     */
    using I2C_SCSR_TREQ  = regbits< type,  1,  1 >;  /**< Transmit Request  */
  };

  /**
   * I2C Slave Data
   */
  struct SDR
  : public reg< uint32_t, base_addr + 0x00000808, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000808, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_SDR_DATA  = regbits< type,  0,  8 >;  /**< Data for Transfer  */
  };

  /**
   * I2C Slave Interrupt Mask
   */
  struct SIMR
  : public reg< uint32_t, base_addr + 0x0000080c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000080c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_SIMR_DATAIM   = regbits< type,  0,  1 >;  /**< Data Interrupt Mask             */
    using I2C_SIMR_STARTIM  = regbits< type,  1,  1 >;  /**< Start Condition Interrupt Mask  */
    using I2C_SIMR_STOPIM   = regbits< type,  2,  1 >;  /**< Stop Condition Interrupt Mask   */
  };

  /**
   * I2C Slave Raw Interrupt Status
   */
  struct SRIS
  : public reg< uint32_t, base_addr + 0x00000810, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000810, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_SRIS_DATARIS   = regbits< type,  0,  1 >;  /**< Data Raw Interrupt Status             */
    using I2C_SRIS_STARTRIS  = regbits< type,  1,  1 >;  /**< Start Condition Raw Interrupt Status  */
    using I2C_SRIS_STOPRIS   = regbits< type,  2,  1 >;  /**< Stop Condition Raw Interrupt Status   */
  };

  /**
   * I2C Slave Masked Interrupt Status
   */
  struct SMIS
  : public reg< uint32_t, base_addr + 0x00000814, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000814, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_SMIS_DATAMIS   = regbits< type,  0,  1 >;  /**< Data Masked Interrupt Status             */
    using I2C_SMIS_STARTMIS  = regbits< type,  1,  1 >;  /**< Start Condition Masked Interrupt Status  */
    using I2C_SMIS_STOPMIS   = regbits< type,  2,  1 >;  /**< Stop Condition Masked Interrupt Status   */
  };

  /**
   * I2C Slave Interrupt Clear
   */
  struct SICR
  : public reg< uint32_t, base_addr + 0x00000818, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000818, wo, 0 >;

    using I2C_SICR_DATAIC   = regbits< type,  0,  1 >;  /**< Data Interrupt Clear             */
    using I2C_SICR_STARTIC  = regbits< type,  1,  1 >;  /**< Start Condition Interrupt Clear  */
    using I2C_SICR_STOPIC   = regbits< type,  2,  1 >;  /**< Stop Condition Interrupt Clear   */
  };

  /**
   * I2C Slave Own Address 2
   */
  struct SOAR2
  : public reg< uint32_t, base_addr + 0x0000081c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000081c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_SOAR2_OAR2    = regbits< type,  0,  7 >;  /**< I2C Slave Own Address 2         */
    using I2C_SOAR2_OAR2EN  = regbits< type,  7,  1 >;  /**< I2C Slave Own Address 2 Enable  */
  };

  /**
   * I2C Slave ACK Control
   */
  struct SACKCTL
  : public reg< uint32_t, base_addr + 0x00000820, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000820, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_SACKCTL_ACKOEN   = regbits< type,  0,  1 >;  /**< I2C Slave ACK Override Enable  */
    using I2C_SACKCTL_ACKOVAL  = regbits< type,  1,  1 >;  /**< I2C Slave ACK Override Value   */
  };

  /**
   * I2C Peripheral Properties
   */
  struct PP
  : public reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_PP_HS  = regbits< type,  0,  1 >;  /**< High-Speed Capable  */
  };

  /**
   * I2C Peripheral Configuration
   */
  struct PC
  : public reg< uint32_t, base_addr + 0x00000fc4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C_PC_HS  = regbits< type,  0,  1 >;  /**< High-Speed Capable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2C0_HPP_INCLUDED
