/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKM34Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKM34Z7
//  series: Kinetis_M
//  version: 1.6
//  description: MKM34Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_NVIC_HPP_INCLUDED
#define ARCH_REG_NVIC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Nested Vectored Interrupt Controller
 */
struct NVIC
{
  static constexpr reg_addr_t base_addr = 0xe000e100;

  /**
   * Interrupt Set Enable Register
   */
  struct NVIC_ISER
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using SETENA0   = regbits< type,  0,  1 >;  /**< DMA channel 0 transfer complete interrupt set-enable bit                                          */
    using SETENA1   = regbits< type,  1,  1 >;  /**< DMA channel 1 transfer complete interrupt set-enable bit                                          */
    using SETENA2   = regbits< type,  2,  1 >;  /**< DMA channel 2 transfer complete interrupt set-enable bit                                          */
    using SETENA3   = regbits< type,  3,  1 >;  /**< DMA channel 3 transfer complete interrupt set-enable bit                                          */
    using SETENA4   = regbits< type,  4,  1 >;  /**< Serial Peripheral Interface 0/1 interrupt set-enable bit                                          */
    using SETENA5   = regbits< type,  5,  1 >;  /**< Programmable Delay Block 0 interrupt set-enable bit                                               */
    using SETENA6   = regbits< type,  6,  1 >;  /**< Low-voltage detect, low-voltage warning interrupt set-enable bit                                  */
    using SETENA7   = regbits< type,  7,  1 >;  /**< Quad Timer Channel 0 interrupt set-enable bit                                                     */
    using SETENA8   = regbits< type,  8,  1 >;  /**< Quad Timer Channel 1 interrupt set-enable bit                                                     */
    using SETENA9   = regbits< type,  9,  1 >;  /**< Quad Timer Channel 2 interrupt set-enable bit                                                     */
    using SETENA10  = regbits< type, 10,  1 >;  /**< Quad Timer Channel 3 interrupt set-enable bit                                                     */
    using SETENA11  = regbits< type, 11,  1 >;  /**< PIT0/PIT1 interrupt set-enable bit                                                                */
    using SETENA12  = regbits< type, 12,  1 >;  /**< Low Leakage Wakeup interrupt set-enable bit                                                       */
    using SETENA13  = regbits< type, 13,  1 >;  /**< Command complete and read collision interrupt set-enable bit                                      */
    using SETENA14  = regbits< type, 14,  1 >;  /**< CMP0/CMP1/CMP2 interrupt set-enable bit                                                           */
    using SETENA15  = regbits< type, 15,  1 >;  /**< Segment LCD interrupt set-enable bit                                                              */
    using SETENA16  = regbits< type, 16,  1 >;  /**< Analog-to-Digital Converter interrupt set-enable bit                                              */
    using SETENA17  = regbits< type, 17,  1 >;  /**< PORTA,PORTB,PORTC,PORTD,PORTE,PORTF,PORTH,PORTI,PORTJ,PORTK,PORTL,PORTM interrupt set-enable bit  */
    using SETENA18  = regbits< type, 18,  1 >;  /**< RNGA interrupt set-enable bit                                                                     */
    using SETENA19  = regbits< type, 19,  1 >;  /**< UART0/UART1/UART2/UART3 interrupt set-enable bit                                                  */
    using SETENA20  = regbits< type, 20,  1 >;  /**< Memory Mapped Arithmetic Unit interrupt set-enable bit                                            */
    using SETENA21  = regbits< type, 21,  1 >;  /**< AFE Channel 0 interrupt set-enable bit                                                            */
    using SETENA22  = regbits< type, 22,  1 >;  /**< AFE Channel 1 interrupt set-enable bit                                                            */
    using SETENA23  = regbits< type, 23,  1 >;  /**< AFE Channel 2 interrupt set-enable bit                                                            */
    using SETENA24  = regbits< type, 24,  1 >;  /**< AFE Channel 3 interrupt set-enable bit                                                            */
    using SETENA25  = regbits< type, 25,  1 >;  /**< IRTC interrupt interrupt set-enable bit                                                           */
    using SETENA26  = regbits< type, 26,  1 >;  /**< I2C0/I2C1 interrupt set-enable bit                                                                */
    using SETENA27  = regbits< type, 27,  1 >;  /**< LPUART0 status and error interrupt set-enable bit                                                 */
    using SETENA28  = regbits< type, 28,  1 >;  /**< Multipurpose Clock Generator interrupt set-enable bit                                             */
    using SETENA29  = regbits< type, 29,  1 >;  /**< EWM/WDOG interrupt set-enable bit                                                                 */
    using SETENA30  = regbits< type, 30,  1 >;  /**< Low-Power Timer interrupt set-enable bit                                                          */
    using SETENA31  = regbits< type, 31,  1 >;  /**< XBAR interrupt set-enable bit                                                                     */
  };

  /**
   * Interrupt Clear Enable Register
   */
  struct NVIC_ICER
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using CLRENA0   = regbits< type,  0,  1 >;  /**< DMA channel 0 transfer complete interrupt clear-enable bit                                          */
    using CLRENA1   = regbits< type,  1,  1 >;  /**< DMA channel 1 transfer complete interrupt clear-enable bit                                          */
    using CLRENA2   = regbits< type,  2,  1 >;  /**< DMA channel 2 transfer complete interrupt clear-enable bit                                          */
    using CLRENA3   = regbits< type,  3,  1 >;  /**< DMA channel 3 transfer complete interrupt clear-enable bit                                          */
    using CLRENA4   = regbits< type,  4,  1 >;  /**< Serial Peripheral Interface 0/1 interrupt clear-enable bit                                          */
    using CLRENA5   = regbits< type,  5,  1 >;  /**< Programmable Delay Block 0 interrupt clear-enable bit                                               */
    using CLRENA6   = regbits< type,  6,  1 >;  /**< Low-voltage detect, low-voltage warning interrupt clear-enable bit                                  */
    using CLRENA7   = regbits< type,  7,  1 >;  /**< Quad Timer Channel 0 interrupt clear-enable bit                                                     */
    using CLRENA8   = regbits< type,  8,  1 >;  /**< Quad Timer Channel 1 interrupt clear-enable bit                                                     */
    using CLRENA9   = regbits< type,  9,  1 >;  /**< Quad Timer Channel 2 interrupt clear-enable bit                                                     */
    using CLRENA10  = regbits< type, 10,  1 >;  /**< Quad Timer Channel 3 interrupt clear-enable bit                                                     */
    using CLRENA11  = regbits< type, 11,  1 >;  /**< PIT0/PIT1 interrupt clear-enable bit                                                                */
    using CLRENA12  = regbits< type, 12,  1 >;  /**< Low Leakage Wakeup interrupt clear-enable bit                                                       */
    using CLRENA13  = regbits< type, 13,  1 >;  /**< Command complete and read collision interrupt clear-enable bit                                      */
    using CLRENA14  = regbits< type, 14,  1 >;  /**< CMP0/CMP1/CMP2 interrupt clear-enable bit                                                           */
    using CLRENA15  = regbits< type, 15,  1 >;  /**< Segment LCD interrupt clear-enable bit                                                              */
    using CLRENA16  = regbits< type, 16,  1 >;  /**< Analog-to-Digital Converter interrupt clear-enable bit                                              */
    using CLRENA17  = regbits< type, 17,  1 >;  /**< PORTA,PORTB,PORTC,PORTD,PORTE,PORTF,PORTH,PORTI,PORTJ,PORTK,PORTL,PORTM interrupt clear-enable bit  */
    using CLRENA18  = regbits< type, 18,  1 >;  /**< RNGA interrupt clear-enable bit                                                                     */
    using CLRENA19  = regbits< type, 19,  1 >;  /**< UART0/UART1/UART2/UART3 interrupt clear-enable bit                                                  */
    using CLRENA20  = regbits< type, 20,  1 >;  /**< Memory Mapped Arithmetic Unit interrupt clear-enable bit                                            */
    using CLRENA21  = regbits< type, 21,  1 >;  /**< AFE Channel 0 interrupt clear-enable bit                                                            */
    using CLRENA22  = regbits< type, 22,  1 >;  /**< AFE Channel 1 interrupt clear-enable bit                                                            */
    using CLRENA23  = regbits< type, 23,  1 >;  /**< AFE Channel 2 interrupt clear-enable bit                                                            */
    using CLRENA24  = regbits< type, 24,  1 >;  /**< AFE Channel 3 interrupt clear-enable bit                                                            */
    using CLRENA25  = regbits< type, 25,  1 >;  /**< IRTC interrupt interrupt clear-enable bit                                                           */
    using CLRENA26  = regbits< type, 26,  1 >;  /**< I2C0/I2C1 interrupt clear-enable bit                                                                */
    using CLRENA27  = regbits< type, 27,  1 >;  /**< LPUART0 status and error interrupt clear-enable bit                                                 */
    using CLRENA28  = regbits< type, 28,  1 >;  /**< Multipurpose Clock Generator interrupt clear-enable bit                                             */
    using CLRENA29  = regbits< type, 29,  1 >;  /**< EWM/WDOG interrupt clear-enable bit                                                                 */
    using CLRENA30  = regbits< type, 30,  1 >;  /**< Low-Power Timer interrupt clear-enable bit                                                          */
    using CLRENA31  = regbits< type, 31,  1 >;  /**< XBAR interrupt clear-enable bit                                                                     */
  };

  /**
   * Interrupt Set Pending Register
   */
  struct NVIC_ISPR
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SETPEND0   = regbits< type,  0,  1 >;  /**< DMA channel 0 transfer complete interrupt set-pending bit                                          */
    using SETPEND1   = regbits< type,  1,  1 >;  /**< DMA channel 1 transfer complete interrupt set-pending bit                                          */
    using SETPEND2   = regbits< type,  2,  1 >;  /**< DMA channel 2 transfer complete interrupt set-pending bit                                          */
    using SETPEND3   = regbits< type,  3,  1 >;  /**< DMA channel 3 transfer complete interrupt set-pending bit                                          */
    using SETPEND4   = regbits< type,  4,  1 >;  /**< Serial Peripheral Interface 0/1 interrupt set-pending bit                                          */
    using SETPEND5   = regbits< type,  5,  1 >;  /**< Programmable Delay Block 0 interrupt set-pending bit                                               */
    using SETPEND6   = regbits< type,  6,  1 >;  /**< Low-voltage detect, low-voltage warning interrupt set-pending bit                                  */
    using SETPEND7   = regbits< type,  7,  1 >;  /**< Quad Timer Channel 0 interrupt set-pending bit                                                     */
    using SETPEND8   = regbits< type,  8,  1 >;  /**< Quad Timer Channel 1 interrupt set-pending bit                                                     */
    using SETPEND9   = regbits< type,  9,  1 >;  /**< Quad Timer Channel 2 interrupt set-pending bit                                                     */
    using SETPEND10  = regbits< type, 10,  1 >;  /**< Quad Timer Channel 3 interrupt set-pending bit                                                     */
    using SETPEND11  = regbits< type, 11,  1 >;  /**< PIT0/PIT1 interrupt set-pending bit                                                                */
    using SETPEND12  = regbits< type, 12,  1 >;  /**< Low Leakage Wakeup interrupt set-pending bit                                                       */
    using SETPEND13  = regbits< type, 13,  1 >;  /**< Command complete and read collision interrupt set-pending bit                                      */
    using SETPEND14  = regbits< type, 14,  1 >;  /**< CMP0/CMP1/CMP2 interrupt set-pending bit                                                           */
    using SETPEND15  = regbits< type, 15,  1 >;  /**< Segment LCD interrupt set-pending bit                                                              */
    using SETPEND16  = regbits< type, 16,  1 >;  /**< Analog-to-Digital Converter interrupt set-pending bit                                              */
    using SETPEND17  = regbits< type, 17,  1 >;  /**< PORTA,PORTB,PORTC,PORTD,PORTE,PORTF,PORTH,PORTI,PORTJ,PORTK,PORTL,PORTM interrupt set-pending bit  */
    using SETPEND18  = regbits< type, 18,  1 >;  /**< RNGA interrupt set-pending bit                                                                     */
    using SETPEND19  = regbits< type, 19,  1 >;  /**< UART0/UART1/UART2/UART3 interrupt set-pending bit                                                  */
    using SETPEND20  = regbits< type, 20,  1 >;  /**< Memory Mapped Arithmetic Unit interrupt set-pending bit                                            */
    using SETPEND21  = regbits< type, 21,  1 >;  /**< AFE Channel 0 interrupt set-pending bit                                                            */
    using SETPEND22  = regbits< type, 22,  1 >;  /**< AFE Channel 1 interrupt set-pending bit                                                            */
    using SETPEND23  = regbits< type, 23,  1 >;  /**< AFE Channel 2 interrupt set-pending bit                                                            */
    using SETPEND24  = regbits< type, 24,  1 >;  /**< AFE Channel 3 interrupt set-pending bit                                                            */
    using SETPEND25  = regbits< type, 25,  1 >;  /**< IRTC interrupt interrupt set-pending bit                                                           */
    using SETPEND26  = regbits< type, 26,  1 >;  /**< I2C0/I2C1 interrupt set-pending bit                                                                */
    using SETPEND27  = regbits< type, 27,  1 >;  /**< LPUART0 status and error interrupt set-pending bit                                                 */
    using SETPEND28  = regbits< type, 28,  1 >;  /**< Multipurpose Clock Generator interrupt set-pending bit                                             */
    using SETPEND29  = regbits< type, 29,  1 >;  /**< EWM/WDOG interrupt set-pending bit                                                                 */
    using SETPEND30  = regbits< type, 30,  1 >;  /**< Low-Power Timer interrupt set-pending bit                                                          */
    using SETPEND31  = regbits< type, 31,  1 >;  /**< XBAR interrupt set-pending bit                                                                     */
  };

  /**
   * Interrupt Clear Pending Register
   */
  struct NVIC_ICPR
  : public reg< uint32_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0 >;

    using CLRPEND0   = regbits< type,  0,  1 >;  /**< DMA channel 0 transfer complete interrupt clear-pending bit                                          */
    using CLRPEND1   = regbits< type,  1,  1 >;  /**< DMA channel 1 transfer complete interrupt clear-pending bit                                          */
    using CLRPEND2   = regbits< type,  2,  1 >;  /**< DMA channel 2 transfer complete interrupt clear-pending bit                                          */
    using CLRPEND3   = regbits< type,  3,  1 >;  /**< DMA channel 3 transfer complete interrupt clear-pending bit                                          */
    using CLRPEND4   = regbits< type,  4,  1 >;  /**< Serial Peripheral Interface 0/1 interrupt clear-pending bit                                          */
    using CLRPEND5   = regbits< type,  5,  1 >;  /**< Programmable Delay Block 0 interrupt clear-pending bit                                               */
    using CLRPEND6   = regbits< type,  6,  1 >;  /**< Low-voltage detect, low-voltage warning interrupt clear-pending bit                                  */
    using CLRPEND7   = regbits< type,  7,  1 >;  /**< Quad Timer Channel 0 interrupt clear-pending bit                                                     */
    using CLRPEND8   = regbits< type,  8,  1 >;  /**< Quad Timer Channel 1 interrupt clear-pending bit                                                     */
    using CLRPEND9   = regbits< type,  9,  1 >;  /**< Quad Timer Channel 2 interrupt clear-pending bit                                                     */
    using CLRPEND10  = regbits< type, 10,  1 >;  /**< Quad Timer Channel 3 interrupt clear-pending bit                                                     */
    using CLRPEND11  = regbits< type, 11,  1 >;  /**< PIT0/PIT1 interrupt clear-pending bit                                                                */
    using CLRPEND12  = regbits< type, 12,  1 >;  /**< Low Leakage Wakeup interrupt clear-pending bit                                                       */
    using CLRPEND13  = regbits< type, 13,  1 >;  /**< Command complete and read collision interrupt clear-pending bit                                      */
    using CLRPEND14  = regbits< type, 14,  1 >;  /**< CMP0/CMP1/CMP2 interrupt clear-pending bit                                                           */
    using CLRPEND15  = regbits< type, 15,  1 >;  /**< Segment LCD interrupt clear-pending bit                                                              */
    using CLRPEND16  = regbits< type, 16,  1 >;  /**< Analog-to-Digital Converter interrupt clear-pending bit                                              */
    using CLRPEND17  = regbits< type, 17,  1 >;  /**< PORTA,PORTB,PORTC,PORTD,PORTE,PORTF,PORTH,PORTI,PORTJ,PORTK,PORTL,PORTM interrupt clear-pending bit  */
    using CLRPEND18  = regbits< type, 18,  1 >;  /**< RNGA interrupt clear-pending bit                                                                     */
    using CLRPEND19  = regbits< type, 19,  1 >;  /**< UART0/UART1/UART2/UART3 interrupt clear-pending bit                                                  */
    using CLRPEND20  = regbits< type, 20,  1 >;  /**< Memory Mapped Arithmetic Unit interrupt clear-pending bit                                            */
    using CLRPEND21  = regbits< type, 21,  1 >;  /**< AFE Channel 0 interrupt clear-pending bit                                                            */
    using CLRPEND22  = regbits< type, 22,  1 >;  /**< AFE Channel 1 interrupt clear-pending bit                                                            */
    using CLRPEND23  = regbits< type, 23,  1 >;  /**< AFE Channel 2 interrupt clear-pending bit                                                            */
    using CLRPEND24  = regbits< type, 24,  1 >;  /**< AFE Channel 3 interrupt clear-pending bit                                                            */
    using CLRPEND25  = regbits< type, 25,  1 >;  /**< IRTC interrupt interrupt clear-pending bit                                                           */
    using CLRPEND26  = regbits< type, 26,  1 >;  /**< I2C0/I2C1 interrupt clear-pending bit                                                                */
    using CLRPEND27  = regbits< type, 27,  1 >;  /**< LPUART0 status and error interrupt clear-pending bit                                                 */
    using CLRPEND28  = regbits< type, 28,  1 >;  /**< Multipurpose Clock Generator interrupt clear-pending bit                                             */
    using CLRPEND29  = regbits< type, 29,  1 >;  /**< EWM/WDOG interrupt clear-pending bit                                                                 */
    using CLRPEND30  = regbits< type, 30,  1 >;  /**< Low-Power Timer interrupt clear-pending bit                                                          */
    using CLRPEND31  = regbits< type, 31,  1 >;  /**< XBAR interrupt clear-pending bit                                                                     */
  };

  /**
   * Interrupt Priority Register 0
   */
  struct NVIC_IPR0
  : public reg< uint32_t, base_addr + 0x300, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 >;

    using PRI_0  = regbits< type,  6,  2 >;  /**< Priority of the DMA channel 0 transfer complete interrupt  */
    using PRI_1  = regbits< type, 14,  2 >;  /**< Priority of the DMA channel 1 transfer complete interrupt  */
    using PRI_2  = regbits< type, 22,  2 >;  /**< Priority of the DMA channel 2 transfer complete interrupt  */
    using PRI_3  = regbits< type, 30,  2 >;  /**< Priority of the DMA channel 3 transfer complete interrupt  */
  };

  /**
   * Interrupt Priority Register 1
   */
  struct NVIC_IPR1
  : public reg< uint32_t, base_addr + 0x304, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 >;

    using PRI_4  = regbits< type,  6,  2 >;  /**< Priority of the Serial Peripheral Interface 0/1 interrupt          */
    using PRI_5  = regbits< type, 14,  2 >;  /**< Priority of the Programmable Delay Block 0 interrupt               */
    using PRI_6  = regbits< type, 22,  2 >;  /**< Priority of the Low-voltage detect, low-voltage warning interrupt  */
    using PRI_7  = regbits< type, 30,  2 >;  /**< Priority of the Quad Timer Channel 0 interrupt                     */
  };

  /**
   * Interrupt Priority Register 2
   */
  struct NVIC_IPR2
  : public reg< uint32_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 >;

    using PRI_8   = regbits< type,  6,  2 >;  /**< Priority of the Quad Timer Channel 1 interrupt  */
    using PRI_9   = regbits< type, 14,  2 >;  /**< Priority of the Quad Timer Channel 2 interrupt  */
    using PRI_10  = regbits< type, 22,  2 >;  /**< Priority of the Quad Timer Channel 3 interrupt  */
    using PRI_11  = regbits< type, 30,  2 >;  /**< Priority of the PIT0/PIT1 interrupt             */
  };

  /**
   * Interrupt Priority Register 3
   */
  struct NVIC_IPR3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0 >;

    using PRI_12  = regbits< type,  6,  2 >;  /**< Priority of the Low Leakage Wakeup interrupt                   */
    using PRI_13  = regbits< type, 14,  2 >;  /**< Priority of the Command complete and read collision interrupt  */
    using PRI_14  = regbits< type, 22,  2 >;  /**< Priority of the CMP0/CMP1/CMP2 interrupt                       */
    using PRI_15  = regbits< type, 30,  2 >;  /**< Priority of the Segment LCD interrupt                          */
  };

  /**
   * Interrupt Priority Register 4
   */
  struct NVIC_IPR4
  : public reg< uint32_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0 >;

    using PRI_16  = regbits< type,  6,  2 >;  /**< Priority of the Analog-to-Digital Converter interrupt                                              */
    using PRI_17  = regbits< type, 14,  2 >;  /**< Priority of the PORTA,PORTB,PORTC,PORTD,PORTE,PORTF,PORTH,PORTI,PORTJ,PORTK,PORTL,PORTM interrupt  */
    using PRI_18  = regbits< type, 22,  2 >;  /**< Priority of the RNGA interrupt                                                                     */
    using PRI_19  = regbits< type, 30,  2 >;  /**< Priority of the UART0/UART1/UART2/UART3 interrupt                                                  */
  };

  /**
   * Interrupt Priority Register 5
   */
  struct NVIC_IPR5
  : public reg< uint32_t, base_addr + 0x314, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0 >;

    using PRI_20  = regbits< type,  6,  2 >;  /**< Priority of the Memory Mapped Arithmetic Unit interrupt  */
    using PRI_21  = regbits< type, 14,  2 >;  /**< Priority of the AFE Channel 0 interrupt                  */
    using PRI_22  = regbits< type, 22,  2 >;  /**< Priority of the AFE Channel 1 interrupt                  */
    using PRI_23  = regbits< type, 30,  2 >;  /**< Priority of the AFE Channel 2 interrupt                  */
  };

  /**
   * Interrupt Priority Register 6
   */
  struct NVIC_IPR6
  : public reg< uint32_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0 >;

    using PRI_24  = regbits< type,  6,  2 >;  /**< Priority of the AFE Channel 3 interrupt             */
    using PRI_25  = regbits< type, 14,  2 >;  /**< Priority of the IRTC interrupt interrupt            */
    using PRI_26  = regbits< type, 22,  2 >;  /**< Priority of the I2C0/I2C1 interrupt                 */
    using PRI_27  = regbits< type, 30,  2 >;  /**< Priority of the LPUART0 status and error interrupt  */
  };

  /**
   * Interrupt Priority Register 7
   */
  struct NVIC_IPR7
  : public reg< uint32_t, base_addr + 0x31c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0 >;

    using PRI_28  = regbits< type,  6,  2 >;  /**< Priority of the Multipurpose Clock Generator interrupt  */
    using PRI_29  = regbits< type, 14,  2 >;  /**< Priority of the EWM/WDOG interrupt                      */
    using PRI_30  = regbits< type, 22,  2 >;  /**< Priority of the Low-Power Timer interrupt               */
    using PRI_31  = regbits< type, 30,  2 >;  /**< Priority of the XBAR interrupt                          */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
