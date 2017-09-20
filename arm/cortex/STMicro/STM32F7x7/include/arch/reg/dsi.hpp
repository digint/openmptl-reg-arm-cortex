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
//  Import from CMSIS-SVD: "STMicro/STM32F7x7.svd"
//
//  name: STM32F7x7
//  version: 1.0
//  description: STM32F7x7
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DSI_HPP_INCLUDED
#define ARCH_REG_DSI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * DSI Host
 */
struct DSI
{
  static constexpr reg_addr_t base_addr = 0x40016c00;

  /**
   * DSI Host Version Register
   */
  struct DSI_VR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x3133302A >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x3133302A >;

    using VERSION  = regbits< type,  0, 32 >;  /**< Version of the DSI Host  */
  };

  /**
   * DSI Host Control Register
   */
  struct DSI_CR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using EN  = regbits< type,  0,  1 >;  /**< Enable  */
  };

  /**
   * DSI HOST Clock Control Register
   */
  struct DSI_CCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using TXECKDIV  = regbits< type,  0,  8 >;  /**< TX Escape Clock Division  */
    using TOCKDIV   = regbits< type,  8,  8 >;  /**< Timeout Clock Division    */
  };

  /**
   * DSI Host LTDC VCID Register
   */
  struct DSI_LVCIDR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using VCID  = regbits< type,  0,  2 >;  /**< Virtual Channel ID  */
  };

  /**
   * DSI Host LTDC Color Coding Register
   */
  struct DSI_LCOLCR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using COLC  = regbits< type,  0,  4 >;  /**< Color Coding           */
    using LPE   = regbits< type,  8,  1 >;  /**< Loosely Packet Enable  */
  };

  /**
   * DSI Host LTDC Polarity Configuration Register
   */
  struct DSI_LPCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using DEP  = regbits< type,  0,  1 >;  /**< Data Enable Polarity  */
    using VSP  = regbits< type,  1,  1 >;  /**< VSYNC Polarity        */
    using HSP  = regbits< type,  2,  1 >;  /**< HSYNC Polarity        */
  };

  /**
   * DSI Host Low-Power mode Configuration Register
   */
  struct DSI_LPMCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using VLPSIZE  = regbits< type,  0,  8 >;  /**< VACT Largest Packet Size  */
    using LPSIZE   = regbits< type, 16,  8 >;  /**< Largest Packet Size       */
  };

  /**
   * DSI Host Protocol Configuration Register
   */
  struct DSI_PCR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using ETTXE   = regbits< type,  0,  1 >;  /**< EoTp Transmission Enable  */
    using ETRXE   = regbits< type,  1,  1 >;  /**< EoTp Reception Enable     */
    using BTAE    = regbits< type,  2,  1 >;  /**< Bus Turn Around Enable    */
    using ECCRXE  = regbits< type,  3,  1 >;  /**< ECC Reception Enable      */
    using CRCRXE  = regbits< type,  4,  1 >;  /**< CRC Reception Enable      */
  };

  /**
   * DSI Host Generic VCID Register
   */
  struct DSI_GVCIDR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using VCID  = regbits< type,  0,  2 >;  /**< Virtual Channel ID  */
  };

  /**
   * DSI Host mode Configuration Register
   */
  struct DSI_MCR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using CMDM  = regbits< type,  0,  1 >;  /**< Command mode  */
  };

  /**
   * DSI Host Video mode Configuration Register
   */
  struct DSI_VMCR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using VMT     = regbits< type,  0,  2 >;  /**< Video mode Type                           */
    using LPVSAE  = regbits< type,  8,  1 >;  /**< Low-Power Vertical Sync Active Enable     */
    using LPVBPE  = regbits< type,  9,  1 >;  /**< Low-power Vertical Back-Porch Enable      */
    using LPVFPE  = regbits< type, 10,  1 >;  /**< Low-power Vertical Front-porch Enable     */
    using LPVAE   = regbits< type, 11,  1 >;  /**< Low-Power Vertical Active Enable          */
    using LPHBPE  = regbits< type, 12,  1 >;  /**< Low-Power Horizontal Back-Porch Enable    */
    using LPHFPE  = regbits< type, 13,  1 >;  /**< Low-Power Horizontal Front-Porch Enable   */
    using FBTAAE  = regbits< type, 14,  1 >;  /**< Frame Bus-Turn-Around Acknowledge Enable  */
    using LPCE    = regbits< type, 15,  1 >;  /**< Low-Power Command Enable                  */
    using PGE     = regbits< type, 16,  1 >;  /**< Pattern Generator Enable                  */
    using PGM     = regbits< type, 20,  1 >;  /**< Pattern Generator mode                    */
    using PGO     = regbits< type, 24,  1 >;  /**< Pattern Generator Orientation             */
  };

  /**
   * DSI Host Video Packet Configuration Register
   */
  struct DSI_VPCR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using VPSIZE  = regbits< type,  0, 14 >;  /**< Video Packet Size  */
  };

  /**
   * DSI Host Video Chunks Configuration Register
   */
  struct DSI_VCCR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using NUMC  = regbits< type,  0, 13 >;  /**< Number of Chunks  */
  };

  /**
   * DSI Host Video Null Packet Configuration Register
   */
  struct DSI_VNPCR
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using NPSIZE  = regbits< type,  0, 13 >;  /**< Null Packet Size  */
  };

  /**
   * DSI Host Video HSA Configuration Register
   */
  struct DSI_VHSACR
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using HSA  = regbits< type,  0, 12 >;  /**< Horizontal Synchronism Active duration  */
  };

  /**
   * DSI Host Video HBP Configuration Register
   */
  struct DSI_VHBPCR
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using HBP  = regbits< type,  0, 12 >;  /**< Horizontal Back-Porch duration  */
  };

  /**
   * DSI Host Video Line Configuration Register
   */
  struct DSI_VLCR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using HLINE  = regbits< type,  0, 15 >;  /**< Horizontal Line duration  */
  };

  /**
   * DSI Host Video VSA Configuration Register
   */
  struct DSI_VVSACR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using VSA  = regbits< type,  0, 10 >;  /**< Vertical Synchronism Active duration  */
  };

  /**
   * DSI Host Video VBP Configuration Register
   */
  struct DSI_VVBPCR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using VBP  = regbits< type,  0, 10 >;  /**< Vertical Back-Porch duration  */
  };

  /**
   * DSI Host Video VFP Configuration Register
   */
  struct DSI_VVFPCR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using VFP  = regbits< type,  0, 10 >;  /**< Vertical Front-Porch duration  */
  };

  /**
   * DSI Host Video VA Configuration Register
   */
  struct DSI_VVACR
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using VA  = regbits< type,  0, 14 >;  /**< Vertical Active duration  */
  };

  /**
   * DSI Host LTDC Command Configuration Register
   */
  struct DSI_LCCR
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using CMDSIZE  = regbits< type,  0, 16 >;  /**< Command Size  */
  };

  /**
   * DSI Host Command mode Configuration Register
   */
  struct DSI_CMCR
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using TEARE   = regbits< type,  0,  1 >;  /**< Tearing Effect Acknowledge Request Enable         */
    using ARE     = regbits< type,  1,  1 >;  /**< Acknowledge Request Enable                        */
    using GSW0TX  = regbits< type,  8,  1 >;  /**< Generic Short Write Zero parameters Transmission  */
    using GSW1TX  = regbits< type,  9,  1 >;  /**< Generic Short Write One parameters Transmission   */
    using GSW2TX  = regbits< type, 10,  1 >;  /**< Generic Short Write Two parameters Transmission   */
    using GSR0TX  = regbits< type, 11,  1 >;  /**< Generic Short Read Zero parameters Transmission   */
    using GSR1TX  = regbits< type, 12,  1 >;  /**< Generic Short Read One parameters Transmission    */
    using GSR2TX  = regbits< type, 13,  1 >;  /**< Generic Short Read Two parameters Transmission    */
    using GLWTX   = regbits< type, 14,  1 >;  /**< Generic Long Write Transmission                   */
    using DSW0TX  = regbits< type, 16,  1 >;  /**< DCS Short Write Zero parameter Transmission       */
    using DSW1TX  = regbits< type, 17,  1 >;  /**< DCS Short Read One parameter Transmission         */
    using DSR0TX  = regbits< type, 18,  1 >;  /**< DCS Short Read Zero parameter Transmission        */
    using DLWTX   = regbits< type, 19,  1 >;  /**< DCS Long Write Transmission                       */
    using MRDPS   = regbits< type, 24,  1 >;  /**< Maximum Read Packet Size                          */
  };

  /**
   * DSI Host Generic Header Configuration Register
   */
  struct DSI_GHCR
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using DT     = regbits< type,  0,  6 >;  /**< Type           */
    using VCID   = regbits< type,  6,  2 >;  /**< Channel        */
    using WCLSB  = regbits< type,  8,  8 >;  /**< WordCount LSB  */
    using WCMSB  = regbits< type, 16,  8 >;  /**< WordCount MSB  */
  };

  /**
   * DSI Host Generic Payload Data Register
   */
  struct DSI_GPDR
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using DATA1  = regbits< type,  0,  8 >;  /**< Payload Byte 1  */
    using DATA2  = regbits< type,  8,  8 >;  /**< Payload Byte 2  */
    using DATA3  = regbits< type, 16,  8 >;  /**< Payload Byte 3  */
    using DATA4  = regbits< type, 24,  8 >;  /**< Payload Byte 4  */
  };

  /**
   * DSI Host Generic Packet Status Register
   */
  struct DSI_GPSR
  : public reg< uint32_t, base_addr + 0x64, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, ro, 0x00000000 >;

    using CMDFE  = regbits< type,  0,  1 >;  /**< Command FIFO Empty        */
    using CMDFF  = regbits< type,  1,  1 >;  /**< Command FIFO Full         */
    using PWRFE  = regbits< type,  2,  1 >;  /**< Payload Write FIFO Empty  */
    using PWRFF  = regbits< type,  3,  1 >;  /**< Payload Write FIFO Full   */
    using PRDFE  = regbits< type,  4,  1 >;  /**< Payload Read FIFO Empty   */
    using PRDFF  = regbits< type,  5,  1 >;  /**< Payload Read FIFO Full    */
    using RCB    = regbits< type,  6,  1 >;  /**< Read Command Busy         */
  };

  /**
   * DSI Host Timeout Counter Configuration Register 0
   */
  struct DSI_TCCR0
  : public reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >;

    using LPRX_TOCNT  = regbits< type,  0, 16 >;  /**< Low-power Reception Timeout Counter      */
    using HSTX_TOCNT  = regbits< type, 16, 16 >;  /**< High-Speed Transmission Timeout Counter  */
  };

  /**
   * DSI Host Timeout Counter Configuration Register 1
   */
  struct DSI_TCCR1
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >;

    using HSRD_TOCNT  = regbits< type,  0, 16 >;  /**< High-Speed Read Timeout Counter  */
  };

  /**
   * DSI Host Timeout Counter Configuration Register 2
   */
  struct DSI_TCCR2
  : public reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >;

    using LPRD_TOCNT  = regbits< type,  0, 16 >;  /**< Low-Power Read Timeout Counter  */
  };

  /**
   * DSI Host Timeout Counter Configuration Register 3
   */
  struct DSI_TCCR3
  : public reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >;

    using HSWR_TOCNT  = regbits< type,  0, 16 >;  /**< High-Speed Write Timeout Counter  */
    using PM          = regbits< type, 24,  1 >;  /**< Presp mode                        */
  };

  /**
   * DSI Host Timeout Counter Configuration Register 4
   */
  struct DSI_TCCR4
  : public reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >;

    using LSWR_TOCNT  = regbits< type,  0, 16 >;  /**< Low-Power Write Timeout Counter  */
  };

  /**
   * DSI Host Timeout Counter Configuration Register 5
   */
  struct DSI_TCCR5
  : public reg< uint32_t, base_addr + 0x7c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0x00000000 >;

    using BTA_TOCNT  = regbits< type,  0, 16 >;  /**< Bus-Turn-Around Timeout Counter  */
  };

  /**
   * DSI Host Clock Lane Configuration Register
   */
  struct DSI_CLCR
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using DPCC  = regbits< type,  0,  1 >;  /**< D-PHY Clock Control           */
    using ACR   = regbits< type,  1,  1 >;  /**< Automatic Clock lane Control  */
  };

  /**
   * DSI Host Clock Lane Timer Configuration Register
   */
  struct DSI_CLTCR
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >;

    using LP2HS_TIME  = regbits< type,  0, 10 >;  /**< Low-Power to High-Speed Time  */
    using HS2LP_TIME  = regbits< type, 16, 10 >;  /**< High-Speed to Low-Power Time  */
  };

  /**
   * DSI Host Data Lane Timer Configuration Register
   */
  struct DSI_DLTRC
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using MRD_TIME    = regbits< type,  0, 15 >;  /**< Maximum Read Time             */
    using LP2HS_TIME  = regbits< type, 16,  8 >;  /**< Low-Power To High-Speed Time  */
    using HS2LP_TIME  = regbits< type, 24,  8 >;  /**< High-Speed To Low-Power Time  */
  };

  /**
   * DSI Host PHY Control Register
   */
  struct DSI_PCTLR
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >;

    using DEN  = regbits< type,  1,  1 >;  /**< Digital Enable  */
    using CKE  = regbits< type,  2,  1 >;  /**< Clock Enable    */
  };

  /**
   * DSI Host PHY Configuration Register
   */
  struct DSI_PCONFR
  : public reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >;

    using NL       = regbits< type,  0,  2 >;  /**< Number of Lanes  */
    using SW_TIME  = regbits< type,  8,  8 >;  /**< Stop Wait Time   */
  };

  /**
   * DSI Host PHY ULPS Control Register
   */
  struct DSI_PUCR
  : public reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >;

    using URCL  = regbits< type,  0,  1 >;  /**< ULPS Request on Clock Lane  */
    using UECL  = regbits< type,  1,  1 >;  /**< ULPS Exit on Clock Lane     */
    using URDL  = regbits< type,  2,  1 >;  /**< ULPS Request on Data Lane   */
    using UEDL  = regbits< type,  3,  1 >;  /**< ULPS Exit on Data Lane      */
  };

  /**
   * DSI Host PHY TX Triggers Configuration Register
   */
  struct DSI_PTTCR
  : public reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >;

    using TX_TRIG  = regbits< type,  0,  4 >;  /**< Transmission Trigger  */
  };

  /**
   * DSI Host PHY Status Register
   */
  struct DSI_PSR
  : public reg< uint32_t, base_addr + 0x9c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, ro, 0x00000000 >;

    using PD    = regbits< type,  1,  1 >;  /**< PHY Direction               */
    using PSSC  = regbits< type,  2,  1 >;  /**< PHY Stop State Clock lane   */
    using UANC  = regbits< type,  3,  1 >;  /**< ULPS Active Not Clock lane  */
    using PSS0  = regbits< type,  4,  1 >;  /**< PHY Stop State lane 0       */
    using UAN0  = regbits< type,  5,  1 >;  /**< ULPS Active Not lane 1      */
    using RUE0  = regbits< type,  6,  1 >;  /**< RX ULPS Escape lane 0       */
    using PSS1  = regbits< type,  7,  1 >;  /**< PHY Stop State lane 1       */
    using UAN1  = regbits< type,  8,  1 >;  /**< ULPS Active Not lane 1      */
  };

  /**
   * DSI Host Interrupt & Status Register 0
   */
  struct DSI_ISR0
  : public reg< uint32_t, base_addr + 0xa0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, ro, 0x00000000 >;

    using AE0   = regbits< type,  0,  1 >;  /**< Acknowledge Error 0   */
    using AE1   = regbits< type,  1,  1 >;  /**< Acknowledge Error 1   */
    using AE2   = regbits< type,  2,  1 >;  /**< Acknowledge Error 2   */
    using AE3   = regbits< type,  3,  1 >;  /**< Acknowledge Error 3   */
    using AE4   = regbits< type,  4,  1 >;  /**< Acknowledge Error 4   */
    using AE5   = regbits< type,  5,  1 >;  /**< Acknowledge Error 5   */
    using AE6   = regbits< type,  6,  1 >;  /**< Acknowledge Error 6   */
    using AE7   = regbits< type,  7,  1 >;  /**< Acknowledge Error 7   */
    using AE8   = regbits< type,  8,  1 >;  /**< Acknowledge Error 8   */
    using AE9   = regbits< type,  9,  1 >;  /**< Acknowledge Error 9   */
    using AE10  = regbits< type, 10,  1 >;  /**< Acknowledge Error 10  */
    using AE11  = regbits< type, 11,  1 >;  /**< Acknowledge Error 11  */
    using AE12  = regbits< type, 12,  1 >;  /**< Acknowledge Error 12  */
    using AE13  = regbits< type, 13,  1 >;  /**< Acknowledge Error 13  */
    using AE14  = regbits< type, 14,  1 >;  /**< Acknowledge Error 14  */
    using AE15  = regbits< type, 15,  1 >;  /**< Acknowledge Error 15  */
    using PE0   = regbits< type, 16,  1 >;  /**< PHY Error 0           */
    using PE1   = regbits< type, 17,  1 >;  /**< PHY Error 1           */
    using PE2   = regbits< type, 18,  1 >;  /**< PHY Error 2           */
    using PE3   = regbits< type, 19,  1 >;  /**< PHY Error 3           */
    using PE4   = regbits< type, 20,  1 >;  /**< PHY Error 4           */
  };

  /**
   * DSI Host Interrupt & Status Register 1
   */
  struct DSI_ISR1
  : public reg< uint32_t, base_addr + 0xa4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, ro, 0x00000000 >;

    using TOHSTX  = regbits< type,  0,  1 >;  /**< Timeout High-Speed Transmission  */
    using TOLPRX  = regbits< type,  1,  1 >;  /**< Timeout Low-Power Reception      */
    using ECCSE   = regbits< type,  2,  1 >;  /**< ECC Single-bit Error             */
    using ECCME   = regbits< type,  3,  1 >;  /**< ECC Multi-bit Error              */
    using CRCE    = regbits< type,  4,  1 >;  /**< CRC Error                        */
    using PSE     = regbits< type,  5,  1 >;  /**< Packet Size Error                */
    using EOTPE   = regbits< type,  6,  1 >;  /**< EoTp Error                       */
    using LPWRE   = regbits< type,  7,  1 >;  /**< LTDC Payload Write Error         */
    using GCWRE   = regbits< type,  8,  1 >;  /**< Generic Command Write Error      */
    using GPWRE   = regbits< type,  9,  1 >;  /**< Generic Payload Write Error      */
    using GPTXE   = regbits< type, 10,  1 >;  /**< Generic Payload Transmit Error   */
    using GPRDE   = regbits< type, 11,  1 >;  /**< Generic Payload Read Error       */
    using GPRXE   = regbits< type, 12,  1 >;  /**< Generic Payload Receive Error    */
  };

  /**
   * DSI Host Interrupt Enable Register 0
   */
  struct DSI_IER0
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >;

    using AE0IE   = regbits< type,  0,  1 >;  /**< Acknowledge Error 0 Interrupt Enable   */
    using AE1IE   = regbits< type,  1,  1 >;  /**< Acknowledge Error 1 Interrupt Enable   */
    using AE2IE   = regbits< type,  2,  1 >;  /**< Acknowledge Error 2 Interrupt Enable   */
    using AE3IE   = regbits< type,  3,  1 >;  /**< Acknowledge Error 3 Interrupt Enable   */
    using AE4IE   = regbits< type,  4,  1 >;  /**< Acknowledge Error 4 Interrupt Enable   */
    using AE5IE   = regbits< type,  5,  1 >;  /**< Acknowledge Error 5 Interrupt Enable   */
    using AE6IE   = regbits< type,  6,  1 >;  /**< Acknowledge Error 6 Interrupt Enable   */
    using AE7IE   = regbits< type,  7,  1 >;  /**< Acknowledge Error 7 Interrupt Enable   */
    using AE8IE   = regbits< type,  8,  1 >;  /**< Acknowledge Error 8 Interrupt Enable   */
    using AE9IE   = regbits< type,  9,  1 >;  /**< Acknowledge Error 9 Interrupt Enable   */
    using AE10IE  = regbits< type, 10,  1 >;  /**< Acknowledge Error 10 Interrupt Enable  */
    using AE11IE  = regbits< type, 11,  1 >;  /**< Acknowledge Error 11 Interrupt Enable  */
    using AE12IE  = regbits< type, 12,  1 >;  /**< Acknowledge Error 12 Interrupt Enable  */
    using AE13IE  = regbits< type, 13,  1 >;  /**< Acknowledge Error 13 Interrupt Enable  */
    using AE14IE  = regbits< type, 14,  1 >;  /**< Acknowledge Error 14 Interrupt Enable  */
    using AE15IE  = regbits< type, 15,  1 >;  /**< Acknowledge Error 15 Interrupt Enable  */
    using PE0IE   = regbits< type, 16,  1 >;  /**< PHY Error 0 Interrupt Enable           */
    using PE1IE   = regbits< type, 17,  1 >;  /**< PHY Error 1 Interrupt Enable           */
    using PE2IE   = regbits< type, 18,  1 >;  /**< PHY Error 2 Interrupt Enable           */
    using PE3IE   = regbits< type, 19,  1 >;  /**< PHY Error 3 Interrupt Enable           */
    using PE4IE   = regbits< type, 20,  1 >;  /**< PHY Error 4 Interrupt Enable           */
  };

  /**
   * DSI Host Interrupt Enable Register 1
   */
  struct DSI_IER1
  : public reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >;

    using TOHSTXIE  = regbits< type,  0,  1 >;  /**< Timeout High-Speed Transmission Interrupt Enable  */
    using TOLPRXIE  = regbits< type,  1,  1 >;  /**< Timeout Low-Power Reception Interrupt Enable      */
    using ECCSEIE   = regbits< type,  2,  1 >;  /**< ECC Single-bit Error Interrupt Enable             */
    using ECCMEIE   = regbits< type,  3,  1 >;  /**< ECC Multi-bit Error Interrupt Enable              */
    using CRCEIE    = regbits< type,  4,  1 >;  /**< CRC Error Interrupt Enable                        */
    using PSEIE     = regbits< type,  5,  1 >;  /**< Packet Size Error Interrupt Enable                */
    using EOTPEIE   = regbits< type,  6,  1 >;  /**< EoTp Error Interrupt Enable                       */
    using LPWREIE   = regbits< type,  7,  1 >;  /**< LTDC Payload Write Error Interrupt Enable         */
    using GCWREIE   = regbits< type,  8,  1 >;  /**< Generic Command Write Error Interrupt Enable      */
    using GPWREIE   = regbits< type,  9,  1 >;  /**< Generic Payload Write Error Interrupt Enable      */
    using GPTXEIE   = regbits< type, 10,  1 >;  /**< Generic Payload Transmit Error Interrupt Enable   */
    using GPRDEIE   = regbits< type, 11,  1 >;  /**< Generic Payload Read Error Interrupt Enable       */
    using GPRXEIE   = regbits< type, 12,  1 >;  /**< Generic Payload Receive Error Interrupt Enable    */
  };

  /**
   * DSI Host Force Interrupt Register 0
   */
  struct DSI_FIR0
  : public reg< uint32_t, base_addr + 0xb0, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, wo, 0x00000000 >;

    using FAE0   = regbits< type,  0,  1 >;  /**< Force Acknowledge Error 0   */
    using FAE1   = regbits< type,  1,  1 >;  /**< Force Acknowledge Error 1   */
    using FAE2   = regbits< type,  2,  1 >;  /**< Force Acknowledge Error 2   */
    using FAE3   = regbits< type,  3,  1 >;  /**< Force Acknowledge Error 3   */
    using FAE4   = regbits< type,  4,  1 >;  /**< Force Acknowledge Error 4   */
    using FAE5   = regbits< type,  5,  1 >;  /**< Force Acknowledge Error 5   */
    using FAE6   = regbits< type,  6,  1 >;  /**< Force Acknowledge Error 6   */
    using FAE7   = regbits< type,  7,  1 >;  /**< Force Acknowledge Error 7   */
    using FAE8   = regbits< type,  8,  1 >;  /**< Force Acknowledge Error 8   */
    using FAE9   = regbits< type,  9,  1 >;  /**< Force Acknowledge Error 9   */
    using FAE10  = regbits< type, 10,  1 >;  /**< Force Acknowledge Error 10  */
    using FAE11  = regbits< type, 11,  1 >;  /**< Force Acknowledge Error 11  */
    using FAE12  = regbits< type, 12,  1 >;  /**< Force Acknowledge Error 12  */
    using FAE13  = regbits< type, 13,  1 >;  /**< Force Acknowledge Error 13  */
    using FAE14  = regbits< type, 14,  1 >;  /**< Force Acknowledge Error 14  */
    using FAE15  = regbits< type, 15,  1 >;  /**< Force Acknowledge Error 15  */
    using FPE0   = regbits< type, 16,  1 >;  /**< Force PHY Error 0           */
    using FPE1   = regbits< type, 17,  1 >;  /**< Force PHY Error 1           */
    using FPE2   = regbits< type, 18,  1 >;  /**< Force PHY Error 2           */
    using FPE3   = regbits< type, 19,  1 >;  /**< Force PHY Error 3           */
    using FPE4   = regbits< type, 20,  1 >;  /**< Force PHY Error 4           */
  };

  /**
   * DSI Host Force Interrupt Register 1
   */
  struct DSI_FIR1
  : public reg< uint32_t, base_addr + 0xb4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, wo, 0x00000000 >;

    using FTOHSTX  = regbits< type,  0,  1 >;  /**< Force Timeout High-Speed Transmission  */
    using FTOLPRX  = regbits< type,  1,  1 >;  /**< Force Timeout Low-Power Reception      */
    using FECCSE   = regbits< type,  2,  1 >;  /**< Force ECC Single-bit Error             */
    using FECCME   = regbits< type,  3,  1 >;  /**< Force ECC Multi-bit Error              */
    using FCRCE    = regbits< type,  4,  1 >;  /**< Force CRC Error                        */
    using FPSE     = regbits< type,  5,  1 >;  /**< Force Packet Size Error                */
    using FEOTPE   = regbits< type,  6,  1 >;  /**< Force EoTp Error                       */
    using FLPWRE   = regbits< type,  7,  1 >;  /**< Force LTDC Payload Write Error         */
    using FGCWRE   = regbits< type,  8,  1 >;  /**< Force Generic Command Write Error      */
    using FGPWRE   = regbits< type,  9,  1 >;  /**< Force Generic Payload Write Error      */
    using FGPTXE   = regbits< type, 10,  1 >;  /**< Force Generic Payload Transmit Error   */
    using FGPRDE   = regbits< type, 11,  1 >;  /**< Force Generic Payload Read Error       */
    using FGPRXE   = regbits< type, 12,  1 >;  /**< Force Generic Payload Receive Error    */
  };

  /**
   * DSI Host Video Shadow Control Register
   */
  struct DSI_VSCR
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >;

    using EN  = regbits< type,  0,  1 >;  /**< Enable           */
    using UR  = regbits< type,  8,  1 >;  /**< Update Register  */
  };

  /**
   * DSI Host LTDC Current VCID Register
   */
  struct DSI_LCVCIDR
  : public reg< uint32_t, base_addr + 0xbc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, ro, 0x00000000 >;

    using VCID  = regbits< type,  0,  2 >;  /**< Virtual Channel ID  */
  };

  /**
   * DSI Host LTDC Current Color Coding Register
   */
  struct DSI_LCCCR
  : public reg< uint32_t, base_addr + 0xc0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, ro, 0x00000000 >;

    using COLC  = regbits< type,  0,  4 >;  /**< Color Coding           */
    using LPE   = regbits< type,  8,  1 >;  /**< Loosely Packed Enable  */
  };

  /**
   * DSI Host Low-Power mode Current Configuration Register
   */
  struct DSI_LPMCCR
  : public reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >;

    using VLPSIZE  = regbits< type,  0,  8 >;  /**< VACT Largest Packet Size  */
    using LPSIZE   = regbits< type, 16,  8 >;  /**< Largest Packet Size       */
  };

  /**
   * DSI Host Video mode Current Configuration Register
   */
  struct DSI_VMCCR
  : public reg< uint32_t, base_addr + 0xc8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, ro, 0x00000000 >;

    using VMT     = regbits< type,  0,  2 >;  /**< Video mode Type                          */
    using LPVSAE  = regbits< type,  2,  1 >;  /**< Low-Power Vertical Sync time Enable      */
    using LPVBPE  = regbits< type,  3,  1 >;  /**< Low-power Vertical Back-Porch Enable     */
    using LPVFPE  = regbits< type,  4,  1 >;  /**< Low-power Vertical Front-Porch Enable    */
    using LPVAE   = regbits< type,  5,  1 >;  /**< Low-Power Vertical Active Enable         */
    using LPHBPE  = regbits< type,  6,  1 >;  /**< Low-power Horizontal Back-Porch Enable   */
    using LPHFE   = regbits< type,  7,  1 >;  /**< Low-Power Horizontal Front-Porch Enable  */
    using FBTAAE  = regbits< type,  8,  1 >;  /**< Frame BTA Acknowledge Enable             */
    using LPCE    = regbits< type,  9,  1 >;  /**< Low-Power Command Enable                 */
  };

  /**
   * DSI Host Video Packet Current Configuration Register
   */
  struct DSI_VPCCR
  : public reg< uint32_t, base_addr + 0xcc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, ro, 0x00000000 >;

    using VPSIZE  = regbits< type,  0, 14 >;  /**< Video Packet Size  */
  };

  /**
   * DSI Host Video Chunks Current Configuration Register
   */
  struct DSI_VCCCR
  : public reg< uint32_t, base_addr + 0xd0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, ro, 0x00000000 >;

    using NUMC  = regbits< type,  0, 13 >;  /**< Number of Chunks  */
  };

  /**
   * DSI Host Video Null Packet Current Configuration Register
   */
  struct DSI_VNPCCR
  : public reg< uint32_t, base_addr + 0xd4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd4, ro, 0x00000000 >;

    using NPSIZE  = regbits< type,  0, 13 >;  /**< Null Packet Size  */
  };

  /**
   * DSI Host Video HSA Current Configuration Register
   */
  struct DSI_VHSACCR
  : public reg< uint32_t, base_addr + 0xd8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, ro, 0x00000000 >;

    using HSA  = regbits< type,  0, 12 >;  /**< Horizontal Synchronism Active duration  */
  };

  /**
   * DSI Host Video HBP Current Configuration Register
   */
  struct DSI_VHBPCCR
  : public reg< uint32_t, base_addr + 0xdc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xdc, ro, 0x00000000 >;

    using HBP  = regbits< type,  0, 12 >;  /**< Horizontal Back-Porch duration  */
  };

  /**
   * DSI Host Video Line Current Configuration Register
   */
  struct DSI_VLCCR
  : public reg< uint32_t, base_addr + 0xe0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, ro, 0x00000000 >;

    using HLINE  = regbits< type,  0, 15 >;  /**< Horizontal Line duration  */
  };

  /**
   * DSI Host Video VSA Current Configuration Register
   */
  struct DSI_VVSACCR
  : public reg< uint32_t, base_addr + 0xe4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, ro, 0x00000000 >;

    using VSA  = regbits< type,  0, 10 >;  /**< Vertical Synchronism Active duration  */
  };

  /**
   * DSI Host Video VBP Current Configuration Register
   */
  struct DSI_VVBPCCR
  : public reg< uint32_t, base_addr + 0xe8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, ro, 0x00000000 >;

    using VBP  = regbits< type,  0, 10 >;  /**< Vertical Back-Porch duration  */
  };

  /**
   * DSI Host Video VFP Current Configuration Register
   */
  struct DSI_VVFPCCR
  : public reg< uint32_t, base_addr + 0xec, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xec, ro, 0x00000000 >;

    using VFP  = regbits< type,  0, 10 >;  /**< Vertical Front-Porch duration  */
  };

  /**
   * DSI Host Video VA Current Configuration Register
   */
  struct DSI_VVACCR
  : public reg< uint32_t, base_addr + 0xf0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, ro, 0x00000000 >;

    using VA  = regbits< type,  0, 14 >;  /**< Vertical Active duration  */
  };

  /**
   * DSI Wrapper Configuration Register
   */
  struct DSI_WCFGR
  : public reg< uint32_t, base_addr + 0x400, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0x00000000 >;

    using VSPOL   = regbits< type,  7,  1 >;  /**< VSync Polarity      */
    using AR      = regbits< type,  6,  1 >;  /**< Automatic Refresh   */
    using TEPOL   = regbits< type,  5,  1 >;  /**< TE Polarity         */
    using TESRC   = regbits< type,  4,  1 >;  /**< TE Source           */
    using COLMUX  = regbits< type,  1,  3 >;  /**< Color Multiplexing  */
    using DSIM    = regbits< type,  0,  1 >;  /**< DSI Mode            */
  };

  /**
   * DSI Wrapper Control Register
   */
  struct DSI_WCR
  : public reg< uint32_t, base_addr + 0x404, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0x00000000 >;

    using DSIEN   = regbits< type,  3,  1 >;  /**< DSI Enable   */
    using LTDCEN  = regbits< type,  2,  1 >;  /**< LTDC Enable  */
    using SHTDN   = regbits< type,  1,  1 >;  /**< Shutdown     */
    using COLM    = regbits< type,  0,  1 >;  /**< Color Mode   */
  };

  /**
   * DSI Wrapper Interrupt Enable Register
   */
  struct DSI_WIER
  : public reg< uint32_t, base_addr + 0x408, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x408, rw, 0x00000000 >;

    using RRIE    = regbits< type, 13,  1 >;  /**< Regulator Ready Interrupt Enable  */
    using PLLUIE  = regbits< type, 10,  1 >;  /**< PLL Unlock Interrupt Enable       */
    using PLLLIE  = regbits< type,  9,  1 >;  /**< PLL Lock Interrupt Enable         */
    using ERIE    = regbits< type,  1,  1 >;  /**< End of Refresh Interrupt Enable   */
    using TEIE    = regbits< type,  0,  1 >;  /**< Tearing Effect Interrupt Enable   */
  };

  /**
   * DSI Wrapper Interrupt & Status Register
   */
  struct DSI_WISR
  : public reg< uint32_t, base_addr + 0x40c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, ro, 0x00000000 >;

    using RRIF    = regbits< type, 13,  1 >;  /**< Regulator Ready Interrupt Flag  */
    using RRS     = regbits< type, 12,  1 >;  /**< Regulator Ready Status          */
    using PLLUIF  = regbits< type, 10,  1 >;  /**< PLL Unlock Interrupt Flag       */
    using PLLLIF  = regbits< type,  9,  1 >;  /**< PLL Lock Interrupt Flag         */
    using PLLLS   = regbits< type,  8,  1 >;  /**< PLL Lock Status                 */
    using BUSY    = regbits< type,  2,  1 >;  /**< Busy Flag                       */
    using ERIF    = regbits< type,  1,  1 >;  /**< End of Refresh Interrupt Flag   */
    using TEIF    = regbits< type,  0,  1 >;  /**< Tearing Effect Interrupt Flag   */
  };

  /**
   * DSI Wrapper Interrupt Flag Clear Register
   */
  struct DSI_WIFCR
  : public reg< uint32_t, base_addr + 0x410, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x410, rw, 0x00000000 >;

    using CRRIF    = regbits< type, 13,  1 >;  /**< Clear Regulator Ready Interrupt Flag  */
    using CPLLUIF  = regbits< type, 10,  1 >;  /**< Clear PLL Unlock Interrupt Flag       */
    using CPLLLIF  = regbits< type,  9,  1 >;  /**< Clear PLL Lock Interrupt Flag         */
    using CERIF    = regbits< type,  1,  1 >;  /**< Clear End of Refresh Interrupt Flag   */
    using CTEIF    = regbits< type,  0,  1 >;  /**< Clear Tearing Effect Interrupt Flag   */
  };

  /**
   * DSI Wrapper PHY Configuration Register 1
   */
  struct DSI_WPCR1
  : public reg< uint32_t, base_addr + 0x418, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x418, rw, 0x00000000 >;

    using TCLKPOSTEN  = regbits< type, 27,  1 >;  /**< custom time for tCLK-POST Enable                   */
    using TLPXCEN     = regbits< type, 26,  1 >;  /**< custom time for tLPX for Clock lane Enable         */
    using THSEXITEN   = regbits< type, 25,  1 >;  /**< custom time for tHS-EXIT Enable                    */
    using TLPXDEN     = regbits< type, 24,  1 >;  /**< custom time for tLPX for Data lanes Enable         */
    using THSZEROEN   = regbits< type, 23,  1 >;  /**< custom time for tHS-ZERO Enable                    */
    using THSTRAILEN  = regbits< type, 22,  1 >;  /**< custom time for tHS-TRAIL Enable                   */
    using THSPREPEN   = regbits< type, 21,  1 >;  /**< custom time for tHS-PREPARE Enable                 */
    using TCLKZEROEN  = regbits< type, 20,  1 >;  /**< custom time for tCLK-ZERO Enable                   */
    using TCLKPREPEN  = regbits< type, 19,  1 >;  /**< custom time for tCLK-PREPARE Enable                */
    using PDEN        = regbits< type, 18,  1 >;  /**< Pull-Down Enable                                   */
    using TDDL        = regbits< type, 16,  1 >;  /**< Turn Disable Data Lanes                            */
    using CDOFFDL     = regbits< type, 14,  1 >;  /**< Contention Detection OFF on Data Lanes             */
    using FTXSMDL     = regbits< type, 13,  1 >;  /**< Force in TX Stop Mode the Data Lanes               */
    using FTXSMCL     = regbits< type, 12,  1 >;  /**< Force in TX Stop Mode the Clock Lane               */
    using HSIDL1      = regbits< type, 11,  1 >;  /**< Invert the High-Speed data signal on Data Lane 1   */
    using HSIDL0      = regbits< type, 10,  1 >;  /**< Invert the Hight-Speed data signal on Data Lane 0  */
    using HSICL       = regbits< type,  9,  1 >;  /**< Invert Hight-Speed data signal on Clock Lane       */
    using SWDL1       = regbits< type,  8,  1 >;  /**< Swap Data Lane 1 pins                              */
    using SWDL0       = regbits< type,  7,  1 >;  /**< Swap Data Lane 0 pins                              */
    using SWCL        = regbits< type,  6,  1 >;  /**< Swap Clock Lane pins                               */
    using UIX4        = regbits< type,  0,  6 >;  /**< Unit Interval multiplied by 4                      */
  };

  /**
   * DSI Wrapper PHY Configuration Register 2
   */
  struct DSI_WPCR2
  : public reg< uint32_t, base_addr + 0x41c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x41c, rw, 0x00000000 >;

    using LPRXFT     = regbits< type, 25,  2 >;  /**< Low-Power RX low-pass Filtering Tuning                       */
    using FLPRXLPM   = regbits< type, 22,  1 >;  /**< Forces LP Receiver in Low-Power Mode                         */
    using HSTXSRCDL  = regbits< type, 18,  2 >;  /**< High-Speed Transmission Slew Rate Control on Data Lanes      */
    using HSTXSRCCL  = regbits< type, 16,  2 >;  /**< High-Speed Transmission Slew Rate Control on Clock Lane      */
    using SDCC       = regbits< type, 12,  1 >;  /**< SDD Control                                                  */
    using LPSRDL     = regbits< type,  8,  2 >;  /**< Low-Power transmission Slew Rate Compensation on Data Lanes  */
    using LPSRCL     = regbits< type,  6,  2 >;  /**< Low-Power transmission Slew Rate Compensation on Clock Lane  */
    using HSTXDLL    = regbits< type,  2,  2 >;  /**< High-Speed Transmission Delay on Data Lanes                  */
    using HSTXDCL    = regbits< type,  0,  2 >;  /**< High-Speed Transmission Delay on Clock Lane                  */
  };

  /**
   * DSI Wrapper PHY Configuration Register 3
   */
  struct DSI_WPCR3
  : public reg< uint32_t, base_addr + 0x420, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x420, rw, 0x00000000 >;

    using THSTRAIL  = regbits< type, 24,  8 >;  /**< tHSTRAIL      */
    using THSPREP   = regbits< type, 16,  8 >;  /**< tHS-PREPARE   */
    using TCLKZEO   = regbits< type,  8,  8 >;  /**< tCLK-ZERO     */
    using TCLKPREP  = regbits< type,  0,  8 >;  /**< tCLK-PREPARE  */
  };

  /**
   * DSI_WPCR4
   */
  struct DSI_WPCR4
  : public reg< uint32_t, base_addr + 0x424, rw, 0x3133302A >
  {
    using type = reg< uint32_t, base_addr + 0x424, rw, 0x3133302A >;

    using TLPXC    = regbits< type, 24,  8 >;  /**< tLPXC for Clock lane  */
    using THSEXIT  = regbits< type, 16,  8 >;  /**< tHSEXIT               */
    using TLPXD    = regbits< type,  8,  8 >;  /**< tLPX for Data lanes   */
    using THSZERO  = regbits< type,  0,  8 >;  /**< tHS-ZERO              */
  };

  /**
   * DSI Wrapper PHY Configuration Register 5
   */
  struct DSI_WPCR5
  : public reg< uint32_t, base_addr + 0x428, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x428, rw, 0x00000000 >;

    using THSZERO  = regbits< type,  0,  8 >;  /**< tCLK-POST  */
  };

  /**
   * DSI Wrapper Regulator and PLL Control Register
   */
  struct DSI_WRPCR
  : public reg< uint32_t, base_addr + 0x430, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x430, rw, 0x00000000 >;

    using REGEN  = regbits< type, 24,  1 >;  /**< Regulator Enable            */
    using ODF    = regbits< type, 16,  2 >;  /**< PLL Output Division Factor  */
    using IDF    = regbits< type, 11,  4 >;  /**< PLL Input Division Factor   */
    using NDIV   = regbits< type,  2,  7 >;  /**< PLL Loop Division Factor    */
    using PLLEN  = regbits< type,  0,  1 >;  /**< PLL Enable                  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DSI_HPP_INCLUDED
