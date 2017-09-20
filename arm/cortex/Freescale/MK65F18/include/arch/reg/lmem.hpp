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
//  Import from CMSIS-SVD: "Freescale/MK65F18.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK65F18
//  series: Kinetis_K
//  version: 1.6
//  description: MK65F18 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LMEM_HPP_INCLUDED
#define ARCH_REG_LMEM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Local Memory Controller
 */
struct LMEM
{
  static constexpr reg_addr_t base_addr = 0xe0082000;

  /**
   * Cache control register
   */
  struct PCCCR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using ENCACHE  = regbits< type,  0,  1 >;  /**< Cache enable                                                          */
    using ENWRBUF  = regbits< type,  1,  1 >;  /**< Enable Write Buffer                                                   */
    using PCCR2    = regbits< type,  2,  1 >;  /**< Forces all cacheable spaces to write through                          */
    using PCCR3    = regbits< type,  3,  1 >;  /**< Forces no allocation on cache misses (must also have PCCR2 asserted)  */
    using INVW0    = regbits< type, 24,  1 >;  /**< Invalidate Way 0                                                      */
    using PUSHW0   = regbits< type, 25,  1 >;  /**< Push Way 0                                                            */
    using INVW1    = regbits< type, 26,  1 >;  /**< Invalidate Way 1                                                      */
    using PUSHW1   = regbits< type, 27,  1 >;  /**< Push Way 1                                                            */
    using GO       = regbits< type, 31,  1 >;  /**< Initiate Cache Command                                                */
  };

  /**
   * Cache line control register
   */
  struct PCCLCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using LGO        = regbits< type,  0,  1 >;  /**< Initiate Cache Line Command        */
    using CACHEADDR  = regbits< type,  2, 10 >;  /**< Cache address                      */
    using WSEL       = regbits< type, 14,  1 >;  /**< Way select                         */
    using TDSEL      = regbits< type, 16,  1 >;  /**< Tag/Data Select                    */
    using LCIVB      = regbits< type, 20,  1 >;  /**< Line Command Initial Valid Bit     */
    using LCIMB      = regbits< type, 21,  1 >;  /**< Line Command Initial Modified Bit  */
    using LCWAY      = regbits< type, 22,  1 >;  /**< Line Command Way                   */
    using LCMD       = regbits< type, 24,  2 >;  /**< Line Command                       */
    using LADSEL     = regbits< type, 26,  1 >;  /**< Line Address Select                */
    using LACC       = regbits< type, 27,  1 >;  /**< Line access type                   */
  };

  /**
   * Cache search address register
   */
  struct PCCSAR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using LGO      = regbits< type,  0,  1 >;  /**< Initiate Cache Line Command  */
    using PHYADDR  = regbits< type,  2, 30 >;  /**< Physical Address             */
  };

  /**
   * Cache read/write value register
   */
  struct PCCCVR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Cache read/write Data  */
  };

  /**
   * Cache regions mode register
   */
  struct PCCRMR
  : public reg< uint32_t, base_addr + 0x20, rw, 0xAA0FA000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0xAA0FA000 >;

    using R15  = regbits< type,  0,  2 >;  /**< Region 15 mode  */
    using R14  = regbits< type,  2,  2 >;  /**< Region 14 mode  */
    using R13  = regbits< type,  4,  2 >;  /**< Region 13 mode  */
    using R12  = regbits< type,  6,  2 >;  /**< Region 12 mode  */
    using R11  = regbits< type,  8,  2 >;  /**< Region 11 mode  */
    using R10  = regbits< type, 10,  2 >;  /**< Region 10 mode  */
    using R9   = regbits< type, 12,  2 >;  /**< Region 9 mode   */
    using R8   = regbits< type, 14,  2 >;  /**< Region 8 mode   */
    using R7   = regbits< type, 16,  2 >;  /**< Region 7 mode   */
    using R6   = regbits< type, 18,  2 >;  /**< Region 6 mode   */
    using R5   = regbits< type, 20,  2 >;  /**< Region 5 mode   */
    using R4   = regbits< type, 22,  2 >;  /**< Region 4 mode   */
    using R3   = regbits< type, 24,  2 >;  /**< Region 3 mode   */
    using R2   = regbits< type, 26,  2 >;  /**< Region 2 mode   */
    using R1   = regbits< type, 28,  2 >;  /**< Region 1 mode   */
    using R0   = regbits< type, 30,  2 >;  /**< Region 0 mode   */
  };
};
} // namespace mptl

#endif // ARCH_REG_LMEM_HPP_INCLUDED
