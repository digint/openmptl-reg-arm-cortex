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
//  Import from CMSIS-SVD: "Fujitsu/MB9AF1AxN.svd"
//
//  name: MB9AF1AxN
//  version: 1.1
//  description: MB9AF1AxN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_INTREQ_HPP_INCLUDED
#define ARCH_REG_INTREQ_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Interrupts
 */
struct INTREQ
{
  static constexpr reg_addr_t base_addr = 0x40031000;

  /**
   * EXC02 batch read register
   */
  struct EXC02MON
  : public reg< uint32_t, base_addr + 0x10, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x0 >;

    using HWINT  = regbits< type,  1,  1 >;  /**< Hardware watchdog timer interrupt request  */
    using NMI    = regbits< type,  0,  1 >;  /**< External NMIX pin interrupt request        */
  };

  /**
   * IRQ00 Batch Read Register
   */
  struct IRQ00MON
  : public reg< uint32_t, base_addr + 0x14, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x0 >;

    using FCSINT  = regbits< type,  0,  1 >;  /**< Anomalous frequency detection by CSV interrupt request  */
  };

  /**
   * IRQ01 Batch Read Register
   */
  struct IRQ01MON
  : public reg< uint32_t, base_addr + 0x18, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x0 >;

    using SWWDTINT  = regbits< type,  0,  1 >;  /**< Software watchdog timer interrupt request  */
  };

  /**
   * IRQ02 Batch Read Register
   */
  struct IRQ02MON
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x0 >;

    using LVDINT  = regbits< type,  0,  1 >;  /**< Low voltage detection (LVD) interrupt request  */
  };

  /**
   * IRQ03 Batch Read Register
   */
  struct IRQ03MON
  : public reg< uint32_t, base_addr + 0x20, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x0 >;

    using WAVE0INT3  = regbits< type,  3,  1 >;  /**< WFG timer 54 interrupt request in MFT unit 0                 */
    using WAVE0INT2  = regbits< type,  2,  1 >;  /**< WFG timer 32 interrupt request in MFT unit 0                 */
    using WAVE0INT1  = regbits< type,  1,  1 >;  /**< WFG timer 10 interrupt request in MFT unit 0                 */
    using WAVE0INT0  = regbits< type,  0,  1 >;  /**< DTIF (motor emergency stop) interrupt request in MFT unit 0  */
  };

  /**
   * IRQ04 Batch Read Register
   */
  struct IRQ04MON
  : public reg< uint32_t, base_addr + 0x24, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0x0 >;

    using EXTINT7  = regbits< type,  7,  1 >;  /**< Interrupt request on external interrupt ch.7  */
    using EXTINT6  = regbits< type,  6,  1 >;  /**< Interrupt request on external interrupt ch.6  */
    using EXTINT5  = regbits< type,  5,  1 >;  /**< Interrupt request on external interrupt ch.5  */
    using EXTINT4  = regbits< type,  4,  1 >;  /**< Interrupt request on external interrupt ch.4  */
    using EXTINT3  = regbits< type,  3,  1 >;  /**< Interrupt request on external interrupt ch.3  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< Interrupt request on external interrupt ch.2  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request on external interrupt ch.1  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request on external interrupt ch.0  */
  };

  /**
   * IRQ05 Batch Read Register
   */
  struct IRQ05MON
  : public reg< uint32_t, base_addr + 0x28, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0x0 >;

    using EXTINT15  = regbits< type,  7,  1 >;  /**< Interrupt request on external interrupt ch.15  */
    using EXTINT14  = regbits< type,  6,  1 >;  /**< Interrupt request on external interrupt ch.14  */
    using EXTINT13  = regbits< type,  5,  1 >;  /**< Interrupt request on external interrupt ch.13  */
    using EXTINT12  = regbits< type,  4,  1 >;  /**< Interrupt request on external interrupt ch.12  */
    using EXTINT11  = regbits< type,  3,  1 >;  /**< Interrupt request on external interrupt ch.11  */
    using EXTINT10  = regbits< type,  2,  1 >;  /**< Interrupt request on external interrupt ch.10  */
    using EXTINT9   = regbits< type,  1,  1 >;  /**< Interrupt request on external interrupt ch.9   */
    using EXTINT8   = regbits< type,  0,  1 >;  /**< Interrupt request on external interrupt ch.8   */
  };

  /**
   * IRQ06 Batch Read Register
   */
  struct IRQ06MON
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.0  */
  };

  /**
   * IRQ07 Batch Read Register
   */
  struct IRQ07MON
  : public reg< uint32_t, base_addr + 0x30, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.0        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.0  */
  };

  /**
   * IRQ08 Batch Read Register
   */
  struct IRQ08MON
  : public reg< uint32_t, base_addr + 0x34, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.1  */
  };

  /**
   * IRQ9 Batch Read Register
   */
  struct IRQ09MON
  : public reg< uint32_t, base_addr + 0x38, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.1        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.1  */
  };

  /**
   * IRQ10 Batch Read Register
   */
  struct IRQ10MON
  : public reg< uint32_t, base_addr + 0x3c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.2  */
  };

  /**
   * IRQ11 Batch Read Register
   */
  struct IRQ11MON
  : public reg< uint32_t, base_addr + 0x40, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.2        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.2  */
  };

  /**
   * IRQ12 Batch Read Register
   */
  struct IRQ12MON
  : public reg< uint32_t, base_addr + 0x44, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.3  */
  };

  /**
   * IRQ13 Batch Read Register
   */
  struct IRQ13MON
  : public reg< uint32_t, base_addr + 0x48, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.3        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.3  */
  };

  /**
   * IRQ14 Batch Read Register
   */
  struct IRQ14MON
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.4  */
  };

  /**
   * IRQ15 Batch Read Register
   */
  struct IRQ15MON
  : public reg< uint32_t, base_addr + 0x50, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.4        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.4  */
  };

  /**
   * IRQ16 Batch Read Register
   */
  struct IRQ16MON
  : public reg< uint32_t, base_addr + 0x54, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.5  */
  };

  /**
   * IRQ17 Batch Read Register
   */
  struct IRQ17MON
  : public reg< uint32_t, base_addr + 0x58, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.5        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.5  */
  };

  /**
   * IRQ18 Batch Read Register
   */
  struct IRQ18MON
  : public reg< uint32_t, base_addr + 0x5c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.6  */
  };

  /**
   * IRQ19 Batch Read Register
   */
  struct IRQ19MON
  : public reg< uint32_t, base_addr + 0x60, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.6        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.6  */
  };

  /**
   * IRQ20 Batch Read Register
   */
  struct IRQ20MON
  : public reg< uint32_t, base_addr + 0x64, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.7  */
  };

  /**
   * IRQ21 Batch Read Register
   */
  struct IRQ21MON
  : public reg< uint32_t, base_addr + 0x68, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.7        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.7  */
  };

  /**
   * IRQ22 Batch Read Register
   */
  struct IRQ22MON
  : public reg< uint32_t, base_addr + 0x6c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, ro, 0x0 >;

    using PPGINT2  = regbits< type,  2,  1 >;  /**< Interrupt request on PPG ch.4  */
    using PPGINT1  = regbits< type,  1,  1 >;  /**< Interrupt request on PPG ch.2  */
    using PPGINT0  = regbits< type,  0,  1 >;  /**< Interrupt request on PPG ch.0  */
  };

  /**
   * IRQ23 Batch Read Register
   */
  struct IRQ23MON
  : public reg< uint32_t, base_addr + 0x70, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0x0 >;

    using RTCINT   = regbits< type,  5,  1 >;  /**< RTC interrupt request                                                       */
    using MPLLINT  = regbits< type,  2,  1 >;  /**< Stabilization wait completion interrupt request for main PLL oscillation    */
    using SOSCINT  = regbits< type,  1,  1 >;  /**< Stabilization wait completion interrupt request for sub-clock oscillation   */
    using MOSCINT  = regbits< type,  0,  1 >;  /**< Stabilization wait completion interrupt request for main clock oscillation  */
  };

  /**
   * IRQ24 Batch Read Register
   */
  struct IRQ24MON
  : public reg< uint32_t, base_addr + 0x74, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0x0 >;

    using ADCINT3  = regbits< type,  3,  1 >;  /**< Conversion result comparison interrupt request in the corresponding A/D unit 0.  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< FIFO overrun interrupt request in the corresponding A/D unit 0.                  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< Scan conversion interrupt request in the corresponding A/D unit 0.               */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< Priority conversion interrupt request in the corresponding A/D unit 0.           */
  };

  /**
   * IRQ25 Batch Read Register
   */
  struct IRQ25MON
  : public reg< uint32_t, base_addr + 0x78, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, ro, 0x0 >;

    using FRT0INT5  = regbits< type,  5,  1 >;  /**< Zero detection interrupt request on the free run timer ch.2 in the MFT unit 0        */
    using FRT0INT4  = regbits< type,  4,  1 >;  /**< Zero detection interrupt request on the free run timer ch.1 in the MFT unit 0        */
    using FRT0INT3  = regbits< type,  3,  1 >;  /**< Zero detection interrupt request on the free run timer ch.0 in the MFT unit 0        */
    using FRT0INT2  = regbits< type,  2,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.2 in the MFT unit 0  */
    using FRT0INT1  = regbits< type,  1,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.1 in the MFT unit 0  */
    using FRT0INT0  = regbits< type,  0,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.0 in the MFT unit 0  */
  };

  /**
   * IRQ26 Batch Read Register
   */
  struct IRQ26MON
  : public reg< uint32_t, base_addr + 0x7c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, ro, 0x0 >;

    using ICU0INT3  = regbits< type,  3,  1 >;  /**< Interrupt request on the input capture ch.3 in the MFT unit 0  */
    using ICU0INT2  = regbits< type,  2,  1 >;  /**< Interrupt request on the input capture ch.2 in the MFT unit 0  */
    using ICU0INT1  = regbits< type,  1,  1 >;  /**< Interrupt request on the input capture ch.1 in the MFT unit 0  */
    using ICU0INT0  = regbits< type,  0,  1 >;  /**< Interrupt request on the input capture ch.0 in the MFT unit 0  */
  };

  /**
   * IRQ27 Batch Read Register
   */
  struct IRQ27MON
  : public reg< uint32_t, base_addr + 0x80, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, ro, 0x0 >;

    using OCU0INT5  = regbits< type,  5,  1 >;  /**< Interrupt request on the output compare ch.5 in the MFT unit 0  */
    using OCU0INT4  = regbits< type,  4,  1 >;  /**< Interrupt request on the output compare ch.4 in the MFT unit 0  */
    using OCU0INT3  = regbits< type,  3,  1 >;  /**< Interrupt request on the output compare ch.3 in the MFT unit 0  */
    using OCU0INT2  = regbits< type,  2,  1 >;  /**< Interrupt request on the output compare ch.2 in the MFT unit 0  */
    using OCU0INT1  = regbits< type,  1,  1 >;  /**< Interrupt request on the output compare ch.1 in the MFT unit 0  */
    using OCU0INT0  = regbits< type,  0,  1 >;  /**< Interrupt request on the output compare ch.0 in the MFT unit 0  */
  };

  /**
   * IRQ28 Batch Read Register
   */
  struct IRQ28MON
  : public reg< uint32_t, base_addr + 0x84, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x0 >;

    using BTINT15  = regbits< type, 15,  1 >;  /**< IRQ1 interrupt request on the base timer ch.7  */
    using BTINT14  = regbits< type, 14,  1 >;  /**< IRQ0 interrupt request on the base timer ch.7  */
    using BTINT13  = regbits< type, 13,  1 >;  /**< IRQ1 interrupt request on the base timer ch.6  */
    using BTINT12  = regbits< type, 12,  1 >;  /**< IRQ0 interrupt request on the base timer ch.6  */
    using BTINT11  = regbits< type, 11,  1 >;  /**< IRQ1 interrupt request on the base timer ch.5  */
    using BTINT10  = regbits< type, 10,  1 >;  /**< IRQ0 interrupt request on the base timer ch.5  */
    using BTINT9   = regbits< type,  9,  1 >;  /**< IRQ1 interrupt request on the base timer ch.4  */
    using BTINT8   = regbits< type,  8,  1 >;  /**< IRQ0 interrupt request on the base timer ch.4  */
    using BTINT7   = regbits< type,  7,  1 >;  /**< IRQ1 interrupt request on the base timer ch.3  */
    using BTINT6   = regbits< type,  6,  1 >;  /**< IRQ0 interrupt request on the base timer ch.3  */
    using BTINT5   = regbits< type,  5,  1 >;  /**< IRQ1 interrupt request on the base timer ch.2  */
    using BTINT4   = regbits< type,  4,  1 >;  /**< IRQ0 interrupt request on the base timer ch.2  */
    using BTINT3   = regbits< type,  3,  1 >;  /**< IRQ1 interrupt request on the base timer ch.1  */
    using BTINT2   = regbits< type,  2,  1 >;  /**< IRQ0 interrupt request on the base timer ch.1  */
    using BTINT1   = regbits< type,  1,  1 >;  /**< IRQ1 interrupt request on the base timer ch.0  */
    using BTINT0   = regbits< type,  0,  1 >;  /**< IRQ0 interrupt request on the base timer ch.0  */
  };

  /**
   * IRQ30 Batch Read Register
   */
  struct IRQ30MON
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x0 >;

    using RCEC0INT  = regbits< type,  5,  1 >;  /**< Interrupt request for HDMI-CEC/Remote Control Reception ch.0  */
  };

  /**
   * IRQ31 Batch Read Register
   */
  struct IRQ31MON
  : public reg< uint32_t, base_addr + 0x90, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x0 >;

    using RCEC1INT  = regbits< type,  6,  1 >;  /**< Interrupt request for HDMI-CEC/Remote Control Reception ch.1  */
  };
};
} // namespace mptl

#endif // ARCH_REG_INTREQ_HPP_INCLUDED
