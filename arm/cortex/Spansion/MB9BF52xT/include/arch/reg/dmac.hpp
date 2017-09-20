/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9BF52xT.svd"
//
//  name: MB9BF52xT
//  version: 1.0
//  description: MB9BF52xT
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
 * peripheral DMAC
 */
struct DMAC
{
  static constexpr reg_addr_t base_addr = 0x40060000;

  /**
   * register DMACR
   */
  struct DMACR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using DE  = regbits< type, 31,  1 >;  /**< bitfield DE  */
    using DS  = regbits< type, 30,  1 >;  /**< bitfield DS  */
    using PR  = regbits< type, 28,  1 >;  /**< bitfield PR  */
    using DH  = regbits< type, 24,  4 >;  /**< bitfield DH  */
  };

  /**
   * register DMACA0
   */
  struct DMACA0
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using EB  = regbits< type, 31,  1 >;  /**< bitfield EB  */
    using PB  = regbits< type, 30,  1 >;  /**< bitfield PB  */
    using ST  = regbits< type, 29,  1 >;  /**< bitfield ST  */
    using IS  = regbits< type, 23,  6 >;  /**< bitfield IS  */
    using BC  = regbits< type, 16,  4 >;  /**< bitfield BC  */
    using TC  = regbits< type,  0, 16 >;  /**< bitfield TC  */
  };

  /**
   * register DMACB0
   */
  struct DMACB0
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using MS  = regbits< type, 28,  2 >;  /**< bitfield MS  */
    using TW  = regbits< type, 26,  2 >;  /**< bitfield TW  */
    using FS  = regbits< type, 25,  1 >;  /**< bitfield FS  */
    using FD  = regbits< type, 24,  1 >;  /**< bitfield FD  */
    using RC  = regbits< type, 23,  1 >;  /**< bitfield RC  */
    using RS  = regbits< type, 22,  1 >;  /**< bitfield RS  */
    using RD  = regbits< type, 21,  1 >;  /**< bitfield RD  */
    using EI  = regbits< type, 20,  1 >;  /**< bitfield EI  */
    using CI  = regbits< type, 19,  1 >;  /**< bitfield CI  */
    using SS  = regbits< type, 16,  3 >;  /**< bitfield SS  */
    using EM  = regbits< type,  0,  1 >;  /**< bitfield EM  */
  };

  /**
   * register DMACSA0
   */
  struct DMACSA0
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
  };

  /**
   * register DMACDA0
   */
  struct DMACDA0
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
  };

  /**
   * register DMACA1
   *
   * (derived from: DMACA0)
   */
  struct DMACA1
  : public reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACB1
   *
   * (derived from: DMACB0)
   */
  struct DMACB1
  : public reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACSA1
   *
   * (derived from: DMACSA0)
   */
  struct DMACSA1
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACDA1
   *
   * (derived from: DMACDA0)
   */
  struct DMACDA1
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACA2
   *
   * (derived from: DMACA0)
   */
  struct DMACA2
  : public reg< uint32_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACB2
   *
   * (derived from: DMACB0)
   */
  struct DMACB2
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACSA2
   *
   * (derived from: DMACSA0)
   */
  struct DMACSA2
  : public reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACDA2
   *
   * (derived from: DMACDA0)
   */
  struct DMACDA2
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACA3
   *
   * (derived from: DMACA0)
   */
  struct DMACA3
  : public reg< uint32_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACB3
   *
   * (derived from: DMACB0)
   */
  struct DMACB3
  : public reg< uint32_t, base_addr + 0x44, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACSA3
   *
   * (derived from: DMACSA0)
   */
  struct DMACSA3
  : public reg< uint32_t, base_addr + 0x48, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACDA3
   *
   * (derived from: DMACDA0)
   */
  struct DMACDA3
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACA4
   *
   * (derived from: DMACA0)
   */
  struct DMACA4
  : public reg< uint32_t, base_addr + 0x50, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACB4
   *
   * (derived from: DMACB0)
   */
  struct DMACB4
  : public reg< uint32_t, base_addr + 0x54, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACSA4
   *
   * (derived from: DMACSA0)
   */
  struct DMACSA4
  : public reg< uint32_t, base_addr + 0x58, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACDA4
   *
   * (derived from: DMACDA0)
   */
  struct DMACDA4
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACA5
   *
   * (derived from: DMACA0)
   */
  struct DMACA5
  : public reg< uint32_t, base_addr + 0x60, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACB5
   *
   * (derived from: DMACB0)
   */
  struct DMACB5
  : public reg< uint32_t, base_addr + 0x64, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACSA5
   *
   * (derived from: DMACSA0)
   */
  struct DMACSA5
  : public reg< uint32_t, base_addr + 0x68, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACDA5
   *
   * (derived from: DMACDA0)
   */
  struct DMACDA5
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACA6
   *
   * (derived from: DMACA0)
   */
  struct DMACA6
  : public reg< uint32_t, base_addr + 0x70, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACB6
   *
   * (derived from: DMACB0)
   */
  struct DMACB6
  : public reg< uint32_t, base_addr + 0x74, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACSA6
   *
   * (derived from: DMACSA0)
   */
  struct DMACSA6
  : public reg< uint32_t, base_addr + 0x78, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACDA6
   *
   * (derived from: DMACDA0)
   */
  struct DMACDA6
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACA7
   *
   * (derived from: DMACA0)
   */
  struct DMACA7
  : public reg< uint32_t, base_addr + 0x80, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACB7
   *
   * (derived from: DMACB0)
   */
  struct DMACB7
  : public reg< uint32_t, base_addr + 0x84, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACSA7
   *
   * (derived from: DMACSA0)
   */
  struct DMACSA7
  : public reg< uint32_t, base_addr + 0x88, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DMACDA7
   *
   * (derived from: DMACDA0)
   */
  struct DMACDA7
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_DMAC_HPP_INCLUDED
