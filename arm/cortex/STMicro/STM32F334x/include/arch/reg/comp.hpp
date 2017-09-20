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
//  Import from CMSIS-SVD: "STMicro/STM32F334x.svd"
//
//  name: STM32F334x
//  version: 1.0
//  description: STM32F334x
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
  static constexpr reg_addr_t base_addr = 0x4001001c;

  /**
   * control and status register
   */
  struct COMP1_CSR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using COMP1EN         = regbits< type,  0,  1 >;  /**< Comparator 1 enable                     */
    using COMP1_INP_DAC   = regbits< type,  1,  1 >;  /**< COMP1_INP_DAC                           */
    using COMP1MODE       = regbits< type,  2,  2 >;  /**< Comparator 1 mode                       */
    using COMP1INSEL      = regbits< type,  4,  3 >;  /**< Comparator 1 inverting input selection  */
    using COMP1_OUT_SEL   = regbits< type, 10,  4 >;  /**< Comparator 1 output selection           */
    using COMP1POL        = regbits< type, 15,  1 >;  /**< Comparator 1 output polarity            */
    using COMP1HYST       = regbits< type, 16,  2 >;  /**< Comparator 1 hysteresis                 */
    using COMP1_BLANKING  = regbits< type, 18,  3 >;  /**< Comparator 1 blanking source            */
    using COMP1OUT        = regbits< type, 30,  1 >;  /**< Comparator 1 output                     */
    using COMP1LOCK       = regbits< type, 31,  1 >;  /**< Comparator 1 lock                       */
  };

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
  struct COMP3_CSR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using COMP3EN         = regbits< type,  0,  1 >;  /**< Comparator 3 enable                        */
    using COMP3MODE       = regbits< type,  2,  2 >;  /**< Comparator 3 mode                          */
    using COMP3INSEL      = regbits< type,  4,  3 >;  /**< Comparator 3 inverting input selection     */
    using COMP3INPSEL     = regbits< type,  7,  1 >;  /**< Comparator 3 non inverted input selection  */
    using COMP3_OUT_SEL   = regbits< type, 10,  4 >;  /**< Comparator 3 output selection              */
    using COMP3POL        = regbits< type, 15,  1 >;  /**< Comparator 3 output polarity               */
    using COMP3HYST       = regbits< type, 16,  2 >;  /**< Comparator 3 hysteresis                    */
    using COMP3_BLANKING  = regbits< type, 18,  3 >;  /**< Comparator 3 blanking source               */
    using COMP3OUT        = regbits< type, 30,  1 >;  /**< Comparator 3 output                        */
    using COMP3LOCK       = regbits< type, 31,  1 >;  /**< Comparator 3 lock                          */
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
  struct COMP5_CSR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using COMP5EN         = regbits< type,  0,  1 >;  /**< Comparator 5 enable                        */
    using COMP5MODE       = regbits< type,  2,  2 >;  /**< Comparator 5 mode                          */
    using COMP5INSEL      = regbits< type,  4,  3 >;  /**< Comparator 5 inverting input selection     */
    using COMP5INPSEL     = regbits< type,  7,  1 >;  /**< Comparator 5 non inverted input selection  */
    using COMP5_OUT_SEL   = regbits< type, 10,  4 >;  /**< Comparator 5 output selection              */
    using COMP5POL        = regbits< type, 15,  1 >;  /**< Comparator 5 output polarity               */
    using COMP5HYST       = regbits< type, 16,  2 >;  /**< Comparator 5 hysteresis                    */
    using COMP5_BLANKING  = regbits< type, 18,  3 >;  /**< Comparator 5 blanking source               */
    using COMP5OUT        = regbits< type, 30,  1 >;  /**< Comparator51 output                        */
    using COMP5LOCK       = regbits< type, 31,  1 >;  /**< Comparator 5 lock                          */
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

  /**
   * control and status register
   */
  struct COMP7_CSR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using COMP7EN         = regbits< type,  0,  1 >;  /**< Comparator 7 enable                        */
    using COMP7MODE       = regbits< type,  2,  2 >;  /**< Comparator 7 mode                          */
    using COMP7INSEL      = regbits< type,  4,  3 >;  /**< Comparator 7 inverting input selection     */
    using COMP7INPSEL     = regbits< type,  7,  1 >;  /**< Comparator 7 non inverted input selection  */
    using COMP7_OUT_SEL   = regbits< type, 10,  4 >;  /**< Comparator 7 output selection              */
    using COMP7POL        = regbits< type, 15,  1 >;  /**< Comparator 7 output polarity               */
    using COMP7HYST       = regbits< type, 16,  2 >;  /**< Comparator 7 hysteresis                    */
    using COMP7_BLANKING  = regbits< type, 18,  3 >;  /**< Comparator 7 blanking source               */
    using COMP7OUT        = regbits< type, 30,  1 >;  /**< Comparator 7 output                        */
    using COMP7LOCK       = regbits< type, 31,  1 >;  /**< Comparator 7 lock                          */
  };
};
} // namespace mptl

#endif // ARCH_REG_COMP_HPP_INCLUDED
