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
//  Import from CMSIS-SVD: "Freescale/MKV46F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV46F15
//  series: Kinetis_V
//  version: 1.6
//  description: MKV46F15 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWMA_HPP_INCLUDED
#define ARCH_REG_PWMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pulse Width Modulator with nano edge placement
 */
struct PWMA
{
  static constexpr reg_addr_t base_addr = 0x40033000;

  /**
   * Counter Register
   */
  struct SM%sCNT
  : public reg< uint16_t, base_addr + 0, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0, ro, 0 >;

    using CNT  = regbits< type,  0, 16 >;  /**< Counter Register Bits  */
  };

  /**
   * Initial Count Register
   */
  struct SM%sINIT
  : public reg< uint16_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 >;

    using INIT  = regbits< type,  0, 16 >;  /**< Initial Count Register Bits  */
  };

  /**
   * Control 2 Register
   */
  struct SM%sCTRL2
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using CLK_SEL     = regbits< type,  0,  2 >;  /**< Clock Source Select                                                                       */
    using RELOAD_SEL  = regbits< type,  2,  1 >;  /**< Reload Source Select                                                                      */
    using FORCE_SEL   = regbits< type,  3,  3 >;  /**< This read/write bit determines the source of the FORCE OUTPUT signal for this submodule.  */
    using FORCE       = regbits< type,  6,  1 >;  /**< Force Initialization                                                                      */
    using FRCEN       = regbits< type,  7,  1 >;  /**< Force Initialization Enable                                                               */
    using INIT_SEL    = regbits< type,  8,  2 >;  /**< Initialization Control Select                                                             */
    using PWMX_INIT   = regbits< type, 10,  1 >;  /**< PWM_X Initial Value                                                                       */
    using PWM45_INIT  = regbits< type, 11,  1 >;  /**< PWM45 Initial Value                                                                       */
    using PWM23_INIT  = regbits< type, 12,  1 >;  /**< PWM23 Initial Value                                                                       */
    using INDEP       = regbits< type, 13,  1 >;  /**< Independent or Complementary Pair Operation                                               */
    using WAITEN      = regbits< type, 14,  1 >;  /**< WAIT Enable                                                                               */
    using DBGEN       = regbits< type, 15,  1 >;  /**< Debug Enable                                                                              */
  };

  /**
   * Control Register
   */
  struct SM%sCTRL
  : public reg< uint16_t, base_addr + 0x6, rw, 0x400 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0x400 >;

    using DBLEN  = regbits< type,  0,  1 >;  /**< Double Switching Enable       */
    using DBLX   = regbits< type,  1,  1 >;  /**< PWMX Double Switching Enable  */
    using LDMOD  = regbits< type,  2,  1 >;  /**< Load Mode Select              */
    using PRSC   = regbits< type,  4,  3 >;  /**< Prescaler                     */
    using DT     = regbits< type,  8,  2 >;  /**< Deadtime                      */
    using FULL   = regbits< type, 10,  1 >;  /**< Full Cycle Reload             */
    using HALF   = regbits< type, 11,  1 >;  /**< Half Cycle Reload             */
    using LDFQ   = regbits< type, 12,  4 >;  /**< no description available      */
  };

  /**
   * Value Register 0
   */
  struct SM%sVAL0
  : public reg< uint16_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0 >;

    using VAL0  = regbits< type,  0, 16 >;  /**< Value Register 0  */
  };

  /**
   * Fractional Value Register 1
   */
  struct SM%sFRACVAL1
  : public reg< uint16_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0 >;

    using FRACVAL1  = regbits< type, 11,  5 >;  /**< Fractional Value 1 Register  */
  };

  /**
   * Value Register 1
   */
  struct SM%sVAL1
  : public reg< uint16_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0 >;

    using VAL1  = regbits< type,  0, 16 >;  /**< Value Register 1  */
  };

  /**
   * Fractional Value Register 2
   */
  struct SM%sFRACVAL2
  : public reg< uint16_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0 >;

    using FRACVAL2  = regbits< type, 11,  5 >;  /**< Fractional Value 2  */
  };

  /**
   * Value Register 2
   */
  struct SM%sVAL2
  : public reg< uint16_t, base_addr + 0x12, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0 >;

    using VAL2  = regbits< type,  0, 16 >;  /**< Value Register 2  */
  };

  /**
   * Fractional Value Register 3
   */
  struct SM%sFRACVAL3
  : public reg< uint16_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0 >;

    using FRACVAL3  = regbits< type, 11,  5 >;  /**< Fractional Value 3  */
  };

  /**
   * Value Register 3
   */
  struct SM%sVAL3
  : public reg< uint16_t, base_addr + 0x16, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0 >;

    using VAL3  = regbits< type,  0, 16 >;  /**< Value Register 3  */
  };

  /**
   * Fractional Value Register 4
   */
  struct SM%sFRACVAL4
  : public reg< uint16_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0 >;

    using FRACVAL4  = regbits< type, 11,  5 >;  /**< Fractional Value 4  */
  };

  /**
   * Value Register 4
   */
  struct SM%sVAL4
  : public reg< uint16_t, base_addr + 0x1a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a, rw, 0 >;

    using VAL4  = regbits< type,  0, 16 >;  /**< Value Register 4  */
  };

  /**
   * Fractional Value Register 5
   */
  struct SM%sFRACVAL5
  : public reg< uint16_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0 >;

    using FRACVAL5  = regbits< type, 11,  5 >;  /**< Fractional Value 5  */
  };

  /**
   * Value Register 5
   */
  struct SM%sVAL5
  : public reg< uint16_t, base_addr + 0x1e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e, rw, 0 >;

    using VAL5  = regbits< type,  0, 16 >;  /**< Value Register 5  */
  };

  /**
   * Fractional Control Register
   */
  struct SM%sFRCTRL
  : public reg< uint16_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0 >;

    using FRAC1_EN   = regbits< type,  1,  1 >;  /**< Fractional Cycle PWM Period Enable           */
    using FRAC23_EN  = regbits< type,  2,  1 >;  /**< Fractional Cycle Placement Enable for PWM_A  */
    using FRAC45_EN  = regbits< type,  4,  1 >;  /**< Fractional Cycle Placement Enable for PWM_B  */
    using FRAC_PU    = regbits< type,  8,  1 >;  /**< Fractional Delay Circuit Power Up            */
    using TEST       = regbits< type, 15,  1 >;  /**< Test Status Bit                              */
  };

  /**
   * Output Control Register
   */
  struct SM%sOCTRL
  : public reg< uint16_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x22, rw, 0 >;

    using PWMXFS   = regbits< type,  0,  2 >;  /**< PWM_X Fault State      */
    using PWMBFS   = regbits< type,  2,  2 >;  /**< PWM_B Fault State      */
    using PWMAFS   = regbits< type,  4,  2 >;  /**< PWM_A Fault State      */
    using POLX     = regbits< type,  8,  1 >;  /**< PWM_X Output Polarity  */
    using POLB     = regbits< type,  9,  1 >;  /**< PWM_B Output Polarity  */
    using POLA     = regbits< type, 10,  1 >;  /**< PWM_A Output Polarity  */
    using PWMX_IN  = regbits< type, 13,  1 >;  /**< PWM_X Input            */
    using PWMB_IN  = regbits< type, 14,  1 >;  /**< PWM_B Input            */
    using PWMA_IN  = regbits< type, 15,  1 >;  /**< PWM_A Input            */
  };

  /**
   * Status Register
   */
  struct SM%sSTS
  : public reg< uint16_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0 >;

    using CMPF  = regbits< type,  0,  6 >;  /**< Compare Flags           */
    using CFX0  = regbits< type,  6,  1 >;  /**< Capture Flag X0         */
    using CFX1  = regbits< type,  7,  1 >;  /**< Capture Flag X1         */
    using CFB0  = regbits< type,  8,  1 >;  /**< Capture Flag B0         */
    using CFB1  = regbits< type,  9,  1 >;  /**< Capture Flag B1         */
    using CFA0  = regbits< type, 10,  1 >;  /**< Capture Flag A0         */
    using CFA1  = regbits< type, 11,  1 >;  /**< Capture Flag A1         */
    using RF    = regbits< type, 12,  1 >;  /**< Reload Flag             */
    using REF   = regbits< type, 13,  1 >;  /**< Reload Error Flag       */
    using RUF   = regbits< type, 14,  1 >;  /**< Registers Updated Flag  */
  };

  /**
   * Interrupt Enable Register
   */
  struct SM%sINTEN
  : public reg< uint16_t, base_addr + 0x26, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x26, rw, 0 >;

    using CMPIE  = regbits< type,  0,  6 >;  /**< Compare Interrupt Enables      */
    using CX0IE  = regbits< type,  6,  1 >;  /**< Capture X 0 Interrupt Enable   */
    using CX1IE  = regbits< type,  7,  1 >;  /**< Capture X 1 Interrupt Enable   */
    using CB0IE  = regbits< type,  8,  1 >;  /**< Capture B 0 Interrupt Enable   */
    using CB1IE  = regbits< type,  9,  1 >;  /**< Capture B 1 Interrupt Enable   */
    using CA0IE  = regbits< type, 10,  1 >;  /**< Capture A 0 Interrupt Enable   */
    using CA1IE  = regbits< type, 11,  1 >;  /**< Capture A 1 Interrupt Enable   */
    using RIE    = regbits< type, 12,  1 >;  /**< Reload Interrupt Enable        */
    using REIE   = regbits< type, 13,  1 >;  /**< Reload Error Interrupt Enable  */
  };

  /**
   * DMA Enable Register
   */
  struct SM%sDMAEN
  : public reg< uint16_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x28, rw, 0 >;

    using CX0DE   = regbits< type,  0,  1 >;  /**< Capture X0 FIFO DMA Enable        */
    using CX1DE   = regbits< type,  1,  1 >;  /**< Capture X1 FIFO DMA Enable        */
    using CB0DE   = regbits< type,  2,  1 >;  /**< Capture B0 FIFO DMA Enable        */
    using CB1DE   = regbits< type,  3,  1 >;  /**< Capture B1 FIFO DMA Enable        */
    using CA0DE   = regbits< type,  4,  1 >;  /**< Capture A0 FIFO DMA Enable        */
    using CA1DE   = regbits< type,  5,  1 >;  /**< Capture A1 FIFO DMA Enable        */
    using CAPTDE  = regbits< type,  6,  2 >;  /**< Capture DMA Enable Source Select  */
    using FAND    = regbits< type,  8,  1 >;  /**< FIFO Watermark AND Control        */
    using VALDE   = regbits< type,  9,  1 >;  /**< Value Registers DMA Enable        */
  };

  /**
   * Output Trigger Control Register
   */
  struct SM%sTCTRL
  : public reg< uint16_t, base_addr + 0x2a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2a, rw, 0 >;

    using OUT_TRIG_EN  = regbits< type,  0,  6 >;  /**< Output Trigger Enables          */
    using PWBOT1       = regbits< type, 14,  1 >;  /**< Output Trigger 1 Source Select  */
    using PWAOT0       = regbits< type, 15,  1 >;  /**< Output Trigger 0 Source Select  */
  };

  /**
   * Fault Disable Mapping Register 0
   */
  struct SM%sDISMAP0
  : public reg< uint16_t, base_addr + 0x2c, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x2c, rw, 0xFFFF >;

    using DIS0A  = regbits< type,  0,  4 >;  /**< PWM_A Fault Disable Mask 0  */
    using DIS0B  = regbits< type,  4,  4 >;  /**< PWM_B Fault Disable Mask 0  */
    using DIS0X  = regbits< type,  8,  4 >;  /**< PWM_X Fault Disable Mask 0  */
  };

  /**
   * Deadtime Count Register 0
   */
  struct SM%sDTCNT0
  : public reg< uint16_t, base_addr + 0x30, rw, 0x7FF >
  {
    using type = reg< uint16_t, base_addr + 0x30, rw, 0x7FF >;

    using DTCNT0  = regbits< type,  0, 11 >;  /**< Deadtime Count Register 0  */
  };

  /**
   * Deadtime Count Register 1
   */
  struct SM%sDTCNT1
  : public reg< uint16_t, base_addr + 0x32, rw, 0x7FF >
  {
    using type = reg< uint16_t, base_addr + 0x32, rw, 0x7FF >;

    using DTCNT1  = regbits< type,  0, 11 >;  /**< Deadtime Count Register 1  */
  };

  /**
   * Capture Control A Register
   */
  struct SM%sCAPTCTRLA
  : public reg< uint16_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x34, rw, 0 >;

    using ARMA        = regbits< type,  0,  1 >;  /**< Arm A                       */
    using ONESHOTA    = regbits< type,  1,  1 >;  /**< One Shot Mode A             */
    using EDGA0       = regbits< type,  2,  2 >;  /**< Edge A 0                    */
    using EDGA1       = regbits< type,  4,  2 >;  /**< Edge A 1                    */
    using INP_SELA    = regbits< type,  6,  1 >;  /**< Input Select A              */
    using EDGCNTA_EN  = regbits< type,  7,  1 >;  /**< Edge Counter A Enable       */
    using CFAWM       = regbits< type,  8,  2 >;  /**< Capture A FIFOs Water Mark  */
    using CA0CNT      = regbits< type, 10,  3 >;  /**< Capture A0 FIFO Word Count  */
    using CA1CNT      = regbits< type, 13,  3 >;  /**< Capture A1 FIFO Word Count  */
  };

  /**
   * Capture Compare A Register
   */
  struct SM%sCAPTCOMPA
  : public reg< uint16_t, base_addr + 0x36, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x36, rw, 0 >;

    using EDGCMPA  = regbits< type,  0,  8 >;  /**< Edge Compare A  */
    using EDGCNTA  = regbits< type,  8,  8 >;  /**< Edge Counter A  */
  };

  /**
   * Capture Control B Register
   */
  struct SM%sCAPTCTRLB
  : public reg< uint16_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x38, rw, 0 >;

    using ARMB        = regbits< type,  0,  1 >;  /**< Arm B                       */
    using ONESHOTB    = regbits< type,  1,  1 >;  /**< One Shot Mode B             */
    using EDGB0       = regbits< type,  2,  2 >;  /**< Edge B 0                    */
    using EDGB1       = regbits< type,  4,  2 >;  /**< Edge B 1                    */
    using INP_SELB    = regbits< type,  6,  1 >;  /**< Input Select B              */
    using EDGCNTB_EN  = regbits< type,  7,  1 >;  /**< Edge Counter B Enable       */
    using CFBWM       = regbits< type,  8,  2 >;  /**< Capture B FIFOs Water Mark  */
    using CB0CNT      = regbits< type, 10,  3 >;  /**< Capture B0 FIFO Word Count  */
    using CB1CNT      = regbits< type, 13,  3 >;  /**< Capture B1 FIFO Word Count  */
  };

  /**
   * Capture Compare B Register
   */
  struct SM%sCAPTCOMPB
  : public reg< uint16_t, base_addr + 0x3a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3a, rw, 0 >;

    using EDGCMPB  = regbits< type,  0,  8 >;  /**< Edge Compare B  */
    using EDGCNTB  = regbits< type,  8,  8 >;  /**< Edge Counter B  */
  };

  /**
   * Capture Control X Register
   */
  struct SM%sCAPTCTRLX
  : public reg< uint16_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3c, rw, 0 >;

    using ARMX        = regbits< type,  0,  1 >;  /**< Arm X                       */
    using ONESHOTX    = regbits< type,  1,  1 >;  /**< One Shot Mode Aux           */
    using EDGX0       = regbits< type,  2,  2 >;  /**< Edge X 0                    */
    using EDGX1       = regbits< type,  4,  2 >;  /**< Edge X 1                    */
    using INP_SELX    = regbits< type,  6,  1 >;  /**< Input Select X              */
    using EDGCNTX_EN  = regbits< type,  7,  1 >;  /**< Edge Counter X Enable       */
    using CFXWM       = regbits< type,  8,  2 >;  /**< Capture X FIFOs Water Mark  */
    using CX0CNT      = regbits< type, 10,  3 >;  /**< Capture X0 FIFO Word Count  */
    using CX1CNT      = regbits< type, 13,  3 >;  /**< Capture X1 FIFO Word Count  */
  };

  /**
   * Capture Compare X Register
   */
  struct SM%sCAPTCOMPX
  : public reg< uint16_t, base_addr + 0x3e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3e, rw, 0 >;

    using EDGCMPX  = regbits< type,  0,  8 >;  /**< Edge Compare X  */
    using EDGCNTX  = regbits< type,  8,  8 >;  /**< Edge Counter X  */
  };

  /**
   * Capture Value 0 Register
   */
  struct SM%sCVAL0
  : public reg< uint16_t, base_addr + 0x40, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x40, ro, 0 >;

    using CAPTVAL0  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Capture Value 0 Cycle Register
   */
  struct SM%sCVAL0CYC
  : public reg< uint16_t, base_addr + 0x42, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x42, ro, 0 >;

    using CVAL0CYC  = regbits< type,  0,  4 >;  /**< no description available  */
  };

  /**
   * Capture Value 1 Register
   */
  struct SM%sCVAL1
  : public reg< uint16_t, base_addr + 0x44, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x44, ro, 0 >;

    using CAPTVAL1  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Capture Value 1 Cycle Register
   */
  struct SM%sCVAL1CYC
  : public reg< uint16_t, base_addr + 0x46, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x46, ro, 0 >;

    using CVAL1CYC  = regbits< type,  0,  4 >;  /**< no description available  */
  };

  /**
   * Capture Value 2 Register
   */
  struct SM%sCVAL2
  : public reg< uint16_t, base_addr + 0x48, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x48, ro, 0 >;

    using CAPTVAL2  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Capture Value 2 Cycle Register
   */
  struct SM%sCVAL2CYC
  : public reg< uint16_t, base_addr + 0x4a, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4a, ro, 0 >;

    using CVAL2CYC  = regbits< type,  0,  4 >;  /**< no description available  */
  };

  /**
   * Capture Value 3 Register
   */
  struct SM%sCVAL3
  : public reg< uint16_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4c, ro, 0 >;

    using CAPTVAL3  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Capture Value 3 Cycle Register
   */
  struct SM%sCVAL3CYC
  : public reg< uint16_t, base_addr + 0x4e, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4e, ro, 0 >;

    using CVAL3CYC  = regbits< type,  0,  4 >;  /**< no description available  */
  };

  /**
   * Capture Value 4 Register
   */
  struct SM%sCVAL4
  : public reg< uint16_t, base_addr + 0x50, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x50, ro, 0 >;

    using CAPTVAL4  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Capture Value 4 Cycle Register
   */
  struct SM%sCVAL4CYC
  : public reg< uint16_t, base_addr + 0x52, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x52, ro, 0 >;

    using CVAL4CYC  = regbits< type,  0,  4 >;  /**< no description available  */
  };

  /**
   * Capture Value 5 Register
   */
  struct SM%sCVAL5
  : public reg< uint16_t, base_addr + 0x54, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x54, ro, 0 >;

    using CAPTVAL5  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Capture Value 5 Cycle Register
   */
  struct SM%sCVAL5CYC
  : public reg< uint16_t, base_addr + 0x56, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x56, ro, 0 >;

    using CVAL5CYC  = regbits< type,  0,  4 >;  /**< no description available  */
  };

  /**
   * Output Enable Register
   */
  struct OUTEN
  : public reg< uint16_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x180, rw, 0 >;

    using PWMX_EN  = regbits< type,  0,  4 >;  /**< PWM_X Output Enables  */
    using PWMB_EN  = regbits< type,  4,  4 >;  /**< PWM_B Output Enables  */
    using PWMA_EN  = regbits< type,  8,  4 >;  /**< PWM_A Output Enables  */
  };

  /**
   * Mask Register
   */
  struct MASK
  : public reg< uint16_t, base_addr + 0x182, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x182, rw, 0 >;

    using MASKX        = regbits< type,  0,  4 >;  /**< PWM_X Masks                   */
    using MASKB        = regbits< type,  4,  4 >;  /**< PWM_B Masks                   */
    using MASKA        = regbits< type,  8,  4 >;  /**< PWM_A Masks                   */
    using UPDATE_MASK  = regbits< type, 12,  4 >;  /**< Update Mask Bits Immediately  */
  };

  /**
   * Software Controlled Output Register
   */
  struct SWCOUT
  : public reg< uint16_t, base_addr + 0x184, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x184, rw, 0 >;

    using SM0OUT45  = regbits< type,  0,  1 >;  /**< Submodule 0 Software Controlled Output 45  */
    using SM0OUT23  = regbits< type,  1,  1 >;  /**< Submodule 0 Software Controlled Output 23  */
    using SM1OUT45  = regbits< type,  2,  1 >;  /**< Submodule 1 Software Controlled Output 45  */
    using SM1OUT23  = regbits< type,  3,  1 >;  /**< Submodule 1 Software Controlled Output 23  */
    using SM2OUT45  = regbits< type,  4,  1 >;  /**< Submodule 2 Software Controlled Output 45  */
    using SM2OUT23  = regbits< type,  5,  1 >;  /**< Submodule 2 Software Controlled Output 23  */
    using SM3OUT45  = regbits< type,  6,  1 >;  /**< Submodule 3 Software Controlled Output 45  */
    using SM3OUT23  = regbits< type,  7,  1 >;  /**< Submodule 3 Software Controlled Output 23  */
  };

  /**
   * PWM Source Select Register
   */
  struct DTSRCSEL
  : public reg< uint16_t, base_addr + 0x186, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x186, rw, 0 >;

    using SM0SEL45  = regbits< type,  0,  2 >;  /**< Submodule 0 PWM45 Control Select  */
    using SM0SEL23  = regbits< type,  2,  2 >;  /**< Submodule 0 PWM23 Control Select  */
    using SM1SEL45  = regbits< type,  4,  2 >;  /**< Submodule 1 PWM45 Control Select  */
    using SM1SEL23  = regbits< type,  6,  2 >;  /**< Submodule 1 PWM23 Control Select  */
    using SM2SEL45  = regbits< type,  8,  2 >;  /**< Submodule 2 PWM45 Control Select  */
    using SM2SEL23  = regbits< type, 10,  2 >;  /**< Submodule 2 PWM23 Control Select  */
    using SM3SEL45  = regbits< type, 12,  2 >;  /**< Submodule 3 PWM45 Control Select  */
    using SM3SEL23  = regbits< type, 14,  2 >;  /**< Submodule 3 PWM23 Control Select  */
  };

  /**
   * Master Control Register
   */
  struct MCTRL
  : public reg< uint16_t, base_addr + 0x188, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x188, rw, 0 >;

    using LDOK   = regbits< type,  0,  4 >;  /**< Load Okay         */
    using CLDOK  = regbits< type,  4,  4 >;  /**< Clear Load Okay   */
    using RUN    = regbits< type,  8,  4 >;  /**< Run               */
    using IPOL   = regbits< type, 12,  4 >;  /**< Current Polarity  */
  };

  /**
   * Master Control 2 Register
   */
  struct MCTRL2
  : public reg< uint16_t, base_addr + 0x18a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18a, rw, 0 >;

    using MONPLL  = regbits< type,  0,  2 >;  /**< Monitor PLL State  */
  };

  /**
   * Fault Control Register
   */
  struct FCTRL
  : public reg< uint16_t, base_addr + 0x18c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18c, rw, 0 >;

    using FIE    = regbits< type,  0,  4 >;  /**< Fault Interrupt Enables   */
    using FSAFE  = regbits< type,  4,  4 >;  /**< Fault Safety Mode         */
    using FAUTO  = regbits< type,  8,  4 >;  /**< Automatic Fault Clearing  */
    using FLVL   = regbits< type, 12,  4 >;  /**< Fault Level               */
  };

  /**
   * Fault Status Register
   */
  struct FSTS
  : public reg< uint16_t, base_addr + 0x18e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18e, rw, 0 >;

    using FFLAG  = regbits< type,  0,  4 >;  /**< Fault Flags                */
    using FFULL  = regbits< type,  4,  4 >;  /**< Full Cycle                 */
    using FFPIN  = regbits< type,  8,  4 >;  /**< Filtered Fault Pins        */
    using FHALF  = regbits< type, 12,  4 >;  /**< Half Cycle Fault Recovery  */
  };

  /**
   * Fault Filter Register
   */
  struct FFILT
  : public reg< uint16_t, base_addr + 0x190, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x190, rw, 0 >;

    using FILT_PER  = regbits< type,  0,  8 >;  /**< Fault Filter Period          */
    using FILT_CNT  = regbits< type,  8,  3 >;  /**< Fault Filter Count           */
    using GSTR      = regbits< type, 15,  1 >;  /**< Fault Glitch Stretch Enable  */
  };

  /**
   * Fault Test Register
   */
  struct FTST
  : public reg< uint16_t, base_addr + 0x192, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x192, rw, 0 >;

    using FTEST  = regbits< type,  0,  1 >;  /**< Fault Test  */
  };

  /**
   * Fault Control 2 Register
   */
  struct FCTRL2
  : public reg< uint16_t, base_addr + 0x194, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x194, rw, 0 >;

    using NOCOMB  = regbits< type,  0,  4 >;  /**< No Combinational Path From Fault Input To PWM Output  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWMA_HPP_INCLUDED
