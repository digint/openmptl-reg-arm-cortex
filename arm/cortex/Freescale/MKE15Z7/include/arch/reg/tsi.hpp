/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKE15Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE15Z7
//  series: Kinetis_E
//  version: 1.6
//  description: MKE15Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TSI_HPP_INCLUDED
#define ARCH_REG_TSI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Touch sense input
 */
struct TSI
{
  static constexpr reg_addr_t base_addr = 0x40045000;

  /**
   * TSI General Control and Status Register
   */
  struct GENCS
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using EOSDMEO       = regbits< type,  0,  1 >;  /**< End-of-Scan DMA Transfer Request Enable Only     */
    using EOSF          = regbits< type,  2,  1 >;  /**< End of Scan Flag                                 */
    using SCNIP         = regbits< type,  3,  1 >;  /**< Scan In Progress Status                          */
    using STM           = regbits< type,  4,  1 >;  /**< Scan Trigger Mode                                */
    using STPE          = regbits< type,  5,  1 >;  /**< TSI STOP Enable                                  */
    using TSIIEN        = regbits< type,  6,  1 >;  /**< Touch Sensing Input Interrupt Enable             */
    using TSIEN         = regbits< type,  7,  1 >;  /**< Touch Sensing Input Module Enable                */
    using CLKSOC_SEL    = regbits< type, 11,  1 >;  /**< CLKSOC_SEL                                       */
    using RUN_CTRL      = regbits< type, 12,  1 >;  /**< RUN_CTRL                                         */
    using TSI_ANA_TEST  = regbits< type, 13,  3 >;  /**< TSI_ANA_TEST                                     */
    using DVOLT         = regbits< type, 19,  2 >;  /**< DVOLT                                            */
    using ESOR          = regbits< type, 28,  1 >;  /**< End-of-scan or Out-of-Range Interrupt Selection  */
    using OUTRGF        = regbits< type, 31,  1 >;  /**< Out of Range Flag.                               */
  };

  /**
   * TSI DATA Register
   */
  struct DATA
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using TSICNT  = regbits< type,  0, 16 >;  /**< TSI Conversion Counter Value  */
    using SWTS    = regbits< type, 22,  1 >;  /**< Software Trigger Start        */
    using DMAEN   = regbits< type, 23,  1 >;  /**< DMA Transfer Enabled          */
    using TSICH   = regbits< type, 27,  5 >;  /**< TSICH                         */
  };

  /**
   * TSI Threshold Register
   */
  struct TSHD
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using THRESL  = regbits< type,  0, 16 >;  /**< TSI Wakeup Channel Low-threshold   */
    using THRESH  = regbits< type, 16, 16 >;  /**< TSI Wakeup Channel High-threshold  */
  };

  /**
   * TSI MODE Register
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0xc, rw, 0x3C0060 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x3C0060 >;

    using S_NOISE     = regbits< type,  0,  1 >;  /**< S_NOISE                 */
    // fixme: Field name equals parent register name: MODE
    using MODE_       = regbits< type,  1,  1 >;  /**< MODE                    */
    using SETCLK      = regbits< type,  5,  2 >;  /**< SETCLK                  */
    using S_XCH       = regbits< type, 12,  3 >;  /**< S_XCH                   */
    using S_XIN       = regbits< type, 18,  1 >;  /**< S_XIN                   */
    using S_CTRIM     = regbits< type, 19,  3 >;  /**< Capacitor trim setting  */
    using S_SEN       = regbits< type, 22,  1 >;  /**< S_SEN                   */
    using S_W_SHIELD  = regbits< type, 23,  1 >;  /**< S_W_SHIELD              */
    using S_XDN       = regbits< type, 28,  3 >;  /**< S_XDN                   */
  };

  /**
   * TSI MUTUAL-CAP Register 0
   */
  struct MUL0
  : public reg< uint32_t, base_addr + 0x10, rw, 0x60006300 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x60006300 >;

    using M_SEL_RX       = regbits< type,  0,  3 >;  /**< M_SEL_RX       */
    using M_SEL_TX       = regbits< type,  4,  3 >;  /**< M_SEL_TX       */
    using M_SEN_RES      = regbits< type,  8,  4 >;  /**< M_SEN_RES      */
    using M_PRE_RES      = regbits< type, 13,  3 >;  /**< M_PRE_RES      */
    using M_PRE_CURRENT  = regbits< type, 29,  3 >;  /**< M_PRE_CURRENT  */
  };

  /**
   * TSI MUTUAL-CAP Register 1
   */
  struct MUL1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x5007E >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x5007E >;

    using M_NMIR_CTRL    = regbits< type,  0,  1 >;  /**< M_NMIR_CTRL    */
    using M_NMIRROR      = regbits< type,  1,  2 >;  /**< M_NMIRROR      */
    using M_PMIRRORR     = regbits< type,  3,  2 >;  /**< M_PMIRRORR     */
    using M_PMIRRORL     = regbits< type,  5,  3 >;  /**< M_PMIRRORL     */
    using M_VPRE_CHOOSE  = regbits< type, 16,  1 >;  /**< M_VPRE_CHOOSE  */
    using M_MODE         = regbits< type, 18,  1 >;  /**< M_MODE         */
    using M_SEN_BOOST    = regbits< type, 19,  5 >;  /**< M_SEN_BOOST    */
  };

  /**
   * TSI SINC filter Register
   */
  struct SINC
  : public reg< uint32_t, base_addr + 0x18, rw, 0x70001 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x70001 >;

    using SSC_CONTROL_OUT     = regbits< type,  0,  1 >;  /**< SSC_CONTROL_OUT     */
    using SINC_VALID          = regbits< type,  1,  1 >;  /**< SINC_VALID          */
    using SINC_OVERFLOW_FLAG  = regbits< type,  2,  1 >;  /**< SINC_OVERFLOW_FLAG  */
    using SWITCH_ENABLE       = regbits< type,  3,  1 >;  /**< SWITCH_ENABLE       */
    using DECIMATION          = regbits< type, 16,  5 >;  /**< DECIMATION          */
    using ORDER               = regbits< type, 21,  1 >;  /**< ORDER               */
    using CUTOFF              = regbits< type, 24,  4 >;  /**< CUTOFF              */
  };

  /**
   * TSI SSC Register 0
   */
  struct SSC0
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x60320000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x60320000 >;

    using SSC_PRESCALE_NUM     = regbits< type,  0,  8 >;  /**< SSC_PRESCALE_NUM     */
    using BASE_NOCHARGE_NUM    = regbits< type, 16,  4 >;  /**< BASE_NOCHARGE_NUM    */
    using CHARGE_NUM           = regbits< type, 20,  4 >;  /**< CHARGE_NUM           */
    using SSC_CONTROL_REVERSE  = regbits< type, 24,  1 >;  /**< SSC_CONTROL_REVERSE  */
    using SSC_MODE             = regbits< type, 25,  2 >;  /**< SSC_MODE             */
    using PRBS_OUTSEL          = regbits< type, 28,  4 >;  /**< PRBS_OUTSEL          */
  };

  /**
   * TSI SSC Register 0
   */
  struct SSC1
  : public reg< uint32_t, base_addr + 0x20, rw, 0x600040 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x600040 >;

    using PRBS_SEED_LO    = regbits< type,  0,  8 >;  /**< PRBS_SEED_LO    */
    using PRBS_SEED_HI    = regbits< type,  8,  8 >;  /**< PRBS_SEED_HI    */
    using PRBS_WEIGHT_LO  = regbits< type, 16,  8 >;  /**< PRBS_WEIGHT_LO  */
    using PRBS_WEIGHT_HI  = regbits< type, 24,  8 >;  /**< PRBS_WEIGHT_HI  */
  };

  /**
   * TSI SSC Register 2
   */
  struct SSC2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x10080101 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x10080101 >;

    using MOVE_REPEAT_NUM    = regbits< type,  0,  5 >;  /**< MOVE_REPEAT_NUM    */
    using MOVE_STEPS_NUM     = regbits< type,  8,  3 >;  /**< MOVE_STEPS_NUM     */
    using MOVE_NOCHARGE_MAX  = regbits< type, 16,  6 >;  /**< MOVE_NOCHARGE_MAX  */
    using MOVE_NOCHARGE_MIN  = regbits< type, 28,  4 >;  /**< MOVE_NOCHARGE_MIN  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TSI_HPP_INCLUDED
