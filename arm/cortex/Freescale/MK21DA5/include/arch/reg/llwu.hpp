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
//  Import from CMSIS-SVD: "Freescale/MK21DA5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK21DA5
//  series: Kinetis_K
//  version: 1.6
//  description: MK21DA5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LLWU_HPP_INCLUDED
#define ARCH_REG_LLWU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low leakage wakeup unit
 */
struct LLWU
{
  static constexpr reg_addr_t base_addr = 0x4007c000;

  /**
   * LLWU Pin Enable 1 register
   */
  struct PE1
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using WUPE0  = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P0  */
    using WUPE1  = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P1  */
    using WUPE2  = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P2  */
    using WUPE3  = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P3  */
  };

  /**
   * LLWU Pin Enable 2 register
   */
  struct PE2
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using WUPE4  = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P4  */
    using WUPE5  = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P5  */
    using WUPE6  = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P6  */
    using WUPE7  = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P7  */
  };

  /**
   * LLWU Pin Enable 3 register
   */
  struct PE3
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using WUPE8   = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P8   */
    using WUPE9   = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P9   */
    using WUPE10  = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P10  */
    using WUPE11  = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P11  */
  };

  /**
   * LLWU Pin Enable 4 register
   */
  struct PE4
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using WUPE12  = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P12  */
    using WUPE13  = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P13  */
    using WUPE14  = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P14  */
    using WUPE15  = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P15  */
  };

  /**
   * LLWU Module Enable register
   */
  struct ME
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

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
   * LLWU Flag 1 register
   */
  struct F1
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using WUF0  = regbits< type,  0,  1 >;  /**< Wakeup Flag For LLWU_P0  */
    using WUF1  = regbits< type,  1,  1 >;  /**< Wakeup Flag For LLWU_P1  */
    using WUF2  = regbits< type,  2,  1 >;  /**< Wakeup Flag For LLWU_P2  */
    using WUF3  = regbits< type,  3,  1 >;  /**< Wakeup Flag For LLWU_P3  */
    using WUF4  = regbits< type,  4,  1 >;  /**< Wakeup Flag For LLWU_P4  */
    using WUF5  = regbits< type,  5,  1 >;  /**< Wakeup Flag For LLWU_P5  */
    using WUF6  = regbits< type,  6,  1 >;  /**< Wakeup Flag For LLWU_P6  */
    using WUF7  = regbits< type,  7,  1 >;  /**< Wakeup Flag For LLWU_P7  */
  };

  /**
   * LLWU Flag 2 register
   */
  struct F2
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using WUF8   = regbits< type,  0,  1 >;  /**< Wakeup Flag For LLWU_P8   */
    using WUF9   = regbits< type,  1,  1 >;  /**< Wakeup Flag For LLWU_P9   */
    using WUF10  = regbits< type,  2,  1 >;  /**< Wakeup Flag For LLWU_P10  */
    using WUF11  = regbits< type,  3,  1 >;  /**< Wakeup Flag For LLWU_P11  */
    using WUF12  = regbits< type,  4,  1 >;  /**< Wakeup Flag For LLWU_P12  */
    using WUF13  = regbits< type,  5,  1 >;  /**< Wakeup Flag For LLWU_P13  */
    using WUF14  = regbits< type,  6,  1 >;  /**< Wakeup Flag For LLWU_P14  */
    using WUF15  = regbits< type,  7,  1 >;  /**< Wakeup Flag For LLWU_P15  */
  };

  /**
   * LLWU Flag 3 register
   */
  struct F3
  : public reg< uint8_t, base_addr + 0x7, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, ro, 0 >;

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
   * LLWU Pin Filter 1 register
   */
  struct FILT1
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using FILTSEL  = regbits< type,  0,  4 >;  /**< Filter Pin Select               */
    using FILTE    = regbits< type,  5,  2 >;  /**< Digital Filter On External Pin  */
    using FILTF    = regbits< type,  7,  1 >;  /**< Filter Detect Flag              */
  };

  /**
   * LLWU Pin Filter 2 register
   */
  struct FILT2
  : public reg< uint8_t, base_addr + 0x9, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0 >;

    using FILTSEL  = regbits< type,  0,  4 >;  /**< Filter Pin Select               */
    using FILTE    = regbits< type,  5,  2 >;  /**< Digital Filter On External Pin  */
    using FILTF    = regbits< type,  7,  1 >;  /**< Filter Detect Flag              */
  };

  /**
   * LLWU Reset Enable register
   */
  struct RST
  : public reg< uint8_t, base_addr + 0xa, rw, 0x2 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0x2 >;

    using RSTFILT  = regbits< type,  0,  1 >;  /**< Digital Filter On RESET Pin    */
    using LLRSTE   = regbits< type,  1,  1 >;  /**< Low-Leakage Mode RESET Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LLWU_HPP_INCLUDED
