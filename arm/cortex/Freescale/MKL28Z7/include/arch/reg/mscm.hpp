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
//  Import from CMSIS-SVD: "Freescale/MKL28Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28Z7
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28Z7 Freescale Microcontroller
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
   * Processor X Configuration Register
   */
  struct CPxCFG%s
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    using DCWY  = regbits< type,  0,  8 >;  /**< Level 1 Data Cache Ways         */
    using DCSZ  = regbits< type,  8,  8 >;  /**< Level 1 Data Cache Size         */
    using ICWY  = regbits< type, 16,  8 >;  /**< Level 1 Instruction Cache Ways  */
    using ICSZ  = regbits< type, 24,  8 >;  /**< Level 1 Instruction Cache Size  */
  };

  /**
   * Processor 0 Type Register
   */
  struct CP0TYPE
  : public reg< uint32_t, base_addr + 0x20, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 >;

    using RYPZ         = regbits< type,  0,  8 >;  /**< Processor x Revision     */
    using PERSONALITY  = regbits< type,  8, 24 >;  /**< Processor x Personality  */
  };

  /**
   * Processor 0 Number Register
   */
  struct CP0NUM
  : public reg< uint32_t, base_addr + 0x24, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0 >;

    using CPN  = regbits< type,  0,  1 >;  /**< Processor x Number  */
  };

  /**
   * Processor 0 Master Register
   */
  struct CP0MASTER
  : public reg< uint32_t, base_addr + 0x28, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0 >;

    using PPN  = regbits< type,  0,  6 >;  /**< Processor x Physical Port Number  */
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
   * Processor 0 Configuration Register
   */
  struct CP0CFG%s
  : public reg< uint32_t, base_addr + 0x30, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0 >;

    using DCWY  = regbits< type,  0,  8 >;  /**< Level 1 Data Cache Ways         */
    using DCSZ  = regbits< type,  8,  8 >;  /**< Level 1 Data Cache Size         */
    using ICWY  = regbits< type, 16,  8 >;  /**< Level 1 Instruction Cache Ways  */
    using ICSZ  = regbits< type, 24,  8 >;  /**< Level 1 Instruction Cache Size  */
  };

  /**
   * On-Chip Memory Descriptor Register
   */
  struct OCMDR%s
  : public reg< uint32_t, base_addr + 0x400, ro, 0x40000000 >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0x40000000 >;

    using OCMPU   = regbits< type, 12,  1 >;  /**< OCMEM Memory Protection Unit. This field is reserved for this device.                        */
    using OCMT    = regbits< type, 13,  3 >;  /**< OCMEM Type. This field defines the type of the on-chip memory:                               */
    using RO      = regbits< type, 16,  1 >;  /**< Read-Only                                                                                    */
    using OCMW    = regbits< type, 17,  3 >;  /**< OCMEM datapath Width. This read-only field defines the width of the on-chip memory:          */
    using OCMSZ   = regbits< type, 24,  4 >;  /**< OCMEM Size                                                                                   */
    using OCMSZH  = regbits< type, 28,  1 >;  /**< OCMEM Size "Hole"                                                                            */
    using V       = regbits< type, 31,  1 >;  /**< OCMEM Valid bit. This read-only field defines the validity (presence) of the on-chip memory  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MSCM_HPP_INCLUDED
