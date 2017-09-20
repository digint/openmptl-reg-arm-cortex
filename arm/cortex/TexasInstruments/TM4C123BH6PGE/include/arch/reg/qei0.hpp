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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123BH6PGE.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123BH6PGE
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

#ifndef ARCH_REG_QEI0_HPP_INCLUDED
#define ARCH_REG_QEI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for QEI0 peripheral
 */
struct QEI0
{
  static constexpr reg_addr_t base_addr = 0x4002c000;

  /**
   * QEI Control
   */
  struct CTL
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_CTL_ENABLE   = regbits< type,  0,  1 >;  /**< Enable QEI                   */
    using QEI_CTL_SWAP     = regbits< type,  1,  1 >;  /**< Swap Signals                 */
    using QEI_CTL_SIGMODE  = regbits< type,  2,  1 >;  /**< Signal Mode                  */
    using QEI_CTL_CAPMODE  = regbits< type,  3,  1 >;  /**< Capture Mode                 */
    using QEI_CTL_RESMODE  = regbits< type,  4,  1 >;  /**< Reset Mode                   */
    using QEI_CTL_VELEN    = regbits< type,  5,  1 >;  /**< Capture Velocity             */
    using QEI_CTL_VELDIV   = regbits< type,  6,  3 >;  /**< Predivide Velocity           */
    using QEI_CTL_INVA     = regbits< type,  9,  1 >;  /**< Invert PhA                   */
    using QEI_CTL_INVB     = regbits< type, 10,  1 >;  /**< Invert PhB                   */
    using QEI_CTL_INVI     = regbits< type, 11,  1 >;  /**< Invert Index Pulse           */
    using QEI_CTL_STALLEN  = regbits< type, 12,  1 >;  /**< Stall QEI                    */
    using QEI_CTL_FILTEN   = regbits< type, 13,  1 >;  /**< Enable Input Filter          */
    using QEI_CTL_FILTCNT  = regbits< type, 16,  4 >;  /**< Input Filter Prescale Count  */
  };

  /**
   * QEI Status
   */
  struct STAT
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_STAT_ERROR      = regbits< type,  0,  1 >;  /**< Error Detected         */
    using QEI_STAT_DIRECTION  = regbits< type,  1,  1 >;  /**< Direction of Rotation  */
  };

  /**
   * QEI Position
   */
  struct POS
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_POS  = regbits< type,  0, 32 >;  /**< Current Position Integrator Value  */
  };

  /**
   * QEI Maximum Position
   */
  struct MAXPOS
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_MAXPOS  = regbits< type,  0, 32 >;  /**< Maximum Position Integrator Value  */
  };

  /**
   * QEI Timer Load
   */
  struct LOAD
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_LOAD  = regbits< type,  0, 32 >;  /**< Velocity Timer Load Value  */
  };

  /**
   * QEI Timer
   */
  struct TIME
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_TIME  = regbits< type,  0, 32 >;  /**< Velocity Timer Current Value  */
  };

  /**
   * QEI Velocity Counter
   */
  struct COUNT
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_COUNT  = regbits< type,  0, 32 >;  /**< Velocity Pulse Count  */
  };

  /**
   * QEI Velocity
   */
  struct SPEED
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_SPEED  = regbits< type,  0, 32 >;  /**< Velocity  */
  };

  /**
   * QEI Interrupt Enable
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_INTEN_INDEX  = regbits< type,  0,  1 >;  /**< Index Pulse Detected Interrupt Enable  */
    using QEI_INTEN_TIMER  = regbits< type,  1,  1 >;  /**< Timer Expires Interrupt Enable         */
    using QEI_INTEN_DIR    = regbits< type,  2,  1 >;  /**< Direction Change Interrupt Enable      */
    using QEI_INTEN_ERROR  = regbits< type,  3,  1 >;  /**< Phase Error Interrupt Enable           */
  };

  /**
   * QEI Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_RIS_INDEX  = regbits< type,  0,  1 >;  /**< Index Pulse Asserted       */
    using QEI_RIS_TIMER  = regbits< type,  1,  1 >;  /**< Velocity Timer Expired     */
    using QEI_RIS_DIR    = regbits< type,  2,  1 >;  /**< Direction Change Detected  */
    using QEI_RIS_ERROR  = regbits< type,  3,  1 >;  /**< Phase Error Detected       */
  };

  /**
   * QEI Interrupt Status and Clear
   */
  struct ISC
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using QEI_ISC_INDEX  = regbits< type,  0,  1 >;  /**< Index Pulse Interrupt             */
    using QEI_ISC_TIMER  = regbits< type,  1,  1 >;  /**< Velocity Timer Expired Interrupt  */
    using QEI_ISC_DIR    = regbits< type,  2,  1 >;  /**< Direction Change Interrupt        */
    using QEI_ISC_ERROR  = regbits< type,  3,  1 >;  /**< Phase Error Interrupt             */
  };
};
} // namespace mptl

#endif // ARCH_REG_QEI0_HPP_INCLUDED
