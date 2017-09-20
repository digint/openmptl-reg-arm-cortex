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
//  Import from CMSIS-SVD: "STMicro/STM32F334x.svd"
//
//  name: STM32F334x
//  version: 1.0
//  description: STM32F334x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TIM17_HPP_INCLUDED
#define ARCH_REG_TIM17_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General purpose timer
 */
struct TIM17
{
  static constexpr reg_addr_t base_addr = 0x40014800;

  /**
   * control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using CEN       = regbits< type,  0,  1 >;  /**< Counter enable              */
    using UDIS      = regbits< type,  1,  1 >;  /**< Update disable              */
    using URS       = regbits< type,  2,  1 >;  /**< Update request source       */
    using OPM       = regbits< type,  3,  1 >;  /**< One-pulse mode              */
    using ARPE      = regbits< type,  7,  1 >;  /**< Auto-reload preload enable  */
    using CKD       = regbits< type,  8,  2 >;  /**< Clock division              */
    using UIFREMAP  = regbits< type, 11,  1 >;  /**< UIF status bit remapping    */
  };

  /**
   * control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using OIS1N  = regbits< type,  9,  1 >;  /**< Output Idle state 1                       */
    using OIS1   = regbits< type,  8,  1 >;  /**< Output Idle state 1                       */
    using CCDS   = regbits< type,  3,  1 >;  /**< Capture/compare DMA selection             */
    using CCUS   = regbits< type,  2,  1 >;  /**< Capture/compare control update selection  */
    using CCPC   = regbits< type,  0,  1 >;  /**< Capture/compare preloaded control         */
  };

  /**
   * DMA/Interrupt enable register
   */
  struct DIER
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using UIE    = regbits< type,  0,  1 >;  /**< Update interrupt enable               */
    using CC1IE  = regbits< type,  1,  1 >;  /**< Capture/Compare 1 interrupt enable    */
    using COMIE  = regbits< type,  5,  1 >;  /**< COM interrupt enable                  */
    using TIE    = regbits< type,  6,  1 >;  /**< Trigger interrupt enable              */
    using BIE    = regbits< type,  7,  1 >;  /**< Break interrupt enable                */
    using UDE    = regbits< type,  8,  1 >;  /**< Update DMA request enable             */
    using CC1DE  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 DMA request enable  */
    using COMDE  = regbits< type, 13,  1 >;  /**< COM DMA request enable                */
    using TDE    = regbits< type, 14,  1 >;  /**< Trigger DMA request enable            */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using CC1OF  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 overcapture flag  */
    using BIF    = regbits< type,  7,  1 >;  /**< Break interrupt flag                */
    using TIF    = regbits< type,  6,  1 >;  /**< Trigger interrupt flag              */
    using COMIF  = regbits< type,  5,  1 >;  /**< COM interrupt flag                  */
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

    using BG    = regbits< type,  7,  1 >;  /**< Break generation                           */
    using TG    = regbits< type,  6,  1 >;  /**< Trigger generation                         */
    using COMG  = regbits< type,  5,  1 >;  /**< Capture/Compare control update generation  */
    using CC1G  = regbits< type,  1,  1 >;  /**< Capture/compare 1 generation               */
    using UG    = regbits< type,  0,  1 >;  /**< Update generation                          */
  };

  /**
   * capture/compare mode register (output mode)
   */
  struct CCMR1_Output
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using CC1S    = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection      */
    using OC1FE   = regbits< type,  2,  1 >;  /**< Output Compare 1 fast enable     */
    using OC1PE   = regbits< type,  3,  1 >;  /**< Output Compare 1 preload enable  */
    using OC1M    = regbits< type,  4,  3 >;  /**< Output Compare 1 mode            */
    using OC1M_3  = regbits< type, 16,  1 >;  /**< Output Compare 1 mode            */
  };

  /**
   * capture/compare mode register 1 (input mode)
   */
  struct CCMR1_Input
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

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

    using CC1NP  = regbits< type,  3,  1 >;  /**< Capture/Compare 1 output Polarity              */
    using CC1NE  = regbits< type,  2,  1 >;  /**< Capture/Compare 1 complementary output enable  */
    using CC1P   = regbits< type,  1,  1 >;  /**< Capture/Compare 1 output Polarity              */
    using CC1E   = regbits< type,  0,  1 >;  /**< Capture/Compare 1 output enable                */
  };

  /**
   * counter
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_    = regbits< type,  0, 16 >;  /**< counter value  */
    using UIFCPY  = regbits< type, 31,  1 >;  /**< UIF Copy       */
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
   * repetition counter register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x0000 >;

    using REP  = regbits< type,  0,  8 >;  /**< Repetition counter value  */
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
   * break and dead-time register
   */
  struct BDTR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x0000 >;

    using DTG   = regbits< type,  0,  8 >;  /**< Dead-time generator setup          */
    using LOCK  = regbits< type,  8,  2 >;  /**< Lock configuration                 */
    using OSSI  = regbits< type, 10,  1 >;  /**< Off-state selection for Idle mode  */
    using OSSR  = regbits< type, 11,  1 >;  /**< Off-state selection for Run mode   */
    using BKE   = regbits< type, 12,  1 >;  /**< Break enable                       */
    using BKP   = regbits< type, 13,  1 >;  /**< Break polarity                     */
    using AOE   = regbits< type, 14,  1 >;  /**< Automatic output enable            */
    using MOE   = regbits< type, 15,  1 >;  /**< Main output enable                 */
    using BKF   = regbits< type, 16,  4 >;  /**< Break filter                       */
  };

  /**
   * DMA control register
   */
  struct DCR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x0000 >;

    using DBL  = regbits< type,  8,  5 >;  /**< DMA burst length  */
    using DBA  = regbits< type,  0,  5 >;  /**< DMA base address  */
  };

  /**
   * DMA address for full transfer
   */
  struct DMAR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x0000 >;

    using DMAB  = regbits< type,  0, 16 >;  /**< DMA register for burst accesses  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TIM17_HPP_INCLUDED
