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

#ifndef ARCH_REG_XCVR_PHY_REGS_HPP_INCLUDED
#define ARCH_REG_XCVR_PHY_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XCVR_PHY
 */
struct XCVR_PHY_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005c400;

  /**
   * PREAMBLE REFERENCE WAVEFORM 0
   */
  struct PHY_PRE_REF0
  : public reg< uint32_t, base_addr + 0, rw, 0xFDDDEB39 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xFDDDEB39 >;

    using FSK_PREAMBLE_REF0  = regbits< type,  0, 32 >;  /**< Base preamble reference waveform containing sixteen 5-bit phase values  */
  };

  /**
   * PREAMBLE REFERENCE WAVEFORM 1
   */
  struct PRE_REF1
  : public reg< uint32_t, base_addr + 0x4, rw, 0xBEFBFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xBEFBFFFF >;

    using FSK_PREAMBLE_REF1  = regbits< type,  0, 32 >;  /**< Base preamble reference waveform containing sixteen 5-bit phase values  */
  };

  /**
   * PREAMBLE REFERENCE WAVEFORM 2
   */
  struct PRE_REF2
  : public reg< uint32_t, base_addr + 0x8, rw, 0xCE75 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0xCE75 >;

    using FSK_PREAMBLE_REF2  = regbits< type,  0, 16 >;  /**< Base preamble reference waveform containing sixteen 5-bit phase values  */
  };

  /**
   * PHY CONFIGURATION REGISTER 1
   */
  struct CFG1
  : public reg< uint32_t, base_addr + 0x20, rw, 0x1070CD16 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x1070CD16 >;

    using AA_PLAYBACK      = regbits< type,  1,  1 >;  /**< Access Address Playback                           */
    using AA_OUTPUT_SEL    = regbits< type,  2,  1 >;  /**< Access Address Output Select                      */
    using FSK_BIT_INVERT   = regbits< type,  3,  1 >;  /**< FSK Bit Invert                                    */
    using RFU00            = regbits< type,  4,  1 >;  /**< Reserved for future use.                          */
    using BSM_EN_BLE       = regbits< type,  5,  1 >;  /**< BLE Bit Streaming Mode Enable bit                 */
    using DEMOD_CLK_MODE   = regbits< type,  6,  2 >;  /**< Demodulator Clock Mode                            */
    using CTS_THRESH       = regbits< type,  8,  8 >;  /**< CTS (Coarse Timing Search) Correlation Threshold  */
    using FSK_FTS_TIMEOUT  = regbits< type, 20,  3 >;  /**< FSK FTS Timeout                                   */
    using RFU01            = regbits< type, 24,  1 >;  /**< Reserved for future use.                          */
    using RFU02            = regbits< type, 25,  1 >;  /**< Reserved for future use.                          */
    using BLE_NTW_ADR_THR  = regbits< type, 28,  3 >;  /**< BLE Network Address Match Bit Error Threshold     */
  };

  /**
   * PHY CONFIGURATION REGISTER 2
   */
  struct CFG2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x1000A48 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x1000A48 >;

    using PHY_FIFO_PRECHG  = regbits< type,  0,  4 >;  /**< PHY FIFO Precharge Level       */
    using RFU03            = regbits< type,  4,  1 >;  /**< Reserved for future use.       */
    using RFU04            = regbits< type,  5,  1 >;  /**< Reserved for future use.       */
    using RFU05            = regbits< type,  6,  1 >;  /**< Reserved for future use.       */
    using RFU06            = regbits< type,  7,  1 >;  /**< Reserved for future use.       */
    using X2_DEMOD_GAIN    = regbits< type,  8,  4 >;  /**< X2_DEMOD_GAIN                  */
    using RFU07            = regbits< type, 16,  1 >;  /**< Reserved for future use.       */
    using RFU08            = regbits< type, 17,  1 >;  /**< Reserved for future use.       */
    using RFU09            = regbits< type, 18,  1 >;  /**< Reserved for future use.       */
    using RFU10            = regbits< type, 19,  1 >;  /**< Reserved for future use.       */
    using RFU11            = regbits< type, 20,  1 >;  /**< Reserved for future use.       */
    using RFU12            = regbits< type, 21,  1 >;  /**< Reserved for future use.       */
    using RFU13            = regbits< type, 22,  1 >;  /**< Reserved for future use.       */
    using RFU14            = regbits< type, 23,  1 >;  /**< Reserved for future use.       */
    using RFU15            = regbits< type, 24,  1 >;  /**< Reserved for future use.       */
    using RFU16            = regbits< type, 25,  1 >;  /**< Reserved for future use.       */
    using PHY_CLK_ON       = regbits< type, 31,  1 >;  /**< Force PHY Clock On (testmode)  */
  };

  /**
   * PHY EARLY/LATE CONFIGURATION REGISTER
   */
  struct EL_CFG
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using EL_ENABLE       = regbits< type,  0,  1 >;  /**< EL_ENABLE       */
    using EL_ZB_ENABLE    = regbits< type,  1,  1 >;  /**< EL_ZB_ENABLE    */
    using EL_ZB_WIN_SIZE  = regbits< type,  2,  1 >;  /**< EL_ZB_WIN_SIZE  */
    using EL_WIN_SIZE     = regbits< type,  8,  4 >;  /**< EL_WIN_SIZE     */
    using EL_INTERVAL     = regbits< type, 16,  6 >;  /**< EL_INTERVAL     */
  };

  /**
   * PHY NETWORK ADDRESS FOR BSM
   */
  struct NTW_ADR_BSM
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    // fixme: Field name equals parent register name: NTW_ADR_BSM
    using NTW_ADR_BSM_ = regbits< type,  0, 32 >;  /**< NTW_ADR_BSM  */
  };

  /**
   * PHY STATUS REGISTER
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x30, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0 >;

    using PREAMBLE_FOUND    = regbits< type,  0,  1 >;  /**< Preamble Found                     */
    using AA_SFD_MATCHED    = regbits< type,  1,  1 >;  /**< Access Address or SFD Found        */
    using AA_MATCHED        = regbits< type,  4,  4 >;  /**< Access Address Matched             */
    using HAMMING_DISTANCE  = regbits< type,  8,  3 >;  /**< HAMMING DISTANCE                   */
    using DATA_FIFO_DEPTH   = regbits< type, 12,  4 >;  /**< DATA FIFO DEPTH                    */
    using CFO_ESTIMATE      = regbits< type, 16,  8 >;  /**< Carrier Frequency Offset Estimate  */
  };
};
} // namespace mptl

#endif // ARCH_REG_XCVR_PHY_REGS_HPP_INCLUDED
