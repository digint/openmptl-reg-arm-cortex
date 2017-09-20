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
//  Import from CMSIS-SVD: "STMicro/STM32F103xx.svd"
//
//  name: STM32F103xx
//  version: 1.3
//  description: STM32F103xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_BKP_HPP_INCLUDED
#define ARCH_REG_BKP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Backup registers
 */
struct BKP
{
  static constexpr reg_addr_t base_addr = 0x40006c04;

  /**
   * Backup data register (BKP_DR)
   */
  struct DR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using D1  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using D2  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR3
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using D3  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR4
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using D4  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR5
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using D5  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR6
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using D6  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR7
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using D7  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR8
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using D8  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR9
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using D9  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR10
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using D10  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR11
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: DR11
    using DR11_ = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR12
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: DR12
    using DR12_ = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR13
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: DR13
    using DR13_ = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR14
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using D14  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR15
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using D15  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR16
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using D16  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR17
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using D17  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR18
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using D18  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR19
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using D19  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR20
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using D20  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR21
  : public reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >;

    using D21  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR22
  : public reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >;

    using D22  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR23
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >;

    using D23  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR24
  : public reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >;

    using D24  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR25
  : public reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >;

    using D25  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR26
  : public reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >;

    using D26  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR27
  : public reg< uint32_t, base_addr + 0x7c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0x00000000 >;

    using D27  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR28
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using D28  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR29
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >;

    using D29  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR30
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using D30  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR31
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >;

    using D31  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR32
  : public reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >;

    using D32  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR33
  : public reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >;

    using D33  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR34
  : public reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >;

    using D34  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR35
  : public reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >;

    using D35  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR36
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >;

    using D36  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR37
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >;

    using D37  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR38
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >;

    using D38  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR39
  : public reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >;

    using D39  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR40
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >;

    using D40  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR41
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >;

    using D41  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * Backup data register (BKP_DR)
   */
  struct DR42
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >;

    using D42  = regbits< type,  0, 16 >;  /**< Backup data  */
  };

  /**
   * RTC clock calibration register (BKP_RTCCR)
   */
  struct RTCCR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using CAL   = regbits< type,  0,  7 >;  /**< Calibration value                 */
    using CCO   = regbits< type,  7,  1 >;  /**< Calibration Clock Output          */
    using ASOE  = regbits< type,  8,  1 >;  /**< Alarm or second output enable     */
    using ASOS  = regbits< type,  9,  1 >;  /**< Alarm or second output selection  */
  };

  /**
   * Backup control register (BKP_CR)
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using TPE   = regbits< type,  0,  1 >;  /**< Tamper pin enable        */
    using TPAL  = regbits< type,  1,  1 >;  /**< Tamper pin active level  */
  };

  /**
   * BKP_CSR control/status register (BKP_CSR)
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using CTE   = regbits< type,  0,  1 >;  /**< Clear Tamper event           */
    using CTI   = regbits< type,  1,  1 >;  /**< Clear Tamper Interrupt       */
    using TPIE  = regbits< type,  2,  1 >;  /**< Tamper Pin interrupt enable  */
    using TEF   = regbits< type,  8,  1 >;  /**< Tamper Event Flag            */
    using TIF   = regbits< type,  9,  1 >;  /**< Tamper Interrupt Flag        */
  };
};
} // namespace mptl

#endif // ARCH_REG_BKP_HPP_INCLUDED
