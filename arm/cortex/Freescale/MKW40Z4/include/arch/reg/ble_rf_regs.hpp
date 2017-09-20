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

#ifndef ARCH_REG_BLE_RF_REGS_HPP_INCLUDED
#define ARCH_REG_BLE_RF_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Bluetooth Low Energy RF Registers
 */
struct BLE_RF_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005b000;

  /**
   * Bluetooth Low Energy Part ID
   */
  struct BLE_PART_ID
  : public reg< uint16_t, base_addr + 0xd00, ro, 0x1 >
  {
    using type = reg< uint16_t, base_addr + 0xd00, ro, 0x1 >;

    // fixme: Field name equals parent register name: BLE_PART_ID
    using BLE_PART_ID_ = regbits< type,  0, 16 >;  /**< BLE Part ID  */
  };

  /**
   * DSM Status
   */
  struct DSM_STATUS
  : public reg< uint16_t, base_addr + 0xd04, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xd04, ro, 0 >;

    using ORF_SYSCLK_REQ  = regbits< type,  0,  1 >;  /**< RF Oscillator Requested  */
    using RIF_LL_ACTIVE   = regbits< type,  1,  1 >;  /**< Link Layer Active        */
  };

  /**
   * Bluetooth Low Energy AFC
   */
  struct BLE_AFC
  : public reg< uint16_t, base_addr + 0xd08, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xd08, rw, 0 >;

    // fixme: Field name equals parent register name: BLE_AFC
    using BLE_AFC_                   = regbits< type,  0, 14 >;  /**< BLE AFC Result                                */
    using LATCH_AFC_ON_ACCESS_MATCH  = regbits< type, 15,  1 >;  /**< Latch AFC Estimation on Access Address Match  */
  };

  /**
   * Bluetooth Low Energy BSM
   */
  struct BLE_BSM
  : public reg< uint16_t, base_addr + 0xd0c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xd0c, rw, 0 >;

    using BSM_EN_BLE  = regbits< type,  0,  1 >;  /**< BLE Bit Streaming Mode Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_BLE_RF_REGS_HPP_INCLUDED
