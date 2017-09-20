/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKV56F22.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV56F22
//  series: Kinetis_V
//  version: 1.6
//  description: MKV56F22 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FTM2_HPP_INCLUDED
#define ARCH_REG_FTM2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * FlexTimer Module
 */
struct FTM2
{
  static constexpr reg_addr_t base_addr = 0x4003a000;

  /**
   * Status And Control
   */
  struct SC
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using PS     = regbits< type,  0,  3 >;  /**< Prescale Factor Selection        */
    using CLKS   = regbits< type,  3,  2 >;  /**< Clock Source Selection           */
    using CPWMS  = regbits< type,  5,  1 >;  /**< Center-Aligned PWM Select        */
    using TOIE   = regbits< type,  6,  1 >;  /**< Timer Overflow Interrupt Enable  */
    using TOF    = regbits< type,  7,  1 >;  /**< Timer Overflow Flag              */
  };

  /**
   * Counter
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };

  /**
   * Modulo
   */
  struct MOD
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    // fixme: Field name equals parent register name: MOD
    using MOD_ = regbits< type,  0, 16 >;  /**< Modulo Value  */
  };

  /**
   * Channel (n) Status And Control
   */
  struct C%sSC
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using DMA    = regbits< type,  0,  1 >;  /**< DMA Enable                                              */
    using ICRST  = regbits< type,  1,  1 >;  /**< FTM counter reset by the selected input capture event.  */
    using ELSA   = regbits< type,  2,  1 >;  /**< Edge or Level Select                                    */
    using ELSB   = regbits< type,  3,  1 >;  /**< Edge or Level Select                                    */
    using MSA    = regbits< type,  4,  1 >;  /**< Channel Mode Select                                     */
    using MSB    = regbits< type,  5,  1 >;  /**< Channel Mode Select                                     */
    using CHIE   = regbits< type,  6,  1 >;  /**< Channel Interrupt Enable                                */
    using CHF    = regbits< type,  7,  1 >;  /**< Channel Flag                                            */
  };

  /**
   * Channel (n) Value
   */
  struct C%sV
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using VAL  = regbits< type,  0, 16 >;  /**< Channel Value  */
  };

  /**
   * Counter Initial Value
   */
  struct CNTIN
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using INIT  = regbits< type,  0, 16 >;  /**< Initial Value Of The FTM Counter  */
  };

  /**
   * Capture And Compare Status
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using CH0F  = regbits< type,  0,  1 >;  /**< Channel 0 Flag  */
    using CH1F  = regbits< type,  1,  1 >;  /**< Channel 1 Flag  */
    using CH2F  = regbits< type,  2,  1 >;  /**< Channel 2 Flag  */
    using CH3F  = regbits< type,  3,  1 >;  /**< Channel 3 Flag  */
    using CH4F  = regbits< type,  4,  1 >;  /**< Channel 4 Flag  */
    using CH5F  = regbits< type,  5,  1 >;  /**< Channel 5 Flag  */
    using CH6F  = regbits< type,  6,  1 >;  /**< Channel 6 Flag  */
    using CH7F  = regbits< type,  7,  1 >;  /**< Channel 7 Flag  */
  };

  /**
   * Features Mode Selection
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0x54, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x4 >;

    using FTMEN    = regbits< type,  0,  1 >;  /**< FTM Enable                      */
    using INIT     = regbits< type,  1,  1 >;  /**< Initialize The Channels Output  */
    using WPDIS    = regbits< type,  2,  1 >;  /**< Write Protection Disable        */
    using PWMSYNC  = regbits< type,  3,  1 >;  /**< PWM Synchronization Mode        */
    using CAPTEST  = regbits< type,  4,  1 >;  /**< Capture Test Mode Enable        */
    using FAULTM   = regbits< type,  5,  2 >;  /**< Fault Control Mode              */
    using FAULTIE  = regbits< type,  7,  1 >;  /**< Fault Interrupt Enable          */
  };

  /**
   * Synchronization
   */
  struct SYNC
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using CNTMIN   = regbits< type,  0,  1 >;  /**< Minimum Loading Point Enable                                                   */
    using CNTMAX   = regbits< type,  1,  1 >;  /**< Maximum Loading Point Enable                                                   */
    using REINIT   = regbits< type,  2,  1 >;  /**< FTM Counter Reinitialization By Synchronization (FTM counter synchronization)  */
    using SYNCHOM  = regbits< type,  3,  1 >;  /**< Output Mask Synchronization                                                    */
    using TRIG0    = regbits< type,  4,  1 >;  /**< PWM Synchronization Hardware Trigger 0                                         */
    using TRIG1    = regbits< type,  5,  1 >;  /**< PWM Synchronization Hardware Trigger 1                                         */
    using TRIG2    = regbits< type,  6,  1 >;  /**< PWM Synchronization Hardware Trigger 2                                         */
    using SWSYNC   = regbits< type,  7,  1 >;  /**< PWM Synchronization Software Trigger                                           */
  };

  /**
   * Initial State For Channels Output
   */
  struct OUTINIT
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0 >;

    using CH0OI  = regbits< type,  0,  1 >;  /**< Channel 0 Output Initialization Value  */
    using CH1OI  = regbits< type,  1,  1 >;  /**< Channel 1 Output Initialization Value  */
    using CH2OI  = regbits< type,  2,  1 >;  /**< Channel 2 Output Initialization Value  */
    using CH3OI  = regbits< type,  3,  1 >;  /**< Channel 3 Output Initialization Value  */
    using CH4OI  = regbits< type,  4,  1 >;  /**< Channel 4 Output Initialization Value  */
    using CH5OI  = regbits< type,  5,  1 >;  /**< Channel 5 Output Initialization Value  */
    using CH6OI  = regbits< type,  6,  1 >;  /**< Channel 6 Output Initialization Value  */
    using CH7OI  = regbits< type,  7,  1 >;  /**< Channel 7 Output Initialization Value  */
  };

  /**
   * Output Mask
   */
  struct OUTMASK
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using CH0OM  = regbits< type,  0,  1 >;  /**< Channel 0 Output Mask  */
    using CH1OM  = regbits< type,  1,  1 >;  /**< Channel 1 Output Mask  */
    using CH2OM  = regbits< type,  2,  1 >;  /**< Channel 2 Output Mask  */
    using CH3OM  = regbits< type,  3,  1 >;  /**< Channel 3 Output Mask  */
    using CH4OM  = regbits< type,  4,  1 >;  /**< Channel 4 Output Mask  */
    using CH5OM  = regbits< type,  5,  1 >;  /**< Channel 5 Output Mask  */
    using CH6OM  = regbits< type,  6,  1 >;  /**< Channel 6 Output Mask  */
    using CH7OM  = regbits< type,  7,  1 >;  /**< Channel 7 Output Mask  */
  };

  /**
   * Function For Linked Channels
   */
  struct COMBINE
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using COMBINE0  = regbits< type,  0,  1 >;  /**< Combine Channels For n = 0                 */
    using COMP0     = regbits< type,  1,  1 >;  /**< Complement Of Channel (n) For n = 0        */
    using DECAPEN0  = regbits< type,  2,  1 >;  /**< Dual Edge Capture Mode Enable For n = 0    */
    using DECAP0    = regbits< type,  3,  1 >;  /**< Dual Edge Capture Mode Captures For n = 0  */
    using DTEN0     = regbits< type,  4,  1 >;  /**< Deadtime Enable For n = 0                  */
    using SYNCEN0   = regbits< type,  5,  1 >;  /**< Synchronization Enable For n = 0           */
    using FAULTEN0  = regbits< type,  6,  1 >;  /**< Fault Control Enable For n = 0             */
    using COMBINE1  = regbits< type,  8,  1 >;  /**< Combine Channels For n = 2                 */
    using COMP1     = regbits< type,  9,  1 >;  /**< Complement Of Channel (n) For n = 2        */
    using DECAPEN1  = regbits< type, 10,  1 >;  /**< Dual Edge Capture Mode Enable For n = 2    */
    using DECAP1    = regbits< type, 11,  1 >;  /**< Dual Edge Capture Mode Captures For n = 2  */
    using DTEN1     = regbits< type, 12,  1 >;  /**< Deadtime Enable For n = 2                  */
    using SYNCEN1   = regbits< type, 13,  1 >;  /**< Synchronization Enable For n = 2           */
    using FAULTEN1  = regbits< type, 14,  1 >;  /**< Fault Control Enable For n = 2             */
    using COMBINE2  = regbits< type, 16,  1 >;  /**< Combine Channels For n = 4                 */
    using COMP2     = regbits< type, 17,  1 >;  /**< Complement Of Channel (n) For n = 4        */
    using DECAPEN2  = regbits< type, 18,  1 >;  /**< Dual Edge Capture Mode Enable For n = 4    */
    using DECAP2    = regbits< type, 19,  1 >;  /**< Dual Edge Capture Mode Captures For n = 4  */
    using DTEN2     = regbits< type, 20,  1 >;  /**< Deadtime Enable For n = 4                  */
    using SYNCEN2   = regbits< type, 21,  1 >;  /**< Synchronization Enable For n = 4           */
    using FAULTEN2  = regbits< type, 22,  1 >;  /**< Fault Control Enable For n = 4             */
    using COMBINE3  = regbits< type, 24,  1 >;  /**< Combine Channels For n = 6                 */
    using COMP3     = regbits< type, 25,  1 >;  /**< Complement Of Channel (n) for n = 6        */
    using DECAPEN3  = regbits< type, 26,  1 >;  /**< Dual Edge Capture Mode Enable For n = 6    */
    using DECAP3    = regbits< type, 27,  1 >;  /**< Dual Edge Capture Mode Captures For n = 6  */
    using DTEN3     = regbits< type, 28,  1 >;  /**< Deadtime Enable For n = 6                  */
    using SYNCEN3   = regbits< type, 29,  1 >;  /**< Synchronization Enable For n = 6           */
    using FAULTEN3  = regbits< type, 30,  1 >;  /**< Fault Control Enable For n = 6             */
  };

  /**
   * Deadtime Insertion Control
   */
  struct DEADTIME
  : public reg< uint32_t, base_addr + 0x68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0 >;

    using DTVAL  = regbits< type,  0,  6 >;  /**< Deadtime Value            */
    using DTPS   = regbits< type,  6,  2 >;  /**< Deadtime Prescaler Value  */
  };

  /**
   * FTM External Trigger
   */
  struct EXTTRIG
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using CH2TRIG     = regbits< type,  0,  1 >;  /**< Channel 2 Trigger Enable       */
    using CH3TRIG     = regbits< type,  1,  1 >;  /**< Channel 3 Trigger Enable       */
    using CH4TRIG     = regbits< type,  2,  1 >;  /**< Channel 4 Trigger Enable       */
    using CH5TRIG     = regbits< type,  3,  1 >;  /**< Channel 5 Trigger Enable       */
    using CH0TRIG     = regbits< type,  4,  1 >;  /**< Channel 0 Trigger Enable       */
    using CH1TRIG     = regbits< type,  5,  1 >;  /**< Channel 1 Trigger Enable       */
    using INITTRIGEN  = regbits< type,  6,  1 >;  /**< Initialization Trigger Enable  */
    using TRIGF       = regbits< type,  7,  1 >;  /**< Channel Trigger Flag           */
  };

  /**
   * Channels Polarity
   */
  struct POL
  : public reg< uint32_t, base_addr + 0x70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0 >;

    using POL0  = regbits< type,  0,  1 >;  /**< Channel 0 Polarity  */
    using POL1  = regbits< type,  1,  1 >;  /**< Channel 1 Polarity  */
    using POL2  = regbits< type,  2,  1 >;  /**< Channel 2 Polarity  */
    using POL3  = regbits< type,  3,  1 >;  /**< Channel 3 Polarity  */
    using POL4  = regbits< type,  4,  1 >;  /**< Channel 4 Polarity  */
    using POL5  = regbits< type,  5,  1 >;  /**< Channel 5 Polarity  */
    using POL6  = regbits< type,  6,  1 >;  /**< Channel 6 Polarity  */
    using POL7  = regbits< type,  7,  1 >;  /**< Channel 7 Polarity  */
  };

  /**
   * Fault Mode Status
   */
  struct FMS
  : public reg< uint32_t, base_addr + 0x74, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0 >;

    using FAULTF0  = regbits< type,  0,  1 >;  /**< Fault Detection Flag 0   */
    using FAULTF1  = regbits< type,  1,  1 >;  /**< Fault Detection Flag 1   */
    using FAULTF2  = regbits< type,  2,  1 >;  /**< Fault Detection Flag 2   */
    using FAULTF3  = regbits< type,  3,  1 >;  /**< Fault Detection Flag 3   */
    using FAULTIN  = regbits< type,  5,  1 >;  /**< Fault Inputs             */
    using WPEN     = regbits< type,  6,  1 >;  /**< Write Protection Enable  */
    using FAULTF   = regbits< type,  7,  1 >;  /**< Fault Detection Flag     */
  };

  /**
   * Input Capture Filter Control
   */
  struct FILTER
  : public reg< uint32_t, base_addr + 0x78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0 >;

    using CH0FVAL  = regbits< type,  0,  4 >;  /**< Channel 0 Input Filter  */
    using CH1FVAL  = regbits< type,  4,  4 >;  /**< Channel 1 Input Filter  */
    using CH2FVAL  = regbits< type,  8,  4 >;  /**< Channel 2 Input Filter  */
    using CH3FVAL  = regbits< type, 12,  4 >;  /**< Channel 3 Input Filter  */
  };

  /**
   * Fault Control
   */
  struct FLTCTRL
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0 >;

    using FAULT0EN  = regbits< type,  0,  1 >;  /**< Fault Input 0 Enable         */
    using FAULT1EN  = regbits< type,  1,  1 >;  /**< Fault Input 1 Enable         */
    using FAULT2EN  = regbits< type,  2,  1 >;  /**< Fault Input 2 Enable         */
    using FAULT3EN  = regbits< type,  3,  1 >;  /**< Fault Input 3 Enable         */
    using FFLTR0EN  = regbits< type,  4,  1 >;  /**< Fault Input 0 Filter Enable  */
    using FFLTR1EN  = regbits< type,  5,  1 >;  /**< Fault Input 1 Filter Enable  */
    using FFLTR2EN  = regbits< type,  6,  1 >;  /**< Fault Input 2 Filter Enable  */
    using FFLTR3EN  = regbits< type,  7,  1 >;  /**< Fault Input 3 Filter Enable  */
    using FFVAL     = regbits< type,  8,  4 >;  /**< Fault Input Filter           */
  };

  /**
   * Quadrature Decoder Control And Status
   */
  struct QDCTRL
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using QUADEN     = regbits< type,  0,  1 >;  /**< Quadrature Decoder Mode Enable                       */
    using TOFDIR     = regbits< type,  1,  1 >;  /**< Timer Overflow Direction In Quadrature Decoder Mode  */
    using QUADIR     = regbits< type,  2,  1 >;  /**< FTM Counter Direction In Quadrature Decoder Mode     */
    using QUADMODE   = regbits< type,  3,  1 >;  /**< Quadrature Decoder Mode                              */
    using PHBPOL     = regbits< type,  4,  1 >;  /**< Phase B Input Polarity                               */
    using PHAPOL     = regbits< type,  5,  1 >;  /**< Phase A Input Polarity                               */
    using PHBFLTREN  = regbits< type,  6,  1 >;  /**< Phase B Input Filter Enable                          */
    using PHAFLTREN  = regbits< type,  7,  1 >;  /**< Phase A Input Filter Enable                          */
  };

  /**
   * Configuration
   */
  struct CONF
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using NUMTOF   = regbits< type,  0,  5 >;  /**< TOF Frequency            */
    using BDMMODE  = regbits< type,  6,  2 >;  /**< BDM Mode                 */
    using GTBEEN   = regbits< type,  9,  1 >;  /**< Global Time Base Enable  */
    using GTBEOUT  = regbits< type, 10,  1 >;  /**< Global Time Base Output  */
  };

  /**
   * FTM Fault Input Polarity
   */
  struct FLTPOL
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using FLT0POL  = regbits< type,  0,  1 >;  /**< Fault Input 0 Polarity  */
    using FLT1POL  = regbits< type,  1,  1 >;  /**< Fault Input 1 Polarity  */
    using FLT2POL  = regbits< type,  2,  1 >;  /**< Fault Input 2 Polarity  */
    using FLT3POL  = regbits< type,  3,  1 >;  /**< Fault Input 3 Polarity  */
  };

  /**
   * Synchronization Configuration
   */
  struct SYNCONF
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0 >;

    using HWTRIGMODE  = regbits< type,  0,  1 >;  /**< Hardware Trigger Mode                                                               */
    using CNTINC      = regbits< type,  2,  1 >;  /**< CNTIN Register Synchronization                                                      */
    using INVC        = regbits< type,  4,  1 >;  /**< INVCTRL Register Synchronization                                                    */
    using SWOC        = regbits< type,  5,  1 >;  /**< SWOCTRL Register Synchronization                                                    */
    using SYNCMODE    = regbits< type,  7,  1 >;  /**< Synchronization Mode                                                                */
    using SWRSTCNT    = regbits< type,  8,  1 >;  /**< FTM counter synchronization is activated by the software trigger.                   */
    using SWWRBUF     = regbits< type,  9,  1 >;  /**< MOD, CNTIN, and CV registers synchronization is activated by the software trigger.  */
    using SWOM        = regbits< type, 10,  1 >;  /**< Output mask synchronization is activated by the software trigger.                   */
    using SWINVC      = regbits< type, 11,  1 >;  /**< Inverting control synchronization is activated by the software trigger.             */
    using SWSOC       = regbits< type, 12,  1 >;  /**< Software output control synchronization is activated by the software trigger.       */
    using HWRSTCNT    = regbits< type, 16,  1 >;  /**< FTM counter synchronization is activated by a hardware trigger.                     */
    using HWWRBUF     = regbits< type, 17,  1 >;  /**< MOD, CNTIN, and CV registers synchronization is activated by a hardware trigger.    */
    using HWOM        = regbits< type, 18,  1 >;  /**< Output mask synchronization is activated by a hardware trigger.                     */
    using HWINVC      = regbits< type, 19,  1 >;  /**< Inverting control synchronization is activated by a hardware trigger.               */
    using HWSOC       = regbits< type, 20,  1 >;  /**< Software output control synchronization is activated by a hardware trigger.         */
  };

  /**
   * FTM Inverting Control
   */
  struct INVCTRL
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using INV0EN  = regbits< type,  0,  1 >;  /**< Pair Channels 0 Inverting Enable  */
    using INV1EN  = regbits< type,  1,  1 >;  /**< Pair Channels 1 Inverting Enable  */
    using INV2EN  = regbits< type,  2,  1 >;  /**< Pair Channels 2 Inverting Enable  */
    using INV3EN  = regbits< type,  3,  1 >;  /**< Pair Channels 3 Inverting Enable  */
  };

  /**
   * FTM Software Output Control
   */
  struct SWOCTRL
  : public reg< uint32_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0 >;

    using CH0OC   = regbits< type,  0,  1 >;  /**< Channel 0 Software Output Control Enable  */
    using CH1OC   = regbits< type,  1,  1 >;  /**< Channel 1 Software Output Control Enable  */
    using CH2OC   = regbits< type,  2,  1 >;  /**< Channel 2 Software Output Control Enable  */
    using CH3OC   = regbits< type,  3,  1 >;  /**< Channel 3 Software Output Control Enable  */
    using CH4OC   = regbits< type,  4,  1 >;  /**< Channel 4 Software Output Control Enable  */
    using CH5OC   = regbits< type,  5,  1 >;  /**< Channel 5 Software Output Control Enable  */
    using CH6OC   = regbits< type,  6,  1 >;  /**< Channel 6 Software Output Control Enable  */
    using CH7OC   = regbits< type,  7,  1 >;  /**< Channel 7 Software Output Control Enable  */
    using CH0OCV  = regbits< type,  8,  1 >;  /**< Channel 0 Software Output Control Value   */
    using CH1OCV  = regbits< type,  9,  1 >;  /**< Channel 1 Software Output Control Value   */
    using CH2OCV  = regbits< type, 10,  1 >;  /**< Channel 2 Software Output Control Value   */
    using CH3OCV  = regbits< type, 11,  1 >;  /**< Channel 3 Software Output Control Value   */
    using CH4OCV  = regbits< type, 12,  1 >;  /**< Channel 4 Software Output Control Value   */
    using CH5OCV  = regbits< type, 13,  1 >;  /**< Channel 5 Software Output Control Value   */
    using CH6OCV  = regbits< type, 14,  1 >;  /**< Channel 6 Software Output Control Value   */
    using CH7OCV  = regbits< type, 15,  1 >;  /**< Channel 7 Software Output Control Value   */
  };

  /**
   * FTM PWM Load
   */
  struct PWMLOAD
  : public reg< uint32_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0 >;

    using CH0SEL  = regbits< type,  0,  1 >;  /**< Channel 0 Select  */
    using CH1SEL  = regbits< type,  1,  1 >;  /**< Channel 1 Select  */
    using CH2SEL  = regbits< type,  2,  1 >;  /**< Channel 2 Select  */
    using CH3SEL  = regbits< type,  3,  1 >;  /**< Channel 3 Select  */
    using CH4SEL  = regbits< type,  4,  1 >;  /**< Channel 4 Select  */
    using CH5SEL  = regbits< type,  5,  1 >;  /**< Channel 5 Select  */
    using CH6SEL  = regbits< type,  6,  1 >;  /**< Channel 6 Select  */
    using CH7SEL  = regbits< type,  7,  1 >;  /**< Channel 7 Select  */
    using LDOK    = regbits< type,  9,  1 >;  /**< Load Enable       */
  };
};
} // namespace mptl

#endif // ARCH_REG_FTM2_HPP_INCLUDED
