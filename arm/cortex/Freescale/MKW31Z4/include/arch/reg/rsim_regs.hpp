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

#ifndef ARCH_REG_RSIM_REGS_HPP_INCLUDED
#define ARCH_REG_RSIM_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * RSIM
 */
struct RSIM_REGS
{
  static constexpr reg_addr_t base_addr = 0x40059000;

  /**
   * Radio System Control
   */
  struct CONTROL
  : public reg< uint32_t, base_addr + 0, rw, 0xC00002 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xC00002 >;

    using BLE_RF_OSC_REQ_EN            = regbits< type,  0,  1 >;  /**< BLE Ref Osc (Sysclk) Request Enable            */
    using BLE_RF_OSC_REQ_STAT          = regbits< type,  1,  1 >;  /**< BLE Ref Osc (Sysclk) Request Status            */
    using BLE_RF_OSC_REQ_INT_EN        = regbits< type,  4,  1 >;  /**< BLE Ref Osc (Sysclk) Request Interrupt Enable  */
    using BLE_RF_OSC_REQ_INT           = regbits< type,  5,  1 >;  /**< BLE Ref Osc (Sysclk) Request Interrupt Flag    */
    using RF_OSC_EN                    = regbits< type,  8,  4 >;  /**< RF Ref Osc Enable Select                       */
    using RADIO_GASKET_BYPASS_OVRD_EN  = regbits< type, 12,  1 >;  /**< Radio Gasket Bypass Override Enable            */
    using RADIO_GASKET_BYPASS_OVRD     = regbits< type, 13,  1 >;  /**< Radio Gasket Bypass Override                   */
    using IPP_OBE_3V_BLE_ACTIVE_1      = regbits< type, 16,  1 >;  /**< IPP_OBE_3V_BLE_ACTIVE_1                        */
    using IPP_OBE_3V_BLE_ACTIVE_2      = regbits< type, 17,  1 >;  /**< IPP_OBE_3V_BLE_ACTIVE_2                        */
    using RADIO_RAM_ACCESS_OVRD_EN     = regbits< type, 18,  1 >;  /**< Radio RAM Access Override Enable               */
    using RADIO_RAM_ACCESS_OVRD        = regbits< type, 19,  1 >;  /**< Radio RAM Access Override                      */
    using RSIM_DSM_EXIT                = regbits< type, 20,  1 >;  /**< BLE Force Deep Sleep Mode Exit                 */
    using RSIM_STOP_ACK_OVRD_EN        = regbits< type, 22,  1 >;  /**< Stop Acknowledge Override Enable               */
    using RSIM_STOP_ACK_OVRD           = regbits< type, 23,  1 >;  /**< Stop Acknowledge Override                      */
    using RF_OSC_READY                 = regbits< type, 24,  1 >;  /**< RF Ref Osc Ready                               */
    using RF_OSC_READY_OVRD_EN         = regbits< type, 25,  1 >;  /**< RF Ref Osc Ready Override Enable               */
    using RF_OSC_READY_OVRD            = regbits< type, 26,  1 >;  /**< RF Ref Osc Ready Override                      */
    using BLOCK_SOC_RESETS             = regbits< type, 28,  1 >;  /**< Block SoC Resets of the Radio                  */
    using BLOCK_RADIO_OUTPUTS          = regbits< type, 29,  1 >;  /**< Block Radio Outputs                            */
    using ALLOW_DFT_RESETS             = regbits< type, 30,  1 >;  /**< Allow the DFT Reset Pin to Reset the Radio     */
    using RADIO_RESET_BIT              = regbits< type, 31,  1 >;  /**< Software Reset for the Radio                   */
  };

  /**
   * Radio Active Early Warning
   */
  struct ACTIVE_DELAY
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using BLE_FINE_DELAY    = regbits< type,  0,  6 >;  /**< BLE Active Fine Delay    */
    using BLE_COARSE_DELAY  = regbits< type, 16,  4 >;  /**< BLE Active Coarse Delay  */
  };

  /**
   * Radio MAC Address
   */
  struct MAC_MSB
  : public reg< uint32_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0 >;

    using MAC_ADDR_MSB  = regbits< type,  0,  8 >;  /**< Radio MAC Address MSB  */
  };

  /**
   * Radio MAC Address
   */
  struct MAC_LSB
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using MAC_ADDR_LSB  = regbits< type,  0, 32 >;  /**< Radio MAC Address LSB  */
  };

  /**
   * Radio Miscellaneous
   */
  struct MISC
  : public reg< uint32_t, base_addr + 0x10, rw, 0x3000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x3000000 >;

    using ANALOG_TEST_EN  = regbits< type,  0,  5 >;  /**< RSIM Analog Test Mux Enables  */
    using RADIO_VERSION   = regbits< type, 24,  8 >;  /**< Radio Version ID number       */
  };

  /**
   * Deep Sleep Timer
   */
  struct DSM_TIMER
  : public reg< uint32_t, base_addr + 0x100, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0 >;

    // fixme: Field name equals parent register name: DSM_TIMER
    using DSM_TIMER_ = regbits< type,  0, 24 >;  /**< Deep Sleep Mode Timer  */
  };

  /**
   * Deep Sleep Timer Control
   */
  struct DSM_CONTROL
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using DSM_ANT_READY            = regbits< type,  0,  1 >;  /**< ANT Ready for Deep Sleep Mode                                 */
    using ANT_DEEP_SLEEP_STATUS    = regbits< type,  1,  1 >;  /**< ANT Link Layer Deep Sleep Mode Status                         */
    using DSM_ANT_FINISHED         = regbits< type,  2,  1 >;  /**< ANT Deep Sleep Time Finished                                  */
    using ANT_SYSCLK_REQUEST_EN    = regbits< type,  3,  1 >;  /**< Enable ANT Link Layer to Request RF OSC                       */
    using ANT_SLEEP_REQUEST        = regbits< type,  4,  1 >;  /**< ANT Link Layer Deep Sleep Requested                           */
    using ANT_SYSCLK_REQ           = regbits< type,  5,  1 >;  /**< ANT Link Layer RF OSC Request Status                          */
    using ANT_SYSCLK_INTERRUPT_EN  = regbits< type,  6,  1 >;  /**< ANT Link Layer RF OSC Request Interrupt Enable                */
    using ANT_SYSCLK_REQ_INT       = regbits< type,  7,  1 >;  /**< Interrupt Flag from an ANT Link Layer RF OSC Request          */
    using DSM_GEN_READY            = regbits< type,  8,  1 >;  /**< Generic FSK Ready for Deep Sleep Mode                         */
    using GEN_DEEP_SLEEP_STATUS    = regbits< type,  9,  1 >;  /**< Generic FSK Link Layer Deep Sleep Mode Status                 */
    using DSM_GEN_FINISHED         = regbits< type, 10,  1 >;  /**< Generic FSK Deep Sleep Time Finished                          */
    using GEN_SYSCLK_REQUEST_EN    = regbits< type, 11,  1 >;  /**< Enable Generic FSK Link Layer to Request RF OSC               */
    using GEN_SLEEP_REQUEST        = regbits< type, 12,  1 >;  /**< Generic FSK Link Layer Deep Sleep Requested                   */
    using GEN_SYSCLK_REQ           = regbits< type, 13,  1 >;  /**< Generic FSK Link Layer RF OSC Request Status                  */
    using GEN_SYSCLK_INTERRUPT_EN  = regbits< type, 14,  1 >;  /**< Generic FSK Link Layer RF OSC Request Interrupt Enable        */
    using GEN_SYSCLK_REQ_INT       = regbits< type, 15,  1 >;  /**< Interrupt Flag from an Generic FSK Link Layer RF OSC Request  */
    using DSM_ZIG_READY            = regbits< type, 16,  1 >;  /**< 802.15.4 Ready for Deep Sleep Mode                            */
    using ZIG_DEEP_SLEEP_STATUS    = regbits< type, 17,  1 >;  /**< 802.15.4 Link Layer Deep Sleep Mode Status                    */
    using DSM_ZIG_FINISHED         = regbits< type, 18,  1 >;  /**< 802.15.4 Deep Sleep Time Finished                             */
    using ZIG_SYSCLK_REQUEST_EN    = regbits< type, 19,  1 >;  /**< Enable 802.15.4 Link Layer to Request RF OSC                  */
    using ZIG_SLEEP_REQUEST        = regbits< type, 20,  1 >;  /**< 802.15.4 Link Layer Deep Sleep Requested                      */
    using ZIG_SYSCLK_REQ           = regbits< type, 21,  1 >;  /**< 802.15.4 Link Layer RF OSC Request Status                     */
    using ZIG_SYSCLK_INTERRUPT_EN  = regbits< type, 22,  1 >;  /**< 802.15.4 Link Layer RF OSC Request Interrupt Enable           */
    using ZIG_SYSCLK_REQ_INT       = regbits< type, 23,  1 >;  /**< Interrupt Flag from an 802.15.4 Link Layer RF OSC Request     */
    using DSM_TIMER_CLR            = regbits< type, 27,  1 >;  /**< Deep Sleep Mode Timer Clear                                   */
    using DSM_TIMER_EN             = regbits< type, 31,  1 >;  /**< Deep Sleep Mode Timer Enable                                  */
  };

  /**
   * Deep Sleep Wakeup Time Offset
   */
  struct DSM_OSC_OFFSET
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using DSM_OSC_STABILIZE_TIME  = regbits< type,  0, 10 >;  /**< Deep Sleep Wakeup RF OSC Stabilize Time  */
  };

  /**
   * ANT Link Layer Sleep Time
   */
  struct ANT_SLEEP
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using ANT_SLEEP_TIME  = regbits< type,  0, 24 >;  /**< ANT Link Layer Sleep Time  */
  };

  /**
   * ANT Link Layer Wake Time
   */
  struct ANT_WAKE
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using ANT_WAKE_TIME  = regbits< type,  0, 24 >;  /**< ANT Link Layer Wake Time  */
  };

  /**
   * 802.15.4 Link Layer Sleep Time
   */
  struct ZIG_SLEEP
  : public reg< uint32_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0 >;

    using ZIG_SLEEP_TIME  = regbits< type,  0, 24 >;  /**< 802.15.4 Link Layer Sleep Time  */
  };

  /**
   * 802.15.4 Link Layer Wake Time
   */
  struct ZIG_WAKE
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using ZIG_WAKE_TIME  = regbits< type,  0, 24 >;  /**< 802.15.4 Link Layer Wake Time  */
  };

  /**
   * Generic FSK Link Layer Sleep Time
   */
  struct GEN_SLEEP
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0 >;

    using GEN_SLEEP_TIME  = regbits< type,  0, 24 >;  /**< Generic FSK Link Layer Sleep Time  */
  };

  /**
   * Generic FSK Link Layer Wake Time
   */
  struct GEN_WAKE
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using GEN_WAKE_TIME  = regbits< type,  0, 24 >;  /**< Generic FSK Link Layer Wake Time  */
  };

  /**
   * Radio Oscillator Control
   */
  struct RF_OSC_CTRL
  : public reg< uint32_t, base_addr + 0x124, rw, 0x203806 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x203806 >;

    using BB_XTAL_ALC_COUNT_SEL    = regbits< type,  0,  2 >;  /**< rmap_bb_xtal_alc_count_sel_hv[1:0]                 */
    using BB_XTAL_ALC_ON           = regbits< type,  2,  1 >;  /**< rmap_bb_xtal_alc_on_hv                             */
    using RF_OSC_BYPASS_EN         = regbits< type,  3,  1 >;  /**< RF Ref Osc Bypass Enable                           */
    using BB_XTAL_COMP_BIAS        = regbits< type,  4,  5 >;  /**< rmap_bb_xtal_comp_bias_hv[4:0]                     */
    using BB_XTAL_DC_COUP_MODE_EN  = regbits< type,  9,  1 >;  /**< rmap_bb_xtal_dc_coup_mode_en_hv                    */
    using BB_XTAL_DIAGSEL          = regbits< type, 10,  1 >;  /**< rmap_bb_xtal_diagsel_hv                            */
    using BB_XTAL_DIG_CLK_ON       = regbits< type, 11,  1 >;  /**< rmap_bb_xtal_dig_clk_on_hv                         */
    using BB_XTAL_GM               = regbits< type, 12,  5 >;  /**< rmap_bb_xtal_gm_hv[4:0]                            */
    using BB_XTAL_ON_OVRD          = regbits< type, 17,  1 >;  /**< rmap_bb_xtal_on_ovrd_hv                            */
    using BB_XTAL_ON_OVRD_ON       = regbits< type, 18,  1 >;  /**< rmap_bb_xtal_on_ovrd_on_hv                         */
    using BB_XTAL_READY_COUNT_SEL  = regbits< type, 20,  2 >;  /**< rmap_bb_xtal_ready_count_sel_hv[1:0]               */
    using RADIO_EXT_OSC_RF_EN_SEL  = regbits< type, 27,  1 >;  /**< Radio External Request for RF OSC Select           */
    using RADIO_EXT_OSC_OVRD       = regbits< type, 28,  1 >;  /**< Radio External Request for RF OSC Override         */
    using RADIO_EXT_OSC_OVRD_EN    = regbits< type, 29,  1 >;  /**< Radio External Request for RF OSC Override Enable  */
    using RADIO_RF_ABORT_OVRD      = regbits< type, 30,  1 >;  /**< Radio RF Abort Override                            */
    using RADIO_RF_ABORT_OVRD_EN   = regbits< type, 31,  1 >;  /**< Radio RF Abort Override Enable                     */
  };

  /**
   * Radio Analog Test Registers
   */
  struct ANA_TEST
  : public reg< uint32_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0 >;

    using BB_LDO_LS_BYP       = regbits< type,  0,  1 >;  /**< rmap_bb_ldo_ls_byp_hv         */
    using BB_LDO_LS_DIAGSEL   = regbits< type,  1,  1 >;  /**< rmap_bb_ldo_ls_diagsel_hv     */
    using BB_LDO_XO_BYP_ON    = regbits< type,  2,  1 >;  /**< rmap_bb_ldo_xo_byp_on_hv      */
    using BB_LDO_XO_DIAGSEL   = regbits< type,  3,  1 >;  /**< rmap_bb_ldo_xo_diagsel_hv     */
    using BB_XTAL_TEST        = regbits< type,  4,  1 >;  /**< rmap_bb_xtal_test_en_hv       */
    using BG_DIAGBUF          = regbits< type,  5,  1 >;  /**< rmap_bg_diagbuf_hv            */
    using BG_DIAGSEL          = regbits< type,  6,  1 >;  /**< rmap_bg_diagsel_hv            */
    using BG_STARTUPFORCE     = regbits< type,  7,  1 >;  /**< rmap_bg_startupforce_hv       */
    using DIAG_1234_ON        = regbits< type,  8,  1 >;  /**< rmap_diag_1234_on_hv          */
    using DIAG2SOCADC_DEC     = regbits< type,  9,  2 >;  /**< rmap_diag2socadc_dec_hv[1:0]  */
    using DIAG2SOCADC_DEC_ON  = regbits< type, 11,  1 >;  /**< rmap_diag2socadc_dec_on_hv    */
    using DIAGCODE            = regbits< type, 12,  3 >;  /**< rmap_diagcode_hv[2:0]         */
  };

  /**
   * Radio Analog Trim Registers
   */
  struct ANA_TRIM
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x784B0000 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x784B0000 >;

    using BB_LDO_LS_SPARE   = regbits< type,  0,  2 >;  /**< rmap_bb_ldo_ls_spare_hv[1:0]   */
    using BB_LDO_LS_TRIM    = regbits< type,  3,  3 >;  /**< rmap_bb_ldo_ls_trim_hv[2:0]    */
    using BB_LDO_XO_SPARE   = regbits< type,  6,  2 >;  /**< rmap_bb_ldo_xo_spare_hv[1:0]   */
    using BB_LDO_XO_TRIM    = regbits< type,  8,  3 >;  /**< rmap_bb_ldo_xo_trim_hv[2:0]    */
    using BB_XTAL_SPARE     = regbits< type, 11,  5 >;  /**< rmap_bb_xtal_spare_hv[4:0]     */
    using BB_XTAL_TRIM      = regbits< type, 16,  8 >;  /**< rmap_bb_xtal_trim_hv[7:0]      */
    using BG_1V_TRIM        = regbits< type, 24,  4 >;  /**< rmap_bg_1v_trim_hv[3:0]        */
    using BG_IBIAS_5U_TRIM  = regbits< type, 28,  4 >;  /**< rmap_bg_ibias_5u_trim_hv[3:0]  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RSIM_REGS_HPP_INCLUDED
