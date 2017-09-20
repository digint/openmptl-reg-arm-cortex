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

#ifndef ARCH_REG_PWM0_HPP_INCLUDED
#define ARCH_REG_PWM0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pulse Width Modulation Unit 0
 */
struct PWM0
{
  static constexpr reg_addr_t base_addr = 0x4001c000;

  /**
   * Stops PWM pulse generation on all channels at the end of current PWM period, and stops sequence playback
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Description collection[0]: Loads the first PWM value on all enabled channels from sequence 0, and starts playing that sequence at the rate defined in SEQ[0]REFRESH and/or DECODER.MODE. Causes PWM generation to start it was not running.
   */
  struct TASKS_SEQSTART[%s]
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Steps by one value in the current sequence on all enabled channels if DECODER.MODE=NextStep. Does not cause PWM generation to start it was not running.
   */
  struct TASKS_NEXTSTEP
  : public reg< uint32_t, base_addr + 0x010, wo, 0 >
  {
  };

  /**
   * Response to STOP task, emitted when PWM pulses are no longer generated
   */
  struct EVENTS_STOPPED
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Description collection[0]: First PWM period started on sequence 0
   */
  struct EVENTS_SEQSTARTED[%s]
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Description collection[0]: Emitted at end of every sequence 0, when last value from RAM has been applied to wave counter
   */
  struct EVENTS_SEQEND[%s]
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Emitted at the end of each PWM period
   */
  struct EVENTS_PWMPERIODEND
  : public reg< uint32_t, base_addr + 0x118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Concatenated sequences have been played the amount of times defined in LOOP.CNT
   */
  struct EVENTS_LOOPSDONE
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SEQEND0_STOP         = regbits< type,  0,  1 >;  /**< Shortcut between EVENTS_SEQEND[0] event and TASKS_STOP task         */
    using SEQEND1_STOP         = regbits< type,  1,  1 >;  /**< Shortcut between EVENTS_SEQEND[1] event and TASKS_STOP task         */
    using LOOPSDONE_SEQSTART0  = regbits< type,  2,  1 >;  /**< Shortcut between EVENTS_LOOPSDONE event and TASKS_SEQSTART[0] task  */
    using LOOPSDONE_SEQSTART1  = regbits< type,  3,  1 >;  /**< Shortcut between EVENTS_LOOPSDONE event and TASKS_SEQSTART[1] task  */
    using LOOPSDONE_STOP       = regbits< type,  4,  1 >;  /**< Shortcut between EVENTS_LOOPSDONE event and TASKS_STOP task         */
  };

  /**
   * Enable or disable interrupt
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED       = regbits< type,  1,  1 >;  /**< Enable or disable interrupt on EVENTS_STOPPED event        */
    using SEQSTARTED0   = regbits< type,  2,  1 >;  /**< Enable or disable interrupt on EVENTS_SEQSTARTED[0] event  */
    using SEQSTARTED1   = regbits< type,  3,  1 >;  /**< Enable or disable interrupt on EVENTS_SEQSTARTED[1] event  */
    using SEQEND0       = regbits< type,  4,  1 >;  /**< Enable or disable interrupt on EVENTS_SEQEND[0] event      */
    using SEQEND1       = regbits< type,  5,  1 >;  /**< Enable or disable interrupt on EVENTS_SEQEND[1] event      */
    using PWMPERIODEND  = regbits< type,  6,  1 >;  /**< Enable or disable interrupt on EVENTS_PWMPERIODEND event   */
    using LOOPSDONE     = regbits< type,  7,  1 >;  /**< Enable or disable interrupt on EVENTS_LOOPSDONE event      */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED       = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STOPPED event        */
    using SEQSTARTED0   = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_SEQSTARTED[0] event  */
    using SEQSTARTED1   = regbits< type,  3,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_SEQSTARTED[1] event  */
    using SEQEND0       = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_SEQEND[0] event      */
    using SEQEND1       = regbits< type,  5,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_SEQEND[1] event      */
    using PWMPERIODEND  = regbits< type,  6,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_PWMPERIODEND event   */
    using LOOPSDONE     = regbits< type,  7,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_LOOPSDONE event      */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED       = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STOPPED event        */
    using SEQSTARTED0   = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_SEQSTARTED[0] event  */
    using SEQSTARTED1   = regbits< type,  3,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_SEQSTARTED[1] event  */
    using SEQEND0       = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_SEQEND[0] event      */
    using SEQEND1       = regbits< type,  5,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_SEQEND[1] event      */
    using PWMPERIODEND  = regbits< type,  6,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_PWMPERIODEND event   */
    using LOOPSDONE     = regbits< type,  7,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_LOOPSDONE event      */
  };

  /**
   * PWM module enable register
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  1 >;  /**< Enable or disable PWM module  */
  };

  /**
   * Selects operating mode of the wave counter
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0x504, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0x00000000 >;

    using UPDOWN  = regbits< type,  0,  1 >;  /**< Selects up or up and down as wave counter mode  */
  };

  /**
   * Value up to which the pulse generator counter counts
   */
  struct COUNTERTOP
  : public reg< uint32_t, base_addr + 0x508, rw, 0x000003FF >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0x000003FF >;

    // fixme: Field name equals parent register name: COUNTERTOP
    using COUNTERTOP_ = regbits< type,  0, 15 >;  /**< Value up to which the pulse generator counter counts. This register is ignored when DECODER.MODE=WaveForm and only values from RAM will be used.  */
  };

  /**
   * Configuration for PWM_CLK
   */
  struct PRESCALER
  : public reg< uint32_t, base_addr + 0x50c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: PRESCALER
    using PRESCALER_ = regbits< type,  0,  3 >;  /**< Pre-scaler of PWM_CLK  */
  };

  /**
   * Configuration of the decoder
   */
  struct DECODER
  : public reg< uint32_t, base_addr + 0x510, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0x00000000 >;

    using LOAD  = regbits< type,  0,  3 >;  /**< How a sequence is read from RAM and spread to the compare register  */
    using MODE  = regbits< type,  8,  1 >;  /**< Selects source for advancing the active sequence                    */
  };

  /**
   * Amount of playback of a loop
   */
  struct LOOP
  : public reg< uint32_t, base_addr + 0x514, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0x00000000 >;

    using CNT  = regbits< type,  0, 16 >;  /**< Amount of playback of pattern cycles  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWM0_HPP_INCLUDED
