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
//  Import from CMSIS-SVD: "Atmel/ATSAMR21E17A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMR21E17A
//  series: SAMR21
//  version: A
//  description: Atmel ATSAMR21E17A device: Cortex-M0+ Microcontroller with 128KB Flash, 32KB SRAM, 233-pin package (refer to http://www.atmel.com/devices/SAMR21E17A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TCC0_HPP_INCLUDED
#define ARCH_REG_TCC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Timer Counter Control 0
 */
struct TCC0
{
  static constexpr reg_addr_t base_addr = 0x42002000;

  /**
   * Compare and Capture
   */
  struct CC%s
  : public reg< uint32_t, base_addr + 0x44, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CC  = regbits< type,  0, 24 >;  /**< Compare and Capture value  */
  };

  /**
   * Compare and Capture Buffer
   */
  struct CCB%s
  : public reg< uint32_t, base_addr + 0x70, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CCB  = regbits< type,  0, 24 >;  /**< Compare and Capture buffer value  */
  };

  /**
   * Count
   */
  struct COUNT
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: COUNT
    using COUNT_ = regbits< type,  0, 24 >;  /**< Count Value  */
  };

  /**
   * Control A
   */
  struct CTRLA
  : public reg< uint32_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST       = regbits< type,  0,  1 >;  /**< Software Reset                                   */
    using ENABLE      = regbits< type,  1,  1 >;  /**< Enable                                           */
    using RESOLUTION  = regbits< type,  5,  2 >;  /**< Enhanced Resolution                              */
    using PRESCALER   = regbits< type,  8,  3 >;  /**< Prescaler                                        */
    using RUNSTDBY    = regbits< type, 11,  1 >;  /**< Run in Standby                                   */
    using PRESCSYNC   = regbits< type, 12,  2 >;  /**< Prescaler and Counter Synchronization Selection  */
    using ALOCK       = regbits< type, 14,  1 >;  /**< Auto Lock                                        */
    using MSYNC       = regbits< type, 15,  1 >;  /**< Master Synchronization                           */
    using CPTEN0      = regbits< type, 24,  1 >;  /**< Capture Channel 0 Enable                         */
    using CPTEN1      = regbits< type, 25,  1 >;  /**< Capture Channel 1 Enable                         */
    using CPTEN2      = regbits< type, 26,  1 >;  /**< Capture Channel 2 Enable                         */
    using CPTEN3      = regbits< type, 27,  1 >;  /**< Capture Channel 3 Enable                         */
  };

  /**
   * Control B Clear
   */
  struct CTRLBCLR
  : public reg< uint8_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DIR      = regbits< type,  0,  1 >;  /**< Counter Direction   */
    using LUPD     = regbits< type,  1,  1 >;  /**< Lock Update         */
    using ONESHOT  = regbits< type,  2,  1 >;  /**< One-Shot            */
    using IDXCMD   = regbits< type,  3,  2 >;  /**< Ramp Index Command  */
    using CMD      = regbits< type,  5,  3 >;  /**< TCC Command         */
  };

  /**
   * Control B Set
   */
  struct CTRLBSET
  : public reg< uint8_t, base_addr + 0x05, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x05, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DIR      = regbits< type,  0,  1 >;  /**< Counter Direction   */
    using LUPD     = regbits< type,  1,  1 >;  /**< Lock update         */
    using ONESHOT  = regbits< type,  2,  1 >;  /**< One-Shot            */
    using IDXCMD   = regbits< type,  3,  2 >;  /**< Ramp Index Command  */
    using CMD      = regbits< type,  5,  3 >;  /**< TCC Command         */
  };

  /**
   * Debug Control
   */
  struct DBGCTRL
  : public reg< uint8_t, base_addr + 0x1e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x1e, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBGRUN  = regbits< type,  0,  1 >;  /**< Debug Running Mode                        */
    using FDDBD   = regbits< type,  2,  1 >;  /**< Fault Detection on Debug Break Detection  */
  };

  /**
   * Driver Configuration
   */
  struct DRVCTRL
  : public reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NRE0        = regbits< type,  0,  1 >;  /**< Non-Recoverable State 0 Output Enable       */
    using NRE1        = regbits< type,  1,  1 >;  /**< Non-Recoverable State 1 Output Enable       */
    using NRE2        = regbits< type,  2,  1 >;  /**< Non-Recoverable State 2 Output Enable       */
    using NRE3        = regbits< type,  3,  1 >;  /**< Non-Recoverable State 3 Output Enable       */
    using NRE4        = regbits< type,  4,  1 >;  /**< Non-Recoverable State 4 Output Enable       */
    using NRE5        = regbits< type,  5,  1 >;  /**< Non-Recoverable State 5 Output Enable       */
    using NRE6        = regbits< type,  6,  1 >;  /**< Non-Recoverable State 6 Output Enable       */
    using NRE7        = regbits< type,  7,  1 >;  /**< Non-Recoverable State 7 Output Enable       */
    using NRV0        = regbits< type,  8,  1 >;  /**< Non-Recoverable State 0 Output Value        */
    using NRV1        = regbits< type,  9,  1 >;  /**< Non-Recoverable State 1 Output Value        */
    using NRV2        = regbits< type, 10,  1 >;  /**< Non-Recoverable State 2 Output Value        */
    using NRV3        = regbits< type, 11,  1 >;  /**< Non-Recoverable State 3 Output Value        */
    using NRV4        = regbits< type, 12,  1 >;  /**< Non-Recoverable State 4 Output Value        */
    using NRV5        = regbits< type, 13,  1 >;  /**< Non-Recoverable State 5 Output Value        */
    using NRV6        = regbits< type, 14,  1 >;  /**< Non-Recoverable State 6 Output Value        */
    using NRV7        = regbits< type, 15,  1 >;  /**< Non-Recoverable State 7 Output Value        */
    using INVEN0      = regbits< type, 16,  1 >;  /**< Output Waveform 0 Inversion                 */
    using INVEN1      = regbits< type, 17,  1 >;  /**< Output Waveform 1 Inversion                 */
    using INVEN2      = regbits< type, 18,  1 >;  /**< Output Waveform 2 Inversion                 */
    using INVEN3      = regbits< type, 19,  1 >;  /**< Output Waveform 3 Inversion                 */
    using INVEN4      = regbits< type, 20,  1 >;  /**< Output Waveform 4 Inversion                 */
    using INVEN5      = regbits< type, 21,  1 >;  /**< Output Waveform 5 Inversion                 */
    using INVEN6      = regbits< type, 22,  1 >;  /**< Output Waveform 6 Inversion                 */
    using INVEN7      = regbits< type, 23,  1 >;  /**< Output Waveform 7 Inversion                 */
    using FILTERVAL0  = regbits< type, 24,  4 >;  /**< Non-Recoverable Fault Input 0 Filter Value  */
    using FILTERVAL1  = regbits< type, 28,  4 >;  /**< Non-Recoverable Fault Input 1 Filter Value  */
  };

  /**
   * Event Control
   */
  struct EVCTRL
  : public reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EVACT0  = regbits< type,  0,  3 >;  /**< Timer/counter Input Event0 Action               */
    using EVACT1  = regbits< type,  3,  3 >;  /**< Timer/counter Input Event1 Action               */
    using CNTSEL  = regbits< type,  6,  2 >;  /**< Timer/counter Output Event Mode                 */
    using OVFEO   = regbits< type,  8,  1 >;  /**< Overflow/Underflow Output Event Enable          */
    using TRGEO   = regbits< type,  9,  1 >;  /**< Retrigger Output Event Enable                   */
    using CNTEO   = regbits< type, 10,  1 >;  /**< Timer/counter Output Event Enable               */
    using TCINV0  = regbits< type, 12,  1 >;  /**< Inverted Event 0 Input Enable                   */
    using TCINV1  = regbits< type, 13,  1 >;  /**< Inverted Event 1 Input Enable                   */
    using TCEI0   = regbits< type, 14,  1 >;  /**< Timer/counter Event 0 Input Enable              */
    using TCEI1   = regbits< type, 15,  1 >;  /**< Timer/counter Event 1 Input Enable              */
    using MCEI0   = regbits< type, 16,  1 >;  /**< Match or Capture Channel 0 Event Input Enable   */
    using MCEI1   = regbits< type, 17,  1 >;  /**< Match or Capture Channel 1 Event Input Enable   */
    using MCEI2   = regbits< type, 18,  1 >;  /**< Match or Capture Channel 2 Event Input Enable   */
    using MCEI3   = regbits< type, 19,  1 >;  /**< Match or Capture Channel 3 Event Input Enable   */
    using MCEO0   = regbits< type, 24,  1 >;  /**< Match or Capture Channel 0 Event Output Enable  */
    using MCEO1   = regbits< type, 25,  1 >;  /**< Match or Capture Channel 1 Event Output Enable  */
    using MCEO2   = regbits< type, 26,  1 >;  /**< Match or Capture Channel 2 Event Output Enable  */
    using MCEO3   = regbits< type, 27,  1 >;  /**< Match or Capture Channel 3 Event Output Enable  */
  };

  /**
   * Recoverable FaultA Configuration
   */
  struct FCTRLA
  : public reg< uint32_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC        = regbits< type,  0,  2 >;  /**< FaultA Source           */
    using KEEP       = regbits< type,  3,  1 >;  /**< FaultA Keeper           */
    using QUAL       = regbits< type,  4,  1 >;  /**< FaultA Qualification    */
    using BLANK      = regbits< type,  5,  2 >;  /**< FaultA Blanking Mode    */
    using RESTART    = regbits< type,  7,  1 >;  /**< FaultA Restart          */
    using HALT       = regbits< type,  8,  2 >;  /**< FaultA Halt Mode        */
    using CHSEL      = regbits< type, 10,  2 >;  /**< FaultA Capture Channel  */
    using CAPTURE    = regbits< type, 12,  3 >;  /**< FaultA Capture Action   */
    using BLANKVAL   = regbits< type, 16,  8 >;  /**< FaultA Blanking Time    */
    using FILTERVAL  = regbits< type, 24,  4 >;  /**< FaultA Filter Value     */
  };

  /**
   * Recoverable FaultB Configuration
   */
  struct FCTRLB
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC        = regbits< type,  0,  2 >;  /**< FaultB Source           */
    using KEEP       = regbits< type,  3,  1 >;  /**< FaultB Keeper           */
    using QUAL       = regbits< type,  4,  1 >;  /**< FaultB Qualification    */
    using BLANK      = regbits< type,  5,  2 >;  /**< FaultB Blanking Mode    */
    using RESTART    = regbits< type,  7,  1 >;  /**< FaultB Restart          */
    using HALT       = regbits< type,  8,  2 >;  /**< FaultB Halt Mode        */
    using CHSEL      = regbits< type, 10,  2 >;  /**< FaultB Capture Channel  */
    using CAPTURE    = regbits< type, 12,  3 >;  /**< FaultB Capture Action   */
    using BLANKVAL   = regbits< type, 16,  8 >;  /**< FaultB Blanking Time    */
    using FILTERVAL  = regbits< type, 24,  4 >;  /**< FaultB Filter Value     */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVF     = regbits< type,  0,  1 >;  /**< Overflow Interrupt Enable                     */
    using TRG     = regbits< type,  1,  1 >;  /**< Retrigger Interrupt Enable                    */
    using CNT     = regbits< type,  2,  1 >;  /**< Counter Interrupt Enable                      */
    using ERR     = regbits< type,  3,  1 >;  /**< Error Interrupt Enable                        */
    using DFS     = regbits< type, 11,  1 >;  /**< Non-recoverable Debug Fault Interrupt Enable  */
    using FAULTA  = regbits< type, 12,  1 >;  /**< Recoverable FaultA Interrupt Enable           */
    using FAULTB  = regbits< type, 13,  1 >;  /**< Recoverable FaultB Interrupt Enable           */
    using FAULT0  = regbits< type, 14,  1 >;  /**< Non-Recoverable Fault 0 Interrupt Enable      */
    using FAULT1  = regbits< type, 15,  1 >;  /**< Non-Recoverable Fault 1 Interrupt Enable      */
    using MC0     = regbits< type, 16,  1 >;  /**< Match or Capture Channel 0 Interrupt Enable   */
    using MC1     = regbits< type, 17,  1 >;  /**< Match or Capture Channel 1 Interrupt Enable   */
    using MC2     = regbits< type, 18,  1 >;  /**< Match or Capture Channel 2 Interrupt Enable   */
    using MC3     = regbits< type, 19,  1 >;  /**< Match or Capture Channel 3 Interrupt Enable   */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVF     = regbits< type,  0,  1 >;  /**< Overflow Interrupt Enable                     */
    using TRG     = regbits< type,  1,  1 >;  /**< Retrigger Interrupt Enable                    */
    using CNT     = regbits< type,  2,  1 >;  /**< Counter Interrupt Enable                      */
    using ERR     = regbits< type,  3,  1 >;  /**< Error Interrupt Enable                        */
    using DFS     = regbits< type, 11,  1 >;  /**< Non-Recoverable Debug Fault Interrupt Enable  */
    using FAULTA  = regbits< type, 12,  1 >;  /**< Recoverable FaultA Interrupt Enable           */
    using FAULTB  = regbits< type, 13,  1 >;  /**< Recoverable FaultB Interrupt Enable           */
    using FAULT0  = regbits< type, 14,  1 >;  /**< Non-Recoverable Fault 0 Interrupt Enable      */
    using FAULT1  = regbits< type, 15,  1 >;  /**< Non-Recoverable Fault 1 Interrupt Enabl       */
    using MC0     = regbits< type, 16,  1 >;  /**< Match or Capture Channel 0 Interrupt Enable   */
    using MC1     = regbits< type, 17,  1 >;  /**< Match or Capture Channel 1 Interrupt Enable   */
    using MC2     = regbits< type, 18,  1 >;  /**< Match or Capture Channel 2 Interrupt Enable   */
    using MC3     = regbits< type, 19,  1 >;  /**< Match or Capture Channel 3 Interrupt Enable   */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVF     = regbits< type,  0,  1 >;  /**< Overflow                     */
    using TRG     = regbits< type,  1,  1 >;  /**< Retrigger                    */
    using CNT     = regbits< type,  2,  1 >;  /**< Counter                      */
    using ERR     = regbits< type,  3,  1 >;  /**< Error                        */
    using DFS     = regbits< type, 11,  1 >;  /**< Non-Recoverable Debug Fault  */
    using FAULTA  = regbits< type, 12,  1 >;  /**< Recoverable FaultA           */
    using FAULTB  = regbits< type, 13,  1 >;  /**< Recoverable FaultB           */
    using FAULT0  = regbits< type, 14,  1 >;  /**< Non-Recoverable Fault 0      */
    using FAULT1  = regbits< type, 15,  1 >;  /**< Non-Recoverable Fault 1      */
    using MC0     = regbits< type, 16,  1 >;  /**< Match or Capture 0           */
    using MC1     = regbits< type, 17,  1 >;  /**< Match or Capture 1           */
    using MC2     = regbits< type, 18,  1 >;  /**< Match or Capture 2           */
    using MC3     = regbits< type, 19,  1 >;  /**< Match or Capture 3           */
  };

  /**
   * Pattern
   */
  struct PATT
  : public reg< uint16_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PGE0  = regbits< type,  0,  1 >;  /**< Pattern Generator 0 Output Enable  */
    using PGE1  = regbits< type,  1,  1 >;  /**< Pattern Generator 1 Output Enable  */
    using PGE2  = regbits< type,  2,  1 >;  /**< Pattern Generator 2 Output Enable  */
    using PGE3  = regbits< type,  3,  1 >;  /**< Pattern Generator 3 Output Enable  */
    using PGE4  = regbits< type,  4,  1 >;  /**< Pattern Generator 4 Output Enable  */
    using PGE5  = regbits< type,  5,  1 >;  /**< Pattern Generator 5 Output Enable  */
    using PGE6  = regbits< type,  6,  1 >;  /**< Pattern Generator 6 Output Enable  */
    using PGE7  = regbits< type,  7,  1 >;  /**< Pattern Generator 7 Output Enable  */
    using PGV0  = regbits< type,  8,  1 >;  /**< Pattern Generator 0 Output Value   */
    using PGV1  = regbits< type,  9,  1 >;  /**< Pattern Generator 1 Output Value   */
    using PGV2  = regbits< type, 10,  1 >;  /**< Pattern Generator 2 Output Value   */
    using PGV3  = regbits< type, 11,  1 >;  /**< Pattern Generator 3 Output Value   */
    using PGV4  = regbits< type, 12,  1 >;  /**< Pattern Generator 4 Output Value   */
    using PGV5  = regbits< type, 13,  1 >;  /**< Pattern Generator 5 Output Value   */
    using PGV6  = regbits< type, 14,  1 >;  /**< Pattern Generator 6 Output Value   */
    using PGV7  = regbits< type, 15,  1 >;  /**< Pattern Generator 7 Output Value   */
  };

  /**
   * Pattern Buffer
   */
  struct PATTB
  : public reg< uint16_t, base_addr + 0x64, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x64, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PGEB0  = regbits< type,  0,  1 >;  /**< Pattern Generator 0 Output Enable Buffer  */
    using PGEB1  = regbits< type,  1,  1 >;  /**< Pattern Generator 1 Output Enable Buffer  */
    using PGEB2  = regbits< type,  2,  1 >;  /**< Pattern Generator 2 Output Enable Buffer  */
    using PGEB3  = regbits< type,  3,  1 >;  /**< Pattern Generator 3 Output Enable Buffer  */
    using PGEB4  = regbits< type,  4,  1 >;  /**< Pattern Generator 4 Output Enable Buffer  */
    using PGEB5  = regbits< type,  5,  1 >;  /**< Pattern Generator 5 Output Enable Buffer  */
    using PGEB6  = regbits< type,  6,  1 >;  /**< Pattern Generator 6 Output Enable Buffer  */
    using PGEB7  = regbits< type,  7,  1 >;  /**< Pattern Generator 7 Output Enable Buffer  */
    using PGVB0  = regbits< type,  8,  1 >;  /**< Pattern Generator 0 Output Enable         */
    using PGVB1  = regbits< type,  9,  1 >;  /**< Pattern Generator 1 Output Enable         */
    using PGVB2  = regbits< type, 10,  1 >;  /**< Pattern Generator 2 Output Enable         */
    using PGVB3  = regbits< type, 11,  1 >;  /**< Pattern Generator 3 Output Enable         */
    using PGVB4  = regbits< type, 12,  1 >;  /**< Pattern Generator 4 Output Enable         */
    using PGVB5  = regbits< type, 13,  1 >;  /**< Pattern Generator 5 Output Enable         */
    using PGVB6  = regbits< type, 14,  1 >;  /**< Pattern Generator 6 Output Enable         */
    using PGVB7  = regbits< type, 15,  1 >;  /**< Pattern Generator 7 Output Enable         */
  };

  /**
   * Period
   */
  struct PER
  : public reg< uint32_t, base_addr + 0x40, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: PER
    using PER_ = regbits< type,  0, 24 >;  /**< Period Value  */
  };

  /**
   * Period Buffer
   */
  struct PERB
  : public reg< uint32_t, base_addr + 0x6c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: PERB
    using PERB_ = regbits< type,  0, 24 >;  /**< Period Value  */
  };

  /**
   * Status
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000001 >;

    using STOP      = regbits< type,  0,  1 >;  /**< Stop                               */
    using IDX       = regbits< type,  1,  1 >;  /**< Ramp                               */
    using DFS       = regbits< type,  3,  1 >;  /**< Non-Recoverable Debug Fault State  */
    using PATTBV    = regbits< type,  5,  1 >;  /**< Pattern Buffer Valid               */
    using WAVEBV    = regbits< type,  6,  1 >;  /**< Wave Buffer Valid                  */
    using PERBV     = regbits< type,  7,  1 >;  /**< Period Buffer Valid                */
    using FAULTAIN  = regbits< type,  8,  1 >;  /**< Recoverable FaultA Input           */
    using FAULTBIN  = regbits< type,  9,  1 >;  /**< Recoverable FaultB Input           */
    using FAULT0IN  = regbits< type, 10,  1 >;  /**< Non-Recoverable Fault0 Input       */
    using FAULT1IN  = regbits< type, 11,  1 >;  /**< Non-Recoverable Fault1 Input       */
    using FAULTA    = regbits< type, 12,  1 >;  /**< Recoverable FaultA State           */
    using FAULTB    = regbits< type, 13,  1 >;  /**< Recoverable FaultB State           */
    using FAULT0    = regbits< type, 14,  1 >;  /**< Non-Recoverable Fault 0 State      */
    using FAULT1    = regbits< type, 15,  1 >;  /**< Non-Recoverable Fault 1 State      */
    using CCBV0     = regbits< type, 16,  1 >;  /**< Compare Channel 0 Buffer Valid     */
    using CCBV1     = regbits< type, 17,  1 >;  /**< Compare Channel 1 Buffer Valid     */
    using CCBV2     = regbits< type, 18,  1 >;  /**< Compare Channel 2 Buffer Valid     */
    using CCBV3     = regbits< type, 19,  1 >;  /**< Compare Channel 3 Buffer Valid     */
    using CMP0      = regbits< type, 24,  1 >;  /**< Compare Channel 0 Value            */
    using CMP1      = regbits< type, 25,  1 >;  /**< Compare Channel 1 Value            */
    using CMP2      = regbits< type, 26,  1 >;  /**< Compare Channel 2 Value            */
    using CMP3      = regbits< type, 27,  1 >;  /**< Compare Channel 3 Value            */
  };

  /**
   * Synchronization Busy
   */
  struct SYNCBUSY
  : public reg< uint32_t, base_addr + 0x08, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x08, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST   = regbits< type,  0,  1 >;  /**< Swrst Busy                     */
    using ENABLE  = regbits< type,  1,  1 >;  /**< Enable Busy                    */
    using CTRLB   = regbits< type,  2,  1 >;  /**< Ctrlb Busy                     */
    using STATUS  = regbits< type,  3,  1 >;  /**< Status Busy                    */
    using COUNT   = regbits< type,  4,  1 >;  /**< Count Busy                     */
    using PATT    = regbits< type,  5,  1 >;  /**< Pattern Busy                   */
    using WAVE    = regbits< type,  6,  1 >;  /**< Wave Busy                      */
    using PER     = regbits< type,  7,  1 >;  /**< Period busy                    */
    using CC0     = regbits< type,  8,  1 >;  /**< Compare Channel Buffer 0 Busy  */
    using CC1     = regbits< type,  9,  1 >;  /**< Compare Channel Buffer 1 Busy  */
    using CC2     = regbits< type, 10,  1 >;  /**< Compare Channel Buffer 2 Busy  */
    using CC3     = regbits< type, 11,  1 >;  /**< Compare Channel Buffer 3 Busy  */
    using PATTB   = regbits< type, 16,  1 >;  /**< Pattern Buffer Busy            */
    using WAVEB   = regbits< type, 17,  1 >;  /**< Wave Buffer Busy               */
    using PERB    = regbits< type, 18,  1 >;  /**< Period Buffer Busy             */
    using CCB0    = regbits< type, 19,  1 >;  /**< Compare Channel Buffer 0 Busy  */
    using CCB1    = regbits< type, 20,  1 >;  /**< Compare Channel Buffer 1 Busy  */
    using CCB2    = regbits< type, 21,  1 >;  /**< Compare Channel Buffer 2 Busy  */
    using CCB3    = regbits< type, 22,  1 >;  /**< Compare Channel Buffer 3 Busy  */
  };

  /**
   * Waveform Control
   */
  struct WAVE
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WAVEGEN  = regbits< type,  0,  3 >;  /**< Waveform Generation        */
    using RAMP     = regbits< type,  4,  2 >;  /**< Ramp Mode                  */
    using CIPEREN  = regbits< type,  7,  1 >;  /**< Circular period Enable     */
    using CICCEN0  = regbits< type,  8,  1 >;  /**< Circular Channel 0 Enable  */
    using CICCEN1  = regbits< type,  9,  1 >;  /**< Circular Channel 1 Enable  */
    using CICCEN2  = regbits< type, 10,  1 >;  /**< Circular Channel 2 Enable  */
    using CICCEN3  = regbits< type, 11,  1 >;  /**< Circular Channel 3 Enable  */
    using POL0     = regbits< type, 16,  1 >;  /**< Channel 0 Polarity         */
    using POL1     = regbits< type, 17,  1 >;  /**< Channel 1 Polarity         */
    using POL2     = regbits< type, 18,  1 >;  /**< Channel 2 Polarity         */
    using POL3     = regbits< type, 19,  1 >;  /**< Channel 3 Polarity         */
    using SWAP0    = regbits< type, 24,  1 >;  /**< Swap DTI Output Pair 0     */
    using SWAP1    = regbits< type, 25,  1 >;  /**< Swap DTI Output Pair 1     */
    using SWAP2    = regbits< type, 26,  1 >;  /**< Swap DTI Output Pair 2     */
    using SWAP3    = regbits< type, 27,  1 >;  /**< Swap DTI Output Pair 3     */
  };

  /**
   * Waveform Control Buffer
   */
  struct WAVEB
  : public reg< uint32_t, base_addr + 0x68, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WAVEGENB  = regbits< type,  0,  3 >;  /**< Waveform Generation Buffer        */
    using RAMPB     = regbits< type,  4,  2 >;  /**< Ramp Mode Buffer                  */
    using CIPERENB  = regbits< type,  7,  1 >;  /**< Circular Period Enable Buffer     */
    using CICCENB0  = regbits< type,  8,  1 >;  /**< Circular Channel 0 Enable Buffer  */
    using CICCENB1  = regbits< type,  9,  1 >;  /**< Circular Channel 1 Enable Buffer  */
    using CICCENB2  = regbits< type, 10,  1 >;  /**< Circular Channel 2 Enable Buffer  */
    using CICCENB3  = regbits< type, 11,  1 >;  /**< Circular Channel 3 Enable Buffer  */
    using POLB0     = regbits< type, 16,  1 >;  /**< Channel 0 Polarity Buffer         */
    using POLB1     = regbits< type, 17,  1 >;  /**< Channel 1 Polarity Buffer         */
    using POLB2     = regbits< type, 18,  1 >;  /**< Channel 2 Polarity Buffer         */
    using POLB3     = regbits< type, 19,  1 >;  /**< Channel 3 Polarity Buffer         */
    using SWAPB0    = regbits< type, 24,  1 >;  /**< Swap DTI Output Pair 0 Buffer     */
    using SWAPB1    = regbits< type, 25,  1 >;  /**< Swap DTI Output Pair 1 Buffer     */
    using SWAPB2    = regbits< type, 26,  1 >;  /**< Swap DTI Output Pair 2 Buffer     */
    using SWAPB3    = regbits< type, 27,  1 >;  /**< Swap DTI Output Pair 3 Buffer     */
  };

  /**
   * Waveform Extension Configuration
   */
  struct WEXCTRL
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OTMX    = regbits< type,  0,  2 >;  /**< Output Matrix                           */
    using DTIEN0  = regbits< type,  8,  1 >;  /**< Dead-time Insertion Generator 0 Enable  */
    using DTIEN1  = regbits< type,  9,  1 >;  /**< Dead-time Insertion Generator 1 Enable  */
    using DTIEN2  = regbits< type, 10,  1 >;  /**< Dead-time Insertion Generator 2 Enable  */
    using DTIEN3  = regbits< type, 11,  1 >;  /**< Dead-time Insertion Generator 3 Enable  */
    using DTLS    = regbits< type, 16,  8 >;  /**< Dead-time Low Side Outputs Value        */
    using DTHS    = regbits< type, 24,  8 >;  /**< Dead-time High Side Outputs Value       */
  };
};
} // namespace mptl

#endif // ARCH_REG_TCC0_HPP_INCLUDED
