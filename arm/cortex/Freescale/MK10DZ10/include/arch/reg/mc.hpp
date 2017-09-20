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
//  Import from CMSIS-SVD: "Freescale/MK10DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK10DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK10DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MC_HPP_INCLUDED
#define ARCH_REG_MC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Mode Controller
 */
struct MC
{
  static constexpr reg_addr_t base_addr = 0x4007e000;

  /**
   * System Reset Status Register High
   */
  struct SRSH
  : public reg< uint8_t, base_addr + 0, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, ro, 0 >;

    using JTAG    = regbits< type,  0,  1 >;  /**< JTAG generated reset  */
    using LOCKUP  = regbits< type,  1,  1 >;  /**< Core Lock-up          */
    using SW      = regbits< type,  2,  1 >;  /**< Software              */
  };

  /**
   * System Reset Status Register Low
   */
  struct SRSL
  : public reg< uint8_t, base_addr + 0x1, ro, 0x82 >
  {
    using type = reg< uint8_t, base_addr + 0x1, ro, 0x82 >;

    using WAKEUP  = regbits< type,  0,  1 >;  /**< Low-leakage wakeup reset                    */
    using LVD     = regbits< type,  1,  1 >;  /**< Low-voltage detect reset                    */
    using LOC     = regbits< type,  2,  1 >;  /**< Loss-of-clock reset                         */
    using COP     = regbits< type,  5,  1 >;  /**< Computer Operating Properly (COP) Watchdog  */
    using PIN     = regbits< type,  6,  1 >;  /**< External reset pin                          */
    using POR     = regbits< type,  7,  1 >;  /**< Power-on reset                              */
  };

  /**
   * Power Mode Protection Register
   */
  struct PMPROT
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using AVLLS1  = regbits< type,  0,  1 >;  /**< Allow very low leakage stop 1 mode  */
    using AVLLS2  = regbits< type,  1,  1 >;  /**< Allow very low leakage stop 2 mode  */
    using AVLLS3  = regbits< type,  2,  1 >;  /**< Allow Very Low Leakage Stop 3 Mode  */
    using ALLS    = regbits< type,  4,  1 >;  /**< Allow low leakage stop mode         */
    using AVLP    = regbits< type,  5,  1 >;  /**< Allow very low power modes          */
  };

  /**
   * Power Mode Control Register
   */
  struct PMCTRL
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using LPLLSM  = regbits< type,  0,  3 >;  /**< Low Power, Low Leakage Stop Mode  */
    using RUNM    = regbits< type,  5,  2 >;  /**< Run Mode Enable                   */
    using LPWUI   = regbits< type,  7,  1 >;  /**< Low Power Wake Up on Interrupt    */
  };
};
} // namespace mptl

#endif // ARCH_REG_MC_HPP_INCLUDED
