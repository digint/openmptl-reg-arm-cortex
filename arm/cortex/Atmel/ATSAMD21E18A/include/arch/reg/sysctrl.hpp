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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21E18A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21E18A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21E18A device: Cortex-M0+ Microcontroller with 256KB Flash, 32KB SRAM, 32-pin package (refer to http://www.atmel.com/devices/SAMD21E18A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SYSCTRL_HPP_INCLUDED
#define ARCH_REG_SYSCTRL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System Control
 */
struct SYSCTRL
{
  static constexpr reg_addr_t base_addr = 0x40000800;

  /**
   * 3.3V Brown-Out Detector (BOD33) Control
   */
  struct BOD33
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENABLE    = regbits< type,  1,  1 >;  /**< Enable                 */
    using HYST      = regbits< type,  2,  1 >;  /**< Hysteresis             */
    using ACTION    = regbits< type,  3,  2 >;  /**< BOD33 Action           */
    using RUNSTDBY  = regbits< type,  6,  1 >;  /**< Run in Standby         */
    using MODE      = regbits< type,  8,  1 >;  /**< Operation Mode         */
    using CEN       = regbits< type,  9,  1 >;  /**< Clock Enable           */
    using PSEL      = regbits< type, 12,  4 >;  /**< Prescaler Select       */
    using LEVEL     = regbits< type, 16,  6 >;  /**< BOD33 Threshold Level  */
  };

  /**
   * DFLL48M Control
   */
  struct DFLLCTRL
  : public reg< uint16_t, base_addr + 0x24, rw, 0x0080 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0x0080 >;

    using ENABLE    = regbits< type,  1,  1 >;  /**< DFLL Enable               */
    using MODE      = regbits< type,  2,  1 >;  /**< Operating Mode Selection  */
    using STABLE    = regbits< type,  3,  1 >;  /**< Stable DFLL Frequency     */
    using LLAW      = regbits< type,  4,  1 >;  /**< Lose Lock After Wake      */
    using USBCRM    = regbits< type,  5,  1 >;  /**< USB Clock Recovery Mode   */
    using RUNSTDBY  = regbits< type,  6,  1 >;  /**< Run in Standby            */
    using ONDEMAND  = regbits< type,  7,  1 >;  /**< On Demand Control         */
    using CCDIS     = regbits< type,  8,  1 >;  /**< Chill Cycle Disable       */
    using QLDIS     = regbits< type,  9,  1 >;  /**< Quick Lock Disable        */
    using BPLCKC    = regbits< type, 10,  1 >;  /**< Bypass Coarse Lock        */
    using WAITLOCK  = regbits< type, 11,  1 >;  /**< Wait Lock                 */
  };

  /**
   * DFLL48M Multiplier
   */
  struct DFLLMUL
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MUL    = regbits< type,  0, 16 >;  /**< DFLL Multiply Factor  */
    using FSTEP  = regbits< type, 16, 10 >;  /**< Fine Maximum Step     */
    using CSTEP  = regbits< type, 26,  6 >;  /**< Coarse Maximum Step   */
  };

  /**
   * DFLL48M Synchronization
   */
  struct DFLLSYNC
  : public reg< uint8_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READREQ  = regbits< type,  7,  1 >;  /**< Read Request  */
  };

  /**
   * DFLL48M Value
   */
  struct DFLLVAL
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FINE    = regbits< type,  0, 10 >;  /**< Fine Value                       */
    using COARSE  = regbits< type, 10,  6 >;  /**< Coarse Value                     */
    using DIFF    = regbits< type, 16, 16 >;  /**< Multiplication Ratio Difference  */
  };

  /**
   * DPLL Control A
   */
  struct DPLLCTRLA
  : public reg< uint8_t, base_addr + 0x44, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x44, rw, 0x80 >;

    using ENABLE    = regbits< type,  1,  1 >;  /**< DPLL Enable                 */
    using RUNSTDBY  = regbits< type,  6,  1 >;  /**< Run in Standby              */
    using ONDEMAND  = regbits< type,  7,  1 >;  /**< On Demand Clock Activation  */
  };

  /**
   * DPLL Control B
   */
  struct DPLLCTRLB
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FILTER   = regbits< type,  0,  2 >;  /**< Proportional Integral Filter Selection  */
    using LPEN     = regbits< type,  2,  1 >;  /**< Low-Power Enable                        */
    using WUF      = regbits< type,  3,  1 >;  /**< Wake Up Fast                            */
    using REFCLK   = regbits< type,  4,  2 >;  /**< Reference Clock Selection               */
    using LTIME    = regbits< type,  8,  3 >;  /**< Lock Time                               */
    using LBYPASS  = regbits< type, 12,  1 >;  /**< Lock Bypass                             */
    using DIV      = regbits< type, 16, 11 >;  /**< Clock Divider                           */
  };

  /**
   * DPLL Ratio Control
   */
  struct DPLLRATIO
  : public reg< uint32_t, base_addr + 0x48, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LDR      = regbits< type,  0, 12 >;  /**< Loop Divider Ratio                  */
    using LDRFRAC  = regbits< type, 16,  4 >;  /**< Loop Divider Ratio Fractional Part  */
  };

  /**
   * DPLL Status
   */
  struct DPLLSTATUS
  : public reg< uint8_t, base_addr + 0x50, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x50, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using LOCK    = regbits< type,  0,  1 >;  /**< DPLL Lock Status    */
    using CLKRDY  = regbits< type,  1,  1 >;  /**< Output Clock Ready  */
    using ENABLE  = regbits< type,  2,  1 >;  /**< DPLL Enable         */
    using DIV     = regbits< type,  3,  1 >;  /**< Divider Enable      */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using XOSCRDY     = regbits< type,  0,  1 >;  /**< XOSC Ready Interrupt Enable                    */
    using XOSC32KRDY  = regbits< type,  1,  1 >;  /**< XOSC32K Ready Interrupt Enable                 */
    using OSC32KRDY   = regbits< type,  2,  1 >;  /**< OSC32K Ready Interrupt Enable                  */
    using OSC8MRDY    = regbits< type,  3,  1 >;  /**< OSC8M Ready Interrupt Enable                   */
    using DFLLRDY     = regbits< type,  4,  1 >;  /**< DFLL Ready Interrupt Enable                    */
    using DFLLOOB     = regbits< type,  5,  1 >;  /**< DFLL Out Of Bounds Interrupt Enable            */
    using DFLLLCKF    = regbits< type,  6,  1 >;  /**< DFLL Lock Fine Interrupt Enable                */
    using DFLLLCKC    = regbits< type,  7,  1 >;  /**< DFLL Lock Coarse Interrupt Enable              */
    using DFLLRCS     = regbits< type,  8,  1 >;  /**< DFLL Reference Clock Stopped Interrupt Enable  */
    using BOD33RDY    = regbits< type,  9,  1 >;  /**< BOD33 Ready Interrupt Enable                   */
    using BOD33DET    = regbits< type, 10,  1 >;  /**< BOD33 Detection Interrupt Enable               */
    using B33SRDY     = regbits< type, 11,  1 >;  /**< BOD33 Synchronization Ready Interrupt Enable   */
    using DPLLLCKR    = regbits< type, 15,  1 >;  /**< DPLL Lock Rise Interrupt Enable                */
    using DPLLLCKF    = regbits< type, 16,  1 >;  /**< DPLL Lock Fall Interrupt Enable                */
    using DPLLLTO     = regbits< type, 17,  1 >;  /**< DPLL Lock Timeout Interrupt Enable             */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using XOSCRDY     = regbits< type,  0,  1 >;  /**< XOSC Ready Interrupt Enable                    */
    using XOSC32KRDY  = regbits< type,  1,  1 >;  /**< XOSC32K Ready Interrupt Enable                 */
    using OSC32KRDY   = regbits< type,  2,  1 >;  /**< OSC32K Ready Interrupt Enable                  */
    using OSC8MRDY    = regbits< type,  3,  1 >;  /**< OSC8M Ready Interrupt Enable                   */
    using DFLLRDY     = regbits< type,  4,  1 >;  /**< DFLL Ready Interrupt Enable                    */
    using DFLLOOB     = regbits< type,  5,  1 >;  /**< DFLL Out Of Bounds Interrupt Enable            */
    using DFLLLCKF    = regbits< type,  6,  1 >;  /**< DFLL Lock Fine Interrupt Enable                */
    using DFLLLCKC    = regbits< type,  7,  1 >;  /**< DFLL Lock Coarse Interrupt Enable              */
    using DFLLRCS     = regbits< type,  8,  1 >;  /**< DFLL Reference Clock Stopped Interrupt Enable  */
    using BOD33RDY    = regbits< type,  9,  1 >;  /**< BOD33 Ready Interrupt Enable                   */
    using BOD33DET    = regbits< type, 10,  1 >;  /**< BOD33 Detection Interrupt Enable               */
    using B33SRDY     = regbits< type, 11,  1 >;  /**< BOD33 Synchronization Ready Interrupt Enable   */
    using DPLLLCKR    = regbits< type, 15,  1 >;  /**< DPLL Lock Rise Interrupt Enable                */
    using DPLLLCKF    = regbits< type, 16,  1 >;  /**< DPLL Lock Fall Interrupt Enable                */
    using DPLLLTO     = regbits< type, 17,  1 >;  /**< DPLL Lock Timeout Interrupt Enable             */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using XOSCRDY     = regbits< type,  0,  1 >;  /**< XOSC Ready                    */
    using XOSC32KRDY  = regbits< type,  1,  1 >;  /**< XOSC32K Ready                 */
    using OSC32KRDY   = regbits< type,  2,  1 >;  /**< OSC32K Ready                  */
    using OSC8MRDY    = regbits< type,  3,  1 >;  /**< OSC8M Ready                   */
    using DFLLRDY     = regbits< type,  4,  1 >;  /**< DFLL Ready                    */
    using DFLLOOB     = regbits< type,  5,  1 >;  /**< DFLL Out Of Bounds            */
    using DFLLLCKF    = regbits< type,  6,  1 >;  /**< DFLL Lock Fine                */
    using DFLLLCKC    = regbits< type,  7,  1 >;  /**< DFLL Lock Coarse              */
    using DFLLRCS     = regbits< type,  8,  1 >;  /**< DFLL Reference Clock Stopped  */
    using BOD33RDY    = regbits< type,  9,  1 >;  /**< BOD33 Ready                   */
    using BOD33DET    = regbits< type, 10,  1 >;  /**< BOD33 Detection               */
    using B33SRDY     = regbits< type, 11,  1 >;  /**< BOD33 Synchronization Ready   */
    using DPLLLCKR    = regbits< type, 15,  1 >;  /**< DPLL Lock Rise                */
    using DPLLLCKF    = regbits< type, 16,  1 >;  /**< DPLL Lock Fall                */
    using DPLLLTO     = regbits< type, 17,  1 >;  /**< DPLL Lock Timeout             */
  };

  /**
   * 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
   */
  struct OSCULP32K
  : public reg< uint8_t, base_addr + 0x1c, rw, 0x1F >
  {
    using type = reg< uint8_t, base_addr + 0x1c, rw, 0x1F >;

    using CALIB    = regbits< type,  0,  5 >;  /**< Oscillator Calibration  */
    using WRTLOCK  = regbits< type,  7,  1 >;  /**< Write Lock              */
  };

  /**
   * 8MHz Internal Oscillator (OSC8M) Control
   */
  struct OSC8M
  : public reg< uint32_t, base_addr + 0x20, rw, 0x87070382 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x87070382 >;

    using ENABLE    = regbits< type,  1,  1 >;  /**< Oscillator Enable           */
    using RUNSTDBY  = regbits< type,  6,  1 >;  /**< Run in Standby              */
    using ONDEMAND  = regbits< type,  7,  1 >;  /**< On Demand Control           */
    using PRESC     = regbits< type,  8,  2 >;  /**< Oscillator Prescaler        */
    using CALIB     = regbits< type, 16, 12 >;  /**< Oscillator Calibration      */
    using FRANGE    = regbits< type, 30,  2 >;  /**< Oscillator Frequency Range  */
  };

  /**
   * 32kHz Internal Oscillator (OSC32K) Control
   */
  struct OSC32K
  : public reg< uint32_t, base_addr + 0x18, rw, 0x003F0080 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x003F0080 >;

    using ENABLE    = regbits< type,  1,  1 >;  /**< Oscillator Enable         */
    using EN32K     = regbits< type,  2,  1 >;  /**< 32kHz Output Enable       */
    using EN1K      = regbits< type,  3,  1 >;  /**< 1kHz Output Enable        */
    using RUNSTDBY  = regbits< type,  6,  1 >;  /**< Run in Standby            */
    using ONDEMAND  = regbits< type,  7,  1 >;  /**< On Demand Control         */
    using STARTUP   = regbits< type,  8,  3 >;  /**< Oscillator Start-Up Time  */
    using WRTLOCK   = regbits< type, 12,  1 >;  /**< Write Lock                */
    using CALIB     = regbits< type, 16,  7 >;  /**< Oscillator Calibration    */
  };

  /**
   * Power and Clocks Status
   */
  struct PCLKSR
  : public reg< uint32_t, base_addr + 0x0c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using XOSCRDY     = regbits< type,  0,  1 >;  /**< XOSC Ready                    */
    using XOSC32KRDY  = regbits< type,  1,  1 >;  /**< XOSC32K Ready                 */
    using OSC32KRDY   = regbits< type,  2,  1 >;  /**< OSC32K Ready                  */
    using OSC8MRDY    = regbits< type,  3,  1 >;  /**< OSC8M Ready                   */
    using DFLLRDY     = regbits< type,  4,  1 >;  /**< DFLL Ready                    */
    using DFLLOOB     = regbits< type,  5,  1 >;  /**< DFLL Out Of Bounds            */
    using DFLLLCKF    = regbits< type,  6,  1 >;  /**< DFLL Lock Fine                */
    using DFLLLCKC    = regbits< type,  7,  1 >;  /**< DFLL Lock Coarse              */
    using DFLLRCS     = regbits< type,  8,  1 >;  /**< DFLL Reference Clock Stopped  */
    using BOD33RDY    = regbits< type,  9,  1 >;  /**< BOD33 Ready                   */
    using BOD33DET    = regbits< type, 10,  1 >;  /**< BOD33 Detection               */
    using B33SRDY     = regbits< type, 11,  1 >;  /**< BOD33 Synchronization Ready   */
    using DPLLLCKR    = regbits< type, 15,  1 >;  /**< DPLL Lock Rise                */
    using DPLLLCKF    = regbits< type, 16,  1 >;  /**< DPLL Lock Fall                */
    using DPLLLTO     = regbits< type, 17,  1 >;  /**< DPLL Lock Timeout             */
  };

  /**
   * Voltage References System (VREF) Control
   */
  struct VREF
  : public reg< uint32_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TSEN     = regbits< type,  1,  1 >;  /**< Temperature Sensor Enable              */
    using BGOUTEN  = regbits< type,  2,  1 >;  /**< Bandgap Output Enable                  */
    using CALIB    = regbits< type, 16, 11 >;  /**< Bandgap Voltage Generator Calibration  */
  };

  /**
   * External Multipurpose Crystal Oscillator (XOSC) Control
   */
  struct XOSC
  : public reg< uint16_t, base_addr + 0x10, rw, 0x0080 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0x0080 >;

    using ENABLE    = regbits< type,  1,  1 >;  /**< Oscillator Enable                 */
    using XTALEN    = regbits< type,  2,  1 >;  /**< Crystal Oscillator Enable         */
    using RUNSTDBY  = regbits< type,  6,  1 >;  /**< Run in Standby                    */
    using ONDEMAND  = regbits< type,  7,  1 >;  /**< On Demand Control                 */
    using GAIN      = regbits< type,  8,  3 >;  /**< Oscillator Gain                   */
    using AMPGC     = regbits< type, 11,  1 >;  /**< Automatic Amplitude Gain Control  */
    using STARTUP   = regbits< type, 12,  4 >;  /**< Start-Up Time                     */
  };

  /**
   * 32kHz External Crystal Oscillator (XOSC32K) Control
   */
  struct XOSC32K
  : public reg< uint16_t, base_addr + 0x14, rw, 0x0080 >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0x0080 >;

    using ENABLE    = regbits< type,  1,  1 >;  /**< Oscillator Enable                   */
    using XTALEN    = regbits< type,  2,  1 >;  /**< Crystal Oscillator Enable           */
    using EN32K     = regbits< type,  3,  1 >;  /**< 32kHz Output Enable                 */
    using EN1K      = regbits< type,  4,  1 >;  /**< 1kHz Output Enable                  */
    using AAMPEN    = regbits< type,  5,  1 >;  /**< Automatic Amplitude Control Enable  */
    using RUNSTDBY  = regbits< type,  6,  1 >;  /**< Run in Standby                      */
    using ONDEMAND  = regbits< type,  7,  1 >;  /**< On Demand Control                   */
    using STARTUP   = regbits< type,  8,  3 >;  /**< Oscillator Start-Up Time            */
    using WRTLOCK   = regbits< type, 12,  1 >;  /**< Write Lock                          */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSCTRL_HPP_INCLUDED
