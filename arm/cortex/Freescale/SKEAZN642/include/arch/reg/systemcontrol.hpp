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
//  Import from CMSIS-SVD: "Freescale/SKEAZN642.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZN642
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZN642 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SYSTEMCONTROL_HPP_INCLUDED
#define ARCH_REG_SYSTEMCONTROL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System Control Registers
 */
struct SystemControl
{
  static constexpr reg_addr_t base_addr = 0xe000e000;

  /**
   * Auxiliary Control Register,
   */
  struct ACTLR
  : public reg< uint32_t, base_addr + 0x8, ro, 0 >
  {
  };

  /**
   * CPUID Base Register
   */
  struct CPUID
  : public reg< uint32_t, base_addr + 0xd00, ro, 0x410CC600 >
  {
    using type = reg< uint32_t, base_addr + 0xd00, ro, 0x410CC600 >;

    using REVISION     = regbits< type,  0,  4 >;  /**< Indicates patch release: 0x0 = Patch 0          */
    using PARTNO       = regbits< type,  4, 12 >;  /**< Indicates part number                           */
    using VARIANT      = regbits< type, 20,  4 >;  /**< Indicates processor revision: 0x2 = Revision 2  */
    using IMPLEMENTER  = regbits< type, 24,  8 >;  /**< Implementer code                                */
  };

  /**
   * Interrupt Control and State Register
   */
  struct ICSR
  : public reg< uint32_t, base_addr + 0xd04, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd04, rw, 0 >;

    using VECTACTIVE   = regbits< type,  0,  6 >;  /**< Active exception number                                             */
    using VECTPENDING  = regbits< type, 12,  6 >;  /**< Exception number of the highest priority pending enabled exception  */
    using ISRPENDING   = regbits< type, 22,  1 >;  /**< no description available                                            */
    using PENDSTCLR    = regbits< type, 25,  1 >;  /**< no description available                                            */
    using PENDSTSET    = regbits< type, 26,  1 >;  /**< no description available                                            */
    using PENDSVCLR    = regbits< type, 27,  1 >;  /**< no description available                                            */
    using PENDSVSET    = regbits< type, 28,  1 >;  /**< no description available                                            */
    using NMIPENDSET   = regbits< type, 31,  1 >;  /**< no description available                                            */
  };

  /**
   * Vector Table Offset Register
   */
  struct VTOR
  : public reg< uint32_t, base_addr + 0xd08, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd08, rw, 0 >;

    using TBLOFF  = regbits< type,  7, 25 >;  /**< Vector table base offset  */
  };

  /**
   * Application Interrupt and Reset Control Register
   */
  struct AIRCR
  : public reg< uint32_t, base_addr + 0xd0c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd0c, rw, 0 >;

    using VECTCLRACTIVE  = regbits< type,  1,  1 >;  /**< no description available  */
    using SYSRESETREQ    = regbits< type,  2,  1 >;  /**< no description available  */
    using ENDIANNESS     = regbits< type, 15,  1 >;  /**< no description available  */
    using VECTKEY        = regbits< type, 16, 16 >;  /**< Register key              */
  };

  /**
   * System Control Register
   */
  struct SCR
  : public reg< uint32_t, base_addr + 0xd10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd10, rw, 0 >;

    using SLEEPONEXIT  = regbits< type,  1,  1 >;  /**< no description available  */
    using SLEEPDEEP    = regbits< type,  2,  1 >;  /**< no description available  */
    using SEVONPEND    = regbits< type,  4,  1 >;  /**< no description available  */
  };

  /**
   * Configuration and Control Register
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0xd14, ro, 0x208 >
  {
    using type = reg< uint32_t, base_addr + 0xd14, ro, 0x208 >;

    using UNALIGN_TRP  = regbits< type,  3,  1 >;  /**< Always reads as one, indicates that all unaligned accesses generate a HardFault  */
    using STKALIGN     = regbits< type,  9,  1 >;  /**< Indicates stack alignment on exception entry                                     */
  };

  /**
   * System Handler Priority Register 2
   */
  struct SHPR2
  : public reg< uint32_t, base_addr + 0xd1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd1c, rw, 0 >;

    using PRI_11  = regbits< type, 24,  8 >;  /**< Priority of system handler 11, SVCall  */
  };

  /**
   * System Handler Priority Register 3
   */
  struct SHPR3
  : public reg< uint32_t, base_addr + 0xd20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd20, rw, 0 >;

    using PRI_14  = regbits< type, 16,  8 >;  /**< Priority of system handler 14, PendSV             */
    using PRI_15  = regbits< type, 24,  8 >;  /**< Priority of system handler 15, SysTick exception  */
  };

  /**
   * System Handler Control and State Register
   */
  struct SHCSR
  : public reg< uint32_t, base_addr + 0xd24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd24, rw, 0 >;

    using SVCALLPENDED  = regbits< type, 15,  1 >;  /**< no description available  */
  };

  /**
   * Debug Fault Status Register
   */
  struct DFSR
  : public reg< uint32_t, base_addr + 0xd30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd30, rw, 0 >;

    using HALTED    = regbits< type,  0,  1 >;  /**< no description available  */
    using BKPT      = regbits< type,  1,  1 >;  /**< no description available  */
    using DWTTRAP   = regbits< type,  2,  1 >;  /**< no description available  */
    using VCATCH    = regbits< type,  3,  1 >;  /**< no description available  */
    using EXTERNAL  = regbits< type,  4,  1 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSTEMCONTROL_HPP_INCLUDED
