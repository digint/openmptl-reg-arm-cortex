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

#ifndef ARCH_REG_MCTM_HPP_INCLUDED
#define ARCH_REG_MCTM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * MCTM
 */
struct MCTM
{
  static constexpr reg_addr_t base_addr = 0x4002c000;

  /**
   * MCTM_CNTCFR
   */
  struct MCTM_CNTCFR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UEV1DIS   = regbits< type,  0,  1 >;  /**< UEV1DIS    */
    using UGDIS     = regbits< type,  1,  1 >;  /**< UGDIS      */
    using CKDIV     = regbits< type,  8,  2 >;  /**< CKDIV      */
    using CMSEL     = regbits< type, 16,  2 >;  /**< CMSEL      */
    using DIR       = regbits< type, 24,  1 >;  /**< DIR        */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };

  /**
   * MCTM_MDCFR
   */
  struct MCTM_MDCFR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TSE       = regbits< type,  0,  1 >;  /**< TSE        */
    using SMSEL     = regbits< type,  8,  3 >;  /**< SMSEL      */
    using MMSEL     = regbits< type, 16,  3 >;  /**< MMSEL      */
    using SPMSET    = regbits< type, 24,  1 >;  /**< SPMSET     */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };

  /**
   * MCTM_TRCFR
   */
  struct MCTM_TRCFR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TRSEL     = regbits< type,  0,  4 >;  /**< TRSEL      */
    using ETF       = regbits< type,  8,  4 >;  /**< ETF        */
    using ETIPSC    = regbits< type, 12,  2 >;  /**< ETIPSC     */
    using ETIPOL    = regbits< type, 16,  1 >;  /**< ETIPOL     */
    using ECME      = regbits< type, 24,  1 >;  /**< ECME       */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CTR
   */
  struct MCTM_CTR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TME       = regbits< type,  0,  1 >;  /**< TME        */
    using CRBE      = regbits< type,  1,  1 >;  /**< CRBE       */
    using COMPRE    = regbits< type,  8,  1 >;  /**< COMPRE     */
    using COMUS     = regbits< type,  9,  1 >;  /**< COMUS      */
    using CHCCDS    = regbits< type, 16,  1 >;  /**< CHCCDS     */
    using RESERVED  = regbits< type, 17, 15 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH0ICFR
   */
  struct MCTM_CH0ICFR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TI0F    = regbits< type,  0,  4 >;  /**< TI0F    */
    using CH0CCS  = regbits< type, 16,  2 >;  /**< CH0CCS  */
    using CH0PSC  = regbits< type, 18,  2 >;  /**< CH0PSC  */
    using TI0SRC  = regbits< type, 31,  1 >;  /**< TI0SRC  */
  };

  /**
   * MCTM_CH1ICFR
   */
  struct MCTM_CH1ICFR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TI1F      = regbits< type,  0,  4 >;  /**< TI1F       */
    using CH1CCS    = regbits< type, 16,  2 >;  /**< CH1CCS     */
    using CH1PSC    = regbits< type, 18,  2 >;  /**< CH1PSC     */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH2ICFR
   */
  struct MCTM_CH2ICFR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TI2F      = regbits< type,  0,  4 >;  /**< TI2F       */
    using CH2CCS    = regbits< type, 16,  2 >;  /**< CH2CCS     */
    using CH2PSC    = regbits< type, 18,  2 >;  /**< CH2PSC     */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH3ICFR
   */
  struct MCTM_CH3ICFR
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TI3F      = regbits< type,  0,  4 >;  /**< TI3F       */
    using CH3CCS    = regbits< type, 16,  2 >;  /**< CH3CCS     */
    using CH3PSC    = regbits< type, 18,  2 >;  /**< CH3PSC     */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH0OCFR
   */
  struct MCTM_CH0OCFR
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0OM     = regbits< type,  0,  3 >;  /**< CH0OM      */
    using REF0CE    = regbits< type,  3,  1 >;  /**< REF0CE     */
    using CH0PRE    = regbits< type,  4,  1 >;  /**< CH0PRE     */
    using CH0IMAE   = regbits< type,  5,  1 >;  /**< CH0IMAE    */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH1OCFR
   */
  struct MCTM_CH1OCFR
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH1OM     = regbits< type,  0,  3 >;  /**< CH1OM      */
    using REF1CE    = regbits< type,  3,  1 >;  /**< REF1CE     */
    using CH1PRE    = regbits< type,  4,  1 >;  /**< CH1PRE     */
    using CH1IMAE   = regbits< type,  5,  1 >;  /**< CH1IMAE    */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH2OCFR
   */
  struct MCTM_CH2OCFR
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH2OM     = regbits< type,  0,  3 >;  /**< CH2OM      */
    using REF2CE    = regbits< type,  3,  1 >;  /**< REF2CE     */
    using CH2PRE    = regbits< type,  4,  1 >;  /**< CH2PRE     */
    using CH2IMAE   = regbits< type,  5,  1 >;  /**< CH2IMAE    */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH3OCFR
   */
  struct MCTM_CH3OCFR
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH3OM     = regbits< type,  0,  3 >;  /**< CH3OM      */
    using REF3CE    = regbits< type,  3,  1 >;  /**< REF3CE     */
    using CH3PRE    = regbits< type,  4,  1 >;  /**< CH3PRE     */
    using CH3IMAE   = regbits< type,  5,  1 >;  /**< CH3IMAE    */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CHCTR
   */
  struct MCTM_CHCTR
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0E      = regbits< type,  0,  1 >;  /**< CH0E       */
    using CH0NE     = regbits< type,  1,  1 >;  /**< CH0NE      */
    using CH1E      = regbits< type,  2,  1 >;  /**< CH1E       */
    using CH1NE     = regbits< type,  3,  1 >;  /**< CH1NE      */
    using CH2E      = regbits< type,  4,  1 >;  /**< CH2E       */
    using CH2NE     = regbits< type,  5,  1 >;  /**< CH2NE      */
    using CH3E      = regbits< type,  6,  1 >;  /**< CH3E       */
    using RESERVED  = regbits< type,  7, 25 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CHPOLR
   */
  struct MCTM_CHPOLR
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0P      = regbits< type,  0,  1 >;  /**< CH0P       */
    using CH0NP     = regbits< type,  1,  1 >;  /**< CH0NP      */
    using CH1P      = regbits< type,  2,  1 >;  /**< CH1P       */
    using CH1NP     = regbits< type,  3,  1 >;  /**< CH1NP      */
    using CH2P      = regbits< type,  4,  1 >;  /**< CH2P       */
    using CH2NP     = regbits< type,  5,  1 >;  /**< CH2NP      */
    using CH3P      = regbits< type,  6,  1 >;  /**< CH3P       */
    using RESERVED  = regbits< type,  7, 25 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CHBRKCFR
   */
  struct MCTM_CHBRKCFR
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0OIS    = regbits< type,  0,  1 >;  /**< CH0OIS     */
    using CH0OISN   = regbits< type,  1,  1 >;  /**< CH0OISN    */
    using CH1OIS    = regbits< type,  2,  1 >;  /**< CH1OIS     */
    using CH1OISN   = regbits< type,  3,  1 >;  /**< CH1OISN    */
    using CH2OIS    = regbits< type,  4,  1 >;  /**< CH2OIS     */
    using CH2OISN   = regbits< type,  5,  1 >;  /**< CH2OISN    */
    using CH3OIS    = regbits< type,  6,  1 >;  /**< CH3OIS     */
    using RESERVED  = regbits< type,  7, 25 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CHBRKCTR
   */
  struct MCTM_CHBRKCTR
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BKE     = regbits< type,  0,  1 >;  /**< BKE     */
    using BKP     = regbits< type,  1,  1 >;  /**< BKP     */
    using CHMOE   = regbits< type,  4,  1 >;  /**< CHMOE   */
    using CHAOE   = regbits< type,  5,  1 >;  /**< CHAOE   */
    using BKF     = regbits< type,  8,  4 >;  /**< BKF     */
    using LOCKLV  = regbits< type, 16,  2 >;  /**< LOCKLV  */
    using CHOSSI  = regbits< type, 20,  1 >;  /**< CHOSSI  */
    using CHOSSR  = regbits< type, 21,  1 >;  /**< CHOSSR  */
    using CHDTG   = regbits< type, 24,  8 >;  /**< CHDTG   */
  };

  /**
   * MCTM_DICTR
   */
  struct MCTM_DICTR
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0CCIE   = regbits< type,  0,  1 >;  /**< CH0CCIE    */
    using CH1CCIE   = regbits< type,  1,  1 >;  /**< CH1CCIE    */
    using CH2CCIE   = regbits< type,  2,  1 >;  /**< CH2CCIE    */
    using CH3CCIE   = regbits< type,  3,  1 >;  /**< CH3CCIE    */
    using UEV1IE    = regbits< type,  8,  1 >;  /**< UEV1IE     */
    using UEV2IE    = regbits< type,  9,  1 >;  /**< UEV2IE     */
    using TEVIE     = regbits< type, 10,  1 >;  /**< TEVIE      */
    using BRKIE     = regbits< type, 11,  1 >;  /**< BRKIE      */
    using CH0CCDE   = regbits< type, 16,  1 >;  /**< CH0CCDE    */
    using CH1CCDE   = regbits< type, 17,  1 >;  /**< CH1CCDE    */
    using CH2CCDE   = regbits< type, 18,  1 >;  /**< CH2CCDE    */
    using CH3CCDE   = regbits< type, 19,  1 >;  /**< CH3CCDE    */
    using UEV1DE    = regbits< type, 24,  1 >;  /**< UEV1DE     */
    using UEV2DE    = regbits< type, 25,  1 >;  /**< UEV2DE     */
    using TEVDE     = regbits< type, 26,  1 >;  /**< TEVDE      */
    using RESERVED  = regbits< type, 27,  5 >;  /**< Reserved.  */
  };

  /**
   * MCTM_EVGR
   */
  struct MCTM_EVGR
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0CCG    = regbits< type,  0,  1 >;  /**< CH0CCG     */
    using CH1CCG    = regbits< type,  1,  1 >;  /**< CH1CCG     */
    using CH2CCG    = regbits< type,  2,  1 >;  /**< CH2CCG     */
    using CH3CCG    = regbits< type,  3,  1 >;  /**< CH3CCG     */
    using UEV1G     = regbits< type,  8,  1 >;  /**< UEV1G      */
    using UEV2G     = regbits< type,  9,  1 >;  /**< UEV2G      */
    using TEVG      = regbits< type, 10,  1 >;  /**< TEVG       */
    using BRKG      = regbits< type, 11,  1 >;  /**< BRKG       */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * MCTM_INTSR
   */
  struct MCTM_INTSR
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0CCIF   = regbits< type,  0,  1 >;  /**< CH0CCIF    */
    using CH1CCIF   = regbits< type,  1,  1 >;  /**< CH1CCIF    */
    using CH2CCIF   = regbits< type,  2,  1 >;  /**< CH2CCIF    */
    using CH3CCIF   = regbits< type,  3,  1 >;  /**< CH3CCIF    */
    using CH0OCF    = regbits< type,  4,  1 >;  /**< CH0OCF     */
    using CH1OCF    = regbits< type,  5,  1 >;  /**< CH1OCF     */
    using CH2OCF    = regbits< type,  6,  1 >;  /**< CH2OCF     */
    using CH3OCF    = regbits< type,  7,  1 >;  /**< CH3OCF     */
    using UEV1IF    = regbits< type,  8,  1 >;  /**< UEV1IF     */
    using UEV2IF    = regbits< type,  9,  1 >;  /**< UEV2IF     */
    using TEVIF     = regbits< type, 10,  1 >;  /**< TEVIF      */
    using BRKIF     = regbits< type, 11,  1 >;  /**< BRKIF      */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CNTR
   */
  struct MCTM_CNTR
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CNTV      = regbits< type,  0, 16 >;  /**< CNTV       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * MCTM_PSCR
   */
  struct MCTM_PSCR
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PSCV      = regbits< type,  0, 16 >;  /**< PSCV       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CRR
   */
  struct MCTM_CRR
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CRV       = regbits< type,  0, 16 >;  /**< CRV        */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * MCTM_REPR
   */
  struct MCTM_REPR
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REPV      = regbits< type,  0,  8 >;  /**< REPV       */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH0CCR
   */
  struct MCTM_CH0CCR
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0CCV    = regbits< type,  0, 16 >;  /**< CH0CCV     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH1CCR
   */
  struct MCTM_CH1CCR
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH1CCV    = regbits< type,  0, 16 >;  /**< CH1CCV     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH2CCR
   */
  struct MCTM_CH2CCR
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH2CCV    = regbits< type,  0, 16 >;  /**< CH2CCV     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * MCTM_CH3CCR
   */
  struct MCTM_CH3CCR
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH3CCV    = regbits< type,  0, 16 >;  /**< CH3CCV     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCTM_HPP_INCLUDED
