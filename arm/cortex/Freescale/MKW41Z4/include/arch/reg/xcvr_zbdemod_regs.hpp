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

#ifndef ARCH_REG_XCVR_ZBDEMOD_REGS_HPP_INCLUDED
#define ARCH_REG_XCVR_ZBDEMOD_REGS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XCVR_ZBDEMOD
 */
struct XCVR_ZBDEMOD_REGS
{
  static constexpr reg_addr_t base_addr = 0x4005c480;

  /**
   * 802.15.4 DEMOD CORRELLATOR CONTROL
   */
  struct CORR_CTRL
  : public reg< uint32_t, base_addr + 0, rw, 0x482 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x482 >;

    using CORR_VT          = regbits< type,  0,  8 >;  /**< CORR_VT                              */
    using CORR_NVAL        = regbits< type,  8,  3 >;  /**< CORR_NVAL                            */
    using MAX_CORR_EN      = regbits< type, 11,  1 >;  /**< MAX_CORR_EN                          */
    using ZBDEM_CLK_ON     = regbits< type, 15,  1 >;  /**< Force 802.15.4 Demodulator Clock On  */
    using RX_MAX_CORR      = regbits< type, 16,  8 >;  /**< RX_MAX_CORR                          */
    using RX_MAX_PREAMBLE  = regbits< type, 24,  8 >;  /**< RX_MAX_PREAMBLE                      */
  };

  /**
   * 802.15.4 DEMOD PN TYPE
   */
  struct PN_TYPE
  : public reg< uint32_t, base_addr + 0x4, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x1 >;

    // fixme: Field name equals parent register name: PN_TYPE
    using PN_TYPE_ = regbits< type,  0,  1 >;  /**< PN_TYPE  */
    using TX_INV   = regbits< type,  1,  1 >;  /**< TX_INV   */
  };

  /**
   * 802.15.4 DEMOD PN CODE
   */
  struct PN_CODE
  : public reg< uint32_t, base_addr + 0x8, rw, 0x744AC39B >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x744AC39B >;

    using PN_LSB  = regbits< type,  0, 16 >;  /**< PN_LSB  */
    using PN_MSB  = regbits< type, 16, 16 >;  /**< PN_MSB  */
  };

  /**
   * 802.15.4 DEMOD SYMBOL SYNC CONTROL
   */
  struct SYNC_CTRL
  : public reg< uint32_t, base_addr + 0xc, rw, 0x8 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x8 >;

    using SYNC_PER      = regbits< type,  0,  3 >;  /**< Symbol Sync Tracking Period  */
    using TRACK_ENABLE  = regbits< type,  3,  1 >;  /**< TRACK_ENABLE                 */
  };

  /**
   * 802.15.4 CCA/LQI SOURCE
   */
  struct CCA_LQI_SRC
  : public reg< uint32_t, base_addr + 0x10, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x4 >;

    using CCA1_FROM_RX_DIG  = regbits< type,  0,  1 >;  /**< Selects the Source of CCA1 (Clear Channel Assessment Mode 1) Information Provided to the 802.15.4 Link Layer  */
    using LQI_FROM_RX_DIG   = regbits< type,  1,  1 >;  /**< Selects the Source of LQI (Link Quality Indicator) Information Provided to the 802.15.4 Link Layer            */
    using LQI_START_AT_SFD  = regbits< type,  2,  1 >;  /**< Select Start Point for LQI Computation                                                                        */
  };

  /**
   * FAD CORRELATOR THRESHOLD
   */
  struct FAD_THR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x82 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x82 >;

    // fixme: Field name equals parent register name: FAD_THR
    using FAD_THR_ = regbits< type,  0,  8 >;  /**< FAD_THR  */
  };

  /**
   * 802.15.4 AFC STATUS
   */
  struct ZBDEM_AFC
  : public reg< uint32_t, base_addr + 0x18, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x1 >;

    using AFC_EN   = regbits< type,  0,  1 >;  /**< AFC_EN   */
    using DCD_EN   = regbits< type,  1,  1 >;  /**< DCD_EN   */
    using AFC_OUT  = regbits< type,  8,  5 >;  /**< AFC_OUT  */
  };
};
} // namespace mptl

#endif // ARCH_REG_XCVR_ZBDEMOD_REGS_HPP_INCLUDED
