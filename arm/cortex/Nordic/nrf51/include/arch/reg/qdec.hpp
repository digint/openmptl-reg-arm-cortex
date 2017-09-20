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

#ifndef ARCH_REG_QDEC_HPP_INCLUDED
#define ARCH_REG_QDEC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Rotary decoder.
 */
struct QDEC
{
  static constexpr reg_addr_t base_addr = 0x40012000;

  /**
   * Start the quadrature decoder.
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop the quadrature decoder.
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Transfers the content from ACC registers to ACCREAD registers, and clears the ACC registers.
   */
  struct TASKS_READCLRACC
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * A new sample is written to the sample register.
   */
  struct EVENTS_SAMPLERDY
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * REPORTPER number of samples accumulated in ACC register, and ACC register different than zero.
   */
  struct EVENTS_REPORTRDY
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ACC or ACCDBL register overflow.
   */
  struct EVENTS_ACCOF
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcuts for the QDEC.
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REPORTRDY_READCLRACC  = regbits< type,  0,  1 >;  /**< Shortcut between REPORTRDY event and READCLRACC task.  */
    using SAMPLERDY_STOP        = regbits< type,  1,  1 >;  /**< Shortcut between SAMPLERDY event and STOP task.        */
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SAMPLERDY  = regbits< type,  0,  1 >;  /**< Enable interrupt on SAMPLERDY event.  */
    using REPORTRDY  = regbits< type,  1,  1 >;  /**< Enable interrupt on REPORTRDY event.  */
    using ACCOF      = regbits< type,  2,  1 >;  /**< Enable interrupt on ACCOF event.      */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SAMPLERDY  = regbits< type,  0,  1 >;  /**< Disable interrupt on SAMPLERDY event.  */
    using REPORTRDY  = regbits< type,  1,  1 >;  /**< Disable interrupt on REPORTRDY event.  */
    using ACCOF      = regbits< type,  2,  1 >;  /**< Disable interrupt on ACCOF event.      */
  };

  /**
   * Enable the QDEC.
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  1 >;  /**< Enable or disable QDEC.  */
  };

  /**
   * LED output pin polarity.
   */
  struct LEDPOL
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: LEDPOL
    using LEDPOL_ = regbits< type,  0,  1 >;  /**< LED output pin polarity.  */
  };

  /**
   * Sample period.
   */
  struct SAMPLEPER
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: SAMPLEPER
    using SAMPLEPER_ = regbits< type,  0,  3 >;  /**< Sample period.  */
  };

  /**
   * Motion sample value.
   */
  struct SAMPLE
  : public reg< uint32_t, base_addr + 0x50c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: SAMPLE
    using SAMPLE_ = regbits< type,  0, 32 >;  /**< Last sample taken in compliment to 2.  */
  };

  /**
   * Number of samples to generate an EVENT_REPORTRDY.
   */
  struct REPORTPER
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: REPORTPER
    using REPORTPER_ = regbits< type,  0,  3 >;  /**< Number of samples to generate an EVENT_REPORTRDY.  */
  };

  /**
   * Accumulated valid transitions register.
   */
  struct ACC
  : public reg< uint32_t, base_addr + 0x514, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Snapshot of ACC register. Value generated by the TASKS_READCLEACC task.
   */
  struct ACCREAD
  : public reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pin select for LED output.
   */
  struct PSELLED
  : public reg< uint32_t, base_addr + 0x51c, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Pin select for phase A input.
   */
  struct PSELA
  : public reg< uint32_t, base_addr + 0x520, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Pin select for phase B input.
   */
  struct PSELB
  : public reg< uint32_t, base_addr + 0x524, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Enable debouncer input filters.
   */
  struct DBFEN
  : public reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DBFEN
    using DBFEN_ = regbits< type,  0,  1 >;  /**< Enable debounce input filters.  */
  };

  /**
   * Time LED is switched ON before the sample.
   */
  struct LEDPRE
  : public reg< uint32_t, base_addr + 0x540, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x540, rw, 0x00000010 >;

    // fixme: Field name equals parent register name: LEDPRE
    using LEDPRE_ = regbits< type,  0,  9 >;  /**< Period in us the LED in switched on prior to sampling.  */
  };

  /**
   * Accumulated double (error) transitions register.
   */
  struct ACCDBL
  : public reg< uint32_t, base_addr + 0x544, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x544, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ACCDBL
    using ACCDBL_ = regbits< type,  0,  4 >;  /**< Accumulated double (error) transitions.  */
  };

  /**
   * Snapshot of ACCDBL register. Value generated by the TASKS_READCLEACC task.
   */
  struct ACCDBLREAD
  : public reg< uint32_t, base_addr + 0x548, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x548, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ACCDBLREAD
    using ACCDBLREAD_ = regbits< type,  0,  4 >;  /**< Snapshot of accumulated double (error) transitions.  */
  };

  /**
   * Peripheral power control.
   */
  struct POWER
  : public reg< uint32_t, base_addr + 0xffc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0xffc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: POWER
    using POWER_ = regbits< type,  0,  1 >;  /**< Peripheral power control.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_QDEC_HPP_INCLUDED
