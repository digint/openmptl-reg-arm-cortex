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
//  Import from CMSIS-SVD: "Freescale/MKW21Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW21Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW21Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_XCVR_PKT_RAM_HPP_INCLUDED
#define ARCH_REG_XCVR_PKT_RAM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * XCVR_PKT_RAM
 */
struct XCVR_PKT_RAM
{
  static constexpr reg_addr_t base_addr = 0x4005c700;

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_0
  : public reg< uint16_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_1
  : public reg< uint16_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_2
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_3
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_4
  : public reg< uint16_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_5
  : public reg< uint16_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_6
  : public reg< uint16_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_7
  : public reg< uint16_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_8
  : public reg< uint16_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_9
  : public reg< uint16_t, base_addr + 0x12, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_10
  : public reg< uint16_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_11
  : public reg< uint16_t, base_addr + 0x16, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_12
  : public reg< uint16_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_13
  : public reg< uint16_t, base_addr + 0x1a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_14
  : public reg< uint16_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_15
  : public reg< uint16_t, base_addr + 0x1e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_16
  : public reg< uint16_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_17
  : public reg< uint16_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x22, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_18
  : public reg< uint16_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_19
  : public reg< uint16_t, base_addr + 0x26, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x26, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_20
  : public reg< uint16_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x28, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_21
  : public reg< uint16_t, base_addr + 0x2a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_22
  : public reg< uint16_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_23
  : public reg< uint16_t, base_addr + 0x2e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_24
  : public reg< uint16_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x30, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_25
  : public reg< uint16_t, base_addr + 0x32, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x32, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_26
  : public reg< uint16_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x34, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_27
  : public reg< uint16_t, base_addr + 0x36, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x36, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_28
  : public reg< uint16_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x38, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_29
  : public reg< uint16_t, base_addr + 0x3a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_30
  : public reg< uint16_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_31
  : public reg< uint16_t, base_addr + 0x3e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_32
  : public reg< uint16_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x40, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_33
  : public reg< uint16_t, base_addr + 0x42, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x42, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_34
  : public reg< uint16_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x44, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_35
  : public reg< uint16_t, base_addr + 0x46, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x46, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_36
  : public reg< uint16_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x48, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_37
  : public reg< uint16_t, base_addr + 0x4a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_38
  : public reg< uint16_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_39
  : public reg< uint16_t, base_addr + 0x4e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_40
  : public reg< uint16_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x50, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_41
  : public reg< uint16_t, base_addr + 0x52, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x52, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_42
  : public reg< uint16_t, base_addr + 0x54, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x54, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_43
  : public reg< uint16_t, base_addr + 0x56, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x56, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_44
  : public reg< uint16_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x58, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_45
  : public reg< uint16_t, base_addr + 0x5a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_46
  : public reg< uint16_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_47
  : public reg< uint16_t, base_addr + 0x5e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_48
  : public reg< uint16_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x60, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_49
  : public reg< uint16_t, base_addr + 0x62, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x62, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_50
  : public reg< uint16_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x64, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_51
  : public reg< uint16_t, base_addr + 0x66, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x66, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_52
  : public reg< uint16_t, base_addr + 0x68, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x68, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_53
  : public reg< uint16_t, base_addr + 0x6a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_54
  : public reg< uint16_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_55
  : public reg< uint16_t, base_addr + 0x6e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_56
  : public reg< uint16_t, base_addr + 0x70, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x70, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_57
  : public reg< uint16_t, base_addr + 0x72, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x72, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_58
  : public reg< uint16_t, base_addr + 0x74, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x74, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_59
  : public reg< uint16_t, base_addr + 0x76, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x76, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_60
  : public reg< uint16_t, base_addr + 0x78, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x78, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_61
  : public reg< uint16_t, base_addr + 0x7a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_62
  : public reg< uint16_t, base_addr + 0x7c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_63
  : public reg< uint16_t, base_addr + 0x7e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_64
  : public reg< uint16_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x80, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_65
  : public reg< uint16_t, base_addr + 0x82, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x82, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_66
  : public reg< uint16_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x84, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_67
  : public reg< uint16_t, base_addr + 0x86, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x86, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_68
  : public reg< uint16_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x88, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_69
  : public reg< uint16_t, base_addr + 0x8a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_70
  : public reg< uint16_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_71
  : public reg< uint16_t, base_addr + 0x8e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_72
  : public reg< uint16_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x90, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_73
  : public reg< uint16_t, base_addr + 0x92, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x92, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_74
  : public reg< uint16_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x94, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_75
  : public reg< uint16_t, base_addr + 0x96, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x96, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_76
  : public reg< uint16_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x98, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_77
  : public reg< uint16_t, base_addr + 0x9a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x9a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_78
  : public reg< uint16_t, base_addr + 0x9c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x9c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_79
  : public reg< uint16_t, base_addr + 0x9e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x9e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_80
  : public reg< uint16_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_81
  : public reg< uint16_t, base_addr + 0xa2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_82
  : public reg< uint16_t, base_addr + 0xa4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_83
  : public reg< uint16_t, base_addr + 0xa6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_84
  : public reg< uint16_t, base_addr + 0xa8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_85
  : public reg< uint16_t, base_addr + 0xaa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xaa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_86
  : public reg< uint16_t, base_addr + 0xac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xac, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_87
  : public reg< uint16_t, base_addr + 0xae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xae, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_88
  : public reg< uint16_t, base_addr + 0xb0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xb0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_89
  : public reg< uint16_t, base_addr + 0xb2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xb2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_90
  : public reg< uint16_t, base_addr + 0xb4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xb4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_91
  : public reg< uint16_t, base_addr + 0xb6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xb6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_92
  : public reg< uint16_t, base_addr + 0xb8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xb8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_93
  : public reg< uint16_t, base_addr + 0xba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xba, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_94
  : public reg< uint16_t, base_addr + 0xbc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xbc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_95
  : public reg< uint16_t, base_addr + 0xbe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xbe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_96
  : public reg< uint16_t, base_addr + 0xc0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_97
  : public reg< uint16_t, base_addr + 0xc2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_98
  : public reg< uint16_t, base_addr + 0xc4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_99
  : public reg< uint16_t, base_addr + 0xc6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_100
  : public reg< uint16_t, base_addr + 0xc8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_101
  : public reg< uint16_t, base_addr + 0xca, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xca, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_102
  : public reg< uint16_t, base_addr + 0xcc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xcc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_103
  : public reg< uint16_t, base_addr + 0xce, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xce, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_104
  : public reg< uint16_t, base_addr + 0xd0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xd0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_105
  : public reg< uint16_t, base_addr + 0xd2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xd2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_106
  : public reg< uint16_t, base_addr + 0xd4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xd4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_107
  : public reg< uint16_t, base_addr + 0xd6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xd6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_108
  : public reg< uint16_t, base_addr + 0xd8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xd8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_109
  : public reg< uint16_t, base_addr + 0xda, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xda, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_110
  : public reg< uint16_t, base_addr + 0xdc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xdc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_111
  : public reg< uint16_t, base_addr + 0xde, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xde, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_112
  : public reg< uint16_t, base_addr + 0xe0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_113
  : public reg< uint16_t, base_addr + 0xe2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_114
  : public reg< uint16_t, base_addr + 0xe4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_115
  : public reg< uint16_t, base_addr + 0xe6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_116
  : public reg< uint16_t, base_addr + 0xe8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_117
  : public reg< uint16_t, base_addr + 0xea, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xea, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_118
  : public reg< uint16_t, base_addr + 0xec, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xec, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_119
  : public reg< uint16_t, base_addr + 0xee, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xee, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_120
  : public reg< uint16_t, base_addr + 0xf0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xf0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_121
  : public reg< uint16_t, base_addr + 0xf2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xf2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_122
  : public reg< uint16_t, base_addr + 0xf4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xf4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_123
  : public reg< uint16_t, base_addr + 0xf6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xf6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_124
  : public reg< uint16_t, base_addr + 0xf8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xf8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_125
  : public reg< uint16_t, base_addr + 0xfa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xfa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_126
  : public reg< uint16_t, base_addr + 0xfc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xfc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_127
  : public reg< uint16_t, base_addr + 0xfe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xfe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_128
  : public reg< uint16_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x100, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_129
  : public reg< uint16_t, base_addr + 0x102, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x102, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_130
  : public reg< uint16_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x104, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_131
  : public reg< uint16_t, base_addr + 0x106, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x106, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_132
  : public reg< uint16_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x108, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_133
  : public reg< uint16_t, base_addr + 0x10a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_134
  : public reg< uint16_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_135
  : public reg< uint16_t, base_addr + 0x10e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_136
  : public reg< uint16_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x110, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_137
  : public reg< uint16_t, base_addr + 0x112, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x112, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_138
  : public reg< uint16_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x114, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_139
  : public reg< uint16_t, base_addr + 0x116, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x116, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_140
  : public reg< uint16_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x118, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_141
  : public reg< uint16_t, base_addr + 0x11a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x11a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_142
  : public reg< uint16_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x11c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_143
  : public reg< uint16_t, base_addr + 0x11e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x11e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_144
  : public reg< uint16_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x120, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_145
  : public reg< uint16_t, base_addr + 0x122, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x122, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_146
  : public reg< uint16_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x124, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_147
  : public reg< uint16_t, base_addr + 0x126, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x126, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_148
  : public reg< uint16_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x128, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_149
  : public reg< uint16_t, base_addr + 0x12a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_150
  : public reg< uint16_t, base_addr + 0x12c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_151
  : public reg< uint16_t, base_addr + 0x12e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_152
  : public reg< uint16_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x130, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_153
  : public reg< uint16_t, base_addr + 0x132, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x132, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_154
  : public reg< uint16_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x134, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_155
  : public reg< uint16_t, base_addr + 0x136, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x136, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_156
  : public reg< uint16_t, base_addr + 0x138, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x138, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_157
  : public reg< uint16_t, base_addr + 0x13a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x13a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_158
  : public reg< uint16_t, base_addr + 0x13c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x13c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_159
  : public reg< uint16_t, base_addr + 0x13e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x13e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_160
  : public reg< uint16_t, base_addr + 0x140, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x140, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_161
  : public reg< uint16_t, base_addr + 0x142, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x142, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_162
  : public reg< uint16_t, base_addr + 0x144, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x144, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_163
  : public reg< uint16_t, base_addr + 0x146, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x146, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_164
  : public reg< uint16_t, base_addr + 0x148, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x148, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_165
  : public reg< uint16_t, base_addr + 0x14a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_166
  : public reg< uint16_t, base_addr + 0x14c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_167
  : public reg< uint16_t, base_addr + 0x14e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_168
  : public reg< uint16_t, base_addr + 0x150, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x150, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_169
  : public reg< uint16_t, base_addr + 0x152, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x152, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_170
  : public reg< uint16_t, base_addr + 0x154, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x154, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_171
  : public reg< uint16_t, base_addr + 0x156, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x156, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_172
  : public reg< uint16_t, base_addr + 0x158, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x158, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_173
  : public reg< uint16_t, base_addr + 0x15a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x15a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_174
  : public reg< uint16_t, base_addr + 0x15c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x15c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_175
  : public reg< uint16_t, base_addr + 0x15e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x15e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_176
  : public reg< uint16_t, base_addr + 0x160, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x160, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_177
  : public reg< uint16_t, base_addr + 0x162, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x162, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_178
  : public reg< uint16_t, base_addr + 0x164, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x164, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_179
  : public reg< uint16_t, base_addr + 0x166, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x166, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_180
  : public reg< uint16_t, base_addr + 0x168, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x168, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_181
  : public reg< uint16_t, base_addr + 0x16a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_182
  : public reg< uint16_t, base_addr + 0x16c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_183
  : public reg< uint16_t, base_addr + 0x16e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x16e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_184
  : public reg< uint16_t, base_addr + 0x170, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x170, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_185
  : public reg< uint16_t, base_addr + 0x172, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x172, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_186
  : public reg< uint16_t, base_addr + 0x174, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x174, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_187
  : public reg< uint16_t, base_addr + 0x176, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x176, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_188
  : public reg< uint16_t, base_addr + 0x178, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x178, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_189
  : public reg< uint16_t, base_addr + 0x17a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x17a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_190
  : public reg< uint16_t, base_addr + 0x17c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x17c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_191
  : public reg< uint16_t, base_addr + 0x17e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x17e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_192
  : public reg< uint16_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x180, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_193
  : public reg< uint16_t, base_addr + 0x182, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x182, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_194
  : public reg< uint16_t, base_addr + 0x184, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x184, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_195
  : public reg< uint16_t, base_addr + 0x186, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x186, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_196
  : public reg< uint16_t, base_addr + 0x188, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x188, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_197
  : public reg< uint16_t, base_addr + 0x18a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_198
  : public reg< uint16_t, base_addr + 0x18c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_199
  : public reg< uint16_t, base_addr + 0x18e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x18e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_200
  : public reg< uint16_t, base_addr + 0x190, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x190, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_201
  : public reg< uint16_t, base_addr + 0x192, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x192, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_202
  : public reg< uint16_t, base_addr + 0x194, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x194, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_203
  : public reg< uint16_t, base_addr + 0x196, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x196, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_204
  : public reg< uint16_t, base_addr + 0x198, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x198, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_205
  : public reg< uint16_t, base_addr + 0x19a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x19a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_206
  : public reg< uint16_t, base_addr + 0x19c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x19c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_207
  : public reg< uint16_t, base_addr + 0x19e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x19e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_208
  : public reg< uint16_t, base_addr + 0x1a0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_209
  : public reg< uint16_t, base_addr + 0x1a2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_210
  : public reg< uint16_t, base_addr + 0x1a4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_211
  : public reg< uint16_t, base_addr + 0x1a6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_212
  : public reg< uint16_t, base_addr + 0x1a8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1a8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_213
  : public reg< uint16_t, base_addr + 0x1aa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1aa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_214
  : public reg< uint16_t, base_addr + 0x1ac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ac, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_215
  : public reg< uint16_t, base_addr + 0x1ae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ae, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_216
  : public reg< uint16_t, base_addr + 0x1b0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_217
  : public reg< uint16_t, base_addr + 0x1b2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_218
  : public reg< uint16_t, base_addr + 0x1b4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_219
  : public reg< uint16_t, base_addr + 0x1b6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_220
  : public reg< uint16_t, base_addr + 0x1b8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1b8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_221
  : public reg< uint16_t, base_addr + 0x1ba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ba, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_222
  : public reg< uint16_t, base_addr + 0x1bc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1bc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_223
  : public reg< uint16_t, base_addr + 0x1be, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1be, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_224
  : public reg< uint16_t, base_addr + 0x1c0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_225
  : public reg< uint16_t, base_addr + 0x1c2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_226
  : public reg< uint16_t, base_addr + 0x1c4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_227
  : public reg< uint16_t, base_addr + 0x1c6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_228
  : public reg< uint16_t, base_addr + 0x1c8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1c8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_229
  : public reg< uint16_t, base_addr + 0x1ca, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ca, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_230
  : public reg< uint16_t, base_addr + 0x1cc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1cc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_231
  : public reg< uint16_t, base_addr + 0x1ce, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ce, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_232
  : public reg< uint16_t, base_addr + 0x1d0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_233
  : public reg< uint16_t, base_addr + 0x1d2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_234
  : public reg< uint16_t, base_addr + 0x1d4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_235
  : public reg< uint16_t, base_addr + 0x1d6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_236
  : public reg< uint16_t, base_addr + 0x1d8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1d8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_237
  : public reg< uint16_t, base_addr + 0x1da, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1da, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_238
  : public reg< uint16_t, base_addr + 0x1dc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1dc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_239
  : public reg< uint16_t, base_addr + 0x1de, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1de, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_240
  : public reg< uint16_t, base_addr + 0x1e0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_241
  : public reg< uint16_t, base_addr + 0x1e2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_242
  : public reg< uint16_t, base_addr + 0x1e4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_243
  : public reg< uint16_t, base_addr + 0x1e6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_244
  : public reg< uint16_t, base_addr + 0x1e8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1e8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_245
  : public reg< uint16_t, base_addr + 0x1ea, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ea, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_246
  : public reg< uint16_t, base_addr + 0x1ec, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ec, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_247
  : public reg< uint16_t, base_addr + 0x1ee, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1ee, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_248
  : public reg< uint16_t, base_addr + 0x1f0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_249
  : public reg< uint16_t, base_addr + 0x1f2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_250
  : public reg< uint16_t, base_addr + 0x1f4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_251
  : public reg< uint16_t, base_addr + 0x1f6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_252
  : public reg< uint16_t, base_addr + 0x1f8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1f8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_253
  : public reg< uint16_t, base_addr + 0x1fa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1fa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_254
  : public reg< uint16_t, base_addr + 0x1fc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1fc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_255
  : public reg< uint16_t, base_addr + 0x1fe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x1fe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_256
  : public reg< uint16_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x200, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_257
  : public reg< uint16_t, base_addr + 0x202, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x202, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_258
  : public reg< uint16_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x204, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_259
  : public reg< uint16_t, base_addr + 0x206, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x206, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_260
  : public reg< uint16_t, base_addr + 0x208, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x208, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_261
  : public reg< uint16_t, base_addr + 0x20a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x20a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_262
  : public reg< uint16_t, base_addr + 0x20c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x20c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_263
  : public reg< uint16_t, base_addr + 0x20e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x20e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_264
  : public reg< uint16_t, base_addr + 0x210, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x210, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_265
  : public reg< uint16_t, base_addr + 0x212, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x212, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_266
  : public reg< uint16_t, base_addr + 0x214, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x214, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_267
  : public reg< uint16_t, base_addr + 0x216, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x216, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_268
  : public reg< uint16_t, base_addr + 0x218, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x218, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_269
  : public reg< uint16_t, base_addr + 0x21a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x21a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_270
  : public reg< uint16_t, base_addr + 0x21c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x21c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_271
  : public reg< uint16_t, base_addr + 0x21e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x21e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_272
  : public reg< uint16_t, base_addr + 0x220, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x220, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_273
  : public reg< uint16_t, base_addr + 0x222, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x222, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_274
  : public reg< uint16_t, base_addr + 0x224, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x224, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_275
  : public reg< uint16_t, base_addr + 0x226, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x226, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_276
  : public reg< uint16_t, base_addr + 0x228, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x228, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_277
  : public reg< uint16_t, base_addr + 0x22a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x22a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_278
  : public reg< uint16_t, base_addr + 0x22c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x22c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_279
  : public reg< uint16_t, base_addr + 0x22e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x22e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_280
  : public reg< uint16_t, base_addr + 0x230, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x230, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_281
  : public reg< uint16_t, base_addr + 0x232, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x232, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_282
  : public reg< uint16_t, base_addr + 0x234, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x234, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_283
  : public reg< uint16_t, base_addr + 0x236, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x236, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_284
  : public reg< uint16_t, base_addr + 0x238, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x238, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_285
  : public reg< uint16_t, base_addr + 0x23a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x23a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_286
  : public reg< uint16_t, base_addr + 0x23c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x23c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_287
  : public reg< uint16_t, base_addr + 0x23e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x23e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_288
  : public reg< uint16_t, base_addr + 0x240, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x240, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_289
  : public reg< uint16_t, base_addr + 0x242, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x242, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_290
  : public reg< uint16_t, base_addr + 0x244, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x244, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_291
  : public reg< uint16_t, base_addr + 0x246, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x246, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_292
  : public reg< uint16_t, base_addr + 0x248, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x248, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_293
  : public reg< uint16_t, base_addr + 0x24a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x24a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_294
  : public reg< uint16_t, base_addr + 0x24c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x24c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_295
  : public reg< uint16_t, base_addr + 0x24e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x24e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_296
  : public reg< uint16_t, base_addr + 0x250, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x250, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_297
  : public reg< uint16_t, base_addr + 0x252, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x252, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_298
  : public reg< uint16_t, base_addr + 0x254, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x254, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_299
  : public reg< uint16_t, base_addr + 0x256, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x256, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_300
  : public reg< uint16_t, base_addr + 0x258, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x258, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_301
  : public reg< uint16_t, base_addr + 0x25a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x25a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_302
  : public reg< uint16_t, base_addr + 0x25c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x25c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_303
  : public reg< uint16_t, base_addr + 0x25e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x25e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_304
  : public reg< uint16_t, base_addr + 0x260, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x260, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_305
  : public reg< uint16_t, base_addr + 0x262, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x262, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_306
  : public reg< uint16_t, base_addr + 0x264, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x264, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_307
  : public reg< uint16_t, base_addr + 0x266, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x266, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_308
  : public reg< uint16_t, base_addr + 0x268, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x268, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_309
  : public reg< uint16_t, base_addr + 0x26a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x26a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_310
  : public reg< uint16_t, base_addr + 0x26c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x26c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_311
  : public reg< uint16_t, base_addr + 0x26e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x26e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_312
  : public reg< uint16_t, base_addr + 0x270, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x270, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_313
  : public reg< uint16_t, base_addr + 0x272, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x272, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_314
  : public reg< uint16_t, base_addr + 0x274, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x274, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_315
  : public reg< uint16_t, base_addr + 0x276, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x276, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_316
  : public reg< uint16_t, base_addr + 0x278, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x278, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_317
  : public reg< uint16_t, base_addr + 0x27a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x27a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_318
  : public reg< uint16_t, base_addr + 0x27c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x27c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_319
  : public reg< uint16_t, base_addr + 0x27e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x27e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_320
  : public reg< uint16_t, base_addr + 0x280, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x280, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_321
  : public reg< uint16_t, base_addr + 0x282, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x282, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_322
  : public reg< uint16_t, base_addr + 0x284, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x284, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_323
  : public reg< uint16_t, base_addr + 0x286, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x286, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_324
  : public reg< uint16_t, base_addr + 0x288, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x288, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_325
  : public reg< uint16_t, base_addr + 0x28a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x28a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_326
  : public reg< uint16_t, base_addr + 0x28c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x28c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_327
  : public reg< uint16_t, base_addr + 0x28e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x28e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_328
  : public reg< uint16_t, base_addr + 0x290, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x290, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_329
  : public reg< uint16_t, base_addr + 0x292, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x292, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_330
  : public reg< uint16_t, base_addr + 0x294, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x294, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_331
  : public reg< uint16_t, base_addr + 0x296, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x296, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_332
  : public reg< uint16_t, base_addr + 0x298, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x298, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_333
  : public reg< uint16_t, base_addr + 0x29a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x29a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_334
  : public reg< uint16_t, base_addr + 0x29c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x29c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_335
  : public reg< uint16_t, base_addr + 0x29e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x29e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_336
  : public reg< uint16_t, base_addr + 0x2a0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2a0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_337
  : public reg< uint16_t, base_addr + 0x2a2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2a2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_338
  : public reg< uint16_t, base_addr + 0x2a4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2a4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_339
  : public reg< uint16_t, base_addr + 0x2a6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2a6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_340
  : public reg< uint16_t, base_addr + 0x2a8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2a8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_341
  : public reg< uint16_t, base_addr + 0x2aa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2aa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_342
  : public reg< uint16_t, base_addr + 0x2ac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2ac, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_343
  : public reg< uint16_t, base_addr + 0x2ae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2ae, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_344
  : public reg< uint16_t, base_addr + 0x2b0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2b0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_345
  : public reg< uint16_t, base_addr + 0x2b2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2b2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_346
  : public reg< uint16_t, base_addr + 0x2b4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2b4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_347
  : public reg< uint16_t, base_addr + 0x2b6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2b6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_348
  : public reg< uint16_t, base_addr + 0x2b8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2b8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_349
  : public reg< uint16_t, base_addr + 0x2ba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2ba, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_350
  : public reg< uint16_t, base_addr + 0x2bc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2bc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_351
  : public reg< uint16_t, base_addr + 0x2be, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2be, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_352
  : public reg< uint16_t, base_addr + 0x2c0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2c0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_353
  : public reg< uint16_t, base_addr + 0x2c2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2c2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_354
  : public reg< uint16_t, base_addr + 0x2c4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2c4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_355
  : public reg< uint16_t, base_addr + 0x2c6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2c6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_356
  : public reg< uint16_t, base_addr + 0x2c8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2c8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_357
  : public reg< uint16_t, base_addr + 0x2ca, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2ca, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_358
  : public reg< uint16_t, base_addr + 0x2cc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2cc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_359
  : public reg< uint16_t, base_addr + 0x2ce, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2ce, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_360
  : public reg< uint16_t, base_addr + 0x2d0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2d0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_361
  : public reg< uint16_t, base_addr + 0x2d2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2d2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_362
  : public reg< uint16_t, base_addr + 0x2d4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2d4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_363
  : public reg< uint16_t, base_addr + 0x2d6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2d6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_364
  : public reg< uint16_t, base_addr + 0x2d8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2d8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_365
  : public reg< uint16_t, base_addr + 0x2da, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2da, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_366
  : public reg< uint16_t, base_addr + 0x2dc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2dc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_367
  : public reg< uint16_t, base_addr + 0x2de, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2de, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_368
  : public reg< uint16_t, base_addr + 0x2e0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2e0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_369
  : public reg< uint16_t, base_addr + 0x2e2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2e2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_370
  : public reg< uint16_t, base_addr + 0x2e4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2e4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_371
  : public reg< uint16_t, base_addr + 0x2e6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2e6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_372
  : public reg< uint16_t, base_addr + 0x2e8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2e8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_373
  : public reg< uint16_t, base_addr + 0x2ea, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2ea, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_374
  : public reg< uint16_t, base_addr + 0x2ec, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2ec, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_375
  : public reg< uint16_t, base_addr + 0x2ee, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2ee, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_376
  : public reg< uint16_t, base_addr + 0x2f0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2f0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_377
  : public reg< uint16_t, base_addr + 0x2f2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2f2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_378
  : public reg< uint16_t, base_addr + 0x2f4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2f4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_379
  : public reg< uint16_t, base_addr + 0x2f6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2f6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_380
  : public reg< uint16_t, base_addr + 0x2f8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2f8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_381
  : public reg< uint16_t, base_addr + 0x2fa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2fa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_382
  : public reg< uint16_t, base_addr + 0x2fc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2fc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_383
  : public reg< uint16_t, base_addr + 0x2fe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2fe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_384
  : public reg< uint16_t, base_addr + 0x300, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x300, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_385
  : public reg< uint16_t, base_addr + 0x302, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x302, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_386
  : public reg< uint16_t, base_addr + 0x304, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x304, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_387
  : public reg< uint16_t, base_addr + 0x306, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x306, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_388
  : public reg< uint16_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x308, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_389
  : public reg< uint16_t, base_addr + 0x30a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x30a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_390
  : public reg< uint16_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x30c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_391
  : public reg< uint16_t, base_addr + 0x30e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x30e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_392
  : public reg< uint16_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x310, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_393
  : public reg< uint16_t, base_addr + 0x312, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x312, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_394
  : public reg< uint16_t, base_addr + 0x314, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x314, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_395
  : public reg< uint16_t, base_addr + 0x316, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x316, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_396
  : public reg< uint16_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x318, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_397
  : public reg< uint16_t, base_addr + 0x31a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x31a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_398
  : public reg< uint16_t, base_addr + 0x31c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x31c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_399
  : public reg< uint16_t, base_addr + 0x31e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x31e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_400
  : public reg< uint16_t, base_addr + 0x320, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x320, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_401
  : public reg< uint16_t, base_addr + 0x322, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x322, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_402
  : public reg< uint16_t, base_addr + 0x324, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x324, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_403
  : public reg< uint16_t, base_addr + 0x326, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x326, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_404
  : public reg< uint16_t, base_addr + 0x328, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x328, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_405
  : public reg< uint16_t, base_addr + 0x32a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x32a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_406
  : public reg< uint16_t, base_addr + 0x32c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x32c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_407
  : public reg< uint16_t, base_addr + 0x32e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x32e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_408
  : public reg< uint16_t, base_addr + 0x330, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x330, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_409
  : public reg< uint16_t, base_addr + 0x332, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x332, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_410
  : public reg< uint16_t, base_addr + 0x334, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x334, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_411
  : public reg< uint16_t, base_addr + 0x336, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x336, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_412
  : public reg< uint16_t, base_addr + 0x338, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x338, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_413
  : public reg< uint16_t, base_addr + 0x33a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x33a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_414
  : public reg< uint16_t, base_addr + 0x33c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x33c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_415
  : public reg< uint16_t, base_addr + 0x33e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x33e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_416
  : public reg< uint16_t, base_addr + 0x340, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x340, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_417
  : public reg< uint16_t, base_addr + 0x342, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x342, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_418
  : public reg< uint16_t, base_addr + 0x344, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x344, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_419
  : public reg< uint16_t, base_addr + 0x346, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x346, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_420
  : public reg< uint16_t, base_addr + 0x348, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x348, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_421
  : public reg< uint16_t, base_addr + 0x34a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x34a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_422
  : public reg< uint16_t, base_addr + 0x34c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x34c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_423
  : public reg< uint16_t, base_addr + 0x34e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x34e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_424
  : public reg< uint16_t, base_addr + 0x350, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x350, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_425
  : public reg< uint16_t, base_addr + 0x352, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x352, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_426
  : public reg< uint16_t, base_addr + 0x354, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x354, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_427
  : public reg< uint16_t, base_addr + 0x356, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x356, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_428
  : public reg< uint16_t, base_addr + 0x358, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x358, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_429
  : public reg< uint16_t, base_addr + 0x35a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x35a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_430
  : public reg< uint16_t, base_addr + 0x35c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x35c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_431
  : public reg< uint16_t, base_addr + 0x35e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x35e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_432
  : public reg< uint16_t, base_addr + 0x360, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x360, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_433
  : public reg< uint16_t, base_addr + 0x362, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x362, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_434
  : public reg< uint16_t, base_addr + 0x364, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x364, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_435
  : public reg< uint16_t, base_addr + 0x366, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x366, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_436
  : public reg< uint16_t, base_addr + 0x368, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x368, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_437
  : public reg< uint16_t, base_addr + 0x36a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x36a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_438
  : public reg< uint16_t, base_addr + 0x36c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x36c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_439
  : public reg< uint16_t, base_addr + 0x36e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x36e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_440
  : public reg< uint16_t, base_addr + 0x370, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x370, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_441
  : public reg< uint16_t, base_addr + 0x372, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x372, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_442
  : public reg< uint16_t, base_addr + 0x374, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x374, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_443
  : public reg< uint16_t, base_addr + 0x376, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x376, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_444
  : public reg< uint16_t, base_addr + 0x378, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x378, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_445
  : public reg< uint16_t, base_addr + 0x37a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x37a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_446
  : public reg< uint16_t, base_addr + 0x37c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x37c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_447
  : public reg< uint16_t, base_addr + 0x37e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x37e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_448
  : public reg< uint16_t, base_addr + 0x380, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x380, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_449
  : public reg< uint16_t, base_addr + 0x382, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x382, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_450
  : public reg< uint16_t, base_addr + 0x384, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x384, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_451
  : public reg< uint16_t, base_addr + 0x386, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x386, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_452
  : public reg< uint16_t, base_addr + 0x388, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x388, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_453
  : public reg< uint16_t, base_addr + 0x38a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x38a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_454
  : public reg< uint16_t, base_addr + 0x38c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x38c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_455
  : public reg< uint16_t, base_addr + 0x38e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x38e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_456
  : public reg< uint16_t, base_addr + 0x390, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x390, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_457
  : public reg< uint16_t, base_addr + 0x392, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x392, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_458
  : public reg< uint16_t, base_addr + 0x394, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x394, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_459
  : public reg< uint16_t, base_addr + 0x396, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x396, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_460
  : public reg< uint16_t, base_addr + 0x398, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x398, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_461
  : public reg< uint16_t, base_addr + 0x39a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x39a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_462
  : public reg< uint16_t, base_addr + 0x39c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x39c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_463
  : public reg< uint16_t, base_addr + 0x39e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x39e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_464
  : public reg< uint16_t, base_addr + 0x3a0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3a0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_465
  : public reg< uint16_t, base_addr + 0x3a2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3a2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_466
  : public reg< uint16_t, base_addr + 0x3a4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3a4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_467
  : public reg< uint16_t, base_addr + 0x3a6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3a6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_468
  : public reg< uint16_t, base_addr + 0x3a8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3a8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_469
  : public reg< uint16_t, base_addr + 0x3aa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3aa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_470
  : public reg< uint16_t, base_addr + 0x3ac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3ac, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_471
  : public reg< uint16_t, base_addr + 0x3ae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3ae, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_472
  : public reg< uint16_t, base_addr + 0x3b0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3b0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_473
  : public reg< uint16_t, base_addr + 0x3b2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3b2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_474
  : public reg< uint16_t, base_addr + 0x3b4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3b4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_475
  : public reg< uint16_t, base_addr + 0x3b6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3b6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_476
  : public reg< uint16_t, base_addr + 0x3b8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3b8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_477
  : public reg< uint16_t, base_addr + 0x3ba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3ba, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_478
  : public reg< uint16_t, base_addr + 0x3bc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3bc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_479
  : public reg< uint16_t, base_addr + 0x3be, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3be, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_480
  : public reg< uint16_t, base_addr + 0x3c0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3c0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_481
  : public reg< uint16_t, base_addr + 0x3c2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3c2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_482
  : public reg< uint16_t, base_addr + 0x3c4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3c4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_483
  : public reg< uint16_t, base_addr + 0x3c6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3c6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_484
  : public reg< uint16_t, base_addr + 0x3c8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3c8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_485
  : public reg< uint16_t, base_addr + 0x3ca, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3ca, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_486
  : public reg< uint16_t, base_addr + 0x3cc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3cc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_487
  : public reg< uint16_t, base_addr + 0x3ce, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3ce, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_488
  : public reg< uint16_t, base_addr + 0x3d0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3d0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_489
  : public reg< uint16_t, base_addr + 0x3d2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3d2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_490
  : public reg< uint16_t, base_addr + 0x3d4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3d4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_491
  : public reg< uint16_t, base_addr + 0x3d6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3d6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_492
  : public reg< uint16_t, base_addr + 0x3d8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3d8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_493
  : public reg< uint16_t, base_addr + 0x3da, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3da, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_494
  : public reg< uint16_t, base_addr + 0x3dc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3dc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_495
  : public reg< uint16_t, base_addr + 0x3de, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3de, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_496
  : public reg< uint16_t, base_addr + 0x3e0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3e0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_497
  : public reg< uint16_t, base_addr + 0x3e2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3e2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_498
  : public reg< uint16_t, base_addr + 0x3e4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3e4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_499
  : public reg< uint16_t, base_addr + 0x3e6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3e6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_500
  : public reg< uint16_t, base_addr + 0x3e8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3e8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_501
  : public reg< uint16_t, base_addr + 0x3ea, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3ea, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_502
  : public reg< uint16_t, base_addr + 0x3ec, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3ec, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_503
  : public reg< uint16_t, base_addr + 0x3ee, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3ee, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_504
  : public reg< uint16_t, base_addr + 0x3f0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3f0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_505
  : public reg< uint16_t, base_addr + 0x3f2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3f2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_506
  : public reg< uint16_t, base_addr + 0x3f4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3f4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_507
  : public reg< uint16_t, base_addr + 0x3f6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3f6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_508
  : public reg< uint16_t, base_addr + 0x3f8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3f8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_509
  : public reg< uint16_t, base_addr + 0x3fa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3fa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_510
  : public reg< uint16_t, base_addr + 0x3fc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3fc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_511
  : public reg< uint16_t, base_addr + 0x3fe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x3fe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_512
  : public reg< uint16_t, base_addr + 0x400, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x400, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_513
  : public reg< uint16_t, base_addr + 0x402, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x402, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_514
  : public reg< uint16_t, base_addr + 0x404, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x404, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_515
  : public reg< uint16_t, base_addr + 0x406, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x406, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_516
  : public reg< uint16_t, base_addr + 0x408, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x408, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_517
  : public reg< uint16_t, base_addr + 0x40a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x40a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_518
  : public reg< uint16_t, base_addr + 0x40c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x40c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_519
  : public reg< uint16_t, base_addr + 0x40e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x40e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_520
  : public reg< uint16_t, base_addr + 0x410, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x410, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_521
  : public reg< uint16_t, base_addr + 0x412, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x412, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_522
  : public reg< uint16_t, base_addr + 0x414, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x414, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_523
  : public reg< uint16_t, base_addr + 0x416, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x416, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_524
  : public reg< uint16_t, base_addr + 0x418, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x418, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_525
  : public reg< uint16_t, base_addr + 0x41a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x41a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_526
  : public reg< uint16_t, base_addr + 0x41c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x41c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_527
  : public reg< uint16_t, base_addr + 0x41e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x41e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_528
  : public reg< uint16_t, base_addr + 0x420, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x420, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_529
  : public reg< uint16_t, base_addr + 0x422, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x422, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_530
  : public reg< uint16_t, base_addr + 0x424, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x424, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_531
  : public reg< uint16_t, base_addr + 0x426, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x426, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_532
  : public reg< uint16_t, base_addr + 0x428, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x428, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_533
  : public reg< uint16_t, base_addr + 0x42a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x42a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_534
  : public reg< uint16_t, base_addr + 0x42c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x42c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_535
  : public reg< uint16_t, base_addr + 0x42e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x42e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_536
  : public reg< uint16_t, base_addr + 0x430, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x430, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_537
  : public reg< uint16_t, base_addr + 0x432, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x432, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_538
  : public reg< uint16_t, base_addr + 0x434, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x434, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_539
  : public reg< uint16_t, base_addr + 0x436, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x436, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_540
  : public reg< uint16_t, base_addr + 0x438, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x438, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_541
  : public reg< uint16_t, base_addr + 0x43a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x43a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_542
  : public reg< uint16_t, base_addr + 0x43c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x43c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_0_543
  : public reg< uint16_t, base_addr + 0x43e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x43e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_0
  : public reg< uint16_t, base_addr + 0x440, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x440, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_1
  : public reg< uint16_t, base_addr + 0x442, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x442, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_2
  : public reg< uint16_t, base_addr + 0x444, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x444, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_3
  : public reg< uint16_t, base_addr + 0x446, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x446, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_4
  : public reg< uint16_t, base_addr + 0x448, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x448, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_5
  : public reg< uint16_t, base_addr + 0x44a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x44a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_6
  : public reg< uint16_t, base_addr + 0x44c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x44c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_7
  : public reg< uint16_t, base_addr + 0x44e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x44e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_8
  : public reg< uint16_t, base_addr + 0x450, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x450, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_9
  : public reg< uint16_t, base_addr + 0x452, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x452, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_10
  : public reg< uint16_t, base_addr + 0x454, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x454, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_11
  : public reg< uint16_t, base_addr + 0x456, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x456, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_12
  : public reg< uint16_t, base_addr + 0x458, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x458, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_13
  : public reg< uint16_t, base_addr + 0x45a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x45a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_14
  : public reg< uint16_t, base_addr + 0x45c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x45c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_15
  : public reg< uint16_t, base_addr + 0x45e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x45e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_16
  : public reg< uint16_t, base_addr + 0x460, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x460, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_17
  : public reg< uint16_t, base_addr + 0x462, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x462, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_18
  : public reg< uint16_t, base_addr + 0x464, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x464, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_19
  : public reg< uint16_t, base_addr + 0x466, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x466, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_20
  : public reg< uint16_t, base_addr + 0x468, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x468, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_21
  : public reg< uint16_t, base_addr + 0x46a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x46a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_22
  : public reg< uint16_t, base_addr + 0x46c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x46c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_23
  : public reg< uint16_t, base_addr + 0x46e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x46e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_24
  : public reg< uint16_t, base_addr + 0x470, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x470, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_25
  : public reg< uint16_t, base_addr + 0x472, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x472, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_26
  : public reg< uint16_t, base_addr + 0x474, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x474, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_27
  : public reg< uint16_t, base_addr + 0x476, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x476, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_28
  : public reg< uint16_t, base_addr + 0x478, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x478, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_29
  : public reg< uint16_t, base_addr + 0x47a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x47a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_30
  : public reg< uint16_t, base_addr + 0x47c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x47c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_31
  : public reg< uint16_t, base_addr + 0x47e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x47e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_32
  : public reg< uint16_t, base_addr + 0x480, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x480, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_33
  : public reg< uint16_t, base_addr + 0x482, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x482, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_34
  : public reg< uint16_t, base_addr + 0x484, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x484, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_35
  : public reg< uint16_t, base_addr + 0x486, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x486, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_36
  : public reg< uint16_t, base_addr + 0x488, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x488, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_37
  : public reg< uint16_t, base_addr + 0x48a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x48a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_38
  : public reg< uint16_t, base_addr + 0x48c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x48c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_39
  : public reg< uint16_t, base_addr + 0x48e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x48e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_40
  : public reg< uint16_t, base_addr + 0x490, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x490, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_41
  : public reg< uint16_t, base_addr + 0x492, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x492, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_42
  : public reg< uint16_t, base_addr + 0x494, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x494, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_43
  : public reg< uint16_t, base_addr + 0x496, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x496, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_44
  : public reg< uint16_t, base_addr + 0x498, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x498, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_45
  : public reg< uint16_t, base_addr + 0x49a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x49a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_46
  : public reg< uint16_t, base_addr + 0x49c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x49c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_47
  : public reg< uint16_t, base_addr + 0x49e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x49e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_48
  : public reg< uint16_t, base_addr + 0x4a0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4a0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_49
  : public reg< uint16_t, base_addr + 0x4a2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4a2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_50
  : public reg< uint16_t, base_addr + 0x4a4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4a4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_51
  : public reg< uint16_t, base_addr + 0x4a6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4a6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_52
  : public reg< uint16_t, base_addr + 0x4a8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4a8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_53
  : public reg< uint16_t, base_addr + 0x4aa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4aa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_54
  : public reg< uint16_t, base_addr + 0x4ac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4ac, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_55
  : public reg< uint16_t, base_addr + 0x4ae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4ae, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_56
  : public reg< uint16_t, base_addr + 0x4b0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4b0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_57
  : public reg< uint16_t, base_addr + 0x4b2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4b2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_58
  : public reg< uint16_t, base_addr + 0x4b4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4b4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_59
  : public reg< uint16_t, base_addr + 0x4b6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4b6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_60
  : public reg< uint16_t, base_addr + 0x4b8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4b8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_61
  : public reg< uint16_t, base_addr + 0x4ba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4ba, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_62
  : public reg< uint16_t, base_addr + 0x4bc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4bc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_63
  : public reg< uint16_t, base_addr + 0x4be, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4be, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_64
  : public reg< uint16_t, base_addr + 0x4c0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4c0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_65
  : public reg< uint16_t, base_addr + 0x4c2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4c2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_66
  : public reg< uint16_t, base_addr + 0x4c4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4c4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_67
  : public reg< uint16_t, base_addr + 0x4c6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4c6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_68
  : public reg< uint16_t, base_addr + 0x4c8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4c8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_69
  : public reg< uint16_t, base_addr + 0x4ca, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4ca, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_70
  : public reg< uint16_t, base_addr + 0x4cc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4cc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_71
  : public reg< uint16_t, base_addr + 0x4ce, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4ce, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_72
  : public reg< uint16_t, base_addr + 0x4d0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4d0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_73
  : public reg< uint16_t, base_addr + 0x4d2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4d2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_74
  : public reg< uint16_t, base_addr + 0x4d4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4d4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_75
  : public reg< uint16_t, base_addr + 0x4d6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4d6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_76
  : public reg< uint16_t, base_addr + 0x4d8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4d8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_77
  : public reg< uint16_t, base_addr + 0x4da, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4da, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_78
  : public reg< uint16_t, base_addr + 0x4dc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4dc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_79
  : public reg< uint16_t, base_addr + 0x4de, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4de, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_80
  : public reg< uint16_t, base_addr + 0x4e0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4e0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_81
  : public reg< uint16_t, base_addr + 0x4e2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4e2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_82
  : public reg< uint16_t, base_addr + 0x4e4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4e4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_83
  : public reg< uint16_t, base_addr + 0x4e6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4e6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_84
  : public reg< uint16_t, base_addr + 0x4e8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4e8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_85
  : public reg< uint16_t, base_addr + 0x4ea, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4ea, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_86
  : public reg< uint16_t, base_addr + 0x4ec, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4ec, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_87
  : public reg< uint16_t, base_addr + 0x4ee, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4ee, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_88
  : public reg< uint16_t, base_addr + 0x4f0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4f0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_89
  : public reg< uint16_t, base_addr + 0x4f2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4f2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_90
  : public reg< uint16_t, base_addr + 0x4f4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4f4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_91
  : public reg< uint16_t, base_addr + 0x4f6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4f6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_92
  : public reg< uint16_t, base_addr + 0x4f8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4f8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_93
  : public reg< uint16_t, base_addr + 0x4fa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4fa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_94
  : public reg< uint16_t, base_addr + 0x4fc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4fc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_95
  : public reg< uint16_t, base_addr + 0x4fe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4fe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_96
  : public reg< uint16_t, base_addr + 0x500, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x500, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_97
  : public reg< uint16_t, base_addr + 0x502, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x502, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_98
  : public reg< uint16_t, base_addr + 0x504, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x504, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_99
  : public reg< uint16_t, base_addr + 0x506, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x506, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_100
  : public reg< uint16_t, base_addr + 0x508, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x508, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_101
  : public reg< uint16_t, base_addr + 0x50a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x50a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_102
  : public reg< uint16_t, base_addr + 0x50c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x50c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_103
  : public reg< uint16_t, base_addr + 0x50e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x50e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_104
  : public reg< uint16_t, base_addr + 0x510, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x510, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_105
  : public reg< uint16_t, base_addr + 0x512, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x512, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_106
  : public reg< uint16_t, base_addr + 0x514, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x514, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_107
  : public reg< uint16_t, base_addr + 0x516, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x516, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_108
  : public reg< uint16_t, base_addr + 0x518, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x518, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_109
  : public reg< uint16_t, base_addr + 0x51a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x51a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_110
  : public reg< uint16_t, base_addr + 0x51c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x51c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_111
  : public reg< uint16_t, base_addr + 0x51e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x51e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_112
  : public reg< uint16_t, base_addr + 0x520, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x520, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_113
  : public reg< uint16_t, base_addr + 0x522, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x522, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_114
  : public reg< uint16_t, base_addr + 0x524, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x524, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_115
  : public reg< uint16_t, base_addr + 0x526, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x526, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_116
  : public reg< uint16_t, base_addr + 0x528, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x528, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_117
  : public reg< uint16_t, base_addr + 0x52a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x52a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_118
  : public reg< uint16_t, base_addr + 0x52c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x52c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_119
  : public reg< uint16_t, base_addr + 0x52e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x52e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_120
  : public reg< uint16_t, base_addr + 0x530, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x530, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_121
  : public reg< uint16_t, base_addr + 0x532, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x532, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_122
  : public reg< uint16_t, base_addr + 0x534, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x534, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_123
  : public reg< uint16_t, base_addr + 0x536, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x536, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_124
  : public reg< uint16_t, base_addr + 0x538, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x538, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_125
  : public reg< uint16_t, base_addr + 0x53a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x53a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_126
  : public reg< uint16_t, base_addr + 0x53c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x53c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_127
  : public reg< uint16_t, base_addr + 0x53e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x53e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_128
  : public reg< uint16_t, base_addr + 0x540, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x540, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_129
  : public reg< uint16_t, base_addr + 0x542, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x542, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_130
  : public reg< uint16_t, base_addr + 0x544, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x544, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_131
  : public reg< uint16_t, base_addr + 0x546, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x546, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_132
  : public reg< uint16_t, base_addr + 0x548, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x548, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_133
  : public reg< uint16_t, base_addr + 0x54a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x54a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_134
  : public reg< uint16_t, base_addr + 0x54c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x54c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_135
  : public reg< uint16_t, base_addr + 0x54e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x54e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_136
  : public reg< uint16_t, base_addr + 0x550, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x550, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_137
  : public reg< uint16_t, base_addr + 0x552, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x552, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_138
  : public reg< uint16_t, base_addr + 0x554, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x554, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_139
  : public reg< uint16_t, base_addr + 0x556, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x556, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_140
  : public reg< uint16_t, base_addr + 0x558, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x558, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_141
  : public reg< uint16_t, base_addr + 0x55a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x55a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_142
  : public reg< uint16_t, base_addr + 0x55c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x55c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_143
  : public reg< uint16_t, base_addr + 0x55e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x55e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_144
  : public reg< uint16_t, base_addr + 0x560, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x560, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_145
  : public reg< uint16_t, base_addr + 0x562, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x562, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_146
  : public reg< uint16_t, base_addr + 0x564, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x564, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_147
  : public reg< uint16_t, base_addr + 0x566, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x566, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_148
  : public reg< uint16_t, base_addr + 0x568, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x568, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_149
  : public reg< uint16_t, base_addr + 0x56a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x56a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_150
  : public reg< uint16_t, base_addr + 0x56c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x56c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_151
  : public reg< uint16_t, base_addr + 0x56e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x56e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_152
  : public reg< uint16_t, base_addr + 0x570, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x570, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_153
  : public reg< uint16_t, base_addr + 0x572, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x572, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_154
  : public reg< uint16_t, base_addr + 0x574, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x574, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_155
  : public reg< uint16_t, base_addr + 0x576, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x576, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_156
  : public reg< uint16_t, base_addr + 0x578, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x578, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_157
  : public reg< uint16_t, base_addr + 0x57a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x57a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_158
  : public reg< uint16_t, base_addr + 0x57c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x57c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_159
  : public reg< uint16_t, base_addr + 0x57e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x57e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_160
  : public reg< uint16_t, base_addr + 0x580, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x580, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_161
  : public reg< uint16_t, base_addr + 0x582, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x582, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_162
  : public reg< uint16_t, base_addr + 0x584, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x584, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_163
  : public reg< uint16_t, base_addr + 0x586, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x586, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_164
  : public reg< uint16_t, base_addr + 0x588, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x588, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_165
  : public reg< uint16_t, base_addr + 0x58a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x58a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_166
  : public reg< uint16_t, base_addr + 0x58c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x58c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_167
  : public reg< uint16_t, base_addr + 0x58e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x58e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_168
  : public reg< uint16_t, base_addr + 0x590, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x590, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_169
  : public reg< uint16_t, base_addr + 0x592, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x592, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_170
  : public reg< uint16_t, base_addr + 0x594, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x594, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_171
  : public reg< uint16_t, base_addr + 0x596, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x596, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_172
  : public reg< uint16_t, base_addr + 0x598, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x598, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_173
  : public reg< uint16_t, base_addr + 0x59a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x59a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_174
  : public reg< uint16_t, base_addr + 0x59c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x59c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_175
  : public reg< uint16_t, base_addr + 0x59e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x59e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_176
  : public reg< uint16_t, base_addr + 0x5a0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5a0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_177
  : public reg< uint16_t, base_addr + 0x5a2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5a2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_178
  : public reg< uint16_t, base_addr + 0x5a4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5a4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_179
  : public reg< uint16_t, base_addr + 0x5a6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5a6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_180
  : public reg< uint16_t, base_addr + 0x5a8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5a8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_181
  : public reg< uint16_t, base_addr + 0x5aa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5aa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_182
  : public reg< uint16_t, base_addr + 0x5ac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5ac, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_183
  : public reg< uint16_t, base_addr + 0x5ae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5ae, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_184
  : public reg< uint16_t, base_addr + 0x5b0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5b0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_185
  : public reg< uint16_t, base_addr + 0x5b2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5b2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_186
  : public reg< uint16_t, base_addr + 0x5b4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5b4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_187
  : public reg< uint16_t, base_addr + 0x5b6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5b6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_188
  : public reg< uint16_t, base_addr + 0x5b8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5b8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_189
  : public reg< uint16_t, base_addr + 0x5ba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5ba, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_190
  : public reg< uint16_t, base_addr + 0x5bc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5bc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_191
  : public reg< uint16_t, base_addr + 0x5be, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5be, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_192
  : public reg< uint16_t, base_addr + 0x5c0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5c0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_193
  : public reg< uint16_t, base_addr + 0x5c2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5c2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_194
  : public reg< uint16_t, base_addr + 0x5c4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5c4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_195
  : public reg< uint16_t, base_addr + 0x5c6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5c6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_196
  : public reg< uint16_t, base_addr + 0x5c8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5c8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_197
  : public reg< uint16_t, base_addr + 0x5ca, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5ca, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_198
  : public reg< uint16_t, base_addr + 0x5cc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5cc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_199
  : public reg< uint16_t, base_addr + 0x5ce, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5ce, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_200
  : public reg< uint16_t, base_addr + 0x5d0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5d0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_201
  : public reg< uint16_t, base_addr + 0x5d2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5d2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_202
  : public reg< uint16_t, base_addr + 0x5d4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5d4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_203
  : public reg< uint16_t, base_addr + 0x5d6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5d6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_204
  : public reg< uint16_t, base_addr + 0x5d8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5d8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_205
  : public reg< uint16_t, base_addr + 0x5da, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5da, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_206
  : public reg< uint16_t, base_addr + 0x5dc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5dc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_207
  : public reg< uint16_t, base_addr + 0x5de, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5de, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_208
  : public reg< uint16_t, base_addr + 0x5e0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5e0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_209
  : public reg< uint16_t, base_addr + 0x5e2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5e2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_210
  : public reg< uint16_t, base_addr + 0x5e4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5e4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_211
  : public reg< uint16_t, base_addr + 0x5e6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5e6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_212
  : public reg< uint16_t, base_addr + 0x5e8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5e8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_213
  : public reg< uint16_t, base_addr + 0x5ea, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5ea, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_214
  : public reg< uint16_t, base_addr + 0x5ec, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5ec, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_215
  : public reg< uint16_t, base_addr + 0x5ee, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5ee, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_216
  : public reg< uint16_t, base_addr + 0x5f0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5f0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_217
  : public reg< uint16_t, base_addr + 0x5f2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5f2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_218
  : public reg< uint16_t, base_addr + 0x5f4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5f4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_219
  : public reg< uint16_t, base_addr + 0x5f6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5f6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_220
  : public reg< uint16_t, base_addr + 0x5f8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5f8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_221
  : public reg< uint16_t, base_addr + 0x5fa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5fa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_222
  : public reg< uint16_t, base_addr + 0x5fc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5fc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_223
  : public reg< uint16_t, base_addr + 0x5fe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x5fe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_224
  : public reg< uint16_t, base_addr + 0x600, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x600, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_225
  : public reg< uint16_t, base_addr + 0x602, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x602, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_226
  : public reg< uint16_t, base_addr + 0x604, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x604, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_227
  : public reg< uint16_t, base_addr + 0x606, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x606, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_228
  : public reg< uint16_t, base_addr + 0x608, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x608, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_229
  : public reg< uint16_t, base_addr + 0x60a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x60a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_230
  : public reg< uint16_t, base_addr + 0x60c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x60c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_231
  : public reg< uint16_t, base_addr + 0x60e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x60e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_232
  : public reg< uint16_t, base_addr + 0x610, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x610, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_233
  : public reg< uint16_t, base_addr + 0x612, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x612, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_234
  : public reg< uint16_t, base_addr + 0x614, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x614, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_235
  : public reg< uint16_t, base_addr + 0x616, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x616, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_236
  : public reg< uint16_t, base_addr + 0x618, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x618, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_237
  : public reg< uint16_t, base_addr + 0x61a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x61a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_238
  : public reg< uint16_t, base_addr + 0x61c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x61c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_239
  : public reg< uint16_t, base_addr + 0x61e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x61e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_240
  : public reg< uint16_t, base_addr + 0x620, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x620, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_241
  : public reg< uint16_t, base_addr + 0x622, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x622, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_242
  : public reg< uint16_t, base_addr + 0x624, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x624, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_243
  : public reg< uint16_t, base_addr + 0x626, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x626, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_244
  : public reg< uint16_t, base_addr + 0x628, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x628, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_245
  : public reg< uint16_t, base_addr + 0x62a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x62a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_246
  : public reg< uint16_t, base_addr + 0x62c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x62c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_247
  : public reg< uint16_t, base_addr + 0x62e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x62e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_248
  : public reg< uint16_t, base_addr + 0x630, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x630, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_249
  : public reg< uint16_t, base_addr + 0x632, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x632, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_250
  : public reg< uint16_t, base_addr + 0x634, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x634, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_251
  : public reg< uint16_t, base_addr + 0x636, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x636, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_252
  : public reg< uint16_t, base_addr + 0x638, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x638, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_253
  : public reg< uint16_t, base_addr + 0x63a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x63a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_254
  : public reg< uint16_t, base_addr + 0x63c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x63c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_255
  : public reg< uint16_t, base_addr + 0x63e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x63e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_256
  : public reg< uint16_t, base_addr + 0x640, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x640, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_257
  : public reg< uint16_t, base_addr + 0x642, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x642, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_258
  : public reg< uint16_t, base_addr + 0x644, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x644, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_259
  : public reg< uint16_t, base_addr + 0x646, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x646, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_260
  : public reg< uint16_t, base_addr + 0x648, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x648, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_261
  : public reg< uint16_t, base_addr + 0x64a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x64a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_262
  : public reg< uint16_t, base_addr + 0x64c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x64c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_263
  : public reg< uint16_t, base_addr + 0x64e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x64e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_264
  : public reg< uint16_t, base_addr + 0x650, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x650, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_265
  : public reg< uint16_t, base_addr + 0x652, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x652, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_266
  : public reg< uint16_t, base_addr + 0x654, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x654, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_267
  : public reg< uint16_t, base_addr + 0x656, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x656, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_268
  : public reg< uint16_t, base_addr + 0x658, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x658, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_269
  : public reg< uint16_t, base_addr + 0x65a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x65a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_270
  : public reg< uint16_t, base_addr + 0x65c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x65c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_271
  : public reg< uint16_t, base_addr + 0x65e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x65e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_272
  : public reg< uint16_t, base_addr + 0x660, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x660, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_273
  : public reg< uint16_t, base_addr + 0x662, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x662, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_274
  : public reg< uint16_t, base_addr + 0x664, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x664, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_275
  : public reg< uint16_t, base_addr + 0x666, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x666, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_276
  : public reg< uint16_t, base_addr + 0x668, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x668, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_277
  : public reg< uint16_t, base_addr + 0x66a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x66a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_278
  : public reg< uint16_t, base_addr + 0x66c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x66c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_279
  : public reg< uint16_t, base_addr + 0x66e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x66e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_280
  : public reg< uint16_t, base_addr + 0x670, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x670, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_281
  : public reg< uint16_t, base_addr + 0x672, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x672, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_282
  : public reg< uint16_t, base_addr + 0x674, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x674, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_283
  : public reg< uint16_t, base_addr + 0x676, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x676, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_284
  : public reg< uint16_t, base_addr + 0x678, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x678, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_285
  : public reg< uint16_t, base_addr + 0x67a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x67a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_286
  : public reg< uint16_t, base_addr + 0x67c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x67c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_287
  : public reg< uint16_t, base_addr + 0x67e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x67e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_288
  : public reg< uint16_t, base_addr + 0x680, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x680, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_289
  : public reg< uint16_t, base_addr + 0x682, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x682, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_290
  : public reg< uint16_t, base_addr + 0x684, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x684, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_291
  : public reg< uint16_t, base_addr + 0x686, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x686, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_292
  : public reg< uint16_t, base_addr + 0x688, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x688, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_293
  : public reg< uint16_t, base_addr + 0x68a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x68a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_294
  : public reg< uint16_t, base_addr + 0x68c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x68c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_295
  : public reg< uint16_t, base_addr + 0x68e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x68e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_296
  : public reg< uint16_t, base_addr + 0x690, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x690, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_297
  : public reg< uint16_t, base_addr + 0x692, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x692, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_298
  : public reg< uint16_t, base_addr + 0x694, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x694, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_299
  : public reg< uint16_t, base_addr + 0x696, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x696, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_300
  : public reg< uint16_t, base_addr + 0x698, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x698, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_301
  : public reg< uint16_t, base_addr + 0x69a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x69a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_302
  : public reg< uint16_t, base_addr + 0x69c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x69c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_303
  : public reg< uint16_t, base_addr + 0x69e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x69e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_304
  : public reg< uint16_t, base_addr + 0x6a0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6a0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_305
  : public reg< uint16_t, base_addr + 0x6a2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6a2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_306
  : public reg< uint16_t, base_addr + 0x6a4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6a4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_307
  : public reg< uint16_t, base_addr + 0x6a6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6a6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_308
  : public reg< uint16_t, base_addr + 0x6a8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6a8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_309
  : public reg< uint16_t, base_addr + 0x6aa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6aa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_310
  : public reg< uint16_t, base_addr + 0x6ac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6ac, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_311
  : public reg< uint16_t, base_addr + 0x6ae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6ae, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_312
  : public reg< uint16_t, base_addr + 0x6b0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6b0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_313
  : public reg< uint16_t, base_addr + 0x6b2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6b2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_314
  : public reg< uint16_t, base_addr + 0x6b4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6b4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_315
  : public reg< uint16_t, base_addr + 0x6b6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6b6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_316
  : public reg< uint16_t, base_addr + 0x6b8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6b8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_317
  : public reg< uint16_t, base_addr + 0x6ba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6ba, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_318
  : public reg< uint16_t, base_addr + 0x6bc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6bc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_319
  : public reg< uint16_t, base_addr + 0x6be, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6be, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_320
  : public reg< uint16_t, base_addr + 0x6c0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6c0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_321
  : public reg< uint16_t, base_addr + 0x6c2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6c2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_322
  : public reg< uint16_t, base_addr + 0x6c4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6c4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_323
  : public reg< uint16_t, base_addr + 0x6c6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6c6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_324
  : public reg< uint16_t, base_addr + 0x6c8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6c8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_325
  : public reg< uint16_t, base_addr + 0x6ca, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6ca, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_326
  : public reg< uint16_t, base_addr + 0x6cc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6cc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_327
  : public reg< uint16_t, base_addr + 0x6ce, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6ce, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_328
  : public reg< uint16_t, base_addr + 0x6d0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6d0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_329
  : public reg< uint16_t, base_addr + 0x6d2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6d2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_330
  : public reg< uint16_t, base_addr + 0x6d4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6d4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_331
  : public reg< uint16_t, base_addr + 0x6d6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6d6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_332
  : public reg< uint16_t, base_addr + 0x6d8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6d8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_333
  : public reg< uint16_t, base_addr + 0x6da, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6da, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_334
  : public reg< uint16_t, base_addr + 0x6dc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6dc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_335
  : public reg< uint16_t, base_addr + 0x6de, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6de, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_336
  : public reg< uint16_t, base_addr + 0x6e0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6e0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_337
  : public reg< uint16_t, base_addr + 0x6e2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6e2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_338
  : public reg< uint16_t, base_addr + 0x6e4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6e4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_339
  : public reg< uint16_t, base_addr + 0x6e6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6e6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_340
  : public reg< uint16_t, base_addr + 0x6e8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6e8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_341
  : public reg< uint16_t, base_addr + 0x6ea, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6ea, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_342
  : public reg< uint16_t, base_addr + 0x6ec, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6ec, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_343
  : public reg< uint16_t, base_addr + 0x6ee, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6ee, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_344
  : public reg< uint16_t, base_addr + 0x6f0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6f0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_345
  : public reg< uint16_t, base_addr + 0x6f2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6f2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_346
  : public reg< uint16_t, base_addr + 0x6f4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6f4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_347
  : public reg< uint16_t, base_addr + 0x6f6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6f6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_348
  : public reg< uint16_t, base_addr + 0x6f8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6f8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_349
  : public reg< uint16_t, base_addr + 0x6fa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6fa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_350
  : public reg< uint16_t, base_addr + 0x6fc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6fc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_351
  : public reg< uint16_t, base_addr + 0x6fe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6fe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_352
  : public reg< uint16_t, base_addr + 0x700, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x700, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_353
  : public reg< uint16_t, base_addr + 0x702, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x702, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_354
  : public reg< uint16_t, base_addr + 0x704, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x704, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_355
  : public reg< uint16_t, base_addr + 0x706, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x706, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_356
  : public reg< uint16_t, base_addr + 0x708, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x708, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_357
  : public reg< uint16_t, base_addr + 0x70a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x70a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_358
  : public reg< uint16_t, base_addr + 0x70c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x70c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_359
  : public reg< uint16_t, base_addr + 0x70e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x70e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_360
  : public reg< uint16_t, base_addr + 0x710, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x710, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_361
  : public reg< uint16_t, base_addr + 0x712, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x712, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_362
  : public reg< uint16_t, base_addr + 0x714, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x714, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_363
  : public reg< uint16_t, base_addr + 0x716, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x716, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_364
  : public reg< uint16_t, base_addr + 0x718, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x718, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_365
  : public reg< uint16_t, base_addr + 0x71a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x71a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_366
  : public reg< uint16_t, base_addr + 0x71c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x71c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_367
  : public reg< uint16_t, base_addr + 0x71e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x71e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_368
  : public reg< uint16_t, base_addr + 0x720, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x720, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_369
  : public reg< uint16_t, base_addr + 0x722, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x722, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_370
  : public reg< uint16_t, base_addr + 0x724, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x724, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_371
  : public reg< uint16_t, base_addr + 0x726, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x726, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_372
  : public reg< uint16_t, base_addr + 0x728, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x728, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_373
  : public reg< uint16_t, base_addr + 0x72a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x72a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_374
  : public reg< uint16_t, base_addr + 0x72c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x72c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_375
  : public reg< uint16_t, base_addr + 0x72e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x72e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_376
  : public reg< uint16_t, base_addr + 0x730, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x730, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_377
  : public reg< uint16_t, base_addr + 0x732, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x732, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_378
  : public reg< uint16_t, base_addr + 0x734, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x734, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_379
  : public reg< uint16_t, base_addr + 0x736, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x736, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_380
  : public reg< uint16_t, base_addr + 0x738, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x738, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_381
  : public reg< uint16_t, base_addr + 0x73a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x73a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_382
  : public reg< uint16_t, base_addr + 0x73c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x73c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_383
  : public reg< uint16_t, base_addr + 0x73e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x73e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_384
  : public reg< uint16_t, base_addr + 0x740, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x740, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_385
  : public reg< uint16_t, base_addr + 0x742, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x742, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_386
  : public reg< uint16_t, base_addr + 0x744, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x744, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_387
  : public reg< uint16_t, base_addr + 0x746, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x746, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_388
  : public reg< uint16_t, base_addr + 0x748, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x748, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_389
  : public reg< uint16_t, base_addr + 0x74a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x74a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_390
  : public reg< uint16_t, base_addr + 0x74c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x74c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_391
  : public reg< uint16_t, base_addr + 0x74e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x74e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_392
  : public reg< uint16_t, base_addr + 0x750, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x750, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_393
  : public reg< uint16_t, base_addr + 0x752, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x752, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_394
  : public reg< uint16_t, base_addr + 0x754, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x754, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_395
  : public reg< uint16_t, base_addr + 0x756, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x756, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_396
  : public reg< uint16_t, base_addr + 0x758, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x758, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_397
  : public reg< uint16_t, base_addr + 0x75a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x75a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_398
  : public reg< uint16_t, base_addr + 0x75c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x75c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_399
  : public reg< uint16_t, base_addr + 0x75e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x75e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_400
  : public reg< uint16_t, base_addr + 0x760, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x760, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_401
  : public reg< uint16_t, base_addr + 0x762, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x762, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_402
  : public reg< uint16_t, base_addr + 0x764, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x764, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_403
  : public reg< uint16_t, base_addr + 0x766, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x766, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_404
  : public reg< uint16_t, base_addr + 0x768, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x768, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_405
  : public reg< uint16_t, base_addr + 0x76a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x76a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_406
  : public reg< uint16_t, base_addr + 0x76c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x76c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_407
  : public reg< uint16_t, base_addr + 0x76e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x76e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_408
  : public reg< uint16_t, base_addr + 0x770, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x770, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_409
  : public reg< uint16_t, base_addr + 0x772, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x772, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_410
  : public reg< uint16_t, base_addr + 0x774, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x774, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_411
  : public reg< uint16_t, base_addr + 0x776, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x776, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_412
  : public reg< uint16_t, base_addr + 0x778, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x778, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_413
  : public reg< uint16_t, base_addr + 0x77a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x77a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_414
  : public reg< uint16_t, base_addr + 0x77c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x77c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_415
  : public reg< uint16_t, base_addr + 0x77e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x77e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_416
  : public reg< uint16_t, base_addr + 0x780, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x780, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_417
  : public reg< uint16_t, base_addr + 0x782, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x782, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_418
  : public reg< uint16_t, base_addr + 0x784, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x784, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_419
  : public reg< uint16_t, base_addr + 0x786, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x786, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_420
  : public reg< uint16_t, base_addr + 0x788, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x788, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_421
  : public reg< uint16_t, base_addr + 0x78a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x78a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_422
  : public reg< uint16_t, base_addr + 0x78c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x78c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_423
  : public reg< uint16_t, base_addr + 0x78e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x78e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_424
  : public reg< uint16_t, base_addr + 0x790, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x790, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_425
  : public reg< uint16_t, base_addr + 0x792, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x792, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_426
  : public reg< uint16_t, base_addr + 0x794, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x794, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_427
  : public reg< uint16_t, base_addr + 0x796, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x796, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_428
  : public reg< uint16_t, base_addr + 0x798, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x798, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_429
  : public reg< uint16_t, base_addr + 0x79a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x79a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_430
  : public reg< uint16_t, base_addr + 0x79c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x79c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_431
  : public reg< uint16_t, base_addr + 0x79e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x79e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_432
  : public reg< uint16_t, base_addr + 0x7a0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7a0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_433
  : public reg< uint16_t, base_addr + 0x7a2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7a2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_434
  : public reg< uint16_t, base_addr + 0x7a4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7a4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_435
  : public reg< uint16_t, base_addr + 0x7a6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7a6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_436
  : public reg< uint16_t, base_addr + 0x7a8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7a8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_437
  : public reg< uint16_t, base_addr + 0x7aa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7aa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_438
  : public reg< uint16_t, base_addr + 0x7ac, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7ac, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_439
  : public reg< uint16_t, base_addr + 0x7ae, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7ae, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_440
  : public reg< uint16_t, base_addr + 0x7b0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7b0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_441
  : public reg< uint16_t, base_addr + 0x7b2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7b2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_442
  : public reg< uint16_t, base_addr + 0x7b4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7b4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_443
  : public reg< uint16_t, base_addr + 0x7b6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7b6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_444
  : public reg< uint16_t, base_addr + 0x7b8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7b8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_445
  : public reg< uint16_t, base_addr + 0x7ba, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7ba, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_446
  : public reg< uint16_t, base_addr + 0x7bc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7bc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_447
  : public reg< uint16_t, base_addr + 0x7be, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7be, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_448
  : public reg< uint16_t, base_addr + 0x7c0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7c0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_449
  : public reg< uint16_t, base_addr + 0x7c2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7c2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_450
  : public reg< uint16_t, base_addr + 0x7c4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7c4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_451
  : public reg< uint16_t, base_addr + 0x7c6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7c6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_452
  : public reg< uint16_t, base_addr + 0x7c8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7c8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_453
  : public reg< uint16_t, base_addr + 0x7ca, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7ca, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_454
  : public reg< uint16_t, base_addr + 0x7cc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7cc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_455
  : public reg< uint16_t, base_addr + 0x7ce, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7ce, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_456
  : public reg< uint16_t, base_addr + 0x7d0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7d0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_457
  : public reg< uint16_t, base_addr + 0x7d2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7d2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_458
  : public reg< uint16_t, base_addr + 0x7d4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7d4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_459
  : public reg< uint16_t, base_addr + 0x7d6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7d6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_460
  : public reg< uint16_t, base_addr + 0x7d8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7d8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_461
  : public reg< uint16_t, base_addr + 0x7da, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7da, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_462
  : public reg< uint16_t, base_addr + 0x7dc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7dc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_463
  : public reg< uint16_t, base_addr + 0x7de, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7de, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_464
  : public reg< uint16_t, base_addr + 0x7e0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7e0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_465
  : public reg< uint16_t, base_addr + 0x7e2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7e2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_466
  : public reg< uint16_t, base_addr + 0x7e4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7e4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_467
  : public reg< uint16_t, base_addr + 0x7e6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7e6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_468
  : public reg< uint16_t, base_addr + 0x7e8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7e8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_469
  : public reg< uint16_t, base_addr + 0x7ea, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7ea, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_470
  : public reg< uint16_t, base_addr + 0x7ec, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7ec, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_471
  : public reg< uint16_t, base_addr + 0x7ee, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7ee, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_472
  : public reg< uint16_t, base_addr + 0x7f0, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7f0, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_473
  : public reg< uint16_t, base_addr + 0x7f2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7f2, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_474
  : public reg< uint16_t, base_addr + 0x7f4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7f4, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_475
  : public reg< uint16_t, base_addr + 0x7f6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7f6, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_476
  : public reg< uint16_t, base_addr + 0x7f8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7f8, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_477
  : public reg< uint16_t, base_addr + 0x7fa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7fa, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_478
  : public reg< uint16_t, base_addr + 0x7fc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7fc, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_479
  : public reg< uint16_t, base_addr + 0x7fe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x7fe, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_480
  : public reg< uint16_t, base_addr + 0x800, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x800, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_481
  : public reg< uint16_t, base_addr + 0x802, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x802, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_482
  : public reg< uint16_t, base_addr + 0x804, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x804, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_483
  : public reg< uint16_t, base_addr + 0x806, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x806, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_484
  : public reg< uint16_t, base_addr + 0x808, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x808, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_485
  : public reg< uint16_t, base_addr + 0x80a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x80a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_486
  : public reg< uint16_t, base_addr + 0x80c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x80c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_487
  : public reg< uint16_t, base_addr + 0x80e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x80e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_488
  : public reg< uint16_t, base_addr + 0x810, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x810, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_489
  : public reg< uint16_t, base_addr + 0x812, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x812, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_490
  : public reg< uint16_t, base_addr + 0x814, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x814, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_491
  : public reg< uint16_t, base_addr + 0x816, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x816, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_492
  : public reg< uint16_t, base_addr + 0x818, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x818, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_493
  : public reg< uint16_t, base_addr + 0x81a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x81a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_494
  : public reg< uint16_t, base_addr + 0x81c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x81c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_495
  : public reg< uint16_t, base_addr + 0x81e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x81e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_496
  : public reg< uint16_t, base_addr + 0x820, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x820, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_497
  : public reg< uint16_t, base_addr + 0x822, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x822, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_498
  : public reg< uint16_t, base_addr + 0x824, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x824, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_499
  : public reg< uint16_t, base_addr + 0x826, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x826, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_500
  : public reg< uint16_t, base_addr + 0x828, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x828, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_501
  : public reg< uint16_t, base_addr + 0x82a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x82a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_502
  : public reg< uint16_t, base_addr + 0x82c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x82c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_503
  : public reg< uint16_t, base_addr + 0x82e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x82e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_504
  : public reg< uint16_t, base_addr + 0x830, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x830, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_505
  : public reg< uint16_t, base_addr + 0x832, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x832, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_506
  : public reg< uint16_t, base_addr + 0x834, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x834, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_507
  : public reg< uint16_t, base_addr + 0x836, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x836, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_508
  : public reg< uint16_t, base_addr + 0x838, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x838, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_509
  : public reg< uint16_t, base_addr + 0x83a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x83a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_510
  : public reg< uint16_t, base_addr + 0x83c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x83c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_511
  : public reg< uint16_t, base_addr + 0x83e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x83e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_512
  : public reg< uint16_t, base_addr + 0x840, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x840, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_513
  : public reg< uint16_t, base_addr + 0x842, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x842, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_514
  : public reg< uint16_t, base_addr + 0x844, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x844, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_515
  : public reg< uint16_t, base_addr + 0x846, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x846, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_516
  : public reg< uint16_t, base_addr + 0x848, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x848, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_517
  : public reg< uint16_t, base_addr + 0x84a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x84a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_518
  : public reg< uint16_t, base_addr + 0x84c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x84c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_519
  : public reg< uint16_t, base_addr + 0x84e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x84e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_520
  : public reg< uint16_t, base_addr + 0x850, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x850, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_521
  : public reg< uint16_t, base_addr + 0x852, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x852, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_522
  : public reg< uint16_t, base_addr + 0x854, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x854, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_523
  : public reg< uint16_t, base_addr + 0x856, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x856, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_524
  : public reg< uint16_t, base_addr + 0x858, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x858, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_525
  : public reg< uint16_t, base_addr + 0x85a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x85a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_526
  : public reg< uint16_t, base_addr + 0x85c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x85c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_527
  : public reg< uint16_t, base_addr + 0x85e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x85e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_528
  : public reg< uint16_t, base_addr + 0x860, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x860, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_529
  : public reg< uint16_t, base_addr + 0x862, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x862, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_530
  : public reg< uint16_t, base_addr + 0x864, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x864, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_531
  : public reg< uint16_t, base_addr + 0x866, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x866, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_532
  : public reg< uint16_t, base_addr + 0x868, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x868, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_533
  : public reg< uint16_t, base_addr + 0x86a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x86a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_534
  : public reg< uint16_t, base_addr + 0x86c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x86c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_535
  : public reg< uint16_t, base_addr + 0x86e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x86e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_536
  : public reg< uint16_t, base_addr + 0x870, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x870, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_537
  : public reg< uint16_t, base_addr + 0x872, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x872, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_538
  : public reg< uint16_t, base_addr + 0x874, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x874, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_539
  : public reg< uint16_t, base_addr + 0x876, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x876, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_540
  : public reg< uint16_t, base_addr + 0x878, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x878, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_541
  : public reg< uint16_t, base_addr + 0x87a, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x87a, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_542
  : public reg< uint16_t, base_addr + 0x87c, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x87c, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };

  /**
   * Shared Packet RAM for multiple Link Layer usage.
   */
  struct PACKET_RAM_1_543
  : public reg< uint16_t, base_addr + 0x87e, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x87e, rw, 0 >;

    using LSBYTE  = regbits< type,  0,  8 >;  /**< LSBYTE  */
    using MSBYTE  = regbits< type,  8,  8 >;  /**< MSBYTE  */
  };
};
} // namespace mptl

#endif // ARCH_REG_XCVR_PKT_RAM_HPP_INCLUDED
