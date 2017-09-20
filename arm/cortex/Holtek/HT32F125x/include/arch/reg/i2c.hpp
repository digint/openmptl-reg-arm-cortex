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
//  Import from CMSIS-SVD: "Holtek/ht32f125x.svd"
//
//  name: HT32F125x
//  version: 1.0
//  description: This is the description for the Holtek HT32F125x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2C_HPP_INCLUDED
#define ARCH_REG_I2C_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * I2C
 */
struct I2C
{
  static constexpr reg_addr_t base_addr = 0x40048000;

  /**
   * I2C_CR
   */
  struct I2C_CR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using AA        = regbits< type,  0,  1 >;  /**< AA         */
    using STOP      = regbits< type,  1,  1 >;  /**< STOP       */
    using GCEN      = regbits< type,  2,  1 >;  /**< GCEN       */
    using I2CEN     = regbits< type,  3,  1 >;  /**< I2CEN      */
    using ADRM      = regbits< type,  7,  1 >;  /**< ADRM       */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * I2C_IER
   */
  struct I2C_IER
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STAIE     = regbits< type,  0,  1 >;  /**< STAIE      */
    using STOIE     = regbits< type,  1,  1 >;  /**< STOIE      */
    using ADRSIE    = regbits< type,  2,  1 >;  /**< ADRSIE     */
    using GCSIE     = regbits< type,  3,  1 >;  /**< GCSIE      */
    using ARBLOSIE  = regbits< type,  8,  1 >;  /**< ARBLOSIE   */
    using RXNACKIE  = regbits< type,  9,  1 >;  /**< RXNACKIE   */
    using BUSERRIE  = regbits< type, 10,  1 >;  /**< BUSERRIE   */
    using RXDNEIE   = regbits< type, 16,  1 >;  /**< RXDNEIE    */
    using TXDEIE    = regbits< type, 17,  1 >;  /**< TXDEIE     */
    using RXBFIE    = regbits< type, 18,  1 >;  /**< RXBFIE     */
    using RESERVED  = regbits< type, 19, 13 >;  /**< Reserved.  */
  };

  /**
   * I2C_ADDR
   */
  struct I2C_ADDR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADDR      = regbits< type,  0, 10 >;  /**< ADDR       */
    using RESERVED  = regbits< type, 10, 22 >;  /**< Reserved.  */
  };

  /**
   * I2C_SR
   */
  struct I2C_SR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STA       = regbits< type,  0,  1 >;  /**< STA        */
    using STO       = regbits< type,  1,  1 >;  /**< STO        */
    using ADRS      = regbits< type,  2,  1 >;  /**< ADRS       */
    using GCS       = regbits< type,  3,  1 >;  /**< GCS        */
    using ARBLOS    = regbits< type,  8,  1 >;  /**< ARBLOS     */
    using RXNACK    = regbits< type,  9,  1 >;  /**< RXNACK     */
    using BUSERR    = regbits< type, 10,  1 >;  /**< BUSERR     */
    using RXDNE     = regbits< type, 16,  1 >;  /**< RXDNE      */
    using TXDE      = regbits< type, 17,  1 >;  /**< TXDE       */
    using RXBF      = regbits< type, 18,  1 >;  /**< RXBF       */
    using BUSBUSY   = regbits< type, 19,  1 >;  /**< BUSBUSY    */
    using MASTER    = regbits< type, 20,  1 >;  /**< MASTER     */
    using TXNRX     = regbits< type, 21,  1 >;  /**< TXNRX      */
    using RESERVED  = regbits< type, 22, 10 >;  /**< Reserved.  */
  };

  /**
   * I2C_SHPGR
   */
  struct I2C_SHPGR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SHPG      = regbits< type,  0, 16 >;  /**< SHPG       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * I2C_SLPGR
   */
  struct I2C_SLPGR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SLPG      = regbits< type,  0, 16 >;  /**< SLPG       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * I2C_DR
   */
  struct I2C_DR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DATA      = regbits< type,  0,  8 >;  /**< DATA       */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * I2C_TAR
   */
  struct I2C_TAR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TAR       = regbits< type,  0, 10 >;  /**< TAR        */
    using RWD       = regbits< type, 10,  1 >;  /**< RWD        */
    using RESERVED  = regbits< type, 11, 21 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2C_HPP_INCLUDED
