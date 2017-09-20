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
//  Import from CMSIS-SVD: "Freescale/MKE15D7.svd"
//
//  name: MKE15D7
//  version: 1.6
//  description: MKE15D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_IEVENT_HPP_INCLUDED
#define ARCH_REG_IEVENT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Intelligent event controller
 */
struct IEVENT
{
  static constexpr reg_addr_t base_addr = 0x40019000;

  /**
   * iEvent Data Register: Low
   */
  struct DRL
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using IN_A0        = regbits< type,  0,  1 >;  /**< Event Inputs {A0}              */
    using IN_B0        = regbits< type,  1,  1 >;  /**< Event Inputs {B0}              */
    using IN_C0        = regbits< type,  2,  1 >;  /**< Event Inputs {C0}              */
    using IN_D0        = regbits< type,  3,  1 >;  /**< Event Inputs {D0}              */
    using Output_FSM0  = regbits< type,  4,  3 >;  /**< Output Finite State Machine 0  */
    using Ev_Out0      = regbits< type,  7,  1 >;  /**< Event Output 0                 */
    using IN_A1        = regbits< type,  8,  1 >;  /**< Event Inputs {A1}              */
    using IN_B1        = regbits< type,  9,  1 >;  /**< Event Inputs {B1}              */
    using IN_C1        = regbits< type, 10,  1 >;  /**< Event Inputs {C1}              */
    using IN_D1        = regbits< type, 11,  1 >;  /**< Event Inputs {D1}              */
    using Output_FSM1  = regbits< type, 12,  3 >;  /**< Output Finite State Machine 1  */
    using Ev_Out1      = regbits< type, 15,  1 >;  /**< Event Output 1                 */
    using IN_A2        = regbits< type, 16,  1 >;  /**< Event Inputs {A2}              */
    using IN_B2        = regbits< type, 17,  1 >;  /**< Event Inputs {B2}              */
    using IN_C2        = regbits< type, 18,  1 >;  /**< Event Inputs {C2}              */
    using IN_D2        = regbits< type, 19,  1 >;  /**< Event Inputs {D2}              */
    using Output_FSM2  = regbits< type, 20,  3 >;  /**< Output Finite State Machine 2  */
    using Ev_Out2      = regbits< type, 23,  1 >;  /**< Event Output 2                 */
    using IN_A3        = regbits< type, 24,  1 >;  /**< Event Inputs {A3}              */
    using IN_B3        = regbits< type, 25,  1 >;  /**< Event Inputs {B3}              */
    using IN_C3        = regbits< type, 26,  1 >;  /**< Event Inputs {C3}              */
    using IN_D3        = regbits< type, 27,  1 >;  /**< Event Inputs {D3}              */
    using Output_FSM3  = regbits< type, 28,  3 >;  /**< Output Finite State Machine 3  */
    using Ev_Out3      = regbits< type, 31,  1 >;  /**< Event Output 3                 */
  };

  /**
   * iEvent Control Register: Low
   */
  struct CRL
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using Type0     = regbits< type,  0,  2 >;  /**< Output Channel Type 0     */
    using OSE0      = regbits< type,  2,  1 >;  /**< One-Shot Enable 0         */
    using DDB0      = regbits< type,  3,  1 >;  /**< Disable Done Broadcast 0  */
    using RESERVED  = regbits< type,  4,  3 >;  /**< no description available  */
    using RO0       = regbits< type,  7,  1 >;  /**< Read-Only 0               */
    using Type1     = regbits< type,  8,  2 >;  /**< Output Channel Type 1     */
    using OSE1      = regbits< type, 10,  1 >;  /**< One-Shot Enable 1         */
    using DDB1      = regbits< type, 11,  1 >;  /**< Disable Done Broadcast 1  */
    using RESERVED  = regbits< type, 12,  3 >;  /**< no description available  */
    using RO1       = regbits< type, 15,  1 >;  /**< Read-Only 1               */
    using Type2     = regbits< type, 16,  2 >;  /**< Output Channel Type 2     */
    using OSE2      = regbits< type, 18,  1 >;  /**< One-Shot Enable 2         */
    using DDB2      = regbits< type, 19,  1 >;  /**< Disable Done Broadcast 2  */
    using RESERVED  = regbits< type, 20,  3 >;  /**< no description available  */
    using RO2       = regbits< type, 23,  1 >;  /**< Read-Only 2               */
    using Type3     = regbits< type, 24,  2 >;  /**< Output Channel Type 3     */
    using OSE3      = regbits< type, 26,  1 >;  /**< One-Shot Enable 3         */
    using DDB3      = regbits< type, 27,  1 >;  /**< Disable Done Broadcast 3  */
    using RESERVED  = regbits< type, 28,  3 >;  /**< no description available  */
    using RO3       = regbits< type, 31,  1 >;  /**< Read-Only 3               */
  };

  /**
   * iEvent Input Mux Configuration Register
   */
  struct IMXCR%s
  : public reg< uint32_t, base_addr + 0x100, ro, 0x4050607 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0x4050607 >;

    using D_Select  = regbits< type,  0,  4 >;  /**< no description available  */
    using RESERVED  = regbits< type,  4,  4 >;  /**< no description available  */
    using C_Select  = regbits< type,  8,  4 >;  /**< no description available  */
    using RESERVED  = regbits< type, 12,  4 >;  /**< no description available  */
    using B_Select  = regbits< type, 16,  4 >;  /**< no description available  */
    using RESERVED  = regbits< type, 20,  4 >;  /**< no description available  */
    using A_Select  = regbits< type, 24,  4 >;  /**< no description available  */
    using RESERVED  = regbits< type, 28,  4 >;  /**< no description available  */
  };

  /**
   * iEvent Boolean Function Eva1ation Configuration Register
   */
  struct BFECR%s
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using PT3_DC  = regbits< type,  0,  2 >;  /**< Product Term 3, D input Configuration  */
    using PT3_CC  = regbits< type,  2,  2 >;  /**< Product Term 3, C input Configuration  */
    using PT3_BC  = regbits< type,  4,  2 >;  /**< Product Term 3, B input Configuration  */
    using PT3_AC  = regbits< type,  6,  2 >;  /**< Product Term 3, A input Configuration  */
    using PT2_DC  = regbits< type,  8,  2 >;  /**< Product Term 2, D input Configuration  */
    using PT2_CC  = regbits< type, 10,  2 >;  /**< Product Term 2, C input Configuration  */
    using PT2_BC  = regbits< type, 12,  2 >;  /**< Product Term 2, B input Configuration  */
    using PT2_AC  = regbits< type, 14,  2 >;  /**< Product Term 2, A input Configuration  */
    using PT1_DC  = regbits< type, 16,  2 >;  /**< Product Term 1, D input Configuration  */
    using PT1_CC  = regbits< type, 18,  2 >;  /**< Product Term 1, C input Configuration  */
    using PT1_BC  = regbits< type, 20,  2 >;  /**< Product Term 1, B input Configuration  */
    using PT1_AC  = regbits< type, 22,  2 >;  /**< Product Term 1, A input Configuration  */
    using PT0_DC  = regbits< type, 24,  2 >;  /**< Product Term 0, D input Configuration  */
    using PT0_CC  = regbits< type, 26,  2 >;  /**< Product Term 0, C input Configuration  */
    using PT0_BC  = regbits< type, 28,  2 >;  /**< Product Term 0, B input Configuration  */
    using PT0_AC  = regbits< type, 30,  2 >;  /**< Product Term 0, A input Configuration  */
  };
};
} // namespace mptl

#endif // ARCH_REG_IEVENT_HPP_INCLUDED
