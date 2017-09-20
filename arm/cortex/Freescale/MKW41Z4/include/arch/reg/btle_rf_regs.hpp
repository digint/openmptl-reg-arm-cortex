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

#ifndef ARCH_REG_BTLE_RF_REGS_HPP_INCLUDED
#define ARCH_REG_BTLE_RF_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * BLE_RF
 */
struct BTLE_RF_regs
{
  static constexpr reg_addr_t base_addr = 0x4005b000;

  /**
   * BLUETOOTH LOW ENERGY PART ID
   */
  struct BLE_PART_ID
  : public reg< uint16_t, base_addr + 0x600, ro, 0x3 >
  {
    using type = reg< uint16_t, base_addr + 0x600, ro, 0x3 >;

    // fixme: Field name equals parent register name: BLE_PART_ID
    using BLE_PART_ID_ = regbits< type,  0, 16 >;  /**< BLE Part ID  */
  };

  /**
   * BLE DSM STATUS
   */
  struct DSM_STATUS
  : public reg< uint16_t, base_addr + 0x604, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x604, ro, 0 >;

    using ORF_SYSCLK_REQ  = regbits< type,  0,  1 >;  /**< RF Oscillator Requested      */
    using RIF_LL_ACTIVE   = regbits< type,  1,  1 >;  /**< Link Layer Active            */
    using XCVR_BUSY       = regbits< type,  2,  1 >;  /**< Transceiver Busy Status Bit  */
  };

  /**
   * BLUETOOTH LOW ENERGY MISCELLANEOUS CONTROL
   */
  struct MISC_CTRL
  : public reg< uint16_t, base_addr + 0x608, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x608, rw, 0 >;

    using TSM_INTR_EN  = regbits< type,  1,  1 >;  /**< TSM Interrupt Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_BTLE_RF_REGS_HPP_INCLUDED
