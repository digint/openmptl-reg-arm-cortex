/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Fujitsu/S6E1A1.svd"
//
//  name: S6E1A1
//  version: 1.2
//  description: S6E1A1 Series
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DS_HPP_INCLUDED
#define ARCH_REG_DS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low Power Consumption Mode Registers
 */
struct DS
{
  static constexpr reg_addr_t base_addr = 0x40035100;

  /**
   * Sub Oscillation Circuit Power Supply Control Register
   */
  struct REG_CTL
  : public reg< uint8_t, base_addr + 0x0, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x04 >;

    using ISUBSEL  = regbits< type,  1,  2 >;  /**< Sub oscillation circuit current setting bits  */
  };

  /**
   * Sub Clock Control Register
   */
  struct RCK_CTL
  : public reg< uint8_t, base_addr + 0x4, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x01 >;

    using CECCKE  = regbits< type,  1,  1 >;  /**< CEC clock control bit  */
    using RTCCKE  = regbits< type,  0,  1 >;  /**< RTC clock control bit  */
  };

  /**
   * RTC Mode Control Register
   */
  struct PMD_CTL
  : public reg< uint8_t, base_addr + 0x700, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x700, rw, 0x00 >;

    using RTCE  = regbits< type,  0,  1 >;  /**< RTC mode control bit  */
  };

  /**
   * Deep Standby Return Factor Register 1
   */
  struct WRFSR
  : public reg< uint8_t, base_addr + 0x704, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x704, ro, 0x00 >;

    using WLVDH   = regbits< type,  1,  1 >;  /**< Low-voltage detection reset return bit  */
    using WINITX  = regbits< type,  0,  1 >;  /**< INITX pin input reset return bit        */
  };

  /**
   * Deep Standby Return Factor Register 2
   */
  struct WIFSR
  : public reg< uint16_t, base_addr + 0x708, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x708, ro, 0x0000 >;

    using WCEC1I  = regbits< type,  9,  1 >;  /**< CEC ch.1 interrupt return bit  */
    using WCEC0I  = regbits< type,  8,  1 >;  /**< CEC ch.0 interrupt return bit  */
    using WUI5    = regbits< type,  7,  1 >;  /**< WKUP5 pin input return bit     */
    using WUI4    = regbits< type,  6,  1 >;  /**< WKUP4 pin input return bit     */
    using WUI3    = regbits< type,  5,  1 >;  /**< WKUP3 pin input return bit     */
    using WUI2    = regbits< type,  4,  1 >;  /**< WKUP2 pin input return bit     */
    using WUI1    = regbits< type,  3,  1 >;  /**< WKUP1 pin input return bit     */
    using WUI0    = regbits< type,  2,  1 >;  /**< WKUP0 pin input return bit     */
    using WLVDI   = regbits< type,  1,  1 >;  /**< LVD interrupt return bit       */
    using WRTCI   = regbits< type,  0,  1 >;  /**< RTC interrupt return bit       */
  };

  /**
   * Deep Standby Return Enable Register
   */
  struct WIER
  : public reg< uint16_t, base_addr + 0x70c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x70c, rw, 0x0000 >;

    using WCEC1E  = regbits< type,  9,  1 >;  /**< HDMI-CEC/ Remote Control Reception ch.1 interrupt return enable bit  */
    using WCEC0E  = regbits< type,  8,  1 >;  /**< HDMI-CEC/ Remote Control Reception ch.0 interrupt return enable bit  */
    using WUI5E   = regbits< type,  7,  1 >;  /**< WKUP5 pin input return enable bit                                    */
    using WUI4E   = regbits< type,  6,  1 >;  /**< WKUP4 pin input return enable bit                                    */
    using WUI3E   = regbits< type,  5,  1 >;  /**< WKUP3 pin input return enable bit                                    */
    using WUI2E   = regbits< type,  4,  1 >;  /**< WKUP2 pin input return enable bit                                    */
    using WUI1E   = regbits< type,  3,  1 >;  /**< WKUP1 pin input return enable bit                                    */
    using WLVDE   = regbits< type,  1,  1 >;  /**< LVD interrupt return enable bit                                      */
    using WRTCE   = regbits< type,  0,  1 >;  /**< RTC interrupt return enable bit                                      */
  };

  /**
   * WKUP Pin Input Level Register
   */
  struct WILVR
  : public reg< uint8_t, base_addr + 0x710, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x710, rw, 0x00 >;

    using WUI5LV  = regbits< type,  4,  1 >;  /**< WKUP5 pin input level select bit  */
    using WUI4LV  = regbits< type,  3,  1 >;  /**< WKUP4 pin input level select bit  */
    using WUI3LV  = regbits< type,  2,  1 >;  /**< WKUP3 pin input level select bit  */
    using WUI2LV  = regbits< type,  1,  1 >;  /**< WKUP2 pin input level select bit  */
    using WUI1LV  = regbits< type,  0,  1 >;  /**< WKUP1 pin input level select bit  */
  };

  /**
   * Deep Standby RAM Retention Register
   */
  struct DSRAMR
  : public reg< uint8_t, base_addr + 0x714, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x714, rw, 0x00 >;

    using SRAMR  = regbits< type,  0,  2 >;  /**< On-chip SRAM retention control bits  */
  };

  /**
   * Backup Register 01
   */
  struct BUR01
  : public reg< uint8_t, base_addr + 0x800, rw, 0x00 >
  {
  };

  /**
   * Backup Register 02
   */
  struct BUR02
  : public reg< uint8_t, base_addr + 0x801, rw, 0x00 >
  {
  };

  /**
   * Backup Register 03
   */
  struct BUR03
  : public reg< uint8_t, base_addr + 0x802, rw, 0x00 >
  {
  };

  /**
   * Backup Register 04
   */
  struct BUR04
  : public reg< uint8_t, base_addr + 0x803, rw, 0x00 >
  {
  };

  /**
   * Backup Register 05
   */
  struct BUR05
  : public reg< uint8_t, base_addr + 0x804, rw, 0x00 >
  {
  };

  /**
   * Backup Register 06
   */
  struct BUR06
  : public reg< uint8_t, base_addr + 0x805, rw, 0x00 >
  {
  };

  /**
   * Backup Register 07
   */
  struct BUR07
  : public reg< uint8_t, base_addr + 0x806, rw, 0x00 >
  {
  };

  /**
   * Backup Register 08
   */
  struct BUR08
  : public reg< uint8_t, base_addr + 0x807, rw, 0x00 >
  {
  };

  /**
   * Backup Register 09
   */
  struct BUR09
  : public reg< uint8_t, base_addr + 0x808, rw, 0x00 >
  {
  };

  /**
   * Backup Register 10
   */
  struct BUR10
  : public reg< uint8_t, base_addr + 0x809, rw, 0x00 >
  {
  };

  /**
   * Backup Register 11
   */
  struct BUR11
  : public reg< uint8_t, base_addr + 0x80a, rw, 0x00 >
  {
  };

  /**
   * Backup Register 12
   */
  struct BUR12
  : public reg< uint8_t, base_addr + 0x80b, rw, 0x00 >
  {
  };

  /**
   * Backup Register 13
   */
  struct BUR13
  : public reg< uint8_t, base_addr + 0x80c, rw, 0x00 >
  {
  };

  /**
   * Backup Register 14
   */
  struct BUR14
  : public reg< uint8_t, base_addr + 0x80d, rw, 0x00 >
  {
  };

  /**
   * Backup Register 15
   */
  struct BUR15
  : public reg< uint8_t, base_addr + 0x80e, rw, 0x00 >
  {
  };

  /**
   * Backup Register 16
   */
  struct BUR16
  : public reg< uint8_t, base_addr + 0x80f, rw, 0x00 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_DS_HPP_INCLUDED
