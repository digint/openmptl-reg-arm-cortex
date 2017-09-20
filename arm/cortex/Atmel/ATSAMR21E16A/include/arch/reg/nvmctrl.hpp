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
//  Import from CMSIS-SVD: "Atmel/ATSAMR21E16A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMR21E16A
//  series: SAMR21
//  version: A
//  description: Atmel ATSAMR21E16A device: Cortex-M0+ Microcontroller with 64KB Flash, 16KB SRAM, 233-pin package (refer to http://www.atmel.com/devices/SAMR21E16A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_NVMCTRL_HPP_INCLUDED
#define ARCH_REG_NVMCTRL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Non-Volatile Memory Controller
 */
struct NVMCTRL
{
  static constexpr reg_addr_t base_addr = 0x41004000;

  /**
   * Address
   */
  struct ADDR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ADDR
    using ADDR_ = regbits< type,  0, 22 >;  /**< NVM Address  */
  };

  /**
   * Control A
   */
  struct CTRLA
  : public reg< uint16_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CMD    = regbits< type,  0,  7 >;  /**< Command            */
    using CMDEX  = regbits< type,  8,  8 >;  /**< Command Execution  */
  };

  /**
   * Control B
   */
  struct CTRLB
  : public reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RWS       = regbits< type,  1,  4 >;  /**< NVM Read Wait States               */
    using MANW      = regbits< type,  7,  1 >;  /**< Manual Write                       */
    using SLEEPPRM  = regbits< type,  8,  2 >;  /**< Power Reduction Mode during Sleep  */
    using READMODE  = regbits< type, 16,  2 >;  /**< NVMCTRL Read Mode                  */
    using CACHEDIS  = regbits< type, 18,  1 >;  /**< Cache Disable                      */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint8_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY  = regbits< type,  0,  1 >;  /**< NVM Ready Interrupt Enable  */
    using ERROR  = regbits< type,  1,  1 >;  /**< Error Interrupt Enable      */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint8_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY  = regbits< type,  0,  1 >;  /**< NVM Ready Interrupt Enable  */
    using ERROR  = regbits< type,  1,  1 >;  /**< Error Interrupt Enable      */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint8_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY  = regbits< type,  0,  1 >;  /**< NVM Ready  */
    using ERROR  = regbits< type,  1,  1 >;  /**< Error      */
  };

  /**
   * Lock Section
   */
  struct LOCK
  : public reg< uint16_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: LOCK
    using LOCK_ = regbits< type,  0, 16 >;  /**< Region Lock Bits  */
  };

  /**
   * NVM Parameter
   */
  struct PARAM
  : public reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NVMP  = regbits< type,  0, 16 >;  /**< NVM Pages  */
    using PSZ   = regbits< type, 16,  3 >;  /**< Page Size  */
  };

  /**
   * Status
   */
  struct STATUS
  : public reg< uint16_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRM    = regbits< type,  0,  1 >;  /**< Power Reduction Mode            */
    using LOAD   = regbits< type,  1,  1 >;  /**< NVM Page Buffer Active Loading  */
    using PROGE  = regbits< type,  2,  1 >;  /**< Programming Error Status        */
    using LOCKE  = regbits< type,  3,  1 >;  /**< Lock Error Status               */
    using NVME   = regbits< type,  4,  1 >;  /**< NVM Error                       */
    using SB     = regbits< type,  8,  1 >;  /**< Security Bit Status             */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVMCTRL_HPP_INCLUDED
