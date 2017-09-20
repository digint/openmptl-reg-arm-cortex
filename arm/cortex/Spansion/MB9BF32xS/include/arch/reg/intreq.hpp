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
//  Import from CMSIS-SVD: "Spansion/MB9BF32xS.svd"
//
//  name: MB9BF32xS
//  version: 1.0
//  description: MB9BF32xS
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
 * peripheral INTREQ
 */
struct INTREQ
{
  static constexpr reg_addr_t base_addr = 0x40031000;

  /**
   * register DRQSEL
   */
  struct DRQSEL
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using EXINT3    = regbits< type, 31,  1 >;  /**< bitfield EXINT3    */
    using EXINT2    = regbits< type, 30,  1 >;  /**< bitfield EXINT2    */
    using EXINT1    = regbits< type, 29,  1 >;  /**< bitfield EXINT1    */
    using EXINT0    = regbits< type, 28,  1 >;  /**< bitfield EXINT0    */
    using MFS7TX    = regbits< type, 27,  1 >;  /**< bitfield MFS7TX    */
    using MFS7RX    = regbits< type, 26,  1 >;  /**< bitfield MFS7RX    */
    using MFS6TX    = regbits< type, 25,  1 >;  /**< bitfield MFS6TX    */
    using MFS6RX    = regbits< type, 24,  1 >;  /**< bitfield MFS6RX    */
    using MFS5TX    = regbits< type, 23,  1 >;  /**< bitfield MFS5TX    */
    using MFS5RX    = regbits< type, 22,  1 >;  /**< bitfield MFS5RX    */
    using MFS4TX    = regbits< type, 21,  1 >;  /**< bitfield MFS4TX    */
    using MFS4RX    = regbits< type, 20,  1 >;  /**< bitfield MFS4RX    */
    using MFS3TX    = regbits< type, 19,  1 >;  /**< bitfield MFS3TX    */
    using MFS3RX    = regbits< type, 18,  1 >;  /**< bitfield MFS3RX    */
    using MFS2TX    = regbits< type, 17,  1 >;  /**< bitfield MFS2TX    */
    using MFS2RX    = regbits< type, 16,  1 >;  /**< bitfield MFS2RX    */
    using MFS1TX    = regbits< type, 15,  1 >;  /**< bitfield MFS1TX    */
    using MFS1RX    = regbits< type, 14,  1 >;  /**< bitfield MFS1RX    */
    using MFS0TX    = regbits< type, 13,  1 >;  /**< bitfield MFS0TX    */
    using MFS0RX    = regbits< type, 12,  1 >;  /**< bitfield MFS0RX    */
    using IRQ0BT6   = regbits< type, 11,  1 >;  /**< bitfield IRQ0BT6   */
    using IRQ0BT4   = regbits< type, 10,  1 >;  /**< bitfield IRQ0BT4   */
    using IRQ0BT2   = regbits< type,  9,  1 >;  /**< bitfield IRQ0BT2   */
    using IRQ0BT0   = regbits< type,  8,  1 >;  /**< bitfield IRQ0BT0   */
    using ADCSCAN2  = regbits< type,  7,  1 >;  /**< bitfield ADCSCAN2  */
    using ADCSCAN1  = regbits< type,  6,  1 >;  /**< bitfield ADCSCAN1  */
    using ADCSCAN0  = regbits< type,  5,  1 >;  /**< bitfield ADCSCAN0  */
    using USBEP5    = regbits< type,  4,  1 >;  /**< bitfield USBEP5    */
    using USBEP4    = regbits< type,  3,  1 >;  /**< bitfield USBEP4    */
    using USBEP3    = regbits< type,  2,  1 >;  /**< bitfield USBEP3    */
    using USBEP2    = regbits< type,  1,  1 >;  /**< bitfield USBEP2    */
    using USBEP1    = regbits< type,  0,  1 >;  /**< bitfield USBEP1    */
  };

  /**
   * register ODDPKS
   */
  struct ODDPKS
  : public reg< uint8_t, base_addr + 0xb, rw, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0x0 >;

    using ODDPKS4  = regbits< type,  4,  1 >;  /**< bitfield ODDPKS4  */
    using ODDPKS3  = regbits< type,  3,  1 >;  /**< bitfield ODDPKS3  */
    using ODDPKS2  = regbits< type,  2,  1 >;  /**< bitfield ODDPKS2  */
    using ODDPKS1  = regbits< type,  1,  1 >;  /**< bitfield ODDPKS1  */
    using ODDPKS0  = regbits< type,  0,  1 >;  /**< bitfield ODDPKS0  */
  };

  /**
   * register IRQCMODE
   */
  struct IRQCMODE
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    // fixme: Field name equals parent register name: IRQCMODE
    using IRQCMODE_ = regbits< type,  0,  1 >;  /**< bitfield IRQCMODE  */
  };

  /**
   * register EXC02MON
   */
  struct EXC02MON
  : public reg< uint32_t, base_addr + 0x10, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x0 >;

    using HWINT  = regbits< type,  1,  1 >;  /**< bitfield HWINT  */
    using NMI    = regbits< type,  0,  1 >;  /**< bitfield NMI    */
  };

  /**
   * register IRQ00MON
   */
  struct IRQ00MON
  : public reg< uint32_t, base_addr + 0x14, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x0 >;

    using FCSINT  = regbits< type,  0,  1 >;  /**< bitfield FCSINT  */
  };

  /**
   * register IRQ01MON
   */
  struct IRQ01MON
  : public reg< uint32_t, base_addr + 0x18, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x0 >;

    using SWWDTINT  = regbits< type,  0,  1 >;  /**< bitfield SWWDTINT  */
  };

  /**
   * register IRQ02MON
   */
  struct IRQ02MON
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x0 >;

    using LVDINT  = regbits< type,  0,  1 >;  /**< bitfield LVDINT  */
  };

  /**
   * register IRQ03MON
   */
  struct IRQ03MON
  : public reg< uint32_t, base_addr + 0x20, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x0 >;

    using WAVE0INT3  = regbits< type,  3,  1 >;  /**< bitfield WAVE0INT3  */
    using WAVE0INT2  = regbits< type,  2,  1 >;  /**< bitfield WAVE0INT2  */
    using WAVE0INT1  = regbits< type,  1,  1 >;  /**< bitfield WAVE0INT1  */
    using WAVE0INT0  = regbits< type,  0,  1 >;  /**< bitfield WAVE0INT0  */
  };

  /**
   * register IRQ04MON
   */
  struct IRQ04MON
  : public reg< uint32_t, base_addr + 0x24, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0x0 >;

    using EXTINT7  = regbits< type,  7,  1 >;  /**< bitfield EXTINT7  */
    using EXTINT6  = regbits< type,  6,  1 >;  /**< bitfield EXTINT6  */
    using EXTINT5  = regbits< type,  5,  1 >;  /**< bitfield EXTINT5  */
    using EXTINT4  = regbits< type,  4,  1 >;  /**< bitfield EXTINT4  */
    using EXTINT3  = regbits< type,  3,  1 >;  /**< bitfield EXTINT3  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< bitfield EXTINT2  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< bitfield EXTINT1  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< bitfield EXTINT0  */
  };

  /**
   * register IRQ05MON
   */
  struct IRQ05MON
  : public reg< uint32_t, base_addr + 0x28, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0x0 >;

    using EXTINT23  = regbits< type, 23,  1 >;  /**< bitfield EXTINT23  */
    using EXTINT22  = regbits< type, 22,  1 >;  /**< bitfield EXTINT22  */
    using EXTINT21  = regbits< type, 21,  1 >;  /**< bitfield EXTINT21  */
    using EXTINT20  = regbits< type, 20,  1 >;  /**< bitfield EXTINT20  */
    using EXTINT19  = regbits< type, 19,  1 >;  /**< bitfield EXTINT19  */
    using EXTINT18  = regbits< type, 18,  1 >;  /**< bitfield EXTINT18  */
    using EXTINT17  = regbits< type, 17,  1 >;  /**< bitfield EXTINT17  */
    using EXTINT16  = regbits< type, 16,  1 >;  /**< bitfield EXTINT16  */
    using EXTINT15  = regbits< type, 15,  1 >;  /**< bitfield EXTINT15  */
    using EXTINT14  = regbits< type, 14,  1 >;  /**< bitfield EXTINT14  */
    using EXTINT13  = regbits< type, 13,  1 >;  /**< bitfield EXTINT13  */
    using EXTINT12  = regbits< type, 12,  1 >;  /**< bitfield EXTINT12  */
    using EXTINT11  = regbits< type, 11,  1 >;  /**< bitfield EXTINT11  */
    using EXTINT10  = regbits< type, 10,  1 >;  /**< bitfield EXTINT10  */
    using EXTINT9   = regbits< type,  9,  1 >;  /**< bitfield EXTINT9   */
    using EXTINT8   = regbits< type,  8,  1 >;  /**< bitfield EXTINT8   */
    using EXTINT7   = regbits< type,  7,  1 >;  /**< bitfield EXTINT7   */
    using EXTINT6   = regbits< type,  6,  1 >;  /**< bitfield EXTINT6   */
    using EXTINT5   = regbits< type,  5,  1 >;  /**< bitfield EXTINT5   */
    using EXTINT4   = regbits< type,  4,  1 >;  /**< bitfield EXTINT4   */
    using EXTINT3   = regbits< type,  3,  1 >;  /**< bitfield EXTINT3   */
    using EXTINT2   = regbits< type,  2,  1 >;  /**< bitfield EXTINT2   */
    using EXTINT1   = regbits< type,  1,  1 >;  /**< bitfield EXTINT1   */
    using EXTINT0   = regbits< type,  0,  1 >;  /**< bitfield EXTINT0   */
  };

  /**
   * register IRQ06MON
   */
  struct IRQ06MON
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x0 >;

    using QUD0INT5  = regbits< type,  7,  1 >;  /**< bitfield QUD0INT5  */
    using QUD0INT4  = regbits< type,  6,  1 >;  /**< bitfield QUD0INT4  */
    using QUD0INT3  = regbits< type,  5,  1 >;  /**< bitfield QUD0INT3  */
    using QUD0INT2  = regbits< type,  4,  1 >;  /**< bitfield QUD0INT2  */
    using QUD0INT1  = regbits< type,  3,  1 >;  /**< bitfield QUD0INT1  */
    using QUD0INT0  = regbits< type,  2,  1 >;  /**< bitfield QUD0INT0  */
    using TIMINT2   = regbits< type,  1,  1 >;  /**< bitfield TIMINT2   */
    using TIMINT1   = regbits< type,  0,  1 >;  /**< bitfield TIMINT1   */
  };

  /**
   * register IRQ07MON
   */
  struct IRQ07MON
  : public reg< uint32_t, base_addr + 0x30, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ08MON
   */
  struct IRQ08MON
  : public reg< uint32_t, base_addr + 0x34, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x0 >;

    using MFSINT3  = regbits< type,  3,  1 >;  /**< bitfield MFSINT3  */
    using MFSINT2  = regbits< type,  2,  1 >;  /**< bitfield MFSINT2  */
    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ09MON
   */
  struct IRQ09MON
  : public reg< uint32_t, base_addr + 0x38, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ10MON
   */
  struct IRQ10MON
  : public reg< uint32_t, base_addr + 0x3c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0x0 >;

    using MFSINT3  = regbits< type,  3,  1 >;  /**< bitfield MFSINT3  */
    using MFSINT2  = regbits< type,  2,  1 >;  /**< bitfield MFSINT2  */
    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ11MON
   */
  struct IRQ11MON
  : public reg< uint32_t, base_addr + 0x40, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ12MON
   */
  struct IRQ12MON
  : public reg< uint32_t, base_addr + 0x44, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0x0 >;

    using MFSINT3  = regbits< type,  3,  1 >;  /**< bitfield MFSINT3  */
    using MFSINT2  = regbits< type,  2,  1 >;  /**< bitfield MFSINT2  */
    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ13MON
   */
  struct IRQ13MON
  : public reg< uint32_t, base_addr + 0x48, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ14MON
   */
  struct IRQ14MON
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x0 >;

    using MFSINT3  = regbits< type,  3,  1 >;  /**< bitfield MFSINT3  */
    using MFSINT2  = regbits< type,  2,  1 >;  /**< bitfield MFSINT2  */
    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ15MON
   */
  struct IRQ15MON
  : public reg< uint32_t, base_addr + 0x50, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ16MON
   */
  struct IRQ16MON
  : public reg< uint32_t, base_addr + 0x54, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0x0 >;

    using MFSINT3  = regbits< type,  3,  1 >;  /**< bitfield MFSINT3  */
    using MFSINT2  = regbits< type,  2,  1 >;  /**< bitfield MFSINT2  */
    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ17MON
   */
  struct IRQ17MON
  : public reg< uint32_t, base_addr + 0x58, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ18MON
   */
  struct IRQ18MON
  : public reg< uint32_t, base_addr + 0x5c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0x0 >;

    using MFSINT3  = regbits< type,  3,  1 >;  /**< bitfield MFSINT3  */
    using MFSINT2  = regbits< type,  2,  1 >;  /**< bitfield MFSINT2  */
    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ19MON
   */
  struct IRQ19MON
  : public reg< uint32_t, base_addr + 0x60, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ20MON
   */
  struct IRQ20MON
  : public reg< uint32_t, base_addr + 0x64, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, ro, 0x0 >;

    using MFSINT3  = regbits< type,  3,  1 >;  /**< bitfield MFSINT3  */
    using MFSINT2  = regbits< type,  2,  1 >;  /**< bitfield MFSINT2  */
    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ21MON
   */
  struct IRQ21MON
  : public reg< uint32_t, base_addr + 0x68, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ22MON
   */
  struct IRQ22MON
  : public reg< uint32_t, base_addr + 0x6c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, ro, 0x0 >;

    using MFSINT3  = regbits< type,  3,  1 >;  /**< bitfield MFSINT3  */
    using MFSINT2  = regbits< type,  2,  1 >;  /**< bitfield MFSINT2  */
    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ23MON
   */
  struct IRQ23MON
  : public reg< uint32_t, base_addr + 0x70, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0x0 >;

    using PPGINT2  = regbits< type,  2,  1 >;  /**< bitfield PPGINT2  */
    using PPGINT1  = regbits< type,  1,  1 >;  /**< bitfield PPGINT1  */
    using PPGINT0  = regbits< type,  0,  1 >;  /**< bitfield PPGINT0  */
  };

  /**
   * register IRQ24MON
   */
  struct IRQ24MON
  : public reg< uint32_t, base_addr + 0x74, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0x0 >;

    using RTCINT   = regbits< type,  5,  1 >;  /**< bitfield RTCINT   */
    using WCINT    = regbits< type,  4,  1 >;  /**< bitfield WCINT    */
    using UPLLINT  = regbits< type,  3,  1 >;  /**< bitfield UPLLINT  */
    using MPLLINT  = regbits< type,  2,  1 >;  /**< bitfield MPLLINT  */
    using SOSCINT  = regbits< type,  1,  1 >;  /**< bitfield SOSCINT  */
    using MOSCINT  = regbits< type,  0,  1 >;  /**< bitfield MOSCINT  */
  };

  /**
   * register IRQ25MON
   */
  struct IRQ25MON
  : public reg< uint32_t, base_addr + 0x78, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, ro, 0x0 >;

    using ADCINT3  = regbits< type,  3,  1 >;  /**< bitfield ADCINT3  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< bitfield ADCINT2  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< bitfield ADCINT1  */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< bitfield ADCINT0  */
  };

  /**
   * register IRQ26MON
   */
  struct IRQ26MON
  : public reg< uint32_t, base_addr + 0x7c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, ro, 0x0 >;

    using ADCINT3  = regbits< type,  3,  1 >;  /**< bitfield ADCINT3  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< bitfield ADCINT2  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< bitfield ADCINT1  */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< bitfield ADCINT0  */
  };

  /**
   * register IRQ27MON
   */
  struct IRQ27MON
  : public reg< uint32_t, base_addr + 0x80, ro, 0x0 >
  {
  };

  /**
   * register IRQ28MON
   */
  struct IRQ28MON
  : public reg< uint32_t, base_addr + 0x84, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, ro, 0x0 >;

    using FRT0INT5  = regbits< type,  5,  1 >;  /**< bitfield FRT0INT5  */
    using FRT0INT4  = regbits< type,  4,  1 >;  /**< bitfield FRT0INT4  */
    using FRT0INT3  = regbits< type,  3,  1 >;  /**< bitfield FRT0INT3  */
    using FRT0INT2  = regbits< type,  2,  1 >;  /**< bitfield FRT0INT2  */
    using FRT0INT1  = regbits< type,  1,  1 >;  /**< bitfield FRT0INT1  */
    using FRT0INT0  = regbits< type,  0,  1 >;  /**< bitfield FRT0INT0  */
  };

  /**
   * register IRQ29MON
   */
  struct IRQ29MON
  : public reg< uint32_t, base_addr + 0x88, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, ro, 0x0 >;

    using ICU0INT3  = regbits< type,  3,  1 >;  /**< bitfield ICU0INT3  */
    using ICU0INT2  = regbits< type,  2,  1 >;  /**< bitfield ICU0INT2  */
    using ICU0INT1  = regbits< type,  1,  1 >;  /**< bitfield ICU0INT1  */
    using ICU0INT0  = regbits< type,  0,  1 >;  /**< bitfield ICU0INT0  */
  };

  /**
   * register IRQ30MON
   */
  struct IRQ30MON
  : public reg< uint32_t, base_addr + 0x8c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, ro, 0x0 >;

    using OCU0INT5  = regbits< type,  5,  1 >;  /**< bitfield OCU0INT5  */
    using OCU0INT4  = regbits< type,  4,  1 >;  /**< bitfield OCU0INT4  */
    using OCU0INT3  = regbits< type,  3,  1 >;  /**< bitfield OCU0INT3  */
    using OCU0INT2  = regbits< type,  2,  1 >;  /**< bitfield OCU0INT2  */
    using OCU0INT1  = regbits< type,  1,  1 >;  /**< bitfield OCU0INT1  */
    using OCU0INT0  = regbits< type,  0,  1 >;  /**< bitfield OCU0INT0  */
  };

  /**
   * register IRQ31MON
   */
  struct IRQ31MON
  : public reg< uint32_t, base_addr + 0x90, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, ro, 0x0 >;

    using BTINT15  = regbits< type, 15,  1 >;  /**< bitfield BTINT15  */
    using BTINT14  = regbits< type, 14,  1 >;  /**< bitfield BTINT14  */
    using BTINT13  = regbits< type, 13,  1 >;  /**< bitfield BTINT13  */
    using BTINT12  = regbits< type, 12,  1 >;  /**< bitfield BTINT12  */
    using BTINT11  = regbits< type, 11,  1 >;  /**< bitfield BTINT11  */
    using BTINT10  = regbits< type, 10,  1 >;  /**< bitfield BTINT10  */
    using BTINT9   = regbits< type,  9,  1 >;  /**< bitfield BTINT9   */
    using BTINT8   = regbits< type,  8,  1 >;  /**< bitfield BTINT8   */
    using BTINT7   = regbits< type,  7,  1 >;  /**< bitfield BTINT7   */
    using BTINT6   = regbits< type,  6,  1 >;  /**< bitfield BTINT6   */
    using BTINT5   = regbits< type,  5,  1 >;  /**< bitfield BTINT5   */
    using BTINT4   = regbits< type,  4,  1 >;  /**< bitfield BTINT4   */
    using BTINT3   = regbits< type,  3,  1 >;  /**< bitfield BTINT3   */
    using BTINT2   = regbits< type,  2,  1 >;  /**< bitfield BTINT2   */
    using BTINT1   = regbits< type,  1,  1 >;  /**< bitfield BTINT1   */
    using BTINT0   = regbits< type,  0,  1 >;  /**< bitfield BTINT0   */
  };

  /**
   * register IRQ32MON
   */
  struct IRQ32MON
  : public reg< uint32_t, base_addr + 0x94, ro, 0x0 >
  {
  };

  /**
   * register IRQ33MON
   */
  struct IRQ33MON
  : public reg< uint32_t, base_addr + 0x98, ro, 0x0 >
  {
  };

  /**
   * register IRQ34MON
   */
  struct IRQ34MON
  : public reg< uint32_t, base_addr + 0x9c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, ro, 0x0 >;

    using USB0INT4  = regbits< type,  4,  1 >;  /**< bitfield USB0INT4  */
    using USB0INT3  = regbits< type,  3,  1 >;  /**< bitfield USB0INT3  */
    using USB0INT2  = regbits< type,  2,  1 >;  /**< bitfield USB0INT2  */
    using USB0INT1  = regbits< type,  1,  1 >;  /**< bitfield USB0INT1  */
    using USB0INT0  = regbits< type,  0,  1 >;  /**< bitfield USB0INT0  */
  };

  /**
   * register IRQ35MON
   */
  struct IRQ35MON
  : public reg< uint32_t, base_addr + 0xa0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, ro, 0x0 >;

    using USB0INT5  = regbits< type,  5,  1 >;  /**< bitfield USB0INT5  */
    using USB0INT4  = regbits< type,  4,  1 >;  /**< bitfield USB0INT4  */
    using USB0INT3  = regbits< type,  3,  1 >;  /**< bitfield USB0INT3  */
    using USB0INT2  = regbits< type,  2,  1 >;  /**< bitfield USB0INT2  */
    using USB0INT1  = regbits< type,  1,  1 >;  /**< bitfield USB0INT1  */
    using USB0INT0  = regbits< type,  0,  1 >;  /**< bitfield USB0INT0  */
  };

  /**
   * register IRQ36MON
   */
  struct IRQ36MON
  : public reg< uint32_t, base_addr + 0xa4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, ro, 0x0 >;

    using RCEC0INT  = regbits< type,  5,  1 >;  /**< bitfield RCEC0INT  */
  };

  /**
   * register IRQ37MON
   */
  struct IRQ37MON
  : public reg< uint32_t, base_addr + 0xa8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, ro, 0x0 >;

    using RCEC1INT  = regbits< type,  6,  1 >;  /**< bitfield RCEC1INT  */
  };

  /**
   * register IRQ38MON
   */
  struct IRQ38MON
  : public reg< uint32_t, base_addr + 0xac, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xac, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< bitfield DMAINT  */
  };

  /**
   * register IRQ39MON
   */
  struct IRQ39MON
  : public reg< uint32_t, base_addr + 0xb0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< bitfield DMAINT  */
  };

  /**
   * register IRQ40MON
   */
  struct IRQ40MON
  : public reg< uint32_t, base_addr + 0xb4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< bitfield DMAINT  */
  };

  /**
   * register IRQ41MON
   */
  struct IRQ41MON
  : public reg< uint32_t, base_addr + 0xb8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< bitfield DMAINT  */
  };

  /**
   * register IRQ42MON
   */
  struct IRQ42MON
  : public reg< uint32_t, base_addr + 0xbc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< bitfield DMAINT  */
  };

  /**
   * register IRQ43MON
   */
  struct IRQ43MON
  : public reg< uint32_t, base_addr + 0xc0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< bitfield DMAINT  */
  };

  /**
   * register IRQ44MON
   */
  struct IRQ44MON
  : public reg< uint32_t, base_addr + 0xc4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< bitfield DMAINT  */
  };

  /**
   * register IRQ45MON
   */
  struct IRQ45MON
  : public reg< uint32_t, base_addr + 0xc8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< bitfield DMAINT  */
  };

  /**
   * register IRQ46MON
   */
  struct IRQ46MON
  : public reg< uint32_t, base_addr + 0xcc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, ro, 0x0 >;

    using BTINT15  = regbits< type, 15,  1 >;  /**< bitfield BTINT15  */
    using BTINT14  = regbits< type, 14,  1 >;  /**< bitfield BTINT14  */
    using BTINT13  = regbits< type, 13,  1 >;  /**< bitfield BTINT13  */
    using BTINT12  = regbits< type, 12,  1 >;  /**< bitfield BTINT12  */
    using BTINT11  = regbits< type, 11,  1 >;  /**< bitfield BTINT11  */
    using BTINT10  = regbits< type, 10,  1 >;  /**< bitfield BTINT10  */
    using BTINT9   = regbits< type,  9,  1 >;  /**< bitfield BTINT9   */
    using BTINT8   = regbits< type,  8,  1 >;  /**< bitfield BTINT8   */
    using BTINT7   = regbits< type,  7,  1 >;  /**< bitfield BTINT7   */
    using BTINT6   = regbits< type,  6,  1 >;  /**< bitfield BTINT6   */
    using BTINT5   = regbits< type,  5,  1 >;  /**< bitfield BTINT5   */
    using BTINT4   = regbits< type,  4,  1 >;  /**< bitfield BTINT4   */
    using BTINT3   = regbits< type,  3,  1 >;  /**< bitfield BTINT3   */
    using BTINT2   = regbits< type,  2,  1 >;  /**< bitfield BTINT2   */
    using BTINT1   = regbits< type,  1,  1 >;  /**< bitfield BTINT1   */
    using BTINT0   = regbits< type,  0,  1 >;  /**< bitfield BTINT0   */
  };

  /**
   * register IRQ47MON
   */
  struct IRQ47MON
  : public reg< uint32_t, base_addr + 0xd0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, ro, 0x0 >;

    using FLASHINT  = regbits< type, 11,  1 >;  /**< bitfield FLASHINT  */
  };

  /**
   * register RCINTSEL0
   */
  struct RCINTSEL0
  : public reg< uint32_t, base_addr + 0x210, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x210, rw, 0x0 >;

    using INTSEL3  = regbits< type, 24,  8 >;  /**< bitfield INTSEL3  */
    using INTSEL2  = regbits< type, 16,  8 >;  /**< bitfield INTSEL2  */
    using INTSEL1  = regbits< type,  8,  8 >;  /**< bitfield INTSEL1  */
    using INTSEL0  = regbits< type,  0,  8 >;  /**< bitfield INTSEL0  */
  };

  /**
   * register RCINTSEL1
   */
  struct RCINTSEL1
  : public reg< uint32_t, base_addr + 0x214, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x214, rw, 0x0 >;

    using INTSEL7  = regbits< type, 24,  8 >;  /**< bitfield INTSEL7  */
    using INTSEL6  = regbits< type, 16,  8 >;  /**< bitfield INTSEL6  */
    using INTSEL5  = regbits< type,  8,  8 >;  /**< bitfield INTSEL5  */
    using INTSEL4  = regbits< type,  0,  8 >;  /**< bitfield INTSEL4  */
  };
};
} // namespace mptl

#endif // ARCH_REG_INTREQ_HPP_INCLUDED
