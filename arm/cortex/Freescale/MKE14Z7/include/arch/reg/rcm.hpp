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
//  Import from CMSIS-SVD: "Freescale/MKE14Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE14Z7
//  series: Kinetis_E
//  version: 1.6
//  description: MKE14Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RCM_HPP_INCLUDED
#define ARCH_REG_RCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Reset Control Module
 */
struct RCM
{
  static constexpr reg_addr_t base_addr = 0x4007f000;

  /**
   * Version ID Register
   */
  struct VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x3000003 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x3000003 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Feature Specification Number  */
    using MINOR    = regbits< type, 16,  8 >;  /**< Minor Version Number          */
    using MAJOR    = regbits< type, 24,  8 >;  /**< Major Version Number          */
  };

  /**
   * Parameter Register
   */
  struct PARAM
  : public reg< uint32_t, base_addr + 0x4, ro, 0x2EEE >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x2EEE >;

    using EWAKEUP   = regbits< type,  0,  1 >;  /**< Existence of SRS[WAKEUP] status indication feature   */
    using ELVD      = regbits< type,  1,  1 >;  /**< Existence of SRS[LVD] status indication feature      */
    using ELOC      = regbits< type,  2,  1 >;  /**< Existence of SRS[LOC] status indication feature      */
    using ELOL      = regbits< type,  3,  1 >;  /**< Existence of SRS[LOL] status indication feature      */
    using EWDOG     = regbits< type,  5,  1 >;  /**< Existence of SRS[WDOG] status indication feature     */
    using EPIN      = regbits< type,  6,  1 >;  /**< Existence of SRS[PIN] status indication feature      */
    using EPOR      = regbits< type,  7,  1 >;  /**< Existence of SRS[POR] status indication feature      */
    using EJTAG     = regbits< type,  8,  1 >;  /**< Existence of SRS[JTAG] status indication feature     */
    using ELOCKUP   = regbits< type,  9,  1 >;  /**< Existence of SRS[LOCKUP] status indication feature   */
    using ESW       = regbits< type, 10,  1 >;  /**< Existence of SRS[SW] status indication feature       */
    using EMDM_AP   = regbits< type, 11,  1 >;  /**< Existence of SRS[MDM_AP] status indication feature   */
    using ESACKERR  = regbits< type, 13,  1 >;  /**< Existence of SRS[SACKERR] status indication feature  */
    using ETAMPER   = regbits< type, 15,  1 >;  /**< Existence of SRS[TAMPER] status indication feature   */
    using ECORE1    = regbits< type, 16,  1 >;  /**< Existence of SRS[CORE1] status indication feature    */
  };

  /**
   * System Reset Status Register
   */
  struct SRS
  : public reg< uint32_t, base_addr + 0x8, ro, 0x82 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x82 >;

    using LVD      = regbits< type,  1,  1 >;  /**< Low-Voltage Detect Reset or High-Voltage Detect Reset  */
    using LOC      = regbits< type,  2,  1 >;  /**< Loss-of-Clock Reset                                    */
    using LOL      = regbits< type,  3,  1 >;  /**< Loss-of-Lock Reset                                     */
    using WDOG     = regbits< type,  5,  1 >;  /**< Watchdog                                               */
    using PIN      = regbits< type,  6,  1 >;  /**< External Reset Pin                                     */
    using POR      = regbits< type,  7,  1 >;  /**< Power-On Reset                                         */
    using LOCKUP   = regbits< type,  9,  1 >;  /**< Core Lockup                                            */
    using SW       = regbits< type, 10,  1 >;  /**< Software                                               */
    using MDM_AP   = regbits< type, 11,  1 >;  /**< MDM-AP System Reset Request                            */
    using SACKERR  = regbits< type, 13,  1 >;  /**< Stop Acknowledge Error                                 */
  };

  /**
   * Reset Pin Control register
   */
  struct RPC
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using RSTFLTSRW  = regbits< type,  0,  2 >;  /**< Reset Pin Filter Select in Run and Wait Modes  */
    using RSTFLTSS   = regbits< type,  2,  1 >;  /**< Reset Pin Filter Select in Stop Mode           */
    using RSTFLTSEL  = regbits< type,  8,  5 >;  /**< Reset Pin Filter Bus Clock Select              */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using BOOTROM  = regbits< type,  1,  2 >;  /**< Boot ROM Configuration  */
  };

  /**
   * Force Mode Register
   */
  struct FM
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using FORCEROM  = regbits< type,  1,  2 >;  /**< Force ROM Boot  */
  };

  /**
   * Sticky System Reset Status Register
   */
  struct SSRS
  : public reg< uint32_t, base_addr + 0x18, rw, 0x82 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x82 >;

    using SLVD      = regbits< type,  1,  1 >;  /**< Sticky Low-Voltage Detect Reset     */
    using SLOC      = regbits< type,  2,  1 >;  /**< Sticky Loss-of-Clock Reset          */
    using SLOL      = regbits< type,  3,  1 >;  /**< Sticky Loss-of-Lock Reset           */
    using SWDOG     = regbits< type,  5,  1 >;  /**< Sticky Watchdog                     */
    using SPIN      = regbits< type,  6,  1 >;  /**< Sticky External Reset Pin           */
    using SPOR      = regbits< type,  7,  1 >;  /**< Sticky Power-On Reset               */
    using SLOCKUP   = regbits< type,  9,  1 >;  /**< Sticky Core Lockup                  */
    using SSW       = regbits< type, 10,  1 >;  /**< Sticky Software                     */
    using SMDM_AP   = regbits< type, 11,  1 >;  /**< Sticky MDM-AP System Reset Request  */
    using SSACKERR  = regbits< type, 13,  1 >;  /**< Sticky Stop Acknowledge Error       */
  };

  /**
   * System Reset Interrupt Enable Register
   */
  struct SRIE
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using DELAY    = regbits< type,  0,  2 >;  /**< Reset Delay Time                  */
    using LOC      = regbits< type,  2,  1 >;  /**< Loss-of-Clock Interrupt           */
    using LOL      = regbits< type,  3,  1 >;  /**< Loss-of-Lock Interrupt            */
    using WDOG     = regbits< type,  5,  1 >;  /**< Watchdog Interrupt                */
    using PIN      = regbits< type,  6,  1 >;  /**< External Reset Pin Interrupt      */
    using GIE      = regbits< type,  7,  1 >;  /**< Global Interrupt Enable           */
    using LOCKUP   = regbits< type,  9,  1 >;  /**< Core Lockup Interrupt             */
    using SW       = regbits< type, 10,  1 >;  /**< Software Interrupt                */
    using MDM_AP   = regbits< type, 11,  1 >;  /**< MDM-AP System Reset Request       */
    using SACKERR  = regbits< type, 13,  1 >;  /**< Stop Acknowledge Error Interrupt  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCM_HPP_INCLUDED
