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
//  Import from CMSIS-SVD: "Fujitsu/MB9B560R.svd"
//
//  name: MB9B560R
//  version: 1.3
//  description: MB9B560R Series
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
   * DMA Request Selection Register
   */
  struct DRQSEL
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using EXINT3    = regbits< type, 31,  1 >;  /**< External pin interrupt ch.3                     */
    using EXINT2    = regbits< type, 30,  1 >;  /**< External pin interrupt ch.2                     */
    using EXINT1    = regbits< type, 29,  1 >;  /**< External pin interrupt ch.1                     */
    using EXINT0    = regbits< type, 28,  1 >;  /**< External pin interrupt ch.0                     */
    using MFS7TX    = regbits< type, 27,  1 >;  /**< MFS ch.7 transmission interrupt                 */
    using MFS7RX    = regbits< type, 26,  1 >;  /**< MFS ch.7 reception interrupt                    */
    using MFS6TX    = regbits< type, 25,  1 >;  /**< MFS ch.6 transmission interrupt                 */
    using MFS6RX    = regbits< type, 24,  1 >;  /**< MFS ch.6 reception interrupt                    */
    using MFS5TX    = regbits< type, 23,  1 >;  /**< MFS ch.5 transmission interrupt                 */
    using MFS5RX    = regbits< type, 22,  1 >;  /**< MFS ch.5 reception interrupt                    */
    using MFS4TX    = regbits< type, 21,  1 >;  /**< MFS ch.4 transmission interrupt                 */
    using MFS4RX    = regbits< type, 20,  1 >;  /**< MFS ch.4 reception interrupt                    */
    using MFS3TX    = regbits< type, 19,  1 >;  /**< MFS ch.3 transmission interrupt                 */
    using MFS3RX    = regbits< type, 18,  1 >;  /**< MFS ch.3 reception interrupt                    */
    using MFS2TX    = regbits< type, 17,  1 >;  /**< MFS ch.2 transmission interrupt                 */
    using MFS2RX    = regbits< type, 16,  1 >;  /**< MFS ch.2 reception interrupt                    */
    using MFS1TX    = regbits< type, 15,  1 >;  /**< MFS ch.1 transmission interrupt                 */
    using MFS1RX    = regbits< type, 14,  1 >;  /**< MFS ch.1 reception interrupt                    */
    using MFS0TX    = regbits< type, 13,  1 >;  /**< MFS ch.0 transmission interrupt                 */
    using MFS0RX    = regbits< type, 12,  1 >;  /**< MFS ch.0 reception interrupt.                   */
    using IRQ0BT6   = regbits< type, 11,  1 >;  /**< Base timer ch.6 source 0 (IRQ0) interrupt       */
    using IRQ0BT4   = regbits< type, 10,  1 >;  /**< Base timer ch.4 source 0 (IRQ0) interrupt       */
    using IRQ0BT2   = regbits< type,  9,  1 >;  /**< Base timer ch.2 source 0 (IRQ0) interrupt       */
    using IRQ0BT0   = regbits< type,  8,  1 >;  /**< Base timer ch.6 source 0 (IRQ0) interrupt       */
    using ADCSCAN2  = regbits< type,  7,  1 >;  /**< A/D converter unit 2 scan conversion interrupt  */
    using ADCSCAN1  = regbits< type,  6,  1 >;  /**< A/D converter unit 1 scan conversion interrupt  */
    using ADCSCAN0  = regbits< type,  5,  1 >;  /**< A/D converter unit 0 scan conversion interrupt  */
    using USBEP5    = regbits< type,  4,  1 >;  /**< USB ch.0 function endpoint 5 DRQ interrupt      */
    using USBEP4    = regbits< type,  3,  1 >;  /**< USB ch.0 function endpoint 4 DRQ interrupt      */
    using USBEP3    = regbits< type,  2,  1 >;  /**< USB ch.0 function endpoint 3 DRQ interrupt      */
    using USBEP2    = regbits< type,  1,  1 >;  /**< USB ch.0 function endpoint 2 DRQ interrupt      */
    using USBEP1    = regbits< type,  0,  1 >;  /**< USB ch.0 function endpoint 1 DRQ interrupt      */
  };

  /**
   * USB ch.0 Odd Packet Size DMA Enable Register
   */
  struct ODDPKS
  : public reg< uint8_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x0 >;

    using ODDPKS4  = regbits< type,  4,  1 >;  /**< "If the transfer destination address of DMAC is USB.EP5DT, the bit width of the last transfer data is converted to Byte."  */
    using ODDPKS3  = regbits< type,  3,  1 >;  /**< "If the transfer destination address of DMAC is USB.EP4DT, the bit width of the last transfer data is converted to Byte."  */
    using ODDPKS2  = regbits< type,  2,  1 >;  /**< "If the transfer destination address of DMAC is USB.EP3DT, the bit width of the last transfer data is converted to Byte."  */
    using ODDPKS1  = regbits< type,  1,  1 >;  /**< "If the transfer destination address of DMAC is USB.EP2DT, the bit width of the last transfer data is converted to Byte."  */
    using ODDPKS0  = regbits< type,  0,  1 >;  /**< "If the transfer destination address of DMAC is USB.EP1DT, the bit width of the last transfer data is converted to Byte."  */
  };

  /**
   * Relocate Interrupt Selection Register (IRQ003)
   */
  struct IRQ003SEL
  : public reg< uint32_t, base_addr + 0x110, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x0 >;

    using SELBIT7  = regbits< type, 23,  1 >;  /**< Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.  */
    using SELBIT6  = regbits< type, 22,  1 >;  /**< Bit6 of the interrupt source is moved to bit6 of the relocate interrupt.  */
    using SELBIT5  = regbits< type, 21,  1 >;  /**< Bit5 of the interrupt source is moved to bit5 of the relocate interrupt.  */
    using SELBIT4  = regbits< type, 20,  1 >;  /**< Bit4 of the interrupt source is moved to bit4 of the relocate interrupt.  */
    using SELBIT3  = regbits< type, 19,  1 >;  /**< Bit3 of the interrupt source is moved to bit3 of the relocate interrupt.  */
    using SELBIT2  = regbits< type, 18,  1 >;  /**< Bit2 of the interrupt source is moved to bit2 of the relocate interrupt.  */
    using SELBIT1  = regbits< type, 17,  1 >;  /**< Bit1 of the interrupt source is moved to bit1 of the relocate interrupt.  */
    using SELBIT0  = regbits< type, 16,  1 >;  /**< Bit0 of the interrupt source is moved to bit0 of the relocate interrupt.  */
    using SELIRQ   = regbits< type,  0,  8 >;  /**< specify the IRQ no. of a peripheral interrupt to be relocated             */
  };

  /**
   * Relocate Interrupt Selection Register (IRQ004)
   */
  struct IRQ004SEL
  : public reg< uint32_t, base_addr + 0x114, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x0 >;

    using SELBIT7  = regbits< type, 23,  1 >;  /**< Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.  */
    using SELBIT6  = regbits< type, 22,  1 >;  /**< Bit6 of the interrupt source is moved to bit6 of the relocate interrupt.  */
    using SELBIT5  = regbits< type, 21,  1 >;  /**< Bit5 of the interrupt source is moved to bit5 of the relocate interrupt.  */
    using SELBIT4  = regbits< type, 20,  1 >;  /**< Bit4 of the interrupt source is moved to bit4 of the relocate interrupt.  */
    using SELBIT3  = regbits< type, 19,  1 >;  /**< Bit3 of the interrupt source is moved to bit3 of the relocate interrupt.  */
    using SELBIT2  = regbits< type, 18,  1 >;  /**< Bit2 of the interrupt source is moved to bit2 of the relocate interrupt.  */
    using SELBIT1  = regbits< type, 17,  1 >;  /**< Bit1 of the interrupt source is moved to bit1 of the relocate interrupt.  */
    using SELBIT0  = regbits< type, 16,  1 >;  /**< Bit0 of the interrupt source is moved to bit0 of the relocate interrupt.  */
    using SELIRQ   = regbits< type,  0,  8 >;  /**< specify the IRQ no. of a peripheral interrupt to be relocated             */
  };

  /**
   * Relocate Interrupt Selection Register (IRQ005)
   */
  struct IRQ005SEL
  : public reg< uint32_t, base_addr + 0x118, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0x0 >;

    using SELBIT7  = regbits< type, 23,  1 >;  /**< Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.  */
    using SELBIT6  = regbits< type, 22,  1 >;  /**< Bit6 of the interrupt source is moved to bit6 of the relocate interrupt.  */
    using SELBIT5  = regbits< type, 21,  1 >;  /**< Bit5 of the interrupt source is moved to bit5 of the relocate interrupt.  */
    using SELBIT4  = regbits< type, 20,  1 >;  /**< Bit4 of the interrupt source is moved to bit4 of the relocate interrupt.  */
    using SELBIT3  = regbits< type, 19,  1 >;  /**< Bit3 of the interrupt source is moved to bit3 of the relocate interrupt.  */
    using SELBIT2  = regbits< type, 18,  1 >;  /**< Bit2 of the interrupt source is moved to bit2 of the relocate interrupt.  */
    using SELBIT1  = regbits< type, 17,  1 >;  /**< Bit1 of the interrupt source is moved to bit1 of the relocate interrupt.  */
    using SELBIT0  = regbits< type, 16,  1 >;  /**< Bit0 of the interrupt source is moved to bit0 of the relocate interrupt.  */
    using SELIRQ   = regbits< type,  0,  8 >;  /**< specify the IRQ no. of a peripheral interrupt to be relocated             */
  };

  /**
   * Relocate Interrupt Selection Register (IRQ006)
   */
  struct IRQ006SEL
  : public reg< uint32_t, base_addr + 0x11c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0x0 >;

    using SELBIT7  = regbits< type, 23,  1 >;  /**< Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.  */
    using SELBIT6  = regbits< type, 22,  1 >;  /**< Bit6 of the interrupt source is moved to bit6 of the relocate interrupt.  */
    using SELBIT5  = regbits< type, 21,  1 >;  /**< Bit5 of the interrupt source is moved to bit5 of the relocate interrupt.  */
    using SELBIT4  = regbits< type, 20,  1 >;  /**< Bit4 of the interrupt source is moved to bit4 of the relocate interrupt.  */
    using SELBIT3  = regbits< type, 19,  1 >;  /**< Bit3 of the interrupt source is moved to bit3 of the relocate interrupt.  */
    using SELBIT2  = regbits< type, 18,  1 >;  /**< Bit2 of the interrupt source is moved to bit2 of the relocate interrupt.  */
    using SELBIT1  = regbits< type, 17,  1 >;  /**< Bit1 of the interrupt source is moved to bit1 of the relocate interrupt.  */
    using SELBIT0  = regbits< type, 16,  1 >;  /**< Bit0 of the interrupt source is moved to bit0 of the relocate interrupt.  */
    using SELIRQ   = regbits< type,  0,  8 >;  /**< specify the IRQ no. of a peripheral interrupt to be relocated             */
  };

  /**
   * Relocate Interrupt Selection Register (IRQ007)
   */
  struct IRQ007SEL
  : public reg< uint32_t, base_addr + 0x120, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x0 >;

    using SELBIT7  = regbits< type, 23,  1 >;  /**< Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.  */
    using SELBIT6  = regbits< type, 22,  1 >;  /**< Bit6 of the interrupt source is moved to bit6 of the relocate interrupt.  */
    using SELBIT5  = regbits< type, 21,  1 >;  /**< Bit5 of the interrupt source is moved to bit5 of the relocate interrupt.  */
    using SELBIT4  = regbits< type, 20,  1 >;  /**< Bit4 of the interrupt source is moved to bit4 of the relocate interrupt.  */
    using SELBIT3  = regbits< type, 19,  1 >;  /**< Bit3 of the interrupt source is moved to bit3 of the relocate interrupt.  */
    using SELBIT2  = regbits< type, 18,  1 >;  /**< Bit2 of the interrupt source is moved to bit2 of the relocate interrupt.  */
    using SELBIT1  = regbits< type, 17,  1 >;  /**< Bit1 of the interrupt source is moved to bit1 of the relocate interrupt.  */
    using SELBIT0  = regbits< type, 16,  1 >;  /**< Bit0 of the interrupt source is moved to bit0 of the relocate interrupt.  */
    using SELIRQ   = regbits< type,  0,  8 >;  /**< specify the IRQ no. of a peripheral interrupt to be relocated             */
  };

  /**
   * Relocate Interrupt Selection Register (IRQ008)
   */
  struct IRQ008SEL
  : public reg< uint32_t, base_addr + 0x124, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x0 >;

    using SELBIT7  = regbits< type, 23,  1 >;  /**< Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.  */
    using SELBIT6  = regbits< type, 22,  1 >;  /**< Bit6 of the interrupt source is moved to bit6 of the relocate interrupt.  */
    using SELBIT5  = regbits< type, 21,  1 >;  /**< Bit5 of the interrupt source is moved to bit5 of the relocate interrupt.  */
    using SELBIT4  = regbits< type, 20,  1 >;  /**< Bit4 of the interrupt source is moved to bit4 of the relocate interrupt.  */
    using SELBIT3  = regbits< type, 19,  1 >;  /**< Bit3 of the interrupt source is moved to bit3 of the relocate interrupt.  */
    using SELBIT2  = regbits< type, 18,  1 >;  /**< Bit2 of the interrupt source is moved to bit2 of the relocate interrupt.  */
    using SELBIT1  = regbits< type, 17,  1 >;  /**< Bit1 of the interrupt source is moved to bit1 of the relocate interrupt.  */
    using SELBIT0  = regbits< type, 16,  1 >;  /**< Bit0 of the interrupt source is moved to bit0 of the relocate interrupt.  */
    using SELIRQ   = regbits< type,  0,  8 >;  /**< specify the IRQ no. of a peripheral interrupt to be relocated             */
  };

  /**
   * Relocate Interrupt Selection Register (IRQ009)
   */
  struct IRQ009SEL
  : public reg< uint32_t, base_addr + 0x128, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x0 >;

    using SELBIT7  = regbits< type, 23,  1 >;  /**< Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.  */
    using SELBIT6  = regbits< type, 22,  1 >;  /**< Bit6 of the interrupt source is moved to bit6 of the relocate interrupt.  */
    using SELBIT5  = regbits< type, 21,  1 >;  /**< Bit5 of the interrupt source is moved to bit5 of the relocate interrupt.  */
    using SELBIT4  = regbits< type, 20,  1 >;  /**< Bit4 of the interrupt source is moved to bit4 of the relocate interrupt.  */
    using SELBIT3  = regbits< type, 19,  1 >;  /**< Bit3 of the interrupt source is moved to bit3 of the relocate interrupt.  */
    using SELBIT2  = regbits< type, 18,  1 >;  /**< Bit2 of the interrupt source is moved to bit2 of the relocate interrupt.  */
    using SELBIT1  = regbits< type, 17,  1 >;  /**< Bit1 of the interrupt source is moved to bit1 of the relocate interrupt.  */
    using SELBIT0  = regbits< type, 16,  1 >;  /**< Bit0 of the interrupt source is moved to bit0 of the relocate interrupt.  */
    using SELIRQ   = regbits< type,  0,  8 >;  /**< specify the IRQ no. of a peripheral interrupt to be relocated             */
  };

  /**
   * Relocate Interrupt Selection Register (IRQ010)
   */
  struct IRQ010SEL
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x0 >;

    using SELBIT7  = regbits< type, 23,  1 >;  /**< Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.  */
    using SELBIT6  = regbits< type, 22,  1 >;  /**< Bit6 of the interrupt source is moved to bit6 of the relocate interrupt.  */
    using SELBIT5  = regbits< type, 21,  1 >;  /**< Bit5 of the interrupt source is moved to bit5 of the relocate interrupt.  */
    using SELBIT4  = regbits< type, 20,  1 >;  /**< Bit4 of the interrupt source is moved to bit4 of the relocate interrupt.  */
    using SELBIT3  = regbits< type, 19,  1 >;  /**< Bit3 of the interrupt source is moved to bit3 of the relocate interrupt.  */
    using SELBIT2  = regbits< type, 18,  1 >;  /**< Bit2 of the interrupt source is moved to bit2 of the relocate interrupt.  */
    using SELBIT1  = regbits< type, 17,  1 >;  /**< Bit1 of the interrupt source is moved to bit1 of the relocate interrupt.  */
    using SELBIT0  = regbits< type, 16,  1 >;  /**< Bit0 of the interrupt source is moved to bit0 of the relocate interrupt.  */
    using SELIRQ   = regbits< type,  0,  8 >;  /**< specify the IRQ no. of a peripheral interrupt to be relocated             */
  };

  /**
   * EXC02 batch read register
   */
  struct EXC02MON
  : public reg< uint32_t, base_addr + 0x200, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, ro, 0x0 >;

    using HWINT  = regbits< type,  1,  1 >;  /**< Interrupt request of the hardware watchdog timer  */
    using NMI    = regbits< type,  0,  1 >;  /**< Interrupt request of the NMIX external pin        */
  };

  /**
   * IRQ000 Batch Read Register
   */
  struct IRQ000MON
  : public reg< uint32_t, base_addr + 0x204, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, ro, 0x0 >;

    using FCSINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the anomalous frequency detected by the CSV  */
  };

  /**
   * IRQ001 Batch Read Register
   */
  struct IRQ001MON
  : public reg< uint32_t, base_addr + 0x208, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, ro, 0x0 >;

    using SWWDTINT  = regbits< type,  0,  1 >;  /**< interrupt request of the software watchdog timer  */
  };

  /**
   * IRQ002 Batch Read Register
   */
  struct IRQ002MON
  : public reg< uint32_t, base_addr + 0x20c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, ro, 0x0 >;

    using LVDINT  = regbits< type,  0,  1 >;  /**< Low-voltage detection (LVD) interrupt request  */
  };

  /**
   * IRQ003 Batch Read Register
   */
  struct IRQ003MON
  : public reg< uint32_t, base_addr + 0x210, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x210, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< interrupt request of the interrupt selected in bit7 of IRQ003SEL Register  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< interrupt request of the interrupt selected in bit6 of IRQ003SEL Register  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< interrupt request of the interrupt selected in bit5 of IRQ003SEL Register  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< interrupt request of the interrupt selected in bit4 of IRQ003SEL Register  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< interrupt request of the interrupt selected in bit3 of IRQ003SEL Register  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< interrupt request of the interrupt selected in bit2 of IRQ003SEL Register  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< interrupt request of the interrupt selected in bit1 of IRQ003SEL Register  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< interrupt request of the interrupt selected in bit0 of IRQ003SEL Register  */
  };

  /**
   * IRQ004 Batch Read Register
   */
  struct IRQ004MON
  : public reg< uint32_t, base_addr + 0x214, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x214, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< interrupt request of the interrupt selected in bit7 of IRQ004SEL Register  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< interrupt request of the interrupt selected in bit6 of IRQ004SEL Register  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< interrupt request of the interrupt selected in bit5 of IRQ004SEL Register  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< interrupt request of the interrupt selected in bit4 of IRQ004SEL Register  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< interrupt request of the interrupt selected in bit3 of IRQ004SEL Register  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< interrupt request of the interrupt selected in bit2 of IRQ004SEL Register  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< interrupt request of the interrupt selected in bit1 of IRQ004SEL Register  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< interrupt request of the interrupt selected in bit0 of IRQ004SEL Register  */
  };

  /**
   * IRQ005 Batch Read Register
   */
  struct IRQ005MON
  : public reg< uint32_t, base_addr + 0x218, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x218, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< interrupt request of the interrupt selected in bit7 of IRQ005SEL Register  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< interrupt request of the interrupt selected in bit6 of IRQ005SEL Register  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< interrupt request of the interrupt selected in bit5 of IRQ005SEL Register  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< interrupt request of the interrupt selected in bit4 of IRQ005SEL Register  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< interrupt request of the interrupt selected in bit3 of IRQ005SEL Register  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< interrupt request of the interrupt selected in bit2 of IRQ005SEL Register  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< interrupt request of the interrupt selected in bit1 of IRQ005SEL Register  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< interrupt request of the interrupt selected in bit0 of IRQ005SEL Register  */
  };

  /**
   * IRQ006 Batch Read Register
   */
  struct IRQ006MON
  : public reg< uint32_t, base_addr + 0x21c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x21c, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< interrupt request of the interrupt selected in bit7 of IRQ006SEL Register  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< interrupt request of the interrupt selected in bit6 of IRQ006SEL Register  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< interrupt request of the interrupt selected in bit5 of IRQ006SEL Register  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< interrupt request of the interrupt selected in bit4 of IRQ006SEL Register  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< interrupt request of the interrupt selected in bit3 of IRQ006SEL Register  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< interrupt request of the interrupt selected in bit2 of IRQ006SEL Register  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< interrupt request of the interrupt selected in bit1 of IRQ006SEL Register  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< interrupt request of the interrupt selected in bit0 of IRQ006SEL Register  */
  };

  /**
   * IRQ007 Batch Read Register
   */
  struct IRQ007MON
  : public reg< uint32_t, base_addr + 0x220, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x220, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< interrupt request of the interrupt selected in bit7 of IRQ007SEL Register  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< interrupt request of the interrupt selected in bit6 of IRQ007SEL Register  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< interrupt request of the interrupt selected in bit5 of IRQ007SEL Register  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< interrupt request of the interrupt selected in bit4 of IRQ007SEL Register  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< interrupt request of the interrupt selected in bit3 of IRQ007SEL Register  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< interrupt request of the interrupt selected in bit2 of IRQ007SEL Register  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< interrupt request of the interrupt selected in bit1 of IRQ007SEL Register  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< interrupt request of the interrupt selected in bit0 of IRQ007SEL Register  */
  };

  /**
   * IRQ008 Batch Read Register
   */
  struct IRQ008MON
  : public reg< uint32_t, base_addr + 0x224, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x224, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< interrupt request of the interrupt selected in bit7 of IRQ008SEL Register  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< interrupt request of the interrupt selected in bit6 of IRQ008SEL Register  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< interrupt request of the interrupt selected in bit5 of IRQ008SEL Register  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< interrupt request of the interrupt selected in bit4 of IRQ008SEL Register  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< interrupt request of the interrupt selected in bit3 of IRQ008SEL Register  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< interrupt request of the interrupt selected in bit2 of IRQ008SEL Register  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< interrupt request of the interrupt selected in bit1 of IRQ008SEL Register  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< interrupt request of the interrupt selected in bit0 of IRQ008SEL Register  */
  };

  /**
   * IRQ009 Batch Read Register
   */
  struct IRQ009MON
  : public reg< uint32_t, base_addr + 0x228, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x228, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< interrupt request of the interrupt selected in bit7 of IRQ009SEL Register  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< interrupt request of the interrupt selected in bit6 of IRQ009SEL Register  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< interrupt request of the interrupt selected in bit5 of IRQ009SEL Register  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< interrupt request of the interrupt selected in bit4 of IRQ009SEL Register  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< interrupt request of the interrupt selected in bit3 of IRQ009SEL Register  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< interrupt request of the interrupt selected in bit2 of IRQ009SEL Register  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< interrupt request of the interrupt selected in bit1 of IRQ009SEL Register  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< interrupt request of the interrupt selected in bit0 of IRQ009SEL Register  */
  };

  /**
   * IRQ010 Batch Read Register
   */
  struct IRQ010MON
  : public reg< uint32_t, base_addr + 0x22c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x22c, ro, 0x0 >;

    using IRQBIT7  = regbits< type,  7,  1 >;  /**< interrupt request of the interrupt selected in bit7 of IRQ010SEL Register  */
    using IRQBIT6  = regbits< type,  6,  1 >;  /**< interrupt request of the interrupt selected in bit6 of IRQ010SEL Register  */
    using IRQBIT5  = regbits< type,  5,  1 >;  /**< interrupt request of the interrupt selected in bit5 of IRQ010SEL Register  */
    using IRQBIT4  = regbits< type,  4,  1 >;  /**< interrupt request of the interrupt selected in bit4 of IRQ010SEL Register  */
    using IRQBIT3  = regbits< type,  3,  1 >;  /**< interrupt request of the interrupt selected in bit3 of IRQ010SEL Register  */
    using IRQBIT2  = regbits< type,  2,  1 >;  /**< interrupt request of the interrupt selected in bit2 of IRQ010SEL Register  */
    using IRQBIT1  = regbits< type,  1,  1 >;  /**< interrupt request of the interrupt selected in bit1 of IRQ010SEL Register  */
    using IRQBIT0  = regbits< type,  0,  1 >;  /**< interrupt request of the interrupt selected in bit0 of IRQ010SEL Register  */
  };

  /**
   * IRQ011 Batch Read Register
   */
  struct IRQ011MON
  : public reg< uint32_t, base_addr + 0x230, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x230, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.0  */
  };

  /**
   * IRQ012 Batch Read Register
   */
  struct IRQ012MON
  : public reg< uint32_t, base_addr + 0x234, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x234, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.1  */
  };

  /**
   * IRQ013 Batch Read Register
   */
  struct IRQ013MON
  : public reg< uint32_t, base_addr + 0x238, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x238, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.2  */
  };

  /**
   * IRQ014 Batch Read Register
   */
  struct IRQ014MON
  : public reg< uint32_t, base_addr + 0x23c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x23c, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.3  */
  };

  /**
   * IRQ015 Batch Read Register
   */
  struct IRQ015MON
  : public reg< uint32_t, base_addr + 0x240, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x240, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.4  */
  };

  /**
   * IRQ016 Batch Read Register
   */
  struct IRQ016MON
  : public reg< uint32_t, base_addr + 0x244, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x244, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.5  */
  };

  /**
   * IRQ017 Batch Read Register
   */
  struct IRQ017MON
  : public reg< uint32_t, base_addr + 0x248, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x248, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.6  */
  };

  /**
   * IRQ018 Batch Read Register
   */
  struct IRQ018MON
  : public reg< uint32_t, base_addr + 0x24c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x24c, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.7  */
  };

  /**
   * IRQ019 Batch Read Register
   */
  struct IRQ019MON
  : public reg< uint32_t, base_addr + 0x250, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x250, ro, 0x0 >;

    using QUDINT5  = regbits< type,  5,  1 >;  /**< PC match and RC match interrupt request of QPRC ch.0              */
    using QUDINT4  = regbits< type,  4,  1 >;  /**< Out-of-range interrupt request of QPRC ch.0QPRC ch.0              */
    using QUDINT3  = regbits< type,  3,  1 >;  /**< Count inversion interrupt request of QPRC ch.0                    */
    using QUDINT2  = regbits< type,  2,  1 >;  /**< Overflow / underflow / zero index interrupt request of QPRC ch.0  */
    using QUDINT1  = regbits< type,  1,  1 >;  /**< PC and RC match interrupt request of QPRC ch.0                    */
    using QUDINT0  = regbits< type,  0,  1 >;  /**< PC match interrupt request of QPRC ch.0                           */
  };

  /**
   * IRQ020 Batch Read Register
   */
  struct IRQ020MON
  : public reg< uint32_t, base_addr + 0x254, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x254, ro, 0x0 >;

    using QUDINT5  = regbits< type,  5,  1 >;  /**< PC match and RC match interrupt request of QPRC ch.1              */
    using QUDINT4  = regbits< type,  4,  1 >;  /**< Out-of-range interrupt request of QPRC ch.1QPRC ch.1              */
    using QUDINT3  = regbits< type,  3,  1 >;  /**< Count inversion interrupt request of QPRC ch.1                    */
    using QUDINT2  = regbits< type,  2,  1 >;  /**< Overflow / underflow / zero index interrupt request of QPRC ch.1  */
    using QUDINT1  = regbits< type,  1,  1 >;  /**< PC and RC match interrupt request of QPRC ch.1                    */
    using QUDINT0  = regbits< type,  0,  1 >;  /**< PC match interrupt request of QPRC ch.1                           */
  };

  /**
   * IRQ021 Batch Read Register
   */
  struct IRQ021MON
  : public reg< uint32_t, base_addr + 0x258, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x258, ro, 0x0 >;

    using WAVEINT3  = regbits< type,  3,  1 >;  /**< Interrupt request of WFG timer 54 of the MFT unit 0                     */
    using WAVEINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of WFG timer 32 of the MFT unit 0                     */
    using WAVEINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of WFG timer 10 of the MFT unit 0                     */
    using WAVEINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the DTIF (motor emergency stop) of the MFT unit 0  */
  };

  /**
   * IRQ022 Batch Read Register
   */
  struct IRQ022MON
  : public reg< uint32_t, base_addr + 0x25c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x25c, ro, 0x0 >;

    using WAVEINT3  = regbits< type,  3,  1 >;  /**< Interrupt request of WFG timer 54 of the MFT unit 1                     */
    using WAVEINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of WFG timer 32 of the MFT unit 1                     */
    using WAVEINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of WFG timer 10 of the MFT unit 1                     */
    using WAVEINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the DTIF (motor emergency stop) of the MFT unit 1  */
  };

  /**
   * IRQ023 Batch Read Register
   */
  struct IRQ023MON
  : public reg< uint32_t, base_addr + 0x260, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x260, ro, 0x0 >;

    using WAVEINT3  = regbits< type,  3,  1 >;  /**< Interrupt request of WFG timer 54 of the MFT unit 2                     */
    using WAVEINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of WFG timer 32 of the MFT unit 2                     */
    using WAVEINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of WFG timer 10 of the MFT unit 2                     */
    using WAVEINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the DTIF (motor emergency stop) of the MFT unit 2  */
  };

  /**
   * IRQ024 Batch Read Register
   */
  struct IRQ024MON
  : public reg< uint32_t, base_addr + 0x264, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x264, ro, 0x0 >;

    using FRT_PEAK_INT2  = regbits< type,  2,  1 >;  /**< FRT ch.2 peak value detection interrupt request of the MFT unit 0  */
    using FRT_PEAK_INT1  = regbits< type,  1,  1 >;  /**< FRT ch.1 peak value detection interrupt request of the MFT unit 0  */
    using FRT_PEAK_INT0  = regbits< type,  0,  1 >;  /**< FRT ch.0 peak value detection interrupt request of the MFT unit 0  */
  };

  /**
   * IRQ025 Batch Read Register
   */
  struct IRQ025MON
  : public reg< uint32_t, base_addr + 0x268, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x268, ro, 0x0 >;

    using FRT_ZERO_INT2  = regbits< type,  2,  1 >;  /**< FRT ch.2 zero detection interrupt request of the MFT unit 0  */
    using FRT_ZERO_INT1  = regbits< type,  1,  1 >;  /**< FRT ch.1 zero detection interrupt request of the MFT unit 0  */
    using FRT_ZERO_INT0  = regbits< type,  0,  1 >;  /**< FRT ch.0 zero detection interrupt request of the MFT unit 0  */
  };

  /**
   * IRQ026 Batch Read Register
   */
  struct IRQ026MON
  : public reg< uint32_t, base_addr + 0x26c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x26c, ro, 0x0 >;

    using ICUINT3  = regbits< type,  3,  1 >;  /**< ICU ch.3 input edge detection interrupt request of the MFT unit 0  */
    using ICUINT2  = regbits< type,  2,  1 >;  /**< ICU ch.2 input edge detection interrupt request of the MFT unit 0  */
    using ICUINT1  = regbits< type,  1,  1 >;  /**< ICU ch.1 input edge detection interrupt request of the MFT unit 0  */
    using ICUINT0  = regbits< type,  0,  1 >;  /**< ICU ch.0 input edge detection interrupt request of the MFT unit 0  */
  };

  /**
   * IRQ027 Batch Read Register
   */
  struct IRQ027MON
  : public reg< uint32_t, base_addr + 0x270, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x270, ro, 0x0 >;

    using OCUINT5  = regbits< type,  5,  1 >;  /**< OCU ch.5 match detection interrupt request of the MFT unit 0  */
    using OCUINT4  = regbits< type,  4,  1 >;  /**< OCU ch.4 match detection interrupt request of the MFT unit 0  */
    using OCUINT3  = regbits< type,  3,  1 >;  /**< OCU ch.3 match detection interrupt request of the MFT unit 0  */
    using OCUINT2  = regbits< type,  2,  1 >;  /**< OCU ch.2 match detection interrupt request of the MFT unit 0  */
    using OCUINT1  = regbits< type,  1,  1 >;  /**< OCU ch.1 match detection interrupt request of the MFT unit 0  */
    using OCUINT0  = regbits< type,  0,  1 >;  /**< OCU ch.0 match detection interrupt request of the MFT unit 0  */
  };

  /**
   * IRQ028 Batch Read Register
   */
  struct IRQ028MON
  : public reg< uint32_t, base_addr + 0x274, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x274, ro, 0x0 >;

    using FRT_PEAK_INT2  = regbits< type,  2,  1 >;  /**< FRT ch.2 peak value detection interrupt request of the MFT unit 1  */
    using FRT_PEAK_INT1  = regbits< type,  1,  1 >;  /**< FRT ch.1 peak value detection interrupt request of the MFT unit 1  */
    using FRT_PEAK_INT0  = regbits< type,  0,  1 >;  /**< FRT ch.0 peak value detection interrupt request of the MFT unit 1  */
  };

  /**
   * IRQ029 Batch Read Register
   */
  struct IRQ029MON
  : public reg< uint32_t, base_addr + 0x278, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x278, ro, 0x0 >;

    using FRT_ZERO_INT2  = regbits< type,  2,  1 >;  /**< FRT ch.2 zero detection interrupt request of the MFT unit 1  */
    using FRT_ZERO_INT1  = regbits< type,  1,  1 >;  /**< FRT ch.1 zero detection interrupt request of the MFT unit 1  */
    using FRT_ZERO_INT0  = regbits< type,  0,  1 >;  /**< FRT ch.0 zero detection interrupt request of the MFT unit 1  */
  };

  /**
   * IRQ030 Batch Read Register
   */
  struct IRQ030MON
  : public reg< uint32_t, base_addr + 0x27c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x27c, ro, 0x0 >;

    using ICUINT3  = regbits< type,  3,  1 >;  /**< ICU ch.3 input edge detection interrupt request of the MFT unit 1  */
    using ICUINT2  = regbits< type,  2,  1 >;  /**< ICU ch.2 input edge detection interrupt request of the MFT unit 1  */
    using ICUINT1  = regbits< type,  1,  1 >;  /**< ICU ch.1 input edge detection interrupt request of the MFT unit 1  */
    using ICUINT0  = regbits< type,  0,  1 >;  /**< ICU ch.0 input edge detection interrupt request of the MFT unit 1  */
  };

  /**
   * IRQ031 Batch Read Register
   */
  struct IRQ031MON
  : public reg< uint32_t, base_addr + 0x280, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x280, ro, 0x0 >;

    using OCUINT5  = regbits< type,  5,  1 >;  /**< OCU ch.5 match detection interrupt request of the MFT unit 1  */
    using OCUINT4  = regbits< type,  4,  1 >;  /**< OCU ch.4 match detection interrupt request of the MFT unit 1  */
    using OCUINT3  = regbits< type,  3,  1 >;  /**< OCU ch.3 match detection interrupt request of the MFT unit 1  */
    using OCUINT2  = regbits< type,  2,  1 >;  /**< OCU ch.2 match detection interrupt request of the MFT unit 1  */
    using OCUINT1  = regbits< type,  1,  1 >;  /**< OCU ch.1 match detection interrupt request of the MFT unit 1  */
    using OCUINT0  = regbits< type,  0,  1 >;  /**< OCU ch.0 match detection interrupt request of the MFT unit 1  */
  };

  /**
   * IRQ032 Batch Read Register
   */
  struct IRQ032MON
  : public reg< uint32_t, base_addr + 0x284, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x284, ro, 0x0 >;

    using FRT_PEAK_INT2  = regbits< type,  2,  1 >;  /**< FRT ch.2 peak value detection interrupt request of the MFT unit 2  */
    using FRT_PEAK_INT1  = regbits< type,  1,  1 >;  /**< FRT ch.1 peak value detection interrupt request of the MFT unit 2  */
    using FRT_PEAK_INT0  = regbits< type,  0,  1 >;  /**< FRT ch.0 peak value detection interrupt request of the MFT unit 2  */
  };

  /**
   * IRQ033 Batch Read Register
   */
  struct IRQ033MON
  : public reg< uint32_t, base_addr + 0x288, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x288, ro, 0x0 >;

    using FRT_ZERO_INT2  = regbits< type,  2,  1 >;  /**< FRT ch.2 zero detection interrupt request of the MFT unit 2  */
    using FRT_ZERO_INT1  = regbits< type,  1,  1 >;  /**< FRT ch.1 zero detection interrupt request of the MFT unit 2  */
    using FRT_ZERO_INT0  = regbits< type,  0,  1 >;  /**< FRT ch.0 zero detection interrupt request of the MFT unit 2  */
  };

  /**
   * IRQ034 Batch Read Register
   */
  struct IRQ034MON
  : public reg< uint32_t, base_addr + 0x28c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x28c, ro, 0x0 >;

    using ICUINT3  = regbits< type,  3,  1 >;  /**< ICU ch.3 input edge detection interrupt request of the MFT unit 2  */
    using ICUINT2  = regbits< type,  2,  1 >;  /**< ICU ch.2 input edge detection interrupt request of the MFT unit 2  */
    using ICUINT1  = regbits< type,  1,  1 >;  /**< ICU ch.1 input edge detection interrupt request of the MFT unit 2  */
    using ICUINT0  = regbits< type,  0,  1 >;  /**< ICU ch.0 input edge detection interrupt request of the MFT unit 2  */
  };

  /**
   * IRQ035 Batch Read Register
   */
  struct IRQ035MON
  : public reg< uint32_t, base_addr + 0x290, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x290, ro, 0x0 >;

    using OCUINT5  = regbits< type,  5,  1 >;  /**< OCU ch.5 match detection interrupt request of the MFT unit 2  */
    using OCUINT4  = regbits< type,  4,  1 >;  /**< OCU ch.4 match detection interrupt request of the MFT unit 2  */
    using OCUINT3  = regbits< type,  3,  1 >;  /**< OCU ch.3 match detection interrupt request of the MFT unit 2  */
    using OCUINT2  = regbits< type,  2,  1 >;  /**< OCU ch.2 match detection interrupt request of the MFT unit 2  */
    using OCUINT1  = regbits< type,  1,  1 >;  /**< OCU ch.1 match detection interrupt request of the MFT unit 2  */
    using OCUINT0  = regbits< type,  0,  1 >;  /**< OCU ch.0 match detection interrupt request of the MFT unit 2  */
  };

  /**
   * IRQ036 Batch Read Register
   */
  struct IRQ036MON
  : public reg< uint32_t, base_addr + 0x294, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x294, ro, 0x0 >;

    using PPGINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of the PPG ch.4  */
    using PPGINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of the PPG ch.2  */
    using PPGINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the PPG ch.0  */
  };

  /**
   * IRQ037 Batch Read Register
   */
  struct IRQ037MON
  : public reg< uint32_t, base_addr + 0x298, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x298, ro, 0x0 >;

    using PPGINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of the PPG ch.12  */
    using PPGINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of the PPG ch.10  */
    using PPGINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the PPG ch.8   */
  };

  /**
   * IRQ038 Batch Read Register
   */
  struct IRQ038MON
  : public reg< uint32_t, base_addr + 0x29c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x29c, ro, 0x0 >;

    using PPGINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of the PPG ch.20  */
    using PPGINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of the PPG ch.18  */
    using PPGINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the PPG ch.16  */
  };

  /**
   * IRQ039 Batch Read Register
   */
  struct IRQ039MON
  : public reg< uint32_t, base_addr + 0x2a0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a0, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.0  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.0  */
  };

  /**
   * IRQ040 Batch Read Register
   */
  struct IRQ040MON
  : public reg< uint32_t, base_addr + 0x2a4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a4, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.1  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.1  */
  };

  /**
   * IRQ041 Batch Read Register
   */
  struct IRQ041MON
  : public reg< uint32_t, base_addr + 0x2a8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2a8, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.2  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.2  */
  };

  /**
   * IRQ042 Batch Read Register
   */
  struct IRQ042MON
  : public reg< uint32_t, base_addr + 0x2ac, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2ac, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.3  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.3  */
  };

  /**
   * IRQ043 Batch Read Register
   */
  struct IRQ043MON
  : public reg< uint32_t, base_addr + 0x2b0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b0, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.4  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.4  */
  };

  /**
   * IRQ044 Batch Read Register
   */
  struct IRQ044MON
  : public reg< uint32_t, base_addr + 0x2b4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b4, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.5  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.5  */
  };

  /**
   * IRQ045 Batch Read Register
   */
  struct IRQ045MON
  : public reg< uint32_t, base_addr + 0x2b8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2b8, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.6  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.6  */
  };

  /**
   * IRQ046 Batch Read Register
   */
  struct IRQ046MON
  : public reg< uint32_t, base_addr + 0x2bc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2bc, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.7  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.7  */
  };

  /**
   * IRQ047 Batch Read Register
   */
  struct IRQ047MON
  : public reg< uint32_t, base_addr + 0x2c0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c0, ro, 0x0 >;

    using TIMINT2  = regbits< type,  1,  1 >;  /**< Dual timer TIMINT2 interrupt request  */
    using TIMINT1  = regbits< type,  0,  1 >;  /**< Dual timer TIMINT1 interrupt request  */
  };

  /**
   * IRQ048 Batch Read Register
   */
  struct IRQ048MON
  : public reg< uint32_t, base_addr + 0x2c4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c4, ro, 0x0 >;

    using WCINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the watch counter  */
  };

  /**
   * IRQ049 Batch Read Register
   */
  struct IRQ049MON
  : public reg< uint32_t, base_addr + 0x2c8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c8, ro, 0x0 >;

    using BMEMCS  = regbits< type,  0,  1 >;  /**< External bus output error interrupt request  */
  };

  /**
   * IRQ050 Batch Read Register
   */
  struct IRQ050MON
  : public reg< uint32_t, base_addr + 0x2cc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2cc, ro, 0x0 >;

    using RTCINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the RTC$  */
  };

  /**
   * IRQ051 Batch Read Register
   */
  struct IRQ051MON
  : public reg< uint32_t, base_addr + 0x2d0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d0, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.8  */
  };

  /**
   * IRQ052 Batch Read Register
   */
  struct IRQ052MON
  : public reg< uint32_t, base_addr + 0x2d4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d4, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.9  */
  };

  /**
   * IRQ053 Batch Read Register
   */
  struct IRQ053MON
  : public reg< uint32_t, base_addr + 0x2d8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2d8, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.10  */
  };

  /**
   * IRQ054 Batch Read Register
   */
  struct IRQ054MON
  : public reg< uint32_t, base_addr + 0x2dc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2dc, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.11  */
  };

  /**
   * IRQ055 Batch Read Register
   */
  struct IRQ055MON
  : public reg< uint32_t, base_addr + 0x2e0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e0, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.12  */
  };

  /**
   * IRQ056 Batch Read Register
   */
  struct IRQ056MON
  : public reg< uint32_t, base_addr + 0x2e4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e4, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.13  */
  };

  /**
   * IRQ057 Batch Read Register
   */
  struct IRQ057MON
  : public reg< uint32_t, base_addr + 0x2e8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2e8, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.14  */
  };

  /**
   * IRQ058 Batch Read Register
   */
  struct IRQ058MON
  : public reg< uint32_t, base_addr + 0x2ec, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2ec, ro, 0x0 >;

    using EXTINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.15  */
  };

  /**
   * IRQ059 Batch Read Register
   */
  struct IRQ059MON
  : public reg< uint32_t, base_addr + 0x2f0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2f0, ro, 0x0 >;

    using UPLLINT  = regbits< type,  3,  1 >;  /**< PLL of USB / Ethernet oscillation stabilization wait completion interrupt  */
    using MPLLINT  = regbits< type,  2,  1 >;  /**< Main PLL oscillation stabilization wait completion interrupt               */
    using SOSCINT  = regbits< type,  1,  1 >;  /**< Sub clock oscillation stabilization wait completion interrupt              */
    using MOSCINT  = regbits< type,  0,  1 >;  /**< Main clock oscillation stabilization wait completion interrupt             */
  };

  /**
   * IRQ060 Batch Read Register
   */
  struct IRQ060MON
  : public reg< uint32_t, base_addr + 0x2f4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2f4, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.0  */
  };

  /**
   * IRQ061 Batch Read Register
   */
  struct IRQ061MON
  : public reg< uint32_t, base_addr + 0x2f8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2f8, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.0        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.0  */
  };

  /**
   * IRQ062 Batch Read Register
   */
  struct IRQ062MON
  : public reg< uint32_t, base_addr + 0x2fc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2fc, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.1  */
  };

  /**
   * IRQ063 Batch Read Register
   */
  struct IRQ063MON
  : public reg< uint32_t, base_addr + 0x300, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.1        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.1  */
  };

  /**
   * IRQ064 Batch Read Register
   */
  struct IRQ064MON
  : public reg< uint32_t, base_addr + 0x304, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x304, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.2  */
  };

  /**
   * IRQ065 Batch Read Register
   */
  struct IRQ065MON
  : public reg< uint32_t, base_addr + 0x308, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x308, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.2        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.2  */
  };

  /**
   * IRQ066 Batch Read Register
   */
  struct IRQ066MON
  : public reg< uint32_t, base_addr + 0x30c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.3  */
  };

  /**
   * IRQ067 Batch Read Register
   */
  struct IRQ067MON
  : public reg< uint32_t, base_addr + 0x310, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.3        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.3  */
  };

  /**
   * IRQ068 Batch Read Register
   */
  struct IRQ068MON
  : public reg< uint32_t, base_addr + 0x314, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x314, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.4  */
  };

  /**
   * IRQ069 Batch Read Register
   */
  struct IRQ069MON
  : public reg< uint32_t, base_addr + 0x318, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x318, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.4        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.4  */
  };

  /**
   * IRQ070 Batch Read Register
   */
  struct IRQ070MON
  : public reg< uint32_t, base_addr + 0x31c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.5  */
  };

  /**
   * IRQ071 Batch Read Register
   */
  struct IRQ071MON
  : public reg< uint32_t, base_addr + 0x320, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x320, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.5        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.5  */
  };

  /**
   * IRQ072 Batch Read Register
   */
  struct IRQ072MON
  : public reg< uint32_t, base_addr + 0x324, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x324, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.6  */
  };

  /**
   * IRQ073 Batch Read Register
   */
  struct IRQ073MON
  : public reg< uint32_t, base_addr + 0x328, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x328, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.6        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.6  */
  };

  /**
   * IRQ074 Batch Read Register
   */
  struct IRQ074MON
  : public reg< uint32_t, base_addr + 0x32c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x32c, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.7  */
  };

  /**
   * IRQ075 Batch Read Register
   */
  struct IRQ075MON
  : public reg< uint32_t, base_addr + 0x330, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x330, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.7        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.7  */
  };

  /**
   * IRQ076 Batch Read Register
   */
  struct IRQ076MON
  : public reg< uint32_t, base_addr + 0x334, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x334, ro, 0x0 >;

    using ADCINT4  = regbits< type,  4,  1 >;  /**< Range comparison result interrupt request of the A/D converter unit 0       */
    using ADCINT3  = regbits< type,  3,  1 >;  /**< Conversion result comparison interrupt request of the A/D converter unit 0  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< FIFO overrun interrupt request of the A/D converter unit 0                  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< Scan conversion interrupt request of the A/D converter unit 0               */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< Priority conversion interrupt request of the A/D converter unit 0           */
  };

  /**
   * IRQ077 Batch Read Register
   */
  struct IRQ077MON
  : public reg< uint32_t, base_addr + 0x338, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x338, ro, 0x0 >;

    using ADCINT4  = regbits< type,  4,  1 >;  /**< Range comparison result interrupt request of the A/D converter unit 1       */
    using ADCINT3  = regbits< type,  3,  1 >;  /**< Conversion result comparison interrupt request of the A/D converter unit 1  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< FIFO overrun interrupt request of the A/D converter unit 1                  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< Scan conversion interrupt request of the A/D converter unit 1               */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< Priority conversion interrupt request of the A/D converter unit 1           */
  };

  /**
   * IRQ078 Batch Read Register
   */
  struct IRQ078MON
  : public reg< uint32_t, base_addr + 0x33c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x33c, ro, 0x0 >;

    using USB_DRQ_INT4  = regbits< type,  4,  1 >;  /**< Endpoint 5 DRQ interrupt request of the USB ch.0  */
    using USB_DRQ_INT3  = regbits< type,  3,  1 >;  /**< Endpoint 4 DRQ interrupt request of the USB ch.0  */
    using USB_DRQ_INT2  = regbits< type,  2,  1 >;  /**< Endpoint 3 DRQ interrupt request of the USB ch.0  */
    using USB_DRQ_INT1  = regbits< type,  1,  1 >;  /**< Endpoint 2 DRQ interrupt request of the USB ch.0  */
    using USB_DRQ_INT0  = regbits< type,  0,  1 >;  /**< Endpoint 1 DRQ interrupt request of the USB ch.0  */
  };

  /**
   * IRQ079 Batch Read Register
   */
  struct IRQ079MON
  : public reg< uint32_t, base_addr + 0x340, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x340, ro, 0x0 >;

    using USB_INT5  = regbits< type,  5,  1 >;  /**< SOFIRQ/CMPIRQ interrupt request of the USB ch.0              */
    using USB_INT4  = regbits< type,  4,  1 >;  /**< DIRQ/URPIRQ/RWKIRQ/CNNIRQ interrupt request of the USB ch.0  */
    using USB_INT3  = regbits< type,  3,  1 >;  /**< SPK interrupt request of the USB ch.0                        */
    using USB_INT2  = regbits< type,  2,  1 >;  /**< SUSP/SOF/BRST/CONF/WKUP interrupt request of the USB ch.0    */
    using USB_INT1  = regbits< type,  1,  1 >;  /**< Endpoint 0 DRQO interrupt request of the USB ch.0            */
    using USB_INT0  = regbits< type,  0,  1 >;  /**< Endpoint 0 DRQI interrupt request of the USB ch.0            */
  };

  /**
   * IRQ080 Batch Read Register
   */
  struct IRQ080MON
  : public reg< uint32_t, base_addr + 0x344, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x344, ro, 0x0 >;

    using CANINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the CAN ch.0  */
  };

  /**
   * IRQ081 Batch Read Register
   */
  struct IRQ081MON
  : public reg< uint32_t, base_addr + 0x348, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x348, ro, 0x0 >;

    using CANINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the CAN ch.1  */
  };

  /**
   * IRQ082 Batch Read Register
   */
  struct IRQ082MON
  : public reg< uint32_t, base_addr + 0x34c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x34c, ro, 0x0 >;

    using MACLPI  = regbits< type,  2,  1 >;  /**< LPI interrupt request of the Ethernet MAC  */
    using MACPMT  = regbits< type,  1,  1 >;  /**< PMT interrupt request of the Ethernet MAC  */
    using MACSBD  = regbits< type,  0,  1 >;  /**< SBD interrupt request of the Ethernet MAC  */
  };

  /**
   * IRQ083 Batch Read Register
   */
  struct IRQ083MON
  : public reg< uint32_t, base_addr + 0x350, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x350, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the DMAC ch.0  */
  };

  /**
   * IRQ084 Batch Read Register
   */
  struct IRQ084MON
  : public reg< uint32_t, base_addr + 0x354, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x354, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the DMAC ch.1  */
  };

  /**
   * IRQ085 Batch Read Register
   */
  struct IRQ085MON
  : public reg< uint32_t, base_addr + 0x358, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x358, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the DMAC ch.2  */
  };

  /**
   * IRQ086 Batch Read Register
   */
  struct IRQ086MON
  : public reg< uint32_t, base_addr + 0x35c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x35c, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the DMAC ch.3  */
  };

  /**
   * IRQ087 Batch Read Register
   */
  struct IRQ087MON
  : public reg< uint32_t, base_addr + 0x360, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x360, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the DMAC ch.4  */
  };

  /**
   * IRQ088 Batch Read Register
   */
  struct IRQ088MON
  : public reg< uint32_t, base_addr + 0x364, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x364, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the DMAC ch.5  */
  };

  /**
   * IRQ089 Batch Read Register
   */
  struct IRQ089MON
  : public reg< uint32_t, base_addr + 0x368, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x368, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the DMAC ch.6  */
  };

  /**
   * IRQ090 Batch Read Register
   */
  struct IRQ090MON
  : public reg< uint32_t, base_addr + 0x36c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x36c, ro, 0x0 >;

    using DMACINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the DMAC ch.7  */
  };

  /**
   * IRQ091 Batch Read Register
   */
  struct IRQ091MON
  : public reg< uint32_t, base_addr + 0x370, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x370, ro, 0x0 >;

    using DSTCINT1  = regbits< type,  1,  1 >;  /**< DSTC ERINT interrupt request  */
    using DSTCINT0  = regbits< type,  0,  1 >;  /**< DSTC SWINT interrupt request  */
  };

  /**
   * IRQ092 Batch Read Register
   */
  struct IRQ092MON
  : public reg< uint32_t, base_addr + 0x374, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x374, ro, 0x0 >;

    using EXTINT3  = regbits< type,  3,  1 >;  /**< Interrupt request of the external pin interrupt ch.19  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of the external pin interrupt ch.18  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of the external pin interrupt ch.17  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.16  */
  };

  /**
   * IRQ093 Batch Read Register
   */
  struct IRQ093MON
  : public reg< uint32_t, base_addr + 0x378, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x378, ro, 0x0 >;

    using EXTINT3  = regbits< type,  3,  1 >;  /**< Interrupt request of the external pin interrupt ch.23  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of the external pin interrupt ch.22  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of the external pin interrupt ch.21  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.20  */
  };

  /**
   * IRQ094 Batch Read Register
   */
  struct IRQ094MON
  : public reg< uint32_t, base_addr + 0x37c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x37c, ro, 0x0 >;

    using EXTINT3  = regbits< type,  3,  1 >;  /**< Interrupt request of the external pin interrupt ch.27  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of the external pin interrupt ch.26  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of the external pin interrupt ch.25  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.24  */
  };

  /**
   * IRQ095 Batch Read Register
   */
  struct IRQ095MON
  : public reg< uint32_t, base_addr + 0x380, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x380, ro, 0x0 >;

    using EXTINT3  = regbits< type,  3,  1 >;  /**< Interrupt request of the external pin interrupt ch.31  */
    using EXTINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of the external pin interrupt ch.30  */
    using EXTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of the external pin interrupt ch.29  */
    using EXTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of the external pin interrupt ch.28  */
  };

  /**
   * IRQ096 Batch Read Register
   */
  struct IRQ096MON
  : public reg< uint32_t, base_addr + 0x384, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x384, ro, 0x0 >;

    using QUDINT5  = regbits< type,  5,  1 >;  /**< PC match and RC match interrupt request of QPRC ch.2              */
    using QUDINT4  = regbits< type,  4,  1 >;  /**< Out-of-range interrupt request of QPRC ch.2QPRC ch.2              */
    using QUDINT3  = regbits< type,  3,  1 >;  /**< Count inversion interrupt request of QPRC ch.2                    */
    using QUDINT2  = regbits< type,  2,  1 >;  /**< Overflow / underflow / zero index interrupt request of QPRC ch.2  */
    using QUDINT1  = regbits< type,  1,  1 >;  /**< PC and RC match interrupt request of QPRC ch.2                    */
    using QUDINT0  = regbits< type,  0,  1 >;  /**< PC match interrupt request of QPRC ch.2                           */
  };

  /**
   * IRQ097 Batch Read Register
   */
  struct IRQ097MON
  : public reg< uint32_t, base_addr + 0x388, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x388, ro, 0x0 >;

    using QUDINT5  = regbits< type,  5,  1 >;  /**< PC match and RC match interrupt request of QPRC ch.3              */
    using QUDINT4  = regbits< type,  4,  1 >;  /**< Out-of-range interrupt request of QPRC ch.3QPRC ch.3              */
    using QUDINT3  = regbits< type,  3,  1 >;  /**< Count inversion interrupt request of QPRC ch.3                    */
    using QUDINT2  = regbits< type,  2,  1 >;  /**< Overflow / underflow / zero index interrupt request of QPRC ch.3  */
    using QUDINT1  = regbits< type,  1,  1 >;  /**< PC and RC match interrupt request of QPRC ch.3                    */
    using QUDINT0  = regbits< type,  0,  1 >;  /**< PC match interrupt request of QPRC ch.3                           */
  };

  /**
   * IRQ098 Batch Read Register
   */
  struct IRQ098MON
  : public reg< uint32_t, base_addr + 0x38c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38c, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.8  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.8  */
  };

  /**
   * IRQ099 Batch Read Register
   */
  struct IRQ099MON
  : public reg< uint32_t, base_addr + 0x390, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x390, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.9  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.9  */
  };

  /**
   * IRQ100 Batch Read Register
   */
  struct IRQ100MON
  : public reg< uint32_t, base_addr + 0x394, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x394, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.10  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.10  */
  };

  /**
   * IRQ101 Batch Read Register
   */
  struct IRQ101MON
  : public reg< uint32_t, base_addr + 0x398, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x398, ro, 0x0 >;

    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.11  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.11  */
  };

  /**
   * IRQ102 Batch Read Register
   */
  struct IRQ102MON
  : public reg< uint32_t, base_addr + 0x39c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x39c, ro, 0x0 >;

    using BTINT7  = regbits< type,  7,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.15  */
    using BTINT6  = regbits< type,  6,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.15  */
    using BTINT5  = regbits< type,  5,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.14  */
    using BTINT4  = regbits< type,  4,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.14  */
    using BTINT3  = regbits< type,  3,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.13  */
    using BTINT2  = regbits< type,  2,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.13  */
    using BTINT1  = regbits< type,  1,  1 >;  /**< Interrupt request of source 1 (IRQ1) of the base timer ch.12  */
    using BTINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of source 0 (IRQ0) of the base timer ch.12  */
  };

  /**
   * IRQ103 Batch Read Register
   */
  struct IRQ103MON
  : public reg< uint32_t, base_addr + 0x3a0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a0, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.8  */
  };

  /**
   * IRQ104 Batch Read Register
   */
  struct IRQ104MON
  : public reg< uint32_t, base_addr + 0x3a4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a4, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.8        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.8  */
  };

  /**
   * IRQ105 Batch Read Register
   */
  struct IRQ105MON
  : public reg< uint32_t, base_addr + 0x3a8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3a8, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.9  */
  };

  /**
   * IRQ106 Batch Read Register
   */
  struct IRQ106MON
  : public reg< uint32_t, base_addr + 0x3ac, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3ac, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.9        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.9  */
  };

  /**
   * IRQ107 Batch Read Register
   */
  struct IRQ107MON
  : public reg< uint32_t, base_addr + 0x3b0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3b0, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.10  */
  };

  /**
   * IRQ108 Batch Read Register
   */
  struct IRQ108MON
  : public reg< uint32_t, base_addr + 0x3b4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3b4, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.10        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.10  */
  };

  /**
   * IRQ109 Batch Read Register
   */
  struct IRQ109MON
  : public reg< uint32_t, base_addr + 0x3b8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3b8, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.11  */
  };

  /**
   * IRQ110 Batch Read Register
   */
  struct IRQ110MON
  : public reg< uint32_t, base_addr + 0x3bc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3bc, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.11        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.11  */
  };

  /**
   * IRQ111 Batch Read Register
   */
  struct IRQ111MON
  : public reg< uint32_t, base_addr + 0x3c0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c0, ro, 0x0 >;

    using ADCINT4  = regbits< type,  4,  1 >;  /**< Range comparison result interrupt request of the A/D converter unit 2       */
    using ADCINT3  = regbits< type,  3,  1 >;  /**< Conversion result comparison interrupt request of the A/D converter unit 2  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< FIFO overrun interrupt request of the A/D converter unit 2                  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< Scan conversion interrupt request of the A/D converter unit 2               */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< Priority conversion interrupt request of the A/D converter unit 2           */
  };

  /**
   * IRQ112 Batch Read Register
   */
  struct IRQ112MON
  : public reg< uint32_t, base_addr + 0x3c4, ro, 0x0 >
  {
  };

  /**
   * IRQ113 Batch Read Register
   */
  struct IRQ113MON
  : public reg< uint32_t, base_addr + 0x3c8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c8, ro, 0x0 >;

    using USB_DRQ_INT4  = regbits< type,  4,  1 >;  /**< Endpoint 5 DRQ interrupt request of the USB ch.1  */
    using USB_DRQ_INT3  = regbits< type,  3,  1 >;  /**< Endpoint 4 DRQ interrupt request of the USB ch.1  */
    using USB_DRQ_INT2  = regbits< type,  2,  1 >;  /**< Endpoint 3 DRQ interrupt request of the USB ch.1  */
    using USB_DRQ_INT1  = regbits< type,  1,  1 >;  /**< Endpoint 2 DRQ interrupt request of the USB ch.1  */
    using USB_DRQ_INT0  = regbits< type,  0,  1 >;  /**< Endpoint 1 DRQ interrupt request of the USB ch.1  */
  };

  /**
   * IRQ114 Batch Read Register
   */
  struct IRQ114MON
  : public reg< uint32_t, base_addr + 0x3cc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3cc, ro, 0x0 >;

    using USB_INT5  = regbits< type,  5,  1 >;  /**< SOFIRQ/CMPIRQ interrupt request of the USB ch.1              */
    using USB_INT4  = regbits< type,  4,  1 >;  /**< DIRQ/URPIRQ/RWKIRQ/CNNIRQ interrupt request of the USB ch.1  */
    using USB_INT3  = regbits< type,  3,  1 >;  /**< SPK interrupt request of the USB ch.1                        */
    using USB_INT2  = regbits< type,  2,  1 >;  /**< SUSP/SOF/BRST/CONF/WKUP interrupt request of the USB ch.1    */
    using USB_INT1  = regbits< type,  1,  1 >;  /**< Endpoint 0 DRQO interrupt request of the USB ch.1            */
    using USB_INT0  = regbits< type,  0,  1 >;  /**< Endpoint 0 DRQI interrupt request of the USB ch.1            */
  };

  /**
   * IRQ115 Batch Read Register
   */
  struct IRQ115MON
  : public reg< uint32_t, base_addr + 0x3d0, ro, 0x0 >
  {
  };

  /**
   * IRQ116 Batch Read Register
   */
  struct IRQ116MON
  : public reg< uint32_t, base_addr + 0x3d4, ro, 0x0 >
  {
  };

  /**
   * IRQ117 Batch Read Register
   */
  struct IRQ117MON
  : public reg< uint32_t, base_addr + 0x3d8, ro, 0x0 >
  {
  };

  /**
   * IRQ118 Batch Read Register
   */
  struct IRQ118MON
  : public reg< uint32_t, base_addr + 0x3dc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3dc, ro, 0x0 >;

    using SDINT1  = regbits< type,  1,  1 >;  /**< SD card interrupt request                                         */
    using SDINT0  = regbits< type,  0,  1 >;  /**< Interrupt request of aggregation of all SD I/F interrupt sources  */
  };

  /**
   * IRQ119 Batch Read Register
   */
  struct IRQ119MON
  : public reg< uint32_t, base_addr + 0x3e0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e0, ro, 0x0 >;

    using FLINT  = regbits< type,  0,  1 >;  /**< Interrupt request of the Flash I/F  */
  };

  /**
   * IRQ120 Batch Read Register
   */
  struct IRQ120MON
  : public reg< uint32_t, base_addr + 0x3e4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e4, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.12  */
  };

  /**
   * IRQ121 Batch Read Register
   */
  struct IRQ121MON
  : public reg< uint32_t, base_addr + 0x3e8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3e8, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.12        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.12  */
  };

  /**
   * IRQ122 Batch Read Register
   */
  struct IRQ122MON
  : public reg< uint32_t, base_addr + 0x3ec, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3ec, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.13  */
  };

  /**
   * IRQ123 Batch Read Register
   */
  struct IRQ123MON
  : public reg< uint32_t, base_addr + 0x3f0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f0, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.13        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.13  */
  };

  /**
   * IRQ124 Batch Read Register
   */
  struct IRQ124MON
  : public reg< uint32_t, base_addr + 0x3f4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f4, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.14  */
  };

  /**
   * IRQ125 Batch Read Register
   */
  struct IRQ125MON
  : public reg< uint32_t, base_addr + 0x3f8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f8, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.14        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.14  */
  };

  /**
   * IRQ126 Batch Read Register
   */
  struct IRQ126MON
  : public reg< uint32_t, base_addr + 0x3fc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3fc, ro, 0x0 >;

    using MFSRINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request of the MFS ch.15  */
  };

  /**
   * IRQ127 Batch Read Register
   */
  struct IRQ127MON
  : public reg< uint32_t, base_addr + 0x400, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request of the MFS ch.15        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request of the MFS ch.15  */
  };
};
} // namespace mptl

#endif // ARCH_REG_INTREQ_HPP_INCLUDED
