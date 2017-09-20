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
//  Import from CMSIS-SVD: "Freescale/MKV58F22.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV58F22
//  series: Kinetis_V
//  version: 1.6
//  description: MKV58F22 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HSADC0_HPP_INCLUDED
#define ARCH_REG_HSADC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * SAR Analog to digital converter
 */
struct HSADC0
{
  static constexpr reg_addr_t base_addr = 0x4005c000;

  /**
   * HSADC Control Register 1
   */
  struct CTRL1
  : public reg< uint16_t, base_addr + 0, rw, 0x5005 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0x5005 >;

    using SMODE     = regbits< type,  0,  3 >;  /**< HSADC Scan Mode Control             */
    using CHNCFG_L  = regbits< type,  4,  4 >;  /**< CHCNF (Channel Configure Low) bits  */
    using HLMTIE    = regbits< type,  8,  1 >;  /**< High Limit Interrupt Enable         */
    using LLMTIE    = regbits< type,  9,  1 >;  /**< Low Limit Interrupt Enable          */
    using ZCIE      = regbits< type, 10,  1 >;  /**< Zero Crossing Interrupt Enable      */
    using EOSIEA    = regbits< type, 11,  1 >;  /**< End Of Scan Interrupt Enable        */
    using SYNCA     = regbits< type, 12,  1 >;  /**< SYNCA Enable                        */
    using STARTA    = regbits< type, 13,  1 >;  /**< STARTA Conversion                   */
    using STOPA     = regbits< type, 14,  1 >;  /**< Stop                                */
    using DMAENA    = regbits< type, 15,  1 >;  /**< DMA enable                          */
  };

  /**
   * HSADC Control Register 2
   */
  struct CTRL2
  : public reg< uint16_t, base_addr + 0x2, rw, 0x5044 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0x5044 >;

    using DIVA      = regbits< type,  0,  6 >;  /**< Clock Divisor Select                    */
    using SIMULT    = regbits< type,  6,  1 >;  /**< Simultaneous mode                       */
    using CHNCFG_H  = regbits< type,  7,  4 >;  /**< CHNCFG_H (Channel Configure High) bits  */
    using EOSIEB    = regbits< type, 11,  1 >;  /**< End Of Scan Interrupt Enable            */
    using SYNCB     = regbits< type, 12,  1 >;  /**< SYNCB Enable                            */
    using STARTB    = regbits< type, 13,  1 >;  /**< STARTB Conversion                       */
    using STOPB     = regbits< type, 14,  1 >;  /**< Stop                                    */
    using DMAENB    = regbits< type, 15,  1 >;  /**< DMA enable                              */
  };

  /**
   * HSADC Zero Crossing Control 1 Register
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
   * HSADC Zero Crossing Control 2 Register
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
   * HSADC Channel List Register 1
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
   * HSADC Channel List Register 2
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
   * HSADC Channel List Register 3
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
   * HSADC Channel List Register 4
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
   * HSADC Sample Disable Register
   */
  struct SDIS
  : public reg< uint16_t, base_addr + 0x10, rw, 0xF0F0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0xF0F0 >;

    using DS  = regbits< type,  0, 16 >;  /**< Disable Sample Bits  */
  };

  /**
   * HSADC Status Register
   */
  struct STAT
  : public reg< uint16_t, base_addr + 0x12, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0 >;

    using CALONA   = regbits< type,  0,  1 >;  /**< HSADCA Calibration execution status   */
    using CALONB   = regbits< type,  1,  1 >;  /**< HSADCB Calibration execution status   */
    using DUMMYA   = regbits< type,  2,  1 >;  /**< Dummy conversion running on HSADCA    */
    using DUMMYB   = regbits< type,  3,  1 >;  /**< Dummy conversion running on HSADCB    */
    using EOCALIA  = regbits< type,  4,  1 >;  /**< End of Calibration on ADCA Interrupt  */
    using EOCALIB  = regbits< type,  5,  1 >;  /**< End of Calibration on ADCB Interrupt  */
    using HLMTI    = regbits< type,  8,  1 >;  /**< High Limit Interrupt                  */
    using LLMTI    = regbits< type,  9,  1 >;  /**< Low Limit Interrupt                   */
    using ZCI      = regbits< type, 10,  1 >;  /**< Zero Crossing Interrupt               */
    using EOSIA    = regbits< type, 11,  1 >;  /**< End of Scan Interrupt                 */
    using EOSIB    = regbits< type, 12,  1 >;  /**< End of Scan Interrupt                 */
    using CIPB     = regbits< type, 14,  1 >;  /**< Conversion in Progress                */
    using CIPA     = regbits< type, 15,  1 >;  /**< Conversion in Progress                */
  };

  /**
   * HSADC Ready Register
   */
  struct RDY
  : public reg< uint16_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14, ro, 0 >;

    // fixme: Field name equals parent register name: RDY
    using RDY_ = regbits< type,  0, 16 >;  /**< Ready Sample  */
  };

  /**
   * HSADC Low Limit Status Register
   */
  struct LOLIMSTAT
  : public reg< uint16_t, base_addr + 0x16, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0 >;

    using LLS  = regbits< type,  0, 16 >;  /**< Low Limit Status Bits  */
  };

  /**
   * HSADC High Limit Status Register
   */
  struct HILIMSTAT
  : public reg< uint16_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0 >;

    using HLS  = regbits< type,  0, 16 >;  /**< High Limit Status Bits  */
  };

  /**
   * HSADC Zero Crossing Status Register
   */
  struct ZXSTAT
  : public reg< uint16_t, base_addr + 0x1a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a, rw, 0 >;

    using ZCS  = regbits< type,  0, 16 >;  /**< Zero Crossing Status  */
  };

  /**
   * HSADC Result Registers with sign extension
   */
  struct RSLT%s
  : public reg< uint16_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0 >;

    using RSLT  = regbits< type,  3, 12 >;  /**< Digital Result of the Conversion  */
    using SEXT  = regbits< type, 15,  1 >;  /**< Sign Extend                       */
  };

  /**
   * HSADC Low Limit Registers
   */
  struct LOLIM%s
  : public reg< uint16_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3c, rw, 0 >;

    using LLMT  = regbits< type,  3, 12 >;  /**< Low Limit Bits  */
  };

  /**
   * HSADC High Limit Registers
   */
  struct HILIM%s
  : public reg< uint16_t, base_addr + 0x5c, rw, 0x7FF8 >
  {
    using type = reg< uint16_t, base_addr + 0x5c, rw, 0x7FF8 >;

    using HLMT  = regbits< type,  3, 12 >;  /**< High Limit Bits  */
  };

  /**
   * HSADC Offset Register
   */
  struct OFFST%s
  : public reg< uint16_t, base_addr + 0x7c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7c, rw, 0 >;

    using OFFSET  = regbits< type,  3, 12 >;  /**< HSADC Offset Bits  */
  };

  /**
   * HSADC Power Control Register
   */
  struct PWR
  : public reg< uint16_t, base_addr + 0x9c, rw, 0x1D27 >
  {
    using type = reg< uint16_t, base_addr + 0x9c, rw, 0x1D27 >;

    using PDA      = regbits< type,  0,  1 >;  /**< Manual Power Down for Converter A  */
    using PDB      = regbits< type,  1,  1 >;  /**< Manual Power Down for Converter B  */
    using APD      = regbits< type,  3,  1 >;  /**< Auto Powerdown                     */
    using PUDELAY  = regbits< type,  4,  6 >;  /**< Power Up Delay                     */
    using PSTSA    = regbits< type, 10,  1 >;  /**< ADC Converter A Power Status       */
    using PSTSB    = regbits< type, 11,  1 >;  /**< ADC Converter B Power Status       */
    using ASB      = regbits< type, 15,  1 >;  /**< Auto Standby                       */
  };

  /**
   * HSADC Scan Control Register
   */
  struct SCTRL
  : public reg< uint16_t, base_addr + 0xa4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa4, rw, 0 >;

    using SC  = regbits< type,  0, 16 >;  /**< Scan Control Bits  */
  };

  /**
   * HSADC Power Control Register 2
   */
  struct PWR2
  : public reg< uint16_t, base_addr + 0xa6, rw, 0x400 >
  {
    using type = reg< uint16_t, base_addr + 0xa6, rw, 0x400 >;

    using DIVB  = regbits< type,  8,  6 >;  /**< Clock Divisor Select  */
  };

  /**
   * HSADC Control Register 3
   */
  struct CTRL3
  : public reg< uint16_t, base_addr + 0xa8, rw, 0x300 >
  {
    using type = reg< uint16_t, base_addr + 0xa8, rw, 0x300 >;

    using DMASRC  = regbits< type,  6,  1 >;  /**< DMA Trigger Source            */
    using ADCRES  = regbits< type,  8,  2 >;  /**< ADCA/B Conversion Resolution  */
  };

  /**
   * HSADC Scan Interrupt Enable Register
   */
  struct SCINTEN
  : public reg< uint16_t, base_addr + 0xaa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xaa, rw, 0 >;

    // fixme: Field name equals parent register name: SCINTEN
    using SCINTEN_ = regbits< type,  0, 16 >;  /**< Scan Interrupt Enable  */
  };

  /**
   * HSADC Sampling Time Configuration Register
   */
  struct SAMPTIM
  : public reg< uint16_t, base_addr + 0xac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xac, rw, 0 >;

    using SAMPT_A  = regbits< type,  0,  8 >;  /**< Sampling Time for ADCA.  */
    using SAMPT_B  = regbits< type,  8,  8 >;  /**< Sampling Time for ADCB.  */
  };

  /**
   * HSADCs Calibration Configuration
   */
  struct CALIB
  : public reg< uint16_t, base_addr + 0xae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xae, rw, 0 >;

    using REQSINGA  = regbits< type,  0,  1 >;  /**< ADCA Calibration request for single ended mode   */
    using REQDIFA   = regbits< type,  1,  1 >;  /**< ADCA Calibration request for differential mode   */
    using BYPA      = regbits< type,  2,  1 >;  /**< ADCA calibration bypass                          */
    using CAL_REQA  = regbits< type,  3,  1 >;  /**< Calibration Request for ADCA                     */
    using REQSINGB  = regbits< type,  4,  1 >;  /**< ADCB Calibration request for single ended mode   */
    using REQDIFB   = regbits< type,  5,  1 >;  /**< ADCB Calibration request for differential mode   */
    using BYPB      = regbits< type,  6,  1 >;  /**< ADCB calibration bypass                          */
    using CAL_REQB  = regbits< type,  7,  1 >;  /**< Calibration Request for ADCB                     */
    using EOCALIEA  = regbits< type,  8,  1 >;  /**< Interrupt Enable for End of Calibration on ADCA  */
    using EOCALIEB  = regbits< type,  9,  1 >;  /**< Interrupt Enable for End of Calibration on ADCB  */
  };

  /**
   * Calibration Values for ADCA Register
   */
  struct CALVAL_A
  : public reg< uint16_t, base_addr + 0xb0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xb0, rw, 0 >;

    using CALVSING  = regbits< type,  0,  7 >;  /**< Single-ended mode calibration value for ADCA  */
    using CALVDIF   = regbits< type,  8,  7 >;  /**< Differential mode calibration value for ADCA  */
  };

  /**
   * Calibration Values for ADCB Register
   */
  struct CALVAL_B
  : public reg< uint16_t, base_addr + 0xb2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xb2, rw, 0 >;

    using CALVSING  = regbits< type,  0,  7 >;  /**< Single-ended mode calibration value  */
    using CALVDIF   = regbits< type,  8,  7 >;  /**< Differential mode calibration value  */
  };

  /**
   * MUX6_7 Selection Controls Register
   */
  struct MUX67_SEL
  : public reg< uint16_t, base_addr + 0xba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xba, rw, 0 >;

    using CH6_SELA  = regbits< type,  0,  3 >;  /**< ADCA Channel 6 additional MUX Selector  */
    using CH7_SELA  = regbits< type,  4,  3 >;  /**< ADCA Channel 7 additional MUX Selector  */
    using CH6_SELB  = regbits< type,  8,  3 >;  /**< ADCB Channel 6 additional MUX Selector  */
    using CH7_SELB  = regbits< type, 12,  3 >;  /**< ADCB Channel 7 additional MUX Selector  */
  };
};
} // namespace mptl

#endif // ARCH_REG_HSADC0_HPP_INCLUDED
