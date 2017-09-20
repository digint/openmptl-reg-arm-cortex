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

#ifndef ARCH_REG_RX_DIG_HPP_INCLUDED
#define ARCH_REG_RX_DIG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XCVR_RX_DIG
 */
struct RX_DIG
{
  static constexpr reg_addr_t base_addr = 0x4005c000;

  /**
   * RX Digital Control
   */
  struct RX_DIG_CTRL
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using RX_ADC_NEGEDGE            = regbits< type,  0,  1 >;  /**< Receive ADC Negative Edge Selection                   */
    using RX_CH_FILT_BYPASS         = regbits< type,  1,  1 >;  /**< Receive Channel Filter Bypass                         */
    using RX_ADC_RAW_EN             = regbits< type,  2,  1 >;  /**< ADC Raw Mode selection                                */
    using RX_ADC_POL                = regbits< type,  3,  1 >;  /**< Receive ADC Polarity                                  */
    using RX_DEC_FILT_OSR           = regbits< type,  4,  3 >;  /**< Decimation Filter Oversampling                        */
    using RX_FSK_ZB_SEL             = regbits< type,  8,  1 >;  /**< FSK / 802.15.4 demodulator select                     */
    using RX_NORM_EN                = regbits< type,  9,  1 >;  /**< Normalizer Enable                                     */
    using RX_RSSI_EN                = regbits< type, 10,  1 >;  /**< RSSI Measurement Enable                               */
    using RX_AGC_EN                 = regbits< type, 11,  1 >;  /**< AGC Global Enable                                     */
    using RX_DCOC_EN                = regbits< type, 12,  1 >;  /**< DCOC Enable                                           */
    using RX_DCOC_CAL_EN            = regbits< type, 13,  1 >;  /**< DCOC Calibration Enable                               */
    using RX_IQ_SWAP                = regbits< type, 14,  1 >;  /**< RX IQ Swap                                            */
    using RX_DC_RESID_EN            = regbits< type, 15,  1 >;  /**< DC Residual Enable                                    */
    using RX_SRC_EN                 = regbits< type, 16,  1 >;  /**< RX Sample Rate Converter Enable                       */
    using RX_SRC_RATE               = regbits< type, 17,  1 >;  /**< RX Sample Rate Converter Rate Selections              */
    using RX_DMA_DTEST_EN           = regbits< type, 18,  1 >;  /**< RX DMA and DTEST enable                               */
    using RX_DEC_FILT_GAIN          = regbits< type, 20,  5 >;  /**< Decimation Filter Fractional Gain                     */
    using RX_DEC_FILT_HZD_CORR_DIS  = regbits< type, 25,  1 >;  /**< Decimator filter hazard correction disable            */
    using RX_DEC_FILT_HAZARD        = regbits< type, 28,  1 >;  /**< Decimator output, hazard condition detected           */
    using RX_RSSI_FILT_HAZARD       = regbits< type, 29,  1 >;  /**< Decimator output for RSSI, hazard condition detected  */
    using RX_DEC_FILT_SAT_I         = regbits< type, 30,  1 >;  /**< Decimator output, saturation detected for I channel   */
    using RX_DEC_FILT_SAT_Q         = regbits< type, 31,  1 >;  /**< Decimator output, saturation detected for Q channel   */
  };

  /**
   * AGC Control 0
   */
  struct AGC_CTRL_0
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using SLOW_AGC_EN           = regbits< type,  0,  1 >;  /**< Slow AGC Enable              */
    using SLOW_AGC_SRC          = regbits< type,  1,  2 >;  /**< Slow AGC Source Selection    */
    using AGC_FREEZE_EN         = regbits< type,  3,  1 >;  /**< AGC Freeze Enable            */
    using AGC_FREEZE_PRE_OR_AA  = regbits< type,  4,  1 >;  /**< AGC Freeze Source Selection  */
    using AGC_UP_EN             = regbits< type,  6,  1 >;  /**< AGC Up Enable                */
    using AGC_UP_SRC            = regbits< type,  7,  1 >;  /**< AGC Up Source                */
    using AGC_DOWN_BBA_STEP_SZ  = regbits< type,  8,  4 >;  /**< AGC_DOWN_BBA_STEP_SZ         */
    using AGC_DOWN_LNA_STEP_SZ  = regbits< type, 12,  4 >;  /**< AGC_DOWN_LNA_STEP_SZ         */
    using AGC_UP_RSSI_THRESH    = regbits< type, 16,  8 >;  /**< AGC UP RSSI Threshold        */
    using AGC_DOWN_RSSI_THRESH  = regbits< type, 24,  8 >;  /**< AGC DOWN RSSI Threshold      */
  };

  /**
   * AGC Control 1
   */
  struct AGC_CTRL_1
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using BBA_ALT_CODE          = regbits< type,  0,  4 >;  /**< BBA_ALT_CODE          */
    using LNA_ALT_CODE          = regbits< type,  4,  8 >;  /**< LNA_ALT_CODE          */
    using LNA_USER_GAIN         = regbits< type, 12,  4 >;  /**< LNA_USER_GAIN         */
    using BBA_USER_GAIN         = regbits< type, 16,  4 >;  /**< BBA_USER_GAIN         */
    using USER_LNA_GAIN_EN      = regbits< type, 20,  1 >;  /**< User LNA Gain Enable  */
    using USER_BBA_GAIN_EN      = regbits< type, 21,  1 >;  /**< User BBA Gain Enable  */
    using PRESLOW_EN            = regbits< type, 22,  1 >;  /**< Pre-slow Enable       */
    using LNA_GAIN_SETTLE_TIME  = regbits< type, 24,  8 >;  /**< LNA_GAIN_SETTLE_TIME  */
  };

  /**
   * AGC Control 2
   */
  struct AGC_CTRL_2
  : public reg< uint32_t, base_addr + 0xc, rw, 0xA69000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0xA69000 >;

    using BBA_PDET_RST          = regbits< type,  0,  1 >;  /**< BBA PDET Reset           */
    using TZA_PDET_RST          = regbits< type,  1,  1 >;  /**< TZA PDET Reset           */
    using MAN_PDET_RST          = regbits< type,  2,  1 >;  /**< MAN PDET Reset           */
    using BBA_GAIN_SETTLE_TIME  = regbits< type,  4,  8 >;  /**< BBA Gain Settle Time     */
    using BBA_PDET_SEL_LO       = regbits< type, 12,  3 >;  /**< BBA PDET Threshold Low   */
    using BBA_PDET_SEL_HI       = regbits< type, 15,  3 >;  /**< BBA PDET Threshold High  */
    using TZA_PDET_SEL_LO       = regbits< type, 18,  3 >;  /**< TZA PDET Threshold Low   */
    using TZA_PDET_SEL_HI       = regbits< type, 21,  3 >;  /**< TZA PDET Threshold High  */
    using AGC_FAST_EXPIRE       = regbits< type, 24,  6 >;  /**< AGC Fast Expire          */
    using LNA_LG_ON_OVR         = regbits< type, 30,  1 >;  /**< LNA_LG_ON override       */
    using LNA_HG_ON_OVR         = regbits< type, 31,  1 >;  /**< LNA_HG_ON override       */
  };

  /**
   * AGC Control 3
   */
  struct AGC_CTRL_3
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using AGC_UNFREEZE_TIME  = regbits< type,  0, 13 >;  /**< AGC Unfreeze Time          */
    using AGC_PDET_LO_DLY    = regbits< type, 13,  3 >;  /**< AGC Peak Detect Low Delay  */
    using AGC_RSSI_DELT_H2S  = regbits< type, 16,  7 >;  /**< AGC_RSSI_DELT_H2S          */
    using AGC_H2S_STEP_SZ    = regbits< type, 23,  5 >;  /**< AGC_H2S_STEP_SZ            */
    using AGC_UP_STEP_SZ     = regbits< type, 28,  4 >;  /**< AGC Up Step Size           */
  };

  /**
   * AGC Status
   */
  struct AGC_STAT
  : public reg< uint32_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0 >;

    using BBA_PDET_LO_STAT  = regbits< type,  0,  1 >;  /**< BBA Peak Detector Low Status   */
    using BBA_PDET_HI_STAT  = regbits< type,  1,  1 >;  /**< BBA Peak Detector High Status  */
    using TZA_PDET_LO_STAT  = regbits< type,  2,  1 >;  /**< TZA Peak Detector Low Status   */
    using TZA_PDET_HI_STAT  = regbits< type,  3,  1 >;  /**< TZA Peak Detector High Status  */
    using CURR_AGC_IDX      = regbits< type,  4,  5 >;  /**< Current AGC Gain Index         */
    using AGC_FROZEN        = regbits< type,  9,  1 >;  /**< AGC Frozen Status              */
    using RSSI_ADC_RAW      = regbits< type, 16,  8 >;  /**< ADC RAW RSSI Reading           */
  };

  /**
   * RSSI Control 0
   */
  struct RSSI_CTRL_0
  : public reg< uint32_t, base_addr + 0x18, rw, 0x300000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x300000 >;

    using RSSI_USE_VALS       = regbits< type,  0,  1 >;  /**< RSSI Values Selection       */
    using RSSI_HOLD_SRC       = regbits< type,  1,  2 >;  /**< RSSI Hold Source Selection  */
    using RSSI_HOLD_EN        = regbits< type,  3,  1 >;  /**< RSSI Hold Enable            */
    using RSSI_IIR_CW_WEIGHT  = regbits< type,  5,  2 >;  /**< RSSI IIR CW Weighting       */
    using RSSI_N_WINDOW_AVG   = regbits< type,  8,  2 >;  /**< RSSI N Window Average       */
    using RSSI_HOLD_DELAY     = regbits< type, 10,  6 >;  /**< RSSI Hold Delay             */
    using RSSI_IIR_WEIGHT     = regbits< type, 16,  4 >;  /**< RSSI IIR Weighting          */
    using RSSI_VLD_SETTLE     = regbits< type, 20,  3 >;  /**< RSSI Valid Settle           */
    using RSSI_ADJ            = regbits< type, 24,  8 >;  /**< RSSI Adjustment             */
  };

  /**
   * RSSI Control 1
   */
  struct RSSI_CTRL_1
  : public reg< uint32_t, base_addr + 0x1c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0 >;

    using RSSI_OUT  = regbits< type, 24,  8 >;  /**< RSSI Reading  */
  };

  /**
   * RSSI DFT
   */
  struct RSSI_DFT
  : public reg< uint32_t, base_addr + 0x20, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 >;

    using DFT_MAG    = regbits< type,  0, 13 >;  /**< RSSI MAG  */
    using DFT_NOISE  = regbits< type, 16, 13 >;  /**< RSSI MAG  */
  };

  /**
   * DCOC Control 0
   */
  struct DCOC_CTRL_0
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using DCOC_MIDPWR_TRK_DIS  = regbits< type,  0,  1 >;  /**< DCOC Mid Power Tracking Disable           */
    using DCOC_MAN             = regbits< type,  1,  1 >;  /**< DCOC Manual Override                      */
    using DCOC_TRK_EST_OVR     = regbits< type,  2,  1 >;  /**< Override for the DCOC tracking estimator  */
    using DCOC_CORRECT_SRC     = regbits< type,  3,  1 >;  /**< DCOC Corrector Source                     */
    using DCOC_CORRECT_EN      = regbits< type,  4,  1 >;  /**< DCOC Correction Enable                    */
    using TRACK_FROM_ZERO      = regbits< type,  5,  1 >;  /**< Track from Zero                           */
    using BBA_CORR_POL         = regbits< type,  6,  1 >;  /**< BBA Correction Polarity                   */
    using TZA_CORR_POL         = regbits< type,  7,  1 >;  /**< TZA Correction Polarity                   */
    using DCOC_CAL_DURATION    = regbits< type,  8,  5 >;  /**< DCOC Calibration Duration                 */
    using DCOC_CORR_DLY        = regbits< type, 16,  5 >;  /**< DCOC Correction Delay                     */
    using DCOC_CORR_HOLD_TIME  = regbits< type, 24,  7 >;  /**< DCOC Correction Hold Time                 */
  };

  /**
   * DCOC Control 1
   */
  struct DCOC_CTRL_1
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using DCOC_SIGN_SCALE_IDX       = regbits< type,  0,  2 >;  /**< DCOC Sign Scaling                        */
    using DCOC_ALPHAC_SCALE_IDX     = regbits< type,  2,  3 >;  /**< DCOC Alpha-C Scaling                     */
    using DCOC_ALPHA_RADIUS_IDX     = regbits< type,  5,  3 >;  /**< Alpha-R Scaling                          */
    using DCOC_TRK_EST_GS_CNT       = regbits< type, 12,  3 >;  /**< DCOC Tracking Estimator Gearshift Count  */
    using DCOC_SIGN_SCALE_GS_IDX    = regbits< type, 16,  2 >;  /**< DCOC Sign Scaling for Gearshift          */
    using DCOC_ALPHAC_SCALE_GS_IDX  = regbits< type, 18,  3 >;  /**< DCOC Alpha-C Scaling for Gearshift       */
    using DCOC_ALPHA_RADIUS_GS_IDX  = regbits< type, 21,  3 >;  /**< Alpha-R Scaling for Gearshift            */
    using DCOC_TRK_MIN_AGC_IDX      = regbits< type, 24,  5 >;  /**< DCOC Tracking Minimum AGC Table Index    */
  };

  /**
   * DCOC DAC Initialization
   */
  struct DCOC_DAC_INIT
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x80802020 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x80802020 >;

    using BBA_DCOC_INIT_I  = regbits< type,  0,  6 >;  /**< DCOC BBA Init I  */
    using BBA_DCOC_INIT_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Init Q  */
    using TZA_DCOC_INIT_I  = regbits< type, 16,  8 >;  /**< DCOC TZA Init I  */
    using TZA_DCOC_INIT_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Init Q  */
  };

  /**
   * DCOC Digital Correction Manual Override
   */
  struct DCOC_DIG_MAN
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using DIG_DCOC_INIT_I  = regbits< type,  0, 12 >;  /**< DCOC DIG Init I  */
    using DIG_DCOC_INIT_Q  = regbits< type, 16, 12 >;  /**< DCOC DIG Init Q  */
  };

  /**
   * DCOC Calibration Gain
   */
  struct DCOC_CAL_GAIN
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using DCOC_BBA_CAL_GAIN1  = regbits< type,  8,  4 >;  /**< DCOC BBA Calibration Gain 1  */
    using DCOC_LNA_CAL_GAIN1  = regbits< type, 12,  4 >;  /**< DCOC LNA Calibration Gain 1  */
    using DCOC_BBA_CAL_GAIN2  = regbits< type, 16,  4 >;  /**< DCOC BBA Calibration Gain 2  */
    using DCOC_LNA_CAL_GAIN2  = regbits< type, 20,  4 >;  /**< DCOC LNA Calibration Gain 2  */
    using DCOC_BBA_CAL_GAIN3  = regbits< type, 24,  4 >;  /**< DCOC BBA Calibration Gain 3  */
    using DCOC_LNA_CAL_GAIN3  = regbits< type, 28,  4 >;  /**< DCOC LNA Calibration Gain 3  */
  };

  /**
   * DCOC Status
   */
  struct DCOC_STAT
  : public reg< uint32_t, base_addr + 0x38, ro, 0x80802020 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x80802020 >;

    using BBA_DCOC_I  = regbits< type,  0,  6 >;  /**< DCOC BBA DAC I  */
    using BBA_DCOC_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA DAC Q  */
    using TZA_DCOC_I  = regbits< type, 16,  8 >;  /**< DCOC TZA DAC I  */
    using TZA_DCOC_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA DAC Q  */
  };

  /**
   * DCOC DC Estimate
   */
  struct DCOC_DC_EST
  : public reg< uint32_t, base_addr + 0x3c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0 >;

    using DC_EST_I  = regbits< type,  0, 12 >;  /**< DCOC DC Estimate I  */
    using DC_EST_Q  = regbits< type, 16, 12 >;  /**< DCOC DC Estimate Q  */
  };

  /**
   * DCOC Calibration Reciprocals
   */
  struct DCOC_CAL_RCP
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using DCOC_TMP_CALC_RECIP  = regbits< type,  0, 11 >;  /**< DCOC Calculation Reciprocal   */
    using ALPHA_CALC_RECIP     = regbits< type, 16, 11 >;  /**< Alpha Calculation Reciprocal  */
  };

  /**
   * IQMC Control
   */
  struct IQMC_CTRL
  : public reg< uint32_t, base_addr + 0x48, rw, 0x4008000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x4008000 >;

    using IQMC_CAL_EN       = regbits< type,  0,  1 >;  /**< IQ Mismatch Cal Enable                */
    using IQMC_NUM_ITER     = regbits< type,  8,  8 >;  /**< IQ Mismatch Cal Num Iter              */
    using IQMC_DC_GAIN_ADJ  = regbits< type, 16, 11 >;  /**< IQ Mismatch Correction DC Gain Coeff  */
  };

  /**
   * IQMC Calibration
   */
  struct IQMC_CAL
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x400 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x400 >;

    using IQMC_GAIN_ADJ   = regbits< type,  0, 11 >;  /**< IQ Mismatch Correction Gain Coeff   */
    using IQMC_PHASE_ADJ  = regbits< type, 16, 12 >;  /**< IQ Mismatch Correction Phase Coeff  */
  };

  /**
   * LNA_GAIN Step Values 3..0
   */
  struct LNA_GAIN_VAL_3_0
  : public reg< uint32_t, base_addr + 0x50, rw, 0x3809321D >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x3809321D >;

    using LNA_GAIN_VAL_0  = regbits< type,  0,  8 >;  /**< LNA_GAIN step 0  */
    using LNA_GAIN_VAL_1  = regbits< type,  8,  8 >;  /**< LNA_GAIN step 1  */
    using LNA_GAIN_VAL_2  = regbits< type, 16,  8 >;  /**< LNA_GAIN step 2  */
    using LNA_GAIN_VAL_3  = regbits< type, 24,  8 >;  /**< LNA_GAIN step 3  */
  };

  /**
   * LNA_GAIN Step Values 7..4
   */
  struct LNA_GAIN_VAL_7_4
  : public reg< uint32_t, base_addr + 0x54, rw, 0x8B745D4F >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x8B745D4F >;

    using LNA_GAIN_VAL_4  = regbits< type,  0,  8 >;  /**< LNA_GAIN step 4  */
    using LNA_GAIN_VAL_5  = regbits< type,  8,  8 >;  /**< LNA_GAIN step 5  */
    using LNA_GAIN_VAL_6  = regbits< type, 16,  8 >;  /**< LNA_GAIN step 6  */
    using LNA_GAIN_VAL_7  = regbits< type, 24,  8 >;  /**< LNA_GAIN step 7  */
  };

  /**
   * LNA_GAIN Step Values 8
   */
  struct LNA_GAIN_VAL_8
  : public reg< uint32_t, base_addr + 0x58, rw, 0xB6A1 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0xB6A1 >;

    // fixme: Field name equals parent register name: LNA_GAIN_VAL_8
    using LNA_GAIN_VAL_8_ = regbits< type,  0,  8 >;  /**< LNA_GAIN step 8  */
    using LNA_GAIN_VAL_9  = regbits< type,  8,  8 >;  /**< LNA_GAIN step 9  */
  };

  /**
   * BBA Resistor Tune Values 7..0
   */
  struct BBA_RES_TUNE_VAL_7_0
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0 >;

    using BBA_RES_TUNE_VAL_0  = regbits< type,  0,  4 >;  /**< BBA Resistor Tune Step 0  */
    using BBA_RES_TUNE_VAL_1  = regbits< type,  4,  4 >;  /**< BBA Resistor Tune Step 1  */
    using BBA_RES_TUNE_VAL_2  = regbits< type,  8,  4 >;  /**< BBA Resistor Tune Step 2  */
    using BBA_RES_TUNE_VAL_3  = regbits< type, 12,  4 >;  /**< BBA Resistor Tune Step 3  */
    using BBA_RES_TUNE_VAL_4  = regbits< type, 16,  4 >;  /**< BBA Resistor Tune Step 4  */
    using BBA_RES_TUNE_VAL_5  = regbits< type, 20,  4 >;  /**< BBA Resistor Tune Step 5  */
    using BBA_RES_TUNE_VAL_6  = regbits< type, 24,  4 >;  /**< BBA Resistor Tune Step 6  */
    using BBA_RES_TUNE_VAL_7  = regbits< type, 28,  4 >;  /**< BBA Resistor Tune Step 7  */
  };

  /**
   * BBA Resistor Tune Values 10..8
   */
  struct BBA_RES_TUNE_VAL_10_8
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using BBA_RES_TUNE_VAL_8   = regbits< type,  0,  4 >;  /**< BBA Resistor Tune Step 8   */
    using BBA_RES_TUNE_VAL_9   = regbits< type,  4,  4 >;  /**< BBA Resistor Tune Step 9   */
    using BBA_RES_TUNE_VAL_10  = regbits< type,  8,  4 >;  /**< BBA Resistor Tune Step 10  */
  };

  /**
   * LNA Linear Gain Values 2..0
   */
  struct LNA_GAIN_LIN_VAL_2_0
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using LNA_GAIN_LIN_VAL_0  = regbits< type,  0, 10 >;  /**< LNA Linear Gain Step 0  */
    using LNA_GAIN_LIN_VAL_1  = regbits< type, 10, 10 >;  /**< LNA Linear Gain Step 1  */
    using LNA_GAIN_LIN_VAL_2  = regbits< type, 20, 10 >;  /**< LNA Linear Gain Step 2  */
  };

  /**
   * LNA Linear Gain Values 5..3
   */
  struct LNA_GAIN_LIN_VAL_5_3
  : public reg< uint32_t, base_addr + 0x68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0 >;

    using LNA_GAIN_LIN_VAL_3  = regbits< type,  0, 10 >;  /**< LNA Linear Gain Step 3  */
    using LNA_GAIN_LIN_VAL_4  = regbits< type, 10, 10 >;  /**< LNA Linear Gain Step 4  */
    using LNA_GAIN_LIN_VAL_5  = regbits< type, 20, 10 >;  /**< LNA Linear Gain Step 5  */
  };

  /**
   * LNA Linear Gain Values 8..6
   */
  struct LNA_GAIN_LIN_VAL_8_6
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using LNA_GAIN_LIN_VAL_6  = regbits< type,  0, 10 >;  /**< LNA Linear Gain Step 6  */
    using LNA_GAIN_LIN_VAL_7  = regbits< type, 10, 10 >;  /**< LNA Linear Gain Step 7  */
    using LNA_GAIN_LIN_VAL_8  = regbits< type, 20, 10 >;  /**< LNA Linear Gain Step 8  */
  };

  /**
   * LNA Linear Gain Values 9
   */
  struct LNA_GAIN_LIN_VAL_9
  : public reg< uint32_t, base_addr + 0x70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0 >;

    // fixme: Field name equals parent register name: LNA_GAIN_LIN_VAL_9
    using LNA_GAIN_LIN_VAL_9_ = regbits< type,  0, 10 >;  /**< LNA Linear Gain Step 9  */
  };

  /**
   * BBA Resistor Tune Values 3..0
   */
  struct BBA_RES_TUNE_LIN_VAL_3_0
  : public reg< uint32_t, base_addr + 0x74, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0 >;

    using BBA_RES_TUNE_LIN_VAL_0  = regbits< type,  0,  8 >;  /**< BBA Resistor Tune Linear Gain Step 0  */
    using BBA_RES_TUNE_LIN_VAL_1  = regbits< type,  8,  8 >;  /**< BBA Resistor Tune Linear Gain Step 1  */
    using BBA_RES_TUNE_LIN_VAL_2  = regbits< type, 16,  8 >;  /**< BBA Resistor Tune Linear Gain Step 2  */
    using BBA_RES_TUNE_LIN_VAL_3  = regbits< type, 24,  8 >;  /**< BBA Resistor Tune Linear Gain Step 3  */
  };

  /**
   * BBA Resistor Tune Values 7..4
   */
  struct BBA_RES_TUNE_LIN_VAL_7_4
  : public reg< uint32_t, base_addr + 0x78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0 >;

    using BBA_RES_TUNE_LIN_VAL_4  = regbits< type,  0,  8 >;  /**< BBA Resistor Tune Linear Gain Step 4  */
    using BBA_RES_TUNE_LIN_VAL_5  = regbits< type,  8,  8 >;  /**< BBA Resistor Tune Linear Gain Step 5  */
    using BBA_RES_TUNE_LIN_VAL_6  = regbits< type, 16,  8 >;  /**< BBA Resistor Tune Linear Gain Step 6  */
    using BBA_RES_TUNE_LIN_VAL_7  = regbits< type, 24,  8 >;  /**< BBA Resistor Tune Linear Gain Step 7  */
  };

  /**
   * BBA Resistor Tune Values 10..8
   */
  struct BBA_RES_TUNE_LIN_VAL_10_8
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0 >;

    using BBA_RES_TUNE_LIN_VAL_8   = regbits< type,  0, 10 >;  /**< BBA Resistor Tune Linear Gain Step 8   */
    using BBA_RES_TUNE_LIN_VAL_9   = regbits< type, 10, 10 >;  /**< BBA Resistor Tune Linear Gain Step 9   */
    using BBA_RES_TUNE_LIN_VAL_10  = regbits< type, 20, 10 >;  /**< BBA Resistor Tune Linear Gain Step 10  */
  };

  /**
   * AGC Gain Tables Step 03..00
   */
  struct AGC_GAIN_TBL_03_00
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using BBA_GAIN_00  = regbits< type,  0,  4 >;  /**< BBA Gain 00  */
    using LNA_GAIN_00  = regbits< type,  4,  4 >;  /**< LNA Gain 00  */
    using BBA_GAIN_01  = regbits< type,  8,  4 >;  /**< BBA Gain 01  */
    using LNA_GAIN_01  = regbits< type, 12,  4 >;  /**< LNA Gain 01  */
    using BBA_GAIN_02  = regbits< type, 16,  4 >;  /**< BBA Gain 02  */
    using LNA_GAIN_02  = regbits< type, 20,  4 >;  /**< LNA Gain 02  */
    using BBA_GAIN_03  = regbits< type, 24,  4 >;  /**< BBA Gain 03  */
    using LNA_GAIN_03  = regbits< type, 28,  4 >;  /**< LNA Gain 03  */
  };

  /**
   * AGC Gain Tables Step 07..04
   */
  struct AGC_GAIN_TBL_07_04
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using BBA_GAIN_04  = regbits< type,  0,  4 >;  /**< BBA Gain 04  */
    using LNA_GAIN_04  = regbits< type,  4,  4 >;  /**< LNA Gain 04  */
    using BBA_GAIN_05  = regbits< type,  8,  4 >;  /**< BBA Gain 05  */
    using LNA_GAIN_05  = regbits< type, 12,  4 >;  /**< LNA Gain 05  */
    using BBA_GAIN_06  = regbits< type, 16,  4 >;  /**< BBA Gain 06  */
    using LNA_GAIN_06  = regbits< type, 20,  4 >;  /**< LNA Gain 06  */
    using BBA_GAIN_07  = regbits< type, 24,  4 >;  /**< BBA Gain 07  */
    using LNA_GAIN_07  = regbits< type, 28,  4 >;  /**< LNA Gain 07  */
  };

  /**
   * AGC Gain Tables Step 11..08
   */
  struct AGC_GAIN_TBL_11_08
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using BBA_GAIN_08  = regbits< type,  0,  4 >;  /**< BBA Gain 08  */
    using LNA_GAIN_08  = regbits< type,  4,  4 >;  /**< LNA Gain 08  */
    using BBA_GAIN_09  = regbits< type,  8,  4 >;  /**< BBA Gain 09  */
    using LNA_GAIN_09  = regbits< type, 12,  4 >;  /**< LNA Gain 09  */
    using BBA_GAIN_10  = regbits< type, 16,  4 >;  /**< BBA Gain 10  */
    using LNA_GAIN_10  = regbits< type, 20,  4 >;  /**< LNA Gain 10  */
    using BBA_GAIN_11  = regbits< type, 24,  4 >;  /**< BBA Gain 11  */
    using LNA_GAIN_11  = regbits< type, 28,  4 >;  /**< LNA Gain 11  */
  };

  /**
   * AGC Gain Tables Step 15..12
   */
  struct AGC_GAIN_TBL_15_12
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0 >;

    using BBA_GAIN_12  = regbits< type,  0,  4 >;  /**< BBA Gain 12  */
    using LNA_GAIN_12  = regbits< type,  4,  4 >;  /**< LNA Gain 12  */
    using BBA_GAIN_13  = regbits< type,  8,  4 >;  /**< BBA Gain 13  */
    using LNA_GAIN_13  = regbits< type, 12,  4 >;  /**< LNA Gain 13  */
    using BBA_GAIN_14  = regbits< type, 16,  4 >;  /**< BBA Gain 14  */
    using LNA_GAIN_14  = regbits< type, 20,  4 >;  /**< LNA Gain 14  */
    using BBA_GAIN_15  = regbits< type, 24,  4 >;  /**< BBA Gain 15  */
    using LNA_GAIN_15  = regbits< type, 28,  4 >;  /**< LNA Gain 15  */
  };

  /**
   * AGC Gain Tables Step 19..16
   */
  struct AGC_GAIN_TBL_19_16
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using BBA_GAIN_16  = regbits< type,  0,  4 >;  /**< BBA Gain 16   */
    using LNA_GAIN_16  = regbits< type,  4,  4 >;  /**< LNA Gain 16   */
    using BBA_GAIN_17  = regbits< type,  8,  4 >;  /**< BBA Gain 17   */
    using LNA_GAIN_17  = regbits< type, 12,  4 >;  /**< LNA Gain 17   */
    using BBA_GAIN_18  = regbits< type, 16,  4 >;  /**< BBA Gain 18   */
    using LNA_GAIN_18  = regbits< type, 20,  4 >;  /**< LNA Gain 18   */
    using BBA_GAIN_19  = regbits< type, 24,  4 >;  /**< BBA Gain 193  */
    using LNA_GAIN_19  = regbits< type, 28,  4 >;  /**< LNA Gain 19   */
  };

  /**
   * AGC Gain Tables Step 23..20
   */
  struct AGC_GAIN_TBL_23_20
  : public reg< uint32_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0 >;

    using BBA_GAIN_20  = regbits< type,  0,  4 >;  /**< BBA Gain 20  */
    using LNA_GAIN_20  = regbits< type,  4,  4 >;  /**< LNA Gain 20  */
    using BBA_GAIN_21  = regbits< type,  8,  4 >;  /**< BBA Gain 21  */
    using LNA_GAIN_21  = regbits< type, 12,  4 >;  /**< LNA Gain 21  */
    using BBA_GAIN_22  = regbits< type, 16,  4 >;  /**< BBA Gain 22  */
    using LNA_GAIN_22  = regbits< type, 20,  4 >;  /**< LNA Gain 22  */
    using BBA_GAIN_23  = regbits< type, 24,  4 >;  /**< BBA Gain 23  */
    using LNA_GAIN_23  = regbits< type, 28,  4 >;  /**< LNA Gain 23  */
  };

  /**
   * AGC Gain Tables Step 26..24
   */
  struct AGC_GAIN_TBL_26_24
  : public reg< uint32_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0 >;

    using BBA_GAIN_24  = regbits< type,  0,  4 >;  /**< BBA Gain 24  */
    using LNA_GAIN_24  = regbits< type,  4,  4 >;  /**< LNA Gain 24  */
    using BBA_GAIN_25  = regbits< type,  8,  4 >;  /**< BBA Gain 25  */
    using LNA_GAIN_25  = regbits< type, 12,  4 >;  /**< LNA Gain 25  */
    using BBA_GAIN_26  = regbits< type, 16,  4 >;  /**< BBA Gain 26  */
    using LNA_GAIN_26  = regbits< type, 20,  4 >;  /**< LNA Gain 26  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_0
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_1
  : public reg< uint32_t, base_addr + 0xa4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_2
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_3
  : public reg< uint32_t, base_addr + 0xac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_4
  : public reg< uint32_t, base_addr + 0xb0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_5
  : public reg< uint32_t, base_addr + 0xb4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_6
  : public reg< uint32_t, base_addr + 0xb8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_7
  : public reg< uint32_t, base_addr + 0xbc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_8
  : public reg< uint32_t, base_addr + 0xc0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_9
  : public reg< uint32_t, base_addr + 0xc4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_10
  : public reg< uint32_t, base_addr + 0xc8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_11
  : public reg< uint32_t, base_addr + 0xcc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_12
  : public reg< uint32_t, base_addr + 0xd0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_13
  : public reg< uint32_t, base_addr + 0xd4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd4, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_14
  : public reg< uint32_t, base_addr + 0xd8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_15
  : public reg< uint32_t, base_addr + 0xdc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xdc, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_16
  : public reg< uint32_t, base_addr + 0xe0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_17
  : public reg< uint32_t, base_addr + 0xe4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_18
  : public reg< uint32_t, base_addr + 0xe8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_19
  : public reg< uint32_t, base_addr + 0xec, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xec, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_20
  : public reg< uint32_t, base_addr + 0xf0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_21
  : public reg< uint32_t, base_addr + 0xf4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_22
  : public reg< uint32_t, base_addr + 0xf8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf8, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_23
  : public reg< uint32_t, base_addr + 0xfc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfc, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_24
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_25
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_26
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using DCOC_BBA_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBA I-channel offset  */
    using DCOC_BBA_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBA Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC BBA DAC Step
   */
  struct DCOC_BBA_STEP
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using BBA_DCOC_STEP_RECIP  = regbits< type,  0, 13 >;  /**< DCOC BBA Reciprocal of Step Size  */
    using BBA_DCOC_STEP        = regbits< type, 16,  9 >;  /**< DCOC BBA Step Size                */
  };

  /**
   * DCOC TZA DAC Step 0
   */
  struct DCOC_TZA_STEP_0
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using DCOC_TZA_STEP_RCP_0   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_0   */
    using DCOC_TZA_STEP_GAIN_0  = regbits< type, 16, 12 >;  /**< DCOC_TZA_STEP_GAIN_0  */
  };

  /**
   * DCOC TZA DAC Step 1
   */
  struct DCOC_TZA_STEP_1
  : public reg< uint32_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0 >;

    using DCOC_TZA_STEP_RCP_1   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_1   */
    using DCOC_TZA_STEP_GAIN_1  = regbits< type, 16, 12 >;  /**< DCOC_TZA_STEP_GAIN_1  */
  };

  /**
   * DCOC TZA DAC Step 2
   */
  struct DCOC_TZA_STEP_2
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using DCOC_TZA_STEP_RCP_2   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_2   */
    using DCOC_TZA_STEP_GAIN_2  = regbits< type, 16, 12 >;  /**< DCOC_TZA_STEP_GAIN_2  */
  };

  /**
   * DCOC TZA DAC Step 3
   */
  struct DCOC_TZA_STEP_3
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0 >;

    using DCOC_TZA_STEP_RCP_3   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_3   */
    using DCOC_TZA_STEP_GAIN_3  = regbits< type, 16, 12 >;  /**< DCOC_TZA_STEP_GAIN_3  */
  };

  /**
   * DCOC TZA DAC Step 4
   */
  struct DCOC_TZA_STEP_4
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using DCOC_TZA_STEP_RCP_4   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_4   */
    using DCOC_TZA_STEP_GAIN_4  = regbits< type, 16, 12 >;  /**< DCOC_TZA_STEP_GAIN_4  */
  };

  /**
   * DCOC TZA DAC Step 5
   */
  struct DCOC_TZA_STEP_5
  : public reg< uint32_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0 >;

    using DCOC_TZA_STEP_RCP_5   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_5   */
    using DCOC_TZA_STEP_GAIN_5  = regbits< type, 16, 12 >;  /**< DCOC_TZA_STEP_GAIN_5  */
  };

  /**
   * DCOC TZA DAC Step 6
   */
  struct DCOC_TZA_STEP_6
  : public reg< uint32_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0 >;

    using DCOC_TZA_STEP_RCP_6   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_6   */
    using DCOC_TZA_STEP_GAIN_6  = regbits< type, 16, 12 >;  /**< DCOC_TZA_STEP_GAIN_6  */
  };

  /**
   * DCOC TZA DAC Step 7
   */
  struct DCOC_TZA_STEP_7
  : public reg< uint32_t, base_addr + 0x12c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0 >;

    using DCOC_TZA_STEP_RCP_7   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_7   */
    using DCOC_TZA_STEP_GAIN_7  = regbits< type, 16, 13 >;  /**< DCOC_TZA_STEP_GAIN_7  */
  };

  /**
   * DCOC TZA DAC Step 5
   */
  struct DCOC_TZA_STEP_8
  : public reg< uint32_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0 >;

    using DCOC_TZA_STEP_RCP_8   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_8   */
    using DCOC_TZA_STEP_GAIN_8  = regbits< type, 16, 13 >;  /**< DCOC_TZA_STEP_GAIN_8  */
  };

  /**
   * DCOC TZA DAC Step 9
   */
  struct DCOC_TZA_STEP_9
  : public reg< uint32_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0 >;

    using DCOC_TZA_STEP_RCP_9   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_9   */
    using DCOC_TZA_STEP_GAIN_9  = regbits< type, 16, 14 >;  /**< DCOC_TZA_STEP_GAIN_9  */
  };

  /**
   * DCOC TZA DAC Step 10
   */
  struct DCOC_TZA_STEP_10
  : public reg< uint32_t, base_addr + 0x138, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x138, rw, 0 >;

    using DCOC_TZA_STEP_RCP_10   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP_10   */
    using DCOC_TZA_STEP_GAIN_10  = regbits< type, 16, 14 >;  /**< DCOC_TZA_STEP_GAIN_10  */
  };

  /**
   * DCOC Calibration Alpha
   */
  struct DCOC_CAL_ALPHA
  : public reg< uint32_t, base_addr + 0x168, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x168, ro, 0 >;

    using DCOC_CAL_ALPHA_I  = regbits< type,  0, 11 >;  /**< DCOC Calibration I-channel ALPHA constant  */
    using DCOC_CAL_ALPHA_Q  = regbits< type, 16, 11 >;  /**< DCOC_CAL_ALPHA_Q                           */
  };

  /**
   * DCOC Calibration Beta Q
   */
  struct DCOC_CAL_BETA_Q
  : public reg< uint32_t, base_addr + 0x16c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x16c, ro, 0 >;

    // fixme: Field name equals parent register name: DCOC_CAL_BETA_Q
    using DCOC_CAL_BETA_Q_ = regbits< type,  0, 17 >;  /**< DCOC_CAL_BETA_Q  */
  };

  /**
   * DCOC Calibration Beta I
   */
  struct DCOC_CAL_BETA_I
  : public reg< uint32_t, base_addr + 0x170, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x170, ro, 0 >;

    // fixme: Field name equals parent register name: DCOC_CAL_BETA_I
    using DCOC_CAL_BETA_I_ = regbits< type,  0, 17 >;  /**< DCOC_CAL_BETA_I  */
  };

  /**
   * DCOC Calibration Gamma
   */
  struct DCOC_CAL_GAMMA
  : public reg< uint32_t, base_addr + 0x174, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x174, ro, 0 >;

    using DCOC_CAL_GAMMA_I  = regbits< type,  0, 16 >;  /**< DCOC_CAL_GAMMA_I  */
    using DCOC_CAL_GAMMA_Q  = regbits< type, 16, 16 >;  /**< DCOC_CAL_GAMMA_Q  */
  };

  /**
   * DCOC Calibration IIR
   */
  struct DCOC_CAL_IIR
  : public reg< uint32_t, base_addr + 0x178, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x178, rw, 0 >;

    using DCOC_CAL_IIR1A_IDX  = regbits< type,  0,  2 >;  /**< DCOC Calibration IIR 1A Index  */
    using DCOC_CAL_IIR2A_IDX  = regbits< type,  2,  2 >;  /**< DCOC Calibration IIR 2A Index  */
    using DCOC_CAL_IIR3A_IDX  = regbits< type,  4,  2 >;  /**< DCOC Calibration IIR 3A Index  */
  };

  /**
   * DCOC Calibration Result
   */
  struct DCOC_CAL1
  : public reg< uint32_t, base_addr + 0x180, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, ro, 0 >;

    using DCOC_CAL_RES_I  = regbits< type,  0, 12 >;  /**< DCOC Calibration Result - I Channel  */
    using DCOC_CAL_RES_Q  = regbits< type, 16, 12 >;  /**< DCOC Calibration Result - Q Channel  */
  };

  /**
   * DCOC Calibration Result
   */
  struct DCOC_CAL2
  : public reg< uint32_t, base_addr + 0x184, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x184, ro, 0 >;

    using DCOC_CAL_RES_I  = regbits< type,  0, 12 >;  /**< DCOC Calibration Result - I Channel  */
    using DCOC_CAL_RES_Q  = regbits< type, 16, 12 >;  /**< DCOC Calibration Result - Q Channel  */
  };

  /**
   * DCOC Calibration Result
   */
  struct DCOC_CAL3
  : public reg< uint32_t, base_addr + 0x188, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x188, ro, 0 >;

    using DCOC_CAL_RES_I  = regbits< type,  0, 12 >;  /**< DCOC Calibration Result - I Channel  */
    using DCOC_CAL_RES_Q  = regbits< type, 16, 12 >;  /**< DCOC Calibration Result - Q Channel  */
  };

  /**
   * RX_DIG CCA ED LQI Control Register 0
   */
  struct CCA_ED_LQI_CTRL_0
  : public reg< uint32_t, base_addr + 0x190, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0 >;

    using LQI_CORR_THRESH   = regbits< type,  0,  8 >;  /**< LQI Correlation Threshold    */
    using CORR_CNTR_THRESH  = regbits< type,  8,  8 >;  /**< Correlation Count Threshold  */
    using LQI_CNTR          = regbits< type, 16,  8 >;  /**< LQI Counter                  */
    using SNR_ADJ           = regbits< type, 24,  6 >;  /**< SNR calculation adjustment   */
  };

  /**
   * RX_DIG CCA ED LQI Control Register 1
   */
  struct CCA_ED_LQI_CTRL_1
  : public reg< uint32_t, base_addr + 0x194, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x194, rw, 0 >;

    using RSSI_NOISE_AVG_DELAY   = regbits< type,  0,  6 >;  /**< RSSI Noise Averaging Delay      */
    using RSSI_NOISE_AVG_FACTOR  = regbits< type,  6,  3 >;  /**< RSSI Noise Averaging Factor     */
    using LQI_RSSI_WEIGHT        = regbits< type,  9,  3 >;  /**< LQI RSSI Weight                 */
    using LQI_RSSI_SENS          = regbits< type, 12,  4 >;  /**< LQI RSSI Sensitivity            */
    using SNR_LQI_DIS            = regbits< type, 16,  1 >;  /**< SNR LQI Disable                 */
    using SEL_SNR_MODE           = regbits< type, 17,  1 >;  /**< Select SNR Mode                 */
    using MEAS_TRANS_TO_IDLE     = regbits< type, 18,  1 >;  /**< Measurement Transition to IDLE  */
    using CCA1_ED_EN_DIS         = regbits< type, 19,  1 >;  /**< CCA1_ED_EN Disable              */
    using MAN_MEAS_COMPLETE      = regbits< type, 20,  1 >;  /**< Manual measurement complete     */
    using MAN_AA_MATCH           = regbits< type, 21,  1 >;  /**< Manual AA Match                 */
    using SNR_LQI_WEIGHT         = regbits< type, 24,  4 >;  /**< SNR LQI Weight                  */
    using LQI_BIAS               = regbits< type, 28,  4 >;  /**< LQI Bias.                       */
  };

  /**
   * RX_DIG CCA ED LQI Status Register 0
   */
  struct CCA_ED_LQI_STAT_0
  : public reg< uint32_t, base_addr + 0x198, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x198, ro, 0 >;

    using LQI_OUT        = regbits< type,  0,  8 >;  /**< LQI output            */
    using ED_OUT         = regbits< type,  8,  8 >;  /**< ED output             */
    using SNR_OUT        = regbits< type, 16,  8 >;  /**< SNR output            */
    using CCA1_STATE     = regbits< type, 24,  1 >;  /**< CCA1 State            */
    using MEAS_COMPLETE  = regbits< type, 25,  1 >;  /**< Measurement Complete  */
  };

  /**
   * Receive Channel Filter Coefficient 0
   */
  struct RX_CHF_COEF_0
  : public reg< uint32_t, base_addr + 0x1a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a0, rw, 0 >;

    using RX_CH_FILT_H0  = regbits< type,  0,  6 >;  /**< RX Channel Filter Coefficient 0  */
  };

  /**
   * Receive Channel Filter Coefficient 1
   */
  struct RX_CHF_COEF_1
  : public reg< uint32_t, base_addr + 0x1a4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a4, rw, 0 >;

    using RX_CH_FILT_H1  = regbits< type,  0,  6 >;  /**< RX Channel Filter Coefficient 1  */
  };

  /**
   * Receive Channel Filter Coefficient 2
   */
  struct RX_CHF_COEF_2
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0 >;

    using RX_CH_FILT_H2  = regbits< type,  0,  7 >;  /**< RX Channel Filter Coefficient 2  */
  };

  /**
   * Receive Channel Filter Coefficient 3
   */
  struct RX_CHF_COEF_3
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0 >;

    using RX_CH_FILT_H3  = regbits< type,  0,  7 >;  /**< RX Channel Filter Coefficient 3  */
  };

  /**
   * Receive Channel Filter Coefficient 4
   */
  struct RX_CHF_COEF_4
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0 >;

    using RX_CH_FILT_H4  = regbits< type,  0,  7 >;  /**< RX Channel Filter Coefficient 4  */
  };

  /**
   * Receive Channel Filter Coefficient 5
   */
  struct RX_CHF_COEF_5
  : public reg< uint32_t, base_addr + 0x1b4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b4, rw, 0 >;

    using RX_CH_FILT_H5  = regbits< type,  0,  7 >;  /**< RX Channel Filter Coefficient 5  */
  };

  /**
   * Receive Channel Filter Coefficient 6
   */
  struct RX_CHF_COEF_6
  : public reg< uint32_t, base_addr + 0x1b8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1b8, rw, 0 >;

    using RX_CH_FILT_H6  = regbits< type,  0,  8 >;  /**< RX Channel Filter Coefficient 6  */
  };

  /**
   * Receive Channel Filter Coefficient 7
   */
  struct RX_CHF_COEF_7
  : public reg< uint32_t, base_addr + 0x1bc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1bc, rw, 0 >;

    using RX_CH_FILT_H7  = regbits< type,  0,  8 >;  /**< RX Channel Filter Coefficient 7  */
  };

  /**
   * Receive Channel Filter Coefficient 8
   */
  struct RX_CHF_COEF_8
  : public reg< uint32_t, base_addr + 0x1c0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c0, rw, 0 >;

    using RX_CH_FILT_H8  = regbits< type,  0,  9 >;  /**< RX Channel Filter Coefficient 8  */
  };

  /**
   * Receive Channel Filter Coefficient 9
   */
  struct RX_CHF_COEF_9
  : public reg< uint32_t, base_addr + 0x1c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c4, rw, 0 >;

    using RX_CH_FILT_H9  = regbits< type,  0,  9 >;  /**< RX Channel Filter Coefficient 9  */
  };

  /**
   * Receive Channel Filter Coefficient 10
   */
  struct RX_CHF_COEF_10
  : public reg< uint32_t, base_addr + 0x1c8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c8, rw, 0 >;

    using RX_CH_FILT_H10  = regbits< type,  0, 10 >;  /**< RX Channel Filter Coefficient 10  */
  };

  /**
   * Receive Channel Filter Coefficient 11
   */
  struct RX_CHF_COEF_11
  : public reg< uint32_t, base_addr + 0x1cc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1cc, rw, 0 >;

    using RX_CH_FILT_H11  = regbits< type,  0, 10 >;  /**< RX Channel Filter Coefficient 11  */
  };

  /**
   * AGC Manual AGC Index
   */
  struct AGC_MAN_AGC_IDX
  : public reg< uint32_t, base_addr + 0x1d0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1d0, rw, 0 >;

    using AGC_MAN_IDX        = regbits< type, 16,  5 >;  /**< AGC Manual Index         */
    using AGC_MAN_IDX_EN     = regbits< type, 24,  1 >;  /**< AGC Manual Index Enable  */
    using AGC_DCOC_START_PT  = regbits< type, 25,  1 >;  /**< AGC DCOC Start Point     */
  };

  /**
   * DC Residual Control
   */
  struct DC_RESID_CTRL
  : public reg< uint32_t, base_addr + 0x1d4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1d4, rw, 0 >;

    using DC_RESID_NWIN         = regbits< type,  0,  7 >;  /**< DC Residual NWIN                     */
    using DC_RESID_ITER_FREEZE  = regbits< type,  8,  4 >;  /**< DC Residual Iteration Freeze         */
    using DC_RESID_ALPHA        = regbits< type, 12,  3 >;  /**< DC Residual Alpha                    */
    using DC_RESID_DLY          = regbits< type, 16,  3 >;  /**< DC Residual Delay                    */
    using DC_RESID_EXT_DC_EN    = regbits< type, 20,  1 >;  /**< DC Residual External DC Enable       */
    using DC_RESID_MIN_AGC_IDX  = regbits< type, 24,  5 >;  /**< DC Residual Minimum AGC Table Index  */
  };

  /**
   * DC Residual Estimate
   */
  struct DC_RESID_EST
  : public reg< uint32_t, base_addr + 0x1d8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1d8, ro, 0 >;

    using DC_RESID_OFFSET_I  = regbits< type,  0, 13 >;  /**< DC Residual Offset I  */
    using DC_RESID_OFFSET_Q  = regbits< type, 16, 13 >;  /**< DC Residual Offset Q  */
  };

  /**
   * RX RC Calibration Control0
   */
  struct RX_RCCAL_CTRL0
  : public reg< uint32_t, base_addr + 0x1dc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1dc, rw, 0 >;

    using BBA_RCCAL_OFFSET  = regbits< type,  0,  4 >;  /**< BBA RC Calibration value offset  */
    using BBA_RCCAL_MANUAL  = regbits< type,  4,  5 >;  /**< BBA RC Calibration manual value  */
    using BBA_RCCAL_DIS     = regbits< type,  9,  1 >;  /**< BBA RC Calibration Disable       */
    using RCCAL_SMP_DLY     = regbits< type, 12,  2 >;  /**< RC Calibration Sample Delay      */
    using RCCAL_COMP_INV    = regbits< type, 15,  1 >;  /**< RC Calibration comp_out Invert   */
    using TZA_RCCAL_OFFSET  = regbits< type, 16,  4 >;  /**< TZA RC Calibration value offset  */
    using TZA_RCCAL_MANUAL  = regbits< type, 20,  5 >;  /**< TZA RC Calibration manual value  */
    using TZA_RCCAL_DIS     = regbits< type, 25,  1 >;  /**< TZA RC Calibration Disable       */
  };

  /**
   * RX RC Calibration Control1
   */
  struct RX_RCCAL_CTRL1
  : public reg< uint32_t, base_addr + 0x1e0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1e0, rw, 0 >;

    using ADC_RCCAL_OFFSET   = regbits< type,  0,  4 >;  /**< ADC RC Calibration value offset   */
    using ADC_RCCAL_MANUAL   = regbits< type,  4,  5 >;  /**< ADC RC Calibration manual value   */
    using ADC_RCCAL_DIS      = regbits< type,  9,  1 >;  /**< ADC RC Calibration Disable        */
    using BBA2_RCCAL_OFFSET  = regbits< type, 16,  4 >;  /**< BBA2 RC Calibration value offset  */
    using BBA2_RCCAL_MANUAL  = regbits< type, 20,  5 >;  /**< BBA2 RC Calibration manual value  */
    using BBA2_RCCAL_DIS     = regbits< type, 25,  1 >;  /**< BBA2 RC Calibration Disable       */
  };

  /**
   * RX RC Calibration Status
   */
  struct RX_RCCAL_STAT
  : public reg< uint32_t, base_addr + 0x1e4, ro, 0x2104210 >
  {
    using type = reg< uint32_t, base_addr + 0x1e4, ro, 0x2104210 >;

    using RCCAL_CODE  = regbits< type,  0,  5 >;  /**< RC Calibration code  */
    using ADC_RCCAL   = regbits< type,  5,  5 >;  /**< ADC RC Calibration   */
    using BBA2_RCCAL  = regbits< type, 10,  5 >;  /**< BBA2 RC Calibration  */
    using BBA_RCCAL   = regbits< type, 16,  5 >;  /**< BBA RC Calibration   */
    using TZA_RCCAL   = regbits< type, 21,  5 >;  /**< TZA RC Calibration   */
  };

  /**
   * Aux PLL Frequency Calibration Control
   */
  struct AUXPLL_FCAL_CTRL
  : public reg< uint32_t, base_addr + 0x1e8, rw, 0x400000 >
  {
    using type = reg< uint32_t, base_addr + 0x1e8, rw, 0x400000 >;

    using DAC_CAL_ADJUST_MANUAL      = regbits< type,  0,  7 >;  /**< Aux PLL Frequency DAC Calibration Adjust Manual value  */
    using AUXPLL_DAC_CAL_ADJUST_DIS  = regbits< type,  7,  1 >;  /**< Aux PLL Frequency Calibration Disable                  */
    using FCAL_RUN_CNT               = regbits< type,  8,  1 >;  /**< Aux PLL Frequency Calibration Run Count                */
    using FCAL_COMP_INV              = regbits< type,  9,  1 >;  /**< Aux PLL Frequency Calibration Comparison Invert        */
    using FCAL_SMP_DLY               = regbits< type, 10,  2 >;  /**< Aux PLL Frequency Calibration Sample Delay             */
    using DAC_CAL_ADJUST             = regbits< type, 16,  7 >;  /**< Aux PLL DAC Calibration Adjust value                   */
  };

  /**
   * Aux PLL Frequency Calibration Count 6
   */
  struct AUXPLL_FCAL_CNT6
  : public reg< uint32_t, base_addr + 0x1ec, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1ec, ro, 0 >;

    using FCAL_COUNT_6   = regbits< type,  0, 10 >;  /**< Aux PLL Frequency Calibration Count 6          */
    using FCAL_BESTDIFF  = regbits< type, 16, 10 >;  /**< Aux PLL Frequency Calibration Best Difference  */
  };

  /**
   * Aux PLL Frequency Calibration Count 5 and 4
   */
  struct AUXPLL_FCAL_CNT5_4
  : public reg< uint32_t, base_addr + 0x1f0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1f0, ro, 0 >;

    using FCAL_COUNT_4  = regbits< type,  0, 10 >;  /**< Aux PLL Frequency Calibration Count 4  */
    using FCAL_COUNT_5  = regbits< type, 16, 10 >;  /**< Aux PLL Frequency Calibration Count 5  */
  };

  /**
   * Aux PLL Frequency Calibration Count 3 and 2
   */
  struct AUXPLL_FCAL_CNT3_2
  : public reg< uint32_t, base_addr + 0x1f4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1f4, ro, 0 >;

    using FCAL_COUNT_2  = regbits< type,  0, 10 >;  /**< Aux PLL Frequency Calibration Count 2  */
    using FCAL_COUNT_3  = regbits< type, 16, 10 >;  /**< Aux PLL Frequency Calibration Count 3  */
  };

  /**
   * Aux PLL Frequency Calibration Count 1 and 0
   */
  struct AUXPLL_FCAL_CNT1_0
  : public reg< uint32_t, base_addr + 0x1f8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1f8, ro, 0 >;

    using FCAL_COUNT_0  = regbits< type,  0, 10 >;  /**< Frequency Calibration Count 0  */
    using FCAL_COUNT_1  = regbits< type, 16, 10 >;  /**< Frequency Calibration Count 1  */
  };

  /**
   * RXDIG DFT
   */
  struct RXDIG_DFT
  : public reg< uint32_t, base_addr + 0x1fc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1fc, rw, 0 >;

    using DFT_TONE_FREQ    = regbits< type,  0,  3 >;  /**< DFT Tone Generator Frequency   */
    using DFT_TONE_SCALE   = regbits< type,  3,  1 >;  /**< DFT Tone Generator Scale       */
    using DFT_TONE_TZA_EN  = regbits< type,  4,  1 >;  /**< DFT Tone Generator TZA Enable  */
    using DFT_TONE_BBA_EN  = regbits< type,  5,  1 >;  /**< DFT Tone Generator BBA Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RX_DIG_HPP_INCLUDED
