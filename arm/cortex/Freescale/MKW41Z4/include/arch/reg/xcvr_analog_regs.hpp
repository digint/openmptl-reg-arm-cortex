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
//  Import from CMSIS-SVD: "Freescale/MKW41Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW41Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW41Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_XCVR_ANALOG_REGS_HPP_INCLUDED
#define ARCH_REG_XCVR_ANALOG_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XCVR_ANALOG
 */
struct XCVR_ANALOG_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005c500;

  /**
   * RF Analog Baseband LDO Control 1
   */
  struct BB_LDO_1
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using BB_LDO_ADCDAC_BYP      = regbits< type,  0,  1 >;  /**< rmap_bb_ldo_adcdac_byp         */
    using BB_LDO_ADCDAC_DIAGSEL  = regbits< type,  1,  1 >;  /**< rmap_bb_ldo_adcdac_diagsel     */
    using BB_LDO_ADCDAC_SPARE    = regbits< type,  2,  2 >;  /**< rmap_bb_ldo_adcdac_spare[1:0]  */
    using BB_LDO_ADCDAC_TRIM     = regbits< type,  4,  3 >;  /**< rmap_bb_ldo_adcdac_trim[2:0]   */
    using BB_LDO_BBA_BYP         = regbits< type,  8,  1 >;  /**< rmap_bb_ldo_bba_byp            */
    using BB_LDO_BBA_DIAGSEL     = regbits< type,  9,  1 >;  /**< rmap_bb_ldo_bba_diagsel        */
    using BB_LDO_BBA_SPARE       = regbits< type, 10,  2 >;  /**< rmap_bb_ldo_bba_spare[1:0]     */
    using BB_LDO_BBA_TRIM        = regbits< type, 12,  3 >;  /**< rmap_bb_ldo_bba_trim[2:0]      */
    using BB_LDO_FDBK_BYP        = regbits< type, 16,  1 >;  /**< rmap_bb_ldo_fdbk_byp           */
    using BB_LDO_FDBK_DIAGSEL    = regbits< type, 17,  1 >;  /**< rmap_bb_ldo_fdbk_diagsel       */
    using BB_LDO_FDBK_SPARE      = regbits< type, 18,  2 >;  /**< rmap_bb_ldo_fdbk_spare[1:0]    */
    using BB_LDO_FDBK_TRIM       = regbits< type, 20,  3 >;  /**< rmap_bb_ldo_fdbk_trim[2:0]     */
    using BB_LDO_HF_BYP          = regbits< type, 24,  1 >;  /**< rmap_bb_ldo_hf_byp             */
    using BB_LDO_HF_DIAGSEL      = regbits< type, 25,  1 >;  /**< rmap_bb_ldo_hf_diagsel         */
    using BB_LDO_HF_SPARE        = regbits< type, 26,  2 >;  /**< rmap_bb_ldo_hf_spare[1:0]      */
    using BB_LDO_HF_TRIM         = regbits< type, 28,  3 >;  /**< rmap_bb_ldo_hf_trim[2:0]       */
  };

  /**
   * RF Analog Baseband LDO Control 2
   */
  struct BB_LDO_2
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using BB_LDO_PD_BYP         = regbits< type,  0,  1 >;  /**< rmap_bb_ldo_pd_byp           */
    using BB_LDO_PD_DIAGSEL     = regbits< type,  1,  1 >;  /**< rmap_bb_ldo_pd_diagsel       */
    using BB_LDO_PD_SPARE       = regbits< type,  2,  2 >;  /**< rmap_bb_ldo_pd_spare[1:0]    */
    using BB_LDO_PD_TRIM        = regbits< type,  4,  3 >;  /**< rmap_bb_ldo_pd_trim[2:0]     */
    using BB_LDO_VCO_SPARE      = regbits< type,  8,  2 >;  /**< rmap_bb_ldo_vco_spare[1:0]   */
    using BB_LDO_VCOLO_BYP      = regbits< type, 10,  1 >;  /**< rmap_bb_ldo_vcolo_byp        */
    using BB_LDO_VCOLO_DIAGSEL  = regbits< type, 11,  1 >;  /**< rmap_bb_ldo_vcolo_diagsel    */
    using BB_LDO_VCOLO_TRIM     = regbits< type, 12,  3 >;  /**< rmap_bb_ldo_vcolo_trim[2:0]  */
    using BB_LDO_VTREF_DIAGSEL  = regbits< type, 16,  1 >;  /**< rmap_bb_ldo_vtref_diagsel    */
    using BB_LDO_VTREF_TC       = regbits< type, 17,  2 >;  /**< rmap_bb_ldo_vtref_tc[1:0]    */
  };

  /**
   * RF Analog ADC Control
   */
  struct RX_ADC
  : public reg< uint32_t, base_addr + 0x8, rw, 0x140 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x140 >;

    using RX_ADC_BUMP       = regbits< type,  0,  8 >;  /**< rmap_rx_adc_bump[7:0]    */
    using RX_ADC_FS_SEL     = regbits< type,  8,  2 >;  /**< rmap_rx_adc_fs_sel[1:0]  */
    using RX_ADC_I_DIAGSEL  = regbits< type, 10,  1 >;  /**< rmap_rx_adc_i_diagsel    */
    using RX_ADC_Q_DIAGSEL  = regbits< type, 11,  1 >;  /**< rmap_rx_adc_q_diagsel    */
    using RX_ADC_SPARE      = regbits< type, 12,  4 >;  /**< rmap_rx_adc_spare[3:0]   */
  };

  /**
   * RF Analog BBA Control
   */
  struct RX_BBA
  : public reg< uint32_t, base_addr + 0xc, rw, 0x3000003 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x3000003 >;

    using RX_BBA_BW_SEL    = regbits< type,  0,  3 >;  /**< rmap_rx_bba_bw_sel[2:0]  */
    using RX_BBA_CUR_BUMP  = regbits< type,  3,  1 >;  /**< rmap_rx_bba_cur_bump     */
    using RX_BBA_DIAGSEL1  = regbits< type,  4,  1 >;  /**< rmap_rx_bba_diagsel1     */
    using RX_BBA_DIAGSEL2  = regbits< type,  5,  1 >;  /**< rmap_rx_bba_diagsel2     */
    using RX_BBA_DIAGSEL3  = regbits< type,  6,  1 >;  /**< rmap_rx_bba_diagsel3     */
    using RX_BBA_DIAGSEL4  = regbits< type,  7,  1 >;  /**< rmap_rx_bba_diagsel4     */
    using RX_BBA_SPARE     = regbits< type, 16,  6 >;  /**< rmap_rx_bba_spare[5:0]   */
    using RX_BBA2_BW_SEL   = regbits< type, 24,  3 >;  /**< rmap_bba2_bw_sel[2:0]    */
    using RX_BBA2_SPARE    = regbits< type, 28,  3 >;  /**< rmap_rx_bba2_spare[2:0]  */
  };

  /**
   * RF Analog LNA Control
   */
  struct RX_LNA
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using RX_LNA_BUMP        = regbits< type,  0,  4 >;  /**< rmap_rx_lna_bump[3:0]    */
    using RX_LNA_HG_DIAGSEL  = regbits< type,  4,  1 >;  /**< rmap_rx_lna_hg_diagsel   */
    using RX_LNA_HIZ_ENABLE  = regbits< type,  5,  1 >;  /**< rmap_rx_lna_hiZ_enable   */
    using RX_LNA_LG_DIAGSEL  = regbits< type,  6,  1 >;  /**< rmap_rx_lna_lg_diagsel   */
    using RX_LNA_SPARE       = regbits< type,  8,  2 >;  /**< rmap_rx_lna_spare[1:0]   */
    using RX_MIXER_BUMP      = regbits< type, 16,  4 >;  /**< rmap_rx_mixer_bump[3:0]  */
    using RX_MIXER_SPARE     = regbits< type, 20,  1 >;  /**< rmap_rx_mixer_spare      */
  };

  /**
   * RF Analog TZA Control
   */
  struct RX_TZA
  : public reg< uint32_t, base_addr + 0x14, rw, 0x3 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x3 >;

    using RX_TZA_BW_SEL     = regbits< type,  0,  3 >;  /**< rmap_rx_tza_bw_sel[2:0]  */
    using RX_TZA_CUR_BUMP   = regbits< type,  3,  1 >;  /**< rmap_rx_tza_cur_bump     */
    using RX_TZA_GAIN_BUMP  = regbits< type,  4,  1 >;  /**< rmap_rx_tza_gain_bump    */
    using RX_TZA_SPARE      = regbits< type, 16,  6 >;  /**< rmap_rx_tza_spare[5:0]   */
    using RX_TZA1_DIAGSEL   = regbits< type, 24,  1 >;  /**< rmap_rx_tza1_diagsel     */
    using RX_TZA2_DIAGSEL   = regbits< type, 25,  1 >;  /**< rmap_rx_tza2_diagsel     */
    using RX_TZA3_DIAGSEL   = regbits< type, 26,  1 >;  /**< rmap_rx_tza3_diagsel     */
    using RX_TZA4_DIAGSEL   = regbits< type, 27,  1 >;  /**< rmap_rx_tza4_diagsel     */
  };

  /**
   * RF Analog Aux PLL Control
   */
  struct RX_AUXPLL
  : public reg< uint32_t, base_addr + 0x18, rw, 0x9002 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x9002 >;

    using BIAS_TRIM           = regbits< type,  0,  3 >;  /**< rmap_rxtx_auxpll_bias_trim[2:0]           */
    using DIAGSEL1            = regbits< type,  3,  1 >;  /**< rmap_rxtx_auxpll_diagsel1                 */
    using DIAGSEL2            = regbits< type,  4,  1 >;  /**< rmap_rxtx_auxpll_diagsel2                 */
    using LF_CNTL             = regbits< type,  5,  3 >;  /**< rmap_rxtx_auxpll_lf_cntl[2:0]             */
    using SPARE               = regbits< type,  8,  4 >;  /**< rmap_rxtx_auxpll_spare[3:0]               */
    using VCO_DAC_REF_ADJUST  = regbits< type, 12,  4 >;  /**< rmap_rxtx_auxpll_vco_dac_ref_adjust[3:0]  */
    using VTUNE_TESTMODE      = regbits< type, 16,  1 >;  /**< rmap_rxtx_auxpll_vtune_testmode           */
    using RXTX_BAL_BIAST      = regbits< type, 20,  2 >;  /**< rmap_rxtx_bal_biast[1:0]                  */
    using RXTX_BAL_SPARE      = regbits< type, 24,  3 >;  /**< rmap_rxtx_bal_spare[2:0]                  */
    using RXTX_RCCAL_DIAGSEL  = regbits< type, 28,  1 >;  /**< rmap_rxtx_rccal_diagsel                   */
  };

  /**
   * RF Analog Synthesizer Control 1
   */
  struct SY_CTRL_1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x150 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x150 >;

    using SY_DIVN_SPARE                   = regbits< type,  0,  1 >;  /**< rmap_sy_divn_spare                   */
    using SY_FCAL_SPARE                   = regbits< type,  1,  1 >;  /**< rmap_sy_fcal_spare                   */
    using SY_LO_BUMP_RTLO_FDBK            = regbits< type,  4,  2 >;  /**< rmap_sy_lo_bump_rtlo_fdbk[1:0]       */
    using SY_LO_BUMP_RTLO_RX              = regbits< type,  6,  2 >;  /**< rmap_sy_lo_bump_rtlo_rx[1:0]         */
    using SY_LO_BUMP_RTLO_TX              = regbits< type,  8,  2 >;  /**< rmap_sy_lo_bump_rtlo_tx[1:0]         */
    using SY_LO_DIAGSEL                   = regbits< type, 10,  1 >;  /**< rmap_sy_lo_diagsel                   */
    using SY_LO_SPARE                     = regbits< type, 12,  3 >;  /**< rmap_sy_lo_spare[2:0]                */
    using SY_LPF_FILT_CTRL                = regbits< type, 16,  3 >;  /**< rmap_sy_lpf_filt_ctrl[2:0]           */
    using SY_LPF_SPARE                    = regbits< type, 19,  1 >;  /**< rmap_sy_lpf_spare                    */
    using SY_PD_DIAGSEL                   = regbits< type, 20,  1 >;  /**< rmap_sy_pd_diagsel                   */
    using SY_PD_PCH_TUNE                  = regbits< type, 21,  2 >;  /**< rmap_sy_pd_pch_tune[1:0]             */
    using SY_PD_PCH_SEL                   = regbits< type, 23,  1 >;  /**< rmap_sy_pd_pch_sel                   */
    using SY_PD_SPARE                     = regbits< type, 24,  2 >;  /**< rmap_sy_pd_spare[1:0]                */
    using SY_PD_VTUNE_OVERRIDE_TEST_MODE  = regbits< type, 28,  1 >;  /**< rmap_sy_pd_vtune_override_test_mode  */
  };

  /**
   * RF Analog Synthesizer Control 2
   */
  struct SY_CTRL_2
  : public reg< uint32_t, base_addr + 0x20, rw, 0x14 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x14 >;

    using SY_VCO_BIAS       = regbits< type,  0,  3 >;  /**< rmap_sy_vco_bias[2:0]   */
    using SY_VCO_DIAGSEL    = regbits< type,  3,  1 >;  /**< rmap_sy_vco_diagsel     */
    using SY_VCO_KV         = regbits< type,  4,  3 >;  /**< rmap_sy_vco_kv[2:0]     */
    using SY_VCO_KVM        = regbits< type,  8,  3 >;  /**< rmap_sy_vco_kvm[2:0]    */
    using SY_VCO_PK_DET_ON  = regbits< type, 12,  1 >;  /**< rmap_sy_vco_pk_det_on   */
    using SY_VCO_SPARE      = regbits< type, 14,  3 >;  /**< rmap_sy_vco_spare[2:0]  */
  };

  /**
   * RF Analog TX HPM DAC and PA Control
   */
  struct TX_DAC_PA
  : public reg< uint32_t, base_addr + 0x24, rw, 0x20000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x20000 >;

    using TX_DAC_BUMP_CAP       = regbits< type,  0,  2 >;  /**< rmap_tx_dac_bump_cap[1:0]    */
    using TX_DAC_BUMP_IDAC      = regbits< type,  3,  2 >;  /**< rmap_tx_dac_bump_idac[1:0]   */
    using TX_DAC_BUMP_RLOAD     = regbits< type,  6,  2 >;  /**< rmap_tx_dac_bump_rload[1:0]  */
    using TX_DAC_DIAGSEL        = regbits< type,  9,  1 >;  /**< rmap_tx_dac_diagsel          */
    using TX_DAC_INVERT_CLK     = regbits< type, 10,  1 >;  /**< rmap_tx_dac_invert_clk       */
    using TX_DAC_OPAMP_DIAGSEL  = regbits< type, 11,  1 >;  /**< rmap_tx_dac_opamp_diagsel    */
    using TX_DAC_SPARE          = regbits< type, 13,  3 >;  /**< rmap_tx_dac_spare[2:0]       */
    using TX_PA_BUMP_VBIAS      = regbits< type, 17,  3 >;  /**< rmap_tx_pa_bump_vbias[2:0]   */
    using TX_PA_DIAGSEL         = regbits< type, 21,  1 >;  /**< rmap_tx_pa_diagsel           */
    using TX_PA_SPARE           = regbits< type, 23,  3 >;  /**< rmap_tx_pa_spare[2:0]        */
  };

  /**
   * RF Analog Balun TX Mode Control
   */
  struct BALUN_TX
  : public reg< uint32_t, base_addr + 0x28, rw, 0x724B6D >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x724B6D >;

    using RXTX_BAL_TX_CODE  = regbits< type,  0, 24 >;  /**< Balun Tuning Cap Settings in Transmit Mode  */
  };

  /**
   * RF Analog Balun RX Mode Control
   */
  struct BALUN_RX
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x49372D >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x49372D >;

    using RXTX_BAL_RX_CODE  = regbits< type,  0, 24 >;  /**< Balun Tuning Cap Settings in Receive Mode  */
  };

  /**
   * RF Analog DFT Observation Register 1
   */
  struct DFT_OBSV_1
  : public reg< uint32_t, base_addr + 0x30, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0 >;

    using DFT_FREQ_COUNTER  = regbits< type,  0, 19 >;  /**< VCO Frequency Counter Value                                       */
    using CTUNE_MAX_DIFF    = regbits< type, 20,  8 >;  /**< Maximum Frequency Count Difference found by the Coarse Tune BIST  */
  };

  /**
   * RF Analog DFT Observation Register 2
   */
  struct DFT_OBSV_2
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using SYN_BIST_MAX_DIFF      = regbits< type,  0, 17 >;  /**< PLL Frequency Synthesizer BIST Worst Frequency Count  */
    using SYN_BIST_MAX_DIFF_CH   = regbits< type, 24,  7 >;  /**< PLL Frequency Synthesizer BIST Worst Channel          */
    using SYN_BIST_IGNORE_FAILS  = regbits< type, 31,  1 >;  /**< PLL Frequency Synthesizer BIST Ignore Fails           */
  };
};
} // namespace mptl

#endif // ARCH_REG_XCVR_ANALOG_REGS_HPP_INCLUDED
