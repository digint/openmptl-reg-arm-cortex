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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123AH6PM.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123AH6PM
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

#ifndef ARCH_REG_ADC0_HPP_INCLUDED
#define ARCH_REG_ADC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for ADC0 peripheral
 */
struct ADC0
{
  static constexpr reg_addr_t base_addr = 0x40038000;

  /**
   * ADC Active Sample Sequencer
   */
  struct ACTSS
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_ACTSS_ASEN0  = regbits< type,  0,  1 >;  /**< ADC SS0 Enable  */
    using ADC_ACTSS_ASEN1  = regbits< type,  1,  1 >;  /**< ADC SS1 Enable  */
    using ADC_ACTSS_ASEN2  = regbits< type,  2,  1 >;  /**< ADC SS2 Enable  */
    using ADC_ACTSS_ASEN3  = regbits< type,  3,  1 >;  /**< ADC SS3 Enable  */
    using ADC_ACTSS_BUSY   = regbits< type, 16,  1 >;  /**< ADC Busy        */
  };

  /**
   * ADC Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_RIS_INR0   = regbits< type,  0,  1 >;  /**< SS0 Raw Interrupt Status                 */
    using ADC_RIS_INR1   = regbits< type,  1,  1 >;  /**< SS1 Raw Interrupt Status                 */
    using ADC_RIS_INR2   = regbits< type,  2,  1 >;  /**< SS2 Raw Interrupt Status                 */
    using ADC_RIS_INR3   = regbits< type,  3,  1 >;  /**< SS3 Raw Interrupt Status                 */
    using ADC_RIS_INRDC  = regbits< type, 16,  1 >;  /**< Digital Comparator Raw Interrupt Status  */
  };

  /**
   * ADC Interrupt Mask
   */
  struct IM
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_IM_MASK0    = regbits< type,  0,  1 >;  /**< SS0 Interrupt Mask                   */
    using ADC_IM_MASK1    = regbits< type,  1,  1 >;  /**< SS1 Interrupt Mask                   */
    using ADC_IM_MASK2    = regbits< type,  2,  1 >;  /**< SS2 Interrupt Mask                   */
    using ADC_IM_MASK3    = regbits< type,  3,  1 >;  /**< SS3 Interrupt Mask                   */
    using ADC_IM_DCONSS0  = regbits< type, 16,  1 >;  /**< Digital Comparator Interrupt on SS0  */
    using ADC_IM_DCONSS1  = regbits< type, 17,  1 >;  /**< Digital Comparator Interrupt on SS1  */
    using ADC_IM_DCONSS2  = regbits< type, 18,  1 >;  /**< Digital Comparator Interrupt on SS2  */
    using ADC_IM_DCONSS3  = regbits< type, 19,  1 >;  /**< Digital Comparator Interrupt on SS3  */
  };

  /**
   * ADC Interrupt Status and Clear
   */
  struct ISC
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_ISC_IN0      = regbits< type,  0,  1 >;  /**< SS0 Interrupt Status and Clear              */
    using ADC_ISC_IN1      = regbits< type,  1,  1 >;  /**< SS1 Interrupt Status and Clear              */
    using ADC_ISC_IN2      = regbits< type,  2,  1 >;  /**< SS2 Interrupt Status and Clear              */
    using ADC_ISC_IN3      = regbits< type,  3,  1 >;  /**< SS3 Interrupt Status and Clear              */
    using ADC_ISC_DCINSS0  = regbits< type, 16,  1 >;  /**< Digital Comparator Interrupt Status on SS0  */
    using ADC_ISC_DCINSS1  = regbits< type, 17,  1 >;  /**< Digital Comparator Interrupt Status on SS1  */
    using ADC_ISC_DCINSS2  = regbits< type, 18,  1 >;  /**< Digital Comparator Interrupt Status on SS2  */
    using ADC_ISC_DCINSS3  = regbits< type, 19,  1 >;  /**< Digital Comparator Interrupt Status on SS3  */
  };

  /**
   * ADC Overflow Status
   */
  struct OSTAT
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_OSTAT_OV0  = regbits< type,  0,  1 >;  /**< SS0 FIFO Overflow  */
    using ADC_OSTAT_OV1  = regbits< type,  1,  1 >;  /**< SS1 FIFO Overflow  */
    using ADC_OSTAT_OV2  = regbits< type,  2,  1 >;  /**< SS2 FIFO Overflow  */
    using ADC_OSTAT_OV3  = regbits< type,  3,  1 >;  /**< SS3 FIFO Overflow  */
  };

  /**
   * ADC Event Multiplexer Select
   */
  struct EMUX
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_EMUX_EM0  = regbits< type,  0,  4 >;  /**< SS0 Trigger Select  */
    using ADC_EMUX_EM1  = regbits< type,  4,  4 >;  /**< SS1 Trigger Select  */
    using ADC_EMUX_EM2  = regbits< type,  8,  4 >;  /**< SS2 Trigger Select  */
    using ADC_EMUX_EM3  = regbits< type, 12,  4 >;  /**< SS3 Trigger Select  */
  };

  /**
   * ADC Underflow Status
   */
  struct USTAT
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_USTAT_UV0  = regbits< type,  0,  1 >;  /**< SS0 FIFO Underflow  */
    using ADC_USTAT_UV1  = regbits< type,  1,  1 >;  /**< SS1 FIFO Underflow  */
    using ADC_USTAT_UV2  = regbits< type,  2,  1 >;  /**< SS2 FIFO Underflow  */
    using ADC_USTAT_UV3  = regbits< type,  3,  1 >;  /**< SS3 FIFO Underflow  */
  };

  /**
   * ADC Trigger Source Select
   */
  struct TSSEL
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_TSSEL_PS0  = regbits< type,  4,  2 >;  /**< PWM Unit Select  */
    using ADC_TSSEL_PS1  = regbits< type, 12,  2 >;  /**< PWM Unit Select  */
    using ADC_TSSEL_PS2  = regbits< type, 20,  2 >;  /**< PWM Unit Select  */
    using ADC_TSSEL_PS3  = regbits< type, 28,  2 >;  /**< PWM Unit Select  */
  };

  /**
   * ADC Sample Sequencer Priority
   */
  struct SSPRI
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSPRI_SS0  = regbits< type,  0,  2 >;  /**< SS0 Priority  */
    using ADC_SSPRI_SS1  = regbits< type,  4,  2 >;  /**< SS1 Priority  */
    using ADC_SSPRI_SS2  = regbits< type,  8,  2 >;  /**< SS2 Priority  */
    using ADC_SSPRI_SS3  = regbits< type, 12,  2 >;  /**< SS3 Priority  */
  };

  /**
   * ADC Sample Phase Control
   */
  struct SPC
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SPC_PHASE  = regbits< type,  0,  4 >;  /**< Phase Difference  */
  };

  /**
   * ADC Processor Sample Sequence Initiate
   */
  struct PSSI
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_PSSI_SS0       = regbits< type,  0,  1 >;  /**< SS0 Initiate        */
    using ADC_PSSI_SS1       = regbits< type,  1,  1 >;  /**< SS1 Initiate        */
    using ADC_PSSI_SS2       = regbits< type,  2,  1 >;  /**< SS2 Initiate        */
    using ADC_PSSI_SS3       = regbits< type,  3,  1 >;  /**< SS3 Initiate        */
    using ADC_PSSI_SYNCWAIT  = regbits< type, 27,  1 >;  /**< Synchronize Wait    */
    using ADC_PSSI_GSYNC     = regbits< type, 31,  1 >;  /**< Global Synchronize  */
  };

  /**
   * ADC Sample Averaging Control
   */
  struct SAC
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SAC_AVG  = regbits< type,  0,  3 >;  /**< Hardware Averaging Control  */
  };

  /**
   * ADC Digital Comparator Interrupt Status and Clear
   */
  struct DCISC
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCISC_DCINT0  = regbits< type,  0,  1 >;  /**< Digital Comparator 0 Interrupt Status and Clear  */
    using ADC_DCISC_DCINT1  = regbits< type,  1,  1 >;  /**< Digital Comparator 1 Interrupt Status and Clear  */
    using ADC_DCISC_DCINT2  = regbits< type,  2,  1 >;  /**< Digital Comparator 2 Interrupt Status and Clear  */
    using ADC_DCISC_DCINT3  = regbits< type,  3,  1 >;  /**< Digital Comparator 3 Interrupt Status and Clear  */
    using ADC_DCISC_DCINT4  = regbits< type,  4,  1 >;  /**< Digital Comparator 4 Interrupt Status and Clear  */
    using ADC_DCISC_DCINT5  = regbits< type,  5,  1 >;  /**< Digital Comparator 5 Interrupt Status and Clear  */
    using ADC_DCISC_DCINT6  = regbits< type,  6,  1 >;  /**< Digital Comparator 6 Interrupt Status and Clear  */
    using ADC_DCISC_DCINT7  = regbits< type,  7,  1 >;  /**< Digital Comparator 7 Interrupt Status and Clear  */
  };

  /**
   * ADC Control
   */
  struct CTL
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_CTL_VREF    = regbits< type,  0,  2 >;  /**< Voltage Reference Select  */
    using ADC_CTL_DITHER  = regbits< type,  6,  1 >;  /**< Dither Mode Enable        */
  };

  /**
   * ADC Sample Sequence Input Multiplexer Select 0
   */
  struct SSMUX0
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSMUX0_MUX0  = regbits< type,  0,  4 >;  /**< 1st Sample Input Select  */
    using ADC_SSMUX0_MUX1  = regbits< type,  4,  4 >;  /**< 2nd Sample Input Select  */
    using ADC_SSMUX0_MUX2  = regbits< type,  8,  4 >;  /**< 3rd Sample Input Select  */
    using ADC_SSMUX0_MUX3  = regbits< type, 12,  4 >;  /**< 4th Sample Input Select  */
    using ADC_SSMUX0_MUX4  = regbits< type, 16,  4 >;  /**< 5th Sample Input Select  */
    using ADC_SSMUX0_MUX5  = regbits< type, 20,  4 >;  /**< 6th Sample Input Select  */
    using ADC_SSMUX0_MUX6  = regbits< type, 24,  4 >;  /**< 7th Sample Input Select  */
    using ADC_SSMUX0_MUX7  = regbits< type, 28,  4 >;  /**< 8th Sample Input Select  */
  };

  /**
   * ADC Sample Sequence Control 0
   */
  struct SSCTL0
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSCTL0_D0    = regbits< type,  0,  1 >;  /**< 1st Sample Diff Input Select   */
    using ADC_SSCTL0_END0  = regbits< type,  1,  1 >;  /**< 1st Sample is End of Sequence  */
    using ADC_SSCTL0_IE0   = regbits< type,  2,  1 >;  /**< 1st Sample Interrupt Enable    */
    using ADC_SSCTL0_TS0   = regbits< type,  3,  1 >;  /**< 1st Sample Temp Sensor Select  */
    using ADC_SSCTL0_D1    = regbits< type,  4,  1 >;  /**< 2nd Sample Diff Input Select   */
    using ADC_SSCTL0_END1  = regbits< type,  5,  1 >;  /**< 2nd Sample is End of Sequence  */
    using ADC_SSCTL0_IE1   = regbits< type,  6,  1 >;  /**< 2nd Sample Interrupt Enable    */
    using ADC_SSCTL0_TS1   = regbits< type,  7,  1 >;  /**< 2nd Sample Temp Sensor Select  */
    using ADC_SSCTL0_D2    = regbits< type,  8,  1 >;  /**< 3rd Sample Diff Input Select   */
    using ADC_SSCTL0_END2  = regbits< type,  9,  1 >;  /**< 3rd Sample is End of Sequence  */
    using ADC_SSCTL0_IE2   = regbits< type, 10,  1 >;  /**< 3rd Sample Interrupt Enable    */
    using ADC_SSCTL0_TS2   = regbits< type, 11,  1 >;  /**< 3rd Sample Temp Sensor Select  */
    using ADC_SSCTL0_D3    = regbits< type, 12,  1 >;  /**< 4th Sample Diff Input Select   */
    using ADC_SSCTL0_END3  = regbits< type, 13,  1 >;  /**< 4th Sample is End of Sequence  */
    using ADC_SSCTL0_IE3   = regbits< type, 14,  1 >;  /**< 4th Sample Interrupt Enable    */
    using ADC_SSCTL0_TS3   = regbits< type, 15,  1 >;  /**< 4th Sample Temp Sensor Select  */
    using ADC_SSCTL0_D4    = regbits< type, 16,  1 >;  /**< 5th Sample Diff Input Select   */
    using ADC_SSCTL0_END4  = regbits< type, 17,  1 >;  /**< 5th Sample is End of Sequence  */
    using ADC_SSCTL0_IE4   = regbits< type, 18,  1 >;  /**< 5th Sample Interrupt Enable    */
    using ADC_SSCTL0_TS4   = regbits< type, 19,  1 >;  /**< 5th Sample Temp Sensor Select  */
    using ADC_SSCTL0_D5    = regbits< type, 20,  1 >;  /**< 6th Sample Diff Input Select   */
    using ADC_SSCTL0_END5  = regbits< type, 21,  1 >;  /**< 6th Sample is End of Sequence  */
    using ADC_SSCTL0_IE5   = regbits< type, 22,  1 >;  /**< 6th Sample Interrupt Enable    */
    using ADC_SSCTL0_TS5   = regbits< type, 23,  1 >;  /**< 6th Sample Temp Sensor Select  */
    using ADC_SSCTL0_D6    = regbits< type, 24,  1 >;  /**< 7th Sample Diff Input Select   */
    using ADC_SSCTL0_END6  = regbits< type, 25,  1 >;  /**< 7th Sample is End of Sequence  */
    using ADC_SSCTL0_IE6   = regbits< type, 26,  1 >;  /**< 7th Sample Interrupt Enable    */
    using ADC_SSCTL0_TS6   = regbits< type, 27,  1 >;  /**< 7th Sample Temp Sensor Select  */
    using ADC_SSCTL0_D7    = regbits< type, 28,  1 >;  /**< 8th Sample Diff Input Select   */
    using ADC_SSCTL0_END7  = regbits< type, 29,  1 >;  /**< 8th Sample is End of Sequence  */
    using ADC_SSCTL0_IE7   = regbits< type, 30,  1 >;  /**< 8th Sample Interrupt Enable    */
    using ADC_SSCTL0_TS7   = regbits< type, 31,  1 >;  /**< 8th Sample Temp Sensor Select  */
  };

  /**
   * ADC Sample Sequence Result FIFO 0
   */
  struct SSFIFO0
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSFIFO0_DATA  = regbits< type,  0, 12 >;  /**< Conversion Result Data  */
  };

  /**
   * ADC Sample Sequence FIFO 0 Status
   */
  struct SSFSTAT0
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSFSTAT0_TPTR   = regbits< type,  0,  4 >;  /**< FIFO Tail Pointer  */
    using ADC_SSFSTAT0_HPTR   = regbits< type,  4,  4 >;  /**< FIFO Head Pointer  */
    using ADC_SSFSTAT0_EMPTY  = regbits< type,  8,  1 >;  /**< FIFO Empty         */
    using ADC_SSFSTAT0_FULL   = regbits< type, 12,  1 >;  /**< FIFO Full          */
  };

  /**
   * ADC Sample Sequence 0 Operation
   */
  struct SSOP0
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSOP0_S0DCOP  = regbits< type,  0,  1 >;  /**< Sample 0 Digital Comparator Operation  */
    using ADC_SSOP0_S1DCOP  = regbits< type,  4,  1 >;  /**< Sample 1 Digital Comparator Operation  */
    using ADC_SSOP0_S2DCOP  = regbits< type,  8,  1 >;  /**< Sample 2 Digital Comparator Operation  */
    using ADC_SSOP0_S3DCOP  = regbits< type, 12,  1 >;  /**< Sample 3 Digital Comparator Operation  */
    using ADC_SSOP0_S4DCOP  = regbits< type, 16,  1 >;  /**< Sample 4 Digital Comparator Operation  */
    using ADC_SSOP0_S5DCOP  = regbits< type, 20,  1 >;  /**< Sample 5 Digital Comparator Operation  */
    using ADC_SSOP0_S6DCOP  = regbits< type, 24,  1 >;  /**< Sample 6 Digital Comparator Operation  */
    using ADC_SSOP0_S7DCOP  = regbits< type, 28,  1 >;  /**< Sample 7 Digital Comparator Operation  */
  };

  /**
   * ADC Sample Sequence 0 Digital Comparator Select
   */
  struct SSDC0
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSDC0_S0DCSEL  = regbits< type,  0,  4 >;  /**< Sample 0 Digital Comparator Select  */
    using ADC_SSDC0_S1DCSEL  = regbits< type,  4,  4 >;  /**< Sample 1 Digital Comparator Select  */
    using ADC_SSDC0_S2DCSEL  = regbits< type,  8,  4 >;  /**< Sample 2 Digital Comparator Select  */
    using ADC_SSDC0_S3DCSEL  = regbits< type, 12,  4 >;  /**< Sample 3 Digital Comparator Select  */
    using ADC_SSDC0_S4DCSEL  = regbits< type, 16,  4 >;  /**< Sample 4 Digital Comparator Select  */
    using ADC_SSDC0_S5DCSEL  = regbits< type, 20,  4 >;  /**< Sample 5 Digital Comparator Select  */
    using ADC_SSDC0_S6DCSEL  = regbits< type, 24,  4 >;  /**< Sample 6 Digital Comparator Select  */
    using ADC_SSDC0_S7DCSEL  = regbits< type, 28,  4 >;  /**< Sample 7 Digital Comparator Select  */
  };

  /**
   * ADC Sample Sequence Input Multiplexer Select 1
   */
  struct SSMUX1
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSMUX1_MUX0  = regbits< type,  0,  4 >;  /**< 1st Sample Input Select  */
    using ADC_SSMUX1_MUX1  = regbits< type,  4,  4 >;  /**< 2nd Sample Input Select  */
    using ADC_SSMUX1_MUX2  = regbits< type,  8,  4 >;  /**< 3rd Sample Input Select  */
    using ADC_SSMUX1_MUX3  = regbits< type, 12,  4 >;  /**< 4th Sample Input Select  */
  };

  /**
   * ADC Sample Sequence Control 1
   */
  struct SSCTL1
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSCTL1_D0    = regbits< type,  0,  1 >;  /**< 1st Sample Diff Input Select   */
    using ADC_SSCTL1_END0  = regbits< type,  1,  1 >;  /**< 1st Sample is End of Sequence  */
    using ADC_SSCTL1_IE0   = regbits< type,  2,  1 >;  /**< 1st Sample Interrupt Enable    */
    using ADC_SSCTL1_TS0   = regbits< type,  3,  1 >;  /**< 1st Sample Temp Sensor Select  */
    using ADC_SSCTL1_D1    = regbits< type,  4,  1 >;  /**< 2nd Sample Diff Input Select   */
    using ADC_SSCTL1_END1  = regbits< type,  5,  1 >;  /**< 2nd Sample is End of Sequence  */
    using ADC_SSCTL1_IE1   = regbits< type,  6,  1 >;  /**< 2nd Sample Interrupt Enable    */
    using ADC_SSCTL1_TS1   = regbits< type,  7,  1 >;  /**< 2nd Sample Temp Sensor Select  */
    using ADC_SSCTL1_D2    = regbits< type,  8,  1 >;  /**< 3rd Sample Diff Input Select   */
    using ADC_SSCTL1_END2  = regbits< type,  9,  1 >;  /**< 3rd Sample is End of Sequence  */
    using ADC_SSCTL1_IE2   = regbits< type, 10,  1 >;  /**< 3rd Sample Interrupt Enable    */
    using ADC_SSCTL1_TS2   = regbits< type, 11,  1 >;  /**< 3rd Sample Temp Sensor Select  */
    using ADC_SSCTL1_D3    = regbits< type, 12,  1 >;  /**< 4th Sample Diff Input Select   */
    using ADC_SSCTL1_END3  = regbits< type, 13,  1 >;  /**< 4th Sample is End of Sequence  */
    using ADC_SSCTL1_IE3   = regbits< type, 14,  1 >;  /**< 4th Sample Interrupt Enable    */
    using ADC_SSCTL1_TS3   = regbits< type, 15,  1 >;  /**< 4th Sample Temp Sensor Select  */
  };

  /**
   * ADC Sample Sequence Result FIFO 1
   */
  struct SSFIFO1
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSFIFO1_DATA  = regbits< type,  0, 12 >;  /**< Conversion Result Data  */
  };

  /**
   * ADC Sample Sequence FIFO 1 Status
   */
  struct SSFSTAT1
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSFSTAT1_TPTR   = regbits< type,  0,  4 >;  /**< FIFO Tail Pointer  */
    using ADC_SSFSTAT1_HPTR   = regbits< type,  4,  4 >;  /**< FIFO Head Pointer  */
    using ADC_SSFSTAT1_EMPTY  = regbits< type,  8,  1 >;  /**< FIFO Empty         */
    using ADC_SSFSTAT1_FULL   = regbits< type, 12,  1 >;  /**< FIFO Full          */
  };

  /**
   * ADC Sample Sequence 1 Operation
   */
  struct SSOP1
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSOP1_S0DCOP  = regbits< type,  0,  1 >;  /**< Sample 0 Digital Comparator Operation  */
    using ADC_SSOP1_S1DCOP  = regbits< type,  4,  1 >;  /**< Sample 1 Digital Comparator Operation  */
    using ADC_SSOP1_S2DCOP  = regbits< type,  8,  1 >;  /**< Sample 2 Digital Comparator Operation  */
    using ADC_SSOP1_S3DCOP  = regbits< type, 12,  1 >;  /**< Sample 3 Digital Comparator Operation  */
  };

  /**
   * ADC Sample Sequence 1 Digital Comparator Select
   */
  struct SSDC1
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSDC1_S0DCSEL  = regbits< type,  0,  4 >;  /**< Sample 0 Digital Comparator Select  */
    using ADC_SSDC1_S1DCSEL  = regbits< type,  4,  4 >;  /**< Sample 1 Digital Comparator Select  */
    using ADC_SSDC1_S2DCSEL  = regbits< type,  8,  4 >;  /**< Sample 2 Digital Comparator Select  */
    using ADC_SSDC1_S3DCSEL  = regbits< type, 12,  4 >;  /**< Sample 3 Digital Comparator Select  */
  };

  /**
   * ADC Sample Sequence Input Multiplexer Select 2
   */
  struct SSMUX2
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSMUX2_MUX0  = regbits< type,  0,  4 >;  /**< 1st Sample Input Select  */
    using ADC_SSMUX2_MUX1  = regbits< type,  4,  4 >;  /**< 2nd Sample Input Select  */
    using ADC_SSMUX2_MUX2  = regbits< type,  8,  4 >;  /**< 3rd Sample Input Select  */
    using ADC_SSMUX2_MUX3  = regbits< type, 12,  4 >;  /**< 4th Sample Input Select  */
  };

  /**
   * ADC Sample Sequence Control 2
   */
  struct SSCTL2
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSCTL2_D0    = regbits< type,  0,  1 >;  /**< 1st Sample Diff Input Select   */
    using ADC_SSCTL2_END0  = regbits< type,  1,  1 >;  /**< 1st Sample is End of Sequence  */
    using ADC_SSCTL2_IE0   = regbits< type,  2,  1 >;  /**< 1st Sample Interrupt Enable    */
    using ADC_SSCTL2_TS0   = regbits< type,  3,  1 >;  /**< 1st Sample Temp Sensor Select  */
    using ADC_SSCTL2_D1    = regbits< type,  4,  1 >;  /**< 2nd Sample Diff Input Select   */
    using ADC_SSCTL2_END1  = regbits< type,  5,  1 >;  /**< 2nd Sample is End of Sequence  */
    using ADC_SSCTL2_IE1   = regbits< type,  6,  1 >;  /**< 2nd Sample Interrupt Enable    */
    using ADC_SSCTL2_TS1   = regbits< type,  7,  1 >;  /**< 2nd Sample Temp Sensor Select  */
    using ADC_SSCTL2_D2    = regbits< type,  8,  1 >;  /**< 3rd Sample Diff Input Select   */
    using ADC_SSCTL2_END2  = regbits< type,  9,  1 >;  /**< 3rd Sample is End of Sequence  */
    using ADC_SSCTL2_IE2   = regbits< type, 10,  1 >;  /**< 3rd Sample Interrupt Enable    */
    using ADC_SSCTL2_TS2   = regbits< type, 11,  1 >;  /**< 3rd Sample Temp Sensor Select  */
    using ADC_SSCTL2_D3    = regbits< type, 12,  1 >;  /**< 4th Sample Diff Input Select   */
    using ADC_SSCTL2_END3  = regbits< type, 13,  1 >;  /**< 4th Sample is End of Sequence  */
    using ADC_SSCTL2_IE3   = regbits< type, 14,  1 >;  /**< 4th Sample Interrupt Enable    */
    using ADC_SSCTL2_TS3   = regbits< type, 15,  1 >;  /**< 4th Sample Temp Sensor Select  */
  };

  /**
   * ADC Sample Sequence Result FIFO 2
   */
  struct SSFIFO2
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSFIFO2_DATA  = regbits< type,  0, 12 >;  /**< Conversion Result Data  */
  };

  /**
   * ADC Sample Sequence FIFO 2 Status
   */
  struct SSFSTAT2
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSFSTAT2_TPTR   = regbits< type,  0,  4 >;  /**< FIFO Tail Pointer  */
    using ADC_SSFSTAT2_HPTR   = regbits< type,  4,  4 >;  /**< FIFO Head Pointer  */
    using ADC_SSFSTAT2_EMPTY  = regbits< type,  8,  1 >;  /**< FIFO Empty         */
    using ADC_SSFSTAT2_FULL   = regbits< type, 12,  1 >;  /**< FIFO Full          */
  };

  /**
   * ADC Sample Sequence 2 Operation
   */
  struct SSOP2
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSOP2_S0DCOP  = regbits< type,  0,  1 >;  /**< Sample 0 Digital Comparator Operation  */
    using ADC_SSOP2_S1DCOP  = regbits< type,  4,  1 >;  /**< Sample 1 Digital Comparator Operation  */
    using ADC_SSOP2_S2DCOP  = regbits< type,  8,  1 >;  /**< Sample 2 Digital Comparator Operation  */
    using ADC_SSOP2_S3DCOP  = regbits< type, 12,  1 >;  /**< Sample 3 Digital Comparator Operation  */
  };

  /**
   * ADC Sample Sequence 2 Digital Comparator Select
   */
  struct SSDC2
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSDC2_S0DCSEL  = regbits< type,  0,  4 >;  /**< Sample 0 Digital Comparator Select  */
    using ADC_SSDC2_S1DCSEL  = regbits< type,  4,  4 >;  /**< Sample 1 Digital Comparator Select  */
    using ADC_SSDC2_S2DCSEL  = regbits< type,  8,  4 >;  /**< Sample 2 Digital Comparator Select  */
    using ADC_SSDC2_S3DCSEL  = regbits< type, 12,  4 >;  /**< Sample 3 Digital Comparator Select  */
  };

  /**
   * ADC Sample Sequence Input Multiplexer Select 3
   */
  struct SSMUX3
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSMUX3_MUX0  = regbits< type,  0,  4 >;  /**< 1st Sample Input Select  */
  };

  /**
   * ADC Sample Sequence Control 3
   */
  struct SSCTL3
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSCTL3_D0    = regbits< type,  0,  1 >;  /**< 1st Sample Diff Input Select   */
    using ADC_SSCTL3_END0  = regbits< type,  1,  1 >;  /**< 1st Sample is End of Sequence  */
    using ADC_SSCTL3_IE0   = regbits< type,  2,  1 >;  /**< 1st Sample Interrupt Enable    */
    using ADC_SSCTL3_TS0   = regbits< type,  3,  1 >;  /**< 1st Sample Temp Sensor Select  */
  };

  /**
   * ADC Sample Sequence Result FIFO 3
   */
  struct SSFIFO3
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSFIFO3_DATA  = regbits< type,  0, 12 >;  /**< Conversion Result Data  */
  };

  /**
   * ADC Sample Sequence FIFO 3 Status
   */
  struct SSFSTAT3
  : public reg< uint32_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSFSTAT3_TPTR   = regbits< type,  0,  4 >;  /**< FIFO Tail Pointer  */
    using ADC_SSFSTAT3_HPTR   = regbits< type,  4,  4 >;  /**< FIFO Head Pointer  */
    using ADC_SSFSTAT3_EMPTY  = regbits< type,  8,  1 >;  /**< FIFO Empty         */
    using ADC_SSFSTAT3_FULL   = regbits< type, 12,  1 >;  /**< FIFO Full          */
  };

  /**
   * ADC Sample Sequence 3 Operation
   */
  struct SSOP3
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSOP3_S0DCOP  = regbits< type,  0,  1 >;  /**< Sample 0 Digital Comparator Operation  */
  };

  /**
   * ADC Sample Sequence 3 Digital Comparator Select
   */
  struct SSDC3
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_SSDC3_S0DCSEL  = regbits< type,  0,  4 >;  /**< Sample 0 Digital Comparator Select  */
  };

  /**
   * ADC Digital Comparator Reset Initial Conditions
   */
  struct DCRIC
  : public reg< uint32_t, base_addr + 0x00000d00, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000d00, wo, 0 >;

    using ADC_DCRIC_DCINT0   = regbits< type,  0,  1 >;  /**< Digital Comparator Interrupt 0  */
    using ADC_DCRIC_DCINT1   = regbits< type,  1,  1 >;  /**< Digital Comparator Interrupt 1  */
    using ADC_DCRIC_DCINT2   = regbits< type,  2,  1 >;  /**< Digital Comparator Interrupt 2  */
    using ADC_DCRIC_DCINT3   = regbits< type,  3,  1 >;  /**< Digital Comparator Interrupt 3  */
    using ADC_DCRIC_DCINT4   = regbits< type,  4,  1 >;  /**< Digital Comparator Interrupt 4  */
    using ADC_DCRIC_DCINT5   = regbits< type,  5,  1 >;  /**< Digital Comparator Interrupt 5  */
    using ADC_DCRIC_DCINT6   = regbits< type,  6,  1 >;  /**< Digital Comparator Interrupt 6  */
    using ADC_DCRIC_DCINT7   = regbits< type,  7,  1 >;  /**< Digital Comparator Interrupt 7  */
    using ADC_DCRIC_DCTRIG0  = regbits< type, 16,  1 >;  /**< Digital Comparator Trigger 0    */
    using ADC_DCRIC_DCTRIG1  = regbits< type, 17,  1 >;  /**< Digital Comparator Trigger 1    */
    using ADC_DCRIC_DCTRIG2  = regbits< type, 18,  1 >;  /**< Digital Comparator Trigger 2    */
    using ADC_DCRIC_DCTRIG3  = regbits< type, 19,  1 >;  /**< Digital Comparator Trigger 3    */
    using ADC_DCRIC_DCTRIG4  = regbits< type, 20,  1 >;  /**< Digital Comparator Trigger 4    */
    using ADC_DCRIC_DCTRIG5  = regbits< type, 21,  1 >;  /**< Digital Comparator Trigger 5    */
    using ADC_DCRIC_DCTRIG6  = regbits< type, 22,  1 >;  /**< Digital Comparator Trigger 6    */
    using ADC_DCRIC_DCTRIG7  = regbits< type, 23,  1 >;  /**< Digital Comparator Trigger 7    */
  };

  /**
   * ADC Digital Comparator Control 0
   */
  struct DCCTL0
  : public reg< uint32_t, base_addr + 0x00000e00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCTL0_CIM  = regbits< type,  0,  2 >;  /**< Comparison Interrupt Mode       */
    using ADC_DCCTL0_CIC  = regbits< type,  2,  2 >;  /**< Comparison Interrupt Condition  */
    using ADC_DCCTL0_CIE  = regbits< type,  4,  1 >;  /**< Comparison Interrupt Enable     */
    using ADC_DCCTL0_CTM  = regbits< type,  8,  2 >;  /**< Comparison Trigger Mode         */
    using ADC_DCCTL0_CTC  = regbits< type, 10,  2 >;  /**< Comparison Trigger Condition    */
    using ADC_DCCTL0_CTE  = regbits< type, 12,  1 >;  /**< Comparison Trigger Enable       */
  };

  /**
   * ADC Digital Comparator Control 1
   */
  struct DCCTL1
  : public reg< uint32_t, base_addr + 0x00000e04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCTL1_CIM  = regbits< type,  0,  2 >;  /**< Comparison Interrupt Mode       */
    using ADC_DCCTL1_CIC  = regbits< type,  2,  2 >;  /**< Comparison Interrupt Condition  */
    using ADC_DCCTL1_CIE  = regbits< type,  4,  1 >;  /**< Comparison Interrupt Enable     */
    using ADC_DCCTL1_CTM  = regbits< type,  8,  2 >;  /**< Comparison Trigger Mode         */
    using ADC_DCCTL1_CTC  = regbits< type, 10,  2 >;  /**< Comparison Trigger Condition    */
    using ADC_DCCTL1_CTE  = regbits< type, 12,  1 >;  /**< Comparison Trigger Enable       */
  };

  /**
   * ADC Digital Comparator Control 2
   */
  struct DCCTL2
  : public reg< uint32_t, base_addr + 0x00000e08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCTL2_CIM  = regbits< type,  0,  2 >;  /**< Comparison Interrupt Mode       */
    using ADC_DCCTL2_CIC  = regbits< type,  2,  2 >;  /**< Comparison Interrupt Condition  */
    using ADC_DCCTL2_CIE  = regbits< type,  4,  1 >;  /**< Comparison Interrupt Enable     */
    using ADC_DCCTL2_CTM  = regbits< type,  8,  2 >;  /**< Comparison Trigger Mode         */
    using ADC_DCCTL2_CTC  = regbits< type, 10,  2 >;  /**< Comparison Trigger Condition    */
    using ADC_DCCTL2_CTE  = regbits< type, 12,  1 >;  /**< Comparison Trigger Enable       */
  };

  /**
   * ADC Digital Comparator Control 3
   */
  struct DCCTL3
  : public reg< uint32_t, base_addr + 0x00000e0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCTL3_CIM  = regbits< type,  0,  2 >;  /**< Comparison Interrupt Mode       */
    using ADC_DCCTL3_CIC  = regbits< type,  2,  2 >;  /**< Comparison Interrupt Condition  */
    using ADC_DCCTL3_CIE  = regbits< type,  4,  1 >;  /**< Comparison Interrupt Enable     */
    using ADC_DCCTL3_CTM  = regbits< type,  8,  2 >;  /**< Comparison Trigger Mode         */
    using ADC_DCCTL3_CTC  = regbits< type, 10,  2 >;  /**< Comparison Trigger Condition    */
    using ADC_DCCTL3_CTE  = regbits< type, 12,  1 >;  /**< Comparison Trigger Enable       */
  };

  /**
   * ADC Digital Comparator Control 4
   */
  struct DCCTL4
  : public reg< uint32_t, base_addr + 0x00000e10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCTL4_CIM  = regbits< type,  0,  2 >;  /**< Comparison Interrupt Mode       */
    using ADC_DCCTL4_CIC  = regbits< type,  2,  2 >;  /**< Comparison Interrupt Condition  */
    using ADC_DCCTL4_CIE  = regbits< type,  4,  1 >;  /**< Comparison Interrupt Enable     */
    using ADC_DCCTL4_CTM  = regbits< type,  8,  2 >;  /**< Comparison Trigger Mode         */
    using ADC_DCCTL4_CTC  = regbits< type, 10,  2 >;  /**< Comparison Trigger Condition    */
    using ADC_DCCTL4_CTE  = regbits< type, 12,  1 >;  /**< Comparison Trigger Enable       */
  };

  /**
   * ADC Digital Comparator Control 5
   */
  struct DCCTL5
  : public reg< uint32_t, base_addr + 0x00000e14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCTL5_CIM  = regbits< type,  0,  2 >;  /**< Comparison Interrupt Mode       */
    using ADC_DCCTL5_CIC  = regbits< type,  2,  2 >;  /**< Comparison Interrupt Condition  */
    using ADC_DCCTL5_CIE  = regbits< type,  4,  1 >;  /**< Comparison Interrupt Enable     */
    using ADC_DCCTL5_CTM  = regbits< type,  8,  2 >;  /**< Comparison Trigger Mode         */
    using ADC_DCCTL5_CTC  = regbits< type, 10,  2 >;  /**< Comparison Trigger Condition    */
    using ADC_DCCTL5_CTE  = regbits< type, 12,  1 >;  /**< Comparison Trigger Enable       */
  };

  /**
   * ADC Digital Comparator Control 6
   */
  struct DCCTL6
  : public reg< uint32_t, base_addr + 0x00000e18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e18, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCTL6_CIM  = regbits< type,  0,  2 >;  /**< Comparison Interrupt Mode       */
    using ADC_DCCTL6_CIC  = regbits< type,  2,  2 >;  /**< Comparison Interrupt Condition  */
    using ADC_DCCTL6_CIE  = regbits< type,  4,  1 >;  /**< Comparison Interrupt Enable     */
    using ADC_DCCTL6_CTM  = regbits< type,  8,  2 >;  /**< Comparison Trigger Mode         */
    using ADC_DCCTL6_CTC  = regbits< type, 10,  2 >;  /**< Comparison Trigger Condition    */
    using ADC_DCCTL6_CTE  = regbits< type, 12,  1 >;  /**< Comparison Trigger Enable       */
  };

  /**
   * ADC Digital Comparator Control 7
   */
  struct DCCTL7
  : public reg< uint32_t, base_addr + 0x00000e1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e1c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCTL7_CIM  = regbits< type,  0,  2 >;  /**< Comparison Interrupt Mode       */
    using ADC_DCCTL7_CIC  = regbits< type,  2,  2 >;  /**< Comparison Interrupt Condition  */
    using ADC_DCCTL7_CIE  = regbits< type,  4,  1 >;  /**< Comparison Interrupt Enable     */
    using ADC_DCCTL7_CTM  = regbits< type,  8,  2 >;  /**< Comparison Trigger Mode         */
    using ADC_DCCTL7_CTC  = regbits< type, 10,  2 >;  /**< Comparison Trigger Condition    */
    using ADC_DCCTL7_CTE  = regbits< type, 12,  1 >;  /**< Comparison Trigger Enable       */
  };

  /**
   * ADC Digital Comparator Range 0
   */
  struct DCCMP0
  : public reg< uint32_t, base_addr + 0x00000e40, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e40, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCMP0_COMP0  = regbits< type,  0, 12 >;  /**< Compare 0  */
    using ADC_DCCMP0_COMP1  = regbits< type, 16, 12 >;  /**< Compare 1  */
  };

  /**
   * ADC Digital Comparator Range 1
   */
  struct DCCMP1
  : public reg< uint32_t, base_addr + 0x00000e44, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e44, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCMP1_COMP0  = regbits< type,  0, 12 >;  /**< Compare 0  */
    using ADC_DCCMP1_COMP1  = regbits< type, 16, 12 >;  /**< Compare 1  */
  };

  /**
   * ADC Digital Comparator Range 2
   */
  struct DCCMP2
  : public reg< uint32_t, base_addr + 0x00000e48, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e48, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCMP2_COMP0  = regbits< type,  0, 12 >;  /**< Compare 0  */
    using ADC_DCCMP2_COMP1  = regbits< type, 16, 12 >;  /**< Compare 1  */
  };

  /**
   * ADC Digital Comparator Range 3
   */
  struct DCCMP3
  : public reg< uint32_t, base_addr + 0x00000e4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e4c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCMP3_COMP0  = regbits< type,  0, 12 >;  /**< Compare 0  */
    using ADC_DCCMP3_COMP1  = regbits< type, 16, 12 >;  /**< Compare 1  */
  };

  /**
   * ADC Digital Comparator Range 4
   */
  struct DCCMP4
  : public reg< uint32_t, base_addr + 0x00000e50, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e50, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCMP4_COMP0  = regbits< type,  0, 12 >;  /**< Compare 0  */
    using ADC_DCCMP4_COMP1  = regbits< type, 16, 12 >;  /**< Compare 1  */
  };

  /**
   * ADC Digital Comparator Range 5
   */
  struct DCCMP5
  : public reg< uint32_t, base_addr + 0x00000e54, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e54, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCMP5_COMP0  = regbits< type,  0, 12 >;  /**< Compare 0  */
    using ADC_DCCMP5_COMP1  = regbits< type, 16, 12 >;  /**< Compare 1  */
  };

  /**
   * ADC Digital Comparator Range 6
   */
  struct DCCMP6
  : public reg< uint32_t, base_addr + 0x00000e58, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e58, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCMP6_COMP0  = regbits< type,  0, 12 >;  /**< Compare 0  */
    using ADC_DCCMP6_COMP1  = regbits< type, 16, 12 >;  /**< Compare 1  */
  };

  /**
   * ADC Digital Comparator Range 7
   */
  struct DCCMP7
  : public reg< uint32_t, base_addr + 0x00000e5c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000e5c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_DCCMP7_COMP0  = regbits< type,  0, 12 >;  /**< Compare 0  */
    using ADC_DCCMP7_COMP1  = regbits< type, 16, 12 >;  /**< Compare 1  */
  };

  /**
   * ADC Peripheral Properties
   */
  struct PP
  : public reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_PP_MSR   = regbits< type,  0,  4 >;  /**< Maximum ADC Sample Rate   */
    using ADC_PP_CH    = regbits< type,  4,  6 >;  /**< ADC Channel Count         */
    using ADC_PP_DC    = regbits< type, 10,  6 >;  /**< Digital Comparator Count  */
    using ADC_PP_TYPE  = regbits< type, 16,  2 >;  /**< ADC Architecture          */
    using ADC_PP_RSL   = regbits< type, 18,  5 >;  /**< Resolution                */
    using ADC_PP_TS    = regbits< type, 23,  1 >;  /**< Temperature Sensor        */
  };

  /**
   * ADC Peripheral Configuration
   */
  struct PC
  : public reg< uint32_t, base_addr + 0x00000fc4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_PC_SR  = regbits< type,  0,  4 >;  /**< ADC Sample Rate  */
  };

  /**
   * ADC Clock Configuration
   */
  struct CC
  : public reg< uint32_t, base_addr + 0x00000fc8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADC_CC_CS  = regbits< type,  0,  4 >;  /**< ADC Clock Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC0_HPP_INCLUDED
