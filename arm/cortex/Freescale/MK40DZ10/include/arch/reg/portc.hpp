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
//  Import from CMSIS-SVD: "Freescale/MK40DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK40DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK40DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PORTC_HPP_INCLUDED
#define ARCH_REG_PORTC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pin Control and Interrupts
 */
struct PORTC
{
  static constexpr reg_addr_t base_addr = 0x4004b000;

  /**
   * Pin Control Register n
   */
  struct PCR%s
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Global Pin Control Low Register
   */
  struct GPCLR
  : public reg< uint32_t, base_addr + 0x80, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, wo, 0 >;

    using GPWD  = regbits< type,  0, 16 >;  /**< Global Pin Write Data    */
    using GPWE  = regbits< type, 16, 16 >;  /**< Global Pin Write Enable  */
  };

  /**
   * Global Pin Control High Register
   */
  struct GPCHR
  : public reg< uint32_t, base_addr + 0x84, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, wo, 0 >;

    using GPWD  = regbits< type,  0, 16 >;  /**< Global Pin Write Data    */
    using GPWE  = regbits< type, 16, 16 >;  /**< Global Pin Write Enable  */
  };

  /**
   * Interrupt Status Flag Register
   */
  struct ISFR
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0 >;

    using ISF  = regbits< type,  0, 32 >;  /**< Interrupt Status Flag  */
  };

  /**
   * Digital Filter Enable Register
   */
  struct DFER
  : public reg< uint32_t, base_addr + 0xc0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0 >;

    using DFE  = regbits< type,  0, 32 >;  /**< Digital Filter Enable  */
  };

  /**
   * Digital Filter Clock Register
   */
  struct DFCR
  : public reg< uint32_t, base_addr + 0xc4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0 >;

    using CS  = regbits< type,  0,  1 >;  /**< Clock Source  */
  };

  /**
   * Digital Filter Width Register
   */
  struct DFWR
  : public reg< uint32_t, base_addr + 0xc8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0 >;

    using FILT  = regbits< type,  0,  5 >;  /**< Filter Length  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PORTC_HPP_INCLUDED
