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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21J18A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21J18A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21J18A device: Cortex-M0+ Microcontroller with 256KB Flash, 32KB SRAM, 64-pin package (refer to http://www.atmel.com/devices/SAMD21J18A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADC_HPP_INCLUDED
#define ARCH_REG_ADC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog Digital Converter
 */
struct ADC
{
  static constexpr reg_addr_t base_addr = 0x42004000;

  /**
   * Average Control
   */
  struct AVGCTRL
  : public reg< uint8_t, base_addr + 0x02, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x02, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SAMPLENUM  = regbits< type,  0,  4 >;  /**< Number of Samples to be Collected        */
    using ADJRES     = regbits< type,  4,  3 >;  /**< Adjusting Result / Division Coefficient  */
  };

  /**
   * Calibration
   */
  struct CALIB
  : public reg< uint16_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LINEARITY_CAL  = regbits< type,  0,  8 >;  /**< Linearity Calibration Value  */
    using BIAS_CAL       = regbits< type,  8,  3 >;  /**< Bias Calibration Value       */
  };

  /**
   * Control A
   */
  struct CTRLA
  : public reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST     = regbits< type,  0,  1 >;  /**< Software Reset  */
    using ENABLE    = regbits< type,  1,  1 >;  /**< Enable          */
    using RUNSTDBY  = regbits< type,  2,  1 >;  /**< Run in Standby  */
  };

  /**
   * Control B
   */
  struct CTRLB
  : public reg< uint16_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DIFFMODE   = regbits< type,  0,  1 >;  /**< Differential Mode                 */
    using LEFTADJ    = regbits< type,  1,  1 >;  /**< Left-Adjusted Result              */
    using FREERUN    = regbits< type,  2,  1 >;  /**< Free Running Mode                 */
    using CORREN     = regbits< type,  3,  1 >;  /**< Digital Correction Logic Enabled  */
    using RESSEL     = regbits< type,  4,  2 >;  /**< Conversion Result Resolution      */
    using PRESCALER  = regbits< type,  8,  3 >;  /**< Prescaler Configuration           */
  };

  /**
   * Debug Control
   */
  struct DBGCTRL
  : public reg< uint8_t, base_addr + 0x2a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x2a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBGRUN  = regbits< type,  0,  1 >;  /**< Debug Run  */
  };

  /**
   * Event Control
   */
  struct EVCTRL
  : public reg< uint8_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STARTEI   = regbits< type,  0,  1 >;  /**< Start Conversion Event In  */
    using SYNCEI    = regbits< type,  1,  1 >;  /**< Synchronization Event In   */
    using RESRDYEO  = regbits< type,  4,  1 >;  /**< Result Ready Event Out     */
    using WINMONEO  = regbits< type,  5,  1 >;  /**< Window Monitor Event Out   */
  };

  /**
   * Gain Correction
   */
  struct GAINCORR
  : public reg< uint16_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: GAINCORR
    using GAINCORR_ = regbits< type,  0, 12 >;  /**< Gain Correction Value  */
  };

  /**
   * Input Control
   */
  struct INPUTCTRL
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MUXPOS       = regbits< type,  0,  5 >;  /**< Positive Mux Input Selection               */
    using MUXNEG       = regbits< type,  8,  5 >;  /**< Negative Mux Input Selection               */
    using INPUTSCAN    = regbits< type, 16,  4 >;  /**< Number of Input Channels Included in Scan  */
    using INPUTOFFSET  = regbits< type, 20,  4 >;  /**< Positive Mux Setting Offset                */
    using GAIN         = regbits< type, 24,  4 >;  /**< Gain Factor Selection                      */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint8_t, base_addr + 0x16, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x16, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RESRDY   = regbits< type,  0,  1 >;  /**< Result Ready Interrupt Enable           */
    using OVERRUN  = regbits< type,  1,  1 >;  /**< Overrun Interrupt Enable                */
    using WINMON   = regbits< type,  2,  1 >;  /**< Window Monitor Interrupt Enable         */
    using SYNCRDY  = regbits< type,  3,  1 >;  /**< Synchronization Ready Interrupt Enable  */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint8_t, base_addr + 0x17, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x17, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RESRDY   = regbits< type,  0,  1 >;  /**< Result Ready Interrupt Enable           */
    using OVERRUN  = regbits< type,  1,  1 >;  /**< Overrun Interrupt Enable                */
    using WINMON   = regbits< type,  2,  1 >;  /**< Window Monitor Interrupt Enable         */
    using SYNCRDY  = regbits< type,  3,  1 >;  /**< Synchronization Ready Interrupt Enable  */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint8_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RESRDY   = regbits< type,  0,  1 >;  /**< Result Ready           */
    using OVERRUN  = regbits< type,  1,  1 >;  /**< Overrun                */
    using WINMON   = regbits< type,  2,  1 >;  /**< Window Monitor         */
    using SYNCRDY  = regbits< type,  3,  1 >;  /**< Synchronization Ready  */
  };

  /**
   * Offset Correction
   */
  struct OFFSETCORR
  : public reg< uint16_t, base_addr + 0x26, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x26, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: OFFSETCORR
    using OFFSETCORR_ = regbits< type,  0, 12 >;  /**< Offset Correction Value  */
  };

  /**
   * Reference Control
   */
  struct REFCTRL
  : public reg< uint8_t, base_addr + 0x01, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x01, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REFSEL   = regbits< type,  0,  4 >;  /**< Reference Selection                          */
    using REFCOMP  = regbits< type,  7,  1 >;  /**< Reference Buffer Offset Compensation Enable  */
  };

  /**
   * Result
   */
  struct RESULT
  : public reg< uint16_t, base_addr + 0x1a, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x1a, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RESULT
    using RESULT_ = regbits< type,  0, 16 >;  /**< Result Conversion Value  */
  };

  /**
   * Sampling Time Control
   */
  struct SAMPCTRL
  : public reg< uint8_t, base_addr + 0x03, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x03, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SAMPLEN  = regbits< type,  0,  6 >;  /**< Sampling Time Length  */
  };

  /**
   * Status
   */
  struct STATUS
  : public reg< uint8_t, base_addr + 0x19, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x19, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SYNCBUSY  = regbits< type,  7,  1 >;  /**< Synchronization Busy  */
  };

  /**
   * Software Trigger
   */
  struct SWTRIG
  : public reg< uint8_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLUSH  = regbits< type,  0,  1 >;  /**< ADC Conversion Flush  */
    using START  = regbits< type,  1,  1 >;  /**< ADC Start Conversion  */
  };

  /**
   * Window Monitor Control
   */
  struct WINCTRL
  : public reg< uint8_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WINMODE  = regbits< type,  0,  3 >;  /**< Window Monitor Mode  */
  };

  /**
   * Window Monitor Lower Threshold
   */
  struct WINLT
  : public reg< uint16_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: WINLT
    using WINLT_ = regbits< type,  0, 16 >;  /**< Window Lower Threshold  */
  };

  /**
   * Window Monitor Upper Threshold
   */
  struct WINUT
  : public reg< uint16_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: WINUT
    using WINUT_ = regbits< type,  0, 16 >;  /**< Window Upper Threshold  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC_HPP_INCLUDED
