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
//  Import from CMSIS-SVD: "Nordic/nrf52.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf52
//  series: nrf52
//  version: 1
//  description: nRF52 reference description for radio MCU with ARM 32-bit Cortex-M4 Microcontroller
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
 * Power control
 */
struct POWER
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Enable constant latency mode
   */
  struct TASKS_CONSTLAT
  : public reg< uint32_t, base_addr + 0x078, wo, 0 >
  {
  };

  /**
   * Enable low power mode (variable latency)
   */
  struct TASKS_LOWPWR
  : public reg< uint32_t, base_addr + 0x07c, wo, 0 >
  {
  };

  /**
   * Power failure warning
   */
  struct EVENTS_POFWARN
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CPU entered WFI/WFE sleep
   */
  struct EVENTS_SLEEPENTER
  : public reg< uint32_t, base_addr + 0x114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CPU exited WFI/WFE sleep
   */
  struct EVENTS_SLEEPEXIT
  : public reg< uint32_t, base_addr + 0x118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using POFWARN     = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_POFWARN event     */
    using SLEEPENTER  = regbits< type,  5,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_SLEEPENTER event  */
    using SLEEPEXIT   = regbits< type,  6,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_SLEEPEXIT event   */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using POFWARN     = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_POFWARN event     */
    using SLEEPENTER  = regbits< type,  5,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_SLEEPENTER event  */
    using SLEEPEXIT   = regbits< type,  6,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_SLEEPEXIT event   */
  };

  /**
   * Reset reason
   */
  struct RESETREAS
  : public reg< uint32_t, base_addr + 0x400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RESETPIN  = regbits< type,  0,  1 >;  /**< Reset from pin-reset detected                                                                               */
    using DOG       = regbits< type,  1,  1 >;  /**< Reset from watchdog detected                                                                                */
    using SREQ      = regbits< type,  2,  1 >;  /**< Reset from AIRCR.SYSRESETREQ detected                                                                       */
    using LOCKUP    = regbits< type,  3,  1 >;  /**< Reset from CPU lock-up detected                                                                             */
    using OFF       = regbits< type, 16,  1 >;  /**< Reset due to wake up from System OFF mode when wakeup is triggered from DETECT signal from GPIO             */
    using LPCOMP    = regbits< type, 17,  1 >;  /**< Reset due to wake up from System OFF mode when wakeup is triggered from ANADETECT signal from LPCOMP        */
    using DIF       = regbits< type, 18,  1 >;  /**< Reset due to wake up from System OFF mode when wakeup is triggered from entering into debug interface mode  */
    using NFC       = regbits< type, 19,  1 >;  /**< Reset due to wake up from System OFF mode by NFC field detect                                               */
  };

  /**
   * Deprecated register - RAM status register
   */
  struct RAMSTATUS
  : public reg< uint32_t, base_addr + 0x428, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x428, ro, 0x00000000 >;

    using RAMBLOCK0  = regbits< type,  0,  1 >;  /**< RAM block 0 is on or off/powering up  */
    using RAMBLOCK1  = regbits< type,  1,  1 >;  /**< RAM block 1 is on or off/powering up  */
    using RAMBLOCK2  = regbits< type,  2,  1 >;  /**< RAM block 2 is on or off/powering up  */
    using RAMBLOCK3  = regbits< type,  3,  1 >;  /**< RAM block 3 is on or off/powering up  */
  };

  /**
   * System OFF register
   */
  struct SYSTEMOFF
  : public reg< uint32_t, base_addr + 0x500, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x500, wo, 0 >;

    // fixme: Field name equals parent register name: SYSTEMOFF
    using SYSTEMOFF_ = regbits< type,  0,  1 >;  /**< Enable System OFF mode  */
  };

  /**
   * Power failure comparator configuration
   */
  struct POFCON
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using POF        = regbits< type,  0,  1 >;  /**< Enable or disable power failure comparator  */
    using THRESHOLD  = regbits< type,  1,  4 >;  /**< Power failure comparator threshold setting  */
  };

  /**
   * General purpose retention register
   */
  struct GPREGRET
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: GPREGRET
    using GPREGRET_ = regbits< type,  0,  8 >;  /**< General purpose retention register  */
  };

  /**
   * General purpose retention register
   */
  struct GPREGRET2
  : public reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GPREGRET  = regbits< type,  0,  8 >;  /**< General purpose retention register  */
  };

  /**
   * Deprecated register - RAM on/off register (this register is retained)
   */
  struct RAMON
  : public reg< uint32_t, base_addr + 0x524, rw, 0x00000003 >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0x00000003 >;

    using ONRAM0   = regbits< type,  0,  1 >;  /**< Keep RAM block 0 on or off in system ON Mode                  */
    using ONRAM1   = regbits< type,  1,  1 >;  /**< Keep RAM block 1 on or off in system ON Mode                  */
    using OFFRAM0  = regbits< type, 16,  1 >;  /**< Keep retention on RAM block 0 when RAM block is switched off  */
    using OFFRAM1  = regbits< type, 17,  1 >;  /**< Keep retention on RAM block 1 when RAM block is switched off  */
  };

  /**
   * Deprecated register - RAM on/off register (this register is retained)
   */
  struct RAMONB
  : public reg< uint32_t, base_addr + 0x554, rw, 0x00000003 >
  {
    using type = reg< uint32_t, base_addr + 0x554, rw, 0x00000003 >;

    using ONRAM2   = regbits< type,  0,  1 >;  /**< Keep RAM block 2 on or off in system ON Mode                  */
    using ONRAM3   = regbits< type,  1,  1 >;  /**< Keep RAM block 3 on or off in system ON Mode                  */
    using OFFRAM2  = regbits< type, 16,  1 >;  /**< Keep retention on RAM block 2 when RAM block is switched off  */
    using OFFRAM3  = regbits< type, 17,  1 >;  /**< Keep retention on RAM block 3 when RAM block is switched off  */
  };

  /**
   * DC/DC enable register
   */
  struct DCDCEN
  : public reg< uint32_t, base_addr + 0x578, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x578, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DCDCEN
    using DCDCEN_ = regbits< type,  0,  1 >;  /**< Enable or disable DC/DC converter  */
  };
};
} // namespace mptl

#endif // ARCH_REG_POWER_HPP_INCLUDED
