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
//  Import from CMSIS-SVD: "STMicro/STM32L15xxxA.svd"
//
//  name: STM32L15xxxA
//  version: 1.0
//  description: STM32L15xxxA
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RI_HPP_INCLUDED
#define ARCH_REG_RI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Routing interface
 */
struct RI
{
  static constexpr reg_addr_t base_addr = 0x40007c04;

  /**
   * RI input capture register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using IC4     = regbits< type, 21,  1 >;  /**< IC4                          */
    using IC3     = regbits< type, 20,  1 >;  /**< IC3                          */
    using IC2     = regbits< type, 19,  1 >;  /**< IC2                          */
    using IC1     = regbits< type, 18,  1 >;  /**< IC1                          */
    using TIM     = regbits< type, 16,  2 >;  /**< Timer select bits            */
    using IC4IOS  = regbits< type, 12,  4 >;  /**< Input capture 4 select bits  */
    using IC3IOS  = regbits< type,  8,  4 >;  /**< Input capture 3 select bits  */
    using IC2IOS  = regbits< type,  4,  4 >;  /**< Input capture 2 select bits  */
    using IC1IOS  = regbits< type,  0,  4 >;  /**< Input capture 1 select bits  */
  };

  /**
   * RI analog switches control register 1
   */
  struct ASCR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using SCM         = regbits< type, 31,  1 >;  /**< Switch control mode                                            */
    using CH30GR11_4  = regbits< type, 30,  1 >;  /**< Analog switch control                                          */
    using CH29GR11_3  = regbits< type, 29,  1 >;  /**< Analog switch control                                          */
    using CH28GR11_2  = regbits< type, 28,  1 >;  /**< Analog switch control                                          */
    using CH27GR11_1  = regbits< type, 27,  1 >;  /**< Analog switch control                                          */
    using VCOMP       = regbits< type, 26,  1 >;  /**< ADC analog switch selection for internal node to comparator 1  */
    using CH25        = regbits< type, 25,  1 >;  /**< Analog I/O switch control of channel CH25                      */
    using CH24        = regbits< type, 24,  1 >;  /**< Analog I/O switch control of channel CH24                      */
    using CH23        = regbits< type, 23,  1 >;  /**< Analog I/O switch control of channel CH23                      */
    using CH22        = regbits< type, 22,  1 >;  /**< Analog I/O switch control of channel CH22                      */
    using CH21GR7_4   = regbits< type, 21,  1 >;  /**< Analog switch control                                          */
    using CH20GR7_3   = regbits< type, 20,  1 >;  /**< Analog switch control                                          */
    using CH19GR7_2   = regbits< type, 19,  1 >;  /**< Analog switch control                                          */
    using CH18GR7_1   = regbits< type, 18,  1 >;  /**< Analog switch control                                          */
    using CH31GR7_1   = regbits< type, 16,  1 >;  /**< Analog switch control                                          */
    using CH15GR9_2   = regbits< type, 15,  1 >;  /**< Analog switch control                                          */
    using CH14GR9_1   = regbits< type, 14,  1 >;  /**< Analog switch control                                          */
    using CH13GR8_4   = regbits< type, 13,  1 >;  /**< Analog switch control                                          */
    using CH12GR8_3   = regbits< type, 12,  1 >;  /**< Analog switch control                                          */
    using CH11GR8_2   = regbits< type, 11,  1 >;  /**< Analog switch control                                          */
    using CH10GR8_1   = regbits< type, 10,  1 >;  /**< Analog switch control                                          */
    using CH9GR3_2    = regbits< type,  9,  1 >;  /**< Analog switch control                                          */
    using CH8GR3_1    = regbits< type,  8,  1 >;  /**< Analog switch control                                          */
    using CH7GR2_2    = regbits< type,  7,  1 >;  /**< Analog switch control                                          */
    using CH6GR2_1    = regbits< type,  6,  1 >;  /**< Analog switch control                                          */
    using COMP1_SW1   = regbits< type,  5,  1 >;  /**< Comparator 1 analog switch                                     */
    using CH31GR11_5  = regbits< type,  4,  1 >;  /**< Analog switch control                                          */
    using CH3GR1_4    = regbits< type,  3,  1 >;  /**< Analog switch control                                          */
    using CH2GR1_3    = regbits< type,  2,  1 >;  /**< Analog switch control                                          */
    using CH1GR1_2    = regbits< type,  1,  1 >;  /**< Analog switch control                                          */
    using CH0GR1_1    = regbits< type,  0,  1 >;  /**< Analog switch control                                          */
  };

  /**
   * RI analog switches control register 2
   */
  struct ASCR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using GR5_4   = regbits< type, 29,  1 >;  /**< GR5_4 analog switch control   */
    using GR6_4   = regbits< type, 28,  1 >;  /**< GR6_4 analog switch control   */
    using GR6_3   = regbits< type, 27,  1 >;  /**< GR6_3 analog switch control   */
    using GR7_7   = regbits< type, 26,  1 >;  /**< GR7_7 analog switch control   */
    using GR7_6   = regbits< type, 25,  1 >;  /**< GR7_6 analog switch control   */
    using GR7_5   = regbits< type, 24,  1 >;  /**< GR7_5 analog switch control   */
    using GR2_5   = regbits< type, 23,  1 >;  /**< GR2_5 analog switch control   */
    using GR2_4   = regbits< type, 22,  1 >;  /**< GR2_4 analog switch control   */
    using GR2_3   = regbits< type, 21,  1 >;  /**< GR2_3 analog switch control   */
    using GR9_4   = regbits< type, 20,  1 >;  /**< GR9_4 analog switch control   */
    using GR9_3   = regbits< type, 19,  1 >;  /**< GR9_3 analog switch control   */
    using GR3_5   = regbits< type, 18,  1 >;  /**< GR3_5 analog switch control   */
    using GR3_4   = regbits< type, 17,  1 >;  /**< GR3_4 analog switch control   */
    using GR3_3   = regbits< type, 16,  1 >;  /**< GR3_3 analog switch control   */
    using GR4_3   = regbits< type, 11,  1 >;  /**< GR4_3 analog switch control   */
    using GR4_2   = regbits< type, 10,  1 >;  /**< GR4_2 analog switch control   */
    using GR4_1   = regbits< type,  9,  1 >;  /**< GR4_1 analog switch control   */
    using GR5_3   = regbits< type,  8,  1 >;  /**< GR5_3 analog switch control   */
    using GR5_2   = regbits< type,  7,  1 >;  /**< GR5_2 analog switch control   */
    using GR5_1   = regbits< type,  6,  1 >;  /**< GR5_1 analog switch control   */
    using GR6_2   = regbits< type,  5,  1 >;  /**< GR6_2 analog switch control   */
    using GR6_1   = regbits< type,  4,  1 >;  /**< GR6_1 analog switch control   */
    using GR10_4  = regbits< type,  3,  1 >;  /**< GR10_4 analog switch control  */
    using GR10_3  = regbits< type,  2,  1 >;  /**< GR10_3 analog switch control  */
    using GR10_2  = regbits< type,  1,  1 >;  /**< GR10_2 analog switch control  */
    using GR10_1  = regbits< type,  0,  1 >;  /**< GR10_1 analog switch control  */
  };

  /**
   * RI hysteresis control register 1
   */
  struct HYSCR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using PB  = regbits< type, 16, 16 >;  /**< Port B hysteresis control on/off  */
    using PA  = regbits< type,  0, 16 >;  /**< Port A hysteresis control on/off  */
  };

  /**
   * RI hysteresis control register 2
   */
  struct HYSCR2
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using PD  = regbits< type, 16, 16 >;  /**< Port D hysteresis control on/off  */
    using PC  = regbits< type,  0, 16 >;  /**< Port C hysteresis control on/off  */
  };

  /**
   * RI hysteresis control register 3
   */
  struct HYSCR3
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using PF  = regbits< type, 16, 16 >;  /**< Port F hysteresis control on/off  */
    using PE  = regbits< type,  0, 16 >;  /**< Port E hysteresis control on/off  */
  };

  /**
   * Hysteresis control register
   */
  struct HYSCR4
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using PG  = regbits< type,  0, 16 >;  /**< Port G hysteresis control on/off  */
  };

  /**
   * Analog switch mode register
   */
  struct ASMR1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 16 >;  /**< Port A analog switch mode selection  */
  };

  /**
   * Channel mask register
   */
  struct CMR1
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 16 >;  /**< Port A channel masking  */
  };

  /**
   * Channel identification for capture register
   */
  struct CICR1
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 16 >;  /**< Port A channel identification for capture  */
  };

  /**
   * Analog switch mode register
   */
  struct ASMR2
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using PB  = regbits< type,  0, 16 >;  /**< Port B analog switch mode selection  */
  };

  /**
   * Channel mask register
   */
  struct CMR2
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using PB  = regbits< type,  0, 16 >;  /**< Port B channel masking  */
  };

  /**
   * Channel identification for capture register
   */
  struct CICR2
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using PB  = regbits< type,  0, 16 >;  /**< Port B channel identification for capture  */
  };

  /**
   * Analog switch mode register
   */
  struct ASMR3
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using PC  = regbits< type,  0, 16 >;  /**< Port C analog switch mode selection  */
  };

  /**
   * Channel mask register
   */
  struct CMR3
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using PC  = regbits< type,  0, 16 >;  /**< Port C channel masking  */
  };

  /**
   * Channel identification for capture register
   */
  struct CICR3
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using PC  = regbits< type,  0, 16 >;  /**< Port C channel identification for capture  */
  };

  /**
   * Analog switch mode register
   */
  struct ASMR4
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using PF  = regbits< type,  0, 16 >;  /**< Port F analog switch mode selection  */
  };

  /**
   * Channel mask register
   */
  struct CMR4
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using PF  = regbits< type,  0, 16 >;  /**< Port F channel masking  */
  };

  /**
   * Channel identification for capture register
   */
  struct CICR4
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using PF  = regbits< type,  0, 16 >;  /**< Port F channel identification for capture  */
  };

  /**
   * Analog switch mode register
   */
  struct ASMR5
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using PG  = regbits< type,  0, 16 >;  /**< Port G analog switch mode selection  */
  };

  /**
   * Channel mask register
   */
  struct CMR5
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using PG  = regbits< type,  0, 16 >;  /**< Port G channel masking  */
  };

  /**
   * Channel identification for capture register
   */
  struct CICR5
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using PG  = regbits< type,  0, 16 >;  /**< Port G channel identification for capture  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RI_HPP_INCLUDED
