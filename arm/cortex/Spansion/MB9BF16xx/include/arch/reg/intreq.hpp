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
//  Import from CMSIS-SVD: "Spansion/MB9BF16xx.svd"
//
//  name: MB9BF16xx
//  version: 1.0
//  description: MB9BF16xx
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
  : public reg< uint8_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x0 >;

    using ODDPKS4  = regbits< type,  4,  1 >;  /**< bitfield ODDPKS4  */
    using ODDPKS3  = regbits< type,  3,  1 >;  /**< bitfield ODDPKS3  */
    using ODDPKS2  = regbits< type,  2,  1 >;  /**< bitfield ODDPKS2  */
    using ODDPKS1  = regbits< type,  1,  1 >;  /**< bitfield ODDPKS1  */
    using ODDPKS0  = regbits< type,  0,  1 >;  /**< bitfield ODDPKS0  */
  };

  /**
   * register IRQ003SEL
   */
  struct IRQ003SEL
  : public reg< uint32_t, base_addr + 0x110, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x0 >;

    using SELBIT  = regbits< type, 16,  8 >;  /**< bitfield SELBIT  */
    using SELIRQ  = regbits< type,  0,  8 >;  /**< bitfield SELIRQ  */
  };

  /**
   * register IRQ004SEL
   */
  struct IRQ004SEL
  : public reg< uint32_t, base_addr + 0x114, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x0 >;

    using SELBIT  = regbits< type, 16,  8 >;  /**< bitfield SELBIT  */
    using SELIRQ  = regbits< type,  0,  8 >;  /**< bitfield SELIRQ  */
  };

  /**
   * register IRQ005SEL
   */
  struct IRQ005SEL
  : public reg< uint32_t, base_addr + 0x118, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0x0 >;

    using SELBIT  = regbits< type, 16,  8 >;  /**< bitfield SELBIT  */
    using SELIRQ  = regbits< type,  0,  8 >;  /**< bitfield SELIRQ  */
  };

  /**
   * register IRQ006SEL
   */
  struct IRQ006SEL
  : public reg< uint32_t, base_addr + 0x11c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0x0 >;

    using SELBIT  = regbits< type, 16,  8 >;  /**< bitfield SELBIT  */
    using SELIRQ  = regbits< type,  0,  8 >;  /**< bitfield SELIRQ  */
  };

  /**
   * register IRQ007SEL
   */
  struct IRQ007SEL
  : public reg< uint32_t, base_addr + 0x120, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x0 >;

    using SELBIT  = regbits< type, 16,  8 >;  /**< bitfield SELBIT  */
    using SELIRQ  = regbits< type,  0,  8 >;  /**< bitfield SELIRQ  */
  };

  /**
   * register IRQ008SEL
   */
  struct IRQ008SEL
  : public reg< uint32_t, base_addr + 0x124, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x0 >;

    using SELBIT  = regbits< type, 16,  8 >;  /**< bitfield SELBIT  */
    using SELIRQ  = regbits< type,  0,  8 >;  /**< bitfield SELIRQ  */
  };

  /**
   * register IRQ009SEL
   */
  struct IRQ009SEL
  : public reg< uint32_t, base_addr + 0x128, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x0 >;

    using SELBIT  = regbits< type, 16,  8 >;  /**< bitfield SELBIT  */
    using SELIRQ  = regbits< type,  0,  8 >;  /**< bitfield SELIRQ  */
  };

  /**
   * register IRQ010SEL
   */
  struct IRQ010SEL
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x0 >;

    using SELBIT  = regbits< type, 16,  8 >;  /**< bitfield SELBIT  */
    using SELIRQ  = regbits< type,  0,  8 >;  /**< bitfield SELIRQ  */
  };

  /**
   * register EXC02MON
   */
  struct EXC02MON
  : public reg< uint32_t, base_addr + 0x200, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, ro, 0x0 >;

    using HWINT  = regbits< type,  1,  1 >;  /**< bitfield HWINT  */
    using NMI    = regbits< type,  0,  1 >;  /**< bitfield NMI    */
  };

  /**
   * register IRQ000MON
   */
  struct IRQ000MON
  : public reg< uint32_t, base_addr + 0x204, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, ro, 0x0 >;

    using FCSINT  = regbits< type,  0,  1 >;  /**< bitfield FCSINT  */
  };

  /**
   * register IRQ001MON
   */
  struct IRQ001MON
  : public reg< uint32_t, base_addr + 0x208, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, ro, 0x0 >;

    using SWWDTINT  = regbits< type,  0,  1 >;  /**< bitfield SWWDTINT  */
  };

  /**
   * register IRQ002MON
   */
  struct IRQ002MON
  : public reg< uint32_t, base_addr + 0x20c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, ro, 0x0 >;

    using LVDINT  = regbits< type,  0,  1 >;  /**< bitfield LVDINT  */
  };

  /**
   * register IRQ003MON
   */
  struct IRQ003MON
  : public reg< uint32_t, base_addr + 0x210, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x210, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< bitfield IRQBIT7  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< bitfield IRQBIT6  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< bitfield IRQBIT5  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< bitfield IRQBIT4  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< bitfield IRQBIT3  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< bitfield IRQBIT2  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< bitfield IRQBIT1  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< bitfield IRQBIT0  */
  };

  /**
   * register IRQ004MON
   */
  struct IRQ004MON
  : public reg< uint32_t, base_addr + 0x214, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x214, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< bitfield IRQBIT7  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< bitfield IRQBIT6  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< bitfield IRQBIT5  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< bitfield IRQBIT4  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< bitfield IRQBIT3  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< bitfield IRQBIT2  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< bitfield IRQBIT1  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< bitfield IRQBIT0  */
  };

  /**
   * register IRQ005MON
   */
  struct IRQ005MON
  : public reg< uint32_t, base_addr + 0x218, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x218, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< bitfield IRQBIT7  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< bitfield IRQBIT6  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< bitfield IRQBIT5  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< bitfield IRQBIT4  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< bitfield IRQBIT3  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< bitfield IRQBIT2  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< bitfield IRQBIT1  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< bitfield IRQBIT0  */
  };

  /**
   * register IRQ006MON
   */
  struct IRQ006MON
  : public reg< uint32_t, base_addr + 0x21c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x21c, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< bitfield IRQBIT7  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< bitfield IRQBIT6  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< bitfield IRQBIT5  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< bitfield IRQBIT4  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< bitfield IRQBIT3  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< bitfield IRQBIT2  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< bitfield IRQBIT1  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< bitfield IRQBIT0  */
  };

  /**
   * register IRQ007MON
   */
  struct IRQ007MON
  : public reg< uint32_t, base_addr + 0x220, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x220, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< bitfield IRQBIT7  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< bitfield IRQBIT6  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< bitfield IRQBIT5  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< bitfield IRQBIT4  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< bitfield IRQBIT3  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< bitfield IRQBIT2  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< bitfield IRQBIT1  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< bitfield IRQBIT0  */
  };

  /**
   * register IRQ008MON
   */
  struct IRQ008MON
  : public reg< uint32_t, base_addr + 0x224, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x224, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< bitfield IRQBIT7  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< bitfield IRQBIT6  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< bitfield IRQBIT5  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< bitfield IRQBIT4  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< bitfield IRQBIT3  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< bitfield IRQBIT2  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< bitfield IRQBIT1  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< bitfield IRQBIT0  */
  };

  /**
   * register IRQ009MON
   */
  struct IRQ009MON
  : public reg< uint32_t, base_addr + 0x228, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x228, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< bitfield IRQBIT7  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< bitfield IRQBIT6  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< bitfield IRQBIT5  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< bitfield IRQBIT4  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< bitfield IRQBIT3  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< bitfield IRQBIT2  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< bitfield IRQBIT1  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< bitfield IRQBIT0  */
  };

  /**
   * register IRQ010MON
   */
  struct IRQ010MON
  : public reg< uint32_t, base_addr + 0x22c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x22c, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< bitfield IRQBIT7  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< bitfield IRQBIT6  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< bitfield IRQBIT5  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< bitfield IRQBIT4  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< bitfield IRQBIT3  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< bitfield IRQBIT2  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< bitfield IRQBIT1  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< bitfield IRQBIT0  */
  };

  /**
   * register IRQ011MON
   */
  struct IRQ011MON
  : public reg< uint32_t, base_addr + 0x230, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x230, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ012MON
   */
  struct IRQ012MON
  : public reg< uint32_t, base_addr + 0x234, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x234, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ013MON
   */
  struct IRQ013MON
  : public reg< uint32_t, base_addr + 0x238, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x238, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ014MON
   */
  struct IRQ014MON
  : public reg< uint32_t, base_addr + 0x23c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x23c, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ015MON
   */
  struct IRQ015MON
  : public reg< uint32_t, base_addr + 0x240, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x240, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ016MON
   */
  struct IRQ016MON
  : public reg< uint32_t, base_addr + 0x244, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x244, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ017MON
   */
  struct IRQ017MON
  : public reg< uint32_t, base_addr + 0x248, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x248, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ018MON
   */
  struct IRQ018MON
  : public reg< uint32_t, base_addr + 0x24c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x24c, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ019MON
   */
  struct IRQ019MON
  : public reg< uint32_t, base_addr + 0x250, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x250, ro, 0x0 >;

    using QUDINT5  = regbits< type,  5,  1 >;  /**< bitfield QUDINT5  */
    using QUDINT4  = regbits< type,  4,  1 >;  /**< bitfield QUDINT4  */
    using QUDINT3  = regbits< type,  3,  1 >;  /**< bitfield QUDINT3  */
    using QUDINT2  = regbits< type,  2,  1 >;  /**< bitfield QUDINT2  */
    using QUDINT1  = regbits< type,  1,  1 >;  /**< bitfield QUDINT1  */
    using QUDINT0  = regbits< type,  0,  1 >;  /**< bitfield QUDINT0  */
  };

  /**
   * register IRQ020MON
   */
  struct IRQ020MON
  : public reg< uint32_t, base_addr + 0x254, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x254, ro, 0x0 >;

    using QUDINT5  = regbits< type,  5,  1 >;  /**< bitfield QUDINT5  */
    using QUDINT4  = regbits< type,  4,  1 >;  /**< bitfield QUDINT4  */
    using QUDINT3  = regbits< type,  3,  1 >;  /**< bitfield QUDINT3  */
    using QUDINT2  = regbits< type,  2,  1 >;  /**< bitfield QUDINT2  */
    using QUDINT1  = regbits< type,  1,  1 >;  /**< bitfield QUDINT1  */
    using QUDINT0  = regbits< type,  0,  1 >;  /**< bitfield QUDINT0  */
  };

  /**
   * register IRQ021MON
   */
  struct IRQ021MON
  : public reg< uint32_t, base_addr + 0x258, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x258, ro, 0x0 >;

    using WAVEINT3  = regbits< type,  3,  1 >;  /**< bitfield WAVEINT3  */
    using WAVEINT2  = regbits< type,  2,  1 >;  /**< bitfield WAVEINT2  */
    using WAVEINT1  = regbits< type,  1,  1 >;  /**< bitfield WAVEINT1  */
    using WAVEINT0  = regbits< type,  0,  1 >;  /**< bitfield WAVEINT0  */
  };

  /**
   * register IRQ022MON
   */
  struct IRQ022MON
  : public reg< uint32_t, base_addr + 0x25c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x25c, ro, 0x0 >;

    using WAVEINT3  = regbits< type,  3,  1 >;  /**< bitfield WAVEINT3  */
    using WAVEINT2  = regbits< type,  2,  1 >;  /**< bitfield WAVEINT2  */
    using WAVEINT1  = regbits< type,  1,  1 >;  /**< bitfield WAVEINT1  */
    using WAVEINT0  = regbits< type,  0,  1 >;  /**< bitfield WAVEINT0  */
  };

  /**
   * register IRQ023MON
   */
  struct IRQ023MON
  : public reg< uint32_t, base_addr + 0x260, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x260, ro, 0x0 >;

    using WAVEINT3  = regbits< type,  3,  1 >;  /**< bitfield WAVEINT3  */
    using WAVEINT2  = regbits< type,  2,  1 >;  /**< bitfield WAVEINT2  */
    using WAVEINT1  = regbits< type,  1,  1 >;  /**< bitfield WAVEINT1  */
    using WAVEINT0  = regbits< type,  0,  1 >;  /**< bitfield WAVEINT0  */
  };

  /**
   * register IRQ024MON
   */
  struct IRQ024MON
  : public reg< uint32_t, base_addr + 0x264, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x264, ro, 0x0 >;

    using FRT_PEAK_INT2  = regbits< type,  2,  1 >;  /**< bitfield FRT_PEAK_INT2  */
    using FRT_PEAK_INT1  = regbits< type,  1,  1 >;  /**< bitfield FRT_PEAK_INT1  */
    using FRT_PEAK_INT0  = regbits< type,  0,  1 >;  /**< bitfield FRT_PEAK_INT0  */
  };

  /**
   * register IRQ025MON
   */
  struct IRQ025MON
  : public reg< uint32_t, base_addr + 0x268, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x268, ro, 0x0 >;

    using FRT_ZERO_INT2  = regbits< type,  2,  1 >;  /**< bitfield FRT_ZERO_INT2  */
    using FRT_ZERO_INT1  = regbits< type,  1,  1 >;  /**< bitfield FRT_ZERO_INT1  */
    using FRT_ZERO_INT0  = regbits< type,  0,  1 >;  /**< bitfield FRT_ZERO_INT0  */
  };

  /**
   * register IRQ026MON
   */
  struct IRQ026MON
  : public reg< uint32_t, base_addr + 0x26c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x26c, ro, 0x0 >;

    using ICUINT3  = regbits< type,  3,  1 >;  /**< bitfield ICUINT3  */
    using ICUINT2  = regbits< type,  2,  1 >;  /**< bitfield ICUINT2  */
    using ICUINT1  = regbits< type,  1,  1 >;  /**< bitfield ICUINT1  */
    using ICUINT0  = regbits< type,  0,  1 >;  /**< bitfield ICUINT0  */
  };

  /**
   * register IRQ027MON
   */
  struct IRQ027MON
  : public reg< uint32_t, base_addr + 0x270, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x270, ro, 0x0 >;

    using OCUINT5  = regbits< type,  5,  1 >;  /**< bitfield OCUINT5  */
    using OCUINT4  = regbits< type,  4,  1 >;  /**< bitfield OCUINT4  */
    using OCUINT3  = regbits< type,  3,  1 >;  /**< bitfield OCUINT3  */
    using OCUINT2  = regbits< type,  2,  1 >;  /**< bitfield OCUINT2  */
    using OCUINT1  = regbits< type,  1,  1 >;  /**< bitfield OCUINT1  */
    using OCUINT0  = regbits< type,  0,  1 >;  /**< bitfield OCUINT0  */
  };

  /**
   * register IRQ028MON
   */
  struct IRQ028MON
  : public reg< uint32_t, base_addr + 0x274, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x274, ro, 0x0 >;

    using FRT_PEAK_INT2  = regbits< type,  2,  1 >;  /**< bitfield FRT_PEAK_INT2  */
    using FRT_PEAK_INT1  = regbits< type,  1,  1 >;  /**< bitfield FRT_PEAK_INT1  */
    using FRT_PEAK_INT0  = regbits< type,  0,  1 >;  /**< bitfield FRT_PEAK_INT0  */
  };

  /**
   * register IRQ029MON
   */
  struct IRQ029MON
  : public reg< uint32_t, base_addr + 0x278, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x278, ro, 0x0 >;

    using FRT_ZERO_INT2  = regbits< type,  2,  1 >;  /**< bitfield FRT_ZERO_INT2  */
    using FRT_ZERO_INT1  = regbits< type,  1,  1 >;  /**< bitfield FRT_ZERO_INT1  */
    using FRT_ZERO_INT0  = regbits< type,  0,  1 >;  /**< bitfield FRT_ZERO_INT0  */
  };

  /**
   * register IRQ030MON
   */
  struct IRQ030MON
  : public reg< uint32_t, base_addr + 0x27c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x27c, ro, 0x0 >;

    using ICUINT3  = regbits< type,  3,  1 >;  /**< bitfield ICUINT3  */
    using ICUINT2  = regbits< type,  2,  1 >;  /**< bitfield ICUINT2  */
    using ICUINT1  = regbits< type,  1,  1 >;  /**< bitfield ICUINT1  */
    using ICUINT0  = regbits< type,  0,  1 >;  /**< bitfield ICUINT0  */
  };

  /**
   * register IRQ031MON
   */
  struct IRQ031MON
  : public reg< uint32_t, base_addr + 0x280, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x280, ro, 0x0 >;

    using OCUINT5  = regbits< type,  5,  1 >;  /**< bitfield OCUINT5  */
    using OCUINT4  = regbits< type,  4,  1 >;  /**< bitfield OCUINT4  */
    using OCUINT3  = regbits< type,  3,  1 >;  /**< bitfield OCUINT3  */
    using OCUINT2  = regbits< type,  2,  1 >;  /**< bitfield OCUINT2  */
    using OCUINT1  = regbits< type,  1,  1 >;  /**< bitfield OCUINT1  */
    using OCUINT0  = regbits< type,  0,  1 >;  /**< bitfield OCUINT0  */
  };

  /**
   * register IRQ032MON
   */
  struct IRQ032MON
  : public reg< uint32_t, base_addr + 0x284, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x284, ro, 0x0 >;

    using FRT_PEAK_INT2  = regbits< type,  2,  1 >;  /**< bitfield FRT_PEAK_INT2  */
    using FRT_PEAK_INT1  = regbits< type,  1,  1 >;  /**< bitfield FRT_PEAK_INT1  */
    using FRT_PEAK_INT0  = regbits< type,  0,  1 >;  /**< bitfield FRT_PEAK_INT0  */
  };

  /**
   * register IRQ033MON
   */
  struct IRQ033MON
  : public reg< uint32_t, base_addr + 0x288, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x288, ro, 0x0 >;

    using FRT_ZERO_INT2  = regbits< type,  2,  1 >;  /**< bitfield FRT_ZERO_INT2  */
    using FRT_ZERO_INT1  = regbits< type,  1,  1 >;  /**< bitfield FRT_ZERO_INT1  */
    using FRT_ZERO_INT0  = regbits< type,  0,  1 >;  /**< bitfield FRT_ZERO_INT0  */
  };

  /**
   * register IRQ034MON
   */
  struct IRQ034MON
  : public reg< uint32_t, base_addr + 0x28c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x28c, ro, 0x0 >;

    using ICUINT3  = regbits< type,  3,  1 >;  /**< bitfield ICUINT3  */
    using ICUINT2  = regbits< type,  2,  1 >;  /**< bitfield ICUINT2  */
    using ICUINT1  = regbits< type,  1,  1 >;  /**< bitfield ICUINT1  */
    using ICUINT0  = regbits< type,  0,  1 >;  /**< bitfield ICUINT0  */
  };

  /**
   * register IRQ035MON
   */
  struct IRQ035MON
  : public reg< uint32_t, base_addr + 0x290, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x290, ro, 0x0 >;

    using OCUINT5  = regbits< type,  5,  1 >;  /**< bitfield OCUINT5  */
    using OCUINT4  = regbits< type,  4,  1 >;  /**< bitfield OCUINT4  */
    using OCUINT3  = regbits< type,  3,  1 >;  /**< bitfield OCUINT3  */
    using OCUINT2  = regbits< type,  2,  1 >;  /**< bitfield OCUINT2  */
    using OCUINT1  = regbits< type,  1,  1 >;  /**< bitfield OCUINT1  */
    using OCUINT0  = regbits< type,  0,  1 >;  /**< bitfield OCUINT0  */
  };

  /**
   * register IRQ036MON
   */
  struct IRQ036MON
  : public reg< uint32_t, base_addr + 0x294, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x294, ro, 0x0 >;

    using PPGINT2  = regbits< type,  2,  1 >;  /**< bitfield PPGINT2  */
    using PPGINT1  = regbits< type,  1,  1 >;  /**< bitfield PPGINT1  */
    using PPGINT0  = regbits< type,  0,  1 >;  /**< bitfield PPGINT0  */
  };

  /**
   * register IRQ037MON
   */
  struct IRQ037MON
  : public reg< uint32_t, base_addr + 0x298, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x298, ro, 0x0 >;

    using PPGINT2  = regbits< type,  2,  1 >;  /**< bitfield PPGINT2  */
    using PPGINT1  = regbits< type,  1,  1 >;  /**< bitfield PPGINT1  */
    using PPGINT0  = regbits< type,  0,  1 >;  /**< bitfield PPGINT0  */
  };

  /**
   * register IRQ038MON
   */
  struct IRQ038MON
  : public reg< uint32_t, base_addr + 0x29c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x29c, ro, 0x0 >;

    using PPGINT2  = regbits< type,  2,  1 >;  /**< bitfield PPGINT2  */
    using PPGINT1  = regbits< type,  1,  1 >;  /**< bitfield PPGINT1  */
    using PPGINT0  = regbits< type,  0,  1 >;  /**< bitfield PPGINT0  */
  };

  /**
   * register IRQ039MON
   */
  struct IRQ039MON
  : public reg< uint32_t, base_addr + 0x2a0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a0, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ040MON
   */
  struct IRQ040MON
  : public reg< uint32_t, base_addr + 0x2a4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a4, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ041MON
   */
  struct IRQ041MON
  : public reg< uint32_t, base_addr + 0x2a8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a8, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ042MON
   */
  struct IRQ042MON
  : public reg< uint32_t, base_addr + 0x2ac, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2ac, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ043MON
   */
  struct IRQ043MON
  : public reg< uint32_t, base_addr + 0x2b0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b0, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ044MON
   */
  struct IRQ044MON
  : public reg< uint32_t, base_addr + 0x2b4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b4, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ045MON
   */
  struct IRQ045MON
  : public reg< uint32_t, base_addr + 0x2b8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b8, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ046MON
   */
  struct IRQ046MON
  : public reg< uint32_t, base_addr + 0x2bc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2bc, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ047MON
   */
  struct IRQ047MON
  : public reg< uint32_t, base_addr + 0x2c0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c0, ro, 0x0 >;

    using TIMINT2  = regbits< type,  1,  1 >;  /**< bitfield TIMINT2  */
    using TIMINT1  = regbits< type,  0,  1 >;  /**< bitfield TIMINT1  */
  };

  /**
   * register IRQ048MON
   */
  struct IRQ048MON
  : public reg< uint32_t, base_addr + 0x2c4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c4, ro, 0x0 >;

    using WCINT  = regbits< type,  0,  1 >;  /**< bitfield WCINT  */
  };

  /**
   * register IRQ049MON
   */
  struct IRQ049MON
  : public reg< uint32_t, base_addr + 0x2c8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c8, ro, 0x0 >;

    using BMEMCS  = regbits< type,  0,  1 >;  /**< bitfield BMEMCS  */
  };

  /**
   * register IRQ050MON
   */
  struct IRQ050MON
  : public reg< uint32_t, base_addr + 0x2cc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2cc, ro, 0x0 >;

    using RTCINT  = regbits< type,  0,  1 >;  /**< bitfield RTCINT  */
  };

  /**
   * register IRQ051MON
   */
  struct IRQ051MON
  : public reg< uint32_t, base_addr + 0x2d0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d0, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ052MON
   */
  struct IRQ052MON
  : public reg< uint32_t, base_addr + 0x2d4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d4, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ053MON
   */
  struct IRQ053MON
  : public reg< uint32_t, base_addr + 0x2d8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d8, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ054MON
   */
  struct IRQ054MON
  : public reg< uint32_t, base_addr + 0x2dc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2dc, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ055MON
   */
  struct IRQ055MON
  : public reg< uint32_t, base_addr + 0x2e0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e0, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ056MON
   */
  struct IRQ056MON
  : public reg< uint32_t, base_addr + 0x2e4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e4, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ057MON
   */
  struct IRQ057MON
  : public reg< uint32_t, base_addr + 0x2e8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e8, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ058MON
   */
  struct IRQ058MON
  : public reg< uint32_t, base_addr + 0x2ec, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2ec, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< bitfield EXTINT  */
  };

  /**
   * register IRQ059MON
   */
  struct IRQ059MON
  : public reg< uint32_t, base_addr + 0x2f0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2f0, ro, 0x0 >;

    using UPLLINT  = regbits< type,  3,  1 >;  /**< bitfield UPLLINT  */
    using MPLLINT  = regbits< type,  2,  1 >;  /**< bitfield MPLLINT  */
    using SOSCINT  = regbits< type,  1,  1 >;  /**< bitfield SOSCINT  */
    using MOSCINT  = regbits< type,  0,  1 >;  /**< bitfield MOSCINT  */
  };

  /**
   * register IRQ060MON
   */
  struct IRQ060MON
  : public reg< uint32_t, base_addr + 0x2f4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2f4, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ061MON
   */
  struct IRQ061MON
  : public reg< uint32_t, base_addr + 0x2f8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2f8, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ062MON
   */
  struct IRQ062MON
  : public reg< uint32_t, base_addr + 0x2fc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2fc, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ063MON
   */
  struct IRQ063MON
  : public reg< uint32_t, base_addr + 0x300, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ064MON
   */
  struct IRQ064MON
  : public reg< uint32_t, base_addr + 0x304, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x304, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ065MON
   */
  struct IRQ065MON
  : public reg< uint32_t, base_addr + 0x308, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x308, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ066MON
   */
  struct IRQ066MON
  : public reg< uint32_t, base_addr + 0x30c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ067MON
   */
  struct IRQ067MON
  : public reg< uint32_t, base_addr + 0x310, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ068MON
   */
  struct IRQ068MON
  : public reg< uint32_t, base_addr + 0x314, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x314, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ069MON
   */
  struct IRQ069MON
  : public reg< uint32_t, base_addr + 0x318, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x318, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ070MON
   */
  struct IRQ070MON
  : public reg< uint32_t, base_addr + 0x31c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ071MON
   */
  struct IRQ071MON
  : public reg< uint32_t, base_addr + 0x320, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x320, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ072MON
   */
  struct IRQ072MON
  : public reg< uint32_t, base_addr + 0x324, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x324, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ073MON
   */
  struct IRQ073MON
  : public reg< uint32_t, base_addr + 0x328, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x328, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ074MON
   */
  struct IRQ074MON
  : public reg< uint32_t, base_addr + 0x32c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x32c, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ075MON
   */
  struct IRQ075MON
  : public reg< uint32_t, base_addr + 0x330, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x330, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ076MON
   */
  struct IRQ076MON
  : public reg< uint32_t, base_addr + 0x334, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x334, ro, 0x0 >;

    using ADCINT4  = regbits< type,  4,  1 >;  /**< bitfield ADCINT4  */
    using ADCINT3  = regbits< type,  3,  1 >;  /**< bitfield ADCINT3  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< bitfield ADCINT2  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< bitfield ADCINT1  */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< bitfield ADCINT0  */
  };

  /**
   * register IRQ077MON
   */
  struct IRQ077MON
  : public reg< uint32_t, base_addr + 0x338, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x338, ro, 0x0 >;

    using ADCINT4  = regbits< type,  4,  1 >;  /**< bitfield ADCINT4  */
    using ADCINT3  = regbits< type,  3,  1 >;  /**< bitfield ADCINT3  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< bitfield ADCINT2  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< bitfield ADCINT1  */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< bitfield ADCINT0  */
  };

  /**
   * register IRQ078MON
   */
  struct IRQ078MON
  : public reg< uint32_t, base_addr + 0x33c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x33c, ro, 0x0 >;

    using USB_DRQ_INT4  = regbits< type,  4,  1 >;  /**< bitfield USB_DRQ_INT4  */
    using USB_DRQ_INT3  = regbits< type,  3,  1 >;  /**< bitfield USB_DRQ_INT3  */
    using USB_DRQ_INT2  = regbits< type,  2,  1 >;  /**< bitfield USB_DRQ_INT2  */
    using USB_DRQ_INT1  = regbits< type,  1,  1 >;  /**< bitfield USB_DRQ_INT1  */
    using USB_DRQ_INT0  = regbits< type,  0,  1 >;  /**< bitfield USB_DRQ_INT0  */
  };

  /**
   * register IRQ079MON
   */
  struct IRQ079MON
  : public reg< uint32_t, base_addr + 0x340, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x340, ro, 0x0 >;

    using USB_INT5  = regbits< type,  5,  1 >;  /**< bitfield USB_INT5  */
    using USB_INT4  = regbits< type,  4,  1 >;  /**< bitfield USB_INT4  */
    using USB_INT3  = regbits< type,  3,  1 >;  /**< bitfield USB_INT3  */
    using USB_INT2  = regbits< type,  2,  1 >;  /**< bitfield USB_INT2  */
    using USB_INT1  = regbits< type,  1,  1 >;  /**< bitfield USB_INT1  */
    using USB_INT0  = regbits< type,  0,  1 >;  /**< bitfield USB_INT0  */
  };

  /**
   * register IRQ080MON
   */
  struct IRQ080MON
  : public reg< uint32_t, base_addr + 0x344, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x344, ro, 0x0 >;

    using CANINT  = regbits< type,  0,  1 >;  /**< bitfield CANINT  */
  };

  /**
   * register IRQ081MON
   */
  struct IRQ081MON
  : public reg< uint32_t, base_addr + 0x348, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x348, ro, 0x0 >;

    using CANINT  = regbits< type,  0,  1 >;  /**< bitfield CANINT  */
  };

  /**
   * register IRQ082MON
   */
  struct IRQ082MON
  : public reg< uint32_t, base_addr + 0x34c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x34c, ro, 0x0 >;

    using MACLPI  = regbits< type,  2,  1 >;  /**< bitfield MACLPI  */
    using MACPMT  = regbits< type,  1,  1 >;  /**< bitfield MACPMT  */
    using MACSBD  = regbits< type,  0,  1 >;  /**< bitfield MACSBD  */
  };

  /**
   * register IRQ083MON
   */
  struct IRQ083MON
  : public reg< uint32_t, base_addr + 0x350, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x350, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< bitfield DMACINT  */
  };

  /**
   * register IRQ084MON
   */
  struct IRQ084MON
  : public reg< uint32_t, base_addr + 0x354, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x354, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< bitfield DMACINT  */
  };

  /**
   * register IRQ085MON
   */
  struct IRQ085MON
  : public reg< uint32_t, base_addr + 0x358, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x358, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< bitfield DMACINT  */
  };

  /**
   * register IRQ086MON
   */
  struct IRQ086MON
  : public reg< uint32_t, base_addr + 0x35c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x35c, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< bitfield DMACINT  */
  };

  /**
   * register IRQ087MON
   */
  struct IRQ087MON
  : public reg< uint32_t, base_addr + 0x360, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x360, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< bitfield DMACINT  */
  };

  /**
   * register IRQ088MON
   */
  struct IRQ088MON
  : public reg< uint32_t, base_addr + 0x364, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x364, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< bitfield DMACINT  */
  };

  /**
   * register IRQ089MON
   */
  struct IRQ089MON
  : public reg< uint32_t, base_addr + 0x368, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x368, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< bitfield DMACINT  */
  };

  /**
   * register IRQ090MON
   */
  struct IRQ090MON
  : public reg< uint32_t, base_addr + 0x36c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x36c, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< bitfield DMACINT  */
  };

  /**
   * register IRQ091MON
   */
  struct IRQ091MON
  : public reg< uint32_t, base_addr + 0x370, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x370, ro, 0x0 >;

    using DSTCINT1  = regbits< type,  1,  1 >;  /**< bitfield DSTCINT1  */
    using DSTCINT0  = regbits< type,  0,  1 >;  /**< bitfield DSTCINT0  */
  };

  /**
   * register IRQ092MON
   */
  struct IRQ092MON
  : public reg< uint32_t, base_addr + 0x374, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x374, ro, 0x0 >;

    using EXTINT3  = regbits< type,  3,  1 >;  /**< bitfield EXTINT3  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< bitfield EXTINT2  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< bitfield EXTINT1  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< bitfield EXTINT0  */
  };

  /**
   * register IRQ093MON
   */
  struct IRQ093MON
  : public reg< uint32_t, base_addr + 0x378, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x378, ro, 0x0 >;

    using EXTINT3  = regbits< type,  3,  1 >;  /**< bitfield EXTINT3  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< bitfield EXTINT2  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< bitfield EXTINT1  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< bitfield EXTINT0  */
  };

  /**
   * register IRQ094MON
   */
  struct IRQ094MON
  : public reg< uint32_t, base_addr + 0x37c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x37c, ro, 0x0 >;

    using EXTINT3  = regbits< type,  3,  1 >;  /**< bitfield EXTINT3  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< bitfield EXTINT2  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< bitfield EXTINT1  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< bitfield EXTINT0  */
  };

  /**
   * register IRQ095MON
   */
  struct IRQ095MON
  : public reg< uint32_t, base_addr + 0x380, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x380, ro, 0x0 >;

    using EXTINT3  = regbits< type,  3,  1 >;  /**< bitfield EXTINT3  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< bitfield EXTINT2  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< bitfield EXTINT1  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< bitfield EXTINT0  */
  };

  /**
   * register IRQ096MON
   */
  struct IRQ096MON
  : public reg< uint32_t, base_addr + 0x384, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x384, ro, 0x0 >;

    using QUDINT5  = regbits< type,  5,  1 >;  /**< bitfield QUDINT5  */
    using QUDINT4  = regbits< type,  4,  1 >;  /**< bitfield QUDINT4  */
    using QUDINT3  = regbits< type,  3,  1 >;  /**< bitfield QUDINT3  */
    using QUDINT2  = regbits< type,  2,  1 >;  /**< bitfield QUDINT2  */
    using QUDINT1  = regbits< type,  1,  1 >;  /**< bitfield QUDINT1  */
    using QUDINT0  = regbits< type,  0,  1 >;  /**< bitfield QUDINT0  */
  };

  /**
   * register IRQ097MON
   */
  struct IRQ097MON
  : public reg< uint32_t, base_addr + 0x388, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x388, ro, 0x0 >;

    using QUDINT5  = regbits< type,  5,  1 >;  /**< bitfield QUDINT5  */
    using QUDINT4  = regbits< type,  4,  1 >;  /**< bitfield QUDINT4  */
    using QUDINT3  = regbits< type,  3,  1 >;  /**< bitfield QUDINT3  */
    using QUDINT2  = regbits< type,  2,  1 >;  /**< bitfield QUDINT2  */
    using QUDINT1  = regbits< type,  1,  1 >;  /**< bitfield QUDINT1  */
    using QUDINT0  = regbits< type,  0,  1 >;  /**< bitfield QUDINT0  */
  };

  /**
   * register IRQ098MON
   */
  struct IRQ098MON
  : public reg< uint32_t, base_addr + 0x38c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38c, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ099MON
   */
  struct IRQ099MON
  : public reg< uint32_t, base_addr + 0x390, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x390, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ100MON
   */
  struct IRQ100MON
  : public reg< uint32_t, base_addr + 0x394, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x394, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ101MON
   */
  struct IRQ101MON
  : public reg< uint32_t, base_addr + 0x398, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x398, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ102MON
   */
  struct IRQ102MON
  : public reg< uint32_t, base_addr + 0x39c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x39c, ro, 0x0 >;

    using BTINT7  = regbits< type,  7,  1 >;  /**< bitfield BTINT7  */
    using BTINT6  = regbits< type,  6,  1 >;  /**< bitfield BTINT6  */
    using BTINT5  = regbits< type,  5,  1 >;  /**< bitfield BTINT5  */
    using BTINT4  = regbits< type,  4,  1 >;  /**< bitfield BTINT4  */
    using BTINT3  = regbits< type,  3,  1 >;  /**< bitfield BTINT3  */
    using BTINT2  = regbits< type,  2,  1 >;  /**< bitfield BTINT2  */
    using BTINT1  = regbits< type,  1,  1 >;  /**< bitfield BTINT1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< bitfield BTINT0  */
  };

  /**
   * register IRQ103MON
   */
  struct IRQ103MON
  : public reg< uint32_t, base_addr + 0x3a0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a0, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ104MON
   */
  struct IRQ104MON
  : public reg< uint32_t, base_addr + 0x3a4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a4, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ105MON
   */
  struct IRQ105MON
  : public reg< uint32_t, base_addr + 0x3a8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a8, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ106MON
   */
  struct IRQ106MON
  : public reg< uint32_t, base_addr + 0x3ac, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3ac, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ107MON
   */
  struct IRQ107MON
  : public reg< uint32_t, base_addr + 0x3b0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3b0, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ108MON
   */
  struct IRQ108MON
  : public reg< uint32_t, base_addr + 0x3b4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3b4, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ109MON
   */
  struct IRQ109MON
  : public reg< uint32_t, base_addr + 0x3b8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3b8, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ110MON
   */
  struct IRQ110MON
  : public reg< uint32_t, base_addr + 0x3bc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3bc, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ111MON
   */
  struct IRQ111MON
  : public reg< uint32_t, base_addr + 0x3c0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c0, ro, 0x0 >;

    using ADCINT4  = regbits< type,  4,  1 >;  /**< bitfield ADCINT4  */
    using ADCINT3  = regbits< type,  3,  1 >;  /**< bitfield ADCINT3  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< bitfield ADCINT2  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< bitfield ADCINT1  */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< bitfield ADCINT0  */
  };

  /**
   * register IRQ112MON
   */
  struct IRQ112MON
  : public reg< uint32_t, base_addr + 0x3c4, ro, 0x0 >
  {
  };

  /**
   * register IRQ113MON
   */
  struct IRQ113MON
  : public reg< uint32_t, base_addr + 0x3c8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c8, ro, 0x0 >;

    using USB_DRQ_INT4  = regbits< type,  4,  1 >;  /**< bitfield USB_DRQ_INT4  */
    using USB_DRQ_INT3  = regbits< type,  3,  1 >;  /**< bitfield USB_DRQ_INT3  */
    using USB_DRQ_INT2  = regbits< type,  2,  1 >;  /**< bitfield USB_DRQ_INT2  */
    using USB_DRQ_INT1  = regbits< type,  1,  1 >;  /**< bitfield USB_DRQ_INT1  */
    using USB_DRQ_INT0  = regbits< type,  0,  1 >;  /**< bitfield USB_DRQ_INT0  */
  };

  /**
   * register IRQ114MON
   */
  struct IRQ114MON
  : public reg< uint32_t, base_addr + 0x3cc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3cc, ro, 0x0 >;

    using USB_INT5  = regbits< type,  5,  1 >;  /**< bitfield USB_INT5  */
    using USB_INT4  = regbits< type,  4,  1 >;  /**< bitfield USB_INT4  */
    using USB_INT3  = regbits< type,  3,  1 >;  /**< bitfield USB_INT3  */
    using USB_INT2  = regbits< type,  2,  1 >;  /**< bitfield USB_INT2  */
    using USB_INT1  = regbits< type,  1,  1 >;  /**< bitfield USB_INT1  */
    using USB_INT0  = regbits< type,  0,  1 >;  /**< bitfield USB_INT0  */
  };

  /**
   * register IRQ115MON
   */
  struct IRQ115MON
  : public reg< uint32_t, base_addr + 0x3d0, ro, 0x0 >
  {
  };

  /**
   * register IRQ116MON
   */
  struct IRQ116MON
  : public reg< uint32_t, base_addr + 0x3d4, ro, 0x0 >
  {
  };

  /**
   * register IRQ117MON
   */
  struct IRQ117MON
  : public reg< uint32_t, base_addr + 0x3d8, ro, 0x0 >
  {
  };

  /**
   * register IRQ118MON
   */
  struct IRQ118MON
  : public reg< uint32_t, base_addr + 0x3dc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3dc, ro, 0x0 >;

    using SDINT1  = regbits< type,  1,  1 >;  /**< bitfield SDINT1  */
    using SDINT0  = regbits< type,  0,  1 >;  /**< bitfield SDINT0  */
  };

  /**
   * register IRQ119MON
   */
  struct IRQ119MON
  : public reg< uint32_t, base_addr + 0x3e0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e0, ro, 0x0 >;

    using FLINT  = regbits< type,  0,  1 >;  /**< bitfield FLINT  */
  };

  /**
   * register IRQ120MON
   */
  struct IRQ120MON
  : public reg< uint32_t, base_addr + 0x3e4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e4, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ121MON
   */
  struct IRQ121MON
  : public reg< uint32_t, base_addr + 0x3e8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e8, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ122MON
   */
  struct IRQ122MON
  : public reg< uint32_t, base_addr + 0x3ec, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3ec, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ123MON
   */
  struct IRQ123MON
  : public reg< uint32_t, base_addr + 0x3f0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f0, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ124MON
   */
  struct IRQ124MON
  : public reg< uint32_t, base_addr + 0x3f4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f4, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ125MON
   */
  struct IRQ125MON
  : public reg< uint32_t, base_addr + 0x3f8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f8, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };

  /**
   * register IRQ126MON
   */
  struct IRQ126MON
  : public reg< uint32_t, base_addr + 0x3fc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3fc, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< bitfield MFSRINT  */
  };

  /**
   * register IRQ127MON
   */
  struct IRQ127MON
  : public reg< uint32_t, base_addr + 0x400, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< bitfield MFSINT1  */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< bitfield MFSINT0  */
  };
};
} // namespace mptl

#endif // ARCH_REG_INTREQ_HPP_INCLUDED
