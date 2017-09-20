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

#ifndef ARCH_REG_QDEC_HPP_INCLUDED
#define ARCH_REG_QDEC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Quadrature Decoder
 */
struct QDEC
{
  static constexpr reg_addr_t base_addr = 0x40012000;

  /**
   * Task starting the quadrature decoder
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Task stopping the quadrature decoder
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Read and clear ACC and ACCDBL
   */
  struct TASKS_READCLRACC
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Read and clear ACC
   */
  struct TASKS_RDCLRACC
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Read and clear ACCDBL
   */
  struct TASKS_RDCLRDBL
  : public reg< uint32_t, base_addr + 0x010, wo, 0 >
  {
  };

  /**
   * Event being generated for every new sample value written to the SAMPLE register
   */
  struct EVENTS_SAMPLERDY
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Non-null report ready
   */
  struct EVENTS_REPORTRDY
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ACC or ACCDBL register overflow
   */
  struct EVENTS_ACCOF
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Double displacement(s) detected
   */
  struct EVENTS_DBLRDY
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * QDEC has been stopped
   */
  struct EVENTS_STOPPED
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REPORTRDY_READCLRACC  = regbits< type,  0,  1 >;  /**< Shortcut between EVENTS_REPORTRDY event and TASKS_READCLRACC task  */
    using SAMPLERDY_STOP        = regbits< type,  1,  1 >;  /**< Shortcut between EVENTS_SAMPLERDY event and TASKS_STOP task        */
    using REPORTRDY_RDCLRACC    = regbits< type,  2,  1 >;  /**< Shortcut between EVENTS_REPORTRDY event and TASKS_RDCLRACC task    */
    using REPORTRDY_STOP        = regbits< type,  3,  1 >;  /**< Shortcut between EVENTS_REPORTRDY event and TASKS_STOP task        */
    using DBLRDY_RDCLRDBL       = regbits< type,  4,  1 >;  /**< Shortcut between EVENTS_DBLRDY event and TASKS_RDCLRDBL task       */
    using DBLRDY_STOP           = regbits< type,  5,  1 >;  /**< Shortcut between EVENTS_DBLRDY event and TASKS_STOP task           */
    using SAMPLERDY_READCLRACC  = regbits< type,  6,  1 >;  /**< Shortcut between EVENTS_SAMPLERDY event and TASKS_READCLRACC task  */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SAMPLERDY  = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_SAMPLERDY event  */
    using REPORTRDY  = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_REPORTRDY event  */
    using ACCOF      = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ACCOF event      */
    using DBLRDY     = regbits< type,  3,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_DBLRDY event     */
    using STOPPED    = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STOPPED event    */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SAMPLERDY  = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_SAMPLERDY event  */
    using REPORTRDY  = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_REPORTRDY event  */
    using ACCOF      = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ACCOF event      */
    using DBLRDY     = regbits< type,  3,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_DBLRDY event     */
    using STOPPED    = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STOPPED event    */
  };

  /**
   * Enable the quadrature decoder
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  1 >;  /**< Enable or disable the quadrature decoder  */
  };

  /**
   * LED output pin polarity
   */
  struct LEDPOL
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: LEDPOL
    using LEDPOL_ = regbits< type,  0,  1 >;  /**< LED output pin polarity  */
  };

  /**
   * Sample period
   */
  struct SAMPLEPER
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: SAMPLEPER
    using SAMPLEPER_ = regbits< type,  0,  4 >;  /**< Sample period. The SAMPLE register will be updated for every new sample  */
  };

  /**
   * Motion sample value
   */
  struct SAMPLE
  : public reg< uint32_t, base_addr + 0x50c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: SAMPLE
    using SAMPLE_ = regbits< type,  0, 32 >;  /**< Last motion sample  */
  };

  /**
   * Number of samples to be taken before REPORTRDY and DBLRDY events can be generated
   */
  struct REPORTPER
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: REPORTPER
    using REPORTPER_ = regbits< type,  0,  4 >;  /**< Specifies the number of samples to be accumulated in the ACC register before the REPORTRDY and DBLRDY events can be generated  */
  };

  /**
   * Register accumulating the valid transitions
   */
  struct ACC
  : public reg< uint32_t, base_addr + 0x514, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ACC
    using ACC_ = regbits< type,  0, 32 >;  /**< Register accumulating all valid samples (not double transition) read from the SAMPLE register  */
  };

  /**
   * Snapshot of the ACC register, updated by the READCLRACC or RDCLRACC task
   */
  struct ACCREAD
  : public reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ACCREAD
    using ACCREAD_ = regbits< type,  0, 32 >;  /**< Snapshot of the ACC register.  */
  };

  /**
   * Enable input debounce filters
   */
  struct DBFEN
  : public reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DBFEN
    using DBFEN_ = regbits< type,  0,  1 >;  /**< Enable input debounce filters  */
  };

  /**
   * Time period the LED is switched ON prior to sampling
   */
  struct LEDPRE
  : public reg< uint32_t, base_addr + 0x540, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x540, rw, 0x00000010 >;

    // fixme: Field name equals parent register name: LEDPRE
    using LEDPRE_ = regbits< type,  0,  9 >;  /**< Period in us the LED is switched on prior to sampling  */
  };

  /**
   * Register accumulating the number of detected double transitions
   */
  struct ACCDBL
  : public reg< uint32_t, base_addr + 0x544, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x544, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ACCDBL
    using ACCDBL_ = regbits< type,  0,  4 >;  /**< Register accumulating the number of detected double or illegal transitions. ( SAMPLE = 2 ).  */
  };

  /**
   * Snapshot of the ACCDBL, updated by the READCLRACC or RDCLRDBL task
   */
  struct ACCDBLREAD
  : public reg< uint32_t, base_addr + 0x548, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x548, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ACCDBLREAD
    using ACCDBLREAD_ = regbits< type,  0,  4 >;  /**< Snapshot of the ACCDBL register. This field is updated when the READCLRACC or RDCLRDBL task is triggered.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_QDEC_HPP_INCLUDED
