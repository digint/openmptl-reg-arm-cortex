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

#ifndef ARCH_REG_PDM_HPP_INCLUDED
#define ARCH_REG_PDM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pulse Density Modulation (Digital Microphone) Interface
 */
struct PDM
{
  static constexpr reg_addr_t base_addr = 0x4001d000;

  /**
   * Starts continuous PDM transfer
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stops PDM transfer
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * PDM transfer has started
   */
  struct EVENTS_STARTED
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * PDM transfer has finished
   */
  struct EVENTS_STOPPED
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * The PDM has written the last sample specified by SAMPLE.MAXCNT (or the last sample after a STOP task has been received) to Data RAM
   */
  struct EVENTS_END
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Enable or disable interrupt
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STARTED  = regbits< type,  0,  1 >;  /**< Enable or disable interrupt on EVENTS_STARTED event  */
    using STOPPED  = regbits< type,  1,  1 >;  /**< Enable or disable interrupt on EVENTS_STOPPED event  */
    using END      = regbits< type,  2,  1 >;  /**< Enable or disable interrupt on EVENTS_END event      */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STARTED  = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STARTED event  */
    using STOPPED  = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STOPPED event  */
    using END      = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_END event      */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STARTED  = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STARTED event  */
    using STOPPED  = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STOPPED event  */
    using END      = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_END event      */
  };

  /**
   * PDM module enable register
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  1 >;  /**< Enable or disable PDM reception  */
  };

  /**
   * PDM clock generator control
   */
  struct PDMCLKCTRL
  : public reg< uint32_t, base_addr + 0x504, rw, 0x08400000 >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0x08400000 >;

    using FREQ  = regbits< type,  0, 32 >;  /**< PDM_CLK frequency  */
  };

  /**
   * Defines the routing of the connected PDM microphones' signals
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0x508, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0x00000000 >;

    using MONO  = regbits< type,  0,  1 >;  /**< Mono or stereo operation                                 */
    using EDGE  = regbits< type,  1,  1 >;  /**< Defines on which PDM_CLK edge Left (or mono) is sampled  */
  };

  /**
   * Left output gain adjustment
   */
  struct GAINL
  : public reg< uint32_t, base_addr + 0x518, rw, 0x00000028 >
  {
    using type = reg< uint32_t, base_addr + 0x518, rw, 0x00000028 >;

    // fixme: Field name equals parent register name: GAINL
    using GAINL_ = regbits< type,  0,  7 >;  /**< Left output gain adjustment, in 0.5 dB steps, around the requirement that 0dB gain adjustment corresponds to 2500 RMS output samples (16-bit) with 1 kHz 90dBA signal into a -26dBFS sensitivity PDM microphone. 0x00 -20 dB gain 0x01 -19.5 dB gain (...) 0x27 -0.5 dB gain 0x28 0 dB gain 0x29 +0.5 dB gain (...) 0x4F +19.5 dB gain 0x50 +20 dB gain  */
  };

  /**
   * Right output gain adjustment
   */
  struct GAINR
  : public reg< uint32_t, base_addr + 0x51c, rw, 0x00000028 >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0x00000028 >;

    // fixme: Field name equals parent register name: GAINR
    using GAINR_ = regbits< type,  0,  8 >;  /**< Right output gain adjustment, in 0.5 dB steps, around the requirement that 0dB gain adjustment corresponds to 2500 RMS output samples (16-bit) with 1 kHz 90dBA signal into a -26dBFS sensitivity PDM microphone. (same encoding as GAINL)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PDM_HPP_INCLUDED
