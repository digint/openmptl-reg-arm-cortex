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
//  Import from CMSIS-SVD: "STMicro/STM32F446x.svd"
//
//  name: STM32F446x
//  version: 1.0
//  description: STM32F446x
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
  static constexpr reg_addr_t base_addr = 0xa0000000;

  /**
   * SRAM/NOR-Flash chip-select control register 1
   */
  struct BCR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x000030D0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x000030D0 >;

    using CCLKEN     = regbits< type, 20,  1 >;  /**< CCLKEN     */
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
   * PC Card/NAND Flash control register 2
   */
  struct PCR2
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000018 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000018 >;

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
   * FIFO status and interrupt register 2
   */
  struct SR2
  : public reg< uint32_t, base_addr + 0x64, rw, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x00000040 >;

    using FEMPT  = regbits< type,  6,  1 >;  /**< FEMPT  */
    using IFEN   = regbits< type,  5,  1 >;  /**< IFEN   */
    using ILEN   = regbits< type,  4,  1 >;  /**< ILEN   */
    using IREN   = regbits< type,  3,  1 >;  /**< IREN   */
    using IFS    = regbits< type,  2,  1 >;  /**< IFS    */
    using ILS    = regbits< type,  1,  1 >;  /**< ILS    */
    using IRS    = regbits< type,  0,  1 >;  /**< IRS    */
  };

  /**
   * Common memory space timing register 2
   */
  struct PMEM2
  : public reg< uint32_t, base_addr + 0x68, rw, 0xFCFCFCFC >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0xFCFCFCFC >;

    using MEMHIZx   = regbits< type, 24,  8 >;  /**< MEMHIZx   */
    using MEMHOLDx  = regbits< type, 16,  8 >;  /**< MEMHOLDx  */
    using MEMWAITx  = regbits< type,  8,  8 >;  /**< MEMWAITx  */
    using MEMSETx   = regbits< type,  0,  8 >;  /**< MEMSETx   */
  };

  /**
   * Attribute memory space timing register 2
   */
  struct PATT2
  : public reg< uint32_t, base_addr + 0x6c, rw, 0xFCFCFCFC >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0xFCFCFCFC >;

    using ATTHIZx   = regbits< type, 24,  8 >;  /**< ATTHIZx   */
    using ATTHOLDx  = regbits< type, 16,  8 >;  /**< ATTHOLDx  */
    using ATTWAITx  = regbits< type,  8,  8 >;  /**< ATTWAITx  */
    using ATTSETx   = regbits< type,  0,  8 >;  /**< ATTSETx   */
  };

  /**
   * ECC result register 2
   */
  struct ECCR2
  : public reg< uint32_t, base_addr + 0x74, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0x00000000 >;

    using ECCx  = regbits< type,  0, 32 >;  /**< ECCx  */
  };

  /**
   * PC Card/NAND Flash control register 3
   */
  struct PCR3
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
  struct SR3
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
  struct PMEM3
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
  struct PATT3
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
  struct ECCR3
  : public reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >;

    using ECCx  = regbits< type,  0, 32 >;  /**< ECCx  */
  };

  /**
   * PC Card/NAND Flash control register 4
   */
  struct PCR4
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x00000018 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x00000018 >;

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
   * FIFO status and interrupt register 4
   */
  struct SR4
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x00000040 >;

    using FEMPT  = regbits< type,  6,  1 >;  /**< FEMPT  */
    using IFEN   = regbits< type,  5,  1 >;  /**< IFEN   */
    using ILEN   = regbits< type,  4,  1 >;  /**< ILEN   */
    using IREN   = regbits< type,  3,  1 >;  /**< IREN   */
    using IFS    = regbits< type,  2,  1 >;  /**< IFS    */
    using ILS    = regbits< type,  1,  1 >;  /**< ILS    */
    using IRS    = regbits< type,  0,  1 >;  /**< IRS    */
  };

  /**
   * Common memory space timing register 4
   */
  struct PMEM4
  : public reg< uint32_t, base_addr + 0xa8, rw, 0xFCFCFCFC >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0xFCFCFCFC >;

    using MEMHIZx   = regbits< type, 24,  8 >;  /**< MEMHIZx   */
    using MEMHOLDx  = regbits< type, 16,  8 >;  /**< MEMHOLDx  */
    using MEMWAITx  = regbits< type,  8,  8 >;  /**< MEMWAITx  */
    using MEMSETx   = regbits< type,  0,  8 >;  /**< MEMSETx   */
  };

  /**
   * Attribute memory space timing register 4
   */
  struct PATT4
  : public reg< uint32_t, base_addr + 0xac, rw, 0xFCFCFCFC >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0xFCFCFCFC >;

    using ATTHIZx   = regbits< type, 24,  8 >;  /**< ATTHIZx   */
    using ATTHOLDx  = regbits< type, 16,  8 >;  /**< ATTHOLDx  */
    using ATTWAITx  = regbits< type,  8,  8 >;  /**< ATTWAITx  */
    using ATTSETx   = regbits< type,  0,  8 >;  /**< ATTSETx   */
  };

  /**
   * I/O space timing register 4
   */
  struct PIO4
  : public reg< uint32_t, base_addr + 0xb0, rw, 0xFCFCFCFC >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0xFCFCFCFC >;

    using IOHIZx   = regbits< type, 24,  8 >;  /**< IOHIZx   */
    using IOHOLDx  = regbits< type, 16,  8 >;  /**< IOHOLDx  */
    using IOWAITx  = regbits< type,  8,  8 >;  /**< IOWAITx  */
    using IOSETx   = regbits< type,  0,  8 >;  /**< IOSETx   */
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

  /**
   * SDRAM Control Register 1
   */
  struct SDCR1
  : public reg< uint32_t, base_addr + 0x140, rw, 0x000002D0 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0x000002D0 >;

    using NC      = regbits< type,  0,  2 >;  /**< Number of column address bits  */
    using NR      = regbits< type,  2,  2 >;  /**< Number of row address bits     */
    using MWID    = regbits< type,  4,  2 >;  /**< Memory data bus width          */
    using NB      = regbits< type,  6,  1 >;  /**< Number of internal banks       */
    using CAS     = regbits< type,  7,  2 >;  /**< CAS latency                    */
    using WP      = regbits< type,  9,  1 >;  /**< Write protection               */
    using SDCLK   = regbits< type, 10,  2 >;  /**< SDRAM clock configuration      */
    using RBURST  = regbits< type, 12,  1 >;  /**< Burst read                     */
    using RPIPE   = regbits< type, 13,  2 >;  /**< Read pipe                      */
  };

  /**
   * SDRAM Control Register 2
   */
  struct SDCR2
  : public reg< uint32_t, base_addr + 0x144, rw, 0x000002D0 >
  {
    using type = reg< uint32_t, base_addr + 0x144, rw, 0x000002D0 >;

    using NC      = regbits< type,  0,  2 >;  /**< Number of column address bits  */
    using NR      = regbits< type,  2,  2 >;  /**< Number of row address bits     */
    using MWID    = regbits< type,  4,  2 >;  /**< Memory data bus width          */
    using NB      = regbits< type,  6,  1 >;  /**< Number of internal banks       */
    using CAS     = regbits< type,  7,  2 >;  /**< CAS latency                    */
    using WP      = regbits< type,  9,  1 >;  /**< Write protection               */
    using SDCLK   = regbits< type, 10,  2 >;  /**< SDRAM clock configuration      */
    using RBURST  = regbits< type, 12,  1 >;  /**< Burst read                     */
    using RPIPE   = regbits< type, 13,  2 >;  /**< Read pipe                      */
  };

  /**
   * SDRAM Timing register 1
   */
  struct SDTR1
  : public reg< uint32_t, base_addr + 0x148, rw, 0x0FFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x148, rw, 0x0FFFFFFF >;

    using TMRD  = regbits< type,  0,  4 >;  /**< Load Mode Register to Active  */
    using TXSR  = regbits< type,  4,  4 >;  /**< Exit self-refresh delay       */
    using TRAS  = regbits< type,  8,  4 >;  /**< Self refresh time             */
    using TRC   = regbits< type, 12,  4 >;  /**< Row cycle delay               */
    using TWR   = regbits< type, 16,  4 >;  /**< Recovery delay                */
    using TRP   = regbits< type, 20,  4 >;  /**< Row precharge delay           */
    using TRCD  = regbits< type, 24,  4 >;  /**< Row to column delay           */
  };

  /**
   * SDRAM Timing register 2
   */
  struct SDTR2
  : public reg< uint32_t, base_addr + 0x14c, rw, 0x0FFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x14c, rw, 0x0FFFFFFF >;

    using TMRD  = regbits< type,  0,  4 >;  /**< Load Mode Register to Active  */
    using TXSR  = regbits< type,  4,  4 >;  /**< Exit self-refresh delay       */
    using TRAS  = regbits< type,  8,  4 >;  /**< Self refresh time             */
    using TRC   = regbits< type, 12,  4 >;  /**< Row cycle delay               */
    using TWR   = regbits< type, 16,  4 >;  /**< Recovery delay                */
    using TRP   = regbits< type, 20,  4 >;  /**< Row precharge delay           */
    using TRCD  = regbits< type, 24,  4 >;  /**< Row to column delay           */
  };

  /**
   * SDRAM Command Mode register
   */
  struct SDCMR
  : public reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >;

    using MODE  = regbits< type,  0,  3 >;  /**< Command mode              */
    using CTB2  = regbits< type,  3,  1 >;  /**< Command target bank 2     */
    using CTB1  = regbits< type,  4,  1 >;  /**< Command target bank 1     */
    using NRFS  = regbits< type,  5,  4 >;  /**< Number of Auto-refresh    */
    using MRD   = regbits< type,  9, 13 >;  /**< Mode Register definition  */
  };

  /**
   * SDRAM Refresh Timer register
   */
  struct SDRTR
  : public reg< uint32_t, base_addr + 0x154, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0x00000000 >;

    using CRE    = regbits< type,  0,  1 >;  /**< Clear Refresh error flag  */
    using COUNT  = regbits< type,  1, 13 >;  /**< Refresh Timer Count       */
    using REIE   = regbits< type, 14,  1 >;  /**< RES Interrupt Enable      */
  };

  /**
   * SDRAM Status register
   */
  struct SDSR
  : public reg< uint32_t, base_addr + 0x158, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x158, ro, 0x00000000 >;

    using RE      = regbits< type,  0,  1 >;  /**< Refresh error flag      */
    using MODES1  = regbits< type,  1,  2 >;  /**< Status Mode for Bank 1  */
    using MODES2  = regbits< type,  3,  2 >;  /**< Status Mode for Bank 2  */
    using BUSY    = regbits< type,  5,  1 >;  /**< Busy status             */
  };
};
} // namespace mptl

#endif // ARCH_REG_FMC_HPP_INCLUDED
