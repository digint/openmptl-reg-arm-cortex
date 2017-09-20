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
//  Import from CMSIS-SVD: "Holtek/ht32f175x.svd"
//
//  name: HT32F175x
//  version: 1.0
//  description: This is the description for the Holtek HT32F175x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2C1_HPP_INCLUDED
#define ARCH_REG_I2C1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * I2C1
 */
struct I2C1
{
  static constexpr reg_addr_t base_addr = 0x40049000;

  /**
   * I2C1_CR
   */
  struct I2C1_CR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using AA        = regbits< type,  0,  1 >;  /**< AA         */
    using STOP      = regbits< type,  1,  1 >;  /**< STOP       */
    using GCEN      = regbits< type,  2,  1 >;  /**< GCEN       */
    using I2CEN     = regbits< type,  3,  1 >;  /**< I2CEN      */
    using ADRM      = regbits< type,  7,  1 >;  /**< ADRM       */
    using TXDMAE    = regbits< type,  8,  1 >;  /**< TXDMAE     */
    using RXDMAE    = regbits< type,  9,  1 >;  /**< RXDMAE     */
    using DMANACK   = regbits< type, 10,  1 >;  /**< DMANACK    */
    using ENTOUT    = regbits< type, 12,  1 >;  /**< ENTOUT     */
    using RESERVED  = regbits< type, 13, 19 >;  /**< Reserved.  */
  };

  /**
   * I2C1_IER
   */
  struct I2C1_IER
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
    using TOUTIE    = regbits< type, 11,  1 >;  /**< TOUTIE     */
    using RXDNEIE   = regbits< type, 16,  1 >;  /**< RXDNEIE    */
    using TXDEIE    = regbits< type, 17,  1 >;  /**< TXDEIE     */
    using RXBFIE    = regbits< type, 18,  1 >;  /**< RXBFIE     */
    using RESERVED  = regbits< type, 19, 13 >;  /**< Reserved.  */
  };

  /**
   * I2C1_ADDR
   */
  struct I2C1_ADDR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADDR      = regbits< type,  0, 10 >;  /**< ADDR       */
    using RESERVED  = regbits< type, 10, 22 >;  /**< Reserved.  */
  };

  /**
   * I2C1_SR
   */
  struct I2C1_SR
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
    using TOUTF     = regbits< type, 11,  1 >;  /**< TOUTF      */
    using RXDNE     = regbits< type, 16,  1 >;  /**< RXDNE      */
    using TXDE      = regbits< type, 17,  1 >;  /**< TXDE       */
    using RXBF      = regbits< type, 18,  1 >;  /**< RXBF       */
    using BUSBUSY   = regbits< type, 19,  1 >;  /**< BUSBUSY    */
    using MASTER    = regbits< type, 20,  1 >;  /**< MASTER     */
    using TXNRX     = regbits< type, 21,  1 >;  /**< TXNRX      */
    using RESERVED  = regbits< type, 22, 10 >;  /**< Reserved.  */
  };

  /**
   * I2C1_SHPGR
   */
  struct I2C1_SHPGR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SHPG      = regbits< type,  0, 16 >;  /**< SHPG       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * I2C1_SLPGR
   */
  struct I2C1_SLPGR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SLPG      = regbits< type,  0, 16 >;  /**< SLPG       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * I2C1_DR
   */
  struct I2C1_DR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DATA      = regbits< type,  0,  8 >;  /**< DATA       */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * I2C1_TAR
   */
  struct I2C1_TAR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TAR       = regbits< type,  0, 10 >;  /**< TAR        */
    using RWD       = regbits< type, 10,  1 >;  /**< RWD        */
    using RESERVED  = regbits< type, 11, 21 >;  /**< Reserved.  */
  };

  /**
   * I2C1_ADDMR
   */
  struct I2C1_ADDMR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADDMR     = regbits< type,  0, 10 >;  /**< ADDMR      */
    using RESERVED  = regbits< type, 10, 22 >;  /**< Reserved.  */
  };

  /**
   * I2C1_ADDSR
   */
  struct I2C1_ADDSR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADDSR     = regbits< type,  0, 10 >;  /**< ADDSR      */
    using RESERVED  = regbits< type, 10, 22 >;  /**< Reserved.  */
  };

  /**
   * I2C1_TOUT
   */
  struct I2C1_TOUT
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TOUT      = regbits< type,  0, 16 >;  /**< TOUT       */
    using PSC       = regbits< type, 16,  3 >;  /**< PSC        */
    using RESERVED  = regbits< type, 19, 13 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2C1_HPP_INCLUDED
