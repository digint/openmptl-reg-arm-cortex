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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21J18A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21J18A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21J18A device: Cortex-M0+ Microcontroller with 256KB Flash, 32KB SRAM, 64-pin package (refer to http://www.atmel.com/devices/SAMD21J18A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DMAC_HPP_INCLUDED
#define ARCH_REG_DMAC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Direct Memory Access Controller
 */
struct DMAC
{
  static constexpr reg_addr_t base_addr = 0x41004800;

  /**
   * Active Channel and Levels
   */
  struct ACTIVE
  : public reg< uint32_t, base_addr + 0x30, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using LVLEX0  = regbits< type,  0,  1 >;  /**< Level 0 Channel Trigger Request Executing  */
    using LVLEX1  = regbits< type,  1,  1 >;  /**< Level 1 Channel Trigger Request Executing  */
    using LVLEX2  = regbits< type,  2,  1 >;  /**< Level 2 Channel Trigger Request Executing  */
    using LVLEX3  = regbits< type,  3,  1 >;  /**< Level 3 Channel Trigger Request Executing  */
    using ID      = regbits< type,  8,  5 >;  /**< Active Channel ID                          */
    using ABUSY   = regbits< type, 15,  1 >;  /**< Active Channel Busy                        */
    using BTCNT   = regbits< type, 16, 16 >;  /**< Active Channel Block Transfer Count        */
  };

  /**
   * Descriptor Memory Section Base Address
   */
  struct BASEADDR
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: BASEADDR
    using BASEADDR_ = regbits< type,  0, 32 >;  /**< Descriptor Memory Base Address  */
  };

  /**
   * Busy Channels
   */
  struct BUSYCH
  : public reg< uint32_t, base_addr + 0x28, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using BUSYCH0   = regbits< type,  0,  1 >;  /**< Busy Channel 0   */
    using BUSYCH1   = regbits< type,  1,  1 >;  /**< Busy Channel 1   */
    using BUSYCH2   = regbits< type,  2,  1 >;  /**< Busy Channel 2   */
    using BUSYCH3   = regbits< type,  3,  1 >;  /**< Busy Channel 3   */
    using BUSYCH4   = regbits< type,  4,  1 >;  /**< Busy Channel 4   */
    using BUSYCH5   = regbits< type,  5,  1 >;  /**< Busy Channel 5   */
    using BUSYCH6   = regbits< type,  6,  1 >;  /**< Busy Channel 6   */
    using BUSYCH7   = regbits< type,  7,  1 >;  /**< Busy Channel 7   */
    using BUSYCH8   = regbits< type,  8,  1 >;  /**< Busy Channel 8   */
    using BUSYCH9   = regbits< type,  9,  1 >;  /**< Busy Channel 9   */
    using BUSYCH10  = regbits< type, 10,  1 >;  /**< Busy Channel 10  */
    using BUSYCH11  = regbits< type, 11,  1 >;  /**< Busy Channel 11  */
  };

  /**
   * Channel Control A
   */
  struct CHCTRLA
  : public reg< uint8_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST   = regbits< type,  0,  1 >;  /**< Channel Software Reset  */
    using ENABLE  = regbits< type,  1,  1 >;  /**< Channel Enable          */
  };

  /**
   * Channel Control B
   */
  struct CHCTRLB
  : public reg< uint32_t, base_addr + 0x44, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EVACT    = regbits< type,  0,  3 >;  /**< Event Input Action           */
    using EVIE     = regbits< type,  3,  1 >;  /**< Channel Event Input Enable   */
    using EVOE     = regbits< type,  4,  1 >;  /**< Channel Event Output Enable  */
    using LVL      = regbits< type,  5,  2 >;  /**< Channel Arbitration Level    */
    using TRIGSRC  = regbits< type,  8,  6 >;  /**< Peripheral Trigger Source    */
    using TRIGACT  = regbits< type, 22,  2 >;  /**< Trigger Action               */
    using CMD      = regbits< type, 24,  2 >;  /**< Software Command             */
  };

  /**
   * Channel ID
   */
  struct CHID
  : public reg< uint8_t, base_addr + 0x3f, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x3f, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ID  = regbits< type,  0,  4 >;  /**< Channel ID  */
  };

  /**
   * Channel Interrupt Enable Clear
   */
  struct CHINTENCLR
  : public reg< uint8_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TERR   = regbits< type,  0,  1 >;  /**< Transfer Error Interrupt Enable     */
    using TCMPL  = regbits< type,  1,  1 >;  /**< Transfer Complete Interrupt Enable  */
    using SUSP   = regbits< type,  2,  1 >;  /**< Channel Suspend Interrupt Enable    */
  };

  /**
   * Channel Interrupt Enable Set
   */
  struct CHINTENSET
  : public reg< uint8_t, base_addr + 0x4d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x4d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TERR   = regbits< type,  0,  1 >;  /**< Transfer Error Interrupt Enable     */
    using TCMPL  = regbits< type,  1,  1 >;  /**< Transfer Complete Interrupt Enable  */
    using SUSP   = regbits< type,  2,  1 >;  /**< Channel Suspend Interrupt Enable    */
  };

  /**
   * Channel Interrupt Flag Status and Clear
   */
  struct CHINTFLAG
  : public reg< uint8_t, base_addr + 0x4e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x4e, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TERR   = regbits< type,  0,  1 >;  /**< Transfer Error     */
    using TCMPL  = regbits< type,  1,  1 >;  /**< Transfer Complete  */
    using SUSP   = regbits< type,  2,  1 >;  /**< Channel Suspend    */
  };

  /**
   * Channel Status
   */
  struct CHSTATUS
  : public reg< uint8_t, base_addr + 0x4f, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x4f, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PEND  = regbits< type,  0,  1 >;  /**< Channel Pending  */
    using BUSY  = regbits< type,  1,  1 >;  /**< Channel Busy     */
    using FERR  = regbits< type,  2,  1 >;  /**< Fetch Error      */
  };

  /**
   * CRC Checksum
   */
  struct CRCCHKSUM
  : public reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CRCCHKSUM
    using CRCCHKSUM_ = regbits< type,  0, 32 >;  /**< CRC Checksum  */
  };

  /**
   * CRC Control
   */
  struct CRCCTRL
  : public reg< uint16_t, base_addr + 0x02, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x02, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CRCBEATSIZE  = regbits< type,  0,  2 >;  /**< CRC Beat Size        */
    using CRCPOLY      = regbits< type,  2,  2 >;  /**< CRC Polynomial Type  */
    using CRCSRC       = regbits< type,  8,  6 >;  /**< CRC Input Source     */
  };

  /**
   * CRC Data Input
   */
  struct CRCDATAIN
  : public reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CRCDATAIN
    using CRCDATAIN_ = regbits< type,  0, 32 >;  /**< CRC Data Input  */
  };

  /**
   * CRC Status
   */
  struct CRCSTATUS
  : public reg< uint8_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CRCBUSY  = regbits< type,  0,  1 >;  /**< CRC Module Busy  */
    using CRCZERO  = regbits< type,  1,  1 >;  /**< CRC Zero         */
  };

  /**
   * Control
   */
  struct CTRL
  : public reg< uint16_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST      = regbits< type,  0,  1 >;  /**< Software Reset           */
    using DMAENABLE  = regbits< type,  1,  1 >;  /**< DMA Enable               */
    using CRCENABLE  = regbits< type,  2,  1 >;  /**< CRC Enable               */
    using LVLEN0     = regbits< type,  8,  1 >;  /**< Priority Level 0 Enable  */
    using LVLEN1     = regbits< type,  9,  1 >;  /**< Priority Level 1 Enable  */
    using LVLEN2     = regbits< type, 10,  1 >;  /**< Priority Level 2 Enable  */
    using LVLEN3     = regbits< type, 11,  1 >;  /**< Priority Level 3 Enable  */
  };

  /**
   * Debug Control
   */
  struct DBGCTRL
  : public reg< uint8_t, base_addr + 0x0d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBGRUN  = regbits< type,  0,  1 >;  /**< Debug Run  */
  };

  /**
   * Interrupt Pending
   */
  struct INTPEND
  : public reg< uint16_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ID     = regbits< type,  0,  4 >;  /**< Channel ID         */
    using TERR   = regbits< type,  8,  1 >;  /**< Transfer Error     */
    using TCMPL  = regbits< type,  9,  1 >;  /**< Transfer Complete  */
    using SUSP   = regbits< type, 10,  1 >;  /**< Channel Suspend    */
    using FERR   = regbits< type, 13,  1 >;  /**< Fetch Error        */
    using BUSY   = regbits< type, 14,  1 >;  /**< Busy               */
    using PEND   = regbits< type, 15,  1 >;  /**< Pending            */
  };

  /**
   * Interrupt Status
   */
  struct INTSTATUS
  : public reg< uint32_t, base_addr + 0x24, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using CHINT0   = regbits< type,  0,  1 >;  /**< Channel 0 Pending Interrupt   */
    using CHINT1   = regbits< type,  1,  1 >;  /**< Channel 1 Pending Interrupt   */
    using CHINT2   = regbits< type,  2,  1 >;  /**< Channel 2 Pending Interrupt   */
    using CHINT3   = regbits< type,  3,  1 >;  /**< Channel 3 Pending Interrupt   */
    using CHINT4   = regbits< type,  4,  1 >;  /**< Channel 4 Pending Interrupt   */
    using CHINT5   = regbits< type,  5,  1 >;  /**< Channel 5 Pending Interrupt   */
    using CHINT6   = regbits< type,  6,  1 >;  /**< Channel 6 Pending Interrupt   */
    using CHINT7   = regbits< type,  7,  1 >;  /**< Channel 7 Pending Interrupt   */
    using CHINT8   = regbits< type,  8,  1 >;  /**< Channel 8 Pending Interrupt   */
    using CHINT9   = regbits< type,  9,  1 >;  /**< Channel 9 Pending Interrupt   */
    using CHINT10  = regbits< type, 10,  1 >;  /**< Channel 10 Pending Interrupt  */
    using CHINT11  = regbits< type, 11,  1 >;  /**< Channel 11 Pending Interrupt  */
  };

  /**
   * Pending Channels
   */
  struct PENDCH
  : public reg< uint32_t, base_addr + 0x2c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using PENDCH0   = regbits< type,  0,  1 >;  /**< Pending Channel 0   */
    using PENDCH1   = regbits< type,  1,  1 >;  /**< Pending Channel 1   */
    using PENDCH2   = regbits< type,  2,  1 >;  /**< Pending Channel 2   */
    using PENDCH3   = regbits< type,  3,  1 >;  /**< Pending Channel 3   */
    using PENDCH4   = regbits< type,  4,  1 >;  /**< Pending Channel 4   */
    using PENDCH5   = regbits< type,  5,  1 >;  /**< Pending Channel 5   */
    using PENDCH6   = regbits< type,  6,  1 >;  /**< Pending Channel 6   */
    using PENDCH7   = regbits< type,  7,  1 >;  /**< Pending Channel 7   */
    using PENDCH8   = regbits< type,  8,  1 >;  /**< Pending Channel 8   */
    using PENDCH9   = regbits< type,  9,  1 >;  /**< Pending Channel 9   */
    using PENDCH10  = regbits< type, 10,  1 >;  /**< Pending Channel 10  */
    using PENDCH11  = regbits< type, 11,  1 >;  /**< Pending Channel 11  */
  };

  /**
   * Priority Control 0
   */
  struct PRICTRL0
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LVLPRI0   = regbits< type,  0,  4 >;  /**< Level 0 Channel Priority Number        */
    using RRLVLEN0  = regbits< type,  7,  1 >;  /**< Level 0 Round-Robin Scheduling Enable  */
    using LVLPRI1   = regbits< type,  8,  4 >;  /**< Level 1 Channel Priority Number        */
    using RRLVLEN1  = regbits< type, 15,  1 >;  /**< Level 1 Round-Robin Scheduling Enable  */
    using LVLPRI2   = regbits< type, 16,  4 >;  /**< Level 2 Channel Priority Number        */
    using RRLVLEN2  = regbits< type, 23,  1 >;  /**< Level 2 Round-Robin Scheduling Enable  */
    using LVLPRI3   = regbits< type, 24,  4 >;  /**< Level 3 Channel Priority Number        */
    using RRLVLEN3  = regbits< type, 31,  1 >;  /**< Level 3 Round-Robin Scheduling Enable  */
  };

  /**
   * Software Trigger Control
   */
  struct SWTRIGCTRL
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWTRIG0   = regbits< type,  0,  1 >;  /**< Channel 0 Software Trigger   */
    using SWTRIG1   = regbits< type,  1,  1 >;  /**< Channel 1 Software Trigger   */
    using SWTRIG2   = regbits< type,  2,  1 >;  /**< Channel 2 Software Trigger   */
    using SWTRIG3   = regbits< type,  3,  1 >;  /**< Channel 3 Software Trigger   */
    using SWTRIG4   = regbits< type,  4,  1 >;  /**< Channel 4 Software Trigger   */
    using SWTRIG5   = regbits< type,  5,  1 >;  /**< Channel 5 Software Trigger   */
    using SWTRIG6   = regbits< type,  6,  1 >;  /**< Channel 6 Software Trigger   */
    using SWTRIG7   = regbits< type,  7,  1 >;  /**< Channel 7 Software Trigger   */
    using SWTRIG8   = regbits< type,  8,  1 >;  /**< Channel 8 Software Trigger   */
    using SWTRIG9   = regbits< type,  9,  1 >;  /**< Channel 9 Software Trigger   */
    using SWTRIG10  = regbits< type, 10,  1 >;  /**< Channel 10 Software Trigger  */
    using SWTRIG11  = regbits< type, 11,  1 >;  /**< Channel 11 Software Trigger  */
  };

  /**
   * Write-Back Memory Section Base Address
   */
  struct WRBADDR
  : public reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: WRBADDR
    using WRBADDR_ = regbits< type,  0, 32 >;  /**< Write-Back Memory Base Address  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DMAC_HPP_INCLUDED
