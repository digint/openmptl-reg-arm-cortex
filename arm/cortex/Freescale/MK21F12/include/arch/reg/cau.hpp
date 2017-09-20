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
//  Import from CMSIS-SVD: "Freescale/MK21F12.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK21F12
//  series: Kinetis_K
//  version: 1.6
//  description: MK21F12 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CAU_HPP_INCLUDED
#define ARCH_REG_CAU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Memory Mapped Cryptographic Acceleration Unit (MMCAU)
 */
struct CAU
{
  static constexpr reg_addr_t base_addr = 0xe0081000;

  /**
   * Direct access register 0
   */
  struct CAU_DIRECT0
  : public reg< uint32_t, base_addr + 0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT0
    using CAU_DIRECT0_ = regbits< type,  0, 32 >;  /**< Direct register 0  */
  };

  /**
   * Direct access register 1
   */
  struct CAU_DIRECT1
  : public reg< uint32_t, base_addr + 0x4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT1
    using CAU_DIRECT1_ = regbits< type,  0, 32 >;  /**< Direct register 1  */
  };

  /**
   * Direct access register 2
   */
  struct CAU_DIRECT2
  : public reg< uint32_t, base_addr + 0x8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT2
    using CAU_DIRECT2_ = regbits< type,  0, 32 >;  /**< Direct register 2  */
  };

  /**
   * Direct access register 3
   */
  struct CAU_DIRECT3
  : public reg< uint32_t, base_addr + 0xc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT3
    using CAU_DIRECT3_ = regbits< type,  0, 32 >;  /**< Direct register 3  */
  };

  /**
   * Direct access register 4
   */
  struct CAU_DIRECT4
  : public reg< uint32_t, base_addr + 0x10, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT4
    using CAU_DIRECT4_ = regbits< type,  0, 32 >;  /**< Direct register 4  */
  };

  /**
   * Direct access register 5
   */
  struct CAU_DIRECT5
  : public reg< uint32_t, base_addr + 0x14, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT5
    using CAU_DIRECT5_ = regbits< type,  0, 32 >;  /**< Direct register 5  */
  };

  /**
   * Direct access register 6
   */
  struct CAU_DIRECT6
  : public reg< uint32_t, base_addr + 0x18, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT6
    using CAU_DIRECT6_ = regbits< type,  0, 32 >;  /**< Direct register 6  */
  };

  /**
   * Direct access register 7
   */
  struct CAU_DIRECT7
  : public reg< uint32_t, base_addr + 0x1c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT7
    using CAU_DIRECT7_ = regbits< type,  0, 32 >;  /**< Direct register 7  */
  };

  /**
   * Direct access register 8
   */
  struct CAU_DIRECT8
  : public reg< uint32_t, base_addr + 0x20, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT8
    using CAU_DIRECT8_ = regbits< type,  0, 32 >;  /**< Direct register 8  */
  };

  /**
   * Direct access register 9
   */
  struct CAU_DIRECT9
  : public reg< uint32_t, base_addr + 0x24, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT9
    using CAU_DIRECT9_ = regbits< type,  0, 32 >;  /**< Direct register 9  */
  };

  /**
   * Direct access register 10
   */
  struct CAU_DIRECT10
  : public reg< uint32_t, base_addr + 0x28, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT10
    using CAU_DIRECT10_ = regbits< type,  0, 32 >;  /**< Direct register 10  */
  };

  /**
   * Direct access register 11
   */
  struct CAU_DIRECT11
  : public reg< uint32_t, base_addr + 0x2c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT11
    using CAU_DIRECT11_ = regbits< type,  0, 32 >;  /**< Direct register 11  */
  };

  /**
   * Direct access register 12
   */
  struct CAU_DIRECT12
  : public reg< uint32_t, base_addr + 0x30, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT12
    using CAU_DIRECT12_ = regbits< type,  0, 32 >;  /**< Direct register 12  */
  };

  /**
   * Direct access register 13
   */
  struct CAU_DIRECT13
  : public reg< uint32_t, base_addr + 0x34, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT13
    using CAU_DIRECT13_ = regbits< type,  0, 32 >;  /**< Direct register 13  */
  };

  /**
   * Direct access register 14
   */
  struct CAU_DIRECT14
  : public reg< uint32_t, base_addr + 0x38, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT14
    using CAU_DIRECT14_ = regbits< type,  0, 32 >;  /**< Direct register 14  */
  };

  /**
   * Direct access register 15
   */
  struct CAU_DIRECT15
  : public reg< uint32_t, base_addr + 0x3c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, wo, 0 >;

    // fixme: Field name equals parent register name: CAU_DIRECT15
    using CAU_DIRECT15_ = regbits< type,  0, 32 >;  /**< Direct register 15  */
  };

  /**
   * Status register - Load Register command
   */
  struct CAU_LDR_CASR
  : public reg< uint32_t, base_addr + 0x840, wo, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x840, wo, 0x20000000 >;

    using IC   = regbits< type,  0,  1 >;  /**< no description available  */
    using DPE  = regbits< type,  1,  1 >;  /**< no description available  */
    using VER  = regbits< type, 28,  4 >;  /**< CAU version               */
  };

  /**
   * Accumulator register - Load Register command
   */
  struct CAU_LDR_CAA
  : public reg< uint32_t, base_addr + 0x844, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x844, wo, 0 >;

    using ACC  = regbits< type,  0, 32 >;  /**< ACC  */
  };

  /**
   * General Purpose Register 0 - Load Register command
   */
  struct CAU_LDR_CA0
  : public reg< uint32_t, base_addr + 0x848, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x848, wo, 0 >;

    using CA0  = regbits< type,  0, 32 >;  /**< CA0  */
  };

  /**
   * General Purpose Register 1 - Load Register command
   */
  struct CAU_LDR_CA1
  : public reg< uint32_t, base_addr + 0x84c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84c, wo, 0 >;

    using CA1  = regbits< type,  0, 32 >;  /**< CA1  */
  };

  /**
   * General Purpose Register 2 - Load Register command
   */
  struct CAU_LDR_CA2
  : public reg< uint32_t, base_addr + 0x850, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x850, wo, 0 >;

    using CA2  = regbits< type,  0, 32 >;  /**< CA2  */
  };

  /**
   * General Purpose Register 3 - Load Register command
   */
  struct CAU_LDR_CA3
  : public reg< uint32_t, base_addr + 0x854, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x854, wo, 0 >;

    using CA3  = regbits< type,  0, 32 >;  /**< CA3  */
  };

  /**
   * General Purpose Register 4 - Load Register command
   */
  struct CAU_LDR_CA4
  : public reg< uint32_t, base_addr + 0x858, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x858, wo, 0 >;

    using CA4  = regbits< type,  0, 32 >;  /**< CA4  */
  };

  /**
   * General Purpose Register 5 - Load Register command
   */
  struct CAU_LDR_CA5
  : public reg< uint32_t, base_addr + 0x85c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x85c, wo, 0 >;

    using CA5  = regbits< type,  0, 32 >;  /**< CA5  */
  };

  /**
   * General Purpose Register 6 - Load Register command
   */
  struct CAU_LDR_CA6
  : public reg< uint32_t, base_addr + 0x860, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x860, wo, 0 >;

    using CA6  = regbits< type,  0, 32 >;  /**< CA6  */
  };

  /**
   * General Purpose Register 7 - Load Register command
   */
  struct CAU_LDR_CA7
  : public reg< uint32_t, base_addr + 0x864, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x864, wo, 0 >;

    using CA7  = regbits< type,  0, 32 >;  /**< CA7  */
  };

  /**
   * General Purpose Register 8 - Load Register command
   */
  struct CAU_LDR_CA8
  : public reg< uint32_t, base_addr + 0x868, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x868, wo, 0 >;

    using CA8  = regbits< type,  0, 32 >;  /**< CA8  */
  };

  /**
   * Status register - Store Register command
   */
  struct CAU_STR_CASR
  : public reg< uint32_t, base_addr + 0x880, ro, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x880, ro, 0x20000000 >;

    using IC   = regbits< type,  0,  1 >;  /**< no description available  */
    using DPE  = regbits< type,  1,  1 >;  /**< no description available  */
    using VER  = regbits< type, 28,  4 >;  /**< CAU version               */
  };

  /**
   * Accumulator register - Store Register command
   */
  struct CAU_STR_CAA
  : public reg< uint32_t, base_addr + 0x884, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x884, ro, 0 >;

    using ACC  = regbits< type,  0, 32 >;  /**< ACC  */
  };

  /**
   * General Purpose Register 0 - Store Register command
   */
  struct CAU_STR_CA0
  : public reg< uint32_t, base_addr + 0x888, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x888, ro, 0 >;

    using CA0  = regbits< type,  0, 32 >;  /**< CA0  */
  };

  /**
   * General Purpose Register 1 - Store Register command
   */
  struct CAU_STR_CA1
  : public reg< uint32_t, base_addr + 0x88c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88c, ro, 0 >;

    using CA1  = regbits< type,  0, 32 >;  /**< CA1  */
  };

  /**
   * General Purpose Register 2 - Store Register command
   */
  struct CAU_STR_CA2
  : public reg< uint32_t, base_addr + 0x890, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x890, ro, 0 >;

    using CA2  = regbits< type,  0, 32 >;  /**< CA2  */
  };

  /**
   * General Purpose Register 3 - Store Register command
   */
  struct CAU_STR_CA3
  : public reg< uint32_t, base_addr + 0x894, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x894, ro, 0 >;

    using CA3  = regbits< type,  0, 32 >;  /**< CA3  */
  };

  /**
   * General Purpose Register 4 - Store Register command
   */
  struct CAU_STR_CA4
  : public reg< uint32_t, base_addr + 0x898, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x898, ro, 0 >;

    using CA4  = regbits< type,  0, 32 >;  /**< CA4  */
  };

  /**
   * General Purpose Register 5 - Store Register command
   */
  struct CAU_STR_CA5
  : public reg< uint32_t, base_addr + 0x89c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x89c, ro, 0 >;

    using CA5  = regbits< type,  0, 32 >;  /**< CA5  */
  };

  /**
   * General Purpose Register 6 - Store Register command
   */
  struct CAU_STR_CA6
  : public reg< uint32_t, base_addr + 0x8a0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8a0, ro, 0 >;

    using CA6  = regbits< type,  0, 32 >;  /**< CA6  */
  };

  /**
   * General Purpose Register 7 - Store Register command
   */
  struct CAU_STR_CA7
  : public reg< uint32_t, base_addr + 0x8a4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8a4, ro, 0 >;

    using CA7  = regbits< type,  0, 32 >;  /**< CA7  */
  };

  /**
   * General Purpose Register 8 - Store Register command
   */
  struct CAU_STR_CA8
  : public reg< uint32_t, base_addr + 0x8a8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8a8, ro, 0 >;

    using CA8  = regbits< type,  0, 32 >;  /**< CA8  */
  };

  /**
   * Status register - Add Register command
   */
  struct CAU_ADR_CASR
  : public reg< uint32_t, base_addr + 0x8c0, wo, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c0, wo, 0x20000000 >;

    using IC   = regbits< type,  0,  1 >;  /**< no description available  */
    using DPE  = regbits< type,  1,  1 >;  /**< no description available  */
    using VER  = regbits< type, 28,  4 >;  /**< CAU version               */
  };

  /**
   * Accumulator register - Add to register command
   */
  struct CAU_ADR_CAA
  : public reg< uint32_t, base_addr + 0x8c4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c4, wo, 0 >;

    using ACC  = regbits< type,  0, 32 >;  /**< ACC  */
  };

  /**
   * General Purpose Register 0 - Add to register command
   */
  struct CAU_ADR_CA0
  : public reg< uint32_t, base_addr + 0x8c8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c8, wo, 0 >;

    using CA0  = regbits< type,  0, 32 >;  /**< CA0  */
  };

  /**
   * General Purpose Register 1 - Add to register command
   */
  struct CAU_ADR_CA1
  : public reg< uint32_t, base_addr + 0x8cc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8cc, wo, 0 >;

    using CA1  = regbits< type,  0, 32 >;  /**< CA1  */
  };

  /**
   * General Purpose Register 2 - Add to register command
   */
  struct CAU_ADR_CA2
  : public reg< uint32_t, base_addr + 0x8d0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8d0, wo, 0 >;

    using CA2  = regbits< type,  0, 32 >;  /**< CA2  */
  };

  /**
   * General Purpose Register 3 - Add to register command
   */
  struct CAU_ADR_CA3
  : public reg< uint32_t, base_addr + 0x8d4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8d4, wo, 0 >;

    using CA3  = regbits< type,  0, 32 >;  /**< CA3  */
  };

  /**
   * General Purpose Register 4 - Add to register command
   */
  struct CAU_ADR_CA4
  : public reg< uint32_t, base_addr + 0x8d8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8d8, wo, 0 >;

    using CA4  = regbits< type,  0, 32 >;  /**< CA4  */
  };

  /**
   * General Purpose Register 5 - Add to register command
   */
  struct CAU_ADR_CA5
  : public reg< uint32_t, base_addr + 0x8dc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8dc, wo, 0 >;

    using CA5  = regbits< type,  0, 32 >;  /**< CA5  */
  };

  /**
   * General Purpose Register 6 - Add to register command
   */
  struct CAU_ADR_CA6
  : public reg< uint32_t, base_addr + 0x8e0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8e0, wo, 0 >;

    using CA6  = regbits< type,  0, 32 >;  /**< CA6  */
  };

  /**
   * General Purpose Register 7 - Add to register command
   */
  struct CAU_ADR_CA7
  : public reg< uint32_t, base_addr + 0x8e4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8e4, wo, 0 >;

    using CA7  = regbits< type,  0, 32 >;  /**< CA7  */
  };

  /**
   * General Purpose Register 8 - Add to register command
   */
  struct CAU_ADR_CA8
  : public reg< uint32_t, base_addr + 0x8e8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8e8, wo, 0 >;

    using CA8  = regbits< type,  0, 32 >;  /**< CA8  */
  };

  /**
   * Status register - Reverse and Add to Register command
   */
  struct CAU_RADR_CASR
  : public reg< uint32_t, base_addr + 0x900, wo, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x900, wo, 0x20000000 >;

    using IC   = regbits< type,  0,  1 >;  /**< no description available  */
    using DPE  = regbits< type,  1,  1 >;  /**< no description available  */
    using VER  = regbits< type, 28,  4 >;  /**< CAU version               */
  };

  /**
   * Accumulator register - Reverse and Add to Register command
   */
  struct CAU_RADR_CAA
  : public reg< uint32_t, base_addr + 0x904, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x904, wo, 0 >;

    using ACC  = regbits< type,  0, 32 >;  /**< ACC  */
  };

  /**
   * General Purpose Register 0 - Reverse and Add to Register command
   */
  struct CAU_RADR_CA0
  : public reg< uint32_t, base_addr + 0x908, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x908, wo, 0 >;

    using CA0  = regbits< type,  0, 32 >;  /**< CA0  */
  };

  /**
   * General Purpose Register 1 - Reverse and Add to Register command
   */
  struct CAU_RADR_CA1
  : public reg< uint32_t, base_addr + 0x90c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90c, wo, 0 >;

    using CA1  = regbits< type,  0, 32 >;  /**< CA1  */
  };

  /**
   * General Purpose Register 2 - Reverse and Add to Register command
   */
  struct CAU_RADR_CA2
  : public reg< uint32_t, base_addr + 0x910, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x910, wo, 0 >;

    using CA2  = regbits< type,  0, 32 >;  /**< CA2  */
  };

  /**
   * General Purpose Register 3 - Reverse and Add to Register command
   */
  struct CAU_RADR_CA3
  : public reg< uint32_t, base_addr + 0x914, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x914, wo, 0 >;

    using CA3  = regbits< type,  0, 32 >;  /**< CA3  */
  };

  /**
   * General Purpose Register 4 - Reverse and Add to Register command
   */
  struct CAU_RADR_CA4
  : public reg< uint32_t, base_addr + 0x918, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x918, wo, 0 >;

    using CA4  = regbits< type,  0, 32 >;  /**< CA4  */
  };

  /**
   * General Purpose Register 5 - Reverse and Add to Register command
   */
  struct CAU_RADR_CA5
  : public reg< uint32_t, base_addr + 0x91c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x91c, wo, 0 >;

    using CA5  = regbits< type,  0, 32 >;  /**< CA5  */
  };

  /**
   * General Purpose Register 6 - Reverse and Add to Register command
   */
  struct CAU_RADR_CA6
  : public reg< uint32_t, base_addr + 0x920, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x920, wo, 0 >;

    using CA6  = regbits< type,  0, 32 >;  /**< CA6  */
  };

  /**
   * General Purpose Register 7 - Reverse and Add to Register command
   */
  struct CAU_RADR_CA7
  : public reg< uint32_t, base_addr + 0x924, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x924, wo, 0 >;

    using CA7  = regbits< type,  0, 32 >;  /**< CA7  */
  };

  /**
   * General Purpose Register 8 - Reverse and Add to Register command
   */
  struct CAU_RADR_CA8
  : public reg< uint32_t, base_addr + 0x928, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x928, wo, 0 >;

    using CA8  = regbits< type,  0, 32 >;  /**< CA8  */
  };

  /**
   * Status register - Exclusive Or command
   */
  struct CAU_XOR_CASR
  : public reg< uint32_t, base_addr + 0x980, wo, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x980, wo, 0x20000000 >;

    using IC   = regbits< type,  0,  1 >;  /**< no description available  */
    using DPE  = regbits< type,  1,  1 >;  /**< no description available  */
    using VER  = regbits< type, 28,  4 >;  /**< CAU version               */
  };

  /**
   * Accumulator register - Exclusive Or command
   */
  struct CAU_XOR_CAA
  : public reg< uint32_t, base_addr + 0x984, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x984, wo, 0 >;

    using ACC  = regbits< type,  0, 32 >;  /**< ACC  */
  };

  /**
   * General Purpose Register 0 - Exclusive Or command
   */
  struct CAU_XOR_CA0
  : public reg< uint32_t, base_addr + 0x988, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x988, wo, 0 >;

    using CA0  = regbits< type,  0, 32 >;  /**< CA0  */
  };

  /**
   * General Purpose Register 1 - Exclusive Or command
   */
  struct CAU_XOR_CA1
  : public reg< uint32_t, base_addr + 0x98c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98c, wo, 0 >;

    using CA1  = regbits< type,  0, 32 >;  /**< CA1  */
  };

  /**
   * General Purpose Register 2 - Exclusive Or command
   */
  struct CAU_XOR_CA2
  : public reg< uint32_t, base_addr + 0x990, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x990, wo, 0 >;

    using CA2  = regbits< type,  0, 32 >;  /**< CA2  */
  };

  /**
   * General Purpose Register 3 - Exclusive Or command
   */
  struct CAU_XOR_CA3
  : public reg< uint32_t, base_addr + 0x994, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x994, wo, 0 >;

    using CA3  = regbits< type,  0, 32 >;  /**< CA3  */
  };

  /**
   * General Purpose Register 4 - Exclusive Or command
   */
  struct CAU_XOR_CA4
  : public reg< uint32_t, base_addr + 0x998, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x998, wo, 0 >;

    using CA4  = regbits< type,  0, 32 >;  /**< CA4  */
  };

  /**
   * General Purpose Register 5 - Exclusive Or command
   */
  struct CAU_XOR_CA5
  : public reg< uint32_t, base_addr + 0x99c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x99c, wo, 0 >;

    using CA5  = regbits< type,  0, 32 >;  /**< CA5  */
  };

  /**
   * General Purpose Register 6 - Exclusive Or command
   */
  struct CAU_XOR_CA6
  : public reg< uint32_t, base_addr + 0x9a0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9a0, wo, 0 >;

    using CA6  = regbits< type,  0, 32 >;  /**< CA6  */
  };

  /**
   * General Purpose Register 7 - Exclusive Or command
   */
  struct CAU_XOR_CA7
  : public reg< uint32_t, base_addr + 0x9a4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9a4, wo, 0 >;

    using CA7  = regbits< type,  0, 32 >;  /**< CA7  */
  };

  /**
   * General Purpose Register 8 - Exclusive Or command
   */
  struct CAU_XOR_CA8
  : public reg< uint32_t, base_addr + 0x9a8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9a8, wo, 0 >;

    using CA8  = regbits< type,  0, 32 >;  /**< CA8  */
  };

  /**
   * Status register - Rotate Left command
   */
  struct CAU_ROTL_CASR
  : public reg< uint32_t, base_addr + 0x9c0, wo, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x9c0, wo, 0x20000000 >;

    using IC   = regbits< type,  0,  1 >;  /**< no description available  */
    using DPE  = regbits< type,  1,  1 >;  /**< no description available  */
    using VER  = regbits< type, 28,  4 >;  /**< CAU version               */
  };

  /**
   * Accumulator register - Rotate Left command
   */
  struct CAU_ROTL_CAA
  : public reg< uint32_t, base_addr + 0x9c4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c4, wo, 0 >;

    using ACC  = regbits< type,  0, 32 >;  /**< ACC  */
  };

  /**
   * General Purpose Register 0 - Rotate Left command
   */
  struct CAU_ROTL_CA0
  : public reg< uint32_t, base_addr + 0x9c8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c8, wo, 0 >;

    using CA0  = regbits< type,  0, 32 >;  /**< CA0  */
  };

  /**
   * General Purpose Register 1 - Rotate Left command
   */
  struct CAU_ROTL_CA1
  : public reg< uint32_t, base_addr + 0x9cc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9cc, wo, 0 >;

    using CA1  = regbits< type,  0, 32 >;  /**< CA1  */
  };

  /**
   * General Purpose Register 2 - Rotate Left command
   */
  struct CAU_ROTL_CA2
  : public reg< uint32_t, base_addr + 0x9d0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9d0, wo, 0 >;

    using CA2  = regbits< type,  0, 32 >;  /**< CA2  */
  };

  /**
   * General Purpose Register 3 - Rotate Left command
   */
  struct CAU_ROTL_CA3
  : public reg< uint32_t, base_addr + 0x9d4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9d4, wo, 0 >;

    using CA3  = regbits< type,  0, 32 >;  /**< CA3  */
  };

  /**
   * General Purpose Register 4 - Rotate Left command
   */
  struct CAU_ROTL_CA4
  : public reg< uint32_t, base_addr + 0x9d8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9d8, wo, 0 >;

    using CA4  = regbits< type,  0, 32 >;  /**< CA4  */
  };

  /**
   * General Purpose Register 5 - Rotate Left command
   */
  struct CAU_ROTL_CA5
  : public reg< uint32_t, base_addr + 0x9dc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9dc, wo, 0 >;

    using CA5  = regbits< type,  0, 32 >;  /**< CA5  */
  };

  /**
   * General Purpose Register 6 - Rotate Left command
   */
  struct CAU_ROTL_CA6
  : public reg< uint32_t, base_addr + 0x9e0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9e0, wo, 0 >;

    using CA6  = regbits< type,  0, 32 >;  /**< CA6  */
  };

  /**
   * General Purpose Register 7 - Rotate Left command
   */
  struct CAU_ROTL_CA7
  : public reg< uint32_t, base_addr + 0x9e4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9e4, wo, 0 >;

    using CA7  = regbits< type,  0, 32 >;  /**< CA7  */
  };

  /**
   * General Purpose Register 8 - Rotate Left command
   */
  struct CAU_ROTL_CA8
  : public reg< uint32_t, base_addr + 0x9e8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9e8, wo, 0 >;

    using CA8  = regbits< type,  0, 32 >;  /**< CA8  */
  };

  /**
   * Status register - AES Column Operation command
   */
  struct CAU_AESC_CASR
  : public reg< uint32_t, base_addr + 0xb00, wo, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb00, wo, 0x20000000 >;

    using IC   = regbits< type,  0,  1 >;  /**< no description available  */
    using DPE  = regbits< type,  1,  1 >;  /**< no description available  */
    using VER  = regbits< type, 28,  4 >;  /**< CAU version               */
  };

  /**
   * Accumulator register - AES Column Operation command
   */
  struct CAU_AESC_CAA
  : public reg< uint32_t, base_addr + 0xb04, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb04, wo, 0 >;

    using ACC  = regbits< type,  0, 32 >;  /**< ACC  */
  };

  /**
   * General Purpose Register 0 - AES Column Operation command
   */
  struct CAU_AESC_CA0
  : public reg< uint32_t, base_addr + 0xb08, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb08, wo, 0 >;

    using CA0  = regbits< type,  0, 32 >;  /**< CA0  */
  };

  /**
   * General Purpose Register 1 - AES Column Operation command
   */
  struct CAU_AESC_CA1
  : public reg< uint32_t, base_addr + 0xb0c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb0c, wo, 0 >;

    using CA1  = regbits< type,  0, 32 >;  /**< CA1  */
  };

  /**
   * General Purpose Register 2 - AES Column Operation command
   */
  struct CAU_AESC_CA2
  : public reg< uint32_t, base_addr + 0xb10, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb10, wo, 0 >;

    using CA2  = regbits< type,  0, 32 >;  /**< CA2  */
  };

  /**
   * General Purpose Register 3 - AES Column Operation command
   */
  struct CAU_AESC_CA3
  : public reg< uint32_t, base_addr + 0xb14, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb14, wo, 0 >;

    using CA3  = regbits< type,  0, 32 >;  /**< CA3  */
  };

  /**
   * General Purpose Register 4 - AES Column Operation command
   */
  struct CAU_AESC_CA4
  : public reg< uint32_t, base_addr + 0xb18, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb18, wo, 0 >;

    using CA4  = regbits< type,  0, 32 >;  /**< CA4  */
  };

  /**
   * General Purpose Register 5 - AES Column Operation command
   */
  struct CAU_AESC_CA5
  : public reg< uint32_t, base_addr + 0xb1c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb1c, wo, 0 >;

    using CA5  = regbits< type,  0, 32 >;  /**< CA5  */
  };

  /**
   * General Purpose Register 6 - AES Column Operation command
   */
  struct CAU_AESC_CA6
  : public reg< uint32_t, base_addr + 0xb20, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb20, wo, 0 >;

    using CA6  = regbits< type,  0, 32 >;  /**< CA6  */
  };

  /**
   * General Purpose Register 7 - AES Column Operation command
   */
  struct CAU_AESC_CA7
  : public reg< uint32_t, base_addr + 0xb24, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb24, wo, 0 >;

    using CA7  = regbits< type,  0, 32 >;  /**< CA7  */
  };

  /**
   * General Purpose Register 8 - AES Column Operation command
   */
  struct CAU_AESC_CA8
  : public reg< uint32_t, base_addr + 0xb28, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb28, wo, 0 >;

    using CA8  = regbits< type,  0, 32 >;  /**< CA8  */
  };

  /**
   * Status register - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CASR
  : public reg< uint32_t, base_addr + 0xb40, wo, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb40, wo, 0x20000000 >;

    using IC   = regbits< type,  0,  1 >;  /**< no description available  */
    using DPE  = regbits< type,  1,  1 >;  /**< no description available  */
    using VER  = regbits< type, 28,  4 >;  /**< CAU version               */
  };

  /**
   * Accumulator register - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CAA
  : public reg< uint32_t, base_addr + 0xb44, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb44, wo, 0 >;

    using ACC  = regbits< type,  0, 32 >;  /**< ACC  */
  };

  /**
   * General Purpose Register 0 - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CA0
  : public reg< uint32_t, base_addr + 0xb48, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb48, wo, 0 >;

    using CA0  = regbits< type,  0, 32 >;  /**< CA0  */
  };

  /**
   * General Purpose Register 1 - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CA1
  : public reg< uint32_t, base_addr + 0xb4c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb4c, wo, 0 >;

    using CA1  = regbits< type,  0, 32 >;  /**< CA1  */
  };

  /**
   * General Purpose Register 2 - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CA2
  : public reg< uint32_t, base_addr + 0xb50, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb50, wo, 0 >;

    using CA2  = regbits< type,  0, 32 >;  /**< CA2  */
  };

  /**
   * General Purpose Register 3 - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CA3
  : public reg< uint32_t, base_addr + 0xb54, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb54, wo, 0 >;

    using CA3  = regbits< type,  0, 32 >;  /**< CA3  */
  };

  /**
   * General Purpose Register 4 - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CA4
  : public reg< uint32_t, base_addr + 0xb58, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb58, wo, 0 >;

    using CA4  = regbits< type,  0, 32 >;  /**< CA4  */
  };

  /**
   * General Purpose Register 5 - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CA5
  : public reg< uint32_t, base_addr + 0xb5c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb5c, wo, 0 >;

    using CA5  = regbits< type,  0, 32 >;  /**< CA5  */
  };

  /**
   * General Purpose Register 6 - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CA6
  : public reg< uint32_t, base_addr + 0xb60, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb60, wo, 0 >;

    using CA6  = regbits< type,  0, 32 >;  /**< CA6  */
  };

  /**
   * General Purpose Register 7 - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CA7
  : public reg< uint32_t, base_addr + 0xb64, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb64, wo, 0 >;

    using CA7  = regbits< type,  0, 32 >;  /**< CA7  */
  };

  /**
   * General Purpose Register 8 - AES Inverse Column Operation command
   */
  struct CAU_AESIC_CA8
  : public reg< uint32_t, base_addr + 0xb68, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb68, wo, 0 >;

    using CA8  = regbits< type,  0, 32 >;  /**< CA8  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CAU_HPP_INCLUDED
