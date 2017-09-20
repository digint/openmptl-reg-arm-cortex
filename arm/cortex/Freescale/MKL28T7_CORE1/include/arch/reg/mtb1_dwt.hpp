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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE1.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE1
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE1 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MTB1_DWT_HPP_INCLUDED
#define ARCH_REG_MTB1_DWT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * MTB data watchpoint and trace
 */
struct MTB1_DWT
{
  static constexpr reg_addr_t base_addr = 0xf1001000;

  /**
   * MTB DWT Control Register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0, ro, 0x2F000000 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x2F000000 >;

    using DWTCFGCTRL  = regbits< type,  0, 28 >;  /**< DWT configuration controls  */
    using NUMCMP      = regbits< type, 28,  4 >;  /**< Number of comparators       */
  };

  /**
   * MTB_DWT Comparator Register
   */
  struct COMP%s
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using COMP  = regbits< type,  0, 32 >;  /**< Reference value for comparison  */
  };

  /**
   * MTB_DWT Comparator Mask Register
   */
  struct MASK%s
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using MASK  = regbits< type,  0,  5 >;  /**< MASK  */
  };

  /**
   * MTB_DWT Comparator Function Register 0
   */
  struct FCT0
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using FUNCTION    = regbits< type,  0,  4 >;  /**< Function              */
    using DATAVMATCH  = regbits< type,  8,  1 >;  /**< Data Value Match      */
    using DATAVSIZE   = regbits< type, 10,  2 >;  /**< Data Value Size       */
    using DATAVADDR0  = regbits< type, 12,  4 >;  /**< Data Value Address 0  */
    using MATCHED     = regbits< type, 24,  1 >;  /**< Comparator match      */
  };

  /**
   * MTB_DWT Comparator Function Register 1
   */
  struct FCT1
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using FUNCTION  = regbits< type,  0,  4 >;  /**< Function          */
    using MATCHED   = regbits< type, 24,  1 >;  /**< Comparator match  */
  };

  /**
   * MTB_DWT Trace Buffer Control Register
   */
  struct TBCTRL
  : public reg< uint32_t, base_addr + 0x200, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x20000000 >;

    using ACOMP0   = regbits< type,  0,  1 >;  /**< Action based on Comparator 0 match  */
    using ACOMP1   = regbits< type,  1,  1 >;  /**< Action based on Comparator 1 match  */
    using NUMCOMP  = regbits< type, 28,  4 >;  /**< Number of Comparators               */
  };

  /**
   * Device Configuration Register
   */
  struct DEVICECFG
  : public reg< uint32_t, base_addr + 0xfc8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfc8, ro, 0 >;

    // fixme: Field name equals parent register name: DEVICECFG
    using DEVICECFG_ = regbits< type,  0, 32 >;  /**< DEVICECFG  */
  };

  /**
   * Device Type Identifier Register
   */
  struct DEVICETYPID
  : public reg< uint32_t, base_addr + 0xfcc, ro, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0xfcc, ro, 0x4 >;

    // fixme: Field name equals parent register name: DEVICETYPID
    using DEVICETYPID_ = regbits< type,  0, 32 >;  /**< DEVICETYPID  */
  };

  /**
   * Peripheral ID Register
   */
  struct PERIPHID%s
  : public reg< uint32_t, base_addr + 0xfd0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfd0, ro, 0 >;

    using PERIPHID  = regbits< type,  0, 32 >;  /**< PERIPHID  */
  };

  /**
   * Component ID Register
   */
  struct COMPID%s
  : public reg< uint32_t, base_addr + 0xff0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xff0, ro, 0 >;

    using COMPID  = regbits< type,  0, 32 >;  /**< Component ID  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MTB1_DWT_HPP_INCLUDED
