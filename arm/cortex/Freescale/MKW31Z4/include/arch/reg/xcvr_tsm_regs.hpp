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
//  Import from CMSIS-SVD: "Freescale/MKW31Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW31Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW31Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_XCVR_TSM_REGS_HPP_INCLUDED
#define ARCH_REG_XCVR_TSM_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XCVR_TSM
 */
struct XCVR_TSM_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005c2c0;

  /**
   * TRANSCEIVER SEQUENCE MANAGER CONTROL
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0, rw, 0xFF004000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xFF004000 >;

    using FORCE_TX_EN          = regbits< type,  2,  1 >;  /**< Force Transmit Enable                          */
    using FORCE_RX_EN          = regbits< type,  3,  1 >;  /**< Force Receive Enable                           */
    using PA_RAMP_SEL          = regbits< type,  4,  2 >;  /**< PA Ramp Selection                              */
    using DATA_PADDING_EN      = regbits< type,  6,  2 >;  /**< Data Padding Enable                            */
    using TSM_IRQ0_EN          = regbits< type,  8,  1 >;  /**< TSM_IRQ0 Enable/Disable bit                    */
    using TSM_IRQ1_EN          = regbits< type,  9,  1 >;  /**< TSM_IRQ1 Enable/Disable bit                    */
    using RAMP_DN_DELAY        = regbits< type, 12,  4 >;  /**< PA Ramp Down Delay                             */
    using TX_ABORT_DIS         = regbits< type, 16,  1 >;  /**< Transmit Abort Disable                         */
    using RX_ABORT_DIS         = regbits< type, 17,  1 >;  /**< Receive Abort Disable                          */
    using ABORT_ON_CTUNE       = regbits< type, 18,  1 >;  /**< Abort On Coarse Tune Lock Detect Failure       */
    using ABORT_ON_CYCLE_SLIP  = regbits< type, 19,  1 >;  /**< Abort On Cycle Slip Lock Detect Failure        */
    using ABORT_ON_FREQ_TARG   = regbits< type, 20,  1 >;  /**< Abort On Frequency Target Lock Detect Failure  */
    using BKPT                 = regbits< type, 24,  8 >;  /**< TSM Breakpoint                                 */
  };

  /**
   * TSM END OF SEQUENCE
   */
  struct END_OF_SEQ
  : public reg< uint32_t, base_addr + 0x4, rw, 0x67666A63 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x67666A63 >;

    using END_OF_TX_WU  = regbits< type,  0,  8 >;  /**< End of TX Warmup    */
    using END_OF_TX_WD  = regbits< type,  8,  8 >;  /**< End of TX Warmdown  */
    using END_OF_RX_WU  = regbits< type, 16,  8 >;  /**< End of RX Warmup    */
    using END_OF_RX_WD  = regbits< type, 24,  8 >;  /**< End of RX Warmdown  */
  };

  /**
   * TSM OVERRIDE REGISTER 0
   */
  struct OVRD0
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using BB_LDO_HF_EN_OVRD_EN                = regbits< type,  0,  1 >;  /**< Override control for BB_LDO_HF_EN                */
    using BB_LDO_HF_EN_OVRD                   = regbits< type,  1,  1 >;  /**< Override value for BB_LDO_HF_EN                  */
    using BB_LDO_ADCDAC_EN_OVRD_EN            = regbits< type,  2,  1 >;  /**< Override control for BB_LDO_ADCDAC_EN            */
    using BB_LDO_ADCDAC_EN_OVRD               = regbits< type,  3,  1 >;  /**< Override value for BB_LDO_ADCDAC_EN              */
    using BB_LDO_BBA_EN_OVRD_EN               = regbits< type,  4,  1 >;  /**< Override control for BB_LDO_BBA_EN               */
    using BB_LDO_BBA_EN_OVRD                  = regbits< type,  5,  1 >;  /**< Override value for BB_LDO_BBA_EN                 */
    using BB_LDO_PD_EN_OVRD_EN                = regbits< type,  6,  1 >;  /**< Override control for BB_LDO_PD_EN                */
    using BB_LDO_PD_EN_OVRD                   = regbits< type,  7,  1 >;  /**< Override value for BB_LDO_PD_EN                  */
    using BB_LDO_FDBK_EN_OVRD_EN              = regbits< type,  8,  1 >;  /**< Override control for BB_LDO_FDBK_EN              */
    using BB_LDO_FDBK_EN_OVRD                 = regbits< type,  9,  1 >;  /**< Override value for BB_LDO_FDBK_EN                */
    using BB_LDO_VCOLO_EN_OVRD_EN             = regbits< type, 10,  1 >;  /**< Override control for BB_LDO_VCOLO_EN             */
    using BB_LDO_VCOLO_EN_OVRD                = regbits< type, 11,  1 >;  /**< Override value for BB_LDO_VCOLO_EN               */
    using BB_LDO_VTREF_EN_OVRD_EN             = regbits< type, 12,  1 >;  /**< Override control for BB_LDO_VTREF_EN             */
    using BB_LDO_VTREF_EN_OVRD                = regbits< type, 13,  1 >;  /**< Override value for BB_LDO_VTREF_EN               */
    using BB_LDO_FDBK_BLEED_EN_OVRD_EN        = regbits< type, 14,  1 >;  /**< Override control for BB_LDO_FDBK_BLEED_EN        */
    using BB_LDO_FDBK_BLEED_EN_OVRD           = regbits< type, 15,  1 >;  /**< Override value for BB_LDO_FDBK_BLEED_EN          */
    using BB_LDO_VCOLO_BLEED_EN_OVRD_EN       = regbits< type, 16,  1 >;  /**< Override control for BB_LDO_VCOLO_BLEED_EN       */
    using BB_LDO_VCOLO_BLEED_EN_OVRD          = regbits< type, 17,  1 >;  /**< Override value for BB_LDO_VCOLO_BLEED_EN         */
    using BB_LDO_VCOLO_FASTCHARGE_EN_OVRD_EN  = regbits< type, 18,  1 >;  /**< Override control for BB_LDO_VCOLO_FASTCHARGE_EN  */
    using BB_LDO_VCOLO_FASTCHARGE_EN_OVRD     = regbits< type, 19,  1 >;  /**< Override value for BB_LDO_VCOLO_FASTCHARGE_EN    */
    using BB_XTAL_PLL_REF_CLK_EN_OVRD_EN      = regbits< type, 20,  1 >;  /**< Override control for BB_XTAL_PLL_REF_CLK_EN      */
    using BB_XTAL_PLL_REF_CLK_EN_OVRD         = regbits< type, 21,  1 >;  /**< Override value for BB_XTAL_PLL_REF_CLK_EN        */
    using BB_XTAL_DAC_REF_CLK_EN_OVRD_EN      = regbits< type, 22,  1 >;  /**< Override control for BB_XTAL_DAC_REF_CLK_EN      */
    using BB_XTAL_DAC_REF_CLK_EN_OVRD         = regbits< type, 23,  1 >;  /**< Override value for BB_XTAL_DAC_REF_CLK_EN        */
    using BB_XTAL_AUXPLL_REF_CLK_EN_OVRD_EN   = regbits< type, 24,  1 >;  /**< Override control for BB_XTAL_AUXPLL_REF_CLK_EN   */
    using BB_XTAL_AUXPLL_REF_CLK_EN_OVRD      = regbits< type, 25,  1 >;  /**< Override value for BB_XTAL_AUXPLL_REF_CLK_EN     */
    using SY_VCO_AUTOTUNE_EN_OVRD_EN          = regbits< type, 26,  1 >;  /**< Override control for SY_VCO_AUTOTUNE_EN          */
    using SY_VCO_AUTOTUNE_EN_OVRD             = regbits< type, 27,  1 >;  /**< Override value for SY_VCO_AUTOTUNE_EN            */
    using SY_PD_CYCLE_SLIP_LD_EN_OVRD_EN      = regbits< type, 28,  1 >;  /**< Override control for SY_PD_CYCLE_SLIP_LD_EN      */
    using SY_PD_CYCLE_SLIP_LD_EN_OVRD         = regbits< type, 29,  1 >;  /**< Override value for SY_PD_CYCLE_SLIP_LD_EN        */
    using SY_VCO_EN_OVRD_EN                   = regbits< type, 30,  1 >;  /**< Override control for SY_VCO_EN                   */
    using SY_VCO_EN_OVRD                      = regbits< type, 31,  1 >;  /**< Override value for SY_VCO_EN                     */
  };

  /**
   * TSM OVERRIDE REGISTER 1
   */
  struct OVRD1
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using SY_LO_RX_BUF_EN_OVRD_EN         = regbits< type,  0,  1 >;  /**< Override control for SY_LO_RX_BUF_EN         */
    using SY_LO_RX_BUF_EN_OVRD            = regbits< type,  1,  1 >;  /**< Override value for SY_LO_RX_BUF_EN           */
    using SY_LO_TX_BUF_EN_OVRD_EN         = regbits< type,  2,  1 >;  /**< Override control for SY_LO_TX_BUF_EN         */
    using SY_LO_TX_BUF_EN_OVRD            = regbits< type,  3,  1 >;  /**< Override value for SY_LO_TX_BUF_EN           */
    using SY_DIVN_EN_OVRD_EN              = regbits< type,  4,  1 >;  /**< Override control for SY_DIVN_EN              */
    using SY_DIVN_EN_OVRD                 = regbits< type,  5,  1 >;  /**< Override value for SY_DIVN_EN                */
    using SY_PD_FILTER_CHARGE_EN_OVRD_EN  = regbits< type,  6,  1 >;  /**< Override control for SY_PD_FILTER_CHARGE_EN  */
    using SY_PD_FILTER_CHARGE_EN_OVRD     = regbits< type,  7,  1 >;  /**< Override value for SY_PD_FILTER_CHARGE_EN    */
    using SY_PD_EN_OVRD_EN                = regbits< type,  8,  1 >;  /**< Override control for SY_PD_EN                */
    using SY_PD_EN_OVRD                   = regbits< type,  9,  1 >;  /**< Override value for SY_PD_EN                  */
    using SY_LO_DIVN_EN_OVRD_EN           = regbits< type, 10,  1 >;  /**< Override control for SY_LO_DIVN_EN           */
    using SY_LO_DIVN_EN_OVRD              = regbits< type, 11,  1 >;  /**< Override value for SY_LO_DIVN_EN             */
    using SY_LO_RX_EN_OVRD_EN             = regbits< type, 12,  1 >;  /**< Override control for SY_LO_RX_EN             */
    using SY_LO_RX_EN_OVRD                = regbits< type, 13,  1 >;  /**< Override value for SY_LO_RX_EN               */
    using SY_LO_TX_EN_OVRD_EN             = regbits< type, 14,  1 >;  /**< Override control for SY_LO_TX_EN             */
    using SY_LO_TX_EN_OVRD                = regbits< type, 15,  1 >;  /**< Override value for SY_LO_TX_EN               */
    using SY_DIVN_CAL_EN_OVRD_EN          = regbits< type, 16,  1 >;  /**< Override control for SY_DIVN_CAL_EN          */
    using SY_DIVN_CAL_EN_OVRD             = regbits< type, 17,  1 >;  /**< Override value for SY_DIVN_CAL_EN            */
    using RX_MIXER_EN_OVRD_EN             = regbits< type, 18,  1 >;  /**< Override control for RX_MIXER_EN             */
    using RX_MIXER_EN_OVRD                = regbits< type, 19,  1 >;  /**< Override value for RX_MIXER_EN               */
    using TX_PA_EN_OVRD_EN                = regbits< type, 20,  1 >;  /**< Override control for TX_PA_EN                */
    using TX_PA_EN_OVRD                   = regbits< type, 21,  1 >;  /**< Override value for TX_PA_EN                  */
    using RX_ADC_I_EN_OVRD_EN             = regbits< type, 22,  1 >;  /**< Override control for RX_ADC_I_EN             */
    using RX_ADC_I_EN_OVRD                = regbits< type, 23,  1 >;  /**< Override value for RX_ADC_I_EN               */
    using RX_ADC_Q_EN_OVRD_EN             = regbits< type, 24,  1 >;  /**< Override control for RX_ADC_Q_EN             */
    using RX_ADC_Q_EN_OVRD                = regbits< type, 25,  1 >;  /**< Override value for RX_ADC_Q_EN               */
    using RX_ADC_RESET_EN_OVRD_EN         = regbits< type, 26,  1 >;  /**< Override control for RX_ADC_RESET_EN         */
    using RX_ADC_RESET_EN_OVRD            = regbits< type, 27,  1 >;  /**< Override value for RX_ADC_RESET_EN           */
    using RX_BBA_I_EN_OVRD_EN             = regbits< type, 28,  1 >;  /**< Override control for RX_BBA_I_EN             */
    using RX_BBA_I_EN_OVRD                = regbits< type, 29,  1 >;  /**< Override value for RX_BBA_I_EN               */
    using RX_BBA_Q_EN_OVRD_EN             = regbits< type, 30,  1 >;  /**< Override control for RX_BBA_Q_EN             */
    using RX_BBA_Q_EN_OVRD                = regbits< type, 31,  1 >;  /**< Override value for RX_BBA_Q_EN               */
  };

  /**
   * TSM OVERRIDE REGISTER 2
   */
  struct OVRD2
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using RX_BBA_PDET_EN_OVRD_EN   = regbits< type,  0,  1 >;  /**< Override control for RX_BBA_PDET_EN   */
    using RX_BBA_PDET_EN_OVRD      = regbits< type,  1,  1 >;  /**< Override value for RX_BBA_PDET_EN     */
    using RX_BBA_DCOC_EN_OVRD_EN   = regbits< type,  2,  1 >;  /**< Override control for RX_BBA_DCOC_EN   */
    using RX_BBA_DCOC_EN_OVRD      = regbits< type,  3,  1 >;  /**< Override value for RX_BBA_DCOC_EN     */
    using RX_LNA_EN_OVRD_EN        = regbits< type,  4,  1 >;  /**< Override control for RX_LNA_EN        */
    using RX_LNA_EN_OVRD           = regbits< type,  5,  1 >;  /**< Override value for RX_LNA_EN          */
    using RX_TZA_I_EN_OVRD_EN      = regbits< type,  6,  1 >;  /**< Override control for RX_TZA_I_EN      */
    using RX_TZA_I_EN_OVRD         = regbits< type,  7,  1 >;  /**< Override value for RX_TZA_I_EN        */
    using RX_TZA_Q_EN_OVRD_EN      = regbits< type,  8,  1 >;  /**< Override control for RX_TZA_Q_EN      */
    using RX_TZA_Q_EN_OVRD         = regbits< type,  9,  1 >;  /**< Override value for RX_TZA_Q_EN        */
    using RX_TZA_PDET_EN_OVRD_EN   = regbits< type, 10,  1 >;  /**< Override control for RX_TZA_PDET_EN   */
    using RX_TZA_PDET_EN_OVRD      = regbits< type, 11,  1 >;  /**< Override value for RX_TZA_PDET_EN     */
    using RX_TZA_DCOC_EN_OVRD_EN   = regbits< type, 12,  1 >;  /**< Override control for RX_TZA_DCOC_EN   */
    using RX_TZA_DCOC_EN_OVRD      = regbits< type, 13,  1 >;  /**< Override control for RX_TZA_DCOC_EN   */
    using PLL_DIG_EN_OVRD_EN       = regbits< type, 14,  1 >;  /**< Override control for PLL_DIG_EN       */
    using PLL_DIG_EN_OVRD          = regbits< type, 15,  1 >;  /**< Override value for PLL_DIG_EN         */
    using TX_DIG_EN_OVRD_EN        = regbits< type, 16,  1 >;  /**< Override control for TX_DIG_EN        */
    using TX_DIG_EN_OVRD           = regbits< type, 17,  1 >;  /**< Override value for TX_DIG_EN          */
    using RX_DIG_EN_OVRD_EN        = regbits< type, 18,  1 >;  /**< Override control for RX_DIG_EN        */
    using RX_DIG_EN_OVRD           = regbits< type, 19,  1 >;  /**< Override value for RX_DIG_EN          */
    using RX_INIT_OVRD_EN          = regbits< type, 20,  1 >;  /**< Override control for RX_INIT          */
    using RX_INIT_OVRD             = regbits< type, 21,  1 >;  /**< Override value for RX_INIT            */
    using SIGMA_DELTA_EN_OVRD_EN   = regbits< type, 22,  1 >;  /**< Override control for SIGMA_DELTA_EN   */
    using SIGMA_DELTA_EN_OVRD      = regbits< type, 23,  1 >;  /**< Override value for SIGMA_DELTA_EN     */
    using RX_PHY_EN_OVRD_EN        = regbits< type, 24,  1 >;  /**< Override control for RX_PHY_EN        */
    using RX_PHY_EN_OVRD           = regbits< type, 25,  1 >;  /**< Override value for RX_PHY_EN          */
    using DCOC_EN_OVRD_EN          = regbits< type, 26,  1 >;  /**< Override control for DCOC_EN          */
    using DCOC_EN_OVRD             = regbits< type, 27,  1 >;  /**< Override value for DCOC_EN            */
    using DCOC_INIT_OVRD_EN        = regbits< type, 28,  1 >;  /**< Override control for DCOC_INIT        */
    using DCOC_INIT_OVRD           = regbits< type, 29,  1 >;  /**< Override value for DCOC_INIT          */
    using FREQ_TARG_LD_EN_OVRD_EN  = regbits< type, 30,  1 >;  /**< Override control for FREQ_TARG_LD_EN  */
    using FREQ_TARG_LD_EN_OVRD     = regbits< type, 31,  1 >;  /**< Override value for FREQ_TARG_LD_EN    */
  };

  /**
   * TSM OVERRIDE REGISTER 3
   */
  struct OVRD3
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using TSM_SPARE0_EN_OVRD_EN                       = regbits< type,  0,  1 >;  /**< Override control for TSM_SPARE0_EN                       */
    using TSM_SPARE0_EN_OVRD                          = regbits< type,  1,  1 >;  /**< Override value for TSM_SPARE0_EN                         */
    using TSM_SPARE1_EN_OVRD_EN                       = regbits< type,  2,  1 >;  /**< Override control for TSM_SPARE1_EN                       */
    using TSM_SPARE1_EN_OVRD                          = regbits< type,  3,  1 >;  /**< Override value for TSM_SPARE1_EN                         */
    using TSM_SPARE2_EN_OVRD_EN                       = regbits< type,  4,  1 >;  /**< Override control for TSM_SPARE2_EN                       */
    using TSM_SPARE2_EN_OVRD                          = regbits< type,  5,  1 >;  /**< Override value for TSM_SPARE2_EN                         */
    using TSM_SPARE3_EN_OVRD_EN                       = regbits< type,  6,  1 >;  /**< Override control for TSM_SPARE3_EN                       */
    using TSM_SPARE3_EN_OVRD                          = regbits< type,  7,  1 >;  /**< Override value for TSM_SPARE3_EN                         */
    using RXTX_AUXPLL_BIAS_EN_OVRD_EN                 = regbits< type,  8,  1 >;  /**< Override control for RXTX_AUXPLL_BIAS_EN                 */
    using RXTX_AUXPLL_BIAS_EN_OVRD                    = regbits< type,  9,  1 >;  /**< Override value for RXTX_AUXPLL_BIAS_EN                   */
    using RXTX_AUXPLL_VCO_EN_OVRD_EN                  = regbits< type, 10,  1 >;  /**< Override control for RXTX_AUXPLL_VCO_EN                  */
    using RXTX_AUXPLL_VCO_EN_OVRD                     = regbits< type, 11,  1 >;  /**< Override value for RXTX_AUXPLL_VCO_EN                    */
    using RXTX_AUXPLL_FCAL_EN_OVRD_EN                 = regbits< type, 12,  1 >;  /**< Override control for RXTX_AUXPLL_FCAL_EN                 */
    using RXTX_AUXPLL_FCAL_EN_OVRD                    = regbits< type, 13,  1 >;  /**< Override value for RXTX_AUXPLL_FCAL_EN                   */
    using RXTX_AUXPLL_LF_EN_OVRD_EN                   = regbits< type, 14,  1 >;  /**< Override control for RXTX_AUXPLL_LF_EN                   */
    using RXTX_AUXPLL_LF_EN_OVRD                      = regbits< type, 15,  1 >;  /**< Override value for RXTX_AUXPLL_LF_EN                     */
    using RXTX_AUXPLL_PD_EN_OVRD_EN                   = regbits< type, 16,  1 >;  /**< Override control for RXTX_AUXPLL_PD_EN                   */
    using RXTX_AUXPLL_PD_EN_OVRD                      = regbits< type, 17,  1 >;  /**< Override value for RXTX_AUXPLL_PD_EN                     */
    using RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN_OVRD_EN  = regbits< type, 18,  1 >;  /**< Override control for RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN  */
    using RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN_OVRD     = regbits< type, 19,  1 >;  /**< Override value for RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN    */
    using RXTX_AUXPLL_ADC_BUF_EN_OVRD_EN              = regbits< type, 20,  1 >;  /**< Override control for RXTX_AUXPLL_ADC_BUF_EN              */
    using RXTX_AUXPLL_ADC_BUF_EN_OVRD                 = regbits< type, 21,  1 >;  /**< Override value for RXTX_AUXPLL_ADC_BUF_EN                */
    using RXTX_AUXPLL_DIG_BUF_EN_OVRD_EN              = regbits< type, 22,  1 >;  /**< Override control for RXTX_AUXPLL_DIG_BUF_EN              */
    using RXTX_AUXPLL_DIG_BUF_EN_OVRD                 = regbits< type, 23,  1 >;  /**< Override value for RXTX_AUXPLL_DIG_BUF_EN                */
    using RXTX_RCCAL_EN_OVRD_EN                       = regbits< type, 24,  1 >;  /**< Override control for RXTX_RCCAL_EN                       */
    using RXTX_RCCAL_EN_OVRD                          = regbits< type, 25,  1 >;  /**< Override value for RXTX_RCCAL_EN                         */
    using TX_HPM_DAC_EN_OVRD_EN                       = regbits< type, 26,  1 >;  /**< Override control for TX_HPM_DAC_EN                       */
    using TX_HPM_DAC_EN_OVRD                          = regbits< type, 27,  1 >;  /**< Override value for TX_HPM_DAC_EN                         */
    using TX_MODE_OVRD_EN                             = regbits< type, 28,  1 >;  /**< Override control for TX_MODE                             */
    using TX_MODE_OVRD                                = regbits< type, 29,  1 >;  /**< Override value for TX_MODE                               */
    using RX_MODE_OVRD_EN                             = regbits< type, 30,  1 >;  /**< Override control for RX_MODE                             */
    using RX_MODE_OVRD                                = regbits< type, 31,  1 >;  /**< Override value for RX_MODE                               */
  };

  /**
   * PA POWER
   */
  struct PA_POWER
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    // fixme: Field name equals parent register name: PA_POWER
    using PA_POWER_ = regbits< type,  0,  6 >;  /**< PA POWER  */
  };

  /**
   * PA RAMP TABLE 0
   */
  struct PA_RAMP_TBL0
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x10080402 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x10080402 >;

    using PA_RAMP0  = regbits< type,  0,  6 >;  /**< PA_RAMP0  */
    using PA_RAMP1  = regbits< type,  8,  6 >;  /**< PA_RAMP1  */
    using PA_RAMP2  = regbits< type, 16,  6 >;  /**< PA_RAMP2  */
    using PA_RAMP3  = regbits< type, 24,  6 >;  /**< PA_RAMP3  */
  };

  /**
   * PA RAMP TABLE 1
   */
  struct PA_RAMP_TBL1
  : public reg< uint32_t, base_addr + 0x20, rw, 0x3A342A1C >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x3A342A1C >;

    using PA_RAMP4  = regbits< type,  0,  6 >;  /**< PA_RAMP4  */
    using PA_RAMP5  = regbits< type,  8,  6 >;  /**< PA_RAMP5  */
    using PA_RAMP6  = regbits< type, 16,  6 >;  /**< PA_RAMP6  */
    using PA_RAMP7  = regbits< type, 24,  6 >;  /**< PA_RAMP7  */
  };

  /**
   * TSM RECYCLE COUNT
   */
  struct RECYCLE_COUNT
  : public reg< uint32_t, base_addr + 0x24, rw, 0x1A0464 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x1A0464 >;

    using RECYCLE_COUNT0  = regbits< type,  0,  8 >;  /**< TSM RX Recycle Count 0  */
    using RECYCLE_COUNT1  = regbits< type,  8,  8 >;  /**< TSM RX Recycle Count 1  */
    using RECYCLE_COUNT2  = regbits< type, 16,  8 >;  /**< TSM RX Recycle Count 2  */
  };

  /**
   * TSM FAST WARMUP CONTROL REGISTER 1
   */
  struct FAST_CTRL1
  : public reg< uint32_t, base_addr + 0x28, rw, 0xFF00 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0xFF00 >;

    using FAST_TX_WU_EN     = regbits< type,  0,  1 >;  /**< Fast TSM TX Warmup Enable                                */
    using FAST_RX_WU_EN     = regbits< type,  1,  1 >;  /**< Fast TSM RX Warmup Enable                                */
    using FAST_RX2TX_EN     = regbits< type,  2,  1 >;  /**< Fast TSM RX-to-TX Transition Enable                      */
    using FAST_WU_CLEAR     = regbits< type,  3,  1 >;  /**< Fast TSM Warmup Clear State                              */
    using FAST_RX2TX_START  = regbits< type,  8,  8 >;  /**< TSM "Jump-to" point for a Fast TSM RX-to-TX Transition.  */
  };

  /**
   * TSM FAST WARMUP CONTROL REGISTER 2
   */
  struct FAST_CTRL2
  : public reg< uint32_t, base_addr + 0x2c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0xFFFFFFFF >;

    using FAST_START_TX  = regbits< type,  0,  8 >;  /**< Fast TSM TX "Jump-from" Point  */
    using FAST_DEST_TX   = regbits< type,  8,  8 >;  /**< Fast TSM TX "Jump-to" Point    */
    using FAST_START_RX  = regbits< type, 16,  8 >;  /**< Fast TSM RX "Jump-from" Point  */
    using FAST_DEST_RX   = regbits< type, 24,  8 >;  /**< Fast TSM RX "Jump-to" Point    */
  };

  /**
   * TSM_TIMING00
   */
  struct TIMING00
  : public reg< uint32_t, base_addr + 0x30, rw, 0x67006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x67006A00 >;

    using BB_LDO_HF_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_LDO_HF_EN (TX)     */
    using BB_LDO_HF_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_LDO_HF_EN (TX)  */
    using BB_LDO_HF_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_HF_EN (RX)     */
    using BB_LDO_HF_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_HF_EN (RX)  */
  };

  /**
   * TSM_TIMING01
   */
  struct TIMING01
  : public reg< uint32_t, base_addr + 0x34, rw, 0x67006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x67006A00 >;

    using BB_LDO_ADCDAC_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_LDO_ADCDAC_EN (TX)     */
    using BB_LDO_ADCDAC_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_LDO_ADCDAC_EN (TX)  */
    using BB_LDO_ADCDAC_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_ADCDAC_EN (RX)     */
    using BB_LDO_ADCDAC_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_ADCDAC_EN (RX)  */
  };

  /**
   * TSM_TIMING02
   */
  struct TIMING02
  : public reg< uint32_t, base_addr + 0x38, rw, 0x6700FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x6700FFFF >;

    using BB_LDO_BBA_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_BBA_EN (RX)     */
    using BB_LDO_BBA_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_BBA_EN (RX)  */
  };

  /**
   * TSM_TIMING03
   */
  struct TIMING03
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x67006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x67006A00 >;

    using BB_LDO_PD_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_LDO_PD_EN (TX)     */
    using BB_LDO_PD_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_LDO_PD_EN (TX)  */
    using BB_LDO_PD_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_PD_EN (RX)     */
    using BB_LDO_PD_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_PD_EN (RX)  */
  };

  /**
   * TSM_TIMING04
   */
  struct TIMING04
  : public reg< uint32_t, base_addr + 0x40, rw, 0x67006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x67006A00 >;

    using BB_LDO_FDBK_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_LDO_FDBK_EN (TX)     */
    using BB_LDO_FDBK_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_LDO_FDBK_EN (TX)  */
    using BB_LDO_FDBK_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_FDBK_EN (RX)     */
    using BB_LDO_FDBK_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_FDBK_EN (RX)  */
  };

  /**
   * TSM_TIMING05
   */
  struct TIMING05
  : public reg< uint32_t, base_addr + 0x44, rw, 0x67006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x67006A00 >;

    using BB_LDO_VCOLO_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_LDO_VCOLO_EN (TX)     */
    using BB_LDO_VCOLO_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_LDO_VCOLO_EN (TX)  */
    using BB_LDO_VCOLO_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_VCOLO_EN (RX)     */
    using BB_LDO_VCOLO_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_VCOLO_EN (RX)  */
  };

  /**
   * TSM_TIMING06
   */
  struct TIMING06
  : public reg< uint32_t, base_addr + 0x48, rw, 0x67006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x67006A00 >;

    using BB_LDO_VTREF_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_LDO_VTREF_EN (TX)     */
    using BB_LDO_VTREF_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_LDO_VTREF_EN (TX)  */
    using BB_LDO_VTREF_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_VTREF_EN (RX)     */
    using BB_LDO_VTREF_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_VTREF_EN (RX)  */
  };

  /**
   * TSM_TIMING07
   */
  struct TIMING07
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x5000500 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x5000500 >;

    using BB_LDO_FDBK_BLEED_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_LDO_FDBK_BLEED_EN (TX)     */
    using BB_LDO_FDBK_BLEED_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_LDO_FDBK_BLEED_EN (TX)  */
    using BB_LDO_FDBK_BLEED_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_FDBK_BLEED_EN (RX)     */
    using BB_LDO_FDBK_BLEED_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_FDBK_BLEED_EN (RX)  */
  };

  /**
   * TSM_TIMING08
   */
  struct TIMING08
  : public reg< uint32_t, base_addr + 0x50, rw, 0x3000300 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x3000300 >;

    using BB_LDO_VCOLO_BLEED_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_LDO_VCOLO_BLEED_EN (TX)     */
    using BB_LDO_VCOLO_BLEED_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_LDO_VCOLO_BLEED_EN (TX)  */
    using BB_LDO_VCOLO_BLEED_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_VCOLO_BLEED_EN (RX)     */
    using BB_LDO_VCOLO_BLEED_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_VCOLO_BLEED_EN (RX)  */
  };

  /**
   * TSM_TIMING09
   */
  struct TIMING09
  : public reg< uint32_t, base_addr + 0x54, rw, 0x3000300 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x3000300 >;

    using BB_LDO_VCOLO_FASTCHARGE_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_LDO_VCOLO_FASTCHARGE_EN (TX)     */
    using BB_LDO_VCOLO_FASTCHARGE_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_LDO_VCOLO_FASTCHARGE_EN (TX)  */
    using BB_LDO_VCOLO_FASTCHARGE_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_LDO_VCOLO_FASTCHARGE_EN (RX)     */
    using BB_LDO_VCOLO_FASTCHARGE_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_LDO_VCOLO_FASTCHARGE_EN (RX)  */
  };

  /**
   * TSM_TIMING10
   */
  struct TIMING10
  : public reg< uint32_t, base_addr + 0x58, rw, 0x67036A03 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x67036A03 >;

    using BB_XTAL_PLL_REF_CLK_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_XTAL_PLL_REF_CLK_EN (TX)     */
    using BB_XTAL_PLL_REF_CLK_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_XTAL_PLL_REF_CLK_EN (TX)  */
    using BB_XTAL_PLL_REF_CLK_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BB_XTAL_PLL_REF_CLK_EN (RX)     */
    using BB_XTAL_PLL_REF_CLK_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for BB_XTAL_PLL_REF_CLK_EN (RX)  */
  };

  /**
   * TSM_TIMING11
   */
  struct TIMING11
  : public reg< uint32_t, base_addr + 0x5c, rw, 0xFFFF6A03 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0xFFFF6A03 >;

    using BB_XTAL_DAC_REF_CLK_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for BB_XTAL_DAC_REF_CLK_EN (TX)     */
    using BB_XTAL_DAC_REF_CLK_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for BB_XTAL_DAC_REF_CLK_EN (TX)  */
  };

  /**
   * TSM_TIMING12
   */
  struct TIMING12
  : public reg< uint32_t, base_addr + 0x60, rw, 0x6703FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x6703FFFF >;

    using RXTX_AUXPLL_VCO_REF_CLK_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RXTX_AUXPLL_VCO_REF_CLK_EN (RX)     */
    using RXTX_AUXPLL_VCO_REF_CLK_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RXTX_AUXPLL_VCO_REF_CLK_EN (RX)  */
  };

  /**
   * TSM_TIMING13
   */
  struct TIMING13
  : public reg< uint32_t, base_addr + 0x64, rw, 0x16004A00 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x16004A00 >;

    using SY_VCO_AUTOTUNE_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_VCO_AUTOTUNE_EN (TX)     */
    using SY_VCO_AUTOTUNE_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_VCO_AUTOTUNE_EN (TX)  */
    using SY_VCO_AUTOTUNE_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_VCO_AUTOTUNE_EN (RX)     */
    using SY_VCO_AUTOTUNE_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_VCO_AUTOTUNE_EN (RX)  */
  };

  /**
   * TSM_TIMING14
   */
  struct TIMING14
  : public reg< uint32_t, base_addr + 0x68, rw, 0x672F645F >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x672F645F >;

    using SY_PD_CYCLE_SLIP_LD_FT_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_PD_CYCLE_SLIP_LD_FT_EN (TX)     */
    using SY_PD_CYCLE_SLIP_LD_FT_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_PD_CYCLE_SLIP_LD_FT_EN (TX)  */
    using SY_PD_CYCLE_SLIP_LD_FT_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_PD_CYCLE_SLIP_LD_FT_EN (RX)     */
    using SY_PD_CYCLE_SLIP_LD_FT_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_PD_CYCLE_SLIP_LD_FT_EN (RX)  */
  };

  /**
   * TSM_TIMING15
   */
  struct TIMING15
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x67036A03 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x67036A03 >;

    using SY_VCO_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_VCO_EN (TX)     */
    using SY_VCO_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_VCO_EN (TX)  */
    using SY_VCO_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_VCO_EN (RX)     */
    using SY_VCO_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_VCO_EN (RX)  */
  };

  /**
   * TSM_TIMING16
   */
  struct TIMING16
  : public reg< uint32_t, base_addr + 0x70, rw, 0x671AFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x671AFFFF >;

    using SY_LO_RX_BUF_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_LO_RX_BUF_EN (RX)     */
    using SY_LO_RX_BUF_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_LO_RX_BUF_EN (RX)  */
  };

  /**
   * TSM_TIMING17
   */
  struct TIMING17
  : public reg< uint32_t, base_addr + 0x74, rw, 0xFFFF6A5A >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0xFFFF6A5A >;

    using SY_LO_TX_BUF_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_LO_TX_BUF_EN (TX)     */
    using SY_LO_TX_BUF_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_LO_TX_BUF_EN (TX)  */
  };

  /**
   * TSM_TIMING18
   */
  struct TIMING18
  : public reg< uint32_t, base_addr + 0x78, rw, 0x67056A05 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x67056A05 >;

    using SY_DIVN_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_DIVN_EN (TX)     */
    using SY_DIVN_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_DIVN_EN (TX)  */
    using SY_DIVN_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_DIVN_EN (RX)     */
    using SY_DIVN_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_DIVN_EN (RX)  */
  };

  /**
   * TSM_TIMING19
   */
  struct TIMING19
  : public reg< uint32_t, base_addr + 0x7c, rw, 0x16054A05 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0x16054A05 >;

    using SY_PD_FILTER_CHARGE_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_PD_FILTER_CHARGE_EN (TX)     */
    using SY_PD_FILTER_CHARGE_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_PD_FILTER_CHARGE_EN (TX)  */
    using SY_PD_FILTER_CHARGE_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_PD_FILTER_CHARGE_EN (RX)     */
    using SY_PD_FILTER_CHARGE_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_PD_FILTER_CHARGE_EN (RX)  */
  };

  /**
   * TSM_TIMING20
   */
  struct TIMING20
  : public reg< uint32_t, base_addr + 0x80, rw, 0x67056A05 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x67056A05 >;

    using SY_PD_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_PD_EN (TX)     */
    using SY_PD_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_PD_EN (TX)  */
    using SY_PD_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_PD_EN (RX)     */
    using SY_PD_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_PD_EN (RX)  */
  };

  /**
   * TSM_TIMING21
   */
  struct TIMING21
  : public reg< uint32_t, base_addr + 0x84, rw, 0x67046A04 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x67046A04 >;

    using SY_LO_DIVN_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_LO_DIVN_EN (TX)     */
    using SY_LO_DIVN_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_LO_DIVN_EN (TX)  */
    using SY_LO_DIVN_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_LO_DIVN_EN (RX)     */
    using SY_LO_DIVN_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_LO_DIVN_EN (RX)  */
  };

  /**
   * TSM_TIMING22
   */
  struct TIMING22
  : public reg< uint32_t, base_addr + 0x88, rw, 0x6704FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x6704FFFF >;

    using SY_LO_RX_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_LO_RX_EN (RX)     */
    using SY_LO_RX_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_LO_RX_EN (RX)  */
  };

  /**
   * TSM_TIMING23
   */
  struct TIMING23
  : public reg< uint32_t, base_addr + 0x8c, rw, 0xFFFF6A04 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0xFFFF6A04 >;

    using SY_LO_TX_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_LO_TX_EN (TX)     */
    using SY_LO_TX_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_LO_TX_EN (TX)  */
  };

  /**
   * TSM_TIMING24
   */
  struct TIMING24
  : public reg< uint32_t, base_addr + 0x90, rw, 0x16004A00 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x16004A00 >;

    using SY_DIVN_CAL_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SY_DIVN_CAL_EN (TX)     */
    using SY_DIVN_CAL_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SY_DIVN_CAL_EN (TX)  */
    using SY_DIVN_CAL_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SY_DIVN_CAL_EN (RX)     */
    using SY_DIVN_CAL_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SY_DIVN_CAL_EN (RX)  */
  };

  /**
   * TSM_TIMING25
   */
  struct TIMING25
  : public reg< uint32_t, base_addr + 0x94, rw, 0x671BFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x671BFFFF >;

    using RX_LNA_MIXER_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_LNA_MIXER_EN (RX)     */
    using RX_LNA_MIXER_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_LNA_MIXER_EN (RX)  */
  };

  /**
   * TSM_TIMING26
   */
  struct TIMING26
  : public reg< uint32_t, base_addr + 0x98, rw, 0xFFFF6A5A >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0xFFFF6A5A >;

    using TX_PA_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TX_PA_EN (TX)     */
    using TX_PA_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for TX_PA_EN (TX)  */
  };

  /**
   * TSM_TIMING27
   */
  struct TIMING27
  : public reg< uint32_t, base_addr + 0x9c, rw, 0x671EFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0x671EFFFF >;

    using RX_ADC_I_Q_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_ADC_I_Q_EN (RX)     */
    using RX_ADC_I_Q_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_ADC_I_Q_EN (RX)  */
  };

  /**
   * TSM_TIMING28
   */
  struct TIMING28
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x1F1EFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x1F1EFFFF >;

    using RX_ADC_RESET_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_ADC_RESET_EN (RX)     */
    using RX_ADC_RESET_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_ADC_RESET_EN (RX)  */
  };

  /**
   * TSM_TIMING29
   */
  struct TIMING29
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x671CFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x671CFFFF >;

    using RX_BBA_I_Q_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_BBA_I_Q_EN (RX)     */
    using RX_BBA_I_Q_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_BBA_I_Q_EN (RX)  */
  };

  /**
   * TSM_TIMING30
   */
  struct TIMING30
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x671EFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x671EFFFF >;

    using RX_BBA_PDET_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_BBA_PDET_EN (RX)     */
    using RX_BBA_PDET_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_BBA_PDET_EN (RX)  */
  };

  /**
   * TSM_TIMING31
   */
  struct TIMING31
  : public reg< uint32_t, base_addr + 0xac, rw, 0x671DFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x671DFFFF >;

    using RX_BBA_TZA_DCOC_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_BBA_TZA_DCOC_EN (RX)     */
    using RX_BBA_TZA_DCOC_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_BBA_TZA_DCOC_EN (RX)  */
  };

  /**
   * TSM_TIMING32
   */
  struct TIMING32
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x671BFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x671BFFFF >;

    using RX_TZA_I_Q_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_TZA_I_Q_EN (RX)     */
    using RX_TZA_I_Q_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_TZA_I_Q_EN (RX)  */
  };

  /**
   * TSM_TIMING33
   */
  struct TIMING33
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x671EFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x671EFFFF >;

    using RX_TZA_PDET_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_TZA_PDET_EN (RX)     */
    using RX_TZA_PDET_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_TZA_PDET_EN (RX)  */
  };

  /**
   * TSM_TIMING34
   */
  struct TIMING34
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x67056A05 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x67056A05 >;

    using PLL_DIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_DIG_EN (TX)     */
    using PLL_DIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for PLL_DIG_EN (TX)  */
    using PLL_DIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_DIG_EN (RX)     */
    using PLL_DIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for PLL_DIG_EN (RX)  */
  };

  /**
   * TSM_TIMING35
   */
  struct TIMING35
  : public reg< uint32_t, base_addr + 0xbc, rw, 0xFFFF6A5D >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0xFFFF6A5D >;

    using TX_DIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TX_DIG_EN (TX)     */
    using TX_DIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for TX_DIG_EN (TX)  */
  };

  /**
   * TSM_TIMING36
   */
  struct TIMING36
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x6764FFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x6764FFFF >;

    using RX_DIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_DIG_EN (RX)     */
    using RX_DIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_DIG_EN (RX)  */
  };

  /**
   * TSM_TIMING37
   */
  struct TIMING37
  : public reg< uint32_t, base_addr + 0xc4, rw, 0x6564FFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0x6564FFFF >;

    using RX_INIT_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_INIT (RX)     */
    using RX_INIT_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_INIT (RX)  */
  };

  /**
   * TSM_TIMING38
   */
  struct TIMING38
  : public reg< uint32_t, base_addr + 0xc8, rw, 0x670C6A40 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0x670C6A40 >;

    using SIGMA_DELTA_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SIGMA_DELTA_EN (TX)     */
    using SIGMA_DELTA_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SIGMA_DELTA_EN (TX)  */
    using SIGMA_DELTA_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SIGMA_DELTA_EN (RX)     */
    using SIGMA_DELTA_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SIGMA_DELTA_EN (RX)  */
  };

  /**
   * TSM_TIMING39
   */
  struct TIMING39
  : public reg< uint32_t, base_addr + 0xcc, rw, 0x6764FFFF >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0x6764FFFF >;

    using RX_PHY_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_PHY_EN (RX)     */
    using RX_PHY_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RX_PHY_EN (RX)  */
  };

  /**
   * TSM_TIMING40
   */
  struct TIMING40
  : public reg< uint32_t, base_addr + 0xd0, rw, 0x6724FFFF >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0x6724FFFF >;

    using DCOC_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for DCOC_EN (RX)     */
    using DCOC_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for DCOC_EN (RX)  */
  };

  /**
   * TSM_TIMING41
   */
  struct TIMING41
  : public reg< uint32_t, base_addr + 0xd4, rw, 0x2524FFFF >
  {
    using type = reg< uint32_t, base_addr + 0xd4, rw, 0x2524FFFF >;

    using DCOC_INIT_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for DCOC_INIT (RX)     */
    using DCOC_INIT_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for DCOC_INIT (RX)  */
  };

  /**
   * TSM_TIMING42
   */
  struct TIMING42
  : public reg< uint32_t, base_addr + 0xd8, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xd8, rw, 0xFFFFFFFF >;

    using SAR_ADC_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SAR_ADC_TRIG_EN (TX)     */
    using SAR_ADC_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for SAR_ADC_TRIG_EN (TX)  */
    using SAR_ADC_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SAR_ADC_TRIG_EN (RX)     */
    using SAR_ADC_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for SAR_ADC_TRIG_EN (RX)  */
  };

  /**
   * TSM_TIMING43
   */
  struct TIMING43
  : public reg< uint32_t, base_addr + 0xdc, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xdc, rw, 0xFFFFFFFF >;

    using TSM_SPARE0_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TSM_SPARE0_EN (TX)     */
    using TSM_SPARE0_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for TSM_SPARE0_EN (TX)  */
    using TSM_SPARE0_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TSM_SPARE0_EN (RX)     */
    using TSM_SPARE0_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for TSM_SPARE0_EN (RX)  */
  };

  /**
   * TSM_TIMING44
   */
  struct TIMING44
  : public reg< uint32_t, base_addr + 0xe0, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0xFFFFFFFF >;

    using TSM_SPARE1_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TSM_SPARE1_EN (TX)     */
    using TSM_SPARE1_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for TSM_SPARE1_EN (TX)  */
    using TSM_SPARE1_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TSM_SPARE1_EN (RX)     */
    using TSM_SPARE1_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for TSM_SPARE1_EN (RX)  */
  };

  /**
   * TSM_TIMING45
   */
  struct TIMING45
  : public reg< uint32_t, base_addr + 0xe4, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0xFFFFFFFF >;

    using TSM_SPARE2_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TSM_SPARE2_EN (TX)     */
    using TSM_SPARE2_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for TSM_SPARE2_EN (TX)  */
    using TSM_SPARE2_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TSM_SPARE2_EN (RX)     */
    using TSM_SPARE2_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for TSM_SPARE2_EN (RX)  */
  };

  /**
   * TSM_TIMING46
   */
  struct TIMING46
  : public reg< uint32_t, base_addr + 0xe8, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xe8, rw, 0xFFFFFFFF >;

    using TSM_SPARE3_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TSM_SPARE3_EN (TX)     */
    using TSM_SPARE3_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for TSM_SPARE3_EN (TX)  */
    using TSM_SPARE3_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TSM_SPARE3_EN (RX)     */
    using TSM_SPARE3_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for TSM_SPARE3_EN (RX)  */
  };

  /**
   * TSM_TIMING47
   */
  struct TIMING47
  : public reg< uint32_t, base_addr + 0xec, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xec, rw, 0xFFFFFFFF >;

    using GPIO0_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for GPIO0_TRIG_EN (TX)     */
    using GPIO0_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for GPIO0_TRIG_EN (TX)  */
    using GPIO0_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for GPIO0_TRIG_EN (RX)     */
    using GPIO0_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for GPIO0_TRIG_EN (RX)  */
  };

  /**
   * TSM_TIMING48
   */
  struct TIMING48
  : public reg< uint32_t, base_addr + 0xf0, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xf0, rw, 0xFFFFFFFF >;

    using GPIO1_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for GPIO1_TRIG_EN (TX)     */
    using GPIO1_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for GPIO1_TRIG_EN (TX)  */
    using GPIO1_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for GPIO1_TRIG_EN (RX)     */
    using GPIO1_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for GPIO1_TRIG_EN (RX)  */
  };

  /**
   * TSM_TIMING49
   */
  struct TIMING49
  : public reg< uint32_t, base_addr + 0xf4, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xf4, rw, 0xFFFFFFFF >;

    using GPIO2_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for GPIO2_TRIG_EN (TX)     */
    using GPIO2_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for GPIO2_TRIG_EN (TX)  */
    using GPIO2_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for GPIO2_TRIG_EN (RX)     */
    using GPIO2_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for GPIO2_TRIG_EN (RX)  */
  };

  /**
   * TSM_TIMING50
   */
  struct TIMING50
  : public reg< uint32_t, base_addr + 0xf8, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xf8, rw, 0xFFFFFFFF >;

    using GPIO3_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for GPIO3_TRIG_EN (TX)     */
    using GPIO3_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for GPIO3_TRIG_EN (TX)  */
    using GPIO3_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for GPIO3_TRIG_EN (RX)     */
    using GPIO3_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for GPIO3_TRIG_EN (RX)  */
  };

  /**
   * TSM_TIMING51
   */
  struct TIMING51
  : public reg< uint32_t, base_addr + 0xfc, rw, 0x6703FFFF >
  {
    using type = reg< uint32_t, base_addr + 0xfc, rw, 0x6703FFFF >;

    using RXTX_AUXPLL_BIAS_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RXTX_AUXPLL_BIAS_EN (RX)     */
    using RXTX_AUXPLL_BIAS_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RXTX_AUXPLL_BIAS_EN (RX)  */
  };

  /**
   * TSM_TIMING52
   */
  struct TIMING52
  : public reg< uint32_t, base_addr + 0x100, rw, 0x1504FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x1504FFFF >;

    using RXTX_AUXPLL_FCAL_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RXTX_AUXPLL_FCAL_EN (RX)     */
    using RXTX_AUXPLL_FCAL_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RXTX_AUXPLL_FCAL_EN (RX)  */
  };

  /**
   * TSM_TIMING53
   */
  struct TIMING53
  : public reg< uint32_t, base_addr + 0x104, rw, 0x6704FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x6704FFFF >;

    using RXTX_AUXPLL_LF_PD_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RXTX_AUXPLL_LF_PD_EN (RX)     */
    using RXTX_AUXPLL_LF_PD_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RXTX_AUXPLL_LF_PD_EN (RX)  */
  };

  /**
   * TSM_TIMING54
   */
  struct TIMING54
  : public reg< uint32_t, base_addr + 0x108, rw, 0x1504FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x1504FFFF >;

    using RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN (RX)     */
    using RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN (RX)  */
  };

  /**
   * TSM_TIMING55
   */
  struct TIMING55
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x671EFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x671EFFFF >;

    using RXTX_AUXPLL_ADC_BUF_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RXTX_AUXPLL_ADC_BUF_EN (RX)     */
    using RXTX_AUXPLL_ADC_BUF_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RXTX_AUXPLL_ADC_BUF_EN (RX)  */
  };

  /**
   * TSM_TIMING56
   */
  struct TIMING56
  : public reg< uint32_t, base_addr + 0x110, rw, 0x671EFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x671EFFFF >;

    using RXTX_AUXPLL_DIG_BUF_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RXTX_AUXPLL_DIG_BUF_EN (RX)     */
    using RXTX_AUXPLL_DIG_BUF_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RXTX_AUXPLL_DIG_BUF_EN (RX)  */
  };

  /**
   * TSM_TIMING57
   */
  struct TIMING57
  : public reg< uint32_t, base_addr + 0x114, rw, 0x1A03FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x1A03FFFF >;

    using RXTX_RCCAL_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RXTX_RCCAL_EN (RX)     */
    using RXTX_RCCAL_EN_RX_LO  = regbits< type, 24,  8 >;  /**< De-assertion time setting for RXTX_RCCAL_EN (RX)  */
  };

  /**
   * TSM_TIMING58
   */
  struct TIMING58
  : public reg< uint32_t, base_addr + 0x118, rw, 0xFFFF6A03 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0xFFFF6A03 >;

    using TX_HPM_DAC_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TX_HPM_DAC_EN (TX)     */
    using TX_HPM_DAC_EN_TX_LO  = regbits< type,  8,  8 >;  /**< De-assertion time setting for TX_HPM_DAC_EN (TX)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_XCVR_TSM_REGS_HPP_INCLUDED
