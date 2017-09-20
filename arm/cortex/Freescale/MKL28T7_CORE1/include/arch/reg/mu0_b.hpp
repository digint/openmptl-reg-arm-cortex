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

#ifndef ARCH_REG_MU0_B_HPP_INCLUDED
#define ARCH_REG_MU0_B_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * MU
 */
struct MU0_B
{
  static constexpr reg_addr_t base_addr = 0x400a3000;

  /**
   * Version ID Register
   */
  struct VER
  : public reg< uint32_t, base_addr + 0, ro, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x1000000 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Feature Specification Number  */
    using MINOR    = regbits< type, 16,  8 >;  /**< Minor Version Number          */
    using MAJOR    = regbits< type, 24,  8 >;  /**< Major Version Number          */
  };

  /**
   * Transmit Register
   */
  struct TR%s
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Processor A/B Transmit Register Data  */
  };

  /**
   * Receive Register
   */
  struct RR%s
  : public reg< uint32_t, base_addr + 0x40, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Processor A/B Receive Register  */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x60, rw, 0xF00080 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0xF00080 >;

    using Fn    = regbits< type,  0,  3 >;  /**< For n = {0, 1, 2} Processor A/B Side Flag n                             */
    using NMIC  = regbits< type,  3,  1 >;  /**< Processor A/B Non-Maskable-Interrupt Clear                              */
    using EP    = regbits< type,  4,  1 >;  /**< Processor A/B Side Event Pending                                        */
    using PM    = regbits< type,  5,  2 >;  /**< Processor B/A Power Mode                                                */
    using FUP   = regbits< type,  8,  1 >;  /**< Processor A/B Flags Update Pending                                      */
    using TEn   = regbits< type, 20,  4 >;  /**< For n = {0, 1, 2, 3} Processor A/B Transmit Register n Empty            */
    using RFn   = regbits< type, 24,  4 >;  /**< For n = {0, 1, 2, 3} Processor A/B Receive Register n Full              */
    using GIPn  = regbits< type, 28,  4 >;  /**< For n = {0, 1, 2, 3} Processor A/B General Interrupt Request n Pending  */
  };

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x64, rw, 0x100 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x100 >;

    using Fn     = regbits< type,  0,  3 >;  /**< For n = {0, 1, 2} Processor A/B to Processor B/A Flag n                 */
    using NMI    = regbits< type,  3,  1 >;  /**< Processor B/A Non-maskable Interrupt                                    */
    using MUR    = regbits< type,  5,  1 >;  /**< Processor A MU Reset                                                    */
    using BRSTH  = regbits< type,  7,  1 >;  /**< Processor B Reset Hold                                                  */
    using CLKE   = regbits< type,  8,  1 >;  /**< Processor B/A clock enable                                              */
    using BBOOT  = regbits< type,  9,  2 >;  /**< Processor B Boot Config.                                                */
    using GIRn   = regbits< type, 16,  4 >;  /**< For n = {0, 1, 2, 3} Processor A/B General Purpose Interrupt Request n  */
    using TIEn   = regbits< type, 20,  4 >;  /**< For n = {0, 1, 2, 3} Processor A/B Transmit Interrupt Enable n          */
    using RIEn   = regbits< type, 24,  4 >;  /**< For n = {0, 1, 2, 3} Processor A/B Receive Interrupt Enable n           */
    using GIEn   = regbits< type, 28,  4 >;  /**< For n = {0, 1, 2, 3} Processor A/B General Purpose Interrupt Enable n   */
  };
};
} // namespace mptl

#endif // ARCH_REG_MU0_B_HPP_INCLUDED
