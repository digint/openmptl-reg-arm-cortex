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
//  Import from CMSIS-SVD: "Freescale/MKE14D7.svd"
//
//  name: MKE14D7
//  version: 1.6
//  description: MKE14D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SMC_HPP_INCLUDED
#define ARCH_REG_SMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System mode controller
 */
struct SMC
{
  static constexpr reg_addr_t base_addr = 0x40056000;

  /**
   * SMC Power Mode Protection Register
   */
  struct PMPROT
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using RESERVED  = regbits< type,  0,  1 >;  /**< no description available        */
    using RESERVED  = regbits< type,  1,  1 >;  /**< no description available        */
    using RESERVED  = regbits< type,  2,  1 >;  /**< no description available        */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available        */
    using RESERVED  = regbits< type,  4,  1 >;  /**< no description available        */
    using AVLP      = regbits< type,  5,  1 >;  /**< Allow Very Low Power Stop Mode  */
    using RESERVED  = regbits< type,  6,  2 >;  /**< no description available        */
  };

  /**
   * SMC Power Mode Control Register
   */
  struct PMCTRL
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using STOPM     = regbits< type,  0,  3 >;  /**< Stop Mode Control         */
    using STOPA     = regbits< type,  3,  1 >;  /**< Stop Aborted              */
    using RESERVED  = regbits< type,  4,  1 >;  /**< no description available  */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available  */
  };

  /**
   * SMC Power Mode Status Register
   */
  struct PMSTAT
  : public reg< uint8_t, base_addr + 0x3, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, ro, 0 >;

    using RUN       = regbits< type,  0,  1 >;  /**< CurrCurrent Power mode is run  */
    using STOP      = regbits< type,  1,  1 >;  /**< Current Power mode is STOP     */
    using RESERVED  = regbits< type,  2,  2 >;  /**< no description available       */
    using VLPS      = regbits< type,  4,  1 >;  /**< Current Power mode is VLPS     */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available       */
  };
};
} // namespace mptl

#endif // ARCH_REG_SMC_HPP_INCLUDED
