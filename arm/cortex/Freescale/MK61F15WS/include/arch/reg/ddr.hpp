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
//  Import from CMSIS-SVD: "Freescale/MK61F15WS.svd"
//
//  name: MK61F15WS
//  version: 1.6
//  description: MK61F15WS Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DDR_HPP_INCLUDED
#define ARCH_REG_DDR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * DRAM Controller
 */
struct DDR
{
  static constexpr reg_addr_t base_addr = 0x400ae000;

  /**
   * DDR Control Register 0
   */
  struct CR00
  : public reg< uint32_t, base_addr + 0, rw, 0x20400000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x20400000 >;

    using START     = regbits< type,  0,  1 >;  /**< Start       */
    using RESERVED  = regbits< type,  1,  7 >;  /**< Reserved    */
    using DDRCLS    = regbits< type,  8,  4 >;  /**< DRAM Class  */
    using RESERVED  = regbits< type, 12,  4 >;  /**< Reserved    */
    using VERSION   = regbits< type, 16, 16 >;  /**< Version     */
  };

  /**
   * DDR Control Register 1
   */
  struct CR01
  : public reg< uint32_t, base_addr + 0x4, ro, 0x20B10 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x20B10 >;

    using MAXROW    = regbits< type,  0,  5 >;  /**< Maxmum Row           */
    using RESERVED  = regbits< type,  5,  3 >;  /**< Reserved             */
    using MAXCOL    = regbits< type,  8,  4 >;  /**< Maximum Column       */
    using RESERVED  = regbits< type, 12,  4 >;  /**< Reserved             */
    using CSMAX     = regbits< type, 16,  2 >;  /**< Chip Select Maximum  */
    using RESERVED  = regbits< type, 18, 14 >;  /**< Reserved             */
  };

  /**
   * DDR Control Register 2
   */
  struct CR02
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using TINIT     = regbits< type,  0, 24 >;  /**< Time Initialization          */
    using INITAREF  = regbits< type, 24,  4 >;  /**< Initialization Auto-Refresh  */
    using RESERVED  = regbits< type, 28,  4 >;  /**< Reserved                     */
  };

  /**
   * DDR Control Register 3
   */
  struct CR03
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using LATLIN    = regbits< type,  0,  4 >;  /**< Latency Linear         */
    using RESERVED  = regbits< type,  4,  4 >;  /**< Reserved               */
    using LATGATE   = regbits< type,  8,  4 >;  /**< Latency Gate           */
    using RESERVED  = regbits< type, 12,  4 >;  /**< Reserved               */
    using WRLAT     = regbits< type, 16,  4 >;  /**< Write Latency          */
    using RESERVED  = regbits< type, 20,  4 >;  /**< Reserved               */
    using TCCD      = regbits< type, 24,  5 >;  /**< Time CAS-to-CAS Delay  */
    using RESERVED  = regbits< type, 29,  3 >;  /**< Reserved               */
  };

  /**
   * DDR Control Register 4
   */
  struct CR04
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using TBINT     = regbits< type,  0,  3 >;  /**< Time Burst Interrupt Interval  */
    using RESERVED  = regbits< type,  3,  5 >;  /**< Reserved                       */
    using TRRD      = regbits< type,  8,  3 >;  /**< no description available       */
    using RESERVED  = regbits< type, 11,  5 >;  /**< Reserved                       */
    using TRC       = regbits< type, 16,  6 >;  /**< no description available       */
    using RESERVED  = regbits< type, 22,  2 >;  /**< Reserved                       */
    using TRASMIN   = regbits< type, 24,  8 >;  /**< Time RAS Minimum               */
  };

  /**
   * DDR Control Register 5
   */
  struct CR05
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using TWTR      = regbits< type,  0,  4 >;  /**< Time Write-To-Read        */
    using RESERVED  = regbits< type,  4,  4 >;  /**< Reserved                  */
    using TRP       = regbits< type,  8,  4 >;  /**< no description available  */
    using RESERVED  = regbits< type, 12,  4 >;  /**< Reserved                  */
    using TRTP      = regbits< type, 16,  3 >;  /**< Time Read-To-Precharge    */
    using RESERVED  = regbits< type, 19,  5 >;  /**< Reserved                  */
    using TMRD      = regbits< type, 24,  5 >;  /**< no description available  */
    using RESERVED  = regbits< type, 29,  3 >;  /**< Reserved                  */
  };

  /**
   * DDR Control Register 6
   */
  struct CR06
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using TMOD      = regbits< type,  0,  8 >;  /**< Time Mode                */
    using TRASMAX   = regbits< type,  8, 16 >;  /**< Time Row Access Maximum  */
    using INTWBR    = regbits< type, 24,  1 >;  /**< Interrupt Write Burst    */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved                 */
  };

  /**
   * DDR Control Register 7
   */
  struct CR07
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using CLKPW     = regbits< type,  0,  3 >;  /**< Clock Pulse Width                 */
    using RESERVED  = regbits< type,  3,  5 >;  /**< Reserved                          */
    using TCKESR    = regbits< type,  8,  5 >;  /**< Time Clock low Self Refresh       */
    using RESERVED  = regbits< type, 13,  3 >;  /**< Reserved                          */
    using AP        = regbits< type, 16,  1 >;  /**< Auto Precharge                    */
    using RESERVED  = regbits< type, 17,  7 >;  /**< Reserved                          */
    using CCAPEN    = regbits< type, 24,  1 >;  /**< Concurrent Auto-Precharge Enable  */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved                          */
  };

  /**
   * DDR Control Register 8
   */
  struct CR08
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using TRAS      = regbits< type,  0,  1 >;  /**< Time RAS lockout                */
    using RESERVED  = regbits< type,  1,  7 >;  /**< Reserved                        */
    using TRASDI    = regbits< type,  8,  8 >;  /**< Time RAS-to-CAS Delay Interval  */
    using TWR       = regbits< type, 16,  5 >;  /**< Time Write Recovery             */
    using RESERVED  = regbits< type, 21,  3 >;  /**< Reserved                        */
    using TDAL      = regbits< type, 24,  5 >;  /**< no description available        */
    using RESERVED  = regbits< type, 29,  3 >;  /**< Reserved                        */
  };

  /**
   * DDR Control Register 9
   */
  struct CR09
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using TDLL      = regbits< type,  0, 16 >;  /**< Time DLL      */
    using NOCMD     = regbits< type, 16,  1 >;  /**< No Command    */
    using RESERVED  = regbits< type, 17,  7 >;  /**< Reserved      */
    using BSTLEN    = regbits< type, 24,  3 >;  /**< Burst Length  */
    using RESERVED  = regbits< type, 27,  5 >;  /**< Reserved      */
  };

  /**
   * DDR Control Register 10
   */
  struct CR10
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using TFAW      = regbits< type,  0,  6 >;  /**< Time FAW                              */
    using RESERVED  = regbits< type,  6,  2 >;  /**< Reserved                              */
    using TCPD      = regbits< type,  8, 16 >;  /**< Time Clock Enable to Precharge Delay  */
    using TRPAB     = regbits< type, 24,  4 >;  /**< TRP All Bank                          */
    using RESERVED  = regbits< type, 28,  4 >;  /**< Reserved                              */
  };

  /**
   * DDR Control Register 11
   */
  struct CR11
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using REGDIMM   = regbits< type,  0,  1 >;  /**< Registered DIMM           */
    using RESERVED  = regbits< type,  1,  7 >;  /**< Reserved                  */
    using AREF      = regbits< type,  8,  1 >;  /**< Auto Refresh              */
    using RESERVED  = regbits< type,  9,  7 >;  /**< Reserved                  */
    using AREFMODE  = regbits< type, 16,  1 >;  /**< Auto Refresh Mode         */
    using RESERVED  = regbits< type, 17,  7 >;  /**< Reserved                  */
    using TREFEN    = regbits< type, 24,  1 >;  /**< no description available  */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved                  */
  };

  /**
   * DDR Control Register 12
   */
  struct CR12
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using TRFC      = regbits< type,  0, 10 >;  /**< Time Refresh Command  */
    using RESERVED  = regbits< type, 10,  6 >;  /**< Reserved              */
    using TREF      = regbits< type, 16, 14 >;  /**< Time Refresh          */
    using RESERVED  = regbits< type, 30,  2 >;  /**< Reserved              */
  };

  /**
   * DDR Control Register 13
   */
  struct CR13
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using TREFINT   = regbits< type,  0, 14 >;  /**< Reserved    */
    using RESERVED  = regbits< type, 14,  2 >;  /**< Reserved    */
    using PD        = regbits< type, 16,  1 >;  /**< Power Down  */
    using RESERVED  = regbits< type, 17, 15 >;  /**< Reserved    */
  };

  /**
   * DDR Control Register 14
   */
  struct CR14
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using TPDEX  = regbits< type,  0, 16 >;  /**< Time Power Down Exit    */
    using TXSR   = regbits< type, 16, 16 >;  /**< Time Exit Self Refresh  */
  };

  /**
   * DDR Control Register 15
   */
  struct CR15
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0 >;

    using TXSNR     = regbits< type,  0, 16 >;  /**< TXSNR parameter   */
    using SREF      = regbits< type, 16,  1 >;  /**< Self Refresh      */
    using RESERVED  = regbits< type, 17,  7 >;  /**< Reserved          */
    using PUREF     = regbits< type, 24,  1 >;  /**< Power Up Refresh  */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved          */
  };

  /**
   * DDR Control Register 16
   */
  struct CR16
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using QKREF     = regbits< type,  0,  1 >;  /**< Quick Refresh             */
    using RESERVED  = regbits< type,  1,  7 >;  /**< no description available  */
    using CLKDLY    = regbits< type,  8,  3 >;  /**< Clock Delay               */
    using RESERVED  = regbits< type, 11,  5 >;  /**< Reserved                  */
    using LPCTRL    = regbits< type, 16,  5 >;  /**< Low Power Control         */
    using RESERVED  = regbits< type, 21, 11 >;  /**< Reserved                  */
  };

  /**
   * DDR Control Register 17
   */
  struct CR17
  : public reg< uint32_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 >;

    using LPPDCNT  = regbits< type,  0, 16 >;  /**< Low Power Power Down Count  */
    using LPRFCNT  = regbits< type, 16, 16 >;  /**< Low Power Refresh Count     */
  };

  /**
   * DDR Control Register 18
   */
  struct CR18
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using LPEXTCNT  = regbits< type,  0, 16 >;  /**< Low Power External Count  */
    using LPAUTO    = regbits< type, 16,  5 >;  /**< Low Power Auto            */
    using RESERVED  = regbits< type, 21, 11 >;  /**< Reserved                  */
  };

  /**
   * DDR Control Register 19
   */
  struct CR19
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using LPINTCNT  = regbits< type,  0, 16 >;  /**< Low Power Interval Count  */
    using LPRFHOLD  = regbits< type, 16, 16 >;  /**< Low Power Refresh Hold    */
  };

  /**
   * DDR Control Register 20
   */
  struct CR20
  : public reg< uint32_t, base_addr + 0x50, rw, 0xC000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0xC000000 >;

    using LPRE      = regbits< type,  0,  2 >;  /**< Low Power Refresh enable  */
    using RESERVED  = regbits< type,  2,  6 >;  /**< Reserved                  */
    using CKSRE     = regbits< type,  8,  4 >;  /**< no description available  */
    using RESERVED  = regbits< type, 12,  4 >;  /**< Reserved                  */
    using CKSRX     = regbits< type, 16,  4 >;  /**< Clock Self Refresh Exit   */
    using RESERVED  = regbits< type, 20,  4 >;  /**< Reserved                  */
    using WRMD      = regbits< type, 24,  1 >;  /**< Write Mode Register       */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved                  */
  };

  /**
   * DDR Control Register 21
   */
  struct CR21
  : public reg< uint32_t, base_addr + 0x54, rw, 0x400 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x400 >;

    using MR0DAT0  = regbits< type,  0, 16 >;  /**< no description available  */
    using MR1DAT0  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * DDR Control Register 22
   */
  struct CR22
  : public reg< uint32_t, base_addr + 0x58, rw, 0x400 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x400 >;

    using MR2DATA0  = regbits< type,  0, 16 >;  /**< no description available  */
    using MR3DAT0   = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * DDR Control Register 23
   */
  struct CR23
  : public reg< uint32_t, base_addr + 0x5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0 >;

    using Not_Used  = regbits< type,  0, 16 >;  /**< Reserved  */
    using NOT_USED  = regbits< type, 16, 16 >;  /**< Reserved  */
  };

  /**
   * DDR Control Register 24
   */
  struct CR24
  : public reg< uint32_t, base_addr + 0x60, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0 >;

    using RESERVED  = regbits< type,  0, 16 >;  /**< no description available  */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * DDR Control Register 25
   */
  struct CR25
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using BNK8      = regbits< type,  0,  1 >;  /**< Eight Bank Mode     */
    using RESERVED  = regbits< type,  1,  7 >;  /**< Reserved            */
    using ADDPINS   = regbits< type,  8,  3 >;  /**< Address Pins        */
    using RESERVED  = regbits< type, 11,  5 >;  /**< Reserved            */
    using COLSIZ    = regbits< type, 16,  3 >;  /**< Column Size         */
    using RESERVED  = regbits< type, 19,  5 >;  /**< Reserved            */
    using APREBIT   = regbits< type, 24,  4 >;  /**< Auto Precharge Bit  */
    using RESERVED  = regbits< type, 28,  4 >;  /**< Reserved            */
  };

  /**
   * DDR Control Register 26
   */
  struct CR26
  : public reg< uint32_t, base_addr + 0x68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0 >;

    using AGECNT    = regbits< type,  0,  8 >;  /**< Age Count                 */
    using CMDAGE    = regbits< type,  8,  8 >;  /**< Command Age count         */
    using ADDCOL    = regbits< type, 16,  1 >;  /**< Address Collision enable  */
    using RESERVED  = regbits< type, 17,  7 >;  /**< Reserved                  */
    using BNKSPT    = regbits< type, 24,  1 >;  /**< Bank Split enable         */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved                  */
  };

  /**
   * DDR Control Register 27
   */
  struct CR27
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using PLEN      = regbits< type,  0,  1 >;  /**< Placement Enable        */
    using RESERVED  = regbits< type,  1,  7 >;  /**< Reserved                */
    using PRIEN     = regbits< type,  8,  1 >;  /**< Priority Enable         */
    using RESERVED  = regbits< type,  9,  7 >;  /**< Reserved                */
    using RWEN      = regbits< type, 16,  1 >;  /**< Read Write same Enable  */
    using RESERVED  = regbits< type, 17,  7 >;  /**< Reserved                */
    using SWPEN     = regbits< type, 24,  1 >;  /**< Swap Enable             */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved                */
  };

  /**
   * DDR Control Register 28
   */
  struct CR28
  : public reg< uint32_t, base_addr + 0x70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0 >;

    using CSMAP     = regbits< type,  0,  1 >;  /**< Chip Select Map                   */
    using RESERVED  = regbits< type,  1,  7 >;  /**< Reserved                          */
    using REDUC     = regbits< type,  8,  1 >;  /**< no description available          */
    using RESERVED  = regbits< type,  9,  7 >;  /**< Reserved                          */
    using BIGEND    = regbits< type, 16,  1 >;  /**< Big Endian Enable                 */
    using RESERVED  = regbits< type, 17,  7 >;  /**< Reserved                          */
    using CMDLATR   = regbits< type, 24,  1 >;  /**< Command Latency Reduction Enable  */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved                          */
  };

  /**
   * DDR Control Register 29
   */
  struct CR29
  : public reg< uint32_t, base_addr + 0x74, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0 >;

    using WRLATR    = regbits< type,  0,  1 >;  /**< Write Latency Reduction enable  */
    using RESERVED  = regbits< type,  1,  7 >;  /**< Reserved                        */
    using FSTWR     = regbits< type,  8,  1 >;  /**< Fast Write                      */
    using RESERVED  = regbits< type,  9,  7 >;  /**< Reserved                        */
    using QFULL     = regbits< type, 16,  2 >;  /**< Queue Fullness                  */
    using RESERVED  = regbits< type, 18,  6 >;  /**< Reserved                        */
    using RESYNC    = regbits< type, 24,  1 >;  /**< Resyncronize                    */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved                        */
  };

  /**
   * DDR Control Register 30
   */
  struct CR30
  : public reg< uint32_t, base_addr + 0x78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0 >;

    using RSYNCRF   = regbits< type,  0,  1 >;  /**< Resynchroize after Refresh  */
    using RESERVED  = regbits< type,  1,  7 >;  /**< Reserved                    */
    using INTSTAT   = regbits< type,  8,  9 >;  /**< Interrupt Status            */
    using RESERVED  = regbits< type, 17,  7 >;  /**< Reserved                    */
    using INTACK    = regbits< type, 24,  8 >;  /**< Interupt Acknowlege         */
  };

  /**
   * DDR Control Register 31
   */
  struct CR31
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0 >;

    using INTMASK   = regbits< type,  0,  9 >;  /**< Interrupt Mask  */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved        */
  };

  /**
   * DDR Control Register 32
   */
  struct CR32
  : public reg< uint32_t, base_addr + 0x80, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, ro, 0 >;

    using OORAD  = regbits< type,  0, 32 >;  /**< Out Of Range Address  */
  };

  /**
   * DDR Control Register 33
   */
  struct CR33
  : public reg< uint32_t, base_addr + 0x84, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, ro, 0 >;

    using OORLEN    = regbits< type,  0, 10 >;  /**< Out Of Range Length     */
    using RESERVED  = regbits< type, 10,  6 >;  /**< Reserved                */
    using OORTYP    = regbits< type, 16,  6 >;  /**< Out Of Range Type       */
    using RESERVED  = regbits< type, 22,  2 >;  /**< Reserved                */
    using OORID     = regbits< type, 24,  2 >;  /**< Out Of Range source ID  */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved                */
  };

  /**
   * DDR Control Register 34
   */
  struct CR34
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using ODTRDC    = regbits< type,  0,  1 >;  /**< ODT Read map CS   */
    using RESERVED  = regbits< type,  1,  7 >;  /**< Reserved          */
    using ODTWRCS   = regbits< type,  8,  1 >;  /**< ODT Write map CS  */
    using RESERVED  = regbits< type,  9,  7 >;  /**< Reserved          */
    using RESERVED  = regbits< type, 16,  2 >;  /**< Reserved          */
    using RESERVED  = regbits< type, 18,  6 >;  /**< Reserved          */
    using RESERVED  = regbits< type, 24,  2 >;  /**< Reserved          */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved          */
  };

  /**
   * DDR Control Register 35
   */
  struct CR35
  : public reg< uint32_t, base_addr + 0x8c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, ro, 0 >;

    using R2WSMCS   = regbits< type,  0,  4 >;  /**< Read To Write Same Chip Select  */
    using RESERVED  = regbits< type,  4,  4 >;  /**< Reserved                        */
    using W2RSMCS   = regbits< type,  8,  4 >;  /**< Write To Read Same Chip Select  */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved                        */
  };

  /**
   * DDR Control Register 36
   */
  struct CR36
  : public reg< uint32_t, base_addr + 0x90, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, ro, 0 >;

    using Not_Used  = regbits< type,  0, 16 >;  /**< Reserved  */
    using NOT_USED  = regbits< type, 16, 16 >;  /**< Reserved  */
  };

  /**
   * DDR Control Register 37
   */
  struct CR37
  : public reg< uint32_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0 >;

    using R2RSAME   = regbits< type,  0,  3 >;  /**< R2R Same chip select delay  */
    using RESERVED  = regbits< type,  3,  5 >;  /**< Reserved                    */
    using R2WSAME   = regbits< type,  8,  3 >;  /**< R2W Same chip select delay  */
    using RESERVED  = regbits< type, 11,  5 >;  /**< Reserved                    */
    using W2RSAME   = regbits< type, 16,  3 >;  /**< W2R Same chip select delay  */
    using RESERVED  = regbits< type, 19,  5 >;  /**< Reserved                    */
    using W2WSAME   = regbits< type, 24,  3 >;  /**< W2W Same chip select delay  */
    using RESERVED  = regbits< type, 27,  5 >;  /**< Reserved                    */
  };

  /**
   * DDR Control Register 38
   */
  struct CR38
  : public reg< uint32_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0 >;

    using PDNCS     = regbits< type,  0,  5 >;  /**< OCD Pull Down adjustment Chip Select  */
    using RESERVED  = regbits< type,  5,  3 >;  /**< Reserved                              */
    using PUPCS     = regbits< type,  8,  5 >;  /**< OCD Pull Up adjustment Chip Select    */
    using RESERVED  = regbits< type, 13,  3 >;  /**< Reserved                              */
    using PWRCNT    = regbits< type, 16, 11 >;  /**< Port 0 Write Count                    */
    using RESERVED  = regbits< type, 27,  5 >;  /**< Reserved                              */
  };

  /**
   * DDR Control Register 39
   */
  struct CR39
  : public reg< uint32_t, base_addr + 0x9c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0 >;

    using P0RDCNT   = regbits< type,  0, 11 >;  /**< Port 0 Read command Count      */
    using RESERVED  = regbits< type, 11,  5 >;  /**< Reserved                       */
    using RP0       = regbits< type, 16,  2 >;  /**< Port 0 Read command Priority   */
    using RESERVED  = regbits< type, 18,  6 >;  /**< Reserved                       */
    using WP0       = regbits< type, 24,  2 >;  /**< Port 0 Write command Priority  */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved                       */
  };

  /**
   * DDR Control Register 40
   */
  struct CR40
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0 >;

    using P0TYP     = regbits< type,  0,  2 >;  /**< Port 0 Type                 */
    using RESERVED  = regbits< type,  2,  6 >;  /**< Reserved                    */
    using P1WRCNT   = regbits< type,  8, 11 >;  /**< Port 1 Write command Count  */
    using RESERVED  = regbits< type, 19, 13 >;  /**< Reserved                    */
  };

  /**
   * DDR Control Register 41
   */
  struct CR41
  : public reg< uint32_t, base_addr + 0xa4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0 >;

    using P1RDCNT   = regbits< type,  0, 11 >;  /**< Port 1 Read command Count      */
    using RESERVED  = regbits< type, 11,  5 >;  /**< Reserved                       */
    using RP1       = regbits< type, 16,  2 >;  /**< Read command priority Port 1   */
    using RESERVED  = regbits< type, 18,  6 >;  /**< Reserved                       */
    using WP1       = regbits< type, 24,  2 >;  /**< Write command priority Port 1  */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved                       */
  };

  /**
   * DDR Control Register 42
   */
  struct CR42
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0 >;

    using P1TYP     = regbits< type,  0,  2 >;  /**< Port 1 Type                 */
    using RESERVED  = regbits< type,  2,  6 >;  /**< Reserved                    */
    using P2WRCNT   = regbits< type,  8, 11 >;  /**< Port 2 Write command Count  */
    using RESERVED  = regbits< type, 19, 13 >;  /**< Reserved                    */
  };

  /**
   * DDR Control Register 43
   */
  struct CR43
  : public reg< uint32_t, base_addr + 0xac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0 >;

    using P2RDCNT   = regbits< type,  0, 11 >;  /**< Port 2 Read command Count      */
    using RESERVED  = regbits< type, 11,  5 >;  /**< Reserved                       */
    using RP2       = regbits< type, 16,  2 >;  /**< Read command priority Port 2   */
    using RESERVED  = regbits< type, 18,  6 >;  /**< Reserved                       */
    using WP2       = regbits< type, 24,  2 >;  /**< Write command priority Port 2  */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved                       */
  };

  /**
   * DDR Control Register 44
   */
  struct CR44
  : public reg< uint32_t, base_addr + 0xb0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0 >;

    using P2TYP     = regbits< type,  0,  2 >;  /**< Port 2 Type             */
    using RESERVED  = regbits< type,  2,  6 >;  /**< Reserved                */
    using WRRLAT    = regbits< type,  8,  1 >;  /**< WRR Latency             */
    using RESERVED  = regbits< type,  9,  7 >;  /**< Reserved                */
    using WRRSHARE  = regbits< type, 16,  1 >;  /**< WRR Shared arbitration  */
    using RESERVED  = regbits< type, 17,  7 >;  /**< Reserved                */
    using WRRERR    = regbits< type, 24,  4 >;  /**< WRR parameters Error    */
    using RESERVED  = regbits< type, 28,  4 >;  /**< Reserved                */
  };

  /**
   * DDR Control Register 45
   */
  struct CR45
  : public reg< uint32_t, base_addr + 0xb4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0 >;

    using P0PRI0    = regbits< type,  0,  4 >;  /**< Port 0 Priority 0 commands  */
    using RESERVED  = regbits< type,  4,  4 >;  /**< Reserved                    */
    using P0PRI1    = regbits< type,  8,  4 >;  /**< Port 0 Priority 1 commands  */
    using RESERVED  = regbits< type, 12,  4 >;  /**< Reserved                    */
    using P0PRI2    = regbits< type, 16,  4 >;  /**< Port 0 Priority 2 commands  */
    using RESERVED  = regbits< type, 20,  4 >;  /**< Reserved                    */
    using P0PRI3    = regbits< type, 24,  4 >;  /**< Port 0 Priority 3 commands  */
    using RESERVED  = regbits< type, 28,  4 >;  /**< Reserved                    */
  };

  /**
   * DDR Control Register 46
   */
  struct CR46
  : public reg< uint32_t, base_addr + 0xb8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0 >;

    using P0ORD     = regbits< type,  0,  2 >;  /**< Port 0 Order                */
    using RESERVED  = regbits< type,  2,  6 >;  /**< Reserved                    */
    using P0PRIRLX  = regbits< type,  8, 10 >;  /**< Port 0 Priority Relax       */
    using RESERVED  = regbits< type, 18,  6 >;  /**< Reserved                    */
    using P1PRI0    = regbits< type, 24,  4 >;  /**< Port 1 Priority 0 commands  */
    using RESERVED  = regbits< type, 28,  4 >;  /**< Reserved                    */
  };

  /**
   * DDR Control Register 47
   */
  struct CR47
  : public reg< uint32_t, base_addr + 0xbc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0 >;

    using P1PRI1    = regbits< type,  0,  4 >;  /**< Port 1 Priority 1 commands  */
    using RESERVED  = regbits< type,  4,  4 >;  /**< Reserved                    */
    using P1PRI2    = regbits< type,  8,  4 >;  /**< Port 1 Priority 2 commands  */
    using RESERVED  = regbits< type, 12,  4 >;  /**< Reserved                    */
    using P1PRI3    = regbits< type, 16,  4 >;  /**< Port 1 Priority 3 commands  */
    using RESERVED  = regbits< type, 20,  4 >;  /**< Reserved                    */
    using P1ORD     = regbits< type, 24,  2 >;  /**< Port 1 Order                */
    using RESERVED  = regbits< type, 26,  6 >;  /**< Reserved                    */
  };

  /**
   * DDR Control Register 48
   */
  struct CR48
  : public reg< uint32_t, base_addr + 0xc0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0 >;

    using P1PRIRLX  = regbits< type,  0, 10 >;  /**< Port 1 Priority Relax       */
    using RESERVED  = regbits< type, 10,  6 >;  /**< Reserved                    */
    using P2PRI0    = regbits< type, 16,  4 >;  /**< Port 2 Priority 0 commands  */
    using RESERVED  = regbits< type, 20,  4 >;  /**< Reserved                    */
    using P2PRI1    = regbits< type, 24,  4 >;  /**< Port 2 Priority 1 commands  */
    using RESERVED  = regbits< type, 28,  4 >;  /**< Reserved                    */
  };

  /**
   * DDR Control Register 49
   */
  struct CR49
  : public reg< uint32_t, base_addr + 0xc4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0 >;

    using P2PRI2    = regbits< type,  0,  4 >;  /**< Port 2 Priority 2 commands  */
    using RESERVED  = regbits< type,  4,  4 >;  /**< Reserved                    */
    using P2PRI3    = regbits< type,  8,  4 >;  /**< Port 2 Priority 3 commands  */
    using RESERVED  = regbits< type, 12,  4 >;  /**< Reserved                    */
    using P2ORD     = regbits< type, 16,  2 >;  /**< Port 2 Order                */
    using RESERVED  = regbits< type, 18, 14 >;  /**< Reserved                    */
  };

  /**
   * DDR Control Register 50
   */
  struct CR50
  : public reg< uint32_t, base_addr + 0xc8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0 >;

    using P2PRIRLX   = regbits< type,  0, 10 >;  /**< Port 2 Priority Relax  */
    using RESERVED   = regbits< type, 10,  6 >;  /**< Reserved               */
    using CLKSTATUS  = regbits< type, 16,  1 >;  /**< Clock Status           */
    using RESERVED   = regbits< type, 17, 15 >;  /**< Reserved               */
  };

  /**
   * DDR Control Register 51
   */
  struct CR51
  : public reg< uint32_t, base_addr + 0xcc, rw, 0x400 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0x400 >;

    using DLLRSTDLY  = regbits< type,  0, 16 >;  /**< DLL Reset Delay         */
    using DLLRADLY   = regbits< type, 16,  8 >;  /**< DLL Reset Adjust Delay  */
    using PHYWRLAT   = regbits< type, 24,  4 >;  /**< PHY Write Latency       */
    using RESERVED   = regbits< type, 28,  4 >;  /**< Reserved                */
  };

  /**
   * DDR Control Register 52
   */
  struct CR52
  : public reg< uint32_t, base_addr + 0xd0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0 >;

    using PYWRLTBS   = regbits< type,  0,  4 >;  /**< PHY Write Latency Base  */
    using RESERVED   = regbits< type,  4,  4 >;  /**< Reserved                */
    using PHYRDLAT   = regbits< type,  8,  4 >;  /**< PHY Read Latency        */
    using RESERVED   = regbits< type, 12,  4 >;  /**< Reserved                */
    using RDDATAEN   = regbits< type, 16,  4 >;  /**< Read Data Enable        */
    using RESERVED   = regbits< type, 20,  4 >;  /**< Reserved                */
    using RDDTENBAS  = regbits< type, 24,  4 >;  /**< Read Data Enable Base   */
    using RESERVED   = regbits< type, 28,  4 >;  /**< Reserved                */
  };

  /**
   * DDR Control Register 53
   */
  struct CR53
  : public reg< uint32_t, base_addr + 0xd4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd4, rw, 0 >;

    using CLKDISCS   = regbits< type,  0,  1 >;  /**< DRAM Clock Disable for chip select  */
    using RESERVED   = regbits< type,  1,  1 >;  /**< Reserved                            */
    using RESERVED   = regbits< type,  2,  6 >;  /**< Reserved                            */
    using CRTLUPDMN  = regbits< type,  8,  4 >;  /**< DFI CRTLUPD Minimum                 */
    using RESERVED   = regbits< type, 12,  4 >;  /**< Reserved                            */
    using CTRLUPDMX  = regbits< type, 16, 14 >;  /**< DFI CRTLUPD Minimum                 */
    using RESERVED   = regbits< type, 30,  2 >;  /**< Reserved                            */
  };

  /**
   * DDR Control Register 54
   */
  struct CR54
  : public reg< uint32_t, base_addr + 0xd8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, rw, 0 >;

    using PHYUPDTY0  = regbits< type,  0, 14 >;  /**< DFI PHYUPD Type 0  */
    using RESERVED   = regbits< type, 14,  2 >;  /**< Reserved           */
    using PHYUPDTY1  = regbits< type, 16, 14 >;  /**< DFI PHYUPD Type 1  */
    using RESERVED   = regbits< type, 30,  2 >;  /**< Reserved           */
  };

  /**
   * DDR Control Register 55
   */
  struct CR55
  : public reg< uint32_t, base_addr + 0xdc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xdc, rw, 0 >;

    using PHYUPDTY2  = regbits< type,  0, 14 >;  /**< DFI PHYUPD TYPE2  */
    using RESERVED   = regbits< type, 14,  2 >;  /**< Reserved          */
    using PHYUPDTY3  = regbits< type, 16, 14 >;  /**< DFI PHYUPD TYPE3  */
    using RESERVED   = regbits< type, 30,  2 >;  /**< Reserved          */
  };

  /**
   * DDR Control Register 56
   */
  struct CR56
  : public reg< uint32_t, base_addr + 0xe0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0 >;

    using PHYUPDRESP  = regbits< type,  0, 14 >;  /**< TDFI PHYUPDRESP parameter  */
    using RESERVED    = regbits< type, 14,  2 >;  /**< Reserved                   */
    using RDLATADJ    = regbits< type, 16,  4 >;  /**< Read Latency Adjust        */
    using RESERVED    = regbits< type, 20,  4 >;  /**< Reserved                   */
    using WRLATADJ    = regbits< type, 24,  4 >;  /**< Write Latency Adjust       */
    using RESERVED    = regbits< type, 28,  4 >;  /**< Reserved                   */
  };

  /**
   * DDR Control Register 57
   */
  struct CR57
  : public reg< uint32_t, base_addr + 0xe4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0 >;

    using CMDDLY     = regbits< type,  0,  4 >;  /**< Command Delay            */
    using RESERVED   = regbits< type,  4,  4 >;  /**< Reserved                 */
    using CLKDISDLY  = regbits< type,  8,  3 >;  /**< DFI Clock Disable Delay  */
    using RESERVED   = regbits< type, 11,  5 >;  /**< Reserved                 */
    using CLKENDLY   = regbits< type, 16,  4 >;  /**< DFI Clock Enable Delay   */
    using RESERVED   = regbits< type, 20,  4 >;  /**< Reserved                 */
    using ODTALTEN   = regbits< type, 24,  1 >;  /**< ODT Alternate Enable     */
    using RESERVED   = regbits< type, 25,  7 >;  /**< Reserved                 */
  };

  /**
   * DDR Control Register 58
   */
  struct CR58
  : public reg< uint32_t, base_addr + 0xe8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, ro, 0 >;

    using Not_Used  = regbits< type,  0, 16 >;  /**< Reserved  */
    using NOT_USED  = regbits< type, 16, 16 >;  /**< Reserved  */
  };

  /**
   * DDR Control Register 59
   */
  struct CR59
  : public reg< uint32_t, base_addr + 0xec, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xec, ro, 0 >;

    using Not_Used  = regbits< type,  0, 16 >;  /**< Reserved  */
    using NOT_USED  = regbits< type, 16, 16 >;  /**< Reserved  */
  };

  /**
   * DDR Control Register 60
   */
  struct CR60
  : public reg< uint32_t, base_addr + 0xf0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, ro, 0 >;

    using Not_Used  = regbits< type,  0, 16 >;  /**< Reserved  */
    using NOT_USED  = regbits< type, 16, 16 >;  /**< Reserved  */
  };

  /**
   * DDR Control Register 61
   */
  struct CR61
  : public reg< uint32_t, base_addr + 0xf4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, ro, 0 >;

    using Not_Used  = regbits< type,  0, 16 >;  /**< Reserved  */
    using NOT_USED  = regbits< type, 16, 16 >;  /**< Reserved  */
  };

  /**
   * DDR Control Register 62
   */
  struct CR62
  : public reg< uint32_t, base_addr + 0xf8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf8, ro, 0 >;

    using Not_Used  = regbits< type,  0, 16 >;  /**< Reserved  */
    using NOT_USED  = regbits< type, 16, 16 >;  /**< Reserved  */
  };

  /**
   * DDR Control Register 63
   */
  struct CR63
  : public reg< uint32_t, base_addr + 0xfc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfc, ro, 0 >;

    using Not_Used  = regbits< type,  0, 16 >;  /**< Reserved  */
    using NOT_USED  = regbits< type, 16, 16 >;  /**< Reserved  */
  };

  /**
   * RCR Control Register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0 >;

    using RESERVED  = regbits< type,  0, 30 >;  /**< no description available  */
    using RST       = regbits< type, 30,  1 >;  /**< Reset                     */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * I/O Pad Control Register
   */
  struct PAD_CTRL
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0x200 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0x200 >;

    using SPARE_DLY_CTRL  = regbits< type,  0,  4 >;  /**< These SPARE_DLY_CTRL[3:0]bits set the delay chains in the spare logic.  */
    using RESERVED        = regbits< type,  4,  4 >;  /**< Reserved                                                                */
    using RESERVED        = regbits< type,  8,  8 >;  /**< Reserved                                                                */
    using RESERVED        = regbits< type, 16,  2 >;  /**< Reserved                                                                */
    using RESERVED        = regbits< type, 18,  2 >;  /**< Reserved                                                                */
    using RESERVED        = regbits< type, 20,  1 >;  /**< Reserved                                                                */
    using RESERVED        = regbits< type, 21,  3 >;  /**< Reserved                                                                */
    using PAD_ODT_CS0     = regbits< type, 24,  2 >;  /**< Required to enable ODT and configure ODT resistor value in the pad.     */
    using RESERVED        = regbits< type, 26,  2 >;  /**< Reserved                                                                */
    using RESERVED        = regbits< type, 28,  4 >;  /**< Reserved                                                                */
  };
};
} // namespace mptl

#endif // ARCH_REG_DDR_HPP_INCLUDED
