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

#ifndef ARCH_REG_OPACMP_HPP_INCLUDED
#define ARCH_REG_OPACMP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * OPACMP
 */
struct OPACMP
{
  static constexpr reg_addr_t base_addr = 0x40018000;

  /**
   * OPACR0
   */
  struct OPACR0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OPA0EN    = regbits< type,  0,  1 >;  /**< OPA0EN     */
    using OPC0MS    = regbits< type,  1,  1 >;  /**< OPC0MS     */
    using A0OFM     = regbits< type,  2,  1 >;  /**< A0OFM      */
    using A0RS      = regbits< type,  3,  1 >;  /**< A0RS       */
    using CMP0S     = regbits< type,  8,  1 >;  /**< CMP0S      */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * OFVCR0
   */
  struct OFVCR0
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using A0OF      = regbits< type,  0,  6 >;  /**< A0OF       */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * CMPIER0
   */
  struct CMPIER0
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CF0IEN    = regbits< type,  0,  1 >;  /**< CF0IEN     */
    using CR0IEN    = regbits< type,  1,  1 >;  /**< CR0IEN     */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * CMPRSR0
   */
  struct CMPRSR0
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CF0RAW    = regbits< type,  0,  1 >;  /**< CF0RAW     */
    using CR0RAW    = regbits< type,  1,  1 >;  /**< CR0RAW     */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * CMPISR0
   */
  struct CMPISR0
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CF0IS     = regbits< type,  0,  1 >;  /**< CF0IS      */
    using CR0IS     = regbits< type,  1,  1 >;  /**< CR0IS      */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * CMPICLR0
   */
  struct CMPICLR0
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CF0ICLR   = regbits< type,  0,  1 >;  /**< CF0ICLR    */
    using CR0ICLR   = regbits< type,  1,  1 >;  /**< CR0ICLR    */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * OPACR1
   */
  struct OPACR1
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OPA1EN    = regbits< type,  0,  1 >;  /**< OPA1EN     */
    using OPC1MS    = regbits< type,  1,  1 >;  /**< OPC1MS     */
    using A1OFM     = regbits< type,  2,  1 >;  /**< A1OFM      */
    using A1RS      = regbits< type,  3,  1 >;  /**< A1RS       */
    using CMP1S     = regbits< type,  8,  1 >;  /**< CMP1S      */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * OFVCR1
   */
  struct OFVCR1
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using A1OF      = regbits< type,  0,  6 >;  /**< A1OF       */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * CMPIER1
   */
  struct CMPIER1
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CF1IEN    = regbits< type,  0,  1 >;  /**< CF1IEN     */
    using CR1IEN    = regbits< type,  1,  1 >;  /**< CR1IEN     */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * CMPRSR1
   */
  struct CMPRSR1
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CF1RAW    = regbits< type,  0,  1 >;  /**< CF1RAW     */
    using CR1RAW    = regbits< type,  1,  1 >;  /**< CR1RAW     */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * CMPISR1
   */
  struct CMPISR1
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CF1IS     = regbits< type,  0,  1 >;  /**< CF1IS      */
    using CR1IS     = regbits< type,  1,  1 >;  /**< CR1IS      */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * CMPICLR1
   */
  struct CMPICLR1
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CF1ICLR   = regbits< type,  0,  1 >;  /**< CF1ICLR    */
    using CR1ICLR   = regbits< type,  1,  1 >;  /**< CR1ICLR    */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_OPACMP_HPP_INCLUDED
