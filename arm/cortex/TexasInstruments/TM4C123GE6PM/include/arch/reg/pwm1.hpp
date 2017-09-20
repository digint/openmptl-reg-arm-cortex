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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123GE6PM.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123GE6PM
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

#ifndef ARCH_REG_PWM1_HPP_INCLUDED
#define ARCH_REG_PWM1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for PWM0 peripheral
 *
 * (derived from: PWM0)
 */
struct PWM1
{
  static constexpr reg_addr_t base_addr = 0x40029000;

  /**
   * PWM Master Control
   */
  struct CTL
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_CTL_GLOBALSYNC0  = regbits< type,  0,  1 >;  /**< Update PWM Generator 0  */
    using PWM_CTL_GLOBALSYNC1  = regbits< type,  1,  1 >;  /**< Update PWM Generator 1  */
    using PWM_CTL_GLOBALSYNC2  = regbits< type,  2,  1 >;  /**< Update PWM Generator 2  */
    using PWM_CTL_GLOBALSYNC3  = regbits< type,  3,  1 >;  /**< Update PWM Generator 3  */
  };

  /**
   * PWM Time Base Sync
   */
  struct SYNC
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_SYNC_SYNC0  = regbits< type,  0,  1 >;  /**< Reset Generator 0 Counter  */
    using PWM_SYNC_SYNC1  = regbits< type,  1,  1 >;  /**< Reset Generator 1 Counter  */
    using PWM_SYNC_SYNC2  = regbits< type,  2,  1 >;  /**< Reset Generator 2 Counter  */
    using PWM_SYNC_SYNC3  = regbits< type,  3,  1 >;  /**< Reset Generator 3 Counter  */
  };

  /**
   * PWM Output Enable
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_ENABLE_PWM0EN  = regbits< type,  0,  1 >;  /**< PWM0 Output Enable  */
    using PWM_ENABLE_PWM1EN  = regbits< type,  1,  1 >;  /**< PWM1 Output Enable  */
    using PWM_ENABLE_PWM2EN  = regbits< type,  2,  1 >;  /**< PWM2 Output Enable  */
    using PWM_ENABLE_PWM3EN  = regbits< type,  3,  1 >;  /**< PWM3 Output Enable  */
    using PWM_ENABLE_PWM4EN  = regbits< type,  4,  1 >;  /**< PWM4 Output Enable  */
    using PWM_ENABLE_PWM5EN  = regbits< type,  5,  1 >;  /**< PWM5 Output Enable  */
    using PWM_ENABLE_PWM6EN  = regbits< type,  6,  1 >;  /**< PWM6 Output Enable  */
    using PWM_ENABLE_PWM7EN  = regbits< type,  7,  1 >;  /**< PWM7 Output Enable  */
  };

  /**
   * PWM Output Inversion
   */
  struct INVERT
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_INVERT_PWM0INV  = regbits< type,  0,  1 >;  /**< Invert PWM0 Signal  */
    using PWM_INVERT_PWM1INV  = regbits< type,  1,  1 >;  /**< Invert PWM1 Signal  */
    using PWM_INVERT_PWM2INV  = regbits< type,  2,  1 >;  /**< Invert PWM2 Signal  */
    using PWM_INVERT_PWM3INV  = regbits< type,  3,  1 >;  /**< Invert PWM3 Signal  */
    using PWM_INVERT_PWM4INV  = regbits< type,  4,  1 >;  /**< Invert PWM4 Signal  */
    using PWM_INVERT_PWM5INV  = regbits< type,  5,  1 >;  /**< Invert PWM5 Signal  */
    using PWM_INVERT_PWM6INV  = regbits< type,  6,  1 >;  /**< Invert PWM6 Signal  */
    using PWM_INVERT_PWM7INV  = regbits< type,  7,  1 >;  /**< Invert PWM7 Signal  */
  };

  /**
   * PWM Output Fault
   */
  struct FAULT
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_FAULT_FAULT0  = regbits< type,  0,  1 >;  /**< PWM0 Fault  */
    using PWM_FAULT_FAULT1  = regbits< type,  1,  1 >;  /**< PWM1 Fault  */
    using PWM_FAULT_FAULT2  = regbits< type,  2,  1 >;  /**< PWM2 Fault  */
    using PWM_FAULT_FAULT3  = regbits< type,  3,  1 >;  /**< PWM3 Fault  */
    using PWM_FAULT_FAULT4  = regbits< type,  4,  1 >;  /**< PWM4 Fault  */
    using PWM_FAULT_FAULT5  = regbits< type,  5,  1 >;  /**< PWM5 Fault  */
    using PWM_FAULT_FAULT6  = regbits< type,  6,  1 >;  /**< PWM6 Fault  */
    using PWM_FAULT_FAULT7  = regbits< type,  7,  1 >;  /**< PWM7 Fault  */
  };

  /**
   * PWM Interrupt Enable
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_INTEN_INTPWM0    = regbits< type,  0,  1 >;  /**< PWM0 Interrupt Enable  */
    using PWM_INTEN_INTPWM1    = regbits< type,  1,  1 >;  /**< PWM1 Interrupt Enable  */
    using PWM_INTEN_INTPWM2    = regbits< type,  2,  1 >;  /**< PWM2 Interrupt Enable  */
    using PWM_INTEN_INTPWM3    = regbits< type,  3,  1 >;  /**< PWM3 Interrupt Enable  */
    using PWM_INTEN_INTFAULT0  = regbits< type, 16,  1 >;  /**< Interrupt Fault 0      */
    using PWM_INTEN_INTFAULT1  = regbits< type, 17,  1 >;  /**< Interrupt Fault 1      */
  };

  /**
   * PWM Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_RIS_INTPWM0    = regbits< type,  0,  1 >;  /**< PWM0 Interrupt Asserted  */
    using PWM_RIS_INTPWM1    = regbits< type,  1,  1 >;  /**< PWM1 Interrupt Asserted  */
    using PWM_RIS_INTPWM2    = regbits< type,  2,  1 >;  /**< PWM2 Interrupt Asserted  */
    using PWM_RIS_INTPWM3    = regbits< type,  3,  1 >;  /**< PWM3 Interrupt Asserted  */
    using PWM_RIS_INTFAULT0  = regbits< type, 16,  1 >;  /**< Interrupt Fault PWM 0    */
    using PWM_RIS_INTFAULT1  = regbits< type, 17,  1 >;  /**< Interrupt Fault PWM 1    */
  };

  /**
   * PWM Interrupt Status and Clear
   */
  struct ISC
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_ISC_INTPWM0    = regbits< type,  0,  1 >;  /**< PWM0 Interrupt Status      */
    using PWM_ISC_INTPWM1    = regbits< type,  1,  1 >;  /**< PWM1 Interrupt Status      */
    using PWM_ISC_INTPWM2    = regbits< type,  2,  1 >;  /**< PWM2 Interrupt Status      */
    using PWM_ISC_INTPWM3    = regbits< type,  3,  1 >;  /**< PWM3 Interrupt Status      */
    using PWM_ISC_INTFAULT0  = regbits< type, 16,  1 >;  /**< FAULT0 Interrupt Asserted  */
    using PWM_ISC_INTFAULT1  = regbits< type, 17,  1 >;  /**< FAULT1 Interrupt Asserted  */
  };

  /**
   * PWM Status
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_STATUS_FAULT0  = regbits< type,  0,  1 >;  /**< Generator 0 Fault Status  */
    using PWM_STATUS_FAULT1  = regbits< type,  1,  1 >;  /**< Generator 1 Fault Status  */
  };

  /**
   * PWM Fault Condition Value
   */
  struct FAULTVAL
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_FAULTVAL_PWM0  = regbits< type,  0,  1 >;  /**< PWM0 Fault Value  */
    using PWM_FAULTVAL_PWM1  = regbits< type,  1,  1 >;  /**< PWM1 Fault Value  */
    using PWM_FAULTVAL_PWM2  = regbits< type,  2,  1 >;  /**< PWM2 Fault Value  */
    using PWM_FAULTVAL_PWM3  = regbits< type,  3,  1 >;  /**< PWM3 Fault Value  */
    using PWM_FAULTVAL_PWM4  = regbits< type,  4,  1 >;  /**< PWM4 Fault Value  */
    using PWM_FAULTVAL_PWM5  = regbits< type,  5,  1 >;  /**< PWM5 Fault Value  */
    using PWM_FAULTVAL_PWM6  = regbits< type,  6,  1 >;  /**< PWM6 Fault Value  */
    using PWM_FAULTVAL_PWM7  = regbits< type,  7,  1 >;  /**< PWM7 Fault Value  */
  };

  /**
   * PWM Enable Update
   */
  struct ENUPD
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_ENUPD_ENUPD0  = regbits< type,  0,  2 >;  /**< PWM0 Enable Update Mode  */
    using PWM_ENUPD_ENUPD1  = regbits< type,  2,  2 >;  /**< PWM1 Enable Update Mode  */
    using PWM_ENUPD_ENUPD2  = regbits< type,  4,  2 >;  /**< PWM2 Enable Update Mode  */
    using PWM_ENUPD_ENUPD3  = regbits< type,  6,  2 >;  /**< PWM3 Enable Update Mode  */
    using PWM_ENUPD_ENUPD4  = regbits< type,  8,  2 >;  /**< PWM4 Enable Update Mode  */
    using PWM_ENUPD_ENUPD5  = regbits< type, 10,  2 >;  /**< PWM5 Enable Update Mode  */
    using PWM_ENUPD_ENUPD6  = regbits< type, 12,  2 >;  /**< PWM6 Enable Update Mode  */
    using PWM_ENUPD_ENUPD7  = regbits< type, 14,  2 >;  /**< PWM7 Enable Update Mode  */
  };

  /**
   * PWM0 Control
   */
  struct _0_CTL
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_CTL_ENABLE     = regbits< type,  0,  1 >;  /**< PWM Block Enable                                       */
    using PWM_0_CTL_MODE       = regbits< type,  1,  1 >;  /**< Counter Mode                                           */
    using PWM_0_CTL_DEBUG      = regbits< type,  2,  1 >;  /**< Debug Mode                                             */
    using PWM_0_CTL_LOADUPD    = regbits< type,  3,  1 >;  /**< Load Register Update Mode                              */
    using PWM_0_CTL_CMPAUPD    = regbits< type,  4,  1 >;  /**< Comparator A Update Mode                               */
    using PWM_0_CTL_CMPBUPD    = regbits< type,  5,  1 >;  /**< Comparator B Update Mode                               */
    using PWM_0_CTL_GENAUPD    = regbits< type,  6,  2 >;  /**< PWMnGENA Update Mode                                   */
    using PWM_0_CTL_GENBUPD    = regbits< type,  8,  2 >;  /**< PWMnGENB Update Mode                                   */
    using PWM_0_CTL_DBCTLUPD   = regbits< type, 10,  2 >;  /**< PWMnDBCTL Update Mode                                  */
    using PWM_0_CTL_DBRISEUPD  = regbits< type, 12,  2 >;  /**< PWMnDBRISE Update Mode                                 */
    using PWM_0_CTL_DBFALLUPD  = regbits< type, 14,  2 >;  /**< Specifies the update mode for the PWMnDBFALL register  */
    using PWM_0_CTL_FLTSRC     = regbits< type, 16,  1 >;  /**< Fault Condition Source                                 */
    using PWM_0_CTL_MINFLTPER  = regbits< type, 17,  1 >;  /**< Minimum Fault Period                                   */
    using PWM_0_CTL_LATCH      = regbits< type, 18,  1 >;  /**< Latch Fault Input                                      */
  };

  /**
   * PWM0 Interrupt and Trigger Enable
   */
  struct _0_INTEN
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_INTEN_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Interrupt for Counter=0                  */
    using PWM_0_INTEN_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Interrupt for Counter=Load               */
    using PWM_0_INTEN_INTCMPAU    = regbits< type,  2,  1 >;  /**< Interrupt for Counter=Comparator A Up    */
    using PWM_0_INTEN_INTCMPAD    = regbits< type,  3,  1 >;  /**< Interrupt for Counter=Comparator A Down  */
    using PWM_0_INTEN_INTCMPBU    = regbits< type,  4,  1 >;  /**< Interrupt for Counter=Comparator B Up    */
    using PWM_0_INTEN_INTCMPBD    = regbits< type,  5,  1 >;  /**< Interrupt for Counter=Comparator B Down  */
    using PWM_0_INTEN_TRCNTZERO   = regbits< type,  8,  1 >;  /**< Trigger for Counter=0                    */
    using PWM_0_INTEN_TRCNTLOAD   = regbits< type,  9,  1 >;  /**< Trigger for Counter=Load                 */
    using PWM_0_INTEN_TRCMPAU     = regbits< type, 10,  1 >;  /**< Trigger for Counter=Comparator A Up      */
    using PWM_0_INTEN_TRCMPAD     = regbits< type, 11,  1 >;  /**< Trigger for Counter=Comparator A Down    */
    using PWM_0_INTEN_TRCMPBU     = regbits< type, 12,  1 >;  /**< Trigger for Counter=Comparator B Up      */
    using PWM_0_INTEN_TRCMPBD     = regbits< type, 13,  1 >;  /**< Trigger for Counter=Comparator B Down    */
  };

  /**
   * PWM0 Raw Interrupt Status
   */
  struct _0_RIS
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_RIS_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Counter=0 Interrupt Status          */
    using PWM_0_RIS_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Counter=Load Interrupt Status       */
    using PWM_0_RIS_INTCMPAU    = regbits< type,  2,  1 >;  /**< Comparator A Up Interrupt Status    */
    using PWM_0_RIS_INTCMPAD    = regbits< type,  3,  1 >;  /**< Comparator A Down Interrupt Status  */
    using PWM_0_RIS_INTCMPBU    = regbits< type,  4,  1 >;  /**< Comparator B Up Interrupt Status    */
    using PWM_0_RIS_INTCMPBD    = regbits< type,  5,  1 >;  /**< Comparator B Down Interrupt Status  */
  };

  /**
   * PWM0 Interrupt Status and Clear
   */
  struct _0_ISC
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_ISC_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Counter=0 Interrupt          */
    using PWM_0_ISC_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Counter=Load Interrupt       */
    using PWM_0_ISC_INTCMPAU    = regbits< type,  2,  1 >;  /**< Comparator A Up Interrupt    */
    using PWM_0_ISC_INTCMPAD    = regbits< type,  3,  1 >;  /**< Comparator A Down Interrupt  */
    using PWM_0_ISC_INTCMPBU    = regbits< type,  4,  1 >;  /**< Comparator B Up Interrupt    */
    using PWM_0_ISC_INTCMPBD    = regbits< type,  5,  1 >;  /**< Comparator B Down Interrupt  */
  };

  /**
   * PWM0 Load
   */
  struct _0_LOAD
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_LOAD  = regbits< type,  0, 16 >;  /**< Counter Load Value  */
  };

  /**
   * PWM0 Counter
   */
  struct _0_COUNT
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_COUNT  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };

  /**
   * PWM0 Compare A
   */
  struct _0_CMPA
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_CMPA  = regbits< type,  0, 16 >;  /**< Comparator A Value  */
  };

  /**
   * PWM0 Compare B
   */
  struct _0_CMPB
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_CMPB  = regbits< type,  0, 16 >;  /**< Comparator B Value  */
  };

  /**
   * PWM0 Generator A Control
   */
  struct _0_GENA
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_GENA_ACTZERO   = regbits< type,  0,  2 >;  /**< Action for Counter=0          */
    using PWM_0_GENA_ACTLOAD   = regbits< type,  2,  2 >;  /**< Action for Counter=Load       */
    using PWM_0_GENA_ACTCMPAU  = regbits< type,  4,  2 >;  /**< Action for Comparator A Up    */
    using PWM_0_GENA_ACTCMPAD  = regbits< type,  6,  2 >;  /**< Action for Comparator A Down  */
    using PWM_0_GENA_ACTCMPBU  = regbits< type,  8,  2 >;  /**< Action for Comparator B Up    */
    using PWM_0_GENA_ACTCMPBD  = regbits< type, 10,  2 >;  /**< Action for Comparator B Down  */
  };

  /**
   * PWM0 Generator B Control
   */
  struct _0_GENB
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_GENB_ACTZERO   = regbits< type,  0,  2 >;  /**< Action for Counter=0          */
    using PWM_0_GENB_ACTLOAD   = regbits< type,  2,  2 >;  /**< Action for Counter=Load       */
    using PWM_0_GENB_ACTCMPAU  = regbits< type,  4,  2 >;  /**< Action for Comparator A Up    */
    using PWM_0_GENB_ACTCMPAD  = regbits< type,  6,  2 >;  /**< Action for Comparator A Down  */
    using PWM_0_GENB_ACTCMPBU  = regbits< type,  8,  2 >;  /**< Action for Comparator B Up    */
    using PWM_0_GENB_ACTCMPBD  = regbits< type, 10,  2 >;  /**< Action for Comparator B Down  */
  };

  /**
   * PWM0 Dead-Band Control
   */
  struct _0_DBCTL
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_DBCTL_ENABLE  = regbits< type,  0,  1 >;  /**< Dead-Band Generator Enable  */
  };

  /**
   * PWM0 Dead-Band Rising-Edge Delay
   */
  struct _0_DBRISE
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_DBRISE_DELAY  = regbits< type,  0, 12 >;  /**< Dead-Band Rise Delay  */
  };

  /**
   * PWM0 Dead-Band Falling-Edge-Delay
   */
  struct _0_DBFALL
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_DBFALL_DELAY  = regbits< type,  0, 12 >;  /**< Dead-Band Fall Delay  */
  };

  /**
   * PWM0 Fault Source 0
   */
  struct _0_FLTSRC0
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_FLTSRC0_FAULT0  = regbits< type,  0,  1 >;  /**< Fault0        */
    using PWM_0_FLTSRC0_FAULT1  = regbits< type,  1,  1 >;  /**< Fault1 Input  */
  };

  /**
   * PWM0 Fault Source 1
   */
  struct _0_FLTSRC1
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_FLTSRC1_DCMP0  = regbits< type,  0,  1 >;  /**< Digital Comparator 0  */
    using PWM_0_FLTSRC1_DCMP1  = regbits< type,  1,  1 >;  /**< Digital Comparator 1  */
    using PWM_0_FLTSRC1_DCMP2  = regbits< type,  2,  1 >;  /**< Digital Comparator 2  */
    using PWM_0_FLTSRC1_DCMP3  = regbits< type,  3,  1 >;  /**< Digital Comparator 3  */
    using PWM_0_FLTSRC1_DCMP4  = regbits< type,  4,  1 >;  /**< Digital Comparator 4  */
    using PWM_0_FLTSRC1_DCMP5  = regbits< type,  5,  1 >;  /**< Digital Comparator 5  */
    using PWM_0_FLTSRC1_DCMP6  = regbits< type,  6,  1 >;  /**< Digital Comparator 6  */
    using PWM_0_FLTSRC1_DCMP7  = regbits< type,  7,  1 >;  /**< Digital Comparator 7  */
  };

  /**
   * PWM0 Minimum Fault Period
   */
  struct _0_MINFLTPER
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_MINFLTPER  = regbits< type,  0, 16 >;  /**< Minimum Fault Period  */
  };

  /**
   * PWM1 Control
   */
  struct _1_CTL
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_CTL_ENABLE     = regbits< type,  0,  1 >;  /**< PWM Block Enable                                       */
    using PWM_1_CTL_MODE       = regbits< type,  1,  1 >;  /**< Counter Mode                                           */
    using PWM_1_CTL_DEBUG      = regbits< type,  2,  1 >;  /**< Debug Mode                                             */
    using PWM_1_CTL_LOADUPD    = regbits< type,  3,  1 >;  /**< Load Register Update Mode                              */
    using PWM_1_CTL_CMPAUPD    = regbits< type,  4,  1 >;  /**< Comparator A Update Mode                               */
    using PWM_1_CTL_CMPBUPD    = regbits< type,  5,  1 >;  /**< Comparator B Update Mode                               */
    using PWM_1_CTL_GENAUPD    = regbits< type,  6,  2 >;  /**< PWMnGENA Update Mode                                   */
    using PWM_1_CTL_GENBUPD    = regbits< type,  8,  2 >;  /**< PWMnGENB Update Mode                                   */
    using PWM_1_CTL_DBCTLUPD   = regbits< type, 10,  2 >;  /**< PWMnDBCTL Update Mode                                  */
    using PWM_1_CTL_DBRISEUPD  = regbits< type, 12,  2 >;  /**< PWMnDBRISE Update Mode                                 */
    using PWM_1_CTL_DBFALLUPD  = regbits< type, 14,  2 >;  /**< Specifies the update mode for the PWMnDBFALL register  */
    using PWM_1_CTL_FLTSRC     = regbits< type, 16,  1 >;  /**< Fault Condition Source                                 */
    using PWM_1_CTL_MINFLTPER  = regbits< type, 17,  1 >;  /**< Minimum Fault Period                                   */
    using PWM_1_CTL_LATCH      = regbits< type, 18,  1 >;  /**< Latch Fault Input                                      */
  };

  /**
   * PWM1 Interrupt and Trigger Enable
   */
  struct _1_INTEN
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_INTEN_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Interrupt for Counter=0                  */
    using PWM_1_INTEN_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Interrupt for Counter=Load               */
    using PWM_1_INTEN_INTCMPAU    = regbits< type,  2,  1 >;  /**< Interrupt for Counter=Comparator A Up    */
    using PWM_1_INTEN_INTCMPAD    = regbits< type,  3,  1 >;  /**< Interrupt for Counter=Comparator A Down  */
    using PWM_1_INTEN_INTCMPBU    = regbits< type,  4,  1 >;  /**< Interrupt for Counter=Comparator B Up    */
    using PWM_1_INTEN_INTCMPBD    = regbits< type,  5,  1 >;  /**< Interrupt for Counter=Comparator B Down  */
    using PWM_1_INTEN_TRCNTZERO   = regbits< type,  8,  1 >;  /**< Trigger for Counter=0                    */
    using PWM_1_INTEN_TRCNTLOAD   = regbits< type,  9,  1 >;  /**< Trigger for Counter=Load                 */
    using PWM_1_INTEN_TRCMPAU     = regbits< type, 10,  1 >;  /**< Trigger for Counter=Comparator A Up      */
    using PWM_1_INTEN_TRCMPAD     = regbits< type, 11,  1 >;  /**< Trigger for Counter=Comparator A Down    */
    using PWM_1_INTEN_TRCMPBU     = regbits< type, 12,  1 >;  /**< Trigger for Counter=Comparator B Up      */
    using PWM_1_INTEN_TRCMPBD     = regbits< type, 13,  1 >;  /**< Trigger for Counter=Comparator B Down    */
  };

  /**
   * PWM1 Raw Interrupt Status
   */
  struct _1_RIS
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_RIS_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Counter=0 Interrupt Status          */
    using PWM_1_RIS_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Counter=Load Interrupt Status       */
    using PWM_1_RIS_INTCMPAU    = regbits< type,  2,  1 >;  /**< Comparator A Up Interrupt Status    */
    using PWM_1_RIS_INTCMPAD    = regbits< type,  3,  1 >;  /**< Comparator A Down Interrupt Status  */
    using PWM_1_RIS_INTCMPBU    = regbits< type,  4,  1 >;  /**< Comparator B Up Interrupt Status    */
    using PWM_1_RIS_INTCMPBD    = regbits< type,  5,  1 >;  /**< Comparator B Down Interrupt Status  */
  };

  /**
   * PWM1 Interrupt Status and Clear
   */
  struct _1_ISC
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_ISC_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Counter=0 Interrupt          */
    using PWM_1_ISC_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Counter=Load Interrupt       */
    using PWM_1_ISC_INTCMPAU    = regbits< type,  2,  1 >;  /**< Comparator A Up Interrupt    */
    using PWM_1_ISC_INTCMPAD    = regbits< type,  3,  1 >;  /**< Comparator A Down Interrupt  */
    using PWM_1_ISC_INTCMPBU    = regbits< type,  4,  1 >;  /**< Comparator B Up Interrupt    */
    using PWM_1_ISC_INTCMPBD    = regbits< type,  5,  1 >;  /**< Comparator B Down Interrupt  */
  };

  /**
   * PWM1 Load
   */
  struct _1_LOAD
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_LOAD_LOAD  = regbits< type,  0, 16 >;  /**< Counter Load Value  */
  };

  /**
   * PWM1 Counter
   */
  struct _1_COUNT
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_COUNT_COUNT  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };

  /**
   * PWM1 Compare A
   */
  struct _1_CMPA
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_CMPA_COMPA  = regbits< type,  0, 16 >;  /**< Comparator A Value  */
  };

  /**
   * PWM1 Compare B
   */
  struct _1_CMPB
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_CMPB_COMPB  = regbits< type,  0, 16 >;  /**< Comparator B Value  */
  };

  /**
   * PWM1 Generator A Control
   */
  struct _1_GENA
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_GENA_ACTZERO   = regbits< type,  0,  2 >;  /**< Action for Counter=0          */
    using PWM_1_GENA_ACTLOAD   = regbits< type,  2,  2 >;  /**< Action for Counter=Load       */
    using PWM_1_GENA_ACTCMPAU  = regbits< type,  4,  2 >;  /**< Action for Comparator A Up    */
    using PWM_1_GENA_ACTCMPAD  = regbits< type,  6,  2 >;  /**< Action for Comparator A Down  */
    using PWM_1_GENA_ACTCMPBU  = regbits< type,  8,  2 >;  /**< Action for Comparator B Up    */
    using PWM_1_GENA_ACTCMPBD  = regbits< type, 10,  2 >;  /**< Action for Comparator B Down  */
  };

  /**
   * PWM1 Generator B Control
   */
  struct _1_GENB
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_GENB_ACTZERO   = regbits< type,  0,  2 >;  /**< Action for Counter=0          */
    using PWM_1_GENB_ACTLOAD   = regbits< type,  2,  2 >;  /**< Action for Counter=Load       */
    using PWM_1_GENB_ACTCMPAU  = regbits< type,  4,  2 >;  /**< Action for Comparator A Up    */
    using PWM_1_GENB_ACTCMPAD  = regbits< type,  6,  2 >;  /**< Action for Comparator A Down  */
    using PWM_1_GENB_ACTCMPBU  = regbits< type,  8,  2 >;  /**< Action for Comparator B Up    */
    using PWM_1_GENB_ACTCMPBD  = regbits< type, 10,  2 >;  /**< Action for Comparator B Down  */
  };

  /**
   * PWM1 Dead-Band Control
   */
  struct _1_DBCTL
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_DBCTL_ENABLE  = regbits< type,  0,  1 >;  /**< Dead-Band Generator Enable  */
  };

  /**
   * PWM1 Dead-Band Rising-Edge Delay
   */
  struct _1_DBRISE
  : public reg< uint32_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_DBRISE_RISEDELAY  = regbits< type,  0, 12 >;  /**< Dead-Band Rise Delay  */
  };

  /**
   * PWM1 Dead-Band Falling-Edge-Delay
   */
  struct _1_DBFALL
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_DBFALL_FALLDELAY  = regbits< type,  0, 12 >;  /**< Dead-Band Fall Delay  */
  };

  /**
   * PWM1 Fault Source 0
   */
  struct _1_FLTSRC0
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_FLTSRC0_FAULT0  = regbits< type,  0,  1 >;  /**< Fault0        */
    using PWM_1_FLTSRC0_FAULT1  = regbits< type,  1,  1 >;  /**< Fault1 Input  */
  };

  /**
   * PWM1 Fault Source 1
   */
  struct _1_FLTSRC1
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_FLTSRC1_DCMP0  = regbits< type,  0,  1 >;  /**< Digital Comparator 0  */
    using PWM_1_FLTSRC1_DCMP1  = regbits< type,  1,  1 >;  /**< Digital Comparator 1  */
    using PWM_1_FLTSRC1_DCMP2  = regbits< type,  2,  1 >;  /**< Digital Comparator 2  */
    using PWM_1_FLTSRC1_DCMP3  = regbits< type,  3,  1 >;  /**< Digital Comparator 3  */
    using PWM_1_FLTSRC1_DCMP4  = regbits< type,  4,  1 >;  /**< Digital Comparator 4  */
    using PWM_1_FLTSRC1_DCMP5  = regbits< type,  5,  1 >;  /**< Digital Comparator 5  */
    using PWM_1_FLTSRC1_DCMP6  = regbits< type,  6,  1 >;  /**< Digital Comparator 6  */
    using PWM_1_FLTSRC1_DCMP7  = regbits< type,  7,  1 >;  /**< Digital Comparator 7  */
  };

  /**
   * PWM1 Minimum Fault Period
   */
  struct _1_MINFLTPER
  : public reg< uint32_t, base_addr + 0x000000bc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_MINFLTPER_MFP  = regbits< type,  0, 16 >;  /**< Minimum Fault Period  */
  };

  /**
   * PWM2 Control
   */
  struct _2_CTL
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_CTL_ENABLE     = regbits< type,  0,  1 >;  /**< PWM Block Enable                                       */
    using PWM_2_CTL_MODE       = regbits< type,  1,  1 >;  /**< Counter Mode                                           */
    using PWM_2_CTL_DEBUG      = regbits< type,  2,  1 >;  /**< Debug Mode                                             */
    using PWM_2_CTL_LOADUPD    = regbits< type,  3,  1 >;  /**< Load Register Update Mode                              */
    using PWM_2_CTL_CMPAUPD    = regbits< type,  4,  1 >;  /**< Comparator A Update Mode                               */
    using PWM_2_CTL_CMPBUPD    = regbits< type,  5,  1 >;  /**< Comparator B Update Mode                               */
    using PWM_2_CTL_GENAUPD    = regbits< type,  6,  2 >;  /**< PWMnGENA Update Mode                                   */
    using PWM_2_CTL_GENBUPD    = regbits< type,  8,  2 >;  /**< PWMnGENB Update Mode                                   */
    using PWM_2_CTL_DBCTLUPD   = regbits< type, 10,  2 >;  /**< PWMnDBCTL Update Mode                                  */
    using PWM_2_CTL_DBRISEUPD  = regbits< type, 12,  2 >;  /**< PWMnDBRISE Update Mode                                 */
    using PWM_2_CTL_DBFALLUPD  = regbits< type, 14,  2 >;  /**< Specifies the update mode for the PWMnDBFALL register  */
    using PWM_2_CTL_FLTSRC     = regbits< type, 16,  1 >;  /**< Fault Condition Source                                 */
    using PWM_2_CTL_MINFLTPER  = regbits< type, 17,  1 >;  /**< Minimum Fault Period                                   */
    using PWM_2_CTL_LATCH      = regbits< type, 18,  1 >;  /**< Latch Fault Input                                      */
  };

  /**
   * PWM2 Interrupt and Trigger Enable
   */
  struct _2_INTEN
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_INTEN_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Interrupt for Counter=0                  */
    using PWM_2_INTEN_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Interrupt for Counter=Load               */
    using PWM_2_INTEN_INTCMPAU    = regbits< type,  2,  1 >;  /**< Interrupt for Counter=Comparator A Up    */
    using PWM_2_INTEN_INTCMPAD    = regbits< type,  3,  1 >;  /**< Interrupt for Counter=Comparator A Down  */
    using PWM_2_INTEN_INTCMPBU    = regbits< type,  4,  1 >;  /**< Interrupt for Counter=Comparator B Up    */
    using PWM_2_INTEN_INTCMPBD    = regbits< type,  5,  1 >;  /**< Interrupt for Counter=Comparator B Down  */
    using PWM_2_INTEN_TRCNTZERO   = regbits< type,  8,  1 >;  /**< Trigger for Counter=0                    */
    using PWM_2_INTEN_TRCNTLOAD   = regbits< type,  9,  1 >;  /**< Trigger for Counter=Load                 */
    using PWM_2_INTEN_TRCMPAU     = regbits< type, 10,  1 >;  /**< Trigger for Counter=Comparator A Up      */
    using PWM_2_INTEN_TRCMPAD     = regbits< type, 11,  1 >;  /**< Trigger for Counter=Comparator A Down    */
    using PWM_2_INTEN_TRCMPBU     = regbits< type, 12,  1 >;  /**< Trigger for Counter=Comparator B Up      */
    using PWM_2_INTEN_TRCMPBD     = regbits< type, 13,  1 >;  /**< Trigger for Counter=Comparator B Down    */
  };

  /**
   * PWM2 Raw Interrupt Status
   */
  struct _2_RIS
  : public reg< uint32_t, base_addr + 0x000000c8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_RIS_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Counter=0 Interrupt Status          */
    using PWM_2_RIS_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Counter=Load Interrupt Status       */
    using PWM_2_RIS_INTCMPAU    = regbits< type,  2,  1 >;  /**< Comparator A Up Interrupt Status    */
    using PWM_2_RIS_INTCMPAD    = regbits< type,  3,  1 >;  /**< Comparator A Down Interrupt Status  */
    using PWM_2_RIS_INTCMPBU    = regbits< type,  4,  1 >;  /**< Comparator B Up Interrupt Status    */
    using PWM_2_RIS_INTCMPBD    = regbits< type,  5,  1 >;  /**< Comparator B Down Interrupt Status  */
  };

  /**
   * PWM2 Interrupt Status and Clear
   */
  struct _2_ISC
  : public reg< uint32_t, base_addr + 0x000000cc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000cc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_ISC_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Counter=0 Interrupt          */
    using PWM_2_ISC_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Counter=Load Interrupt       */
    using PWM_2_ISC_INTCMPAU    = regbits< type,  2,  1 >;  /**< Comparator A Up Interrupt    */
    using PWM_2_ISC_INTCMPAD    = regbits< type,  3,  1 >;  /**< Comparator A Down Interrupt  */
    using PWM_2_ISC_INTCMPBU    = regbits< type,  4,  1 >;  /**< Comparator B Up Interrupt    */
    using PWM_2_ISC_INTCMPBD    = regbits< type,  5,  1 >;  /**< Comparator B Down Interrupt  */
  };

  /**
   * PWM2 Load
   */
  struct _2_LOAD
  : public reg< uint32_t, base_addr + 0x000000d0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000d0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_LOAD_LOAD  = regbits< type,  0, 16 >;  /**< Counter Load Value  */
  };

  /**
   * PWM2 Counter
   */
  struct _2_COUNT
  : public reg< uint32_t, base_addr + 0x000000d4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000d4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_COUNT_COUNT  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };

  /**
   * PWM2 Compare A
   */
  struct _2_CMPA
  : public reg< uint32_t, base_addr + 0x000000d8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000d8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_CMPA_COMPA  = regbits< type,  0, 16 >;  /**< Comparator A Value  */
  };

  /**
   * PWM2 Compare B
   */
  struct _2_CMPB
  : public reg< uint32_t, base_addr + 0x000000dc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000dc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_CMPB_COMPB  = regbits< type,  0, 16 >;  /**< Comparator B Value  */
  };

  /**
   * PWM2 Generator A Control
   */
  struct _2_GENA
  : public reg< uint32_t, base_addr + 0x000000e0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000e0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_GENA_ACTZERO   = regbits< type,  0,  2 >;  /**< Action for Counter=0          */
    using PWM_2_GENA_ACTLOAD   = regbits< type,  2,  2 >;  /**< Action for Counter=Load       */
    using PWM_2_GENA_ACTCMPAU  = regbits< type,  4,  2 >;  /**< Action for Comparator A Up    */
    using PWM_2_GENA_ACTCMPAD  = regbits< type,  6,  2 >;  /**< Action for Comparator A Down  */
    using PWM_2_GENA_ACTCMPBU  = regbits< type,  8,  2 >;  /**< Action for Comparator B Up    */
    using PWM_2_GENA_ACTCMPBD  = regbits< type, 10,  2 >;  /**< Action for Comparator B Down  */
  };

  /**
   * PWM2 Generator B Control
   */
  struct _2_GENB
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_GENB_ACTZERO   = regbits< type,  0,  2 >;  /**< Action for Counter=0          */
    using PWM_2_GENB_ACTLOAD   = regbits< type,  2,  2 >;  /**< Action for Counter=Load       */
    using PWM_2_GENB_ACTCMPAU  = regbits< type,  4,  2 >;  /**< Action for Comparator A Up    */
    using PWM_2_GENB_ACTCMPAD  = regbits< type,  6,  2 >;  /**< Action for Comparator A Down  */
    using PWM_2_GENB_ACTCMPBU  = regbits< type,  8,  2 >;  /**< Action for Comparator B Up    */
    using PWM_2_GENB_ACTCMPBD  = regbits< type, 10,  2 >;  /**< Action for Comparator B Down  */
  };

  /**
   * PWM2 Dead-Band Control
   */
  struct _2_DBCTL
  : public reg< uint32_t, base_addr + 0x000000e8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_DBCTL_ENABLE  = regbits< type,  0,  1 >;  /**< Dead-Band Generator Enable  */
  };

  /**
   * PWM2 Dead-Band Rising-Edge Delay
   */
  struct _2_DBRISE
  : public reg< uint32_t, base_addr + 0x000000ec, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000ec, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_DBRISE_RISEDELAY  = regbits< type,  0, 12 >;  /**< Dead-Band Rise Delay  */
  };

  /**
   * PWM2 Dead-Band Falling-Edge-Delay
   */
  struct _2_DBFALL
  : public reg< uint32_t, base_addr + 0x000000f0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000f0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_DBFALL_FALLDELAY  = regbits< type,  0, 12 >;  /**< Dead-Band Fall Delay  */
  };

  /**
   * PWM2 Fault Source 0
   */
  struct _2_FLTSRC0
  : public reg< uint32_t, base_addr + 0x000000f4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000f4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_FLTSRC0_FAULT0  = regbits< type,  0,  1 >;  /**< Fault0        */
    using PWM_2_FLTSRC0_FAULT1  = regbits< type,  1,  1 >;  /**< Fault1 Input  */
  };

  /**
   * PWM2 Fault Source 1
   */
  struct _2_FLTSRC1
  : public reg< uint32_t, base_addr + 0x000000f8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000f8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_FLTSRC1_DCMP0  = regbits< type,  0,  1 >;  /**< Digital Comparator 0  */
    using PWM_2_FLTSRC1_DCMP1  = regbits< type,  1,  1 >;  /**< Digital Comparator 1  */
    using PWM_2_FLTSRC1_DCMP2  = regbits< type,  2,  1 >;  /**< Digital Comparator 2  */
    using PWM_2_FLTSRC1_DCMP3  = regbits< type,  3,  1 >;  /**< Digital Comparator 3  */
    using PWM_2_FLTSRC1_DCMP4  = regbits< type,  4,  1 >;  /**< Digital Comparator 4  */
    using PWM_2_FLTSRC1_DCMP5  = regbits< type,  5,  1 >;  /**< Digital Comparator 5  */
    using PWM_2_FLTSRC1_DCMP6  = regbits< type,  6,  1 >;  /**< Digital Comparator 6  */
    using PWM_2_FLTSRC1_DCMP7  = regbits< type,  7,  1 >;  /**< Digital Comparator 7  */
  };

  /**
   * PWM2 Minimum Fault Period
   */
  struct _2_MINFLTPER
  : public reg< uint32_t, base_addr + 0x000000fc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000fc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_MINFLTPER_MFP  = regbits< type,  0, 16 >;  /**< Minimum Fault Period  */
  };

  /**
   * PWM3 Control
   */
  struct _3_CTL
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_CTL_ENABLE     = regbits< type,  0,  1 >;  /**< PWM Block Enable                                       */
    using PWM_3_CTL_MODE       = regbits< type,  1,  1 >;  /**< Counter Mode                                           */
    using PWM_3_CTL_DEBUG      = regbits< type,  2,  1 >;  /**< Debug Mode                                             */
    using PWM_3_CTL_LOADUPD    = regbits< type,  3,  1 >;  /**< Load Register Update Mode                              */
    using PWM_3_CTL_CMPAUPD    = regbits< type,  4,  1 >;  /**< Comparator A Update Mode                               */
    using PWM_3_CTL_CMPBUPD    = regbits< type,  5,  1 >;  /**< Comparator B Update Mode                               */
    using PWM_3_CTL_GENAUPD    = regbits< type,  6,  2 >;  /**< PWMnGENA Update Mode                                   */
    using PWM_3_CTL_GENBUPD    = regbits< type,  8,  2 >;  /**< PWMnGENB Update Mode                                   */
    using PWM_3_CTL_DBCTLUPD   = regbits< type, 10,  2 >;  /**< PWMnDBCTL Update Mode                                  */
    using PWM_3_CTL_DBRISEUPD  = regbits< type, 12,  2 >;  /**< PWMnDBRISE Update Mode                                 */
    using PWM_3_CTL_DBFALLUPD  = regbits< type, 14,  2 >;  /**< Specifies the update mode for the PWMnDBFALL register  */
    using PWM_3_CTL_FLTSRC     = regbits< type, 16,  1 >;  /**< Fault Condition Source                                 */
    using PWM_3_CTL_MINFLTPER  = regbits< type, 17,  1 >;  /**< Minimum Fault Period                                   */
    using PWM_3_CTL_LATCH      = regbits< type, 18,  1 >;  /**< Latch Fault Input                                      */
  };

  /**
   * PWM3 Interrupt and Trigger Enable
   */
  struct _3_INTEN
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_INTEN_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Interrupt for Counter=0                  */
    using PWM_3_INTEN_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Interrupt for Counter=Load               */
    using PWM_3_INTEN_INTCMPAU    = regbits< type,  2,  1 >;  /**< Interrupt for Counter=Comparator A Up    */
    using PWM_3_INTEN_INTCMPAD    = regbits< type,  3,  1 >;  /**< Interrupt for Counter=Comparator A Down  */
    using PWM_3_INTEN_INTCMPBU    = regbits< type,  4,  1 >;  /**< Interrupt for Counter=Comparator B Up    */
    using PWM_3_INTEN_INTCMPBD    = regbits< type,  5,  1 >;  /**< Interrupt for Counter=Comparator B Down  */
    using PWM_3_INTEN_TRCNTZERO   = regbits< type,  8,  1 >;  /**< Trigger for Counter=0                    */
    using PWM_3_INTEN_TRCNTLOAD   = regbits< type,  9,  1 >;  /**< Trigger for Counter=Load                 */
    using PWM_3_INTEN_TRCMPAU     = regbits< type, 10,  1 >;  /**< Trigger for Counter=Comparator A Up      */
    using PWM_3_INTEN_TRCMPAD     = regbits< type, 11,  1 >;  /**< Trigger for Counter=Comparator A Down    */
    using PWM_3_INTEN_TRCMPBU     = regbits< type, 12,  1 >;  /**< Trigger for Counter=Comparator B Up      */
    using PWM_3_INTEN_TRCMPBD     = regbits< type, 13,  1 >;  /**< Trigger for Counter=Comparator B Down    */
  };

  /**
   * PWM3 Raw Interrupt Status
   */
  struct _3_RIS
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_RIS_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Counter=0 Interrupt Status          */
    using PWM_3_RIS_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Counter=Load Interrupt Status       */
    using PWM_3_RIS_INTCMPAU    = regbits< type,  2,  1 >;  /**< Comparator A Up Interrupt Status    */
    using PWM_3_RIS_INTCMPAD    = regbits< type,  3,  1 >;  /**< Comparator A Down Interrupt Status  */
    using PWM_3_RIS_INTCMPBU    = regbits< type,  4,  1 >;  /**< Comparator B Up Interrupt Status    */
    using PWM_3_RIS_INTCMPBD    = regbits< type,  5,  1 >;  /**< Comparator B Down Interrupt Status  */
  };

  /**
   * PWM3 Interrupt Status and Clear
   */
  struct _3_ISC
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_ISC_INTCNTZERO  = regbits< type,  0,  1 >;  /**< Counter=0 Interrupt          */
    using PWM_3_ISC_INTCNTLOAD  = regbits< type,  1,  1 >;  /**< Counter=Load Interrupt       */
    using PWM_3_ISC_INTCMPAU    = regbits< type,  2,  1 >;  /**< Comparator A Up Interrupt    */
    using PWM_3_ISC_INTCMPAD    = regbits< type,  3,  1 >;  /**< Comparator A Down Interrupt  */
    using PWM_3_ISC_INTCMPBU    = regbits< type,  4,  1 >;  /**< Comparator B Up Interrupt    */
    using PWM_3_ISC_INTCMPBD    = regbits< type,  5,  1 >;  /**< Comparator B Down Interrupt  */
  };

  /**
   * PWM3 Load
   */
  struct _3_LOAD
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_LOAD_LOAD  = regbits< type,  0, 16 >;  /**< Counter Load Value  */
  };

  /**
   * PWM3 Counter
   */
  struct _3_COUNT
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_COUNT_COUNT  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };

  /**
   * PWM3 Compare A
   */
  struct _3_CMPA
  : public reg< uint32_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_CMPA_COMPA  = regbits< type,  0, 16 >;  /**< Comparator A Value  */
  };

  /**
   * PWM3 Compare B
   */
  struct _3_CMPB
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_CMPB_COMPB  = regbits< type,  0, 16 >;  /**< Comparator B Value  */
  };

  /**
   * PWM3 Generator A Control
   */
  struct _3_GENA
  : public reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_GENA_ACTZERO   = regbits< type,  0,  2 >;  /**< Action for Counter=0          */
    using PWM_3_GENA_ACTLOAD   = regbits< type,  2,  2 >;  /**< Action for Counter=Load       */
    using PWM_3_GENA_ACTCMPAU  = regbits< type,  4,  2 >;  /**< Action for Comparator A Up    */
    using PWM_3_GENA_ACTCMPAD  = regbits< type,  6,  2 >;  /**< Action for Comparator A Down  */
    using PWM_3_GENA_ACTCMPBU  = regbits< type,  8,  2 >;  /**< Action for Comparator B Up    */
    using PWM_3_GENA_ACTCMPBD  = regbits< type, 10,  2 >;  /**< Action for Comparator B Down  */
  };

  /**
   * PWM3 Generator B Control
   */
  struct _3_GENB
  : public reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_GENB_ACTZERO   = regbits< type,  0,  2 >;  /**< Action for Counter=0          */
    using PWM_3_GENB_ACTLOAD   = regbits< type,  2,  2 >;  /**< Action for Counter=Load       */
    using PWM_3_GENB_ACTCMPAU  = regbits< type,  4,  2 >;  /**< Action for Comparator A Up    */
    using PWM_3_GENB_ACTCMPAD  = regbits< type,  6,  2 >;  /**< Action for Comparator A Down  */
    using PWM_3_GENB_ACTCMPBU  = regbits< type,  8,  2 >;  /**< Action for Comparator B Up    */
    using PWM_3_GENB_ACTCMPBD  = regbits< type, 10,  2 >;  /**< Action for Comparator B Down  */
  };

  /**
   * PWM3 Dead-Band Control
   */
  struct _3_DBCTL
  : public reg< uint32_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_DBCTL_ENABLE  = regbits< type,  0,  1 >;  /**< Dead-Band Generator Enable  */
  };

  /**
   * PWM3 Dead-Band Rising-Edge Delay
   */
  struct _3_DBRISE
  : public reg< uint32_t, base_addr + 0x0000012c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000012c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_DBRISE_RISEDELAY  = regbits< type,  0, 12 >;  /**< Dead-Band Rise Delay  */
  };

  /**
   * PWM3 Dead-Band Falling-Edge-Delay
   */
  struct _3_DBFALL
  : public reg< uint32_t, base_addr + 0x00000130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_DBFALL_FALLDELAY  = regbits< type,  0, 12 >;  /**< Dead-Band Fall Delay  */
  };

  /**
   * PWM3 Fault Source 0
   */
  struct _3_FLTSRC0
  : public reg< uint32_t, base_addr + 0x00000134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_FLTSRC0_FAULT0  = regbits< type,  0,  1 >;  /**< Fault0  */
    using PWM_3_FLTSRC0_FAULT1  = regbits< type,  1,  1 >;  /**< Fault1  */
  };

  /**
   * PWM3 Fault Source 1
   */
  struct _3_FLTSRC1
  : public reg< uint32_t, base_addr + 0x00000138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_FLTSRC1_DCMP0  = regbits< type,  0,  1 >;  /**< Digital Comparator 0  */
    using PWM_3_FLTSRC1_DCMP1  = regbits< type,  1,  1 >;  /**< Digital Comparator 1  */
    using PWM_3_FLTSRC1_DCMP2  = regbits< type,  2,  1 >;  /**< Digital Comparator 2  */
    using PWM_3_FLTSRC1_DCMP3  = regbits< type,  3,  1 >;  /**< Digital Comparator 3  */
    using PWM_3_FLTSRC1_DCMP4  = regbits< type,  4,  1 >;  /**< Digital Comparator 4  */
    using PWM_3_FLTSRC1_DCMP5  = regbits< type,  5,  1 >;  /**< Digital Comparator 5  */
    using PWM_3_FLTSRC1_DCMP6  = regbits< type,  6,  1 >;  /**< Digital Comparator 6  */
    using PWM_3_FLTSRC1_DCMP7  = regbits< type,  7,  1 >;  /**< Digital Comparator 7  */
  };

  /**
   * PWM3 Minimum Fault Period
   */
  struct _3_MINFLTPER
  : public reg< uint32_t, base_addr + 0x0000013c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000013c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_MINFLTPER_MFP  = regbits< type,  0, 16 >;  /**< Minimum Fault Period  */
  };

  /**
   * PWM0 Fault Pin Logic Sense
   */
  struct _0_FLTSEN
  : public reg< uint32_t, base_addr + 0x00000800, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000800, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_FLTSEN_FAULT0  = regbits< type,  0,  1 >;  /**< Fault0 Sense  */
    using PWM_0_FLTSEN_FAULT1  = regbits< type,  1,  1 >;  /**< Fault1 Sense  */
  };

  /**
   * PWM0 Fault Status 0
   */
  struct _0_FLTSTAT0
  : public reg< uint32_t, base_addr + 0x00000804, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000804, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_FLTSTAT0_FAULT0  = regbits< type,  0,  1 >;  /**< Fault Input 0  */
    using PWM_0_FLTSTAT0_FAULT1  = regbits< type,  1,  1 >;  /**< Fault Input 1  */
  };

  /**
   * PWM0 Fault Status 1
   */
  struct _0_FLTSTAT1
  : public reg< uint32_t, base_addr + 0x00000808, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000808, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_0_FLTSTAT1_DCMP0  = regbits< type,  0,  1 >;  /**< Digital Comparator 0 Trigger  */
    using PWM_0_FLTSTAT1_DCMP1  = regbits< type,  1,  1 >;  /**< Digital Comparator 1 Trigger  */
    using PWM_0_FLTSTAT1_DCMP2  = regbits< type,  2,  1 >;  /**< Digital Comparator 2 Trigger  */
    using PWM_0_FLTSTAT1_DCMP3  = regbits< type,  3,  1 >;  /**< Digital Comparator 3 Trigger  */
    using PWM_0_FLTSTAT1_DCMP4  = regbits< type,  4,  1 >;  /**< Digital Comparator 4 Trigger  */
    using PWM_0_FLTSTAT1_DCMP5  = regbits< type,  5,  1 >;  /**< Digital Comparator 5 Trigger  */
    using PWM_0_FLTSTAT1_DCMP6  = regbits< type,  6,  1 >;  /**< Digital Comparator 6 Trigger  */
    using PWM_0_FLTSTAT1_DCMP7  = regbits< type,  7,  1 >;  /**< Digital Comparator 7 Trigger  */
  };

  /**
   * PWM1 Fault Pin Logic Sense
   */
  struct _1_FLTSEN
  : public reg< uint32_t, base_addr + 0x00000880, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000880, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_FLTSEN_FAULT0  = regbits< type,  0,  1 >;  /**< Fault0 Sense  */
    using PWM_1_FLTSEN_FAULT1  = regbits< type,  1,  1 >;  /**< Fault1 Sense  */
  };

  /**
   * PWM1 Fault Status 0
   */
  struct _1_FLTSTAT0
  : public reg< uint32_t, base_addr + 0x00000884, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000884, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_FLTSTAT0_FAULT0  = regbits< type,  0,  1 >;  /**< Fault Input 0  */
    using PWM_1_FLTSTAT0_FAULT1  = regbits< type,  1,  1 >;  /**< Fault Input 1  */
  };

  /**
   * PWM1 Fault Status 1
   */
  struct _1_FLTSTAT1
  : public reg< uint32_t, base_addr + 0x00000888, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000888, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_1_FLTSTAT1_DCMP0  = regbits< type,  0,  1 >;  /**< Digital Comparator 0 Trigger  */
    using PWM_1_FLTSTAT1_DCMP1  = regbits< type,  1,  1 >;  /**< Digital Comparator 1 Trigger  */
    using PWM_1_FLTSTAT1_DCMP2  = regbits< type,  2,  1 >;  /**< Digital Comparator 2 Trigger  */
    using PWM_1_FLTSTAT1_DCMP3  = regbits< type,  3,  1 >;  /**< Digital Comparator 3 Trigger  */
    using PWM_1_FLTSTAT1_DCMP4  = regbits< type,  4,  1 >;  /**< Digital Comparator 4 Trigger  */
    using PWM_1_FLTSTAT1_DCMP5  = regbits< type,  5,  1 >;  /**< Digital Comparator 5 Trigger  */
    using PWM_1_FLTSTAT1_DCMP6  = regbits< type,  6,  1 >;  /**< Digital Comparator 6 Trigger  */
    using PWM_1_FLTSTAT1_DCMP7  = regbits< type,  7,  1 >;  /**< Digital Comparator 7 Trigger  */
  };

  /**
   * PWM2 Fault Status 0
   */
  struct _2_FLTSTAT0
  : public reg< uint32_t, base_addr + 0x00000904, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000904, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_FLTSTAT0_FAULT0  = regbits< type,  0,  1 >;  /**< Fault Input 0  */
    using PWM_2_FLTSTAT0_FAULT1  = regbits< type,  1,  1 >;  /**< Fault Input 1  */
  };

  /**
   * PWM2 Fault Status 1
   */
  struct _2_FLTSTAT1
  : public reg< uint32_t, base_addr + 0x00000908, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000908, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_2_FLTSTAT1_DCMP0  = regbits< type,  0,  1 >;  /**< Digital Comparator 0 Trigger  */
    using PWM_2_FLTSTAT1_DCMP1  = regbits< type,  1,  1 >;  /**< Digital Comparator 1 Trigger  */
    using PWM_2_FLTSTAT1_DCMP2  = regbits< type,  2,  1 >;  /**< Digital Comparator 2 Trigger  */
    using PWM_2_FLTSTAT1_DCMP3  = regbits< type,  3,  1 >;  /**< Digital Comparator 3 Trigger  */
    using PWM_2_FLTSTAT1_DCMP4  = regbits< type,  4,  1 >;  /**< Digital Comparator 4 Trigger  */
    using PWM_2_FLTSTAT1_DCMP5  = regbits< type,  5,  1 >;  /**< Digital Comparator 5 Trigger  */
    using PWM_2_FLTSTAT1_DCMP6  = regbits< type,  6,  1 >;  /**< Digital Comparator 6 Trigger  */
    using PWM_2_FLTSTAT1_DCMP7  = regbits< type,  7,  1 >;  /**< Digital Comparator 7 Trigger  */
  };

  /**
   * PWM3 Fault Status 0
   */
  struct _3_FLTSTAT0
  : public reg< uint32_t, base_addr + 0x00000984, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000984, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_FLTSTAT0_FAULT0  = regbits< type,  0,  1 >;  /**< Fault Input 0  */
    using PWM_3_FLTSTAT0_FAULT1  = regbits< type,  1,  1 >;  /**< Fault Input 1  */
  };

  /**
   * PWM3 Fault Status 1
   */
  struct _3_FLTSTAT1
  : public reg< uint32_t, base_addr + 0x00000988, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000988, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_3_FLTSTAT1_DCMP0  = regbits< type,  0,  1 >;  /**< Digital Comparator 0 Trigger  */
    using PWM_3_FLTSTAT1_DCMP1  = regbits< type,  1,  1 >;  /**< Digital Comparator 1 Trigger  */
    using PWM_3_FLTSTAT1_DCMP2  = regbits< type,  2,  1 >;  /**< Digital Comparator 2 Trigger  */
    using PWM_3_FLTSTAT1_DCMP3  = regbits< type,  3,  1 >;  /**< Digital Comparator 3 Trigger  */
    using PWM_3_FLTSTAT1_DCMP4  = regbits< type,  4,  1 >;  /**< Digital Comparator 4 Trigger  */
    using PWM_3_FLTSTAT1_DCMP5  = regbits< type,  5,  1 >;  /**< Digital Comparator 5 Trigger  */
    using PWM_3_FLTSTAT1_DCMP6  = regbits< type,  6,  1 >;  /**< Digital Comparator 6 Trigger  */
    using PWM_3_FLTSTAT1_DCMP7  = regbits< type,  7,  1 >;  /**< Digital Comparator 7 Trigger  */
  };

  /**
   * PWM Peripheral Properties
   */
  struct PP
  : public reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PWM_PP_GCNT    = regbits< type,  0,  4 >;  /**< Generators                */
    using PWM_PP_FCNT    = regbits< type,  4,  4 >;  /**< Fault Inputs              */
    using PWM_PP_ESYNC   = regbits< type,  8,  1 >;  /**< Extended Synchronization  */
    using PWM_PP_EFAULT  = regbits< type,  9,  1 >;  /**< Extended Fault            */
    using PWM_PP_ONE     = regbits< type, 10,  1 >;  /**< One-Shot Mode             */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWM1_HPP_INCLUDED
