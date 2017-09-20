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
//  Import from CMSIS-SVD: "STMicro/STM32F7x5.svd"
//
//  name: STM32F7x5_v1r1
//  version: 1.0
//  description: STM32F7x5_v1r1
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HASH_HPP_INCLUDED
#define ARCH_REG_HASH_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Hash processor
 */
struct HASH
{
  static constexpr reg_addr_t base_addr = 0x50060400;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using INIT      = regbits< type,  2,  1 >;  /**< Initialize message digest calculation  */
    using DMAE      = regbits< type,  3,  1 >;  /**< DMA enable                             */
    using DATATYPE  = regbits< type,  4,  2 >;  /**< Data type selection                    */
    using MODE      = regbits< type,  6,  1 >;  /**< Mode selection                         */
    using ALGO0     = regbits< type,  7,  1 >;  /**< Algorithm selection                    */
    using NBW       = regbits< type,  8,  4 >;  /**< Number of words already pushed         */
    using DINNE     = regbits< type, 12,  1 >;  /**< DIN not empty                          */
    using MDMAT     = regbits< type, 13,  1 >;  /**< Multiple DMA Transfers                 */
    using LKEY      = regbits< type, 16,  1 >;  /**< Long key selection                     */
    using ALGO1     = regbits< type, 18,  1 >;  /**< ALGO                                   */
  };

  /**
   * data input register
   */
  struct DIN
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using DATAIN  = regbits< type,  0, 32 >;  /**< Data input  */
  };

  /**
   * start register
   */
  struct STR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using DCAL  = regbits< type,  8,  1 >;  /**< Digest calculation                                    */
    using NBLW  = regbits< type,  0,  5 >;  /**< Number of valid bits in the last word of the message  */
  };

  /**
   * digest registers
   */
  struct HR0
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using H0  = regbits< type,  0, 32 >;  /**< H0  */
  };

  /**
   * digest registers
   */
  struct HR1
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    using H1  = regbits< type,  0, 32 >;  /**< H1  */
  };

  /**
   * digest registers
   */
  struct HR2
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    using H2  = regbits< type,  0, 32 >;  /**< H2  */
  };

  /**
   * digest registers
   */
  struct HR3
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >;

    using H3  = regbits< type,  0, 32 >;  /**< H3  */
  };

  /**
   * digest registers
   */
  struct HR4
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using H4  = regbits< type,  0, 32 >;  /**< H4  */
  };

  /**
   * interrupt enable register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using DCIE   = regbits< type,  1,  1 >;  /**< Digest calculation completion interrupt enable  */
    using DINIE  = regbits< type,  0,  1 >;  /**< Data input interrupt enable                     */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000001 >;

    using BUSY   = regbits< type,  3,  1 >;  /**< Busy bit                                        */
    using DMAS   = regbits< type,  2,  1 >;  /**< DMA Status                                      */
    using DCIS   = regbits< type,  1,  1 >;  /**< Digest calculation completion interrupt status  */
    using DINIS  = regbits< type,  0,  1 >;  /**< Data input interrupt status                     */
  };

  /**
   * context swap registers
   */
  struct CSR0
  : public reg< uint32_t, base_addr + 0xf8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf8, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR0
    using CSR0_ = regbits< type,  0, 32 >;  /**< CSR0  */
  };

  /**
   * context swap registers
   */
  struct CSR1
  : public reg< uint32_t, base_addr + 0xfc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xfc, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR1
    using CSR1_ = regbits< type,  0, 32 >;  /**< CSR1  */
  };

  /**
   * context swap registers
   */
  struct CSR2
  : public reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR2
    using CSR2_ = regbits< type,  0, 32 >;  /**< CSR2  */
  };

  /**
   * context swap registers
   */
  struct CSR3
  : public reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR3
    using CSR3_ = regbits< type,  0, 32 >;  /**< CSR3  */
  };

  /**
   * context swap registers
   */
  struct CSR4
  : public reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR4
    using CSR4_ = regbits< type,  0, 32 >;  /**< CSR4  */
  };

  /**
   * context swap registers
   */
  struct CSR5
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR5
    using CSR5_ = regbits< type,  0, 32 >;  /**< CSR5  */
  };

  /**
   * context swap registers
   */
  struct CSR6
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR6
    using CSR6_ = regbits< type,  0, 32 >;  /**< CSR6  */
  };

  /**
   * context swap registers
   */
  struct CSR7
  : public reg< uint32_t, base_addr + 0x114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR7
    using CSR7_ = regbits< type,  0, 32 >;  /**< CSR7  */
  };

  /**
   * context swap registers
   */
  struct CSR8
  : public reg< uint32_t, base_addr + 0x118, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR8
    using CSR8_ = regbits< type,  0, 32 >;  /**< CSR8  */
  };

  /**
   * context swap registers
   */
  struct CSR9
  : public reg< uint32_t, base_addr + 0x11c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR9
    using CSR9_ = regbits< type,  0, 32 >;  /**< CSR9  */
  };

  /**
   * context swap registers
   */
  struct CSR10
  : public reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR10
    using CSR10_ = regbits< type,  0, 32 >;  /**< CSR10  */
  };

  /**
   * context swap registers
   */
  struct CSR11
  : public reg< uint32_t, base_addr + 0x124, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR11
    using CSR11_ = regbits< type,  0, 32 >;  /**< CSR11  */
  };

  /**
   * context swap registers
   */
  struct CSR12
  : public reg< uint32_t, base_addr + 0x128, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR12
    using CSR12_ = regbits< type,  0, 32 >;  /**< CSR12  */
  };

  /**
   * context swap registers
   */
  struct CSR13
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR13
    using CSR13_ = regbits< type,  0, 32 >;  /**< CSR13  */
  };

  /**
   * context swap registers
   */
  struct CSR14
  : public reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR14
    using CSR14_ = regbits< type,  0, 32 >;  /**< CSR14  */
  };

  /**
   * context swap registers
   */
  struct CSR15
  : public reg< uint32_t, base_addr + 0x134, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR15
    using CSR15_ = regbits< type,  0, 32 >;  /**< CSR15  */
  };

  /**
   * context swap registers
   */
  struct CSR16
  : public reg< uint32_t, base_addr + 0x138, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x138, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR16
    using CSR16_ = regbits< type,  0, 32 >;  /**< CSR16  */
  };

  /**
   * context swap registers
   */
  struct CSR17
  : public reg< uint32_t, base_addr + 0x13c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x13c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR17
    using CSR17_ = regbits< type,  0, 32 >;  /**< CSR17  */
  };

  /**
   * context swap registers
   */
  struct CSR18
  : public reg< uint32_t, base_addr + 0x140, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x140, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR18
    using CSR18_ = regbits< type,  0, 32 >;  /**< CSR18  */
  };

  /**
   * context swap registers
   */
  struct CSR19
  : public reg< uint32_t, base_addr + 0x144, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x144, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR19
    using CSR19_ = regbits< type,  0, 32 >;  /**< CSR19  */
  };

  /**
   * context swap registers
   */
  struct CSR20
  : public reg< uint32_t, base_addr + 0x148, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x148, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR20
    using CSR20_ = regbits< type,  0, 32 >;  /**< CSR20  */
  };

  /**
   * context swap registers
   */
  struct CSR21
  : public reg< uint32_t, base_addr + 0x14c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR21
    using CSR21_ = regbits< type,  0, 32 >;  /**< CSR21  */
  };

  /**
   * context swap registers
   */
  struct CSR22
  : public reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR22
    using CSR22_ = regbits< type,  0, 32 >;  /**< CSR22  */
  };

  /**
   * context swap registers
   */
  struct CSR23
  : public reg< uint32_t, base_addr + 0x154, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR23
    using CSR23_ = regbits< type,  0, 32 >;  /**< CSR23  */
  };

  /**
   * context swap registers
   */
  struct CSR24
  : public reg< uint32_t, base_addr + 0x158, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x158, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR24
    using CSR24_ = regbits< type,  0, 32 >;  /**< CSR24  */
  };

  /**
   * context swap registers
   */
  struct CSR25
  : public reg< uint32_t, base_addr + 0x15c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x15c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR25
    using CSR25_ = regbits< type,  0, 32 >;  /**< CSR25  */
  };

  /**
   * context swap registers
   */
  struct CSR26
  : public reg< uint32_t, base_addr + 0x160, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x160, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR26
    using CSR26_ = regbits< type,  0, 32 >;  /**< CSR26  */
  };

  /**
   * context swap registers
   */
  struct CSR27
  : public reg< uint32_t, base_addr + 0x164, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x164, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR27
    using CSR27_ = regbits< type,  0, 32 >;  /**< CSR27  */
  };

  /**
   * context swap registers
   */
  struct CSR28
  : public reg< uint32_t, base_addr + 0x168, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x168, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR28
    using CSR28_ = regbits< type,  0, 32 >;  /**< CSR28  */
  };

  /**
   * context swap registers
   */
  struct CSR29
  : public reg< uint32_t, base_addr + 0x16c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x16c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR29
    using CSR29_ = regbits< type,  0, 32 >;  /**< CSR29  */
  };

  /**
   * context swap registers
   */
  struct CSR30
  : public reg< uint32_t, base_addr + 0x170, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x170, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR30
    using CSR30_ = regbits< type,  0, 32 >;  /**< CSR30  */
  };

  /**
   * context swap registers
   */
  struct CSR31
  : public reg< uint32_t, base_addr + 0x174, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x174, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR31
    using CSR31_ = regbits< type,  0, 32 >;  /**< CSR31  */
  };

  /**
   * context swap registers
   */
  struct CSR32
  : public reg< uint32_t, base_addr + 0x178, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x178, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR32
    using CSR32_ = regbits< type,  0, 32 >;  /**< CSR32  */
  };

  /**
   * context swap registers
   */
  struct CSR33
  : public reg< uint32_t, base_addr + 0x17c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x17c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR33
    using CSR33_ = regbits< type,  0, 32 >;  /**< CSR33  */
  };

  /**
   * context swap registers
   */
  struct CSR34
  : public reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR34
    using CSR34_ = regbits< type,  0, 32 >;  /**< CSR34  */
  };

  /**
   * context swap registers
   */
  struct CSR35
  : public reg< uint32_t, base_addr + 0x184, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR35
    using CSR35_ = regbits< type,  0, 32 >;  /**< CSR35  */
  };

  /**
   * context swap registers
   */
  struct CSR36
  : public reg< uint32_t, base_addr + 0x188, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR36
    using CSR36_ = regbits< type,  0, 32 >;  /**< CSR36  */
  };

  /**
   * context swap registers
   */
  struct CSR37
  : public reg< uint32_t, base_addr + 0x18c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR37
    using CSR37_ = regbits< type,  0, 32 >;  /**< CSR37  */
  };

  /**
   * context swap registers
   */
  struct CSR38
  : public reg< uint32_t, base_addr + 0x190, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR38
    using CSR38_ = regbits< type,  0, 32 >;  /**< CSR38  */
  };

  /**
   * context swap registers
   */
  struct CSR39
  : public reg< uint32_t, base_addr + 0x194, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x194, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR39
    using CSR39_ = regbits< type,  0, 32 >;  /**< CSR39  */
  };

  /**
   * context swap registers
   */
  struct CSR40
  : public reg< uint32_t, base_addr + 0x198, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x198, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR40
    using CSR40_ = regbits< type,  0, 32 >;  /**< CSR40  */
  };

  /**
   * context swap registers
   */
  struct CSR41
  : public reg< uint32_t, base_addr + 0x19c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x19c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR41
    using CSR41_ = regbits< type,  0, 32 >;  /**< CSR41  */
  };

  /**
   * context swap registers
   */
  struct CSR42
  : public reg< uint32_t, base_addr + 0x1a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a0, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR42
    using CSR42_ = regbits< type,  0, 32 >;  /**< CSR42  */
  };

  /**
   * context swap registers
   */
  struct CSR43
  : public reg< uint32_t, base_addr + 0x1a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a4, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR43
    using CSR43_ = regbits< type,  0, 32 >;  /**< CSR43  */
  };

  /**
   * context swap registers
   */
  struct CSR44
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR44
    using CSR44_ = regbits< type,  0, 32 >;  /**< CSR44  */
  };

  /**
   * context swap registers
   */
  struct CSR45
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR45
    using CSR45_ = regbits< type,  0, 32 >;  /**< CSR45  */
  };

  /**
   * context swap registers
   */
  struct CSR46
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR46
    using CSR46_ = regbits< type,  0, 32 >;  /**< CSR46  */
  };

  /**
   * context swap registers
   */
  struct CSR47
  : public reg< uint32_t, base_addr + 0x1b4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b4, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR47
    using CSR47_ = regbits< type,  0, 32 >;  /**< CSR47  */
  };

  /**
   * context swap registers
   */
  struct CSR48
  : public reg< uint32_t, base_addr + 0x1b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b8, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR48
    using CSR48_ = regbits< type,  0, 32 >;  /**< CSR48  */
  };

  /**
   * context swap registers
   */
  struct CSR49
  : public reg< uint32_t, base_addr + 0x1bc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1bc, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR49
    using CSR49_ = regbits< type,  0, 32 >;  /**< CSR49  */
  };

  /**
   * context swap registers
   */
  struct CSR50
  : public reg< uint32_t, base_addr + 0x1c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c0, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR50
    using CSR50_ = regbits< type,  0, 32 >;  /**< CSR50  */
  };

  /**
   * context swap registers
   */
  struct CSR51
  : public reg< uint32_t, base_addr + 0x1c4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c4, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR51
    using CSR51_ = regbits< type,  0, 32 >;  /**< CSR51  */
  };

  /**
   * context swap registers
   */
  struct CSR52
  : public reg< uint32_t, base_addr + 0x1c8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c8, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR52
    using CSR52_ = regbits< type,  0, 32 >;  /**< CSR52  */
  };

  /**
   * context swap registers
   */
  struct CSR53
  : public reg< uint32_t, base_addr + 0x1cc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1cc, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CSR53
    using CSR53_ = regbits< type,  0, 32 >;  /**< CSR53  */
  };

  /**
   * HASH digest register
   */
  struct HASH_HR0
  : public reg< uint32_t, base_addr + 0x310, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x310, ro, 0x00000000 >;

    using H0  = regbits< type,  0, 32 >;  /**< H0  */
  };

  /**
   * read-only
   */
  struct HASH_HR1
  : public reg< uint32_t, base_addr + 0x314, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x314, ro, 0x00000000 >;

    using H1  = regbits< type,  0, 32 >;  /**< H1  */
  };

  /**
   * read-only
   */
  struct HASH_HR2
  : public reg< uint32_t, base_addr + 0x318, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x318, ro, 0x00000000 >;

    using H2  = regbits< type,  0, 32 >;  /**< H2  */
  };

  /**
   * read-only
   */
  struct HASH_HR3
  : public reg< uint32_t, base_addr + 0x31c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, ro, 0x00000000 >;

    using H3  = regbits< type,  0, 32 >;  /**< H3  */
  };

  /**
   * read-only
   */
  struct HASH_HR4
  : public reg< uint32_t, base_addr + 0x320, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x320, ro, 0x00000000 >;

    using H4  = regbits< type,  0, 32 >;  /**< H4  */
  };

  /**
   * read-only
   */
  struct HASH_HR5
  : public reg< uint32_t, base_addr + 0x324, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x324, ro, 0x00000000 >;

    using H5  = regbits< type,  0, 32 >;  /**< H5  */
  };

  /**
   * read-only
   */
  struct HASH_HR6
  : public reg< uint32_t, base_addr + 0x328, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x328, ro, 0x00000000 >;

    using H6  = regbits< type,  0, 32 >;  /**< H6  */
  };

  /**
   * read-only
   */
  struct HASH_HR7
  : public reg< uint32_t, base_addr + 0x32c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x32c, ro, 0x00000000 >;

    using H7  = regbits< type,  0, 32 >;  /**< H7  */
  };
};
} // namespace mptl

#endif // ARCH_REG_HASH_HPP_INCLUDED
