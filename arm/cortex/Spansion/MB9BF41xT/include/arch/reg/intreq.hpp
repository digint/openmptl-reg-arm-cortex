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
//  Import from CMSIS-SVD: "Spansion/MB9BF41xT.svd"
//
//  name: MB9BF41xT
//  version: 1.7
//  description: MB9BF41xT
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

    using EXINT3    = regbits< type, 31,  1 >;  /**< The interrupt signal of the external interrupt ch.3 is output as a transfer request to the DMAC (including extension).  */
    using EXINT2    = regbits< type, 30,  1 >;  /**< The interrupt signal of the external interrupt ch.2 is output as a transfer request to the DMAC (including extension).  */
    using EXINT1    = regbits< type, 29,  1 >;  /**< The interrupt signal of the external interrupt ch.1 is output as a transfer request to the DMAC (including extension).  */
    using EXINT0    = regbits< type, 28,  1 >;  /**< The interrupt signal of the external interrupt ch.0 is output as a transfer request to the DMAC (including extension).  */
    using MFS7TX    = regbits< type, 27,  1 >;  /**< The transmission interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).    */
    using MFS7RX    = regbits< type, 26,  1 >;  /**< The reception interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).       */
    using MFS6TX    = regbits< type, 25,  1 >;  /**< The transmission interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).    */
    using MFS6RX    = regbits< type, 24,  1 >;  /**< The reception interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).       */
    using MFS5TX    = regbits< type, 23,  1 >;  /**< The transmission interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).    */
    using MFS5RX    = regbits< type, 22,  1 >;  /**< The reception interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).       */
    using MFS4TX    = regbits< type, 21,  1 >;  /**< The transmission interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).    */
    using MFS4RX    = regbits< type, 20,  1 >;  /**< The reception interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).       */
    using MFS3TX    = regbits< type, 19,  1 >;  /**< The transmission interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).    */
    using MFS3RX    = regbits< type, 18,  1 >;  /**< The reception interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).       */
    using MFS2TX    = regbits< type, 17,  1 >;  /**< The transmission interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).    */
    using MFS2RX    = regbits< type, 16,  1 >;  /**< The reception interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).       */
    using MFS1TX    = regbits< type, 15,  1 >;  /**< The transmission interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).    */
    using MFS1RX    = regbits< type, 14,  1 >;  /**< The reception interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).       */
    using MFS0TX    = regbits< type, 13,  1 >;  /**< The transmission interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).    */
    using MFS0RX    = regbits< type, 12,  1 >;  /**< The reception interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).       */
    using IRQ0BT6   = regbits< type, 11,  1 >;  /**< The IRQ0 interrupt signal of the base timer ch.6 is output as a transfer request to the DMAC.                           */
    using IRQ0BT4   = regbits< type, 10,  1 >;  /**< The IRQ0 interrupt signal of the base timer ch.4 is output as a transfer request to the DMAC.                           */
    using IRQ0BT3   = regbits< type,  9,  1 >;  /**< The IRQ0 interrupt signal of the base timer ch.3 is output as a transfer request to the DMAC.                           */
    using IRQ0BT0   = regbits< type,  8,  1 >;  /**< The IRQ0 interrupt signal of the base timer ch.0 is output as a transfer request to the DMAC.                           */
    using ADCSCAN2  = regbits< type,  7,  1 >;  /**< The scan conversion interrupt signal of the A/D converter unit 2 is output as a transfer request to the DMAC.           */
    using ADCSCAN1  = regbits< type,  6,  1 >;  /**< The scan conversion interrupt signal of the A/D converter unit 1 is output as a transfer request to the DMAC.           */
    using ADCSCAN0  = regbits< type,  5,  1 >;  /**< The scan conversion interrupt signal of the A/D converter unit 0 is output as a transfer request to the DMAC.           */
    using USBEP5    = regbits< type,  4,  1 >;  /**< The EP5 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.                               */
    using USBEP4    = regbits< type,  3,  1 >;  /**< The EP4 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.                               */
    using USBEP3    = regbits< type,  2,  1 >;  /**< The EP3 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.                               */
    using USBEP2    = regbits< type,  1,  1 >;  /**< The EP2 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.                               */
    using USBEP1    = regbits< type,  0,  1 >;  /**< The EP1 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.                               */
  };

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

    using WAVE2INT3  = regbits< type, 11,  1 >;  /**< WFG timer 54 interrupt request in MFT unit 2                 */
    using WAVE2INT2  = regbits< type, 10,  1 >;  /**< WFG timer 32 interrupt request in MFT unit 2                 */
    using WAVE2INT1  = regbits< type,  9,  1 >;  /**< WFG timer 10 interrupt request in MFT unit 2                 */
    using WAVE2INT0  = regbits< type,  8,  1 >;  /**< DTIF (motor emergency stop) interrupt request in MFT unit 2  */
    using WAVE1INT3  = regbits< type,  7,  1 >;  /**< WFG timer 54 interrupt request in MFT unit 1                 */
    using WAVE1INT2  = regbits< type,  6,  1 >;  /**< WFG timer 32 interrupt request in MFT unit 1                 */
    using WAVE1INT1  = regbits< type,  5,  1 >;  /**< WFG timer 10 interrupt request in MFT unit 1                 */
    using WAVE1INT0  = regbits< type,  4,  1 >;  /**< DTIF (motor emergency stop) interrupt request in MFT unit 1  */
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

    using EXTINT23  = regbits< type, 23,  1 >;  /**< Interrupt request on external interrupt ch.31  */
    using EXTINT22  = regbits< type, 22,  1 >;  /**< Interrupt request on external interrupt ch.30  */
    using EXTINT21  = regbits< type, 21,  1 >;  /**< Interrupt request on external interrupt ch.29  */
    using EXTINT20  = regbits< type, 20,  1 >;  /**< Interrupt request on external interrupt ch.28  */
    using EXTINT19  = regbits< type, 19,  1 >;  /**< Interrupt request on external interrupt ch.27  */
    using EXTINT18  = regbits< type, 18,  1 >;  /**< Interrupt request on external interrupt ch.26  */
    using EXTINT17  = regbits< type, 17,  1 >;  /**< Interrupt request on external interrupt ch.25  */
    using EXTINT16  = regbits< type, 16,  1 >;  /**< Interrupt request on external interrupt ch.24  */
    using EXTINT15  = regbits< type, 15,  1 >;  /**< Interrupt request on external interrupt ch.23  */
    using EXTINT14  = regbits< type, 14,  1 >;  /**< Interrupt request on external interrupt ch.22  */
    using EXTINT13  = regbits< type, 13,  1 >;  /**< Interrupt request on external interrupt ch.21  */
    using EXTINT12  = regbits< type, 12,  1 >;  /**< Interrupt request on external interrupt ch.20  */
    using EXTINT11  = regbits< type, 11,  1 >;  /**< Interrupt request on external interrupt ch.19  */
    using EXTINT10  = regbits< type, 10,  1 >;  /**< Interrupt request on external interrupt ch.18  */
    using EXTINT9   = regbits< type,  9,  1 >;  /**< Interrupt request on external interrupt ch.17  */
    using EXTINT8   = regbits< type,  8,  1 >;  /**< Interrupt request on external interrupt ch.16  */
    using EXTINT7   = regbits< type,  7,  1 >;  /**< Interrupt request on external interrupt ch.15  */
    using EXTINT6   = regbits< type,  6,  1 >;  /**< Interrupt request on external interrupt ch.14  */
    using EXTINT5   = regbits< type,  5,  1 >;  /**< Interrupt request on external interrupt ch.13  */
    using EXTINT4   = regbits< type,  4,  1 >;  /**< Interrupt request on external interrupt ch.12  */
    using EXTINT3   = regbits< type,  3,  1 >;  /**< Interrupt request on external interrupt ch.11  */
    using EXTINT2   = regbits< type,  2,  1 >;  /**< Interrupt request on external interrupt ch.10  */
    using EXTINT1   = regbits< type,  1,  1 >;  /**< Interrupt request on external interrupt ch.9   */
    using EXTINT0   = regbits< type,  0,  1 >;  /**< Interrupt request on external interrupt ch.8   */
  };

  /**
   * IRQ06 Batch Read Register
   */
  struct IRQ06MON
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x0 >;

    using QUD2INT5  = regbits< type, 19,  1 >;  /**< PC match and RC match interrupt request on QPRC ch.2          */
    using QUD2INT4  = regbits< type, 18,  1 >;  /**< Interrupt request detected RC out of range on QPRC ch.2       */
    using QUD2INT3  = regbits< type, 17,  1 >;  /**< PC count invert interrupt request on QPRC ch.2                */
    using QUD2INT2  = regbits< type, 16,  1 >;  /**< Overflow/underflow/zero index interrupt request on QPRC ch.2  */
    using QUD2INT1  = regbits< type, 15,  1 >;  /**< PC and RC match interrupt request on QPRC ch.2                */
    using QUD2INT0  = regbits< type, 14,  1 >;  /**< PC match interrupt request on QPRC ch.2                       */
    using QUD1INT5  = regbits< type, 13,  1 >;  /**< PC match and RC match interrupt request on QPRC ch.1          */
    using QUD1INT4  = regbits< type, 12,  1 >;  /**< Interrupt request detected RC out of range on QPRC ch.1       */
    using QUD1INT3  = regbits< type, 11,  1 >;  /**< PC count invert interrupt request on QPRC ch.1                */
    using QUD1INT2  = regbits< type, 10,  1 >;  /**< Overflow/underflow/zero index interrupt request on QPRC ch.1  */
    using QUD1INT1  = regbits< type,  9,  1 >;  /**< PC and RC match interrupt request on QPRC ch.1                */
    using QUD1INT0  = regbits< type,  8,  1 >;  /**< PC match interrupt request on QPRC ch.1                       */
    using QUD0INT5  = regbits< type,  7,  1 >;  /**< PC match and RC match interrupt request on QPRC ch.0          */
    using QUD0INT4  = regbits< type,  6,  1 >;  /**< Interrupt request detected RC out of range on QPRC ch.0       */
    using QUD0INT3  = regbits< type,  5,  1 >;  /**< PC count invert interrupt request on QPRC ch.0                */
    using QUD0INT2  = regbits< type,  4,  1 >;  /**< Overflow/underflow/zero index interrupt request on QPRC ch.0  */
    using QUD0INT1  = regbits< type,  3,  1 >;  /**< PC and RC match interrupt request on QPRC ch.0                */
    using QUD0INT0  = regbits< type,  2,  1 >;  /**< PC match interrupt request on QPRC ch.0                       */
    using TIMINT2   = regbits< type,  1,  1 >;  /**< Dual timer 2 interrupt request                                */
    using TIMINT1   = regbits< type,  0,  1 >;  /**< Dual timer 1 interrupt request                                */
  };

  /**
   * IRQ07 Batch Read Register
   */
  struct IRQ07MON
  : public reg< uint32_t, base_addr + 0x30, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.0  */
  };

  /**
   * IRQ08 Batch Read Register
   */
  struct IRQ08MON
  : public reg< uint32_t, base_addr + 0x34, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.0        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.0  */
  };

  /**
   * IRQ09 Batch Read Register
   */
  struct IRQ09MON
  : public reg< uint32_t, base_addr + 0x38, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.1  */
  };

  /**
   * IRQ10 Batch Read Register
   */
  struct IRQ10MON
  : public reg< uint32_t, base_addr + 0x3c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.1        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.1  */
  };

  /**
   * IRQ11 Batch Read Register
   */
  struct IRQ11MON
  : public reg< uint32_t, base_addr + 0x40, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.2  */
  };

  /**
   * IRQ12 Batch Read Register
   */
  struct IRQ12MON
  : public reg< uint32_t, base_addr + 0x44, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.2        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.2  */
  };

  /**
   * IRQ13 Batch Read Register
   */
  struct IRQ13MON
  : public reg< uint32_t, base_addr + 0x48, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.3  */
  };

  /**
   * IRQ14 Batch Read Register
   */
  struct IRQ14MON
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.3        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.3  */
  };

  /**
   * IRQ15 Batch Read Register
   */
  struct IRQ15MON
  : public reg< uint32_t, base_addr + 0x50, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.4  */
  };

  /**
   * IRQ16 Batch Read Register
   */
  struct IRQ16MON
  : public reg< uint32_t, base_addr + 0x54, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.4        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.4  */
  };

  /**
   * IRQ17 Batch Read Register
   */
  struct IRQ17MON
  : public reg< uint32_t, base_addr + 0x58, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.5  */
  };

  /**
   * IRQ18 Batch Read Register
   */
  struct IRQ18MON
  : public reg< uint32_t, base_addr + 0x5c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.5        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.5  */
  };

  /**
   * IRQ19 Batch Read Register
   */
  struct IRQ19MON
  : public reg< uint32_t, base_addr + 0x60, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.6  */
  };

  /**
   * IRQ20 Batch Read Register
   */
  struct IRQ20MON
  : public reg< uint32_t, base_addr + 0x64, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.6        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.6  */
  };

  /**
   * IRQ21 Batch Read Register
   */
  struct IRQ21MON
  : public reg< uint32_t, base_addr + 0x68, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, ro, 0x0 >;

    using MFSINT  = regbits< type,  0,  1 >;  /**< Reception interrupt request on MFS ch.7  */
  };

  /**
   * IRQ22 Batch Read Register
   */
  struct IRQ22MON
  : public reg< uint32_t, base_addr + 0x6c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, ro, 0x0 >;

    using MFSINT1  = regbits< type,  1,  1 >;  /**< Status interrupt request on MFS ch.7        */
    using MFSINT0  = regbits< type,  0,  1 >;  /**< Transmission interrupt request on MFS ch.7  */
  };

  /**
   * IRQ23 Batch Read Register
   */
  struct IRQ23MON
  : public reg< uint32_t, base_addr + 0x70, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0x0 >;

    using PPGINT8  = regbits< type,  8,  1 >;  /**< Interrupt request on PPG ch.20  */
    using PPGINT7  = regbits< type,  7,  1 >;  /**< Interrupt request on PPG ch.18  */
    using PPGINT6  = regbits< type,  6,  1 >;  /**< Interrupt request on PPG ch.16  */
    using PPGINT5  = regbits< type,  5,  1 >;  /**< Interrupt request on PPG ch.12  */
    using PPGINT4  = regbits< type,  4,  1 >;  /**< Interrupt request on PPG ch.10  */
    using PPGINT3  = regbits< type,  3,  1 >;  /**< Interrupt request on PPG ch.8   */
    using PPGINT2  = regbits< type,  2,  1 >;  /**< Interrupt request on PPG ch.4   */
    using PPGINT1  = regbits< type,  1,  1 >;  /**< Interrupt request on PPG ch.2   */
    using PPGINT0  = regbits< type,  0,  1 >;  /**< Interrupt request on PPG ch.0   */
  };

  /**
   * IRQ24 Batch Read Register
   */
  struct IRQ24MON
  : public reg< uint32_t, base_addr + 0x74, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0x0 >;

    using WCINT    = regbits< type,  4,  1 >;  /**< Watch counter interrupt request                                                           */
    using UPLLINT  = regbits< type,  3,  1 >;  /**< Stabilization wait completion interrupt request for USB or USB/Ethernet PLL oscillation.  */
    using MPLLINT  = regbits< type,  2,  1 >;  /**< Stabilization wait completion interrupt request for main PLL oscillation                  */
    using SOSCINT  = regbits< type,  1,  1 >;  /**< Stabilization wait completion interrupt request for sub-clock oscillation                 */
    using MOSCINT  = regbits< type,  0,  1 >;  /**< Stabilization wait completion interrupt request for main clock oscillation                */
  };

  /**
   * IRQ25 Batch Read Register
   */
  struct IRQ25MON
  : public reg< uint32_t, base_addr + 0x78, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, ro, 0x0 >;

    using ADCINT3  = regbits< type,  3,  1 >;  /**< Conversion result comparison interrupt request in the corresponding A/D unit 0.  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< FIFO overrun interrupt request in the corresponding A/D unit 0.                  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< Scan conversion interrupt request in the corresponding A/D unit 0.               */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< Priority conversion interrupt request in the corresponding A/D unit 0.           */
  };

  /**
   * IRQ26 Batch Read Register
   */
  struct IRQ26MON
  : public reg< uint32_t, base_addr + 0x7c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, ro, 0x0 >;

    using ADCINT3  = regbits< type,  3,  1 >;  /**< Conversion result comparison interrupt request in the corresponding A/D unit 1  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< FIFO overrun interrupt request in the corresponding A/D unit 1                  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< Scan conversion interrupt request in the corresponding A/D unit 1               */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< Priority conversion interrupt request in the corresponding A/D unit 1           */
  };

  /**
   * IRQ27 Batch Read Register
   */
  struct IRQ27MON
  : public reg< uint32_t, base_addr + 0x80, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, ro, 0x0 >;

    using ADCINT3  = regbits< type,  3,  1 >;  /**< Conversion result comparison interrupt request in the corresponding A/D unit 2  */
    using ADCINT2  = regbits< type,  2,  1 >;  /**< FIFO overrun interrupt request in the corresponding A/D unit 2                  */
    using ADCINT1  = regbits< type,  1,  1 >;  /**< Scan conversion interrupt request in the corresponding A/D unit 2               */
    using ADCINT0  = regbits< type,  0,  1 >;  /**< Priority conversion interrupt request in the corresponding A/D unit 2           */
  };

  /**
   * IRQ28 Batch Read Register
   */
  struct IRQ28MON
  : public reg< uint32_t, base_addr + 0x84, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, ro, 0x0 >;

    using FRT2INT5  = regbits< type, 17,  1 >;  /**< Zero detection interrupt request on the free run timer ch.2 in the MFT unit 2        */
    using FRT2INT4  = regbits< type, 16,  1 >;  /**< Zero detection interrupt request on the free run timer ch.1 in the MFT unit 2        */
    using FRT2INT3  = regbits< type, 15,  1 >;  /**< Zero detection interrupt request on the free run timer ch.0 in the MFT unit 2        */
    using FRT2INT2  = regbits< type, 14,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.2 in the MFT unit 2  */
    using FRT2INT1  = regbits< type, 13,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.1 in the MFT unit 2  */
    using FRT2INT0  = regbits< type, 12,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.0 in the MFT unit 2  */
    using FRT1INT5  = regbits< type, 11,  1 >;  /**< Zero detection interrupt request on the free run timer ch.2 in the MFT unit 1        */
    using FRT1INT4  = regbits< type, 10,  1 >;  /**< Zero detection interrupt request on the free run timer ch.1 in the MFT unit 1        */
    using FRT1INT3  = regbits< type,  9,  1 >;  /**< Zero detection interrupt request on the free run timer ch.0 in the MFT unit 1        */
    using FRT1INT2  = regbits< type,  8,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.2 in the MFT unit 1  */
    using FRT1INT1  = regbits< type,  7,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.1 in the MFT unit 1  */
    using FRT1INT0  = regbits< type,  6,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.0 in the MFT unit 1  */
    using FRT0INT5  = regbits< type,  5,  1 >;  /**< Zero detection interrupt request on the free run timer ch.2 in the MFT unit 0        */
    using FRT0INT4  = regbits< type,  4,  1 >;  /**< Zero detection interrupt request on the free run timer ch.1 in the MFT unit 0        */
    using FRT0INT3  = regbits< type,  3,  1 >;  /**< Zero detection interrupt request on the free run timer ch.0 in the MFT unit 0        */
    using FRT0INT2  = regbits< type,  2,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.2 in the MFT unit 0  */
    using FRT0INT1  = regbits< type,  1,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.1 in the MFT unit 0  */
    using FRT0INT0  = regbits< type,  0,  1 >;  /**< Peak value detection interrupt request on the free run timer ch.0 in the MFT unit 0  */
  };

  /**
   * IRQ29 Batch Read Register
   */
  struct IRQ29MON
  : public reg< uint32_t, base_addr + 0x88, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, ro, 0x0 >;

    using ICU2INT3  = regbits< type, 11,  1 >;  /**< Interrupt request on the input capture ch.3 in the MFT unit 2  */
    using ICU2INT2  = regbits< type, 10,  1 >;  /**< Interrupt request on the input capture ch.2 in the MFT unit 2  */
    using ICU2INT1  = regbits< type,  9,  1 >;  /**< Interrupt request on the input capture ch.1 in the MFT unit 2  */
    using ICU2INT0  = regbits< type,  8,  1 >;  /**< Interrupt request on the input capture ch.0 in the MFT unit 2  */
    using ICU1INT3  = regbits< type,  7,  1 >;  /**< Interrupt request on the input capture ch.3 in the MFT unit 1  */
    using ICU1INT2  = regbits< type,  6,  1 >;  /**< Interrupt request on the input capture ch.2 in the MFT unit 1  */
    using ICU1INT1  = regbits< type,  5,  1 >;  /**< Interrupt request on the input capture ch.1 in the MFT unit 1  */
    using ICU1INT0  = regbits< type,  4,  1 >;  /**< Interrupt request on the input capture ch.0 in the MFT unit 1  */
    using ICU0INT3  = regbits< type,  3,  1 >;  /**< Interrupt request on the input capture ch.3 in the MFT unit 0  */
    using ICU0INT2  = regbits< type,  2,  1 >;  /**< Interrupt request on the input capture ch.2 in the MFT unit 0  */
    using ICU0INT1  = regbits< type,  1,  1 >;  /**< Interrupt request on the input capture ch.1 in the MFT unit 0  */
    using ICU0INT0  = regbits< type,  0,  1 >;  /**< Interrupt request on the input capture ch.0 in the MFT unit 0  */
  };

  /**
   * IRQ30 Batch Read Register
   */
  struct IRQ30MON
  : public reg< uint32_t, base_addr + 0x8c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, ro, 0x0 >;

    using OCU2INT5  = regbits< type, 17,  1 >;  /**< Interrupt request on the output compare ch.5 in the MFT unit 2  */
    using OCU2INT4  = regbits< type, 16,  1 >;  /**< Interrupt request on the output compare ch.4 in the MFT unit 2  */
    using OCU2INT3  = regbits< type, 15,  1 >;  /**< Interrupt request on the output compare ch.3 in the MFT unit 2  */
    using OCU2INT2  = regbits< type, 14,  1 >;  /**< Interrupt request on the output compare ch.2 in the MFT unit 2  */
    using OCU2INT1  = regbits< type, 13,  1 >;  /**< Interrupt request on the output compare ch.1 in the MFT unit 2  */
    using OCU2INT0  = regbits< type, 12,  1 >;  /**< Interrupt request on the output compare ch.0 in the MFT unit 2  */
    using OCU1INT5  = regbits< type, 11,  1 >;  /**< Interrupt request on the output compare ch.5 in the MFT unit 1  */
    using OCU1INT4  = regbits< type, 10,  1 >;  /**< Interrupt request on the output compare ch.4 in the MFT unit 1  */
    using OCU1INT3  = regbits< type,  9,  1 >;  /**< Interrupt request on the output compare ch.3 in the MFT unit 1  */
    using OCU1INT2  = regbits< type,  8,  1 >;  /**< Interrupt request on the output compare ch.2 in the MFT unit 1  */
    using OCU1INT1  = regbits< type,  7,  1 >;  /**< Interrupt request on the output compare ch.1 in the MFT unit 1  */
    using OCU1INT0  = regbits< type,  6,  1 >;  /**< Interrupt request on the output compare ch.0 in the MFT unit 1  */
    using OCU0INT5  = regbits< type,  5,  1 >;  /**< Interrupt request on the output compare ch.5 in the MFT unit 0  */
    using OCU0INT4  = regbits< type,  4,  1 >;  /**< Interrupt request on the output compare ch.4 in the MFT unit 0  */
    using OCU0INT3  = regbits< type,  3,  1 >;  /**< Interrupt request on the output compare ch.3 in the MFT unit 0  */
    using OCU0INT2  = regbits< type,  2,  1 >;  /**< Interrupt request on the output compare ch.2 in the MFT unit 0  */
    using OCU0INT1  = regbits< type,  1,  1 >;  /**< Interrupt request on the output compare ch.1 in the MFT unit 0  */
    using OCU0INT0  = regbits< type,  0,  1 >;  /**< Interrupt request on the output compare ch.0 in the MFT unit 0  */
  };

  /**
   * IRQ31 Batch Read Register
   */
  struct IRQ31MON
  : public reg< uint32_t, base_addr + 0x90, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, ro, 0x0 >;

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
   * IRQ32 Batch Read Register
   */
  struct IRQ32MON
  : public reg< uint32_t, base_addr + 0x94, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, ro, 0x0 >;

    using CAN0INT  = regbits< type,  0,  1 >;  /**< Interrupt request of CAN ch.0  */
  };

  /**
   * IRQ33 Batch Read Register
   */
  struct IRQ33MON
  : public reg< uint32_t, base_addr + 0x98, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, ro, 0x0 >;

    using CAN1INT  = regbits< type,  0,  1 >;  /**< Interrupt request of CAN ch.1  */
  };

  /**
   * IRQ34 Batch Read Register
   */
  struct IRQ34MON
  : public reg< uint32_t, base_addr + 0x9c, ro, 0x0 >
  {
  };

  /**
   * IRQ35 Batch Read Register
   */
  struct IRQ35MON
  : public reg< uint32_t, base_addr + 0xa0, ro, 0x0 >
  {
  };

  /**
   * IRQ36 Batch Read Register
   */
  struct IRQ36MON
  : public reg< uint32_t, base_addr + 0xa4, ro, 0x0 >
  {
  };

  /**
   * IRQ37 Batch Read Register
   */
  struct IRQ37MON
  : public reg< uint32_t, base_addr + 0xa8, ro, 0x0 >
  {
  };

  /**
   * IRQ38 Batch Read Register
   */
  struct IRQ38MON
  : public reg< uint32_t, base_addr + 0xac, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xac, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< Interrupt request on DMA ch.0.  */
  };

  /**
   * IRQ39 Batch Read Register
   */
  struct IRQ39MON
  : public reg< uint32_t, base_addr + 0xb0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< Interrupt request on DMA ch.1.  */
  };

  /**
   * IRQ40 Batch Read Register
   */
  struct IRQ40MON
  : public reg< uint32_t, base_addr + 0xb4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< Interrupt request on DMA ch.2.  */
  };

  /**
   * IRQ41 Batch Read Register
   */
  struct IRQ41MON
  : public reg< uint32_t, base_addr + 0xb8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< Interrupt request on DMA ch.3.  */
  };

  /**
   * IRQ42 Batch Read Register
   */
  struct IRQ42MON
  : public reg< uint32_t, base_addr + 0xbc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< Interrupt request on DMA ch.4.  */
  };

  /**
   * IRQ43 Batch Read Register
   */
  struct IRQ43MON
  : public reg< uint32_t, base_addr + 0xc0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< Interrupt request on DMA ch.5.  */
  };

  /**
   * IRQ44 Batch Read Register
   */
  struct IRQ44MON
  : public reg< uint32_t, base_addr + 0xc4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< Interrupt request on DMA ch.6.  */
  };

  /**
   * IRQ45 Batch Read Register
   */
  struct IRQ45MON
  : public reg< uint32_t, base_addr + 0xc8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, ro, 0x0 >;

    using DMAINT  = regbits< type,  0,  1 >;  /**< Interrupt request on DMA ch.7.  */
  };

  /**
   * IRQ46 Batch Read Register
   */
  struct IRQ46MON
  : public reg< uint32_t, base_addr + 0xcc, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, ro, 0x0 >;

    using BTINT15  = regbits< type, 15,  1 >;  /**< IRQ1 interrupt request of base timer ch.15  */
    using BTINT14  = regbits< type, 14,  1 >;  /**< IRQ0 interrupt request of base timer ch.15  */
    using BTINT13  = regbits< type, 13,  1 >;  /**< IRQ1 interrupt request of base timer ch.14  */
    using BTINT12  = regbits< type, 12,  1 >;  /**< IRQ0 interrupt request of base timer ch.14  */
    using BTINT11  = regbits< type, 11,  1 >;  /**< IRQ1 interrupt request of base timer ch.13  */
    using BTINT10  = regbits< type, 10,  1 >;  /**< IRQ0 interrupt request of base timer ch.13  */
    using BTINT9   = regbits< type,  9,  1 >;  /**< IRQ1 interrupt request of base timer ch.12  */
    using BTINT8   = regbits< type,  8,  1 >;  /**< IRQ0 interrupt request of base timer ch.12  */
    using BTINT7   = regbits< type,  7,  1 >;  /**< IRQ1 interrupt request of base timer ch.11  */
    using BTINT6   = regbits< type,  6,  1 >;  /**< IRQ0 interrupt request of base timer ch.11  */
    using BTINT5   = regbits< type,  5,  1 >;  /**< IRQ1 interrupt request of base timer ch.10  */
    using BTINT4   = regbits< type,  4,  1 >;  /**< IRQ0 interrupt request of base timer ch.10  */
    using BTINT3   = regbits< type,  3,  1 >;  /**< IRQ1 interrupt request of base timer ch.9   */
    using BTINT2   = regbits< type,  2,  1 >;  /**< IRQ0 interrupt request of base timer ch.9   */
    using BTINT1   = regbits< type,  1,  1 >;  /**< IRQ1 interrupt request of base timer ch.8   */
    using BTINT0   = regbits< type,  0,  1 >;  /**< IRQ0 interrupt request of base timer ch.8   */
  };

  /**
   * DMA Request Extended Selection Register
   */
  struct DQESEL
  : public reg< uint32_t, base_addr + 0x204, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0x0 >;

    using ESEL31  = regbits< type, 28,  4 >;  /**< Connect USB-ch1 to IDREQ [31]  */
    using ESEL30  = regbits< type, 24,  4 >;  /**< Connect USB-ch1 to IDREQ [30]  */
    using ESEL27  = regbits< type, 20,  4 >;  /**< Connect USB-ch1 to IDREQ [27]  */
    using ESEL26  = regbits< type, 16,  4 >;  /**< Connect USB-ch1 to IDREQ [26]  */
    using ESEL25  = regbits< type, 12,  4 >;  /**< Connect USB-ch1 to IDREQ [25]  */
    using ESEL24  = regbits< type,  8,  4 >;  /**< Connect USB-ch1 to IDREQ [24]  */
    using ESEL11  = regbits< type,  4,  4 >;  /**< Connect USB-ch1 to IDREQ [11]  */
    using ESEL10  = regbits< type,  0,  4 >;  /**< Connect USB-ch1 to IDREQ [10]  */
  };
};
} // namespace mptl

#endif // ARCH_REG_INTREQ_HPP_INCLUDED
