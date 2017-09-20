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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G25.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G25
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G25 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Ethernet, HS USB, LPDDR/DDR2/MLC NAND support, 217 and 247 Pins (refer to http://www.atmel.com/devices/SAM9G25.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PMERRLOC_HPP_INCLUDED
#define ARCH_REG_PMERRLOC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Programmable Multibit ECC Error Location
 */
struct PMERRLOC
{
  static constexpr reg_addr_t base_addr = 0xffffe600;

  /**
   * Error Location Configuration Register
   */
  struct ELCFG
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using SECTORSZ  = regbits< type,  0,  1 >;  /**< Sector Size       */
    using ERRNUM    = regbits< type, 16,  5 >;  /**< Number of Errors  */
  };

  /**
   * Error Location Primitive Register
   */
  struct ELPRIM
  : public reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >;

    using PRIMITIV  = regbits< type,  0, 16 >;  /**< Primitive Polynomial  */
  };

  /**
   * Error Location Enable Register
   */
  struct ELEN
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using ENINIT  = regbits< type,  0, 14 >;  /**< Initial Number of Bits in the Codeword  */
  };

  /**
   * Error Location Disable Register
   */
  struct ELDIS
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using DIS  = regbits< type,  0,  1 >;  /**< Disable Error Location Engine  */
  };

  /**
   * Error Location Status Register
   */
  struct ELSR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using BUSY  = regbits< type,  0,  1 >;  /**< Error Location Engine Busy  */
  };

  /**
   * Error Location Interrupt Enable register
   */
  struct ELIER
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >;

    using DONE  = regbits< type,  0,  1 >;  /**< Computation Terminated Interrupt Enable  */
  };

  /**
   * Error Location Interrupt Disable Register
   */
  struct ELIDR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using DONE  = regbits< type,  0,  1 >;  /**< Computation Terminated Interrupt Disable  */
  };

  /**
   * Error Location Interrupt Mask Register
   */
  struct ELIMR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using DONE  = regbits< type,  0,  1 >;  /**< Computation Terminated Interrupt Mask  */
  };

  /**
   * Error Location Interrupt Status Register
   */
  struct ELISR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using DONE     = regbits< type,  0,  1 >;  /**< Computation Terminated Interrupt Status  */
    using ERR_CNT  = regbits< type,  8,  5 >;  /**< Error Counter Value                      */
  };

  /**
   * PMECC SIGMA 0 Register
   */
  struct SIGMA0
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA0
    using SIGMA0_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 1 Register
   */
  struct SIGMA1
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA1
    using SIGMA1_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 2 Register
   */
  struct SIGMA2
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA2
    using SIGMA2_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 3 Register
   */
  struct SIGMA3
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA3
    using SIGMA3_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 4 Register
   */
  struct SIGMA4
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA4
    using SIGMA4_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 5 Register
   */
  struct SIGMA5
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA5
    using SIGMA5_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 6 Register
   */
  struct SIGMA6
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA6
    using SIGMA6_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 7 Register
   */
  struct SIGMA7
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA7
    using SIGMA7_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 8 Register
   */
  struct SIGMA8
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA8
    using SIGMA8_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 9 Register
   */
  struct SIGMA9
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA9
    using SIGMA9_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 10 Register
   */
  struct SIGMA10
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA10
    using SIGMA10_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 11 Register
   */
  struct SIGMA11
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA11
    using SIGMA11_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 12 Register
   */
  struct SIGMA12
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA12
    using SIGMA12_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 13 Register
   */
  struct SIGMA13
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA13
    using SIGMA13_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 14 Register
   */
  struct SIGMA14
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA14
    using SIGMA14_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 15 Register
   */
  struct SIGMA15
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA15
    using SIGMA15_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 16 Register
   */
  struct SIGMA16
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA16
    using SIGMA16_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 17 Register
   */
  struct SIGMA17
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA17
    using SIGMA17_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 18 Register
   */
  struct SIGMA18
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA18
    using SIGMA18_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 19 Register
   */
  struct SIGMA19
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA19
    using SIGMA19_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 20 Register
   */
  struct SIGMA20
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA20
    using SIGMA20_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 21 Register
   */
  struct SIGMA21
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA21
    using SIGMA21_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 22 Register
   */
  struct SIGMA22
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA22
    using SIGMA22_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 23 Register
   */
  struct SIGMA23
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA23
    using SIGMA23_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC SIGMA 24 Register
   */
  struct SIGMA24
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SIGMA24
    using SIGMA24_ = regbits< type,  0, 14 >;  /**< Coefficient of Degree x in the SIGMA Polynomial.  */
  };

  /**
   * PMECC Error Location 0 Register
   */
  struct EL[%s]
  : public reg< uint32_t, base_addr + 0x0000008c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using ERRLOCN  = regbits< type,  0, 14 >;  /**< Error Position within the Set {sector area, spare area}.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PMERRLOC_HPP_INCLUDED
