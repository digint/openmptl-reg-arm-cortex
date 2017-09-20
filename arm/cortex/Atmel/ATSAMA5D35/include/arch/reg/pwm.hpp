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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D35.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D35
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D35 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, dual Ethernet, dual CAN, security (refer to http://www.atmel.com/devices/SAMA5D35.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWM_HPP_INCLUDED
#define ARCH_REG_PWM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pulse Width Modulation Controller
 */
struct PWM
{
  static constexpr reg_addr_t base_addr = 0xf002c000;

  /**
   * PWM Clock Register
   */
  struct CLK
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using DIVA  = regbits< type,  0,  8 >;  /**< CLKA, CLKB Divide Factor           */
    using PREA  = regbits< type,  8,  4 >;  /**< CLKA, CLKB Source Clock Selection  */
    using DIVB  = regbits< type, 16,  8 >;  /**< CLKA, CLKB Divide Factor           */
    using PREB  = regbits< type, 24,  4 >;  /**< CLKA, CLKB Source Clock Selection  */
  };

  /**
   * PWM Enable Register
   */
  struct ENA
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Disable Register
   */
  struct DIS
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Interrupt Enable Register 1
   */
  struct IER1
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using CHID0   = regbits< type,  0,  1 >;  /**< Counter Event on Channel 0 Interrupt Enable             */
    using CHID1   = regbits< type,  1,  1 >;  /**< Counter Event on Channel 1 Interrupt Enable             */
    using CHID2   = regbits< type,  2,  1 >;  /**< Counter Event on Channel 2 Interrupt Enable             */
    using CHID3   = regbits< type,  3,  1 >;  /**< Counter Event on Channel 3 Interrupt Enable             */
    using FCHID0  = regbits< type, 16,  1 >;  /**< Fault Protection Trigger on Channel 0 Interrupt Enable  */
    using FCHID1  = regbits< type, 17,  1 >;  /**< Fault Protection Trigger on Channel 1 Interrupt Enable  */
    using FCHID2  = regbits< type, 18,  1 >;  /**< Fault Protection Trigger on Channel 2 Interrupt Enable  */
    using FCHID3  = regbits< type, 19,  1 >;  /**< Fault Protection Trigger on Channel 3 Interrupt Enable  */
  };

  /**
   * PWM Interrupt Disable Register 1
   */
  struct IDR1
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using CHID0   = regbits< type,  0,  1 >;  /**< Counter Event on Channel 0 Interrupt Disable             */
    using CHID1   = regbits< type,  1,  1 >;  /**< Counter Event on Channel 1 Interrupt Disable             */
    using CHID2   = regbits< type,  2,  1 >;  /**< Counter Event on Channel 2 Interrupt Disable             */
    using CHID3   = regbits< type,  3,  1 >;  /**< Counter Event on Channel 3 Interrupt Disable             */
    using FCHID0  = regbits< type, 16,  1 >;  /**< Fault Protection Trigger on Channel 0 Interrupt Disable  */
    using FCHID1  = regbits< type, 17,  1 >;  /**< Fault Protection Trigger on Channel 1 Interrupt Disable  */
    using FCHID2  = regbits< type, 18,  1 >;  /**< Fault Protection Trigger on Channel 2 Interrupt Disable  */
    using FCHID3  = regbits< type, 19,  1 >;  /**< Fault Protection Trigger on Channel 3 Interrupt Disable  */
  };

  /**
   * PWM Interrupt Mask Register 1
   */
  struct IMR1
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using CHID0   = regbits< type,  0,  1 >;  /**< Counter Event on Channel 0 Interrupt Mask             */
    using CHID1   = regbits< type,  1,  1 >;  /**< Counter Event on Channel 1 Interrupt Mask             */
    using CHID2   = regbits< type,  2,  1 >;  /**< Counter Event on Channel 2 Interrupt Mask             */
    using CHID3   = regbits< type,  3,  1 >;  /**< Counter Event on Channel 3 Interrupt Mask             */
    using FCHID0  = regbits< type, 16,  1 >;  /**< Fault Protection Trigger on Channel 0 Interrupt Mask  */
    using FCHID1  = regbits< type, 17,  1 >;  /**< Fault Protection Trigger on Channel 1 Interrupt Mask  */
    using FCHID2  = regbits< type, 18,  1 >;  /**< Fault Protection Trigger on Channel 2 Interrupt Mask  */
    using FCHID3  = regbits< type, 19,  1 >;  /**< Fault Protection Trigger on Channel 3 Interrupt Mask  */
  };

  /**
   * PWM Interrupt Status Register 1
   */
  struct ISR1
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using CHID0   = regbits< type,  0,  1 >;  /**< Counter Event on Channel 0             */
    using CHID1   = regbits< type,  1,  1 >;  /**< Counter Event on Channel 1             */
    using CHID2   = regbits< type,  2,  1 >;  /**< Counter Event on Channel 2             */
    using CHID3   = regbits< type,  3,  1 >;  /**< Counter Event on Channel 3             */
    using FCHID0  = regbits< type, 16,  1 >;  /**< Fault Protection Trigger on Channel 0  */
    using FCHID1  = regbits< type, 17,  1 >;  /**< Fault Protection Trigger on Channel 1  */
    using FCHID2  = regbits< type, 18,  1 >;  /**< Fault Protection Trigger on Channel 2  */
    using FCHID3  = regbits< type, 19,  1 >;  /**< Fault Protection Trigger on Channel 3  */
  };

  /**
   * PWM Sync Channels Mode Register
   */
  struct SCM
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using SYNC0  = regbits< type,  0,  1 >;  /**< Synchronous Channel 0             */
    using SYNC1  = regbits< type,  1,  1 >;  /**< Synchronous Channel 1             */
    using SYNC2  = regbits< type,  2,  1 >;  /**< Synchronous Channel 2             */
    using SYNC3  = regbits< type,  3,  1 >;  /**< Synchronous Channel 3             */
    using UPDM   = regbits< type, 16,  2 >;  /**< Synchronous Channels Update Mode  */
  };

  /**
   * PWM Sync Channels Update Control Register
   */
  struct SCUC
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    using UPDULOCK  = regbits< type,  0,  1 >;  /**< Synchronous Channels Update Unlock  */
  };

  /**
   * PWM Sync Channels Update Period Register
   */
  struct SCUP
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >;

    using UPR     = regbits< type,  0,  4 >;  /**< Update Period          */
    using UPRCNT  = regbits< type,  4,  4 >;  /**< Update Period Counter  */
  };

  /**
   * PWM Sync Channels Update Period Update Register
   */
  struct SCUPUPD
  : public reg< uint32_t, base_addr + 0x00000030, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, wo, 0x00000000 >;

    using UPRUPD  = regbits< type,  0,  4 >;  /**< Update Period Update  */
  };

  /**
   * PWM Interrupt Enable Register 2
   */
  struct IER2
  : public reg< uint32_t, base_addr + 0x00000034, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, wo, 0 >;

    using WRDY   = regbits< type,  0,  1 >;  /**< Write Ready for Synchronous Channels Update Interrupt Enable  */
    using UNRE   = regbits< type,  3,  1 >;  /**< Synchronous Channels Update Underrun Error Interrupt Enable   */
    using CMPM0  = regbits< type,  8,  1 >;  /**< Comparison 0 Match Interrupt Enable                           */
    using CMPM1  = regbits< type,  9,  1 >;  /**< Comparison 1 Match Interrupt Enable                           */
    using CMPM2  = regbits< type, 10,  1 >;  /**< Comparison 2 Match Interrupt Enable                           */
    using CMPM3  = regbits< type, 11,  1 >;  /**< Comparison 3 Match Interrupt Enable                           */
    using CMPM4  = regbits< type, 12,  1 >;  /**< Comparison 4 Match Interrupt Enable                           */
    using CMPM5  = regbits< type, 13,  1 >;  /**< Comparison 5 Match Interrupt Enable                           */
    using CMPM6  = regbits< type, 14,  1 >;  /**< Comparison 6 Match Interrupt Enable                           */
    using CMPM7  = regbits< type, 15,  1 >;  /**< Comparison 7 Match Interrupt Enable                           */
    using CMPU0  = regbits< type, 16,  1 >;  /**< Comparison 0 Update Interrupt Enable                          */
    using CMPU1  = regbits< type, 17,  1 >;  /**< Comparison 1 Update Interrupt Enable                          */
    using CMPU2  = regbits< type, 18,  1 >;  /**< Comparison 2 Update Interrupt Enable                          */
    using CMPU3  = regbits< type, 19,  1 >;  /**< Comparison 3 Update Interrupt Enable                          */
    using CMPU4  = regbits< type, 20,  1 >;  /**< Comparison 4 Update Interrupt Enable                          */
    using CMPU5  = regbits< type, 21,  1 >;  /**< Comparison 5 Update Interrupt Enable                          */
    using CMPU6  = regbits< type, 22,  1 >;  /**< Comparison 6 Update Interrupt Enable                          */
    using CMPU7  = regbits< type, 23,  1 >;  /**< Comparison 7 Update Interrupt Enable                          */
  };

  /**
   * PWM Interrupt Disable Register 2
   */
  struct IDR2
  : public reg< uint32_t, base_addr + 0x00000038, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, wo, 0 >;

    using WRDY   = regbits< type,  0,  1 >;  /**< Write Ready for Synchronous Channels Update Interrupt Disable  */
    using UNRE   = regbits< type,  3,  1 >;  /**< Synchronous Channels Update Underrun Error Interrupt Disable   */
    using CMPM0  = regbits< type,  8,  1 >;  /**< Comparison 0 Match Interrupt Disable                           */
    using CMPM1  = regbits< type,  9,  1 >;  /**< Comparison 1 Match Interrupt Disable                           */
    using CMPM2  = regbits< type, 10,  1 >;  /**< Comparison 2 Match Interrupt Disable                           */
    using CMPM3  = regbits< type, 11,  1 >;  /**< Comparison 3 Match Interrupt Disable                           */
    using CMPM4  = regbits< type, 12,  1 >;  /**< Comparison 4 Match Interrupt Disable                           */
    using CMPM5  = regbits< type, 13,  1 >;  /**< Comparison 5 Match Interrupt Disable                           */
    using CMPM6  = regbits< type, 14,  1 >;  /**< Comparison 6 Match Interrupt Disable                           */
    using CMPM7  = regbits< type, 15,  1 >;  /**< Comparison 7 Match Interrupt Disable                           */
    using CMPU0  = regbits< type, 16,  1 >;  /**< Comparison 0 Update Interrupt Disable                          */
    using CMPU1  = regbits< type, 17,  1 >;  /**< Comparison 1 Update Interrupt Disable                          */
    using CMPU2  = regbits< type, 18,  1 >;  /**< Comparison 2 Update Interrupt Disable                          */
    using CMPU3  = regbits< type, 19,  1 >;  /**< Comparison 3 Update Interrupt Disable                          */
    using CMPU4  = regbits< type, 20,  1 >;  /**< Comparison 4 Update Interrupt Disable                          */
    using CMPU5  = regbits< type, 21,  1 >;  /**< Comparison 5 Update Interrupt Disable                          */
    using CMPU6  = regbits< type, 22,  1 >;  /**< Comparison 6 Update Interrupt Disable                          */
    using CMPU7  = regbits< type, 23,  1 >;  /**< Comparison 7 Update Interrupt Disable                          */
  };

  /**
   * PWM Interrupt Mask Register 2
   */
  struct IMR2
  : public reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >;

    using WRDY   = regbits< type,  0,  1 >;  /**< Write Ready for Synchronous Channels Update Interrupt Mask  */
    using UNRE   = regbits< type,  3,  1 >;  /**< Synchronous Channels Update Underrun Error Interrupt Mask   */
    using CMPM0  = regbits< type,  8,  1 >;  /**< Comparison 0 Match Interrupt Mask                           */
    using CMPM1  = regbits< type,  9,  1 >;  /**< Comparison 1 Match Interrupt Mask                           */
    using CMPM2  = regbits< type, 10,  1 >;  /**< Comparison 2 Match Interrupt Mask                           */
    using CMPM3  = regbits< type, 11,  1 >;  /**< Comparison 3 Match Interrupt Mask                           */
    using CMPM4  = regbits< type, 12,  1 >;  /**< Comparison 4 Match Interrupt Mask                           */
    using CMPM5  = regbits< type, 13,  1 >;  /**< Comparison 5 Match Interrupt Mask                           */
    using CMPM6  = regbits< type, 14,  1 >;  /**< Comparison 6 Match Interrupt Mask                           */
    using CMPM7  = regbits< type, 15,  1 >;  /**< Comparison 7 Match Interrupt Mask                           */
    using CMPU0  = regbits< type, 16,  1 >;  /**< Comparison 0 Update Interrupt Mask                          */
    using CMPU1  = regbits< type, 17,  1 >;  /**< Comparison 1 Update Interrupt Mask                          */
    using CMPU2  = regbits< type, 18,  1 >;  /**< Comparison 2 Update Interrupt Mask                          */
    using CMPU3  = regbits< type, 19,  1 >;  /**< Comparison 3 Update Interrupt Mask                          */
    using CMPU4  = regbits< type, 20,  1 >;  /**< Comparison 4 Update Interrupt Mask                          */
    using CMPU5  = regbits< type, 21,  1 >;  /**< Comparison 5 Update Interrupt Mask                          */
    using CMPU6  = regbits< type, 22,  1 >;  /**< Comparison 6 Update Interrupt Mask                          */
    using CMPU7  = regbits< type, 23,  1 >;  /**< Comparison 7 Update Interrupt Mask                          */
  };

  /**
   * PWM Interrupt Status Register 2
   */
  struct ISR2
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >;

    using WRDY   = regbits< type,  0,  1 >;  /**< Write Ready for Synchronous Channels Update  */
    using UNRE   = regbits< type,  3,  1 >;  /**< Synchronous Channels Update Underrun Error   */
    using CMPM0  = regbits< type,  8,  1 >;  /**< Comparison 0 Match                           */
    using CMPM1  = regbits< type,  9,  1 >;  /**< Comparison 1 Match                           */
    using CMPM2  = regbits< type, 10,  1 >;  /**< Comparison 2 Match                           */
    using CMPM3  = regbits< type, 11,  1 >;  /**< Comparison 3 Match                           */
    using CMPM4  = regbits< type, 12,  1 >;  /**< Comparison 4 Match                           */
    using CMPM5  = regbits< type, 13,  1 >;  /**< Comparison 5 Match                           */
    using CMPM6  = regbits< type, 14,  1 >;  /**< Comparison 6 Match                           */
    using CMPM7  = regbits< type, 15,  1 >;  /**< Comparison 7 Match                           */
    using CMPU0  = regbits< type, 16,  1 >;  /**< Comparison 0 Update                          */
    using CMPU1  = regbits< type, 17,  1 >;  /**< Comparison 1 Update                          */
    using CMPU2  = regbits< type, 18,  1 >;  /**< Comparison 2 Update                          */
    using CMPU3  = regbits< type, 19,  1 >;  /**< Comparison 3 Update                          */
    using CMPU4  = regbits< type, 20,  1 >;  /**< Comparison 4 Update                          */
    using CMPU5  = regbits< type, 21,  1 >;  /**< Comparison 5 Update                          */
    using CMPU6  = regbits< type, 22,  1 >;  /**< Comparison 6 Update                          */
    using CMPU7  = regbits< type, 23,  1 >;  /**< Comparison 7 Update                          */
  };

  /**
   * PWM Output Override Value Register
   */
  struct OOV
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using OOVH0  = regbits< type,  0,  1 >;  /**< Output Override Value for PWMH output of the channel 0  */
    using OOVH1  = regbits< type,  1,  1 >;  /**< Output Override Value for PWMH output of the channel 1  */
    using OOVH2  = regbits< type,  2,  1 >;  /**< Output Override Value for PWMH output of the channel 2  */
    using OOVH3  = regbits< type,  3,  1 >;  /**< Output Override Value for PWMH output of the channel 3  */
    using OOVL0  = regbits< type, 16,  1 >;  /**< Output Override Value for PWML output of the channel 0  */
    using OOVL1  = regbits< type, 17,  1 >;  /**< Output Override Value for PWML output of the channel 1  */
    using OOVL2  = regbits< type, 18,  1 >;  /**< Output Override Value for PWML output of the channel 2  */
    using OOVL3  = regbits< type, 19,  1 >;  /**< Output Override Value for PWML output of the channel 3  */
  };

  /**
   * PWM Output Selection Register
   */
  struct OS
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >;

    using OSH0  = regbits< type,  0,  1 >;  /**< Output Selection for PWMH output of the channel 0  */
    using OSH1  = regbits< type,  1,  1 >;  /**< Output Selection for PWMH output of the channel 1  */
    using OSH2  = regbits< type,  2,  1 >;  /**< Output Selection for PWMH output of the channel 2  */
    using OSH3  = regbits< type,  3,  1 >;  /**< Output Selection for PWMH output of the channel 3  */
    using OSL0  = regbits< type, 16,  1 >;  /**< Output Selection for PWML output of the channel 0  */
    using OSL1  = regbits< type, 17,  1 >;  /**< Output Selection for PWML output of the channel 1  */
    using OSL2  = regbits< type, 18,  1 >;  /**< Output Selection for PWML output of the channel 2  */
    using OSL3  = regbits< type, 19,  1 >;  /**< Output Selection for PWML output of the channel 3  */
  };

  /**
   * PWM Output Selection Set Register
   */
  struct OSS
  : public reg< uint32_t, base_addr + 0x0000004c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, wo, 0 >;

    using OSSH0  = regbits< type,  0,  1 >;  /**< Output Selection Set for PWMH output of the channel 0  */
    using OSSH1  = regbits< type,  1,  1 >;  /**< Output Selection Set for PWMH output of the channel 1  */
    using OSSH2  = regbits< type,  2,  1 >;  /**< Output Selection Set for PWMH output of the channel 2  */
    using OSSH3  = regbits< type,  3,  1 >;  /**< Output Selection Set for PWMH output of the channel 3  */
    using OSSL0  = regbits< type, 16,  1 >;  /**< Output Selection Set for PWML output of the channel 0  */
    using OSSL1  = regbits< type, 17,  1 >;  /**< Output Selection Set for PWML output of the channel 1  */
    using OSSL2  = regbits< type, 18,  1 >;  /**< Output Selection Set for PWML output of the channel 2  */
    using OSSL3  = regbits< type, 19,  1 >;  /**< Output Selection Set for PWML output of the channel 3  */
  };

  /**
   * PWM Output Selection Clear Register
   */
  struct OSC
  : public reg< uint32_t, base_addr + 0x00000050, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, wo, 0 >;

    using OSCH0  = regbits< type,  0,  1 >;  /**< Output Selection Clear for PWMH output of the channel 0  */
    using OSCH1  = regbits< type,  1,  1 >;  /**< Output Selection Clear for PWMH output of the channel 1  */
    using OSCH2  = regbits< type,  2,  1 >;  /**< Output Selection Clear for PWMH output of the channel 2  */
    using OSCH3  = regbits< type,  3,  1 >;  /**< Output Selection Clear for PWMH output of the channel 3  */
    using OSCL0  = regbits< type, 16,  1 >;  /**< Output Selection Clear for PWML output of the channel 0  */
    using OSCL1  = regbits< type, 17,  1 >;  /**< Output Selection Clear for PWML output of the channel 1  */
    using OSCL2  = regbits< type, 18,  1 >;  /**< Output Selection Clear for PWML output of the channel 2  */
    using OSCL3  = regbits< type, 19,  1 >;  /**< Output Selection Clear for PWML output of the channel 3  */
  };

  /**
   * PWM Output Selection Set Update Register
   */
  struct OSSUPD
  : public reg< uint32_t, base_addr + 0x00000054, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, wo, 0 >;

    using OSSUPH0  = regbits< type,  0,  1 >;  /**< Output Selection Set for PWMH output of the channel 0  */
    using OSSUPH1  = regbits< type,  1,  1 >;  /**< Output Selection Set for PWMH output of the channel 1  */
    using OSSUPH2  = regbits< type,  2,  1 >;  /**< Output Selection Set for PWMH output of the channel 2  */
    using OSSUPH3  = regbits< type,  3,  1 >;  /**< Output Selection Set for PWMH output of the channel 3  */
    using OSSUPL0  = regbits< type, 16,  1 >;  /**< Output Selection Set for PWML output of the channel 0  */
    using OSSUPL1  = regbits< type, 17,  1 >;  /**< Output Selection Set for PWML output of the channel 1  */
    using OSSUPL2  = regbits< type, 18,  1 >;  /**< Output Selection Set for PWML output of the channel 2  */
    using OSSUPL3  = regbits< type, 19,  1 >;  /**< Output Selection Set for PWML output of the channel 3  */
  };

  /**
   * PWM Output Selection Clear Update Register
   */
  struct OSCUPD
  : public reg< uint32_t, base_addr + 0x00000058, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, wo, 0 >;

    using OSCUPH0  = regbits< type,  0,  1 >;  /**< Output Selection Clear for PWMH output of the channel 0  */
    using OSCUPH1  = regbits< type,  1,  1 >;  /**< Output Selection Clear for PWMH output of the channel 1  */
    using OSCUPH2  = regbits< type,  2,  1 >;  /**< Output Selection Clear for PWMH output of the channel 2  */
    using OSCUPH3  = regbits< type,  3,  1 >;  /**< Output Selection Clear for PWMH output of the channel 3  */
    using OSCUPL0  = regbits< type, 16,  1 >;  /**< Output Selection Clear for PWML output of the channel 0  */
    using OSCUPL1  = regbits< type, 17,  1 >;  /**< Output Selection Clear for PWML output of the channel 1  */
    using OSCUPL2  = regbits< type, 18,  1 >;  /**< Output Selection Clear for PWML output of the channel 2  */
    using OSCUPL3  = regbits< type, 19,  1 >;  /**< Output Selection Clear for PWML output of the channel 3  */
  };

  /**
   * PWM Fault Mode Register
   */
  struct FMR
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0x00000000 >;

    using FPOL  = regbits< type,  0,  8 >;  /**< Fault Polarity (fault input bit varies from 0 to )         */
    using FMOD  = regbits< type,  8,  8 >;  /**< Fault Activation Mode (fault input bit varies from 0 to )  */
    using FFIL  = regbits< type, 16,  8 >;  /**< Fault Filtering (fault input bit varies from 0 to )        */
  };

  /**
   * PWM Fault Status Register
   */
  struct FSR
  : public reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >;

    using FIV  = regbits< type,  0,  8 >;  /**< Fault Input Value (fault input bit varies from 0 to )  */
    using FS   = regbits< type,  8,  8 >;  /**< Fault Status (fault input bit varies from 0 to )       */
  };

  /**
   * PWM Fault Clear Register
   */
  struct FCR
  : public reg< uint32_t, base_addr + 0x00000064, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, wo, 0 >;

    using FCLR  = regbits< type,  0,  8 >;  /**< Fault Clear (fault input bit varies from 0 to )  */
  };

  /**
   * PWM Fault Protection Value Register
   */
  struct FPV
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >;

    using FPVH0  = regbits< type,  0,  1 >;  /**< Fault Protection Value for PWMH output on channel 0  */
    using FPVH1  = regbits< type,  1,  1 >;  /**< Fault Protection Value for PWMH output on channel 1  */
    using FPVH2  = regbits< type,  2,  1 >;  /**< Fault Protection Value for PWMH output on channel 2  */
    using FPVH3  = regbits< type,  3,  1 >;  /**< Fault Protection Value for PWMH output on channel 3  */
    using FPVL0  = regbits< type, 16,  1 >;  /**< Fault Protection Value for PWML output on channel 0  */
    using FPVL1  = regbits< type, 17,  1 >;  /**< Fault Protection Value for PWML output on channel 1  */
    using FPVL2  = regbits< type, 18,  1 >;  /**< Fault Protection Value for PWML output on channel 2  */
    using FPVL3  = regbits< type, 19,  1 >;  /**< Fault Protection Value for PWML output on channel 3  */
  };

  /**
   * PWM Fault Protection Enable Register
   */
  struct FPE
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >;

    using FPE0  = regbits< type,  0,  8 >;  /**< Fault Protection Enable for channel 0 (fault input bit varies from 0 to )  */
    using FPE1  = regbits< type,  8,  8 >;  /**< Fault Protection Enable for channel 1 (fault input bit varies from 0 to )  */
    using FPE2  = regbits< type, 16,  8 >;  /**< Fault Protection Enable for channel 2 (fault input bit varies from 0 to )  */
    using FPE3  = regbits< type, 24,  8 >;  /**< Fault Protection Enable for channel 3 (fault input bit varies from 0 to )  */
  };

  /**
   * PWM Event Line 0 Mode Register
   */
  struct ELMR[%s]
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CSEL0  = regbits< type,  0,  1 >;  /**< Comparison 0 Selection  */
    using CSEL1  = regbits< type,  1,  1 >;  /**< Comparison 1 Selection  */
    using CSEL2  = regbits< type,  2,  1 >;  /**< Comparison 2 Selection  */
    using CSEL3  = regbits< type,  3,  1 >;  /**< Comparison 3 Selection  */
    using CSEL4  = regbits< type,  4,  1 >;  /**< Comparison 4 Selection  */
    using CSEL5  = regbits< type,  5,  1 >;  /**< Comparison 5 Selection  */
    using CSEL6  = regbits< type,  6,  1 >;  /**< Comparison 6 Selection  */
    using CSEL7  = regbits< type,  7,  1 >;  /**< Comparison 7 Selection  */
  };

  /**
   * PWM Stepper Motor Mode Register
   */
  struct SMMR
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >;

    using GCEN0  = regbits< type,  0,  1 >;  /**< Gray Count ENable  */
    using GCEN1  = regbits< type,  1,  1 >;  /**< Gray Count ENable  */
    using DOWN0  = regbits< type, 16,  1 >;  /**< DOWN Count         */
    using DOWN1  = regbits< type, 17,  1 >;  /**< DOWN Count         */
  };

  /**
   * PWM Write Protect Control Register
   */
  struct WPCR
  : public reg< uint32_t, base_addr + 0x000000e4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, wo, 0 >;

    using WPCMD  = regbits< type,  0,  2 >;  /**< Write Protect Command           */
    using WPRG0  = regbits< type,  2,  1 >;  /**< Write Protect Register Group 0  */
    using WPRG1  = regbits< type,  3,  1 >;  /**< Write Protect Register Group 1  */
    using WPRG2  = regbits< type,  4,  1 >;  /**< Write Protect Register Group 2  */
    using WPRG3  = regbits< type,  5,  1 >;  /**< Write Protect Register Group 3  */
    using WPRG4  = regbits< type,  6,  1 >;  /**< Write Protect Register Group 4  */
    using WPRG5  = regbits< type,  7,  1 >;  /**< Write Protect Register Group 5  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect Key               */
  };

  /**
   * PWM Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPSWS0  = regbits< type,  0,  1 >;  /**< Write Protect SW Status         */
    using WPSWS1  = regbits< type,  1,  1 >;  /**< Write Protect SW Status         */
    using WPSWS2  = regbits< type,  2,  1 >;  /**< Write Protect SW Status         */
    using WPSWS3  = regbits< type,  3,  1 >;  /**< Write Protect SW Status         */
    using WPSWS4  = regbits< type,  4,  1 >;  /**< Write Protect SW Status         */
    using WPSWS5  = regbits< type,  5,  1 >;  /**< Write Protect SW Status         */
    using WPVS    = regbits< type,  7,  1 >;  /**< Write Protect Violation Status  */
    using WPHWS0  = regbits< type,  8,  1 >;  /**< Write Protect HW Status         */
    using WPHWS1  = regbits< type,  9,  1 >;  /**< Write Protect HW Status         */
    using WPHWS2  = regbits< type, 10,  1 >;  /**< Write Protect HW Status         */
    using WPHWS3  = regbits< type, 11,  1 >;  /**< Write Protect HW Status         */
    using WPHWS4  = regbits< type, 12,  1 >;  /**< Write Protect HW Status         */
    using WPHWS5  = regbits< type, 13,  1 >;  /**< Write Protect HW Status         */
    using WPVSRC  = regbits< type, 16, 16 >;  /**< Write Protect Violation Source  */
  };

  /**
   * PWM Comparison 0 Value Register
   */
  struct CMPV0
  : public reg< uint32_t, base_addr + 0x00000130, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 0 Value Update Register
   */
  struct CMPVUPD0
  : public reg< uint32_t, base_addr + 0x00000134, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 0 Mode Register
   */
  struct CMPM0
  : public reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 0 Mode Update Register
   */
  struct CMPMUPD0
  : public reg< uint32_t, base_addr + 0x0000013c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000013c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 1 Value Register
   */
  struct CMPV1
  : public reg< uint32_t, base_addr + 0x00000140, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000140, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 1 Value Update Register
   */
  struct CMPVUPD1
  : public reg< uint32_t, base_addr + 0x00000144, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 1 Mode Register
   */
  struct CMPM1
  : public reg< uint32_t, base_addr + 0x00000148, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000148, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 1 Mode Update Register
   */
  struct CMPMUPD1
  : public reg< uint32_t, base_addr + 0x0000014c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000014c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 2 Value Register
   */
  struct CMPV2
  : public reg< uint32_t, base_addr + 0x00000150, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000150, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 2 Value Update Register
   */
  struct CMPVUPD2
  : public reg< uint32_t, base_addr + 0x00000154, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000154, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 2 Mode Register
   */
  struct CMPM2
  : public reg< uint32_t, base_addr + 0x00000158, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000158, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 2 Mode Update Register
   */
  struct CMPMUPD2
  : public reg< uint32_t, base_addr + 0x0000015c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000015c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 3 Value Register
   */
  struct CMPV3
  : public reg< uint32_t, base_addr + 0x00000160, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 3 Value Update Register
   */
  struct CMPVUPD3
  : public reg< uint32_t, base_addr + 0x00000164, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 3 Mode Register
   */
  struct CMPM3
  : public reg< uint32_t, base_addr + 0x00000168, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000168, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 3 Mode Update Register
   */
  struct CMPMUPD3
  : public reg< uint32_t, base_addr + 0x0000016c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000016c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 4 Value Register
   */
  struct CMPV4
  : public reg< uint32_t, base_addr + 0x00000170, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000170, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 4 Value Update Register
   */
  struct CMPVUPD4
  : public reg< uint32_t, base_addr + 0x00000174, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000174, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 4 Mode Register
   */
  struct CMPM4
  : public reg< uint32_t, base_addr + 0x00000178, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000178, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 4 Mode Update Register
   */
  struct CMPMUPD4
  : public reg< uint32_t, base_addr + 0x0000017c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000017c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 5 Value Register
   */
  struct CMPV5
  : public reg< uint32_t, base_addr + 0x00000180, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000180, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 5 Value Update Register
   */
  struct CMPVUPD5
  : public reg< uint32_t, base_addr + 0x00000184, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000184, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 5 Mode Register
   */
  struct CMPM5
  : public reg< uint32_t, base_addr + 0x00000188, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000188, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 5 Mode Update Register
   */
  struct CMPMUPD5
  : public reg< uint32_t, base_addr + 0x0000018c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000018c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 6 Value Register
   */
  struct CMPV6
  : public reg< uint32_t, base_addr + 0x00000190, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000190, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 6 Value Update Register
   */
  struct CMPVUPD6
  : public reg< uint32_t, base_addr + 0x00000194, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000194, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 6 Mode Register
   */
  struct CMPM6
  : public reg< uint32_t, base_addr + 0x00000198, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000198, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 6 Mode Update Register
   */
  struct CMPMUPD6
  : public reg< uint32_t, base_addr + 0x0000019c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000019c, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Comparison 7 Value Register
   */
  struct CMPV7
  : public reg< uint32_t, base_addr + 0x000001a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a0, rw, 0x00000000 >;

    using CV   = regbits< type,  0, 24 >;  /**< Comparison x Value       */
    using CVM  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode  */
  };

  /**
   * PWM Comparison 7 Value Update Register
   */
  struct CMPVUPD7
  : public reg< uint32_t, base_addr + 0x000001a4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a4, wo, 0 >;

    using CVUPD   = regbits< type,  0, 24 >;  /**< Comparison x Value Update       */
    using CVMUPD  = regbits< type, 24,  1 >;  /**< Comparison x Value Mode Update  */
  };

  /**
   * PWM Comparison 7 Mode Register
   */
  struct CMPM7
  : public reg< uint32_t, base_addr + 0x000001a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a8, rw, 0x00000000 >;

    using CEN      = regbits< type,  0,  1 >;  /**< Comparison x Enable                 */
    using CTR      = regbits< type,  4,  4 >;  /**< Comparison x Trigger                */
    using CPR      = regbits< type,  8,  4 >;  /**< Comparison x Period                 */
    using CPRCNT   = regbits< type, 12,  4 >;  /**< Comparison x Period Counter         */
    using CUPR     = regbits< type, 16,  4 >;  /**< Comparison x Update Period          */
    using CUPRCNT  = regbits< type, 20,  4 >;  /**< Comparison x Update Period Counter  */
  };

  /**
   * PWM Comparison 7 Mode Update Register
   */
  struct CMPMUPD7
  : public reg< uint32_t, base_addr + 0x000001ac, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001ac, wo, 0 >;

    using CENUPD   = regbits< type,  0,  1 >;  /**< Comparison x Enable Update         */
    using CTRUPD   = regbits< type,  4,  4 >;  /**< Comparison x Trigger Update        */
    using CPRUPD   = regbits< type,  8,  4 >;  /**< Comparison x Period Update         */
    using CUPRUPD  = regbits< type, 16,  4 >;  /**< Comparison x Update Period Update  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 0)
   */
  struct CMR0
  : public reg< uint32_t, base_addr + 0x00000200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000200, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 0)
   */
  struct CDTY0
  : public reg< uint32_t, base_addr + 0x00000204, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000204, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 0)
   */
  struct CDTYUPD0
  : public reg< uint32_t, base_addr + 0x00000208, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000208, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 0)
   */
  struct CPRD0
  : public reg< uint32_t, base_addr + 0x0000020c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000020c, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 0)
   */
  struct CPRDUPD0
  : public reg< uint32_t, base_addr + 0x00000210, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000210, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 0)
   */
  struct CCNT0
  : public reg< uint32_t, base_addr + 0x00000214, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000214, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 0)
   */
  struct DT0
  : public reg< uint32_t, base_addr + 0x00000218, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000218, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 0)
   */
  struct DTUPD0
  : public reg< uint32_t, base_addr + 0x0000021c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000021c, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 1)
   */
  struct CMR1
  : public reg< uint32_t, base_addr + 0x00000220, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000220, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 1)
   */
  struct CDTY1
  : public reg< uint32_t, base_addr + 0x00000224, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000224, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 1)
   */
  struct CDTYUPD1
  : public reg< uint32_t, base_addr + 0x00000228, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000228, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 1)
   */
  struct CPRD1
  : public reg< uint32_t, base_addr + 0x0000022c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000022c, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 1)
   */
  struct CPRDUPD1
  : public reg< uint32_t, base_addr + 0x00000230, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000230, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 1)
   */
  struct CCNT1
  : public reg< uint32_t, base_addr + 0x00000234, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000234, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 1)
   */
  struct DT1
  : public reg< uint32_t, base_addr + 0x00000238, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000238, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 1)
   */
  struct DTUPD1
  : public reg< uint32_t, base_addr + 0x0000023c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000023c, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 2)
   */
  struct CMR2
  : public reg< uint32_t, base_addr + 0x00000240, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000240, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 2)
   */
  struct CDTY2
  : public reg< uint32_t, base_addr + 0x00000244, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000244, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 2)
   */
  struct CDTYUPD2
  : public reg< uint32_t, base_addr + 0x00000248, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000248, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 2)
   */
  struct CPRD2
  : public reg< uint32_t, base_addr + 0x0000024c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000024c, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 2)
   */
  struct CPRDUPD2
  : public reg< uint32_t, base_addr + 0x00000250, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000250, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 2)
   */
  struct CCNT2
  : public reg< uint32_t, base_addr + 0x00000254, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000254, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 2)
   */
  struct DT2
  : public reg< uint32_t, base_addr + 0x00000258, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000258, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 2)
   */
  struct DTUPD2
  : public reg< uint32_t, base_addr + 0x0000025c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000025c, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 3)
   */
  struct CMR3
  : public reg< uint32_t, base_addr + 0x00000260, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000260, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler               */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment                */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity                 */
    using CES   = regbits< type, 10,  1 >;  /**< Counter Event Selection          */
    using DTE   = regbits< type, 16,  1 >;  /**< Dead-Time Generator Enable       */
    using DTHI  = regbits< type, 17,  1 >;  /**< Dead-Time PWMHx Output Inverted  */
    using DTLI  = regbits< type, 18,  1 >;  /**< Dead-Time PWMLx Output Inverted  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 3)
   */
  struct CDTY3
  : public reg< uint32_t, base_addr + 0x00000264, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000264, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle  */
  };

  /**
   * PWM Channel Duty Cycle Update Register (ch_num = 3)
   */
  struct CDTYUPD3
  : public reg< uint32_t, base_addr + 0x00000268, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000268, wo, 0 >;

    using CDTYUPD  = regbits< type,  0, 24 >;  /**< Channel Duty-Cycle Update  */
  };

  /**
   * PWM Channel Period Register (ch_num = 3)
   */
  struct CPRD3
  : public reg< uint32_t, base_addr + 0x0000026c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000026c, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 24 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Period Update Register (ch_num = 3)
   */
  struct CPRDUPD3
  : public reg< uint32_t, base_addr + 0x00000270, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000270, wo, 0 >;

    using CPRDUPD  = regbits< type,  0, 24 >;  /**< Channel Period Update  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 3)
   */
  struct CCNT3
  : public reg< uint32_t, base_addr + 0x00000274, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000274, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 24 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Dead Time Register (ch_num = 3)
   */
  struct DT3
  : public reg< uint32_t, base_addr + 0x00000278, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000278, rw, 0x00000000 >;

    using DTH  = regbits< type,  0, 16 >;  /**< Dead-Time Value for PWMHx Output  */
    using DTL  = regbits< type, 16, 16 >;  /**< Dead-Time Value for PWMLx Output  */
  };

  /**
   * PWM Channel Dead Time Update Register (ch_num = 3)
   */
  struct DTUPD3
  : public reg< uint32_t, base_addr + 0x0000027c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000027c, wo, 0 >;

    using DTHUPD  = regbits< type,  0, 16 >;  /**< Dead-Time Value Update for PWMHx Output  */
    using DTLUPD  = regbits< type, 16, 16 >;  /**< Dead-Time Value Update for PWMLx Output  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWM_HPP_INCLUDED
