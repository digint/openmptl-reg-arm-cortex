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

#ifndef ARCH_REG_SAADC_HPP_INCLUDED
#define ARCH_REG_SAADC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog to Digital Converter
 */
struct SAADC
{
  static constexpr reg_addr_t base_addr = 0x40007000;

  /**
   * Start the ADC and prepare the result buffer in RAM
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Take one ADC sample, if scan is enabled all channels are sampled
   */
  struct TASKS_SAMPLE
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Stop the ADC and terminate any on-going conversion
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Starts offset auto-calibration
   */
  struct TASKS_CALIBRATEOFFSET
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * The ADC has started
   */
  struct EVENTS_STARTED
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * The ADC has filled up the Result buffer
   */
  struct EVENTS_END
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * A conversion task has been completed. Depending on the mode, multiple conversions might be needed for a result to be transferred to RAM.
   */
  struct EVENTS_DONE
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * A result is ready to get transferred to RAM
   */
  struct EVENTS_RESULTDONE
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Calibration is complete
   */
  struct EVENTS_CALIBRATEDONE
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * The ADC has stopped
   */
  struct EVENTS_STOPPED
  : public reg< uint32_t, base_addr + 0x114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Enable or disable interrupt
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STARTED        = regbits< type,  0,  1 >;  /**< Enable or disable interrupt on EVENTS_STARTED event        */
    using END            = regbits< type,  1,  1 >;  /**< Enable or disable interrupt on EVENTS_END event            */
    using DONE           = regbits< type,  2,  1 >;  /**< Enable or disable interrupt on EVENTS_DONE event           */
    using RESULTDONE     = regbits< type,  3,  1 >;  /**< Enable or disable interrupt on EVENTS_RESULTDONE event     */
    using CALIBRATEDONE  = regbits< type,  4,  1 >;  /**< Enable or disable interrupt on EVENTS_CALIBRATEDONE event  */
    using STOPPED        = regbits< type,  5,  1 >;  /**< Enable or disable interrupt on EVENTS_STOPPED event        */
    using CH0LIMITH      = regbits< type,  6,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[0].LIMITH event   */
    using CH0LIMITL      = regbits< type,  7,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[0].LIMITL event   */
    using CH1LIMITH      = regbits< type,  8,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[1].LIMITH event   */
    using CH1LIMITL      = regbits< type,  9,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[1].LIMITL event   */
    using CH2LIMITH      = regbits< type, 10,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[2].LIMITH event   */
    using CH2LIMITL      = regbits< type, 11,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[2].LIMITL event   */
    using CH3LIMITH      = regbits< type, 12,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[3].LIMITH event   */
    using CH3LIMITL      = regbits< type, 13,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[3].LIMITL event   */
    using CH4LIMITH      = regbits< type, 14,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[4].LIMITH event   */
    using CH4LIMITL      = regbits< type, 15,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[4].LIMITL event   */
    using CH5LIMITH      = regbits< type, 16,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[5].LIMITH event   */
    using CH5LIMITL      = regbits< type, 17,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[5].LIMITL event   */
    using CH6LIMITH      = regbits< type, 18,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[6].LIMITH event   */
    using CH6LIMITL      = regbits< type, 19,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[6].LIMITL event   */
    using CH7LIMITH      = regbits< type, 20,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[7].LIMITH event   */
    using CH7LIMITL      = regbits< type, 21,  1 >;  /**< Enable or disable interrupt on EVENTS_CH[7].LIMITL event   */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STARTED        = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STARTED event        */
    using END            = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_END event            */
    using DONE           = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_DONE event           */
    using RESULTDONE     = regbits< type,  3,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RESULTDONE event     */
    using CALIBRATEDONE  = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CALIBRATEDONE event  */
    using STOPPED        = regbits< type,  5,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STOPPED event        */
    using CH0LIMITH      = regbits< type,  6,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[0].LIMITH event   */
    using CH0LIMITL      = regbits< type,  7,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[0].LIMITL event   */
    using CH1LIMITH      = regbits< type,  8,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[1].LIMITH event   */
    using CH1LIMITL      = regbits< type,  9,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[1].LIMITL event   */
    using CH2LIMITH      = regbits< type, 10,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[2].LIMITH event   */
    using CH2LIMITL      = regbits< type, 11,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[2].LIMITL event   */
    using CH3LIMITH      = regbits< type, 12,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[3].LIMITH event   */
    using CH3LIMITL      = regbits< type, 13,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[3].LIMITL event   */
    using CH4LIMITH      = regbits< type, 14,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[4].LIMITH event   */
    using CH4LIMITL      = regbits< type, 15,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[4].LIMITL event   */
    using CH5LIMITH      = regbits< type, 16,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[5].LIMITH event   */
    using CH5LIMITL      = regbits< type, 17,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[5].LIMITL event   */
    using CH6LIMITH      = regbits< type, 18,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[6].LIMITH event   */
    using CH6LIMITL      = regbits< type, 19,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[6].LIMITL event   */
    using CH7LIMITH      = regbits< type, 20,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[7].LIMITH event   */
    using CH7LIMITL      = regbits< type, 21,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CH[7].LIMITL event   */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STARTED        = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STARTED event        */
    using END            = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_END event            */
    using DONE           = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_DONE event           */
    using RESULTDONE     = regbits< type,  3,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RESULTDONE event     */
    using CALIBRATEDONE  = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CALIBRATEDONE event  */
    using STOPPED        = regbits< type,  5,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STOPPED event        */
    using CH0LIMITH      = regbits< type,  6,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[0].LIMITH event   */
    using CH0LIMITL      = regbits< type,  7,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[0].LIMITL event   */
    using CH1LIMITH      = regbits< type,  8,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[1].LIMITH event   */
    using CH1LIMITL      = regbits< type,  9,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[1].LIMITL event   */
    using CH2LIMITH      = regbits< type, 10,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[2].LIMITH event   */
    using CH2LIMITL      = regbits< type, 11,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[2].LIMITL event   */
    using CH3LIMITH      = regbits< type, 12,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[3].LIMITH event   */
    using CH3LIMITL      = regbits< type, 13,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[3].LIMITL event   */
    using CH4LIMITH      = regbits< type, 14,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[4].LIMITH event   */
    using CH4LIMITL      = regbits< type, 15,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[4].LIMITL event   */
    using CH5LIMITH      = regbits< type, 16,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[5].LIMITH event   */
    using CH5LIMITL      = regbits< type, 17,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[5].LIMITL event   */
    using CH6LIMITH      = regbits< type, 18,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[6].LIMITH event   */
    using CH6LIMITL      = regbits< type, 19,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[6].LIMITL event   */
    using CH7LIMITH      = regbits< type, 20,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[7].LIMITH event   */
    using CH7LIMITL      = regbits< type, 21,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CH[7].LIMITL event   */
  };

  /**
   * Status
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: STATUS
    using STATUS_ = regbits< type,  0,  1 >;  /**< Status  */
  };

  /**
   * Enable or disable ADC
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  1 >;  /**< Enable or disable ADC  */
  };

  /**
   * Resolution configuration
   */
  struct RESOLUTION
  : public reg< uint32_t, base_addr + 0x5f0, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x5f0, rw, 0x00000001 >;

    using VAL  = regbits< type,  0,  3 >;  /**< Set the resolution  */
  };

  /**
   * Oversampling configuration. OVERSAMPLE should not be combined with SCAN. The RESOLUTION is applied before averaging, thus for high OVERSAMPLE a higher RESOLUTION should be used.
   */
  struct OVERSAMPLE
  : public reg< uint32_t, base_addr + 0x5f4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x5f4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: OVERSAMPLE
    using OVERSAMPLE_ = regbits< type,  0,  4 >;  /**< Oversample control  */
  };

  /**
   * Controls normal or continuous sample rate
   */
  struct SAMPLERATE
  : public reg< uint32_t, base_addr + 0x5f8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x5f8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CC    = regbits< type,  0, 11 >;  /**< Capture and compare value. Sample rate is 16 MHz/CC  */
    using MODE  = regbits< type, 12,  1 >;  /**< Select mode for sample rate control                  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SAADC_HPP_INCLUDED
