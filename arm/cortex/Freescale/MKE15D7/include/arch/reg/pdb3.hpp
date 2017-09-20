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
//  Import from CMSIS-SVD: "Freescale/MKE15D7.svd"
//
//  name: MKE15D7
//  version: 1.6
//  description: MKE15D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PDB3_HPP_INCLUDED
#define ARCH_REG_PDB3_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Programmable Delay Block
 */
struct PDB3
{
  static constexpr reg_addr_t base_addr = 0x40028000;

  /**
   * Status and Control Register
   */
  struct SC
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using LDOK       = regbits< type,  0,  1 >;  /**< Load OK                                     */
    using CONT       = regbits< type,  1,  1 >;  /**< Continuous Mode Enable                      */
    using MULT       = regbits< type,  2,  2 >;  /**< Multiplication Factor Select for Prescaler  */
    using RESERVED   = regbits< type,  4,  1 >;  /**< no description available                    */
    using PDBIE      = regbits< type,  5,  1 >;  /**< PDB Interrupt Enable.                       */
    using PDBIF      = regbits< type,  6,  1 >;  /**< PDB Interrupt Flag                          */
    using PDBEN      = regbits< type,  7,  1 >;  /**< PDB Enable                                  */
    using TRGSEL     = regbits< type,  8,  4 >;  /**< Trigger Input Source Select                 */
    using PRESCALER  = regbits< type, 12,  3 >;  /**< Prescaler Divider Select                    */
    using DMAEN      = regbits< type, 15,  1 >;  /**< DMA Enable                                  */
    using SWTRIG     = regbits< type, 16,  1 >;  /**< Software Trigger                            */
    using PDBEIE     = regbits< type, 17,  1 >;  /**< PDB Sequence Error Interrupt Enable         */
    using LDMOD      = regbits< type, 18,  2 >;  /**< Load Mode Select                            */
    using RESERVED   = regbits< type, 20, 12 >;  /**< no description available                    */
  };

  /**
   * Modulus Register
   */
  struct MOD
  : public reg< uint32_t, base_addr + 0x4, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: MOD
    using MOD_      = regbits< type,  0, 16 >;  /**< PDB Modulus               */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * Counter Register
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_      = regbits< type,  0, 16 >;  /**< PDB Counter               */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * Interrupt Delay Register
   */
  struct IDLY
  : public reg< uint32_t, base_addr + 0xc, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: IDLY
    using IDLY_     = regbits< type,  0, 16 >;  /**< PDB Interrupt Delay       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * Channel n Control Register 1
   */
  struct CHC1
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using EN        = regbits< type,  0,  8 >;  /**< PDB Channel Pre-Trigger Enable         */
    using TOS       = regbits< type,  8,  8 >;  /**< PDB Channel Pre-Trigger Output Select  */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available               */
  };

  /**
   * Channel n Status Register
   */
  struct CHS
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using ERR       = regbits< type,  0,  8 >;  /**< PDB Channel Sequence Error Flags  */
    using RESERVED  = regbits< type,  8,  8 >;  /**< no description available          */
    using CF        = regbits< type, 16,  8 >;  /**< PDB Channel Flags                 */
    using RESERVED  = regbits< type, 24,  8 >;  /**< no description available          */
  };

  /**
   * Channel n Delay 0 Register
   */
  struct CHDLY0
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using DLY       = regbits< type,  0, 16 >;  /**< PDB Channel Delay         */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * Channel n Delay 1 Register
   */
  struct CHDLY1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using DLY       = regbits< type,  0, 16 >;  /**< PDB Channel Delay         */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * Channel n Delay 2 Register
   */
  struct CHDLY2
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using DLY       = regbits< type,  0, 16 >;  /**< PDB Channel Delay         */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * Channel n Delay 3 Register
   */
  struct CHDLY3
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using DLY       = regbits< type,  0, 16 >;  /**< PDB Channel Delay         */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * Pulse-Out n Enable Register
   */
  struct POEN
  : public reg< uint32_t, base_addr + 0x190, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0 >;

    // fixme: Field name equals parent register name: POEN
    using POEN_     = regbits< type,  0,  8 >;  /**< PDB Pulse-Out Enable      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available  */
  };

  /**
   * Pulse-Out n Delay Register
   */
  struct PODLY
  : public reg< uint32_t, base_addr + 0x194, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x194, rw, 0 >;

    using DLY2  = regbits< type,  0, 16 >;  /**< PDB Pulse-Out Delay 2  */
    using DLY1  = regbits< type, 16, 16 >;  /**< PDB Pulse-Out Delay 1  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PDB3_HPP_INCLUDED
