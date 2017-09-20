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

#ifndef ARCH_REG_HRTIM_MASTER_HPP_INCLUDED
#define ARCH_REG_HRTIM_MASTER_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * High Resolution Timer: Master Timers
 */
struct HRTIM_Master
{
  static constexpr reg_addr_t base_addr = 0x40017400;

  /**
   * Master Timer Control Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using BRSTDMA    = regbits< type, 30,  2 >;  /**< Burst DMA Update                */
    using MREPU      = regbits< type, 29,  1 >;  /**< Master Timer Repetition update  */
    using PREEN      = regbits< type, 27,  1 >;  /**< Preload enable                  */
    using DACSYNC    = regbits< type, 25,  2 >;  /**< AC Synchronization              */
    using TECEN      = regbits< type, 21,  1 >;  /**< Timer E counter enable          */
    using TDCEN      = regbits< type, 20,  1 >;  /**< Timer D counter enable          */
    using TCCEN      = regbits< type, 19,  1 >;  /**< Timer C counter enable          */
    using TBCEN      = regbits< type, 18,  1 >;  /**< Timer B counter enable          */
    using TACEN      = regbits< type, 17,  1 >;  /**< Timer A counter enable          */
    using MCEN       = regbits< type, 16,  1 >;  /**< Master Counter enable           */
    using SYNC_SRC   = regbits< type, 14,  2 >;  /**< Synchronization source          */
    using SYNC_OUT   = regbits< type, 12,  2 >;  /**< Synchronization output          */
    using SYNCSTRTM  = regbits< type, 11,  1 >;  /**< Synchronization Starts Master   */
    using SYNCRSTM   = regbits< type, 10,  1 >;  /**< Synchronization Resets Master   */
    using SYNC_IN    = regbits< type,  8,  2 >;  /**< ynchronization input            */
    using HALF       = regbits< type,  5,  1 >;  /**< Half mode enable                */
    using RETRIG     = regbits< type,  4,  1 >;  /**< Master Re-triggerable mode      */
    using CONT       = regbits< type,  3,  1 >;  /**< Master Continuous mode          */
    using CK_PSC     = regbits< type,  0,  3 >;  /**< HRTIM Master Clock prescaler    */
  };

  /**
   * Master Timer Interrupt Status Register
   */
  struct MISR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using MUPD   = regbits< type,  6,  1 >;  /**< Master Update Interrupt Flag      */
    using SYNC   = regbits< type,  5,  1 >;  /**< Sync Input Interrupt Flag         */
    using MREP   = regbits< type,  4,  1 >;  /**< Master Repetition Interrupt Flag  */
    using MCMP4  = regbits< type,  3,  1 >;  /**< Master Compare 4 Interrupt Flag   */
    using MCMP3  = regbits< type,  2,  1 >;  /**< Master Compare 3 Interrupt Flag   */
    using MCMP2  = regbits< type,  1,  1 >;  /**< Master Compare 2 Interrupt Flag   */
    using MCMP1  = regbits< type,  0,  1 >;  /**< Master Compare 1 Interrupt Flag   */
  };

  /**
   * Master Timer Interrupt Clear Register
   */
  struct MICR
  : public reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >;

    using MUPDC   = regbits< type,  6,  1 >;  /**< Master update Interrupt flag clear     */
    using SYNCC   = regbits< type,  5,  1 >;  /**< Sync Input Interrupt flag clear        */
    using MREPC   = regbits< type,  4,  1 >;  /**< Repetition Interrupt flag clear        */
    using MCMP4C  = regbits< type,  3,  1 >;  /**< Master Compare 4 Interrupt flag clear  */
    using MCMP3C  = regbits< type,  2,  1 >;  /**< Master Compare 3 Interrupt flag clear  */
    using MCMP2C  = regbits< type,  1,  1 >;  /**< Master Compare 2 Interrupt flag clear  */
    using MCMP1C  = regbits< type,  0,  1 >;  /**< Master Compare 1 Interrupt flag clear  */
  };

  /**
   * MDIER4
   */
  struct MDIER4
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using MUPDDE   = regbits< type, 22,  1 >;  /**< MUPDDE   */
    using SYNCDE   = regbits< type, 21,  1 >;  /**< SYNCDE   */
    using MREPDE   = regbits< type, 20,  1 >;  /**< MREPDE   */
    using MCMP4DE  = regbits< type, 19,  1 >;  /**< MCMP4DE  */
    using MCMP3DE  = regbits< type, 18,  1 >;  /**< MCMP3DE  */
    using MCMP2DE  = regbits< type, 17,  1 >;  /**< MCMP2DE  */
    using MCMP1DE  = regbits< type, 16,  1 >;  /**< MCMP1DE  */
    using MUPDIE   = regbits< type,  6,  1 >;  /**< MUPDIE   */
    using SYNCIE   = regbits< type,  5,  1 >;  /**< SYNCIE   */
    using MREPIE   = regbits< type,  4,  1 >;  /**< MREPIE   */
    using MCMP4IE  = regbits< type,  3,  1 >;  /**< MCMP4IE  */
    using MCMP3IE  = regbits< type,  2,  1 >;  /**< MCMP3IE  */
    using MCMP2IE  = regbits< type,  1,  1 >;  /**< MCMP2IE  */
    using MCMP1IE  = regbits< type,  0,  1 >;  /**< MCMP1IE  */
  };

  /**
   * Master Timer Counter Register
   */
  struct MCNTR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using MCNT  = regbits< type,  0, 16 >;  /**< Counter value  */
  };

  /**
   * Master Timer Period Register
   */
  struct MPER
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000FFFF >;

    // fixme: Field name equals parent register name: MPER
    using MPER_ = regbits< type,  0, 16 >;  /**< Master Timer Period value  */
  };

  /**
   * Master Timer Repetition Register
   */
  struct MREP
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: MREP
    using MREP_ = regbits< type,  0,  8 >;  /**< Master Timer Repetition counter value  */
  };

  /**
   * Master Timer Compare 1 Register
   */
  struct MCMP1R
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using MCMP1  = regbits< type,  0, 16 >;  /**< Master Timer Compare 1 value  */
  };

  /**
   * Master Timer Compare 2 Register
   */
  struct MCMP2R
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using MCMP2  = regbits< type,  0, 16 >;  /**< Master Timer Compare 2 value  */
  };

  /**
   * Master Timer Compare 3 Register
   */
  struct MCMP3R
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using MCMP3  = regbits< type,  0, 16 >;  /**< Master Timer Compare 3 value  */
  };

  /**
   * Master Timer Compare 4 Register
   */
  struct MCMP4R
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using MCMP4  = regbits< type,  0, 16 >;  /**< Master Timer Compare 4 value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_HRTIM_MASTER_HPP_INCLUDED
