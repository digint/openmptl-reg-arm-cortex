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
//  Import from CMSIS-SVD: "Freescale/MKV56F20.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV56F20
//  series: Kinetis_V
//  version: 1.6
//  description: MKV56F20 Freescale Microcontroller
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
   * LLWU Pin Enable 5 register
   */
  struct PE5
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using WUPE16  = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P16  */
    using WUPE17  = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P17  */
    using WUPE18  = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P18  */
    using WUPE19  = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P19  */
  };

  /**
   * LLWU Pin Enable 6 register
   */
  struct PE6
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using WUPE20  = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P20  */
    using WUPE21  = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P21  */
    using WUPE22  = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P22  */
    using WUPE23  = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P23  */
  };

  /**
   * LLWU Pin Enable 7 register
   */
  struct PE7
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using WUPE24  = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P24  */
    using WUPE25  = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P25  */
    using WUPE26  = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P26  */
    using WUPE27  = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P27  */
  };

  /**
   * LLWU Pin Enable 8 register
   */
  struct PE8
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using WUPE28  = regbits< type,  0,  2 >;  /**< Wakeup Pin Enable For LLWU_P28  */
    using WUPE29  = regbits< type,  2,  2 >;  /**< Wakeup Pin Enable For LLWU_P29  */
    using WUPE30  = regbits< type,  4,  2 >;  /**< Wakeup Pin Enable For LLWU_P30  */
    using WUPE31  = regbits< type,  6,  2 >;  /**< Wakeup Pin Enable For LLWU_P31  */
  };

  /**
   * LLWU Module Enable register
   */
  struct ME
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

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
   * LLWU Pin Flag 1 register
   */
  struct PF1
  : public reg< uint8_t, base_addr + 0x9, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0 >;

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
   * LLWU Pin Flag 2 register
   */
  struct PF2
  : public reg< uint8_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0 >;

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
   * LLWU Pin Flag 3 register
   */
  struct PF3
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    using WUF16  = regbits< type,  0,  1 >;  /**< Wakeup Flag For LLWU_P16  */
    using WUF17  = regbits< type,  1,  1 >;  /**< Wakeup Flag For LLWU_P17  */
    using WUF18  = regbits< type,  2,  1 >;  /**< Wakeup Flag For LLWU_P18  */
    using WUF19  = regbits< type,  3,  1 >;  /**< Wakeup Flag For LLWU_P19  */
    using WUF20  = regbits< type,  4,  1 >;  /**< Wakeup Flag For LLWU_P20  */
    using WUF21  = regbits< type,  5,  1 >;  /**< Wakeup Flag For LLWU_P21  */
    using WUF22  = regbits< type,  6,  1 >;  /**< Wakeup Flag For LLWU_P22  */
    using WUF23  = regbits< type,  7,  1 >;  /**< Wakeup Flag For LLWU_P23  */
  };

  /**
   * LLWU Pin Flag 4 register
   */
  struct PF4
  : public reg< uint8_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xc, rw, 0 >;

    using WUF24  = regbits< type,  0,  1 >;  /**< Wakeup Flag For LLWU_P24  */
    using WUF25  = regbits< type,  1,  1 >;  /**< Wakeup Flag For LLWU_P25  */
    using WUF26  = regbits< type,  2,  1 >;  /**< Wakeup Flag For LLWU_P26  */
    using WUF27  = regbits< type,  3,  1 >;  /**< Wakeup Flag For LLWU_P27  */
    using WUF28  = regbits< type,  4,  1 >;  /**< Wakeup Flag For LLWU_P28  */
    using WUF29  = regbits< type,  5,  1 >;  /**< Wakeup Flag For LLWU_P29  */
    using WUF30  = regbits< type,  6,  1 >;  /**< Wakeup Flag For LLWU_P30  */
    using WUF31  = regbits< type,  7,  1 >;  /**< Wakeup Flag For LLWU_P31  */
  };

  /**
   * LLWU Module Flag 5 register
   */
  struct MF5
  : public reg< uint8_t, base_addr + 0xd, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xd, ro, 0 >;

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
  : public reg< uint8_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xe, rw, 0 >;

    using FILTSEL  = regbits< type,  0,  5 >;  /**< Filter Pin Select               */
    using FILTE    = regbits< type,  5,  2 >;  /**< Digital Filter On External Pin  */
    using FILTF    = regbits< type,  7,  1 >;  /**< Filter Detect Flag              */
  };

  /**
   * LLWU Pin Filter 2 register
   */
  struct FILT2
  : public reg< uint8_t, base_addr + 0xf, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xf, rw, 0 >;

    using FILTSEL  = regbits< type,  0,  5 >;  /**< Filter Pin Select               */
    using FILTE    = regbits< type,  5,  2 >;  /**< Digital Filter On External Pin  */
    using FILTF    = regbits< type,  7,  1 >;  /**< Filter Detect Flag              */
  };
};
} // namespace mptl

#endif // ARCH_REG_LLWU_HPP_INCLUDED
