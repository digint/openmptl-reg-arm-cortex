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
//  Import from CMSIS-SVD: "Freescale/MK20D7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK20D7
//  series: Kinetis_K
//  version: 1.6
//  description: MK20D7 Freescale Microcontroller
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
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using DISMCYCINT  = regbits< type,  0,  1 >;  /**< Disables interruption of multi-cycle instructions.             */
    using DISDEFWBUF  = regbits< type,  1,  1 >;  /**< Disables write buffer use during default memory map accesses.  */
    using DISFOLD     = regbits< type,  2,  1 >;  /**< Disables folding of IT instructions.                           */
  };

  /**
   * CPUID Base Register
   */
  struct CPUID
  : public reg< uint32_t, base_addr + 0xd00, ro, 0x410FC240 >
  {
    using type = reg< uint32_t, base_addr + 0xd00, ro, 0x410FC240 >;

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

    using VECTACTIVE   = regbits< type,  0,  9 >;  /**< Active exception number                                             */
    using RETTOBASE    = regbits< type, 11,  1 >;  /**< no description available                                            */
    using VECTPENDING  = regbits< type, 12,  6 >;  /**< Exception number of the highest priority pending enabled exception  */
    using ISRPENDING   = regbits< type, 22,  1 >;  /**< no description available                                            */
    using ISRPREEMPT   = regbits< type, 23,  1 >;  /**< no description available                                            */
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

    using VECTRESET      = regbits< type,  0,  1 >;  /**< no description available                                                                                */
    using VECTCLRACTIVE  = regbits< type,  1,  1 >;  /**< no description available                                                                                */
    using SYSRESETREQ    = regbits< type,  2,  1 >;  /**< no description available                                                                                */
    using PRIGROUP       = regbits< type,  8,  3 >;  /**< Interrupt priority grouping field. This field determines the split of group priority from subpriority.  */
    using ENDIANNESS     = regbits< type, 15,  1 >;  /**< no description available                                                                                */
    using VECTKEY        = regbits< type, 16, 16 >;  /**< Register key                                                                                            */
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
  : public reg< uint32_t, base_addr + 0xd14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd14, rw, 0 >;

    using NONBASETHRDENA  = regbits< type,  0,  1 >;  /**< no description available                                                                                 */
    using USERSETMPEND    = regbits< type,  1,  1 >;  /**< Enables unprivileged software access to the STIR                                                         */
    using UNALIGN_TRP     = regbits< type,  3,  1 >;  /**< Enables unaligned access traps                                                                           */
    using DIV_0_TRP       = regbits< type,  4,  1 >;  /**< Enables faulting or halting when the processor executes an SDIV or UDIV instruction with a divisor of 0  */
    using BFHFNMIGN       = regbits< type,  8,  1 >;  /**< Enables handlers with priority -1 or -2 to ignore data BusFaults caused by load and store instructions.  */
    using STKALIGN        = regbits< type,  9,  1 >;  /**< Indicates stack alignment on exception entry                                                             */
  };

  /**
   * System Handler Priority Register 1
   */
  struct SHPR1
  : public reg< uint32_t, base_addr + 0xd18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd18, rw, 0 >;

    using PRI_4  = regbits< type,  0,  8 >;  /**< Priority of system handler 4, MemManage   */
    using PRI_5  = regbits< type,  8,  8 >;  /**< Priority of system handler 5, BusFault    */
    using PRI_6  = regbits< type, 16,  8 >;  /**< Priority of system handler 6, UsageFault  */
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

    using MEMFAULTACT     = regbits< type,  0,  1 >;  /**< no description available  */
    using BUSFAULTACT     = regbits< type,  1,  1 >;  /**< no description available  */
    using USGFAULTACT     = regbits< type,  3,  1 >;  /**< no description available  */
    using SVCALLACT       = regbits< type,  7,  1 >;  /**< no description available  */
    using MONITORACT      = regbits< type,  8,  1 >;  /**< no description available  */
    using PENDSVACT       = regbits< type, 10,  1 >;  /**< no description available  */
    using SYSTICKACT      = regbits< type, 11,  1 >;  /**< no description available  */
    using USGFAULTPENDED  = regbits< type, 12,  1 >;  /**< no description available  */
    using MEMFAULTPENDED  = regbits< type, 13,  1 >;  /**< no description available  */
    using BUSFAULTPENDED  = regbits< type, 14,  1 >;  /**< no description available  */
    using SVCALLPENDED    = regbits< type, 15,  1 >;  /**< no description available  */
    using MEMFAULTENA     = regbits< type, 16,  1 >;  /**< no description available  */
    using BUSFAULTENA     = regbits< type, 17,  1 >;  /**< no description available  */
    using USGFAULTENA     = regbits< type, 18,  1 >;  /**< no description available  */
  };

  /**
   * Configurable Fault Status Registers
   */
  struct CFSR
  : public reg< uint32_t, base_addr + 0xd28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd28, rw, 0 >;

    using IACCVIOL     = regbits< type,  0,  1 >;  /**< no description available  */
    using DACCVIOL     = regbits< type,  1,  1 >;  /**< no description available  */
    using MUNSTKERR    = regbits< type,  3,  1 >;  /**< no description available  */
    using MSTKERR      = regbits< type,  4,  1 >;  /**< no description available  */
    using MLSPERR      = regbits< type,  5,  1 >;  /**< no description available  */
    using MMARVALID    = regbits< type,  7,  1 >;  /**< no description available  */
    using IBUSERR      = regbits< type,  8,  1 >;  /**< no description available  */
    using PRECISERR    = regbits< type,  9,  1 >;  /**< no description available  */
    using IMPRECISERR  = regbits< type, 10,  1 >;  /**< no description available  */
    using UNSTKERR     = regbits< type, 11,  1 >;  /**< no description available  */
    using STKERR       = regbits< type, 12,  1 >;  /**< no description available  */
    using LSPERR       = regbits< type, 13,  1 >;  /**< no description available  */
    using BFARVALID    = regbits< type, 15,  1 >;  /**< no description available  */
    using UNDEFINSTR   = regbits< type, 16,  1 >;  /**< no description available  */
    using INVSTATE     = regbits< type, 17,  1 >;  /**< no description available  */
    using INVPC        = regbits< type, 18,  1 >;  /**< no description available  */
    using NOCP         = regbits< type, 19,  1 >;  /**< no description available  */
    using UNALIGNED    = regbits< type, 24,  1 >;  /**< no description available  */
    using DIVBYZERO    = regbits< type, 25,  1 >;  /**< no description available  */
  };

  /**
   * HardFault Status register
   */
  struct HFSR
  : public reg< uint32_t, base_addr + 0xd2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd2c, rw, 0 >;

    using VECTTBL   = regbits< type,  1,  1 >;  /**< no description available  */
    using FORCED    = regbits< type, 30,  1 >;  /**< no description available  */
    using DEBUGEVT  = regbits< type, 31,  1 >;  /**< no description available  */
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

  /**
   * MemManage Address Register
   */
  struct MMFAR
  : public reg< uint32_t, base_addr + 0xd34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd34, rw, 0 >;

    using ADDRESS  = regbits< type,  0, 32 >;  /**< Address of MemManage fault location  */
  };

  /**
   * BusFault Address Register
   */
  struct BFAR
  : public reg< uint32_t, base_addr + 0xd38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd38, rw, 0 >;

    using ADDRESS  = regbits< type,  0, 32 >;  /**< Address of the BusFault location  */
  };

  /**
   * Auxiliary Fault Status Register
   */
  struct AFSR
  : public reg< uint32_t, base_addr + 0xd3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd3c, rw, 0 >;

    using AUXFAULT  = regbits< type,  0, 32 >;  /**< Latched version of the AUXFAULT inputs  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSTEMCONTROL_HPP_INCLUDED
