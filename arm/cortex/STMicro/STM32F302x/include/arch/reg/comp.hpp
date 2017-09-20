/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "STMicro/STM32F302x.svd"
//
//  name: STM32F302x
//  version: 1.0
//  description: STM32F302x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_COMP_HPP_INCLUDED
#define ARCH_REG_COMP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Comparator
 */
struct COMP
{
  static constexpr reg_addr_t base_addr = 0x40010020;

  /**
   * control and status register
   */
  struct COMP2_CSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using COMP2EN         = regbits< type,  0,  1 >;  /**< Comparator 2 enable                        */
    using COMP2MODE       = regbits< type,  2,  2 >;  /**< Comparator 2 mode                          */
    using COMP2INSEL      = regbits< type,  4,  3 >;  /**< Comparator 2 inverting input selection     */
    using COMP2INPSEL     = regbits< type,  7,  1 >;  /**< Comparator 2 non inverted input selection  */
    using COMP2INMSEL     = regbits< type,  9,  1 >;  /**< Comparator 1inverting input selection      */
    using COMP2_OUT_SEL   = regbits< type, 10,  4 >;  /**< Comparator 2 output selection              */
    using COMP2POL        = regbits< type, 15,  1 >;  /**< Comparator 2 output polarity               */
    using COMP2HYST       = regbits< type, 16,  2 >;  /**< Comparator 2 hysteresis                    */
    using COMP2_BLANKING  = regbits< type, 18,  3 >;  /**< Comparator 2 blanking source               */
    using COMP2OUT        = regbits< type, 30,  1 >;  /**< Comparator 2 output                        */
    using COMP2LOCK       = regbits< type, 31,  1 >;  /**< Comparator 2 lock                          */
  };

  /**
   * control and status register
   */
  struct COMP4_CSR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using COMP4EN         = regbits< type,  0,  1 >;  /**< Comparator 4 enable                        */
    using COMP4MODE       = regbits< type,  2,  2 >;  /**< Comparator 4 mode                          */
    using COMP4INSEL      = regbits< type,  4,  3 >;  /**< Comparator 4 inverting input selection     */
    using COMP4INPSEL     = regbits< type,  7,  1 >;  /**< Comparator 4 non inverted input selection  */
    using COM4WINMODE     = regbits< type,  9,  1 >;  /**< Comparator 4 window mode                   */
    using COMP4_OUT_SEL   = regbits< type, 10,  4 >;  /**< Comparator 4 output selection              */
    using COMP4POL        = regbits< type, 15,  1 >;  /**< Comparator 4 output polarity               */
    using COMP4HYST       = regbits< type, 16,  2 >;  /**< Comparator 4 hysteresis                    */
    using COMP4_BLANKING  = regbits< type, 18,  3 >;  /**< Comparator 4 blanking source               */
    using COMP4OUT        = regbits< type, 30,  1 >;  /**< Comparator 4 output                        */
    using COMP4LOCK       = regbits< type, 31,  1 >;  /**< Comparator 4 lock                          */
  };

  /**
   * control and status register
   */
  struct COMP6_CSR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using COMP6EN         = regbits< type,  0,  1 >;  /**< Comparator 6 enable                        */
    using COMP6MODE       = regbits< type,  2,  2 >;  /**< Comparator 6 mode                          */
    using COMP6INSEL      = regbits< type,  4,  3 >;  /**< Comparator 6 inverting input selection     */
    using COMP6INPSEL     = regbits< type,  7,  1 >;  /**< Comparator 6 non inverted input selection  */
    using COM6WINMODE     = regbits< type,  9,  1 >;  /**< Comparator 6 window mode                   */
    using COMP6_OUT_SEL   = regbits< type, 10,  4 >;  /**< Comparator 6 output selection              */
    using COMP6POL        = regbits< type, 15,  1 >;  /**< Comparator 6 output polarity               */
    using COMP6HYST       = regbits< type, 16,  2 >;  /**< Comparator 6 hysteresis                    */
    using COMP6_BLANKING  = regbits< type, 18,  3 >;  /**< Comparator 6 blanking source               */
    using COMP6OUT        = regbits< type, 30,  1 >;  /**< Comparator 6 output                        */
    using COMP6LOCK       = regbits< type, 31,  1 >;  /**< Comparator 6 lock                          */
  };
};
} // namespace mptl

#endif // ARCH_REG_COMP_HPP_INCLUDED
