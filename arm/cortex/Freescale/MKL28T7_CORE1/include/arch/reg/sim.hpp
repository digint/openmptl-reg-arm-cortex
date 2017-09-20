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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE1.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE1
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE1 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SIM_HPP_INCLUDED
#define ARCH_REG_SIM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System Integration Module
 */
struct SIM
{
  static constexpr reg_addr_t base_addr = 0x40074000;

  /**
   * System Options Register 1
   */
  struct SOPT1
  : public reg< uint32_t, base_addr + 0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x80000000 >;

    using USBVSTBY  = regbits< type, 29,  1 >;  /**< USB voltage regulator in standby mode during VLPR and VLPW modes              */
    using USBSSTBY  = regbits< type, 30,  1 >;  /**< USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes.  */
    using USBREGEN  = regbits< type, 31,  1 >;  /**< USB voltage regulator enable                                                  */
  };

  /**
   * SOPT1 Configuration Register
   */
  struct SOPT1CFG
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using URWE   = regbits< type, 24,  1 >;  /**< USB voltage regulator enable write enable        */
    using UVSWE  = regbits< type, 25,  1 >;  /**< USB voltage regulator VLP standby write enable   */
    using USSWE  = regbits< type, 26,  1 >;  /**< USB voltage regulator stop standby write enable  */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0x100E00 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0x100E00 >;

    using PINID     = regbits< type,  0,  4 >;  /**< Pin count identification           */
    using KEYATT    = regbits< type,  4,  3 >;  /**< Core configuration of the device.  */
    using DIEID     = regbits< type,  7,  5 >;  /**< Device Die Number                  */
    using REVID     = regbits< type, 12,  4 >;  /**< Device Revision Number             */
    using SRAMSIZE  = regbits< type, 16,  4 >;  /**< System SRAM Size                   */
    using SERIESID  = regbits< type, 20,  4 >;  /**< Kinetis Series ID                  */
    using SUBFAMID  = regbits< type, 24,  4 >;  /**< Kinetis Sub-Family ID              */
    using FAMID     = regbits< type, 28,  4 >;  /**< Kinetis family ID                  */
  };

  /**
   * Flash Configuration Register 1
   */
  struct FCFG1
  : public reg< uint32_t, base_addr + 0x104c, rw, 0xF000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, rw, 0xF000000 >;

    using FLASHDIS   = regbits< type,  0,  1 >;  /**< Flash Disable       */
    using FLASHDOZE  = regbits< type,  1,  1 >;  /**< Flash Doze          */
    using PFSIZE     = regbits< type, 24,  4 >;  /**< Program Flash Size  */
  };

  /**
   * Flash Configuration Register 2
   */
  struct FCFG2
  : public reg< uint32_t, base_addr + 0x1050, ro, 0x7FA00000 >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0x7FA00000 >;

    using MAXADDR0  = regbits< type, 24,  7 >;  /**< Max Address lock  */
  };

  /**
   * Unique Identification Register Mid-High
   */
  struct UIDMH
  : public reg< uint32_t, base_addr + 0x1058, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1058, ro, 0 >;

    using UID  = regbits< type,  0, 16 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Mid Low
   */
  struct UIDML
  : public reg< uint32_t, base_addr + 0x105c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x105c, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Low
   */
  struct UIDL
  : public reg< uint32_t, base_addr + 0x1060, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1060, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Peripheral Clock Status Register
   */
  struct PCSR
  : public reg< uint32_t, base_addr + 0x10ec, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10ec, ro, 0 >;

    using CS1  = regbits< type,  1,  1 >;  /**< Clock Source 1  */
    using CS2  = regbits< type,  2,  1 >;  /**< Clock Source 2  */
    using CS3  = regbits< type,  3,  1 >;  /**< Clock Source 3  */
    using CS4  = regbits< type,  4,  1 >;  /**< Clock Source 4  */
    using CS5  = regbits< type,  5,  1 >;  /**< Clock Source 5  */
    using CS6  = regbits< type,  6,  1 >;  /**< Clock Source 6  */
    using CS7  = regbits< type,  7,  1 >;  /**< Clock Source 7  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
