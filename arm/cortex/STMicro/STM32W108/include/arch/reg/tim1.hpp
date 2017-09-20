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

#ifndef ARCH_REG_TIM1_HPP_INCLUDED
#define ARCH_REG_TIM1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General purpose timer 1
 */
struct TIM1
{
  static constexpr reg_addr_t base_addr = 0x4000a800;

  /**
   * TIM Interrupt Status Register
   */
  struct TIM1_ISR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using RSVD   = regbits< type,  8,  5 >;  /**< RSVD   */
    using TIF    = regbits< type,  6,  1 >;  /**< TIF    */
    using CC4IF  = regbits< type,  4,  1 >;  /**< CC4IF  */
    using CC3IF  = regbits< type,  3,  1 >;  /**< CC3IF  */
    using CC2IF  = regbits< type,  2,  1 >;  /**< CC2IF  */
    using CC1IF  = regbits< type,  1,  1 >;  /**< CC1IF  */
    using UIF    = regbits< type,  0,  1 >;  /**< UIF    */
  };

  /**
   * TIM interrupt missed register
   */
  struct TIM1_MISSR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using CC4IM  = regbits< type, 12,  1 >;  /**< CC4IM  */
    using CC3IM  = regbits< type, 11,  1 >;  /**< CC3IM  */
    using CC2IM  = regbits< type, 10,  1 >;  /**< CC2IM  */
    using CC1IM  = regbits< type,  9,  1 >;  /**< CC1IM  */
    using RSVD   = regbits< type,  0,  7 >;  /**< RSVD   */
  };

  /**
   * control register 1
   */
  struct TIM1_CR1
  : public reg< uint32_t, base_addr + 0x3800, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3800, rw, 0x00000000 >;

    using ARBE  = regbits< type,  7,  1 >;  /**< ARBE  */
    using CMS   = regbits< type,  5,  2 >;  /**< CMS   */
    using DIR   = regbits< type,  4,  1 >;  /**< DIR   */
    using OPM   = regbits< type,  3,  1 >;  /**< OPM   */
    using URS   = regbits< type,  2,  1 >;  /**< URS   */
    using UDIS  = regbits< type,  1,  1 >;  /**< UDIS  */
    using CEN   = regbits< type,  0,  1 >;  /**< CEN   */
  };

  /**
   * TIM Interrupt Enable Register
   */
  struct TIM1_IER
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using TIE    = regbits< type,  6,  1 >;  /**< TIE    */
    using CC4IE  = regbits< type,  4,  1 >;  /**< CC4IE  */
    using CC3IE  = regbits< type,  3,  1 >;  /**< CC3IE  */
    using CC2IE  = regbits< type,  2,  1 >;  /**< CC2IE  */
    using CC1IE  = regbits< type,  1,  1 >;  /**< CC1IE  */
    using UIE    = regbits< type,  0,  1 >;  /**< UIE    */
  };

  /**
   * control register 2
   */
  struct TIM1_CR2
  : public reg< uint32_t, base_addr + 0x3804, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3804, rw, 0x00000000 >;

    using TI1S  = regbits< type,  7,  1 >;  /**< TI1S  */
    using MMS   = regbits< type,  4,  3 >;  /**< MMS   */
  };

  /**
   * slave Mode Control register
   */
  struct TIM1_SMCR
  : public reg< uint32_t, base_addr + 0x3808, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3808, rw, 0x00000000 >;

    using ETP   = regbits< type, 15,  1 >;  /**< ETP   */
    using ECE   = regbits< type, 14,  1 >;  /**< ECE   */
    using ETPS  = regbits< type, 12,  2 >;  /**< ETPS  */
    using ETF   = regbits< type,  8,  4 >;  /**< ETF   */
    using MSM   = regbits< type,  7,  1 >;  /**< MSM   */
    using TS    = regbits< type,  4,  3 >;  /**< TS    */
    using SMS   = regbits< type,  0,  3 >;  /**< SMS   */
  };

  /**
   * TIM event generation register
   */
  struct TIM1_EGR
  : public reg< uint32_t, base_addr + 0x3814, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3814, wo, 0x00000000 >;

    using TG    = regbits< type,  6,  1 >;  /**< TG    */
    using CC4G  = regbits< type,  4,  1 >;  /**< CC4G  */
    using CC3G  = regbits< type,  3,  1 >;  /**< CC3G  */
    using CC2G  = regbits< type,  2,  1 >;  /**< CC2G  */
    using CC1G  = regbits< type,  1,  1 >;  /**< CC1G  */
    using UG    = regbits< type,  0,  1 >;  /**< UG    */
  };

  /**
   * capture/compare mode register 1 (Input mode)
   */
  struct TIM1_CCMR1_Input
  : public reg< uint32_t, base_addr + 0x3818, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3818, rw, 0x00000000 >;

    using CC1S    = regbits< type,  0,  2 >;  /**< CC1S    */
    using IC1PSC  = regbits< type,  2,  2 >;  /**< IC1PSC  */
    using IC1F    = regbits< type,  4,  4 >;  /**< IC1F    */
    using CC2S    = regbits< type,  8,  2 >;  /**< CC2S    */
    using IC2PSC  = regbits< type, 10,  2 >;  /**< IC2PSC  */
    using IC2F    = regbits< type, 12,  4 >;  /**< IC2F    */
  };

  /**
   * capture/compare mode register 1 (output mode)
   */
  struct TIM1_CCMR1_Output
  : public reg< uint32_t, base_addr + 0x3818, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3818, rw, 0x00000000 >;

    using OC2M   = regbits< type, 12,  3 >;  /**< OC2M   */
    using OC2PE  = regbits< type, 11,  1 >;  /**< OC2PE  */
    using OC2FE  = regbits< type, 10,  1 >;  /**< OC2FE  */
    using CC2S   = regbits< type,  8,  2 >;  /**< CC2S   */
    using OC1M   = regbits< type,  4,  3 >;  /**< OC1M   */
    using OC1PE  = regbits< type,  3,  1 >;  /**< OC1PE  */
    using OC1FE  = regbits< type,  2,  1 >;  /**< OC1FE  */
    using CC1S   = regbits< type,  0,  2 >;  /**< CC1S   */
  };

  /**
   * capture/compare mode register 2 (input mode)
   */
  struct TIM1_CCMR2_Input
  : public reg< uint32_t, base_addr + 0x381c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x381c, rw, 0x00000000 >;

    using CC3S    = regbits< type,  0,  2 >;  /**< CC3S    */
    using IC3PSC  = regbits< type,  2,  2 >;  /**< IC3PSC  */
    using IC3F    = regbits< type,  4,  4 >;  /**< IC3F    */
    using CC4S    = regbits< type,  8,  2 >;  /**< CC4S    */
    using IC4PSC  = regbits< type, 10,  2 >;  /**< IC4PSC  */
    using IC4F    = regbits< type, 12,  4 >;  /**< IC4F    */
  };

  /**
   * capture/compare mode register 2 (output mode)
   */
  struct TIM1_CCMR2_Output
  : public reg< uint32_t, base_addr + 0x381c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x381c, rw, 0x00000000 >;

    using OC4M   = regbits< type, 12,  3 >;  /**< OC4M   */
    using OC4PE  = regbits< type, 11,  1 >;  /**< OC4PE  */
    using OC4FE  = regbits< type, 10,  1 >;  /**< OC4FE  */
    using CC4S   = regbits< type,  8,  2 >;  /**< CC4S   */
    using OC3M   = regbits< type,  4,  3 >;  /**< OC3M   */
    using OC3PE  = regbits< type,  3,  1 >;  /**< OC3PE  */
    using OC3FE  = regbits< type,  2,  1 >;  /**< OC3FE  */
    using CC3S   = regbits< type,  0,  2 >;  /**< CC3S   */
  };

  /**
   * TIM capture/compare enable register
   */
  struct TIM1_CCER
  : public reg< uint32_t, base_addr + 0x3820, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3820, rw, 0x00000000 >;

    using CC4P  = regbits< type, 13,  1 >;  /**< CC4P  */
    using CC4E  = regbits< type, 12,  1 >;  /**< CC4E  */
    using CC3P  = regbits< type,  9,  1 >;  /**< CC3P  */
    using CC3E  = regbits< type,  8,  1 >;  /**< CC3E  */
    using CC2P  = regbits< type,  5,  1 >;  /**< CC2P  */
    using CC2E  = regbits< type,  4,  1 >;  /**< CC2E  */
    using CC1P  = regbits< type,  1,  1 >;  /**< CC1P  */
    using CC1E  = regbits< type,  0,  1 >;  /**< CC1E  */
  };

  /**
   * TIM counter register
   */
  struct TIM1_CNT
  : public reg< uint32_t, base_addr + 0x3824, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3824, rw, 0x00000000 >;

    using CNT  = regbits< type,  0, 16 >;  /**< CNT  */
  };

  /**
   * TIM prescaler register
   */
  struct TIM1_PSC
  : public reg< uint32_t, base_addr + 0x3828, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3828, rw, 0x00000000 >;

    using PSC  = regbits< type,  0, 16 >;  /**< PSC  */
  };

  /**
   * TIM auto-reload register
   */
  struct TIM1_ARR
  : public reg< uint32_t, base_addr + 0x382c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x382c, rw, 0x00000000 >;

    using ARR  = regbits< type,  0, 16 >;  /**< ARR  */
  };

  /**
   * IM capture/compare register 1
   */
  struct TIM1_CCR1
  : public reg< uint32_t, base_addr + 0x3834, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3834, rw, 0x00000000 >;

    using CCR  = regbits< type,  0, 16 >;  /**< CCR  */
  };

  /**
   * TIM capture/compare register 2
   */
  struct TIM1_CCR2
  : public reg< uint32_t, base_addr + 0x3838, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3838, rw, 0x00000000 >;

    using CCR  = regbits< type,  0, 16 >;  /**< CCR  */
  };

  /**
   * TIM capture/compare register 3
   */
  struct TIM1_CCR3
  : public reg< uint32_t, base_addr + 0x383c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x383c, rw, 0x00000000 >;

    using CCR  = regbits< type,  0, 16 >;  /**< CCR  */
  };

  /**
   * TIM capture/compare register 4
   */
  struct TIM1_CCR4
  : public reg< uint32_t, base_addr + 0x3840, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3840, rw, 0x00000000 >;

    using CCR  = regbits< type,  0, 16 >;  /**< CCR  */
  };

  /**
   * TIM option register
   */
  struct TIM1_OR
  : public reg< uint32_t, base_addr + 0x3850, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3850, rw, 0x00000000 >;

    using ORRSVD     = regbits< type,  3,  1 >;  /**< ORRSVD     */
    using CLKMSKEN   = regbits< type,  2,  1 >;  /**< CLKMSKEN   */
    using EXTRIGSEL  = regbits< type,  0,  2 >;  /**< EXTRIGSEL  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TIM1_HPP_INCLUDED
