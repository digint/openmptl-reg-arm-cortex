/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Nordic/nrf51.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf51
//  series: nrf51
//  version: 522
//  description: nRF51 reference description for radio MCU with ARM 32-bit Cortex-M0 Microcontroller at 16MHz CPU clock
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MPU_HPP_INCLUDED
#define ARCH_REG_MPU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Memory Protection Unit.
 */
struct MPU
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Configuration of peripherals in mpu regions.
   */
  struct PERR0
  : public reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using POWER_CLOCK  = regbits< type,  0,  1 >;  /**< POWER_CLOCK region configuration.    */
    using RADIO        = regbits< type,  1,  1 >;  /**< RADIO region configuration.          */
    using UART0        = regbits< type,  2,  1 >;  /**< UART0 region configuration.          */
    using SPI0_TWI0    = regbits< type,  3,  1 >;  /**< SPI0 and TWI0 region configuration.  */
    using SPI1_TWI1    = regbits< type,  4,  1 >;  /**< SPI1 and TWI1 region configuration.  */
    using GPIOTE       = regbits< type,  6,  1 >;  /**< GPIOTE region configuration.         */
    using ADC          = regbits< type,  7,  1 >;  /**< ADC region configuration.            */
    using TIMER0       = regbits< type,  8,  1 >;  /**< TIMER0 region configuration.         */
    using TIMER1       = regbits< type,  9,  1 >;  /**< TIMER1 region configuration.         */
    using TIMER2       = regbits< type, 10,  1 >;  /**< TIMER2 region configuration.         */
    using RTC0         = regbits< type, 11,  1 >;  /**< RTC0 region configuration.           */
    using TEMP         = regbits< type, 12,  1 >;  /**< TEMP region configuration.           */
    using RNG          = regbits< type, 13,  1 >;  /**< RNG region configuration.            */
    using ECB          = regbits< type, 14,  1 >;  /**< ECB region configuration.            */
    using CCM_AAR      = regbits< type, 15,  1 >;  /**< CCM and AAR region configuration.    */
    using WDT          = regbits< type, 16,  1 >;  /**< WDT region configuration.            */
    using RTC1         = regbits< type, 17,  1 >;  /**< RTC1 region configuration.           */
    using QDEC         = regbits< type, 18,  1 >;  /**< QDEC region configuration.           */
    using LPCOMP       = regbits< type, 19,  1 >;  /**< LPCOMP region configuration.         */
    using NVMC         = regbits< type, 30,  1 >;  /**< NVMC region configuration.           */
    using PPI          = regbits< type, 31,  1 >;  /**< PPI region configuration.            */
  };

  /**
   * Length of RAM region 0.
   */
  struct RLENR0
  : public reg< uint32_t, base_addr + 0x52c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Erase and write protection bit enable set register.
   */
  struct PROTENSET0
  : public reg< uint32_t, base_addr + 0x600, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PROTREG0   = regbits< type,  0,  1 >;  /**< Protection enable for region 0.   */
    using PROTREG1   = regbits< type,  1,  1 >;  /**< Protection enable for region 1.   */
    using PROTREG2   = regbits< type,  2,  1 >;  /**< Protection enable for region 2.   */
    using PROTREG3   = regbits< type,  3,  1 >;  /**< Protection enable for region 3.   */
    using PROTREG4   = regbits< type,  4,  1 >;  /**< Protection enable for region 4.   */
    using PROTREG5   = regbits< type,  5,  1 >;  /**< Protection enable for region 5.   */
    using PROTREG6   = regbits< type,  6,  1 >;  /**< Protection enable for region 6.   */
    using PROTREG7   = regbits< type,  7,  1 >;  /**< Protection enable for region 7.   */
    using PROTREG8   = regbits< type,  8,  1 >;  /**< Protection enable for region 8.   */
    using PROTREG9   = regbits< type,  9,  1 >;  /**< Protection enable for region 9.   */
    using PROTREG10  = regbits< type, 10,  1 >;  /**< Protection enable for region 10.  */
    using PROTREG11  = regbits< type, 11,  1 >;  /**< Protection enable for region 11.  */
    using PROTREG12  = regbits< type, 12,  1 >;  /**< Protection enable for region 12.  */
    using PROTREG13  = regbits< type, 13,  1 >;  /**< Protection enable for region 13.  */
    using PROTREG14  = regbits< type, 14,  1 >;  /**< Protection enable for region 14.  */
    using PROTREG15  = regbits< type, 15,  1 >;  /**< Protection enable for region 15.  */
    using PROTREG16  = regbits< type, 16,  1 >;  /**< Protection enable for region 16.  */
    using PROTREG17  = regbits< type, 17,  1 >;  /**< Protection enable for region 17.  */
    using PROTREG18  = regbits< type, 18,  1 >;  /**< Protection enable for region 18.  */
    using PROTREG19  = regbits< type, 19,  1 >;  /**< Protection enable for region 19.  */
    using PROTREG20  = regbits< type, 20,  1 >;  /**< Protection enable for region 20.  */
    using PROTREG21  = regbits< type, 21,  1 >;  /**< Protection enable for region 21.  */
    using PROTREG22  = regbits< type, 22,  1 >;  /**< Protection enable for region 22.  */
    using PROTREG23  = regbits< type, 23,  1 >;  /**< Protection enable for region 23.  */
    using PROTREG24  = regbits< type, 24,  1 >;  /**< Protection enable for region 24.  */
    using PROTREG25  = regbits< type, 25,  1 >;  /**< Protection enable for region 25.  */
    using PROTREG26  = regbits< type, 26,  1 >;  /**< Protection enable for region 26.  */
    using PROTREG27  = regbits< type, 27,  1 >;  /**< Protection enable for region 27.  */
    using PROTREG28  = regbits< type, 28,  1 >;  /**< Protection enable for region 28.  */
    using PROTREG29  = regbits< type, 29,  1 >;  /**< Protection enable for region 29.  */
    using PROTREG30  = regbits< type, 30,  1 >;  /**< Protection enable for region 30.  */
    using PROTREG31  = regbits< type, 31,  1 >;  /**< Protection enable for region 31.  */
  };

  /**
   * Erase and write protection bit enable set register.
   */
  struct PROTENSET1
  : public reg< uint32_t, base_addr + 0x604, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x604, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PROTREG32  = regbits< type,  0,  1 >;  /**< Protection enable for region 32.  */
    using PROTREG33  = regbits< type,  1,  1 >;  /**< Protection enable for region 33.  */
    using PROTREG34  = regbits< type,  2,  1 >;  /**< Protection enable for region 34.  */
    using PROTREG35  = regbits< type,  3,  1 >;  /**< Protection enable for region 35.  */
    using PROTREG36  = regbits< type,  4,  1 >;  /**< Protection enable for region 36.  */
    using PROTREG37  = regbits< type,  5,  1 >;  /**< Protection enable for region 37.  */
    using PROTREG38  = regbits< type,  6,  1 >;  /**< Protection enable for region 38.  */
    using PROTREG39  = regbits< type,  7,  1 >;  /**< Protection enable for region 39.  */
    using PROTREG40  = regbits< type,  8,  1 >;  /**< Protection enable for region 40.  */
    using PROTREG41  = regbits< type,  9,  1 >;  /**< Protection enable for region 41.  */
    using PROTREG42  = regbits< type, 10,  1 >;  /**< Protection enable for region 42.  */
    using PROTREG43  = regbits< type, 11,  1 >;  /**< Protection enable for region 43.  */
    using PROTREG44  = regbits< type, 12,  1 >;  /**< Protection enable for region 44.  */
    using PROTREG45  = regbits< type, 13,  1 >;  /**< Protection enable for region 45.  */
    using PROTREG46  = regbits< type, 14,  1 >;  /**< Protection enable for region 46.  */
    using PROTREG47  = regbits< type, 15,  1 >;  /**< Protection enable for region 47.  */
    using PROTREG48  = regbits< type, 16,  1 >;  /**< Protection enable for region 48.  */
    using PROTREG49  = regbits< type, 17,  1 >;  /**< Protection enable for region 49.  */
    using PROTREG50  = regbits< type, 18,  1 >;  /**< Protection enable for region 50.  */
    using PROTREG51  = regbits< type, 19,  1 >;  /**< Protection enable for region 51.  */
    using PROTREG52  = regbits< type, 20,  1 >;  /**< Protection enable for region 52.  */
    using PROTREG53  = regbits< type, 21,  1 >;  /**< Protection enable for region 53.  */
    using PROTREG54  = regbits< type, 22,  1 >;  /**< Protection enable for region 54.  */
    using PROTREG55  = regbits< type, 23,  1 >;  /**< Protection enable for region 55.  */
    using PROTREG56  = regbits< type, 24,  1 >;  /**< Protection enable for region 56.  */
    using PROTREG57  = regbits< type, 25,  1 >;  /**< Protection enable for region 57.  */
    using PROTREG58  = regbits< type, 26,  1 >;  /**< Protection enable for region 58.  */
    using PROTREG59  = regbits< type, 27,  1 >;  /**< Protection enable for region 59.  */
    using PROTREG60  = regbits< type, 28,  1 >;  /**< Protection enable for region 60.  */
    using PROTREG61  = regbits< type, 29,  1 >;  /**< Protection enable for region 61.  */
    using PROTREG62  = regbits< type, 30,  1 >;  /**< Protection enable for region 62.  */
    using PROTREG63  = regbits< type, 31,  1 >;  /**< Protection enable for region 63.  */
  };

  /**
   * Disable erase and write protection mechanism in debug mode.
   */
  struct DISABLEINDEBUG
  : public reg< uint32_t, base_addr + 0x608, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x608, rw, 0x00000001 >;

    // fixme: Field name equals parent register name: DISABLEINDEBUG
    using DISABLEINDEBUG_ = regbits< type,  0,  1 >;  /**< Disable protection mechanism in debug mode.  */
  };

  /**
   * Erase and write protection block size.
   */
  struct PROTBLOCKSIZE
  : public reg< uint32_t, base_addr + 0x60c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x60c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: PROTBLOCKSIZE
    using PROTBLOCKSIZE_ = regbits< type,  0,  2 >;  /**< Erase and write protection block size.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MPU_HPP_INCLUDED
