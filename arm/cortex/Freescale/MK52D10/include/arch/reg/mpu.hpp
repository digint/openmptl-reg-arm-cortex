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
//  Import from CMSIS-SVD: "Freescale/MK52D10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK52D10
//  series: Kinetis_K
//  version: 1.6
//  description: MK52D10 Freescale Microcontroller
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
  : public reg< uint32_t, base_addr + 0, rw, 0x815101 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x815101 >;

    using VLD    = regbits< type,  0,  1 >;  /**< Valid                         */
    using NRGD   = regbits< type,  8,  4 >;  /**< Number Of Region Descriptors  */
    using NSP    = regbits< type, 12,  4 >;  /**< Number Of Slave Ports         */
    using HRL    = regbits< type, 16,  4 >;  /**< Hardware Revision Level       */
    using SPERR  = regbits< type, 27,  5 >;  /**< Slave Port n Error            */
  };

  /**
   * Error Address Register, slave port n
   */
  struct EAR%s
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    using EADDR  = regbits< type,  0, 32 >;  /**< Error Address  */
  };

  /**
   * Error Detail Register, slave port n
   */
  struct EDR%s
  : public reg< uint32_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0 >;

    using ERW    = regbits< type,  0,  1 >;  /**< Error Read/Write             */
    using EATTR  = regbits< type,  1,  3 >;  /**< Error Attributes             */
    using EMN    = regbits< type,  4,  4 >;  /**< Error Master Number          */
    using EACD   = regbits< type, 16, 16 >;  /**< Error Access Control Detail  */
  };

  /**
   * Region Descriptor n, Word 0
   */
  struct RGD%s_WORD0
  : public reg< uint32_t, base_addr + 0x400, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0 >;

    using SRTADDR  = regbits< type,  5, 27 >;  /**< Start Address  */
  };

  /**
   * Region Descriptor n, Word 1
   */
  struct RGD%s_WORD1
  : public reg< uint32_t, base_addr + 0x404, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0xFFFFFFFF >;

    using ENDADDR  = regbits< type,  5, 27 >;  /**< End Address  */
  };

  /**
   * Region Descriptor n, Word 2
   */
  struct RGD%s_WORD2
  : public reg< uint32_t, base_addr + 0x408, rw, 0x61F7DF >
  {
    using type = reg< uint32_t, base_addr + 0x408, rw, 0x61F7DF >;

    using M0UM  = regbits< type,  0,  3 >;  /**< Bus Master 0 User Mode Access Control        */
    using M0SM  = regbits< type,  3,  2 >;  /**< Bus Master 0 Supervisor Mode Access Control  */
    using M1UM  = regbits< type,  6,  3 >;  /**< Bus Master 1 User Mode Access Control        */
    using M1SM  = regbits< type,  9,  2 >;  /**< Bus Master 1 Supervisor Mode Access Control  */
    using M2UM  = regbits< type, 12,  3 >;  /**< Bus Master 2 User Mode Access control        */
    using M2SM  = regbits< type, 15,  2 >;  /**< Bus Master 2 Supervisor Mode Access Control  */
    using M3UM  = regbits< type, 18,  3 >;  /**< Bus Master 3 User Mode Access Control        */
    using M3SM  = regbits< type, 21,  2 >;  /**< Bus Master 3 Supervisor Mode Access Control  */
    using M4WE  = regbits< type, 24,  1 >;  /**< Bus Master 4 Write Enable                    */
    using M4RE  = regbits< type, 25,  1 >;  /**< Bus Master 4 Read Enable                     */
    using M5WE  = regbits< type, 26,  1 >;  /**< Bus Master 5 Write Enable                    */
    using M5RE  = regbits< type, 27,  1 >;  /**< Bus Master 5 Read Enable                     */
    using M6WE  = regbits< type, 28,  1 >;  /**< Bus Master 6 Write Enable                    */
    using M6RE  = regbits< type, 29,  1 >;  /**< Bus Master 6 Read Enable                     */
    using M7WE  = regbits< type, 30,  1 >;  /**< Bus Master 7 Write Enable                    */
    using M7RE  = regbits< type, 31,  1 >;  /**< Bus Master 7 Read Enable                     */
  };

  /**
   * Region Descriptor n, Word 3
   */
  struct RGD%s_WORD3
  : public reg< uint32_t, base_addr + 0x40c, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, rw, 0x1 >;

    using VLD  = regbits< type,  0,  1 >;  /**< Valid  */
  };

  /**
   * Region Descriptor Alternate Access Control n
   */
  struct RGDAAC%s
  : public reg< uint32_t, base_addr + 0x800, rw, 0x61F7DF >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0x61F7DF >;

    using M0UM  = regbits< type,  0,  3 >;  /**< Bus Master 0 User Mode Access Control        */
    using M0SM  = regbits< type,  3,  2 >;  /**< Bus Master 0 Supervisor Mode Access Control  */
    using M1UM  = regbits< type,  6,  3 >;  /**< Bus Master 1 User Mode Access Control        */
    using M1SM  = regbits< type,  9,  2 >;  /**< Bus Master 1 Supervisor Mode Access Control  */
    using M2UM  = regbits< type, 12,  3 >;  /**< Bus Master 2 User Mode Access Control        */
    using M2SM  = regbits< type, 15,  2 >;  /**< Bus Master 2 Supervisor Mode Access Control  */
    using M3UM  = regbits< type, 18,  3 >;  /**< Bus Master 3 User Mode Access Control        */
    using M3SM  = regbits< type, 21,  2 >;  /**< Bus Master 3 Supervisor Mode Access Control  */
    using M4WE  = regbits< type, 24,  1 >;  /**< Bus Master 4 Write Enable                    */
    using M4RE  = regbits< type, 25,  1 >;  /**< Bus Master 4 Read Enable                     */
    using M5WE  = regbits< type, 26,  1 >;  /**< Bus Master 5 Write Enable                    */
    using M5RE  = regbits< type, 27,  1 >;  /**< Bus Master 5 Read Enable                     */
    using M6WE  = regbits< type, 28,  1 >;  /**< Bus Master 6 Write Enable                    */
    using M6RE  = regbits< type, 29,  1 >;  /**< Bus Master 6 Read Enable                     */
    using M7WE  = regbits< type, 30,  1 >;  /**< Bus Master 7 Write Enable                    */
    using M7RE  = regbits< type, 31,  1 >;  /**< Bus Master 7 Read Enable                     */
  };
};
} // namespace mptl

#endif // ARCH_REG_MPU_HPP_INCLUDED
