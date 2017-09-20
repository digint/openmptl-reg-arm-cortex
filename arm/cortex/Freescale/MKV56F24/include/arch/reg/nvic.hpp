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
//  Import from CMSIS-SVD: "Freescale/MKV56F24.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV56F24
//  series: Kinetis_V
//  version: 1.6
//  description: MKV56F24 Freescale Microcontroller
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
   * Interrupt Set Enable Register n
   */
  struct NVICISER0
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< Interrupt set enable bits  */
  };

  /**
   * Interrupt Set Enable Register n
   */
  struct NVICISER1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< Interrupt set enable bits  */
  };

  /**
   * Interrupt Set Enable Register n
   */
  struct NVICISER2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< Interrupt set enable bits  */
  };

  /**
   * Interrupt Set Enable Register n
   */
  struct NVICISER3
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< Interrupt set enable bits  */
  };

  /**
   * Interrupt Clear Enable Register n
   */
  struct NVICICER0
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< Interrupt clear-enable bits  */
  };

  /**
   * Interrupt Clear Enable Register n
   */
  struct NVICICER1
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< Interrupt clear-enable bits  */
  };

  /**
   * Interrupt Clear Enable Register n
   */
  struct NVICICER2
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< Interrupt clear-enable bits  */
  };

  /**
   * Interrupt Clear Enable Register n
   */
  struct NVICICER3
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< Interrupt clear-enable bits  */
  };

  /**
   * Interrupt Set Pending Register n
   */
  struct NVICISPR0
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< Interrupt set-pending bits  */
  };

  /**
   * Interrupt Set Pending Register n
   */
  struct NVICISPR1
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< Interrupt set-pending bits  */
  };

  /**
   * Interrupt Set Pending Register n
   */
  struct NVICISPR2
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< Interrupt set-pending bits  */
  };

  /**
   * Interrupt Set Pending Register n
   */
  struct NVICISPR3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< Interrupt set-pending bits  */
  };

  /**
   * Interrupt Clear Pending Register n
   */
  struct NVICICPR0
  : public reg< uint32_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< Interrupt clear-pending bits  */
  };

  /**
   * Interrupt Clear Pending Register n
   */
  struct NVICICPR1
  : public reg< uint32_t, base_addr + 0x184, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< Interrupt clear-pending bits  */
  };

  /**
   * Interrupt Clear Pending Register n
   */
  struct NVICICPR2
  : public reg< uint32_t, base_addr + 0x188, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< Interrupt clear-pending bits  */
  };

  /**
   * Interrupt Clear Pending Register n
   */
  struct NVICICPR3
  : public reg< uint32_t, base_addr + 0x18c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18c, rw, 0 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< Interrupt clear-pending bits  */
  };

  /**
   * Interrupt Active bit Register n
   */
  struct NVICIABR0
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< Interrupt active flags  */
  };

  /**
   * Interrupt Active bit Register n
   */
  struct NVICIABR1
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< Interrupt active flags  */
  };

  /**
   * Interrupt Active bit Register n
   */
  struct NVICIABR2
  : public reg< uint32_t, base_addr + 0x208, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< Interrupt active flags  */
  };

  /**
   * Interrupt Active bit Register n
   */
  struct NVICIABR3
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< Interrupt active flags  */
  };

  /**
   * Interrupt Priority Register 0
   */
  struct NVICIP0
  : public reg< uint8_t, base_addr + 0x300, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x300, rw, 0 >;

    using PRI0  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA0_DMA16 interrupt 0  */
  };

  /**
   * Interrupt Priority Register 1
   */
  struct NVICIP1
  : public reg< uint8_t, base_addr + 0x301, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x301, rw, 0 >;

    using PRI1  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA1_DMA17 interrupt 1  */
  };

  /**
   * Interrupt Priority Register 2
   */
  struct NVICIP2
  : public reg< uint8_t, base_addr + 0x302, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x302, rw, 0 >;

    using PRI2  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA2_DMA18 interrupt 2  */
  };

  /**
   * Interrupt Priority Register 3
   */
  struct NVICIP3
  : public reg< uint8_t, base_addr + 0x303, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x303, rw, 0 >;

    using PRI3  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA3_DMA19 interrupt 3  */
  };

  /**
   * Interrupt Priority Register 4
   */
  struct NVICIP4
  : public reg< uint8_t, base_addr + 0x304, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x304, rw, 0 >;

    using PRI4  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA4_DMA20 interrupt 4  */
  };

  /**
   * Interrupt Priority Register 5
   */
  struct NVICIP5
  : public reg< uint8_t, base_addr + 0x305, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x305, rw, 0 >;

    using PRI5  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA5_DMA21 interrupt 5  */
  };

  /**
   * Interrupt Priority Register 6
   */
  struct NVICIP6
  : public reg< uint8_t, base_addr + 0x306, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x306, rw, 0 >;

    using PRI6  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA6_DMA22 interrupt 6  */
  };

  /**
   * Interrupt Priority Register 7
   */
  struct NVICIP7
  : public reg< uint8_t, base_addr + 0x307, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x307, rw, 0 >;

    using PRI7  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA7_DMA23 interrupt 7  */
  };

  /**
   * Interrupt Priority Register 8
   */
  struct NVICIP8
  : public reg< uint8_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x308, rw, 0 >;

    using PRI8  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA8_DMA24 interrupt 8  */
  };

  /**
   * Interrupt Priority Register 9
   */
  struct NVICIP9
  : public reg< uint8_t, base_addr + 0x309, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x309, rw, 0 >;

    using PRI9  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA9_DMA25 interrupt 9  */
  };

  /**
   * Interrupt Priority Register 10
   */
  struct NVICIP10
  : public reg< uint8_t, base_addr + 0x30a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30a, rw, 0 >;

    using PRI10  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA10_DMA26 interrupt 10  */
  };

  /**
   * Interrupt Priority Register 11
   */
  struct NVICIP11
  : public reg< uint8_t, base_addr + 0x30b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30b, rw, 0 >;

    using PRI11  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA11_DMA27 interrupt 11  */
  };

  /**
   * Interrupt Priority Register 12
   */
  struct NVICIP12
  : public reg< uint8_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30c, rw, 0 >;

    using PRI12  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA12_DMA28 interrupt 12  */
  };

  /**
   * Interrupt Priority Register 13
   */
  struct NVICIP13
  : public reg< uint8_t, base_addr + 0x30d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30d, rw, 0 >;

    using PRI13  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA13_DMA29 interrupt 13  */
  };

  /**
   * Interrupt Priority Register 14
   */
  struct NVICIP14
  : public reg< uint8_t, base_addr + 0x30e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30e, rw, 0 >;

    using PRI14  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA14_DMA30 interrupt 14  */
  };

  /**
   * Interrupt Priority Register 15
   */
  struct NVICIP15
  : public reg< uint8_t, base_addr + 0x30f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30f, rw, 0 >;

    using PRI15  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA15_DMA31 interrupt 15  */
  };

  /**
   * Interrupt Priority Register 16
   */
  struct NVICIP16
  : public reg< uint8_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x310, rw, 0 >;

    using PRI16  = regbits< type,  4,  4 >;  /**< Priority of the INT_DMA_Error interrupt 16  */
  };

  /**
   * Interrupt Priority Register 17
   */
  struct NVICIP17
  : public reg< uint8_t, base_addr + 0x311, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x311, rw, 0 >;

    using PRI17  = regbits< type,  4,  4 >;  /**< Priority of the INT_MCM interrupt 17  */
  };

  /**
   * Interrupt Priority Register 18
   */
  struct NVICIP18
  : public reg< uint8_t, base_addr + 0x312, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x312, rw, 0 >;

    using PRI18  = regbits< type,  4,  4 >;  /**< Priority of the INT_FTFE interrupt 18  */
  };

  /**
   * Interrupt Priority Register 19
   */
  struct NVICIP19
  : public reg< uint8_t, base_addr + 0x313, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x313, rw, 0 >;

    using PRI19  = regbits< type,  4,  4 >;  /**< Priority of the INT_Read_Collision interrupt 19  */
  };

  /**
   * Interrupt Priority Register 20
   */
  struct NVICIP20
  : public reg< uint8_t, base_addr + 0x314, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x314, rw, 0 >;

    using PRI20  = regbits< type,  4,  4 >;  /**< Priority of the INT_PMC interrupt 20  */
  };

  /**
   * Interrupt Priority Register 21
   */
  struct NVICIP21
  : public reg< uint8_t, base_addr + 0x315, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x315, rw, 0 >;

    using PRI21  = regbits< type,  4,  4 >;  /**< Priority of the INT_LLWU interrupt 21  */
  };

  /**
   * Interrupt Priority Register 22
   */
  struct NVICIP22
  : public reg< uint8_t, base_addr + 0x316, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x316, rw, 0 >;

    using PRI22  = regbits< type,  4,  4 >;  /**< Priority of the INT_WDOG_EWM interrupt 22  */
  };

  /**
   * Interrupt Priority Register 23
   */
  struct NVICIP23
  : public reg< uint8_t, base_addr + 0x317, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x317, rw, 0 >;

    using PRI23  = regbits< type,  4,  4 >;  /**< Priority of the INT_TRNG0 interrupt 23  */
  };

  /**
   * Interrupt Priority Register 24
   */
  struct NVICIP24
  : public reg< uint8_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x318, rw, 0 >;

    using PRI24  = regbits< type,  4,  4 >;  /**< Priority of the INT_I2C0 interrupt 24  */
  };

  /**
   * Interrupt Priority Register 25
   */
  struct NVICIP25
  : public reg< uint8_t, base_addr + 0x319, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x319, rw, 0 >;

    using PRI25  = regbits< type,  4,  4 >;  /**< Priority of the INT_I2C1 interrupt 25  */
  };

  /**
   * Interrupt Priority Register 26
   */
  struct NVICIP26
  : public reg< uint8_t, base_addr + 0x31a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31a, rw, 0 >;

    using PRI26  = regbits< type,  4,  4 >;  /**< Priority of the INT_SPI0 interrupt 26  */
  };

  /**
   * Interrupt Priority Register 27
   */
  struct NVICIP27
  : public reg< uint8_t, base_addr + 0x31b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31b, rw, 0 >;

    using PRI27  = regbits< type,  4,  4 >;  /**< Priority of the INT_SPI1 interrupt 27  */
  };

  /**
   * Interrupt Priority Register 28
   */
  struct NVICIP28
  : public reg< uint8_t, base_addr + 0x31c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31c, rw, 0 >;

    using PRI28  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART5_RX_TX interrupt 28  */
  };

  /**
   * Interrupt Priority Register 29
   */
  struct NVICIP29
  : public reg< uint8_t, base_addr + 0x31d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31d, rw, 0 >;

    using PRI29  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART5_ERR interrupt 29  */
  };

  /**
   * Interrupt Priority Register 30
   */
  struct NVICIP30
  : public reg< uint8_t, base_addr + 0x31e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31e, rw, 0 >;

    using PRI30  = regbits< type,  4,  4 >;  /**< Priority of interrupt 30  */
  };

  /**
   * Interrupt Priority Register 31
   */
  struct NVICIP31
  : public reg< uint8_t, base_addr + 0x31f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31f, rw, 0 >;

    using PRI31  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART0_RX_TX interrupt 31  */
  };

  /**
   * Interrupt Priority Register 32
   */
  struct NVICIP32
  : public reg< uint8_t, base_addr + 0x320, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x320, rw, 0 >;

    using PRI32  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART0_ERR interrupt 32  */
  };

  /**
   * Interrupt Priority Register 33
   */
  struct NVICIP33
  : public reg< uint8_t, base_addr + 0x321, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x321, rw, 0 >;

    using PRI33  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART1_RX_TX interrupt 33  */
  };

  /**
   * Interrupt Priority Register 34
   */
  struct NVICIP34
  : public reg< uint8_t, base_addr + 0x322, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x322, rw, 0 >;

    using PRI34  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART1_ERR interrupt 34  */
  };

  /**
   * Interrupt Priority Register 35
   */
  struct NVICIP35
  : public reg< uint8_t, base_addr + 0x323, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x323, rw, 0 >;

    using PRI35  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART2_RX_TX interrupt 35  */
  };

  /**
   * Interrupt Priority Register 36
   */
  struct NVICIP36
  : public reg< uint8_t, base_addr + 0x324, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x324, rw, 0 >;

    using PRI36  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART2_ERR interrupt 36  */
  };

  /**
   * Interrupt Priority Register 37
   */
  struct NVICIP37
  : public reg< uint8_t, base_addr + 0x325, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x325, rw, 0 >;

    using PRI37  = regbits< type,  4,  4 >;  /**< Priority of the INT_ADC0 interrupt 37  */
  };

  /**
   * Interrupt Priority Register 38
   */
  struct NVICIP38
  : public reg< uint8_t, base_addr + 0x326, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x326, rw, 0 >;

    using PRI38  = regbits< type,  4,  4 >;  /**< Priority of the INT_HSADC_ERR interrupt 38  */
  };

  /**
   * Interrupt Priority Register 39
   */
  struct NVICIP39
  : public reg< uint8_t, base_addr + 0x327, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x327, rw, 0 >;

    using PRI39  = regbits< type,  4,  4 >;  /**< Priority of the INT_HSADC0_CCA interrupt 39  */
  };

  /**
   * Interrupt Priority Register 40
   */
  struct NVICIP40
  : public reg< uint8_t, base_addr + 0x328, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x328, rw, 0 >;

    using PRI40  = regbits< type,  4,  4 >;  /**< Priority of the INT_CMP0 interrupt 40  */
  };

  /**
   * Interrupt Priority Register 41
   */
  struct NVICIP41
  : public reg< uint8_t, base_addr + 0x329, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x329, rw, 0 >;

    using PRI41  = regbits< type,  4,  4 >;  /**< Priority of the INT_CMP1 interrupt 41  */
  };

  /**
   * Interrupt Priority Register 42
   */
  struct NVICIP42
  : public reg< uint8_t, base_addr + 0x32a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32a, rw, 0 >;

    using PRI42  = regbits< type,  4,  4 >;  /**< Priority of the INT_FTM0 interrupt 42  */
  };

  /**
   * Interrupt Priority Register 43
   */
  struct NVICIP43
  : public reg< uint8_t, base_addr + 0x32b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32b, rw, 0 >;

    using PRI43  = regbits< type,  4,  4 >;  /**< Priority of the INT_FTM1 interrupt 43  */
  };

  /**
   * Interrupt Priority Register 44
   */
  struct NVICIP44
  : public reg< uint8_t, base_addr + 0x32c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32c, rw, 0 >;

    using PRI44  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART3_RX_TX interrupt 44  */
  };

  /**
   * Interrupt Priority Register 45
   */
  struct NVICIP45
  : public reg< uint8_t, base_addr + 0x32d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32d, rw, 0 >;

    using PRI45  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART3_ERR interrupt 45  */
  };

  /**
   * Interrupt Priority Register 46
   */
  struct NVICIP46
  : public reg< uint8_t, base_addr + 0x32e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32e, rw, 0 >;

    using PRI46  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART4_RX_TX interrupt 46  */
  };

  /**
   * Interrupt Priority Register 47
   */
  struct NVICIP47
  : public reg< uint8_t, base_addr + 0x32f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x32f, rw, 0 >;

    using PRI47  = regbits< type,  4,  4 >;  /**< Priority of the INT_UART4_ERR interrupt 47  */
  };

  /**
   * Interrupt Priority Register 48
   */
  struct NVICIP48
  : public reg< uint8_t, base_addr + 0x330, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x330, rw, 0 >;

    using PRI48  = regbits< type,  4,  4 >;  /**< Priority of the INT_PIT0 interrupt 48  */
  };

  /**
   * Interrupt Priority Register 49
   */
  struct NVICIP49
  : public reg< uint8_t, base_addr + 0x331, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x331, rw, 0 >;

    using PRI49  = regbits< type,  4,  4 >;  /**< Priority of the INT_PIT1 interrupt 49  */
  };

  /**
   * Interrupt Priority Register 50
   */
  struct NVICIP50
  : public reg< uint8_t, base_addr + 0x332, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x332, rw, 0 >;

    using PRI50  = regbits< type,  4,  4 >;  /**< Priority of the INT_PIT2 interrupt 50  */
  };

  /**
   * Interrupt Priority Register 51
   */
  struct NVICIP51
  : public reg< uint8_t, base_addr + 0x333, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x333, rw, 0 >;

    using PRI51  = regbits< type,  4,  4 >;  /**< Priority of the INT_PIT3 interrupt 51  */
  };

  /**
   * Interrupt Priority Register 52
   */
  struct NVICIP52
  : public reg< uint8_t, base_addr + 0x334, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x334, rw, 0 >;

    using PRI52  = regbits< type,  4,  4 >;  /**< Priority of the INT_PDB0 interrupt 52  */
  };

  /**
   * Interrupt Priority Register 53
   */
  struct NVICIP53
  : public reg< uint8_t, base_addr + 0x335, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x335, rw, 0 >;

    using PRI53  = regbits< type,  4,  4 >;  /**< Priority of the INT_FTM2 interrupt 53  */
  };

  /**
   * Interrupt Priority Register 54
   */
  struct NVICIP54
  : public reg< uint8_t, base_addr + 0x336, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x336, rw, 0 >;

    using PRI54  = regbits< type,  4,  4 >;  /**< Priority of the INT_XBARA interrupt 54  */
  };

  /**
   * Interrupt Priority Register 55
   */
  struct NVICIP55
  : public reg< uint8_t, base_addr + 0x337, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x337, rw, 0 >;

    using PRI55  = regbits< type,  4,  4 >;  /**< Priority of the INT_PDB1 interrupt 55  */
  };

  /**
   * Interrupt Priority Register 56
   */
  struct NVICIP56
  : public reg< uint8_t, base_addr + 0x338, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x338, rw, 0 >;

    using PRI56  = regbits< type,  4,  4 >;  /**< Priority of the INT_DAC0 interrupt 56  */
  };

  /**
   * Interrupt Priority Register 57
   */
  struct NVICIP57
  : public reg< uint8_t, base_addr + 0x339, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x339, rw, 0 >;

    using PRI57  = regbits< type,  4,  4 >;  /**< Priority of the INT_MCG interrupt 57  */
  };

  /**
   * Interrupt Priority Register 58
   */
  struct NVICIP58
  : public reg< uint8_t, base_addr + 0x33a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33a, rw, 0 >;

    using PRI58  = regbits< type,  4,  4 >;  /**< Priority of the INT_LPTMR0 interrupt 58  */
  };

  /**
   * Interrupt Priority Register 59
   */
  struct NVICIP59
  : public reg< uint8_t, base_addr + 0x33b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33b, rw, 0 >;

    using PRI59  = regbits< type,  4,  4 >;  /**< Priority of the INT_PORTA interrupt 59  */
  };

  /**
   * Interrupt Priority Register 60
   */
  struct NVICIP60
  : public reg< uint8_t, base_addr + 0x33c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33c, rw, 0 >;

    using PRI60  = regbits< type,  4,  4 >;  /**< Priority of the INT_PORTB interrupt 60  */
  };

  /**
   * Interrupt Priority Register 61
   */
  struct NVICIP61
  : public reg< uint8_t, base_addr + 0x33d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33d, rw, 0 >;

    using PRI61  = regbits< type,  4,  4 >;  /**< Priority of the INT_PORTC interrupt 61  */
  };

  /**
   * Interrupt Priority Register 62
   */
  struct NVICIP62
  : public reg< uint8_t, base_addr + 0x33e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33e, rw, 0 >;

    using PRI62  = regbits< type,  4,  4 >;  /**< Priority of the INT_PORTD interrupt 62  */
  };

  /**
   * Interrupt Priority Register 63
   */
  struct NVICIP63
  : public reg< uint8_t, base_addr + 0x33f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x33f, rw, 0 >;

    using PRI63  = regbits< type,  4,  4 >;  /**< Priority of the INT_PORTE interrupt 63  */
  };

  /**
   * Interrupt Priority Register 64
   */
  struct NVICIP64
  : public reg< uint8_t, base_addr + 0x340, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x340, rw, 0 >;

    using PRI64  = regbits< type,  4,  4 >;  /**< Priority of the INT_SWI interrupt 64  */
  };

  /**
   * Interrupt Priority Register 65
   */
  struct NVICIP65
  : public reg< uint8_t, base_addr + 0x341, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x341, rw, 0 >;

    using PRI65  = regbits< type,  4,  4 >;  /**< Priority of the INT_SPI2 interrupt 65  */
  };

  /**
   * Interrupt Priority Register 66
   */
  struct NVICIP66
  : public reg< uint8_t, base_addr + 0x342, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x342, rw, 0 >;

    using PRI66  = regbits< type,  4,  4 >;  /**< Priority of the INT_ENC_COMPARE interrupt 66  */
  };

  /**
   * Interrupt Priority Register 67
   */
  struct NVICIP67
  : public reg< uint8_t, base_addr + 0x343, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x343, rw, 0 >;

    using PRI67  = regbits< type,  4,  4 >;  /**< Priority of the INT_ENC_HOME interrupt 67  */
  };

  /**
   * Interrupt Priority Register 68
   */
  struct NVICIP68
  : public reg< uint8_t, base_addr + 0x344, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x344, rw, 0 >;

    using PRI68  = regbits< type,  4,  4 >;  /**< Priority of the INT_ENC_WDOG_SAB interrupt 68  */
  };

  /**
   * Interrupt Priority Register 69
   */
  struct NVICIP69
  : public reg< uint8_t, base_addr + 0x345, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x345, rw, 0 >;

    using PRI69  = regbits< type,  4,  4 >;  /**< Priority of the INT_ENC_INDEX interrupt 69  */
  };

  /**
   * Interrupt Priority Register 70
   */
  struct NVICIP70
  : public reg< uint8_t, base_addr + 0x346, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x346, rw, 0 >;

    using PRI70  = regbits< type,  4,  4 >;  /**< Priority of the INT_CMP2 interrupt 70  */
  };

  /**
   * Interrupt Priority Register 71
   */
  struct NVICIP71
  : public reg< uint8_t, base_addr + 0x347, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x347, rw, 0 >;

    using PRI71  = regbits< type,  4,  4 >;  /**< Priority of the INT_FTM3 interrupt 71  */
  };

  /**
   * Interrupt Priority Register 72
   */
  struct NVICIP72
  : public reg< uint8_t, base_addr + 0x348, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x348, rw, 0 >;

    using PRI72  = regbits< type,  4,  4 >;  /**< Priority of interrupt 72  */
  };

  /**
   * Interrupt Priority Register 73
   */
  struct NVICIP73
  : public reg< uint8_t, base_addr + 0x349, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x349, rw, 0 >;

    using PRI73  = regbits< type,  4,  4 >;  /**< Priority of the INT_HSADC0_CCB interrupt 73  */
  };

  /**
   * Interrupt Priority Register 74
   */
  struct NVICIP74
  : public reg< uint8_t, base_addr + 0x34a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34a, rw, 0 >;

    using PRI74  = regbits< type,  4,  4 >;  /**< Priority of the INT_HSADC1_CCA interrupt 74  */
  };

  /**
   * Interrupt Priority Register 75
   */
  struct NVICIP75
  : public reg< uint8_t, base_addr + 0x34b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34b, rw, 0 >;

    using PRI75  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN0_ORed_Message_buffer interrupt 75  */
  };

  /**
   * Interrupt Priority Register 76
   */
  struct NVICIP76
  : public reg< uint8_t, base_addr + 0x34c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34c, rw, 0 >;

    using PRI76  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN0_Bus_Off interrupt 76  */
  };

  /**
   * Interrupt Priority Register 77
   */
  struct NVICIP77
  : public reg< uint8_t, base_addr + 0x34d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34d, rw, 0 >;

    using PRI77  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN0_Error interrupt 77  */
  };

  /**
   * Interrupt Priority Register 78
   */
  struct NVICIP78
  : public reg< uint8_t, base_addr + 0x34e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34e, rw, 0 >;

    using PRI78  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN0_Tx_Warning interrupt 78  */
  };

  /**
   * Interrupt Priority Register 79
   */
  struct NVICIP79
  : public reg< uint8_t, base_addr + 0x34f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x34f, rw, 0 >;

    using PRI79  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN0_Rx_Warning interrupt 79  */
  };

  /**
   * Interrupt Priority Register 80
   */
  struct NVICIP80
  : public reg< uint8_t, base_addr + 0x350, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x350, rw, 0 >;

    using PRI80  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN0_Wake_Up interrupt 80  */
  };

  /**
   * Interrupt Priority Register 81
   */
  struct NVICIP81
  : public reg< uint8_t, base_addr + 0x351, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x351, rw, 0 >;

    using PRI81  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_CMP0 interrupt 81  */
  };

  /**
   * Interrupt Priority Register 82
   */
  struct NVICIP82
  : public reg< uint8_t, base_addr + 0x352, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x352, rw, 0 >;

    using PRI82  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_RELOAD0 interrupt 82  */
  };

  /**
   * Interrupt Priority Register 83
   */
  struct NVICIP83
  : public reg< uint8_t, base_addr + 0x353, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x353, rw, 0 >;

    using PRI83  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_CMP1 interrupt 83  */
  };

  /**
   * Interrupt Priority Register 84
   */
  struct NVICIP84
  : public reg< uint8_t, base_addr + 0x354, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x354, rw, 0 >;

    using PRI84  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_RELOAD1 interrupt 84  */
  };

  /**
   * Interrupt Priority Register 85
   */
  struct NVICIP85
  : public reg< uint8_t, base_addr + 0x355, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x355, rw, 0 >;

    using PRI85  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_CMP2 interrupt 85  */
  };

  /**
   * Interrupt Priority Register 86
   */
  struct NVICIP86
  : public reg< uint8_t, base_addr + 0x356, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x356, rw, 0 >;

    using PRI86  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_RELOAD2 interrupt 86  */
  };

  /**
   * Interrupt Priority Register 87
   */
  struct NVICIP87
  : public reg< uint8_t, base_addr + 0x357, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x357, rw, 0 >;

    using PRI87  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_CMP3 interrupt 87  */
  };

  /**
   * Interrupt Priority Register 88
   */
  struct NVICIP88
  : public reg< uint8_t, base_addr + 0x358, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x358, rw, 0 >;

    using PRI88  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_RELOAD3 interrupt 88  */
  };

  /**
   * Interrupt Priority Register 89
   */
  struct NVICIP89
  : public reg< uint8_t, base_addr + 0x359, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x359, rw, 0 >;

    using PRI89  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_CAP interrupt 89  */
  };

  /**
   * Interrupt Priority Register 90
   */
  struct NVICIP90
  : public reg< uint8_t, base_addr + 0x35a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35a, rw, 0 >;

    using PRI90  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_RERR interrupt 90  */
  };

  /**
   * Interrupt Priority Register 91
   */
  struct NVICIP91
  : public reg< uint8_t, base_addr + 0x35b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35b, rw, 0 >;

    using PRI91  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM0_FAULT interrupt 91  */
  };

  /**
   * Interrupt Priority Register 92
   */
  struct NVICIP92
  : public reg< uint8_t, base_addr + 0x35c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35c, rw, 0 >;

    using PRI92  = regbits< type,  4,  4 >;  /**< Priority of the INT_CMP3 interrupt 92  */
  };

  /**
   * Interrupt Priority Register 93
   */
  struct NVICIP93
  : public reg< uint8_t, base_addr + 0x35d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35d, rw, 0 >;

    using PRI93  = regbits< type,  4,  4 >;  /**< Priority of the INT_HSADC1_CCB interrupt 93  */
  };

  /**
   * Interrupt Priority Register 94
   */
  struct NVICIP94
  : public reg< uint8_t, base_addr + 0x35e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35e, rw, 0 >;

    using PRI94  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN1_ORed_Message_buffer interrupt 94  */
  };

  /**
   * Interrupt Priority Register 95
   */
  struct NVICIP95
  : public reg< uint8_t, base_addr + 0x35f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x35f, rw, 0 >;

    using PRI95  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN1_Bus_Off interrupt 95  */
  };

  /**
   * Interrupt Priority Register 96
   */
  struct NVICIP96
  : public reg< uint8_t, base_addr + 0x360, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x360, rw, 0 >;

    using PRI96  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN1_Error interrupt 96  */
  };

  /**
   * Interrupt Priority Register 97
   */
  struct NVICIP97
  : public reg< uint8_t, base_addr + 0x361, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x361, rw, 0 >;

    using PRI97  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN1_Tx_Warning interrupt 97  */
  };

  /**
   * Interrupt Priority Register 98
   */
  struct NVICIP98
  : public reg< uint8_t, base_addr + 0x362, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x362, rw, 0 >;

    using PRI98  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN1_Rx_Warning interrupt 98  */
  };

  /**
   * Interrupt Priority Register 99
   */
  struct NVICIP99
  : public reg< uint8_t, base_addr + 0x363, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x363, rw, 0 >;

    using PRI99  = regbits< type,  4,  4 >;  /**< Priority of the INT_CAN1_Wake_Up interrupt 99  */
  };

  /**
   * Interrupt Priority Register 100
   */
  struct NVICIP100
  : public reg< uint8_t, base_addr + 0x364, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x364, rw, 0 >;

    using PRI100  = regbits< type,  4,  4 >;  /**< Priority of interrupt 100  */
  };

  /**
   * Interrupt Priority Register 101
   */
  struct NVICIP101
  : public reg< uint8_t, base_addr + 0x365, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x365, rw, 0 >;

    using PRI101  = regbits< type,  4,  4 >;  /**< Priority of interrupt 101  */
  };

  /**
   * Interrupt Priority Register 102
   */
  struct NVICIP102
  : public reg< uint8_t, base_addr + 0x366, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x366, rw, 0 >;

    using PRI102  = regbits< type,  4,  4 >;  /**< Priority of interrupt 102  */
  };

  /**
   * Interrupt Priority Register 103
   */
  struct NVICIP103
  : public reg< uint8_t, base_addr + 0x367, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x367, rw, 0 >;

    using PRI103  = regbits< type,  4,  4 >;  /**< Priority of interrupt 103  */
  };

  /**
   * Interrupt Priority Register 104
   */
  struct NVICIP104
  : public reg< uint8_t, base_addr + 0x368, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x368, rw, 0 >;

    using PRI104  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_CMP0 interrupt 104  */
  };

  /**
   * Interrupt Priority Register 105
   */
  struct NVICIP105
  : public reg< uint8_t, base_addr + 0x369, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x369, rw, 0 >;

    using PRI105  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_RELOAD0 interrupt 105  */
  };

  /**
   * Interrupt Priority Register 106
   */
  struct NVICIP106
  : public reg< uint8_t, base_addr + 0x36a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x36a, rw, 0 >;

    using PRI106  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_CMP1 interrupt 106  */
  };

  /**
   * Interrupt Priority Register 107
   */
  struct NVICIP107
  : public reg< uint8_t, base_addr + 0x36b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x36b, rw, 0 >;

    using PRI107  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_RELOAD1 interrupt 107  */
  };

  /**
   * Interrupt Priority Register 108
   */
  struct NVICIP108
  : public reg< uint8_t, base_addr + 0x36c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x36c, rw, 0 >;

    using PRI108  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_CMP2 interrupt 108  */
  };

  /**
   * Interrupt Priority Register 109
   */
  struct NVICIP109
  : public reg< uint8_t, base_addr + 0x36d, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x36d, rw, 0 >;

    using PRI109  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_RELOAD2 interrupt 109  */
  };

  /**
   * Interrupt Priority Register 110
   */
  struct NVICIP110
  : public reg< uint8_t, base_addr + 0x36e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x36e, rw, 0 >;

    using PRI110  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_CMP3 interrupt 110  */
  };

  /**
   * Interrupt Priority Register 111
   */
  struct NVICIP111
  : public reg< uint8_t, base_addr + 0x36f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x36f, rw, 0 >;

    using PRI111  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_RELOAD3 interrupt 111  */
  };

  /**
   * Interrupt Priority Register 112
   */
  struct NVICIP112
  : public reg< uint8_t, base_addr + 0x370, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x370, rw, 0 >;

    using PRI112  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_CAP interrupt 112  */
  };

  /**
   * Interrupt Priority Register 113
   */
  struct NVICIP113
  : public reg< uint8_t, base_addr + 0x371, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x371, rw, 0 >;

    using PRI113  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_RERR interrupt 113  */
  };

  /**
   * Interrupt Priority Register 114
   */
  struct NVICIP114
  : public reg< uint8_t, base_addr + 0x372, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x372, rw, 0 >;

    using PRI114  = regbits< type,  4,  4 >;  /**< Priority of the INT_PWM1_FAULT interrupt 114  */
  };

  /**
   * Software Trigger Interrupt Register
   */
  struct NVICSTIR
  : public reg< uint32_t, base_addr + 0xe00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe00, rw, 0 >;

    using INTID  = regbits< type,  0,  9 >;  /**< Interrupt ID of the interrupt to trigger, in the range 0-239. For example, a value of 0x03 specifies interrupt IRQ3.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
