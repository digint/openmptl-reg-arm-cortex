/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Holtek/ht32f125x.svd"
//
//  name: HT32F125x
//  version: 1.0
//  description: This is the description for the Holtek HT32F125x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RSTCU_HPP_INCLUDED
#define ARCH_REG_RSTCU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * RSTCU
 */
struct RSTCU
{
  static constexpr reg_addr_t base_addr = 0x40088100;

  /**
   * RSTCU_GRSR
   */
  struct RSTCU_GRSR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSRSTF   = regbits< type,  0,  1 >;  /**< SYSRSTF    */
    using EXTRSTF   = regbits< type,  1,  1 >;  /**< EXTRSTF    */
    using WDTRSTF   = regbits< type,  2,  1 >;  /**< WDTRSTF    */
    using PORSTF    = regbits< type,  3,  1 >;  /**< PORSTF     */
    using RESERVED  = regbits< type,  4, 28 >;  /**< Reserved.  */
  };

  /**
   * RSTCU_APBPRSTR0
   */
  struct RSTCU_APBPRSTR0
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2CRST    = regbits< type,  0,  1 >;  /**< I2CRST     */
    using SPIRST    = regbits< type,  4,  1 >;  /**< SPIRST     */
    using URRST     = regbits< type,  8,  1 >;  /**< URRST      */
    using AFIORST   = regbits< type, 14,  1 >;  /**< AFIORST    */
    using EXTIRST   = regbits< type, 15,  1 >;  /**< EXTIRST    */
    using PARST     = regbits< type, 16,  1 >;  /**< PARST      */
    using PBRST     = regbits< type, 17,  1 >;  /**< PBRST      */
    using RESERVED  = regbits< type, 18, 14 >;  /**< Reserved.  */
  };

  /**
   * RSTCU_APBPRSTR1
   */
  struct RSTCU_APBPRSTR1
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDTRST    = regbits< type,  4,  1 >;  /**< WDTRST     */
    using GPTM0RST  = regbits< type,  8,  1 >;  /**< GPTM0RST   */
    using GPTM1RST  = regbits< type,  9,  1 >;  /**< GPTM1RST   */
    using OPA0RST   = regbits< type, 22,  1 >;  /**< OPA0RST    */
    using OPA1RST   = regbits< type, 23,  1 >;  /**< OPA1RST    */
    using ADCRST    = regbits< type, 24,  1 >;  /**< ADCRST     */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RSTCU_HPP_INCLUDED
