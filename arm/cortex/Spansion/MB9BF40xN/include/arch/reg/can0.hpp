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
//  Import from CMSIS-SVD: "Spansion/MB9BF40xN.svd"
//
//  name: MB9BF40xN
//  version: 1.7
//  description: MB9BF40xN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CAN0_HPP_INCLUDED
#define ARCH_REG_CAN0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * CAN0 Registers
 */
struct CAN0
{
  static constexpr reg_addr_t base_addr = 0x40062000;

  /**
   * CAN Control Register
   */
  struct CTRLR
  : public reg< uint16_t, base_addr + 0x0, rw, 0x0001 >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0x0001 >;

    using TEST  = regbits< type,  7,  1 >;  /**< Test mode enable bit                  */
    using CCE   = regbits< type,  6,  1 >;  /**< Bit Timing Register write enable bit  */
    using DAR   = regbits< type,  5,  1 >;  /**< Automatic retransmission disable bit  */
    using EIE   = regbits< type,  3,  1 >;  /**< Error interrupt code enable bit       */
    using SIE   = regbits< type,  2,  1 >;  /**< Status interrupt code enable bit      */
    using IE    = regbits< type,  1,  1 >;  /**< Interrupt enable bit                  */
    using INIT  = regbits< type,  0,  1 >;  /**< Initialization bit                    */
  };

  /**
   * CAN Status Register
   */
  struct STATR
  : public reg< uint16_t, base_addr + 0x2, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0x0000 >;

    using BOFF   = regbits< type,  7,  1 >;  /**< Busoff bit                           */
    using EWARN  = regbits< type,  6,  1 >;  /**< Warning bit                          */
    using EPASS  = regbits< type,  5,  1 >;  /**< Error passive bit                    */
    using RXOK   = regbits< type,  4,  1 >;  /**< Successful message reception bit     */
    using TXOK   = regbits< type,  3,  1 >;  /**< Successful message transmission bit  */
    using LEC    = regbits< type,  0,  3 >;  /**< Last error code bits                 */
  };

  /**
   * CAN Error Counter
   */
  struct ERRCNT
  : public reg< uint16_t, base_addr + 0x4, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x4, ro, 0x0000 >;

    using RP   = regbits< type, 15,  1 >;  /**< Receive error passive indication  */
    using REC  = regbits< type,  8,  7 >;  /**< Receive error counter             */
    using TEC  = regbits< type,  0,  8 >;  /**< Send error counter                */
  };

  /**
   * CAN Bit Timing Register
   */
  struct BTR
  : public reg< uint16_t, base_addr + 0x6, rw, 0x2301 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0x2301 >;

    using TSEG2  = regbits< type, 12,  3 >;  /**< Time segment 2 setting bits                */
    using TSEG1  = regbits< type,  8,  4 >;  /**< Time segment 1 setting bits                */
    using SJW    = regbits< type,  6,  2 >;  /**< Resynchronization jump width setting bits  */
    using BRP    = regbits< type,  0,  6 >;  /**< Baud rate prescaler setting bits           */
  };

  /**
   * CAN Interrupt Register
   */
  struct INTR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0x0000 >;

    using INTID  = regbits< type,  0, 16 >;  /**< Interrupt Code  */
  };

  /**
   * CAN Test Register
   */
  struct TESTR
  : public reg< uint16_t, base_addr + 0xa, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0x0000 >;

    using RX      = regbits< type,  7,  1 >;  /**< Rx pin monitor bit  */
    using TX      = regbits< type,  5,  2 >;  /**< TX pin control bit  */
    using LBACK   = regbits< type,  4,  1 >;  /**< Loop back mode      */
    using SILENT  = regbits< type,  3,  1 >;  /**< Silent mode         */
    using BASIC   = regbits< type,  2,  1 >;  /**< Basic mode          */
  };

  /**
   * CAN Prescaler Extension Register
   */
  struct BRPER
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using BRPE  = regbits< type,  0,  4 >;  /**< Baud rate prescaler extension bit  */
  };

  /**
   * IF1 Command Request Register
   */
  struct IF1CREQ
  : public reg< uint16_t, base_addr + 0x10, rw, 0x0001 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0x0001 >;

    using BUSY           = regbits< type, 15,  1 >;  /**< Busy flag bit   */
    using MESSAGENUMBER  = regbits< type,  0,  8 >;  /**< Message number  */
  };

  /**
   * IF1 Command Mask Register
   */
  struct IF1CMSK
  : public reg< uint16_t, base_addr + 0x12, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0x0000 >;

    using WRRD     = regbits< type,  7,  1 >;  /**< Writing or reading control bit    */
    using MASK     = regbits< type,  6,  1 >;  /**< Mask data update bit              */
    using ARB      = regbits< type,  5,  1 >;  /**< Arbitration data update bit       */
    using CONTROL  = regbits< type,  4,  1 >;  /**< Control data update bit           */
    using CIP      = regbits< type,  3,  1 >;  /**< Interrupt clear bit               */
    using NEWDAT   = regbits< type,  2,  1 >;  /**< Message transmission request bit  */
    using DATAA    = regbits< type,  1,  1 >;  /**< Data 0-3 update bit               */
    using DATAB    = regbits< type,  0,  1 >;  /**< Data 4-7 update bit               */
  };

  /**
   * IF1 Mask Registers 1
   */
  struct IF1MSK1
  : public reg< uint16_t, base_addr + 0x14, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0xFFFF >;

    using MSK15  = regbits< type, 15,  1 >;  /**< Msk15  */
    using MSK14  = regbits< type, 14,  1 >;  /**< Msk14  */
    using MSK13  = regbits< type, 13,  1 >;  /**< Msk13  */
    using MSK12  = regbits< type, 12,  1 >;  /**< Msk12  */
    using MSK11  = regbits< type, 11,  1 >;  /**< Msk11  */
    using MSK10  = regbits< type, 10,  1 >;  /**< Msk10  */
    using MSK9   = regbits< type,  9,  1 >;  /**< Msk9   */
    using MSK8   = regbits< type,  8,  1 >;  /**< Msk8   */
    using MSK7   = regbits< type,  7,  1 >;  /**< Msk7   */
    using MSK6   = regbits< type,  6,  1 >;  /**< Msk6   */
    using MSK5   = regbits< type,  5,  1 >;  /**< Msk5   */
    using MSK4   = regbits< type,  4,  1 >;  /**< Msk4   */
    using MSK3   = regbits< type,  3,  1 >;  /**< Msk3   */
    using MSK2   = regbits< type,  2,  1 >;  /**< Msk2   */
    using MSK1   = regbits< type,  1,  1 >;  /**< Msk1   */
    using MSK0   = regbits< type,  0,  1 >;  /**< Msk0   */
  };

  /**
   * IF1 Mask Registers 2
   */
  struct IF1MSK2
  : public reg< uint16_t, base_addr + 0x16, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0xFFFF >;

    using MXTD   = regbits< type, 15,  1 >;  /**< MXtd   */
    using MDIR   = regbits< type, 14,  1 >;  /**< MDir   */
    using MSK28  = regbits< type, 12,  1 >;  /**< Msk28  */
    using MSK27  = regbits< type, 11,  1 >;  /**< Msk27  */
    using MSK26  = regbits< type, 10,  1 >;  /**< Msk26  */
    using MSK25  = regbits< type,  9,  1 >;  /**< Msk25  */
    using MSK24  = regbits< type,  8,  1 >;  /**< Msk24  */
    using MSK23  = regbits< type,  7,  1 >;  /**< Msk23  */
    using MSK22  = regbits< type,  6,  1 >;  /**< Msk22  */
    using MSK21  = regbits< type,  5,  1 >;  /**< Msk21  */
    using MSK20  = regbits< type,  4,  1 >;  /**< Msk20  */
    using MSK19  = regbits< type,  3,  1 >;  /**< Msk19  */
    using MSK18  = regbits< type,  2,  1 >;  /**< Msk18  */
    using MSK17  = regbits< type,  1,  1 >;  /**< Msk17  */
    using MSK16  = regbits< type,  0,  1 >;  /**< Msk16  */
  };

  /**
   * IF1 Arbitration Registers 1
   */
  struct IF1ARB1
  : public reg< uint16_t, base_addr + 0x18, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0x0000 >;

    using ID15  = regbits< type, 15,  1 >;  /**< ID15  */
    using ID14  = regbits< type, 14,  1 >;  /**< ID14  */
    using ID13  = regbits< type, 13,  1 >;  /**< ID13  */
    using ID12  = regbits< type, 12,  1 >;  /**< ID12  */
    using ID11  = regbits< type, 11,  1 >;  /**< ID11  */
    using ID10  = regbits< type, 10,  1 >;  /**< ID10  */
    using ID9   = regbits< type,  9,  1 >;  /**< ID9   */
    using ID8   = regbits< type,  8,  1 >;  /**< ID8   */
    using ID7   = regbits< type,  7,  1 >;  /**< ID7   */
    using ID6   = regbits< type,  6,  1 >;  /**< ID6   */
    using ID5   = regbits< type,  5,  1 >;  /**< ID5   */
    using ID4   = regbits< type,  4,  1 >;  /**< ID4   */
    using ID3   = regbits< type,  3,  1 >;  /**< ID3   */
    using ID2   = regbits< type,  2,  1 >;  /**< ID2   */
    using ID1   = regbits< type,  1,  1 >;  /**< ID1   */
    using ID0   = regbits< type,  0,  1 >;  /**< ID0   */
  };

  /**
   * IF1 Arbitration Registers 2
   */
  struct IF1ARB2
  : public reg< uint16_t, base_addr + 0x1a, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1a, rw, 0x0000 >;

    using MSGVAL  = regbits< type, 15,  1 >;  /**< MsgVal  */
    using XTD     = regbits< type, 14,  1 >;  /**< Xtd     */
    using DIR     = regbits< type, 13,  1 >;  /**< Dir     */
    using ID28    = regbits< type, 12,  1 >;  /**< ID28    */
    using ID27    = regbits< type, 11,  1 >;  /**< ID27    */
    using ID26    = regbits< type, 10,  1 >;  /**< ID26    */
    using ID25    = regbits< type,  9,  1 >;  /**< ID25    */
    using ID24    = regbits< type,  8,  1 >;  /**< ID24    */
    using ID23    = regbits< type,  7,  1 >;  /**< ID23    */
    using ID22    = regbits< type,  6,  1 >;  /**< ID22    */
    using ID21    = regbits< type,  5,  1 >;  /**< ID21    */
    using ID20    = regbits< type,  4,  1 >;  /**< ID20    */
    using ID19    = regbits< type,  3,  1 >;  /**< ID19    */
    using ID18    = regbits< type,  2,  1 >;  /**< ID18    */
    using ID17    = regbits< type,  1,  1 >;  /**< ID17    */
    using ID16    = regbits< type,  0,  1 >;  /**< ID16    */
  };

  /**
   * IF1 Message Control Register
   */
  struct IF1MCTR
  : public reg< uint16_t, base_addr + 0x1c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0x0000 >;

    using NEWDAT  = regbits< type, 15,  1 >;  /**< NewDat  */
    using MSGLST  = regbits< type, 14,  1 >;  /**< MsgLst  */
    using INTPND  = regbits< type, 13,  1 >;  /**< IntPnd  */
    using UMASK   = regbits< type, 12,  1 >;  /**< UMask   */
    using TXIE    = regbits< type, 11,  1 >;  /**< TxIE    */
    using RXIE    = regbits< type, 10,  1 >;  /**< RxIE    */
    using RMTEN   = regbits< type,  9,  1 >;  /**< RmtEn   */
    using TXRQST  = regbits< type,  8,  1 >;  /**< TxRqst  */
    using EOB     = regbits< type,  7,  1 >;  /**< EoB     */
    using DLC     = regbits< type,  0,  4 >;  /**< DLC     */
  };

  /**
   * IF1 Data Registers A1
   */
  struct IF1DTA1_L
  : public reg< uint16_t, base_addr + 0x20, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0x0000 >;

    using DATA_1_  = regbits< type,  8,  8 >;  /**< Data(1)  */
    using DATA_0_  = regbits< type,  0,  8 >;  /**< Data(0)  */
  };

  /**
   * IF1 Data Registers A2
   */
  struct IF1DTA2_L
  : public reg< uint16_t, base_addr + 0x22, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x22, rw, 0x0000 >;

    using DATA_3_  = regbits< type,  8,  8 >;  /**< Data(3)  */
    using DATA_2_  = regbits< type,  0,  8 >;  /**< Data(2)  */
  };

  /**
   * IF1 Data Registers B1
   */
  struct IF1DTB1_L
  : public reg< uint16_t, base_addr + 0x24, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0x0000 >;

    using DATA_5_  = regbits< type,  8,  8 >;  /**< Data(5)  */
    using DATA_4_  = regbits< type,  0,  8 >;  /**< Data(4)  */
  };

  /**
   * IF1 Data Registers B2
   */
  struct IF1DTB2_L
  : public reg< uint16_t, base_addr + 0x26, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x26, rw, 0x0000 >;

    using DATA_7_  = regbits< type,  8,  8 >;  /**< Data(7)  */
    using DATA_6_  = regbits< type,  0,  8 >;  /**< Data(6)  */
  };

  /**
   * IF1 Data Registers A2
   */
  struct IF1DTA2_B
  : public reg< uint16_t, base_addr + 0x30, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x30, rw, 0x0000 >;

    using DATA_2_  = regbits< type,  8,  8 >;  /**< Data(2)  */
    using DATA_3_  = regbits< type,  0,  8 >;  /**< Data(3)  */
  };

  /**
   * IF1 Data Registers A1
   */
  struct IF1DTA1_B
  : public reg< uint16_t, base_addr + 0x32, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x32, rw, 0x0000 >;

    using DATA_0_  = regbits< type,  8,  8 >;  /**< Data(0)  */
    using DATA_1_  = regbits< type,  0,  8 >;  /**< Data(1)  */
  };

  /**
   * IF1 Data Registers B2
   */
  struct IF1DTB2_B
  : public reg< uint16_t, base_addr + 0x34, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x34, rw, 0x0000 >;

    using DATA_6_  = regbits< type,  8,  8 >;  /**< Data(6)  */
    using DATA_7_  = regbits< type,  0,  8 >;  /**< Data(7)  */
  };

  /**
   * IF1 Data Registers B1
   */
  struct IF1DTB1_B
  : public reg< uint16_t, base_addr + 0x36, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x36, rw, 0x0000 >;

    using DATA_4_  = regbits< type,  8,  8 >;  /**< Data(4)  */
    using DATA_5_  = regbits< type,  0,  8 >;  /**< Data(5)  */
  };

  /**
   * IF2 Command Request Register
   */
  struct IF2CREQ
  : public reg< uint16_t, base_addr + 0x40, rw, 0x0001 >
  {
    using type = reg< uint16_t, base_addr + 0x40, rw, 0x0001 >;

    using BUSY           = regbits< type, 15,  1 >;  /**< Busy flag bit   */
    using MESSAGENUMBER  = regbits< type,  0,  8 >;  /**< Message number  */
  };

  /**
   * IF2 Command Mask Register
   */
  struct IF2CMSK
  : public reg< uint16_t, base_addr + 0x42, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x42, rw, 0x0000 >;

    using WRRD     = regbits< type,  7,  1 >;  /**< Writing or reading control bit    */
    using MASK     = regbits< type,  6,  1 >;  /**< Mask data update bit              */
    using ARB      = regbits< type,  5,  1 >;  /**< Arbitration data update bit       */
    using CONTROL  = regbits< type,  4,  1 >;  /**< Control data update bit           */
    using CIP      = regbits< type,  3,  1 >;  /**< Interrupt clear bit               */
    using NEWDAT   = regbits< type,  2,  1 >;  /**< Message transmission request bit  */
    using DATAA    = regbits< type,  1,  1 >;  /**< Data 0-3 update bit               */
    using DATAB    = regbits< type,  0,  1 >;  /**< Data 4-7 update bit               */
  };

  /**
   * IF2 Mask Registers 1
   */
  struct IF2MSK1
  : public reg< uint16_t, base_addr + 0x44, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x44, rw, 0xFFFF >;

    using MSK15  = regbits< type, 15,  1 >;  /**< Msk15  */
    using MSK14  = regbits< type, 14,  1 >;  /**< Msk14  */
    using MSK13  = regbits< type, 13,  1 >;  /**< Msk13  */
    using MSK12  = regbits< type, 12,  1 >;  /**< Msk12  */
    using MSK11  = regbits< type, 11,  1 >;  /**< Msk11  */
    using MSK10  = regbits< type, 10,  1 >;  /**< Msk10  */
    using MSK9   = regbits< type,  9,  1 >;  /**< Msk9   */
    using MSK8   = regbits< type,  8,  1 >;  /**< Msk8   */
    using MSK7   = regbits< type,  7,  1 >;  /**< Msk7   */
    using MSK6   = regbits< type,  6,  1 >;  /**< Msk6   */
    using MSK5   = regbits< type,  5,  1 >;  /**< Msk5   */
    using MSK4   = regbits< type,  4,  1 >;  /**< Msk4   */
    using MSK3   = regbits< type,  3,  1 >;  /**< Msk3   */
    using MSK2   = regbits< type,  2,  1 >;  /**< Msk2   */
    using MSK1   = regbits< type,  1,  1 >;  /**< Msk1   */
    using MSK0   = regbits< type,  0,  1 >;  /**< Msk0   */
  };

  /**
   * IF2 Mask Registers 2
   */
  struct IF2MSK2
  : public reg< uint16_t, base_addr + 0x46, rw, 0xDFFF >
  {
    using type = reg< uint16_t, base_addr + 0x46, rw, 0xDFFF >;

    using MXTD   = regbits< type, 15,  1 >;  /**< MXtd   */
    using MDIR   = regbits< type, 14,  1 >;  /**< MDir   */
    using MSK28  = regbits< type, 12,  1 >;  /**< Msk28  */
    using MSK27  = regbits< type, 11,  1 >;  /**< Msk27  */
    using MSK26  = regbits< type, 10,  1 >;  /**< Msk26  */
    using MSK25  = regbits< type,  9,  1 >;  /**< Msk25  */
    using MSK24  = regbits< type,  8,  1 >;  /**< Msk24  */
    using MSK23  = regbits< type,  7,  1 >;  /**< Msk23  */
    using MSK22  = regbits< type,  6,  1 >;  /**< Msk22  */
    using MSK21  = regbits< type,  5,  1 >;  /**< Msk21  */
    using MSK20  = regbits< type,  4,  1 >;  /**< Msk20  */
    using MSK19  = regbits< type,  3,  1 >;  /**< Msk19  */
    using MSK18  = regbits< type,  2,  1 >;  /**< Msk18  */
    using MSK17  = regbits< type,  1,  1 >;  /**< Msk17  */
    using MSK16  = regbits< type,  0,  1 >;  /**< Msk16  */
  };

  /**
   * IF2 Arbitration Registers 1
   */
  struct IF2ARB1
  : public reg< uint16_t, base_addr + 0x48, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x48, rw, 0x0000 >;

    using ID15  = regbits< type, 15,  1 >;  /**< ID15  */
    using ID14  = regbits< type, 14,  1 >;  /**< ID14  */
    using ID13  = regbits< type, 13,  1 >;  /**< ID13  */
    using ID12  = regbits< type, 12,  1 >;  /**< ID12  */
    using ID11  = regbits< type, 11,  1 >;  /**< ID11  */
    using ID10  = regbits< type, 10,  1 >;  /**< ID10  */
    using ID9   = regbits< type,  9,  1 >;  /**< ID9   */
    using ID8   = regbits< type,  8,  1 >;  /**< ID8   */
    using ID7   = regbits< type,  7,  1 >;  /**< ID7   */
    using ID6   = regbits< type,  6,  1 >;  /**< ID6   */
    using ID5   = regbits< type,  5,  1 >;  /**< ID5   */
    using ID4   = regbits< type,  4,  1 >;  /**< ID4   */
    using ID3   = regbits< type,  3,  1 >;  /**< ID3   */
    using ID2   = regbits< type,  2,  1 >;  /**< ID2   */
    using ID1   = regbits< type,  1,  1 >;  /**< ID1   */
    using ID0   = regbits< type,  0,  1 >;  /**< ID0   */
  };

  /**
   * IF2 Arbitration Registers 2
   */
  struct IF2ARB2
  : public reg< uint16_t, base_addr + 0x4a, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x4a, rw, 0x0000 >;

    using MSGVAL  = regbits< type, 15,  1 >;  /**< MsgVal  */
    using XTD     = regbits< type, 14,  1 >;  /**< Xtd     */
    using DIR     = regbits< type, 13,  1 >;  /**< Dir     */
    using ID28    = regbits< type, 12,  1 >;  /**< ID28    */
    using ID27    = regbits< type, 11,  1 >;  /**< ID27    */
    using ID26    = regbits< type, 10,  1 >;  /**< ID26    */
    using ID25    = regbits< type,  9,  1 >;  /**< ID25    */
    using ID24    = regbits< type,  8,  1 >;  /**< ID24    */
    using ID23    = regbits< type,  7,  1 >;  /**< ID23    */
    using ID22    = regbits< type,  6,  1 >;  /**< ID22    */
    using ID21    = regbits< type,  5,  1 >;  /**< ID21    */
    using ID20    = regbits< type,  4,  1 >;  /**< ID20    */
    using ID19    = regbits< type,  3,  1 >;  /**< ID19    */
    using ID18    = regbits< type,  2,  1 >;  /**< ID18    */
    using ID17    = regbits< type,  1,  1 >;  /**< ID17    */
    using ID16    = regbits< type,  0,  1 >;  /**< ID16    */
  };

  /**
   * IF2 Message Control Register
   */
  struct IF2MCTR
  : public reg< uint16_t, base_addr + 0x4c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x4c, rw, 0x0000 >;

    using NEWDAT  = regbits< type, 15,  1 >;  /**< NewDat  */
    using MSGLST  = regbits< type, 14,  1 >;  /**< MsgLst  */
    using INTPND  = regbits< type, 13,  1 >;  /**< IntPnd  */
    using UMASK   = regbits< type, 12,  1 >;  /**< UMask   */
    using TXIE    = regbits< type, 11,  1 >;  /**< TxIE    */
    using RXIE    = regbits< type, 10,  1 >;  /**< RxIE    */
    using RMTEN   = regbits< type,  9,  1 >;  /**< RmtEn   */
    using TXRQST  = regbits< type,  8,  1 >;  /**< TxRqst  */
    using EOB     = regbits< type,  7,  1 >;  /**< EoB     */
    using DLC     = regbits< type,  0,  4 >;  /**< DLC     */
  };

  /**
   * IF2 Data Registers A1
   */
  struct IF2DTA1_L
  : public reg< uint16_t, base_addr + 0x50, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x50, rw, 0x0000 >;

    using DATA_1_  = regbits< type,  8,  8 >;  /**< Data(1)  */
    using DATA_0_  = regbits< type,  0,  8 >;  /**< Data(0)  */
  };

  /**
   * IF2 Data Registers A2
   */
  struct IF2DTA2_L
  : public reg< uint16_t, base_addr + 0x52, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x52, rw, 0x0000 >;

    using DATA_3_  = regbits< type,  8,  8 >;  /**< Data(3)  */
    using DATA_2_  = regbits< type,  0,  8 >;  /**< Data(2)  */
  };

  /**
   * IF2 Data Registers B1
   */
  struct IF2DTB1_L
  : public reg< uint16_t, base_addr + 0x54, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x54, rw, 0x0000 >;

    using DATA_5_  = regbits< type,  8,  8 >;  /**< Data(5)  */
    using DATA_4_  = regbits< type,  0,  8 >;  /**< Data(4)  */
  };

  /**
   * IF2 Data Registers B2
   */
  struct IF2DTB2_L
  : public reg< uint16_t, base_addr + 0x56, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x56, rw, 0x0000 >;

    using DATA_7_  = regbits< type,  8,  8 >;  /**< Data(7)  */
    using DATA_6_  = regbits< type,  0,  8 >;  /**< Data(6)  */
  };

  /**
   * IF2 Data Registers A2
   */
  struct IF2DTA2_B
  : public reg< uint16_t, base_addr + 0x60, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x60, rw, 0x0000 >;

    using DATA_2_  = regbits< type,  8,  8 >;  /**< Data(2)  */
    using DATA_3_  = regbits< type,  0,  8 >;  /**< Data(3)  */
  };

  /**
   * IF2 Data Registers A1
   */
  struct IF2DTA1_B
  : public reg< uint16_t, base_addr + 0x62, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x62, rw, 0x0000 >;

    using DATA_0_  = regbits< type,  8,  8 >;  /**< Data(0)  */
    using DATA_1_  = regbits< type,  0,  8 >;  /**< Data(1)  */
  };

  /**
   * IF2 Data Registers B2
   */
  struct IF2DTB2_B
  : public reg< uint16_t, base_addr + 0x64, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x64, rw, 0x0000 >;

    using DATA_6_  = regbits< type,  8,  8 >;  /**< Data(6)  */
    using DATA_7_  = regbits< type,  0,  8 >;  /**< Data(7)  */
  };

  /**
   * IF2 Data Registers B1
   */
  struct IF2DTB1_B
  : public reg< uint16_t, base_addr + 0x66, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x66, rw, 0x0000 >;

    using DATA_4_  = regbits< type,  8,  8 >;  /**< Data(4)  */
    using DATA_5_  = regbits< type,  0,  8 >;  /**< Data(5)  */
  };

  /**
   * CAN Transmit Request Registers 1
   */
  struct TREQR1
  : public reg< uint16_t, base_addr + 0x80, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x80, ro, 0x0000 >;

    using TXRQST16  = regbits< type, 15,  1 >;  /**< Bit15 of TREQR1  */
    using TXRQST15  = regbits< type, 14,  1 >;  /**< Bit14 of TREQR1  */
    using TXRQST14  = regbits< type, 13,  1 >;  /**< Bit13 of TREQR1  */
    using TXRQST13  = regbits< type, 12,  1 >;  /**< Bit12 of TREQR1  */
    using TXRQST12  = regbits< type, 11,  1 >;  /**< Bit11 of TREQR1  */
    using TXRQST11  = regbits< type, 10,  1 >;  /**< Bit10 of TREQR1  */
    using TXRQST10  = regbits< type,  9,  1 >;  /**< Bit9 of TREQR1   */
    using TXRQST9   = regbits< type,  8,  1 >;  /**< Bit8 of TREQR1   */
    using TXRQST8   = regbits< type,  7,  1 >;  /**< Bit7 of TREQR1   */
    using TXRQST7   = regbits< type,  6,  1 >;  /**< Bit6 of TREQR1   */
    using TXRQST6   = regbits< type,  5,  1 >;  /**< Bit5 of TREQR1   */
    using TXRQST5   = regbits< type,  4,  1 >;  /**< Bit4 of TREQR1   */
    using TXRQST4   = regbits< type,  3,  1 >;  /**< Bit3 of TREQR1   */
    using TXRQST3   = regbits< type,  2,  1 >;  /**< Bit2 of TREQR1   */
    using TXRQST2   = regbits< type,  1,  1 >;  /**< Bit1 of TREQR1   */
    using TXRQST1   = regbits< type,  0,  1 >;  /**< Bit0 of TREQR1   */
  };

  /**
   * CAN Transmit Request Registers 2
   */
  struct TREQR2
  : public reg< uint16_t, base_addr + 0x82, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x82, ro, 0x0000 >;

    using TXRQST32  = regbits< type, 15,  1 >;  /**< Bit15 of TREQR2  */
    using TXRQST31  = regbits< type, 14,  1 >;  /**< Bit14 of TREQR2  */
    using TXRQST30  = regbits< type, 13,  1 >;  /**< Bit13 of TREQR2  */
    using TXRQST29  = regbits< type, 12,  1 >;  /**< Bit12 of TREQR2  */
    using TXRQST28  = regbits< type, 11,  1 >;  /**< Bit11 of TREQR2  */
    using TXRQST27  = regbits< type, 10,  1 >;  /**< Bit10 of TREQR2  */
    using TXRQST26  = regbits< type,  9,  1 >;  /**< Bit9 of TREQR2   */
    using TXRQST25  = regbits< type,  8,  1 >;  /**< Bit8 of TREQR2   */
    using TXRQST24  = regbits< type,  7,  1 >;  /**< Bit7 of TREQR2   */
    using TXRQST23  = regbits< type,  6,  1 >;  /**< Bit6 of TREQR2   */
    using TXRQST22  = regbits< type,  5,  1 >;  /**< Bit5 of TREQR2   */
    using TXRQST21  = regbits< type,  4,  1 >;  /**< Bit4 of TREQR2   */
    using TXRQST20  = regbits< type,  3,  1 >;  /**< Bit3 of TREQR2   */
    using TXRQST19  = regbits< type,  2,  1 >;  /**< Bit2 of TREQR2   */
    using TXRQST18  = regbits< type,  1,  1 >;  /**< Bit1 of TREQR2   */
    using TXRQST17  = regbits< type,  0,  1 >;  /**< Bit0 of TREQR2   */
  };

  /**
   * CAN New Data Registers 1
   */
  struct NEWDT1
  : public reg< uint16_t, base_addr + 0x90, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x90, ro, 0x0000 >;

    using NEWDAT16  = regbits< type, 15,  1 >;  /**< Bit15 of NEWDT1  */
    using NEWDAT15  = regbits< type, 14,  1 >;  /**< Bit14 of NEWDT1  */
    using NEWDAT14  = regbits< type, 13,  1 >;  /**< Bit13 of NEWDT1  */
    using NEWDAT13  = regbits< type, 12,  1 >;  /**< Bit12 of NEWDT1  */
    using NEWDAT12  = regbits< type, 11,  1 >;  /**< Bit11 of NEWDT1  */
    using NEWDAT11  = regbits< type, 10,  1 >;  /**< Bit10 of NEWDT1  */
    using NEWDAT10  = regbits< type,  9,  1 >;  /**< Bit9 of NEWDT1   */
    using NEWDAT9   = regbits< type,  8,  1 >;  /**< Bit8 of NEWDT1   */
    using NEWDAT8   = regbits< type,  7,  1 >;  /**< Bit7 of NEWDT1   */
    using NEWDAT7   = regbits< type,  6,  1 >;  /**< Bit6 of NEWDT1   */
    using NEWDAT6   = regbits< type,  5,  1 >;  /**< Bit5 of NEWDT1   */
    using NEWDAT5   = regbits< type,  4,  1 >;  /**< Bit4 of NEWDT1   */
    using NEWDAT4   = regbits< type,  3,  1 >;  /**< Bit3 of NEWDT1   */
    using NEWDAT3   = regbits< type,  2,  1 >;  /**< Bit2 of NEWDT1   */
    using NEWDAT2   = regbits< type,  1,  1 >;  /**< Bit1 of NEWDT1   */
    using NEWDAT1   = regbits< type,  0,  1 >;  /**< Bit0 of NEWDT1   */
  };

  /**
   * CAN New Data Registers 2
   */
  struct NEWDT2
  : public reg< uint16_t, base_addr + 0x92, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x92, ro, 0x0000 >;

    using NEWDAT32  = regbits< type, 15,  1 >;  /**< Bit15 of NEWDT2  */
    using NEWDAT31  = regbits< type, 14,  1 >;  /**< Bit14 of NEWDT2  */
    using NEWDAT30  = regbits< type, 13,  1 >;  /**< Bit13 of NEWDT2  */
    using NEWDAT29  = regbits< type, 12,  1 >;  /**< Bit12 of NEWDT2  */
    using NEWDAT28  = regbits< type, 11,  1 >;  /**< Bit11 of NEWDT2  */
    using NEWDAT27  = regbits< type, 10,  1 >;  /**< Bit10 of NEWDT2  */
    using NEWDAT26  = regbits< type,  9,  1 >;  /**< Bit9 of NEWDT2   */
    using NEWDAT25  = regbits< type,  8,  1 >;  /**< Bit8 of NEWDT2   */
    using NEWDAT24  = regbits< type,  7,  1 >;  /**< Bit7 of NEWDT2   */
    using NEWDAT23  = regbits< type,  6,  1 >;  /**< Bit6 of NEWDT2   */
    using NEWDAT22  = regbits< type,  5,  1 >;  /**< Bit5 of NEWDT2   */
    using NEWDAT21  = regbits< type,  4,  1 >;  /**< Bit4 of NEWDT2   */
    using NEWDAT20  = regbits< type,  3,  1 >;  /**< Bit3 of NEWDT2   */
    using NEWDAT19  = regbits< type,  2,  1 >;  /**< Bit2 of NEWDT2   */
    using NEWDAT18  = regbits< type,  1,  1 >;  /**< Bit1 of NEWDT2   */
    using NEWDAT17  = regbits< type,  0,  1 >;  /**< Bit0 of NEWDT2   */
  };

  /**
   * CAN Interrupt Pending Registers 1
   */
  struct INTPND1
  : public reg< uint16_t, base_addr + 0xa0, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xa0, ro, 0x0000 >;

    using INTPND16  = regbits< type, 15,  1 >;  /**< Bit15 of INTPND1  */
    using INTPND15  = regbits< type, 14,  1 >;  /**< Bit14 of INTPND1  */
    using INTPND14  = regbits< type, 13,  1 >;  /**< Bit13 of INTPND1  */
    using INTPND13  = regbits< type, 12,  1 >;  /**< Bit12 of INTPND1  */
    using INTPND12  = regbits< type, 11,  1 >;  /**< Bit11 of INTPND1  */
    using INTPND11  = regbits< type, 10,  1 >;  /**< Bit10 of INTPND1  */
    using INTPND10  = regbits< type,  9,  1 >;  /**< Bit9 of INTPND1   */
    using INTPND9   = regbits< type,  8,  1 >;  /**< Bit8 of INTPND1   */
    using INTPND8   = regbits< type,  7,  1 >;  /**< Bit7 of INTPND1   */
    using INTPND7   = regbits< type,  6,  1 >;  /**< Bit6 of INTPND1   */
    using INTPND6   = regbits< type,  5,  1 >;  /**< Bit5 of INTPND1   */
    using INTPND5   = regbits< type,  4,  1 >;  /**< Bit4 of INTPND1   */
    using INTPND4   = regbits< type,  3,  1 >;  /**< Bit3 of INTPND1   */
    using INTPND3   = regbits< type,  2,  1 >;  /**< Bit2 of INTPND1   */
    using INTPND2   = regbits< type,  1,  1 >;  /**< Bit1 of INTPND1   */
    // fixme: Field name equals parent register name: INTPND1
    using INTPND1_  = regbits< type,  0,  1 >;  /**< Bit0 of INTPND1   */
  };

  /**
   * CAN Interrupt Pending Registers 2
   */
  struct INTPND2
  : public reg< uint16_t, base_addr + 0xa2, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xa2, ro, 0x0000 >;

    using INTPND32  = regbits< type, 15,  1 >;  /**< Bit15 of INTPND2  */
    using INTPND31  = regbits< type, 14,  1 >;  /**< Bit14 of INTPND2  */
    using INTPND30  = regbits< type, 13,  1 >;  /**< Bit13 of INTPND2  */
    using INTPND29  = regbits< type, 12,  1 >;  /**< Bit12 of INTPND2  */
    using INTPND28  = regbits< type, 11,  1 >;  /**< Bit11 of INTPND2  */
    using INTPND27  = regbits< type, 10,  1 >;  /**< Bit10 of INTPND2  */
    using INTPND26  = regbits< type,  9,  1 >;  /**< Bit9 of INTPND2   */
    using INTPND25  = regbits< type,  8,  1 >;  /**< Bit8 of INTPND2   */
    using INTPND24  = regbits< type,  7,  1 >;  /**< Bit7 of INTPND2   */
    using INTPND23  = regbits< type,  6,  1 >;  /**< Bit6 of INTPND2   */
    using INTPND22  = regbits< type,  5,  1 >;  /**< Bit5 of INTPND2   */
    using INTPND21  = regbits< type,  4,  1 >;  /**< Bit4 of INTPND2   */
    using INTPND20  = regbits< type,  3,  1 >;  /**< Bit3 of INTPND2   */
    using INTPND19  = regbits< type,  2,  1 >;  /**< Bit2 of INTPND2   */
    using INTPND18  = regbits< type,  1,  1 >;  /**< Bit1 of INTPND2   */
    using INTPND17  = regbits< type,  0,  1 >;  /**< Bit0 of INTPND2   */
  };

  /**
   * CAN Message Valid Registers 1
   */
  struct MSGVAL1
  : public reg< uint16_t, base_addr + 0xb0, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xb0, ro, 0x0000 >;

    using MSGVAL16  = regbits< type, 15,  1 >;  /**< Bit15 of MSGVAL1  */
    using MSGVAL15  = regbits< type, 14,  1 >;  /**< Bit14 of MSGVAL1  */
    using MSGVAL14  = regbits< type, 13,  1 >;  /**< Bit13 of MSGVAL1  */
    using MSGVAL13  = regbits< type, 12,  1 >;  /**< Bit12 of MSGVAL1  */
    using MSGVAL12  = regbits< type, 11,  1 >;  /**< Bit11 of MSGVAL1  */
    using MSGVAL11  = regbits< type, 10,  1 >;  /**< Bit10 of MSGVAL1  */
    using MSGVAL10  = regbits< type,  9,  1 >;  /**< Bit9 of MSGVAL1   */
    using MSGVAL9   = regbits< type,  8,  1 >;  /**< Bit8 of MSGVAL1   */
    using MSGVAL8   = regbits< type,  7,  1 >;  /**< Bit7 of MSGVAL1   */
    using MSGVAL7   = regbits< type,  6,  1 >;  /**< Bit6 of MSGVAL1   */
    using MSGVAL6   = regbits< type,  5,  1 >;  /**< Bit5 of MSGVAL1   */
    using MSGVAL5   = regbits< type,  4,  1 >;  /**< Bit4 of MSGVAL1   */
    using MSGVAL4   = regbits< type,  3,  1 >;  /**< Bit3 of MSGVAL1   */
    using MSGVAL3   = regbits< type,  2,  1 >;  /**< Bit2 of MSGVAL1   */
    using MSGVAL2   = regbits< type,  1,  1 >;  /**< Bit1 of MSGVAL1   */
    // fixme: Field name equals parent register name: MSGVAL1
    using MSGVAL1_  = regbits< type,  0,  1 >;  /**< Bit0 of MSGVAL1   */
  };

  /**
   * CAN Message Valid Registers 2
   */
  struct MSGVAL2
  : public reg< uint16_t, base_addr + 0xb2, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xb2, ro, 0x0000 >;

    using MSGVAL32  = regbits< type, 15,  1 >;  /**< Bit15 of MSGVAL2  */
    using MSGVAL31  = regbits< type, 14,  1 >;  /**< Bit14 of MSGVAL2  */
    using MSGVAL30  = regbits< type, 13,  1 >;  /**< Bit13 of MSGVAL2  */
    using MSGVAL29  = regbits< type, 12,  1 >;  /**< Bit12 of MSGVAL2  */
    using MSGVAL28  = regbits< type, 11,  1 >;  /**< Bit11 of MSGVAL2  */
    using MSGVAL27  = regbits< type, 10,  1 >;  /**< Bit10 of MSGVAL2  */
    using MSGVAL26  = regbits< type,  9,  1 >;  /**< Bit9 of MSGVAL2   */
    using MSGVAL25  = regbits< type,  8,  1 >;  /**< Bit8 of MSGVAL2   */
    using MSGVAL24  = regbits< type,  7,  1 >;  /**< Bit7 of MSGVAL2   */
    using MSGVAL23  = regbits< type,  6,  1 >;  /**< Bit6 of MSGVAL2   */
    using MSGVAL22  = regbits< type,  5,  1 >;  /**< Bit5 of MSGVAL2   */
    using MSGVAL21  = regbits< type,  4,  1 >;  /**< Bit4 of MSGVAL2   */
    using MSGVAL20  = regbits< type,  3,  1 >;  /**< Bit3 of MSGVAL2   */
    using MSGVAL19  = regbits< type,  2,  1 >;  /**< Bit2 of MSGVAL2   */
    using MSGVAL18  = regbits< type,  1,  1 >;  /**< Bit1 of MSGVAL2   */
    using MSGVAL17  = regbits< type,  0,  1 >;  /**< Bit0 of MSGVAL2   */
  };
};
} // namespace mptl

#endif // ARCH_REG_CAN0_HPP_INCLUDED
