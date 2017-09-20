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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C1237D5PM.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C1237D5PM
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UDMA_HPP_INCLUDED
#define ARCH_REG_UDMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for UDMA peripheral
 */
struct UDMA
{
  static constexpr reg_addr_t base_addr = 0x400ff000;

  /**
   * DMA Status
   */
  struct STAT
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_STAT_MASTEN    = regbits< type,  0,  1 >;  /**< Master Enable Status             */
    using UDMA_STAT_STATE     = regbits< type,  4,  4 >;  /**< Control State Machine Status     */
    using UDMA_STAT_DMACHANS  = regbits< type, 16,  5 >;  /**< Available uDMA Channels Minus 1  */
  };

  /**
   * DMA Configuration
   */
  struct CFG
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using UDMA_CFG_MASTEN  = regbits< type,  0,  1 >;  /**< Controller Master Enable  */
  };

  /**
   * DMA Channel Control Base Pointer
   */
  struct CTLBASE
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_CTLBASE_ADDR  = regbits< type, 10, 22 >;  /**< Channel Control Base Address  */
  };

  /**
   * DMA Alternate Channel Control Base Pointer
   */
  struct ALTBASE
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_ALTBASE_ADDR  = regbits< type,  0, 32 >;  /**< Alternate Channel Address Pointer  */
  };

  /**
   * DMA Channel Wait-on-Request Status
   */
  struct WAITSTAT
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_WAITSTAT_WAITREQ  = regbits< type,  0, 32 >;  /**< Channel [n] Wait Status  */
  };

  /**
   * DMA Channel Software Request
   */
  struct SWREQ
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using UDMA_SWREQ  = regbits< type,  0, 32 >;  /**< Channel [n] Software Request  */
  };

  /**
   * DMA Channel Useburst Set
   */
  struct USEBURSTSET
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_USEBURSTSET_SET  = regbits< type,  0, 32 >;  /**< Channel [n] Useburst Set  */
  };

  /**
   * DMA Channel Useburst Clear
   */
  struct USEBURSTCLR
  : public reg< uint32_t, base_addr + 0x0000001c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, wo, 0 >;

    using UDMA_USEBURSTCLR_CLR  = regbits< type,  0, 32 >;  /**< Channel [n] Useburst Clear  */
  };

  /**
   * DMA Channel Request Mask Set
   */
  struct REQMASKSET
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_REQMASKSET_SET  = regbits< type,  0, 32 >;  /**< Channel [n] Request Mask Set  */
  };

  /**
   * DMA Channel Request Mask Clear
   */
  struct REQMASKCLR
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using UDMA_REQMASKCLR_CLR  = regbits< type,  0, 32 >;  /**< Channel [n] Request Mask Clear  */
  };

  /**
   * DMA Channel Enable Set
   */
  struct ENASET
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_ENASET_SET  = regbits< type,  0, 32 >;  /**< Channel [n] Enable Set  */
  };

  /**
   * DMA Channel Enable Clear
   */
  struct ENACLR
  : public reg< uint32_t, base_addr + 0x0000002c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, wo, 0 >;

    using UDMA_ENACLR_CLR  = regbits< type,  0, 32 >;  /**< Clear Channel [n] Enable Clear  */
  };

  /**
   * DMA Channel Primary Alternate Set
   */
  struct ALTSET
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_ALTSET_SET  = regbits< type,  0, 32 >;  /**< Channel [n] Alternate Set  */
  };

  /**
   * DMA Channel Primary Alternate Clear
   */
  struct ALTCLR
  : public reg< uint32_t, base_addr + 0x00000034, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, wo, 0 >;

    using UDMA_ALTCLR_CLR  = regbits< type,  0, 32 >;  /**< Channel [n] Alternate Clear  */
  };

  /**
   * DMA Channel Priority Set
   */
  struct PRIOSET
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_PRIOSET_SET  = regbits< type,  0, 32 >;  /**< Channel [n] Priority Set  */
  };

  /**
   * DMA Channel Priority Clear
   */
  struct PRIOCLR
  : public reg< uint32_t, base_addr + 0x0000003c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, wo, 0 >;

    using UDMA_PRIOCLR_CLR  = regbits< type,  0, 32 >;  /**< Channel [n] Priority Clear  */
  };

  /**
   * DMA Bus Error Clear
   */
  struct ERRCLR
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_ERRCLR_ERRCLR  = regbits< type,  0,  1 >;  /**< uDMA Bus Error Status  */
  };

  /**
   * DMA Channel Assignment
   */
  struct CHASGN
  : public reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_CHASGN  = regbits< type,  0, 32 >;  /**< Channel [n] Assignment Select  */
  };

  /**
   * DMA Channel Interrupt Status
   */
  struct CHIS
  : public reg< uint32_t, base_addr + 0x00000504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_CHIS  = regbits< type,  0, 32 >;  /**< Channel [n] Interrupt Status  */
  };

  /**
   * DMA Channel Map Select 0
   */
  struct CHMAP0
  : public reg< uint32_t, base_addr + 0x00000510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_CHMAP0_CH0SEL  = regbits< type,  0,  4 >;  /**< uDMA Channel 0 Source Select  */
    using UDMA_CHMAP0_CH1SEL  = regbits< type,  4,  4 >;  /**< uDMA Channel 1 Source Select  */
    using UDMA_CHMAP0_CH2SEL  = regbits< type,  8,  4 >;  /**< uDMA Channel 2 Source Select  */
    using UDMA_CHMAP0_CH3SEL  = regbits< type, 12,  4 >;  /**< uDMA Channel 3 Source Select  */
    using UDMA_CHMAP0_CH4SEL  = regbits< type, 16,  4 >;  /**< uDMA Channel 4 Source Select  */
    using UDMA_CHMAP0_CH5SEL  = regbits< type, 20,  4 >;  /**< uDMA Channel 5 Source Select  */
    using UDMA_CHMAP0_CH6SEL  = regbits< type, 24,  4 >;  /**< uDMA Channel 6 Source Select  */
    using UDMA_CHMAP0_CH7SEL  = regbits< type, 28,  4 >;  /**< uDMA Channel 7 Source Select  */
  };

  /**
   * DMA Channel Map Select 1
   */
  struct CHMAP1
  : public reg< uint32_t, base_addr + 0x00000514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_CHMAP1_CH8SEL   = regbits< type,  0,  4 >;  /**< uDMA Channel 8 Source Select   */
    using UDMA_CHMAP1_CH9SEL   = regbits< type,  4,  4 >;  /**< uDMA Channel 9 Source Select   */
    using UDMA_CHMAP1_CH10SEL  = regbits< type,  8,  4 >;  /**< uDMA Channel 10 Source Select  */
    using UDMA_CHMAP1_CH11SEL  = regbits< type, 12,  4 >;  /**< uDMA Channel 11 Source Select  */
    using UDMA_CHMAP1_CH12SEL  = regbits< type, 16,  4 >;  /**< uDMA Channel 12 Source Select  */
    using UDMA_CHMAP1_CH13SEL  = regbits< type, 20,  4 >;  /**< uDMA Channel 13 Source Select  */
    using UDMA_CHMAP1_CH14SEL  = regbits< type, 24,  4 >;  /**< uDMA Channel 14 Source Select  */
    using UDMA_CHMAP1_CH15SEL  = regbits< type, 28,  4 >;  /**< uDMA Channel 15 Source Select  */
  };

  /**
   * DMA Channel Map Select 2
   */
  struct CHMAP2
  : public reg< uint32_t, base_addr + 0x00000518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000518, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_CHMAP2_CH16SEL  = regbits< type,  0,  4 >;  /**< uDMA Channel 16 Source Select  */
    using UDMA_CHMAP2_CH17SEL  = regbits< type,  4,  4 >;  /**< uDMA Channel 17 Source Select  */
    using UDMA_CHMAP2_CH18SEL  = regbits< type,  8,  4 >;  /**< uDMA Channel 18 Source Select  */
    using UDMA_CHMAP2_CH19SEL  = regbits< type, 12,  4 >;  /**< uDMA Channel 19 Source Select  */
    using UDMA_CHMAP2_CH20SEL  = regbits< type, 16,  4 >;  /**< uDMA Channel 20 Source Select  */
    using UDMA_CHMAP2_CH21SEL  = regbits< type, 20,  4 >;  /**< uDMA Channel 21 Source Select  */
    using UDMA_CHMAP2_CH22SEL  = regbits< type, 24,  4 >;  /**< uDMA Channel 22 Source Select  */
    using UDMA_CHMAP2_CH23SEL  = regbits< type, 28,  4 >;  /**< uDMA Channel 23 Source Select  */
  };

  /**
   * DMA Channel Map Select 3
   */
  struct CHMAP3
  : public reg< uint32_t, base_addr + 0x0000051c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000051c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using UDMA_CHMAP3_CH24SEL  = regbits< type,  0,  4 >;  /**< uDMA Channel 24 Source Select  */
    using UDMA_CHMAP3_CH25SEL  = regbits< type,  4,  4 >;  /**< uDMA Channel 25 Source Select  */
    using UDMA_CHMAP3_CH26SEL  = regbits< type,  8,  4 >;  /**< uDMA Channel 26 Source Select  */
    using UDMA_CHMAP3_CH27SEL  = regbits< type, 12,  4 >;  /**< uDMA Channel 27 Source Select  */
    using UDMA_CHMAP3_CH28SEL  = regbits< type, 16,  4 >;  /**< uDMA Channel 28 Source Select  */
    using UDMA_CHMAP3_CH29SEL  = regbits< type, 20,  4 >;  /**< uDMA Channel 29 Source Select  */
    using UDMA_CHMAP3_CH30SEL  = regbits< type, 24,  4 >;  /**< uDMA Channel 30 Source Select  */
    using UDMA_CHMAP3_CH31SEL  = regbits< type, 28,  4 >;  /**< uDMA Channel 31 Source Select  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UDMA_HPP_INCLUDED
