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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE0.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE0
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE0 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LLWU1_HPP_INCLUDED
#define ARCH_REG_LLWU1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low leakage wakeup unit
 */
struct LLWU1
{
  static constexpr reg_addr_t base_addr = 0x400e1000;

  /**
   * Version ID Register
   */
  struct VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x1000000 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Feature Specification Number  */
    using MINOR    = regbits< type, 16,  8 >;  /**< Minor Version Number          */
    using MAJOR    = regbits< type, 24,  8 >;  /**< Major Version Number          */
  };

  /**
   * Parameter Register
   */
  struct PARAM
  : public reg< uint32_t, base_addr + 0x4, ro, 0x20080804 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x20080804 >;

    using FILTERS  = regbits< type,  0,  8 >;  /**< Filter Number  */
    using DMAS     = regbits< type,  8,  8 >;  /**< DMA Number     */
    using MODULES  = regbits< type, 16,  8 >;  /**< Module Number  */
    using PINS     = regbits< type, 24,  8 >;  /**< Pin Number     */
  };

  /**
   * LLWU Pin Enable 1 register
   */
  struct PE1
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using WUPE0   = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P0   */
    using WUPE1   = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P1   */
    using WUPE2   = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P2   */
    using WUPE3   = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P3   */
    using WUPE4   = regbits< type,  8,  2 >;  /**< Wakeup Pin Enable For LLWU_P4   */
    using WUPE5   = regbits< type, 10,  2 >;  /**< Wakeup Pin Enable For LLWU_P5   */
    using WUPE6   = regbits< type, 12,  2 >;  /**< Wakeup Pin Enable For LLWU_P6   */
    using WUPE7   = regbits< type, 14,  2 >;  /**< Wakeup Pin Enable For LLWU_P7   */
    using WUPE8   = regbits< type, 16,  2 >;  /**< Wakeup Pin Enable For LLWU_P8   */
    using WUPE9   = regbits< type, 18,  2 >;  /**< Wakeup Pin Enable For LLWU_P9   */
    using WUPE10  = regbits< type, 20,  2 >;  /**< Wakeup Pin Enable For LLWU_P10  */
    using WUPE11  = regbits< type, 22,  2 >;  /**< Wakeup Pin Enable For LLWU_P11  */
    using WUPE12  = regbits< type, 24,  2 >;  /**< Wakeup Pin Enable For LLWU_P12  */
    using WUPE13  = regbits< type, 26,  2 >;  /**< Wakeup Pin Enable For LLWU_P13  */
    using WUPE14  = regbits< type, 28,  2 >;  /**< Wakeup Pin Enable For LLWU_P14  */
    using WUPE15  = regbits< type, 30,  2 >;  /**< Wakeup Pin Enable For LLWU_P15  */
  };

  /**
   * LLWU Pin Enable 2 register
   */
  struct PE2
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using WUPE16  = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P16  */
    using WUPE17  = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P17  */
    using WUPE18  = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P18  */
    using WUPE19  = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P19  */
    using WUPE20  = regbits< type,  8,  2 >;  /**< Wakeup Pin Enable For LLWU_P20  */
    using WUPE21  = regbits< type, 10,  2 >;  /**< Wakeup Pin Enable For LLWU_P21  */
    using WUPE22  = regbits< type, 12,  2 >;  /**< Wakeup Pin Enable For LLWU_P22  */
    using WUPE23  = regbits< type, 14,  2 >;  /**< Wakeup Pin Enable For LLWU_P23  */
    using WUPE24  = regbits< type, 16,  2 >;  /**< Wakeup Pin Enable For LLWU_P24  */
    using WUPE25  = regbits< type, 18,  2 >;  /**< Wakeup Pin Enable For LLWU_P25  */
    using WUPE26  = regbits< type, 20,  2 >;  /**< Wakeup Pin Enable For LLWU_P26  */
    using WUPE27  = regbits< type, 22,  2 >;  /**< Wakeup Pin Enable For LLWU_P27  */
    using WUPE28  = regbits< type, 24,  2 >;  /**< Wakeup Pin Enable For LLWU_P28  */
    using WUPE29  = regbits< type, 26,  2 >;  /**< Wakeup Pin Enable For LLWU_P29  */
    using WUPE30  = regbits< type, 28,  2 >;  /**< Wakeup Pin Enable For LLWU_P30  */
    using WUPE31  = regbits< type, 30,  2 >;  /**< Wakeup Pin Enable For LLWU_P31  */
  };

  /**
   * LLWU Module Interrupt Enable register
   */
  struct ME
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using WUME0  = regbits< type,  0,  1 >;  /**< Wakeup Module Enable For Module 0  */
    using WUME1  = regbits< type,  1,  1 >;  /**< Wakeup Module Enable for Module 1  */
    using WUME2  = regbits< type,  2,  1 >;  /**< Wakeup Module Enable For Module 2  */
    using WUME3  = regbits< type,  3,  1 >;  /**< Wakeup Module Enable For Module 3  */
    using WUME4  = regbits< type,  4,  1 >;  /**< Wakeup Module Enable For Module 4  */
    using WUME5  = regbits< type,  5,  1 >;  /**< Wakeup Module Enable For Module 5  */
    using WUME6  = regbits< type,  6,  1 >;  /**< Wakeup Module Enable For Module 6  */
    using WUME7  = regbits< type,  7,  1 >;  /**< Wakeup Module Enable For Module 7  */
  };

  /**
   * LLWU Module DMA Enable register
   */
  struct DE
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using WUDE0  = regbits< type,  0,  1 >;  /**< DMA Wakeup Enable For Module 0  */
    using WUDE1  = regbits< type,  1,  1 >;  /**< DMA Wakeup Enable for Module 1  */
    using WUDE2  = regbits< type,  2,  1 >;  /**< DMA Wakeup Enable For Module 2  */
    using WUDE3  = regbits< type,  3,  1 >;  /**< DMA Wakeup Enable For Module 3  */
    using WUDE4  = regbits< type,  4,  1 >;  /**< DMA Wakeup Enable For Module 4  */
    using WUDE5  = regbits< type,  5,  1 >;  /**< DMA Wakeup Enable For Module 5  */
    using WUDE6  = regbits< type,  6,  1 >;  /**< DMA Wakeup Enable For Module 6  */
    using WUDE7  = regbits< type,  7,  1 >;  /**< DMA Wakeup Enable For Module 7  */
  };

  /**
   * LLWU Pin Flag register
   */
  struct PF
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using WUF0   = regbits< type,  0,  1 >;  /**< Wakeup Flag For LLWU_P0   */
    using WUF1   = regbits< type,  1,  1 >;  /**< Wakeup Flag For LLWU_P1   */
    using WUF2   = regbits< type,  2,  1 >;  /**< Wakeup Flag For LLWU_P2   */
    using WUF3   = regbits< type,  3,  1 >;  /**< Wakeup Flag For LLWU_P3   */
    using WUF4   = regbits< type,  4,  1 >;  /**< Wakeup Flag For LLWU_P4   */
    using WUF5   = regbits< type,  5,  1 >;  /**< Wakeup Flag For LLWU_P5   */
    using WUF6   = regbits< type,  6,  1 >;  /**< Wakeup Flag For LLWU_P6   */
    using WUF7   = regbits< type,  7,  1 >;  /**< Wakeup Flag For LLWU_P7   */
    using WUF8   = regbits< type,  8,  1 >;  /**< Wakeup Flag For LLWU_P8   */
    using WUF9   = regbits< type,  9,  1 >;  /**< Wakeup Flag For LLWU_P9   */
    using WUF10  = regbits< type, 10,  1 >;  /**< Wakeup Flag For LLWU_P10  */
    using WUF11  = regbits< type, 11,  1 >;  /**< Wakeup Flag For LLWU_P11  */
    using WUF12  = regbits< type, 12,  1 >;  /**< Wakeup Flag For LLWU_P12  */
    using WUF13  = regbits< type, 13,  1 >;  /**< Wakeup Flag For LLWU_P13  */
    using WUF14  = regbits< type, 14,  1 >;  /**< Wakeup Flag For LLWU_P14  */
    using WUF15  = regbits< type, 15,  1 >;  /**< Wakeup Flag For LLWU_P15  */
    using WUF16  = regbits< type, 16,  1 >;  /**< Wakeup Flag For LLWU_P16  */
    using WUF17  = regbits< type, 17,  1 >;  /**< Wakeup Flag For LLWU_P17  */
    using WUF18  = regbits< type, 18,  1 >;  /**< Wakeup Flag For LLWU_P18  */
    using WUF19  = regbits< type, 19,  1 >;  /**< Wakeup Flag For LLWU_P19  */
    using WUF20  = regbits< type, 20,  1 >;  /**< Wakeup Flag For LLWU_P20  */
    using WUF21  = regbits< type, 21,  1 >;  /**< Wakeup Flag For LLWU_P21  */
    using WUF22  = regbits< type, 22,  1 >;  /**< Wakeup Flag For LLWU_P22  */
    using WUF23  = regbits< type, 23,  1 >;  /**< Wakeup Flag For LLWU_P23  */
    using WUF24  = regbits< type, 24,  1 >;  /**< Wakeup Flag For LLWU_P24  */
    using WUF25  = regbits< type, 25,  1 >;  /**< Wakeup Flag For LLWU_P25  */
    using WUF26  = regbits< type, 26,  1 >;  /**< Wakeup Flag For LLWU_P26  */
    using WUF27  = regbits< type, 27,  1 >;  /**< Wakeup Flag For LLWU_P27  */
    using WUF28  = regbits< type, 28,  1 >;  /**< Wakeup Flag For LLWU_P28  */
    using WUF29  = regbits< type, 29,  1 >;  /**< Wakeup Flag For LLWU_P29  */
    using WUF30  = regbits< type, 30,  1 >;  /**< Wakeup Flag For LLWU_P30  */
    using WUF31  = regbits< type, 31,  1 >;  /**< Wakeup Flag For LLWU_P31  */
  };

  /**
   * LLWU Module Interrupt Flag register
   */
  struct MF
  : public reg< uint32_t, base_addr + 0x28, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0 >;

    using MWUF0  = regbits< type,  0,  1 >;  /**< Wakeup flag For module 0  */
    using MWUF1  = regbits< type,  1,  1 >;  /**< Wakeup flag For module 1  */
    using MWUF2  = regbits< type,  2,  1 >;  /**< Wakeup flag For module 2  */
    using MWUF3  = regbits< type,  3,  1 >;  /**< Wakeup flag For module 3  */
    using MWUF4  = regbits< type,  4,  1 >;  /**< Wakeup flag For module 4  */
    using MWUF5  = regbits< type,  5,  1 >;  /**< Wakeup flag For module 5  */
    using MWUF6  = regbits< type,  6,  1 >;  /**< Wakeup flag For module 6  */
    using MWUF7  = regbits< type,  7,  1 >;  /**< Wakeup flag For module 7  */
  };

  /**
   * LLWU Pin Filter register
   */
  struct FILT
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using FILTSEL1  = regbits< type,  0,  5 >;  /**< Filter 1 Pin Select  */
    using FILTE1    = regbits< type,  5,  2 >;  /**< Filter 1 Enable      */
    using FILTF1    = regbits< type,  7,  1 >;  /**< Filter 1 Flag        */
    using FILTSEL2  = regbits< type,  8,  5 >;  /**< Filter 2 Pin Select  */
    using FILTE2    = regbits< type, 13,  2 >;  /**< Filter 2 Enable      */
    using FILTF2    = regbits< type, 15,  1 >;  /**< Filter 2 Flag        */
    using FILTSEL3  = regbits< type, 16,  5 >;  /**< Filter 3 Pin Select  */
    using FILTE3    = regbits< type, 21,  2 >;  /**< Filter 3 Enable      */
    using FILTF3    = regbits< type, 23,  1 >;  /**< Filter 3 Flag        */
    using FILTSEL4  = regbits< type, 24,  5 >;  /**< Filter 4 Pin Select  */
    using FILTE4    = regbits< type, 29,  2 >;  /**< Filter 4 Enable      */
    using FILTF4    = regbits< type, 31,  1 >;  /**< Filter 4 Flag        */
  };
};
} // namespace mptl

#endif // ARCH_REG_LLWU1_HPP_INCLUDED
