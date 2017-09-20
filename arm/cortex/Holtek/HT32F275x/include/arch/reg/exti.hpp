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
//  Import from CMSIS-SVD: "Holtek/ht32f275x.svd"
//
//  name: HT32F275x
//  version: 1.0
//  description: This is the description for the Holtek HT32F275x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EXTI_HPP_INCLUDED
#define ARCH_REG_EXTI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * EXTI
 */
struct EXTI
{
  static constexpr reg_addr_t base_addr = 0x40024000;

  /**
   * EXTI_CFGR0
   */
  struct EXTI_CFGR0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR1
   */
  struct EXTI_CFGR1
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR2
   */
  struct EXTI_CFGR2
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR3
   */
  struct EXTI_CFGR3
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR4
   */
  struct EXTI_CFGR4
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR5
   */
  struct EXTI_CFGR5
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR6
   */
  struct EXTI_CFGR6
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR7
   */
  struct EXTI_CFGR7
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR8
   */
  struct EXTI_CFGR8
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR9
   */
  struct EXTI_CFGR9
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR10
   */
  struct EXTI_CFGR10
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR11
   */
  struct EXTI_CFGR11
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR12
   */
  struct EXTI_CFGR12
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR13
   */
  struct EXTI_CFGR13
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR14
   */
  struct EXTI_CFGR14
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CFGR15
   */
  struct EXTI_CFGR15
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBCNT    = regbits< type,  0, 28 >;  /**< DBCNT    */
    using SRCTYPE  = regbits< type, 28,  3 >;  /**< SRCTYPE  */
    using DBEN     = regbits< type, 31,  1 >;  /**< DBEN     */
  };

  /**
   * EXTI_CR
   */
  struct EXTI_CR
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI0EN   = regbits< type,  0,  1 >;  /**< EXTI0EN    */
    using EXTI1EN   = regbits< type,  1,  1 >;  /**< EXTI1EN    */
    using EXTI2EN   = regbits< type,  2,  1 >;  /**< EXTI2EN    */
    using EXTI3EN   = regbits< type,  3,  1 >;  /**< EXTI3EN    */
    using EXTI4EN   = regbits< type,  4,  1 >;  /**< EXTI4EN    */
    using EXTI5EN   = regbits< type,  5,  1 >;  /**< EXTI5EN    */
    using EXTI6EN   = regbits< type,  6,  1 >;  /**< EXTI6EN    */
    using EXTI7EN   = regbits< type,  7,  1 >;  /**< EXTI7EN    */
    using EXTI8EN   = regbits< type,  8,  1 >;  /**< EXTI8EN    */
    using EXTI9EN   = regbits< type,  9,  1 >;  /**< EXTI9EN    */
    using EXTI10EN  = regbits< type, 10,  1 >;  /**< EXTI10EN   */
    using EXTI11EN  = regbits< type, 11,  1 >;  /**< EXTI11EN   */
    using EXTI12EN  = regbits< type, 12,  1 >;  /**< EXTI12EN   */
    using EXTI13EN  = regbits< type, 13,  1 >;  /**< EXTI13EN   */
    using EXTI14EN  = regbits< type, 14,  1 >;  /**< EXTI14EN   */
    using EXTI15EN  = regbits< type, 15,  1 >;  /**< EXTI15EN   */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * EXTI_EDGEFLGR
   */
  struct EXTI_EDGEFLGR
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI0EDF   = regbits< type,  0,  1 >;  /**< EXTI0EDF   */
    using EXTI1EDF   = regbits< type,  1,  1 >;  /**< EXTI1EDF   */
    using EXTI2EDF   = regbits< type,  2,  1 >;  /**< EXTI2EDF   */
    using EXTI3EDF   = regbits< type,  3,  1 >;  /**< EXTI3EDF   */
    using EXTI4EDF   = regbits< type,  4,  1 >;  /**< EXTI4EDF   */
    using EXTI5EDF   = regbits< type,  5,  1 >;  /**< EXTI5EDF   */
    using EXTI6EDF   = regbits< type,  6,  1 >;  /**< EXTI6EDF   */
    using EXTI7EDF   = regbits< type,  7,  1 >;  /**< EXTI7EDF   */
    using EXTI8EDF   = regbits< type,  8,  1 >;  /**< EXTI8EDF   */
    using EXTI9EDF   = regbits< type,  9,  1 >;  /**< EXTI9EDF   */
    using EXTI10EDF  = regbits< type, 10,  1 >;  /**< EXTI10EDF  */
    using EXTI11EDF  = regbits< type, 11,  1 >;  /**< EXTI11EDF  */
    using EXTI12EDF  = regbits< type, 12,  1 >;  /**< EXTI12EDF  */
    using EXTI13EDF  = regbits< type, 13,  1 >;  /**< EXTI13EDF  */
    using EXTI14EDF  = regbits< type, 14,  1 >;  /**< EXTI14EDF  */
    using EXTI15EDF  = regbits< type, 15,  1 >;  /**< EXTI15EDF  */
    using RESERVED   = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * EXTI_EDGESR
   */
  struct EXTI_EDGESR
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI0EDS   = regbits< type,  0,  1 >;  /**< EXTI0EDS   */
    using EXTI1EDS   = regbits< type,  1,  1 >;  /**< EXTI1EDS   */
    using EXTI2EDS   = regbits< type,  2,  1 >;  /**< EXTI2EDS   */
    using EXTI3EDS   = regbits< type,  3,  1 >;  /**< EXTI3EDS   */
    using EXTI4EDS   = regbits< type,  4,  1 >;  /**< EXTI4EDS   */
    using EXTI5EDS   = regbits< type,  5,  1 >;  /**< EXTI5EDS   */
    using EXTI6EDS   = regbits< type,  6,  1 >;  /**< EXTI6EDS   */
    using EXTI7EDS   = regbits< type,  7,  1 >;  /**< EXTI7EDS   */
    using EXTI8EDS   = regbits< type,  8,  1 >;  /**< EXTI8EDS   */
    using EXTI9EDS   = regbits< type,  9,  1 >;  /**< EXTI9EDS   */
    using EXTI10EDS  = regbits< type, 10,  1 >;  /**< EXTI10EDS  */
    using EXTI11EDS  = regbits< type, 11,  1 >;  /**< EXTI11EDS  */
    using EXTI12EDS  = regbits< type, 12,  1 >;  /**< EXTI12EDS  */
    using EXTI13EDS  = regbits< type, 13,  1 >;  /**< EXTI13EDS  */
    using EXTI14EDS  = regbits< type, 14,  1 >;  /**< EXTI14EDS  */
    using EXTI15EDS  = regbits< type, 15,  1 >;  /**< EXTI15EDS  */
    using RESERVED   = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * EXTI_SSCR
   */
  struct EXTI_SSCR
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI0SC   = regbits< type,  0,  1 >;  /**< EXTI0SC    */
    using EXTI1SC   = regbits< type,  1,  1 >;  /**< EXTI1SC    */
    using EXTI2SC   = regbits< type,  2,  1 >;  /**< EXTI2SC    */
    using EXTI3SC   = regbits< type,  3,  1 >;  /**< EXTI3SC    */
    using EXTI4SC   = regbits< type,  4,  1 >;  /**< EXTI4SC    */
    using EXTI5SC   = regbits< type,  5,  1 >;  /**< EXTI5SC    */
    using EXTI6SC   = regbits< type,  6,  1 >;  /**< EXTI6SC    */
    using EXTI7SC   = regbits< type,  7,  1 >;  /**< EXTI7SC    */
    using EXTI8SC   = regbits< type,  8,  1 >;  /**< EXTI8SC    */
    using EXTI9SC   = regbits< type,  9,  1 >;  /**< EXTI9SC    */
    using EXTI10SC  = regbits< type, 10,  1 >;  /**< EXTI10SC   */
    using EXTI11SC  = regbits< type, 11,  1 >;  /**< EXTI11SC   */
    using EXTI12SC  = regbits< type, 12,  1 >;  /**< EXTI12SC   */
    using EXTI13SC  = regbits< type, 13,  1 >;  /**< EXTI13SC   */
    using EXTI14SC  = regbits< type, 14,  1 >;  /**< EXTI14SC   */
    using EXTI15SC  = regbits< type, 15,  1 >;  /**< EXTI15SC   */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * EXTI_WAKUPCR
   */
  struct EXTI_WAKUPCR
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI0WEN   = regbits< type,  0,  1 >;  /**< EXTI0WEN   */
    using EXTI1WEN   = regbits< type,  1,  1 >;  /**< EXTI1WEN   */
    using EXTI2WEN   = regbits< type,  2,  1 >;  /**< EXTI2WEN   */
    using EXTI3WEN   = regbits< type,  3,  1 >;  /**< EXTI3WEN   */
    using EXTI4WEN   = regbits< type,  4,  1 >;  /**< EXTI4WEN   */
    using EXTI5WEN   = regbits< type,  5,  1 >;  /**< EXTI5WEN   */
    using EXTI6WEN   = regbits< type,  6,  1 >;  /**< EXTI6WEN   */
    using EXTI7WEN   = regbits< type,  7,  1 >;  /**< EXTI7WEN   */
    using EXTI8WEN   = regbits< type,  8,  1 >;  /**< EXTI8WEN   */
    using EXTI9WEN   = regbits< type,  9,  1 >;  /**< EXTI9WEN   */
    using EXTI10WEN  = regbits< type, 10,  1 >;  /**< EXTI10WEN  */
    using EXTI11WEN  = regbits< type, 11,  1 >;  /**< EXTI11WEN  */
    using EXTI12WEN  = regbits< type, 12,  1 >;  /**< EXTI12WEN  */
    using EXTI13WEN  = regbits< type, 13,  1 >;  /**< EXTI13WEN  */
    using EXTI14WEN  = regbits< type, 14,  1 >;  /**< EXTI14WEN  */
    using EXTI15WEN  = regbits< type, 15,  1 >;  /**< EXTI15WEN  */
    using EVWUPIEN   = regbits< type, 31,  1 >;  /**< EVWUPIEN   */
  };

  /**
   * EXTI_WAKUPPOLR
   */
  struct EXTI_WAKUPPOLR
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI0POL   = regbits< type,  0,  1 >;  /**< EXTI0POL   */
    using EXTI1POL   = regbits< type,  1,  1 >;  /**< EXTI1POL   */
    using EXTI2POL   = regbits< type,  2,  1 >;  /**< EXTI2POL   */
    using EXTI3POL   = regbits< type,  3,  1 >;  /**< EXTI3POL   */
    using EXTI4POL   = regbits< type,  4,  1 >;  /**< EXTI4POL   */
    using EXTI5POL   = regbits< type,  5,  1 >;  /**< EXTI5POL   */
    using EXTI6POL   = regbits< type,  6,  1 >;  /**< EXTI6POL   */
    using EXTI7POL   = regbits< type,  7,  1 >;  /**< EXTI7POL   */
    using EXTI8POL   = regbits< type,  8,  1 >;  /**< EXTI8POL   */
    using EXTI9POL   = regbits< type,  9,  1 >;  /**< EXTI9POL   */
    using EXTI10POL  = regbits< type, 10,  1 >;  /**< EXTI10POL  */
    using EXTI11POL  = regbits< type, 11,  1 >;  /**< EXTI11POL  */
    using EXTI12POL  = regbits< type, 12,  1 >;  /**< EXTI12POL  */
    using EXTI13POL  = regbits< type, 13,  1 >;  /**< EXTI13POL  */
    using EXTI14POL  = regbits< type, 14,  1 >;  /**< EXTI14POL  */
    using EXTI15POL  = regbits< type, 15,  1 >;  /**< EXTI15POL  */
    using RESERVED   = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * EXTI_WAKUPFLG
   */
  struct EXTI_WAKUPFLG
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI0WFL   = regbits< type,  0,  1 >;  /**< EXTI0WFL   */
    using EXTI1WFL   = regbits< type,  1,  1 >;  /**< EXTI1WFL   */
    using EXTI2WFL   = regbits< type,  2,  1 >;  /**< EXTI2WFL   */
    using EXTI3WFL   = regbits< type,  3,  1 >;  /**< EXTI3WFL   */
    using EXTI4WFL   = regbits< type,  4,  1 >;  /**< EXTI4WFL   */
    using EXTI5WFL   = regbits< type,  5,  1 >;  /**< EXTI5WFL   */
    using EXTI6WFL   = regbits< type,  6,  1 >;  /**< EXTI6WFL   */
    using EXTI7WFL   = regbits< type,  7,  1 >;  /**< EXTI7WFL   */
    using EXTI8WFL   = regbits< type,  8,  1 >;  /**< EXTI8WFL   */
    using EXTI9WFL   = regbits< type,  9,  1 >;  /**< EXTI9WFL   */
    using EXTI10WFL  = regbits< type, 10,  1 >;  /**< EXTI10WFL  */
    using EXTI11WFL  = regbits< type, 11,  1 >;  /**< EXTI11WFL  */
    using EXTI12WFL  = regbits< type, 12,  1 >;  /**< EXTI12WFL  */
    using EXTI13WFL  = regbits< type, 13,  1 >;  /**< EXTI13WFL  */
    using EXTI14WFL  = regbits< type, 14,  1 >;  /**< EXTI14WFL  */
    using EXTI15WFL  = regbits< type, 15,  1 >;  /**< EXTI15WFL  */
    using RESERVED   = regbits< type, 16, 16 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXTI_HPP_INCLUDED
