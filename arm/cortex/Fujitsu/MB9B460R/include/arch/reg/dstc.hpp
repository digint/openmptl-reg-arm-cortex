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
//  Import from CMSIS-SVD: "Fujitsu/MB9B460R.svd"
//
//  name: MB9B460R
//  version: 1.3
//  description: MB9B460R Series
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
 * DSTC registers
 */
struct DSTC
{
  static constexpr reg_addr_t base_addr = 0x40061000;

  /**
   * Descriptor top address Register
   */
  struct DESTP
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
  };

  /**
   * Hardware DES pointer Register
   */
  struct HWDESP
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: HWDESP
    using HWDESP_  = regbits< type, 16, 14 >;  /**< HWDESP   */
    using CHANNEL  = regbits< type,  0,  8 >;  /**< CHANNEL  */
  };

  /**
   * Command Register
   */
  struct CMD
  : public reg< uint8_t, base_addr + 0x8, rw, 0x01 >
  {
  };

  /**
   * Configuration Register
   */
  struct CFG
  : public reg< uint8_t, base_addr + 0x9, rw, 0x40 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0x40 >;

    using SWPR    = regbits< type,  4,  3 >;  /**< Software transfer priority  */
    using ESTE    = regbits< type,  3,  1 >;  /**< Error stop enable           */
    using RBDIS   = regbits< type,  2,  1 >;  /**< Read skip buffer disable    */
    using ERINTE  = regbits< type,  1,  1 >;  /**< Error interrupt enable      */
    using SWINTE  = regbits< type,  0,  1 >;  /**< Software interrupt enable   */
  };

  /**
   * Software trigger Register
   */
  struct SWTR
  : public reg< uint16_t, base_addr + 0xa, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0x0000 >;

    using SWST    = regbits< type, 15,  1 >;  /**< Software status       */
    using SWREQ   = regbits< type, 14,  1 >;  /**< Software request      */
    using SWDESP  = regbits< type,  0, 14 >;  /**< Software DES pointer  */
  };

  /**
   * MONERS Register
   */
  struct MONERS
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using EDESP  = regbits< type, 16, 14 >;  /**< Error DES pointer        */
    using ECH    = regbits< type,  8,  8 >;  /**< Error hardware channel   */
    using EHS    = regbits< type,  6,  1 >;  /**< Error hardware software  */
    using ESTOP  = regbits< type,  4,  1 >;  /**< Error stop               */
    using DER    = regbits< type,  3,  1 >;  /**< Double error             */
    using EST    = regbits< type,  0,  3 >;  /**< Error status             */
  };

  /**
   * DMA request enable Register 0
   */
  struct DREQENB0
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
  };

  /**
   * DMA request enable Register 1
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB1
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request enable Register 2
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB2
  : public reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request enable Register 3
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB3
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request enable Register 4
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB4
  : public reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request enable Register 5
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB5
  : public reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request enable Register 6
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB6
  : public reg< uint32_t, base_addr + 0x28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request enable Register 7
   *
   * (derived from: DREQENB0)
   */
  struct DREQENB7
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt Register 0
   */
  struct HWINT0
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
  };

  /**
   * Hardware transfer interrupt Register 1
   *
   * (derived from: HWINT0)
   */
  struct HWINT1
  : public reg< uint32_t, base_addr + 0x34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt Register 2
   *
   * (derived from: HWINT0)
   */
  struct HWINT2
  : public reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt Register 3
   *
   * (derived from: HWINT0)
   */
  struct HWINT3
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt Register 4
   *
   * (derived from: HWINT0)
   */
  struct HWINT4
  : public reg< uint32_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt Register 5
   *
   * (derived from: HWINT0)
   */
  struct HWINT5
  : public reg< uint32_t, base_addr + 0x44, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt Register 6
   *
   * (derived from: HWINT0)
   */
  struct HWINT6
  : public reg< uint32_t, base_addr + 0x48, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt Register 7
   *
   * (derived from: HWINT0)
   */
  struct HWINT7
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt clear Register 0
   */
  struct HWINTCLR0
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
  };

  /**
   * Hardware transfer interrupt clear Register 1
   *
   * (derived from: HWINTCLR0)
   */
  struct HWINTCLR1
  : public reg< uint32_t, base_addr + 0x54, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt clear Register 2
   *
   * (derived from: HWINTCLR0)
   */
  struct HWINTCLR2
  : public reg< uint32_t, base_addr + 0x58, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt clear Register 3
   *
   * (derived from: HWINTCLR0)
   */
  struct HWINTCLR3
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt clear Register 4
   *
   * (derived from: HWINTCLR0)
   */
  struct HWINTCLR4
  : public reg< uint32_t, base_addr + 0x60, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt clear Register 5
   *
   * (derived from: HWINTCLR0)
   */
  struct HWINTCLR5
  : public reg< uint32_t, base_addr + 0x64, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt clear Register 6
   *
   * (derived from: HWINTCLR0)
   */
  struct HWINTCLR6
  : public reg< uint32_t, base_addr + 0x68, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Hardware transfer interrupt clear Register 7
   *
   * (derived from: HWINTCLR0)
   */
  struct HWINTCLR7
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask Register 0
   */
  struct DQMSK0
  : public reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >
  {
  };

  /**
   * DMA request mask Register 1
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK1
  : public reg< uint32_t, base_addr + 0x74, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask Register 2
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK2
  : public reg< uint32_t, base_addr + 0x78, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask Register 3
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK3
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask Register 4
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK4
  : public reg< uint32_t, base_addr + 0x80, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask Register 5
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK5
  : public reg< uint32_t, base_addr + 0x84, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask Register 6
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK6
  : public reg< uint32_t, base_addr + 0x88, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask Register 7
   *
   * (derived from: DQMSK0)
   */
  struct DQMSK7
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask clear Register 0
   */
  struct DQMSKCLR0
  : public reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >
  {
  };

  /**
   * DMA request mask clear Register 1
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR1
  : public reg< uint32_t, base_addr + 0x94, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask clear Register 2
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR2
  : public reg< uint32_t, base_addr + 0x98, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask clear Register 3
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR3
  : public reg< uint32_t, base_addr + 0x9c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask clear Register 4
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR4
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask clear Register 5
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR5
  : public reg< uint32_t, base_addr + 0xa4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask clear Register 6
   *
   * (derived from: DQMSKCLR0)
   */
  struct DQMSKCLR6
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * DMA request mask clear Register 7
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
