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
//  Import from CMSIS-SVD: "STMicro/STM32F7x9.svd"
//
//  name: STM32F7x9
//  version: 1.0
//  description: STM32F7x9
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ETHERNET_DMA_HPP_INCLUDED
#define ARCH_REG_ETHERNET_DMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Ethernet: DMA controller operation
 */
struct Ethernet_DMA
{
  static constexpr reg_addr_t base_addr = 0x40029000;

  /**
   * Ethernet DMA bus mode register
   */
  struct DMABMR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00002101 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00002101 >;

    using SR    = regbits< type,  0,  1 >;  /**< no description available  */
    using DA    = regbits< type,  1,  1 >;  /**< no description available  */
    using DSL   = regbits< type,  2,  5 >;  /**< no description available  */
    using EDFE  = regbits< type,  7,  1 >;  /**< no description available  */
    using PBL   = regbits< type,  8,  6 >;  /**< no description available  */
    using RTPR  = regbits< type, 14,  2 >;  /**< no description available  */
    using FB    = regbits< type, 16,  1 >;  /**< no description available  */
    using RDP   = regbits< type, 17,  6 >;  /**< no description available  */
    using USP   = regbits< type, 23,  1 >;  /**< no description available  */
    using FPM   = regbits< type, 24,  1 >;  /**< no description available  */
    using AAB   = regbits< type, 25,  1 >;  /**< no description available  */
    using MB    = regbits< type, 26,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet DMA transmit poll demand register
   */
  struct DMATPDR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TPD  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * EHERNET DMA receive poll demand register
   */
  struct DMARPDR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using RPD  = regbits< type,  0, 32 >;  /**< RPD  */
  };

  /**
   * Ethernet DMA receive descriptor list address register
   */
  struct DMARDLAR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using SRL  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet DMA transmit descriptor list address register
   */
  struct DMATDLAR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using STL  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet DMA status register
   */
  struct DMASR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using TS    = regbits< type,  0,  1 >;  /**< no description available  */
    using TPSS  = regbits< type,  1,  1 >;  /**< no description available  */
    using TBUS  = regbits< type,  2,  1 >;  /**< no description available  */
    using TJTS  = regbits< type,  3,  1 >;  /**< no description available  */
    using ROS   = regbits< type,  4,  1 >;  /**< no description available  */
    using TUS   = regbits< type,  5,  1 >;  /**< no description available  */
    using RS    = regbits< type,  6,  1 >;  /**< no description available  */
    using RBUS  = regbits< type,  7,  1 >;  /**< no description available  */
    using RPSS  = regbits< type,  8,  1 >;  /**< no description available  */
    using PWTS  = regbits< type,  9,  1 >;  /**< no description available  */
    using ETS   = regbits< type, 10,  1 >;  /**< no description available  */
    using FBES  = regbits< type, 13,  1 >;  /**< no description available  */
    using ERS   = regbits< type, 14,  1 >;  /**< no description available  */
    using AIS   = regbits< type, 15,  1 >;  /**< no description available  */
    using NIS   = regbits< type, 16,  1 >;  /**< no description available  */
    using RPS   = regbits< type, 17,  3 >;  /**< no description available  */
    using TPS   = regbits< type, 20,  3 >;  /**< no description available  */
    using EBS   = regbits< type, 23,  3 >;  /**< no description available  */
    using MMCS  = regbits< type, 27,  1 >;  /**< no description available  */
    using PMTS  = regbits< type, 28,  1 >;  /**< no description available  */
    using TSTS  = regbits< type, 29,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet DMA operation mode register
   */
  struct DMAOMR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using SR      = regbits< type,  1,  1 >;  /**< SR      */
    using OSF     = regbits< type,  2,  1 >;  /**< OSF     */
    using RTC     = regbits< type,  3,  2 >;  /**< RTC     */
    using FUGF    = regbits< type,  6,  1 >;  /**< FUGF    */
    using FEF     = regbits< type,  7,  1 >;  /**< FEF     */
    using ST      = regbits< type, 13,  1 >;  /**< ST      */
    using TTC     = regbits< type, 14,  3 >;  /**< TTC     */
    using FTF     = regbits< type, 20,  1 >;  /**< FTF     */
    using TSF     = regbits< type, 21,  1 >;  /**< TSF     */
    using DFRF    = regbits< type, 24,  1 >;  /**< DFRF    */
    using RSF     = regbits< type, 25,  1 >;  /**< RSF     */
    using DTCEFD  = regbits< type, 26,  1 >;  /**< DTCEFD  */
  };

  /**
   * Ethernet DMA interrupt enable register
   */
  struct DMAIER
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using TIE    = regbits< type,  0,  1 >;  /**< no description available  */
    using TPSIE  = regbits< type,  1,  1 >;  /**< no description available  */
    using TBUIE  = regbits< type,  2,  1 >;  /**< no description available  */
    using TJTIE  = regbits< type,  3,  1 >;  /**< no description available  */
    using ROIE   = regbits< type,  4,  1 >;  /**< no description available  */
    using TUIE   = regbits< type,  5,  1 >;  /**< no description available  */
    using RIE    = regbits< type,  6,  1 >;  /**< no description available  */
    using RBUIE  = regbits< type,  7,  1 >;  /**< no description available  */
    using RPSIE  = regbits< type,  8,  1 >;  /**< no description available  */
    using RWTIE  = regbits< type,  9,  1 >;  /**< no description available  */
    using ETIE   = regbits< type, 10,  1 >;  /**< no description available  */
    using FBEIE  = regbits< type, 13,  1 >;  /**< no description available  */
    using ERIE   = regbits< type, 14,  1 >;  /**< no description available  */
    using AISE   = regbits< type, 15,  1 >;  /**< no description available  */
    using NISE   = regbits< type, 16,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet DMA missed frame and buffer overflow counter register
   */
  struct DMAMFBOCR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using MFC   = regbits< type,  0, 16 >;  /**< no description available  */
    using OMFC  = regbits< type, 16,  1 >;  /**< no description available  */
    using MFA   = regbits< type, 17, 11 >;  /**< no description available  */
    using OFOC  = regbits< type, 28,  1 >;  /**< no description available  */
  };

  /**
   * Ethernet DMA receive status watchdog timer register
   */
  struct DMARSWTR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using RSWTC  = regbits< type,  0,  8 >;  /**< RSWTC  */
  };

  /**
   * Ethernet DMA current host transmit descriptor register
   */
  struct DMACHTDR
  : public reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >;

    using HTDAP  = regbits< type,  0, 32 >;  /**< HTDAP  */
  };

  /**
   * Ethernet DMA current host receive descriptor register
   */
  struct DMACHRDR
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >;

    using HRDAP  = regbits< type,  0, 32 >;  /**< HRDAP  */
  };

  /**
   * Ethernet DMA current host transmit buffer address register
   */
  struct DMACHTBAR
  : public reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >;

    using HTBAP  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Ethernet DMA current host receive buffer address register
   */
  struct DMACHRBAR
  : public reg< uint32_t, base_addr + 0x54, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0x00000000 >;

    using HRBAP  = regbits< type,  0, 32 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ETHERNET_DMA_HPP_INCLUDED
