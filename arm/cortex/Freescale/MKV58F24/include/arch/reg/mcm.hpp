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
//  Import from CMSIS-SVD: "Freescale/MKV58F24.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV58F24
//  series: Kinetis_V
//  version: 1.6
//  description: MKV58F24 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MCM_HPP_INCLUDED
#define ARCH_REG_MCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Core Platform Miscellaneous Control Module
 */
struct MCM
{
  static constexpr reg_addr_t base_addr = 0xe0080000;

  /**
   * Processor core type
   */
  struct PCT
  : public reg< uint32_t, base_addr + 0, ro, 0xAC700000 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0xAC700000 >;

    using PLREV  = regbits< type,  0, 16 >;  /**< Platform revision                                 */
    // fixme: Field name equals parent register name: PCT
    using PCT_   = regbits< type, 16, 16 >;  /**< This MCM design supports the ARM Cortex M7 core.  */
  };

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using AHBSPRI  = regbits< type, 27,  1 >;  /**< AHB Slave Interface Priority  */
  };

  /**
   * Interrupt Status and Control Register
   */
  struct ISCR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using FIOC   = regbits< type,  8,  1 >;  /**< FPU invalid operation interrupt status  */
    using FDZC   = regbits< type,  9,  1 >;  /**< FPU divide-by-zero interrupt status     */
    using FOFC   = regbits< type, 10,  1 >;  /**< FPU overflow interrupt status           */
    using FUFC   = regbits< type, 11,  1 >;  /**< FPU underflow interrupt status          */
    using FIXC   = regbits< type, 12,  1 >;  /**< FPU inexact interrupt status            */
    using FIDC   = regbits< type, 15,  1 >;  /**< FPU input denormal interrupt status     */
    using FIOCE  = regbits< type, 24,  1 >;  /**< FPU invalid operation interrupt enable  */
    using FDZCE  = regbits< type, 25,  1 >;  /**< FPU divide-by-zero interrupt enable     */
    using FOFCE  = regbits< type, 26,  1 >;  /**< FPU overflow interrupt enable           */
    using FUFCE  = regbits< type, 27,  1 >;  /**< FPU underflow interrupt enable          */
    using FIXCE  = regbits< type, 28,  1 >;  /**< FPU inexact interrupt enable            */
    using FIDCE  = regbits< type, 31,  1 >;  /**< FPU input denormal interrupt enable     */
  };

  /**
   * Compute Only Operation Control Register
   */
  struct CPO
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using CPOREQ  = regbits< type,  0,  1 >;  /**< Compute Only Operation request      */
    using CPOACK  = regbits< type,  1,  1 >;  /**< Compute Only Operation acknowledge  */
  };

  /**
   * Local Memory General Descriptor Register
   */
  struct LMEM%s
  : public reg< uint32_t, base_addr + 0x400, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 >;

    using LMEM_Type   = regbits< type, 13,  3 >;  /**< Defines the type of local memory             */
    using LMEM_Width  = regbits< type, 17,  3 >;  /**< Defines the local memory bit width           */
    using LMEM_Ways   = regbits< type, 20,  4 >;  /**< Defines the ways of set associative          */
    using LMEM_Size   = regbits< type, 24,  4 >;  /**< Defines the local memory size                */
    using LMEM_Valid  = regbits< type, 31,  1 >;  /**< Defines whether the local memory is present  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCM_HPP_INCLUDED
