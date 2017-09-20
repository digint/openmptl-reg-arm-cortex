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
//  Import from CMSIS-SVD: "Freescale/MKV44F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV44F16
//  series: Kinetis_V
//  version: 1.6
//  description: MKV44F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADC_HPP_INCLUDED
#define ARCH_REG_ADC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog to digital converter
 */
struct ADC
{
  static constexpr reg_addr_t base_addr = 0x4005c000;

  /**
   * ADC Control Register 1
   */
  struct CTRL1
  : public reg< uint16_t, base_addr + 0, rw, 0x5005 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0x5005 >;

    using SMODE     = regbits< type,  0,  3 >;  /**< ADC Scan Mode Control               */
    using CHNCFG_L  = regbits< type,  4,  4 >;  /**< CHCNF (Channel Configure Low) bits  */
    using HLMTIE    = regbits< type,  8,  1 >;  /**< High Limit Interrupt Enable         */
    using LLMTIE    = regbits< type,  9,  1 >;  /**< Low Limit Interrupt Enable          */
    using ZCIE      = regbits< type, 10,  1 >;  /**< Zero Crossing Interrupt Enable      */
    using EOSIE0    = regbits< type, 11,  1 >;  /**< End Of Scan Interrupt Enable        */
    using SYNC0     = regbits< type, 12,  1 >;  /**< SYNC0 Enable                        */
    using START0    = regbits< type, 13,  1 >;  /**< START0 Conversion                   */
    using STOP0     = regbits< type, 14,  1 >;  /**< Stop                                */
    using DMAEN0    = regbits< type, 15,  1 >;  /**< DMA enable                          */
  };

  /**
   * ADC Control Register 2
   */
  struct CTRL2
  : public reg< uint16_t, base_addr + 0x2, rw, 0x5044 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0x5044 >;

    using DIV0      = regbits< type,  0,  6 >;  /**< Clock Divisor Select                 */
    using SIMULT    = regbits< type,  6,  1 >;  /**< Simultaneous mode                    */
    using CHNCFG_H  = regbits< type,  7,  4 >;  /**< CHCNF (Channel Configure High) bits  */
    using EOSIE1    = regbits< type, 11,  1 >;  /**< End Of Scan Interrupt Enable         */
    using SYNC1     = regbits< type, 12,  1 >;  /**< SYNC1 Enable                         */
    using START1    = regbits< type, 13,  1 >;  /**< START1 Conversion                    */
    using STOP1     = regbits< type, 14,  1 >;  /**< Stop                                 */
    using DMAEN1    = regbits< type, 15,  1 >;  /**< DMA enable                           */
  };

  /**
   * ADC Zero Crossing Control 1 Register
   */
  struct ZXCTRL1
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using ZCE0  = regbits< type,  0,  2 >;  /**< Zero crossing enable 0  */
    using ZCE1  = regbits< type,  2,  2 >;  /**< Zero crossing enable 1  */
    using ZCE2  = regbits< type,  4,  2 >;  /**< Zero crossing enable 2  */
    using ZCE3  = regbits< type,  6,  2 >;  /**< Zero crossing enable 3  */
    using ZCE4  = regbits< type,  8,  2 >;  /**< Zero crossing enable 4  */
    using ZCE5  = regbits< type, 10,  2 >;  /**< Zero crossing enable 5  */
    using ZCE6  = regbits< type, 12,  2 >;  /**< Zero crossing enable 6  */
    using ZCE7  = regbits< type, 14,  2 >;  /**< Zero crossing enable 7  */
  };

  /**
   * ADC Zero Crossing Control 2 Register
   */
  struct ZXCTRL2
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    using ZCE8   = regbits< type,  0,  2 >;  /**< Zero crossing enable 8   */
    using ZCE9   = regbits< type,  2,  2 >;  /**< Zero crossing enable 9   */
    using ZCE10  = regbits< type,  4,  2 >;  /**< Zero crossing enable 10  */
    using ZCE11  = regbits< type,  6,  2 >;  /**< Zero crossing enable 11  */
    using ZCE12  = regbits< type,  8,  2 >;  /**< Zero crossing enable 12  */
    using ZCE13  = regbits< type, 10,  2 >;  /**< Zero crossing enable 13  */
    using ZCE14  = regbits< type, 12,  2 >;  /**< Zero crossing enable 14  */
    using ZCE15  = regbits< type, 14,  2 >;  /**< Zero crossing enable 15  */
  };

  /**
   * ADC Channel List Register 1
   */
  struct CLIST1
  : public reg< uint16_t, base_addr + 0x8, rw, 0x3210 >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0x3210 >;

    using SAMPLE0  = regbits< type,  0,  4 >;  /**< Sample Field 0  */
    using SAMPLE1  = regbits< type,  4,  4 >;  /**< Sample Field 1  */
    using SAMPLE2  = regbits< type,  8,  4 >;  /**< Sample Field 2  */
    using SAMPLE3  = regbits< type, 12,  4 >;  /**< Sample Field 3  */
  };

  /**
   * ADC Channel List Register 2
   */
  struct CLIST2
  : public reg< uint16_t, base_addr + 0xa, rw, 0x7654 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0x7654 >;

    using SAMPLE4  = regbits< type,  0,  4 >;  /**< Sample Field 4  */
    using SAMPLE5  = regbits< type,  4,  4 >;  /**< Sample Field 5  */
    using SAMPLE6  = regbits< type,  8,  4 >;  /**< Sample Field 6  */
    using SAMPLE7  = regbits< type, 12,  4 >;  /**< Sample Field 7  */
  };

  /**
   * ADC Channel List Register 3
   */
  struct CLIST3
  : public reg< uint16_t, base_addr + 0xc, rw, 0xBA98 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0xBA98 >;

    using SAMPLE8   = regbits< type,  0,  4 >;  /**< Sample Field 8   */
    using SAMPLE9   = regbits< type,  4,  4 >;  /**< Sample Field 9   */
    using SAMPLE10  = regbits< type,  8,  4 >;  /**< Sample Field 10  */
    using SAMPLE11  = regbits< type, 12,  4 >;  /**< Sample Field 11  */
  };

  /**
   * ADC Channel List Register 4
   */
  struct CLIST4
  : public reg< uint16_t, base_addr + 0xe, rw, 0xFEDC >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0xFEDC >;

    using SAMPLE12  = regbits< type,  0,  4 >;  /**< Sample Field 12  */
    using SAMPLE13  = regbits< type,  4,  4 >;  /**< Sample Field 13  */
    using SAMPLE14  = regbits< type,  8,  4 >;  /**< Sample Field 14  */
    using SAMPLE15  = regbits< type, 12,  4 >;  /**< Sample Field 15  */
  };

  /**
   * ADC Sample Disable Register
   */
  struct SDIS
  : public reg< uint16_t, base_addr + 0x10, rw, 0xF0F0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0xF0F0 >;

    using DS  = regbits< type,  0, 16 >;  /**< Disable Sample Bits  */
  };

  /**
   * ADC Status Register
   */
  struct STAT
  : public reg< uint16_t, base_addr + 0x12, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0 >;

    using UNDEFINED  = regbits< type,  0,  8 >;  /**< This read-only bitfield is undefined and will always contain random data.  */
    using HLMTI      = regbits< type,  8,  1 >;  /**< High Limit Interrupt                                                       */
    using LLMTI      = regbits< type,  9,  1 >;  /**< Low Limit Interrupt                                                        */
    using ZCI        = regbits< type, 10,  1 >;  /**< Zero Crossing Interrupt                                                    */
    using EOSI0      = regbits< type, 11,  1 >;  /**< End of Scan Interrupt                                                      */
    using EOSI1      = regbits< type, 12,  1 >;  /**< End of Scan Interrupt                                                      */
    using CIP1       = regbits< type, 14,  1 >;  /**< Conversion in Progress                                                     */
    using CIP0       = regbits< type, 15,  1 >;  /**< Conversion in Progress                                                     */
  };

  /**
   * ADC Ready Register
   */
  struct RDY
  : public reg< uint16_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14, ro, 0 >;

    // fixme: Field name equals parent register name: RDY
    using RDY_ = regbits< type,  0, 16 >;  /**< Ready Sample  */
  };

  /**
   * ADC Low Limit Status Register
   */
  struct LOLIMSTAT
  : public reg< uint16_t, base_addr + 0x16, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0 >;

    using LLS  = regbits< type,  0, 16 >;  /**< Low Limit Status Bits  */
  };

  /**
   * ADC High Limit Status Register
   */
  struct HILIMSTAT
  : public reg< uint16_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0 >;

    using HLS  = regbits< type,  0, 16 >;  /**< High Limit Status Bits  */
  };

  /**
   * ADC Zero Crossing Status Register
   */
  struct ZXSTAT
  : public reg< uint16_t, base_addr + 0x1a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a, rw, 0 >;

    using ZCS  = regbits< type,  0, 16 >;  /**< Zero Crossing Status  */
  };

  /**
   * ADC Result Registers with sign extension
   */
  struct RSLT%s
  : public reg< uint16_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0 >;

    using RSLT  = regbits< type,  3, 12 >;  /**< Digital Result of the Conversion  */
    using SEXT  = regbits< type, 15,  1 >;  /**< Sign Extend                       */
  };

  /**
   * ADC Low Limit Registers
   */
  struct LOLIM%s
  : public reg< uint16_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3c, rw, 0 >;

    using LLMT  = regbits< type,  3, 12 >;  /**< Low Limit Bits  */
  };

  /**
   * ADC High Limit Registers
   */
  struct HILIM%s
  : public reg< uint16_t, base_addr + 0x5c, rw, 0x7FF8 >
  {
    using type = reg< uint16_t, base_addr + 0x5c, rw, 0x7FF8 >;

    using HLMT  = regbits< type,  3, 12 >;  /**< High Limit Bits  */
  };

  /**
   * ADC Offset Registers
   */
  struct OFFST%s
  : public reg< uint16_t, base_addr + 0x7c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7c, rw, 0 >;

    using OFFSET  = regbits< type,  3, 12 >;  /**< ADC Offset Bits  */
  };

  /**
   * ADC Power Control Register
   */
  struct PWR
  : public reg< uint16_t, base_addr + 0x9c, rw, 0x1DA7 >
  {
    using type = reg< uint16_t, base_addr + 0x9c, rw, 0x1DA7 >;

    using PD0      = regbits< type,  0,  1 >;  /**< Manual Power Down for Converter A  */
    using PD1      = regbits< type,  1,  1 >;  /**< Manual Power Down for Converter B  */
    using APD      = regbits< type,  3,  1 >;  /**< Auto Powerdown                     */
    using PUDELAY  = regbits< type,  4,  6 >;  /**< Power Up Delay                     */
    using PSTS0    = regbits< type, 10,  1 >;  /**< ADC Converter A Power Status       */
    using PSTS1    = regbits< type, 11,  1 >;  /**< ADC Converter B Power Status       */
    using ASB      = regbits< type, 15,  1 >;  /**< Auto Standby                       */
  };

  /**
   * ADC Calibration Register
   */
  struct CAL
  : public reg< uint16_t, base_addr + 0x9e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x9e, rw, 0 >;

    using SEL_VREFLO_A  = regbits< type, 12,  1 >;  /**< Select V REFLO Source  */
    using SEL_VREFH_A   = regbits< type, 13,  1 >;  /**< Select V REFH Source   */
    using SEL_VREFLO_B  = regbits< type, 14,  1 >;  /**< Select V REFLO Source  */
    using SEL_VREFH_B   = regbits< type, 15,  1 >;  /**< Select V REFH Source   */
  };

  /**
   * Gain Control 1 Register
   */
  struct GC1
  : public reg< uint16_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa0, rw, 0 >;

    using GAIN0  = regbits< type,  0,  2 >;  /**< Gain Control Bit 0  */
    using GAIN1  = regbits< type,  2,  2 >;  /**< Gain Control Bit 1  */
    using GAIN2  = regbits< type,  4,  2 >;  /**< Gain Control Bit 2  */
    using GAIN3  = regbits< type,  6,  2 >;  /**< Gain Control Bit 3  */
    using GAIN4  = regbits< type,  8,  2 >;  /**< Gain Control Bit 4  */
    using GAIN5  = regbits< type, 10,  2 >;  /**< Gain Control Bit 5  */
    using GAIN6  = regbits< type, 12,  2 >;  /**< Gain Control Bit 6  */
    using GAIN7  = regbits< type, 14,  2 >;  /**< Gain Control Bit 7  */
  };

  /**
   * Gain Control 2 Register
   */
  struct GC2
  : public reg< uint16_t, base_addr + 0xa2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa2, rw, 0 >;

    using GAIN8   = regbits< type,  0,  2 >;  /**< Gain Control Bit 8   */
    using GAIN9   = regbits< type,  2,  2 >;  /**< Gain Control Bit 9   */
    using GAIN10  = regbits< type,  4,  2 >;  /**< Gain Control Bit 10  */
    using GAIN11  = regbits< type,  6,  2 >;  /**< Gain Control Bit 11  */
    using GAIN12  = regbits< type,  8,  2 >;  /**< Gain Control Bit 12  */
    using GAIN13  = regbits< type, 10,  2 >;  /**< Gain Control Bit 13  */
    using GAIN14  = regbits< type, 12,  2 >;  /**< Gain Control Bit 14  */
    using GAIN15  = regbits< type, 14,  2 >;  /**< Gain Control Bit 15  */
  };

  /**
   * ADC Scan Control Register
   */
  struct SCTRL
  : public reg< uint16_t, base_addr + 0xa4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa4, rw, 0 >;

    using SC  = regbits< type,  0, 16 >;  /**< Scan Control Bits  */
  };

  /**
   * ADC Power Control Register
   */
  struct PWR2
  : public reg< uint16_t, base_addr + 0xa6, rw, 0x400 >
  {
    using type = reg< uint16_t, base_addr + 0xa6, rw, 0x400 >;

    using SPEEDA  = regbits< type,  0,  2 >;  /**< ADCA Speed Control Bits  */
    using SPEEDB  = regbits< type,  2,  2 >;  /**< ADCB Speed Control Bits  */
    using DIV1    = regbits< type,  8,  6 >;  /**< Clock Divisor Select     */
  };

  /**
   * ADC Control Register 3
   */
  struct CTRL3
  : public reg< uint16_t, base_addr + 0xa8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa8, rw, 0 >;

    using SCNT0   = regbits< type,  0,  3 >;  /**< Sample Window Count 0  */
    using SCNT1   = regbits< type,  3,  3 >;  /**< Sample Window Count 1  */
    using DMASRC  = regbits< type,  6,  1 >;  /**< DMA Trigger Source     */
  };

  /**
   * ADC Scan Interrupt Enable Register
   */
  struct SCHLTEN
  : public reg< uint16_t, base_addr + 0xaa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xaa, rw, 0 >;

    // fixme: Field name equals parent register name: SCHLTEN
    using SCHLTEN_ = regbits< type,  0, 16 >;  /**< Scan Interrupt Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC_HPP_INCLUDED
