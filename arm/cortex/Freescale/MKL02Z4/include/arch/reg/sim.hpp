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
//  Import from CMSIS-SVD: "Freescale/MKL02Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL02Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL02Z4 Freescale Microcontroller
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
  static constexpr reg_addr_t base_addr = 0x40047000;

  /**
   * System Options Register 2
   */
  struct SOPT2
  : public reg< uint32_t, base_addr + 0x1004, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0 >;

    using TPMSRC    = regbits< type, 24,  2 >;  /**< TPM clock source select    */
    using UART0SRC  = regbits< type, 26,  2 >;  /**< UART0 clock source select  */
  };

  /**
   * System Options Register 4
   */
  struct SOPT4
  : public reg< uint32_t, base_addr + 0x100c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100c, rw, 0 >;

    using TPM1CH0SRC  = regbits< type, 18,  1 >;  /**< TPM1 channel 0 input capture source select  */
    using TPM0CLKSEL  = regbits< type, 24,  1 >;  /**< TPM0 External Clock Pin Select              */
    using TPM1CLKSEL  = regbits< type, 25,  1 >;  /**< TPM1 External Clock Pin Select              */
  };

  /**
   * System Options Register 5
   */
  struct SOPT5
  : public reg< uint32_t, base_addr + 0x1010, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0 >;

    using UART0TXSRC  = regbits< type,  0,  1 >;  /**< UART0 transmit data source select  */
    using UART0RXSRC  = regbits< type,  2,  1 >;  /**< UART0 receive data source select   */
    using UART0ODE    = regbits< type, 16,  1 >;  /**< UART0 Open Drain Enable            */
  };

  /**
   * System Options Register 7
   */
  struct SOPT7
  : public reg< uint32_t, base_addr + 0x1018, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1018, rw, 0 >;

    using ADC0TRGSEL     = regbits< type,  0,  4 >;  /**< ADC0 trigger select            */
    using ADC0PRETRGSEL  = regbits< type,  4,  1 >;  /**< ADC0 pretrigger select         */
    using ADC0ALTTRGEN   = regbits< type,  7,  1 >;  /**< ADC0 alternate trigger enable  */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0x100600 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0x100600 >;

    using PINID     = regbits< type,  0,  4 >;  /**< Pincount identification  */
    using DIEID     = regbits< type,  7,  5 >;  /**< Device die number        */
    using REVID     = regbits< type, 12,  4 >;  /**< Device revision number   */
    using SRAMSIZE  = regbits< type, 16,  4 >;  /**< System SRAM Size         */
    using SERIESID  = regbits< type, 20,  4 >;  /**< Kinetis Series ID        */
    using SUBFAMID  = regbits< type, 24,  4 >;  /**< Kinetis Sub-Family ID    */
    using FAMID     = regbits< type, 28,  4 >;  /**< Kinetis family ID        */
  };

  /**
   * System Clock Gating Control Register 4
   */
  struct SCGC4
  : public reg< uint32_t, base_addr + 0x1034, rw, 0xE0000030 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0xE0000030 >;

    using I2C0   = regbits< type,  6,  1 >;  /**< I2C0 Clock Gate Control        */
    using I2C1   = regbits< type,  7,  1 >;  /**< I2C1 Clock Gate Control        */
    using UART0  = regbits< type, 10,  1 >;  /**< UART0 Clock Gate Control       */
    using CMP    = regbits< type, 19,  1 >;  /**< Comparator Clock Gate Control  */
    using SPI0   = regbits< type, 22,  1 >;  /**< SPI0 Clock Gate Control        */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0x180 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0x180 >;

    using LPTMR  = regbits< type,  0,  1 >;  /**< Low Power Timer Access Control  */
    using PORTA  = regbits< type,  9,  1 >;  /**< Port A Clock Gate Control       */
    using PORTB  = regbits< type, 10,  1 >;  /**< Port B Clock Gate Control       */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0x1 >;

    using FTF   = regbits< type,  0,  1 >;  /**< Flash Memory Clock Gate Control  */
    using TPM0  = regbits< type, 24,  1 >;  /**< TPM0 Clock Gate Control          */
    using TPM1  = regbits< type, 25,  1 >;  /**< TPM1 Clock Gate Control          */
    using ADC0  = regbits< type, 27,  1 >;  /**< ADC0 Clock Gate Control          */
  };

  /**
   * System Clock Divider Register 1
   */
  struct CLKDIV1
  : public reg< uint32_t, base_addr + 0x1044, rw, 0x10000 >
  {
    using type = reg< uint32_t, base_addr + 0x1044, rw, 0x10000 >;

    using OUTDIV4  = regbits< type, 16,  3 >;  /**< Clock 4 output divider value  */
    using OUTDIV1  = regbits< type, 28,  4 >;  /**< Clock 1 output divider value  */
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
    using PFSIZE     = regbits< type, 24,  4 >;  /**< Program flash size  */
  };

  /**
   * Flash Configuration Register 2
   */
  struct FCFG2
  : public reg< uint32_t, base_addr + 0x1050, ro, 0x7F800000 >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0x7F800000 >;

    using MAXADDR0  = regbits< type, 24,  7 >;  /**< Max address block  */
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
   * COP Control Register
   */
  struct COPC
  : public reg< uint32_t, base_addr + 0x1100, rw, 0xC >
  {
    using type = reg< uint32_t, base_addr + 0x1100, rw, 0xC >;

    using COPW     = regbits< type,  0,  1 >;  /**< COP windowed mode     */
    using COPCLKS  = regbits< type,  1,  1 >;  /**< COP Clock Select      */
    using COPT     = regbits< type,  2,  2 >;  /**< COP Watchdog Timeout  */
  };

  /**
   * Service COP Register
   */
  struct SRVCOP
  : public reg< uint32_t, base_addr + 0x1104, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1104, wo, 0 >;

    // fixme: Field name equals parent register name: SRVCOP
    using SRVCOP_ = regbits< type,  0,  8 >;  /**< Sevice COP Register  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
