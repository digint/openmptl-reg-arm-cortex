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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D35.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D35
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D35 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, dual Ethernet, dual CAN, security (refer to http://www.atmel.com/devices/SAMA5D35.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MPDDRC_HPP_INCLUDED
#define ARCH_REG_MPDDRC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AHB Multi-port DDR-SDRAM Controller
 */
struct MPDDRC
{
  static constexpr reg_addr_t base_addr = 0xffffea00;

  /**
   * MPDDRC Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using MODE  = regbits< type,  0,  3 >;  /**< MPDDRC Command Mode          */
    using MRS   = regbits< type,  8,  8 >;  /**< Mode Register Select LPDDR2  */
  };

  /**
   * MPDDRC Refresh Timer Register
   */
  struct RTR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using COUNT      = regbits< type,  0, 12 >;  /**< MPDDRC Refresh Timer Count  */
    using ADJ_REF    = regbits< type, 16,  1 >;  /**< Adjust Refresh Rate         */
    using REF_PB     = regbits< type, 17,  1 >;  /**< Refresh Per Bank            */
    using MR4_VALUE  = regbits< type, 20,  3 >;  /**< Content of MR4 Register     */
  };

  /**
   * MPDDRC Configuration Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000024 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000024 >;

    using NC       = regbits< type,  0,  2 >;  /**< Number of Column Bits.                            */
    using NR       = regbits< type,  2,  2 >;  /**< Number of Row Bits                                */
    using CAS      = regbits< type,  4,  3 >;  /**< CAS Latency                                       */
    using DLL      = regbits< type,  7,  1 >;  /**< Reset DLL                                         */
    using DIC_DS   = regbits< type,  8,  1 >;  /**< Output Driver Impedance Control (Drive Strength)  */
    using DIS_DLL  = regbits< type,  9,  1 >;  /**< DISABLE DLL                                       */
    using ZQ       = regbits< type, 10,  2 >;  /**< ZQ Calibration                                    */
    using OCD      = regbits< type, 12,  3 >;  /**< Off-chip Driver                                   */
    using DQMS     = regbits< type, 16,  1 >;  /**< Mask Data is Shared                               */
    using ENRDM    = regbits< type, 17,  1 >;  /**< Enable Read Measure                               */
    using NB       = regbits< type, 20,  1 >;  /**< Number of Banks.                                  */
    using NDQS     = regbits< type, 21,  1 >;  /**< Not DQS:                                          */
    using DECOD    = regbits< type, 22,  1 >;  /**< Type of Decoding                                  */
    using UNAL     = regbits< type, 23,  1 >;  /**< Support Unaligned Access                          */
  };

  /**
   * MPDDRC Timing Parameter 0 Register
   */
  struct TPR0
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x20227225 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x20227225 >;

    using TRAS      = regbits< type,  0,  4 >;  /**< Active to Precharge Delay                                  */
    using TRCD      = regbits< type,  4,  4 >;  /**< Row to Column Delay                                        */
    using TWR       = regbits< type,  8,  4 >;  /**< Write Recovery Delay                                       */
    using TRC       = regbits< type, 12,  4 >;  /**< Row Cycle Delay                                            */
    using TRP       = regbits< type, 16,  4 >;  /**< Row Precharge Delay                                        */
    using TRRD      = regbits< type, 20,  4 >;  /**< Active BankA to Active BankB                               */
    using TWTR      = regbits< type, 24,  3 >;  /**< Internal Write to Read Delay                               */
    using RDC_WRRD  = regbits< type, 27,  1 >;  /**< Reduce Write to Read Delay                                 */
    using TMRD      = regbits< type, 28,  4 >;  /**< Load Mode Register Command to Activate or Refresh Command  */
  };

  /**
   * MPDDRC Timing Parameter 1 Register
   */
  struct TPR1
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x03C80808 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x03C80808 >;

    using TRFC   = regbits< type,  0,  7 >;  /**< Row Cycle Delay                              */
    using TXSNR  = regbits< type,  8,  8 >;  /**< Exit Self Refresh Delay to Non Read Command  */
    using TXSRD  = regbits< type, 16,  8 >;  /**< Exit Self Refresh Delay to Read Command      */
    using TXP    = regbits< type, 24,  4 >;  /**< Exit Power-down Delay to First Command       */
  };

  /**
   * MPDDRC Timing Parameter 2 Register
   */
  struct TPR2
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00042062 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00042062 >;

    using TXARD   = regbits< type,  0,  4 >;  /**< Exit Active Power Down Delay to Read Command in Mode "Fast Exit".  */
    using TXARDS  = regbits< type,  4,  4 >;  /**< Exit Active Power Down Delay to Read Command in Mode "Slow Exit".  */
    using TRPA    = regbits< type,  8,  4 >;  /**< Row Precharge All Delay                                            */
    using TRTP    = regbits< type, 12,  3 >;  /**< Read to Precharge                                                  */
    using TFAW    = regbits< type, 16,  4 >;  /**< Four Active Windows                                                */
  };

  /**
   * MPDDRC Low-power Register
   */
  struct LPR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    using LPCB          = regbits< type,  0,  2 >;  /**< Low-power Command Bit                                 */
    using CLK_FR        = regbits< type,  2,  1 >;  /**< Clock Frozen Command Bit                              */
    using LPDDR2_PWOFF  = regbits< type,  3,  1 >;  /**< LPDDR2 Power Off Bit                                  */
    using PASR          = regbits< type,  4,  3 >;  /**< Partial Array Self Refresh                            */
    using DS            = regbits< type,  8,  3 >;  /**< Drive Strength                                        */
    using TIMEOUT       = regbits< type, 12,  2 >;  /**< Enter Low-power Mode                                  */
    using APDE          = regbits< type, 16,  1 >;  /**< Active Power Down Exit Time                           */
    using UPD_MR        = regbits< type, 20,  2 >;  /**< Update Load Mode Register and Extended Mode Register  */
  };

  /**
   * MPDDRC Memory Device Register
   */
  struct MD
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000010 >;

    // fixme: Field name equals parent register name: MD
    using MD_  = regbits< type,  0,  3 >;  /**< Memory Device   */
    using DBW  = regbits< type,  4,  1 >;  /**< Data Bus Width  */
  };

  /**
   * MPDDRC High Speed Register
   */
  struct HS
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >;

    using DIS_ANTICIP_READ  = regbits< type,  2,  1 >;  /**< Disable Anticip Read Access  */
  };

  /**
   * MPDDRC LPDDR2 Low-power Register
   */
  struct LPDDR2_LPR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    using BK_MASK_PASR  = regbits< type,  0,  8 >;  /**< Bank Mask Bit/PASR  */
    using SEG_MASK      = regbits< type,  8, 16 >;  /**< Segment Mask Bit    */
    using DS            = regbits< type, 24,  4 >;  /**< Drive strength      */
  };

  /**
   * MPDDRC LPDDR2 Calibration and MR4 Register
   */
  struct LPDDR2_CAL_MR4
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >;

    using COUNT_CAL  = regbits< type,  0, 16 >;  /**< LPDDR2 Calibration Timer Count  */
    using MR4_READ   = regbits< type, 16, 16 >;  /**< Mode Register 4 Read Interval   */
  };

  /**
   * MPDDRC LPDDR2 Timing Calibration Register
   */
  struct LPDDR2_TIM_CAL
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x00000040 >;

    using ZQCS  = regbits< type,  0,  8 >;  /**< ZQ Calibration Short  */
  };

  /**
   * MPDDRC IO Calibration
   */
  struct IO_CALIBR
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x00870002 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x00870002 >;

    using RDIV      = regbits< type,  0,  3 >;  /**< Resistor Divider, output driver impedance  */
    using TZQIO     = regbits< type,  8,  3 >;  /**< IO Calibration                             */
    using CALCODEP  = regbits< type, 16,  4 >;  /**< Number of Transistor P                     */
    using CALCODEN  = regbits< type, 20,  4 >;  /**< Number of Transistor N                     */
  };

  /**
   * MPDDRC Smart Adaptation Wrapper 0 Register
   */
  struct SAW[%s]
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLUSH_MAX    = regbits< type,  0,  8 >;  /**< Clears FIFO Content    */
    using INCR_THRESH  = regbits< type,  8,  6 >;  /**< Incremental Threshold  */
    using PFCH_THRESH  = regbits< type, 16,  6 >;  /**< Prefetch Threshold     */
  };

  /**
   * MPDDRC DLL Master Offset Register
   */
  struct DLL_MO
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MOFF      = regbits< type,  0,  4 >;  /**< DLL Master Delay Line Offset  */
    using CLK90OFF  = regbits< type,  8,  5 >;  /**< DLL CLK90 Delay Line Offset   */
    using SELOFF    = regbits< type, 16,  1 >;  /**< DLL Offset Selection          */
  };

  /**
   * MPDDRC DLL Slave Offset Register
   */
  struct DLL_SOF
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using S0OFF  = regbits< type,  0,  5 >;  /**< DLL Slave 0 Delay Line Offset ([x=0..3])  */
    using S1OFF  = regbits< type,  8,  5 >;  /**< DLL Slave 1 Delay Line Offset ([x=0..3])  */
    using S2OFF  = regbits< type, 16,  5 >;  /**< DLL Slave 2 Delay Line Offset ([x=0..3])  */
    using S3OFF  = regbits< type, 24,  5 >;  /**< DLL Slave 3 Delay Line Offset ([x=0..3])  */
  };

  /**
   * MPDDRC DLL Status Master Register
   */
  struct DLL_MS
  : public reg< uint32_t, base_addr + 0x0000007c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, ro, 0x00000000 >;

    using MDINC  = regbits< type,  0,  1 >;  /**< DLL Master Delay Increment      */
    using MDDEC  = regbits< type,  1,  1 >;  /**< DLL Master Delay Decrement      */
    using MDOVF  = regbits< type,  2,  1 >;  /**< DLL Master Delay Overflow Flag  */
    using MDVAL  = regbits< type,  8,  8 >;  /**< DLL Master Delay Value          */
  };

  /**
   * MPDDRC DLL Status Slave 0 Register
   */
  struct DLL_SS[%s]
  : public reg< uint32_t, base_addr + 0x00000080, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SDCOVF  = regbits< type,  0,  1 >;  /**< DLL Slave x Delay Correction Overflow Flag   */
    using SDCUDF  = regbits< type,  1,  1 >;  /**< DLL Slave x Delay Correction Underflow Flag  */
    using SDERF   = regbits< type,  2,  1 >;  /**< DLL Slave x Delay Correction Error Flag      */
    using SDVAL   = regbits< type,  8,  8 >;  /**< DLL Slave x Delay Value                      */
    using SDCVAL  = regbits< type, 16,  8 >;  /**< DLL Slave x Delay Correction Value           */
  };

  /**
   * MPDDRC Write Protect Control Register
   */
  struct WPCR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protection Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protection KEY     */
  };

  /**
   * MPDDRC Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protection Enable            */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protection Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MPDDRC_HPP_INCLUDED
