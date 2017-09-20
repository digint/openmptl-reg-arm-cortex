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
//  Import from CMSIS-SVD: "Freescale/MKM14ZA5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKM14ZA5
//  series: Kinetis_M
//  version: 1.6
//  description: MKM14ZA5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_XBAR_HPP_INCLUDED
#define ARCH_REG_XBAR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Crossbar Switch
 */
struct XBAR
{
  static constexpr reg_addr_t base_addr = 0x40055000;

  /**
   * Crossbar Select Register 0
   */
  struct SEL0
  : public reg< uint16_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0 >;

    // fixme: Field name equals parent register name: SEL0
    using SEL0_ = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL1  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 1
   */
  struct SEL1
  : public reg< uint16_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 >;

    using SEL2  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL3  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 2
   */
  struct SEL2
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using SEL4  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL5  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 3
   */
  struct SEL3
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    using SEL6  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL7  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 4
   */
  struct SEL4
  : public reg< uint16_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0 >;

    using SEL8  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL9  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 5
   */
  struct SEL5
  : public reg< uint16_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0 >;

    using SEL10  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL11  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 6
   */
  struct SEL6
  : public reg< uint16_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0 >;

    using SEL12  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL13  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 7
   */
  struct SEL7
  : public reg< uint16_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0 >;

    using SEL14  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL15  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 8
   */
  struct SEL8
  : public reg< uint16_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0 >;

    using SEL16  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL17  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 9
   */
  struct SEL9
  : public reg< uint16_t, base_addr + 0x12, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0 >;

    using SEL18  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL19  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 10
   */
  struct SEL10
  : public reg< uint16_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0 >;

    using SEL20  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL21  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 11
   */
  struct SEL11
  : public reg< uint16_t, base_addr + 0x16, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0 >;

    using SEL22  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL23  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 12
   */
  struct SEL12
  : public reg< uint16_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0 >;

    using SEL24  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL25  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 13
   */
  struct SEL13
  : public reg< uint16_t, base_addr + 0x1a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a, rw, 0 >;

    using SEL26  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL27  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 14
   */
  struct SEL14
  : public reg< uint16_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0 >;

    using SEL28  = regbits< type,  0,  6 >;  /**< no description available  */
    using SEL29  = regbits< type,  8,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 15
   */
  struct SEL15
  : public reg< uint16_t, base_addr + 0x1e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e, rw, 0 >;

    using SEL30  = regbits< type,  0,  5 >;  /**< no description available  */
    using SEL31  = regbits< type,  8,  5 >;  /**< no description available  */
  };

  /**
   * Crossbar Select Register 16
   */
  struct SEL16
  : public reg< uint16_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0 >;

    using SEL32  = regbits< type,  0,  6 >;  /**< no description available  */
  };

  /**
   * Crossbar Control Register 0
   */
  struct CTRL0
  : public reg< uint16_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x22, rw, 0 >;

    using DEN0   = regbits< type,  0,  1 >;  /**< DMA Enable for XBAR_OUT0                     */
    using IEN0   = regbits< type,  1,  1 >;  /**< Interrupt Enable for XBAR_OUT0               */
    using EDGE0  = regbits< type,  2,  2 >;  /**< Active edge for edge detection on XBAR_OUT0  */
    using STS0   = regbits< type,  4,  1 >;  /**< Edge detection status for XBAR_OUT0          */
  };
};
} // namespace mptl

#endif // ARCH_REG_XBAR_HPP_INCLUDED
