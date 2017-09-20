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
//  Import from CMSIS-SVD: "Freescale/MKV58F24.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV58F24
//  series: Kinetis_V
//  version: 1.6
//  description: MKV58F24 Freescale Microcontroller
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
    using SEL0_ = regbits< type,  0,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT0 (refer to Functional Description section for input/output assignment)  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT1 (refer to Functional Description section for input/output assignment)  */
  };

  /**
   * Crossbar B Select Register 1
   */
  struct SEL1
  : public reg< uint16_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 >;

    using SEL2  = regbits< type,  0,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT2 (refer to Functional Description section for input/output assignment)  */
    using SEL3  = regbits< type,  8,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT3 (refer to Functional Description section for input/output assignment)  */
  };

  /**
   * Crossbar B Select Register 2
   */
  struct SEL2
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using SEL4  = regbits< type,  0,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT4 (refer to Functional Description section for input/output assignment)  */
    using SEL5  = regbits< type,  8,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT5 (refer to Functional Description section for input/output assignment)  */
  };

  /**
   * Crossbar B Select Register 3
   */
  struct SEL3
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    using SEL6  = regbits< type,  0,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT6 (refer to Functional Description section for input/output assignment)  */
    using SEL7  = regbits< type,  8,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT7 (refer to Functional Description section for input/output assignment)  */
  };

  /**
   * Crossbar B Select Register 4
   */
  struct SEL4
  : public reg< uint16_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0 >;

    using SEL8  = regbits< type,  0,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT8 (refer to Functional Description section for input/output assignment)  */
    using SEL9  = regbits< type,  8,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT9 (refer to Functional Description section for input/output assignment)  */
  };

  /**
   * Crossbar B Select Register 5
   */
  struct SEL5
  : public reg< uint16_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0 >;

    using SEL10  = regbits< type,  0,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT10 (refer to Functional Description section for input/output assignment)  */
    using SEL11  = regbits< type,  8,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT11 (refer to Functional Description section for input/output assignment)  */
  };

  /**
   * Crossbar B Select Register 6
   */
  struct SEL6
  : public reg< uint16_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0 >;

    using SEL12  = regbits< type,  0,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT12 (refer to Functional Description section for input/output assignment)  */
    using SEL13  = regbits< type,  8,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT13 (refer to Functional Description section for input/output assignment)  */
  };

  /**
   * Crossbar B Select Register 7
   */
  struct SEL7
  : public reg< uint16_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0 >;

    using SEL14  = regbits< type,  0,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT14 (refer to Functional Description section for input/output assignment)  */
    using SEL15  = regbits< type,  8,  6 >;  /**< Input (XBARB_INn) to be muxed to XBARB_OUT15 (refer to Functional Description section for input/output assignment)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_XBARB_HPP_INCLUDED
