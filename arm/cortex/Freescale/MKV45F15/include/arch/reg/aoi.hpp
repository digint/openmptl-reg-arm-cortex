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
//  Import from CMSIS-SVD: "Freescale/MKV45F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV45F15
//  series: Kinetis_V
//  version: 1.6
//  description: MKV45F15 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AOI_HPP_INCLUDED
#define ARCH_REG_AOI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AND/OR/INVERT module
 */
struct AOI
{
  static constexpr reg_addr_t base_addr = 0x4005b000;

  /**
   * Boolean Function Term 0 and 1 Configuration Register for EVENTn
   */
  struct BFCRT01%s
  : public reg< uint16_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0 >;

    using PT1_DC  = regbits< type,  0,  2 >;  /**< Product term 1, D input configuration  */
    using PT1_CC  = regbits< type,  2,  2 >;  /**< Product term 1, C input configuration  */
    using PT1_BC  = regbits< type,  4,  2 >;  /**< Product term 1, B input configuration  */
    using PT1_AC  = regbits< type,  6,  2 >;  /**< Product term 1, A input configuration  */
    using PT0_DC  = regbits< type,  8,  2 >;  /**< Product term 0, D input configuration  */
    using PT0_CC  = regbits< type, 10,  2 >;  /**< Product term 0, C input configuration  */
    using PT0_BC  = regbits< type, 12,  2 >;  /**< Product term 0, B input configuration  */
    using PT0_AC  = regbits< type, 14,  2 >;  /**< Product term 0, A input configuration  */
  };

  /**
   * Boolean Function Term 2 and 3 Configuration Register for EVENTn
   */
  struct BFCRT23%s
  : public reg< uint16_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 >;

    using PT3_DC  = regbits< type,  0,  2 >;  /**< Product term 3, D input configuration  */
    using PT3_CC  = regbits< type,  2,  2 >;  /**< Product term 3, C input configuration  */
    using PT3_BC  = regbits< type,  4,  2 >;  /**< Product term 3, B input configuration  */
    using PT3_AC  = regbits< type,  6,  2 >;  /**< Product term 3, A input configuration  */
    using PT2_DC  = regbits< type,  8,  2 >;  /**< Product term 2, D input configuration  */
    using PT2_CC  = regbits< type, 10,  2 >;  /**< Product term 2, C input configuration  */
    using PT2_BC  = regbits< type, 12,  2 >;  /**< Product term 2, B input configuration  */
    using PT2_AC  = regbits< type, 14,  2 >;  /**< Product term 2, A input configuration  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AOI_HPP_INCLUDED
