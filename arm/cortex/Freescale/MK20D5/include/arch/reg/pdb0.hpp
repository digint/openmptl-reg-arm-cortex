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
//  Import from CMSIS-SVD: "Freescale/MK20D5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK20D5
//  series: Kinetis_K
//  version: 1.6
//  description: MK20D5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PDB0_HPP_INCLUDED
#define ARCH_REG_PDB0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Programmable Delay Block
 */
struct PDB0
{
  static constexpr reg_addr_t base_addr = 0x40036000;

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
    using PDBIE      = regbits< type,  5,  1 >;  /**< PDB Interrupt Enable.                       */
    using PDBIF      = regbits< type,  6,  1 >;  /**< PDB Interrupt Flag                          */
    using PDBEN      = regbits< type,  7,  1 >;  /**< PDB Enable                                  */
    using TRGSEL     = regbits< type,  8,  4 >;  /**< Trigger Input Source Select                 */
    using PRESCALER  = regbits< type, 12,  3 >;  /**< Prescaler Divider Select                    */
    using DMAEN      = regbits< type, 15,  1 >;  /**< DMA Enable                                  */
    using SWTRIG     = regbits< type, 16,  1 >;  /**< Software Trigger                            */
    using PDBEIE     = regbits< type, 17,  1 >;  /**< PDB Sequence Error Interrupt Enable         */
    using LDMOD      = regbits< type, 18,  2 >;  /**< Load Mode Select                            */
  };

  /**
   * Modulus Register
   */
  struct MOD
  : public reg< uint32_t, base_addr + 0x4, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: MOD
    using MOD_ = regbits< type,  0, 16 >;  /**< PDB Modulus.  */
  };

  /**
   * Counter Register
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_ = regbits< type,  0, 16 >;  /**< PDB Counter  */
  };

  /**
   * Interrupt Delay Register
   */
  struct IDLY
  : public reg< uint32_t, base_addr + 0xc, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: IDLY
    using IDLY_ = regbits< type,  0, 16 >;  /**< PDB Interrupt Delay  */
  };

  /**
   * Channel n Control Register 1
   */
  struct CHC1
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using EN   = regbits< type,  0,  8 >;  /**< PDB Channel Pre-Trigger Enable                         */
    using TOS  = regbits< type,  8,  8 >;  /**< PDB Channel Pre-Trigger Output Select                  */
    using BB   = regbits< type, 16,  8 >;  /**< PDB Channel Pre-Trigger Back-to-Back Operation Enable  */
  };

  /**
   * Channel n Status Register
   */
  struct CHS
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using ERR  = regbits< type,  0,  8 >;  /**< PDB Channel Sequence Error Flags  */
    using CF   = regbits< type, 16,  8 >;  /**< PDB Channel Flags                 */
  };

  /**
   * Channel n Delay 0 Register
   */
  struct CHDLY0
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using DLY  = regbits< type,  0, 16 >;  /**< PDB Channel Delay  */
  };

  /**
   * Channel n Delay 1 Register
   */
  struct CHDLY1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using DLY  = regbits< type,  0, 16 >;  /**< PDB Channel Delay  */
  };

  /**
   * Pulse-Out n Enable Register
   */
  struct POEN
  : public reg< uint32_t, base_addr + 0x190, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0 >;

    // fixme: Field name equals parent register name: POEN
    using POEN_ = regbits< type,  0,  8 >;  /**< PDB Pulse-Out Enable  */
  };

  /**
   * Pulse-Out n Delay Register
   */
  struct PO%sDLY
  : public reg< uint32_t, base_addr + 0x194, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x194, rw, 0 >;

    using DLY2  = regbits< type,  0, 16 >;  /**< PDB Pulse-Out Delay 2  */
    using DLY1  = regbits< type, 16, 16 >;  /**< PDB Pulse-Out Delay 1  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PDB0_HPP_INCLUDED
