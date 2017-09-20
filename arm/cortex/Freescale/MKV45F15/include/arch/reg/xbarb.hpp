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

#ifndef ARCH_REG_XBARB_HPP_INCLUDED
#define ARCH_REG_XBARB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Crossbar Switch
 */
struct XBARB
{
  static constexpr reg_addr_t base_addr = 0x4005a000;

  /**
   * Crossbar B Select Register 0
   */
  struct SEL0
  : public reg< uint16_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0 >;

    // fixme: Field name equals parent register name: SEL0
    using SEL0_ = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL1  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar B Select Register 1
   */
  struct SEL1
  : public reg< uint16_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 >;

    using SEL2  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL3  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar B Select Register 2
   */
  struct SEL2
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using SEL4  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL5  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar B Select Register 3
   */
  struct SEL3
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    using SEL6  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL7  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar B Select Register 4
   */
  struct SEL4
  : public reg< uint16_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0 >;

    using SEL8  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL9  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar B Select Register 5
   */
  struct SEL5
  : public reg< uint16_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0 >;

    using SEL10  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL11  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar B Select Register 6
   */
  struct SEL6
  : public reg< uint16_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0 >;

    using SEL12  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL13  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar B Select Register 7
   */
  struct SEL7
  : public reg< uint16_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0 >;

    using SEL14  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL15  = regbits< type,  8,  5 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_XBARB_HPP_INCLUDED
