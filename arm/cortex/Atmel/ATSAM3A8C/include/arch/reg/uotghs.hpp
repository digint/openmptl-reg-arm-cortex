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
//  Import from CMSIS-SVD: "Atmel/ATSAM3A8C.svd"
//
//  vendor: Atmel
//  name: ATSAM3A8C
//  series: SAM3A
//  version: 20130131
//  description: Atmel ATSAM3A8C device: Cortex-M3 Microcontroller with 2x256 KB Flash, HS USB, 100 Pins (refer to http://www.atmel.com/devices/SAM3A8C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UOTGHS_HPP_INCLUDED
#define ARCH_REG_UOTGHS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB On-The-Go Interface
 */
struct UOTGHS
{
  static constexpr reg_addr_t base_addr = 0x400ac000;

  /**
   * Device General Control Register
   */
  struct DEVCTRL
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000100 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000100 >;

    using UADD     = regbits< type,  0,  7 >;  /**< USB Address                */
    using ADDEN    = regbits< type,  7,  1 >;  /**< Address Enable             */
    using DETACH   = regbits< type,  8,  1 >;  /**< Detach                     */
    using RMWKUP   = regbits< type,  9,  1 >;  /**< Remote Wake-Up             */
    using SPDCONF  = regbits< type, 10,  2 >;  /**< Mode Configuration         */
    using LS       = regbits< type, 12,  1 >;  /**< Low-Speed Mode Force       */
    using TSTJ     = regbits< type, 13,  1 >;  /**< Test mode J                */
    using TSTK     = regbits< type, 14,  1 >;  /**< Test mode K                */
    using TSTPCKT  = regbits< type, 15,  1 >;  /**< Test packet mode           */
    using OPMODE2  = regbits< type, 16,  1 >;  /**< Specific Operational mode  */
  };

  /**
   * Device Global Interrupt Status Register
   */
  struct DEVISR
  : public reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >;

    using SUSP    = regbits< type,  0,  1 >;  /**< Suspend Interrupt               */
    using MSOF    = regbits< type,  1,  1 >;  /**< Micro Start of Frame Interrupt  */
    using SOF     = regbits< type,  2,  1 >;  /**< Start of Frame Interrupt        */
    using EORST   = regbits< type,  3,  1 >;  /**< End of Reset Interrupt          */
    using WAKEUP  = regbits< type,  4,  1 >;  /**< Wake-Up Interrupt               */
    using EORSM   = regbits< type,  5,  1 >;  /**< End of Resume Interrupt         */
    using UPRSM   = regbits< type,  6,  1 >;  /**< Upstream Resume Interrupt       */
    using PEP_0   = regbits< type, 12,  1 >;  /**< Endpoint 0 Interrupt            */
    using PEP_1   = regbits< type, 13,  1 >;  /**< Endpoint 1 Interrupt            */
    using PEP_2   = regbits< type, 14,  1 >;  /**< Endpoint 2 Interrupt            */
    using PEP_3   = regbits< type, 15,  1 >;  /**< Endpoint 3 Interrupt            */
    using PEP_4   = regbits< type, 16,  1 >;  /**< Endpoint 4 Interrupt            */
    using PEP_5   = regbits< type, 17,  1 >;  /**< Endpoint 5 Interrupt            */
    using PEP_6   = regbits< type, 18,  1 >;  /**< Endpoint 6 Interrupt            */
    using PEP_7   = regbits< type, 19,  1 >;  /**< Endpoint 7 Interrupt            */
    using PEP_8   = regbits< type, 20,  1 >;  /**< Endpoint 8 Interrupt            */
    using PEP_9   = regbits< type, 21,  1 >;  /**< Endpoint 9 Interrupt            */
    using DMA_1   = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt         */
    using DMA_2   = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt         */
    using DMA_3   = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt         */
    using DMA_4   = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt         */
    using DMA_5   = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt         */
    using DMA_6   = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt         */
  };

  /**
   * Device Global Interrupt Clear Register
   */
  struct DEVICR
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0 >;

    using SUSPC    = regbits< type,  0,  1 >;  /**< Suspend Interrupt Clear               */
    using MSOFC    = regbits< type,  1,  1 >;  /**< Micro Start of Frame Interrupt Clear  */
    using SOFC     = regbits< type,  2,  1 >;  /**< Start of Frame Interrupt Clear        */
    using EORSTC   = regbits< type,  3,  1 >;  /**< End of Reset Interrupt Clear          */
    using WAKEUPC  = regbits< type,  4,  1 >;  /**< Wake-Up Interrupt Clear               */
    using EORSMC   = regbits< type,  5,  1 >;  /**< End of Resume Interrupt Clear         */
    using UPRSMC   = regbits< type,  6,  1 >;  /**< Upstream Resume Interrupt Clear       */
  };

  /**
   * Device Global Interrupt Set Register
   */
  struct DEVIFR
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using SUSPS    = regbits< type,  0,  1 >;  /**< Suspend Interrupt Set               */
    using MSOFS    = regbits< type,  1,  1 >;  /**< Micro Start of Frame Interrupt Set  */
    using SOFS     = regbits< type,  2,  1 >;  /**< Start of Frame Interrupt Set        */
    using EORSTS   = regbits< type,  3,  1 >;  /**< End of Reset Interrupt Set          */
    using WAKEUPS  = regbits< type,  4,  1 >;  /**< Wake-Up Interrupt Set               */
    using EORSMS   = regbits< type,  5,  1 >;  /**< End of Resume Interrupt Set         */
    using UPRSMS   = regbits< type,  6,  1 >;  /**< Upstream Resume Interrupt Set       */
    using DMA_1    = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt Set         */
    using DMA_2    = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt Set         */
    using DMA_3    = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt Set         */
    using DMA_4    = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt Set         */
    using DMA_5    = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt Set         */
    using DMA_6    = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt Set         */
  };

  /**
   * Device Global Interrupt Mask Register
   */
  struct DEVIMR
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using SUSPE    = regbits< type,  0,  1 >;  /**< Suspend Interrupt Mask               */
    using MSOFE    = regbits< type,  1,  1 >;  /**< Micro Start of Frame Interrupt Mask  */
    using SOFE     = regbits< type,  2,  1 >;  /**< Start of Frame Interrupt Mask        */
    using EORSTE   = regbits< type,  3,  1 >;  /**< End of Reset Interrupt Mask          */
    using WAKEUPE  = regbits< type,  4,  1 >;  /**< Wake-Up Interrupt Mask               */
    using EORSME   = regbits< type,  5,  1 >;  /**< End of Resume Interrupt Mask         */
    using UPRSME   = regbits< type,  6,  1 >;  /**< Upstream Resume Interrupt Mask       */
    using PEP_0    = regbits< type, 12,  1 >;  /**< Endpoint 0 Interrupt Mask            */
    using PEP_1    = regbits< type, 13,  1 >;  /**< Endpoint 1 Interrupt Mask            */
    using PEP_2    = regbits< type, 14,  1 >;  /**< Endpoint 2 Interrupt Mask            */
    using PEP_3    = regbits< type, 15,  1 >;  /**< Endpoint 3 Interrupt Mask            */
    using PEP_4    = regbits< type, 16,  1 >;  /**< Endpoint 4 Interrupt Mask            */
    using PEP_5    = regbits< type, 17,  1 >;  /**< Endpoint 5 Interrupt Mask            */
    using PEP_6    = regbits< type, 18,  1 >;  /**< Endpoint 6 Interrupt Mask            */
    using PEP_7    = regbits< type, 19,  1 >;  /**< Endpoint 7 Interrupt Mask            */
    using PEP_8    = regbits< type, 20,  1 >;  /**< Endpoint 8 Interrupt Mask            */
    using PEP_9    = regbits< type, 21,  1 >;  /**< Endpoint 9 Interrupt Mask            */
    using DMA_1    = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt Mask         */
    using DMA_2    = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt Mask         */
    using DMA_3    = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt Mask         */
    using DMA_4    = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt Mask         */
    using DMA_5    = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt Mask         */
    using DMA_6    = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt Mask         */
  };

  /**
   * Device Global Interrupt Disable Register
   */
  struct DEVIDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using SUSPEC    = regbits< type,  0,  1 >;  /**< Suspend Interrupt Disable               */
    using MSOFEC    = regbits< type,  1,  1 >;  /**< Micro Start of Frame Interrupt Disable  */
    using SOFEC     = regbits< type,  2,  1 >;  /**< Start of Frame Interrupt Disable        */
    using EORSTEC   = regbits< type,  3,  1 >;  /**< End of Reset Interrupt Disable          */
    using WAKEUPEC  = regbits< type,  4,  1 >;  /**< Wake-Up Interrupt Disable               */
    using EORSMEC   = regbits< type,  5,  1 >;  /**< End of Resume Interrupt Disable         */
    using UPRSMEC   = regbits< type,  6,  1 >;  /**< Upstream Resume Interrupt Disable       */
    using PEP_0     = regbits< type, 12,  1 >;  /**< Endpoint 0 Interrupt Disable            */
    using PEP_1     = regbits< type, 13,  1 >;  /**< Endpoint 1 Interrupt Disable            */
    using PEP_2     = regbits< type, 14,  1 >;  /**< Endpoint 2 Interrupt Disable            */
    using PEP_3     = regbits< type, 15,  1 >;  /**< Endpoint 3 Interrupt Disable            */
    using PEP_4     = regbits< type, 16,  1 >;  /**< Endpoint 4 Interrupt Disable            */
    using PEP_5     = regbits< type, 17,  1 >;  /**< Endpoint 5 Interrupt Disable            */
    using PEP_6     = regbits< type, 18,  1 >;  /**< Endpoint 6 Interrupt Disable            */
    using PEP_7     = regbits< type, 19,  1 >;  /**< Endpoint 7 Interrupt Disable            */
    using PEP_8     = regbits< type, 20,  1 >;  /**< Endpoint 8 Interrupt Disable            */
    using PEP_9     = regbits< type, 21,  1 >;  /**< Endpoint 9 Interrupt Disable            */
    using DMA_1     = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt Disable         */
    using DMA_2     = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt Disable         */
    using DMA_3     = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt Disable         */
    using DMA_4     = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt Disable         */
    using DMA_5     = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt Disable         */
    using DMA_6     = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt Disable         */
  };

  /**
   * Device Global Interrupt Enable Register
   */
  struct DEVIER
  : public reg< uint32_t, base_addr + 0x00000018, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, wo, 0 >;

    using SUSPES    = regbits< type,  0,  1 >;  /**< Suspend Interrupt Enable               */
    using MSOFES    = regbits< type,  1,  1 >;  /**< Micro Start of Frame Interrupt Enable  */
    using SOFES     = regbits< type,  2,  1 >;  /**< Start of Frame Interrupt Enable        */
    using EORSTES   = regbits< type,  3,  1 >;  /**< End of Reset Interrupt Enable          */
    using WAKEUPES  = regbits< type,  4,  1 >;  /**< Wake-Up Interrupt Enable               */
    using EORSMES   = regbits< type,  5,  1 >;  /**< End of Resume Interrupt Enable         */
    using UPRSMES   = regbits< type,  6,  1 >;  /**< Upstream Resume Interrupt Enable       */
    using PEP_0     = regbits< type, 12,  1 >;  /**< Endpoint 0 Interrupt Enable            */
    using PEP_1     = regbits< type, 13,  1 >;  /**< Endpoint 1 Interrupt Enable            */
    using PEP_2     = regbits< type, 14,  1 >;  /**< Endpoint 2 Interrupt Enable            */
    using PEP_3     = regbits< type, 15,  1 >;  /**< Endpoint 3 Interrupt Enable            */
    using PEP_4     = regbits< type, 16,  1 >;  /**< Endpoint 4 Interrupt Enable            */
    using PEP_5     = regbits< type, 17,  1 >;  /**< Endpoint 5 Interrupt Enable            */
    using PEP_6     = regbits< type, 18,  1 >;  /**< Endpoint 6 Interrupt Enable            */
    using PEP_7     = regbits< type, 19,  1 >;  /**< Endpoint 7 Interrupt Enable            */
    using PEP_8     = regbits< type, 20,  1 >;  /**< Endpoint 8 Interrupt Enable            */
    using PEP_9     = regbits< type, 21,  1 >;  /**< Endpoint 9 Interrupt Enable            */
    using DMA_1     = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt Enable         */
    using DMA_2     = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt Enable         */
    using DMA_3     = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt Enable         */
    using DMA_4     = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt Enable         */
    using DMA_5     = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt Enable         */
    using DMA_6     = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt Enable         */
  };

  /**
   * Device Endpoint Register
   */
  struct DEVEPT
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    using EPEN0   = regbits< type,  0,  1 >;  /**< Endpoint 0 Enable  */
    using EPEN1   = regbits< type,  1,  1 >;  /**< Endpoint 1 Enable  */
    using EPEN2   = regbits< type,  2,  1 >;  /**< Endpoint 2 Enable  */
    using EPEN3   = regbits< type,  3,  1 >;  /**< Endpoint 3 Enable  */
    using EPEN4   = regbits< type,  4,  1 >;  /**< Endpoint 4 Enable  */
    using EPEN5   = regbits< type,  5,  1 >;  /**< Endpoint 5 Enable  */
    using EPEN6   = regbits< type,  6,  1 >;  /**< Endpoint 6 Enable  */
    using EPEN7   = regbits< type,  7,  1 >;  /**< Endpoint 7 Enable  */
    using EPEN8   = regbits< type,  8,  1 >;  /**< Endpoint 8 Enable  */
    using EPRST0  = regbits< type, 16,  1 >;  /**< Endpoint 0 Reset   */
    using EPRST1  = regbits< type, 17,  1 >;  /**< Endpoint 1 Reset   */
    using EPRST2  = regbits< type, 18,  1 >;  /**< Endpoint 2 Reset   */
    using EPRST3  = regbits< type, 19,  1 >;  /**< Endpoint 3 Reset   */
    using EPRST4  = regbits< type, 20,  1 >;  /**< Endpoint 4 Reset   */
    using EPRST5  = regbits< type, 21,  1 >;  /**< Endpoint 5 Reset   */
    using EPRST6  = regbits< type, 22,  1 >;  /**< Endpoint 6 Reset   */
    using EPRST7  = regbits< type, 23,  1 >;  /**< Endpoint 7 Reset   */
    using EPRST8  = regbits< type, 24,  1 >;  /**< Endpoint 8 Reset   */
  };

  /**
   * Device Frame Number Register
   */
  struct DEVFNUM
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using MFNUM   = regbits< type,  0,  3 >;  /**< Micro Frame Number      */
    using FNUM    = regbits< type,  3, 11 >;  /**< Frame Number            */
    using FNCERR  = regbits< type, 15,  1 >;  /**< Frame Number CRC Error  */
  };

  /**
   * Device Endpoint Configuration Register (n = 0)
   */
  struct DEVEPTCFG[%s]
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ALLOC    = regbits< type,  1,  1 >;  /**< Endpoint Memory Allocate                                       */
    using EPBK     = regbits< type,  2,  2 >;  /**< Endpoint Banks                                                 */
    using EPSIZE   = regbits< type,  4,  3 >;  /**< Endpoint Size                                                  */
    using EPDIR    = regbits< type,  8,  1 >;  /**< Endpoint Direction                                             */
    using AUTOSW   = regbits< type,  9,  1 >;  /**< Automatic Switch                                               */
    using EPTYPE   = regbits< type, 11,  2 >;  /**< Endpoint Type                                                  */
    using NBTRANS  = regbits< type, 13,  2 >;  /**< Number of transaction per microframe for isochronous endpoint  */
  };

  /**
   * Device Endpoint Status Register (n = 0)
   */
  struct DEVEPTISR[%s]
  : public reg< uint32_t, base_addr + 0x00000130, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using TXINI        = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt  */
    using RXOUTI       = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt    */
    using RXSTPI       = regbits< type,  2,  1 >;  /**< Received SETUP Interrupt       */
    using NAKOUTI      = regbits< type,  3,  1 >;  /**< NAKed OUT Interrupt            */
    using NAKINI       = regbits< type,  4,  1 >;  /**< NAKed IN Interrupt             */
    using OVERFI       = regbits< type,  5,  1 >;  /**< Overflow Interrupt             */
    using STALLEDI     = regbits< type,  6,  1 >;  /**< STALLed Interrupt              */
    using SHORTPACKET  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt         */
    using DTSEQ        = regbits< type,  8,  2 >;  /**< Data Toggle Sequence           */
    using NBUSYBK      = regbits< type, 12,  2 >;  /**< Number of Busy Banks           */
    using CURRBK       = regbits< type, 14,  2 >;  /**< Current Bank                   */
    using RWALL        = regbits< type, 16,  1 >;  /**< Read-write Allowed             */
    using CTRLDIR      = regbits< type, 17,  1 >;  /**< Control Direction              */
    using CFGOK        = regbits< type, 18,  1 >;  /**< Configuration OK Status        */
    using BYCT         = regbits< type, 20, 11 >;  /**< Byte Count                     */
  };

  /**
   * Device Endpoint Status Register (n = 0)
   */
  struct DEVEPTISR0_ISOENPT
  : public reg< uint32_t, base_addr + 0x00000130, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using TXINI        = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt                                        */
    using RXOUTI       = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt                                          */
    using UNDERFI      = regbits< type,  2,  1 >;  /**< Underflow Interrupt                                                  */
    using HBISOINERRI  = regbits< type,  3,  1 >;  /**< High bandwidth isochronous IN Underflow Error Interrupt              */
    using HBISOFLUSHI  = regbits< type,  4,  1 >;  /**< High Bandwidth Isochronous IN Flush Interrupt                        */
    using OVERFI       = regbits< type,  5,  1 >;  /**< Overflow Interrupt                                                   */
    using CRCERRI      = regbits< type,  6,  1 >;  /**< CRC Error Interrupt                                                  */
    using SHORTPACKET  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt                                               */
    using DTSEQ        = regbits< type,  8,  2 >;  /**< Data Toggle Sequence                                                 */
    using ERRORTRANS   = regbits< type, 10,  1 >;  /**< High-bandwidth isochronous OUT endpoint transaction error Interrupt  */
    using NBUSYBK      = regbits< type, 12,  2 >;  /**< Number of Busy Banks                                                 */
    using CURRBK       = regbits< type, 14,  2 >;  /**< Current Bank                                                         */
    using RWALL        = regbits< type, 16,  1 >;  /**< Read-write Allowed                                                   */
    using CFGOK        = regbits< type, 18,  1 >;  /**< Configuration OK Status                                              */
    using BYCT         = regbits< type, 20, 11 >;  /**< Byte Count                                                           */
  };

  /**
   * Device Endpoint Clear Register (n = 0)
   */
  struct DEVEPTICR[%s]
  : public reg< uint32_t, base_addr + 0x00000160, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, wo, 0 >;

    using TXINIC        = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt Clear  */
    using RXOUTIC       = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt Clear    */
    using RXSTPIC       = regbits< type,  2,  1 >;  /**< Received SETUP Interrupt Clear       */
    using NAKOUTIC      = regbits< type,  3,  1 >;  /**< NAKed OUT Interrupt Clear            */
    using NAKINIC       = regbits< type,  4,  1 >;  /**< NAKed IN Interrupt Clear             */
    using OVERFIC       = regbits< type,  5,  1 >;  /**< Overflow Interrupt Clear             */
    using STALLEDIC     = regbits< type,  6,  1 >;  /**< STALLed Interrupt Clear              */
    using SHORTPACKETC  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Clear         */
  };

  /**
   * Device Endpoint Clear Register (n = 0)
   */
  struct DEVEPTICR0_ISOENPT
  : public reg< uint32_t, base_addr + 0x00000160, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, wo, 0 >;

    using TXINIC        = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt Clear                            */
    using RXOUTIC       = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt Clear                              */
    using UNDERFIC      = regbits< type,  2,  1 >;  /**< Underflow Interrupt Clear                                      */
    using HBISOINERRIC  = regbits< type,  3,  1 >;  /**< High bandwidth isochronous IN Underflow Error Interrupt Clear  */
    using HBISOFLUSHIC  = regbits< type,  4,  1 >;  /**< High Bandwidth Isochronous IN Flush Interrupt Clear            */
    using OVERFIC       = regbits< type,  5,  1 >;  /**< Overflow Interrupt Clear                                       */
    using CRCERRIC      = regbits< type,  6,  1 >;  /**< CRC Error Interrupt Clear                                      */
    using SHORTPACKETC  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Clear                                   */
  };

  /**
   * Device Endpoint Set Register (n = 0)
   */
  struct DEVEPTIFR[%s]
  : public reg< uint32_t, base_addr + 0x00000190, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000190, wo, 0 >;

    using TXINIS        = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt Set   */
    using RXOUTIS       = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt Set     */
    using RXSTPIS       = regbits< type,  2,  1 >;  /**< Received SETUP Interrupt Set        */
    using NAKOUTIS      = regbits< type,  3,  1 >;  /**< NAKed OUT Interrupt Set             */
    using NAKINIS       = regbits< type,  4,  1 >;  /**< NAKed IN Interrupt Set              */
    using OVERFIS       = regbits< type,  5,  1 >;  /**< Overflow Interrupt Set              */
    using STALLEDIS     = regbits< type,  6,  1 >;  /**< STALLed Interrupt Set               */
    using SHORTPACKETS  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Set          */
    using NBUSYBKS      = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt Set  */
  };

  /**
   * Device Endpoint Set Register (n = 0)
   */
  struct DEVEPTIFR0_ISOENPT
  : public reg< uint32_t, base_addr + 0x00000190, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000190, wo, 0 >;

    using TXINIS        = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt Set                            */
    using RXOUTIS       = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt Set                              */
    using UNDERFIS      = regbits< type,  2,  1 >;  /**< Underflow Interrupt Set                                      */
    using HBISOINERRIS  = regbits< type,  3,  1 >;  /**< High bandwidth isochronous IN Underflow Error Interrupt Set  */
    using HBISOFLUSHIS  = regbits< type,  4,  1 >;  /**< High Bandwidth Isochronous IN Flush Interrupt Set            */
    using OVERFIS       = regbits< type,  5,  1 >;  /**< Overflow Interrupt Set                                       */
    using CRCERRIS      = regbits< type,  6,  1 >;  /**< CRC Error Interrupt Set                                      */
    using SHORTPACKETS  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Set                                   */
    using NBUSYBKS      = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt Set                           */
  };

  /**
   * Device Endpoint Mask Register (n = 0)
   */
  struct DEVEPTIMR[%s]
  : public reg< uint32_t, base_addr + 0x000001c0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000001c0, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using TXINE         = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt             */
    using RXOUTE        = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt               */
    using RXSTPE        = regbits< type,  2,  1 >;  /**< Received SETUP Interrupt                  */
    using NAKOUTE       = regbits< type,  3,  1 >;  /**< NAKed OUT Interrupt                       */
    using NAKINE        = regbits< type,  4,  1 >;  /**< NAKed IN Interrupt                        */
    using OVERFE        = regbits< type,  5,  1 >;  /**< Overflow Interrupt                        */
    using STALLEDE      = regbits< type,  6,  1 >;  /**< STALLed Interrupt                         */
    using SHORTPACKETE  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt                    */
    using NBUSYBKE      = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt            */
    using KILLBK        = regbits< type, 13,  1 >;  /**< Kill IN Bank                              */
    using FIFOCON       = regbits< type, 14,  1 >;  /**< FIFO Control                              */
    using EPDISHDMA     = regbits< type, 16,  1 >;  /**< Endpoint Interrupts Disable HDMA Request  */
    using NYETDIS       = regbits< type, 17,  1 >;  /**< NYET Token Disable                        */
    using RSTDT         = regbits< type, 18,  1 >;  /**< Reset Data Toggle                         */
    using STALLRQ       = regbits< type, 19,  1 >;  /**< STALL Request                             */
  };

  /**
   * Device Endpoint Mask Register (n = 0)
   */
  struct DEVEPTIMR0_ISOENPT
  : public reg< uint32_t, base_addr + 0x000001c0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000001c0, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using TXINE         = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt                  */
    using RXOUTE        = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt                    */
    using UNDERFE       = regbits< type,  2,  1 >;  /**< Underflow Interrupt                            */
    using HBISOINERRE   = regbits< type,  3,  1 >;  /**< High Bandwidth Isochronous IN Error Interrupt  */
    using HBISOFLUSHE   = regbits< type,  4,  1 >;  /**< High Bandwidth Isochronous IN Flush Interrupt  */
    using OVERFE        = regbits< type,  5,  1 >;  /**< Overflow Interrupt                             */
    using CRCERRE       = regbits< type,  6,  1 >;  /**< CRC Error Interrupt                            */
    using SHORTPACKETE  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt                         */
    using MDATAE        = regbits< type,  8,  1 >;  /**< MData Interrupt                                */
    using DATAXE        = regbits< type,  9,  1 >;  /**< DataX Interrupt                                */
    using ERRORTRANSE   = regbits< type, 10,  1 >;  /**< Transaction Error Interrupt                    */
    using NBUSYBKE      = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt                 */
    using KILLBK        = regbits< type, 13,  1 >;  /**< Kill IN Bank                                   */
    using FIFOCON       = regbits< type, 14,  1 >;  /**< FIFO Control                                   */
    using EPDISHDMA     = regbits< type, 16,  1 >;  /**< Endpoint Interrupts Disable HDMA Request       */
    using RSTDT         = regbits< type, 18,  1 >;  /**< Reset Data Toggle                              */
  };

  /**
   * Device Endpoint Enable Register (n = 0)
   */
  struct DEVEPTIER[%s]
  : public reg< uint32_t, base_addr + 0x000001f0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001f0, wo, 0 >;

    using TXINES         = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt Enable             */
    using RXOUTES        = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt Enable               */
    using RXSTPES        = regbits< type,  2,  1 >;  /**< Received SETUP Interrupt Enable                  */
    using NAKOUTES       = regbits< type,  3,  1 >;  /**< NAKed OUT Interrupt Enable                       */
    using NAKINES        = regbits< type,  4,  1 >;  /**< NAKed IN Interrupt Enable                        */
    using OVERFES        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Enable                        */
    using STALLEDES      = regbits< type,  6,  1 >;  /**< STALLed Interrupt Enable                         */
    using SHORTPACKETES  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Enable                    */
    using NBUSYBKES      = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt Enable            */
    using KILLBKS        = regbits< type, 13,  1 >;  /**< Kill IN Bank                                     */
    using FIFOCONS       = regbits< type, 14,  1 >;  /**< FIFO Control                                     */
    using EPDISHDMAS     = regbits< type, 16,  1 >;  /**< Endpoint Interrupts Disable HDMA Request Enable  */
    using NYETDISS       = regbits< type, 17,  1 >;  /**< NYET Token Disable Enable                        */
    using RSTDTS         = regbits< type, 18,  1 >;  /**< Reset Data Toggle Enable                         */
    using STALLRQS       = regbits< type, 19,  1 >;  /**< STALL Request Enable                             */
  };

  /**
   * Device Endpoint Enable Register (n = 0)
   */
  struct DEVEPTIER0_ISOENPT
  : public reg< uint32_t, base_addr + 0x000001f0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001f0, wo, 0 >;

    using TXINES         = regbits< type,  0,  1 >;  /**< Transmitted IN Data Interrupt Enable                  */
    using RXOUTES        = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt Enable                    */
    using UNDERFES       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Enable                            */
    using HBISOINERRES   = regbits< type,  3,  1 >;  /**< High Bandwidth Isochronous IN Error Interrupt Enable  */
    using HBISOFLUSHES   = regbits< type,  4,  1 >;  /**< High Bandwidth Isochronous IN Flush Interrupt Enable  */
    using OVERFES        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Enable                             */
    using CRCERRES       = regbits< type,  6,  1 >;  /**< CRC Error Interrupt Enable                            */
    using SHORTPACKETES  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Enable                         */
    using MDATAES        = regbits< type,  8,  1 >;  /**< MData Interrupt Enable                                */
    using DATAXES        = regbits< type,  9,  1 >;  /**< DataX Interrupt Enable                                */
    using ERRORTRANSES   = regbits< type, 10,  1 >;  /**< Transaction Error Interrupt Enable                    */
    using NBUSYBKES      = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt Enable                 */
    using KILLBKS        = regbits< type, 13,  1 >;  /**< Kill IN Bank                                          */
    using FIFOCONS       = regbits< type, 14,  1 >;  /**< FIFO Control                                          */
    using EPDISHDMAS     = regbits< type, 16,  1 >;  /**< Endpoint Interrupts Disable HDMA Request Enable       */
    using RSTDTS         = regbits< type, 18,  1 >;  /**< Reset Data Toggle Enable                              */
    using STALLRQS       = regbits< type, 19,  1 >;  /**< STALL Request Enable                                  */
  };

  /**
   * Device Endpoint Disable Register (n = 0)
   */
  struct DEVEPTIDR[%s]
  : public reg< uint32_t, base_addr + 0x00000220, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000220, wo, 0 >;

    using TXINEC         = regbits< type,  0,  1 >;  /**< Transmitted IN Interrupt Clear                  */
    using RXOUTEC        = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt Clear               */
    using RXSTPEC        = regbits< type,  2,  1 >;  /**< Received SETUP Interrupt Clear                  */
    using NAKOUTEC       = regbits< type,  3,  1 >;  /**< NAKed OUT Interrupt Clear                       */
    using NAKINEC        = regbits< type,  4,  1 >;  /**< NAKed IN Interrupt Clear                        */
    using OVERFEC        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Clear                        */
    using STALLEDEC      = regbits< type,  6,  1 >;  /**< STALLed Interrupt Clear                         */
    using SHORTPACKETEC  = regbits< type,  7,  1 >;  /**< Shortpacket Interrupt Clear                     */
    using NBUSYBKEC      = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt Clear            */
    using FIFOCONC       = regbits< type, 14,  1 >;  /**< FIFO Control Clear                              */
    using EPDISHDMAC     = regbits< type, 16,  1 >;  /**< Endpoint Interrupts Disable HDMA Request Clear  */
    using NYETDISC       = regbits< type, 17,  1 >;  /**< NYET Token Disable Clear                        */
    using STALLRQC       = regbits< type, 19,  1 >;  /**< STALL Request Clear                             */
  };

  /**
   * Device Endpoint Disable Register (n = 0)
   */
  struct DEVEPTIDR0_ISOENPT
  : public reg< uint32_t, base_addr + 0x00000220, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000220, wo, 0 >;

    using TXINEC         = regbits< type,  0,  1 >;  /**< Transmitted IN Interrupt Clear                       */
    using RXOUTEC        = regbits< type,  1,  1 >;  /**< Received OUT Data Interrupt Clear                    */
    using UNDERFEC       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Clear                            */
    using HBISOINERREC   = regbits< type,  3,  1 >;  /**< High Bandwidth Isochronous IN Error Interrupt Clear  */
    using HBISOFLUSHEC   = regbits< type,  4,  1 >;  /**< High Bandwidth Isochronous IN Flush Interrupt Clear  */
    using OVERFEC        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Clear                             */
    using CRCERREC       = regbits< type,  6,  1 >;  /**< CRC Error Interrupt Clear                            */
    using SHORTPACKETEC  = regbits< type,  7,  1 >;  /**< Shortpacket Interrupt Clear                          */
    using MDATEC         = regbits< type,  8,  1 >;  /**< MData Interrupt Clear                                */
    using DATAXEC        = regbits< type,  9,  1 >;  /**< DataX Interrupt Clear                                */
    using ERRORTRANSEC   = regbits< type, 10,  1 >;  /**< Transaction Error Interrupt Clear                    */
    using NBUSYBKEC      = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt Clear                 */
    using FIFOCONC       = regbits< type, 14,  1 >;  /**< FIFO Control Clear                                   */
    using EPDISHDMAC     = regbits< type, 16,  1 >;  /**< Endpoint Interrupts Disable HDMA Request Clear       */
  };

  /**
   * Device DMA Channel Next Descriptor Address Register (n = 1)
   */
  struct DEVDMANXTDSC1
  : public reg< uint32_t, base_addr + 0x00000310, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000310, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Device DMA Channel Address Register (n = 1)
   */
  struct DEVDMAADDRESS1
  : public reg< uint32_t, base_addr + 0x00000314, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000314, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Device DMA Channel Control Register (n = 1)
   */
  struct DEVDMACONTROL1
  : public reg< uint32_t, base_addr + 0x00000318, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000318, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable Control                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Device DMA Channel Status Register (n = 1)
   */
  struct DEVDMASTATUS1
  : public reg< uint32_t, base_addr + 0x0000031c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000031c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Device DMA Channel Next Descriptor Address Register (n = 2)
   */
  struct DEVDMANXTDSC2
  : public reg< uint32_t, base_addr + 0x00000320, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000320, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Device DMA Channel Address Register (n = 2)
   */
  struct DEVDMAADDRESS2
  : public reg< uint32_t, base_addr + 0x00000324, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000324, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Device DMA Channel Control Register (n = 2)
   */
  struct DEVDMACONTROL2
  : public reg< uint32_t, base_addr + 0x00000328, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000328, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable Control                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Device DMA Channel Status Register (n = 2)
   */
  struct DEVDMASTATUS2
  : public reg< uint32_t, base_addr + 0x0000032c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000032c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Device DMA Channel Next Descriptor Address Register (n = 3)
   */
  struct DEVDMANXTDSC3
  : public reg< uint32_t, base_addr + 0x00000330, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000330, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Device DMA Channel Address Register (n = 3)
   */
  struct DEVDMAADDRESS3
  : public reg< uint32_t, base_addr + 0x00000334, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000334, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Device DMA Channel Control Register (n = 3)
   */
  struct DEVDMACONTROL3
  : public reg< uint32_t, base_addr + 0x00000338, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000338, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable Control                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Device DMA Channel Status Register (n = 3)
   */
  struct DEVDMASTATUS3
  : public reg< uint32_t, base_addr + 0x0000033c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000033c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Device DMA Channel Next Descriptor Address Register (n = 4)
   */
  struct DEVDMANXTDSC4
  : public reg< uint32_t, base_addr + 0x00000340, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000340, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Device DMA Channel Address Register (n = 4)
   */
  struct DEVDMAADDRESS4
  : public reg< uint32_t, base_addr + 0x00000344, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000344, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Device DMA Channel Control Register (n = 4)
   */
  struct DEVDMACONTROL4
  : public reg< uint32_t, base_addr + 0x00000348, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000348, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable Control                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Device DMA Channel Status Register (n = 4)
   */
  struct DEVDMASTATUS4
  : public reg< uint32_t, base_addr + 0x0000034c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000034c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Device DMA Channel Next Descriptor Address Register (n = 5)
   */
  struct DEVDMANXTDSC5
  : public reg< uint32_t, base_addr + 0x00000350, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000350, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Device DMA Channel Address Register (n = 5)
   */
  struct DEVDMAADDRESS5
  : public reg< uint32_t, base_addr + 0x00000354, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000354, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Device DMA Channel Control Register (n = 5)
   */
  struct DEVDMACONTROL5
  : public reg< uint32_t, base_addr + 0x00000358, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000358, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable Control                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Device DMA Channel Status Register (n = 5)
   */
  struct DEVDMASTATUS5
  : public reg< uint32_t, base_addr + 0x0000035c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000035c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Device DMA Channel Next Descriptor Address Register (n = 6)
   */
  struct DEVDMANXTDSC6
  : public reg< uint32_t, base_addr + 0x00000360, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000360, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Device DMA Channel Address Register (n = 6)
   */
  struct DEVDMAADDRESS6
  : public reg< uint32_t, base_addr + 0x00000364, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000364, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Device DMA Channel Control Register (n = 6)
   */
  struct DEVDMACONTROL6
  : public reg< uint32_t, base_addr + 0x00000368, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000368, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable Control                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Device DMA Channel Status Register (n = 6)
   */
  struct DEVDMASTATUS6
  : public reg< uint32_t, base_addr + 0x0000036c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000036c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Device DMA Channel Next Descriptor Address Register (n = 7)
   */
  struct DEVDMANXTDSC7
  : public reg< uint32_t, base_addr + 0x00000370, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000370, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Device DMA Channel Address Register (n = 7)
   */
  struct DEVDMAADDRESS7
  : public reg< uint32_t, base_addr + 0x00000374, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000374, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Device DMA Channel Control Register (n = 7)
   */
  struct DEVDMACONTROL7
  : public reg< uint32_t, base_addr + 0x00000378, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000378, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable Control                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Device DMA Channel Status Register (n = 7)
   */
  struct DEVDMASTATUS7
  : public reg< uint32_t, base_addr + 0x0000037c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000037c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Host General Control Register
   */
  struct HSTCTRL
  : public reg< uint32_t, base_addr + 0x00000400, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000400, rw, 0x00000000 >;

    using SOFE     = regbits< type,  8,  1 >;  /**< Start of Frame Generation Enable  */
    using RESET    = regbits< type,  9,  1 >;  /**< Send USB Reset                    */
    using RESUME   = regbits< type, 10,  1 >;  /**< Send USB Resume                   */
    using SPDCONF  = regbits< type, 12,  2 >;  /**< Mode Configuration                */
  };

  /**
   * Host Global Interrupt Status Register
   */
  struct HSTISR
  : public reg< uint32_t, base_addr + 0x00000404, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000404, ro, 0x00000000 >;

    using DCONNI  = regbits< type,  0,  1 >;  /**< Device Connection Interrupt         */
    using DDISCI  = regbits< type,  1,  1 >;  /**< Device Disconnection Interrupt      */
    using RSTI    = regbits< type,  2,  1 >;  /**< USB Reset Sent Interrupt            */
    using RSMEDI  = regbits< type,  3,  1 >;  /**< Downstream Resume Sent Interrupt    */
    using RXRSMI  = regbits< type,  4,  1 >;  /**< Upstream Resume Received Interrupt  */
    using HSOFI   = regbits< type,  5,  1 >;  /**< Host Start of Frame Interrupt       */
    using HWUPI   = regbits< type,  6,  1 >;  /**< Host Wake-Up Interrupt              */
    using PEP_0   = regbits< type,  8,  1 >;  /**< Pipe 0 Interrupt                    */
    using PEP_1   = regbits< type,  9,  1 >;  /**< Pipe 1 Interrupt                    */
    using PEP_2   = regbits< type, 10,  1 >;  /**< Pipe 2 Interrupt                    */
    using PEP_3   = regbits< type, 11,  1 >;  /**< Pipe 3 Interrupt                    */
    using PEP_4   = regbits< type, 12,  1 >;  /**< Pipe 4 Interrupt                    */
    using PEP_5   = regbits< type, 13,  1 >;  /**< Pipe 5 Interrupt                    */
    using PEP_6   = regbits< type, 14,  1 >;  /**< Pipe 6 Interrupt                    */
    using PEP_7   = regbits< type, 15,  1 >;  /**< Pipe 7 Interrupt                    */
    using PEP_8   = regbits< type, 16,  1 >;  /**< Pipe 8 Interrupt                    */
    using PEP_9   = regbits< type, 17,  1 >;  /**< Pipe 9 Interrupt                    */
    using DMA_1   = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt             */
    using DMA_2   = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt             */
    using DMA_3   = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt             */
    using DMA_4   = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt             */
    using DMA_5   = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt             */
    using DMA_6   = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt             */
  };

  /**
   * Host Global Interrupt Clear Register
   */
  struct HSTICR
  : public reg< uint32_t, base_addr + 0x00000408, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000408, wo, 0 >;

    using DCONNIC  = regbits< type,  0,  1 >;  /**< Device Connection Interrupt Clear         */
    using DDISCIC  = regbits< type,  1,  1 >;  /**< Device Disconnection Interrupt Clear      */
    using RSTIC    = regbits< type,  2,  1 >;  /**< USB Reset Sent Interrupt Clear            */
    using RSMEDIC  = regbits< type,  3,  1 >;  /**< Downstream Resume Sent Interrupt Clear    */
    using RXRSMIC  = regbits< type,  4,  1 >;  /**< Upstream Resume Received Interrupt Clear  */
    using HSOFIC   = regbits< type,  5,  1 >;  /**< Host Start of Frame Interrupt Clear       */
    using HWUPIC   = regbits< type,  6,  1 >;  /**< Host Wake-Up Interrupt Clear              */
  };

  /**
   * Host Global Interrupt Set Register
   */
  struct HSTIFR
  : public reg< uint32_t, base_addr + 0x0000040c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000040c, wo, 0 >;

    using DCONNIS  = regbits< type,  0,  1 >;  /**< Device Connection Interrupt Set         */
    using DDISCIS  = regbits< type,  1,  1 >;  /**< Device Disconnection Interrupt Set      */
    using RSTIS    = regbits< type,  2,  1 >;  /**< USB Reset Sent Interrupt Set            */
    using RSMEDIS  = regbits< type,  3,  1 >;  /**< Downstream Resume Sent Interrupt Set    */
    using RXRSMIS  = regbits< type,  4,  1 >;  /**< Upstream Resume Received Interrupt Set  */
    using HSOFIS   = regbits< type,  5,  1 >;  /**< Host Start of Frame Interrupt Set       */
    using HWUPIS   = regbits< type,  6,  1 >;  /**< Host Wake-Up Interrupt Set              */
    using DMA_1    = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt Set             */
    using DMA_2    = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt Set             */
    using DMA_3    = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt Set             */
    using DMA_4    = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt Set             */
    using DMA_5    = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt Set             */
    using DMA_6    = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt Set             */
  };

  /**
   * Host Global Interrupt Mask Register
   */
  struct HSTIMR
  : public reg< uint32_t, base_addr + 0x00000410, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000410, ro, 0x00000000 >;

    using DCONNIE  = regbits< type,  0,  1 >;  /**< Device Connection Interrupt Enable         */
    using DDISCIE  = regbits< type,  1,  1 >;  /**< Device Disconnection Interrupt Enable      */
    using RSTIE    = regbits< type,  2,  1 >;  /**< USB Reset Sent Interrupt Enable            */
    using RSMEDIE  = regbits< type,  3,  1 >;  /**< Downstream Resume Sent Interrupt Enable    */
    using RXRSMIE  = regbits< type,  4,  1 >;  /**< Upstream Resume Received Interrupt Enable  */
    using HSOFIE   = regbits< type,  5,  1 >;  /**< Host Start of Frame Interrupt Enable       */
    using HWUPIE   = regbits< type,  6,  1 >;  /**< Host Wake-Up Interrupt Enable              */
    using PEP_0    = regbits< type,  8,  1 >;  /**< Pipe 0 Interrupt Enable                    */
    using PEP_1    = regbits< type,  9,  1 >;  /**< Pipe 1 Interrupt Enable                    */
    using PEP_2    = regbits< type, 10,  1 >;  /**< Pipe 2 Interrupt Enable                    */
    using PEP_3    = regbits< type, 11,  1 >;  /**< Pipe 3 Interrupt Enable                    */
    using PEP_4    = regbits< type, 12,  1 >;  /**< Pipe 4 Interrupt Enable                    */
    using PEP_5    = regbits< type, 13,  1 >;  /**< Pipe 5 Interrupt Enable                    */
    using PEP_6    = regbits< type, 14,  1 >;  /**< Pipe 6 Interrupt Enable                    */
    using PEP_7    = regbits< type, 15,  1 >;  /**< Pipe 7 Interrupt Enable                    */
    using PEP_8    = regbits< type, 16,  1 >;  /**< Pipe 8 Interrupt Enable                    */
    using PEP_9    = regbits< type, 17,  1 >;  /**< Pipe 9 Interrupt Enable                    */
    using DMA_1    = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt Enable             */
    using DMA_2    = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt Enable             */
    using DMA_3    = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt Enable             */
    using DMA_4    = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt Enable             */
    using DMA_5    = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt Enable             */
    using DMA_6    = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt Enable             */
  };

  /**
   * Host Global Interrupt Disable Register
   */
  struct HSTIDR
  : public reg< uint32_t, base_addr + 0x00000414, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000414, wo, 0 >;

    using DCONNIEC  = regbits< type,  0,  1 >;  /**< Device Connection Interrupt Disable         */
    using DDISCIEC  = regbits< type,  1,  1 >;  /**< Device Disconnection Interrupt Disable      */
    using RSTIEC    = regbits< type,  2,  1 >;  /**< USB Reset Sent Interrupt Disable            */
    using RSMEDIEC  = regbits< type,  3,  1 >;  /**< Downstream Resume Sent Interrupt Disable    */
    using RXRSMIEC  = regbits< type,  4,  1 >;  /**< Upstream Resume Received Interrupt Disable  */
    using HSOFIEC   = regbits< type,  5,  1 >;  /**< Host Start of Frame Interrupt Disable       */
    using HWUPIEC   = regbits< type,  6,  1 >;  /**< Host Wake-Up Interrupt Disable              */
    using PEP_0     = regbits< type,  8,  1 >;  /**< Pipe 0 Interrupt Disable                    */
    using PEP_1     = regbits< type,  9,  1 >;  /**< Pipe 1 Interrupt Disable                    */
    using PEP_2     = regbits< type, 10,  1 >;  /**< Pipe 2 Interrupt Disable                    */
    using PEP_3     = regbits< type, 11,  1 >;  /**< Pipe 3 Interrupt Disable                    */
    using PEP_4     = regbits< type, 12,  1 >;  /**< Pipe 4 Interrupt Disable                    */
    using PEP_5     = regbits< type, 13,  1 >;  /**< Pipe 5 Interrupt Disable                    */
    using PEP_6     = regbits< type, 14,  1 >;  /**< Pipe 6 Interrupt Disable                    */
    using PEP_7     = regbits< type, 15,  1 >;  /**< Pipe 7 Interrupt Disable                    */
    using PEP_8     = regbits< type, 16,  1 >;  /**< Pipe 8 Interrupt Disable                    */
    using PEP_9     = regbits< type, 17,  1 >;  /**< Pipe 9 Interrupt Disable                    */
    using DMA_1     = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt Disable             */
    using DMA_2     = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt Disable             */
    using DMA_3     = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt Disable             */
    using DMA_4     = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt Disable             */
    using DMA_5     = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt Disable             */
    using DMA_6     = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt Disable             */
  };

  /**
   * Host Global Interrupt Enable Register
   */
  struct HSTIER
  : public reg< uint32_t, base_addr + 0x00000418, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000418, wo, 0 >;

    using DCONNIES  = regbits< type,  0,  1 >;  /**< Device Connection Interrupt Enable         */
    using DDISCIES  = regbits< type,  1,  1 >;  /**< Device Disconnection Interrupt Enable      */
    using RSTIES    = regbits< type,  2,  1 >;  /**< USB Reset Sent Interrupt Enable            */
    using RSMEDIES  = regbits< type,  3,  1 >;  /**< Downstream Resume Sent Interrupt Enable    */
    using RXRSMIES  = regbits< type,  4,  1 >;  /**< Upstream Resume Received Interrupt Enable  */
    using HSOFIES   = regbits< type,  5,  1 >;  /**< Host Start of Frame Interrupt Enable       */
    using HWUPIES   = regbits< type,  6,  1 >;  /**< Host Wake-Up Interrupt Enable              */
    using PEP_0     = regbits< type,  8,  1 >;  /**< Pipe 0 Interrupt Enable                    */
    using PEP_1     = regbits< type,  9,  1 >;  /**< Pipe 1 Interrupt Enable                    */
    using PEP_2     = regbits< type, 10,  1 >;  /**< Pipe 2 Interrupt Enable                    */
    using PEP_3     = regbits< type, 11,  1 >;  /**< Pipe 3 Interrupt Enable                    */
    using PEP_4     = regbits< type, 12,  1 >;  /**< Pipe 4 Interrupt Enable                    */
    using PEP_5     = regbits< type, 13,  1 >;  /**< Pipe 5 Interrupt Enable                    */
    using PEP_6     = regbits< type, 14,  1 >;  /**< Pipe 6 Interrupt Enable                    */
    using PEP_7     = regbits< type, 15,  1 >;  /**< Pipe 7 Interrupt Enable                    */
    using PEP_8     = regbits< type, 16,  1 >;  /**< Pipe 8 Interrupt Enable                    */
    using PEP_9     = regbits< type, 17,  1 >;  /**< Pipe 9 Interrupt Enable                    */
    using DMA_1     = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt Enable             */
    using DMA_2     = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt Enable             */
    using DMA_3     = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt Enable             */
    using DMA_4     = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt Enable             */
    using DMA_5     = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt Enable             */
    using DMA_6     = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt Enable             */
  };

  /**
   * Host Pipe Register
   */
  struct HSTPIP
  : public reg< uint32_t, base_addr + 0x0000041c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000041c, rw, 0x00000000 >;

    using PEN0   = regbits< type,  0,  1 >;  /**< Pipe 0 Enable  */
    using PEN1   = regbits< type,  1,  1 >;  /**< Pipe 1 Enable  */
    using PEN2   = regbits< type,  2,  1 >;  /**< Pipe 2 Enable  */
    using PEN3   = regbits< type,  3,  1 >;  /**< Pipe 3 Enable  */
    using PEN4   = regbits< type,  4,  1 >;  /**< Pipe 4 Enable  */
    using PEN5   = regbits< type,  5,  1 >;  /**< Pipe 5 Enable  */
    using PEN6   = regbits< type,  6,  1 >;  /**< Pipe 6 Enable  */
    using PEN7   = regbits< type,  7,  1 >;  /**< Pipe 7 Enable  */
    using PEN8   = regbits< type,  8,  1 >;  /**< Pipe 8 Enable  */
    using PRST0  = regbits< type, 16,  1 >;  /**< Pipe 0 Reset   */
    using PRST1  = regbits< type, 17,  1 >;  /**< Pipe 1 Reset   */
    using PRST2  = regbits< type, 18,  1 >;  /**< Pipe 2 Reset   */
    using PRST3  = regbits< type, 19,  1 >;  /**< Pipe 3 Reset   */
    using PRST4  = regbits< type, 20,  1 >;  /**< Pipe 4 Reset   */
    using PRST5  = regbits< type, 21,  1 >;  /**< Pipe 5 Reset   */
    using PRST6  = regbits< type, 22,  1 >;  /**< Pipe 6 Reset   */
    using PRST7  = regbits< type, 23,  1 >;  /**< Pipe 7 Reset   */
    using PRST8  = regbits< type, 24,  1 >;  /**< Pipe 8 Reset   */
  };

  /**
   * Host Frame Number Register
   */
  struct HSTFNUM
  : public reg< uint32_t, base_addr + 0x00000420, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000420, rw, 0x00000000 >;

    using MFNUM     = regbits< type,  0,  3 >;  /**< Micro Frame Number  */
    using FNUM      = regbits< type,  3, 11 >;  /**< Frame Number        */
    using FLENHIGH  = regbits< type, 16,  8 >;  /**< Frame Length        */
  };

  /**
   * Host Address 1 Register
   */
  struct HSTADDR1
  : public reg< uint32_t, base_addr + 0x00000424, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000424, rw, 0x00000000 >;

    using HSTADDRP0  = regbits< type,  0,  7 >;  /**< USB Host Address  */
    using HSTADDRP1  = regbits< type,  8,  7 >;  /**< USB Host Address  */
    using HSTADDRP2  = regbits< type, 16,  7 >;  /**< USB Host Address  */
    using HSTADDRP3  = regbits< type, 24,  7 >;  /**< USB Host Address  */
  };

  /**
   * Host Address 2 Register
   */
  struct HSTADDR2
  : public reg< uint32_t, base_addr + 0x00000428, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000428, rw, 0x00000000 >;

    using HSTADDRP4  = regbits< type,  0,  7 >;  /**< USB Host Address  */
    using HSTADDRP5  = regbits< type,  8,  7 >;  /**< USB Host Address  */
    using HSTADDRP6  = regbits< type, 16,  7 >;  /**< USB Host Address  */
    using HSTADDRP7  = regbits< type, 24,  7 >;  /**< USB Host Address  */
  };

  /**
   * Host Address 3 Register
   */
  struct HSTADDR3
  : public reg< uint32_t, base_addr + 0x0000042c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000042c, rw, 0x00000000 >;

    using HSTADDRP8  = regbits< type,  0,  7 >;  /**< USB Host Address  */
    using HSTADDRP9  = regbits< type,  8,  7 >;  /**< USB Host Address  */
  };

  /**
   * Host Pipe Configuration Register (n = 0)
   */
  struct HSTPIPCFG[%s]
  : public reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ALLOC   = regbits< type,  1,  1 >;  /**< Pipe Memory Allocate              */
    using PBK     = regbits< type,  2,  2 >;  /**< Pipe Banks                        */
    using PSIZE   = regbits< type,  4,  3 >;  /**< Pipe Size                         */
    using PTOKEN  = regbits< type,  8,  2 >;  /**< Pipe Token                        */
    using AUTOSW  = regbits< type, 10,  1 >;  /**< Automatic Switch                  */
    using PTYPE   = regbits< type, 12,  2 >;  /**< Pipe Type                         */
    using PEPNUM  = regbits< type, 16,  4 >;  /**< Pipe Endpoint Number              */
    using INTFRQ  = regbits< type, 24,  8 >;  /**< Pipe Interrupt Request Frequency  */
  };

  /**
   * Host Pipe Configuration Register (n = 0)
   */
  struct HSTPIPCFG0_HSBOHSCP
  : public reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ALLOC      = regbits< type,  1,  1 >;  /**< Pipe Memory Allocate                                   */
    using PBK        = regbits< type,  2,  2 >;  /**< Pipe Banks                                             */
    using PSIZE      = regbits< type,  4,  3 >;  /**< Pipe Size                                              */
    using PTOKEN     = regbits< type,  8,  2 >;  /**< Pipe Token                                             */
    using AUTOSW     = regbits< type, 10,  1 >;  /**< Automatic Switch                                       */
    using PTYPE      = regbits< type, 12,  2 >;  /**< Pipe Type                                              */
    using PEPNUM     = regbits< type, 16,  4 >;  /**< Pipe Endpoint Number                                   */
    using PINGEN     = regbits< type, 20,  1 >;  /**< Ping Enable                                            */
    using BINTERVAL  = regbits< type, 24,  8 >;  /**< bInterval parameter for the Bulk-Out/Ping transaction  */
  };

  /**
   * Host Pipe Status Register (n = 0)
   */
  struct HSTPIPISR[%s]
  : public reg< uint32_t, base_addr + 0x00000530, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000530, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXINI         = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt      */
    using TXOUTI        = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt  */
    using TXSTPI        = regbits< type,  2,  1 >;  /**< Transmitted SETUP Interrupt     */
    using PERRI         = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt            */
    using NAKEDI        = regbits< type,  4,  1 >;  /**< NAKed Interrupt                 */
    using OVERFI        = regbits< type,  5,  1 >;  /**< Overflow Interrupt              */
    using RXSTALLDI     = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt      */
    using SHORTPACKETI  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt          */
    using DTSEQ         = regbits< type,  8,  2 >;  /**< Data Toggle Sequence            */
    using NBUSYBK       = regbits< type, 12,  2 >;  /**< Number of Busy Banks            */
    using CURRBK        = regbits< type, 14,  2 >;  /**< Current Bank                    */
    using RWALL         = regbits< type, 16,  1 >;  /**< Read-write Allowed              */
    using CFGOK         = regbits< type, 18,  1 >;  /**< Configuration OK Status         */
    using PBYCT         = regbits< type, 20, 11 >;  /**< Pipe Byte Count                 */
  };

  /**
   * Host Pipe Status Register (n = 0)
   */
  struct HSTPIPISR0_INTPIPES
  : public reg< uint32_t, base_addr + 0x00000530, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000530, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXINI         = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt      */
    using TXOUTI        = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt  */
    using UNDERFI       = regbits< type,  2,  1 >;  /**< Underflow Interrupt             */
    using PERRI         = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt            */
    using NAKEDI        = regbits< type,  4,  1 >;  /**< NAKed Interrupt                 */
    using OVERFI        = regbits< type,  5,  1 >;  /**< Overflow Interrupt              */
    using RXSTALLDI     = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt      */
    using SHORTPACKETI  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt          */
    using DTSEQ         = regbits< type,  8,  2 >;  /**< Data Toggle Sequence            */
    using NBUSYBK       = regbits< type, 12,  2 >;  /**< Number of Busy Banks            */
    using CURRBK        = regbits< type, 14,  2 >;  /**< Current Bank                    */
    using RWALL         = regbits< type, 16,  1 >;  /**< Read-write Allowed              */
    using CFGOK         = regbits< type, 18,  1 >;  /**< Configuration OK Status         */
    using PBYCT         = regbits< type, 20, 11 >;  /**< Pipe Byte Count                 */
  };

  /**
   * Host Pipe Status Register (n = 0)
   */
  struct HSTPIPISR0_ISOPIPES
  : public reg< uint32_t, base_addr + 0x00000530, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000530, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXINI         = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt      */
    using TXOUTI        = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt  */
    using UNDERFI       = regbits< type,  2,  1 >;  /**< Underflow Interrupt             */
    using PERRI         = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt            */
    using NAKEDI        = regbits< type,  4,  1 >;  /**< NAKed Interrupt                 */
    using OVERFI        = regbits< type,  5,  1 >;  /**< Overflow Interrupt              */
    using CRCERRI       = regbits< type,  6,  1 >;  /**< CRC Error Interrupt             */
    using SHORTPACKETI  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt          */
    using DTSEQ         = regbits< type,  8,  2 >;  /**< Data Toggle Sequence            */
    using NBUSYBK       = regbits< type, 12,  2 >;  /**< Number of Busy Banks            */
    using CURRBK        = regbits< type, 14,  2 >;  /**< Current Bank                    */
    using RWALL         = regbits< type, 16,  1 >;  /**< Read-write Allowed              */
    using CFGOK         = regbits< type, 18,  1 >;  /**< Configuration OK Status         */
    using PBYCT         = regbits< type, 20, 11 >;  /**< Pipe Byte Count                 */
  };

  /**
   * Host Pipe Clear Register (n = 0)
   */
  struct HSTPIPICR[%s]
  : public reg< uint32_t, base_addr + 0x00000560, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000560, wo, 0 >;

    using RXINIC         = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Clear      */
    using TXOUTIC        = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Clear  */
    using TXSTPIC        = regbits< type,  2,  1 >;  /**< Transmitted SETUP Interrupt Clear     */
    using NAKEDIC        = regbits< type,  4,  1 >;  /**< NAKed Interrupt Clear                 */
    using OVERFIC        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Clear              */
    using RXSTALLDIC     = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Clear      */
    using SHORTPACKETIC  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Clear          */
  };

  /**
   * Host Pipe Clear Register (n = 0)
   */
  struct HSTPIPICR0_INTPIPES
  : public reg< uint32_t, base_addr + 0x00000560, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000560, wo, 0 >;

    using RXINIC         = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Clear      */
    using TXOUTIC        = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Clear  */
    using UNDERFIC       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Clear             */
    using NAKEDIC        = regbits< type,  4,  1 >;  /**< NAKed Interrupt Clear                 */
    using OVERFIC        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Clear              */
    using RXSTALLDIC     = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Clear      */
    using SHORTPACKETIC  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Clear          */
  };

  /**
   * Host Pipe Clear Register (n = 0)
   */
  struct HSTPIPICR0_ISOPIPES
  : public reg< uint32_t, base_addr + 0x00000560, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000560, wo, 0 >;

    using RXINIC         = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Clear      */
    using TXOUTIC        = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Clear  */
    using UNDERFIC       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Clear             */
    using NAKEDIC        = regbits< type,  4,  1 >;  /**< NAKed Interrupt Clear                 */
    using OVERFIC        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Clear              */
    using CRCERRIC       = regbits< type,  6,  1 >;  /**< CRC Error Interrupt Clear             */
    using SHORTPACKETIC  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Clear          */
  };

  /**
   * Host Pipe Set Register (n = 0)
   */
  struct HSTPIPIFR[%s]
  : public reg< uint32_t, base_addr + 0x00000590, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000590, wo, 0 >;

    using RXINIS         = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Set      */
    using TXOUTIS        = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Set  */
    using TXSTPIS        = regbits< type,  2,  1 >;  /**< Transmitted SETUP Interrupt Set     */
    using PERRIS         = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Set            */
    using NAKEDIS        = regbits< type,  4,  1 >;  /**< NAKed Interrupt Set                 */
    using OVERFIS        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Set              */
    using RXSTALLDIS     = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Set      */
    using SHORTPACKETIS  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Set          */
    using NBUSYBKS       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Set            */
  };

  /**
   * Host Pipe Set Register (n = 0)
   */
  struct HSTPIPIFR0_INTPIPES
  : public reg< uint32_t, base_addr + 0x00000590, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000590, wo, 0 >;

    using RXINIS         = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Set      */
    using TXOUTIS        = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Set  */
    using UNDERFIS       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Set             */
    using PERRIS         = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Set            */
    using NAKEDIS        = regbits< type,  4,  1 >;  /**< NAKed Interrupt Set                 */
    using OVERFIS        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Set              */
    using RXSTALLDIS     = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Set      */
    using SHORTPACKETIS  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Set          */
    using NBUSYBKS       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Set            */
  };

  /**
   * Host Pipe Set Register (n = 0)
   */
  struct HSTPIPIFR0_ISOPIPES
  : public reg< uint32_t, base_addr + 0x00000590, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000590, wo, 0 >;

    using RXINIS         = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Set      */
    using TXOUTIS        = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Set  */
    using UNDERFIS       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Set             */
    using PERRIS         = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Set            */
    using NAKEDIS        = regbits< type,  4,  1 >;  /**< NAKed Interrupt Set                 */
    using OVERFIS        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Set              */
    using CRCERRIS       = regbits< type,  6,  1 >;  /**< CRC Error Interrupt Set             */
    using SHORTPACKETIS  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Set          */
    using NBUSYBKS       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Set            */
  };

  /**
   * Host Pipe Mask Register (n = 0)
   */
  struct HSTPIPIMR[%s]
  : public reg< uint32_t, base_addr + 0x000005c0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000005c0, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXINE          = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Enable            */
    using TXOUTE         = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Enable        */
    using TXSTPE         = regbits< type,  2,  1 >;  /**< Transmitted SETUP Interrupt Enable           */
    using PERRE          = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Enable                  */
    using NAKEDE         = regbits< type,  4,  1 >;  /**< NAKed Interrupt Enable                       */
    using OVERFIE        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Enable                    */
    using RXSTALLDE      = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Enable            */
    using SHORTPACKETIE  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Enable                */
    using NBUSYBKE       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt Enable        */
    using FIFOCON        = regbits< type, 14,  1 >;  /**< FIFO Control                                 */
    using PDISHDMA       = regbits< type, 16,  1 >;  /**< Pipe Interrupts Disable HDMA Request Enable  */
    using PFREEZE        = regbits< type, 17,  1 >;  /**< Pipe Freeze                                  */
    using RSTDT          = regbits< type, 18,  1 >;  /**< Reset Data Toggle                            */
  };

  /**
   * Host Pipe Mask Register (n = 0)
   */
  struct HSTPIPIMR0_INTPIPES
  : public reg< uint32_t, base_addr + 0x000005c0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000005c0, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXINE          = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Enable            */
    using TXOUTE         = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Enable        */
    using UNDERFIE       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Enable                   */
    using PERRE          = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Enable                  */
    using NAKEDE         = regbits< type,  4,  1 >;  /**< NAKed Interrupt Enable                       */
    using OVERFIE        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Enable                    */
    using RXSTALLDE      = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Enable            */
    using SHORTPACKETIE  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Enable                */
    using NBUSYBKE       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt Enable        */
    using FIFOCON        = regbits< type, 14,  1 >;  /**< FIFO Control                                 */
    using PDISHDMA       = regbits< type, 16,  1 >;  /**< Pipe Interrupts Disable HDMA Request Enable  */
    using PFREEZE        = regbits< type, 17,  1 >;  /**< Pipe Freeze                                  */
    using RSTDT          = regbits< type, 18,  1 >;  /**< Reset Data Toggle                            */
  };

  /**
   * Host Pipe Mask Register (n = 0)
   */
  struct HSTPIPIMR0_ISOPIPES
  : public reg< uint32_t, base_addr + 0x000005c0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000005c0, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RXINE          = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Enable            */
    using TXOUTE         = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Enable        */
    using UNDERFIE       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Enable                   */
    using PERRE          = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Enable                  */
    using NAKEDE         = regbits< type,  4,  1 >;  /**< NAKed Interrupt Enable                       */
    using OVERFIE        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Enable                    */
    using CRCERRE        = regbits< type,  6,  1 >;  /**< CRC Error Interrupt Enable                   */
    using SHORTPACKETIE  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Enable                */
    using NBUSYBKE       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Interrupt Enable        */
    using FIFOCON        = regbits< type, 14,  1 >;  /**< FIFO Control                                 */
    using PDISHDMA       = regbits< type, 16,  1 >;  /**< Pipe Interrupts Disable HDMA Request Enable  */
    using PFREEZE        = regbits< type, 17,  1 >;  /**< Pipe Freeze                                  */
    using RSTDT          = regbits< type, 18,  1 >;  /**< Reset Data Toggle                            */
  };

  /**
   * Host Pipe Enable Register (n = 0)
   */
  struct HSTPIPIER[%s]
  : public reg< uint32_t, base_addr + 0x000005f0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000005f0, wo, 0 >;

    using RXINES          = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Enable            */
    using TXOUTES         = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Enable        */
    using TXSTPES         = regbits< type,  2,  1 >;  /**< Transmitted SETUP Interrupt Enable           */
    using PERRES          = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Enable                  */
    using NAKEDES         = regbits< type,  4,  1 >;  /**< NAKed Interrupt Enable                       */
    using OVERFIES        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Enable                    */
    using RXSTALLDES      = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Enable            */
    using SHORTPACKETIES  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Enable                */
    using NBUSYBKES       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Enable                  */
    using PDISHDMAS       = regbits< type, 16,  1 >;  /**< Pipe Interrupts Disable HDMA Request Enable  */
    using PFREEZES        = regbits< type, 17,  1 >;  /**< Pipe Freeze Enable                           */
    using RSTDTS          = regbits< type, 18,  1 >;  /**< Reset Data Toggle Enable                     */
  };

  /**
   * Host Pipe Enable Register (n = 0)
   */
  struct HSTPIPIER0_INTPIPES
  : public reg< uint32_t, base_addr + 0x000005f0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000005f0, wo, 0 >;

    using RXINES          = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Enable            */
    using TXOUTES         = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Enable        */
    using UNDERFIES       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Enable                   */
    using PERRES          = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Enable                  */
    using NAKEDES         = regbits< type,  4,  1 >;  /**< NAKed Interrupt Enable                       */
    using OVERFIES        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Enable                    */
    using RXSTALLDES      = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Enable            */
    using SHORTPACKETIES  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Enable                */
    using NBUSYBKES       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Enable                  */
    using PDISHDMAS       = regbits< type, 16,  1 >;  /**< Pipe Interrupts Disable HDMA Request Enable  */
    using PFREEZES        = regbits< type, 17,  1 >;  /**< Pipe Freeze Enable                           */
    using RSTDTS          = regbits< type, 18,  1 >;  /**< Reset Data Toggle Enable                     */
  };

  /**
   * Host Pipe Enable Register (n = 0)
   */
  struct HSTPIPIER0_ISOPIPES
  : public reg< uint32_t, base_addr + 0x000005f0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000005f0, wo, 0 >;

    using RXINES          = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Enable            */
    using TXOUTES         = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Enable        */
    using UNDERFIES       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Enable                   */
    using PERRES          = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Enable                  */
    using NAKEDES         = regbits< type,  4,  1 >;  /**< NAKed Interrupt Enable                       */
    using OVERFIES        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Enable                    */
    using CRCERRES        = regbits< type,  6,  1 >;  /**< CRC Error Interrupt Enable                   */
    using SHORTPACKETIES  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Enable                */
    using NBUSYBKES       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Enable                  */
    using PDISHDMAS       = regbits< type, 16,  1 >;  /**< Pipe Interrupts Disable HDMA Request Enable  */
    using PFREEZES        = regbits< type, 17,  1 >;  /**< Pipe Freeze Enable                           */
    using RSTDTS          = regbits< type, 18,  1 >;  /**< Reset Data Toggle Enable                     */
  };

  /**
   * Host Pipe Disable Register (n = 0)
   */
  struct HSTPIPIDR[%s]
  : public reg< uint32_t, base_addr + 0x00000620, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000620, wo, 0 >;

    using RXINEC          = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Disable            */
    using TXOUTEC         = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Disable        */
    using TXSTPEC         = regbits< type,  2,  1 >;  /**< Transmitted SETUP Interrupt Disable           */
    using PERREC          = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Disable                  */
    using NAKEDEC         = regbits< type,  4,  1 >;  /**< NAKed Interrupt Disable                       */
    using OVERFIEC        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Disable                    */
    using RXSTALLDEC      = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Disable            */
    using SHORTPACKETIEC  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Disable                */
    using NBUSYBKEC       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Disable                  */
    using FIFOCONC        = regbits< type, 14,  1 >;  /**< FIFO Control Disable                          */
    using PDISHDMAC       = regbits< type, 16,  1 >;  /**< Pipe Interrupts Disable HDMA Request Disable  */
    using PFREEZEC        = regbits< type, 17,  1 >;  /**< Pipe Freeze Disable                           */
  };

  /**
   * Host Pipe Disable Register (n = 0)
   */
  struct HSTPIPIDR0_INTPIPES
  : public reg< uint32_t, base_addr + 0x00000620, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000620, wo, 0 >;

    using RXINEC          = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Disable            */
    using TXOUTEC         = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Disable        */
    using UNDERFIEC       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Disable                   */
    using PERREC          = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Disable                  */
    using NAKEDEC         = regbits< type,  4,  1 >;  /**< NAKed Interrupt Disable                       */
    using OVERFIEC        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Disable                    */
    using RXSTALLDEC      = regbits< type,  6,  1 >;  /**< Received STALLed Interrupt Disable            */
    using SHORTPACKETIEC  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Disable                */
    using NBUSYBKEC       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Disable                  */
    using FIFOCONC        = regbits< type, 14,  1 >;  /**< FIFO Control Disable                          */
    using PDISHDMAC       = regbits< type, 16,  1 >;  /**< Pipe Interrupts Disable HDMA Request Disable  */
    using PFREEZEC        = regbits< type, 17,  1 >;  /**< Pipe Freeze Disable                           */
  };

  /**
   * Host Pipe Disable Register (n = 0)
   */
  struct HSTPIPIDR0_ISOPIPES
  : public reg< uint32_t, base_addr + 0x00000620, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000620, wo, 0 >;

    using RXINEC          = regbits< type,  0,  1 >;  /**< Received IN Data Interrupt Disable            */
    using TXOUTEC         = regbits< type,  1,  1 >;  /**< Transmitted OUT Data Interrupt Disable        */
    using UNDERFIEC       = regbits< type,  2,  1 >;  /**< Underflow Interrupt Disable                   */
    using PERREC          = regbits< type,  3,  1 >;  /**< Pipe Error Interrupt Disable                  */
    using NAKEDEC         = regbits< type,  4,  1 >;  /**< NAKed Interrupt Disable                       */
    using OVERFIEC        = regbits< type,  5,  1 >;  /**< Overflow Interrupt Disable                    */
    using CRCERREC        = regbits< type,  6,  1 >;  /**< CRC Error Interrupt Disable                   */
    using SHORTPACKETIEC  = regbits< type,  7,  1 >;  /**< Short Packet Interrupt Disable                */
    using NBUSYBKEC       = regbits< type, 12,  1 >;  /**< Number of Busy Banks Disable                  */
    using FIFOCONC        = regbits< type, 14,  1 >;  /**< FIFO Control Disable                          */
    using PDISHDMAC       = regbits< type, 16,  1 >;  /**< Pipe Interrupts Disable HDMA Request Disable  */
    using PFREEZEC        = regbits< type, 17,  1 >;  /**< Pipe Freeze Disable                           */
  };

  /**
   * Host Pipe IN Request Register (n = 0)
   */
  struct HSTPIPINRQ[%s]
  : public reg< uint32_t, base_addr + 0x00000650, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000650, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using INRQ    = regbits< type,  0,  8 >;  /**< IN Request Number before Freeze  */
    using INMODE  = regbits< type,  8,  1 >;  /**< IN Request Mode                  */
  };

  /**
   * Host Pipe Error Register (n = 0)
   */
  struct HSTPIPERR[%s]
  : public reg< uint32_t, base_addr + 0x00000680, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000680, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DATATGL  = regbits< type,  0,  1 >;  /**< Data Toggle Error  */
    using DATAPID  = regbits< type,  1,  1 >;  /**< Data PID Error     */
    using PID      = regbits< type,  2,  1 >;  /**< PID Error          */
    using TIMEOUT  = regbits< type,  3,  1 >;  /**< Time-Out Error     */
    using CRC16    = regbits< type,  4,  1 >;  /**< CRC16 Error        */
    using COUNTER  = regbits< type,  5,  2 >;  /**< Error Counter      */
  };

  /**
   * Host DMA Channel Next Descriptor Address Register (n = 1)
   */
  struct HSTDMANXTDSC1
  : public reg< uint32_t, base_addr + 0x00000710, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000710, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Host DMA Channel Address Register (n = 1)
   */
  struct HSTDMAADDRESS1
  : public reg< uint32_t, base_addr + 0x00000714, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000714, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Host DMA Channel Control Register (n = 1)
   */
  struct HSTDMACONTROL1
  : public reg< uint32_t, base_addr + 0x00000718, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000718, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                      */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Host DMA Channel Status Register (n = 1)
   */
  struct HSTDMASTATUS1
  : public reg< uint32_t, base_addr + 0x0000071c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000071c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Host DMA Channel Next Descriptor Address Register (n = 2)
   */
  struct HSTDMANXTDSC2
  : public reg< uint32_t, base_addr + 0x00000720, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000720, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Host DMA Channel Address Register (n = 2)
   */
  struct HSTDMAADDRESS2
  : public reg< uint32_t, base_addr + 0x00000724, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000724, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Host DMA Channel Control Register (n = 2)
   */
  struct HSTDMACONTROL2
  : public reg< uint32_t, base_addr + 0x00000728, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000728, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                      */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Host DMA Channel Status Register (n = 2)
   */
  struct HSTDMASTATUS2
  : public reg< uint32_t, base_addr + 0x0000072c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000072c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Host DMA Channel Next Descriptor Address Register (n = 3)
   */
  struct HSTDMANXTDSC3
  : public reg< uint32_t, base_addr + 0x00000730, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000730, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Host DMA Channel Address Register (n = 3)
   */
  struct HSTDMAADDRESS3
  : public reg< uint32_t, base_addr + 0x00000734, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000734, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Host DMA Channel Control Register (n = 3)
   */
  struct HSTDMACONTROL3
  : public reg< uint32_t, base_addr + 0x00000738, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000738, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                      */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Host DMA Channel Status Register (n = 3)
   */
  struct HSTDMASTATUS3
  : public reg< uint32_t, base_addr + 0x0000073c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000073c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Host DMA Channel Next Descriptor Address Register (n = 4)
   */
  struct HSTDMANXTDSC4
  : public reg< uint32_t, base_addr + 0x00000740, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000740, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Host DMA Channel Address Register (n = 4)
   */
  struct HSTDMAADDRESS4
  : public reg< uint32_t, base_addr + 0x00000744, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000744, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Host DMA Channel Control Register (n = 4)
   */
  struct HSTDMACONTROL4
  : public reg< uint32_t, base_addr + 0x00000748, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000748, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                      */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Host DMA Channel Status Register (n = 4)
   */
  struct HSTDMASTATUS4
  : public reg< uint32_t, base_addr + 0x0000074c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000074c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Host DMA Channel Next Descriptor Address Register (n = 5)
   */
  struct HSTDMANXTDSC5
  : public reg< uint32_t, base_addr + 0x00000750, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000750, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Host DMA Channel Address Register (n = 5)
   */
  struct HSTDMAADDRESS5
  : public reg< uint32_t, base_addr + 0x00000754, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000754, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Host DMA Channel Control Register (n = 5)
   */
  struct HSTDMACONTROL5
  : public reg< uint32_t, base_addr + 0x00000758, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000758, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                      */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Host DMA Channel Status Register (n = 5)
   */
  struct HSTDMASTATUS5
  : public reg< uint32_t, base_addr + 0x0000075c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000075c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Host DMA Channel Next Descriptor Address Register (n = 6)
   */
  struct HSTDMANXTDSC6
  : public reg< uint32_t, base_addr + 0x00000760, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000760, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Host DMA Channel Address Register (n = 6)
   */
  struct HSTDMAADDRESS6
  : public reg< uint32_t, base_addr + 0x00000764, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000764, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Host DMA Channel Control Register (n = 6)
   */
  struct HSTDMACONTROL6
  : public reg< uint32_t, base_addr + 0x00000768, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000768, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                      */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Host DMA Channel Status Register (n = 6)
   */
  struct HSTDMASTATUS6
  : public reg< uint32_t, base_addr + 0x0000076c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000076c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * Host DMA Channel Next Descriptor Address Register (n = 7)
   */
  struct HSTDMANXTDSC7
  : public reg< uint32_t, base_addr + 0x00000770, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000770, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * Host DMA Channel Address Register (n = 7)
   */
  struct HSTDMAADDRESS7
  : public reg< uint32_t, base_addr + 0x00000774, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000774, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * Host DMA Channel Control Register (n = 7)
   */
  struct HSTDMACONTROL7
  : public reg< uint32_t, base_addr + 0x00000778, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000778, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< Channel Enable Command                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable Command  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                      */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable Control                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                      */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                        */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                    */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                     */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                       */
  };

  /**
   * Host DMA Channel Status Register (n = 7)
   */
  struct HSTDMASTATUS7
  : public reg< uint32_t, base_addr + 0x0000077c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000077c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * General Control Register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x00000800, rw, 0x03004000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000800, rw, 0x03004000 >;

    using IDTE      = regbits< type,  0,  1 >;  /**< ID Transition Interrupt Enable       */
    using VBUSTE    = regbits< type,  1,  1 >;  /**< VBus Transition Interrupt Enable     */
    using SRPE      = regbits< type,  2,  1 >;  /**< SRP Interrupt Enable                 */
    using VBERRE    = regbits< type,  3,  1 >;  /**< VBus Error Interrupt Enable          */
    using BCERRE    = regbits< type,  4,  1 >;  /**< B-Connection Error Interrupt Enable  */
    using ROLEEXE   = regbits< type,  5,  1 >;  /**< Role Exchange Interrupt Enable       */
    using HNPERRE   = regbits< type,  6,  1 >;  /**< HNP Error Interrupt Enable           */
    using STOE      = regbits< type,  7,  1 >;  /**< Suspend Time-Out Interrupt Enable    */
    using VBUSHWC   = regbits< type,  8,  1 >;  /**< VBus Hardware Control                */
    using SRPSEL    = regbits< type,  9,  1 >;  /**< SRP Selection                        */
    using SRPREQ    = regbits< type, 10,  1 >;  /**< SRP Request                          */
    using HNPREQ    = regbits< type, 11,  1 >;  /**< HNP Request                          */
    using OTGPADE   = regbits< type, 12,  1 >;  /**< OTG Pad Enable                       */
    using VBUSPO    = regbits< type, 13,  1 >;  /**< VBus Polarity Off                    */
    using FRZCLK    = regbits< type, 14,  1 >;  /**< Freeze USB Clock                     */
    using USBE      = regbits< type, 15,  1 >;  /**< UOTGHS Enable                        */
    using TIMVALUE  = regbits< type, 16,  2 >;  /**< Timer Value                          */
    using TIMPAGE   = regbits< type, 20,  2 >;  /**< Timer Page                           */
    using UNLOCK    = regbits< type, 22,  1 >;  /**< Timer Access Unlock                  */
    using UIDE      = regbits< type, 24,  1 >;  /**< UOTGID Pin Enable                    */
    using UIMOD     = regbits< type, 25,  1 >;  /**< UOTGHS Mode                          */
  };

  /**
   * General Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000804, ro, 0x00000400 >
  {
    using type = reg< uint32_t, base_addr + 0x00000804, ro, 0x00000400 >;

    using IDTI       = regbits< type,  0,  1 >;  /**< ID Transition Interrupt       */
    using VBUSTI     = regbits< type,  1,  1 >;  /**< VBus Transition Interrupt     */
    using SRPI       = regbits< type,  2,  1 >;  /**< SRP Interrupt                 */
    using VBERRI     = regbits< type,  3,  1 >;  /**< VBus Error Interrupt          */
    using BCERRI     = regbits< type,  4,  1 >;  /**< B-Connection Error Interrupt  */
    using ROLEEXI    = regbits< type,  5,  1 >;  /**< Role Exchange Interrupt       */
    using HNPERRI    = regbits< type,  6,  1 >;  /**< HNP Error Interrupt           */
    using STOI       = regbits< type,  7,  1 >;  /**< Suspend Time-Out Interrupt    */
    using VBUSRQ     = regbits< type,  9,  1 >;  /**< VBus Request                  */
    using ID         = regbits< type, 10,  1 >;  /**< UOTGID Pin State              */
    using VBUS       = regbits< type, 11,  1 >;  /**< VBus Level                    */
    using SPEED      = regbits< type, 12,  2 >;  /**< Speed Status                  */
    using CLKUSABLE  = regbits< type, 14,  1 >;  /**< UTMI Clock Usable             */
  };

  /**
   * General Status Clear Register
   */
  struct SCR
  : public reg< uint32_t, base_addr + 0x00000808, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000808, wo, 0 >;

    using IDTIC     = regbits< type,  0,  1 >;  /**< ID Transition Interrupt Clear       */
    using VBUSTIC   = regbits< type,  1,  1 >;  /**< VBus Transition Interrupt Clear     */
    using SRPIC     = regbits< type,  2,  1 >;  /**< SRP Interrupt Clear                 */
    using VBERRIC   = regbits< type,  3,  1 >;  /**< VBus Error Interrupt Clear          */
    using BCERRIC   = regbits< type,  4,  1 >;  /**< B-Connection Error Interrupt Clear  */
    using ROLEEXIC  = regbits< type,  5,  1 >;  /**< Role Exchange Interrupt Clear       */
    using HNPERRIC  = regbits< type,  6,  1 >;  /**< HNP Error Interrupt Clear           */
    using STOIC     = regbits< type,  7,  1 >;  /**< Suspend Time-Out Interrupt Clear    */
    using VBUSRQC   = regbits< type,  9,  1 >;  /**< VBus Request Clear                  */
  };

  /**
   * General Status Set Register
   */
  struct SFR
  : public reg< uint32_t, base_addr + 0x0000080c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000080c, wo, 0 >;

    using IDTIS     = regbits< type,  0,  1 >;  /**< ID Transition Interrupt Set       */
    using VBUSTIS   = regbits< type,  1,  1 >;  /**< VBus Transition Interrupt Set     */
    using SRPIS     = regbits< type,  2,  1 >;  /**< SRP Interrupt Set                 */
    using VBERRIS   = regbits< type,  3,  1 >;  /**< VBus Error Interrupt Set          */
    using BCERRIS   = regbits< type,  4,  1 >;  /**< B-Connection Error Interrupt Set  */
    using ROLEEXIS  = regbits< type,  5,  1 >;  /**< Role Exchange Interrupt Set       */
    using HNPERRIS  = regbits< type,  6,  1 >;  /**< HNP Error Interrupt Set           */
    using STOIS     = regbits< type,  7,  1 >;  /**< Suspend Time-Out Interrupt Set    */
    using VBUSRQS   = regbits< type,  9,  1 >;  /**< VBus Request Set                  */
  };

  /**
   * General Finite State Machine Register
   */
  struct FSM
  : public reg< uint32_t, base_addr + 0x0000082c, ro, 0x00000009 >
  {
    using type = reg< uint32_t, base_addr + 0x0000082c, ro, 0x00000009 >;

    using DRDSTATE  = regbits< type,  0,  4 >;  /**< Dual Role Device State  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UOTGHS_HPP_INCLUDED
