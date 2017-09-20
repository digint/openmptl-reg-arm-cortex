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
//  Import from CMSIS-SVD: "Spansion/MB9BF12xT.svd"
//
//  name: MB9BF12xT
//  version: 1.0
//  description: MB9BF12xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HDMICEC1_HPP_INCLUDED
#define ARCH_REG_HDMICEC1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral HDMICEC0
 *
 * (derived from: HDMICEC0)
 */
struct HDMICEC1
{
  static constexpr reg_addr_t base_addr = 0x40034100;

  /**
   * register TXCTRL
   */
  struct TXCTRL
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using IBREN   = regbits< type,  5,  1 >;  /**< bitfield IBREN   */
    using ITSTEN  = regbits< type,  4,  1 >;  /**< bitfield ITSTEN  */
    using EOM     = regbits< type,  3,  1 >;  /**< bitfield EOM     */
    using START   = regbits< type,  2,  1 >;  /**< bitfield START   */
    using TXEN    = regbits< type,  0,  1 >;  /**< bitfield TXEN    */
  };

  /**
   * register TXDATA
   */
  struct TXDATA
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    // fixme: Field name equals parent register name: TXDATA
    using TXDATA_ = regbits< type,  0,  8 >;  /**< bitfield TXDATA  */
  };

  /**
   * register TXSTS
   */
  struct TXSTS
  : public reg< uint8_t, base_addr + 0x8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x00 >;

    using IBR    = regbits< type,  5,  1 >;  /**< bitfield IBR    */
    using ITST   = regbits< type,  4,  1 >;  /**< bitfield ITST   */
    using ACKSV  = regbits< type,  0,  1 >;  /**< bitfield ACKSV  */
  };

  /**
   * register SFREE
   */
  struct SFREE
  : public reg< uint8_t, base_addr + 0xc, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xc, rw, 0x00 >;

    // fixme: Field name equals parent register name: SFREE
    using SFREE_ = regbits< type,  0,  4 >;  /**< bitfield SFREE  */
  };

  /**
   * register RCST
   */
  struct RCST
  : public reg< uint8_t, base_addr + 0x40, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x40, rw, 0x00 >;

    using STIE    = regbits< type,  7,  1 >;  /**< bitfield STIE    */
    using ACKIE   = regbits< type,  6,  1 >;  /**< bitfield ACKIE   */
    using OVFIE   = regbits< type,  5,  1 >;  /**< bitfield OVFIE   */
    using OVFSEL  = regbits< type,  4,  1 >;  /**< bitfield OVFSEL  */
    using ST      = regbits< type,  3,  1 >;  /**< bitfield ST      */
    using ACK     = regbits< type,  2,  1 >;  /**< bitfield ACK     */
    using EOM     = regbits< type,  1,  1 >;  /**< bitfield EOM     */
    using OVF     = regbits< type,  0,  1 >;  /**< bitfield OVF     */
  };

  /**
   * register RCCR
   */
  struct RCCR
  : public reg< uint8_t, base_addr + 0x41, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x41, rw, 0x00 >;

    using THSEL  = regbits< type,  7,  1 >;  /**< bitfield THSEL  */
    using ADRCE  = regbits< type,  3,  1 >;  /**< bitfield ADRCE  */
    using MOD1   = regbits< type,  2,  1 >;  /**< bitfield MOD1   */
    using MOD0   = regbits< type,  1,  1 >;  /**< bitfield MOD0   */
    using EN     = regbits< type,  0,  1 >;  /**< bitfield EN     */
  };

  /**
   * register RCDAHW
   */
  struct RCDAHW
  : public reg< uint8_t, base_addr + 0x44, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x44, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCDAHW
    using RCDAHW_ = regbits< type,  0,  8 >;  /**< bitfield RCDAHW  */
  };

  /**
   * register RCSHW
   */
  struct RCSHW
  : public reg< uint8_t, base_addr + 0x45, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x45, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCSHW
    using RCSHW_ = regbits< type,  0,  8 >;  /**< bitfield RCSHW  */
  };

  /**
   * register RCDBHW
   */
  struct RCDBHW
  : public reg< uint8_t, base_addr + 0x49, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x49, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCDBHW
    using RCDBHW_ = regbits< type,  0,  8 >;  /**< bitfield RCDBHW  */
  };

  /**
   * register RCADR2
   */
  struct RCADR2
  : public reg< uint8_t, base_addr + 0x4c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4c, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCADR2
    using RCADR2_ = regbits< type,  0,  5 >;  /**< bitfield RCADR2  */
  };

  /**
   * register RCADR1
   */
  struct RCADR1
  : public reg< uint8_t, base_addr + 0x4d, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4d, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCADR1
    using RCADR1_ = regbits< type,  0,  5 >;  /**< bitfield RCADR1  */
  };

  /**
   * register RCDTHL
   */
  struct RCDTHL
  : public reg< uint8_t, base_addr + 0x50, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x50, ro, 0x00 >;

    // fixme: Field name equals parent register name: RCDTHL
    using RCDTHL_ = regbits< type,  0,  8 >;  /**< bitfield RCDTHL  */
  };

  /**
   * register RCDTHH
   */
  struct RCDTHH
  : public reg< uint8_t, base_addr + 0x51, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x51, ro, 0x00 >;

    // fixme: Field name equals parent register name: RCDTHH
    using RCDTHH_ = regbits< type,  0,  8 >;  /**< bitfield RCDTHH  */
  };

  /**
   * register RCDTLL
   */
  struct RCDTLL
  : public reg< uint8_t, base_addr + 0x54, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x54, ro, 0x00 >;

    // fixme: Field name equals parent register name: RCDTLL
    using RCDTLL_ = regbits< type,  0,  8 >;  /**< bitfield RCDTLL  */
  };

  /**
   * register RCDTLH
   */
  struct RCDTLH
  : public reg< uint8_t, base_addr + 0x55, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x55, ro, 0x00 >;

    // fixme: Field name equals parent register name: RCDTLH
    using RCDTLH_ = regbits< type,  0,  8 >;  /**< bitfield RCDTLH  */
  };

  /**
   * register RCCKD
   */
  struct RCCKD
  : public reg< uint16_t, base_addr + 0x58, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x58, rw, 0x0000 >;

    using CKSEL  = regbits< type, 12,  1 >;  /**< bitfield CKSEL  */
    using CKDIV  = regbits< type,  0, 12 >;  /**< bitfield CKDIV  */
  };

  /**
   * register RCRHW
   */
  struct RCRHW
  : public reg< uint8_t, base_addr + 0x5c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x5c, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCRHW
    using RCRHW_ = regbits< type,  0,  8 >;  /**< bitfield RCRHW  */
  };

  /**
   * register RCRC
   */
  struct RCRC
  : public reg< uint8_t, base_addr + 0x5d, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x5d, rw, 0x00 >;

    using RCIE  = regbits< type,  4,  1 >;  /**< bitfield RCIE  */
    using RC    = regbits< type,  0,  1 >;  /**< bitfield RC    */
  };

  /**
   * register RCLE
   */
  struct RCLE
  : public reg< uint8_t, base_addr + 0x61, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x61, rw, 0x00 >;

    using LELIE  = regbits< type,  7,  1 >;  /**< bitfield LELIE  */
    using LESIE  = regbits< type,  6,  1 >;  /**< bitfield LESIE  */
    using LELE   = regbits< type,  5,  1 >;  /**< bitfield LELE   */
    using LESE   = regbits< type,  4,  1 >;  /**< bitfield LESE   */
    using EPE    = regbits< type,  3,  1 >;  /**< bitfield EPE    */
    using LEL    = regbits< type,  1,  1 >;  /**< bitfield LEL    */
    using LES    = regbits< type,  0,  1 >;  /**< bitfield LES    */
  };

  /**
   * register RCLESW
   */
  struct RCLESW
  : public reg< uint8_t, base_addr + 0x64, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x64, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCLESW
    using RCLESW_ = regbits< type,  0,  8 >;  /**< bitfield RCLESW  */
  };

  /**
   * register RCLELW
   */
  struct RCLELW
  : public reg< uint8_t, base_addr + 0x65, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x65, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCLELW
    using RCLELW_ = regbits< type,  0,  8 >;  /**< bitfield RCLELW  */
  };
};
} // namespace mptl

#endif // ARCH_REG_HDMICEC1_HPP_INCLUDED
