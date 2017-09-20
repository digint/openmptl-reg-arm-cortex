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
//  Import from CMSIS-SVD: "Holtek/ht32f275x.svd"
//
//  name: HT32F275x
//  version: 1.0
//  description: This is the description for the Holtek HT32F275x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_GPTM0_HPP_INCLUDED
#define ARCH_REG_GPTM0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * GPTM0
 */
struct GPTM0
{
  static constexpr reg_addr_t base_addr = 0x4006e000;

  /**
   * GPTM0_CNTCFR
   */
  struct GPTM0_CNTCFR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UEVDIS    = regbits< type,  0,  1 >;  /**< UEVDIS     */
    using UGDIS     = regbits< type,  1,  1 >;  /**< UGDIS      */
    using CKDIV     = regbits< type,  8,  2 >;  /**< CKDIV      */
    using CMSEL     = regbits< type, 16,  2 >;  /**< CMSEL      */
    using DIR       = regbits< type, 24,  1 >;  /**< DIR        */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_MDCFR
   */
  struct GPTM0_MDCFR
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
   * GPTM0_TRCFR
   */
  struct GPTM0_TRCFR
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
   * GPTM0_CTR
   */
  struct GPTM0_CTR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TME       = regbits< type,  0,  1 >;  /**< TME        */
    using CRBE      = regbits< type,  1,  1 >;  /**< CRBE       */
    using CHCCDS    = regbits< type, 16,  1 >;  /**< CHCCDS     */
    using RESERVED  = regbits< type, 17, 15 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CH0ICFR
   */
  struct GPTM0_CH0ICFR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TI0F    = regbits< type,  0,  4 >;  /**< TI0F    */
    using CH0CCS  = regbits< type, 16,  2 >;  /**< CH0CCS  */
    using CH0PSC  = regbits< type, 18,  2 >;  /**< CH0PSC  */
    using TI0SRC  = regbits< type, 31,  1 >;  /**< TI0SRC  */
  };

  /**
   * GPTM0_CH1ICFR
   */
  struct GPTM0_CH1ICFR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TI1F      = regbits< type,  0,  4 >;  /**< TI1F       */
    using CH1CCS    = regbits< type, 16,  2 >;  /**< CH1CCS     */
    using CH1PSC    = regbits< type, 18,  2 >;  /**< CH1PSC     */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CH2ICFR
   */
  struct GPTM0_CH2ICFR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TI2F      = regbits< type,  0,  4 >;  /**< TI2F       */
    using CH2CCS    = regbits< type, 16,  2 >;  /**< CH2CCS     */
    using CH2PSC    = regbits< type, 18,  2 >;  /**< CH2PSC     */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CH3ICFR
   */
  struct GPTM0_CH3ICFR
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TI3F      = regbits< type,  0,  4 >;  /**< TI3F       */
    using CH3CCS    = regbits< type, 16,  2 >;  /**< CH3CCS     */
    using CH3PSC    = regbits< type, 18,  2 >;  /**< CH3PSC     */
    using RESERVED  = regbits< type, 20, 12 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CH0OCFR
   */
  struct GPTM0_CH0OCFR
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
   * GPTM0_CH1OCFR
   */
  struct GPTM0_CH1OCFR
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
   * GPTM0_CH2OCFR
   */
  struct GPTM0_CH2OCFR
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
   * GPTM0_CH3OCFR
   */
  struct GPTM0_CH3OCFR
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
   * GPTM0_CHCTR
   */
  struct GPTM0_CHCTR
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0E      = regbits< type,  0,  1 >;  /**< CH0E       */
    using CH1E      = regbits< type,  2,  1 >;  /**< CH1E       */
    using CH2E      = regbits< type,  4,  1 >;  /**< CH2E       */
    using CH3E      = regbits< type,  6,  1 >;  /**< CH3E       */
    using RESERVED  = regbits< type,  7, 25 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CHPOLR
   */
  struct GPTM0_CHPOLR
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0P      = regbits< type,  0,  1 >;  /**< CH0P       */
    using CH1P      = regbits< type,  2,  1 >;  /**< CH1P       */
    using CH2P      = regbits< type,  4,  1 >;  /**< CH2P       */
    using CH3P      = regbits< type,  6,  1 >;  /**< CH3P       */
    using RESERVED  = regbits< type,  7, 25 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_DICTR
   */
  struct GPTM0_DICTR
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0CCIE   = regbits< type,  0,  1 >;  /**< CH0CCIE    */
    using CH1CCIE   = regbits< type,  1,  1 >;  /**< CH1CCIE    */
    using CH2CCIE   = regbits< type,  2,  1 >;  /**< CH2CCIE    */
    using CH3CCIE   = regbits< type,  3,  1 >;  /**< CH3CCIE    */
    using UEVIE     = regbits< type,  8,  1 >;  /**< UEVIE      */
    using TEVIE     = regbits< type, 10,  1 >;  /**< TEVIE      */
    using CH0CCDE   = regbits< type, 16,  1 >;  /**< CH0CCDE    */
    using CH1CCDE   = regbits< type, 17,  1 >;  /**< CH1CCDE    */
    using CH2CCDE   = regbits< type, 18,  1 >;  /**< CH2CCDE    */
    using CH3CCDE   = regbits< type, 19,  1 >;  /**< CH3CCDE    */
    using UEVDE     = regbits< type, 24,  1 >;  /**< UEVDE      */
    using TEVDE     = regbits< type, 26,  1 >;  /**< TEVDE      */
    using RESERVED  = regbits< type, 27,  5 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_EVGR
   */
  struct GPTM0_EVGR
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0CCG    = regbits< type,  0,  1 >;  /**< CH0CCG     */
    using CH1CCG    = regbits< type,  1,  1 >;  /**< CH1CCG     */
    using CH2CCG    = regbits< type,  2,  1 >;  /**< CH2CCG     */
    using CH3CCG    = regbits< type,  3,  1 >;  /**< CH3CCG     */
    using UEVG      = regbits< type,  8,  1 >;  /**< UEVG       */
    using TEVG      = regbits< type, 10,  1 >;  /**< TEVG       */
    using RESERVED  = regbits< type, 11, 21 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_INTSR
   */
  struct GPTM0_INTSR
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
    using UEVIF     = regbits< type,  8,  1 >;  /**< UEVIF      */
    using TEVIF     = regbits< type, 10,  1 >;  /**< TEVIF      */
    using RESERVED  = regbits< type, 11, 21 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CNTR
   */
  struct GPTM0_CNTR
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CNTV      = regbits< type,  0, 16 >;  /**< CNTV       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_PSCR
   */
  struct GPTM0_PSCR
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PSCV      = regbits< type,  0, 16 >;  /**< PSCV       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CRR
   */
  struct GPTM0_CRR
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CRV       = regbits< type,  0, 16 >;  /**< CRV        */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CH0CCR
   */
  struct GPTM0_CH0CCR
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH0CCV    = regbits< type,  0, 16 >;  /**< CH0CCV     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CH1CCR
   */
  struct GPTM0_CH1CCR
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH1CCV    = regbits< type,  0, 16 >;  /**< CH1CCV     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CH2CCR
   */
  struct GPTM0_CH2CCR
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH2CCV    = regbits< type,  0, 16 >;  /**< CH2CCV     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPTM0_CH3CCR
   */
  struct GPTM0_CH3CCR
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CH3CCV    = regbits< type,  0, 16 >;  /**< CH3CCV     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPTM0_HPP_INCLUDED
