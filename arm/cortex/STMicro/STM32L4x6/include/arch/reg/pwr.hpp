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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWR_HPP_INCLUDED
#define ARCH_REG_PWR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power control
 */
struct PWR
{
  static constexpr reg_addr_t base_addr = 0x40007000;

  /**
   * Power control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000200 >;

    using LPR   = regbits< type, 14,  1 >;  /**< Low-power run                           */
    using VOS   = regbits< type,  9,  2 >;  /**< Voltage scaling range selection         */
    using DBP   = regbits< type,  8,  1 >;  /**< Disable backup domain write protection  */
    using LPMS  = regbits< type,  0,  3 >;  /**< Low-power mode selection                */
  };

  /**
   * Power control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using USV    = regbits< type, 10,  1 >;  /**< VDDUSB USB supply valid                                  */
    using IOSV   = regbits< type,  9,  1 >;  /**< VDDIO2 Independent I/Os supply valid                     */
    using PVME4  = regbits< type,  7,  1 >;  /**< Peripheral voltage monitoring 4 enable: VDDA vs. 2.2V    */
    using PVME3  = regbits< type,  6,  1 >;  /**< Peripheral voltage monitoring 3 enable: VDDA vs. 1.62V   */
    using PVME2  = regbits< type,  5,  1 >;  /**< Peripheral voltage monitoring 2 enable: VDDIO2 vs. 0.9V  */
    using PVME1  = regbits< type,  4,  1 >;  /**< Peripheral voltage monitoring 1 enable: VDDUSB vs. 1.2V  */
    using PLS    = regbits< type,  1,  3 >;  /**< Power voltage detector level selection                   */
    using PVDE   = regbits< type,  0,  1 >;  /**< Power voltage detector enable                            */
  };

  /**
   * Power control register 3
   */
  struct CR3
  : public reg< uint32_t, base_addr + 0x8, rw, 0X00008000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0X00008000 >;

    using EWF    = regbits< type, 15,  1 >;  /**< Enable internal wakeup line                */
    using APC    = regbits< type, 10,  1 >;  /**< Apply pull-up and pull-down configuration  */
    using RRS    = regbits< type,  8,  1 >;  /**< SRAM2 retention in Standby mode            */
    using EWUP5  = regbits< type,  4,  1 >;  /**< Enable Wakeup pin WKUP5                    */
    using EWUP4  = regbits< type,  3,  1 >;  /**< Enable Wakeup pin WKUP4                    */
    using EWUP3  = regbits< type,  2,  1 >;  /**< Enable Wakeup pin WKUP3                    */
    using EWUP2  = regbits< type,  1,  1 >;  /**< Enable Wakeup pin WKUP2                    */
    using EWUP1  = regbits< type,  0,  1 >;  /**< Enable Wakeup pin WKUP1                    */
  };

  /**
   * Power control register 4
   */
  struct CR4
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using VBRS  = regbits< type,  9,  1 >;  /**< VBAT battery charging resistor selection  */
    using VBE   = regbits< type,  8,  1 >;  /**< VBAT battery charging enable              */
    using WP5   = regbits< type,  4,  1 >;  /**< Wakeup pin WKUP5 polarity                 */
    using WP4   = regbits< type,  3,  1 >;  /**< Wakeup pin WKUP4 polarity                 */
    using WP3   = regbits< type,  2,  1 >;  /**< Wakeup pin WKUP3 polarity                 */
    using WP2   = regbits< type,  1,  1 >;  /**< Wakeup pin WKUP2 polarity                 */
    using WP1   = regbits< type,  0,  1 >;  /**< Wakeup pin WKUP1 polarity                 */
  };

  /**
   * Power status register 1
   */
  struct SR1
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    using WUFI   = regbits< type, 15,  1 >;  /**< Wakeup flag internal  */
    using CSBF   = regbits< type,  8,  1 >;  /**< Standby flag          */
    using CWUF5  = regbits< type,  4,  1 >;  /**< Wakeup flag 5         */
    using CWUF4  = regbits< type,  3,  1 >;  /**< Wakeup flag 4         */
    using CWUF3  = regbits< type,  2,  1 >;  /**< Wakeup flag 3         */
    using CWUF2  = regbits< type,  1,  1 >;  /**< Wakeup flag 2         */
    using CWUF1  = regbits< type,  0,  1 >;  /**< Wakeup flag 1         */
  };

  /**
   * Power status register 2
   */
  struct SR2
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    using PVMO4   = regbits< type, 15,  1 >;  /**< Peripheral voltage monitoring output: VDDA vs. 2.2 V    */
    using PVMO3   = regbits< type, 14,  1 >;  /**< Peripheral voltage monitoring output: VDDA vs. 1.62 V   */
    using PVMO2   = regbits< type, 13,  1 >;  /**< Peripheral voltage monitoring output: VDDIO2 vs. 0.9 V  */
    using PVMO1   = regbits< type, 12,  1 >;  /**< Peripheral voltage monitoring output: VDDUSB vs. 1.2 V  */
    using PVDO    = regbits< type, 11,  1 >;  /**< Power voltage detector output                           */
    using VOSF    = regbits< type, 10,  1 >;  /**< Voltage scaling flag                                    */
    using REGLPF  = regbits< type,  9,  1 >;  /**< Low-power regulator flag                                */
    using REGLPS  = regbits< type,  8,  1 >;  /**< Low-power regulator started                             */
  };

  /**
   * Power status clear register
   */
  struct SCR
  : public reg< uint32_t, base_addr + 0x18, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, wo, 0x00000000 >;

    using SBF   = regbits< type,  8,  1 >;  /**< Clear standby flag   */
    using WUF5  = regbits< type,  4,  1 >;  /**< Clear wakeup flag 5  */
    using WUF4  = regbits< type,  3,  1 >;  /**< Clear wakeup flag 4  */
    using WUF3  = regbits< type,  2,  1 >;  /**< Clear wakeup flag 3  */
    using WUF2  = regbits< type,  1,  1 >;  /**< Clear wakeup flag 2  */
    using WUF1  = regbits< type,  0,  1 >;  /**< Clear wakeup flag 1  */
  };

  /**
   * Power Port A pull-up control register
   */
  struct PUCRA
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using PU15  = regbits< type, 15,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU14  = regbits< type, 14,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU13  = regbits< type, 13,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU12  = regbits< type, 12,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU11  = regbits< type, 11,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU10  = regbits< type, 10,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU9   = regbits< type,  9,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU8   = regbits< type,  8,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU7   = regbits< type,  7,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU6   = regbits< type,  6,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU5   = regbits< type,  5,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU4   = regbits< type,  4,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU3   = regbits< type,  3,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU2   = regbits< type,  2,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU1   = regbits< type,  1,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
    using PU0   = regbits< type,  0,  1 >;  /**< Port A pull-up bit y (y=0..15)  */
  };

  /**
   * Power Port A pull-down control register
   */
  struct PDCRA
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using PD15  = regbits< type, 15,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD14  = regbits< type, 14,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD13  = regbits< type, 13,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD12  = regbits< type, 12,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD11  = regbits< type, 11,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD10  = regbits< type, 10,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD9   = regbits< type,  9,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD8   = regbits< type,  8,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD7   = regbits< type,  7,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD6   = regbits< type,  6,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD5   = regbits< type,  5,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD4   = regbits< type,  4,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD3   = regbits< type,  3,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD2   = regbits< type,  2,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD1   = regbits< type,  1,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
    using PD0   = regbits< type,  0,  1 >;  /**< Port A pull-down bit y (y=0..15)  */
  };

  /**
   * Power Port B pull-up control register
   */
  struct PUCRB
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using PU15  = regbits< type, 15,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU14  = regbits< type, 14,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU13  = regbits< type, 13,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU12  = regbits< type, 12,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU11  = regbits< type, 11,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU10  = regbits< type, 10,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU9   = regbits< type,  9,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU8   = regbits< type,  8,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU7   = regbits< type,  7,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU6   = regbits< type,  6,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU5   = regbits< type,  5,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU4   = regbits< type,  4,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU3   = regbits< type,  3,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU2   = regbits< type,  2,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU1   = regbits< type,  1,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
    using PU0   = regbits< type,  0,  1 >;  /**< Port B pull-up bit y (y=0..15)  */
  };

  /**
   * Power Port B pull-down control register
   */
  struct PDCRB
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using PD15  = regbits< type, 15,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD14  = regbits< type, 14,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD13  = regbits< type, 13,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD12  = regbits< type, 12,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD11  = regbits< type, 11,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD10  = regbits< type, 10,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD9   = regbits< type,  9,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD8   = regbits< type,  8,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD7   = regbits< type,  7,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD6   = regbits< type,  6,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD5   = regbits< type,  5,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD4   = regbits< type,  4,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD3   = regbits< type,  3,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD2   = regbits< type,  2,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD1   = regbits< type,  1,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
    using PD0   = regbits< type,  0,  1 >;  /**< Port B pull-down bit y (y=0..15)  */
  };

  /**
   * Power Port C pull-up control register
   */
  struct PUCRC
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using PU15  = regbits< type, 15,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU14  = regbits< type, 14,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU13  = regbits< type, 13,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU12  = regbits< type, 12,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU11  = regbits< type, 11,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU10  = regbits< type, 10,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU9   = regbits< type,  9,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU8   = regbits< type,  8,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU7   = regbits< type,  7,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU6   = regbits< type,  6,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU5   = regbits< type,  5,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU4   = regbits< type,  4,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU3   = regbits< type,  3,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU2   = regbits< type,  2,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU1   = regbits< type,  1,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
    using PU0   = regbits< type,  0,  1 >;  /**< Port C pull-up bit y (y=0..15)  */
  };

  /**
   * Power Port C pull-down control register
   */
  struct PDCRC
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using PD15  = regbits< type, 15,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD14  = regbits< type, 14,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD13  = regbits< type, 13,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD12  = regbits< type, 12,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD11  = regbits< type, 11,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD10  = regbits< type, 10,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD9   = regbits< type,  9,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD8   = regbits< type,  8,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD7   = regbits< type,  7,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD6   = regbits< type,  6,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD5   = regbits< type,  5,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD4   = regbits< type,  4,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD3   = regbits< type,  3,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD2   = regbits< type,  2,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD1   = regbits< type,  1,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
    using PD0   = regbits< type,  0,  1 >;  /**< Port C pull-down bit y (y=0..15)  */
  };

  /**
   * Power Port D pull-up control register
   */
  struct PUCRD
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using PU15  = regbits< type, 15,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU14  = regbits< type, 14,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU13  = regbits< type, 13,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU12  = regbits< type, 12,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU11  = regbits< type, 11,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU10  = regbits< type, 10,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU9   = regbits< type,  9,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU8   = regbits< type,  8,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU7   = regbits< type,  7,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU6   = regbits< type,  6,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU5   = regbits< type,  5,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU4   = regbits< type,  4,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU3   = regbits< type,  3,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU2   = regbits< type,  2,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU1   = regbits< type,  1,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
    using PU0   = regbits< type,  0,  1 >;  /**< Port D pull-up bit y (y=0..15)  */
  };

  /**
   * Power Port D pull-down control register
   */
  struct PDCRD
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using PD15  = regbits< type, 15,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD14  = regbits< type, 14,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD13  = regbits< type, 13,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD12  = regbits< type, 12,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD11  = regbits< type, 11,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD10  = regbits< type, 10,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD9   = regbits< type,  9,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD8   = regbits< type,  8,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD7   = regbits< type,  7,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD6   = regbits< type,  6,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD5   = regbits< type,  5,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD4   = regbits< type,  4,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD3   = regbits< type,  3,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD2   = regbits< type,  2,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD1   = regbits< type,  1,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
    using PD0   = regbits< type,  0,  1 >;  /**< Port D pull-down bit y (y=0..15)  */
  };

  /**
   * Power Port E pull-up control register
   */
  struct PUCRE
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using PU15  = regbits< type, 15,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU14  = regbits< type, 14,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU13  = regbits< type, 13,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU12  = regbits< type, 12,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU11  = regbits< type, 11,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU10  = regbits< type, 10,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU9   = regbits< type,  9,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU8   = regbits< type,  8,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU7   = regbits< type,  7,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU6   = regbits< type,  6,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU5   = regbits< type,  5,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU4   = regbits< type,  4,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU3   = regbits< type,  3,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU2   = regbits< type,  2,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU1   = regbits< type,  1,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
    using PU0   = regbits< type,  0,  1 >;  /**< Port E pull-up bit y (y=0..15)  */
  };

  /**
   * Power Port E pull-down control register
   */
  struct PDCRE
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using PD15  = regbits< type, 15,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD14  = regbits< type, 14,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD13  = regbits< type, 13,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD12  = regbits< type, 12,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD11  = regbits< type, 11,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD10  = regbits< type, 10,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD9   = regbits< type,  9,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD8   = regbits< type,  8,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD7   = regbits< type,  7,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD6   = regbits< type,  6,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD5   = regbits< type,  5,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD4   = regbits< type,  4,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD3   = regbits< type,  3,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD2   = regbits< type,  2,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD1   = regbits< type,  1,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
    using PD0   = regbits< type,  0,  1 >;  /**< Port E pull-down bit y (y=0..15)  */
  };

  /**
   * Power Port F pull-up control register
   */
  struct PUCRF
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using PU15  = regbits< type, 15,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU14  = regbits< type, 14,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU13  = regbits< type, 13,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU12  = regbits< type, 12,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU11  = regbits< type, 11,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU10  = regbits< type, 10,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU9   = regbits< type,  9,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU8   = regbits< type,  8,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU7   = regbits< type,  7,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU6   = regbits< type,  6,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU5   = regbits< type,  5,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU4   = regbits< type,  4,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU3   = regbits< type,  3,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU2   = regbits< type,  2,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU1   = regbits< type,  1,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
    using PU0   = regbits< type,  0,  1 >;  /**< Port F pull-up bit y (y=0..15)  */
  };

  /**
   * Power Port F pull-down control register
   */
  struct PDCRF
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using PD15  = regbits< type, 15,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD14  = regbits< type, 14,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD13  = regbits< type, 13,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD12  = regbits< type, 12,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD11  = regbits< type, 11,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD10  = regbits< type, 10,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD9   = regbits< type,  9,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD8   = regbits< type,  8,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD7   = regbits< type,  7,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD6   = regbits< type,  6,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD5   = regbits< type,  5,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD4   = regbits< type,  4,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD3   = regbits< type,  3,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD2   = regbits< type,  2,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD1   = regbits< type,  1,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
    using PD0   = regbits< type,  0,  1 >;  /**< Port F pull-down bit y (y=0..15)  */
  };

  /**
   * Power Port G pull-up control register
   */
  struct PUCRG
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using PU15  = regbits< type, 15,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU14  = regbits< type, 14,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU13  = regbits< type, 13,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU12  = regbits< type, 12,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU11  = regbits< type, 11,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU10  = regbits< type, 10,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU9   = regbits< type,  9,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU8   = regbits< type,  8,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU7   = regbits< type,  7,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU6   = regbits< type,  6,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU5   = regbits< type,  5,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU4   = regbits< type,  4,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU3   = regbits< type,  3,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU2   = regbits< type,  2,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU1   = regbits< type,  1,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
    using PU0   = regbits< type,  0,  1 >;  /**< Port G pull-up bit y (y=0..15)  */
  };

  /**
   * Power Port G pull-down control register
   */
  struct PDCRG
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using PD15  = regbits< type, 15,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD14  = regbits< type, 14,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD13  = regbits< type, 13,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD12  = regbits< type, 12,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD11  = regbits< type, 11,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD10  = regbits< type, 10,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD9   = regbits< type,  9,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD8   = regbits< type,  8,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD7   = regbits< type,  7,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD6   = regbits< type,  6,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD5   = regbits< type,  5,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD4   = regbits< type,  4,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD3   = regbits< type,  3,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD2   = regbits< type,  2,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD1   = regbits< type,  1,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
    using PD0   = regbits< type,  0,  1 >;  /**< Port G pull-down bit y (y=0..15)  */
  };

  /**
   * Power Port H pull-up control register
   */
  struct PUCRH
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using PU1  = regbits< type,  1,  1 >;  /**< Port H pull-up bit y (y=0..1)  */
    using PU0  = regbits< type,  0,  1 >;  /**< Port H pull-up bit y (y=0..1)  */
  };

  /**
   * Power Port H pull-down control register
   */
  struct PDCRH
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using PD1  = regbits< type,  1,  1 >;  /**< Port H pull-down bit y (y=0..1)  */
    using PD0  = regbits< type,  0,  1 >;  /**< Port H pull-down bit y (y=0..1)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWR_HPP_INCLUDED
