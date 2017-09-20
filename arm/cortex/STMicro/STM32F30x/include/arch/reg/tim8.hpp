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
//  Import from CMSIS-SVD: "STMicro/STM32F30x.svd"
//
//  name: STM32F30x
//  version: 1.4
//  description: STM32F30x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TIM8_HPP_INCLUDED
#define ARCH_REG_TIM8_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Advanced-timers
 */
struct TIM8
{
  static constexpr reg_addr_t base_addr = 0x40013400;

  /**
   * control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using CEN       = regbits< type,  0,  1 >;  /**< Counter enable                 */
    using UDIS      = regbits< type,  1,  1 >;  /**< Update disable                 */
    using URS       = regbits< type,  2,  1 >;  /**< Update request source          */
    using OPM       = regbits< type,  3,  1 >;  /**< One-pulse mode                 */
    using DIR       = regbits< type,  4,  1 >;  /**< Direction                      */
    using CMS       = regbits< type,  5,  2 >;  /**< Center-aligned mode selection  */
    using ARPE      = regbits< type,  7,  1 >;  /**< Auto-reload preload enable     */
    using CKD       = regbits< type,  8,  2 >;  /**< Clock division                 */
    using UIFREMAP  = regbits< type, 11,  1 >;  /**< UIF status bit remapping       */
  };

  /**
   * control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using CCPC   = regbits< type,  0,  1 >;  /**< Capture/compare preloaded control         */
    using CCUS   = regbits< type,  2,  1 >;  /**< Capture/compare control update selection  */
    using CCDS   = regbits< type,  3,  1 >;  /**< Capture/compare DMA selection             */
    using MMS    = regbits< type,  4,  3 >;  /**< Master mode selection                     */
    using TI1S   = regbits< type,  7,  1 >;  /**< TI1 selection                             */
    using OIS1   = regbits< type,  8,  1 >;  /**< Output Idle state 1                       */
    using OIS1N  = regbits< type,  9,  1 >;  /**< Output Idle state 1                       */
    using OIS2   = regbits< type, 10,  1 >;  /**< Output Idle state 2                       */
    using OIS2N  = regbits< type, 11,  1 >;  /**< Output Idle state 2                       */
    using OIS3   = regbits< type, 12,  1 >;  /**< Output Idle state 3                       */
    using OIS3N  = regbits< type, 13,  1 >;  /**< Output Idle state 3                       */
    using OIS4   = regbits< type, 14,  1 >;  /**< Output Idle state 4                       */
    using OIS5   = regbits< type, 16,  1 >;  /**< Output Idle state 5                       */
    using OIS6   = regbits< type, 18,  1 >;  /**< Output Idle state 6                       */
    using MMS2   = regbits< type, 20,  4 >;  /**< Master mode selection 2                   */
  };

  /**
   * slave mode control register
   */
  struct SMCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using SMS   = regbits< type,  0,  3 >;  /**< Slave mode selection        */
    using OCCS  = regbits< type,  3,  1 >;  /**< OCREF clear selection       */
    using TS    = regbits< type,  4,  3 >;  /**< Trigger selection           */
    using MSM   = regbits< type,  7,  1 >;  /**< Master/Slave mode           */
    using ETF   = regbits< type,  8,  4 >;  /**< External trigger filter     */
    using ETPS  = regbits< type, 12,  2 >;  /**< External trigger prescaler  */
    using ECE   = regbits< type, 14,  1 >;  /**< External clock enable       */
    using ETP   = regbits< type, 15,  1 >;  /**< External trigger polarity   */
    using SMS3  = regbits< type, 16,  1 >;  /**< Slave mode selection bit 3  */
  };

  /**
   * DMA/Interrupt enable register
   */
  struct DIER
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using TDE    = regbits< type, 14,  1 >;  /**< Trigger DMA request enable            */
    using COMDE  = regbits< type, 13,  1 >;  /**< Reserved                              */
    using CC4DE  = regbits< type, 12,  1 >;  /**< Capture/Compare 4 DMA request enable  */
    using CC3DE  = regbits< type, 11,  1 >;  /**< Capture/Compare 3 DMA request enable  */
    using CC2DE  = regbits< type, 10,  1 >;  /**< Capture/Compare 2 DMA request enable  */
    using CC1DE  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 DMA request enable  */
    using UDE    = regbits< type,  8,  1 >;  /**< Update DMA request enable             */
    using BIE    = regbits< type,  7,  1 >;  /**< Break interrupt enable                */
    using TIE    = regbits< type,  6,  1 >;  /**< Trigger interrupt enable              */
    using COMIE  = regbits< type,  5,  1 >;  /**< COM interrupt enable                  */
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

    using UIF    = regbits< type,  0,  1 >;  /**< Update interrupt flag               */
    using CC1IF  = regbits< type,  1,  1 >;  /**< Capture/compare 1 interrupt flag    */
    using CC2IF  = regbits< type,  2,  1 >;  /**< Capture/Compare 2 interrupt flag    */
    using CC3IF  = regbits< type,  3,  1 >;  /**< Capture/Compare 3 interrupt flag    */
    using CC4IF  = regbits< type,  4,  1 >;  /**< Capture/Compare 4 interrupt flag    */
    using COMIF  = regbits< type,  5,  1 >;  /**< COM interrupt flag                  */
    using TIF    = regbits< type,  6,  1 >;  /**< Trigger interrupt flag              */
    using BIF    = regbits< type,  7,  1 >;  /**< Break interrupt flag                */
    using B2IF   = regbits< type,  8,  1 >;  /**< Break 2 interrupt flag              */
    using CC1OF  = regbits< type,  9,  1 >;  /**< Capture/Compare 1 overcapture flag  */
    using CC2OF  = regbits< type, 10,  1 >;  /**< Capture/compare 2 overcapture flag  */
    using CC3OF  = regbits< type, 11,  1 >;  /**< Capture/Compare 3 overcapture flag  */
    using CC4OF  = regbits< type, 12,  1 >;  /**< Capture/Compare 4 overcapture flag  */
    using C5IF   = regbits< type, 16,  1 >;  /**< Capture/Compare 5 interrupt flag    */
    using C6IF   = regbits< type, 17,  1 >;  /**< Capture/Compare 6 interrupt flag    */
  };

  /**
   * event generation register
   */
  struct EGR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x0000 >;

    using UG    = regbits< type,  0,  1 >;  /**< Update generation                          */
    using CC1G  = regbits< type,  1,  1 >;  /**< Capture/compare 1 generation               */
    using CC2G  = regbits< type,  2,  1 >;  /**< Capture/compare 2 generation               */
    using CC3G  = regbits< type,  3,  1 >;  /**< Capture/compare 3 generation               */
    using CC4G  = regbits< type,  4,  1 >;  /**< Capture/compare 4 generation               */
    using COMG  = regbits< type,  5,  1 >;  /**< Capture/Compare control update generation  */
    using TG    = regbits< type,  6,  1 >;  /**< Trigger generation                         */
    using BG    = regbits< type,  7,  1 >;  /**< Break generation                           */
    using B2G   = regbits< type,  8,  1 >;  /**< Break 2 generation                         */
  };

  /**
   * capture/compare mode register (output mode)
   */
  struct CCMR1_Output
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using OC2CE   = regbits< type, 15,  1 >;  /**< Output Compare 2 clear enable    */
    using OC2M    = regbits< type, 12,  3 >;  /**< Output Compare 2 mode            */
    using OC2PE   = regbits< type, 11,  1 >;  /**< Output Compare 2 preload enable  */
    using OC2FE   = regbits< type, 10,  1 >;  /**< Output Compare 2 fast enable     */
    using CC2S    = regbits< type,  8,  2 >;  /**< Capture/Compare 2 selection      */
    using OC1CE   = regbits< type,  7,  1 >;  /**< Output Compare 1 clear enable    */
    using OC1M    = regbits< type,  4,  3 >;  /**< Output Compare 1 mode            */
    using OC1PE   = regbits< type,  3,  1 >;  /**< Output Compare 1 preload enable  */
    using OC1FE   = regbits< type,  2,  1 >;  /**< Output Compare 1 fast enable     */
    using CC1S    = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection      */
    using OC1M_3  = regbits< type, 16,  1 >;  /**< Output Compare 1 mode bit 3      */
    using OC2M_3  = regbits< type, 24,  1 >;  /**< Output Compare 2 mode bit 3      */
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
    using IC1PCS  = regbits< type,  2,  2 >;  /**< Input capture 1 prescaler    */
    using CC1S    = regbits< type,  0,  2 >;  /**< Capture/Compare 1 selection  */
  };

  /**
   * capture/compare mode register (output mode)
   */
  struct CCMR2_Output
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using OC4CE   = regbits< type, 15,  1 >;  /**< Output compare 4 clear enable    */
    using OC4M    = regbits< type, 12,  3 >;  /**< Output compare 4 mode            */
    using OC4PE   = regbits< type, 11,  1 >;  /**< Output compare 4 preload enable  */
    using OC4FE   = regbits< type, 10,  1 >;  /**< Output compare 4 fast enable     */
    using CC4S    = regbits< type,  8,  2 >;  /**< Capture/Compare 4 selection      */
    using OC3CE   = regbits< type,  7,  1 >;  /**< Output compare 3 clear enable    */
    using OC3M    = regbits< type,  4,  3 >;  /**< Output compare 3 mode            */
    using OC3PE   = regbits< type,  3,  1 >;  /**< Output compare 3 preload enable  */
    using OC3FE   = regbits< type,  2,  1 >;  /**< Output compare 3 fast enable     */
    using CC3S    = regbits< type,  0,  2 >;  /**< Capture/Compare 3 selection      */
    using OC3M_3  = regbits< type, 16,  1 >;  /**< Output Compare 3 mode bit 3      */
    using OC4M_3  = regbits< type, 24,  1 >;  /**< Output Compare 4 mode bit 3      */
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

    using CC1E   = regbits< type,  0,  1 >;  /**< Capture/Compare 1 output enable                */
    using CC1P   = regbits< type,  1,  1 >;  /**< Capture/Compare 1 output Polarity              */
    using CC1NE  = regbits< type,  2,  1 >;  /**< Capture/Compare 1 complementary output enable  */
    using CC1NP  = regbits< type,  3,  1 >;  /**< Capture/Compare 1 output Polarity              */
    using CC2E   = regbits< type,  4,  1 >;  /**< Capture/Compare 2 output enable                */
    using CC2P   = regbits< type,  5,  1 >;  /**< Capture/Compare 2 output Polarity              */
    using CC2NE  = regbits< type,  6,  1 >;  /**< Capture/Compare 2 complementary output enable  */
    using CC2NP  = regbits< type,  7,  1 >;  /**< Capture/Compare 2 output Polarity              */
    using CC3E   = regbits< type,  8,  1 >;  /**< Capture/Compare 3 output enable                */
    using CC3P   = regbits< type,  9,  1 >;  /**< Capture/Compare 3 output Polarity              */
    using CC3NE  = regbits< type, 10,  1 >;  /**< Capture/Compare 3 complementary output enable  */
    using CC3NP  = regbits< type, 11,  1 >;  /**< Capture/Compare 3 output Polarity              */
    using CC4E   = regbits< type, 12,  1 >;  /**< Capture/Compare 4 output enable                */
    using CC4P   = regbits< type, 13,  1 >;  /**< Capture/Compare 3 output Polarity              */
    using CC4NP  = regbits< type, 15,  1 >;  /**< Capture/Compare 4 output Polarity              */
    using CC5E   = regbits< type, 16,  1 >;  /**< Capture/Compare 5 output enable                */
    using CC5P   = regbits< type, 17,  1 >;  /**< Capture/Compare 5 output Polarity              */
    using CC6E   = regbits< type, 20,  1 >;  /**< Capture/Compare 6 output enable                */
    using CC6P   = regbits< type, 21,  1 >;  /**< Capture/Compare 6 output Polarity              */
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
    using UIFCPY  = regbits< type, 31,  1 >;  /**< UIF copy       */
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

    using REP  = regbits< type,  0, 16 >;  /**< Repetition counter value  */
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
   * capture/compare register 3
   */
  struct CCR3
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR3
    using CCR3_ = regbits< type,  0, 16 >;  /**< Capture/Compare 3 value  */
  };

  /**
   * capture/compare register 4
   */
  struct CCR4
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR4
    using CCR4_ = regbits< type,  0, 16 >;  /**< Capture/Compare 3 value  */
  };

  /**
   * break and dead-time register
   */
  struct BDTR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using DTG   = regbits< type,  0,  8 >;  /**< Dead-time generator setup          */
    using LOCK  = regbits< type,  8,  2 >;  /**< Lock configuration                 */
    using OSSI  = regbits< type, 10,  1 >;  /**< Off-state selection for Idle mode  */
    using OSSR  = regbits< type, 11,  1 >;  /**< Off-state selection for Run mode   */
    using BKE   = regbits< type, 12,  1 >;  /**< Break enable                       */
    using BKP   = regbits< type, 13,  1 >;  /**< Break polarity                     */
    using AOE   = regbits< type, 14,  1 >;  /**< Automatic output enable            */
    using MOE   = regbits< type, 15,  1 >;  /**< Main output enable                 */
    using BKF   = regbits< type, 16,  4 >;  /**< Break filter                       */
    using BK2F  = regbits< type, 20,  4 >;  /**< Break 2 filter                     */
    using BK2E  = regbits< type, 24,  1 >;  /**< Break 2 enable                     */
    using BK2P  = regbits< type, 25,  1 >;  /**< Break 2 polarity                   */
  };

  /**
   * DMA control register
   */
  struct DCR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using DBL  = regbits< type,  8,  5 >;  /**< DMA burst length  */
    using DBA  = regbits< type,  0,  5 >;  /**< DMA base address  */
  };

  /**
   * DMA address for full transfer
   */
  struct DMAR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using DMAB  = regbits< type,  0, 16 >;  /**< DMA register for burst accesses  */
  };

  /**
   * capture/compare mode register 3 (output mode)
   */
  struct CCMR3_Output
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using OC5FE   = regbits< type,  2,  1 >;  /**< Output compare 5 fast enable     */
    using OC5PE   = regbits< type,  3,  1 >;  /**< Output compare 5 preload enable  */
    using OC5M    = regbits< type,  4,  3 >;  /**< Output compare 5 mode            */
    using OC5CE   = regbits< type,  7,  1 >;  /**< Output compare 5 clear enable    */
    using OC6FE   = regbits< type, 10,  1 >;  /**< Output compare 6 fast enable     */
    using OC6PE   = regbits< type, 11,  1 >;  /**< Output compare 6 preload enable  */
    using OC6M    = regbits< type, 12,  3 >;  /**< Output compare 6 mode            */
    using OC6CE   = regbits< type, 15,  1 >;  /**< Output compare 6 clear enable    */
    using OC5M_3  = regbits< type, 16,  1 >;  /**< Outout Compare 5 mode bit 3      */
    using OC6M_3  = regbits< type, 24,  1 >;  /**< Outout Compare 6 mode bit 3      */
  };

  /**
   * capture/compare register 5
   */
  struct CCR5
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR5
    using CCR5_  = regbits< type,  0, 16 >;  /**< Capture/Compare 5 value        */
    using GC5C1  = regbits< type, 29,  1 >;  /**< Group Channel 5 and Channel 1  */
    using GC5C2  = regbits< type, 30,  1 >;  /**< Group Channel 5 and Channel 2  */
    using GC5C3  = regbits< type, 31,  1 >;  /**< Group Channel 5 and Channel 3  */
  };

  /**
   * capture/compare register 6
   */
  struct CCR6
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CCR6
    using CCR6_ = regbits< type,  0, 16 >;  /**< Capture/Compare 6 value  */
  };

  /**
   * option registers
   */
  struct OR
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using TIM8_ETR_ADC2_RMP  = regbits< type,  0,  2 >;  /**< TIM8_ETR_ADC2 remapping capability  */
    using TIM8_ETR_ADC3_RMP  = regbits< type,  2,  2 >;  /**< TIM8_ETR_ADC3 remapping capability  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TIM8_HPP_INCLUDED
