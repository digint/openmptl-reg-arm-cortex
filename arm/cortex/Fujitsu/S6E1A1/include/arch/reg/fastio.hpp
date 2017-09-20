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
//  Import from CMSIS-SVD: "Fujitsu/S6E1A1.svd"
//
//  name: S6E1A1
//  version: 1.2
//  description: S6E1A1 Series
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FASTIO_HPP_INCLUDED
#define ARCH_REG_FASTIO_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Fast GPIO Registers
 */
struct FASTIO
{
  static constexpr reg_addr_t base_addr = 0xf8000000;

  /**
   * Fast GPIO Input Data Register 0
   */
  struct FPDIR0
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using P0F  = regbits< type, 15,  1 >;  /**< Bit15 of FPDIR0  */
    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of FPDIR0   */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of FPDIR0   */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of FPDIR0   */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of FPDIR0   */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of FPDIR0   */
  };

  /**
   * Fast GPIO Input Data Register 1
   */
  struct FPDIR1
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using P15  = regbits< type,  5,  1 >;  /**< Bit5 of FPDIR1  */
    using P14  = regbits< type,  4,  1 >;  /**< Bit4 of FPDIR1  */
    using P13  = regbits< type,  3,  1 >;  /**< Bit3 of FPDIR1  */
    using P12  = regbits< type,  2,  1 >;  /**< Bit2 of FPDIR1  */
    using P11  = regbits< type,  1,  1 >;  /**< Bit1 of FPDIR1  */
    using P10  = regbits< type,  0,  1 >;  /**< Bit0 of FPDIR1  */
  };

  /**
   * Fast GPIO Input Data Register 2
   */
  struct FPDIR2
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using P23  = regbits< type,  3,  1 >;  /**< Bit3 of FPDIR2  */
    using P22  = regbits< type,  2,  1 >;  /**< Bit2 of FPDIR2  */
    using P21  = regbits< type,  1,  1 >;  /**< Bit1 of FPDIR2  */
  };

  /**
   * Fast GPIO Input Data Register 3
   */
  struct FPDIR3
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using P3F  = regbits< type, 15,  1 >;  /**< Bit15 of FPDIR3  */
    using P3E  = regbits< type, 14,  1 >;  /**< Bit14 of FPDIR3  */
    using P3D  = regbits< type, 13,  1 >;  /**< Bit13 of FPDIR3  */
    using P3C  = regbits< type, 12,  1 >;  /**< Bit12 of FPDIR3  */
    using P3B  = regbits< type, 11,  1 >;  /**< Bit11 of FPDIR3  */
    using P3A  = regbits< type, 10,  1 >;  /**< Bit10 of FPDIR3  */
    using P39  = regbits< type,  9,  1 >;  /**< Bit9 of FPDIR3   */
  };

  /**
   * Fast GPIO Input Data Register 4
   */
  struct FPDIR4
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    using P4A  = regbits< type, 10,  1 >;  /**< Bit10 of FPDIR4  */
    using P49  = regbits< type,  9,  1 >;  /**< Bit9 of FPDIR4   */
    using P47  = regbits< type,  7,  1 >;  /**< Bit7 of FPDIR4   */
    using P46  = regbits< type,  6,  1 >;  /**< Bit6 of FPDIR4   */
  };

  /**
   * Fast GPIO Input Data Register 5
   */
  struct FPDIR5
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    using P52  = regbits< type,  2,  1 >;  /**< Bit2 of FPDIR5  */
    using P51  = regbits< type,  1,  1 >;  /**< Bit1 of FPDIR5  */
    using P50  = regbits< type,  0,  1 >;  /**< Bit0 of FPDIR5  */
  };

  /**
   * Fast GPIO Input Data Register 6
   */
  struct FPDIR6
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >;

    using P61  = regbits< type,  1,  1 >;  /**< Bit1 of FPDIR6  */
    using P60  = regbits< type,  0,  1 >;  /**< Bit0 of FPDIR6  */
  };

  /**
   * Fast GPIO Input Data Register 8
   */
  struct FPDIR8
  : public reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >;

    using P82  = regbits< type,  2,  1 >;  /**< Bit2 of FPDIR8  */
    using P81  = regbits< type,  1,  1 >;  /**< Bit1 of FPDIR8  */
    using P80  = regbits< type,  0,  1 >;  /**< Bit0 of FPDIR8  */
  };

  /**
   * Fast GPIO Input Data Register E
   */
  struct FPDIRE
  : public reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >;

    using PE3  = regbits< type,  3,  1 >;  /**< Bit3 of FPDIRE  */
    using PE2  = regbits< type,  2,  1 >;  /**< Bit2 of FPDIRE  */
    using PE0  = regbits< type,  0,  1 >;  /**< Bit0 of FPDIRE  */
  };

  /**
   * Fast GPIO Output Data Register 0
   */
  struct FPDOR0
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using P0F  = regbits< type, 15,  1 >;  /**< Bit15 of FPDOR0  */
    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of FPDOR0   */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of FPDOR0   */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of FPDOR0   */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of FPDOR0   */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of FPDOR0   */
  };

  /**
   * Fast GPIO Output Data Register 1
   */
  struct FPDOR1
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using P15  = regbits< type,  5,  1 >;  /**< Bit5 of FPDOR1  */
    using P14  = regbits< type,  4,  1 >;  /**< Bit4 of FPDOR1  */
    using P13  = regbits< type,  3,  1 >;  /**< Bit3 of FPDOR1  */
    using P12  = regbits< type,  2,  1 >;  /**< Bit2 of FPDOR1  */
    using P11  = regbits< type,  1,  1 >;  /**< Bit1 of FPDOR1  */
    using P10  = regbits< type,  0,  1 >;  /**< Bit0 of FPDOR1  */
  };

  /**
   * Fast GPIO Output Data Register 2
   */
  struct FPDOR2
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using P23  = regbits< type,  3,  1 >;  /**< Bit3 of FPDOR2  */
    using P22  = regbits< type,  2,  1 >;  /**< Bit2 of FPDOR2  */
    using P21  = regbits< type,  1,  1 >;  /**< Bit1 of FPDOR2  */
  };

  /**
   * Fast GPIO Output Data Register 3
   */
  struct FPDOR3
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using P3F  = regbits< type, 15,  1 >;  /**< Bit15 of FPDOR3  */
    using P3E  = regbits< type, 14,  1 >;  /**< Bit14 of FPDOR3  */
    using P3D  = regbits< type, 13,  1 >;  /**< Bit13 of FPDOR3  */
    using P3C  = regbits< type, 12,  1 >;  /**< Bit12 of FPDOR3  */
    using P3B  = regbits< type, 11,  1 >;  /**< Bit11 of FPDOR3  */
    using P3A  = regbits< type, 10,  1 >;  /**< Bit10 of FPDOR3  */
    using P39  = regbits< type,  9,  1 >;  /**< Bit9 of FPDOR3   */
  };

  /**
   * Fast GPIO Output Data Register 4
   */
  struct FPDOR4
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using P4A  = regbits< type, 10,  1 >;  /**< Bit10 of FPDOR4  */
    using P49  = regbits< type,  9,  1 >;  /**< Bit9 of FPDOR4   */
    using P47  = regbits< type,  7,  1 >;  /**< Bit7 of FPDOR4   */
    using P46  = regbits< type,  6,  1 >;  /**< Bit6 of FPDOR4   */
  };

  /**
   * Fast GPIO Output Data Register 5
   */
  struct FPDOR5
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using P52  = regbits< type,  2,  1 >;  /**< Bit2 of FPDOR5  */
    using P51  = regbits< type,  1,  1 >;  /**< Bit1 of FPDOR5  */
    using P50  = regbits< type,  0,  1 >;  /**< Bit0 of FPDOR5  */
  };

  /**
   * Fast GPIO Output Data Register 6
   */
  struct FPDOR6
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using P61  = regbits< type,  1,  1 >;  /**< Bit1 of FPDOR6  */
    using P60  = regbits< type,  0,  1 >;  /**< Bit0 of FPDOR6  */
  };

  /**
   * Fast GPIO Output Data Register 8
   */
  struct FPDOR8
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using P82  = regbits< type,  2,  1 >;  /**< Bit2 of FPDOR8  */
    using P81  = regbits< type,  1,  1 >;  /**< Bit1 of FPDOR8  */
    using P80  = regbits< type,  0,  1 >;  /**< Bit0 of FPDOR8  */
  };

  /**
   * Fast GPIO Output Data Register E
   */
  struct FPDORE
  : public reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >;

    using PE3  = regbits< type,  3,  1 >;  /**< Bit3 of FPDORE  */
    using PE2  = regbits< type,  2,  1 >;  /**< Bit2 of FPDORE  */
    using PE0  = regbits< type,  0,  1 >;  /**< Bit0 of FPDORE  */
  };

  /**
   * Mirror Fast GPIO Input Data Register 0
   */
  struct M_FPDIR0
  : public reg< uint32_t, base_addr + 0x80, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, ro, 0x00000000 >;

    using P22  = regbits< type,  7,  1 >;  /**< Bit7 of M_FPDIR0  */
    using P23  = regbits< type,  6,  1 >;  /**< Bit6 of M_FPDIR0  */
    using P15  = regbits< type,  5,  1 >;  /**< Bit5 of M_FPDIR0  */
    using P14  = regbits< type,  4,  1 >;  /**< Bit4 of M_FPDIR0  */
    using P13  = regbits< type,  3,  1 >;  /**< Bit3 of M_FPDIR0  */
    using P12  = regbits< type,  2,  1 >;  /**< Bit2 of M_FPDIR0  */
    using P11  = regbits< type,  1,  1 >;  /**< Bit1 of M_FPDIR0  */
    using P10  = regbits< type,  0,  1 >;  /**< Bit0 of M_FPDIR0  */
  };

  /**
   * Mirror Fast GPIO Input Data Register 1
   */
  struct M_FPDIR1
  : public reg< uint32_t, base_addr + 0x84, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, ro, 0x00000000 >;

    using P47  = regbits< type,  7,  1 >;  /**< Bit7 of M_FPDIR1  */
    using P46  = regbits< type,  6,  1 >;  /**< Bit6 of M_FPDIR1  */
    using P3F  = regbits< type,  5,  1 >;  /**< Bit5 of M_FPDIR1  */
    using P3E  = regbits< type,  4,  1 >;  /**< Bit4 of M_FPDIR1  */
    using P3D  = regbits< type,  3,  1 >;  /**< Bit3 of M_FPDIR1  */
    using P3C  = regbits< type,  2,  1 >;  /**< Bit2 of M_FPDIR1  */
    using P3B  = regbits< type,  1,  1 >;  /**< Bit1 of M_FPDIR1  */
    using P3A  = regbits< type,  0,  1 >;  /**< Bit0 of M_FPDIR1  */
  };

  /**
   * Mirror Fast GPIO Output Data Register 0
   */
  struct M_FPDOR0
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >;

    using P22  = regbits< type,  7,  1 >;  /**< Bit7 of M_FPDOR0  */
    using P23  = regbits< type,  6,  1 >;  /**< Bit6 of M_FPDOR0  */
    using P15  = regbits< type,  5,  1 >;  /**< Bit5 of M_FPDOR0  */
    using P14  = regbits< type,  4,  1 >;  /**< Bit4 of M_FPDOR0  */
    using P13  = regbits< type,  3,  1 >;  /**< Bit3 of M_FPDOR0  */
    using P12  = regbits< type,  2,  1 >;  /**< Bit2 of M_FPDOR0  */
    using P11  = regbits< type,  1,  1 >;  /**< Bit1 of M_FPDOR0  */
    using P10  = regbits< type,  0,  1 >;  /**< Bit0 of M_FPDOR0  */
  };

  /**
   * Mirror Fast GPIO Output Data Register 1
   */
  struct M_FPDOR1
  : public reg< uint32_t, base_addr + 0xc4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0x00000000 >;

    using P47  = regbits< type,  7,  1 >;  /**< Bit7 of M_FPDOR1  */
    using P46  = regbits< type,  6,  1 >;  /**< Bit6 of M_FPDOR1  */
    using P3F  = regbits< type,  5,  1 >;  /**< Bit5 of M_FPDOR1  */
    using P3E  = regbits< type,  4,  1 >;  /**< Bit4 of M_FPDOR1  */
    using P3D  = regbits< type,  3,  1 >;  /**< Bit3 of M_FPDOR1  */
    using P3C  = regbits< type,  2,  1 >;  /**< Bit2 of M_FPDOR1  */
    using P3B  = regbits< type,  1,  1 >;  /**< Bit1 of M_FPDOR1  */
    using P3A  = regbits< type,  0,  1 >;  /**< Bit0 of M_FPDOR1  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FASTIO_HPP_INCLUDED
