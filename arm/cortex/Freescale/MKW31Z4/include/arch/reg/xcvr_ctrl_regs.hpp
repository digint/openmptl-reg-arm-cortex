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

#ifndef ARCH_REG_XCVR_CTRL_REGS_HPP_INCLUDED
#define ARCH_REG_XCVR_CTRL_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XCVR_MISC
 */
struct XCVR_CTRL_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005c280;

  /**
   * TRANSCEIVER CONTROL
   */
  struct XCVR_CTRL
  : public reg< uint32_t, base_addr + 0, rw, 0x101000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x101000 >;

    using PROTOCOL                = regbits< type,  0,  4 >;  /**< Radio Protocol Selection         */
    using TGT_PWR_SRC             = regbits< type,  4,  3 >;  /**< Target Power Source              */
    using REF_CLK_FREQ            = regbits< type,  8,  2 >;  /**< Radio Reference Clock Frequency  */
    using SOC_RF_OSC_CLK_GATE_EN  = regbits< type, 11,  1 >;  /**< SOC_RF_OSC_CLK_GATE_EN           */
    using DEMOD_SEL               = regbits< type, 12,  2 >;  /**< Demodulator Selector             */
    using RADIO0_IRQ_SEL          = regbits< type, 16,  3 >;  /**< RADIO0_IRQ_SEL                   */
    using RADIO1_IRQ_SEL          = regbits< type, 20,  3 >;  /**< RADIO1_IRQ_SEL                   */
  };

  /**
   * TRANSCEIVER STATUS
   */
  struct XCVR_STATUS
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using TSM_COUNT             = regbits< type,  0,  8 >;  /**< TSM_COUNT                      */
    using PLL_SEQ_STATE         = regbits< type,  8,  4 >;  /**< PLL Sequence State             */
    using RX_MODE               = regbits< type, 12,  1 >;  /**< Receive Mode                   */
    using TX_MODE               = regbits< type, 13,  1 >;  /**< Transmit Mode                  */
    using BTLE_SYSCLK_REQ       = regbits< type, 16,  1 >;  /**< BTLE System Clock Request      */
    using RIF_LL_ACTIVE         = regbits< type, 17,  1 >;  /**< Link Layer Active Indication   */
    using XTAL_READY            = regbits< type, 18,  1 >;  /**< RF Osciallator Xtal Ready      */
    using SOC_USING_RF_OSC_CLK  = regbits< type, 19,  1 >;  /**< SOC Using RF Clock Indication  */
    using TSM_IRQ0              = regbits< type, 24,  1 >;  /**< TSM Interrupt #0               */
    using TSM_IRQ1              = regbits< type, 25,  1 >;  /**< TSM Interrupt #1               */
  };

  /**
   * BLE ARBITRATION CONTROL
   */
  struct BLE_ARB_CTRL
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using BLE_RELINQUISH  = regbits< type,  0,  1 >;  /**< BLE Relinquish Control       */
    using XCVR_BUSY       = regbits< type,  1,  1 >;  /**< Transceiver Busy Status Bit  */
  };

  /**
   * OVERWRITE VERSION
   */
  struct OVERWRITE_VER
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    // fixme: Field name equals parent register name: OVERWRITE_VER
    using OVERWRITE_VER_ = regbits< type,  0,  8 >;  /**< Overwrite Version Number.  */
  };

  /**
   * TRANSCEIVER DMA CONTROL
   */
  struct DMA_CTRL
  : public reg< uint32_t, base_addr + 0x14, rw, 0x300 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x300 >;

    using DMA_PAGE         = regbits< type,  0,  4 >;  /**< Transceiver DMA Page Selector        */
    using SINGLE_REQ_MODE  = regbits< type,  4,  1 >;  /**< DMA Single Request Mode              */
    using BYPASS_DMA_SYNC  = regbits< type,  5,  1 >;  /**< Bypass External DMA Synchronization  */
    using DMA_TRIGGERRED   = regbits< type,  6,  1 >;  /**< DMA TRIGGERRED                       */
    using DMA_TIMED_OUT    = regbits< type,  7,  1 >;  /**< DMA Transfer Timed Out               */
    using DMA_TIMEOUT      = regbits< type,  8,  4 >;  /**< DMA Timeout                          */
  };

  /**
   * TRANSCEIVER DMA DATA
   */
  struct DMA_DATA
  : public reg< uint32_t, base_addr + 0x18, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0 >;

    // fixme: Field name equals parent register name: DMA_DATA
    using DMA_DATA_ = regbits< type,  0, 32 >;  /**< DMA Data Register  */
  };

  /**
   * DIGITAL TEST MUX CONTROL
   */
  struct DTEST_CTRL
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using DTEST_PAGE       = regbits< type,  0,  6 >;  /**< DTEST Page Selector                  */
    using DTEST_EN         = regbits< type,  7,  1 >;  /**< DTEST Enable                         */
    using GPIO0_OVLAY_PIN  = regbits< type,  8,  4 >;  /**< GPIO 0 Overlay Pin                   */
    using GPIO1_OVLAY_PIN  = regbits< type, 12,  4 >;  /**< GPIO 1 Overlay Pin                   */
    using TSM_GPIO_OVLAY   = regbits< type, 16,  2 >;  /**< TSM GPIO Overlay Pin Control         */
    using DTEST_SHFT       = regbits< type, 24,  3 >;  /**< DTEST Shift Control                  */
    using RAW_MODE_I       = regbits< type, 28,  1 >;  /**< DTEST Raw Mode Enable for I Channel  */
    using RAW_MODE_Q       = regbits< type, 29,  1 >;  /**< DTEST Raw Mode Enable for Q Channel  */
  };

  /**
   * PACKET RAM CONTROL
   */
  struct PACKET_RAM_CTRL
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using DBG_PAGE             = regbits< type,  0,  4 >;  /**< Packet RAM Debug Page Selector                                    */
    using PB_PROTECT           = regbits< type,  4,  1 >;  /**< Packet Buffer Protect                                             */
    using XCVR_RAM_ALLOW       = regbits< type,  5,  1 >;  /**< Allow Packet RAM Transceiver Access                               */
    using ALL_PROTOCOLS_ALLOW  = regbits< type,  6,  1 >;  /**< Allow IPS bus access to Packet RAM for any protocol at any time.  */
    using DBG_TRIGGERRED       = regbits< type,  7,  1 >;  /**< DBG_TRIGGERRED                                                    */
    using DBG_RAM_FULL         = regbits< type,  8,  2 >;  /**< DBG_RAM_FULL[1:0]                                                 */
    using RAM0_CLK_ON_OVRD_EN  = regbits< type, 10,  1 >;  /**< Override control for RAM0 Clock Gate Enable                       */
    using RAM0_CLK_ON_OVRD     = regbits< type, 11,  1 >;  /**< Override value for RAM0 Clock Gate Enable                         */
    using RAM1_CLK_ON_OVRD_EN  = regbits< type, 12,  1 >;  /**< Override control for RAM1 Clock Gate Enable                       */
    using RAM1_CLK_ON_OVRD     = regbits< type, 13,  1 >;  /**< Override value for RAM1 Clock Gate Enable                         */
    using RAM0_CE_ON_OVRD_EN   = regbits< type, 14,  1 >;  /**< Override control for RAM0 CE (Chip Enable)                        */
    using RAM0_CE_ON_OVRD      = regbits< type, 15,  1 >;  /**< Override value for RAM0 CE (Chip Enable)                          */
    using RAM1_CE_ON_OVRD_EN   = regbits< type, 16,  1 >;  /**< Override control for RAM1 CE (Chip Enable)                        */
    using RAM1_CE_ON_OVRD      = regbits< type, 17,  1 >;  /**< Override value for RAM1 CE (Chip Enable)                          */
  };

  /**
   * FAD CONTROL
   */
  struct FAD_CTRL
  : public reg< uint32_t, base_addr + 0x24, rw, 0xF080 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0xF080 >;

    using FAD_EN         = regbits< type,  0,  1 >;  /**< Fast Antenna Diversity Enable   */
    using ANTX           = regbits< type,  1,  1 >;  /**< Antenna Selection State         */
    using ANTX_EN        = regbits< type,  4,  2 >;  /**< FAD Antenna Controls Enable     */
    using ANTX_HZ        = regbits< type,  6,  1 >;  /**< FAD PAD Tristate Control        */
    using ANTX_CTRLMODE  = regbits< type,  7,  1 >;  /**< Antenna Diversity Control Mode  */
    using ANTX_POL       = regbits< type,  8,  4 >;  /**< FAD Antenna Controls Polarity   */
    using FAD_NOT_GPIO   = regbits< type, 12,  4 >;  /**< FAD versus GPIO Mode Selector   */
  };

  /**
   * LOW POWER PREAMBLE SEARCH CONTROL
   */
  struct LPPS_CTRL
  : public reg< uint32_t, base_addr + 0x28, rw, 0x64260000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x64260000 >;

    using LPPS_ENABLE           = regbits< type,  0,  1 >;  /**< LPPS_ENABLE                                */
    using LPPS_TZA_ALLOW        = regbits< type,  1,  1 >;  /**< LPPS_TZA_ALLOW                             */
    using LPPS_BBA_ALLOW        = regbits< type,  2,  1 >;  /**< LPPS_BBA_ALLOW                             */
    using LPPS_ADC_ALLOW        = regbits< type,  3,  1 >;  /**< LPPS_ADC_ALLOW                             */
    using LPPS_DCOC_ALLOW       = regbits< type,  4,  1 >;  /**< LPPS_DCOC_ALLOW                            */
    using LPPS_PDET_ALLOW       = regbits< type,  5,  1 >;  /**< LPPS_PDET_ALLOW                            */
    using LPPS_SY_LO_ALLOW      = regbits< type,  6,  1 >;  /**< LPPS_SY_LO_ALLOW                           */
    using LPPS_SY_LO_BUF_ALLOW  = regbits< type,  7,  1 >;  /**< LPPS_SY_LO_BUF_ALLOW                       */
    using LPPS_RX_DIG_ALLOW     = regbits< type,  8,  1 >;  /**< LPPS_RX_DIG_ALLOW                          */
    using LPPS_DCOC_DIG_ALLOW   = regbits< type,  9,  1 >;  /**< LPPS_DCOC_DIG_ALLOW                        */
    using LPPS_START_RX         = regbits< type, 16,  8 >;  /**< LPPS Fast TSM RX Warmup "Jump-from" Point  */
    using LPPS_DEST_RX          = regbits< type, 24,  8 >;  /**< LPPS Fast TSM RX Warmup "Jump-to" Point    */
  };

  /**
   * WIFI COEXISTENCE CONTROL
   */
  struct RF_NOT_ALLOWED_CTRL
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using RF_NOT_ALLOWED_NO_TX     = regbits< type,  0,  1 >;  /**< RF_NOT_ALLOWED_NO_TX     */
    using RF_NOT_ALLOWED_NO_RX     = regbits< type,  1,  1 >;  /**< RF_NOT_ALLOWED_NO_RX     */
    using RF_NOT_ALLOWED_ASSERTED  = regbits< type,  2,  1 >;  /**< RF_NOT_ALLOWED_ASSERTED  */
    using RF_NOT_ALLOWED_TX_ABORT  = regbits< type,  3,  1 >;  /**< RF_NOT_ALLOWED_TX_ABORT  */
    using RF_NOT_ALLOWED_RX_ABORT  = regbits< type,  4,  1 >;  /**< RF_NOT_ALLOWED_RX_ABORT  */
    using RF_NOT_ALLOWED           = regbits< type,  5,  1 >;  /**< RF_NOT_ALLOWED           */
  };

  /**
   * CRC/WHITENER CONTROL
   */
  struct CRCW_CFG
  : public reg< uint32_t, base_addr + 0x30, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x1 >;

    using CRCW_EN          = regbits< type,  0,  1 >;  /**< CRC calculation enable       */
    using CRC_ZERO         = regbits< type,  1,  1 >;  /**< CRC zero                     */
    using CRC_EARLY_FAIL   = regbits< type,  2,  1 >;  /**< CRC error correction fail    */
    using CRC_RES_OUT_VLD  = regbits< type,  3,  1 >;  /**< CRC result output valid      */
    using CRC_EC_OFFSET    = regbits< type, 16, 11 >;  /**< CRC error correction offset  */
    using CRC_EC_DONE      = regbits< type, 28,  1 >;  /**< CRC error correction done    */
    using CRC_EC_FAIL      = regbits< type, 29,  1 >;  /**< CRC error correction fail    */
  };

  /**
   * CRC ERROR CORRECTION MASK
   */
  struct CRC_EC_MASK
  : public reg< uint32_t, base_addr + 0x34, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0 >;

    // fixme: Field name equals parent register name: CRC_EC_MASK
    using CRC_EC_MASK_ = regbits< type,  0, 32 >;  /**< CRC error correction mask  */
  };

  /**
   * CRC RESULT
   */
  struct CRC_RES_OUT
  : public reg< uint32_t, base_addr + 0x38, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0 >;

    // fixme: Field name equals parent register name: CRC_RES_OUT
    using CRC_RES_OUT_ = regbits< type,  0, 32 >;  /**< CRC result output  */
  };
};
} // namespace mptl

#endif // ARCH_REG_XCVR_CTRL_REGS_HPP_INCLUDED
