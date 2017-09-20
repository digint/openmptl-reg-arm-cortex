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

#ifndef ARCH_REG_CRG_HPP_INCLUDED
#define ARCH_REG_CRG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral CRG
 */
struct CRG
{
  static constexpr reg_addr_t base_addr = 0x40010000;

  /**
   * register SCM_CTL
   */
  struct SCM_CTL
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using RCS    = regbits< type,  5,  3 >;  /**< bitfield RCS    */
    using PLLE   = regbits< type,  4,  1 >;  /**< bitfield PLLE   */
    using SOSCE  = regbits< type,  3,  1 >;  /**< bitfield SOSCE  */
    using MOSCE  = regbits< type,  1,  1 >;  /**< bitfield MOSCE  */
  };

  /**
   * register SCM_STR
   */
  struct SCM_STR
  : public reg< uint8_t, base_addr + 0x4, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0x00 >;

    using RCM    = regbits< type,  5,  3 >;  /**< bitfield RCM    */
    using PLRDY  = regbits< type,  4,  1 >;  /**< bitfield PLRDY  */
    using SORDY  = regbits< type,  3,  1 >;  /**< bitfield SORDY  */
    using MORDY  = regbits< type,  1,  1 >;  /**< bitfield MORDY  */
  };

  /**
   * register BSC_PSR
   */
  struct BSC_PSR
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using BSR  = regbits< type,  0,  3 >;  /**< bitfield BSR  */
  };

  /**
   * register APBC0_PSR
   */
  struct APBC0_PSR
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using APBC0  = regbits< type,  0,  2 >;  /**< bitfield APBC0  */
  };

  /**
   * register APBC1_PSR
   */
  struct APBC1_PSR
  : public reg< uint8_t, base_addr + 0x18, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x80 >;

    using APBC1EN   = regbits< type,  7,  1 >;  /**< bitfield APBC1EN   */
    using APBC1RST  = regbits< type,  4,  1 >;  /**< bitfield APBC1RST  */
    using APBC1     = regbits< type,  0,  2 >;  /**< bitfield APBC1     */
  };

  /**
   * register APBC2_PSR
   */
  struct APBC2_PSR
  : public reg< uint8_t, base_addr + 0x1c, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, rw, 0x80 >;

    using APBC2EN   = regbits< type,  7,  1 >;  /**< bitfield APBC2EN   */
    using APBC2RST  = regbits< type,  4,  1 >;  /**< bitfield APBC2RST  */
    using APBC2     = regbits< type,  0,  2 >;  /**< bitfield APBC2     */
  };

  /**
   * register SWC_PSR
   */
  struct SWC_PSR
  : public reg< uint8_t, base_addr + 0x20, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x00 >;

    using TESTB  = regbits< type,  7,  1 >;  /**< bitfield TESTB  */
    using SWDS   = regbits< type,  0,  2 >;  /**< bitfield SWDS   */
  };

  /**
   * register TTC_PSR
   */
  struct TTC_PSR
  : public reg< uint8_t, base_addr + 0x28, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0x00 >;

    using TTC  = regbits< type,  0,  2 >;  /**< bitfield TTC  */
  };

  /**
   * register CSW_TMR
   */
  struct CSW_TMR
  : public reg< uint8_t, base_addr + 0x30, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x00 >;

    using SOWT  = regbits< type,  4,  3 >;  /**< bitfield SOWT  */
    using MOWT  = regbits< type,  0,  4 >;  /**< bitfield MOWT  */
  };

  /**
   * register PSW_TMR
   */
  struct PSW_TMR
  : public reg< uint8_t, base_addr + 0x34, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0x00 >;

    using PINC  = regbits< type,  4,  1 >;  /**< bitfield PINC  */
    using POWT  = regbits< type,  0,  3 >;  /**< bitfield POWT  */
  };

  /**
   * register PLL_CTL1
   */
  struct PLL_CTL1
  : public reg< uint8_t, base_addr + 0x38, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x38, rw, 0x00 >;

    using PLLK  = regbits< type,  4,  4 >;  /**< bitfield PLLK  */
    using PLLM  = regbits< type,  0,  4 >;  /**< bitfield PLLM  */
  };

  /**
   * register PLL_CTL2
   */
  struct PLL_CTL2
  : public reg< uint8_t, base_addr + 0x3c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3c, rw, 0x00 >;

    using PLLN  = regbits< type,  0,  6 >;  /**< bitfield PLLN  */
  };

  /**
   * register DBWDT_CTL
   */
  struct DBWDT_CTL
  : public reg< uint8_t, base_addr + 0x54, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x54, rw, 0x00 >;

    using DPHWBE  = regbits< type,  7,  1 >;  /**< bitfield DPHWBE  */
    using DPSWBE  = regbits< type,  5,  1 >;  /**< bitfield DPSWBE  */
  };

  /**
   * register INT_ENR
   */
  struct INT_ENR
  : public reg< uint8_t, base_addr + 0x60, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x60, rw, 0x00 >;

    using FCSE  = regbits< type,  5,  1 >;  /**< bitfield FCSE  */
    using PCSE  = regbits< type,  2,  1 >;  /**< bitfield PCSE  */
    using SCSE  = regbits< type,  1,  1 >;  /**< bitfield SCSE  */
    using MCSE  = regbits< type,  0,  1 >;  /**< bitfield MCSE  */
  };

  /**
   * register INT_STR
   */
  struct INT_STR
  : public reg< uint8_t, base_addr + 0x64, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x64, ro, 0x00 >;

    using FCSI  = regbits< type,  5,  1 >;  /**< bitfield FCSI  */
    using PCSI  = regbits< type,  2,  1 >;  /**< bitfield PCSI  */
    using SCSI  = regbits< type,  1,  1 >;  /**< bitfield SCSI  */
    using MCSI  = regbits< type,  0,  1 >;  /**< bitfield MCSI  */
  };

  /**
   * register INT_CLR
   */
  struct INT_CLR
  : public reg< uint8_t, base_addr + 0x68, wo, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x68, wo, 0x00 >;

    using FCSC  = regbits< type,  5,  1 >;  /**< bitfield FCSC  */
    using PCSC  = regbits< type,  2,  1 >;  /**< bitfield PCSC  */
    using SCSC  = regbits< type,  1,  1 >;  /**< bitfield SCSC  */
    using MCSC  = regbits< type,  0,  1 >;  /**< bitfield MCSC  */
  };

  /**
   * register RST_STR
   */
  struct RST_STR
  : public reg< uint16_t, base_addr + 0xc, ro, 0x0001 >
  {
    using type = reg< uint16_t, base_addr + 0xc, ro, 0x0001 >;

    using SRST   = regbits< type,  8,  1 >;  /**< bitfield SRST   */
    using FCSR   = regbits< type,  7,  1 >;  /**< bitfield FCSR   */
    using CSVR   = regbits< type,  6,  1 >;  /**< bitfield CSVR   */
    using HWDT   = regbits< type,  5,  1 >;  /**< bitfield HWDT   */
    using SWDT   = regbits< type,  4,  1 >;  /**< bitfield SWDT   */
    using INITX  = regbits< type,  1,  1 >;  /**< bitfield INITX  */
    using PONR   = regbits< type,  0,  1 >;  /**< bitfield PONR   */
  };

  /**
   * register STB_CTL
   */
  struct STB_CTL
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using KEY   = regbits< type, 16, 16 >;  /**< bitfield KEY   */
    using SPL   = regbits< type,  4,  1 >;  /**< bitfield SPL   */
    using DSTM  = regbits< type,  2,  1 >;  /**< bitfield DSTM  */
    using STM   = regbits< type,  0,  2 >;  /**< bitfield STM   */
  };

  /**
   * register CSV_CTL
   */
  struct CSV_CTL
  : public reg< uint16_t, base_addr + 0x40, rw, 0x7003 >
  {
    using type = reg< uint16_t, base_addr + 0x40, rw, 0x7003 >;

    using FCD    = regbits< type, 12,  3 >;  /**< bitfield FCD    */
    using FCSRE  = regbits< type,  9,  1 >;  /**< bitfield FCSRE  */
    using FCSDE  = regbits< type,  8,  1 >;  /**< bitfield FCSDE  */
    using SCSVE  = regbits< type,  1,  1 >;  /**< bitfield SCSVE  */
    using MCSVE  = regbits< type,  0,  1 >;  /**< bitfield MCSVE  */
  };

  /**
   * register CSV_STR
   */
  struct CSV_STR
  : public reg< uint8_t, base_addr + 0x44, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x44, ro, 0x00 >;

    using SCMF  = regbits< type,  1,  1 >;  /**< bitfield SCMF  */
    using MCMF  = regbits< type,  0,  1 >;  /**< bitfield MCMF  */
  };

  /**
   * register FCSWH_CTL
   */
  struct FCSWH_CTL
  : public reg< uint16_t, base_addr + 0x48, rw, 0xFFFF >
  {
  };

  /**
   * register FCSWL_CTL
   */
  struct FCSWL_CTL
  : public reg< uint16_t, base_addr + 0x4c, rw, 0x0000 >
  {
  };

  /**
   * register FCSWD_CTL
   */
  struct FCSWD_CTL
  : public reg< uint16_t, base_addr + 0x50, ro, 0x0000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_CRG_HPP_INCLUDED
