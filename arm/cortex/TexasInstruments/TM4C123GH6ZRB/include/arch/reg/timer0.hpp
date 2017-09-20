/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123GH6ZRB.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123GH6ZRB
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TIMER0_HPP_INCLUDED
#define ARCH_REG_TIMER0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for TIMER0 peripheral
 */
struct TIMER0
{
  static constexpr reg_addr_t base_addr = 0x40030000;

  /**
   * GPTM Configuration
   */
  struct CFG
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_CFG  = regbits< type,  0,  3 >;  /**< GPTM Configuration  */
  };

  /**
   * GPTM Timer A Mode
   */
  struct TAMR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TAMR_TAMR     = regbits< type,  0,  2 >;  /**< GPTM Timer A Mode                    */
    using TIMER_TAMR_TACMR    = regbits< type,  2,  1 >;  /**< GPTM Timer A Capture Mode            */
    using TIMER_TAMR_TAAMS    = regbits< type,  3,  1 >;  /**< GPTM Timer A Alternate Mode Select   */
    using TIMER_TAMR_TACDIR   = regbits< type,  4,  1 >;  /**< GPTM Timer A Count Direction         */
    using TIMER_TAMR_TAMIE    = regbits< type,  5,  1 >;  /**< GPTM Timer A Match Interrupt Enable  */
    using TIMER_TAMR_TAWOT    = regbits< type,  6,  1 >;  /**< GPTM Timer A Wait-on-Trigger         */
    using TIMER_TAMR_TASNAPS  = regbits< type,  7,  1 >;  /**< GPTM Timer A Snap-Shot Mode          */
    using TIMER_TAMR_TAILD    = regbits< type,  8,  1 >;  /**< GPTM Timer A Interval Load Write     */
    using TIMER_TAMR_TAPWMIE  = regbits< type,  9,  1 >;  /**< GPTM Timer A PWM Interrupt Enable    */
    using TIMER_TAMR_TAMRSU   = regbits< type, 10,  1 >;  /**< GPTM Timer A Match Register Update   */
    using TIMER_TAMR_TAPLO    = regbits< type, 11,  1 >;  /**< GPTM Timer A PWM Legacy Operation    */
  };

  /**
   * GPTM Timer B Mode
   */
  struct TBMR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TBMR_TBMR     = regbits< type,  0,  2 >;  /**< GPTM Timer B Mode                    */
    using TIMER_TBMR_TBCMR    = regbits< type,  2,  1 >;  /**< GPTM Timer B Capture Mode            */
    using TIMER_TBMR_TBAMS    = regbits< type,  3,  1 >;  /**< GPTM Timer B Alternate Mode Select   */
    using TIMER_TBMR_TBCDIR   = regbits< type,  4,  1 >;  /**< GPTM Timer B Count Direction         */
    using TIMER_TBMR_TBMIE    = regbits< type,  5,  1 >;  /**< GPTM Timer B Match Interrupt Enable  */
    using TIMER_TBMR_TBWOT    = regbits< type,  6,  1 >;  /**< GPTM Timer B Wait-on-Trigger         */
    using TIMER_TBMR_TBSNAPS  = regbits< type,  7,  1 >;  /**< GPTM Timer B Snap-Shot Mode          */
    using TIMER_TBMR_TBILD    = regbits< type,  8,  1 >;  /**< GPTM Timer B Interval Load Write     */
    using TIMER_TBMR_TBPWMIE  = regbits< type,  9,  1 >;  /**< GPTM Timer B PWM Interrupt Enable    */
    using TIMER_TBMR_TBMRSU   = regbits< type, 10,  1 >;  /**< GPTM Timer B Match Register Update   */
    using TIMER_TBMR_TBPLO    = regbits< type, 11,  1 >;  /**< GPTM Timer B PWM Legacy Operation    */
  };

  /**
   * GPTM Control
   */
  struct CTL
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_CTL_TAEN     = regbits< type,  0,  1 >;  /**< GPTM Timer A Enable                 */
    using TIMER_CTL_TASTALL  = regbits< type,  1,  1 >;  /**< GPTM Timer A Stall Enable           */
    using TIMER_CTL_TAEVENT  = regbits< type,  2,  2 >;  /**< GPTM Timer A Event Mode             */
    using TIMER_CTL_RTCEN    = regbits< type,  4,  1 >;  /**< GPTM RTC Stall Enable               */
    using TIMER_CTL_TAOTE    = regbits< type,  5,  1 >;  /**< GPTM Timer A Output Trigger Enable  */
    using TIMER_CTL_TAPWML   = regbits< type,  6,  1 >;  /**< GPTM Timer A PWM Output Level       */
    using TIMER_CTL_TBEN     = regbits< type,  8,  1 >;  /**< GPTM Timer B Enable                 */
    using TIMER_CTL_TBSTALL  = regbits< type,  9,  1 >;  /**< GPTM Timer B Stall Enable           */
    using TIMER_CTL_TBEVENT  = regbits< type, 10,  2 >;  /**< GPTM Timer B Event Mode             */
    using TIMER_CTL_TBOTE    = regbits< type, 13,  1 >;  /**< GPTM Timer B Output Trigger Enable  */
    using TIMER_CTL_TBPWML   = regbits< type, 14,  1 >;  /**< GPTM Timer B PWM Output Level       */
  };

  /**
   * GPTM Synchronize
   */
  struct SYNC
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_SYNC_SYNCT0   = regbits< type,  0,  2 >;  /**< Synchronize GPTM 16/32-Bit Timer 0  */
    using TIMER_SYNC_SYNCT1   = regbits< type,  2,  2 >;  /**< Synchronize GPTM 16/32-Bit Timer 1  */
    using TIMER_SYNC_SYNCT2   = regbits< type,  4,  2 >;  /**< Synchronize GPTM 16/32-Bit Timer 2  */
    using TIMER_SYNC_SYNCT3   = regbits< type,  6,  2 >;  /**< Synchronize GPTM 16/32-Bit Timer 3  */
    using TIMER_SYNC_SYNCT4   = regbits< type,  8,  2 >;  /**< Synchronize GPTM 16/32-Bit Timer 4  */
    using TIMER_SYNC_SYNCT5   = regbits< type, 10,  2 >;  /**< Synchronize GPTM 16/32-Bit Timer 5  */
    using TIMER_SYNC_SYNCWT0  = regbits< type, 12,  2 >;  /**< Synchronize GPTM 32/64-Bit Timer 0  */
    using TIMER_SYNC_SYNCWT1  = regbits< type, 14,  2 >;  /**< Synchronize GPTM 32/64-Bit Timer 1  */
    using TIMER_SYNC_SYNCWT2  = regbits< type, 16,  2 >;  /**< Synchronize GPTM 32/64-Bit Timer 2  */
    using TIMER_SYNC_SYNCWT3  = regbits< type, 18,  2 >;  /**< Synchronize GPTM 32/64-Bit Timer 3  */
    using TIMER_SYNC_SYNCWT4  = regbits< type, 20,  2 >;  /**< Synchronize GPTM 32/64-Bit Timer 4  */
    using TIMER_SYNC_SYNCWT5  = regbits< type, 22,  2 >;  /**< Synchronize GPTM 32/64-Bit Timer 5  */
  };

  /**
   * GPTM Interrupt Mask
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_IMR_TATOIM  = regbits< type,  0,  1 >;  /**< GPTM Timer A Time-Out Interrupt Mask            */
    using TIMER_IMR_CAMIM   = regbits< type,  1,  1 >;  /**< GPTM Timer A Capture Mode Match Interrupt Mask  */
    using TIMER_IMR_CAEIM   = regbits< type,  2,  1 >;  /**< GPTM Timer A Capture Mode Event Interrupt Mask  */
    using TIMER_IMR_RTCIM   = regbits< type,  3,  1 >;  /**< GPTM RTC Interrupt Mask                         */
    using TIMER_IMR_TAMIM   = regbits< type,  4,  1 >;  /**< GPTM Timer A Match Interrupt Mask               */
    using TIMER_IMR_TBTOIM  = regbits< type,  8,  1 >;  /**< GPTM Timer B Time-Out Interrupt Mask            */
    using TIMER_IMR_CBMIM   = regbits< type,  9,  1 >;  /**< GPTM Timer B Capture Mode Match Interrupt Mask  */
    using TIMER_IMR_CBEIM   = regbits< type, 10,  1 >;  /**< GPTM Timer B Capture Mode Event Interrupt Mask  */
    using TIMER_IMR_TBMIM   = regbits< type, 11,  1 >;  /**< GPTM Timer B Match Interrupt Mask               */
    using TIMER_IMR_WUEIM   = regbits< type, 16,  1 >;  /**< GPTM Write Update Error Interrupt Mask          */
  };

  /**
   * GPTM Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_RIS_TATORIS  = regbits< type,  0,  1 >;  /**< GPTM Timer A Time-Out Raw Interrupt            */
    using TIMER_RIS_CAMRIS   = regbits< type,  1,  1 >;  /**< GPTM Timer A Capture Mode Match Raw Interrupt  */
    using TIMER_RIS_CAERIS   = regbits< type,  2,  1 >;  /**< GPTM Timer A Capture Mode Event Raw Interrupt  */
    using TIMER_RIS_RTCRIS   = regbits< type,  3,  1 >;  /**< GPTM RTC Raw Interrupt                         */
    using TIMER_RIS_TAMRIS   = regbits< type,  4,  1 >;  /**< GPTM Timer A Match Raw Interrupt               */
    using TIMER_RIS_TBTORIS  = regbits< type,  8,  1 >;  /**< GPTM Timer B Time-Out Raw Interrupt            */
    using TIMER_RIS_CBMRIS   = regbits< type,  9,  1 >;  /**< GPTM Timer B Capture Mode Match Raw Interrupt  */
    using TIMER_RIS_CBERIS   = regbits< type, 10,  1 >;  /**< GPTM Timer B Capture Mode Event Raw Interrupt  */
    using TIMER_RIS_TBMRIS   = regbits< type, 11,  1 >;  /**< GPTM Timer B Match Raw Interrupt               */
    using TIMER_RIS_WUERIS   = regbits< type, 16,  1 >;  /**< GPTM Write Update Error Raw Interrupt          */
  };

  /**
   * GPTM Masked Interrupt Status
   */
  struct MIS
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_MIS_TATOMIS  = regbits< type,  0,  1 >;  /**< GPTM Timer A Time-Out Masked Interrupt            */
    using TIMER_MIS_CAMMIS   = regbits< type,  1,  1 >;  /**< GPTM Timer A Capture Mode Match Masked Interrupt  */
    using TIMER_MIS_CAEMIS   = regbits< type,  2,  1 >;  /**< GPTM Timer A Capture Mode Event Masked Interrupt  */
    using TIMER_MIS_RTCMIS   = regbits< type,  3,  1 >;  /**< GPTM RTC Masked Interrupt                         */
    using TIMER_MIS_TAMMIS   = regbits< type,  4,  1 >;  /**< GPTM Timer A Match Masked Interrupt               */
    using TIMER_MIS_TBTOMIS  = regbits< type,  8,  1 >;  /**< GPTM Timer B Time-Out Masked Interrupt            */
    using TIMER_MIS_CBMMIS   = regbits< type,  9,  1 >;  /**< GPTM Timer B Capture Mode Match Masked Interrupt  */
    using TIMER_MIS_CBEMIS   = regbits< type, 10,  1 >;  /**< GPTM Timer B Capture Mode Event Masked Interrupt  */
    using TIMER_MIS_TBMMIS   = regbits< type, 11,  1 >;  /**< GPTM Timer B Match Masked Interrupt               */
    using TIMER_MIS_WUEMIS   = regbits< type, 16,  1 >;  /**< GPTM Write Update Error Masked Interrupt          */
  };

  /**
   * GPTM Interrupt Clear
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using TIMER_ICR_TATOCINT  = regbits< type,  0,  1 >;  /**< GPTM Timer A Time-Out Raw Interrupt                */
    using TIMER_ICR_CAMCINT   = regbits< type,  1,  1 >;  /**< GPTM Timer A Capture Mode Match Interrupt Clear    */
    using TIMER_ICR_CAECINT   = regbits< type,  2,  1 >;  /**< GPTM Timer A Capture Mode Event Interrupt Clear    */
    using TIMER_ICR_RTCCINT   = regbits< type,  3,  1 >;  /**< GPTM RTC Interrupt Clear                           */
    using TIMER_ICR_TAMCINT   = regbits< type,  4,  1 >;  /**< GPTM Timer A Match Interrupt Clear                 */
    using TIMER_ICR_TBTOCINT  = regbits< type,  8,  1 >;  /**< GPTM Timer B Time-Out Interrupt Clear              */
    using TIMER_ICR_CBMCINT   = regbits< type,  9,  1 >;  /**< GPTM Timer B Capture Mode Match Interrupt Clear    */
    using TIMER_ICR_CBECINT   = regbits< type, 10,  1 >;  /**< GPTM Timer B Capture Mode Event Interrupt Clear    */
    using TIMER_ICR_TBMCINT   = regbits< type, 11,  1 >;  /**< GPTM Timer B Match Interrupt Clear                 */
    using TIMER_ICR_WUECINT   = regbits< type, 16,  1 >;  /**< 32/64-Bit GPTM Write Update Error Interrupt Clear  */
  };

  /**
   * GPTM Timer A Interval Load
   */
  struct TAILR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPTM Timer B Interval Load
   */
  struct TBILR
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPTM Timer A Match
   */
  struct TAMATCHR
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPTM Timer B Match
   */
  struct TBMATCHR
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPTM Timer A Prescale
   */
  struct TAPR
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TAPR_TAPSR   = regbits< type,  0,  8 >;  /**< GPTM Timer A Prescale            */
    using TIMER_TAPR_TAPSRH  = regbits< type,  8,  8 >;  /**< GPTM Timer A Prescale High Byte  */
  };

  /**
   * GPTM Timer B Prescale
   */
  struct TBPR
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TBPR_TBPSR   = regbits< type,  0,  8 >;  /**< GPTM Timer B Prescale            */
    using TIMER_TBPR_TBPSRH  = regbits< type,  8,  8 >;  /**< GPTM Timer B Prescale High Byte  */
  };

  /**
   * GPTM TimerA Prescale Match
   */
  struct TAPMR
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TAPMR_TAPSMR   = regbits< type,  0,  8 >;  /**< GPTM TimerA Prescale Match             */
    using TIMER_TAPMR_TAPSMRH  = regbits< type,  8,  8 >;  /**< GPTM Timer A Prescale Match High Byte  */
  };

  /**
   * GPTM TimerB Prescale Match
   */
  struct TBPMR
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TBPMR_TBPSMR   = regbits< type,  0,  8 >;  /**< GPTM TimerB Prescale Match             */
    using TIMER_TBPMR_TBPSMRH  = regbits< type,  8,  8 >;  /**< GPTM Timer B Prescale Match High Byte  */
  };

  /**
   * GPTM Timer A
   */
  struct TAR
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPTM Timer B
   */
  struct TBR
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPTM Timer A Value
   */
  struct TAV
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPTM Timer B Value
   */
  struct TBV
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPTM RTC Predivide
   */
  struct RTCPD
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_RTCPD_RTCPD  = regbits< type,  0, 16 >;  /**< RTC Predivide Counter Value  */
  };

  /**
   * GPTM Timer A Prescale Snapshot
   */
  struct TAPS
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TAPS_PSS  = regbits< type,  0, 16 >;  /**< GPTM Timer A Prescaler Snapshot  */
  };

  /**
   * GPTM Timer B Prescale Snapshot
   */
  struct TBPS
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TBPS_PSS  = regbits< type,  0, 16 >;  /**< GPTM Timer A Prescaler Value  */
  };

  /**
   * GPTM Timer A Prescale Value
   */
  struct TAPV
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TAPV_PSV  = regbits< type,  0, 16 >;  /**< GPTM Timer A Prescaler Value  */
  };

  /**
   * GPTM Timer B Prescale Value
   */
  struct TBPV
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_TBPV_PSV  = regbits< type,  0, 16 >;  /**< GPTM Timer B Prescaler Value  */
  };

  /**
   * GPTM Peripheral Properties
   */
  struct PP
  : public reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMER_PP_SIZE  = regbits< type,  0,  4 >;  /**< Count Size  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TIMER0_HPP_INCLUDED
