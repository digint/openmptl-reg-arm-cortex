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
//  Import from CMSIS-SVD: "Freescale/MKE04Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE04Z4
//  series: Kinetis_E
//  version: 1.6
//  description: MKE04Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWT_HPP_INCLUDED
#define ARCH_REG_PWT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pulse Width Timer
 */
struct PWT
{
  static constexpr reg_addr_t base_addr = 0x40033000;

  /**
   * Pulse Width Timer Register 1
   */
  struct R1
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using PWTOV   = regbits< type,  0,  1 >;  /**< PWT counter overflow                         */
    using PWTRDY  = regbits< type,  1,  1 >;  /**< PWT pulse width valid                        */
    using PWTSR   = regbits< type,  3,  1 >;  /**< PWT Soft Reset                               */
    using POVIE   = regbits< type,  4,  1 >;  /**< PWT counter overflow interrupt enable        */
    using PRDYIE  = regbits< type,  5,  1 >;  /**< PWT pulse width data ready interrupt enable  */
    using PWTIE   = regbits< type,  6,  1 >;  /**< PWT module interrupt enable                  */
    using PWTEN   = regbits< type,  7,  1 >;  /**< PWT Module Enable                            */
    using PRE     = regbits< type,  8,  3 >;  /**< PWT Clock Pre-scaler(CLKPRE) Setting         */
    using EDGE    = regbits< type, 11,  2 >;  /**< PWT input edge sensitivity                   */
    using PINSEL  = regbits< type, 13,  2 >;  /**< PWT Pulse Inputs Selection                   */
    using PCLKS   = regbits< type, 15,  1 >;  /**< PWT Clock Source Selection                   */
    using PPW     = regbits< type, 16, 16 >;  /**< Positive Pulse Width                         */
  };

  /**
   * Pulse Width Timer Register 2
   */
  struct R2
  : public reg< uint32_t, base_addr + 0x4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0 >;

    using NPW   = regbits< type,  0, 16 >;  /**< Negative Pulse Width. It is suggested to use half-word(16bit) or word(32bit) to read out this value.  */
    using PWTC  = regbits< type, 16, 16 >;  /**< PWT counter.It is suggested to use half-word(16bit) or word(32bit) to read out this value.            */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWT_HPP_INCLUDED
