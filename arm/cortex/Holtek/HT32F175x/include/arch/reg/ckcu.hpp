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

#ifndef ARCH_REG_CKCU_HPP_INCLUDED
#define ARCH_REG_CKCU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * CKCU
 */
struct CKCU
{
  static constexpr reg_addr_t base_addr = 0x40088000;

  /**
   * CKCU_GCFGR
   */
  struct CKCU_GCFGR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CKOUTSRC  = regbits< type,  0,  3 >;  /**< CKOUTSRC  */
    using WDTSRC    = regbits< type,  3,  1 >;  /**< WDTSRC    */
    using PLLSRC    = regbits< type,  8,  1 >;  /**< PLLSRC    */
    using URPRE     = regbits< type, 20,  2 >;  /**< URPRE     */
    using USBPRE    = regbits< type, 22,  2 >;  /**< USBPRE    */
    using LPMOD     = regbits< type, 29,  3 >;  /**< LPMOD     */
  };

  /**
   * CKCU_GCCR
   */
  struct CKCU_GCCR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SW        = regbits< type,  0,  2 >;  /**< SW         */
    using PLLEN     = regbits< type,  9,  1 >;  /**< PLLEN      */
    using HSEEN     = regbits< type, 10,  1 >;  /**< HSEEN      */
    using HSIEN     = regbits< type, 11,  1 >;  /**< HSIEN      */
    using CKMEN     = regbits< type, 16,  1 >;  /**< CKMEN      */
    using PSRCEN    = regbits< type, 17,  1 >;  /**< PSRCEN     */
    using RESERVED  = regbits< type, 18, 14 >;  /**< Reserved.  */
  };

  /**
   * CKCU_GCSR
   */
  struct CKCU_GCSR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PLLRDY    = regbits< type,  1,  1 >;  /**< PLLRDY     */
    using HSERDY    = regbits< type,  2,  1 >;  /**< HSERDY     */
    using HSIRDY    = regbits< type,  3,  1 >;  /**< HSIRDY     */
    using LSERDY    = regbits< type,  4,  1 >;  /**< LSERDY     */
    using LSIRDY    = regbits< type,  5,  1 >;  /**< LSIRDY     */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * CKCU_GCIR
   */
  struct CKCU_GCIR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CKSF      = regbits< type,  0,  1 >;  /**< CKSF       */
    using PLLRDYF   = regbits< type,  2,  1 >;  /**< PLLRDYF    */
    using HSERDYF   = regbits< type,  3,  1 >;  /**< HSERDYF    */
    using HSIRDYF   = regbits< type,  4,  1 >;  /**< HSIRDYF    */
    using LSERDYF   = regbits< type,  5,  1 >;  /**< LSERDYF    */
    using LSIRDYF   = regbits< type,  6,  1 >;  /**< LSIRDYF    */
    using CKSIE     = regbits< type, 16,  1 >;  /**< CKSIE      */
    using PLLRDYIE  = regbits< type, 18,  1 >;  /**< PLLRDYIE   */
    using HSERDYIE  = regbits< type, 19,  1 >;  /**< HSERDYIE   */
    using HSIRDYIE  = regbits< type, 20,  1 >;  /**< HSIRDYIE   */
    using LSERDYIE  = regbits< type, 21,  1 >;  /**< LSERDYIE   */
    using LSIRDYIE  = regbits< type, 22,  1 >;  /**< LSIRDYIE   */
    using RESERVED  = regbits< type, 23,  9 >;  /**< Reserved.  */
  };

  /**
   * CKCU_PLLCFGR
   */
  struct CKCU_PLLCFGR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using POTD      = regbits< type, 21,  2 >;  /**< POTD       */
    using PFBD      = regbits< type, 23,  6 >;  /**< PFBD       */
    using RESERVED  = regbits< type, 29,  3 >;  /**< Reserved.  */
  };

  /**
   * CKCU_PLLCR
   */
  struct CKCU_PLLCR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RESERVED  = regbits< type,  0, 31 >;  /**< Reserved.  */
    using PLLBPS    = regbits< type, 31,  1 >;  /**< PLLBPS     */
  };

  /**
   * CKCU_AHBCFGR
   */
  struct CKCU_AHBCFGR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using AHBPRE    = regbits< type,  0,  2 >;  /**< AHBPRE     */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * CKCU_AHBCCR
   */
  struct CKCU_AHBCCR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FMCEN     = regbits< type,  0,  1 >;  /**< FMCEN      */
    using SRAMEN    = regbits< type,  2,  1 >;  /**< SRAMEN     */
    using PDMAEN    = regbits< type,  4,  1 >;  /**< PDMAEN     */
    using BMEN      = regbits< type,  5,  1 >;  /**< BMEN       */
    using APB0EN    = regbits< type,  6,  1 >;  /**< APB0EN     */
    using APB1EN    = regbits< type,  7,  1 >;  /**< APB1EN     */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * CKCU_APBCFGR
   */
  struct CKCU_APBCFGR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADCDIV    = regbits< type, 16,  3 >;  /**< ADCDIV     */
    using RESERVED  = regbits< type, 19, 13 >;  /**< Reserved.  */
  };

  /**
   * CKCU_APBCCR0
   */
  struct CKCU_APBCCR0
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using I2C0EN    = regbits< type,  0,  1 >;  /**< I2C0EN     */
    using I2C1EN    = regbits< type,  1,  1 >;  /**< I2C1EN     */
    using SPI0EN    = regbits< type,  4,  1 >;  /**< SPI0EN     */
    using SPI1EN    = regbits< type,  5,  1 >;  /**< SPI1EN     */
    using UR0EN     = regbits< type,  8,  1 >;  /**< UR0EN      */
    using UR1EN     = regbits< type,  9,  1 >;  /**< UR1EN      */
    using AFIOEN    = regbits< type, 14,  1 >;  /**< AFIOEN     */
    using EXTIEN    = regbits< type, 15,  1 >;  /**< EXTIEN     */
    using PAEN      = regbits< type, 16,  1 >;  /**< PAEN       */
    using PBEN      = regbits< type, 17,  1 >;  /**< PBEN       */
    using PCEN      = regbits< type, 18,  1 >;  /**< PCEN       */
    using PDEN      = regbits< type, 19,  1 >;  /**< PDEN       */
    using PEEN      = regbits< type, 20,  1 >;  /**< PEEN       */
    using SCIEN     = regbits< type, 24,  1 >;  /**< SCIEN      */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };

  /**
   * CKCU_APBCCR1
   */
  struct CKCU_APBCCR1
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MCTMEN    = regbits< type,  0,  1 >;  /**< MCTMEN     */
    using WDTEN     = regbits< type,  4,  1 >;  /**< WDTEN      */
    using RTCEN     = regbits< type,  6,  1 >;  /**< RTCEN      */
    using GPTM0EN   = regbits< type,  8,  1 >;  /**< GPTM0EN    */
    using GPTM1EN   = regbits< type,  9,  1 >;  /**< GPTM1EN    */
    using USBEN     = regbits< type, 14,  1 >;  /**< USBEN      */
    using BFTM0EN   = regbits< type, 16,  1 >;  /**< BFTM0EN    */
    using BFTM1EN   = regbits< type, 17,  1 >;  /**< BFTM1EN    */
    using OPA0EN    = regbits< type, 22,  1 >;  /**< OPA0EN     */
    using OPA1EN    = regbits< type, 23,  1 >;  /**< OPA1EN     */
    using ADCEN     = regbits< type, 24,  1 >;  /**< ADCEN      */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };

  /**
   * CKCU_CKST
   */
  struct CKCU_CKST
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PLLST   = regbits< type,  8,  4 >;  /**< PLLST   */
    using HSEST   = regbits< type, 16,  2 >;  /**< HSEST   */
    using HSIST   = regbits< type, 24,  3 >;  /**< HSIST   */
    using CKSWST  = regbits< type, 30,  2 >;  /**< CKSWST  */
  };

  /**
   * CKCU_LPCR
   */
  struct CKCU_LPCR
  : public reg< uint32_t, base_addr + 0x00000300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BKISO     = regbits< type,  0,  1 >;  /**< BKISO      */
    using USBSLEEP  = regbits< type,  8,  1 >;  /**< USBSLEEP   */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * CKCU_MCUDBGCR
   */
  struct CKCU_MCUDBGCR
  : public reg< uint32_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DBSLP     = regbits< type,  0,  1 >;  /**< DBSLP      */
    using DBDSLP1   = regbits< type,  1,  1 >;  /**< DBDSLP1    */
    using DBPD      = regbits< type,  2,  1 >;  /**< DBPD       */
    using DBWDT     = regbits< type,  3,  1 >;  /**< DBWDT      */
    using DBMCTM    = regbits< type,  4,  1 >;  /**< DBMCTM     */
    using DBGPTM0   = regbits< type,  6,  1 >;  /**< DBGPTM0    */
    using DBGPTM1   = regbits< type,  7,  1 >;  /**< DBGPTM1    */
    using DBUR0     = regbits< type,  8,  1 >;  /**< DBUR0      */
    using DBUR1     = regbits< type,  9,  1 >;  /**< DBUR1      */
    using DBSPI0    = regbits< type, 10,  1 >;  /**< DBSPI0     */
    using DBSPI1    = regbits< type, 11,  1 >;  /**< DBSPI1     */
    using DBI2C0    = regbits< type, 12,  1 >;  /**< DBI2C0     */
    using DBI2C1    = regbits< type, 13,  1 >;  /**< DBI2C1     */
    using DBDSLP2   = regbits< type, 14,  1 >;  /**< DBDSLP2    */
    using DBDSCI    = regbits< type, 15,  1 >;  /**< DBDSCI     */
    using DBBFTM0   = regbits< type, 16,  1 >;  /**< DBBFTM0    */
    using DBBFTM1   = regbits< type, 17,  1 >;  /**< DBBFTM1    */
    using RESERVED  = regbits< type, 18, 14 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CKCU_HPP_INCLUDED
