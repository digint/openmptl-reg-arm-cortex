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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE0.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE0
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE0 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_XRDC_HPP_INCLUDED
#define ARCH_REG_XRDC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XRDC
 */
struct XRDC
{
  static constexpr reg_addr_t base_addr = 0x40014000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0, rw, 0xA >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xA >;

    using GVLD  = regbits< type,  0,  1 >;  /**< Global Valid (XRDC global enable/disable).  */
    using HRL   = regbits< type,  1,  4 >;  /**< Hardware Revision Level                     */
    using MRF   = regbits< type,  7,  1 >;  /**< Memory Region Format                        */
    using VAW   = regbits< type,  8,  1 >;  /**< Virtualization aware                        */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                                  */
  };

  /**
   * Hardware Configuration Register 0
   */
  struct HWCFG0
  : public reg< uint32_t, base_addr + 0xf0, ro, 0x10000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, ro, 0x10000000 >;

    using NDID   = regbits< type,  0,  8 >;  /**< Number of domains      */
    using NMSTR  = regbits< type,  8,  8 >;  /**< Number of bus masters  */
    using NMRC   = regbits< type, 16,  8 >;  /**< Number of MRCs         */
    using NPAC   = regbits< type, 24,  4 >;  /**< Number of PACs         */
  };

  /**
   * Hardware Configuration Register 1
   */
  struct HWCFG1
  : public reg< uint32_t, base_addr + 0xf4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, ro, 0 >;

    using DID  = regbits< type,  0,  4 >;  /**< Domain identifier number  */
  };

  /**
   * Hardware Configuration Register 2
   */
  struct HWCFG2
  : public reg< uint32_t, base_addr + 0xf8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf8, ro, 0 >;

    using PIDP0   = regbits< type,  0,  1 >;  /**< Process identifier present from bus master 0   */
    using PIDP1   = regbits< type,  1,  1 >;  /**< Process identifier present from bus master 1   */
    using PIDP2   = regbits< type,  2,  1 >;  /**< Process identifier present from bus master 2   */
    using PIDP3   = regbits< type,  3,  1 >;  /**< Process identifier present from bus master 3   */
    using PIDP4   = regbits< type,  4,  1 >;  /**< Process identifier present from bus master 4   */
    using PIDP5   = regbits< type,  5,  1 >;  /**< Process identifier present from bus master 5   */
    using PIDP6   = regbits< type,  6,  1 >;  /**< Process identifier present from bus master 6   */
    using PIDP7   = regbits< type,  7,  1 >;  /**< Process identifier present from bus master 7   */
    using PIDP8   = regbits< type,  8,  1 >;  /**< Process identifier present from bus master 8   */
    using PIDP9   = regbits< type,  9,  1 >;  /**< Process identifier present from bus master 9   */
    using PIDP10  = regbits< type, 10,  1 >;  /**< Process identifier present from bus master 10  */
    using PIDP11  = regbits< type, 11,  1 >;  /**< Process identifier present from bus master 11  */
    using PIDP12  = regbits< type, 12,  1 >;  /**< Process identifier present from bus master 12  */
    using PIDP13  = regbits< type, 13,  1 >;  /**< Process identifier present from bus master 13  */
    using PIDP14  = regbits< type, 14,  1 >;  /**< Process identifier present from bus master 14  */
    using PIDP15  = regbits< type, 15,  1 >;  /**< Process identifier present from bus master 15  */
    using PIDP16  = regbits< type, 16,  1 >;  /**< Process identifier present from bus master 16  */
    using PIDP17  = regbits< type, 17,  1 >;  /**< Process identifier present from bus master 17  */
    using PIDP18  = regbits< type, 18,  1 >;  /**< Process identifier present from bus master 18  */
    using PIDP19  = regbits< type, 19,  1 >;  /**< Process identifier present from bus master 19  */
    using PIDP20  = regbits< type, 20,  1 >;  /**< Process identifier present from bus master 20  */
    using PIDP21  = regbits< type, 21,  1 >;  /**< Process identifier present from bus master 21  */
    using PIDP22  = regbits< type, 22,  1 >;  /**< Process identifier present from bus master 22  */
    using PIDP23  = regbits< type, 23,  1 >;  /**< Process identifier present from bus master 23  */
    using PIDP24  = regbits< type, 24,  1 >;  /**< Process identifier present from bus master 24  */
    using PIDP25  = regbits< type, 25,  1 >;  /**< Process identifier present from bus master 25  */
    using PIDP26  = regbits< type, 26,  1 >;  /**< Process identifier present from bus master 26  */
    using PIDP27  = regbits< type, 27,  1 >;  /**< Process identifier present from bus master 27  */
    using PIDP28  = regbits< type, 28,  1 >;  /**< Process identifier present from bus master 28  */
    using PIDP29  = regbits< type, 29,  1 >;  /**< Process identifier present from bus master 29  */
    using PIDP30  = regbits< type, 30,  1 >;  /**< Process identifier present from bus master 30  */
    using PIDP31  = regbits< type, 31,  1 >;  /**< Process identifier present from bus master 31  */
  };

  /**
   * Hardware Configuration Register 3
   */
  struct HWCFG3
  : public reg< uint32_t, base_addr + 0xfc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfc, ro, 0 >;

    using PIDP32  = regbits< type,  0,  1 >;  /**< Process identifier present from bus master 32  */
    using PIDP33  = regbits< type,  1,  1 >;  /**< Process identifier present from bus master 33  */
    using PIDP34  = regbits< type,  2,  1 >;  /**< Process identifier present from bus master 34  */
    using PIDP35  = regbits< type,  3,  1 >;  /**< Process identifier present from bus master 35  */
    using PIDP36  = regbits< type,  4,  1 >;  /**< Process identifier present from bus master 36  */
    using PIDP37  = regbits< type,  5,  1 >;  /**< Process identifier present from bus master 37  */
    using PIDP38  = regbits< type,  6,  1 >;  /**< Process identifier present from bus master 38  */
    using PIDP39  = regbits< type,  7,  1 >;  /**< Process identifier present from bus master 39  */
    using PIDP40  = regbits< type,  8,  1 >;  /**< Process identifier present from bus master 40  */
    using PIDP41  = regbits< type,  9,  1 >;  /**< Process identifier present from bus master 41  */
    using PIDP42  = regbits< type, 10,  1 >;  /**< Process identifier present from bus master 42  */
    using PIDP43  = regbits< type, 11,  1 >;  /**< Process identifier present from bus master 43  */
    using PIDP44  = regbits< type, 12,  1 >;  /**< Process identifier present from bus master 44  */
    using PIDP45  = regbits< type, 13,  1 >;  /**< Process identifier present from bus master 45  */
    using PIDP46  = regbits< type, 14,  1 >;  /**< Process identifier present from bus master 46  */
    using PIDP47  = regbits< type, 15,  1 >;  /**< Process identifier present from bus master 47  */
    using PIDP48  = regbits< type, 16,  1 >;  /**< Process identifier present from bus master 48  */
    using PIDP49  = regbits< type, 17,  1 >;  /**< Process identifier present from bus master 49  */
    using PIDP50  = regbits< type, 18,  1 >;  /**< Process identifier present from bus master 50  */
    using PIDP51  = regbits< type, 19,  1 >;  /**< Process identifier present from bus master 51  */
    using PIDP52  = regbits< type, 20,  1 >;  /**< Process identifier present from bus master 52  */
    using PIDP53  = regbits< type, 21,  1 >;  /**< Process identifier present from bus master 53  */
    using PIDP54  = regbits< type, 22,  1 >;  /**< Process identifier present from bus master 54  */
    using PIDP55  = regbits< type, 23,  1 >;  /**< Process identifier present from bus master 55  */
    using PIDP56  = regbits< type, 24,  1 >;  /**< Process identifier present from bus master 56  */
    using PIDP57  = regbits< type, 25,  1 >;  /**< Process identifier present from bus master 57  */
    using PIDP58  = regbits< type, 26,  1 >;  /**< Process identifier present from bus master 58  */
    using PIDP59  = regbits< type, 27,  1 >;  /**< Process identifier present from bus master 59  */
    using PIDP60  = regbits< type, 28,  1 >;  /**< Process identifier present from bus master 60  */
    using PIDP61  = regbits< type, 29,  1 >;  /**< Process identifier present from bus master 61  */
    using PIDP62  = regbits< type, 30,  1 >;  /**< Process identifier present from bus master 62  */
    using PIDP63  = regbits< type, 31,  1 >;  /**< Process identifier present from bus master 63  */
  };

  /**
   * Master Domain Assignment Configuration Register
   */
  struct MDACFG%s
  : public reg< uint8_t, base_addr + 0x100, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x100, ro, 0 >;

    using NMDAR  = regbits< type,  0,  4 >;  /**< Number of master domain assignment registers for bus master n  */
    using NCM    = regbits< type,  7,  1 >;  /**< Non-CPU Master                                                 */
  };

  /**
   * Memory Region Configuration Register
   */
  struct MRCFG%s
  : public reg< uint8_t, base_addr + 0x140, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x140, ro, 0 >;

    using NMGD  = regbits< type,  0,  5 >;  /**< Number of memory region descriptors for MRC i  */
  };

  /**
   * Domain Error Location Register
   */
  struct DERRLOC%s
  : public reg< uint32_t, base_addr + 0x200, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, ro, 0 >;

    using MRCINST  = regbits< type,  0, 16 >;  /**< MRC instance  */
    using PACINST  = regbits< type, 16,  4 >;  /**< PAC instance  */
  };

  /**
   * Domain Error Word0 Register
   */
  struct DERR_W0_%s
  : public reg< uint32_t, base_addr + 0x400, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 >;

    using EADDR  = regbits< type,  0, 32 >;  /**< Error address. This is the access address that generated an access violation.  */
  };

  /**
   * Domain Error Word1 Register
   */
  struct DERR_W1_%s
  : public reg< uint32_t, base_addr + 0x404, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x404, ro, 0 >;

    using EDID   = regbits< type,  0,  4 >;  /**< Error domain identifier. This field captures the domain identifier of the access violation.  */
    using EATR   = regbits< type,  8,  3 >;  /**< Error attributes. This field captures certain attributes of the access violation.            */
    using ERW    = regbits< type, 11,  1 >;  /**< Error read/write                                                                             */
    using EPORT  = regbits< type, 24,  3 >;  /**< Error port                                                                                   */
    using EST    = regbits< type, 30,  2 >;  /**< Error state                                                                                  */
  };

  /**
   * Domain Error Word2 Register
   */
  struct DERR_W2_%s
  : public reg< uint32_t, base_addr + 0x408, ro, 0 >
  {
  };

  /**
   * Domain Error Word3 Register
   */
  struct DERR_W3_%s
  : public reg< uint32_t, base_addr + 0x40c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, rw, 0 >;

    using RECR  = regbits< type, 30,  2 >;  /**< Rearm Error Capture Registers  */
  };

  /**
   * Process Identifier
   */
  struct PID%s
  : public reg< uint32_t, base_addr + 0x700, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x700, rw, 0 >;

    using PID  = regbits< type,  0,  6 >;  /**< Process identifier  */
    using TSM  = regbits< type, 28,  1 >;  /**< Three-state model   */
    using LK2  = regbits< type, 29,  2 >;  /**< Lock                */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_0
  : public reg< uint32_t, base_addr + 0x800, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_0
  : public reg< uint32_t, base_addr + 0x804, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x804, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_1
  : public reg< uint32_t, base_addr + 0x820, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x820, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_1
  : public reg< uint32_t, base_addr + 0x824, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x824, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_2
  : public reg< uint32_t, base_addr + 0x840, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x840, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_2
  : public reg< uint32_t, base_addr + 0x844, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x844, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_3
  : public reg< uint32_t, base_addr + 0x860, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x860, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_3
  : public reg< uint32_t, base_addr + 0x864, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x864, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_4
  : public reg< uint32_t, base_addr + 0x880, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x880, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_4
  : public reg< uint32_t, base_addr + 0x884, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x884, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_5
  : public reg< uint32_t, base_addr + 0x8a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8a0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_5
  : public reg< uint32_t, base_addr + 0x8a4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8a4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_6
  : public reg< uint32_t, base_addr + 0x8c0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_6
  : public reg< uint32_t, base_addr + 0x8c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_7
  : public reg< uint32_t, base_addr + 0x8e0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8e0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_7
  : public reg< uint32_t, base_addr + 0x8e4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8e4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_8
  : public reg< uint32_t, base_addr + 0x900, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x900, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_8
  : public reg< uint32_t, base_addr + 0x904, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x904, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_9
  : public reg< uint32_t, base_addr + 0x920, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x920, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_9
  : public reg< uint32_t, base_addr + 0x924, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x924, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_10
  : public reg< uint32_t, base_addr + 0x940, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x940, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_10
  : public reg< uint32_t, base_addr + 0x944, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x944, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_11
  : public reg< uint32_t, base_addr + 0x960, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x960, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_11
  : public reg< uint32_t, base_addr + 0x964, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x964, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_12
  : public reg< uint32_t, base_addr + 0x980, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x980, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_12
  : public reg< uint32_t, base_addr + 0x984, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x984, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_13
  : public reg< uint32_t, base_addr + 0x9a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9a0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_13
  : public reg< uint32_t, base_addr + 0x9a4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9a4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_14
  : public reg< uint32_t, base_addr + 0x9c0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_14
  : public reg< uint32_t, base_addr + 0x9c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_15
  : public reg< uint32_t, base_addr + 0x9e0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9e0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_15
  : public reg< uint32_t, base_addr + 0x9e4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9e4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_16
  : public reg< uint32_t, base_addr + 0xa00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa00, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_16
  : public reg< uint32_t, base_addr + 0xa04, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa04, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_17
  : public reg< uint32_t, base_addr + 0xa20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa20, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_17
  : public reg< uint32_t, base_addr + 0xa24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa24, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_18
  : public reg< uint32_t, base_addr + 0xa40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa40, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_18
  : public reg< uint32_t, base_addr + 0xa44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa44, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_19
  : public reg< uint32_t, base_addr + 0xa60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa60, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_19
  : public reg< uint32_t, base_addr + 0xa64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa64, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_20
  : public reg< uint32_t, base_addr + 0xa80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa80, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_20
  : public reg< uint32_t, base_addr + 0xa84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa84, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_21
  : public reg< uint32_t, base_addr + 0xaa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaa0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_21
  : public reg< uint32_t, base_addr + 0xaa4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaa4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_22
  : public reg< uint32_t, base_addr + 0xac0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xac0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_22
  : public reg< uint32_t, base_addr + 0xac4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xac4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_23
  : public reg< uint32_t, base_addr + 0xae0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xae0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_23
  : public reg< uint32_t, base_addr + 0xae4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xae4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_24
  : public reg< uint32_t, base_addr + 0xb00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb00, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_24
  : public reg< uint32_t, base_addr + 0xb04, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb04, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_25
  : public reg< uint32_t, base_addr + 0xb20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb20, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_25
  : public reg< uint32_t, base_addr + 0xb24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb24, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_26
  : public reg< uint32_t, base_addr + 0xb40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb40, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_26
  : public reg< uint32_t, base_addr + 0xb44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb44, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_27
  : public reg< uint32_t, base_addr + 0xb60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb60, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_27
  : public reg< uint32_t, base_addr + 0xb64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb64, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_28
  : public reg< uint32_t, base_addr + 0xb80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb80, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_28
  : public reg< uint32_t, base_addr + 0xb84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb84, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_29
  : public reg< uint32_t, base_addr + 0xba0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xba0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_29
  : public reg< uint32_t, base_addr + 0xba4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xba4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_30
  : public reg< uint32_t, base_addr + 0xbc0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xbc0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_30
  : public reg< uint32_t, base_addr + 0xbc4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xbc4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_31
  : public reg< uint32_t, base_addr + 0xbe0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xbe0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_31
  : public reg< uint32_t, base_addr + 0xbe4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xbe4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_32
  : public reg< uint32_t, base_addr + 0xc00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc00, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_32
  : public reg< uint32_t, base_addr + 0xc04, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc04, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_33
  : public reg< uint32_t, base_addr + 0xc20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc20, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_33
  : public reg< uint32_t, base_addr + 0xc24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc24, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_34
  : public reg< uint32_t, base_addr + 0xc40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc40, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_34
  : public reg< uint32_t, base_addr + 0xc44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc44, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_35
  : public reg< uint32_t, base_addr + 0xc60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc60, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_35
  : public reg< uint32_t, base_addr + 0xc64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc64, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_36
  : public reg< uint32_t, base_addr + 0xc80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc80, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_36
  : public reg< uint32_t, base_addr + 0xc84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc84, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W0_37
  : public reg< uint32_t, base_addr + 0xca0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xca0, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Master Domain Assignment Wm,n (DFMT=0)
   */
  struct MDA_W1_37
  : public reg< uint32_t, base_addr + 0xca4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xca4, rw, 0 >;

    using DID   = regbits< type,  0,  4 >;  /**< Domain identifier             */
    using DIDS  = regbits< type,  4,  2 >;  /**< DID Select                    */
    using PE    = regbits< type,  6,  2 >;  /**< Process identifier enable     */
    using PIDM  = regbits< type,  8,  6 >;  /**< Process Identifier Mask       */
    using PID   = regbits< type, 16,  6 >;  /**< Process Identifier            */
    using LPID  = regbits< type, 24,  4 >;  /**< Logical partition Identifier  */
    using LPE   = regbits< type, 28,  1 >;  /**< Logical partition enable      */
    using DFMT  = regbits< type, 29,  1 >;  /**< Domain format                 */
    using LK1   = regbits< type, 30,  1 >;  /**< 1-bit Lock                    */
    using VLD   = regbits< type, 31,  1 >;  /**< Valid                         */
  };

  /**
   * Peripheral Domain Access Control W0
   */
  struct PDAC_W0_%s
  : public reg< uint32_t, base_addr + 0x1000, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1000, rw, 0 >;

    using D0ACP  = regbits< type,  0,  3 >;  /**< Domain 0 access control policy. See description for D7ACP .                        */
    using D1ACP  = regbits< type,  3,  3 >;  /**< Domain 1 access control policy. See description for D7ACP .                        */
    using D2ACP  = regbits< type,  6,  3 >;  /**< Domain 2 access control policy. See description for D7ACP .                        */
    using D3ACP  = regbits< type,  9,  3 >;  /**< Domain 3 access control policy. See description for D7ACP .                        */
    using D4ACP  = regbits< type, 12,  3 >;  /**< Domain 4 access control policy. See description for D7ACP .                        */
    using D5ACP  = regbits< type, 15,  3 >;  /**< Domain 5 access control policy. See description for D7ACP .                        */
    using D6ACP  = regbits< type, 18,  3 >;  /**< Domain 6 access control policy. See description for D7ACP .                        */
    using D7ACP  = regbits< type, 21,  3 >;  /**< Domain 7 access control policy                                                     */
    using SNUM   = regbits< type, 24,  6 >;  /**< Semaphore number. Include this hardware semaphore in the DxACP access evaluation.  */
    using SE     = regbits< type, 30,  1 >;  /**< Semaphore enable                                                                   */
  };

  /**
   * Peripheral Domain Access Control W1
   */
  struct PDAC_W1_%s
  : public reg< uint32_t, base_addr + 0x1004, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0 >;

    using D8ACP   = regbits< type,  0,  3 >;  /**< Domain 8 access control policy. See description for D7ACP .   */
    using D9ACP   = regbits< type,  3,  3 >;  /**< Domain 9 access control policy. See description for D7ACP .   */
    using D10ACP  = regbits< type,  6,  3 >;  /**< Domain 10 access control policy. See description for D7ACP .  */
    using D11ACP  = regbits< type,  9,  3 >;  /**< Domain 11 access control policy. See description for D7ACP .  */
    using D12ACP  = regbits< type, 12,  3 >;  /**< Domain 12 access control policy. See description for D7ACP .  */
    using D13ACP  = regbits< type, 15,  3 >;  /**< Domain 13 access control policy. See description for D7ACP .  */
    using D14ACP  = regbits< type, 18,  3 >;  /**< Domain 14 access control policy. See description for D7ACP .  */
    using D15ACP  = regbits< type, 21,  3 >;  /**< Domain 15 access control policy. See description for D7ACP .  */
    using LK2     = regbits< type, 29,  2 >;  /**< Lock                                                          */
    using VLD     = regbits< type, 31,  1 >;  /**< Valid                                                         */
  };

  /**
   * Memory Region Descriptor W0
   */
  struct MRGD_W0_%s
  : public reg< uint32_t, base_addr + 0x2000, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2000, rw, 0 >;

    using BASEADDR  = regbits< type,  5, 27 >;  /**< Base Address  */
  };

  /**
   * Memory Region Descriptor W1
   */
  struct MRGD_W1_%s
  : public reg< uint32_t, base_addr + 0x2004, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2004, rw, 0 >;

    using SRD  = regbits< type,  0,  8 >;  /**< Subregion disable  */
    using SZ   = regbits< type,  8,  5 >;  /**< Region size        */
  };

  /**
   * Memory Region Descriptor W2
   */
  struct MRGD_W2_%s
  : public reg< uint32_t, base_addr + 0x2008, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2008, rw, 0 >;

    using D0ACP  = regbits< type,  0,  3 >;  /**< Domain 0 access control policy. See description for D7ACP .                        */
    using D1ACP  = regbits< type,  3,  3 >;  /**< Domain 1 access control policy. See description for D7ACP .                        */
    using D2ACP  = regbits< type,  6,  3 >;  /**< Domain 2 access control policy. See description for D7ACP .                        */
    using D3ACP  = regbits< type,  9,  3 >;  /**< Domain 3 access control policy. See description for D7ACP .                        */
    using D4ACP  = regbits< type, 12,  3 >;  /**< Domain 4 access control policy. See description for D7ACP .                        */
    using D5ACP  = regbits< type, 15,  3 >;  /**< Domain 5 access control policy. See description for D7ACP .                        */
    using D6ACP  = regbits< type, 18,  3 >;  /**< Domain 6 access control policy. See description for D7ACP .                        */
    using D7ACP  = regbits< type, 21,  3 >;  /**< Domain 7 access control policy                                                     */
    using SNUM   = regbits< type, 24,  6 >;  /**< Semaphore number. Include this hardware semaphore in the DxACP access evaluation.  */
    using SE     = regbits< type, 30,  1 >;  /**< Semaphore enable                                                                   */
  };

  /**
   * Memory Region Descriptor W3
   */
  struct MRGD_W3_%s
  : public reg< uint32_t, base_addr + 0x200c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200c, rw, 0 >;

    using D8ACP   = regbits< type,  0,  3 >;  /**< Domain 8 access control policy. See description for D7ACP .   */
    using D9ACP   = regbits< type,  3,  3 >;  /**< Domain 9 access control policy. See description for D7ACP .   */
    using D10ACP  = regbits< type,  6,  3 >;  /**< Domain 10 access control policy. See description for D7ACP .  */
    using D11ACP  = regbits< type,  9,  3 >;  /**< Domain 11 access control policy. See description for D7ACP .  */
    using D12ACP  = regbits< type, 12,  3 >;  /**< Domain 12 access control policy. See description for D7ACP .  */
    using D13ACP  = regbits< type, 15,  3 >;  /**< Domain 13 access control policy. See description for D7ACP .  */
    using D14ACP  = regbits< type, 18,  3 >;  /**< Domain 14 access control policy. See description for D7ACP .  */
    using D15ACP  = regbits< type, 21,  3 >;  /**< Domain 15 access control policy. See description for D7ACP .  */
    using LK2     = regbits< type, 29,  2 >;  /**< Lock                                                          */
    using VLD     = regbits< type, 31,  1 >;  /**< Valid                                                         */
  };

  /**
   * Memory Region Descriptor W4
   */
  struct MRGD_W4_%s
  : public reg< uint32_t, base_addr + 0x2010, ro, 0 >
  {
  };

  /**
   * Memory Region Descriptor W5
   */
  struct MRGD_W5_%s
  : public reg< uint32_t, base_addr + 0x2014, ro, 0 >
  {
  };

  /**
   * Memory Region Descriptor W6
   */
  struct MRGD_W6_%s
  : public reg< uint32_t, base_addr + 0x2018, ro, 0 >
  {
  };

  /**
   * Memory Region Descriptor W7
   */
  struct MRGD_W7_%s
  : public reg< uint32_t, base_addr + 0x201c, ro, 0 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_XRDC_HPP_INCLUDED
