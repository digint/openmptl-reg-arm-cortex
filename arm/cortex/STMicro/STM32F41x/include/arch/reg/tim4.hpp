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
//  Import from CMSIS-SVD: "STMicro/STM32F41x.svd"
//
//  name: STM32F41x
//  version: 1.5
//  description: STM32F41x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TIM4_HPP_INCLUDED
#define ARCH_REG_TIM4_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General purpose timers
 *
 * (derived from: TIM3)
 */
struct TIM4
{
  static constexpr reg_addr_t base_addr = 0x40000800;

  /**
   * control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using CKD   = regbits< type,  8,  2 >;  /**< Clock division                 */
    using ARPE  = regbits< type,  7,  1 >;  /**< Auto-reload preload enable     */
    using CMS   = regbits< type,  5,  2 >;  /**< Center-aligned mode selection  */
    using DIR   = regbits< type,  4,  1 >;  /**< Direction                      */
    using OPM   = regbits< type,  3,  1 >;  /**< One-pulse mode                 */
    using URS   = regbits< type,  2,  1 >;  /**< Update request source          */
    using UDIS  = regbits< type,  1,  1 >;  /**< Update disable                 */
    using CEN   = regbits< type,  0,  1 >;  /**< Counter enable                 */
  };

  /**
   * control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using TI1S  = regbits< type,  7,  1 >;  /**< TI1 selection                  */
    using MMS   = regbits< type,  4,  3 >;  /**< Master mode selection          */
    using CCDS  = regbits< type,  3,  1 >;  /**< Capture/compare DMA selection  */
  };

  /**
   * slave mode control register
   */
  struct SMCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using ETP   = regbits< type, 15,  1 >;  /**< External trigger polarity   */
    using ECE   = regbits< type, 14,  1 >;  /**< External clock enable       */
    using ETPS  = regbits< type, 12,  2 >;  /**< External trigger prescaler  */
    using ETF   = regbits< type,  8,  4 >;  /**< External trigger filter     */
    using MSM   = regbits< type,  7,  1 >;  /**< Master/Slave mode           */
    using TS    = regbits< type,  4,  3 >;  /**< Trigger selection           */
    using SMS   = regbits< type,  0,  3 >;  /**< Slave mode selection        */
  };

  /**
   * DMA/Interrupt enable register
   */
  struct DIER
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using TDE    = regbits< type, 14,  1 >;  /**< Trigger DMA request enable            */
    using CC4DE  = regbits< type, 12,  1 >;  /**< Capture/Compare 4 DMA request enable  */
    using CC3DE  = regbits< type, 11,  1 >;  /**< Capture/Compare 3 DMA request enable  */
    using CC2DE  = regbits< type, 10,  1 >;  /**< Capture/Compare 2 DMA request enable  */
    using CC1DE  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 DMA request enable  */
    using UDE    = regbits< type,  8,  1 >;  /**< Update DMA request enable             */
    using TIE    = regbits< type,  6,  1 >;  /**< Trigger interrupt enable              */
    using CC4IE  = regbits< type,  4,  1 >;  /**< Capture/Compare 4 interrupt enable    */
    using CC3IE  = regbits< type,  3,  1 >;  /**< Capture/Compare 3 interrupt enable    */
    using CC2IE  = regbits< type,  2,  1 >;  /**< Capture/Compare 2 interrupt enable    */
    using CC1IE  = regbits< type,  1,  1 >;  /**< Capture/Compare 1 interrupt enable    */
    using UIE    = regbits< type,  0,  1 >;  /**< Update interrupt enable               */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using CC4OF  = regbits< type, 12,  1 >;  /**< Capture/Compare 4 overcapture flag  */
    using CC3OF  = regbits< type, 11,  1 >;  /**< Capture/Compare 3 overcapture flag  */
    using CC2OF  = regbits< type, 10,  1 >;  /**< Capture/compare 2 overcapture flag  */
    using CC1OF  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 overcapture flag  */
    using TIF    = regbits< type,  6,  1 >;  /**< Trigger interrupt flag              */
    using CC4IF  = regbits< type,  4,  1 >;  /**< Capture/Compare 4 interrupt flag    */
    using CC3IF  = regbits< type,  3,  1 >;  /**< Capture/Compare 3 interrupt flag    */
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
    using CC4G  = regbits< type,  4,  1 >;  /**< Capture/compare 4 generation  */
    using CC3G  = regbits< type,  3,  1 >;  /**< Capture/compare 3 generation  */
    using CC2G  = regbits< type,  2,  1 >;  /**< Capture/compare 2 generation  */
    using CC1G  = regbits< type,  1,  1 >;  /**< Capture/compare 1 generation  */
    using UG    = regbits< type,  0,  1 >;  /**< Update generation             */
  };

  /**
   * capture/compare mode register 1 (output mode)
   */
  struct CCMR1_Output
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using OC2CE  = regbits< type, 15,  1 >;  /**< OC2CE  */
    using OC2M   = regbits< type, 12,  3 >;  /**< OC2M   */
    using OC2PE  = regbits< type, 11,  1 >;  /**< OC2PE  */
    using OC2FE  = regbits< type, 10,  1 >;  /**< OC2FE  */
    using CC2S   = regbits< type,  8,  2 >;  /**< CC2S   */
    using OC1CE  = regbits< type,  7,  1 >;  /**< OC1CE  */
    using OC1M   = regbits< type,  4,  3 >;  /**< OC1M   */
    using OC1PE  = regbits< type,  3,  1 >;  /**< OC1PE  */
    using OC1FE  = regbits< type,  2,  1 >;  /**< OC1FE  */
    using CC1S   = regbits< type,  0,  2 >;  /**< CC1S   */
  };

  /**
   * capture/compare mode register 1 (input mode)
   */
  struct CCMR1_Input
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using IC2F    = regbits< type, 12,  4 >;  /**< Input capture 2 filter       */
    using IC2PCS  = regbits< type, 10,  2 >;  /**< Input capture 2 prescaler    */
    using CC2S    = regbits< type,  8,  2 >;  /**< Capture/Compare 2 selection  */
    using IC1F    = regbits< type,  4,  4 >;  /**< Input capture 1 filter       */
    using ICPCS   = regbits< type,  2,  2 >;  /**< Input capture 1 prescaler    */
    using CC1S    = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection  */
  };

  /**
   * capture/compare mode register 2 (output mode)
   */
  struct CCMR2_Output
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using O24CE  = regbits< type, 15,  1 >;  /**< O24CE  */
    using OC4M   = regbits< type, 12,  3 >;  /**< OC4M   */
    using OC4PE  = regbits< type, 11,  1 >;  /**< OC4PE  */
    using OC4FE  = regbits< type, 10,  1 >;  /**< OC4FE  */
    using CC4S   = regbits< type,  8,  2 >;  /**< CC4S   */
    using OC3CE  = regbits< type,  7,  1 >;  /**< OC3CE  */
    using OC3M   = regbits< type,  4,  3 >;  /**< OC3M   */
    using OC3PE  = regbits< type,  3,  1 >;  /**< OC3PE  */
    using OC3FE  = regbits< type,  2,  1 >;  /**< OC3FE  */
    using CC3S   = regbits< type,  0,  2 >;  /**< CC3S   */
  };

  /**
   * capture/compare mode register 2 (input mode)
   */
  struct CCMR2_Input
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using IC4F    = regbits< type, 12,  4 >;  /**< Input capture 4 filter       */
    using IC4PSC  = regbits< type, 10,  2 >;  /**< Input capture 4 prescaler    */
    using CC4S    = regbits< type,  8,  2 >;  /**< Capture/Compare 4 selection  */
    using IC3F    = regbits< type,  4,  4 >;  /**< Input capture 3 filter       */
    using IC3PSC  = regbits< type,  2,  2 >;  /**< Input capture 3 prescaler    */
    using CC3S    = regbits< type,  0,  2 >;  /**< Capture/compare 3 selection  */
  };

  /**
   * capture/compare enable register
   */
  struct CCER
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0000 >;

    using CC4NP  = regbits< type, 15,  1 >;  /**< Capture/Compare 4 output Polarity  */
    using CC4P   = regbits< type, 13,  1 >;  /**< Capture/Compare 3 output Polarity  */
    using CC4E   = regbits< type, 12,  1 >;  /**< Capture/Compare 4 output enable    */
    using CC3NP  = regbits< type, 11,  1 >;  /**< Capture/Compare 3 output Polarity  */
    using CC3P   = regbits< type,  9,  1 >;  /**< Capture/Compare 3 output Polarity  */
    using CC3E   = regbits< type,  8,  1 >;  /**< Capture/Compare 3 output enable    */
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

    using CNT_H  = regbits< type, 16, 16 >;  /**< High counter value  */
    using CNT_L  = regbits< type,  0, 16 >;  /**< Low counter value   */
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

    using ARR_H  = regbits< type, 16, 16 >;  /**< High Auto-reload value  */
    using ARR_L  = regbits< type,  0, 16 >;  /**< Low Auto-reload value   */
  };

  /**
   * capture/compare register 1
   */
  struct CCR1
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using CCR1_H  = regbits< type, 16, 16 >;  /**< High Capture/Compare 1 value  */
    using CCR1_L  = regbits< type,  0, 16 >;  /**< Low Capture/Compare 1 value   */
  };

  /**
   * capture/compare register 2
   */
  struct CCR2
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using CCR2_H  = regbits< type, 16, 16 >;  /**< High Capture/Compare 2 value  */
    using CCR2_L  = regbits< type,  0, 16 >;  /**< Low Capture/Compare 2 value   */
  };

  /**
   * capture/compare register 3
   */
  struct CCR3
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using CCR3_H  = regbits< type, 16, 16 >;  /**< High Capture/Compare value  */
    using CCR3_L  = regbits< type,  0, 16 >;  /**< Low Capture/Compare value   */
  };

  /**
   * capture/compare register 4
   */
  struct CCR4
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using CCR4_H  = regbits< type, 16, 16 >;  /**< High Capture/Compare value  */
    using CCR4_L  = regbits< type,  0, 16 >;  /**< Low Capture/Compare value   */
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

#endif // ARCH_REG_TIM4_HPP_INCLUDED
