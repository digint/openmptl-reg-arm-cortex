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
//  Import from CMSIS-SVD: "Freescale/MK20D7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK20D7
//  series: Kinetis_K
//  version: 1.6
//  description: MK20D7 Freescale Microcontroller
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
 * System Mode Controller
 */
struct SMC
{
  static constexpr reg_addr_t base_addr = 0x4007e000;

  /**
   * Power Mode Protection Register
   */
  struct PMPROT
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using AVLLS  = regbits< type,  1,  1 >;  /**< Allow very low leakage stop mode  */
    using ALLS   = regbits< type,  3,  1 >;  /**< Allow low leakage stop mode       */
    using AVLP   = regbits< type,  5,  1 >;  /**< Allow very low power modes        */
  };

  /**
   * Power Mode Control Register
   */
  struct PMCTRL
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using STOPM  = regbits< type,  0,  3 >;  /**< Stop Mode Control  */
    using STOPA  = regbits< type,  3,  1 >;  /**< Stop Aborted       */
    using RUNM   = regbits< type,  5,  2 >;  /**< Run Mode Control   */
  };

  /**
   * VLLS Control Register
   */
  struct VLLSCTRL
  : public reg< uint8_t, base_addr + 0x2, rw, 0x3 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0x3 >;

    using VLLSM  = regbits< type,  0,  3 >;  /**< VLLS Mode Control  */
  };

  /**
   * Power Mode Status Register
   */
  struct PMSTAT
  : public reg< uint8_t, base_addr + 0x3, ro, 0x1 >
  {
    using type = reg< uint8_t, base_addr + 0x3, ro, 0x1 >;

    // fixme: Field name equals parent register name: PMSTAT
    using PMSTAT_ = regbits< type,  0,  7 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SMC_HPP_INCLUDED
