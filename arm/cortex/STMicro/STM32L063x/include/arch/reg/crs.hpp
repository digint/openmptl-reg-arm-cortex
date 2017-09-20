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
//  Import from CMSIS-SVD: "STMicro/STM32L063x.svd"
//
//  name: STM32L063x
//  version: 1.0
//  description: STM32L063x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CRS_HPP_INCLUDED
#define ARCH_REG_CRS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Clock recovery system
 */
struct CRS
{
  static constexpr reg_addr_t base_addr = 0x40006c00;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00002000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00002000 >;

    using TRIM        = regbits< type,  8,  6 >;  /**< HSI48 oscillator smooth trimming                    */
    using SWSYNC      = regbits< type,  7,  1 >;  /**< Generate software SYNC event                        */
    using AUTOTRIMEN  = regbits< type,  6,  1 >;  /**< Automatic trimming enable                           */
    using CEN         = regbits< type,  5,  1 >;  /**< Frequency error counter enable                      */
    using ESYNCIE     = regbits< type,  3,  1 >;  /**< Expected SYNC interrupt enable                      */
    using ERRIE       = regbits< type,  2,  1 >;  /**< Synchronization or trimming error interrupt enable  */
    using SYNCWARNIE  = regbits< type,  1,  1 >;  /**< SYNC warning interrupt enable                       */
    using SYNCOKIE    = regbits< type,  0,  1 >;  /**< SYNC event OK interrupt enable                      */
  };

  /**
   * configuration register
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x2022BB7F >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x2022BB7F >;

    using SYNCPOL  = regbits< type, 31,  1 >;  /**< SYNC polarity selection       */
    using SYNCSRC  = regbits< type, 28,  2 >;  /**< SYNC signal source selection  */
    using SYNCDIV  = regbits< type, 24,  3 >;  /**< SYNC divider                  */
    using FELIM    = regbits< type, 16,  8 >;  /**< Frequency error limit         */
    using RELOAD   = regbits< type,  0, 16 >;  /**< Counter reload value          */
  };

  /**
   * interrupt and status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using FECAP      = regbits< type, 16, 16 >;  /**< Frequency error capture         */
    using FEDIR      = regbits< type, 15,  1 >;  /**< Frequency error direction       */
    using TRIMOVF    = regbits< type, 10,  1 >;  /**< Trimming overflow or underflow  */
    using SYNCMISS   = regbits< type,  9,  1 >;  /**< SYNC missed                     */
    using SYNCERR    = regbits< type,  8,  1 >;  /**< SYNC error                      */
    using ESYNCF     = regbits< type,  3,  1 >;  /**< Expected SYNC flag              */
    using ERRF       = regbits< type,  2,  1 >;  /**< Error flag                      */
    using SYNCWARNF  = regbits< type,  1,  1 >;  /**< SYNC warning flag               */
    using SYNCOKF    = regbits< type,  0,  1 >;  /**< SYNC event OK flag              */
  };

  /**
   * interrupt flag clear register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using ESYNCC     = regbits< type,  3,  1 >;  /**< Expected SYNC clear flag  */
    using ERRC       = regbits< type,  2,  1 >;  /**< Error clear flag          */
    using SYNCWARNC  = regbits< type,  1,  1 >;  /**< SYNC warning clear flag   */
    using SYNCOKC    = regbits< type,  0,  1 >;  /**< SYNC event OK clear flag  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRS_HPP_INCLUDED
