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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9CN11.svd"
//
//  vendor: Atmel
//  name: AT91SAM9CN11
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9CN11 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Crypto engine, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9CN11.aspx for more)
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
    using ERR_CNT  = regbits< type,  8,  5 >;  /**< Error Counter value                      */
  };

  /**
   * PMECC SIGMA 0 Register
   */
  struct SIGMA[%s]
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SIGMAN  = regbits< type,  0, 14 >;
  };

  /**
   * PMECC Error Location 0 Register
   */
  struct EL[%s]
  : public reg< uint32_t, base_addr + 0x0000008c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using ERRLOCN  = regbits< type,  0, 14 >;  /**< Error Position within the set {sector area, spare area}.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PMERRLOC_HPP_INCLUDED
