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
//  Import from CMSIS-SVD: "Fujitsu/S6E1A1.svd"
//
//  name: S6E1A1
//  version: 1.2
//  description: S6E1A1 Series
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MTB_DWT_HPP_INCLUDED
#define ARCH_REG_MTB_DWT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Micro Trace Buffer Data Watchpoint and Trace Registers
 */
struct MTB_DWT
{
  static constexpr reg_addr_t base_addr = 0xf0001000;

  /**
   * MTB_DWT Address Compare Start trace Register
   */
  struct CMP_ADDR_START
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using ADCMP_STA  = regbits< type,  0, 32 >;  /**< MTB_DWT address comparison start trace bits  */
  };

  /**
   * MTB_DWT Data Compare Start trace Register
   */
  struct CMP_DATA_START
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using DTCMP_STA  = regbits< type,  0, 32 >;  /**< MTB_DWT data comparison start trace bits  */
  };

  /**
   * MTB_DWT Mask Data Compare Start Trace Register
   */
  struct CMP_MASK_START
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using MSK_STA  = regbits< type,  0, 32 >;  /**< MTB_DWT data compare start trace register mask bits  */
  };

  /**
   * MTB_DWT Address Compare Stop trace Register
   */
  struct CMP_ADDR_STOP
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using ADCMP_STO  = regbits< type,  0, 32 >;  /**< MTB_DWT address comparison stop trace bits  */
  };

  /**
   * MTB_DWT Data Compare Stop trace Register
   */
  struct CMP_DATA_STOP
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using DTCMP_STO  = regbits< type,  0, 32 >;  /**< MTB_DWT data comparison stop trace bits  */
  };

  /**
   * MTB_DWT Mask Data Compare Stop Trace Register
   */
  struct CMP_MASK_STOP
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using MSK_STO  = regbits< type,  0, 32 >;  /**< MTB_DWT data compare stop trace register mask bits  */
  };

  /**
   * MTB_DWT Function Register
   */
  struct FCT
  : public reg< uint8_t, base_addr + 0x20, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x00 >;

    using DSTP   = regbits< type,  6,  2 >;  /**< Data size stop bits                     */
    using DSTA   = regbits< type,  4,  2 >;  /**< Data size start bits                    */
    using STPEN  = regbits< type,  2,  2 >;  /**< Enable MTB_DWT stop MTB function bits   */
    using STAEN  = regbits< type,  0,  2 >;  /**< Enable MTB_DWT start MTB function bits  */
  };

  /**
   * Peripheral ID4 Register
   */
  struct PID4
  : public reg< uint32_t, base_addr + 0xfd0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xfd0, ro, 0x00000000 >;

    using PERID  = regbits< type,  0, 32 >;  /**< Peripheral ID bits  */
  };

  /**
   * Peripheral ID5 Register
   */
  struct PID5
  : public reg< uint32_t, base_addr + 0xfd4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xfd4, ro, 0x00000000 >;

    using PERID  = regbits< type,  0, 32 >;  /**< Peripheral ID bits  */
  };

  /**
   * Peripheral ID6 Register
   */
  struct PID6
  : public reg< uint32_t, base_addr + 0xfd8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xfd8, ro, 0x00000000 >;

    using PERID  = regbits< type,  0, 32 >;  /**< Peripheral ID bits  */
  };

  /**
   * Peripheral ID7 Register
   */
  struct PID7
  : public reg< uint32_t, base_addr + 0xfdc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xfdc, ro, 0x00000000 >;

    using PERID  = regbits< type,  0, 32 >;  /**< Peripheral ID bits  */
  };

  /**
   * Peripheral ID0 Register
   */
  struct PID0
  : public reg< uint32_t, base_addr + 0xfe0, ro, 0x00000016 >
  {
    using type = reg< uint32_t, base_addr + 0xfe0, ro, 0x00000016 >;

    using PERID  = regbits< type,  0, 32 >;  /**< Peripheral ID bits  */
  };

  /**
   * Peripheral ID1 Register
   */
  struct PID1
  : public reg< uint32_t, base_addr + 0xfe4, ro, 0x00000048 >
  {
    using type = reg< uint32_t, base_addr + 0xfe4, ro, 0x00000048 >;

    using PERID  = regbits< type,  0, 32 >;  /**< Peripheral ID bits  */
  };

  /**
   * Peripheral ID2 Register
   */
  struct PID2
  : public reg< uint32_t, base_addr + 0xfe8, ro, 0x00000008 >
  {
    using type = reg< uint32_t, base_addr + 0xfe8, ro, 0x00000008 >;

    using PERID  = regbits< type,  0, 32 >;  /**< Peripheral ID bits  */
  };

  /**
   * Peripheral ID3 Register
   */
  struct PID3
  : public reg< uint32_t, base_addr + 0xfec, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xfec, ro, 0x00000000 >;

    using PERID  = regbits< type,  0, 32 >;  /**< Peripheral ID bits  */
  };

  /**
   * Component ID0 Register
   */
  struct CID0
  : public reg< uint32_t, base_addr + 0xff0, ro, 0x0000000D >
  {
    using type = reg< uint32_t, base_addr + 0xff0, ro, 0x0000000D >;

    using CPNTID  = regbits< type,  0, 32 >;  /**< Component ID bits  */
  };

  /**
   * Component ID1 Register
   */
  struct CID1
  : public reg< uint32_t, base_addr + 0xff4, ro, 0x00000090 >
  {
    using type = reg< uint32_t, base_addr + 0xff4, ro, 0x00000090 >;

    using CPNTID  = regbits< type,  0, 32 >;  /**< Component ID bits  */
  };

  /**
   * Component ID2 Register
   */
  struct CID2
  : public reg< uint32_t, base_addr + 0xff8, ro, 0x00000005 >
  {
    using type = reg< uint32_t, base_addr + 0xff8, ro, 0x00000005 >;

    using CPNTID  = regbits< type,  0, 32 >;  /**< Component ID bits  */
  };

  /**
   * Component ID3 Register
   */
  struct CID3
  : public reg< uint32_t, base_addr + 0xffc, ro, 0x000000B1 >
  {
    using type = reg< uint32_t, base_addr + 0xffc, ro, 0x000000B1 >;

    using CPNTID  = regbits< type,  0, 32 >;  /**< Component ID bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MTB_DWT_HPP_INCLUDED
