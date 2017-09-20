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
//  Import from CMSIS-SVD: "Freescale/MKW20Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW20Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW20Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_XCVR_HPP_INCLUDED
#define ARCH_REG_XCVR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Apache 1.0 Transceiver
 */
struct XCVR
{
  static constexpr reg_addr_t base_addr = 0x4005c000;

  /**
   * RX Digital Control
   */
  struct RX_DIG_CTRL
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using RX_ADC_NEGEDGE     = regbits< type,  0,  1 >;  /**< Receive ADC Negative Edge Selection  */
    using RX_CH_FILT_BYPASS  = regbits< type,  1,  1 >;  /**< Receive Channel Filter Bypass        */
    using RX_ADC_RAW_EN      = regbits< type,  2,  1 >;  /**< ADC Raw Mode selection               */
    using RX_DEC_FILT_OSR    = regbits< type,  4,  3 >;  /**< Decimation Filter Oversampling       */
    using RX_INTERP_EN       = regbits< type,  8,  1 >;  /**< Interpolator Enable                  */
    using RX_NORM_EN         = regbits< type,  9,  1 >;  /**< Normalizer Enable                    */
    using RX_RSSI_EN         = regbits< type, 10,  1 >;  /**< RSSI Measurement Enable              */
    using RX_AGC_EN          = regbits< type, 11,  1 >;  /**< AGC Global Enable                    */
    using RX_DCOC_EN         = regbits< type, 12,  1 >;  /**< DCOC Enable                          */
    using RX_DCOC_CAL_EN     = regbits< type, 13,  1 >;  /**< DCOC Calibration Enable              */
    using RX_IQ_SWAP         = regbits< type, 14,  1 >;  /**< RX IQ Swap                           */
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
    using FREEZE_AGC_SRC        = regbits< type,  4,  2 >;  /**< Freeze AGC Source Selection  */
    using AGC_UP_EN             = regbits< type,  6,  1 >;  /**< AGC Up Enable                */
    using AGC_UP_SRC            = regbits< type,  7,  1 >;  /**< AGC Up Source                */
    using AGC_DOWN_BBF_STEP_SZ  = regbits< type,  8,  4 >;  /**< AGC_DOWN_BBF_STEP_SZ         */
    using AGC_DOWN_TZA_STEP_SZ  = regbits< type, 12,  4 >;  /**< AGC_DOWN_TZA_STEP_SZ         */
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

    using BBF_ALT_CODE          = regbits< type,  0,  4 >;  /**< BBF_ALT_CODE          */
    using LNM_ALT_CODE          = regbits< type,  4,  8 >;  /**< LNM_ALT_CODE          */
    using LNM_USER_GAIN         = regbits< type, 12,  4 >;  /**< LNM_USER_GAIN         */
    using BBF_USER_GAIN         = regbits< type, 16,  4 >;  /**< BBF_USER_GAIN         */
    using USER_LNM_GAIN_EN      = regbits< type, 20,  1 >;  /**< User LNM Gain Enable  */
    using USER_BBF_GAIN_EN      = regbits< type, 21,  1 >;  /**< User BBF Gain Enable  */
    using PRESLOW_EN            = regbits< type, 22,  1 >;  /**< Pre-slow Enable       */
    using TZA_GAIN_SETTLE_TIME  = regbits< type, 24,  8 >;  /**< TZA_GAIN_SETTLE_TIME  */
  };

  /**
   * AGC Control 2
   */
  struct AGC_CTRL_2
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using BBF_PDET_RST          = regbits< type,  0,  1 >;  /**< BBF PDET Reset           */
    using TZA_PDET_RST          = regbits< type,  1,  1 >;  /**< TZA PDET Reset           */
    using BBF_GAIN_SETTLE_TIME  = regbits< type,  4,  8 >;  /**< BBF Gain Settle Time     */
    using BBF_PDET_THRESH_LO    = regbits< type, 12,  3 >;  /**< BBF PDET Threshold Low   */
    using BBF_PDET_THRESH_HI    = regbits< type, 15,  3 >;  /**< BBF PDET Threshold High  */
    using TZA_PDET_THRESH_LO    = regbits< type, 18,  3 >;  /**< TZA PDET Threshold Low   */
    using TZA_PDET_THRESH_HI    = regbits< type, 21,  3 >;  /**< TZA PDET Threshold High  */
    using AGC_FAST_EXPIRE       = regbits< type, 24,  6 >;  /**< AGC Fast Expire          */
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

    using BBF_PDET_LO_STAT  = regbits< type,  0,  1 >;  /**< BBF Peak Detector Low Status   */
    using BBF_PDET_HI_STAT  = regbits< type,  1,  1 >;  /**< BBF Peak Detector High Status  */
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
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using RSSI_USE_VALS       = regbits< type,  0,  1 >;  /**< RSSI Values Selection       */
    using RSSI_HOLD_SRC       = regbits< type,  1,  2 >;  /**< Hold RSSI Source Selection  */
    using RSSI_HOLD_EN        = regbits< type,  3,  1 >;  /**< RSSI Hold Enable            */
    using RSSI_DEC_EN         = regbits< type,  4,  1 >;  /**< RSSI Decimation Enable      */
    using RSSI_IIR_CW_WEIGHT  = regbits< type,  5,  2 >;  /**< RSSI IIR CW Weighting       */
    using RSSI_IIR_WEIGHT     = regbits< type, 16,  4 >;  /**< RSSI IIR Weighting          */
    using RSSI_ADJ            = regbits< type, 24,  8 >;  /**< RSSI Adjustment             */
  };

  /**
   * RSSI Control 1
   */
  struct RSSI_CTRL_1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using RSSI_ED_THRESH0    = regbits< type,  0,  8 >;  /**< RSSI Energy Detect 0 Threshold   */
    using RSSI_ED_THRESH1    = regbits< type,  8,  8 >;  /**< RSSI Energy Detect 1 Threshold   */
    using RSSI_ED_THRESH0_H  = regbits< type, 16,  4 >;  /**< RSSI Energy Detect 0 Hysteresis  */
    using RSSI_ED_THRESH1_H  = regbits< type, 20,  4 >;  /**< RSSI Energy Detect 1 Hysteresis  */
    using RSSI_OUT           = regbits< type, 24,  8 >;  /**< RSSI Reading                     */
  };

  /**
   * DCOC Control 0
   */
  struct DCOC_CTRL_0
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using DCOC_MAN               = regbits< type,  1,  1 >;  /**< DCOC Manual Override       */
    using DCOC_TRACK_EN          = regbits< type,  3,  1 >;  /**< DCOC Tracking Enable       */
    using DCOC_CORRECT_EN        = regbits< type,  4,  1 >;  /**< DCOC Correction Enable     */
    using DCOC_SIGN_SCALE_IDX    = regbits< type,  5,  2 >;  /**< DCOC Sign Scaling          */
    using DCOC_ALPHAC_SCALE_IDX  = regbits< type,  8,  2 >;  /**< DCOC Alpha-C Scaling       */
    using DCOC_ALPHA_RADIUS_IDX  = regbits< type, 12,  3 >;  /**< Alpha-R Scaling            */
    using DCOC_CAL_DURATION      = regbits< type, 15,  5 >;  /**< DCOC Calibration Duration  */
    using DCOC_CORR_DLY          = regbits< type, 20,  5 >;  /**< DCOC Correction Delay      */
    using DCOC_CORR_HOLD_TIME    = regbits< type, 25,  7 >;  /**< DCOC Correction Hold Time  */
  };

  /**
   * DCOC Control 1
   */
  struct DCOC_CTRL_1
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using BBF_DCOC_STEP    = regbits< type,  0,  9 >;  /**< DCOC BBF Step Size       */
    using TRACK_FROM_ZERO  = regbits< type, 24,  1 >;  /**< Track from Zero          */
    using BBA_CORR_POL     = regbits< type, 25,  1 >;  /**< BBA Correction Polarity  */
    using TZA_CORR_POL     = regbits< type, 26,  1 >;  /**< TZA Correction Polarity  */
  };

  /**
   * DCOC Control 2
   */
  struct DCOC_CTRL_2
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using BBF_DCOC_STEP_RECIP  = regbits< type,  0, 13 >;  /**< DCOC BBF Reciprocal of Step Size  */
  };

  /**
   * DCOC Control 3
   */
  struct DCOC_CTRL_3
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using BBF_DCOC_INIT_I  = regbits< type,  0,  6 >;  /**< DCOC BBF Init I  */
    using BBF_DCOC_INIT_Q  = regbits< type,  8,  6 >;  /**< DCOC BBF Init Q  */
    using TZA_DCOC_INIT_I  = regbits< type, 16,  8 >;  /**< DCOC TZA Init I  */
    using TZA_DCOC_INIT_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Init Q  */
  };

  /**
   * DCOC Control 4
   */
  struct DCOC_CTRL_4
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

    using DCOC_BBF_CAL_GAIN1  = regbits< type,  8,  4 >;  /**< DCOC BBF Calibration Gain 1  */
    using DCOC_TZA_CAL_GAIN1  = regbits< type, 12,  4 >;  /**< DCOC TZA Calibration Gain 1  */
    using DCOC_BBF_CAL_GAIN2  = regbits< type, 16,  4 >;  /**< DCOC BBF Calibration Gain 2  */
    using DCOC_TZA_CAL_GAIN2  = regbits< type, 20,  4 >;  /**< DCOC TZA Calibration Gain 2  */
    using DCOC_BBF_CAL_GAIN3  = regbits< type, 24,  4 >;  /**< DCOC BBF Calibration Gain 3  */
    using DCOC_TZA_CAL_GAIN3  = regbits< type, 28,  4 >;  /**< DCOC TZA Calibration Gain 3  */
  };

  /**
   * DCOC Status
   */
  struct DCOC_STAT
  : public reg< uint32_t, base_addr + 0x38, ro, 0x80802020 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x80802020 >;

    using BBF_DCOC_I  = regbits< type,  0,  6 >;  /**< DCOC BBF DAC I  */
    using BBF_DCOC_Q  = regbits< type,  8,  6 >;  /**< DCOC BBF DAC Q  */
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

    using DCOC_TMP_CALC_RECIP  = regbits< type,  0, 10 >;  /**< DCOC Calculation Reciprocal   */
    using ALPHA_CALC_RECIP     = regbits< type, 10, 11 >;  /**< Alpha Calculation Reciprocal  */
  };

  /**
   * IQMC Control
   */
  struct IQMC_CTRL
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x8000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x8000 >;

    using IQMC_CAL_EN    = regbits< type,  0,  1 >;  /**< IQ Mismatch Cal Enable    */
    using IQMC_NUM_ITER  = regbits< type,  8,  8 >;  /**< IQ Mismatch Cal Num Iter  */
  };

  /**
   * IQMC Calibration
   */
  struct IQMC_CAL
  : public reg< uint32_t, base_addr + 0x50, rw, 0x400 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x400 >;

    using IQMC_GAIN_ADJ   = regbits< type,  0, 11 >;  /**< IQ Mismatch Correction Gain Coeff   */
    using IQMC_PHASE_ADJ  = regbits< type, 16, 12 >;  /**< IQ Mismatch Correction Phase Coeff  */
  };

  /**
   * TCA AGC Step Values 3..0
   */
  struct TCA_AGC_VAL_3_0
  : public reg< uint32_t, base_addr + 0x54, rw, 0x3C242C14 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x3C242C14 >;

    using TCA_AGC_VAL_0  = regbits< type,  0,  8 >;  /**< TCA_AGC step 0  */
    using TCA_AGC_VAL_1  = regbits< type,  8,  8 >;  /**< TCA_AGC step 1  */
    using TCA_AGC_VAL_2  = regbits< type, 16,  8 >;  /**< TCA_AGC step 2  */
    using TCA_AGC_VAL_3  = regbits< type, 24,  8 >;  /**< TCA_AGC step 3  */
  };

  /**
   * TCA AGC Step Values 7..4
   */
  struct TCA_AGC_VAL_7_4
  : public reg< uint32_t, base_addr + 0x58, rw, 0x9C846C54 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x9C846C54 >;

    using TCA_AGC_VAL_4  = regbits< type,  0,  8 >;  /**< TCA_AGC step 4  */
    using TCA_AGC_VAL_5  = regbits< type,  8,  8 >;  /**< TCA_AGC step 5  */
    using TCA_AGC_VAL_6  = regbits< type, 16,  8 >;  /**< TCA_AGC step 6  */
    using TCA_AGC_VAL_7  = regbits< type, 24,  8 >;  /**< TCA_AGC step 7  */
  };

  /**
   * TCA AGC Step Values 8
   */
  struct TCA_AGC_VAL_8
  : public reg< uint32_t, base_addr + 0x5c, rw, 0xB4 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0xB4 >;

    // fixme: Field name equals parent register name: TCA_AGC_VAL_8
    using TCA_AGC_VAL_8_ = regbits< type,  0,  8 >;  /**< TCA_AGC step 8  */
  };

  /**
   * BBF Resistor Tune Values 7..0
   */
  struct BBF_RES_TUNE_VAL_7_0
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using BBF_RES_TUNE_VAL_0  = regbits< type,  0,  4 >;  /**< BBF Resistor Tune Step 0  */
    using BBF_RES_TUNE_VAL_1  = regbits< type,  4,  4 >;  /**< BBF Resistor Tune Step 1  */
    using BBF_RES_TUNE_VAL_2  = regbits< type,  8,  4 >;  /**< BBF Resistor Tune Step 2  */
    using BBF_RES_TUNE_VAL_3  = regbits< type, 12,  4 >;  /**< BBF Resistor Tune Step 3  */
    using BBF_RES_TUNE_VAL_4  = regbits< type, 16,  4 >;  /**< BBF Resistor Tune Step 4  */
    using BBF_RES_TUNE_VAL_5  = regbits< type, 20,  4 >;  /**< BBF Resistor Tune Step 5  */
    using BBF_RES_TUNE_VAL_6  = regbits< type, 24,  4 >;  /**< BBF Resistor Tune Step 6  */
    using BBF_RES_TUNE_VAL_7  = regbits< type, 28,  4 >;  /**< BBF Resistor Tune Step 7  */
  };

  /**
   * BBF Resistor Tune Values 10..8
   */
  struct BBF_RES_TUNE_VAL_10_8
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using BBF_RES_TUNE_VAL_8   = regbits< type,  0,  4 >;  /**< BBF Resistor Tune Step 8   */
    using BBF_RES_TUNE_VAL_9   = regbits< type,  4,  4 >;  /**< BBF Resistor Tune Step 9   */
    using BBF_RES_TUNE_VAL_10  = regbits< type,  8,  4 >;  /**< BBF Resistor Tune Step 10  */
  };

  /**
   * TCA AGC Linear Gain Values 2..0
   */
  struct TCA_AGC_LIN_VAL_2_0
  : public reg< uint32_t, base_addr + 0x68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0 >;

    using TCA_AGC_LIN_VAL_0  = regbits< type,  0, 10 >;  /**< LNM linear gain value for index 0, e.g. nominal value is 10^(-3/20). Stored with 2 fractional bits, e.g. round([10^(-3/20)]*2^2) = 3decimal  */
    using TCA_AGC_LIN_VAL_1  = regbits< type, 10, 10 >;  /**< TCA AGC Linear Gain Step 1                                                                                                                   */
    using TCA_AGC_LIN_VAL_2  = regbits< type, 20, 10 >;  /**< TCA AGC Linear Gain Step 2                                                                                                                   */
  };

  /**
   * TCA AGC Linear Gain Values 5..3
   */
  struct TCA_AGC_LIN_VAL_5_3
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using TCA_AGC_LIN_VAL_3  = regbits< type,  0, 10 >;  /**< TCA AGC Linear Gain Step 3  */
    using TCA_AGC_LIN_VAL_4  = regbits< type, 10, 10 >;  /**< TCA AGC Linear Gain Step 4  */
    using TCA_AGC_LIN_VAL_5  = regbits< type, 20, 10 >;  /**< TCA AGC Linear Gain Step 5  */
  };

  /**
   * TCA AGC Linear Gain Values 8..6
   */
  struct TCA_AGC_LIN_VAL_8_6
  : public reg< uint32_t, base_addr + 0x70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0 >;

    using TCA_AGC_LIN_VAL_6  = regbits< type,  0, 10 >;  /**< TCA AGC Linear Gain Step 6  */
    using TCA_AGC_LIN_VAL_7  = regbits< type, 10, 10 >;  /**< TCA AGC Linear Gain Step 7  */
    using TCA_AGC_LIN_VAL_8  = regbits< type, 20, 10 >;  /**< TCA AGC Linear Gain Step 8  */
  };

  /**
   * BBF Resistor Tune Values 3..0
   */
  struct BBF_RES_TUNE_LIN_VAL_3_0
  : public reg< uint32_t, base_addr + 0x74, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0 >;

    using BBF_RES_TUNE_LIN_VAL_0  = regbits< type,  0,  8 >;  /**< BBF Resistor Tune Linear Gain Step 0  */
    using BBF_RES_TUNE_LIN_VAL_1  = regbits< type,  8,  8 >;  /**< BBF Resistor Tune Linear Gain Step 1  */
    using BBF_RES_TUNE_LIN_VAL_2  = regbits< type, 16,  8 >;  /**< BBF Resistor Tune Linear Gain Step 2  */
    using BBF_RES_TUNE_LIN_VAL_3  = regbits< type, 24,  8 >;  /**< BBF Resistor Tune Linear Gain Step 3  */
  };

  /**
   * BBF Resistor Tune Values 7..4
   */
  struct BBF_RES_TUNE_LIN_VAL_7_4
  : public reg< uint32_t, base_addr + 0x78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0 >;

    using BBF_RES_TUNE_LIN_VAL_4  = regbits< type,  0,  8 >;  /**< BBF Resistor Tune Linear Gain Step 4  */
    using BBF_RES_TUNE_LIN_VAL_5  = regbits< type,  8,  8 >;  /**< BBF Resistor Tune Linear Gain Step 5  */
    using BBF_RES_TUNE_LIN_VAL_6  = regbits< type, 16,  8 >;  /**< BBF Resistor Tune Linear Gain Step 6  */
    using BBF_RES_TUNE_LIN_VAL_7  = regbits< type, 24,  8 >;  /**< BBF Resistor Tune Linear Gain Step 7  */
  };

  /**
   * BBF Resistor Tune Values 10..8
   */
  struct BBF_RES_TUNE_LIN_VAL_10_8
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0 >;

    using BBF_RES_TUNE_LIN_VAL_8   = regbits< type,  0,  8 >;  /**< BBF Resistor Tune Linear Gain Step 8   */
    using BBF_RES_TUNE_LIN_VAL_9   = regbits< type,  8,  8 >;  /**< BBF Resistor Tune Linear Gain Step 9   */
    using BBF_RES_TUNE_LIN_VAL_10  = regbits< type, 16,  8 >;  /**< BBF Resistor Tune Linear Gain Step 10  */
  };

  /**
   * AGC Gain Tables Step 03..00
   */
  struct AGC_GAIN_TBL_03_00
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using BBF_GAIN_00  = regbits< type,  0,  4 >;  /**< BBF Gain 00  */
    using LNM_GAIN_00  = regbits< type,  4,  4 >;  /**< LNM Gain 00  */
    using BBF_GAIN_01  = regbits< type,  8,  4 >;  /**< BBF Gain 01  */
    using LNM_GAIN_01  = regbits< type, 12,  4 >;  /**< LNM Gain 01  */
    using BBF_GAIN_02  = regbits< type, 16,  4 >;  /**< BBF Gain 02  */
    using LNM_GAIN_02  = regbits< type, 20,  4 >;  /**< LNM Gain 02  */
    using BBF_GAIN_03  = regbits< type, 24,  4 >;  /**< BBF Gain 03  */
    using LNM_GAIN_03  = regbits< type, 28,  4 >;  /**< LNM Gain 03  */
  };

  /**
   * AGC Gain Tables Step 07..04
   */
  struct AGC_GAIN_TBL_07_04
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using BBF_GAIN_04  = regbits< type,  0,  4 >;  /**< BBF Gain 04  */
    using LNM_GAIN_04  = regbits< type,  4,  4 >;  /**< LNM Gain 04  */
    using BBF_GAIN_05  = regbits< type,  8,  4 >;  /**< BBF Gain 05  */
    using LNM_GAIN_05  = regbits< type, 12,  4 >;  /**< LNM Gain 05  */
    using BBF_GAIN_06  = regbits< type, 16,  4 >;  /**< BBF Gain 06  */
    using LNM_GAIN_06  = regbits< type, 20,  4 >;  /**< LNM Gain 06  */
    using BBF_GAIN_07  = regbits< type, 24,  4 >;  /**< BBF Gain 07  */
    using LNM_GAIN_07  = regbits< type, 28,  4 >;  /**< LNM Gain 07  */
  };

  /**
   * AGC Gain Tables Step 11..08
   */
  struct AGC_GAIN_TBL_11_08
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using BBF_GAIN_08  = regbits< type,  0,  4 >;  /**< BBF Gain 08  */
    using LNM_GAIN_08  = regbits< type,  4,  4 >;  /**< LNM Gain 08  */
    using BBF_GAIN_09  = regbits< type,  8,  4 >;  /**< BBF Gain 09  */
    using LNM_GAIN_09  = regbits< type, 12,  4 >;  /**< LNM Gain 09  */
    using BBF_GAIN_10  = regbits< type, 16,  4 >;  /**< BBF Gain 10  */
    using LNM_GAIN_10  = regbits< type, 20,  4 >;  /**< LNM Gain 10  */
    using BBF_GAIN_11  = regbits< type, 24,  4 >;  /**< BBF Gain 11  */
    using LNM_GAIN_11  = regbits< type, 28,  4 >;  /**< LNM Gain 11  */
  };

  /**
   * AGC Gain Tables Step 15..12
   */
  struct AGC_GAIN_TBL_15_12
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0 >;

    using BBF_GAIN_12  = regbits< type,  0,  4 >;  /**< BBF Gain 12  */
    using LNM_GAIN_12  = regbits< type,  4,  4 >;  /**< LNM Gain 12  */
    using BBF_GAIN_13  = regbits< type,  8,  4 >;  /**< BBF Gain 13  */
    using LNM_GAIN_13  = regbits< type, 12,  4 >;  /**< LNM Gain 13  */
    using BBF_GAIN_14  = regbits< type, 16,  4 >;  /**< BBF Gain 14  */
    using LNM_GAIN_14  = regbits< type, 20,  4 >;  /**< LNM Gain 14  */
    using BBF_GAIN_15  = regbits< type, 24,  4 >;  /**< BBF Gain 15  */
    using LNM_GAIN_15  = regbits< type, 28,  4 >;  /**< LNM Gain 15  */
  };

  /**
   * AGC Gain Tables Step 19..16
   */
  struct AGC_GAIN_TBL_19_16
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using BBF_GAIN_16  = regbits< type,  0,  4 >;  /**< BBF Gain 16   */
    using LNM_GAIN_16  = regbits< type,  4,  4 >;  /**< LNM Gain 16   */
    using BBF_GAIN_17  = regbits< type,  8,  4 >;  /**< BBF Gain 17   */
    using LNM_GAIN_17  = regbits< type, 12,  4 >;  /**< LNM Gain 17   */
    using BBF_GAIN_18  = regbits< type, 16,  4 >;  /**< BBF Gain 18   */
    using LNM_GAIN_18  = regbits< type, 20,  4 >;  /**< LNM Gain 18   */
    using BBF_GAIN_19  = regbits< type, 24,  4 >;  /**< BBF Gain 193  */
    using LNM_GAIN_19  = regbits< type, 28,  4 >;  /**< LNM Gain 19   */
  };

  /**
   * AGC Gain Tables Step 23..20
   */
  struct AGC_GAIN_TBL_23_20
  : public reg< uint32_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0 >;

    using BBF_GAIN_20  = regbits< type,  0,  4 >;  /**< BBF Gain 20  */
    using LNM_GAIN_20  = regbits< type,  4,  4 >;  /**< LNM Gain 20  */
    using BBF_GAIN_21  = regbits< type,  8,  4 >;  /**< BBF Gain 21  */
    using LNM_GAIN_21  = regbits< type, 12,  4 >;  /**< LNM Gain 21  */
    using BBF_GAIN_22  = regbits< type, 16,  4 >;  /**< BBF Gain 22  */
    using LNM_GAIN_22  = regbits< type, 20,  4 >;  /**< LNM Gain 22  */
    using BBF_GAIN_23  = regbits< type, 24,  4 >;  /**< BBF Gain 23  */
    using LNM_GAIN_23  = regbits< type, 28,  4 >;  /**< LNM Gain 23  */
  };

  /**
   * AGC Gain Tables Step 26..24
   */
  struct AGC_GAIN_TBL_26_24
  : public reg< uint32_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0 >;

    using BBF_GAIN_24  = regbits< type,  0,  4 >;  /**< BBF Gain 24  */
    using LNM_GAIN_24  = regbits< type,  4,  4 >;  /**< LNM Gain 24  */
    using BBF_GAIN_25  = regbits< type,  8,  4 >;  /**< BBF Gain 25  */
    using LNM_GAIN_25  = regbits< type, 12,  4 >;  /**< LNM Gain 25  */
    using BBF_GAIN_26  = regbits< type, 16,  4 >;  /**< BBF Gain 26  */
    using LNM_GAIN_26  = regbits< type, 20,  4 >;  /**< LNM Gain 26  */
  };

  /**
   * DCOC Offset
   */
  struct DCOC_OFFSET_%s
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0 >;

    using DCOC_BBF_OFFSET_I  = regbits< type,  0,  6 >;  /**< DCOC BBF I-channel offset  */
    using DCOC_BBF_OFFSET_Q  = regbits< type,  8,  6 >;  /**< DCOC BBF Q-channel offset  */
    using DCOC_TZA_OFFSET_I  = regbits< type, 16,  8 >;  /**< DCOC TZA I-channel offset  */
    using DCOC_TZA_OFFSET_Q  = regbits< type, 24,  8 >;  /**< DCOC TZA Q-channel offset  */
  };

  /**
   * DCOC TZA DC step
   */
  struct DCOC_TZA_STEP_%s
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using DCOC_TZA_STEP_RCP   = regbits< type,  0, 13 >;  /**< DCOC_TZA_STEP_RCP   */
    using DCOC_TZA_STEP_GAIN  = regbits< type, 16, 12 >;  /**< DCOC_TZA_STEP_GAIN  */
  };

  /**
   * DCOC Calibration Alpha
   */
  struct DCOC_CAL_ALPHA
  : public reg< uint32_t, base_addr + 0x16c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x16c, ro, 0 >;

    using DCOC_CAL_ALPHA_I  = regbits< type,  0, 16 >;  /**< DCOC Calibration I-channel ALPHA constant  */
    using DCOC_CAL_ALPHA_Q  = regbits< type, 16, 16 >;  /**< DCOC_CAL_ALPHA_Q                           */
  };

  /**
   * DCOC Calibration Beta
   */
  struct DCOC_CAL_BETA
  : public reg< uint32_t, base_addr + 0x170, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x170, ro, 0 >;

    using DCOC_CAL_BETA_I  = regbits< type,  0, 16 >;  /**< DCOC_CAL_BETA_I  */
    using DCOC_CAL_BETA_Q  = regbits< type, 16, 16 >;  /**< DCOC_CAL_BETA_Q  */
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
  struct DCOC_CAL%s
  : public reg< uint32_t, base_addr + 0x180, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, ro, 0 >;

    using DCOC_CAL_RES_I  = regbits< type,  0, 12 >;  /**< DCOC Calibration Result - I Channel  */
    using DCOC_CAL_RES_Q  = regbits< type, 16, 12 >;  /**< DCOC Calibration Result - Q Channel  */
  };

  /**
   * Receive Channel Filter Coefficient
   */
  struct RX_CHF_COEF%s
  : public reg< uint32_t, base_addr + 0x1a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1a0, rw, 0 >;

    using RX_CH_FILT_HX  = regbits< type,  0,  8 >;  /**< RX Channel Filter Coefficient  */
  };

  /**
   * TX Digital Control
   */
  struct TX_DIG_CTRL
  : public reg< uint32_t, base_addr + 0x200, rw, 0x140 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x140 >;

    using DFT_MODE       = regbits< type,  0,  3 >;  /**< Radio DFT Modes                    */
    using DFT_EN         = regbits< type,  3,  1 >;  /**< Radio DFT Mode Enable              */
    using DFT_LFSR_LEN   = regbits< type,  4,  3 >;  /**< DFT LFSR Length                    */
    using LFSR_EN        = regbits< type,  7,  1 >;  /**< DFT LFSR Enable                    */
    using DFT_CLK_SEL    = regbits< type,  8,  3 >;  /**< DFT Clock Selection                */
    using TONE_SEL       = regbits< type, 12,  2 >;  /**< DFT Tone Selection                 */
    using POL            = regbits< type, 16,  1 >;  /**< Oversample Clock Capture Polarity  */
    using DP_SEL         = regbits< type, 20,  1 >;  /**< Data Padding Pattern Select        */
    using FREQ_WORD_ADJ  = regbits< type, 22, 10 >;  /**< GFSK Frequency Word Adjustment     */
  };

  /**
   * TX Data Padding Pattern
   */
  struct TX_DATA_PAD_PAT
  : public reg< uint32_t, base_addr + 0x204, rw, 0x7FFF55AA >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0x7FFF55AA >;

    using DATA_PADDING_PAT_0  = regbits< type,  0,  8 >;  /**< Data Padding Pattern 0    */
    using DATA_PADDING_PAT_1  = regbits< type,  8,  8 >;  /**< Data Padding Pattern 1    */
    using DFT_LFSR_OUT        = regbits< type, 16, 15 >;  /**< Transmit DFT LFSR Output  */
    using LRM                 = regbits< type, 31,  1 >;  /**< LFSR Reset Mask           */
  };

  /**
   * TX GFSK Modulation Control
   */
  struct TX_GFSK_MOD_CTRL
  : public reg< uint32_t, base_addr + 0x208, rw, 0x3014000 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0x3014000 >;

    using GFSK_MULTIPLY_TABLE_MANUAL  = regbits< type,  0, 16 >;  /**< GFSK Multiply Lookup Table Override Value  */
    using GFSK_MI                     = regbits< type, 16,  2 >;  /**< GFSK Modulation Index                      */
    using GFSK_MLD                    = regbits< type, 20,  1 >;  /**< GFSK Multiply Lookup Table Disable         */
    using GFSK_SYMBOL_RATE            = regbits< type, 24,  3 >;  /**< GFSK Symbol Rate                           */
    using GFSK_FLD                    = regbits< type, 28,  1 >;  /**< GFSK Filter Lookup Table Disable           */
  };

  /**
   * TX GFSK Filter Coefficients 2
   */
  struct TX_GFSK_COEFF2
  : public reg< uint32_t, base_addr + 0x20c, rw, 0xC0630401 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0xC0630401 >;

    using GFSK_FILTER_COEFF_MANUAL2  = regbits< type,  0, 32 >;  /**< GFSK Manual Filter Coefficients[63:32]  */
  };

  /**
   * TX GFSK Filter Coefficients 1
   */
  struct TX_GFSK_COEFF1
  : public reg< uint32_t, base_addr + 0x210, rw, 0xBB29960D >
  {
    using type = reg< uint32_t, base_addr + 0x210, rw, 0xBB29960D >;

    using GFSK_FILTER_COEFF_MANUAL1  = regbits< type,  0, 32 >;  /**< GFSK Manual Filter Coefficient [31:0]  */
  };

  /**
   * TX FSK Modulation Scale
   */
  struct TX_FSK_MOD_SCALE
  : public reg< uint32_t, base_addr + 0x214, rw, 0x7FF1800 >
  {
    using type = reg< uint32_t, base_addr + 0x214, rw, 0x7FF1800 >;

    using FSK_MODULATION_SCALE_0  = regbits< type,  0, 13 >;  /**< FSK Modulation Scale for a data 0  */
    using FSK_MODULATION_SCALE_1  = regbits< type, 16, 13 >;  /**< FSK Modulation Scale for a data 1  */
  };

  /**
   * TX DFT Modulation Pattern
   */
  struct TX_DFT_MOD_PAT
  : public reg< uint32_t, base_addr + 0x218, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x218, rw, 0 >;

    using DFT_MOD_PATTERN  = regbits< type,  0, 32 >;  /**< DFT Modulation Pattern  */
  };

  /**
   * TX DFT Tones 0 and 1
   */
  struct TX_DFT_TONE_0_1
  : public reg< uint32_t, base_addr + 0x21c, rw, 0x10000FFF >
  {
    using type = reg< uint32_t, base_addr + 0x21c, rw, 0x10000FFF >;

    using DFT_TONE_1  = regbits< type,  0, 13 >;  /**< DFT Tone 1  */
    using DFT_TONE_0  = regbits< type, 16, 13 >;  /**< DFT Tone 0  */
  };

  /**
   * TX DFT Tones 2 and 3
   */
  struct TX_DFT_TONE_2_3
  : public reg< uint32_t, base_addr + 0x220, rw, 0x1E0001FF >
  {
    using type = reg< uint32_t, base_addr + 0x220, rw, 0x1E0001FF >;

    using DFT_TONE_3  = regbits< type,  0, 13 >;  /**< DFT Tone 3  */
    using DFT_TONE_2  = regbits< type, 16, 13 >;  /**< DFT Tone 2  */
  };

  /**
   * PLL Modulation Overrides
   */
  struct PLL_MOD_OVRD
  : public reg< uint32_t, base_addr + 0x228, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x228, rw, 0 >;

    using MODULATION_WORD_MANUAL  = regbits< type,  0, 13 >;  /**< Manual Modulation Word   */
    using MOD_DIS                 = regbits< type, 15,  1 >;  /**< Disable Modulation Word  */
    using HPM_BANK_MANUAL         = regbits< type, 16,  8 >;  /**< Manual HPM bank          */
    using HPM_BANK_DIS            = regbits< type, 27,  1 >;  /**< Disable HPM Bank         */
    using HPM_LSB_MANUAL          = regbits< type, 28,  2 >;  /**< Manual HPM LSB           */
    using HPM_LSB_DIS             = regbits< type, 31,  1 >;  /**< Disable HPM LSB          */
  };

  /**
   * PLL Channel Mapping
   */
  struct PLL_CHAN_MAP
  : public reg< uint32_t, base_addr + 0x22c, rw, 0x200 >
  {
    using type = reg< uint32_t, base_addr + 0x22c, rw, 0x200 >;

    using CHANNEL_NUM  = regbits< type,  0,  7 >;  /**< Protocol specific Channel Number for PLL Frequency Mapping  */
    using BOC          = regbits< type,  8,  1 >;  /**< BLE Channel Number Override                                 */
    using BMR          = regbits< type,  9,  1 >;  /**< BLE MBAN Channel Remap                                      */
    using ZOC          = regbits< type, 10,  1 >;  /**< Zigbee Channel Number Override                              */
  };

  /**
   * PLL Lock Detect
   */
  struct PLL_LOCK_DETECT
  : public reg< uint32_t, base_addr + 0x230, rw, 0x202600 >
  {
    using type = reg< uint32_t, base_addr + 0x230, rw, 0x202600 >;

    using CT_FAIL        = regbits< type,  0,  1 >;  /**< Real time status of Coarse Tune Fail signal   */
    using CTFF           = regbits< type,  1,  1 >;  /**< CTUNE Failure Flag, held until cleared        */
    using CS_FAIL        = regbits< type,  2,  1 >;  /**< Real time status of Cycle Slip circuit        */
    using CSFF           = regbits< type,  3,  1 >;  /**< Cycle Slip Failure Flag, held until cleared   */
    using FT_FAIL        = regbits< type,  4,  1 >;  /**< Real time status of Frequency Target Failure  */
    using FTFF           = regbits< type,  5,  1 >;  /**< Frequency Target Failure Flag                 */
    using TAFF           = regbits< type,  7,  1 >;  /**< TSM Abort Failure Flag                        */
    using CTUNE_LDF_LEV  = regbits< type,  8,  4 >;  /**< CTUNE Lock Detect Fail Level                  */
    using FTF_RX_THRSH   = regbits< type, 12,  6 >;  /**< RX Frequency Target Fail Threshold            */
    using FTW_RX         = regbits< type, 19,  1 >;  /**< RX Frequency Target Window time select        */
    using FTF_TX_THRSH   = regbits< type, 20,  6 >;  /**< TX Frequency Target Fail Threshold            */
    using FTW_TX         = regbits< type, 27,  1 >;  /**< TX Frequency Target Window time select        */
  };

  /**
   * PLL High Port Modulation Control
   */
  struct PLL_HP_MOD_CTRL
  : public reg< uint32_t, base_addr + 0x234, rw, 0x840000 >
  {
    using type = reg< uint32_t, base_addr + 0x234, rw, 0x840000 >;

    using HPM_SDM_MANUAL  = regbits< type,  0, 10 >;  /**< PLL HPM SDM MANUAL          */
    using HPFF            = regbits< type, 13,  1 >;  /**< HPM SDM Invalid Flag        */
    using HP_SDM_INV      = regbits< type, 14,  1 >;  /**< Invert HPM SDM              */
    using HP_SDM_DIS      = regbits< type, 15,  1 >;  /**< Disable HPM SDM             */
    using HPM_LFSR_LEN    = regbits< type, 16,  3 >;  /**< HPM LFSR Length             */
    using HP_DTH_SCL      = regbits< type, 20,  1 >;  /**< HPM Dither Scale            */
    using HPM_DTH_EN      = regbits< type, 23,  1 >;  /**< Dither Enable for HPM LFSR  */
    using HPM_SCALE       = regbits< type, 24,  2 >;  /**< HPM Scale Factor            */
    using HP_MOD_INV      = regbits< type, 31,  1 >;  /**< HPM Invert                  */
  };

  /**
   * PLL HPM Calibration Control
   */
  struct PLL_HPM_CAL_CTRL
  : public reg< uint32_t, base_addr + 0x238, rw, 0x400002A2 >
  {
    using type = reg< uint32_t, base_addr + 0x238, rw, 0x400002A2 >;

    using HPM_CAL_FACTOR         = regbits< type,  0, 13 >;  /**< High Port Modulation Calibration Factor                                                                                        */
    using HP_CAL_DIS             = regbits< type, 15,  1 >;  /**< If this bit is set, the lookup table value for the HPM Calibration Factor is overridden by the HPM_CAL_FACTOR_MANUAL register  */
    using HPM_CAL_FACTOR_MANUAL  = regbits< type, 16, 13 >;  /**< HPM Manual Calibration Factor                                                                                                  */
    using HP_CAL_ARY             = regbits< type, 30,  1 >;  /**< High Port Modulation Calibration Array Size                                                                                    */
    using HP_CAL_TIME            = regbits< type, 31,  1 >;  /**< High Port Modulation Calibration Time                                                                                          */
  };

  /**
   * PLL Cycle Slip Lock Detect Configuration and HPM Calibration 1
   */
  struct PLL_LD_HPM_CAL1
  : public reg< uint32_t, base_addr + 0x23c, rw, 0x44300000 >
  {
    using type = reg< uint32_t, base_addr + 0x23c, rw, 0x44300000 >;

    using CNT_1    = regbits< type,  0, 17 >;  /**< High Port Modulation Counter Value 1  */
    using CS_WT    = regbits< type, 20,  3 >;  /**< Cycle Slip Wait Time                  */
    using CS_FW    = regbits< type, 24,  3 >;  /**< Cycle Slip Flag Window                */
    using CS_FCNT  = regbits< type, 28,  4 >;  /**< Cycle Slip Flag Count                 */
  };

  /**
   * PLL Cycle Slip Lock Detect Configuration and HPM Calibration 2
   */
  struct PLL_LD_HPM_CAL2
  : public reg< uint32_t, base_addr + 0x240, rw, 0x2100000 >
  {
    using type = reg< uint32_t, base_addr + 0x240, rw, 0x2100000 >;

    using CNT_2  = regbits< type,  0, 17 >;  /**< High Port Modulation Counter Value 2  */
    using CS_RC  = regbits< type, 20,  1 >;  /**< Cycle Slip Recycle                    */
    using CS_FT  = regbits< type, 24,  5 >;  /**< Cycle Slip Flag Timeout               */
  };

  /**
   * PLL HPM SDM Fraction
   */
  struct PLL_HPM_SDM_FRACTION
  : public reg< uint32_t, base_addr + 0x244, rw, 0x1FF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x244, rw, 0x1FF0000 >;

    using HPM_NUM_SELECTED  = regbits< type,  0, 10 >;  /**< HPM_NUM_SELECTED                  */
    using HPM_DENOM         = regbits< type, 16, 10 >;  /**< High Port Modulation Denominator  */
  };

  /**
   * PLL Low Port Modulation Control
   */
  struct PLL_LP_MOD_CTRL
  : public reg< uint32_t, base_addr + 0x248, rw, 0x8080000 >
  {
    using type = reg< uint32_t, base_addr + 0x248, rw, 0x8080000 >;

    using PLL_LOOP_DIVIDER_MANUAL  = regbits< type,  0,  6 >;  /**< PLL Loop Divider Manual              */
    using PLL_LD_DIS               = regbits< type, 11,  1 >;  /**< PLL Loop Divider Disable             */
    using LPFF                     = regbits< type, 13,  1 >;  /**< LPM SDM Invalid Flag                 */
    using LPM_SDM_INV              = regbits< type, 14,  1 >;  /**< Invert LPM SDM                       */
    using LPM_SDM_DIS              = regbits< type, 15,  1 >;  /**< Disable LPM SDM                      */
    using LPM_DTH_SCL              = regbits< type, 16,  4 >;  /**< LPM Dither Scale                     */
    using LPM_D_CTRL               = regbits< type, 22,  1 >;  /**< LPM Dither Control in Override Mode  */
    using LPM_D_OVRD               = regbits< type, 23,  1 >;  /**< LPM Dither Override Mode Select      */
    using LPM_SCALE                = regbits< type, 24,  4 >;  /**< LPM Scale Factor                     */
  };

  /**
   * PLL Low Port SDM Control 1
   */
  struct PLL_LP_SDM_CTRL1
  : public reg< uint32_t, base_addr + 0x24c, rw, 0x260026 >
  {
    using type = reg< uint32_t, base_addr + 0x24c, rw, 0x260026 >;

    using LPM_INTG_SELECTED  = regbits< type,  0,  7 >;  /**< Low Port Modulation Integer Value Selected  */
    using LPM_INTG           = regbits< type, 16,  7 >;  /**< Low Port Modulation Integer Manual Value    */
    using SDM_MAP_DIS        = regbits< type, 31,  1 >;  /**< SDM Mapping Disable                         */
  };

  /**
   * PLL Low Port SDM Control 2
   */
  struct PLL_LP_SDM_CTRL2
  : public reg< uint32_t, base_addr + 0x250, rw, 0x2000000 >
  {
    using type = reg< uint32_t, base_addr + 0x250, rw, 0x2000000 >;

    using LPM_NUM  = regbits< type,  0, 28 >;  /**< Low Port Modulation Numerator  */
  };

  /**
   * PLL Low Port SDM Control 3
   */
  struct PLL_LP_SDM_CTRL3
  : public reg< uint32_t, base_addr + 0x254, rw, 0x4000000 >
  {
    using type = reg< uint32_t, base_addr + 0x254, rw, 0x4000000 >;

    using LPM_DENOM  = regbits< type,  0, 28 >;  /**< Low Port Modulation Denominator  */
  };

  /**
   * PLL Low Port SDM Numerator Applied
   */
  struct PLL_LP_SDM_NUM
  : public reg< uint32_t, base_addr + 0x258, ro, 0xE200000 >
  {
    using type = reg< uint32_t, base_addr + 0x258, ro, 0xE200000 >;

    using LPM_NUM_SELECTED  = regbits< type,  0, 28 >;  /**< Low Port Modulation Numerator Applied  */
  };

  /**
   * PLL Low Port SDM Denominator Applied
   */
  struct PLL_LP_SDM_DENOM
  : public reg< uint32_t, base_addr + 0x25c, ro, 0x4000000 >
  {
    using type = reg< uint32_t, base_addr + 0x25c, ro, 0x4000000 >;

    using LPM_DENOM_SELECTED  = regbits< type,  0, 28 >;  /**< Low Port Modulation Denominator Selected  */
  };

  /**
   * PLL Delay Matching
   */
  struct PLL_DELAY_MATCH
  : public reg< uint32_t, base_addr + 0x260, rw, 0x201 >
  {
    using type = reg< uint32_t, base_addr + 0x260, rw, 0x201 >;

    using LP_SDM_DELAY    = regbits< type,  0,  4 >;  /**< LP_SDM_DELAY    */
    using HPM_SDM_DELAY   = regbits< type,  8,  4 >;  /**< HPM_SDM_DELAY   */
    using HPM_BANK_DELAY  = regbits< type, 16,  4 >;  /**< HPM Bank Delay  */
  };

  /**
   * PLL Coarse Tune Control
   */
  struct PLL_CTUNE_CTRL
  : public reg< uint32_t, base_addr + 0x264, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x264, rw, 0 >;

    using CTUNE_TARGET_MANUAL  = regbits< type,  0, 12 >;  /**< CTUNE Target Manual     */
    using CTUNE_TD             = regbits< type, 15,  1 >;  /**< CTUNE Target Disable    */
    using CTUNE_ADJUST         = regbits< type, 16,  4 >;  /**< CTUNE Count Adjustment  */
    using CTUNE_MANUAL         = regbits< type, 24,  7 >;  /**< CTUNE Manual            */
    using CTUNE_DIS            = regbits< type, 31,  1 >;  /**< CTUNE Disable           */
  };

  /**
   * PLL Coarse Tune Count 6
   */
  struct PLL_CTUNE_CNT6
  : public reg< uint32_t, base_addr + 0x268, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x268, ro, 0 >;

    using CTUNE_COUNT_6  = regbits< type,  0, 12 >;  /**< CTUNE Count 6  */
  };

  /**
   * PLL Coarse Tune Counts 5 and 4
   */
  struct PLL_CTUNE_CNT5_4
  : public reg< uint32_t, base_addr + 0x26c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x26c, ro, 0 >;

    using CTUNE_COUNT_4  = regbits< type,  0, 12 >;  /**< CTUNE Count 4  */
    using CTUNE_COUNT_5  = regbits< type, 16, 12 >;  /**< CTUNE Count 5  */
  };

  /**
   * PLL Coarse Tune Counts 3 and 2
   */
  struct PLL_CTUNE_CNT3_2
  : public reg< uint32_t, base_addr + 0x270, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x270, ro, 0 >;

    using CTUNE_COUNT_2  = regbits< type,  0, 12 >;  /**< CTUNE Count 2  */
    using CTUNE_COUNT_3  = regbits< type, 16, 12 >;  /**< CTUNE Count 3  */
  };

  /**
   * PLL Coarse Tune Counts 1 and 0
   */
  struct PLL_CTUNE_CNT1_0
  : public reg< uint32_t, base_addr + 0x274, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x274, ro, 0 >;

    using CTUNE_COUNT_0  = regbits< type,  0, 12 >;  /**< CTUNE Count 0  */
    using CTUNE_COUNT_1  = regbits< type, 16, 12 >;  /**< CTUNE Count 1  */
  };

  /**
   * PLL Coarse Tune Results
   */
  struct PLL_CTUNE_RESULTS
  : public reg< uint32_t, base_addr + 0x278, ro, 0x9620040 >
  {
    using type = reg< uint32_t, base_addr + 0x278, ro, 0x9620040 >;

    using CTUNE_SELECTED     = regbits< type,  0,  7 >;  /**< Coarse Tune Band to VCO               */
    using CTUNE_BEST_DIFF    = regbits< type,  8,  8 >;  /**< Coarse Tune Absolute Best Difference  */
    using CTUNE_FREQ_TARGET  = regbits< type, 16, 12 >;  /**< Coarse Tune Frequency Target          */
  };

  /**
   * Transceiver Control
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x280, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x280, rw, 0 >;

    using PROTOCOL      = regbits< type,  0,  3 >;  /**< Radio Protocol Selection         */
    using TGT_PWR_SRC   = regbits< type,  4,  2 >;  /**< Target Power Source              */
    using REF_CLK_FREQ  = regbits< type,  6,  2 >;  /**< Radio Reference Clock Frequency  */
  };

  /**
   * Transceiver Status
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x284, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x284, ro, 0 >;

    using TSM_COUNT             = regbits< type,  0,  8 >;  /**< TSM Count                      */
    using PLL_SEQ_STATE         = regbits< type,  8,  4 >;  /**< PLL Sequence State             */
    using RX_MODE               = regbits< type, 12,  1 >;  /**< Receive Mode                   */
    using TX_MODE               = regbits< type, 13,  1 >;  /**< Transmit Mode                  */
    using BTLE_SYSCLK_REQ       = regbits< type, 16,  1 >;  /**< BTLE System Clock Request      */
    using RIF_LL_ACTIVE         = regbits< type, 17,  1 >;  /**< Link Layer Active Indication   */
    using XTAL_READY            = regbits< type, 18,  1 >;  /**< RF Osciallator Xtal Ready      */
    using SOC_USING_RF_OSC_CLK  = regbits< type, 19,  1 >;  /**< SOC Using RF Clock Indication  */
  };

  /**
   * Soft Reset
   */
  struct SOFT_RESET
  : public reg< uint32_t, base_addr + 0x288, ro, 0 >
  {
  };

  /**
   * Overwrite Version
   */
  struct OVERWRITE_VER
  : public reg< uint32_t, base_addr + 0x290, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x290, rw, 0 >;

    // fixme: Field name equals parent register name: OVERWRITE_VER
    using OVERWRITE_VER_ = regbits< type,  0,  8 >;  /**< Overwrite Version Number.  */
  };

  /**
   * DMA Control
   */
  struct DMA_CTRL
  : public reg< uint32_t, base_addr + 0x294, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x294, rw, 0 >;

    using DMA_I_EN  = regbits< type,  0,  1 >;  /**< DMA I Enable  */
    using DMA_Q_EN  = regbits< type,  1,  1 >;  /**< DMA Q Enable  */
  };

  /**
   * DMA Data
   */
  struct DMA_DATA
  : public reg< uint32_t, base_addr + 0x298, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x298, ro, 0 >;

    using DMA_DATA_11_0   = regbits< type,  0, 12 >;  /**< DMA_DATA_11_0   */
    using DMA_DATA_27_16  = regbits< type, 16, 12 >;  /**< DMA_DATA_27_16  */
  };

  /**
   * Digital Test Control
   */
  struct DTEST_CTRL
  : public reg< uint32_t, base_addr + 0x29c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x29c, rw, 0 >;

    using DTEST_PAGE        = regbits< type,  0,  6 >;  /**< DTEST Page Selector                  */
    using DTEST_EN          = regbits< type,  7,  1 >;  /**< DTEST Enable                         */
    using GPIO0_OVLAY_PIN   = regbits< type,  8,  4 >;  /**< GPIO 0 Overlay Pin                   */
    using GPIO1_OVLAY_PIN   = regbits< type, 12,  4 >;  /**< GPIO 1 Overlay Pin                   */
    using TSM_GPIO_OVLAY_0  = regbits< type, 16,  1 >;  /**< TSM GPIO 0 Overlay Pin               */
    using TSM_GPIO_OVLAY_1  = regbits< type, 17,  1 >;  /**< TSM GPIO 1 Overlay Pin               */
    using DTEST_SHFT        = regbits< type, 24,  3 >;  /**< DTEST Shift Control                  */
    using RAW_MODE_I        = regbits< type, 28,  1 >;  /**< DTEST Raw Mode Enable for I Channel  */
    using RAW_MODE_Q        = regbits< type, 29,  1 >;  /**< DTEST Raw Mode Enable for Q Channel  */
  };

  /**
   * Packet Buffer Control Register
   */
  struct PB_CTRL
  : public reg< uint32_t, base_addr + 0x2a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a0, rw, 0 >;

    using PB_PROTECT  = regbits< type,  0,  1 >;  /**< PB Protect  */
  };

  /**
   * Transceiver Sequence Manager Control
   */
  struct TSM_CTRL
  : public reg< uint32_t, base_addr + 0x2c0, rw, 0xFF000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c0, rw, 0xFF000000 >;

    using FORCE_TX_EN          = regbits< type,  2,  1 >;  /**< Force Transmit Enable                          */
    using FORCE_RX_EN          = regbits< type,  3,  1 >;  /**< Force Receive Enable                           */
    using PA_RAMP_SEL          = regbits< type,  4,  2 >;  /**< PA Ramp Selection                              */
    using DATA_PADDING_EN      = regbits< type,  6,  1 >;  /**< Data Padding Enable                            */
    using TX_ABORT_DIS         = regbits< type, 16,  1 >;  /**< Transmit Abort Disable                         */
    using RX_ABORT_DIS         = regbits< type, 17,  1 >;  /**< Receive Abort Disable                          */
    using ABORT_ON_CTUNE       = regbits< type, 18,  1 >;  /**< Abort On Coarse Tune Lock Detect Failure       */
    using ABORT_ON_CYCLE_SLIP  = regbits< type, 19,  1 >;  /**< Abort On Cycle Slip Lock Detect Failure        */
    using ABORT_ON_FREQ_TARG   = regbits< type, 20,  1 >;  /**< Abort On Frequency Target Lock Detect Failure  */
    using BKPT                 = regbits< type, 24,  8 >;  /**< TSM Breakpoint                                 */
  };

  /**
   * End of Sequence Control
   */
  struct END_OF_SEQ
  : public reg< uint32_t, base_addr + 0x2c4, rw, 0x65646A67 >
  {
    using type = reg< uint32_t, base_addr + 0x2c4, rw, 0x65646A67 >;

    using END_OF_TX_WU  = regbits< type,  0,  8 >;  /**< End of TX Warmup    */
    using END_OF_TX_WD  = regbits< type,  8,  8 >;  /**< End of TX Warmdown  */
    using END_OF_RX_WU  = regbits< type, 16,  8 >;  /**< End of RX Warmup    */
    using END_OF_RX_WD  = regbits< type, 24,  8 >;  /**< End of RX Warmdown  */
  };

  /**
   * TSM Override 0
   */
  struct TSM_OVRD0
  : public reg< uint32_t, base_addr + 0x2c8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c8, rw, 0 >;

    using PLL_REG_EN_OVRD_EN                = regbits< type,  0,  1 >;  /**< Override control for PLL_REG_EN                */
    using PLL_REG_EN_OVRD                   = regbits< type,  1,  1 >;  /**< Override value for PLL_REG_EN                  */
    using PLL_VCO_REG_EN_OVRD_EN            = regbits< type,  2,  1 >;  /**< Override control for PLL_VCO_REG_EN            */
    using PLL_VCO_REG_EN_OVRD               = regbits< type,  3,  1 >;  /**< Override value for PLL_VCO_REG_EN              */
    using QGEN_REG_EN_OVRD_EN               = regbits< type,  4,  1 >;  /**< Override control for QGEN_REG_EN               */
    using QGEN_REG_EN_OVRD                  = regbits< type,  5,  1 >;  /**< Override value for QGEN_REG_EN                 */
    using TCA_TX_REG_EN_OVRD_EN             = regbits< type,  6,  1 >;  /**< Override control for TCA_TX_REG_EN             */
    using TCA_TX_REG_EN_OVRD                = regbits< type,  7,  1 >;  /**< Override value for TCA_TX_REG_EN               */
    using ADC_ANA_REG_EN_OVRD_EN            = regbits< type,  8,  1 >;  /**< Override control for ADC_ANA_REG_EN            */
    using ADC_ANA_REG_EN_OVRD               = regbits< type,  9,  1 >;  /**< Override value for ADC_ANA_REG_EN              */
    using ADC_DIG_REG_EN_OVRD_EN            = regbits< type, 10,  1 >;  /**< Override control for ADC_DIG_REG_EN            */
    using ADC_DIG_REG_EN_OVRD               = regbits< type, 11,  1 >;  /**< Override value for ADC_DIG_REG_EN              */
    using XTAL_PLL_REF_CLK_EN_OVRD_EN       = regbits< type, 12,  1 >;  /**< Override control for XTAL_PLL_REF_CLK_EN       */
    using XTAL_PLL_REF_CLK_EN_OVRD          = regbits< type, 13,  1 >;  /**< Override value for XTAL_PLL_REF_CLK_EN         */
    using XTAL_ADC_REF_CLK_EN_OVRD_EN       = regbits< type, 14,  1 >;  /**< Override control for XTAL_ADC_REF_CLK_EN       */
    using XTAL_ADC_REF_CLK_EN_OVRD          = regbits< type, 15,  1 >;  /**< Override value for XTAL_ADC_REF_CLK_EN         */
    using PLL_VCO_AUTOTUNE_EN_OVRD_EN       = regbits< type, 16,  1 >;  /**< Override control for PLL_VCO_AUTOTUNE_EN       */
    using PLL_VCO_AUTOTUNE_EN_OVRD          = regbits< type, 17,  1 >;  /**< Override value for PLL_VCO_AUTOTUNE_EN         */
    using PLL_CYCLE_SLIP_LD_EN_OVRD_EN      = regbits< type, 18,  1 >;  /**< Override control for PLL_CYCLE_SLIP_LD_EN      */
    using PLL_CYCLE_SLIP_LD_EN_OVRD         = regbits< type, 19,  1 >;  /**< Override value for PLL_CYCLE_SLIP_LD_EN        */
    using PLL_VCO_EN_OVRD_EN                = regbits< type, 20,  1 >;  /**< Override control for PLL_VCO_EN                */
    using PLL_VCO_EN_OVRD                   = regbits< type, 21,  1 >;  /**< Override value for PLL_VCO_EN                  */
    using PLL_VCO_BUF_RX_EN_OVRD_EN         = regbits< type, 22,  1 >;  /**< Override control for PLL_VCO_BUF_RX_EN         */
    using PLL_VCO_BUF_RX_EN_OVRD            = regbits< type, 23,  1 >;  /**< Override value for PLL_VCO_BUF_RX_EN           */
    using PLL_VCO_BUF_TX_EN_OVRD_EN         = regbits< type, 24,  1 >;  /**< Override control for PLL_VCO_BUF_TX_EN         */
    using PLL_VCO_BUF_TX_EN_OVRD            = regbits< type, 25,  1 >;  /**< Override value for PLL_VCO_BUF_TX_EN           */
    using PLL_PA_BUF_EN_OVRD_EN             = regbits< type, 26,  1 >;  /**< Override control for PLL_PA_BUF_EN             */
    using PLL_PA_BUF_EN_OVRD                = regbits< type, 27,  1 >;  /**< Override value for PLL_PA_BUF_EN               */
    using PLL_LDV_EN_OVRD_EN                = regbits< type, 28,  1 >;  /**< Override control for PLL_LDV_EN                */
    using PLL_LDV_EN_OVRD                   = regbits< type, 29,  1 >;  /**< Override value for PLL_LDV_EN                  */
    using PLL_RX_LDV_RIPPLE_MUX_EN_OVRD_EN  = regbits< type, 30,  1 >;  /**< Override control for PLL_RX_LDV_RIPPLE_MUX_EN  */
    using PLL_RX_LDV_RIPPLE_MUX_EN_OVRD     = regbits< type, 31,  1 >;  /**< Override value for PLL_RX_LDV_RIPPLE_MUX_EN    */
  };

  /**
   * TSM Override 1
   */
  struct TSM_OVRD1
  : public reg< uint32_t, base_addr + 0x2cc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2cc, rw, 0 >;

    using PLL_TX_LDV_RIPPLE_MUX_EN_OVRD_EN  = regbits< type,  0,  1 >;  /**< Override control for PLL_TX_LDV_RIPPLE_MUX_EN  */
    using PLL_TX_LDV_RIPPLE_MUX_EN_OVRD     = regbits< type,  1,  1 >;  /**< Override value for PLL_TX_LDV_RIPPLE_MUX_EN    */
    using PLL_FILTER_CHARGE_EN_OVRD_EN      = regbits< type,  2,  1 >;  /**< Override control for PLL_FILTER_CHARGE_EN      */
    using PLL_FILTER_CHARGE_EN_OVRD         = regbits< type,  3,  1 >;  /**< Override value for PLL_FILTER_CHARGE_EN        */
    using PLL_PHDET_EN_OVRD_EN              = regbits< type,  4,  1 >;  /**< Override control for PLL_PHDET_EN              */
    using PLL_PHDET_EN_OVRD                 = regbits< type,  5,  1 >;  /**< Override value for PLL_PHDET_EN                */
    using QGEN25_EN_OVRD_EN                 = regbits< type,  6,  1 >;  /**< Override control for QGEN25_EN                 */
    using QGEN25_EN_OVRD                    = regbits< type,  7,  1 >;  /**< Override value for QGEN25_EN                   */
    using TX_EN_OVRD_EN                     = regbits< type,  8,  1 >;  /**< Override control for TX_EN                     */
    using TX_EN_OVRD                        = regbits< type,  9,  1 >;  /**< Override value for TX_EN                       */
    using ADC_EN_OVRD_EN                    = regbits< type, 10,  1 >;  /**< Override control for ADC_EN                    */
    using ADC_EN_OVRD                       = regbits< type, 11,  1 >;  /**< Override value for ADC_EN                      */
    using ADC_BIAS_EN_OVRD_EN               = regbits< type, 12,  1 >;  /**< Override control for ADC_BIAS_EN               */
    using ADC_BIAS_EN_OVRD                  = regbits< type, 13,  1 >;  /**< Override value for ADC_BIAS_EN                 */
    using ADC_CLK_EN_OVRD_EN                = regbits< type, 14,  1 >;  /**< Override control for ADC_CLK_EN                */
    using ADC_CLK_EN_OVRD                   = regbits< type, 15,  1 >;  /**< Override value for ADC_CLK_EN                  */
    using ADC_I_ADC_EN_OVRD_EN              = regbits< type, 16,  1 >;  /**< Override control for ADC_I_ADC_EN              */
    using ADC_I_ADC_EN_OVRD                 = regbits< type, 17,  1 >;  /**< Override value for ADC_I_ADC_EN                */
    using ADC_Q_ADC_EN_OVRD_EN              = regbits< type, 18,  1 >;  /**< Override control for ADC_Q_ADC_EN              */
    using ADC_Q_ADC_EN_OVRD                 = regbits< type, 19,  1 >;  /**< Override value for ADC_Q_ADC_EN                */
    using ADC_DAC1_EN_OVRD_EN               = regbits< type, 20,  1 >;  /**< Override control for ADC_DAC1_EN               */
    using ADC_DAC1_EN_OVRD                  = regbits< type, 21,  1 >;  /**< Override value for ADC_DAC1_EN                 */
    using ADC_DAC2_EN_OVRD_EN               = regbits< type, 22,  1 >;  /**< Override control for ADC_DAC2_EN               */
    using ADC_DAC2_EN_OVRD                  = regbits< type, 23,  1 >;  /**< Override value for ADC_DAC2_EN                 */
    using ADC_RST_EN_OVRD_EN                = regbits< type, 24,  1 >;  /**< Override control for ADC_RST_EN                */
    using ADC_RST_EN_OVRD                   = regbits< type, 25,  1 >;  /**< Override value for ADC_RST_EN                  */
    using BBF_I_EN_OVRD_EN                  = regbits< type, 26,  1 >;  /**< Override control for BBF_I_EN                  */
    using BBF_I_EN_OVRD                     = regbits< type, 27,  1 >;  /**< Override value for BBF_I_EN                    */
    using BBF_Q_EN_OVRD_EN                  = regbits< type, 28,  1 >;  /**< Override control for BBF_Q_EN                  */
    using BBF_Q_EN_OVRD                     = regbits< type, 29,  1 >;  /**< Override value for BBF_Q_EN                    */
    using BBF_PDET_EN_OVRD_EN               = regbits< type, 30,  1 >;  /**< Override control for BBF_PDET_EN               */
    using BBF_PDET_EN_OVRD                  = regbits< type, 31,  1 >;  /**< Override value for BBF_PDET_EN                 */
  };

  /**
   * TSM Override 2
   */
  struct TSM_OVRD2
  : public reg< uint32_t, base_addr + 0x2d0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d0, rw, 0 >;

    using BBF_DCOC_EN_OVRD_EN      = regbits< type,  0,  1 >;  /**< Override control for BBF_DCOC_EN      */
    using BBF_DCOC_EN_OVRD         = regbits< type,  1,  1 >;  /**< Override value for BBF_DCOC_EN        */
    using TCA_EN_OVRD_EN           = regbits< type,  2,  1 >;  /**< Override control for TCA_EN           */
    using TCA_EN_OVRD              = regbits< type,  3,  1 >;  /**< Override value for TCA_EN             */
    using TZA_I_EN_OVRD_EN         = regbits< type,  4,  1 >;  /**< Override control for TZA_I_EN         */
    using TZA_I_EN_OVRD            = regbits< type,  5,  1 >;  /**< Override value for TZA_I_EN           */
    using TZA_Q_EN_OVRD_EN         = regbits< type,  6,  1 >;  /**< Override control for TZA_Q_EN         */
    using TZA_Q_EN_OVRD            = regbits< type,  7,  1 >;  /**< Override value for TZA_Q_EN           */
    using TZA_PDET_EN_OVRD_EN      = regbits< type,  8,  1 >;  /**< Override control for TZA_PDET_EN      */
    using TZA_PDET_EN_OVRD         = regbits< type,  9,  1 >;  /**< Override value for TZA_PDET_EN        */
    using TZA_DCOC_EN_OVRD_EN      = regbits< type, 10,  1 >;  /**< Override control for TZA_DCOC_EN      */
    using TZA_DCOC_EN_OVRD         = regbits< type, 11,  1 >;  /**< Override value for TZA_DCOC_EN        */
    using PLL_DIG_EN_OVRD_EN       = regbits< type, 12,  1 >;  /**< Override control for PLL_DIG_EN       */
    using PLL_DIG_EN_OVRD          = regbits< type, 13,  1 >;  /**< Override value for PLL_DIG_EN         */
    using TX_DIG_EN_OVRD_EN        = regbits< type, 14,  1 >;  /**< Override control for TX_DIG_EN        */
    using TX_DIG_EN_OVRD           = regbits< type, 15,  1 >;  /**< Override value for TX_DIG_EN          */
    using RX_DIG_EN_OVRD_EN        = regbits< type, 16,  1 >;  /**< Override control for RX_DIG_EN        */
    using RX_DIG_EN_OVRD           = regbits< type, 17,  1 >;  /**< Override value for RX_DIG_EN          */
    using RX_INIT_OVRD_EN          = regbits< type, 18,  1 >;  /**< Override control for RX_INIT          */
    using RX_INIT_OVRD             = regbits< type, 19,  1 >;  /**< Override value for RX_INIT            */
    using SIGMA_DELTA_EN_OVRD_EN   = regbits< type, 20,  1 >;  /**< Override control for SIGMA_DELTA_EN   */
    using SIGMA_DELTA_EN_OVRD      = regbits< type, 21,  1 >;  /**< Override value for SIGMA_DELTA_EN     */
    using ZBDEM_RX_EN_OVRD_EN      = regbits< type, 22,  1 >;  /**< Override control for ZBDEM_RX_EN      */
    using ZBDEM_RX_EN_OVRD         = regbits< type, 23,  1 >;  /**< Override value for ZBDEM_RX_EN        */
    using DCOC_EN_OVRD_EN          = regbits< type, 24,  1 >;  /**< Override control for DCOC_EN          */
    using DCOC_EN_OVRD             = regbits< type, 25,  1 >;  /**< Override value for DCOC_EN            */
    using DCOC_INIT_OVRD_EN        = regbits< type, 26,  1 >;  /**< Override control for DCOC_INIT        */
    using DCOC_INIT_OVRD           = regbits< type, 27,  1 >;  /**< Override value for DCOC_INIT          */
    using FREQ_TARG_LD_EN_OVRD_EN  = regbits< type, 28,  1 >;  /**< Override control for FREQ_TARG_LD_EN  */
    using FREQ_TARG_LD_EN_OVRD     = regbits< type, 29,  1 >;  /**< Override value for FREQ_TARG_LD_EN    */
    using SAR_ADC_TRIG_EN_OVRD_EN  = regbits< type, 30,  1 >;  /**< Override control for SAR_ADC_TRIG_EN  */
    using SAR_ADC_TRIG_EN_OVRD     = regbits< type, 31,  1 >;  /**< Override value for SAR_ADC_TRIG_EN    */
  };

  /**
   * TSM Override 3
   */
  struct TSM_OVRD3
  : public reg< uint32_t, base_addr + 0x2d4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d4, rw, 0 >;

    using TSM_SPARE0_EN_OVRD_EN  = regbits< type,  0,  1 >;  /**< Override control for TSM_SPARE0_EN  */
    using TSM_SPARE0_EN_OVRD     = regbits< type,  1,  1 >;  /**< Override value for TSM_SPARE0_EN    */
    using TSM_SPARE1_EN_OVRD_EN  = regbits< type,  2,  1 >;  /**< Override control for TSM_SPARE1_EN  */
    using TSM_SPARE1_EN_OVRD     = regbits< type,  3,  1 >;  /**< Override value for TSM_SPARE1_EN    */
    using TSM_SPARE2_EN_OVRD_EN  = regbits< type,  4,  1 >;  /**< Override control for TSM_SPARE2_EN  */
    using TSM_SPARE2_EN_OVRD     = regbits< type,  5,  1 >;  /**< Override value for TSM_SPARE2_EN    */
    using TSM_SPARE3_EN_OVRD_EN  = regbits< type,  6,  1 >;  /**< Override control for TSM_SPARE3_EN  */
    using TSM_SPARE3_EN_OVRD     = regbits< type,  7,  1 >;  /**< Override value for TSM_SPARE3_EN    */
    using TX_MODE_OVRD_EN        = regbits< type,  8,  1 >;  /**< Override control for TX_MODE        */
    using TX_MODE_OVRD           = regbits< type,  9,  1 >;  /**< Override value for TX_MODE          */
    using RX_MODE_OVRD_EN        = regbits< type, 10,  1 >;  /**< Override control for RX_MODE        */
    using RX_MODE_OVRD           = regbits< type, 11,  1 >;  /**< Override value for RX_MODE          */
  };

  /**
   * PA Power
   */
  struct PA_POWER
  : public reg< uint32_t, base_addr + 0x2d8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d8, rw, 0 >;

    // fixme: Field name equals parent register name: PA_POWER
    using PA_POWER_ = regbits< type,  0,  4 >;  /**< PA Power  */
  };

  /**
   * PA Bias Table 0
   */
  struct PA_BIAS_TBL0
  : public reg< uint32_t, base_addr + 0x2dc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2dc, rw, 0 >;

    using PA_BIAS0  = regbits< type,  0,  4 >;  /**< PA_BIAS0  */
    using PA_BIAS1  = regbits< type,  8,  4 >;  /**< PA_BIAS1  */
    using PA_BIAS2  = regbits< type, 16,  4 >;  /**< PA_BIAS2  */
    using PA_BIAS3  = regbits< type, 24,  4 >;  /**< PA_BIAS3  */
  };

  /**
   * PA Bias Table 1
   */
  struct PA_BIAS_TBL1
  : public reg< uint32_t, base_addr + 0x2e0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e0, rw, 0 >;

    using PA_BIAS4  = regbits< type,  0,  4 >;  /**< PA_BIAS4  */
    using PA_BIAS5  = regbits< type,  8,  4 >;  /**< PA_BIAS5  */
    using PA_BIAS6  = regbits< type, 16,  4 >;  /**< PA_BIAS6  */
    using PA_BIAS7  = regbits< type, 24,  4 >;  /**< PA_BIAS7  */
  };

  /**
   * Recycle Count Register
   */
  struct RECYCLE_COUNT
  : public reg< uint32_t, base_addr + 0x2e4, rw, 0x826 >
  {
    using type = reg< uint32_t, base_addr + 0x2e4, rw, 0x826 >;

    using RECYCLE_COUNT0  = regbits< type,  0,  8 >;  /**< TSM RX Recycle Count 0  */
    using RECYCLE_COUNT1  = regbits< type,  8,  8 >;  /**< TSM RX Recycle Count 1  */
  };

  /**
   * TSM_TIMING00
   */
  struct TSM_TIMING00
  : public reg< uint32_t, base_addr + 0x2e8, rw, 0x65006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x2e8, rw, 0x65006A00 >;

    using PLL_REG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_REG_EN TX sequence.                    */
    using PLL_REG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_REG_EN signal or group TX sequence.  */
    using PLL_REG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_REG_EN signal or group RX sequence.    */
    using PLL_REG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_REG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING01
   */
  struct TSM_TIMING01
  : public reg< uint32_t, base_addr + 0x2ec, rw, 0x65006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x2ec, rw, 0x65006A00 >;

    using PLL_VCO_REG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_VCO_REG_EN TX sequence.                    */
    using PLL_VCO_REG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_VCO_REG_EN signal or group TX sequence.  */
    using PLL_VCO_REG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_VCO_REG_EN signal or group RX sequence.    */
    using PLL_VCO_REG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_VCO_REG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING02
   */
  struct TSM_TIMING02
  : public reg< uint32_t, base_addr + 0x2f0, rw, 0x65006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x2f0, rw, 0x65006A00 >;

    using QGEN_REG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for QGEN_REG_EN TX sequence.                    */
    using QGEN_REG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for QGEN_REG_EN signal or group TX sequence.  */
    using QGEN_REG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for QGEN_REG_EN signal or group RX sequence.    */
    using QGEN_REG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for QGEN_REG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING03
   */
  struct TSM_TIMING03
  : public reg< uint32_t, base_addr + 0x2f4, rw, 0x65006A00 >
  {
    using type = reg< uint32_t, base_addr + 0x2f4, rw, 0x65006A00 >;

    using TCA_TX_REG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TCA_TX_REG_EN TX sequence.                    */
    using TCA_TX_REG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for TCA_TX_REG_EN signal or group TX sequence.  */
    using TCA_TX_REG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TCA_TX_REG_EN signal or group RX sequence.    */
    using TCA_TX_REG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for TCA_TX_REG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING04
   */
  struct TSM_TIMING04
  : public reg< uint32_t, base_addr + 0x2f8, rw, 0x6500FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x2f8, rw, 0x6500FFFF >;

    using ADC_REG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for ADC_REG_EN signal or group RX sequence.    */
    using ADC_REG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for ADC_REG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING05
   */
  struct TSM_TIMING05
  : public reg< uint32_t, base_addr + 0x2fc, rw, 0x650B6A3F >
  {
    using type = reg< uint32_t, base_addr + 0x2fc, rw, 0x650B6A3F >;

    using PLL_REF_CLK_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_REF_CLK_EN TX sequence.                    */
    using PLL_REF_CLK_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_REF_CLK_EN signal or group TX sequence.  */
    using PLL_REF_CLK_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_REF_CLK_EN signal or group RX sequence.    */
    using PLL_REF_CLK_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_REF_CLK_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING06
   */
  struct TSM_TIMING06
  : public reg< uint32_t, base_addr + 0x300, rw, 0x651AFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x651AFFFF >;

    using ADC_CLK_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for ADC_CLK_EN signal or group RX sequence.    */
    using ADC_CLK_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for ADC_CLK_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING07
   */
  struct TSM_TIMING07
  : public reg< uint32_t, base_addr + 0x304, rw, 0x1A004E00 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0x1A004E00 >;

    using PLL_VCO_AUTOTUNE_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_VCO_AUTOTUNE_EN TX sequence.                    */
    using PLL_VCO_AUTOTUNE_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_VCO_AUTOTUNE_EN signal or group TX sequence.  */
    using PLL_VCO_AUTOTUNE_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_VCO_AUTOTUNE_EN signal or group RX sequence.    */
    using PLL_VCO_AUTOTUNE_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_VCO_AUTOTUNE_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING08
   */
  struct TSM_TIMING08
  : public reg< uint32_t, base_addr + 0x308, rw, 0x65336867 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0x65336867 >;

    using PLL_CYCLE_SLIP_LD_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_CYCLE_SLIP_LD_EN TX sequence.                    */
    using PLL_CYCLE_SLIP_LD_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_CYCLE_SLIP_LD_EN signal or group TX sequence.  */
    using PLL_CYCLE_SLIP_LD_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_CYCLE_SLIP_LD_EN signal or group RX sequence.    */
    using PLL_CYCLE_SLIP_LD_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_CYCLE_SLIP_LD_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING09
   */
  struct TSM_TIMING09
  : public reg< uint32_t, base_addr + 0x30c, rw, 0x65056A05 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0x65056A05 >;

    using PLL_VCO_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_VCO_EN TX sequence.                    */
    using PLL_VCO_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_VCO_EN signal or group TX sequence.  */
    using PLL_VCO_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_VCO_EN signal or group RX sequence.    */
    using PLL_VCO_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_VCO_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING10
   */
  struct TSM_TIMING10
  : public reg< uint32_t, base_addr + 0x310, rw, 0x6509FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0x6509FFFF >;

    using PLL_VCO_BUF_RX_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_VCO_BUF_RX_EN signal or group RX sequence.    */
    using PLL_VCO_BUF_RX_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_VCO_BUF_RX_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING11
   */
  struct TSM_TIMING11
  : public reg< uint32_t, base_addr + 0x314, rw, 0xFFFF6A09 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0xFFFF6A09 >;

    using PLL_VCO_BUF_TX_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_VCO_BUF_TX_EN TX sequence.                    */
    using PLL_VCO_BUF_TX_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_VCO_BUF_TX_EN signal or group TX sequence.  */
  };

  /**
   * TSM_TIMING12
   */
  struct TSM_TIMING12
  : public reg< uint32_t, base_addr + 0x318, rw, 0xFFFF6A64 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0xFFFF6A64 >;

    using PLL_PA_BUF_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_PA_BUF_EN TX sequence.                    */
    using PLL_PA_BUF_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_PA_BUF_EN signal or group TX sequence.  */
  };

  /**
   * TSM_TIMING13
   */
  struct TSM_TIMING13
  : public reg< uint32_t, base_addr + 0x31c, rw, 0x651A6A4E >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0x651A6A4E >;

    using PLL_LDV_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_LDV_EN TX sequence.                    */
    using PLL_LDV_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_LDV_EN signal or group TX sequence.  */
    using PLL_LDV_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_LDV_EN signal or group RX sequence.    */
    using PLL_LDV_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_LDV_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING14
   */
  struct TSM_TIMING14
  : public reg< uint32_t, base_addr + 0x320, rw, 0x650AFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x320, rw, 0x650AFFFF >;

    using PLL_RX_LDV_RIPPLE_MUX_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_RX_LDV_RIPPLE_MUX_EN signal or group RX sequence.    */
    using PLL_RX_LDV_RIPPLE_MUX_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_RX_LDV_RIPPLE_MUX_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING15
   */
  struct TSM_TIMING15
  : public reg< uint32_t, base_addr + 0x324, rw, 0xFFFF6A0A >
  {
    using type = reg< uint32_t, base_addr + 0x324, rw, 0xFFFF6A0A >;

    using PLL_TX_LDV_RIPPLE_MUX_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_TX_LDV_RIPPLE_MUX_EN TX sequence.                    */
    using PLL_TX_LDV_RIPPLE_MUX_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_TX_LDV_RIPPLE_MUX_EN signal or group TX sequence.  */
  };

  /**
   * TSM_TIMING16
   */
  struct TSM_TIMING16
  : public reg< uint32_t, base_addr + 0x328, rw, 0x1A104E44 >
  {
    using type = reg< uint32_t, base_addr + 0x328, rw, 0x1A104E44 >;

    using PLL_FILTER_CHARGE_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_FILTER_CHARGE_EN TX sequence.                    */
    using PLL_FILTER_CHARGE_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_FILTER_CHARGE_EN signal or group TX sequence.  */
    using PLL_FILTER_CHARGE_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_FILTER_CHARGE_EN signal or group RX sequence.    */
    using PLL_FILTER_CHARGE_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_FILTER_CHARGE_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING17
   */
  struct TSM_TIMING17
  : public reg< uint32_t, base_addr + 0x32c, rw, 0x65106A44 >
  {
    using type = reg< uint32_t, base_addr + 0x32c, rw, 0x65106A44 >;

    using PLL_PHDET_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_PHDET_EN TX sequence.                    */
    using PLL_PHDET_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_PHDET_EN signal or group TX sequence.  */
    using PLL_PHDET_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_PHDET_EN signal or group RX sequence.    */
    using PLL_PHDET_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_PHDET_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING18
   */
  struct TSM_TIMING18
  : public reg< uint32_t, base_addr + 0x330, rw, 0x6505FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x330, rw, 0x6505FFFF >;

    using QGEN25_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for QGEN25_EN signal or group RX sequence.    */
    using QGEN25_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for QGEN25_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING19
   */
  struct TSM_TIMING19
  : public reg< uint32_t, base_addr + 0x334, rw, 0xFFFF6864 >
  {
    using type = reg< uint32_t, base_addr + 0x334, rw, 0xFFFF6864 >;

    using TX_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TX_EN TX sequence.                    */
    using TX_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for TX_EN signal or group TX sequence.  */
  };

  /**
   * TSM_TIMING20
   */
  struct TSM_TIMING20
  : public reg< uint32_t, base_addr + 0x338, rw, 0x651AFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x338, rw, 0x651AFFFF >;

    using ADC_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for ADC_EN signal or group RX sequence.    */
    using ADC_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for ADC_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING21
   */
  struct TSM_TIMING21
  : public reg< uint32_t, base_addr + 0x33c, rw, 0x651AFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x33c, rw, 0x651AFFFF >;

    using ADC_I_Q_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for ADC_I_Q_EN signal or group RX sequence.    */
    using ADC_I_Q_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for ADC_I_Q_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING22
   */
  struct TSM_TIMING22
  : public reg< uint32_t, base_addr + 0x340, rw, 0x651AFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x340, rw, 0x651AFFFF >;

    using ADC_DAC_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for ADC_DAC_EN signal or group RX sequence.    */
    using ADC_DAC_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for ADC_DAC_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING23
   */
  struct TSM_TIMING23
  : public reg< uint32_t, base_addr + 0x344, rw, 0x651AFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x344, rw, 0x651AFFFF >;

    using ADC_RST_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for ADC_RST_EN signal or group RX sequence.    */
    using ADC_RST_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for ADC_RST_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING24
   */
  struct TSM_TIMING24
  : public reg< uint32_t, base_addr + 0x348, rw, 0x6518FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x348, rw, 0x6518FFFF >;

    using BBF_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for BBF_EN signal or group RX sequence.    */
    using BBF_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for BBF_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING25
   */
  struct TSM_TIMING25
  : public reg< uint32_t, base_addr + 0x34c, rw, 0x6518FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x34c, rw, 0x6518FFFF >;

    using TCA_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TCA_EN signal or group RX sequence.    */
    using TCA_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for TCA_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING26
   */
  struct TSM_TIMING26
  : public reg< uint32_t, base_addr + 0x350, rw, 0x65096A09 >
  {
    using type = reg< uint32_t, base_addr + 0x350, rw, 0x65096A09 >;

    using PLL_DIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for PLL_DIG_EN TX sequence.                    */
    using PLL_DIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for PLL_DIG_EN signal or group TX sequence.  */
    using PLL_DIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for PLL_DIG_EN signal or group RX sequence.    */
    using PLL_DIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for PLL_DIG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING27
   */
  struct TSM_TIMING27
  : public reg< uint32_t, base_addr + 0x354, rw, 0xFFFF6A67 >
  {
    using type = reg< uint32_t, base_addr + 0x354, rw, 0xFFFF6A67 >;

    using TX_DIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TX_DIG_EN TX sequence.                    */
    using TX_DIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for TX_DIG_EN signal or group TX sequence.  */
  };

  /**
   * TSM_TIMING28
   */
  struct TSM_TIMING28
  : public reg< uint32_t, base_addr + 0x358, rw, 0x6562FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x358, rw, 0x6562FFFF >;

    using RX_DIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_DIG_EN signal or group RX sequence.    */
    using RX_DIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for RX_DIG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING29
   */
  struct TSM_TIMING29
  : public reg< uint32_t, base_addr + 0x35c, rw, 0x6362FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x35c, rw, 0x6362FFFF >;

    using RX_INIT_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for RX_INIT signal or group RX sequence.    */
    using RX_INIT_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for RX_INIT signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING30
   */
  struct TSM_TIMING30
  : public reg< uint32_t, base_addr + 0x360, rw, 0x65106A44 >
  {
    using type = reg< uint32_t, base_addr + 0x360, rw, 0x65106A44 >;

    using SIGMA_DELTA_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SIGMA_DELTA_EN TX sequence.                    */
    using SIGMA_DELTA_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for SIGMA_DELTA_EN signal or group TX sequence.  */
    using SIGMA_DELTA_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SIGMA_DELTA_EN signal or group RX sequence.    */
    using SIGMA_DELTA_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for SIGMA_DELTA_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING31
   */
  struct TSM_TIMING31
  : public reg< uint32_t, base_addr + 0x364, rw, 0x6562FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x364, rw, 0x6562FFFF >;

    using ZBDEM_RX_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for ZBDEM_RX_EN signal or group RX sequence.    */
    using ZBDEM_RX_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for ZBDEM_RX_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING32
   */
  struct TSM_TIMING32
  : public reg< uint32_t, base_addr + 0x368, rw, 0x6526FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x368, rw, 0x6526FFFF >;

    using DCOC_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for DCOC_EN signal or group RX sequence.    */
    using DCOC_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for DCOC_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING33
   */
  struct TSM_TIMING33
  : public reg< uint32_t, base_addr + 0x36c, rw, 0x2726FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x36c, rw, 0x2726FFFF >;

    using DCOC_INIT_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for DCOC_INIT signal or group RX sequence.    */
    using DCOC_INIT_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for DCOC_INIT signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING34
   */
  struct TSM_TIMING34
  : public reg< uint32_t, base_addr + 0x370, rw, 0x65336865 >
  {
    using type = reg< uint32_t, base_addr + 0x370, rw, 0x65336865 >;

    using FREQ_TARG_LD_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for FREQ_TARG_LD_EN TX sequence.                    */
    using FREQ_TARG_LD_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for FREQ_TARG_LD_EN signal or group TX sequence.  */
    using FREQ_TARG_LD_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for FREQ_TARG_LD_EN signal or group RX sequence.    */
    using FREQ_TARG_LD_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for FREQ_TARG_LD_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING35
   */
  struct TSM_TIMING35
  : public reg< uint32_t, base_addr + 0x374, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x374, rw, 0xFFFFFFFF >;

    using SAR_ADC_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for SAR_ADC_TRIG_EN TX sequence.                    */
    using SAR_ADC_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for SAR_ADC_TRIG_EN signal or group TX sequence.  */
    using SAR_ADC_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for SAR_ADC_TRIG_EN signal or group RX sequence.    */
    using SAR_ADC_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for SAR_ADC_TRIG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING36
   */
  struct TSM_TIMING36
  : public reg< uint32_t, base_addr + 0x378, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x378, rw, 0xFFFFFFFF >;

    using TSM_SPARE0_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TSM_SPARE0_EN TX sequence.                    */
    using TSM_SPARE0_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for TSM_SPARE0_EN signal or group TX sequence.  */
    using TSM_SPARE0_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TSM_SPARE0_EN signal or group RX sequence.    */
    using TSM_SPARE0_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for TSM_SPARE0_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING37
   */
  struct TSM_TIMING37
  : public reg< uint32_t, base_addr + 0x37c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x37c, rw, 0xFFFFFFFF >;

    using TSM_SPARE1_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TSM_SPARE1_EN TX sequence.                    */
    using TSM_SPARE1_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for TSM_SPARE1_EN signal or group TX sequence.  */
    using TSM_SPARE1_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TSM_SPARE1_EN signal or group RX sequence.    */
    using TSM_SPARE1_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for TSM_SPARE1_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING38
   */
  struct TSM_TIMING38
  : public reg< uint32_t, base_addr + 0x380, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x380, rw, 0xFFFFFFFF >;

    using TSM_SPARE2_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TSM_SPARE2_EN TX sequence.                    */
    using TSM_SPARE2_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for TSM_SPARE2_EN signal or group TX sequence.  */
    using TSM_SPARE2_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TSM_SPARE2_EN signal or group RX sequence.    */
    using TSM_SPARE2_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for TSM_SPARE2_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING39
   */
  struct TSM_TIMING39
  : public reg< uint32_t, base_addr + 0x384, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x384, rw, 0xFFFFFFFF >;

    using TSM_SPARE3_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for TSM_SPARE3_EN TX sequence.                    */
    using TSM_SPARE3_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for TSM_SPARE3_EN signal or group TX sequence.  */
    using TSM_SPARE3_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for TSM_SPARE3_EN signal or group RX sequence.    */
    using TSM_SPARE3_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for TSM_SPARE3_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING40
   */
  struct TSM_TIMING40
  : public reg< uint32_t, base_addr + 0x388, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x388, rw, 0xFFFFFFFF >;

    using GPIO0_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for GPIO0_TRIG_EN TX sequence.                    */
    using GPIO0_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for GPIO0_TRIG_EN signal or group TX sequence.  */
    using GPIO0_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for GPIO0_TRIG_EN signal or group RX sequence.    */
    using GPIO0_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for GPIO0_TRIG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING41
   */
  struct TSM_TIMING41
  : public reg< uint32_t, base_addr + 0x38c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x38c, rw, 0xFFFFFFFF >;

    using GPIO1_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for GPIO1_TRIG_EN TX sequence.                    */
    using GPIO1_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for GPIO1_TRIG_EN signal or group TX sequence.  */
    using GPIO1_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for GPIO1_TRIG_EN signal or group RX sequence.    */
    using GPIO1_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for GPIO1_TRIG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING42
   */
  struct TSM_TIMING42
  : public reg< uint32_t, base_addr + 0x390, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x390, rw, 0xFFFFFFFF >;

    using GPIO2_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for GPIO2_TRIG_EN TX sequence.                    */
    using GPIO2_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for GPIO2_TRIG_EN signal or group TX sequence.  */
    using GPIO2_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for GPIO2_TRIG_EN signal or group RX sequence.    */
    using GPIO2_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for GPIO2_TRIG_EN signal or group RX sequence.  */
  };

  /**
   * TSM_TIMING43
   */
  struct TSM_TIMING43
  : public reg< uint32_t, base_addr + 0x394, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x394, rw, 0xFFFFFFFF >;

    using GPIO3_TRIG_EN_TX_HI  = regbits< type,  0,  8 >;  /**< Assertion time setting for GPIO3_TRIG_EN TX sequence.                    */
    using GPIO3_TRIG_EN_TX_LO  = regbits< type,  8,  8 >;  /**< Deassertion time setting for GPIO3_TRIG_EN signal or group TX sequence.  */
    using GPIO3_TRIG_EN_RX_HI  = regbits< type, 16,  8 >;  /**< Assertion time setting for GPIO3_TRIG_EN signal or group RX sequence.    */
    using GPIO3_TRIG_EN_RX_LO  = regbits< type, 24,  8 >;  /**< Deassertion time setting for GPIO3_TRIG_EN signal or group RX sequence.  */
  };

  /**
   * CORR_CTRL
   */
  struct CORR_CTRL
  : public reg< uint32_t, base_addr + 0x3c0, rw, 0x482 >
  {
    using type = reg< uint32_t, base_addr + 0x3c0, rw, 0x482 >;

    using CORR_VT          = regbits< type,  0,  8 >;  /**< CORR_VT          */
    using CORR_NVAL        = regbits< type,  8,  3 >;  /**< CORR_NVAL        */
    using MAX_CORR_EN      = regbits< type, 11,  1 >;  /**< MAX_CORR_EN      */
    using RX_MAX_CORR      = regbits< type, 16,  8 >;  /**< RX_MAX_CORR      */
    using RX_MAX_PREAMBLE  = regbits< type, 24,  8 >;  /**< RX_MAX_PREAMBLE  */
  };

  /**
   * PN_TYPE
   */
  struct PN_TYPE
  : public reg< uint32_t, base_addr + 0x3c4, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x3c4, rw, 0x1 >;

    // fixme: Field name equals parent register name: PN_TYPE
    using PN_TYPE_ = regbits< type,  0,  1 >;  /**< PN_TYPE  */
    using TX_INV   = regbits< type,  1,  1 >;  /**< TX_INV   */
  };

  /**
   * PN_CODE
   */
  struct PN_CODE
  : public reg< uint32_t, base_addr + 0x3c8, rw, 0x744AC39B >
  {
    using type = reg< uint32_t, base_addr + 0x3c8, rw, 0x744AC39B >;

    using PN_LSB  = regbits< type,  0, 16 >;  /**< PN_LSB  */
    using PN_MSB  = regbits< type, 16, 16 >;  /**< PN_MSB  */
  };

  /**
   * Sync Control
   */
  struct SYNC_CTRL
  : public reg< uint32_t, base_addr + 0x3cc, rw, 0x8 >
  {
    using type = reg< uint32_t, base_addr + 0x3cc, rw, 0x8 >;

    using SYNC_PER      = regbits< type,  0,  3 >;  /**< Symbol Sync Tracking Period  */
    using TRACK_ENABLE  = regbits< type,  3,  1 >;  /**< TRACK_ENABLE                 */
  };

  /**
   * SNF_THR
   */
  struct SNF_THR
  : public reg< uint32_t, base_addr + 0x3d0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3d0, rw, 0 >;

    // fixme: Field name equals parent register name: SNF_THR
    using SNF_THR_ = regbits< type,  0,  8 >;  /**< SNIFF Mode Threshold  */
  };

  /**
   * FAD_THR
   */
  struct FAD_THR
  : public reg< uint32_t, base_addr + 0x3d4, rw, 0x82 >
  {
    using type = reg< uint32_t, base_addr + 0x3d4, rw, 0x82 >;

    // fixme: Field name equals parent register name: FAD_THR
    using FAD_THR_ = regbits< type,  0,  8 >;  /**< FAD_THR  */
  };

  /**
   * ZBDEM_AFC
   */
  struct ZBDEM_AFC
  : public reg< uint32_t, base_addr + 0x3d8, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x3d8, rw, 0x1 >;

    using AFC_EN   = regbits< type,  0,  1 >;  /**< AFC_EN           */
    using DCD_EN   = regbits< type,  1,  1 >;  /**< DCD Mode Enable  */
    using AFC_OUT  = regbits< type,  8,  5 >;  /**< AFC_OUT          */
  };

  /**
   * LPPS Control Register
   */
  struct LPPS_CTRL
  : public reg< uint32_t, base_addr + 0x3dc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3dc, rw, 0 >;

    using LPPS_ENABLE         = regbits< type,  0,  1 >;  /**< LPPS Mode Enable    */
    using LPPS_QGEN25_ALLOW   = regbits< type,  1,  1 >;  /**< LPPS_QGEN25_ALLOW   */
    using LPPS_ADC_ALLOW      = regbits< type,  2,  1 >;  /**< LPPS_ADC_ALLOW      */
    using LPPS_ADC_CLK_ALLOW  = regbits< type,  3,  1 >;  /**< LPPS_ADC_CLK_ALLOW  */
    using LPPS_ADC_I_Q_ALLOW  = regbits< type,  4,  1 >;  /**< LPPS_ADC_I_Q_ALLOW  */
    using LPPS_ADC_DAC_ALLOW  = regbits< type,  5,  1 >;  /**< LPPS_ADC_DAC_ALLOW  */
    using LPPS_BBF_ALLOW      = regbits< type,  6,  1 >;  /**< LPPS_BBF_ALLOW      */
    using LPPS_TCA_ALLOW      = regbits< type,  7,  1 >;  /**< LPPS_TCA_ALLOW      */
  };

  /**
   * ADC Control
   */
  struct ADC_CTRL
  : public reg< uint32_t, base_addr + 0x400, rw, 0xFFFF0001 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0xFFFF0001 >;

    using ADC_32MHZ_SEL   = regbits< type,  0,  1 >;  /**< ADC 32MHZ Clock Select  */
    using ADC_2X_CLK_SEL  = regbits< type,  2,  1 >;  /**< ADC_2X_CLK_SEL          */
    using ADC_DITHER_ON   = regbits< type,  9,  1 >;  /**< ADC Dither On           */
    using ADC_TEST_ON     = regbits< type, 10,  1 >;  /**< ADC Test On             */
    using ADC_COMP_ON     = regbits< type, 16, 16 >;  /**< ADC Comparator Enable   */
  };

  /**
   * ADC Tuning
   */
  struct ADC_TUNE
  : public reg< uint32_t, base_addr + 0x404, rw, 0x880033 >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0x880033 >;

    using ADC_R1_TUNE  = regbits< type,  0,  3 >;  /**< ADC_R1_TUNE  */
    using ADC_R2_TUNE  = regbits< type,  4,  3 >;  /**< ADC_R2_TUNE  */
    using ADC_C1_TUNE  = regbits< type, 16,  4 >;  /**< ADC_C1_TUNE  */
    using ADC_C2_TUNE  = regbits< type, 20,  4 >;  /**< ADC_C2_TUNE  */
  };

  /**
   * ADC Adjustment
   */
  struct ADC_ADJ
  : public reg< uint32_t, base_addr + 0x408, rw, 0x43033033 >
  {
    using type = reg< uint32_t, base_addr + 0x408, rw, 0x43033033 >;

    using ADC_IB_OPAMP1_ADJ  = regbits< type,  0,  3 >;  /**< ADC_IB_OPAMP1_ADJ  */
    using ADC_IB_OPAMP2_ADJ  = regbits< type,  4,  3 >;  /**< ADC_IB_OPAMP2_ADJ  */
    using ADC_IB_DAC1_ADJ    = regbits< type, 12,  3 >;  /**< ADC_IB_DAC1_ADJ    */
    using ADC_IB_DAC2_ADJ    = regbits< type, 16,  3 >;  /**< ADC_IB_DAC2_ADJ    */
    using ADC_IB_FLSH_ADJ    = regbits< type, 24,  3 >;  /**< ADC_IB_FLSH_ADJ    */
    using ADC_FLSH_RES_ADJ   = regbits< type, 28,  3 >;  /**< ADC_FLSH_RES_ADJ   */
  };

  /**
   * ADC Regulators
   */
  struct ADC_REGS
  : public reg< uint32_t, base_addr + 0x40c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, rw, 0 >;

    using ADC_ANA_REG_SUPPLY           = regbits< type,  0,  4 >;  /**< ADC_ANA_REG_SUPPLY           */
    using ADC_REG_DIG_SUPPLY           = regbits< type,  4,  4 >;  /**< ADC_REG_DIG_SUPPLY           */
    using ADC_ANA_REG_BYPASS_ON        = regbits< type,  8,  1 >;  /**< ADC_ANA_REG_BYPASS_ON        */
    using ADC_DIG_REG_BYPASS_ON        = regbits< type,  9,  1 >;  /**< ADC_DIG_REG_BYPASS_ON        */
    using ADC_VCMREF_BYPASS_ON         = regbits< type, 15,  1 >;  /**< ADC_VCMREF_BYPASS_ON         */
    using ADC_INTERNAL_IREF_BYPASS_ON  = regbits< type, 17,  1 >;  /**< ADC_INTERNAL_IREF_BYPASS_ON  */
  };

  /**
   * ADC Regulator Trims
   */
  struct ADC_TRIMS
  : public reg< uint32_t, base_addr + 0x410, rw, 0x444 >
  {
    using type = reg< uint32_t, base_addr + 0x410, rw, 0x444 >;

    using ADC_IREF_OPAMPS_RES_TRIM  = regbits< type,  0,  3 >;  /**< ADC_IREF_OPAMPS_RES_TRIM  */
    using ADC_IREF_FLSH_RES_TRIM    = regbits< type,  4,  3 >;  /**< ADC_IREF_FLSH_RES_TRIM    */
    using ADC_VCM_TRIM              = regbits< type,  8,  3 >;  /**< ADC_VCM_TRIM              */
  };

  /**
   * ADC Test Control
   */
  struct ADC_TEST_CTRL
  : public reg< uint32_t, base_addr + 0x414, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x414, rw, 0 >;

    using ADC_ATST_SEL              = regbits< type,  0,  5 >;  /**< ADC Analog Test Selection  */
    using ADC_DIG_REG_ATST_SEL      = regbits< type,  8,  2 >;  /**< ADC_DIG_REG_ATST_SEL       */
    using ADC_ANA_REG_ATST_SEL      = regbits< type, 12,  2 >;  /**< ADC_ANA_REG_ATST_SEL       */
    using DCOC_ALPHA_RADIUS_GS_IDX  = regbits< type, 24,  3 >;  /**< Alpha-R Scaling            */
    using ADC_SPARE3                = regbits< type, 27,  1 >;  /**< ADC_SPARE3                 */
  };

  /**
   * Baseband Filter Control
   */
  struct BBF_CTRL
  : public reg< uint32_t, base_addr + 0x420, rw, 0x173 >
  {
    using type = reg< uint32_t, base_addr + 0x420, rw, 0x173 >;

    using BBF_CAP_TUNE              = regbits< type,  0,  4 >;  /**< BBF_CAP_TUNE          */
    using BBF_RES_TUNE2             = regbits< type,  4,  4 >;  /**< BBF_RES_TUNE2         */
    using BBF_CUR_CNTL              = regbits< type,  8,  1 >;  /**< BBF_CUR_CNTL          */
    using BBF_DCOC_ON               = regbits< type,  9,  1 >;  /**< BBF_DCOC_ON           */
    using BBF_TMUX_ON               = regbits< type, 11,  1 >;  /**< BBF_TMUX_ON           */
    using DCOC_ALPHAC_SCALE_GS_IDX  = regbits< type, 12,  2 >;  /**< DCOC Alpha-C Scaling  */
    using BBF_SPARE_3_2             = regbits< type, 14,  2 >;  /**< BBF_SPARE_3_2         */
  };

  /**
   * RX Analog Control
   */
  struct RX_ANA_CTRL
  : public reg< uint32_t, base_addr + 0x42c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x42c, rw, 0 >;

    using RX_ATST_SEL          = regbits< type,  0,  4 >;  /**< RX_ATST_SEL          */
    using IQMC_DC_GAIN_ADJ_EN  = regbits< type,  4,  1 >;  /**< IQMC_DC_GAIN_ADJ_EN  */
    using LNM_SPARE_3_2_1      = regbits< type,  5,  3 >;  /**< LNM_SPARE_3_2_1      */
  };

  /**
   * Crystal Oscillator Control Register 1
   */
  struct XTAL_CTRL
  : public reg< uint32_t, base_addr + 0x434, rw, 0xACAC177 >
  {
    using type = reg< uint32_t, base_addr + 0x434, rw, 0xACAC177 >;

    using XTAL_TRIM             = regbits< type,  0,  8 >;  /**< XTAL Trim                */
    using XTAL_GM               = regbits< type,  8,  5 >;  /**< XTAL_GM                  */
    using XTAL_BYPASS           = regbits< type, 13,  1 >;  /**< XTAL Bypass              */
    using XTAL_READY_COUNT_SEL  = regbits< type, 14,  2 >;  /**< XTAL Ready Count Select  */
    using XTAL_COMP_BIAS_LO     = regbits< type, 16,  5 >;  /**< XTAL_COMP_BIAS (Low)     */
    using XTAL_ALC_START_512U   = regbits< type, 22,  1 >;  /**< XTAL_ALC_START_512U      */
    using XTAL_ALC_ON           = regbits< type, 23,  1 >;  /**< XTAL_ALC_ON              */
    using XTAL_COMP_BIAS_HI     = regbits< type, 24,  5 >;  /**< XTAL_COMP_BIAS (High)    */
    using XTAL_READY            = regbits< type, 31,  1 >;  /**< XTAL Ready Indicator     */
  };

  /**
   * Crystal Oscillator Control Register 2
   */
  struct XTAL_CTRL2
  : public reg< uint32_t, base_addr + 0x438, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x438, rw, 0x1000 >;

    using XTAL_REG_SUPPLY      = regbits< type,  0,  4 >;  /**< XTAL_REG_SUPPLY      */
    using XTAL_REG_BYPASS_ON   = regbits< type,  4,  1 >;  /**< XTAL_REG_BYPASS_ON   */
    using XTAL_REG_ON_OVRD_ON  = regbits< type,  8,  1 >;  /**< XTAL_REG_ON_OVRD_ON  */
    using XTAL_REG_ON_OVRD     = regbits< type,  9,  1 >;  /**< XTAL_REG_ON_OVRD     */
    using XTAL_ON_OVRD_ON      = regbits< type, 10,  1 >;  /**< XTAL_ON_OVRD_ON      */
    using XTAL_ON_OVRD         = regbits< type, 11,  1 >;  /**< XTAL_ON_OVRD         */
    using XTAL_DIG_CLK_OUT_ON  = regbits< type, 12,  1 >;  /**< XTAL_DIG_CLK_OUT_ON  */
    using XTAL_REG_ATST_SEL    = regbits< type, 16,  2 >;  /**< XTAL_REG_ATST_SEL    */
    using XTAL_ATST_SEL        = regbits< type, 24,  2 >;  /**< XTAL_ATST_SEL        */
    using XTAL_ATST_ON         = regbits< type, 26,  1 >;  /**< XTAL_ATST_ON         */
    using XTAL_SPARE           = regbits< type, 28,  4 >;  /**< XTAL_SPARE           */
  };

  /**
   * Bandgap Control
   */
  struct BGAP_CTRL
  : public reg< uint32_t, base_addr + 0x43c, rw, 0x87 >
  {
    using type = reg< uint32_t, base_addr + 0x43c, rw, 0x87 >;

    using BGAP_CURRENT_TRIM  = regbits< type,  0,  4 >;  /**< BGAP_CURRENT_TRIM  */
    using BGAP_VOLTAGE_TRIM  = regbits< type,  4,  4 >;  /**< BGAP_VOLTAGE_TRIM  */
    using BGAP_ATST_SEL      = regbits< type,  8,  4 >;  /**< BGAP_ATST_SEL      */
    using BGAP_ATST_ON       = regbits< type, 12,  1 >;  /**< BGAP_ATST_ON       */
  };

  /**
   * PLL Control Register
   */
  struct PLL_CTRL
  : public reg< uint32_t, base_addr + 0x444, rw, 0x23 >
  {
    using type = reg< uint32_t, base_addr + 0x444, rw, 0x23 >;

    using PLL_VCO_BIAS        = regbits< type,  0,  3 >;  /**< PLL VCO Bias Control     */
    using PLL_LFILT_CNTL      = regbits< type,  4,  3 >;  /**< PLL Loop Filter Control  */
    using PLL_REG_SUPPLY      = regbits< type,  8,  4 >;  /**< PLL_REG_SUPPLY           */
    using PLL_REG_BYPASS_ON   = regbits< type, 16,  1 >;  /**< PLL_REG_BYPASS_ON        */
    using PLL_VCO_LDO_BYPASS  = regbits< type, 17,  1 >;  /**< PLL_VCO_LDO_BYPASS       */
    using HPM_BIAS            = regbits< type, 24,  7 >;  /**< HPM Array Bias           */
    using PLL_VCO_SPARE7      = regbits< type, 31,  1 >;  /**< PLL_VCO_SPARE7           */
  };

  /**
   * PLL Control Register 2
   */
  struct PLL_CTRL2
  : public reg< uint32_t, base_addr + 0x448, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x448, rw, 0x4 >;

    using PLL_VCO_KV          = regbits< type,  0,  3 >;  /**< PLL_VCO_KV          */
    using PLL_KMOD_SLOPE      = regbits< type,  3,  1 >;  /**< PLL_KMOD_SLOPE      */
    using PLL_VCO_REG_SUPPLY  = regbits< type,  4,  2 >;  /**< PLL_VCO_REG_SUPPLY  */
    using PLL_TMUX_ON         = regbits< type,  8,  1 >;  /**< PLL_TMUX_ON         */
  };

  /**
   * PLL Test Control
   */
  struct PLL_TEST_CTRL
  : public reg< uint32_t, base_addr + 0x44c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44c, rw, 0 >;

    using PLL_TMUX_SEL                  = regbits< type,  0,  2 >;  /**< PLL_TMUX_SEL                  */
    using PLL_VCO_REG_ATST              = regbits< type,  4,  2 >;  /**< PLL_VCO_REG_ATST              */
    using PLL_REG_ATST_SEL              = regbits< type,  8,  2 >;  /**< PLL_REG_ATST_SEL              */
    using PLL_VCO_TEST_CLK_MODE         = regbits< type, 12,  1 >;  /**< PLL_VCO_TEST_CLK_MODE         */
    using PLL_FORCE_VTUNE_EXTERNALLY    = regbits< type, 13,  1 >;  /**< PLL_FORCE_VTUNE_EXTERNALLY    */
    using PLL_RIPPLE_COUNTER_TEST_MODE  = regbits< type, 14,  1 >;  /**< PLL_RIPPLE_COUNTER_TEST_MODE  */
  };

  /**
   * QGEN Control
   */
  struct QGEN_CTRL
  : public reg< uint32_t, base_addr + 0x458, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x458, rw, 0 >;

    using QGEN_REG_SUPPLY     = regbits< type,  0,  4 >;  /**< QGEN_REG_SUPPLY     */
    using QGEN_REG_ATST_SEL   = regbits< type,  4,  4 >;  /**< QGEN_REG_ATST_SEL   */
    using QGEN_REG_BYPASS_ON  = regbits< type,  8,  1 >;  /**< QGEN_REG_BYPASS_ON  */
  };

  /**
   * TCA Control
   */
  struct TCA_CTRL
  : public reg< uint32_t, base_addr + 0x464, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x464, rw, 0 >;

    using TCA_BIAS_CURR         = regbits< type,  0,  2 >;  /**< TCA_BIAS_CURR         */
    using TCA_LOW_PWR_ON        = regbits< type,  2,  1 >;  /**< TCA_LOW_PWR_ON        */
    using TCA_TX_REG_BYPASS_ON  = regbits< type,  3,  1 >;  /**< TCA_TX_REG_BYPASS_ON  */
    using TCA_TX_REG_SUPPLY     = regbits< type,  4,  4 >;  /**< TCA_TX_REG_SUPPLY     */
    using TCA_TX_REG_ATST_SEL   = regbits< type,  8,  2 >;  /**< TCA_TX_REG_ATST_SEL   */
  };

  /**
   * TZA Control
   */
  struct TZA_CTRL
  : public reg< uint32_t, base_addr + 0x468, rw, 0x44 >
  {
    using type = reg< uint32_t, base_addr + 0x468, rw, 0x44 >;

    using TZA_CAP_TUNE  = regbits< type,  0,  4 >;  /**< TZA_CAP_TUNE  */
    using TZA_GAIN      = regbits< type,  4,  1 >;  /**< TZA_GAIN      */
    using TZA_DCOC_ON   = regbits< type,  5,  1 >;  /**< TZA_DCOC_ON   */
    using TZA_CUR_CNTL  = regbits< type,  6,  2 >;  /**< TZA_CUR_CNTL  */
    using TZA_SPARE     = regbits< type, 20,  4 >;  /**< TZA_SPARE     */
  };

  /**
   * TX Analog Control
   */
  struct TX_ANA_CTRL
  : public reg< uint32_t, base_addr + 0x474, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x474, rw, 0 >;

    using HPM_CAL_ADJUST  = regbits< type,  0,  4 >;  /**< HPM Cal Count Adjust  */
  };

  /**
   * Analog Spare
   */
  struct ANA_SPARE
  : public reg< uint32_t, base_addr + 0x47c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x47c, rw, 0 >;

    using IQMC_DC_GAIN_ADJ     = regbits< type,  0, 11 >;  /**< IQ Mismatch Correction DC Gain Coeff     */
    using DCOC_TRK_EST_GS_CNT  = regbits< type, 11,  3 >;  /**< DCOC Tracking Estimator Gearshift Count  */
    using HPM_LSB_INVERT       = regbits< type, 14,  2 >;  /**< High port LSB array inversion control    */
    using ANA_DTEST            = regbits< type, 16,  6 >;  /**< ANA_DTEST                                */
  };
};
} // namespace mptl

#endif // ARCH_REG_XCVR_HPP_INCLUDED
