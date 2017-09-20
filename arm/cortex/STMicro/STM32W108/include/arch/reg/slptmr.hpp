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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SLPTMR_HPP_INCLUDED
#define ARCH_REG_SLPTMR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Sleep timer
 */
struct SLPTMR
{
  static constexpr reg_addr_t base_addr = 0x4000600c;

  /**
   * SLPTMR configuration register
   */
  struct SLPTMR_CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000400 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000400 >;

    using REVERSE  = regbits< type, 12,  1 >;  /**< REVERSE  */
    using EN       = regbits< type, 11,  1 >;  /**< EN       */
    using DBGP     = regbits< type, 10,  1 >;  /**< DBGP     */
    using PSC      = regbits< type,  4,  4 >;  /**< PSC      */
    using CLKSEL   = regbits< type,  0,  1 >;  /**< CLKSEL   */
  };

  /**
   * SLPTMR counter high register
   */
  struct SLPTMR_CNTH
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using CNTH  = regbits< type,  0, 16 >;  /**< CNTH  */
  };

  /**
   * SLPTMR counter high register
   */
  struct SLPTMR_CNTL
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using CNTL  = regbits< type,  0, 16 >;  /**< CNTL  */
  };

  /**
   * SLPTMR compare A high register
   */
  struct SLPTMR_CMPAH
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000FFFF >;

    using CMPAH  = regbits< type,  0, 16 >;  /**< CMPAH  */
  };

  /**
   * SLPTMR compare A low register
   */
  struct SLPTMR_CMPAL
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000FFFF >;

    using CMPAL  = regbits< type,  0, 16 >;  /**< CMPAL  */
  };

  /**
   * SLPTMR compare B high register
   */
  struct SLPTMR_CMPBH
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000FFFF >;

    using CMPBH  = regbits< type,  0, 16 >;  /**< CMPBH  */
  };

  /**
   * SLPTMR compare B low register
   */
  struct SLPTMR_CMPBL
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0000FFFF >;

    using CMPBL  = regbits< type,  0, 16 >;  /**< CMPBL  */
  };

  /**
   * SLPTMR interrupt status register
   */
  struct SLPTMR_ISR
  : public reg< uint32_t, base_addr + 0x4008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4008, rw, 0x00000000 >;

    using CMPB  = regbits< type,  2,  1 >;  /**< CMPB  */
    using CMPA  = regbits< type,  1,  1 >;  /**< CMPA  */
    using OW    = regbits< type,  0,  1 >;  /**< OW    */
  };

  /**
   * SLPTMR force interrupts register
   */
  struct SLPTMR_IFR
  : public reg< uint32_t, base_addr + 0x4014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4014, rw, 0x00000000 >;

    using CMPB  = regbits< type,  2,  1 >;  /**< CMPB  */
    using CMPA  = regbits< type,  1,  1 >;  /**< CMPA  */
    using OW    = regbits< type,  0,  1 >;  /**< OW    */
  };

  /**
   * SLPTMR interrupt enable register
   */
  struct SLPTMR_IER
  : public reg< uint32_t, base_addr + 0x4048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4048, rw, 0x00000000 >;

    using WRAP  = regbits< type,  0,  1 >;  /**< WRAP  */
    using CMPA  = regbits< type,  1,  1 >;  /**< CMPA  */
    using CMPB  = regbits< type,  2,  1 >;  /**< CMPB  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SLPTMR_HPP_INCLUDED
