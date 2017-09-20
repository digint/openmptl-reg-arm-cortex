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
//  Import from CMSIS-SVD: "Freescale/MKW40Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW40Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW40Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MTB_HPP_INCLUDED
#define ARCH_REG_MTB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Micro Trace Buffer
 */
struct MTB
{
  static constexpr reg_addr_t base_addr = 0xf0000000;

  /**
   * MTB Position Register
   */
  struct POSITION
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using WRAP     = regbits< type,  2,  1 >;  /**< WRAP                                */
    using POINTER  = regbits< type,  3, 29 >;  /**< Trace Packet Address Pointer[28:0]  */
  };

  /**
   * MTB Master Register
   */
  struct MASTER
  : public reg< uint32_t, base_addr + 0x4, rw, 0x80 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x80 >;

    using MASK      = regbits< type,  0,  5 >;  /**< Mask                                       */
    using TSTARTEN  = regbits< type,  5,  1 >;  /**< Trace Start Input Enable                   */
    using TSTOPEN   = regbits< type,  6,  1 >;  /**< Trace Stop Input Enable                    */
    using SFRWPRIV  = regbits< type,  7,  1 >;  /**< Special Function Register Write Privilege  */
    using RAMPRIV   = regbits< type,  8,  1 >;  /**< RAM Privilege                              */
    using HALTREQ   = regbits< type,  9,  1 >;  /**< Halt Request                               */
    using EN        = regbits< type, 31,  1 >;  /**< Main Trace Enable                          */
  };

  /**
   * MTB Flow Register
   */
  struct FLOW
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using AUTOSTOP   = regbits< type,  0,  1 >;  /**< AUTOSTOP         */
    using AUTOHALT   = regbits< type,  1,  1 >;  /**< AUTOHALT         */
    using WATERMARK  = regbits< type,  3, 29 >;  /**< WATERMARK[28:0]  */
  };

  /**
   * MTB Base Register
   */
  struct BASE
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using BASEADDR  = regbits< type,  0, 32 >;  /**< BASEADDR  */
  };

  /**
   * Integration Mode Control Register
   */
  struct MODECTRL
  : public reg< uint32_t, base_addr + 0xf00, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf00, ro, 0 >;

    // fixme: Field name equals parent register name: MODECTRL
    using MODECTRL_ = regbits< type,  0, 32 >;  /**< MODECTRL  */
  };

  /**
   * Claim TAG Set Register
   */
  struct TAGSET
  : public reg< uint32_t, base_addr + 0xfa0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfa0, ro, 0 >;

    // fixme: Field name equals parent register name: TAGSET
    using TAGSET_ = regbits< type,  0, 32 >;  /**< TAGSET  */
  };

  /**
   * Claim TAG Clear Register
   */
  struct TAGCLEAR
  : public reg< uint32_t, base_addr + 0xfa4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfa4, ro, 0 >;

    // fixme: Field name equals parent register name: TAGCLEAR
    using TAGCLEAR_ = regbits< type,  0, 32 >;  /**< TAGCLEAR  */
  };

  /**
   * Lock Access Register
   */
  struct LOCKACCESS
  : public reg< uint32_t, base_addr + 0xfb0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfb0, ro, 0 >;

    // fixme: Field name equals parent register name: LOCKACCESS
    using LOCKACCESS_ = regbits< type,  0, 32 >;  /**< Hardwired to 0x0000_0000  */
  };

  /**
   * Lock Status Register
   */
  struct LOCKSTAT
  : public reg< uint32_t, base_addr + 0xfb4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfb4, ro, 0 >;

    // fixme: Field name equals parent register name: LOCKSTAT
    using LOCKSTAT_ = regbits< type,  0, 32 >;  /**< LOCKSTAT  */
  };

  /**
   * Authentication Status Register
   */
  struct AUTHSTAT
  : public reg< uint32_t, base_addr + 0xfb8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfb8, ro, 0 >;

    using BIT0  = regbits< type,  0,  1 >;  /**< Connected to DBGEN.  */
    using BIT1  = regbits< type,  1,  1 >;  /**< BIT1                 */
    using BIT2  = regbits< type,  2,  1 >;  /**< BIT2                 */
    using BIT3  = regbits< type,  3,  1 >;  /**< BIT3                 */
  };

  /**
   * Device Architecture Register
   */
  struct DEVICEARCH
  : public reg< uint32_t, base_addr + 0xfbc, ro, 0x47700A31 >
  {
    using type = reg< uint32_t, base_addr + 0xfbc, ro, 0x47700A31 >;

    // fixme: Field name equals parent register name: DEVICEARCH
    using DEVICEARCH_ = regbits< type,  0, 32 >;  /**< DEVICEARCH  */
  };

  /**
   * Device Configuration Register
   */
  struct DEVICECFG
  : public reg< uint32_t, base_addr + 0xfc8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfc8, ro, 0 >;

    // fixme: Field name equals parent register name: DEVICECFG
    using DEVICECFG_ = regbits< type,  0, 32 >;  /**< DEVICECFG  */
  };

  /**
   * Device Type Identifier Register
   */
  struct DEVICETYPID
  : public reg< uint32_t, base_addr + 0xfcc, ro, 0x31 >
  {
    using type = reg< uint32_t, base_addr + 0xfcc, ro, 0x31 >;

    // fixme: Field name equals parent register name: DEVICETYPID
    using DEVICETYPID_ = regbits< type,  0, 32 >;  /**< DEVICETYPID  */
  };

  /**
   * Peripheral ID Register
   */
  struct PERIPHID%s
  : public reg< uint32_t, base_addr + 0xfd0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfd0, ro, 0 >;

    using PERIPHID  = regbits< type,  0, 32 >;  /**< PERIPHID  */
  };

  /**
   * Component ID Register
   */
  struct COMPID%s
  : public reg< uint32_t, base_addr + 0xff0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xff0, ro, 0 >;

    using COMPID  = regbits< type,  0, 32 >;  /**< Component ID  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MTB_HPP_INCLUDED
