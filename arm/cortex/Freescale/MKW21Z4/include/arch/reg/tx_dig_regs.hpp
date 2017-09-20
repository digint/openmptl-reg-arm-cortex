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

#ifndef ARCH_REG_TX_DIG_REGS_HPP_INCLUDED
#define ARCH_REG_TX_DIG_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XCVR_TX_DIG
 */
struct TX_DIG_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005c200;

  /**
   * TX Digital Control
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0, rw, 0x140 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x140 >;

    using RADIO_DFT_MODE  = regbits< type,  0,  4 >;  /**< Radio DFT Modes                                 */
    using LFSR_LENGTH     = regbits< type,  4,  3 >;  /**< LFSR Length                                     */
    using LFSR_EN         = regbits< type,  7,  1 >;  /**< LFSR Enable                                     */
    using DFT_CLK_SEL     = regbits< type,  8,  3 >;  /**< DFT Clock Selection                             */
    using TX_DFT_EN       = regbits< type, 11,  1 >;  /**< DFT Modulation Enable                           */
    using SOC_TEST_SEL    = regbits< type, 12,  2 >;  /**< Radio Clock Selector for SoC RF Clock Tests     */
    using TX_CAPTURE_POL  = regbits< type, 16,  1 >;  /**< Polarity of the Input Data for the Transmitter  */
    using FREQ_WORD_ADJ   = regbits< type, 22, 10 >;  /**< Frequency Word Adjustment                       */
  };

  /**
   * TX Data Padding
   */
  struct DATA_PADDING
  : public reg< uint32_t, base_addr + 0x4, rw, 0x7FFF55AA >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x7FFF55AA >;

    using DATA_PADDING_PAT_0  = regbits< type,  0,  8 >;  /**< Data Padding Pattern 0  */
    using DATA_PADDING_PAT_1  = regbits< type,  8,  8 >;  /**< Data Padding Pattern 1  */
    using DFT_LFSR_OUT        = regbits< type, 16, 15 >;  /**< LFSR Output             */
    using LRM                 = regbits< type, 31,  1 >;  /**< LFSR Reset Mask         */
  };

  /**
   * TX GFSK Modulator Control
   */
  struct GFSK_CTRL
  : public reg< uint32_t, base_addr + 0x8, rw, 0x3014000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x3014000 >;

    using GFSK_MULTIPLY_TABLE_MANUAL  = regbits< type,  0, 16 >;  /**< Manual GFSK Multiply Lookup Table Value  */
    using GFSK_MI                     = regbits< type, 16,  2 >;  /**< GFSK Modulation Index                    */
    using GFSK_MLD                    = regbits< type, 20,  1 >;  /**< Disable GFSK Multiply Lookup Table       */
    using GFSK_FLD                    = regbits< type, 21,  1 >;  /**< Disable GFSK Filter Lookup Table         */
    using GFSK_MOD_INDEX_SCALING      = regbits< type, 24,  3 >;  /**< GFSK Modulation Index Scaling Factor     */
    using TX_IMAGE_FILTER_OVRD_EN     = regbits< type, 28,  1 >;  /**< TX Image Filter Override Enable          */
    using TX_IMAGE_FILTER_0_OVRD      = regbits< type, 29,  1 >;  /**< TX Image Filter 0 Override Control       */
    using TX_IMAGE_FILTER_1_OVRD      = regbits< type, 30,  1 >;  /**< TX Image Filter 1 Override Control       */
    using TX_IMAGE_FILTER_2_OVRD      = regbits< type, 31,  1 >;  /**< TX Image Filter 2 Override Control       */
  };

  /**
   * TX GFSK Filter Coefficients 2
   */
  struct GFSK_COEFF2
  : public reg< uint32_t, base_addr + 0xc, rw, 0xC0630401 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0xC0630401 >;

    using GFSK_FILTER_COEFF_MANUAL2  = regbits< type,  0, 32 >;  /**< GFSK Manual Filter Coefficients[63:32]  */
  };

  /**
   * TX GFSK Filter Coefficients 1
   */
  struct GFSK_COEFF1
  : public reg< uint32_t, base_addr + 0x10, rw, 0xBB29960D >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0xBB29960D >;

    using GFSK_FILTER_COEFF_MANUAL1  = regbits< type,  0, 32 >;  /**< GFSK Manual Filter Coefficient [31:0]  */
  };

  /**
   * TX FSK Modulation Levels
   */
  struct FSK_SCALE
  : public reg< uint32_t, base_addr + 0x14, rw, 0x8001800 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x8001800 >;

    using FSK_MODULATION_SCALE_0  = regbits< type,  0, 13 >;  /**< FSK Modulation Scale for a data 0  */
    using FSK_MODULATION_SCALE_1  = regbits< type, 16, 13 >;  /**< FSK Modulation Scale for a data 1  */
  };

  /**
   * TX DFT Modulation Pattern
   */
  struct DFT_PATTERN
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using DFT_MOD_PATTERN  = regbits< type,  0, 32 >;  /**< DFT Modulation Pattern  */
  };

  /**
   * TX DFT Control 1
   */
  struct RF_DFT_BIST_1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using CTUNE_BIST_GO        = regbits< type,  0,  1 >;  /**< Start the Coarse Tune BIST                                        */
    using CTUNE_BIST_FINISHED  = regbits< type,  1,  1 >;  /**< Coarse Tune BIST has finished Tuning all Channels                 */
    using CTUNE_BIST_RESULT    = regbits< type,  2,  1 >;  /**< Coarse Tune BIST Result                                           */
    using CTUNE_BIST_THRSHLD   = regbits< type,  4,  4 >;  /**< Maximum Difference Threshold for Coarse Tune BIST                 */
    using CTUNE_MAX_DIFF       = regbits< type,  8,  8 >;  /**< Maximum Frequency Count Difference found by the Coarse Tune BIST  */
    using CTUNE_MAX_DIFF_CH    = regbits< type, 16,  7 >;  /**< Maximum Frequency Count Difference Radio Channel                  */
    using PA_AM_MOD_FREQ       = regbits< type, 24,  3 >;  /**< RF Power Amplifier Amplitude Modulation Frequency                 */
    using PA_AM_MOD_ENTRIES    = regbits< type, 28,  3 >;  /**< RF Power Amplifier Amplitude Modulation Table Entries             */
    using PA_AM_MOD_EN         = regbits< type, 31,  1 >;  /**< RF Power Amplifier Amplitude Modulation Enable                    */
  };

  /**
   * TX DFT Control 2
   */
  struct RF_DFT_BIST_2
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using SYN_BIST_GO            = regbits< type,  0,  1 >;  /**< Start the PLL Frequency Synthesizer BIST                                        */
    using SYN_BIST_FINISHED      = regbits< type,  1,  1 >;  /**< PLL Frequency Synthesizer BIST has finished trying to lock to Radio Channels    */
    using SYN_BIST_RESULT        = regbits< type,  2,  1 >;  /**< PLL Frequency Synthesizer BIST Result                                           */
    using SYN_BIST_ALL_CHANNELS  = regbits< type,  3,  1 >;  /**< PLL Frequency Synthesizer BIST All Channels                                     */
    using FREQ_COUNT_THRESHOLD   = regbits< type,  4,  8 >;  /**< Frequency Meter Count Difference Threshold                                      */
    using HPM_INL_BIST_GO        = regbits< type, 12,  1 >;  /**< Start the High Port Modulator DAC INL BIST                                      */
    using HPM_INL_BIST_FINISHED  = regbits< type, 13,  1 >;  /**< High Port Modulator DAC INL BIST has finished measuring the INL of the HPM DAC  */
    using HPM_INL_BIST_RESULT    = regbits< type, 14,  1 >;  /**< High Port Modulator DAC INL BIST Result                                         */
    using HPM_DNL_BIST_GO        = regbits< type, 16,  1 >;  /**< Start the High Port Modulator DAC DNL BIST                                      */
    using HPM_DNL_BIST_FINISHED  = regbits< type, 17,  1 >;  /**< High Port Modulator DAC DNL BIST has finished measuring the DNL of the HPM DAC  */
    using HPM_DNL_BIST_RESULT    = regbits< type, 18,  1 >;  /**< High Port Modulator DAC DNL BIST Result                                         */
    using DFT_MAX_RAM_SIZE       = regbits< type, 20,  9 >;  /**< Maximum RAM Address to use as Modulation                                        */
  };
};
} // namespace mptl

#endif // ARCH_REG_TX_DIG_REGS_HPP_INCLUDED
