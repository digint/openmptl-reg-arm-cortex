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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FMC_HPP_INCLUDED
#define ARCH_REG_FMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Flexible memory controller
 */
struct FMC
{
  static constexpr reg_addr_t base_addr = 0x60000000;

  /**
   * SRAM/NOR-Flash chip-select control register 1
   */
  struct BCR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x000030D0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x000030D0 >;

    using MBKEN      = regbits< type,  0,  1 >;  /**< MBKEN               */
    using MUXEN      = regbits< type,  1,  1 >;  /**< MUXEN               */
    using MTYP       = regbits< type,  2,  2 >;  /**< MTYP                */
    using MWID       = regbits< type,  4,  2 >;  /**< MWID                */
    using FACCEN     = regbits< type,  6,  1 >;  /**< FACCEN              */
    using BURSTEN    = regbits< type,  8,  1 >;  /**< BURSTEN             */
    using WAITPOL    = regbits< type,  9,  1 >;  /**< WAITPOL             */
    using WAITCFG    = regbits< type, 11,  1 >;  /**< WAITCFG             */
    using WREN       = regbits< type, 12,  1 >;  /**< WREN                */
    using WAITEN     = regbits< type, 13,  1 >;  /**< WAITEN              */
    using EXTMOD     = regbits< type, 14,  1 >;  /**< EXTMOD              */
    using ASYNCWAIT  = regbits< type, 15,  1 >;  /**< ASYNCWAIT           */
    using CBURSTRW   = regbits< type, 19,  1 >;  /**< CBURSTRW            */
    using CCLKEN     = regbits< type, 20,  1 >;  /**< CCLKEN              */
    using WFDIS      = regbits< type, 21,  1 >;  /**< Write FIFO Disable  */
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
   * PC Card/NAND Flash control register 3
   */
  struct PCR
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000018 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000018 >;

    using ECCPS    = regbits< type, 17,  3 >;  /**< ECCPS    */
    using TAR      = regbits< type, 13,  4 >;  /**< TAR      */
    using TCLR     = regbits< type,  9,  4 >;  /**< TCLR     */
    using ECCEN    = regbits< type,  6,  1 >;  /**< ECCEN    */
    using PWID     = regbits< type,  4,  2 >;  /**< PWID     */
    using PTYP     = regbits< type,  3,  1 >;  /**< PTYP     */
    using PBKEN    = regbits< type,  2,  1 >;  /**< PBKEN    */
    using PWAITEN  = regbits< type,  1,  1 >;  /**< PWAITEN  */
  };

  /**
   * FIFO status and interrupt register 3
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000040 >;

    using FEMPT  = regbits< type,  6,  1 >;  /**< FEMPT  */
    using IFEN   = regbits< type,  5,  1 >;  /**< IFEN   */
    using ILEN   = regbits< type,  4,  1 >;  /**< ILEN   */
    using IREN   = regbits< type,  3,  1 >;  /**< IREN   */
    using IFS    = regbits< type,  2,  1 >;  /**< IFS    */
    using ILS    = regbits< type,  1,  1 >;  /**< ILS    */
    using IRS    = regbits< type,  0,  1 >;  /**< IRS    */
  };

  /**
   * Common memory space timing register 3
   */
  struct PMEM
  : public reg< uint32_t, base_addr + 0x88, rw, 0xFCFCFCFC >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0xFCFCFCFC >;

    using MEMHIZx   = regbits< type, 24,  8 >;  /**< MEMHIZx   */
    using MEMHOLDx  = regbits< type, 16,  8 >;  /**< MEMHOLDx  */
    using MEMWAITx  = regbits< type,  8,  8 >;  /**< MEMWAITx  */
    using MEMSETx   = regbits< type,  0,  8 >;  /**< MEMSETx   */
  };

  /**
   * Attribute memory space timing register 3
   */
  struct PATT
  : public reg< uint32_t, base_addr + 0x8c, rw, 0xFCFCFCFC >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0xFCFCFCFC >;

    using ATTHIZx   = regbits< type, 24,  8 >;  /**< ATTHIZx   */
    using ATTHOLDx  = regbits< type, 16,  8 >;  /**< ATTHOLDx  */
    using ATTWAITx  = regbits< type,  8,  8 >;  /**< ATTWAITx  */
    using ATTSETx   = regbits< type,  0,  8 >;  /**< ATTSETx   */
  };

  /**
   * ECC result register 3
   */
  struct ECCR
  : public reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >;

    using ECCx  = regbits< type,  0, 32 >;  /**< ECCx  */
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

#endif // ARCH_REG_FMC_HPP_INCLUDED
