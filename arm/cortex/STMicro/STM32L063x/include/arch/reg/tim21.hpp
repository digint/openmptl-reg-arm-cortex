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

#ifndef ARCH_REG_TIM21_HPP_INCLUDED
#define ARCH_REG_TIM21_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General-purpose-timers
 */
struct TIM21
{
  static constexpr reg_addr_t base_addr = 0x40010800;

  /**
   * control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using CEN   = regbits< type,  0,  1 >;  /**< Counter enable                 */
    using UDIS  = regbits< type,  1,  1 >;  /**< Update disable                 */
    using URS   = regbits< type,  2,  1 >;  /**< Update request source          */
    using OPM   = regbits< type,  3,  1 >;  /**< One-pulse mode                 */
    using DIR   = regbits< type,  4,  1 >;  /**< Direction                      */
    using CMS   = regbits< type,  5,  2 >;  /**< Center-aligned mode selection  */
    using ARPE  = regbits< type,  7,  1 >;  /**< Auto-reload preload enable     */
    using CKD   = regbits< type,  8,  2 >;  /**< Clock division                 */
  };

  /**
   * control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using MMS  = regbits< type,  4,  3 >;  /**< Master mode selection  */
  };

  /**
   * slave mode control register
   */
  struct SMCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using SMS   = regbits< type,  0,  3 >;  /**< Slave mode selection        */
    using TS    = regbits< type,  4,  3 >;  /**< Trigger selection           */
    using MSM   = regbits< type,  7,  1 >;  /**< Master/Slave mode           */
    using ETF   = regbits< type,  8,  4 >;  /**< External trigger filter     */
    using ETPS  = regbits< type, 12,  2 >;  /**< External trigger prescaler  */
    using ECE   = regbits< type, 14,  1 >;  /**< External clock enable       */
    using ETP   = regbits< type, 15,  1 >;  /**< External trigger polarity   */
  };

  /**
   * DMA/Interrupt enable register
   */
  struct DIER
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using TIE    = regbits< type,  6,  1 >;  /**< Trigger interrupt enable            */
    using CC2IE  = regbits< type,  2,  1 >;  /**< Capture/Compare 2 interrupt enable  */
    using CC1IE  = regbits< type,  1,  1 >;  /**< Capture/Compare 1 interrupt enable  */
    using UIE    = regbits< type,  0,  1 >;  /**< Update interrupt enable             */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using CC2OF  = regbits< type, 10,  1 >;  /**< Capture/compare 2 overcapture flag  */
    using CC1OF  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 overcapture flag  */
    using TIF    = regbits< type,  6,  1 >;  /**< Trigger interrupt flag              */
    using CC2IF  = regbits< type,  2,  1 >;  /**< Capture/Compare 2 interrupt flag    */
    using CC1IF  = regbits< type,  1,  1 >;  /**< Capture/compare 1 interrupt flag    */
    using UIF    = regbits< type,  0,  1 >;  /**< Update interrupt flag               */
  };

  /**
   * event generation register
   */
  struct EGR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x0000 >;

    using TG    = regbits< type,  6,  1 >;  /**< Trigger generation            */
    using CC2G  = regbits< type,  2,  1 >;  /**< Capture/compare 2 generation  */
    using CC1G  = regbits< type,  1,  1 >;  /**< Capture/compare 1 generation  */
    using UG    = regbits< type,  0,  1 >;  /**< Update generation             */
  };

  /**
   * capture/compare mode register (output mode)
   */
  struct CCMR1_Output
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using OC2M   = regbits< type, 12,  3 >;  /**< Output Compare 2 mode            */
    using OC2PE  = regbits< type, 11,  1 >;  /**< Output Compare 2 preload enable  */
    using OC2FE  = regbits< type, 10,  1 >;  /**< Output Compare 2 fast enable     */
    using CC2S   = regbits< type,  8,  2 >;  /**< Capture/Compare 2 selection      */
    using OC1M   = regbits< type,  4,  3 >;  /**< Output Compare 1 mode            */
    using OC1PE  = regbits< type,  3,  1 >;  /**< Output Compare 1 preload enable  */
    using OC1FE  = regbits< type,  2,  1 >;  /**< Output Compare 1 fast enable     */
    using CC1S   = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection      */
  };

  /**
   * capture/compare mode register 1 (input mode)
   */
  struct CCMR1_Input
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using IC2F    = regbits< type, 12,  4 >;  /**< Input capture 2 filter       */
    using IC2PSC  = regbits< type, 10,  2 >;  /**< Input capture 2 prescaler    */
    using CC2S    = regbits< type,  8,  2 >;  /**< Capture/Compare 2 selection  */
    using IC1F    = regbits< type,  4,  4 >;  /**< Input capture 1 filter       */
    using IC1PSC  = regbits< type,  2,  2 >;  /**< Input capture 1 prescaler    */
    using CC1S    = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection  */
  };

  /**
   * capture/compare enable register
   */
  struct CCER
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0000 >;

    using CC2NP  = regbits< type,  7,  1 >;  /**< Capture/Compare 2 output Polarity  */
    using CC2P   = regbits< type,  5,  1 >;  /**< Capture/Compare 2 output Polarity  */
    using CC2E   = regbits< type,  4,  1 >;  /**< Capture/Compare 2 output enable    */
    using CC1NP  = regbits< type,  3,  1 >;  /**< Capture/Compare 1 output Polarity  */
    using CC1P   = regbits< type,  1,  1 >;  /**< Capture/Compare 1 output Polarity  */
    using CC1E   = regbits< type,  0,  1 >;  /**< Capture/Compare 1 output enable    */
  };

  /**
   * counter
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_ = regbits< type,  0, 16 >;  /**< counter value  */
  };

  /**
   * prescaler
   */
  struct PSC
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0000 >;

    // fixme: Field name equals parent register name: PSC
    using PSC_ = regbits< type,  0, 16 >;  /**< Prescaler value  */
  };

  /**
   * auto-reload register
   */
  struct ARR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: ARR
    using ARR_ = regbits< type,  0, 16 >;  /**< Auto-reload value  */
  };

  /**
   * capture/compare register 1
   */
  struct CCR1
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR1
    using CCR1_ = regbits< type,  0, 16 >;  /**< Capture/Compare 1 value  */
  };

  /**
   * capture/compare register 2
   */
  struct CCR2
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR2
    using CCR2_ = regbits< type,  0, 16 >;  /**< Capture/Compare 2 value  */
  };

  /**
   * TIM21 option register
   */
  struct OR
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using ETR_RMP  = regbits< type,  0,  2 >;  /**< Timer21 ETR remap  */
    using TI1_RMP  = regbits< type,  2,  3 >;  /**< Timer21 TI1        */
    using TI2_RMP  = regbits< type,  5,  1 >;  /**< Timer21 TI2        */
  };
};
} // namespace mptl

#endif // ARCH_REG_TIM21_HPP_INCLUDED
