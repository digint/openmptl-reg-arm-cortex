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
//  Import from CMSIS-SVD: "Freescale/MKE14F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE14F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE14F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MCM_HPP_INCLUDED
#define ARCH_REG_MCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Core Platform Miscellaneous Control Module
 */
struct MCM
{
  static constexpr reg_addr_t base_addr = 0xe0080000;

  /**
   * Crossbar Switch (AXBS) Slave Configuration
   */
  struct PLASC
  : public reg< uint16_t, base_addr + 0x8, ro, 0x7 >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0x7 >;

    using ASC  = regbits< type,  0,  8 >;  /**< Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.  */
  };

  /**
   * Crossbar Switch (AXBS) Master Configuration
   */
  struct PLAMC
  : public reg< uint16_t, base_addr + 0xa, ro, 0x7 >
  {
    using type = reg< uint16_t, base_addr + 0xa, ro, 0x7 >;

    using AMC  = regbits< type,  0,  8 >;  /**< Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.  */
  };

  /**
   * Core Platform Control Register
   */
  struct CPCR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using CBRR     = regbits< type,  9,  1 >;  /**< Crossbar round-robin arbitration enable  */
    using SRAMUAP  = regbits< type, 24,  2 >;  /**< SRAM_U arbitration priority              */
    using SRAMUWP  = regbits< type, 26,  1 >;  /**< SRAM_U write protect                     */
    using SRAMLAP  = regbits< type, 28,  2 >;  /**< SRAM_L arbitration priority              */
    using SRAMLWP  = regbits< type, 30,  1 >;  /**< SRAM_L Write Protect                     */
  };

  /**
   * Interrupt Status and Control Register
   */
  struct ISCR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using CWBER  = regbits< type,  4,  1 >;  /**< Cache write buffer error status         */
    using FIOC   = regbits< type,  8,  1 >;  /**< FPU invalid operation interrupt status  */
    using FDZC   = regbits< type,  9,  1 >;  /**< FPU divide-by-zero interrupt status     */
    using FOFC   = regbits< type, 10,  1 >;  /**< FPU overflow interrupt status           */
    using FUFC   = regbits< type, 11,  1 >;  /**< FPU underflow interrupt status          */
    using FIXC   = regbits< type, 12,  1 >;  /**< FPU inexact interrupt status            */
    using FIDC   = regbits< type, 15,  1 >;  /**< FPU input denormal interrupt status     */
    using CWBEE  = regbits< type, 20,  1 >;  /**< Cache write buffer error enable         */
    using FIOCE  = regbits< type, 24,  1 >;  /**< FPU invalid operation interrupt enable  */
    using FDZCE  = regbits< type, 25,  1 >;  /**< FPU divide-by-zero interrupt enable     */
    using FOFCE  = regbits< type, 26,  1 >;  /**< FPU overflow interrupt enable           */
    using FUFCE  = regbits< type, 27,  1 >;  /**< FPU underflow interrupt enable          */
    using FIXCE  = regbits< type, 28,  1 >;  /**< FPU inexact interrupt enable            */
    using FIDCE  = regbits< type, 31,  1 >;  /**< FPU input denormal interrupt enable     */
  };

  /**
   * Store Buffer Fault address register
   */
  struct FADR
  : public reg< uint32_t, base_addr + 0x20, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 >;

    using ADDRESS  = regbits< type,  0, 32 >;  /**< Fault address  */
  };

  /**
   * Store Buffer Fault Attributes register
   */
  struct FATR
  : public reg< uint32_t, base_addr + 0x24, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0 >;

    using BEDA   = regbits< type,  0,  1 >;  /**< Bus Error Data Access type  */
    using BEMD   = regbits< type,  1,  1 >;  /**< Bus error privilege level   */
    using BESZ   = regbits< type,  4,  2 >;  /**< Bus error size              */
    using BEWT   = regbits< type,  7,  1 >;  /**< Bus error write             */
    using BEMN   = regbits< type,  8,  4 >;  /**< Bus error master number     */
    using BEOVR  = regbits< type, 31,  1 >;  /**< Bus error overrun           */
  };

  /**
   * Store Buffer Fault Data Register
   */
  struct FDR
  : public reg< uint32_t, base_addr + 0x28, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Fault data  */
  };

  /**
   * Process ID register
   */
  struct PID
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    // fixme: Field name equals parent register name: PID
    using PID_ = regbits< type,  0,  8 >;  /**< M0_PID And M1_PID For MPU  */
  };

  /**
   * Compute Operation Control Register
   */
  struct CPO
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using CPOREQ  = regbits< type,  0,  1 >;  /**< Compute Operation request              */
    using CPOACK  = regbits< type,  1,  1 >;  /**< Compute Operation acknowledge          */
    using CPOWOI  = regbits< type,  2,  1 >;  /**< Compute Operation wakeup on interrupt  */
  };

  /**
   * Local Memory Descriptor Register
   */
  struct LMDR%s
  : public reg< uint32_t, base_addr + 0x400, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0 >;

    using CF0    = regbits< type,  0,  4 >;  /**< Control Field 0                                                                                    */
    using CF1    = regbits< type,  4,  4 >;  /**< Control Field 1 - for Cache Parity control functions                                               */
    using MT     = regbits< type, 13,  3 >;  /**< Memory Type                                                                                        */
    using RO     = regbits< type, 16,  1 >;  /**< (??TBD?? current content from "MSCM OCMEM Configuration Register Descriptions")                    */
    using DPW    = regbits< type, 17,  3 >;  /**< LMEM Data Path Width. This read-only field defines the width of the local memory.                  */
    using WY     = regbits< type, 20,  4 >;  /**< Level 1 Cache Ways                                                                                 */
    using LMSZ   = regbits< type, 24,  4 >;  /**< (??TBD?? current content from "MSCM OCMEM Configuration Register Descriptions")                    */
    using LMSZH  = regbits< type, 28,  1 >;  /**< (??TBD?? current content from "MSCM OCMEM Configuration Register Descriptions")                    */
    using V      = regbits< type, 31,  1 >;  /**< Local memory Valid bit. This read-only field defines the validity (presence) of the local memory.  */
  };

  /**
   * LMEM Parity & ECC Control Register
   */
  struct LMPECR
  : public reg< uint32_t, base_addr + 0x480, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x480, rw, 0 >;

    using ERNCR  = regbits< type,  0,  1 >;  /**< Enable RAM ECC Noncorrectable Reporting  */
    using ER1BR  = regbits< type,  8,  1 >;  /**< Enable RAM ECC 1 Bit Reporting           */
    using ERPR   = regbits< type, 16,  1 >;  /**< Enable RAM Parity Reporting              */
    using ECPR   = regbits< type, 20,  1 >;  /**< Enable Cache Parity Reporting            */
  };

  /**
   * LMEM Parity & ECC Interrupt Register
   */
  struct LMPEIR
  : public reg< uint32_t, base_addr + 0x488, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x488, rw, 0 >;

    using ENC     = regbits< type,  0,  8 >;  /**< ENCn = ECC Noncorrectable Error n                                                                                                                                                                                                                                                              */
    using E1B     = regbits< type,  8,  8 >;  /**< E1Bn = ECC 1-bit Error n                                                                                                                                                                                                                                                                       */
    using PE      = regbits< type, 16,  8 >;  /**< Parity Error                                                                                                                                                                                                                                                                                   */
    using PEELOC  = regbits< type, 24,  5 >;  /**< Parity or ECC Error Location 5'h00 - a non-correctable ECC event from SRAM_L 5'h01 - a non-correctable ECC event from SRAM_U 5'h08 - a 1-bit correctable ECC event from SRAM_L 5'h09 - a 1-bit correctable ECC event from SRAM_U 5'h14 - a PC Tag Parity Error 5'h15 - a PC Data Parity Error  */
    using V       = regbits< type, 31,  1 >;  /**< Valid bit                                                                                                                                                                                                                                                                                      */
  };

  /**
   * LMEM Fault Address Register
   */
  struct LMFAR
  : public reg< uint32_t, base_addr + 0x490, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x490, ro, 0 >;

    using EFADD  = regbits< type,  0, 32 >;  /**< ECC Fault Address  */
  };

  /**
   * LMEM Fault Attribute Register
   */
  struct LMFATR
  : public reg< uint32_t, base_addr + 0x494, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x494, rw, 0 >;

    using PEFPRT   = regbits< type,  0,  4 >;  /**< Parity/ECC Fault Protection FATR[3] is Cacheable: 0=Non-cacheable, 1=Cacheable FATR[2] is Bufferable: 0=Non-bufferable, 1=Bufferable FATR[1] is Mode: 0=User mode, 1=Supervisor mode FATR[0] is Type: 0=I-Fetch, 1=Data  */
    using PEFSIZE  = regbits< type,  4,  3 >;  /**< Parity/ECC Fault Master Size 3'b000 = 8-bit access 3'b001 = 16-bit access 3'b010 = 32-bit access 3'b011 = 64-bit access 3'b1xx = Reserved                                                                                */
    using PEFW     = regbits< type,  7,  1 >;  /**< Parity/ECC Fault Write                                                                                                                                                                                                   */
    using PEFMST   = regbits< type,  8,  8 >;  /**< Parity/ECC Fault Master Number                                                                                                                                                                                           */
    using OVR      = regbits< type, 31,  1 >;  /**< Overrun                                                                                                                                                                                                                  */
  };

  /**
   * LMEM Fault Data High Register
   */
  struct LMFDHR
  : public reg< uint32_t, base_addr + 0x4a0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4a0, ro, 0 >;

    using PEFDH  = regbits< type,  0, 32 >;  /**< Parity or ECC Fault Data High  */
  };

  /**
   * LMEM Fault Data Low Register
   */
  struct LMFDLR
  : public reg< uint32_t, base_addr + 0x4a4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4a4, ro, 0 >;

    using PEFDL  = regbits< type,  0, 32 >;  /**< Parity or ECC Fault Data Low  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCM_HPP_INCLUDED
