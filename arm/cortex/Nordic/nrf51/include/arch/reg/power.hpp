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

#ifndef ARCH_REG_POWER_HPP_INCLUDED
#define ARCH_REG_POWER_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power Control.
 */
struct POWER
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Enable constant latency mode.
   */
  struct TASKS_CONSTLAT
  : public reg< uint32_t, base_addr + 0x078, wo, 0 >
  {
  };

  /**
   * Enable low power mode (variable latency).
   */
  struct TASKS_LOWPWR
  : public reg< uint32_t, base_addr + 0x07c, wo, 0 >
  {
  };

  /**
   * Power failure warning.
   */
  struct EVENTS_POFWARN
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using POFWARN  = regbits< type,  2,  1 >;  /**< Enable interrupt on POFWARN event.  */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using POFWARN  = regbits< type,  2,  1 >;  /**< Disable interrupt on POFWARN event.  */
  };

  /**
   * Reset reason.
   */
  struct RESETREAS
  : public reg< uint32_t, base_addr + 0x400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RESETPIN  = regbits< type,  0,  1 >;  /**< Reset from pin-reset detected.                                                         */
    using DOG       = regbits< type,  1,  1 >;  /**< Reset from watchdog detected.                                                          */
    using SREQ      = regbits< type,  2,  1 >;  /**< Reset from AIRCR.SYSRESETREQ detected.                                                 */
    using LOCKUP    = regbits< type,  3,  1 >;  /**< Reset from CPU lock-up detected.                                                       */
    using OFF       = regbits< type, 16,  1 >;  /**< Reset from wake-up from OFF mode detected by the use of DETECT signal from GPIO.       */
    using LPCOMP    = regbits< type, 17,  1 >;  /**< Reset from wake-up from OFF mode detected by the use of ANADETECT signal from LPCOMP.  */
    using DIF       = regbits< type, 18,  1 >;  /**< Reset from wake-up from OFF mode detected by entering into debug interface mode.       */
  };

  /**
   * Ram status register.
   */
  struct RAMSTATUS
  : public reg< uint32_t, base_addr + 0x428, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x428, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RAMBLOCK0  = regbits< type,  0,  1 >;  /**< RAM block 0 status.  */
    using RAMBLOCK1  = regbits< type,  1,  1 >;  /**< RAM block 1 status.  */
    using RAMBLOCK2  = regbits< type,  2,  1 >;  /**< RAM block 2 status.  */
    using RAMBLOCK3  = regbits< type,  3,  1 >;  /**< RAM block 3 status.  */
  };

  /**
   * System off register.
   */
  struct SYSTEMOFF
  : public reg< uint32_t, base_addr + 0x500, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x500, wo, 0 >;

    // fixme: Field name equals parent register name: SYSTEMOFF
    using SYSTEMOFF_ = regbits< type,  0,  1 >;  /**< Enter system off mode.  */
  };

  /**
   * Power failure configuration.
   */
  struct POFCON
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using POF        = regbits< type,  0,  1 >;  /**< Power failure comparator enable.  */
    using THRESHOLD  = regbits< type,  1,  2 >;  /**< Set threshold level.              */
  };

  /**
   * General purpose retention register. This register is a retained register.
   */
  struct GPREGRET
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: GPREGRET
    using GPREGRET_ = regbits< type,  0,  8 >;  /**< General purpose retention register.  */
  };

  /**
   * Ram on/off.
   */
  struct RAMON
  : public reg< uint32_t, base_addr + 0x524, rw, 0x00000003 >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0x00000003 >;

    using ONRAM0   = regbits< type,  0,  1 >;  /**< RAM block 0 behaviour in ON mode.   */
    using ONRAM1   = regbits< type,  1,  1 >;  /**< RAM block 1 behaviour in ON mode.   */
    using OFFRAM0  = regbits< type, 16,  1 >;  /**< RAM block 0 behaviour in OFF mode.  */
    using OFFRAM1  = regbits< type, 17,  1 >;  /**< RAM block 1 behaviour in OFF mode.  */
  };

  /**
   * Pin reset functionality configuration register. This register is a retained register.
   */
  struct RESET
  : public reg< uint32_t, base_addr + 0x544, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x544, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RESET
    using RESET_ = regbits< type,  0,  1 >;  /**< Enable or disable pin reset in debug interface mode.  */
  };

  /**
   * Ram on/off.
   */
  struct RAMONB
  : public reg< uint32_t, base_addr + 0x554, rw, 0x00000003 >
  {
    using type = reg< uint32_t, base_addr + 0x554, rw, 0x00000003 >;

    using ONRAM2   = regbits< type,  0,  1 >;  /**< RAM block 2 behaviour in ON mode.   */
    using ONRAM3   = regbits< type,  1,  1 >;  /**< RAM block 3 behaviour in ON mode.   */
    using OFFRAM2  = regbits< type, 16,  1 >;  /**< RAM block 2 behaviour in OFF mode.  */
    using OFFRAM3  = regbits< type, 17,  1 >;  /**< RAM block 3 behaviour in OFF mode.  */
  };

  /**
   * DCDC converter enable configuration register.
   */
  struct DCDCEN
  : public reg< uint32_t, base_addr + 0x578, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x578, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DCDCEN
    using DCDCEN_ = regbits< type,  0,  1 >;  /**< Enable DCDC converter.  */
  };

  /**
   * DCDC power-up force register.
   */
  struct DCDCFORCE
  : public reg< uint32_t, base_addr + 0xa08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0xa08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FORCEOFF  = regbits< type,  0,  1 >;  /**< DCDC power-up force off.  */
    using FORCEON   = regbits< type,  1,  1 >;  /**< DCDC power-up force on.   */
  };
};
} // namespace mptl

#endif // ARCH_REG_POWER_HPP_INCLUDED
