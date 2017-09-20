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
//  Import from CMSIS-SVD: "Freescale/MK20F12.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK20F12
//  series: Kinetis_K
//  version: 1.6
//  description: MK20F12 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MPU_HPP_INCLUDED
#define ARCH_REG_MPU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Memory protection unit
 */
struct MPU
{
  static constexpr reg_addr_t base_addr = 0x4000d000;

  /**
   * Control/Error Status Register
   */
  struct CESR
  : public reg< uint32_t, base_addr + 0, rw, 0x818201 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x818201 >;

    using VLD    = regbits< type,  0,  1 >;  /**< Valid (global enable/disable for the MPU)  */
    using NRGD   = regbits< type,  8,  4 >;  /**< Number of region descriptors               */
    using NSP    = regbits< type, 12,  4 >;  /**< Number of slave ports                      */
    using HRL    = regbits< type, 16,  4 >;  /**< Hardware revision level                    */
    using SPERR  = regbits< type, 24,  8 >;  /**< Slave port n error                         */
  };

  /**
   * Error Address Register, Slave Port n
   */
  struct EAR%s
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    using EADDR  = regbits< type,  0, 32 >;  /**< Error address  */
  };

  /**
   * Error Detail Register, Slave Port n
   */
  struct EDR%s
  : public reg< uint32_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0 >;

    using ERW    = regbits< type,  0,  1 >;  /**< Error read/write              */
    using EATTR  = regbits< type,  1,  3 >;  /**< Error attributes              */
    using EMN    = regbits< type,  4,  4 >;  /**< Error master number           */
    using EPID   = regbits< type,  8,  8 >;  /**< Error process identification  */
    using EACD   = regbits< type, 16, 16 >;  /**< Error access control detail   */
  };

  /**
   * Region Descriptor n, Word 0
   */
  struct RGD%s_WORD0
  : public reg< uint32_t, base_addr + 0x400, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0 >;

    using SRTADDR  = regbits< type,  5, 27 >;  /**< Start address  */
  };

  /**
   * Region Descriptor n, Word 1
   */
  struct RGD%s_WORD1
  : public reg< uint32_t, base_addr + 0x404, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0xFFFFFFFF >;

    using ENDADDR  = regbits< type,  5, 27 >;  /**< End address  */
  };

  /**
   * Region Descriptor n, Word 2
   */
  struct RGD%s_WORD2
  : public reg< uint32_t, base_addr + 0x408, rw, 0x61F7DF >
  {
    using type = reg< uint32_t, base_addr + 0x408, rw, 0x61F7DF >;

    using M0UM  = regbits< type,  0,  3 >;  /**< Bus master 0 user mode access control        */
    using M0SM  = regbits< type,  3,  2 >;  /**< Bus master 0 supervisor mode access control  */
    using M0PE  = regbits< type,  5,  1 >;  /**< Bus master 0 process identifier enable       */
    using M1UM  = regbits< type,  6,  3 >;  /**< Bus master 1 user mode access control        */
    using M1SM  = regbits< type,  9,  2 >;  /**< Bus master 1 supervisor mode access control  */
    using M1PE  = regbits< type, 11,  1 >;  /**< Bus master 1 process identifier enable       */
    using M2UM  = regbits< type, 12,  3 >;  /**< Bus master 2 user mode access control        */
    using M2SM  = regbits< type, 15,  2 >;  /**< Bus master 2 supervisor mode access control  */
    using M2PE  = regbits< type, 17,  1 >;  /**< Bus master 2 process identifier enable       */
    using M3UM  = regbits< type, 18,  3 >;  /**< Bus master 3 user mode access control        */
    using M3SM  = regbits< type, 21,  2 >;  /**< Bus master 3 supervisor mode access control  */
    using M3PE  = regbits< type, 23,  1 >;  /**< Bus master 3 process identifier enable.      */
    using M4WE  = regbits< type, 24,  1 >;  /**< Bus master 4 write enable                    */
    using M4RE  = regbits< type, 25,  1 >;  /**< Bus master 4 read enable.                    */
    using M5WE  = regbits< type, 26,  1 >;  /**< Bus master 5 write enable                    */
    using M5RE  = regbits< type, 27,  1 >;  /**< Bus master 5 read enable.                    */
    using M6WE  = regbits< type, 28,  1 >;  /**< Bus master 6 write enable                    */
    using M6RE  = regbits< type, 29,  1 >;  /**< Bus master 6 read enable.                    */
    using M7WE  = regbits< type, 30,  1 >;  /**< Bus master 7 write enable                    */
    using M7RE  = regbits< type, 31,  1 >;  /**< Bus master 7 read enable.                    */
  };

  /**
   * Region Descriptor n, Word 3
   */
  struct RGD%s_WORD3
  : public reg< uint32_t, base_addr + 0x40c, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, rw, 0x1 >;

    using VLD      = regbits< type,  0,  1 >;  /**< Valid                    */
    using PIDMASK  = regbits< type, 16,  8 >;  /**< Process identifier mask  */
    using PID      = regbits< type, 24,  8 >;  /**< Process identifier       */
  };

  /**
   * Region Descriptor Alternate Access Control n
   */
  struct RGDAAC%s
  : public reg< uint32_t, base_addr + 0x800, rw, 0x61F7DF >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0x61F7DF >;

    using M0UM  = regbits< type,  0,  3 >;  /**< Bus master 0 user mode access control        */
    using M0SM  = regbits< type,  3,  2 >;  /**< Bus master 0 supervisor mode access control  */
    using M0PE  = regbits< type,  5,  1 >;  /**< Bus master 0 process identifier enable       */
    using M1UM  = regbits< type,  6,  3 >;  /**< Bus master 1 user mode access control        */
    using M1SM  = regbits< type,  9,  2 >;  /**< Bus master 1 supervisor mode access control  */
    using M1PE  = regbits< type, 11,  1 >;  /**< Bus master 1 process identifier enable       */
    using M2UM  = regbits< type, 12,  3 >;  /**< Bus master 2 user mode access control        */
    using M2SM  = regbits< type, 15,  2 >;  /**< Bus master 2 supervisor mode access control  */
    using M2PE  = regbits< type, 17,  1 >;  /**< Bus master 2 process identifier enable       */
    using M3UM  = regbits< type, 18,  3 >;  /**< Bus master 3 user mode access control        */
    using M3SM  = regbits< type, 21,  2 >;  /**< Bus master 3 supervisor mode access control  */
    using M3PE  = regbits< type, 23,  1 >;  /**< Bus master 3 process identifier enable.      */
    using M4WE  = regbits< type, 24,  1 >;  /**< Bus master 4 write enable                    */
    using M4RE  = regbits< type, 25,  1 >;  /**< Bus master 4 read enable.                    */
    using M5WE  = regbits< type, 26,  1 >;  /**< Bus master 5 write enable                    */
    using M5RE  = regbits< type, 27,  1 >;  /**< Bus master 5 read enable.                    */
    using M6WE  = regbits< type, 28,  1 >;  /**< Bus master 6 write enable                    */
    using M6RE  = regbits< type, 29,  1 >;  /**< Bus master 6 read enable.                    */
    using M7WE  = regbits< type, 30,  1 >;  /**< Bus master 7 write enable                    */
    using M7RE  = regbits< type, 31,  1 >;  /**< Bus master 7 read enable.                    */
  };
};
} // namespace mptl

#endif // ARCH_REG_MPU_HPP_INCLUDED
