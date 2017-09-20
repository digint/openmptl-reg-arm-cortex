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
//  Import from CMSIS-SVD: "STMicro/STM32F303x.svd"
//
//  name: STM32F303x
//  version: 1.0
//  description: STM32F303x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EXTI_HPP_INCLUDED
#define ARCH_REG_EXTI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * External interrupt/event controller
 */
struct EXTI
{
  static constexpr reg_addr_t base_addr = 0x40010400;

  /**
   * Interrupt mask register
   */
  struct IMR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x1F800000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x1F800000 >;

    using MR0   = regbits< type,  0,  1 >;  /**< Interrupt Mask on line 0   */
    using MR1   = regbits< type,  1,  1 >;  /**< Interrupt Mask on line 1   */
    using MR2   = regbits< type,  2,  1 >;  /**< Interrupt Mask on line 2   */
    using MR3   = regbits< type,  3,  1 >;  /**< Interrupt Mask on line 3   */
    using MR4   = regbits< type,  4,  1 >;  /**< Interrupt Mask on line 4   */
    using MR5   = regbits< type,  5,  1 >;  /**< Interrupt Mask on line 5   */
    using MR6   = regbits< type,  6,  1 >;  /**< Interrupt Mask on line 6   */
    using MR7   = regbits< type,  7,  1 >;  /**< Interrupt Mask on line 7   */
    using MR8   = regbits< type,  8,  1 >;  /**< Interrupt Mask on line 8   */
    using MR9   = regbits< type,  9,  1 >;  /**< Interrupt Mask on line 9   */
    using MR10  = regbits< type, 10,  1 >;  /**< Interrupt Mask on line 10  */
    using MR11  = regbits< type, 11,  1 >;  /**< Interrupt Mask on line 11  */
    using MR12  = regbits< type, 12,  1 >;  /**< Interrupt Mask on line 12  */
    using MR13  = regbits< type, 13,  1 >;  /**< Interrupt Mask on line 13  */
    using MR14  = regbits< type, 14,  1 >;  /**< Interrupt Mask on line 14  */
    using MR15  = regbits< type, 15,  1 >;  /**< Interrupt Mask on line 15  */
    using MR16  = regbits< type, 16,  1 >;  /**< Interrupt Mask on line 16  */
    using MR17  = regbits< type, 17,  1 >;  /**< Interrupt Mask on line 17  */
    using MR18  = regbits< type, 18,  1 >;  /**< Interrupt Mask on line 18  */
    using MR19  = regbits< type, 19,  1 >;  /**< Interrupt Mask on line 19  */
    using MR20  = regbits< type, 20,  1 >;  /**< Interrupt Mask on line 20  */
    using MR21  = regbits< type, 21,  1 >;  /**< Interrupt Mask on line 21  */
    using MR22  = regbits< type, 22,  1 >;  /**< Interrupt Mask on line 22  */
    using MR23  = regbits< type, 23,  1 >;  /**< Interrupt Mask on line 23  */
    using MR24  = regbits< type, 24,  1 >;  /**< Interrupt Mask on line 24  */
    using MR25  = regbits< type, 25,  1 >;  /**< Interrupt Mask on line 25  */
    using MR26  = regbits< type, 26,  1 >;  /**< Interrupt Mask on line 26  */
    using MR27  = regbits< type, 27,  1 >;  /**< Interrupt Mask on line 27  */
    using MR28  = regbits< type, 28,  1 >;  /**< Interrupt Mask on line 28  */
    using MR29  = regbits< type, 29,  1 >;  /**< Interrupt Mask on line 29  */
    using MR30  = regbits< type, 30,  1 >;  /**< Interrupt Mask on line 30  */
    using MR31  = regbits< type, 31,  1 >;  /**< Interrupt Mask on line 31  */
  };

  /**
   * Event mask register
   */
  struct EMR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using MR0   = regbits< type,  0,  1 >;  /**< Event Mask on line 0   */
    using MR1   = regbits< type,  1,  1 >;  /**< Event Mask on line 1   */
    using MR2   = regbits< type,  2,  1 >;  /**< Event Mask on line 2   */
    using MR3   = regbits< type,  3,  1 >;  /**< Event Mask on line 3   */
    using MR4   = regbits< type,  4,  1 >;  /**< Event Mask on line 4   */
    using MR5   = regbits< type,  5,  1 >;  /**< Event Mask on line 5   */
    using MR6   = regbits< type,  6,  1 >;  /**< Event Mask on line 6   */
    using MR7   = regbits< type,  7,  1 >;  /**< Event Mask on line 7   */
    using MR8   = regbits< type,  8,  1 >;  /**< Event Mask on line 8   */
    using MR9   = regbits< type,  9,  1 >;  /**< Event Mask on line 9   */
    using MR10  = regbits< type, 10,  1 >;  /**< Event Mask on line 10  */
    using MR11  = regbits< type, 11,  1 >;  /**< Event Mask on line 11  */
    using MR12  = regbits< type, 12,  1 >;  /**< Event Mask on line 12  */
    using MR13  = regbits< type, 13,  1 >;  /**< Event Mask on line 13  */
    using MR14  = regbits< type, 14,  1 >;  /**< Event Mask on line 14  */
    using MR15  = regbits< type, 15,  1 >;  /**< Event Mask on line 15  */
    using MR16  = regbits< type, 16,  1 >;  /**< Event Mask on line 16  */
    using MR17  = regbits< type, 17,  1 >;  /**< Event Mask on line 17  */
    using MR18  = regbits< type, 18,  1 >;  /**< Event Mask on line 18  */
    using MR19  = regbits< type, 19,  1 >;  /**< Event Mask on line 19  */
    using MR20  = regbits< type, 20,  1 >;  /**< Event Mask on line 20  */
    using MR21  = regbits< type, 21,  1 >;  /**< Event Mask on line 21  */
    using MR22  = regbits< type, 22,  1 >;  /**< Event Mask on line 22  */
    using MR23  = regbits< type, 23,  1 >;  /**< Event Mask on line 23  */
    using MR24  = regbits< type, 24,  1 >;  /**< Event Mask on line 24  */
    using MR25  = regbits< type, 25,  1 >;  /**< Event Mask on line 25  */
    using MR26  = regbits< type, 26,  1 >;  /**< Event Mask on line 26  */
    using MR27  = regbits< type, 27,  1 >;  /**< Event Mask on line 27  */
    using MR28  = regbits< type, 28,  1 >;  /**< Event Mask on line 28  */
    using MR29  = regbits< type, 29,  1 >;  /**< Event Mask on line 29  */
    using MR30  = regbits< type, 30,  1 >;  /**< Event Mask on line 30  */
    using MR31  = regbits< type, 31,  1 >;  /**< Event Mask on line 31  */
  };

  /**
   * Rising Trigger selection register
   */
  struct RTSR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using TR0   = regbits< type,  0,  1 >;  /**< Rising trigger event configuration of line 0   */
    using TR1   = regbits< type,  1,  1 >;  /**< Rising trigger event configuration of line 1   */
    using TR2   = regbits< type,  2,  1 >;  /**< Rising trigger event configuration of line 2   */
    using TR3   = regbits< type,  3,  1 >;  /**< Rising trigger event configuration of line 3   */
    using TR4   = regbits< type,  4,  1 >;  /**< Rising trigger event configuration of line 4   */
    using TR5   = regbits< type,  5,  1 >;  /**< Rising trigger event configuration of line 5   */
    using TR6   = regbits< type,  6,  1 >;  /**< Rising trigger event configuration of line 6   */
    using TR7   = regbits< type,  7,  1 >;  /**< Rising trigger event configuration of line 7   */
    using TR8   = regbits< type,  8,  1 >;  /**< Rising trigger event configuration of line 8   */
    using TR9   = regbits< type,  9,  1 >;  /**< Rising trigger event configuration of line 9   */
    using TR10  = regbits< type, 10,  1 >;  /**< Rising trigger event configuration of line 10  */
    using TR11  = regbits< type, 11,  1 >;  /**< Rising trigger event configuration of line 11  */
    using TR12  = regbits< type, 12,  1 >;  /**< Rising trigger event configuration of line 12  */
    using TR13  = regbits< type, 13,  1 >;  /**< Rising trigger event configuration of line 13  */
    using TR14  = regbits< type, 14,  1 >;  /**< Rising trigger event configuration of line 14  */
    using TR15  = regbits< type, 15,  1 >;  /**< Rising trigger event configuration of line 15  */
    using TR16  = regbits< type, 16,  1 >;  /**< Rising trigger event configuration of line 16  */
    using TR17  = regbits< type, 17,  1 >;  /**< Rising trigger event configuration of line 17  */
    using TR18  = regbits< type, 18,  1 >;  /**< Rising trigger event configuration of line 18  */
    using TR19  = regbits< type, 19,  1 >;  /**< Rising trigger event configuration of line 19  */
    using TR20  = regbits< type, 20,  1 >;  /**< Rising trigger event configuration of line 20  */
    using TR21  = regbits< type, 21,  1 >;  /**< Rising trigger event configuration of line 21  */
    using TR22  = regbits< type, 22,  1 >;  /**< Rising trigger event configuration of line 22  */
    using TR29  = regbits< type, 29,  1 >;  /**< Rising trigger event configuration of line 29  */
    using TR30  = regbits< type, 30,  1 >;  /**< Rising trigger event configuration of line 30  */
    using TR31  = regbits< type, 31,  1 >;  /**< Rising trigger event configuration of line 31  */
  };

  /**
   * Falling Trigger selection register
   */
  struct FTSR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using TR0   = regbits< type,  0,  1 >;  /**< Falling trigger event configuration of line 0    */
    using TR1   = regbits< type,  1,  1 >;  /**< Falling trigger event configuration of line 1    */
    using TR2   = regbits< type,  2,  1 >;  /**< Falling trigger event configuration of line 2    */
    using TR3   = regbits< type,  3,  1 >;  /**< Falling trigger event configuration of line 3    */
    using TR4   = regbits< type,  4,  1 >;  /**< Falling trigger event configuration of line 4    */
    using TR5   = regbits< type,  5,  1 >;  /**< Falling trigger event configuration of line 5    */
    using TR6   = regbits< type,  6,  1 >;  /**< Falling trigger event configuration of line 6    */
    using TR7   = regbits< type,  7,  1 >;  /**< Falling trigger event configuration of line 7    */
    using TR8   = regbits< type,  8,  1 >;  /**< Falling trigger event configuration of line 8    */
    using TR9   = regbits< type,  9,  1 >;  /**< Falling trigger event configuration of line 9    */
    using TR10  = regbits< type, 10,  1 >;  /**< Falling trigger event configuration of line 10   */
    using TR11  = regbits< type, 11,  1 >;  /**< Falling trigger event configuration of line 11   */
    using TR12  = regbits< type, 12,  1 >;  /**< Falling trigger event configuration of line 12   */
    using TR13  = regbits< type, 13,  1 >;  /**< Falling trigger event configuration of line 13   */
    using TR14  = regbits< type, 14,  1 >;  /**< Falling trigger event configuration of line 14   */
    using TR15  = regbits< type, 15,  1 >;  /**< Falling trigger event configuration of line 15   */
    using TR16  = regbits< type, 16,  1 >;  /**< Falling trigger event configuration of line 16   */
    using TR17  = regbits< type, 17,  1 >;  /**< Falling trigger event configuration of line 17   */
    using TR18  = regbits< type, 18,  1 >;  /**< Falling trigger event configuration of line 18   */
    using TR19  = regbits< type, 19,  1 >;  /**< Falling trigger event configuration of line 19   */
    using TR20  = regbits< type, 20,  1 >;  /**< Falling trigger event configuration of line 20   */
    using TR21  = regbits< type, 21,  1 >;  /**< Falling trigger event configuration of line 21   */
    using TR22  = regbits< type, 22,  1 >;  /**< Falling trigger event configuration of line 22   */
    using TR29  = regbits< type, 29,  1 >;  /**< Falling trigger event configuration of line 29   */
    using TR30  = regbits< type, 30,  1 >;  /**< Falling trigger event configuration of line 30.  */
    using TR31  = regbits< type, 31,  1 >;  /**< Falling trigger event configuration of line 31   */
  };

  /**
   * Software interrupt event register
   */
  struct SWIER1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using SWIER0   = regbits< type,  0,  1 >;  /**< Software Interrupt on line 0    */
    // fixme: Field name equals parent register name: SWIER1
    using SWIER1_  = regbits< type,  1,  1 >;  /**< Software Interrupt on line 1    */
    using SWIER2   = regbits< type,  2,  1 >;  /**< Software Interrupt on line 2    */
    using SWIER3   = regbits< type,  3,  1 >;  /**< Software Interrupt on line 3    */
    using SWIER4   = regbits< type,  4,  1 >;  /**< Software Interrupt on line 4    */
    using SWIER5   = regbits< type,  5,  1 >;  /**< Software Interrupt on line 5    */
    using SWIER6   = regbits< type,  6,  1 >;  /**< Software Interrupt on line 6    */
    using SWIER7   = regbits< type,  7,  1 >;  /**< Software Interrupt on line 7    */
    using SWIER8   = regbits< type,  8,  1 >;  /**< Software Interrupt on line 8    */
    using SWIER9   = regbits< type,  9,  1 >;  /**< Software Interrupt on line 9    */
    using SWIER10  = regbits< type, 10,  1 >;  /**< Software Interrupt on line 10   */
    using SWIER11  = regbits< type, 11,  1 >;  /**< Software Interrupt on line 11   */
    using SWIER12  = regbits< type, 12,  1 >;  /**< Software Interrupt on line 12   */
    using SWIER13  = regbits< type, 13,  1 >;  /**< Software Interrupt on line 13   */
    using SWIER14  = regbits< type, 14,  1 >;  /**< Software Interrupt on line 14   */
    using SWIER15  = regbits< type, 15,  1 >;  /**< Software Interrupt on line 15   */
    using SWIER16  = regbits< type, 16,  1 >;  /**< Software Interrupt on line 16   */
    using SWIER17  = regbits< type, 17,  1 >;  /**< Software Interrupt on line 17   */
    using SWIER18  = regbits< type, 18,  1 >;  /**< Software Interrupt on line 18   */
    using SWIER19  = regbits< type, 19,  1 >;  /**< Software Interrupt on line 19   */
    using SWIER20  = regbits< type, 20,  1 >;  /**< Software Interrupt on line 20   */
    using SWIER21  = regbits< type, 21,  1 >;  /**< Software Interrupt on line 21   */
    using SWIER22  = regbits< type, 22,  1 >;  /**< Software Interrupt on line 22   */
    using SWIER29  = regbits< type, 29,  1 >;  /**< Software Interrupt on line 29   */
    using SWIER30  = regbits< type, 30,  1 >;  /**< Software Interrupt on line 309  */
    using SWIER31  = regbits< type, 31,  1 >;  /**< Software Interrupt on line 319  */
  };

  /**
   * Pending register
   */
  struct PR1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using PR0   = regbits< type,  0,  1 >;  /**< Pending bit 0   */
    // fixme: Field name equals parent register name: PR1
    using PR1_  = regbits< type,  1,  1 >;  /**< Pending bit 1   */
    using PR2   = regbits< type,  2,  1 >;  /**< Pending bit 2   */
    using PR3   = regbits< type,  3,  1 >;  /**< Pending bit 3   */
    using PR4   = regbits< type,  4,  1 >;  /**< Pending bit 4   */
    using PR5   = regbits< type,  5,  1 >;  /**< Pending bit 5   */
    using PR6   = regbits< type,  6,  1 >;  /**< Pending bit 6   */
    using PR7   = regbits< type,  7,  1 >;  /**< Pending bit 7   */
    using PR8   = regbits< type,  8,  1 >;  /**< Pending bit 8   */
    using PR9   = regbits< type,  9,  1 >;  /**< Pending bit 9   */
    using PR10  = regbits< type, 10,  1 >;  /**< Pending bit 10  */
    using PR11  = regbits< type, 11,  1 >;  /**< Pending bit 11  */
    using PR12  = regbits< type, 12,  1 >;  /**< Pending bit 12  */
    using PR13  = regbits< type, 13,  1 >;  /**< Pending bit 13  */
    using PR14  = regbits< type, 14,  1 >;  /**< Pending bit 14  */
    using PR15  = regbits< type, 15,  1 >;  /**< Pending bit 15  */
    using PR16  = regbits< type, 16,  1 >;  /**< Pending bit 16  */
    using PR17  = regbits< type, 17,  1 >;  /**< Pending bit 17  */
    using PR18  = regbits< type, 18,  1 >;  /**< Pending bit 18  */
    using PR19  = regbits< type, 19,  1 >;  /**< Pending bit 19  */
    using PR20  = regbits< type, 20,  1 >;  /**< Pending bit 20  */
    using PR21  = regbits< type, 21,  1 >;  /**< Pending bit 21  */
    using PR22  = regbits< type, 22,  1 >;  /**< Pending bit 22  */
    using PR29  = regbits< type, 29,  1 >;  /**< Pending bit 29  */
    using PR30  = regbits< type, 30,  1 >;  /**< Pending bit 30  */
    using PR31  = regbits< type, 31,  1 >;  /**< Pending bit 31  */
  };

  /**
   * Interrupt mask register
   */
  struct IMR2
  : public reg< uint32_t, base_addr + 0x18, rw, 0xFFFFFFFC >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0xFFFFFFFC >;

    using MR32  = regbits< type,  0,  1 >;  /**< Interrupt Mask on external/internal line 32  */
    using MR33  = regbits< type,  1,  1 >;  /**< Interrupt Mask on external/internal line 33  */
    using MR34  = regbits< type,  2,  1 >;  /**< Interrupt Mask on external/internal line 34  */
    using MR35  = regbits< type,  3,  1 >;  /**< Interrupt Mask on external/internal line 35  */
  };

  /**
   * Event mask register
   */
  struct EMR2
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using MR32  = regbits< type,  0,  1 >;  /**< Event mask on external/internal line 32  */
    using MR33  = regbits< type,  1,  1 >;  /**< Event mask on external/internal line 33  */
    using MR34  = regbits< type,  2,  1 >;  /**< Event mask on external/internal line 34  */
    using MR35  = regbits< type,  3,  1 >;  /**< Event mask on external/internal line 35  */
  };

  /**
   * Rising Trigger selection register
   */
  struct RTSR2
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using TR32  = regbits< type,  0,  1 >;  /**< Rising trigger event configuration bit of line 32  */
    using TR33  = regbits< type,  1,  1 >;  /**< Rising trigger event configuration bit of line 33  */
  };

  /**
   * Falling Trigger selection register
   */
  struct FTSR2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using TR32  = regbits< type,  0,  1 >;  /**< Falling trigger event configuration bit of line 32  */
    using TR33  = regbits< type,  1,  1 >;  /**< Falling trigger event configuration bit of line 33  */
  };

  /**
   * Software interrupt event register
   */
  struct SWIER2
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using SWIER32  = regbits< type,  0,  1 >;  /**< Software interrupt on line 32  */
    using SWIER33  = regbits< type,  1,  1 >;  /**< Software interrupt on line 33  */
  };

  /**
   * Pending register
   */
  struct PR2
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using PR32  = regbits< type,  0,  1 >;  /**< Pending bit on line 32  */
    using PR33  = regbits< type,  1,  1 >;  /**< Pending bit on line 33  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXTI_HPP_INCLUDED
