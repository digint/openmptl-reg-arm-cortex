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
//  Import from CMSIS-SVD: "Freescale/MK61F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK61F15
//  series: Kinetis_K
//  version: 1.6
//  description: MK61F15 Freescale Microcontroller
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
  : public reg< uint16_t, base_addr + 0x8, ro, 0x1F >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0x1F >;

    using ASC  = regbits< type,  0,  8 >;  /**< Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.  */
  };

  /**
   * Crossbar Switch (AXBS) Master Configuration
   */
  struct PLAMC
  : public reg< uint16_t, base_addr + 0xa, ro, 0x3F >
  {
    using type = reg< uint16_t, base_addr + 0xa, ro, 0x3F >;

    using AMC  = regbits< type,  0,  8 >;  /**< Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.  */
  };

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using DDRSIZE  = regbits< type, 20,  2 >;  /**< DDR address size translation  */
    using SRAMUAP  = regbits< type, 24,  2 >;  /**< SRAM_U arbitration priority   */
    using SRAMUWP  = regbits< type, 26,  1 >;  /**< SRAM_U write protect          */
    using SRAMLAP  = regbits< type, 28,  2 >;  /**< SRAM_L arbitration priority   */
    using SRAMLWP  = regbits< type, 30,  1 >;  /**< SRAM_L Write Protect          */
  };

  /**
   * Interrupt Status and control Register
   */
  struct ISCR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using IRQ    = regbits< type,  1,  1 >;  /**< Normal Interrupt Pending                */
    using NMI    = regbits< type,  2,  1 >;  /**< Nonmaskable Interrupt Pending           */
    using DHREQ  = regbits< type,  3,  1 >;  /**< Debug Halt Request Indicator            */
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
   * ETB Counter Control register
   */
  struct ETBCC
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using CNTEN  = regbits< type,  0,  1 >;  /**< Counter Enable       */
    using RSPT   = regbits< type,  1,  2 >;  /**< Response Type        */
    using RLRQ   = regbits< type,  3,  1 >;  /**< Reload Request       */
    using ETDIS  = regbits< type,  4,  1 >;  /**< ETM-To-TPIU Disable  */
    using ITDIS  = regbits< type,  5,  1 >;  /**< ITM-To-TPIU Disable  */
  };

  /**
   * ETB Reload register
   */
  struct ETBRL
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using RELOAD  = regbits< type,  0, 11 >;  /**< Byte Count Reload Value  */
  };

  /**
   * ETB Counter Value register
   */
  struct ETBCNT
  : public reg< uint32_t, base_addr + 0x1c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0 >;

    using COUNTER  = regbits< type,  0, 11 >;  /**< Byte Count Counter Value  */
  };

  /**
   * Fault address register
   */
  struct FADR
  : public reg< uint32_t, base_addr + 0x20, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 >;

    using ADDRESS  = regbits< type,  0, 32 >;  /**< Fault address  */
  };

  /**
   * Fault attributes register
   */
  struct FATR
  : public reg< uint32_t, base_addr + 0x24, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0 >;

    using BEDA   = regbits< type,  0,  1 >;  /**< Bus error access type      */
    using BEMD   = regbits< type,  1,  1 >;  /**< Bus error privilege level  */
    using BESZ   = regbits< type,  4,  2 >;  /**< Bus error size             */
    using BEWT   = regbits< type,  7,  1 >;  /**< Bus error write            */
    using BEMN   = regbits< type,  8,  4 >;  /**< Bus error master number    */
    using BEOVR  = regbits< type, 31,  1 >;  /**< Bus error overrun          */
  };

  /**
   * Fault data register
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
    using PID_ = regbits< type,  0,  8 >;  /**< M0_PID and M1_PID for MPU  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCM_HPP_INCLUDED
