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
//  Import from CMSIS-SVD: "STMicro/STM32L052x.svd"
//
//  name: STM32L052x
//  version: 1.0
//  description: STM32L052x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LPTIM_HPP_INCLUDED
#define ARCH_REG_LPTIM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low power timer
 */
struct LPTIM
{
  static constexpr reg_addr_t base_addr = 0x40007c00;

  /**
   * Interrupt and Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using DOWN     = regbits< type,  6,  1 >;  /**< Counter direction change up to down  */
    using UP       = regbits< type,  5,  1 >;  /**< Counter direction change down to up  */
    using ARROK    = regbits< type,  4,  1 >;  /**< Autoreload register update OK        */
    using CMPOK    = regbits< type,  3,  1 >;  /**< Compare register update OK           */
    using EXTTRIG  = regbits< type,  2,  1 >;  /**< External trigger edge event          */
    using ARRM     = regbits< type,  1,  1 >;  /**< Autoreload match                     */
    using CMPM     = regbits< type,  0,  1 >;  /**< Compare match                        */
  };

  /**
   * Interrupt Clear Register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >;

    using DOWNCF     = regbits< type,  6,  1 >;  /**< Direction change to down Clear Flag       */
    using UPCF       = regbits< type,  5,  1 >;  /**< Direction change to UP Clear Flag         */
    using ARROKCF    = regbits< type,  4,  1 >;  /**< Autoreload register update OK Clear Flag  */
    using CMPOKCF    = regbits< type,  3,  1 >;  /**< Compare register update OK Clear Flag     */
    using EXTTRIGCF  = regbits< type,  2,  1 >;  /**< External trigger valid edge Clear Flag    */
    using ARRMCF     = regbits< type,  1,  1 >;  /**< Autoreload match Clear Flag               */
    using CMPMCF     = regbits< type,  0,  1 >;  /**< compare match Clear Flag                  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using DOWNIE     = regbits< type,  6,  1 >;  /**< Direction change to down Interrupt Enable       */
    using UPIE       = regbits< type,  5,  1 >;  /**< Direction change to UP Interrupt Enable         */
    using ARROKIE    = regbits< type,  4,  1 >;  /**< Autoreload register update OK Interrupt Enable  */
    using CMPOKIE    = regbits< type,  3,  1 >;  /**< Compare register update OK Interrupt Enable     */
    using EXTTRIGIE  = regbits< type,  2,  1 >;  /**< External trigger valid edge Interrupt Enable    */
    using ARRMIE     = regbits< type,  1,  1 >;  /**< Autoreload match Interrupt Enable               */
    using CMPMIE     = regbits< type,  0,  1 >;  /**< Compare match Interrupt Enable                  */
  };

  /**
   * Configuration Register
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using ENC        = regbits< type, 24,  1 >;  /**< Encoder mode enable                             */
    using COUNTMODE  = regbits< type, 23,  1 >;  /**< counter mode enabled                            */
    using PRELOAD    = regbits< type, 22,  1 >;  /**< Registers update mode                           */
    using WAVPOL     = regbits< type, 21,  1 >;  /**< Waveform shape polarity                         */
    using WAVE       = regbits< type, 20,  1 >;  /**< Waveform shape                                  */
    using TIMOUT     = regbits< type, 19,  1 >;  /**< Timeout enable                                  */
    using TRIGEN     = regbits< type, 17,  2 >;  /**< Trigger enable and polarity                     */
    using TRIGSEL    = regbits< type, 13,  3 >;  /**< Trigger selector                                */
    using PRESC      = regbits< type,  9,  3 >;  /**< Clock prescaler                                 */
    using TRGFLT     = regbits< type,  6,  2 >;  /**< Configurable digital filter for trigger         */
    using CKFLT      = regbits< type,  3,  2 >;  /**< Configurable digital filter for external clock  */
    using CKPOL      = regbits< type,  1,  2 >;  /**< Clock Polarity                                  */
    using CKSEL      = regbits< type,  0,  1 >;  /**< Clock selector                                  */
  };

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using CNTSTRT  = regbits< type,  2,  1 >;  /**< Timer start in continuous mode  */
    using SNGSTRT  = regbits< type,  1,  1 >;  /**< LPTIM start in single mode      */
    using ENABLE   = regbits< type,  0,  1 >;  /**< LPTIM Enable                    */
  };

  /**
   * Compare Register
   */
  struct CMP
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CMP
    using CMP_ = regbits< type,  0, 16 >;  /**< Compare value.  */
  };

  /**
   * Autoreload Register
   */
  struct ARR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000001 >;

    // fixme: Field name equals parent register name: ARR
    using ARR_ = regbits< type,  0, 16 >;  /**< Auto reload value.  */
  };

  /**
   * Counter Register
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_ = regbits< type,  0, 16 >;  /**< Counter value.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LPTIM_HPP_INCLUDED
