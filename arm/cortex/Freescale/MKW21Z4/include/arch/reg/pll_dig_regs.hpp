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
//  Import from CMSIS-SVD: "Freescale/MKW21Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW21Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW21Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PLL_DIG_REGS_HPP_INCLUDED
#define ARCH_REG_PLL_DIG_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XCVR_PLL_DIG
 */
struct PLL_DIG_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005c224;

  /**
   * PLL HPM Analog Bump Control
   */
  struct HPM_BUMP
  : public reg< uint32_t, base_addr + 0, rw, 0x1010 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x1010 >;

    using HPM_VCM_TX       = regbits< type,  0,  3 >;  /**< rfctrl_tx_dac_bump_vcm[2:0] during Transmission      */
    using HPM_VCM_CAL      = regbits< type,  4,  3 >;  /**< rfctrl_tx_dac_bump_vcm[2:0] during Calibration       */
    using HPM_FDB_RES_TX   = regbits< type,  8,  2 >;  /**< rfctrl_tx_dac_bump_fdb_res[1:0] during Transmission  */
    using HPM_FDB_RES_CAL  = regbits< type, 12,  2 >;  /**< rfctrl_tx_dac_bump_fdb_res[1:0] during Calibration   */
  };

  /**
   * PLL Modulation Control
   */
  struct MOD_CTRL
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using MODULATION_WORD_MANUAL  = regbits< type,  0, 13 >;  /**< Manual Modulation Word   */
    using MOD_DISABLE             = regbits< type, 15,  1 >;  /**< Disable Modulation Word  */
    using HPM_MOD_MANUAL          = regbits< type, 16,  8 >;  /**< Manual HPM Modulation    */
    using HPM_MOD_DISABLE         = regbits< type, 27,  1 >;  /**< Disable HPM Modulation   */
    using HPM_SDM_OUT_MANUAL      = regbits< type, 28,  2 >;  /**< Manual HPM SDM out       */
    using HPM_SDM_OUT_DISABLE     = regbits< type, 31,  1 >;  /**< Disable HPM SDM out      */
  };

  /**
   * PLL Channel Mapping
   */
  struct CHAN_MAP
  : public reg< uint32_t, base_addr + 0x8, rw, 0x200 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x200 >;

    using CHANNEL_NUM  = regbits< type,  0,  7 >;  /**< Protocol specific Channel Number for PLL Frequency Mapping  */
    using BOC          = regbits< type,  8,  1 >;  /**< BLE Channel Number Override                                 */
    using BMR          = regbits< type,  9,  1 >;  /**< BLE MBAN Channel Remap                                      */
    using ZOC          = regbits< type, 10,  1 >;  /**< 802.15.4 Channel Number Override                            */
  };

  /**
   * PLL Lock Detect Control
   */
  struct LOCK_DETECT
  : public reg< uint32_t, base_addr + 0xc, rw, 0x606800 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x606800 >;

    using CT_FAIL              = regbits< type,  0,  1 >;  /**< Real time status of Coarse Tune Fail signal   */
    using CTFF                 = regbits< type,  1,  1 >;  /**< CTUNE Failure Flag, held until cleared        */
    using CS_FAIL              = regbits< type,  2,  1 >;  /**< Real time status of Cycle Slip circuit        */
    using CSFF                 = regbits< type,  3,  1 >;  /**< Cycle Slip Failure Flag, held until cleared   */
    using FT_FAIL              = regbits< type,  4,  1 >;  /**< Real time status of Frequency Target Failure  */
    using FTFF                 = regbits< type,  5,  1 >;  /**< Frequency Target Failure Flag                 */
    using TAFF                 = regbits< type,  7,  1 >;  /**< TSM Abort Failure Flag                        */
    using CTUNE_LDF_LEV        = regbits< type,  8,  4 >;  /**< CTUNE Lock Detect Fail Level                  */
    using FTF_RX_THRSH         = regbits< type, 12,  6 >;  /**< RX Frequency Target Fail Threshold            */
    using FTW_RX               = regbits< type, 19,  1 >;  /**< RX Frequency Target Window time select        */
    using FTF_TX_THRSH         = regbits< type, 20,  6 >;  /**< TX Frequency Target Fail Threshold            */
    using FTW_TX               = regbits< type, 27,  1 >;  /**< TX Frequency Target Window time select        */
    using FREQ_COUNT_GO        = regbits< type, 28,  1 >;  /**< Start the Frequency Meter                     */
    using FREQ_COUNT_FINISHED  = regbits< type, 29,  1 >;  /**< Frequency Meter has finished the Count Time   */
    using FREQ_COUNT_TIME      = regbits< type, 30,  2 >;  /**< Frequency Meter Count Time                    */
  };

  /**
   * PLL High Port Modulator Control
   */
  struct HPM_CTRL
  : public reg< uint32_t, base_addr + 0x10, rw, 0x90840000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x90840000 >;

    using HPM_SDM_IN_MANUAL   = regbits< type,  0, 10 >;  /**< Manual High Port SDM Fractional value   */
    using HPFF                = regbits< type, 13,  1 >;  /**< HPM SDM Invalid Flag                    */
    using HPM_SDM_OUT_INVERT  = regbits< type, 14,  1 >;  /**< Invert HPM SDM Output                   */
    using HPM_SDM_IN_DISABLE  = regbits< type, 15,  1 >;  /**< Disable HPM SDM Input                   */
    using HPM_LFSR_SIZE       = regbits< type, 16,  3 >;  /**< HPM LFSR Length                         */
    using HPM_DTH_SCL         = regbits< type, 20,  1 >;  /**< HPM Dither Scale                        */
    using HPM_DTH_EN          = regbits< type, 23,  1 >;  /**< Dither Enable for HPM LFSR              */
    using HPM_INTEGER_SCALE   = regbits< type, 24,  2 >;  /**< High Port Modulation Integer Scale      */
    using HPM_INTEGER_INVERT  = regbits< type, 27,  1 >;  /**< Invert High Port Modulation Integer     */
    using HPM_CAL_INVERT      = regbits< type, 28,  1 >;  /**< Invert High Port Modulator Calibration  */
    using HPM_MOD_IN_INVERT   = regbits< type, 31,  1 >;  /**< Invert High Port Modulation             */
  };

  /**
   * PLL High Port Calibration Control
   */
  struct HPMCAL_CTRL
  : public reg< uint32_t, base_addr + 0x14, rw, 0x40000221 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x40000221 >;

    using HPM_CAL_FACTOR         = regbits< type,  0, 13 >;  /**< High Port Modulation Calibration Factor      */
    using HPM_CAL_NOT_BUMPED     = regbits< type, 13,  1 >;  /**< HPM_CAL_NOT_BUMPED                           */
    using HPM_CAL_COUNT_SCALE    = regbits< type, 14,  1 >;  /**< HPM_CAL_COUNT_SCALE                          */
    using HP_CAL_DISABLE         = regbits< type, 15,  1 >;  /**< Disable HPM Manual Calibration               */
    using HPM_CAL_FACTOR_MANUAL  = regbits< type, 16, 13 >;  /**< Manual HPM Calibration Factor                */
    using HPM_CAL_ARRAY_SIZE     = regbits< type, 30,  1 >;  /**< High Port Modulation Calibration Array Size  */
    using HPM_CAL_TIME           = regbits< type, 31,  1 >;  /**< High Port Modulation Calibration Time        */
  };

  /**
   * PLL High Port Calibration Result 1
   */
  struct HPM_CAL1
  : public reg< uint32_t, base_addr + 0x18, rw, 0x44300000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x44300000 >;

    using HPM_COUNT_1  = regbits< type,  0, 19 >;  /**< High Port Modulation Counter Value 1  */
    using CS_WT        = regbits< type, 20,  3 >;  /**< Cycle Slip Wait Time                  */
    using CS_FW        = regbits< type, 24,  3 >;  /**< Cycle Slip Flag Window                */
    using CS_FCNT      = regbits< type, 28,  4 >;  /**< Cycle Slip Flag Count                 */
  };

  /**
   * PLL High Port Calibration Result 2
   */
  struct HPM_CAL2
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x2100000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x2100000 >;

    using HPM_COUNT_2  = regbits< type,  0, 19 >;  /**< High Port Modulation Counter Value 2  */
    using CS_RC        = regbits< type, 20,  1 >;  /**< Cycle Slip Recycle                    */
    using CS_FT        = regbits< type, 24,  5 >;  /**< Cycle Slip Flag Timeout               */
  };

  /**
   * PLL High Port Sigma Delta Results
   */
  struct HPM_SDM_RES
  : public reg< uint32_t, base_addr + 0x20, rw, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x1000000 >;

    using HPM_NUM_SELECTED  = regbits< type,  0, 10 >;  /**< High Port Modulator SDM Numerator    */
    using HPM_DENOM         = regbits< type, 16, 10 >;  /**< High Port Modulator SDM Denominator  */
    using HPM_COUNT_ADJUST  = regbits< type, 28,  4 >;  /**< HPM_COUNT_ADJUST                     */
  };

  /**
   * PLL Low Port Modulator Control
   */
  struct LPM_CTRL
  : public reg< uint32_t, base_addr + 0x24, rw, 0x8080000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x8080000 >;

    using PLL_LD_MANUAL    = regbits< type,  0,  6 >;  /**< Manual PLL Loop Divider value             */
    using PLL_LD_DISABLE   = regbits< type, 11,  1 >;  /**< Disable PLL Loop Divider                  */
    using LPFF             = regbits< type, 13,  1 >;  /**< LPM SDM Invalid Flag                      */
    using LPM_SDM_INV      = regbits< type, 14,  1 >;  /**< Invert LPM SDM                            */
    using LPM_DISABLE      = regbits< type, 15,  1 >;  /**< Disable LPM SDM                           */
    using LPM_DTH_SCL      = regbits< type, 16,  4 >;  /**< LPM Dither Scale                          */
    using LPM_D_CTRL       = regbits< type, 22,  1 >;  /**< LPM Dither Control in Override Mode       */
    using LPM_D_OVRD       = regbits< type, 23,  1 >;  /**< LPM Dither Override Mode Select           */
    using LPM_SCALE        = regbits< type, 24,  4 >;  /**< LPM Scale Factor                          */
    using LPM_SDM_USE_NEG  = regbits< type, 31,  1 >;  /**< Use the Negedge of the Sigma Delta clock  */
  };

  /**
   * PLL Low Port Sigma Delta Control 1
   */
  struct LPM_SDM_CTRL1
  : public reg< uint32_t, base_addr + 0x28, rw, 0x260026 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x260026 >;

    using LPM_INTG_SELECTED  = regbits< type,  0,  7 >;  /**< Low Port Modulation Integer Value Selected   */
    using HPM_ARRAY_BIAS     = regbits< type,  8,  7 >;  /**< Bias value for High Port DAC Array Midpoint  */
    using LPM_INTG           = regbits< type, 16,  7 >;  /**< Manual Low Port Modulation Integer Value     */
    using SDM_MAP_DISABLE    = regbits< type, 31,  1 >;  /**< Disable SDM Mapping                          */
  };

  /**
   * PLL Low Port Sigma Delta Control 2
   */
  struct LPM_SDM_CTRL2
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x2000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x2000000 >;

    using LPM_NUM  = regbits< type,  0, 28 >;  /**< Low Port Modulation Numerator  */
  };

  /**
   * PLL Low Port Sigma Delta Control 3
   */
  struct LPM_SDM_CTRL3
  : public reg< uint32_t, base_addr + 0x30, rw, 0x4000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x4000000 >;

    using LPM_DENOM  = regbits< type,  0, 28 >;  /**< Low Port Modulation Denominator  */
  };

  /**
   * PLL Low Port Sigma Delta Result 1
   */
  struct LPM_SDM_RES1
  : public reg< uint32_t, base_addr + 0x34, ro, 0xE200000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0xE200000 >;

    using LPM_NUM_SELECTED  = regbits< type,  0, 28 >;  /**< Low Port Modulation Numerator Applied  */
  };

  /**
   * PLL Low Port Sigma Delta Result 2
   */
  struct LPM_SDM_RES2
  : public reg< uint32_t, base_addr + 0x38, ro, 0x4000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x4000000 >;

    using LPM_DENOM_SELECTED  = regbits< type,  0, 28 >;  /**< Low Port Modulation Denominator Selected  */
  };

  /**
   * PLL Delay Matching
   */
  struct DELAY_MATCH
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x204 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x204 >;

    using LPM_SDM_DELAY      = regbits< type,  0,  4 >;  /**< Low Port SDM Delay Matching       */
    using HPM_SDM_DELAY      = regbits< type,  8,  4 >;  /**< High Port SDM Delay Matching      */
    using HPM_INTEGER_DELAY  = regbits< type, 16,  4 >;  /**< High Port Integer Delay Matching  */
  };

  /**
   * PLL Coarse Tune Control
   */
  struct CTUNE_CTRL
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using CTUNE_TARGET_MANUAL   = regbits< type,  0, 12 >;  /**< Manual Coarse Tune Target     */
    using CTUNE_TARGET_DISABLE  = regbits< type, 15,  1 >;  /**< Disable Coarse Tune Target    */
    using CTUNE_ADJUST          = regbits< type, 16,  4 >;  /**< Coarse Tune Count Adjustment  */
    using CTUNE_MANUAL          = regbits< type, 24,  7 >;  /**< Manual Coarse Tune Setting    */
    using CTUNE_DISABLE         = regbits< type, 31,  1 >;  /**< Coarse Tune Disable           */
  };

  /**
   * PLL Coarse Tune Count 6
   */
  struct CTUNE_CNT6
  : public reg< uint32_t, base_addr + 0x44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0 >;

    using CTUNE_COUNT_6  = regbits< type,  0, 13 >;  /**< CTUNE Count 6  */
  };

  /**
   * PLL Coarse Tune Counts 5 and 4
   */
  struct CTUNE_CNT5_4
  : public reg< uint32_t, base_addr + 0x48, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0 >;

    using CTUNE_COUNT_4  = regbits< type,  0, 13 >;  /**< CTUNE Count 4  */
    using CTUNE_COUNT_5  = regbits< type, 16, 13 >;  /**< CTUNE Count 5  */
  };

  /**
   * PLL Coarse Tune Counts 3 and 2
   */
  struct CTUNE_CNT3_2
  : public reg< uint32_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0 >;

    using CTUNE_COUNT_2  = regbits< type,  0, 13 >;  /**< CTUNE Count 2  */
    using CTUNE_COUNT_3  = regbits< type, 16, 13 >;  /**< CTUNE Count 3  */
  };

  /**
   * PLL Coarse Tune Counts 1 and 0
   */
  struct CTUNE_CNT1_0
  : public reg< uint32_t, base_addr + 0x50, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0 >;

    using CTUNE_COUNT_0  = regbits< type,  0, 13 >;  /**< CTUNE Count 0  */
    using CTUNE_COUNT_1  = regbits< type, 16, 13 >;  /**< CTUNE Count 1  */
  };

  /**
   * PLL Coarse Tune Results
   */
  struct CTUNE_RES
  : public reg< uint32_t, base_addr + 0x54, ro, 0x9620040 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0x9620040 >;

    using CTUNE_SELECTED       = regbits< type,  0,  7 >;  /**< Coarse Tune Setting to VCO            */
    using CTUNE_BEST_DIFF      = regbits< type,  8,  8 >;  /**< Coarse Tune Absolute Best Difference  */
    using CTUNE_FREQ_SELECTED  = regbits< type, 16, 12 >;  /**< Coarse Tune Frequency Selected        */
  };
};
} // namespace mptl

#endif // ARCH_REG_PLL_DIG_REGS_HPP_INCLUDED
