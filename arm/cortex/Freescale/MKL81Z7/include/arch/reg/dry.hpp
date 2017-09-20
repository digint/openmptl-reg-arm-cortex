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
//  Import from CMSIS-SVD: "Freescale/MKL81Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL81Z7
//  series: Kinetis_L
//  version: 1.6
//  description: MKL81Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DRY_HPP_INCLUDED
#define ARCH_REG_DRY_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Tamper Detect and Secure Key Storage
 */
struct DRY
{
  static constexpr reg_addr_t base_addr = 0x40042000;

  /**
   * DryIce Secure Key Valid Register
   */
  struct SKVR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using SKV  = regbits< type,  0,  8 >;  /**< Secure Key Valid  */
  };

  /**
   * DryIce Secure Key Write Lock Register
   */
  struct SKWLR
  : public reg< uint32_t, base_addr + 0x8, rw, 0xFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0xFF >;

    using SKWL  = regbits< type,  0,  8 >;  /**< Secure Key Write Lock  */
  };

  /**
   * DryIce Secure Key Read Lock Register
   */
  struct SKRLR
  : public reg< uint32_t, base_addr + 0xc, rw, 0xFF >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0xFF >;

    using SKRL  = regbits< type,  0,  8 >;  /**< Secure Key Read Lock  */
  };

  /**
   * DryIce Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using SWR   = regbits< type,  0,  1 >;  /**< Software Reset                */
    using DEN   = regbits< type,  1,  1 >;  /**< DryIce Enable                 */
    using TFSR  = regbits< type,  2,  1 >;  /**< Tamper Force System Reset     */
    using UM    = regbits< type,  3,  1 >;  /**< Update Mode                   */
    using ATCS  = regbits< type,  4,  2 >;  /**< Active Tamper Clock Source    */
    using THYS  = regbits< type,  8,  1 >;  /**< Tamper Hysteresis Select      */
    using TPFE  = regbits< type,  9,  1 >;  /**< Tamper Passive Filter Enable  */
    using TDSE  = regbits< type, 10,  1 >;  /**< Tamper Drive Strength Enable  */
    using TSRE  = regbits< type, 11,  1 >;  /**< Tamper Slew Rate Enable       */
    using SRF   = regbits< type, 14,  2 >;  /**< Secure Register File          */
    using DPR   = regbits< type, 17, 15 >;  /**< DryIce Prescaler Register     */
  };

  /**
   * DryIce Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x1 >;

    using DTF  = regbits< type,  0,  1 >;  /**< DryIce Tamper Flag       */
    using TAF  = regbits< type,  1,  1 >;  /**< Tamper Acknowledge Flag  */
    using TOF  = regbits< type,  2,  1 >;  /**< Time Overflow Flag       */
    using MOF  = regbits< type,  3,  1 >;  /**< Monotonic Overflow Flag  */
    using VTF  = regbits< type,  4,  1 >;  /**< Voltage Tamper Flag      */
    using CTF  = regbits< type,  5,  1 >;  /**< Clock Tamper Flag        */
    using TTF  = regbits< type,  6,  1 >;  /**< Temperature Tamper Flag  */
    using STF  = regbits< type,  7,  1 >;  /**< Security Tamper Flag     */
    using FSF  = regbits< type,  8,  1 >;  /**< Flash Security Flag      */
    using TMF  = regbits< type,  9,  1 >;  /**< Test Mode Flag           */
    using TPF  = regbits< type, 16,  8 >;  /**< Tamper Pin Flag          */
  };

  /**
   * DryIce Lock Register
   */
  struct LR
  : public reg< uint32_t, base_addr + 0x18, rw, 0xFF3FFF >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0xFF3FFF >;

    using KVL  = regbits< type,  1,  1 >;  /**< Key Valid Lock         */
    using KWL  = regbits< type,  2,  1 >;  /**< Key Write Lock         */
    using KRL  = regbits< type,  3,  1 >;  /**< Key Read Lock          */
    using CRL  = regbits< type,  4,  1 >;  /**< Control Register Lock  */
    using SRL  = regbits< type,  5,  1 >;  /**< Status Register Lock   */
    using LRL  = regbits< type,  6,  1 >;  /**< Lock Register Lock     */
    using IEL  = regbits< type,  7,  1 >;  /**< Interrupt Enable Lock  */
    using TSL  = regbits< type,  8,  1 >;  /**< Tamper Seconds Lock    */
    using TEL  = regbits< type,  9,  1 >;  /**< Tamper Enable Lock     */
    using PDL  = regbits< type, 10,  1 >;  /**< Pin Direction Lock     */
    using PPL  = regbits< type, 11,  1 >;  /**< Pin Polarity Lock      */
    using ATL  = regbits< type, 12,  2 >;  /**< Active Tamper Lock     */
    using GFL  = regbits< type, 16,  8 >;  /**< Glitch Filter Lock     */
  };

  /**
   * DryIce Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x1 >;

    using DTIE  = regbits< type,  0,  1 >;  /**< DryIce Tamper Interrupt Enable       */
    using TOIE  = regbits< type,  2,  1 >;  /**< Time Overflow Interrupt Enable       */
    using MOIE  = regbits< type,  3,  1 >;  /**< Monotonic Overflow Interrupt Enable  */
    using VTIE  = regbits< type,  4,  1 >;  /**< Voltage Tamper Interrupt Enable      */
    using CTIE  = regbits< type,  5,  1 >;  /**< Clock Tamper Interrupt Enable        */
    using TTIE  = regbits< type,  6,  1 >;  /**< Temperature Tamper Interrupt Enable  */
    using STIE  = regbits< type,  7,  1 >;  /**< Security Tamper Interrupt Enable     */
    using FSIE  = regbits< type,  8,  1 >;  /**< Flash Security Interrupt Enable      */
    using TMIE  = regbits< type,  9,  1 >;  /**< Test Mode Interrupt Enable           */
    using TPIE  = regbits< type, 16,  8 >;  /**< Tamper Pin Interrupt Enable          */
  };

  /**
   * DryIce Tamper Seconds Register
   */
  struct TSR
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using TTS  = regbits< type,  0, 32 >;  /**< Tamper Time Seconds  */
  };

  /**
   * DryIce Tamper Enable Register
   */
  struct TER
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using TOE  = regbits< type,  2,  1 >;  /**< Time Overflow Enable       */
    using MOE  = regbits< type,  3,  1 >;  /**< Monotonic Overflow Enable  */
    using VTE  = regbits< type,  4,  1 >;  /**< Voltage Tamper Enable      */
    using CTE  = regbits< type,  5,  1 >;  /**< Clock Tamper Enable        */
    using TTE  = regbits< type,  6,  1 >;  /**< Temperature Tamper Enable  */
    using STE  = regbits< type,  7,  1 >;  /**< Security Tamper Enable     */
    using FSE  = regbits< type,  8,  1 >;  /**< Flash Security Enable      */
    using TME  = regbits< type,  9,  1 >;  /**< Test Mode Enable           */
    using TPE  = regbits< type, 16,  8 >;  /**< Tamper Pin Enable          */
  };

  /**
   * DryIce Pin Direction Register
   */
  struct PDR
  : public reg< uint32_t, base_addr + 0x28, rw, 0xFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0xFF0000 >;

    using TPD   = regbits< type,  0,  8 >;  /**< Tamper Pin Direction    */
    using TPOD  = regbits< type, 16,  8 >;  /**< Tamper Pin Output Data  */
  };

  /**
   * DryIce Pin Polarity Register
   */
  struct PPR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using TPP   = regbits< type,  0,  8 >;  /**< Tamper Pin Polarity    */
    using TPID  = regbits< type, 16,  8 >;  /**< Tamper Pin Input Data  */
  };

  /**
   * DryIce Active Tamper Register
   */
  struct ATR%s
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using ATSR  = regbits< type,  0, 16 >;  /**< Active Tamper Shift Register  */
    using ATP   = regbits< type, 16, 16 >;  /**< Active Tamper Polynomial      */
  };

  /**
   * DryIce Pin Glitch Filter Register
   */
  struct PGFR%s
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using GFW   = regbits< type,  0,  6 >;  /**< Glitch Filter Width          */
    using GFP   = regbits< type,  6,  1 >;  /**< Glitch Filter Prescaler      */
    using GFE   = regbits< type,  7,  1 >;  /**< Glitch Filter Enable         */
    using TPSW  = regbits< type,  8,  2 >;  /**< Tamper Pin Sample Width      */
    using TPSF  = regbits< type, 10,  2 >;  /**< Tamper Pin Sample Frequency  */
    using TPEX  = regbits< type, 16,  2 >;  /**< Tamper Pin Expected          */
    using TPE   = regbits< type, 24,  1 >;  /**< Tamper Pull Enable           */
    using TPS   = regbits< type, 25,  1 >;  /**< Tamper Pull Select           */
  };

  /**
   * DryIce Write Access Control Register
   */
  struct WAC
  : public reg< uint32_t, base_addr + 0x800, rw, 0xFF3FFF >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0xFF3FFF >;

    using SKVW   = regbits< type,  1,  1 >;  /**< Secure Key Valid Write                */
    using SKWRW  = regbits< type,  2,  1 >;  /**< Secure Key Write Lock Register Write  */
    using SKRRW  = regbits< type,  3,  1 >;  /**< Secure Key Read Lock Register Write   */
    using CRW    = regbits< type,  4,  1 >;  /**< Control Register Write                */
    using SRW    = regbits< type,  5,  1 >;  /**< Status Register Write                 */
    using LRW    = regbits< type,  6,  1 >;  /**< Lock Register Write                   */
    using IEW    = regbits< type,  7,  1 >;  /**< Interrupt Enable Write                */
    using TSRW   = regbits< type,  8,  1 >;  /**< Tamper Seconds Register Write         */
    using TEW    = regbits< type,  9,  1 >;  /**< Tamper Enable Write                   */
    using PDW    = regbits< type, 10,  1 >;  /**< Pin Direction Write                   */
    using PPW    = regbits< type, 11,  1 >;  /**< Pin Polarity Write                    */
    using ATW    = regbits< type, 12,  2 >;  /**< Active Tamper Write                   */
    using GFW    = regbits< type, 16,  8 >;  /**< Glitch Filter Write                   */
  };

  /**
   * DryIce Read Access Control Register
   */
  struct RAC
  : public reg< uint32_t, base_addr + 0x804, rw, 0xFF3FFF >
  {
    using type = reg< uint32_t, base_addr + 0x804, rw, 0xFF3FFF >;

    using SKVR   = regbits< type,  1,  1 >;  /**< Secure Key Valid Read                */
    using SKWRR  = regbits< type,  2,  1 >;  /**< Secure Key Write Lock Register Read  */
    using SKRRR  = regbits< type,  3,  1 >;  /**< Secure Key Read Lock Register Read   */
    using CRR    = regbits< type,  4,  1 >;  /**< Control Register Read                */
    using SRR    = regbits< type,  5,  1 >;  /**< Status Register Read                 */
    using LRR    = regbits< type,  6,  1 >;  /**< Lock Register Read                   */
    using IER    = regbits< type,  7,  1 >;  /**< Interrupt Enable Read                */
    using TSRR   = regbits< type,  8,  1 >;  /**< Tamper Seconds Register Read         */
    using TER    = regbits< type,  9,  1 >;  /**< Tamper Enable Read                   */
    using PDR    = regbits< type, 10,  1 >;  /**< Pin Direction Read                   */
    using PPR    = regbits< type, 11,  1 >;  /**< Pin Polarity Read                    */
    using ATR    = regbits< type, 12,  2 >;  /**< Active Tamper Read                   */
    using GFR    = regbits< type, 16,  8 >;  /**< Glitch Filter Read                   */
  };

  /**
   * Secure Key Register
   */
  struct SKR%s
  : public reg< uint32_t, base_addr + 0x1000, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1000, rw, 0 >;

    using SK  = regbits< type,  0, 32 >;  /**< Secure Key  */
  };

  /**
   * Secure Write Access Control
   */
  struct SWAC
  : public reg< uint32_t, base_addr + 0x1800, rw, 0xFF >
  {
    using type = reg< uint32_t, base_addr + 0x1800, rw, 0xFF >;

    using SKRW  = regbits< type,  0,  8 >;  /**< Secure Key Register Write  */
  };

  /**
   * Secure Read Access Control
   */
  struct SRAC
  : public reg< uint32_t, base_addr + 0x1804, rw, 0xFF >
  {
    using type = reg< uint32_t, base_addr + 0x1804, rw, 0xFF >;

    using SKRR  = regbits< type,  0,  8 >;  /**< Secure Key Register Read  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DRY_HPP_INCLUDED
