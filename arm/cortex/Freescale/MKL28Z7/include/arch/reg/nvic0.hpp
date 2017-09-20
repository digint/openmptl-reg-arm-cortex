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
//  Import from CMSIS-SVD: "Freescale/MKL28Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28Z7
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_NVIC0_HPP_INCLUDED
#define ARCH_REG_NVIC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Nested Vectored Interrupt Controller
 */
struct NVIC0
{
  static constexpr reg_addr_t base_addr = 0xe000e100;

  /**
   * Interrupt Set Enable Register
   */
  struct NVIC0_ISER
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using SETENA0   = regbits< type,  0,  1 >;  /**< DMA0 channel 0/4 transfer complete interrupt set-enable bit  */
    using SETENA1   = regbits< type,  1,  1 >;  /**< DMA0 channel 1/5 transfer complete interrupt set-enable bit  */
    using SETENA2   = regbits< type,  2,  1 >;  /**< DMA0 channel 2/6 transfer complete interrupt set-enable bit  */
    using SETENA3   = regbits< type,  3,  1 >;  /**< DMA0 channel 3/7 transfer complete interrupt set-enable bit  */
    using SETENA4   = regbits< type,  4,  1 >;  /**< CTI0 or DMA0 error interrupt set-enable bit                  */
    using SETENA5   = regbits< type,  5,  1 >;  /**< FLEXIO0 interrupt set-enable bit                             */
    using SETENA6   = regbits< type,  6,  1 >;  /**< Timer/PWM module 0 interrupt set-enable bit                  */
    using SETENA7   = regbits< type,  7,  1 >;  /**< Timer/PWM module 1 interrupt set-enable bit                  */
    using SETENA8   = regbits< type,  8,  1 >;  /**< Timer/PWM module 2 interrupt set-enable bit                  */
    using SETENA9   = regbits< type,  9,  1 >;  /**< Low Power Periodic Interrupt Timer interrupt set-enable bit  */
    using SETENA10  = regbits< type, 10,  1 >;  /**< Serial Peripheral Interface 0 interrupt set-enable bit       */
    using SETENA11  = regbits< type, 11,  1 >;  /**< Serial Peripheral Interface 1 interrupt set-enable bit       */
    using SETENA12  = regbits< type, 12,  1 >;  /**< LPUART0 status and error interrupt set-enable bit            */
    using SETENA13  = regbits< type, 13,  1 >;  /**< LPUART1 status and error interrupt set-enable bit            */
    using SETENA14  = regbits< type, 14,  1 >;  /**< Inter-Integrated Circuit 0 interrupt set-enable bit          */
    using SETENA15  = regbits< type, 15,  1 >;  /**< Inter-Integrated Circuit 0 interrupt set-enable bit          */
    using SETENA16  = regbits< type, 16,  1 >;  /**< Reserved iv 32 interrupt set-enable bit                      */
    using SETENA17  = regbits< type, 17,  1 >;  /**< PORTA Pin detect interrupt set-enable bit                    */
    using SETENA18  = regbits< type, 18,  1 >;  /**< PORTB Pin detect interrupt set-enable bit                    */
    using SETENA19  = regbits< type, 19,  1 >;  /**< PORTC Pin detect interrupt set-enable bit                    */
    using SETENA20  = regbits< type, 20,  1 >;  /**< PORTD Pin detect interrupt set-enable bit                    */
    using SETENA21  = regbits< type, 21,  1 >;  /**< PORTE Pin detect interrupt set-enable bit                    */
    using SETENA22  = regbits< type, 22,  1 >;  /**< Low Leakage Wakeup 0 interrupt set-enable bit                */
    using SETENA23  = regbits< type, 23,  1 >;  /**< Integrated interchip sound 0 interrupt set-enable bit        */
    using SETENA24  = regbits< type, 24,  1 >;  /**< Universal Serial Bus interrupt set-enable bit                */
    using SETENA25  = regbits< type, 25,  1 >;  /**< Analog-to-Digital Converter 0 interrupt set-enable bit       */
    using SETENA26  = regbits< type, 26,  1 >;  /**< Low-Power Timer interrupt set-enable bit                     */
    using SETENA27  = regbits< type, 27,  1 >;  /**< RTC seconds interrupt set-enable bit                         */
    using SETENA28  = regbits< type, 28,  1 >;  /**< INTMUX0 channel 0 interrupt interrupt set-enable bit         */
    using SETENA29  = regbits< type, 29,  1 >;  /**< INTMUX0 channel 1 interrupt interrupt set-enable bit         */
    using SETENA30  = regbits< type, 30,  1 >;  /**< INTMUX0 channel 2 interrupt interrupt set-enable bit         */
    using SETENA31  = regbits< type, 31,  1 >;  /**< INTMUX0 channel 3 interrupt interrupt set-enable bit         */
  };

  /**
   * Interrupt Clear Enable Register
   */
  struct NVIC0_ICER
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using CLRENA0   = regbits< type,  0,  1 >;  /**< DMA0 channel 0/4 transfer complete interrupt clear-enable bit  */
    using CLRENA1   = regbits< type,  1,  1 >;  /**< DMA0 channel 1/5 transfer complete interrupt clear-enable bit  */
    using CLRENA2   = regbits< type,  2,  1 >;  /**< DMA0 channel 2/6 transfer complete interrupt clear-enable bit  */
    using CLRENA3   = regbits< type,  3,  1 >;  /**< DMA0 channel 3/7 transfer complete interrupt clear-enable bit  */
    using CLRENA4   = regbits< type,  4,  1 >;  /**< CTI0 or DMA0 error interrupt clear-enable bit                  */
    using CLRENA5   = regbits< type,  5,  1 >;  /**< FLEXIO0 interrupt clear-enable bit                             */
    using CLRENA6   = regbits< type,  6,  1 >;  /**< Timer/PWM module 0 interrupt clear-enable bit                  */
    using CLRENA7   = regbits< type,  7,  1 >;  /**< Timer/PWM module 1 interrupt clear-enable bit                  */
    using CLRENA8   = regbits< type,  8,  1 >;  /**< Timer/PWM module 2 interrupt clear-enable bit                  */
    using CLRENA9   = regbits< type,  9,  1 >;  /**< Low Power Periodic Interrupt Timer interrupt clear-enable bit  */
    using CLRENA10  = regbits< type, 10,  1 >;  /**< Serial Peripheral Interface 0 interrupt clear-enable bit       */
    using CLRENA11  = regbits< type, 11,  1 >;  /**< Serial Peripheral Interface 1 interrupt clear-enable bit       */
    using CLRENA12  = regbits< type, 12,  1 >;  /**< LPUART0 status and error interrupt clear-enable bit            */
    using CLRENA13  = regbits< type, 13,  1 >;  /**< LPUART1 status and error interrupt clear-enable bit            */
    using CLRENA14  = regbits< type, 14,  1 >;  /**< Inter-Integrated Circuit 0 interrupt clear-enable bit          */
    using CLRENA15  = regbits< type, 15,  1 >;  /**< Inter-Integrated Circuit 0 interrupt clear-enable bit          */
    using CLRENA16  = regbits< type, 16,  1 >;  /**< Reserved iv 32 interrupt clear-enable bit                      */
    using CLRENA17  = regbits< type, 17,  1 >;  /**< PORTA Pin detect interrupt clear-enable bit                    */
    using CLRENA18  = regbits< type, 18,  1 >;  /**< PORTB Pin detect interrupt clear-enable bit                    */
    using CLRENA19  = regbits< type, 19,  1 >;  /**< PORTC Pin detect interrupt clear-enable bit                    */
    using CLRENA20  = regbits< type, 20,  1 >;  /**< PORTD Pin detect interrupt clear-enable bit                    */
    using CLRENA21  = regbits< type, 21,  1 >;  /**< PORTE Pin detect interrupt clear-enable bit                    */
    using CLRENA22  = regbits< type, 22,  1 >;  /**< Low Leakage Wakeup 0 interrupt clear-enable bit                */
    using CLRENA23  = regbits< type, 23,  1 >;  /**< Integrated interchip sound 0 interrupt clear-enable bit        */
    using CLRENA24  = regbits< type, 24,  1 >;  /**< Universal Serial Bus interrupt clear-enable bit                */
    using CLRENA25  = regbits< type, 25,  1 >;  /**< Analog-to-Digital Converter 0 interrupt clear-enable bit       */
    using CLRENA26  = regbits< type, 26,  1 >;  /**< Low-Power Timer interrupt clear-enable bit                     */
    using CLRENA27  = regbits< type, 27,  1 >;  /**< RTC seconds interrupt clear-enable bit                         */
    using CLRENA28  = regbits< type, 28,  1 >;  /**< INTMUX0 channel 0 interrupt interrupt clear-enable bit         */
    using CLRENA29  = regbits< type, 29,  1 >;  /**< INTMUX0 channel 1 interrupt interrupt clear-enable bit         */
    using CLRENA30  = regbits< type, 30,  1 >;  /**< INTMUX0 channel 2 interrupt interrupt clear-enable bit         */
    using CLRENA31  = regbits< type, 31,  1 >;  /**< INTMUX0 channel 3 interrupt interrupt clear-enable bit         */
  };

  /**
   * Interrupt Set Pending Register
   */
  struct NVIC0_ISPR
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SETPEND0   = regbits< type,  0,  1 >;  /**< DMA0 channel 0/4 transfer complete interrupt set-pending bit  */
    using SETPEND1   = regbits< type,  1,  1 >;  /**< DMA0 channel 1/5 transfer complete interrupt set-pending bit  */
    using SETPEND2   = regbits< type,  2,  1 >;  /**< DMA0 channel 2/6 transfer complete interrupt set-pending bit  */
    using SETPEND3   = regbits< type,  3,  1 >;  /**< DMA0 channel 3/7 transfer complete interrupt set-pending bit  */
    using SETPEND4   = regbits< type,  4,  1 >;  /**< CTI0 or DMA0 error interrupt set-pending bit                  */
    using SETPEND5   = regbits< type,  5,  1 >;  /**< FLEXIO0 interrupt set-pending bit                             */
    using SETPEND6   = regbits< type,  6,  1 >;  /**< Timer/PWM module 0 interrupt set-pending bit                  */
    using SETPEND7   = regbits< type,  7,  1 >;  /**< Timer/PWM module 1 interrupt set-pending bit                  */
    using SETPEND8   = regbits< type,  8,  1 >;  /**< Timer/PWM module 2 interrupt set-pending bit                  */
    using SETPEND9   = regbits< type,  9,  1 >;  /**< Low Power Periodic Interrupt Timer interrupt set-pending bit  */
    using SETPEND10  = regbits< type, 10,  1 >;  /**< Serial Peripheral Interface 0 interrupt set-pending bit       */
    using SETPEND11  = regbits< type, 11,  1 >;  /**< Serial Peripheral Interface 1 interrupt set-pending bit       */
    using SETPEND12  = regbits< type, 12,  1 >;  /**< LPUART0 status and error interrupt set-pending bit            */
    using SETPEND13  = regbits< type, 13,  1 >;  /**< LPUART1 status and error interrupt set-pending bit            */
    using SETPEND14  = regbits< type, 14,  1 >;  /**< Inter-Integrated Circuit 0 interrupt set-pending bit          */
    using SETPEND15  = regbits< type, 15,  1 >;  /**< Inter-Integrated Circuit 0 interrupt set-pending bit          */
    using SETPEND16  = regbits< type, 16,  1 >;  /**< Reserved iv 32 interrupt set-pending bit                      */
    using SETPEND17  = regbits< type, 17,  1 >;  /**< PORTA Pin detect interrupt set-pending bit                    */
    using SETPEND18  = regbits< type, 18,  1 >;  /**< PORTB Pin detect interrupt set-pending bit                    */
    using SETPEND19  = regbits< type, 19,  1 >;  /**< PORTC Pin detect interrupt set-pending bit                    */
    using SETPEND20  = regbits< type, 20,  1 >;  /**< PORTD Pin detect interrupt set-pending bit                    */
    using SETPEND21  = regbits< type, 21,  1 >;  /**< PORTE Pin detect interrupt set-pending bit                    */
    using SETPEND22  = regbits< type, 22,  1 >;  /**< Low Leakage Wakeup 0 interrupt set-pending bit                */
    using SETPEND23  = regbits< type, 23,  1 >;  /**< Integrated interchip sound 0 interrupt set-pending bit        */
    using SETPEND24  = regbits< type, 24,  1 >;  /**< Universal Serial Bus interrupt set-pending bit                */
    using SETPEND25  = regbits< type, 25,  1 >;  /**< Analog-to-Digital Converter 0 interrupt set-pending bit       */
    using SETPEND26  = regbits< type, 26,  1 >;  /**< Low-Power Timer interrupt set-pending bit                     */
    using SETPEND27  = regbits< type, 27,  1 >;  /**< RTC seconds interrupt set-pending bit                         */
    using SETPEND28  = regbits< type, 28,  1 >;  /**< INTMUX0 channel 0 interrupt interrupt set-pending bit         */
    using SETPEND29  = regbits< type, 29,  1 >;  /**< INTMUX0 channel 1 interrupt interrupt set-pending bit         */
    using SETPEND30  = regbits< type, 30,  1 >;  /**< INTMUX0 channel 2 interrupt interrupt set-pending bit         */
    using SETPEND31  = regbits< type, 31,  1 >;  /**< INTMUX0 channel 3 interrupt interrupt set-pending bit         */
  };

  /**
   * Interrupt Clear Pending Register
   */
  struct NVIC0_ICPR
  : public reg< uint32_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0 >;

    using CLRPEND0   = regbits< type,  0,  1 >;  /**< DMA0 channel 0/4 transfer complete interrupt clear-pending bit  */
    using CLRPEND1   = regbits< type,  1,  1 >;  /**< DMA0 channel 1/5 transfer complete interrupt clear-pending bit  */
    using CLRPEND2   = regbits< type,  2,  1 >;  /**< DMA0 channel 2/6 transfer complete interrupt clear-pending bit  */
    using CLRPEND3   = regbits< type,  3,  1 >;  /**< DMA0 channel 3/7 transfer complete interrupt clear-pending bit  */
    using CLRPEND4   = regbits< type,  4,  1 >;  /**< CTI0 or DMA0 error interrupt clear-pending bit                  */
    using CLRPEND5   = regbits< type,  5,  1 >;  /**< FLEXIO0 interrupt clear-pending bit                             */
    using CLRPEND6   = regbits< type,  6,  1 >;  /**< Timer/PWM module 0 interrupt clear-pending bit                  */
    using CLRPEND7   = regbits< type,  7,  1 >;  /**< Timer/PWM module 1 interrupt clear-pending bit                  */
    using CLRPEND8   = regbits< type,  8,  1 >;  /**< Timer/PWM module 2 interrupt clear-pending bit                  */
    using CLRPEND9   = regbits< type,  9,  1 >;  /**< Low Power Periodic Interrupt Timer interrupt clear-pending bit  */
    using CLRPEND10  = regbits< type, 10,  1 >;  /**< Serial Peripheral Interface 0 interrupt clear-pending bit       */
    using CLRPEND11  = regbits< type, 11,  1 >;  /**< Serial Peripheral Interface 1 interrupt clear-pending bit       */
    using CLRPEND12  = regbits< type, 12,  1 >;  /**< LPUART0 status and error interrupt clear-pending bit            */
    using CLRPEND13  = regbits< type, 13,  1 >;  /**< LPUART1 status and error interrupt clear-pending bit            */
    using CLRPEND14  = regbits< type, 14,  1 >;  /**< Inter-Integrated Circuit 0 interrupt clear-pending bit          */
    using CLRPEND15  = regbits< type, 15,  1 >;  /**< Inter-Integrated Circuit 0 interrupt clear-pending bit          */
    using CLRPEND16  = regbits< type, 16,  1 >;  /**< Reserved iv 32 interrupt clear-pending bit                      */
    using CLRPEND17  = regbits< type, 17,  1 >;  /**< PORTA Pin detect interrupt clear-pending bit                    */
    using CLRPEND18  = regbits< type, 18,  1 >;  /**< PORTB Pin detect interrupt clear-pending bit                    */
    using CLRPEND19  = regbits< type, 19,  1 >;  /**< PORTC Pin detect interrupt clear-pending bit                    */
    using CLRPEND20  = regbits< type, 20,  1 >;  /**< PORTD Pin detect interrupt clear-pending bit                    */
    using CLRPEND21  = regbits< type, 21,  1 >;  /**< PORTE Pin detect interrupt clear-pending bit                    */
    using CLRPEND22  = regbits< type, 22,  1 >;  /**< Low Leakage Wakeup 0 interrupt clear-pending bit                */
    using CLRPEND23  = regbits< type, 23,  1 >;  /**< Integrated interchip sound 0 interrupt clear-pending bit        */
    using CLRPEND24  = regbits< type, 24,  1 >;  /**< Universal Serial Bus interrupt clear-pending bit                */
    using CLRPEND25  = regbits< type, 25,  1 >;  /**< Analog-to-Digital Converter 0 interrupt clear-pending bit       */
    using CLRPEND26  = regbits< type, 26,  1 >;  /**< Low-Power Timer interrupt clear-pending bit                     */
    using CLRPEND27  = regbits< type, 27,  1 >;  /**< RTC seconds interrupt clear-pending bit                         */
    using CLRPEND28  = regbits< type, 28,  1 >;  /**< INTMUX0 channel 0 interrupt interrupt clear-pending bit         */
    using CLRPEND29  = regbits< type, 29,  1 >;  /**< INTMUX0 channel 1 interrupt interrupt clear-pending bit         */
    using CLRPEND30  = regbits< type, 30,  1 >;  /**< INTMUX0 channel 2 interrupt interrupt clear-pending bit         */
    using CLRPEND31  = regbits< type, 31,  1 >;  /**< INTMUX0 channel 3 interrupt interrupt clear-pending bit         */
  };

  /**
   * Interrupt Priority Register 0
   */
  struct NVIC0_IPR0
  : public reg< uint32_t, base_addr + 0x300, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 >;

    using PRI_0  = regbits< type,  6,  2 >;  /**< Priority of the DMA0 channel 0/4 transfer complete interrupt  */
    using PRI_1  = regbits< type, 14,  2 >;  /**< Priority of the DMA0 channel 1/5 transfer complete interrupt  */
    using PRI_2  = regbits< type, 22,  2 >;  /**< Priority of the DMA0 channel 2/6 transfer complete interrupt  */
    using PRI_3  = regbits< type, 30,  2 >;  /**< Priority of the DMA0 channel 3/7 transfer complete interrupt  */
  };

  /**
   * Interrupt Priority Register 1
   */
  struct NVIC0_IPR1
  : public reg< uint32_t, base_addr + 0x304, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 >;

    using PRI_4  = regbits< type,  6,  2 >;  /**< Priority of the CTI0 or DMA0 error interrupt  */
    using PRI_5  = regbits< type, 14,  2 >;  /**< Priority of the FLEXIO0 interrupt             */
    using PRI_6  = regbits< type, 22,  2 >;  /**< Priority of the Timer/PWM module 0 interrupt  */
    using PRI_7  = regbits< type, 30,  2 >;  /**< Priority of the Timer/PWM module 1 interrupt  */
  };

  /**
   * Interrupt Priority Register 2
   */
  struct NVIC0_IPR2
  : public reg< uint32_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 >;

    using PRI_8   = regbits< type,  6,  2 >;  /**< Priority of the Timer/PWM module 2 interrupt                  */
    using PRI_9   = regbits< type, 14,  2 >;  /**< Priority of the Low Power Periodic Interrupt Timer interrupt  */
    using PRI_10  = regbits< type, 22,  2 >;  /**< Priority of the Serial Peripheral Interface 0 interrupt       */
    using PRI_11  = regbits< type, 30,  2 >;  /**< Priority of the Serial Peripheral Interface 1 interrupt       */
  };

  /**
   * Interrupt Priority Register 3
   */
  struct NVIC0_IPR3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0 >;

    using PRI_12  = regbits< type,  6,  2 >;  /**< Priority of the LPUART0 status and error interrupt    */
    using PRI_13  = regbits< type, 14,  2 >;  /**< Priority of the LPUART1 status and error interrupt    */
    using PRI_14  = regbits< type, 22,  2 >;  /**< Priority of the Inter-Integrated Circuit 0 interrupt  */
    using PRI_15  = regbits< type, 30,  2 >;  /**< Priority of the Inter-Integrated Circuit 0 interrupt  */
  };

  /**
   * Interrupt Priority Register 4
   */
  struct NVIC0_IPR4
  : public reg< uint32_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0 >;

    using PRI_16  = regbits< type,  6,  2 >;  /**< Priority of the Reserved iv 32 interrupt    */
    using PRI_17  = regbits< type, 14,  2 >;  /**< Priority of the PORTA Pin detect interrupt  */
    using PRI_18  = regbits< type, 22,  2 >;  /**< Priority of the PORTB Pin detect interrupt  */
    using PRI_19  = regbits< type, 30,  2 >;  /**< Priority of the PORTC Pin detect interrupt  */
  };

  /**
   * Interrupt Priority Register 5
   */
  struct NVIC0_IPR5
  : public reg< uint32_t, base_addr + 0x314, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0 >;

    using PRI_20  = regbits< type,  6,  2 >;  /**< Priority of the PORTD Pin detect interrupt              */
    using PRI_21  = regbits< type, 14,  2 >;  /**< Priority of the PORTE Pin detect interrupt              */
    using PRI_22  = regbits< type, 22,  2 >;  /**< Priority of the Low Leakage Wakeup 0 interrupt          */
    using PRI_23  = regbits< type, 30,  2 >;  /**< Priority of the Integrated interchip sound 0 interrupt  */
  };

  /**
   * Interrupt Priority Register 6
   */
  struct NVIC0_IPR6
  : public reg< uint32_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0 >;

    using PRI_24  = regbits< type,  6,  2 >;  /**< Priority of the Universal Serial Bus interrupt           */
    using PRI_25  = regbits< type, 14,  2 >;  /**< Priority of the Analog-to-Digital Converter 0 interrupt  */
    using PRI_26  = regbits< type, 22,  2 >;  /**< Priority of the Low-Power Timer interrupt                */
    using PRI_27  = regbits< type, 30,  2 >;  /**< Priority of the RTC seconds interrupt                    */
  };

  /**
   * Interrupt Priority Register 7
   */
  struct NVIC0_IPR7
  : public reg< uint32_t, base_addr + 0x31c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0 >;

    using PRI_28  = regbits< type,  6,  2 >;  /**< Priority of the INTMUX0 channel 0 interrupt interrupt  */
    using PRI_29  = regbits< type, 14,  2 >;  /**< Priority of the INTMUX0 channel 1 interrupt interrupt  */
    using PRI_30  = regbits< type, 22,  2 >;  /**< Priority of the INTMUX0 channel 2 interrupt interrupt  */
    using PRI_31  = regbits< type, 30,  2 >;  /**< Priority of the INTMUX0 channel 3 interrupt interrupt  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC0_HPP_INCLUDED
