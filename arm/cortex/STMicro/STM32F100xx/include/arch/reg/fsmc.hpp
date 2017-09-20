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
//  Import from CMSIS-SVD: "STMicro/STM32F100xx.svd"
//
//  name: STM32F100xx
//  version: 1.1
//  description: STM32F100xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FSMC_HPP_INCLUDED
#define ARCH_REG_FSMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Flexible static memory controller
 */
struct FSMC
{
  static constexpr reg_addr_t base_addr = 0xa0000000;

  /**
   * SRAM/NOR-Flash chip-select control register 1
   */
  struct BCR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x000030D0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x000030D0 >;

    using CBURSTRW   = regbits< type, 19,  1 >;  /**< CBURSTRW   */
    using ASYNCWAIT  = regbits< type, 15,  1 >;  /**< ASYNCWAIT  */
    using EXTMOD     = regbits< type, 14,  1 >;  /**< EXTMOD     */
    using WAITEN     = regbits< type, 13,  1 >;  /**< WAITEN     */
    using WREN       = regbits< type, 12,  1 >;  /**< WREN       */
    using WAITCFG    = regbits< type, 11,  1 >;  /**< WAITCFG    */
    using WAITPOL    = regbits< type,  9,  1 >;  /**< WAITPOL    */
    using BURSTEN    = regbits< type,  8,  1 >;  /**< BURSTEN    */
    using FACCEN     = regbits< type,  6,  1 >;  /**< FACCEN     */
    using MWID       = regbits< type,  4,  2 >;  /**< MWID       */
    using MTYP       = regbits< type,  2,  2 >;  /**< MTYP       */
    using MUXEN      = regbits< type,  1,  1 >;  /**< MUXEN      */
    using MBKEN      = regbits< type,  0,  1 >;  /**< MBKEN      */
  };

  /**
   * SRAM/NOR-Flash chip-select timing register 1
   */
  struct BTR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xFFFFFFFF >;

    using ACCMOD   = regbits< type, 28,  2 >;  /**< ACCMOD   */
    using DATLAT   = regbits< type, 24,  4 >;  /**< DATLAT   */
    using CLKDIV   = regbits< type, 20,  4 >;  /**< CLKDIV   */
    using BUSTURN  = regbits< type, 16,  4 >;  /**< BUSTURN  */
    using DATAST   = regbits< type,  8,  8 >;  /**< DATAST   */
    using ADDHLD   = regbits< type,  4,  4 >;  /**< ADDHLD   */
    using ADDSET   = regbits< type,  0,  4 >;  /**< ADDSET   */
  };

  /**
   * SRAM/NOR-Flash chip-select control register 2
   */
  struct BCR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x000030D0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x000030D0 >;

    using CBURSTRW   = regbits< type, 19,  1 >;  /**< CBURSTRW   */
    using ASYNCWAIT  = regbits< type, 15,  1 >;  /**< ASYNCWAIT  */
    using EXTMOD     = regbits< type, 14,  1 >;  /**< EXTMOD     */
    using WAITEN     = regbits< type, 13,  1 >;  /**< WAITEN     */
    using WREN       = regbits< type, 12,  1 >;  /**< WREN       */
    using WAITCFG    = regbits< type, 11,  1 >;  /**< WAITCFG    */
    using WRAPMOD    = regbits< type, 10,  1 >;  /**< WRAPMOD    */
    using WAITPOL    = regbits< type,  9,  1 >;  /**< WAITPOL    */
    using BURSTEN    = regbits< type,  8,  1 >;  /**< BURSTEN    */
    using FACCEN     = regbits< type,  6,  1 >;  /**< FACCEN     */
    using MWID       = regbits< type,  4,  2 >;  /**< MWID       */
    using MTYP       = regbits< type,  2,  2 >;  /**< MTYP       */
    using MUXEN      = regbits< type,  1,  1 >;  /**< MUXEN      */
    using MBKEN      = regbits< type,  0,  1 >;  /**< MBKEN      */
  };

  /**
   * SRAM/NOR-Flash chip-select timing register 2
   */
  struct BTR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0xFFFFFFFF >;

    using ACCMOD   = regbits< type, 28,  2 >;  /**< ACCMOD   */
    using DATLAT   = regbits< type, 24,  4 >;  /**< DATLAT   */
    using CLKDIV   = regbits< type, 20,  4 >;  /**< CLKDIV   */
    using BUSTURN  = regbits< type, 16,  4 >;  /**< BUSTURN  */
    using DATAST   = regbits< type,  8,  8 >;  /**< DATAST   */
    using ADDHLD   = regbits< type,  4,  4 >;  /**< ADDHLD   */
    using ADDSET   = regbits< type,  0,  4 >;  /**< ADDSET   */
  };

  /**
   * SRAM/NOR-Flash chip-select control register 3
   */
  struct BCR3
  : public reg< uint32_t, base_addr + 0x10, rw, 0x000030D0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x000030D0 >;

    using CBURSTRW   = regbits< type, 19,  1 >;  /**< CBURSTRW   */
    using ASYNCWAIT  = regbits< type, 15,  1 >;  /**< ASYNCWAIT  */
    using EXTMOD     = regbits< type, 14,  1 >;  /**< EXTMOD     */
    using WAITEN     = regbits< type, 13,  1 >;  /**< WAITEN     */
    using WREN       = regbits< type, 12,  1 >;  /**< WREN       */
    using WAITCFG    = regbits< type, 11,  1 >;  /**< WAITCFG    */
    using WRAPMOD    = regbits< type, 10,  1 >;  /**< WRAPMOD    */
    using WAITPOL    = regbits< type,  9,  1 >;  /**< WAITPOL    */
    using BURSTEN    = regbits< type,  8,  1 >;  /**< BURSTEN    */
    using FACCEN     = regbits< type,  6,  1 >;  /**< FACCEN     */
    using MWID       = regbits< type,  4,  2 >;  /**< MWID       */
    using MTYP       = regbits< type,  2,  2 >;  /**< MTYP       */
    using MUXEN      = regbits< type,  1,  1 >;  /**< MUXEN      */
    using MBKEN      = regbits< type,  0,  1 >;  /**< MBKEN      */
  };

  /**
   * SRAM/NOR-Flash chip-select timing register 3
   */
  struct BTR3
  : public reg< uint32_t, base_addr + 0x14, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0xFFFFFFFF >;

    using ACCMOD   = regbits< type, 28,  2 >;  /**< ACCMOD   */
    using DATLAT   = regbits< type, 24,  4 >;  /**< DATLAT   */
    using CLKDIV   = regbits< type, 20,  4 >;  /**< CLKDIV   */
    using BUSTURN  = regbits< type, 16,  4 >;  /**< BUSTURN  */
    using DATAST   = regbits< type,  8,  8 >;  /**< DATAST   */
    using ADDHLD   = regbits< type,  4,  4 >;  /**< ADDHLD   */
    using ADDSET   = regbits< type,  0,  4 >;  /**< ADDSET   */
  };

  /**
   * SRAM/NOR-Flash chip-select control register 4
   */
  struct BCR4
  : public reg< uint32_t, base_addr + 0x18, rw, 0x000030D0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x000030D0 >;

    using CBURSTRW   = regbits< type, 19,  1 >;  /**< CBURSTRW   */
    using ASYNCWAIT  = regbits< type, 15,  1 >;  /**< ASYNCWAIT  */
    using EXTMOD     = regbits< type, 14,  1 >;  /**< EXTMOD     */
    using WAITEN     = regbits< type, 13,  1 >;  /**< WAITEN     */
    using WREN       = regbits< type, 12,  1 >;  /**< WREN       */
    using WAITCFG    = regbits< type, 11,  1 >;  /**< WAITCFG    */
    using WRAPMOD    = regbits< type, 10,  1 >;  /**< WRAPMOD    */
    using WAITPOL    = regbits< type,  9,  1 >;  /**< WAITPOL    */
    using BURSTEN    = regbits< type,  8,  1 >;  /**< BURSTEN    */
    using FACCEN     = regbits< type,  6,  1 >;  /**< FACCEN     */
    using MWID       = regbits< type,  4,  2 >;  /**< MWID       */
    using MTYP       = regbits< type,  2,  2 >;  /**< MTYP       */
    using MUXEN      = regbits< type,  1,  1 >;  /**< MUXEN      */
    using MBKEN      = regbits< type,  0,  1 >;  /**< MBKEN      */
  };

  /**
   * SRAM/NOR-Flash chip-select timing register 4
   */
  struct BTR4
  : public reg< uint32_t, base_addr + 0x1c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0xFFFFFFFF >;

    using ACCMOD   = regbits< type, 28,  2 >;  /**< ACCMOD   */
    using DATLAT   = regbits< type, 24,  4 >;  /**< DATLAT   */
    using CLKDIV   = regbits< type, 20,  4 >;  /**< CLKDIV   */
    using BUSTURN  = regbits< type, 16,  4 >;  /**< BUSTURN  */
    using DATAST   = regbits< type,  8,  8 >;  /**< DATAST   */
    using ADDHLD   = regbits< type,  4,  4 >;  /**< ADDHLD   */
    using ADDSET   = regbits< type,  0,  4 >;  /**< ADDSET   */
  };

  /**
   * SRAM/NOR-Flash write timing registers 1
   */
  struct BWTR1
  : public reg< uint32_t, base_addr + 0x104, rw, 0x0FFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x0FFFFFFF >;

    using ACCMOD  = regbits< type, 28,  2 >;  /**< ACCMOD  */
    using DATLAT  = regbits< type, 24,  4 >;  /**< DATLAT  */
    using CLKDIV  = regbits< type, 20,  4 >;  /**< CLKDIV  */
    using DATAST  = regbits< type,  8,  8 >;  /**< DATAST  */
    using ADDHLD  = regbits< type,  4,  4 >;  /**< ADDHLD  */
    using ADDSET  = regbits< type,  0,  4 >;  /**< ADDSET  */
  };

  /**
   * SRAM/NOR-Flash write timing registers 2
   */
  struct BWTR2
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x0FFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x0FFFFFFF >;

    using ACCMOD  = regbits< type, 28,  2 >;  /**< ACCMOD  */
    using DATLAT  = regbits< type, 24,  4 >;  /**< DATLAT  */
    using CLKDIV  = regbits< type, 20,  4 >;  /**< CLKDIV  */
    using DATAST  = regbits< type,  8,  8 >;  /**< DATAST  */
    using ADDHLD  = regbits< type,  4,  4 >;  /**< ADDHLD  */
    using ADDSET  = regbits< type,  0,  4 >;  /**< ADDSET  */
  };

  /**
   * SRAM/NOR-Flash write timing registers 3
   */
  struct BWTR3
  : public reg< uint32_t, base_addr + 0x114, rw, 0x0FFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x0FFFFFFF >;

    using ACCMOD  = regbits< type, 28,  2 >;  /**< ACCMOD  */
    using DATLAT  = regbits< type, 24,  4 >;  /**< DATLAT  */
    using CLKDIV  = regbits< type, 20,  4 >;  /**< CLKDIV  */
    using DATAST  = regbits< type,  8,  8 >;  /**< DATAST  */
    using ADDHLD  = regbits< type,  4,  4 >;  /**< ADDHLD  */
    using ADDSET  = regbits< type,  0,  4 >;  /**< ADDSET  */
  };

  /**
   * SRAM/NOR-Flash write timing registers 4
   */
  struct BWTR4
  : public reg< uint32_t, base_addr + 0x11c, rw, 0x0FFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0x0FFFFFFF >;

    using ACCMOD  = regbits< type, 28,  2 >;  /**< ACCMOD  */
    using DATLAT  = regbits< type, 24,  4 >;  /**< DATLAT  */
    using CLKDIV  = regbits< type, 20,  4 >;  /**< CLKDIV  */
    using DATAST  = regbits< type,  8,  8 >;  /**< DATAST  */
    using ADDHLD  = regbits< type,  4,  4 >;  /**< ADDHLD  */
    using ADDSET  = regbits< type,  0,  4 >;  /**< ADDSET  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FSMC_HPP_INCLUDED
