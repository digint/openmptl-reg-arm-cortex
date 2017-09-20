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
//  Import from CMSIS-SVD: "Spansion/MB9BF12xJ.svd"
//
//  name: MB9BF12xJ
//  version: 1.0
//  description: MB9BF12xJ
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
 * peripheral EXTI
 */
struct EXTI
{
  static constexpr reg_addr_t base_addr = 0x40030000;

  /**
   * register ENIR
   */
  struct ENIR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using EN19  = regbits< type, 19,  1 >;  /**< bitfield EN19  */
    using EN18  = regbits< type, 18,  1 >;  /**< bitfield EN18  */
    using EN14  = regbits< type, 14,  1 >;  /**< bitfield EN14  */
    using EN7   = regbits< type,  7,  1 >;  /**< bitfield EN7   */
    using EN6   = regbits< type,  6,  1 >;  /**< bitfield EN6   */
    using EN3   = regbits< type,  3,  1 >;  /**< bitfield EN3   */
    using EN2   = regbits< type,  2,  1 >;  /**< bitfield EN2   */
  };

  /**
   * register EIRR
   */
  struct EIRR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using ER19  = regbits< type, 19,  1 >;  /**< bitfield ER19  */
    using ER18  = regbits< type, 18,  1 >;  /**< bitfield ER18  */
    using ER14  = regbits< type, 14,  1 >;  /**< bitfield ER14  */
    using ER7   = regbits< type,  7,  1 >;  /**< bitfield ER7   */
    using ER6   = regbits< type,  6,  1 >;  /**< bitfield ER6   */
    using ER3   = regbits< type,  3,  1 >;  /**< bitfield ER3   */
    using ER2   = regbits< type,  2,  1 >;  /**< bitfield ER2   */
  };

  /**
   * register EICL
   */
  struct EICL
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00FFFDFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00FFFDFF >;

    using ECL19  = regbits< type, 19,  1 >;  /**< bitfield ECL19  */
    using ECL18  = regbits< type, 18,  1 >;  /**< bitfield ECL18  */
    using ECL14  = regbits< type, 14,  1 >;  /**< bitfield ECL14  */
    using ECL7   = regbits< type,  7,  1 >;  /**< bitfield ECL7   */
    using ECL6   = regbits< type,  6,  1 >;  /**< bitfield ECL6   */
    using ECL3   = regbits< type,  3,  1 >;  /**< bitfield ECL3   */
    using ECL2   = regbits< type,  2,  1 >;  /**< bitfield ECL2   */
  };

  /**
   * register ELVR
   */
  struct ELVR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using LB14  = regbits< type, 29,  1 >;  /**< bitfield LB14  */
    using LA14  = regbits< type, 28,  1 >;  /**< bitfield LA14  */
    using LB7   = regbits< type, 15,  1 >;  /**< bitfield LB7   */
    using LA7   = regbits< type, 14,  1 >;  /**< bitfield LA7   */
    using LB6   = regbits< type, 13,  1 >;  /**< bitfield LB6   */
    using LA6   = regbits< type, 12,  1 >;  /**< bitfield LA6   */
    using LB3   = regbits< type,  7,  1 >;  /**< bitfield LB3   */
    using LA3   = regbits< type,  6,  1 >;  /**< bitfield LA3   */
    using LB2   = regbits< type,  5,  1 >;  /**< bitfield LB2   */
    using LA2   = regbits< type,  4,  1 >;  /**< bitfield LA2   */
  };

  /**
   * register ELVR1
   */
  struct ELVR1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using LB19  = regbits< type,  7,  1 >;  /**< bitfield LB19  */
    using LA19  = regbits< type,  6,  1 >;  /**< bitfield LA19  */
    using LB18  = regbits< type,  5,  1 >;  /**< bitfield LB18  */
    using LA18  = regbits< type,  4,  1 >;  /**< bitfield LA18  */
  };

  /**
   * register NMIRR
   */
  struct NMIRR
  : public reg< uint8_t, base_addr + 0x14, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, ro, 0x00 >;

    using NR  = regbits< type,  0,  1 >;  /**< bitfield NR  */
  };

  /**
   * register NMICL
   */
  struct NMICL
  : public reg< uint8_t, base_addr + 0x18, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x01 >;

    using NCL  = regbits< type,  0,  1 >;  /**< bitfield NCL  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXTI_HPP_INCLUDED
