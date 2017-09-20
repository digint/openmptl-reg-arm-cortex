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
//  Import from CMSIS-SVD: "Freescale/MK10D5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK10D5
//  series: Kinetis_K
//  version: 1.6
//  description: MK10D5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PTC_HPP_INCLUDED
#define ARCH_REG_PTC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General Purpose Input/Output
 */
struct PTC
{
  static constexpr reg_addr_t base_addr = 0x400ff080;

  /**
   * Port Data Output Register
   */
  struct PDOR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using PDO  = regbits< type,  0, 32 >;  /**< Port Data Output  */
  };

  /**
   * Port Set Output Register
   */
  struct PSOR
  : public reg< uint32_t, base_addr + 0x4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0 >;

    using PTSO  = regbits< type,  0, 32 >;  /**< Port Set Output  */
  };

  /**
   * Port Clear Output Register
   */
  struct PCOR
  : public reg< uint32_t, base_addr + 0x8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0 >;

    using PTCO  = regbits< type,  0, 32 >;  /**< Port Clear Output  */
  };

  /**
   * Port Toggle Output Register
   */
  struct PTOR
  : public reg< uint32_t, base_addr + 0xc, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, wo, 0 >;

    using PTTO  = regbits< type,  0, 32 >;  /**< Port Toggle Output  */
  };

  /**
   * Port Data Input Register
   */
  struct PDIR
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    using PDI  = regbits< type,  0, 32 >;  /**< Port Data Input  */
  };

  /**
   * Port Data Direction Register
   */
  struct PDDR
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using PDD  = regbits< type,  0, 32 >;  /**< Port data direction  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PTC_HPP_INCLUDED
