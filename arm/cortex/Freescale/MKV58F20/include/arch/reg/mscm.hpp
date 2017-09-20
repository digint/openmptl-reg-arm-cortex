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
//  Import from CMSIS-SVD: "Freescale/MKV58F20.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV58F20
//  series: Kinetis_V
//  version: 1.6
//  description: MKV58F20 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MSCM_HPP_INCLUDED
#define ARCH_REG_MSCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * MSCM
 */
struct MSCM
{
  static constexpr reg_addr_t base_addr = 0x40001000;

  /**
   * Processor X Type Register
   */
  struct CPxTYPE
  : public reg< uint32_t, base_addr + 0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0 >;

    using RYPZ         = regbits< type,  0,  8 >;  /**< Processor x Revision     */
    using PERSONALITY  = regbits< type,  8, 24 >;  /**< Processor x Personality  */
  };

  /**
   * Processor X Number Register
   */
  struct CPxNUM
  : public reg< uint32_t, base_addr + 0x4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0 >;

    using CPN  = regbits< type,  0,  1 >;  /**< Processor x Number  */
  };

  /**
   * Processor X Master Register
   */
  struct CPxMASTER
  : public reg< uint32_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0 >;

    using PPN  = regbits< type,  0,  6 >;  /**< Processor x Physical Port Number  */
  };

  /**
   * Processor X Count Register
   */
  struct CPxCOUNT
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using PCNT  = regbits< type,  0,  2 >;  /**< Processor Count  */
  };

  /**
   * Processor X Configuration 1 Register
   */
  struct CPxCFG1
  : public reg< uint32_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0 >;

    using L2WY  = regbits< type, 16,  8 >;  /**< Level 2 Cache Ways  */
    using L2SZ  = regbits< type, 24,  8 >;  /**< Level 2 Cache Size  */
  };

  /**
   * Processor X Configuration 3 Register
   */
  struct CPxCFG3
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x221 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x221 >;

    using FPU   = regbits< type,  0,  1 >;  /**< Floating Point Unit            */
    using SIMD  = regbits< type,  1,  1 >;  /**< SIMD/NEON Instruction Support  */
    using JAZ   = regbits< type,  2,  1 >;  /**< Jazelle                        */
    using MMU   = regbits< type,  3,  1 >;  /**< Memory Management Unit         */
    using TZ    = regbits< type,  4,  1 >;  /**< Trust Zone                     */
    using CMP   = regbits< type,  5,  1 >;  /**< Core Memory Protection unit    */
    using BB    = regbits< type,  6,  1 >;  /**< Bit Banding                    */
    using SBP   = regbits< type,  8,  2 >;  /**< System Bus Ports               */
  };

  /**
   * Processor 0 Type Register
   */
  struct CP0TYPE
  : public reg< uint32_t, base_addr + 0x20, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 >;

    using RYPZ         = regbits< type,  0,  8 >;  /**< Processor 0 Revision     */
    using PERSONALITY  = regbits< type,  8, 24 >;  /**< Processor 0 Personality  */
  };

  /**
   * Processor 0 Number Register
   */
  struct CP0NUM
  : public reg< uint32_t, base_addr + 0x24, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0 >;

    using CPN  = regbits< type,  0,  1 >;  /**< Processor 0 Number  */
  };

  /**
   * Processor 0 Master Register
   */
  struct CP0MASTER
  : public reg< uint32_t, base_addr + 0x28, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0 >;

    using PPN  = regbits< type,  0,  6 >;  /**< Processor 0 Physical Port Number  */
  };

  /**
   * Processor 0 Count Register
   */
  struct CP0COUNT
  : public reg< uint32_t, base_addr + 0x2c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0 >;

    using PCNT  = regbits< type,  0,  2 >;  /**< Processor Count  */
  };

  /**
   * Processor 0 Configuration 1 Register
   */
  struct CP0CFG1
  : public reg< uint32_t, base_addr + 0x34, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0 >;

    using L2WY  = regbits< type, 16,  8 >;  /**< Level 2 Cache Ways  */
    using L2SZ  = regbits< type, 24,  8 >;  /**< Level 2 Cache Size  */
  };

  /**
   * Processor 0 Configuration 3 Register
   */
  struct CP0CFG3
  : public reg< uint32_t, base_addr + 0x3c, ro, 0x221 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0x221 >;

    using FPU   = regbits< type,  0,  1 >;  /**< Floating Point Unit            */
    using SIMD  = regbits< type,  1,  1 >;  /**< SIMD/NEON Instruction Support  */
    using JAZ   = regbits< type,  2,  1 >;  /**< Jazelle                        */
    using MMU   = regbits< type,  3,  1 >;  /**< Memory Management Unit         */
    using TZ    = regbits< type,  4,  1 >;  /**< Trust Zone                     */
    using CMP   = regbits< type,  5,  1 >;  /**< Core Memory Protection unit    */
    using BB    = regbits< type,  6,  1 >;  /**< Bit Banding                    */
    using SBP   = regbits< type,  8,  2 >;  /**< System Bus Ports               */
  };

  /**
   * Processor 1 Type Register
   */
  struct CP1TYPE
  : public reg< uint32_t, base_addr + 0x40, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0 >;

    using RYPZ         = regbits< type,  0,  8 >;  /**< Processor 1 Revision     */
    using PERSONALITY  = regbits< type,  8, 24 >;  /**< Processor 1 Personality  */
  };

  /**
   * Processor 1 Number Register
   */
  struct CP1NUM
  : public reg< uint32_t, base_addr + 0x44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0 >;

    using CPN  = regbits< type,  0,  1 >;  /**< Processor 1 Number  */
  };

  /**
   * Processor 1 Master Register
   */
  struct CP1MASTER
  : public reg< uint32_t, base_addr + 0x48, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0 >;

    using PPN  = regbits< type,  0,  6 >;  /**< Processor 1 Physical Port Number  */
  };

  /**
   * Processor 1 Count Register
   */
  struct CP1COUNT
  : public reg< uint32_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0 >;

    using PCNT  = regbits< type,  0,  2 >;  /**< Processor Count  */
  };

  /**
   * Processor 1 Configuration 1 Register
   */
  struct CP1CFG1
  : public reg< uint32_t, base_addr + 0x54, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0 >;

    using L2WY  = regbits< type, 16,  8 >;  /**< Level 2 Cache Ways  */
    using L2SZ  = regbits< type, 24,  8 >;  /**< Level 2 Cache Size  */
  };

  /**
   * Processor 1 Configuration 3 Register
   */
  struct CP1CFG3
  : public reg< uint32_t, base_addr + 0x5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0 >;

    using FPU   = regbits< type,  0,  1 >;  /**< Floating Point Unit            */
    using SIMD  = regbits< type,  1,  1 >;  /**< SIMD/NEON Instruction Support  */
    using JAZ   = regbits< type,  2,  1 >;  /**< Jazelle                        */
    using MMU   = regbits< type,  3,  1 >;  /**< Memory Management Unit         */
    using TZ    = regbits< type,  4,  1 >;  /**< Trust Zone                     */
    using CMP   = regbits< type,  5,  1 >;  /**< Core Memory Protection unit    */
    using BB    = regbits< type,  6,  1 >;  /**< Bit Banding                    */
    using SBP   = regbits< type,  8,  2 >;  /**< System Bus Ports               */
  };

  /**
   * On-Chip Memory Descriptor Register
   */
  struct OCMDR%s
  : public reg< uint32_t, base_addr + 0x400, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 >;

    using OCMPU   = regbits< type, 12,  1 >;  /**< OCMEM Memory Protection Unit                                    */
    using OCMT    = regbits< type, 13,  3 >;  /**< OCMEM Type. This field defines the type of the on-chip memory:  */
    using OCMW    = regbits< type, 17,  3 >;  /**< OCMEM Datapath Width                                            */
    using OCMSZ   = regbits< type, 24,  4 >;  /**< OCMEM Size                                                      */
    using OCMSZH  = regbits< type, 28,  1 >;  /**< OCMEM Size "Hole"                                               */
    using FMT     = regbits< type, 30,  1 >;  /**< Format                                                          */
    using V       = regbits< type, 31,  1 >;  /**< OCMEM Valid Bit                                                 */
  };
};
} // namespace mptl

#endif // ARCH_REG_MSCM_HPP_INCLUDED
