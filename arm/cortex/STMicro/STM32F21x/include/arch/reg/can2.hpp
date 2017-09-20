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
//  Import from CMSIS-SVD: "STMicro/STM32F21x.svd"
//
//  name: STM32F21x
//  version: 1.0
//  description: STM32F21x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CAN2_HPP_INCLUDED
#define ARCH_REG_CAN2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Controller area network
 */
struct CAN2
{
  static constexpr reg_addr_t base_addr = 0x40006800;

  /**
   * master control register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using DBF    = regbits< type, 16,  1 >;  /**< DBF    */
    using RESET  = regbits< type, 15,  1 >;  /**< RESET  */
    using TTCM   = regbits< type,  7,  1 >;  /**< TTCM   */
    using ABOM   = regbits< type,  6,  1 >;  /**< ABOM   */
    using AWUM   = regbits< type,  5,  1 >;  /**< AWUM   */
    using NART   = regbits< type,  4,  1 >;  /**< NART   */
    using RFLM   = regbits< type,  3,  1 >;  /**< RFLM   */
    using TXFP   = regbits< type,  2,  1 >;  /**< TXFP   */
    using SLEEP  = regbits< type,  1,  1 >;  /**< SLEEP  */
    using INRQ   = regbits< type,  0,  1 >;  /**< INRQ   */
  };

  /**
   * master status register
   */
  struct MSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using RX     = regbits< type, 11,  1 >;  /**< RX     */
    using SAMP   = regbits< type, 10,  1 >;  /**< SAMP   */
    using RXM    = regbits< type,  9,  1 >;  /**< RXM    */
    using TXM    = regbits< type,  8,  1 >;  /**< TXM    */
    using SLAKI  = regbits< type,  4,  1 >;  /**< SLAKI  */
    using WKUI   = regbits< type,  3,  1 >;  /**< WKUI   */
    using ERRI   = regbits< type,  2,  1 >;  /**< ERRI   */
    using SLAK   = regbits< type,  1,  1 >;  /**< SLAK   */
    using INAK   = regbits< type,  0,  1 >;  /**< INAK   */
  };

  /**
   * transmit status register
   */
  struct TSR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using LOW2   = regbits< type, 31,  1 >;  /**< Lowest priority flag for mailbox 2  */
    using LOW1   = regbits< type, 30,  1 >;  /**< Lowest priority flag for mailbox 1  */
    using LOW0   = regbits< type, 29,  1 >;  /**< Lowest priority flag for mailbox 0  */
    using TME2   = regbits< type, 28,  1 >;  /**< Lowest priority flag for mailbox 2  */
    using TME1   = regbits< type, 27,  1 >;  /**< Lowest priority flag for mailbox 1  */
    using TME0   = regbits< type, 26,  1 >;  /**< Lowest priority flag for mailbox 0  */
    using CODE   = regbits< type, 24,  2 >;  /**< CODE                                */
    using ABRQ2  = regbits< type, 23,  1 >;  /**< ABRQ2                               */
    using TERR2  = regbits< type, 19,  1 >;  /**< TERR2                               */
    using ALST2  = regbits< type, 18,  1 >;  /**< ALST2                               */
    using TXOK2  = regbits< type, 17,  1 >;  /**< TXOK2                               */
    using RQCP2  = regbits< type, 16,  1 >;  /**< RQCP2                               */
    using ABRQ1  = regbits< type, 15,  1 >;  /**< ABRQ1                               */
    using TERR1  = regbits< type, 11,  1 >;  /**< TERR1                               */
    using ALST1  = regbits< type, 10,  1 >;  /**< ALST1                               */
    using TXOK1  = regbits< type,  9,  1 >;  /**< TXOK1                               */
    using RQCP1  = regbits< type,  8,  1 >;  /**< RQCP1                               */
    using ABRQ0  = regbits< type,  7,  1 >;  /**< ABRQ0                               */
    using TERR0  = regbits< type,  3,  1 >;  /**< TERR0                               */
    using ALST0  = regbits< type,  2,  1 >;  /**< ALST0                               */
    using TXOK0  = regbits< type,  1,  1 >;  /**< TXOK0                               */
    using RQCP0  = regbits< type,  0,  1 >;  /**< RQCP0                               */
  };

  /**
   * receive FIFO 0 register
   */
  struct RF0R
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using RFOM0  = regbits< type,  5,  1 >;  /**< RFOM0  */
    using FOVR0  = regbits< type,  4,  1 >;  /**< FOVR0  */
    using FULL0  = regbits< type,  3,  1 >;  /**< FULL0  */
    using FMP0   = regbits< type,  0,  2 >;  /**< FMP0   */
  };

  /**
   * receive FIFO 1 register
   */
  struct RF1R
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using RFOM1  = regbits< type,  5,  1 >;  /**< RFOM1  */
    using FOVR1  = regbits< type,  4,  1 >;  /**< FOVR1  */
    using FULL1  = regbits< type,  3,  1 >;  /**< FULL1  */
    using FMP1   = regbits< type,  0,  2 >;  /**< FMP1   */
  };

  /**
   * interrupt enable register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using SLKIE   = regbits< type, 17,  1 >;  /**< SLKIE   */
    using WKUIE   = regbits< type, 16,  1 >;  /**< WKUIE   */
    using ERRIE   = regbits< type, 15,  1 >;  /**< ERRIE   */
    using LECIE   = regbits< type, 11,  1 >;  /**< LECIE   */
    using BOFIE   = regbits< type, 10,  1 >;  /**< BOFIE   */
    using EPVIE   = regbits< type,  9,  1 >;  /**< EPVIE   */
    using EWGIE   = regbits< type,  8,  1 >;  /**< EWGIE   */
    using FOVIE1  = regbits< type,  6,  1 >;  /**< FOVIE1  */
    using FFIE1   = regbits< type,  5,  1 >;  /**< FFIE1   */
    using FMPIE1  = regbits< type,  4,  1 >;  /**< FMPIE1  */
    using FOVIE0  = regbits< type,  3,  1 >;  /**< FOVIE0  */
    using FFIE0   = regbits< type,  2,  1 >;  /**< FFIE0   */
    using FMPIE0  = regbits< type,  1,  1 >;  /**< FMPIE0  */
    using TMEIE   = regbits< type,  0,  1 >;  /**< TMEIE   */
  };

  /**
   * interrupt enable register
   */
  struct ESR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using REC   = regbits< type, 24,  8 >;  /**< REC   */
    using TEC   = regbits< type, 16,  8 >;  /**< TEC   */
    using LEC   = regbits< type,  4,  3 >;  /**< LEC   */
    using BOFF  = regbits< type,  2,  1 >;  /**< BOFF  */
    using EPVF  = regbits< type,  1,  1 >;  /**< EPVF  */
    using EWGF  = regbits< type,  0,  1 >;  /**< EWGF  */
  };

  /**
   * bit timing register
   */
  struct BTR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using SILM  = regbits< type, 31,  1 >;  /**< SILM  */
    using LBKM  = regbits< type, 30,  1 >;  /**< LBKM  */
    using SJW   = regbits< type, 24,  2 >;  /**< SJW   */
    using TS2   = regbits< type, 20,  3 >;  /**< TS2   */
    using TS1   = regbits< type, 16,  4 >;  /**< TS1   */
    using BRP   = regbits< type,  0, 10 >;  /**< BRP   */
  };

  /**
   * TX mailbox identifier register
   */
  struct TI0R
  : public reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >;

    using STID  = regbits< type, 21, 11 >;  /**< STID  */
    using EXID  = regbits< type,  3, 18 >;  /**< EXID  */
    using IDE   = regbits< type,  2,  1 >;  /**< IDE   */
    using RTR   = regbits< type,  1,  1 >;  /**< RTR   */
    using TXRQ  = regbits< type,  0,  1 >;  /**< TXRQ  */
  };

  /**
   * mailbox data length control and time stamp register
   */
  struct TDT0R
  : public reg< uint32_t, base_addr + 0x184, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0x00000000 >;

    using TIME  = regbits< type, 16, 16 >;  /**< TIME  */
    using TGT   = regbits< type,  8,  1 >;  /**< TGT   */
    using DLC   = regbits< type,  0,  4 >;  /**< DLC   */
  };

  /**
   * mailbox data low register
   */
  struct TDL0R
  : public reg< uint32_t, base_addr + 0x188, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0x00000000 >;

    using DATA3  = regbits< type, 24,  8 >;  /**< DATA3  */
    using DATA2  = regbits< type, 16,  8 >;  /**< DATA2  */
    using DATA1  = regbits< type,  8,  8 >;  /**< DATA1  */
    using DATA0  = regbits< type,  0,  8 >;  /**< DATA0  */
  };

  /**
   * mailbox data high register
   */
  struct TDH0R
  : public reg< uint32_t, base_addr + 0x18c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18c, rw, 0x00000000 >;

    using DATA7  = regbits< type, 24,  8 >;  /**< DATA7  */
    using DATA6  = regbits< type, 16,  8 >;  /**< DATA6  */
    using DATA5  = regbits< type,  8,  8 >;  /**< DATA5  */
    using DATA4  = regbits< type,  0,  8 >;  /**< DATA4  */
  };

  /**
   * mailbox identifier register
   */
  struct TI1R
  : public reg< uint32_t, base_addr + 0x190, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0x00000000 >;

    using STID  = regbits< type, 21, 11 >;  /**< STID  */
    using EXID  = regbits< type,  3, 18 >;  /**< EXID  */
    using IDE   = regbits< type,  2,  1 >;  /**< IDE   */
    using RTR   = regbits< type,  1,  1 >;  /**< RTR   */
    using TXRQ  = regbits< type,  0,  1 >;  /**< TXRQ  */
  };

  /**
   * mailbox data length control and time stamp register
   */
  struct TDT1R
  : public reg< uint32_t, base_addr + 0x194, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x194, rw, 0x00000000 >;

    using TIME  = regbits< type, 16, 16 >;  /**< TIME  */
    using TGT   = regbits< type,  8,  1 >;  /**< TGT   */
    using DLC   = regbits< type,  0,  4 >;  /**< DLC   */
  };

  /**
   * mailbox data low register
   */
  struct TDL1R
  : public reg< uint32_t, base_addr + 0x198, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x198, rw, 0x00000000 >;

    using DATA3  = regbits< type, 24,  8 >;  /**< DATA3  */
    using DATA2  = regbits< type, 16,  8 >;  /**< DATA2  */
    using DATA1  = regbits< type,  8,  8 >;  /**< DATA1  */
    using DATA0  = regbits< type,  0,  8 >;  /**< DATA0  */
  };

  /**
   * mailbox data high register
   */
  struct TDH1R
  : public reg< uint32_t, base_addr + 0x19c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x19c, rw, 0x00000000 >;

    using DATA7  = regbits< type, 24,  8 >;  /**< DATA7  */
    using DATA6  = regbits< type, 16,  8 >;  /**< DATA6  */
    using DATA5  = regbits< type,  8,  8 >;  /**< DATA5  */
    using DATA4  = regbits< type,  0,  8 >;  /**< DATA4  */
  };

  /**
   * mailbox identifier register
   */
  struct TI2R
  : public reg< uint32_t, base_addr + 0x1a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a0, rw, 0x00000000 >;

    using STID  = regbits< type, 21, 11 >;  /**< STID  */
    using EXID  = regbits< type,  3, 18 >;  /**< EXID  */
    using IDE   = regbits< type,  2,  1 >;  /**< IDE   */
    using RTR   = regbits< type,  1,  1 >;  /**< RTR   */
    using TXRQ  = regbits< type,  0,  1 >;  /**< TXRQ  */
  };

  /**
   * mailbox data length control and time stamp register
   */
  struct TDT2R
  : public reg< uint32_t, base_addr + 0x1a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a4, rw, 0x00000000 >;

    using TIME  = regbits< type, 16, 16 >;  /**< TIME  */
    using TGT   = regbits< type,  8,  1 >;  /**< TGT   */
    using DLC   = regbits< type,  0,  4 >;  /**< DLC   */
  };

  /**
   * mailbox data low register
   */
  struct TDL2R
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1a8, rw, 0x00000000 >;

    using DATA3  = regbits< type, 24,  8 >;  /**< DATA3  */
    using DATA2  = regbits< type, 16,  8 >;  /**< DATA2  */
    using DATA1  = regbits< type,  8,  8 >;  /**< DATA1  */
    using DATA0  = regbits< type,  0,  8 >;  /**< DATA0  */
  };

  /**
   * mailbox data high register
   */
  struct TDH2R
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0x00000000 >;

    using DATA7  = regbits< type, 24,  8 >;  /**< DATA7  */
    using DATA6  = regbits< type, 16,  8 >;  /**< DATA6  */
    using DATA5  = regbits< type,  8,  8 >;  /**< DATA5  */
    using DATA4  = regbits< type,  0,  8 >;  /**< DATA4  */
  };

  /**
   * receive FIFO mailbox identifier register
   */
  struct RI0R
  : public reg< uint32_t, base_addr + 0x1b0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, ro, 0x00000000 >;

    using STID  = regbits< type, 21, 11 >;  /**< STID  */
    using EXID  = regbits< type,  3, 18 >;  /**< EXID  */
    using IDE   = regbits< type,  2,  1 >;  /**< IDE   */
    using RTR   = regbits< type,  1,  1 >;  /**< RTR   */
  };

  /**
   * mailbox data high register
   */
  struct RDT0R
  : public reg< uint32_t, base_addr + 0x1b4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b4, ro, 0x00000000 >;

    using TIME  = regbits< type, 16, 16 >;  /**< TIME  */
    using FMI   = regbits< type,  8,  8 >;  /**< FMI   */
    using DLC   = regbits< type,  0,  4 >;  /**< DLC   */
  };

  /**
   * mailbox data high register
   */
  struct RDL0R
  : public reg< uint32_t, base_addr + 0x1b8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b8, ro, 0x00000000 >;

    using DATA3  = regbits< type, 24,  8 >;  /**< DATA3  */
    using DATA2  = regbits< type, 16,  8 >;  /**< DATA2  */
    using DATA1  = regbits< type,  8,  8 >;  /**< DATA1  */
    using DATA0  = regbits< type,  0,  8 >;  /**< DATA0  */
  };

  /**
   * receive FIFO mailbox data high register
   */
  struct RDH0R
  : public reg< uint32_t, base_addr + 0x1bc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1bc, ro, 0x00000000 >;

    using DATA7  = regbits< type, 24,  8 >;  /**< DATA7  */
    using DATA6  = regbits< type, 16,  8 >;  /**< DATA6  */
    using DATA5  = regbits< type,  8,  8 >;  /**< DATA5  */
    using DATA4  = regbits< type,  0,  8 >;  /**< DATA4  */
  };

  /**
   * mailbox data high register
   */
  struct RI1R
  : public reg< uint32_t, base_addr + 0x1c0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c0, ro, 0x00000000 >;

    using STID  = regbits< type, 21, 11 >;  /**< STID  */
    using EXID  = regbits< type,  3, 18 >;  /**< EXID  */
    using IDE   = regbits< type,  2,  1 >;  /**< IDE   */
    using RTR   = regbits< type,  1,  1 >;  /**< RTR   */
  };

  /**
   * mailbox data high register
   */
  struct RDT1R
  : public reg< uint32_t, base_addr + 0x1c4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c4, ro, 0x00000000 >;

    using TIME  = regbits< type, 16, 16 >;  /**< TIME  */
    using FMI   = regbits< type,  8,  8 >;  /**< FMI   */
    using DLC   = regbits< type,  0,  4 >;  /**< DLC   */
  };

  /**
   * mailbox data high register
   */
  struct RDL1R
  : public reg< uint32_t, base_addr + 0x1c8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c8, ro, 0x00000000 >;

    using DATA3  = regbits< type, 24,  8 >;  /**< DATA3  */
    using DATA2  = regbits< type, 16,  8 >;  /**< DATA2  */
    using DATA1  = regbits< type,  8,  8 >;  /**< DATA1  */
    using DATA0  = regbits< type,  0,  8 >;  /**< DATA0  */
  };

  /**
   * mailbox data high register
   */
  struct RDH1R
  : public reg< uint32_t, base_addr + 0x1cc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1cc, ro, 0x00000000 >;

    using DATA7  = regbits< type, 24,  8 >;  /**< DATA7  */
    using DATA6  = regbits< type, 16,  8 >;  /**< DATA6  */
    using DATA5  = regbits< type,  8,  8 >;  /**< DATA5  */
    using DATA4  = regbits< type,  0,  8 >;  /**< DATA4  */
  };

  /**
   * filter master register
   */
  struct FMR
  : public reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >;

    using CAN2SB  = regbits< type,  8,  6 >;  /**< CAN2SB  */
    using FINIT   = regbits< type,  0,  1 >;  /**< FINIT   */
  };

  /**
   * filter mode register
   */
  struct FM1R
  : public reg< uint32_t, base_addr + 0x204, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0x00000000 >;

    using FBM0   = regbits< type,  0,  1 >;  /**< Filter mode  */
    using FBM1   = regbits< type,  1,  1 >;  /**< Filter mode  */
    using FBM2   = regbits< type,  2,  1 >;  /**< Filter mode  */
    using FBM3   = regbits< type,  3,  1 >;  /**< Filter mode  */
    using FBM4   = regbits< type,  4,  1 >;  /**< Filter mode  */
    using FBM5   = regbits< type,  5,  1 >;  /**< Filter mode  */
    using FBM6   = regbits< type,  6,  1 >;  /**< Filter mode  */
    using FBM7   = regbits< type,  7,  1 >;  /**< Filter mode  */
    using FBM8   = regbits< type,  8,  1 >;  /**< Filter mode  */
    using FBM9   = regbits< type,  9,  1 >;  /**< Filter mode  */
    using FBM10  = regbits< type, 10,  1 >;  /**< Filter mode  */
    using FBM11  = regbits< type, 11,  1 >;  /**< Filter mode  */
    using FBM12  = regbits< type, 12,  1 >;  /**< Filter mode  */
    using FBM13  = regbits< type, 13,  1 >;  /**< Filter mode  */
    using FBM14  = regbits< type, 14,  1 >;  /**< Filter mode  */
    using FBM15  = regbits< type, 15,  1 >;  /**< Filter mode  */
    using FBM16  = regbits< type, 16,  1 >;  /**< Filter mode  */
    using FBM17  = regbits< type, 17,  1 >;  /**< Filter mode  */
    using FBM18  = regbits< type, 18,  1 >;  /**< Filter mode  */
    using FBM19  = regbits< type, 19,  1 >;  /**< Filter mode  */
    using FBM20  = regbits< type, 20,  1 >;  /**< Filter mode  */
    using FBM21  = regbits< type, 21,  1 >;  /**< Filter mode  */
    using FBM22  = regbits< type, 22,  1 >;  /**< Filter mode  */
    using FBM23  = regbits< type, 23,  1 >;  /**< Filter mode  */
    using FBM24  = regbits< type, 24,  1 >;  /**< Filter mode  */
    using FBM25  = regbits< type, 25,  1 >;  /**< Filter mode  */
    using FBM26  = regbits< type, 26,  1 >;  /**< Filter mode  */
    using FBM27  = regbits< type, 27,  1 >;  /**< Filter mode  */
  };

  /**
   * filter scale register
   */
  struct FS1R
  : public reg< uint32_t, base_addr + 0x20c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0x00000000 >;

    using FSC0   = regbits< type,  0,  1 >;  /**< Filter scale configuration  */
    using FSC1   = regbits< type,  1,  1 >;  /**< Filter scale configuration  */
    using FSC2   = regbits< type,  2,  1 >;  /**< Filter scale configuration  */
    using FSC3   = regbits< type,  3,  1 >;  /**< Filter scale configuration  */
    using FSC4   = regbits< type,  4,  1 >;  /**< Filter scale configuration  */
    using FSC5   = regbits< type,  5,  1 >;  /**< Filter scale configuration  */
    using FSC6   = regbits< type,  6,  1 >;  /**< Filter scale configuration  */
    using FSC7   = regbits< type,  7,  1 >;  /**< Filter scale configuration  */
    using FSC8   = regbits< type,  8,  1 >;  /**< Filter scale configuration  */
    using FSC9   = regbits< type,  9,  1 >;  /**< Filter scale configuration  */
    using FSC10  = regbits< type, 10,  1 >;  /**< Filter scale configuration  */
    using FSC11  = regbits< type, 11,  1 >;  /**< Filter scale configuration  */
    using FSC12  = regbits< type, 12,  1 >;  /**< Filter scale configuration  */
    using FSC13  = regbits< type, 13,  1 >;  /**< Filter scale configuration  */
    using FSC14  = regbits< type, 14,  1 >;  /**< Filter scale configuration  */
    using FSC15  = regbits< type, 15,  1 >;  /**< Filter scale configuration  */
    using FSC16  = regbits< type, 16,  1 >;  /**< Filter scale configuration  */
    using FSC17  = regbits< type, 17,  1 >;  /**< Filter scale configuration  */
    using FSC18  = regbits< type, 18,  1 >;  /**< Filter scale configuration  */
    using FSC19  = regbits< type, 19,  1 >;  /**< Filter scale configuration  */
    using FSC20  = regbits< type, 20,  1 >;  /**< Filter scale configuration  */
    using FSC21  = regbits< type, 21,  1 >;  /**< Filter scale configuration  */
    using FSC22  = regbits< type, 22,  1 >;  /**< Filter scale configuration  */
    using FSC23  = regbits< type, 23,  1 >;  /**< Filter scale configuration  */
    using FSC24  = regbits< type, 24,  1 >;  /**< Filter scale configuration  */
    using FSC25  = regbits< type, 25,  1 >;  /**< Filter scale configuration  */
    using FSC26  = regbits< type, 26,  1 >;  /**< Filter scale configuration  */
    using FSC27  = regbits< type, 27,  1 >;  /**< Filter scale configuration  */
  };

  /**
   * filter FIFO assignment register
   */
  struct FFA1R
  : public reg< uint32_t, base_addr + 0x214, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x214, rw, 0x00000000 >;

    using FFA0   = regbits< type,  0,  1 >;  /**< Filter FIFO assignment for filter 0   */
    using FFA1   = regbits< type,  1,  1 >;  /**< Filter FIFO assignment for filter 1   */
    using FFA2   = regbits< type,  2,  1 >;  /**< Filter FIFO assignment for filter 2   */
    using FFA3   = regbits< type,  3,  1 >;  /**< Filter FIFO assignment for filter 3   */
    using FFA4   = regbits< type,  4,  1 >;  /**< Filter FIFO assignment for filter 4   */
    using FFA5   = regbits< type,  5,  1 >;  /**< Filter FIFO assignment for filter 5   */
    using FFA6   = regbits< type,  6,  1 >;  /**< Filter FIFO assignment for filter 6   */
    using FFA7   = regbits< type,  7,  1 >;  /**< Filter FIFO assignment for filter 7   */
    using FFA8   = regbits< type,  8,  1 >;  /**< Filter FIFO assignment for filter 8   */
    using FFA9   = regbits< type,  9,  1 >;  /**< Filter FIFO assignment for filter 9   */
    using FFA10  = regbits< type, 10,  1 >;  /**< Filter FIFO assignment for filter 10  */
    using FFA11  = regbits< type, 11,  1 >;  /**< Filter FIFO assignment for filter 11  */
    using FFA12  = regbits< type, 12,  1 >;  /**< Filter FIFO assignment for filter 12  */
    using FFA13  = regbits< type, 13,  1 >;  /**< Filter FIFO assignment for filter 13  */
    using FFA14  = regbits< type, 14,  1 >;  /**< Filter FIFO assignment for filter 14  */
    using FFA15  = regbits< type, 15,  1 >;  /**< Filter FIFO assignment for filter 15  */
    using FFA16  = regbits< type, 16,  1 >;  /**< Filter FIFO assignment for filter 16  */
    using FFA17  = regbits< type, 17,  1 >;  /**< Filter FIFO assignment for filter 17  */
    using FFA18  = regbits< type, 18,  1 >;  /**< Filter FIFO assignment for filter 18  */
    using FFA19  = regbits< type, 19,  1 >;  /**< Filter FIFO assignment for filter 19  */
    using FFA20  = regbits< type, 20,  1 >;  /**< Filter FIFO assignment for filter 20  */
    using FFA21  = regbits< type, 21,  1 >;  /**< Filter FIFO assignment for filter 21  */
    using FFA22  = regbits< type, 22,  1 >;  /**< Filter FIFO assignment for filter 22  */
    using FFA23  = regbits< type, 23,  1 >;  /**< Filter FIFO assignment for filter 23  */
    using FFA24  = regbits< type, 24,  1 >;  /**< Filter FIFO assignment for filter 24  */
    using FFA25  = regbits< type, 25,  1 >;  /**< Filter FIFO assignment for filter 25  */
    using FFA26  = regbits< type, 26,  1 >;  /**< Filter FIFO assignment for filter 26  */
    using FFA27  = regbits< type, 27,  1 >;  /**< Filter FIFO assignment for filter 27  */
  };

  /**
   * filter activation register
   */
  struct FA1R
  : public reg< uint32_t, base_addr + 0x21c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x21c, rw, 0x00000000 >;

    using FACT0   = regbits< type,  0,  1 >;  /**< Filter active  */
    using FACT1   = regbits< type,  1,  1 >;  /**< Filter active  */
    using FACT2   = regbits< type,  2,  1 >;  /**< Filter active  */
    using FACT3   = regbits< type,  3,  1 >;  /**< Filter active  */
    using FACT4   = regbits< type,  4,  1 >;  /**< Filter active  */
    using FACT5   = regbits< type,  5,  1 >;  /**< Filter active  */
    using FACT6   = regbits< type,  6,  1 >;  /**< Filter active  */
    using FACT7   = regbits< type,  7,  1 >;  /**< Filter active  */
    using FACT8   = regbits< type,  8,  1 >;  /**< Filter active  */
    using FACT9   = regbits< type,  9,  1 >;  /**< Filter active  */
    using FACT10  = regbits< type, 10,  1 >;  /**< Filter active  */
    using FACT11  = regbits< type, 11,  1 >;  /**< Filter active  */
    using FACT12  = regbits< type, 12,  1 >;  /**< Filter active  */
    using FACT13  = regbits< type, 13,  1 >;  /**< Filter active  */
    using FACT14  = regbits< type, 14,  1 >;  /**< Filter active  */
    using FACT15  = regbits< type, 15,  1 >;  /**< Filter active  */
    using FACT16  = regbits< type, 16,  1 >;  /**< Filter active  */
    using FACT17  = regbits< type, 17,  1 >;  /**< Filter active  */
    using FACT18  = regbits< type, 18,  1 >;  /**< Filter active  */
    using FACT19  = regbits< type, 19,  1 >;  /**< Filter active  */
    using FACT20  = regbits< type, 20,  1 >;  /**< Filter active  */
    using FACT21  = regbits< type, 21,  1 >;  /**< Filter active  */
    using FACT22  = regbits< type, 22,  1 >;  /**< Filter active  */
    using FACT23  = regbits< type, 23,  1 >;  /**< Filter active  */
    using FACT24  = regbits< type, 24,  1 >;  /**< Filter active  */
    using FACT25  = regbits< type, 25,  1 >;  /**< Filter active  */
    using FACT26  = regbits< type, 26,  1 >;  /**< Filter active  */
    using FACT27  = regbits< type, 27,  1 >;  /**< Filter active  */
  };

  /**
   * Filter bank 0 register 1
   */
  struct F0R1
  : public reg< uint32_t, base_addr + 0x240, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x240, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 0 register 2
   */
  struct F0R2
  : public reg< uint32_t, base_addr + 0x244, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x244, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 1 register 1
   */
  struct F1R1
  : public reg< uint32_t, base_addr + 0x248, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x248, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 1 register 2
   */
  struct F1R2
  : public reg< uint32_t, base_addr + 0x24c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24c, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 2 register 1
   */
  struct F2R1
  : public reg< uint32_t, base_addr + 0x250, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x250, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 2 register 2
   */
  struct F2R2
  : public reg< uint32_t, base_addr + 0x254, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x254, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 3 register 1
   */
  struct F3R1
  : public reg< uint32_t, base_addr + 0x258, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x258, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 3 register 2
   */
  struct F3R2
  : public reg< uint32_t, base_addr + 0x25c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x25c, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 4 register 1
   */
  struct F4R1
  : public reg< uint32_t, base_addr + 0x260, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x260, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 4 register 2
   */
  struct F4R2
  : public reg< uint32_t, base_addr + 0x264, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x264, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 5 register 1
   */
  struct F5R1
  : public reg< uint32_t, base_addr + 0x268, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x268, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 5 register 2
   */
  struct F5R2
  : public reg< uint32_t, base_addr + 0x26c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x26c, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 6 register 1
   */
  struct F6R1
  : public reg< uint32_t, base_addr + 0x270, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x270, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 6 register 2
   */
  struct F6R2
  : public reg< uint32_t, base_addr + 0x274, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x274, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 7 register 1
   */
  struct F7R1
  : public reg< uint32_t, base_addr + 0x278, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x278, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 7 register 2
   */
  struct F7R2
  : public reg< uint32_t, base_addr + 0x27c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x27c, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 8 register 1
   */
  struct F8R1
  : public reg< uint32_t, base_addr + 0x280, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x280, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 8 register 2
   */
  struct F8R2
  : public reg< uint32_t, base_addr + 0x284, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x284, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 9 register 1
   */
  struct F9R1
  : public reg< uint32_t, base_addr + 0x288, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x288, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 9 register 2
   */
  struct F9R2
  : public reg< uint32_t, base_addr + 0x28c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28c, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 10 register 1
   */
  struct F10R1
  : public reg< uint32_t, base_addr + 0x290, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x290, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 10 register 2
   */
  struct F10R2
  : public reg< uint32_t, base_addr + 0x294, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x294, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 11 register 1
   */
  struct F11R1
  : public reg< uint32_t, base_addr + 0x298, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x298, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 11 register 2
   */
  struct F11R2
  : public reg< uint32_t, base_addr + 0x29c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x29c, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 4 register 1
   */
  struct F12R1
  : public reg< uint32_t, base_addr + 0x2a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2a0, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 12 register 2
   */
  struct F12R2
  : public reg< uint32_t, base_addr + 0x2a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2a4, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 13 register 1
   */
  struct F13R1
  : public reg< uint32_t, base_addr + 0x2a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2a8, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 13 register 2
   */
  struct F13R2
  : public reg< uint32_t, base_addr + 0x2ac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2ac, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 14 register 1
   */
  struct F14R1
  : public reg< uint32_t, base_addr + 0x2b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2b0, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 14 register 2
   */
  struct F14R2
  : public reg< uint32_t, base_addr + 0x2b4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2b4, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 15 register 1
   */
  struct F15R1
  : public reg< uint32_t, base_addr + 0x2b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2b8, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 15 register 2
   */
  struct F15R2
  : public reg< uint32_t, base_addr + 0x2bc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2bc, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 16 register 1
   */
  struct F16R1
  : public reg< uint32_t, base_addr + 0x2c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c0, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 16 register 2
   */
  struct F16R2
  : public reg< uint32_t, base_addr + 0x2c4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c4, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 17 register 1
   */
  struct F17R1
  : public reg< uint32_t, base_addr + 0x2c8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c8, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 17 register 2
   */
  struct F17R2
  : public reg< uint32_t, base_addr + 0x2cc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2cc, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 18 register 1
   */
  struct F18R1
  : public reg< uint32_t, base_addr + 0x2d0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2d0, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 18 register 2
   */
  struct F18R2
  : public reg< uint32_t, base_addr + 0x2d4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2d4, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 19 register 1
   */
  struct F19R1
  : public reg< uint32_t, base_addr + 0x2d8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2d8, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 19 register 2
   */
  struct F19R2
  : public reg< uint32_t, base_addr + 0x2dc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2dc, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 20 register 1
   */
  struct F20R1
  : public reg< uint32_t, base_addr + 0x2e0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2e0, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 20 register 2
   */
  struct F20R2
  : public reg< uint32_t, base_addr + 0x2e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2e4, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 21 register 1
   */
  struct F21R1
  : public reg< uint32_t, base_addr + 0x2e8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2e8, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 21 register 2
   */
  struct F21R2
  : public reg< uint32_t, base_addr + 0x2ec, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2ec, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 22 register 1
   */
  struct F22R1
  : public reg< uint32_t, base_addr + 0x2f0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2f0, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 22 register 2
   */
  struct F22R2
  : public reg< uint32_t, base_addr + 0x2f4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2f4, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 23 register 1
   */
  struct F23R1
  : public reg< uint32_t, base_addr + 0x2f8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2f8, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 23 register 2
   */
  struct F23R2
  : public reg< uint32_t, base_addr + 0x2fc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2fc, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 24 register 1
   */
  struct F24R1
  : public reg< uint32_t, base_addr + 0x300, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 24 register 2
   */
  struct F24R2
  : public reg< uint32_t, base_addr + 0x304, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 25 register 1
   */
  struct F25R1
  : public reg< uint32_t, base_addr + 0x308, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 25 register 2
   */
  struct F25R2
  : public reg< uint32_t, base_addr + 0x30c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 26 register 1
   */
  struct F26R1
  : public reg< uint32_t, base_addr + 0x310, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 26 register 2
   */
  struct F26R2
  : public reg< uint32_t, base_addr + 0x314, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 27 register 1
   */
  struct F27R1
  : public reg< uint32_t, base_addr + 0x318, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };

  /**
   * Filter bank 27 register 2
   */
  struct F27R2
  : public reg< uint32_t, base_addr + 0x31c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0x00000000 >;

    using FB0   = regbits< type,  0,  1 >;  /**< Filter bits  */
    using FB1   = regbits< type,  1,  1 >;  /**< Filter bits  */
    using FB2   = regbits< type,  2,  1 >;  /**< Filter bits  */
    using FB3   = regbits< type,  3,  1 >;  /**< Filter bits  */
    using FB4   = regbits< type,  4,  1 >;  /**< Filter bits  */
    using FB5   = regbits< type,  5,  1 >;  /**< Filter bits  */
    using FB6   = regbits< type,  6,  1 >;  /**< Filter bits  */
    using FB7   = regbits< type,  7,  1 >;  /**< Filter bits  */
    using FB8   = regbits< type,  8,  1 >;  /**< Filter bits  */
    using FB9   = regbits< type,  9,  1 >;  /**< Filter bits  */
    using FB10  = regbits< type, 10,  1 >;  /**< Filter bits  */
    using FB11  = regbits< type, 11,  1 >;  /**< Filter bits  */
    using FB12  = regbits< type, 12,  1 >;  /**< Filter bits  */
    using FB13  = regbits< type, 13,  1 >;  /**< Filter bits  */
    using FB14  = regbits< type, 14,  1 >;  /**< Filter bits  */
    using FB15  = regbits< type, 15,  1 >;  /**< Filter bits  */
    using FB16  = regbits< type, 16,  1 >;  /**< Filter bits  */
    using FB17  = regbits< type, 17,  1 >;  /**< Filter bits  */
    using FB18  = regbits< type, 18,  1 >;  /**< Filter bits  */
    using FB19  = regbits< type, 19,  1 >;  /**< Filter bits  */
    using FB20  = regbits< type, 20,  1 >;  /**< Filter bits  */
    using FB21  = regbits< type, 21,  1 >;  /**< Filter bits  */
    using FB22  = regbits< type, 22,  1 >;  /**< Filter bits  */
    using FB23  = regbits< type, 23,  1 >;  /**< Filter bits  */
    using FB24  = regbits< type, 24,  1 >;  /**< Filter bits  */
    using FB25  = regbits< type, 25,  1 >;  /**< Filter bits  */
    using FB26  = regbits< type, 26,  1 >;  /**< Filter bits  */
    using FB27  = regbits< type, 27,  1 >;  /**< Filter bits  */
    using FB28  = regbits< type, 28,  1 >;  /**< Filter bits  */
    using FB29  = regbits< type, 29,  1 >;  /**< Filter bits  */
    using FB30  = regbits< type, 30,  1 >;  /**< Filter bits  */
    using FB31  = regbits< type, 31,  1 >;  /**< Filter bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CAN2_HPP_INCLUDED
