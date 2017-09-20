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
//  Import from CMSIS-SVD: "Freescale/MKV56F24.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV56F24
//  series: Kinetis_V
//  version: 1.6
//  description: MKV56F24 Freescale Microcontroller
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
 * System Control Block
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

    using REVISION      = regbits< type,  0,  4 >;  /**< Indicates patch release: 0x0 = Patch 0          */
    using PARTNO        = regbits< type,  4, 12 >;  /**< Indicates part number                           */
    using ARCHITECTURE  = regbits< type, 16,  4 >;  /**< ARCHITECTURE                                    */
    using VARIANT       = regbits< type, 20,  4 >;  /**< Indicates processor revision: 0x2 = Revision 2  */
    using IMPLEMENTER   = regbits< type, 24,  8 >;  /**< Implementer code                                */
  };

  /**
   * Interrupt Control and State Register
   */
  struct ICSR
  : public reg< uint32_t, base_addr + 0xd04, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd04, rw, 0 >;

    using VECTACTIVE   = regbits< type,  0,  9 >;  /**< Active exception number                                                               */
    using RETTOBASE    = regbits< type, 11,  1 >;  /**< Indicates whether there are preempted active exceptions                               */
    using VECTPENDING  = regbits< type, 12,  9 >;  /**< Exception number of the highest priority pending enabled exception                    */
    using ISRPENDING   = regbits< type, 22,  1 >;  /**< Interrupt pending flag, excluding NMI and Faults                                      */
    using ISRPREEMPT   = regbits< type, 23,  1 >;  /**< Indicates whether a pending exception will be serviced on exit from debug halt state  */
    using PENDSTCLR    = regbits< type, 25,  1 >;  /**< SysTick exception clear-pending bit                                                   */
    using PENDSTSET    = regbits< type, 26,  1 >;  /**< SysTick exception set-pending bit                                                     */
    using PENDSVCLR    = regbits< type, 27,  1 >;  /**< PendSV clear-pending bit                                                              */
    using PENDSVSET    = regbits< type, 28,  1 >;  /**< PendSV set-pending bit                                                                */
    using NMIPENDSET   = regbits< type, 31,  1 >;  /**< NMI set-pending bit                                                                   */
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
  : public reg< uint32_t, base_addr + 0xd0c, rw, 0xFA050000 >
  {
    using type = reg< uint32_t, base_addr + 0xd0c, rw, 0xFA050000 >;

    using VECTRESET      = regbits< type,  0,  1 >;  /**< Writing 1 to this bit causes a local system reset                                                       */
    using VECTCLRACTIVE  = regbits< type,  1,  1 >;  /**< Writing 1 to this bit clears all active state information for fixed and configurable exceptions.        */
    using SYSRESETREQ    = regbits< type,  2,  1 >;  /**< System reset request                                                                                    */
    using PRIGROUP       = regbits< type,  8,  3 >;  /**< Interrupt priority grouping field. This field determines the split of group priority from subpriority.  */
    using ENDIANNESS     = regbits< type, 15,  1 >;  /**< Data endianness                                                                                         */
    using VECTKEY        = regbits< type, 16, 16 >;  /**< Register key                                                                                            */
  };

  /**
   * System Control Register
   */
  struct SCR
  : public reg< uint32_t, base_addr + 0xd10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd10, rw, 0 >;

    using SLEEPONEXIT  = regbits< type,  1,  1 >;  /**< Indicates sleep-on-exit when returning from Handler mode to Thread mode        */
    using SLEEPDEEP    = regbits< type,  2,  1 >;  /**< Controls whether the processor uses sleep or deep sleep as its low power mode  */
    using SEVONPEND    = regbits< type,  4,  1 >;  /**< Send Event on Pending bit                                                      */
  };

  /**
   * Configuration and Control Register
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0xd14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd14, rw, 0 >;

    using NONBASETHRDENA  = regbits< type,  0,  1 >;  /**< Indicates how the processor enters Thread mode                                                           */
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

    using PRI_12  = regbits< type,  0,  8 >;  /**< Priority of system handler 12, Debug Monitor      */
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

    using MEMFAULTACT     = regbits< type,  0,  1 >;  /**< MemManage exception active bit    */
    using BUSFAULTACT     = regbits< type,  1,  1 >;  /**< BusFault exception active bit     */
    using USGFAULTACT     = regbits< type,  3,  1 >;  /**< UsageFault exception active bit   */
    using SVCALLACT       = regbits< type,  7,  1 >;  /**< SVCall active bit                 */
    using MONITORACT      = regbits< type,  8,  1 >;  /**< Debug monitor active bit          */
    using PENDSVACT       = regbits< type, 10,  1 >;  /**< PendSV exception active bit       */
    using SYSTICKACT      = regbits< type, 11,  1 >;  /**< SysTick exception active bit      */
    using USGFAULTPENDED  = regbits< type, 12,  1 >;  /**< UsageFault exception pending bit  */
    using MEMFAULTPENDED  = regbits< type, 13,  1 >;  /**< MemManage exception pending bit   */
    using BUSFAULTPENDED  = regbits< type, 14,  1 >;  /**< BusFault exception pending bit    */
    using SVCALLPENDED    = regbits< type, 15,  1 >;  /**< SVCall pending bit                */
    using MEMFAULTENA     = regbits< type, 16,  1 >;  /**< MemManage enable bit              */
    using BUSFAULTENA     = regbits< type, 17,  1 >;  /**< BusFault enable bit               */
    using USGFAULTENA     = regbits< type, 18,  1 >;  /**< UsageFault enable bit             */
  };

  /**
   * Configurable Fault Status Register
   */
  struct CFSR
  : public reg< uint32_t, base_addr + 0xd28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd28, rw, 0 >;

    using IACCVIOL     = regbits< type,  0,  1 >;  /**< Instruction access violation flag                                       */
    using DACCVIOL     = regbits< type,  1,  1 >;  /**< Data access violation flag                                              */
    using MUNSTKERR    = regbits< type,  3,  1 >;  /**< MemManage fault on unstacking for a return from exception               */
    using MSTKERR      = regbits< type,  4,  1 >;  /**< MemManage fault on stacking for exception entry                         */
    using MLSPERR      = regbits< type,  5,  1 >;  /**< MemManage fault occurred during floating-point lazy state preservation  */
    using MMARVALID    = regbits< type,  7,  1 >;  /**< MemManage Fault Address Register (MMFAR) valid flag                     */
    using IBUSERR      = regbits< type,  8,  1 >;  /**< Instruction bus error                                                   */
    using PRECISERR    = regbits< type,  9,  1 >;  /**< Precise data bus error                                                  */
    using IMPRECISERR  = regbits< type, 10,  1 >;  /**< Imprecise data bus error                                                */
    using UNSTKERR     = regbits< type, 11,  1 >;  /**< BusFault on unstacking for a return from exception                      */
    using STKERR       = regbits< type, 12,  1 >;  /**< BusFault on stacking for exception entry                                */
    using LSPERR       = regbits< type, 13,  1 >;  /**< Bus fault occurred during floating-point lazy state preservation        */
    using BFARVALID    = regbits< type, 15,  1 >;  /**< BusFault Address Register (BFAR) valid flag                             */
    using UNDEFINSTR   = regbits< type, 16,  1 >;  /**< Undefined instruction UsageFault                                        */
    using INVSTATE     = regbits< type, 17,  1 >;  /**< Invalid state UsageFault                                                */
    using INVPC        = regbits< type, 18,  1 >;  /**< Invalid PC load UsageFault, caused by an invalid PC load by EXC_RETURN  */
    using NOCP         = regbits< type, 19,  1 >;  /**< No coprocessor UsageFault                                               */
    using UNALIGNED    = regbits< type, 24,  1 >;  /**< Unaligned access UsageFault                                             */
    using DIVBYZERO    = regbits< type, 25,  1 >;  /**< Divide by zero UsageFault                                               */
  };

  /**
   * HardFault Status register
   */
  struct HFSR
  : public reg< uint32_t, base_addr + 0xd2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd2c, rw, 0 >;

    using VECTTBL   = regbits< type,  1,  1 >;  /**< Indicates a BusFault on a vector table read during exception processing.                                                                                                    */
    using FORCED    = regbits< type, 30,  1 >;  /**< Indicates a forced hard fault, generated by escalation of a fault with configurable priority that cannot be handles, either because of priority or because it is disabled.  */
    using DEBUGEVT  = regbits< type, 31,  1 >;  /**< Reserved for Debug use. When writing to the register you must write 0 to this bit, otherwise behavior is Unpredictable.                                                     */
  };

  /**
   * Debug Fault Status Register
   */
  struct DFSR
  : public reg< uint32_t, base_addr + 0xd30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd30, rw, 0 >;

    using HALTED    = regbits< type,  0,  1 >;  /**< Indicates a debug event generated by either a C_HALT or C_STEP request, triggered by a write to the DHCSR or a step request triggered by setting DEMCR.MON_STEP to 1.  */
    using BKPT      = regbits< type,  1,  1 >;  /**< Debug event generated by BKPT instruction execution or a breakpoint match in FPB                                                                                       */
    using DWTTRAP   = regbits< type,  2,  1 >;  /**< Debug event generated by the DWT                                                                                                                                       */
    using VCATCH    = regbits< type,  3,  1 >;  /**< Indicates triggering of a Vector catch                                                                                                                                 */
    using EXTERNAL  = regbits< type,  4,  1 >;  /**< Debug event generated because of the assertion of an external debug request                                                                                            */
  };

  /**
   * MemManage Fault Address Register
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

  /**
   * Processor Feature Register 0
   */
  struct ID_PFR0
  : public reg< uint32_t, base_addr + 0xd40, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd40, ro, 0 >;

    using STATE0  = regbits< type,  0,  4 >;  /**< ARM instruction set support    */
    using STATE1  = regbits< type,  4,  4 >;  /**< Thumb instruction set support  */
    using STATE2  = regbits< type,  8,  4 >;  /**< ARMv7-M reserved               */
    using STATE3  = regbits< type, 12,  4 >;  /**< ARMv7-M reserved               */
  };

  /**
   * Processor Feature Register 1
   */
  struct ID_PFR1
  : public reg< uint32_t, base_addr + 0xd44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd44, ro, 0 >;

    using PROGMODEL  = regbits< type,  8,  4 >;  /**< M profile programmers' model  */
  };

  /**
   * Debug Feature Register
   */
  struct ID_DFR0
  : public reg< uint32_t, base_addr + 0xd48, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd48, ro, 0 >;

    using DEBUGMODEL  = regbits< type, 20,  4 >;  /**< Support for memory-mapped debug model for M profile processors  */
  };

  /**
   * Auxiliary Feature Register
   */
  struct ID_AFR0
  : public reg< uint32_t, base_addr + 0xd4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd4c, ro, 0 >;

    using IMPLEMENTATION_DEFINED0  = regbits< type,  0,  4 >;  /**< Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.  */
    using IMPLEMENTATION_DEFINED1  = regbits< type,  4,  4 >;  /**< Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.  */
    using IMPLEMENTATION_DEFINED2  = regbits< type,  8,  4 >;  /**< Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.  */
    using IMPLEMENTATION_DEFINED3  = regbits< type, 12,  4 >;  /**< Gives information about the IMPLEMENTATION DEFINED features of a processor implementation.  */
  };

  /**
   * Memory Model Feature Register 0
   */
  struct ID_MMFR0
  : public reg< uint32_t, base_addr + 0xd50, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd50, ro, 0 >;

    using PMSASUPPORT             = regbits< type,  4,  4 >;  /**< Indicates support for a PMSA                             */
    using OUTERMOST_SHAREABILITY  = regbits< type,  8,  4 >;  /**< Indicates the outermost shareability domain implemented  */
    using SHAREABILITY_LEVELS     = regbits< type, 12,  4 >;  /**< Indicates the number of shareability levels implemented  */
    using TCM_SUPPORT             = regbits< type, 16,  4 >;  /**< Indicates the support for Tightly Coupled Memory         */
    using AUXILIARY_REGISTERS     = regbits< type, 20,  4 >;  /**< Indicates the support for Auxiliary registers            */
  };

  /**
   * Memory Model Feature Register 1
   */
  struct ID_MMFR1
  : public reg< uint32_t, base_addr + 0xd54, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd54, ro, 0 >;

    // fixme: Field name equals parent register name: ID_MMFR1
    using ID_MMFR1_ = regbits< type,  0, 32 >;  /**< Gives information about the implemented memory model and memory management support.  */
  };

  /**
   * Memory Model Feature Register 2
   */
  struct ID_MMFR2
  : public reg< uint32_t, base_addr + 0xd58, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd58, ro, 0 >;

    using WFI_STALL  = regbits< type, 24,  4 >;  /**< Indicates the support for Wait For Interrupt (WFI) stalling  */
  };

  /**
   * Memory Model Feature Register 3
   */
  struct ID_MMFR3
  : public reg< uint32_t, base_addr + 0xd5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd5c, ro, 0 >;

    // fixme: Field name equals parent register name: ID_MMFR3
    using ID_MMFR3_ = regbits< type,  0, 32 >;  /**< Gives information about the implemented memory model and memory management support.  */
  };

  /**
   * Instruction Set Attributes Register 0
   */
  struct ID_ISAR0
  : public reg< uint32_t, base_addr + 0xd60, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd60, ro, 0 >;

    using BITCOUNT_INSTRS   = regbits< type,  4,  4 >;  /**< Indicates the supported Bit Counting instructions                 */
    using BITFIELD_INSTRS   = regbits< type,  8,  4 >;  /**< Indicates the supported BitField instructions                     */
    using CMPBRANCH_INSTRS  = regbits< type, 12,  4 >;  /**< Indicates the supported combined Compare and Branch instructions  */
    using COPROC_INSTRS     = regbits< type, 16,  4 >;  /**< Indicates the supported Coprocessor instructions                  */
    using DEBUG_INSTRS      = regbits< type, 20,  4 >;  /**< Indicates the supported Debug instructions                        */
    using DIVIDE_INSTRS     = regbits< type, 24,  4 >;  /**< Indicates the supported Divide instructions                       */
  };

  /**
   * Instruction Set Attributes Register 1
   */
  struct ID_ISAR1
  : public reg< uint32_t, base_addr + 0xd64, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd64, ro, 0 >;

    using EXTEND_INSTRS     = regbits< type, 12,  4 >;  /**< Indicates the supported Extend instructions                                 */
    using IFTHEN_INSTRS     = regbits< type, 16,  4 >;  /**< Indicates the supported IfThen instructions                                 */
    using IMMEDIATE_INSTRS  = regbits< type, 20,  4 >;  /**< Indicates the support for data-processing instructions with long immediate  */
    using INTERWORK_INSTRS  = regbits< type, 24,  4 >;  /**< Indicates the supported Interworking instructions                           */
  };

  /**
   * Instruction Set Attributes Register 2
   */
  struct ID_ISAR2
  : public reg< uint32_t, base_addr + 0xd68, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd68, ro, 0 >;

    using LOADSTORE_INSTRS       = regbits< type,  0,  4 >;  /**< Indicates the supported additional load and store instructions     */
    using MEMHINT_INSTRS         = regbits< type,  4,  4 >;  /**< Indicates the supported Memory Hint instructions                   */
    using MULTIACCESSINT_INSTRS  = regbits< type,  8,  4 >;  /**< Indicates the support for multi-access interruptible instructions  */
    using MULT_INSTRS            = regbits< type, 12,  4 >;  /**< Indicates the supported additional Multiply instructions           */
    using MULTS_INSTRS           = regbits< type, 16,  4 >;  /**< Indicates the supported advanced signed Multiply instructions      */
    using MULTU_INSTRS           = regbits< type, 20,  4 >;  /**< Indicates the supported advanced unsigned Multiply instructions    */
    using REVERSAL_INSTRS        = regbits< type, 28,  4 >;  /**< Indicates the supported Reversal instructions                      */
  };

  /**
   * Instruction Set Attributes Register 3
   */
  struct ID_ISAR3
  : public reg< uint32_t, base_addr + 0xd6c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd6c, ro, 0 >;

    using SATURATE_INSTRS   = regbits< type,  0,  4 >;  /**< Indicates the supported Saturate instructions                                                         */
    using SIMD_INSTRS       = regbits< type,  4,  4 >;  /**< Indicates the supported SIMD instructions                                                             */
    using SVC_INSTRS        = regbits< type,  8,  4 >;  /**< Indicates the supported SVC instructions                                                              */
    using SYNCHPRIM_INSTRS  = regbits< type, 12,  4 >;  /**< Together with the ID_ISAR4[SYNCHPRIM_INSTRS_FRAC] indicates the supported Synchronization Primitives  */
    using TABBRANCH_INSTRS  = regbits< type, 16,  4 >;  /**< Indicates the supported Table Branch instructions                                                     */
    using THUMBCOPY_INSTRS  = regbits< type, 20,  4 >;  /**< Indicates the supported non flag-setting MOV instructions                                             */
    using TRUENOP_INSTRS    = regbits< type, 24,  4 >;  /**< Indicates the supported non flag-setting MOV instructions                                             */
  };

  /**
   * Instruction Set Attributes Register 4
   */
  struct ID_ISAR4
  : public reg< uint32_t, base_addr + 0xd70, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd70, ro, 0 >;

    using UNPRIV_INSTRS          = regbits< type,  0,  4 >;  /**< Indicates the supported unprivileged instructions. These are the instruction variants indicated by a T suffix.  */
    using WITHSHIFTS_INSTRS      = regbits< type,  4,  4 >;  /**< Indicates the support for instructions with shifts                                                              */
    using WRITEBACK_INSTRS       = regbits< type,  8,  4 >;  /**< Indicates the support for Writeback addressing modes                                                            */
    using BARRIER_INSTRS         = regbits< type, 16,  4 >;  /**< Indicates the supported Barrier instructions                                                                    */
    using SYNCHPRIM_INSTRS_FRAC  = regbits< type, 20,  4 >;  /**< Together with the ID_ISAR3[SYNCHPRIM_INSTRS] indicates the supported Synchronization Primitives                 */
    using PSR_M_INSTRS           = regbits< type, 24,  4 >;  /**< Indicates the supported M profile instructions to modify the PSRs                                               */
  };

  /**
   * Cache Level ID register
   */
  struct CLIDR
  : public reg< uint32_t, base_addr + 0xd78, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd78, ro, 0 >;

    using Ctype1  = regbits< type,  0,  3 >;  /**< Indicate the type of cache implemented at level 1.                                */
    using Ctype2  = regbits< type,  3,  3 >;  /**< Indicate the type of cache implemented at level 2.                                */
    using Ctype3  = regbits< type,  6,  3 >;  /**< Indicate the type of cache implemented at level 3.                                */
    using Ctype4  = regbits< type,  9,  3 >;  /**< Indicate the type of cache implemented at level 4.                                */
    using Ctype5  = regbits< type, 12,  3 >;  /**< Indicate the type of cache implemented at level 5.                                */
    using Ctype6  = regbits< type, 15,  3 >;  /**< Indicate the type of cache implemented at level 6.                                */
    using Ctype7  = regbits< type, 18,  3 >;  /**< Indicate the type of cache implemented at level 7.                                */
    using LoUIS   = regbits< type, 21,  3 >;  /**< Level of Unification Inner Shareable for the cache hierarchy. This field is RAZ.  */
    using LOC     = regbits< type, 24,  3 >;  /**< Level of Coherency for the cache hierarchy                                        */
    using LOUU    = regbits< type, 27,  3 >;  /**< Level of Unification Uniprocessor for the cache hierarchy                         */
  };

  /**
   * Cache Type register
   */
  struct CTR
  : public reg< uint32_t, base_addr + 0xd7c, ro, 0x8000C000 >
  {
    using type = reg< uint32_t, base_addr + 0xd7c, ro, 0x8000C000 >;

    using IMINLINE  = regbits< type,  0,  4 >;  /**< Log2 of the number of words in the smallest cache line of all the instruction caches that are controlled by the processor.                                                                                        */
    using DMINLINE  = regbits< type, 16,  4 >;  /**< Log2 of the number of words in the smallest cache line of all the data caches and unified caches that are controlled by the processor.                                                                            */
    using ERG       = regbits< type, 20,  4 >;  /**< Exclusives Reservation Granule. The maximum size of the reservation granule that has been implemented for the Load-Exclusive and Store-Exclusive instructions, encoded as Log2 of the number of words.            */
    using CWG       = regbits< type, 24,  4 >;  /**< Cache Write-back Granule. The maximum size of memory that can be overwritten as a result of the eviction of a cache entry that has had a memory location in it modified, encoded as Log2 of the number of words.  */
    using FORMAT    = regbits< type, 29,  3 >;  /**< Indicates the implemented CTR format.                                                                                                                                                                             */
  };

  /**
   * Cache Size ID Register
   */
  struct CCSIDR
  : public reg< uint32_t, base_addr + 0xd80, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd80, ro, 0 >;

    using LINESIZE       = regbits< type,  0,  3 >;  /**< (Log2(Number of words in cache line)) - 2.                                                                                                 */
    using ASSOCIATIVITY  = regbits< type,  3, 10 >;  /**< (Associativity of cache) - 1, therefore a value of 0 indicates an associativity of 1. The associativity does not have to be a power of 2.  */
    using NUMSETS        = regbits< type, 13, 15 >;  /**< (Number of sets in cache) - 1, therefore a value of 0 indicates 1 set in the cache. The number of sets does not have to be a power of 2.   */
    using WA             = regbits< type, 28,  1 >;  /**< Indicates whether the cache level supports write-allocation                                                                                */
    using RA             = regbits< type, 29,  1 >;  /**< Indicates whether the cache level supports read-allocation                                                                                 */
    using WB             = regbits< type, 30,  1 >;  /**< Indicates whether the cache level supports write-back                                                                                      */
    using WT             = regbits< type, 31,  1 >;  /**< Indicates whether the cache level supports write-through                                                                                   */
  };

  /**
   * Cache Size Selection Register
   */
  struct CSSELR
  : public reg< uint32_t, base_addr + 0xd84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd84, rw, 0 >;

    using IND    = regbits< type,  0,  1 >;  /**< Instruction not data bit       */
    using Level  = regbits< type,  1,  3 >;  /**< Cache level of required cache  */
  };

  /**
   * Coprocessor Access Control Register
   */
  struct CPACR
  : public reg< uint32_t, base_addr + 0xd88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd88, rw, 0 >;

    using CP0   = regbits< type,  0,  2 >;  /**< Access privileges for coprocessor 0.   */
    using CP1   = regbits< type,  2,  2 >;  /**< Access privileges for coprocessor 1.   */
    using CP2   = regbits< type,  4,  2 >;  /**< Access privileges for coprocessor 2.   */
    using CP3   = regbits< type,  6,  2 >;  /**< Access privileges for coprocessor 3.   */
    using CP4   = regbits< type,  8,  2 >;  /**< Access privileges for coprocessor 4.   */
    using CP5   = regbits< type, 10,  2 >;  /**< Access privileges for coprocessor 5.   */
    using CP6   = regbits< type, 12,  2 >;  /**< Access privileges for coprocessor 6.   */
    using CP7   = regbits< type, 14,  2 >;  /**< Access privileges for coprocessor 7.   */
    using CP10  = regbits< type, 20,  2 >;  /**< Access privileges for coprocessor 10.  */
    using CP11  = regbits< type, 22,  2 >;  /**< Access privileges for coprocessor 11.  */
  };

  /**
   * Software Triggered Interrupt Register
   */
  struct STIR
  : public reg< uint32_t, base_addr + 0xf00, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf00, wo, 0 >;

    using INTID  = regbits< type,  0,  9 >;  /**< Indicates the interrupt to be triggered  */
  };

  /**
   * Media and FP Feature Register 0
   */
  struct MVFR0
  : public reg< uint32_t, base_addr + 0xf40, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf40, ro, 0 >;

    using A_SIMD                 = regbits< type,  0,  4 >;  /**< Indicates the size of the FP register bank.                                    */
    using SINGLE_PRECISION       = regbits< type,  4,  4 >;  /**< Indicates the hardware support for FP single-precision operations.             */
    using DOUBLE_PRECISION       = regbits< type,  8,  4 >;  /**< Indicates the hardware support for FP double-precision operations.             */
    using FP_EXCEPTION_TRAPPING  = regbits< type, 12,  4 >;  /**< Indicates whether the FP hardware implementation supports exception trapping.  */
    using DIVIDE                 = regbits< type, 16,  4 >;  /**< Indicates whether the FP hardware implementation supports exception trapping.  */
    using SQUARE_ROOT            = regbits< type, 20,  4 >;  /**< Indicates the hardware support for FP square root operations.                  */
    using SHORT_VECTORS          = regbits< type, 24,  4 >;  /**< Indicates the hardware support for FP square root operations.                  */
    using FP_ROUNDING_MODES      = regbits< type, 28,  4 >;  /**< Indicates the rounding modes supported by the FP floating-point hardware.      */
  };

  /**
   * Media and FP Feature Register 1
   */
  struct MVFR1
  : public reg< uint32_t, base_addr + 0xf44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf44, ro, 0 >;

    using FTZ_MODE      = regbits< type,  0,  4 >;  /**< Indicates whether the FP hardware implementation supports only the Flush-to-Zero mode of operation.  */
    using D_NAN_MODE    = regbits< type,  4,  4 >;  /**< Indicates whether the FP hardware implementation supports only the Default NaN mode.                 */
    using FP_HPFP       = regbits< type, 24,  4 >;  /**< Floating Point Half-Precision and double-precision.                                                  */
    using FP_FUSED_MAC  = regbits< type, 28,  4 >;  /**< Indicates whether the FP supports fused multiply accumulate operations.                              */
  };

  /**
   * Media and FP Feature Register 2
   */
  struct MVFR2
  : public reg< uint32_t, base_addr + 0xf48, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf48, ro, 0 >;

    using VFP_MISC  = regbits< type,  4,  4 >;  /**< Indicates the hardware support for FP miscellaneous features.  */
  };

  /**
   * Instruction cache invalidate all to Point of Unification (PoU)
   */
  struct ICIALLU
  : public reg< uint32_t, base_addr + 0xf50, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf50, wo, 0 >;

    // fixme: Field name equals parent register name: ICIALLU
    using ICIALLU_ = regbits< type,  0, 32 >;  /**< I-cache invalidate all to PoU  */
  };

  /**
   * Instruction cache invalidate by address to PoU
   */
  struct ICIMVAU
  : public reg< uint32_t, base_addr + 0xf58, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf58, wo, 0 >;

    // fixme: Field name equals parent register name: ICIMVAU
    using ICIMVAU_ = regbits< type,  0, 32 >;  /**< I-cache invalidate by MVA to PoU  */
  };

  /**
   * Data cache invalidate by address to Point of Coherency (PoC)
   */
  struct DCIMVAC
  : public reg< uint32_t, base_addr + 0xf5c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf5c, wo, 0 >;

    // fixme: Field name equals parent register name: DCIMVAC
    using DCIMVAC_ = regbits< type,  0, 32 >;  /**< D-cache invalidate by MVA to PoC  */
  };

  /**
   * Data cache invalidate by set/way
   */
  struct DCISW
  : public reg< uint32_t, base_addr + 0xf60, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf60, wo, 0 >;

    // fixme: Field name equals parent register name: DCISW
    using DCISW_ = regbits< type,  0, 32 >;  /**< D-cache invalidate by set-way  */
  };

  /**
   * Data cache by address to PoU
   */
  struct DCCMVAU
  : public reg< uint32_t, base_addr + 0xf64, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf64, wo, 0 >;

    // fixme: Field name equals parent register name: DCCMVAU
    using DCCMVAU_ = regbits< type,  0, 32 >;  /**< D-cache clean by MVA to PoU  */
  };

  /**
   * Data cache clean by address to PoC
   */
  struct DCCMVAC
  : public reg< uint32_t, base_addr + 0xf68, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf68, wo, 0 >;

    // fixme: Field name equals parent register name: DCCMVAC
    using DCCMVAC_ = regbits< type,  0, 32 >;  /**< D-cache clean by MVA to PoC  */
  };

  /**
   * Data cache clean by set/way
   */
  struct DCCSW
  : public reg< uint32_t, base_addr + 0xf6c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf6c, wo, 0 >;

    // fixme: Field name equals parent register name: DCCSW
    using DCCSW_ = regbits< type,  0, 32 >;  /**< D-cache clean by set-way  */
  };

  /**
   * Data cache clean and invalidate by address to PoC
   */
  struct DCCIMVAC
  : public reg< uint32_t, base_addr + 0xf70, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf70, wo, 0 >;

    // fixme: Field name equals parent register name: DCCIMVAC
    using DCCIMVAC_ = regbits< type,  0, 32 >;  /**< D-cache clean and invalidate by MVA to PoC  */
  };

  /**
   * Data cache clean and invalidate by set/way
   */
  struct DCCISW
  : public reg< uint32_t, base_addr + 0xf74, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf74, wo, 0 >;

    // fixme: Field name equals parent register name: DCCISW
    using DCCISW_ = regbits< type,  0, 32 >;  /**< D-cache clean and invalidate by set-way  */
  };

  /**
   * Instruction Tightly-Coupled Memory Control Register
   */
  struct CM7_ITCMCR
  : public reg< uint32_t, base_addr + 0xf90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf90, rw, 0 >;

    using EN     = regbits< type,  0,  1 >;  /**< TCM enable. When a TCM is disabled all accesses are made to the AXIM interface.                                                                                                         */
    using RMW    = regbits< type,  1,  1 >;  /**< Read-Modify-Write (RMW) enable. Indicates that all writes to TCM, that are not the full width of the TCM RAM, use a RMW sequence.                                                       */
    using RETEN  = regbits< type,  2,  1 >;  /**< Retry phase enable. When enabled the processor guarantees to honor the retry output on the corresponding TCM interface, re-executing the instruction which carried out the TCM access.  */
    using SZ     = regbits< type,  3,  4 >;  /**< TCM size. Indicates the size of the relevant TCM.                                                                                                                                       */
  };

  /**
   * Data Tightly-Coupled Memory Control Register
   */
  struct CM7_DTCMCR
  : public reg< uint32_t, base_addr + 0xf94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf94, rw, 0 >;

    using EN     = regbits< type,  0,  1 >;  /**< TCM enable. When a TCM is disabled all accesses are made to the AXIM interface.                                                                                                         */
    using RMW    = regbits< type,  1,  1 >;  /**< Read-Modify-Write (RMW) enable. Indicates that all writes to TCM, that are not the full width of the TCM RAM, use a RMW sequence.                                                       */
    using RETEN  = regbits< type,  2,  1 >;  /**< Retry phase enable. When enabled the processor guarantees to honor the retry output on the corresponding TCM interface, re-executing the instruction which carried out the TCM access.  */
    using SZ     = regbits< type,  3,  4 >;  /**< TCM size. Indicates the size of the relevant TCM.                                                                                                                                       */
  };

  /**
   * AHBP Control Register
   */
  struct CM7_AHBPCR
  : public reg< uint32_t, base_addr + 0xf98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf98, rw, 0 >;

    using EN  = regbits< type,  0,  1 >;  /**< AHBP enable.  */
    using SZ  = regbits< type,  1,  3 >;  /**< AHBP size.    */
  };

  /**
   * L1 Cache Control Register
   */
  struct CM7_CACR
  : public reg< uint32_t, base_addr + 0xf9c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf9c, rw, 0 >;

    using SIWT     = regbits< type,  0,  1 >;  /**< Shared cacheable-is-WT for data cache. Enables limited cache coherency usage.  */
    using ECCDIS   = regbits< type,  1,  1 >;  /**< Enables ECC in the instruction and data cache.                                 */
    using FORCEWT  = regbits< type,  2,  1 >;  /**< Enables Force Write-Through in the data cache.                                 */
  };

  /**
   * AHB Slave Control Register
   */
  struct CM7_AHBSCR
  : public reg< uint32_t, base_addr + 0xfa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfa0, rw, 0 >;

    using CTL        = regbits< type,  0,  2 >;  /**< AHBS prioritization control.                             */
    using TPRI       = regbits< type,  2,  9 >;  /**< Threshold execution priority for AHBS traffic demotion.  */
    using INITCOUNT  = regbits< type, 11,  5 >;  /**< Fairness counter initialization value.                   */
  };

  /**
   * Auxiliary Bus Fault Status Register
   */
  struct CM7_ABFSR
  : public reg< uint32_t, base_addr + 0xfa8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfa8, rw, 0 >;

    using ITCM      = regbits< type,  0,  1 >;  /**< Asynchronous fault on ITCM interface.                                          */
    using DTCM      = regbits< type,  1,  1 >;  /**< Asynchronous fault on DTCM interface.                                          */
    using AHBP      = regbits< type,  2,  1 >;  /**< Asynchronous fault on AHBP interface.                                          */
    using AXIM      = regbits< type,  3,  1 >;  /**< Asynchronous fault on AXIM interface.                                          */
    using EPPB      = regbits< type,  4,  1 >;  /**< Asynchronous fault on EPPB interface.                                          */
    using AXIMTYPE  = regbits< type,  8,  2 >;  /**< Indicates the type of fault on the AXIM interface. Only valid when AXIM is 1.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSTEMCONTROL_HPP_INCLUDED
