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
//  Import from CMSIS-SVD: "Freescale/MKW40Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW40Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW40Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RSIM_HPP_INCLUDED
#define ARCH_REG_RSIM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Radio System Integration Module
 */
struct RSIM
{
  static constexpr reg_addr_t base_addr = 0x40059000;

  /**
   * RSIM Control
   */
  struct CONTROL
  : public reg< uint32_t, base_addr + 0, rw, 0xC00000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xC00000 >;

    using BLE_RF_OSC_REQ_EN      = regbits< type,  0,  1 >;  /**< BLE Ref Osc (Sysclk) Request Enable            */
    using BLE_RF_OSC_REQ_STAT    = regbits< type,  1,  1 >;  /**< BLE Ref Osc (Sysclk) Request Status            */
    using BLE_RF_OSC_REQ_INT_EN  = regbits< type,  4,  1 >;  /**< BLE Ref Osc (Sysclk) Request Interrupt Enable  */
    using BLE_RF_OSC_REQ_INT     = regbits< type,  5,  1 >;  /**< BLE Ref Osc (Sysclk) Request Interrupt Flag    */
    using RF_OSC_EN              = regbits< type,  8,  4 >;  /**< RF Ref Osc Enable [3:0]                        */
    using GASKET_BYPASS_OVRD_EN  = regbits< type, 12,  1 >;  /**< Gasket Bypass Override Enable                  */
    using GASKET_BYPASS_OVRD     = regbits< type, 13,  1 >;  /**< Gasket Bypass Override                         */
    using RF_OSC_BYPASS_EN       = regbits< type, 14,  1 >;  /**< RF Ref Osc Bypass Enable                       */
    using BLE_ACTIVE_PORT_1_SEL  = regbits< type, 16,  1 >;  /**< BLE Active port 1 select                       */
    using BLE_ACTIVE_PORT_2_SEL  = regbits< type, 17,  1 >;  /**< BLE Active port 2 select                       */
    using BLE_DEEP_SLEEP_EXIT    = regbits< type, 20,  1 >;  /**< BLE Deep Sleep Exit                            */
    using STOP_ACK_OVRD_EN       = regbits< type, 22,  1 >;  /**< Stop Acknowledge Override Enable               */
    using STOP_ACK_OVRD          = regbits< type, 23,  1 >;  /**< Stop Acknowledge Override                      */
    using RF_OSC_READY           = regbits< type, 24,  1 >;  /**< RF Ref Osc Ready                               */
    using RF_OSC_READY_OVRD_EN   = regbits< type, 25,  1 >;  /**< RF Ref Osc Ready Override Enable               */
    using RF_OSC_READY_OVRD      = regbits< type, 26,  1 >;  /**< RF Ref Osc Ready Override                      */
    using BLOCK_RADIO_RESETS     = regbits< type, 28,  1 >;  /**< Block Radio Resets                             */
    using BLOCK_RADIO_OUTPUTS    = regbits< type, 29,  1 >;  /**< Block Radio Outputs                            */
    using RADIO_RESET            = regbits< type, 31,  1 >;  /**< Software Reset for the Radio                   */
  };

  /**
   * RSIM BLE Active Delay
   */
  struct ACTIVE_DELAY
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using BLE_ACTIVE_FINE_DELAY    = regbits< type,  0,  6 >;  /**< The SoC Flash is presented with a BLE Active early warning signal to allow the Flash to complete any program or erase activities prior to a Radio communication event  */
    using BLE_ACTIVE_COARSE_DELAY  = regbits< type, 16,  4 >;  /**< The SoC Flash is presented with a BLE Active early warning signal to allow the Flash to complete any program or erase activities prior to a Radio communication event  */
  };

  /**
   * RSIM MAC MSB
   */
  struct MAC_MSB
  : public reg< uint32_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0 >;

    using MAC_ADDR_MSB  = regbits< type,  0,  8 >;  /**< MAC Address MSB  */
  };

  /**
   * RSIM MAC LSB
   */
  struct MAC_LSB
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using MAC_ADDR_LSB  = regbits< type,  0, 32 >;  /**< MAC Address LSB  */
  };

  /**
   * RSIM Analog Test
   */
  struct ANA_TEST
  : public reg< uint32_t, base_addr + 0x10, rw, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x1000000 >;

    using ATST_GATE_EN  = regbits< type,  0,  5 >;  /**< ATST Transmission Gate Enables  */
    using RADIO_ID      = regbits< type, 24,  4 >;  /**< Radio Version ID number         */
  };
};
} // namespace mptl

#endif // ARCH_REG_RSIM_HPP_INCLUDED
