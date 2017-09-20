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
//  Import from CMSIS-SVD: "Spansion/MB9BF36xx.svd"
//
//  name: MB9BF36xx
//  version: 1.0
//  description: MB9BF36xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DSTC_HPP_INCLUDED
#define ARCH_REG_DSTC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral DSTC
 */
struct DSTC
{
  static constexpr reg_addr_t base_addr = 0x40061000;

  /**
   * register DESTP
   */
  struct DESTP
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
  };

  /**
   * register HWDESP
   */
  struct HWDESP
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: HWDESP
    using HWDESP_  = regbits< type, 16, 14 >;  /**< bitfield HWDESP   */
    using CHANNEL  = regbits< type,  0,  8 >;  /**< bitfield CHANNEL  */
  };

  /**
   * register CMD
   */
  struct CMD
  : public reg< uint8_t, base_addr + 0x8, rw, 0x01 >
  {
  };

  /**
   * register CFG
   */
  struct CFG
  : public reg< uint8_t, base_addr + 0x9, rw, 0x40 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0x40 >;

    using SWPR    = regbits< type,  4,  3 >;  /**< bitfield SWPR    */
    using ESTE    = regbits< type,  3,  1 >;  /**< bitfield ESTE    */
    using RBDIS   = regbits< type,  2,  1 >;  /**< bitfield RBDIS   */
    using ERINTE  = regbits< type,  1,  1 >;  /**< bitfield ERINTE  */
    using SWINTE  = regbits< type,  0,  1 >;  /**< bitfield SWINTE  */
  };

  /**
   * register SWTR
   */
  struct SWTR
  : public reg< uint16_t, base_addr + 0xa, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0x0000 >;

    using SWST    = regbits< type, 15,  1 >;  /**< bitfield SWST    */
    using SWREQ   = regbits< type, 14,  1 >;  /**< bitfield SWREQ   */
    using SWDESP  = regbits< type,  0, 14 >;  /**< bitfield SWDESP  */
  };

  /**
   * register MONERS
   */
  struct MONERS
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using EDESP  = regbits< type, 16, 14 >;  /**< bitfield EDESP  */
    using ECH    = regbits< type,  8,  8 >;  /**< bitfield ECH    */
    using EHS    = regbits< type,  6,  1 >;  /**< bitfield EHS    */
    using ESTOP  = regbits< type,  4,  1 >;  /**< bitfield ESTOP  */
    using DER    = regbits< type,  3,  1 >;  /**< bitfield DER    */
    using EST    = regbits< type,  0,  3 >;  /**< bitfield EST    */
  };

  /**
   * register DREQENB0
   */
  struct DREQENB0
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
  };

  /**
   * register DREQENB1
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB1
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DREQENB2
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB2
  : public reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DREQENB3
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB3
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DREQENB4
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB4
  : public reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DREQENB5
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB5
  : public reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DREQENB6
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB6
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DREQENB7
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB7
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register HWINT0
   */
  struct HWINT0
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
  };

  /**
   * register HWINT1
   *
   * (derived from: HWINT0)
   */
  struct HWINT1
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register HWINT2
   *
   * (derived from: HWINT0)
   */
  struct HWINT2
  : public reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register HWINT3
   *
   * (derived from: HWINT0)
   */
  struct HWINT3
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register HWINT4
   *
   * (derived from: HWINT0)
   */
  struct HWINT4
  : public reg< uint32_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register HWINT5
   *
   * (derived from: HWINT0)
   */
  struct HWINT5
  : public reg< uint32_t, base_addr + 0x44, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register HWINT6
   *
   * (derived from: HWINT0)
   */
  struct HWINT6
  : public reg< uint32_t, base_addr + 0x48, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register HWINT7
   *
   * (derived from: HWINT0)
   */
  struct HWINT7
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSK0
   */
  struct DQMSK0
  : public reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >
  {
  };

  /**
   * register DQMSK1
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK1
  : public reg< uint32_t, base_addr + 0x74, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSK2
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK2
  : public reg< uint32_t, base_addr + 0x78, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSK3
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK3
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSK4
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK4
  : public reg< uint32_t, base_addr + 0x80, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSK5
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK5
  : public reg< uint32_t, base_addr + 0x84, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSK6
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK6
  : public reg< uint32_t, base_addr + 0x88, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSK7
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK7
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSKCLR0
   */
  struct DQMSKCLR0
  : public reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >
  {
  };

  /**
   * register DQMSKCLR1
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR1
  : public reg< uint32_t, base_addr + 0x94, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSKCLR2
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR2
  : public reg< uint32_t, base_addr + 0x98, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSKCLR3
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR3
  : public reg< uint32_t, base_addr + 0x9c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSKCLR4
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR4
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSKCLR5
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR5
  : public reg< uint32_t, base_addr + 0xa4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSKCLR6
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR6
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DQMSKCLR7
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR7
  : public reg< uint32_t, base_addr + 0xac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_DSTC_HPP_INCLUDED
