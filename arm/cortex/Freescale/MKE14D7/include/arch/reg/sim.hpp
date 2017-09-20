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
//  Import from CMSIS-SVD: "Freescale/MKE14D7.svd"
//
//  name: MKE14D7
//  version: 1.6
//  description: MKE14D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SIM_HPP_INCLUDED
#define ARCH_REG_SIM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System Integration Module
 */
struct SIM
{
  static constexpr reg_addr_t base_addr = 0x40032000;

  /**
   * System Options Register 2
   */
  struct SOPT2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x55553 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x55553 >;

    using FLLENSTOP4    = regbits< type,  0,  1 >;  /**< no description available       */
    using RESETIFE      = regbits< type,  1,  1 >;  /**< no description available       */
    using RESERVED      = regbits< type,  2,  2 >;  /**< no description available       */
    using OBEPADSELA13  = regbits< type,  4,  2 >;  /**< no description available       */
    using OBEPADSELA12  = regbits< type,  6,  2 >;  /**< no description available       */
    using OBEPADSELA3   = regbits< type,  8,  2 >;  /**< no description available       */
    using OBEPADSELA2   = regbits< type, 10,  2 >;  /**< no description available       */
    using OBEPADSELE1   = regbits< type, 12,  2 >;  /**< no description available       */
    using OBEPADSELE0   = regbits< type, 14,  2 >;  /**< no description available       */
    using FBSL          = regbits< type, 16,  2 >;  /**< FlexBus security level         */
    using TRACECLKSEL   = regbits< type, 18,  1 >;  /**< Debug trace clock select       */
    using RESERVED      = regbits< type, 19,  2 >;  /**< no description available       */
    using RAMSIZE       = regbits< type, 21,  1 >;  /**< The RAM size in the device.    */
    using RESERVED      = regbits< type, 22,  4 >;  /**< no description available       */
    using FSIZE         = regbits< type, 26,  2 >;  /**< The flash size of the device.  */
    using TSIEN         = regbits< type, 28,  1 >;  /**< no description available       */
    using MAXCLK        = regbits< type, 29,  1 >;  /**< no description available       */
    using RESERVED      = regbits< type, 30,  2 >;  /**< no description available       */
  };

  /**
   * System Options Register 3
   */
  struct SOPT3
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using FTM0_PDB   = regbits< type,  0,  4 >;  /**< no description available  */
    using FTM1_PDB   = regbits< type,  4,  4 >;  /**< no description available  */
    using FTM2_PDB   = regbits< type,  8,  4 >;  /**< no description available  */
    using FTM3_PDB   = regbits< type, 12,  4 >;  /**< no description available  */
    using FTM_SYNC0  = regbits< type, 16,  1 >;  /**< no description available  */
    using FTM_SYNC1  = regbits< type, 17,  1 >;  /**< no description available  */
    using FTM_SYNC2  = regbits< type, 18,  1 >;  /**< no description available  */
    using FTM_SYNC3  = regbits< type, 19,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 20, 12 >;  /**< no description available  */
  };

  /**
   * System Options Register 4
   */
  struct SOPT4
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using FTM0FLT0    = regbits< type,  0,  1 >;  /**< FTM0 Fault 0 Select                         */
    using FTM0FLT1    = regbits< type,  1,  1 >;  /**< FTM0 Fault 1 Select                         */
    using FTM0FLT2    = regbits< type,  2,  1 >;  /**< FTM0 Fault 2 Select                         */
    using FTM0FLT3    = regbits< type,  3,  1 >;  /**< FTM0 Fault 3 Select                         */
    using RESERVED    = regbits< type,  4,  8 >;  /**< no description available                    */
    using FTM3FLT0    = regbits< type, 12,  1 >;  /**< FTM3 Fault 0 Select                         */
    using FTM3FLT1    = regbits< type, 13,  1 >;  /**< FTM3 Fault 1 Select                         */
    using FTM3FLT2    = regbits< type, 14,  1 >;  /**< FTM3 Fault 2 Select                         */
    using FTM3FLT3    = regbits< type, 15,  1 >;  /**< FTM3 Fault 3 Select                         */
    using RESERVED    = regbits< type, 16,  4 >;  /**< no description available                    */
    using FTM1CH0SRC  = regbits< type, 20,  2 >;  /**< FTM1 channel 0 input capture source select  */
    using FTM2CH0SRC  = regbits< type, 22,  2 >;  /**< FTM2 channel 0 input capture source select  */
    using FTM0CLKSEL  = regbits< type, 24,  1 >;  /**< FlexTimer 0 External Clock Pin Select       */
    using FTM1CLKSEL  = regbits< type, 25,  1 >;  /**< FTM1 External Clock Pin Select              */
    using FTM2CLKSEL  = regbits< type, 26,  1 >;  /**< FlexTimer 2 External Clock Pin Select       */
    using FTM3CLKSEL  = regbits< type, 27,  1 >;  /**< FlexTimer 3 External Clock Pin Select       */
    using RESERVED    = regbits< type, 28,  4 >;  /**< no description available                    */
  };

  /**
   * System Options Register 5
   */
  struct SOPT5
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using UART0TXSRC  = regbits< type,  0,  2 >;  /**< UART 0 transmit data source select  */
    using UART0RXSRC  = regbits< type,  2,  2 >;  /**< UART 0 receive data source select   */
    using UART1TXSRC  = regbits< type,  4,  2 >;  /**< UART 1 transmit data source select  */
    using UART1RXSRC  = regbits< type,  6,  2 >;  /**< UART 1 receive data source select   */
    using RESERVED    = regbits< type,  8, 24 >;  /**< no description available            */
  };

  /**
   * System Options Register 6
   */
  struct SOPT6
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using CLKDIV    = regbits< type,  0,  3 >;  /**< no description available  */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using CLKOS     = regbits< type,  4,  4 >;  /**< Clock source select       */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available  */
  };

  /**
   * System Options Register 7
   */
  struct SOPT7
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using ADC0TRGSEL    = regbits< type,  0,  4 >;  /**< ADC0 trigger select            */
    using ADC1TRGSEL    = regbits< type,  4,  4 >;  /**< ADC1 trigger select            */
    using ADC2TRGSEL    = regbits< type,  8,  4 >;  /**< ADC2 trigger select            */
    using ADC3TRGSEL    = regbits< type, 12,  4 >;  /**< ADC3 trigger select            */
    using CMP0WS        = regbits< type, 16,  2 >;  /**< CMP0 windows select            */
    using CMP1WS        = regbits< type, 18,  2 >;  /**< CMP1 windows select            */
    using CMP2WS        = regbits< type, 20,  2 >;  /**< CMP2 windows select            */
    using CMP3WS        = regbits< type, 22,  2 >;  /**< CMP3 windows select            */
    using RESERVED      = regbits< type, 24,  4 >;  /**< no description available       */
    using ADC0ALTTRGEN  = regbits< type, 28,  1 >;  /**< ADC0 alternate trigger enable  */
    using ADC1ALTTRGEN  = regbits< type, 29,  1 >;  /**< ADC1 alternate trigger enable  */
    using ADC2ALTTRGEN  = regbits< type, 30,  1 >;  /**< ADC2 alternate trigger enable  */
    using ADC3ALTTRGEN  = regbits< type, 31,  1 >;  /**< ADC3 alternate trigger enable  */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x24, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0 >;

    using BOID      = regbits< type,  0,  4 >;  /**< Pincount identification       */
    using DIEID     = regbits< type,  4,  2 >;  /**< Device family identification  */
    using RESERVED  = regbits< type,  6,  6 >;  /**< no description available      */
    using REVID     = regbits< type, 12,  4 >;  /**< Device revision number        */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available      */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x38, rw, 0xD00030 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0xD00030 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< no description available  */
    using EWM       = regbits< type,  1,  1 >;  /**< EWM Clock Gate Control    */
    using CMT       = regbits< type,  2,  1 >;  /**< CMT Clock Gate Control    */
    using RESERVED  = regbits< type,  3,  4 >;  /**< no description available  */
    using IIC0      = regbits< type,  7,  1 >;  /**< IIC0 Clock Gate Control   */
    using IIC1      = regbits< type,  8,  1 >;  /**< IIC1 Clock Gate Control   */
    using UART0     = regbits< type,  9,  1 >;  /**< UART0 Clock Gate Control  */
    using UART1     = regbits< type, 10,  1 >;  /**< UART1 Clock Gate Control  */
    using UART2     = regbits< type, 11,  1 >;  /**< UART2 Clock Gate Control  */
    using UART3     = regbits< type, 12,  1 >;  /**< UART3 Clock Gate Control  */
    using RESERVED  = regbits< type, 13,  1 >;  /**< no description available  */
    using SPI0      = regbits< type, 14,  1 >;  /**< SPI0 Clock Gate Control   */
    using SPI1      = regbits< type, 15,  1 >;  /**< SPI1 Clock Gate Control   */
    using ACMP0     = regbits< type, 16,  1 >;  /**< ACMP0 Clock Gate Control  */
    using ACMP1     = regbits< type, 17,  1 >;  /**< ACMP1 Clock Gate Control  */
    using ACMP2     = regbits< type, 18,  1 >;  /**< ACMP2 Clock Gate Control  */
    using ACMP3     = regbits< type, 19,  1 >;  /**< ACMP3 Clock Gate Control  */
    using RESERVED  = regbits< type, 20, 12 >;  /**< no description available  */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x6040000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x6040000 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< no description available   */
    using DMAMUX    = regbits< type,  1,  1 >;  /**< DMAMUX Clock Gate Control  */
    using RESERVED  = regbits< type,  2,  1 >;  /**< no description available   */
    using PIT       = regbits< type,  3,  1 >;  /**< PIT Clock Gate Control     */
    using CRC       = regbits< type,  4,  1 >;  /**< CRC Clock Gate Control     */
    using PDB0      = regbits< type,  5,  1 >;  /**< PDB0 Clock Gate Control    */
    using PDB1      = regbits< type,  6,  1 >;  /**< PDB1 Clock Gate Control    */
    using PDB2      = regbits< type,  7,  1 >;  /**< PDB2 Clock Gate Control    */
    using PDB3      = regbits< type,  8,  1 >;  /**< PDB3 Clock Gate Control    */
    using FTM0      = regbits< type,  9,  1 >;  /**< FTM0 Clock Gate Control    */
    using FTM1      = regbits< type, 10,  1 >;  /**< FTM1 Clock Gate Control    */
    using FTM2      = regbits< type, 11,  1 >;  /**< FTM2 Clock Gate Control    */
    using FTM3      = regbits< type, 12,  1 >;  /**< FTM3 Clock Gate Control    */
    using RTC       = regbits< type, 13,  1 >;  /**< RTC Clock Gate Control     */
    using RESERVED  = regbits< type, 14,  2 >;  /**< no description available   */
    using TSI       = regbits< type, 16,  1 >;  /**< TSI Clock Gate Control     */
    using RESERVED  = regbits< type, 17,  1 >;  /**< no description available   */
    using RESERVED  = regbits< type, 18,  1 >;  /**< no description available   */
    using PORTA     = regbits< type, 19,  1 >;  /**< Port A Clock Gate Control  */
    using PORTB     = regbits< type, 20,  1 >;  /**< Port B Clock Gate Control  */
    using PORTC     = regbits< type, 21,  1 >;  /**< Port C Clock Gate Control  */
    using PORTD     = regbits< type, 22,  1 >;  /**< Port D Clock Gate Control  */
    using PORTE     = regbits< type, 23,  1 >;  /**< Port E Clock Gate Control  */
    using RESERVED  = regbits< type, 24,  3 >;  /**< no description available   */
    using ADC0      = regbits< type, 27,  1 >;  /**< ADC0 Clock Gate Control    */
    using ADC1      = regbits< type, 28,  1 >;  /**< ADC1 Clock Gate Control    */
    using ADC2      = regbits< type, 29,  1 >;  /**< ADC2 Clock Gate Control    */
    using ADC3      = regbits< type, 30,  1 >;  /**< ADC3 Clock Gate Control    */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available   */
  };

  /**
   * System Clock Gating Control Register 7
   */
  struct SCGC7
  : public reg< uint32_t, base_addr + 0x40, rw, 0xF >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0xF >;

    using FLEXBUS   = regbits< type,  0,  1 >;  /**< FlexBus Clock Gate Control  */
    using DMA       = regbits< type,  1,  1 >;  /**< DMA Clock Gate Control      */
    using MPU       = regbits< type,  2,  1 >;  /**< MPU Clock Gate Control      */
    using IEVT      = regbits< type,  3,  1 >;  /**< IEVT Clock Gate Control     */
    using RESERVED  = regbits< type,  4, 28 >;  /**< no description available    */
  };

  /**
   * System Clock Divider Register 1
   */
  struct CLKDIV1
  : public reg< uint32_t, base_addr + 0x44, rw, 0x100000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x100000 >;

    using RESERVED  = regbits< type,  0, 12 >;  /**< no description available      */
    using OUTDIV5   = regbits< type, 12,  2 >;  /**< Clock 5 output divider value  */
    using RESERVED  = regbits< type, 14,  2 >;  /**< no description available      */
    using OUTDIV4   = regbits< type, 16,  2 >;  /**< Clock 4 output divider value  */
    using RESERVED  = regbits< type, 18,  2 >;  /**< no description available      */
    using OUTDIV3   = regbits< type, 20,  2 >;  /**< Clock 3 output divider value  */
    using RESERVED  = regbits< type, 22,  2 >;  /**< no description available      */
    using OUTDIV2   = regbits< type, 24,  2 >;  /**< Clock 2 output divider value  */
    using RESERVED  = regbits< type, 26,  2 >;  /**< no description available      */
    using OUTDIV1   = regbits< type, 28,  2 >;  /**< Clock 1 output divider value  */
    using RESERVED  = regbits< type, 30,  2 >;  /**< no description available      */
  };

  /**
   * Unique Identification Register High
   */
  struct UIDH
  : public reg< uint32_t, base_addr + 0x54, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Mid-High
   */
  struct UIDMH
  : public reg< uint32_t, base_addr + 0x58, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Mid Low
   */
  struct UIDML
  : public reg< uint32_t, base_addr + 0x5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification (bits [63:32]  */
  };

  /**
   * Unique Identification Register Low
   */
  struct UIDL
  : public reg< uint32_t, base_addr + 0x60, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
