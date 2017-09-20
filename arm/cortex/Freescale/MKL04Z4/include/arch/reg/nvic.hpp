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
//  Import from CMSIS-SVD: "Freescale/MKL04Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL04Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL04Z4 Freescale Microcontroller
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

    using SETENA0   = regbits< type,  0,  1 >;  /**< no description available  */
    using SETENA1   = regbits< type,  1,  1 >;  /**< no description available  */
    using SETENA2   = regbits< type,  2,  1 >;  /**< no description available  */
    using SETENA3   = regbits< type,  3,  1 >;  /**< no description available  */
    using SETENA4   = regbits< type,  4,  1 >;  /**< no description available  */
    using SETENA5   = regbits< type,  5,  1 >;  /**< no description available  */
    using SETENA6   = regbits< type,  6,  1 >;  /**< no description available  */
    using SETENA7   = regbits< type,  7,  1 >;  /**< no description available  */
    using SETENA8   = regbits< type,  8,  1 >;  /**< no description available  */
    using SETENA9   = regbits< type,  9,  1 >;  /**< no description available  */
    using SETENA10  = regbits< type, 10,  1 >;  /**< no description available  */
    using SETENA11  = regbits< type, 11,  1 >;  /**< no description available  */
    using SETENA12  = regbits< type, 12,  1 >;  /**< no description available  */
    using SETENA13  = regbits< type, 13,  1 >;  /**< no description available  */
    using SETENA14  = regbits< type, 14,  1 >;  /**< no description available  */
    using SETENA15  = regbits< type, 15,  1 >;  /**< no description available  */
    using SETENA16  = regbits< type, 16,  1 >;  /**< no description available  */
    using SETENA17  = regbits< type, 17,  1 >;  /**< no description available  */
    using SETENA18  = regbits< type, 18,  1 >;  /**< no description available  */
    using SETENA19  = regbits< type, 19,  1 >;  /**< no description available  */
    using SETENA20  = regbits< type, 20,  1 >;  /**< no description available  */
    using SETENA21  = regbits< type, 21,  1 >;  /**< no description available  */
    using SETENA22  = regbits< type, 22,  1 >;  /**< no description available  */
    using SETENA23  = regbits< type, 23,  1 >;  /**< no description available  */
    using SETENA24  = regbits< type, 24,  1 >;  /**< no description available  */
    using SETENA25  = regbits< type, 25,  1 >;  /**< no description available  */
    using SETENA26  = regbits< type, 26,  1 >;  /**< no description available  */
    using SETENA27  = regbits< type, 27,  1 >;  /**< no description available  */
    using SETENA28  = regbits< type, 28,  1 >;  /**< no description available  */
    using SETENA29  = regbits< type, 29,  1 >;  /**< no description available  */
    using SETENA30  = regbits< type, 30,  1 >;  /**< no description available  */
    using SETENA31  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Interrupt Clear Enable Register
   */
  struct NVIC_ICER
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using CLRENA0   = regbits< type,  0,  1 >;  /**< no description available  */
    using CLRENA1   = regbits< type,  1,  1 >;  /**< no description available  */
    using CLRENA2   = regbits< type,  2,  1 >;  /**< no description available  */
    using CLRENA3   = regbits< type,  3,  1 >;  /**< no description available  */
    using CLRENA4   = regbits< type,  4,  1 >;  /**< no description available  */
    using CLRENA5   = regbits< type,  5,  1 >;  /**< no description available  */
    using CLRENA6   = regbits< type,  6,  1 >;  /**< no description available  */
    using CLRENA7   = regbits< type,  7,  1 >;  /**< no description available  */
    using CLRENA8   = regbits< type,  8,  1 >;  /**< no description available  */
    using CLRENA9   = regbits< type,  9,  1 >;  /**< no description available  */
    using CLRENA10  = regbits< type, 10,  1 >;  /**< no description available  */
    using CLRENA11  = regbits< type, 11,  1 >;  /**< no description available  */
    using CLRENA12  = regbits< type, 12,  1 >;  /**< no description available  */
    using CLRENA13  = regbits< type, 13,  1 >;  /**< no description available  */
    using CLRENA14  = regbits< type, 14,  1 >;  /**< no description available  */
    using CLRENA15  = regbits< type, 15,  1 >;  /**< no description available  */
    using CLRENA16  = regbits< type, 16,  1 >;  /**< no description available  */
    using CLRENA17  = regbits< type, 17,  1 >;  /**< no description available  */
    using CLRENA18  = regbits< type, 18,  1 >;  /**< no description available  */
    using CLRENA19  = regbits< type, 19,  1 >;  /**< no description available  */
    using CLRENA20  = regbits< type, 20,  1 >;  /**< no description available  */
    using CLRENA21  = regbits< type, 21,  1 >;  /**< no description available  */
    using CLRENA22  = regbits< type, 22,  1 >;  /**< no description available  */
    using CLRENA23  = regbits< type, 23,  1 >;  /**< no description available  */
    using CLRENA24  = regbits< type, 24,  1 >;  /**< no description available  */
    using CLRENA25  = regbits< type, 25,  1 >;  /**< no description available  */
    using CLRENA26  = regbits< type, 26,  1 >;  /**< no description available  */
    using CLRENA27  = regbits< type, 27,  1 >;  /**< no description available  */
    using CLRENA28  = regbits< type, 28,  1 >;  /**< no description available  */
    using CLRENA29  = regbits< type, 29,  1 >;  /**< no description available  */
    using CLRENA30  = regbits< type, 30,  1 >;  /**< no description available  */
    using CLRENA31  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Interrupt Set Pending Register
   */
  struct NVIC_ISPR
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SETPEND0   = regbits< type,  0,  1 >;  /**< no description available  */
    using SETPEND1   = regbits< type,  1,  1 >;  /**< no description available  */
    using SETPEND2   = regbits< type,  2,  1 >;  /**< no description available  */
    using SETPEND3   = regbits< type,  3,  1 >;  /**< no description available  */
    using SETPEND4   = regbits< type,  4,  1 >;  /**< no description available  */
    using SETPEND5   = regbits< type,  5,  1 >;  /**< no description available  */
    using SETPEND6   = regbits< type,  6,  1 >;  /**< no description available  */
    using SETPEND7   = regbits< type,  7,  1 >;  /**< no description available  */
    using SETPEND8   = regbits< type,  8,  1 >;  /**< no description available  */
    using SETPEND9   = regbits< type,  9,  1 >;  /**< no description available  */
    using SETPEND10  = regbits< type, 10,  1 >;  /**< no description available  */
    using SETPEND11  = regbits< type, 11,  1 >;  /**< no description available  */
    using SETPEND12  = regbits< type, 12,  1 >;  /**< no description available  */
    using SETPEND13  = regbits< type, 13,  1 >;  /**< no description available  */
    using SETPEND14  = regbits< type, 14,  1 >;  /**< no description available  */
    using SETPEND15  = regbits< type, 15,  1 >;  /**< no description available  */
    using SETPEND16  = regbits< type, 16,  1 >;  /**< no description available  */
    using SETPEND17  = regbits< type, 17,  1 >;  /**< no description available  */
    using SETPEND18  = regbits< type, 18,  1 >;  /**< no description available  */
    using SETPEND19  = regbits< type, 19,  1 >;  /**< no description available  */
    using SETPEND20  = regbits< type, 20,  1 >;  /**< no description available  */
    using SETPEND21  = regbits< type, 21,  1 >;  /**< no description available  */
    using SETPEND22  = regbits< type, 22,  1 >;  /**< no description available  */
    using SETPEND23  = regbits< type, 23,  1 >;  /**< no description available  */
    using SETPEND24  = regbits< type, 24,  1 >;  /**< no description available  */
    using SETPEND25  = regbits< type, 25,  1 >;  /**< no description available  */
    using SETPEND26  = regbits< type, 26,  1 >;  /**< no description available  */
    using SETPEND27  = regbits< type, 27,  1 >;  /**< no description available  */
    using SETPEND28  = regbits< type, 28,  1 >;  /**< no description available  */
    using SETPEND29  = regbits< type, 29,  1 >;  /**< no description available  */
    using SETPEND30  = regbits< type, 30,  1 >;  /**< no description available  */
    using SETPEND31  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * Interrupt Clear Pending Register
   */
  struct NVIC_ICPR
  : public reg< uint32_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0 >;

    using CLRPEND0   = regbits< type,  0,  1 >;  /**< no description available  */
    using CLRPEND1   = regbits< type,  1,  1 >;  /**< no description available  */
    using CLRPEND2   = regbits< type,  2,  1 >;  /**< no description available  */
    using CLRPEND3   = regbits< type,  3,  1 >;  /**< no description available  */
    using CLRPEND4   = regbits< type,  4,  1 >;  /**< no description available  */
    using CLRPEND5   = regbits< type,  5,  1 >;  /**< no description available  */
    using CLRPEND6   = regbits< type,  6,  1 >;  /**< no description available  */
    using CLRPEND7   = regbits< type,  7,  1 >;  /**< no description available  */
    using CLRPEND8   = regbits< type,  8,  1 >;  /**< no description available  */
    using CLRPEND9   = regbits< type,  9,  1 >;  /**< no description available  */
    using CLRPEND10  = regbits< type, 10,  1 >;  /**< no description available  */
    using CLRPEND11  = regbits< type, 11,  1 >;  /**< no description available  */
    using CLRPEND12  = regbits< type, 12,  1 >;  /**< no description available  */
    using CLRPEND13  = regbits< type, 13,  1 >;  /**< no description available  */
    using CLRPEND14  = regbits< type, 14,  1 >;  /**< no description available  */
    using CLRPEND15  = regbits< type, 15,  1 >;  /**< no description available  */
    using CLRPEND16  = regbits< type, 16,  1 >;  /**< no description available  */
    using CLRPEND17  = regbits< type, 17,  1 >;  /**< no description available  */
    using CLRPEND18  = regbits< type, 18,  1 >;  /**< no description available  */
    using CLRPEND19  = regbits< type, 19,  1 >;  /**< no description available  */
    using CLRPEND20  = regbits< type, 20,  1 >;  /**< no description available  */
    using CLRPEND21  = regbits< type, 21,  1 >;  /**< no description available  */
    using CLRPEND22  = regbits< type, 22,  1 >;  /**< no description available  */
    using CLRPEND23  = regbits< type, 23,  1 >;  /**< no description available  */
    using CLRPEND24  = regbits< type, 24,  1 >;  /**< no description available  */
    using CLRPEND25  = regbits< type, 25,  1 >;  /**< no description available  */
    using CLRPEND26  = regbits< type, 26,  1 >;  /**< no description available  */
    using CLRPEND27  = regbits< type, 27,  1 >;  /**< no description available  */
    using CLRPEND28  = regbits< type, 28,  1 >;  /**< no description available  */
    using CLRPEND29  = regbits< type, 29,  1 >;  /**< no description available  */
    using CLRPEND30  = regbits< type, 30,  1 >;  /**< no description available  */
    using CLRPEND31  = regbits< type, 31,  1 >;  /**< no description available  */
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

    using PRI_4  = regbits< type,  6,  2 >;  /**< Priority of the Reserved iv 20 interrupt                           */
    using PRI_5  = regbits< type, 14,  2 >;  /**< Priority of the Command complete and read collision interrupt      */
    using PRI_6  = regbits< type, 22,  2 >;  /**< Priority of the Low-voltage detect, low-voltage warning interrupt  */
    using PRI_7  = regbits< type, 30,  2 >;  /**< Priority of the Low Leakage Wakeup interrupt                       */
  };

  /**
   * Interrupt Priority Register 2
   */
  struct NVIC_IPR2
  : public reg< uint32_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 >;

    using PRI_8   = regbits< type,  6,  2 >;  /**< Priority of the Inter-Integrated Circuit 0 interrupt     */
    using PRI_9   = regbits< type, 14,  2 >;  /**< Priority of the Reserved iv 25 interrupt                 */
    using PRI_10  = regbits< type, 22,  2 >;  /**< Priority of the Serial Peripheral Interface 0 interrupt  */
    using PRI_11  = regbits< type, 30,  2 >;  /**< Priority of the Reserved iv 27 interrupt                 */
  };

  /**
   * Interrupt Priority Register 3
   */
  struct NVIC_IPR3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0 >;

    using PRI_12  = regbits< type,  6,  2 >;  /**< Priority of the UART0 status and error interrupt         */
    using PRI_13  = regbits< type, 14,  2 >;  /**< Priority of the Reserved iv 29 interrupt                 */
    using PRI_14  = regbits< type, 22,  2 >;  /**< Priority of the Reserved iv 30 interrupt                 */
    using PRI_15  = regbits< type, 30,  2 >;  /**< Priority of the Analog-to-Digital Converter 0 interrupt  */
  };

  /**
   * Interrupt Priority Register 4
   */
  struct NVIC_IPR4
  : public reg< uint32_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0 >;

    using PRI_16  = regbits< type,  6,  2 >;  /**< Priority of the Comparator 0 interrupt        */
    using PRI_17  = regbits< type, 14,  2 >;  /**< Priority of the Timer/PWM module 0 interrupt  */
    using PRI_18  = regbits< type, 22,  2 >;  /**< Priority of the Timer/PWM module 1 interrupt  */
    using PRI_19  = regbits< type, 30,  2 >;  /**< Priority of the Reserved iv 35 interrupt      */
  };

  /**
   * Interrupt Priority Register 5
   */
  struct NVIC_IPR5
  : public reg< uint32_t, base_addr + 0x314, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0 >;

    using PRI_20  = regbits< type,  6,  2 >;  /**< Priority of the Real-time counter interrupt         */
    using PRI_21  = regbits< type, 14,  2 >;  /**< Priority of the RTC seconds interrupt               */
    using PRI_22  = regbits< type, 22,  2 >;  /**< Priority of the Periodic Interrupt Timer interrupt  */
    using PRI_23  = regbits< type, 30,  2 >;  /**< Priority of the Reserved iv 39 interrupt            */
  };

  /**
   * Interrupt Priority Register 6
   */
  struct NVIC_IPR6
  : public reg< uint32_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0 >;

    using PRI_24  = regbits< type,  6,  2 >;  /**< Priority of the Reserved iv 40 interrupt                */
    using PRI_25  = regbits< type, 14,  2 >;  /**< Priority of the Reserved iv 41 interrupt                */
    using PRI_26  = regbits< type, 22,  2 >;  /**< Priority of the Reserved iv 42 interrupt                */
    using PRI_27  = regbits< type, 30,  2 >;  /**< Priority of the Multipurpose Clock Generator interrupt  */
  };

  /**
   * Interrupt Priority Register 7
   */
  struct NVIC_IPR7
  : public reg< uint32_t, base_addr + 0x31c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0 >;

    using PRI_28  = regbits< type,  6,  2 >;  /**< Priority of the Low-Power Timer interrupt   */
    using PRI_29  = regbits< type, 14,  2 >;  /**< Priority of the Reserved iv 45 interrupt    */
    using PRI_30  = regbits< type, 22,  2 >;  /**< Priority of the PORTA Pin detect interrupt  */
    using PRI_31  = regbits< type, 30,  2 >;  /**< Priority of the PORTB Pin detect interrupt  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
