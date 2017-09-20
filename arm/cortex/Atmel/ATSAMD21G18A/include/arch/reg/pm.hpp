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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21G18A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21G18A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21G18A device: Cortex-M0+ Microcontroller with 256KB Flash, 32KB SRAM, 48-pin package (refer to http://www.atmel.com/devices/SAMD21G18A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PM_HPP_INCLUDED
#define ARCH_REG_PM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power Manager
 */
struct PM
{
  static constexpr reg_addr_t base_addr = 0x40000400;

  /**
   * AHB Mask
   */
  struct AHBMASK
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000007F >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000007F >;

    using HPB0     = regbits< type,  0,  1 >;  /**< HPB0 AHB Clock Enable     */
    using HPB1     = regbits< type,  1,  1 >;  /**< HPB1 AHB Clock Enable     */
    using HPB2     = regbits< type,  2,  1 >;  /**< HPB2 AHB Clock Enable     */
    using DSU      = regbits< type,  3,  1 >;  /**< DSU AHB Clock Enable      */
    using NVMCTRL  = regbits< type,  4,  1 >;  /**< NVMCTRL AHB Clock Enable  */
    using DMAC     = regbits< type,  5,  1 >;  /**< DMAC AHB Clock Enable     */
    using USB      = regbits< type,  6,  1 >;  /**< USB AHB Clock Enable      */
  };

  /**
   * APBA Mask
   */
  struct APBAMASK
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0000007F >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0000007F >;

    using PAC0     = regbits< type,  0,  1 >;  /**< PAC0 APB Clock Enable     */
    using PM       = regbits< type,  1,  1 >;  /**< PM APB Clock Enable       */
    using SYSCTRL  = regbits< type,  2,  1 >;  /**< SYSCTRL APB Clock Enable  */
    using GCLK     = regbits< type,  3,  1 >;  /**< GCLK APB Clock Enable     */
    using WDT      = regbits< type,  4,  1 >;  /**< WDT APB Clock Enable      */
    using RTC      = regbits< type,  5,  1 >;  /**< RTC APB Clock Enable      */
    using EIC      = regbits< type,  6,  1 >;  /**< EIC APB Clock Enable      */
  };

  /**
   * APBA Clock Select
   */
  struct APBASEL
  : public reg< uint8_t, base_addr + 0x09, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x09, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using APBADIV  = regbits< type,  0,  3 >;  /**< APBA Prescaler Selection  */
  };

  /**
   * APBB Mask
   */
  struct APBBMASK
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x0000007F >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x0000007F >;

    using PAC1     = regbits< type,  0,  1 >;  /**< PAC1 APB Clock Enable     */
    using DSU      = regbits< type,  1,  1 >;  /**< DSU APB Clock Enable      */
    using NVMCTRL  = regbits< type,  2,  1 >;  /**< NVMCTRL APB Clock Enable  */
    using PORT     = regbits< type,  3,  1 >;  /**< PORT APB Clock Enable     */
    using DMAC     = regbits< type,  4,  1 >;  /**< DMAC APB Clock Enable     */
    using USB      = regbits< type,  5,  1 >;  /**< USB APB Clock Enable      */
  };

  /**
   * APBB Clock Select
   */
  struct APBBSEL
  : public reg< uint8_t, base_addr + 0x0a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using APBBDIV  = regbits< type,  0,  3 >;  /**< APBB Prescaler Selection  */
  };

  /**
   * APBC Mask
   */
  struct APBCMASK
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00010000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00010000 >;

    using PAC2     = regbits< type,  0,  1 >;  /**< PAC2 APB Clock Enable     */
    using EVSYS    = regbits< type,  1,  1 >;  /**< EVSYS APB Clock Enable    */
    using SERCOM0  = regbits< type,  2,  1 >;  /**< SERCOM0 APB Clock Enable  */
    using SERCOM1  = regbits< type,  3,  1 >;  /**< SERCOM1 APB Clock Enable  */
    using SERCOM2  = regbits< type,  4,  1 >;  /**< SERCOM2 APB Clock Enable  */
    using SERCOM3  = regbits< type,  5,  1 >;  /**< SERCOM3 APB Clock Enable  */
    using SERCOM4  = regbits< type,  6,  1 >;  /**< SERCOM4 APB Clock Enable  */
    using SERCOM5  = regbits< type,  7,  1 >;  /**< SERCOM5 APB Clock Enable  */
    using TCC0     = regbits< type,  8,  1 >;  /**< TCC0 APB Clock Enable     */
    using TCC1     = regbits< type,  9,  1 >;  /**< TCC1 APB Clock Enable     */
    using TCC2     = regbits< type, 10,  1 >;  /**< TCC2 APB Clock Enable     */
    using TC3      = regbits< type, 11,  1 >;  /**< TC3 APB Clock Enable      */
    using TC4      = regbits< type, 12,  1 >;  /**< TC4 APB Clock Enable      */
    using TC5      = regbits< type, 13,  1 >;  /**< TC5 APB Clock Enable      */
    using ADC      = regbits< type, 16,  1 >;  /**< ADC APB Clock Enable      */
    using AC       = regbits< type, 17,  1 >;  /**< AC APB Clock Enable       */
    using DAC      = regbits< type, 18,  1 >;  /**< DAC APB Clock Enable      */
    using I2S      = regbits< type, 20,  1 >;  /**< I2S APB Clock Enable      */
    using ATW      = regbits< type, 23,  1 >;  /**< ATW APB Clock Enable      */
  };

  /**
   * APBC Clock Select
   */
  struct APBCSEL
  : public reg< uint8_t, base_addr + 0x0b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using APBCDIV  = regbits< type,  0,  3 >;  /**< APBC Prescaler Selection  */
  };

  /**
   * CPU Clock Select
   */
  struct CPUSEL
  : public reg< uint8_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CPUDIV  = regbits< type,  0,  3 >;  /**< CPU Prescaler Selection  */
  };

  /**
   * Control
   */
  struct CTRL
  : public reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CFDEN    = regbits< type,  2,  1 >;  /**< Clock Failure Detector Enable  */
    using BKUPCLK  = regbits< type,  4,  1 >;  /**< Backup Clock Select            */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint8_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CKRDY  = regbits< type,  0,  1 >;  /**< Clock Ready Interrupt Enable             */
    using CFD    = regbits< type,  1,  1 >;  /**< Clock Failure Detector Interrupt Enable  */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint8_t, base_addr + 0x35, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x35, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CKRDY  = regbits< type,  0,  1 >;  /**< Clock Ready Interrupt Enable             */
    using CFD    = regbits< type,  1,  1 >;  /**< Clock Failure Detector Interrupt Enable  */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint8_t, base_addr + 0x36, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x36, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CKRDY  = regbits< type,  0,  1 >;  /**< Clock Ready             */
    using CFD    = regbits< type,  1,  1 >;  /**< Clock Failure Detector  */
  };

  /**
   * Reset Cause
   */
  struct RCAUSE
  : public reg< uint8_t, base_addr + 0x38, ro, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x38, ro, 0x01 >;

    using POR    = regbits< type,  0,  1 >;  /**< Power On Reset               */
    using BOD12  = regbits< type,  1,  1 >;  /**< Brown Out 12 Detector Reset  */
    using BOD33  = regbits< type,  2,  1 >;  /**< Brown Out 33 Detector Reset  */
    using EXT    = regbits< type,  4,  1 >;  /**< External Reset               */
    using WDT    = regbits< type,  5,  1 >;  /**< Watchdog Reset               */
    using SYST   = regbits< type,  6,  1 >;  /**< System Reset Request         */
  };

  /**
   * Sleep Mode
   */
  struct SLEEP
  : public reg< uint8_t, base_addr + 0x01, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x01, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IDLE  = regbits< type,  0,  2 >;  /**< Idle Mode Configuration  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PM_HPP_INCLUDED
