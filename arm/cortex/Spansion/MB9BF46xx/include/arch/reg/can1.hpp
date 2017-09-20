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
//  Import from CMSIS-SVD: "Spansion/MB9BF46xx.svd"
//
//  name: MB9BF46xx
//  version: 1.0
//  description: MB9BF46xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CAN1_HPP_INCLUDED
#define ARCH_REG_CAN1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral CAN0
 *
 * (derived from: CAN0)
 */
struct CAN1
{
  static constexpr reg_addr_t base_addr = 0x40063000;

  /**
   * register CTRLR
   */
  struct CTRLR
  : public reg< uint16_t, base_addr + 0x0, rw, 0x0001 >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0x0001 >;

    using TEST  = regbits< type,  7,  1 >;  /**< bitfield TEST  */
    using CCE   = regbits< type,  6,  1 >;  /**< bitfield CCE   */
    using DAR   = regbits< type,  5,  1 >;  /**< bitfield DAR   */
    using EIE   = regbits< type,  3,  1 >;  /**< bitfield EIE   */
    using SIE   = regbits< type,  2,  1 >;  /**< bitfield SIE   */
    using IE    = regbits< type,  1,  1 >;  /**< bitfield IE    */
    using INIT  = regbits< type,  0,  1 >;  /**< bitfield INIT  */
  };

  /**
   * register STATR
   */
  struct STATR
  : public reg< uint16_t, base_addr + 0x2, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0x0000 >;

    using BOFF   = regbits< type,  7,  1 >;  /**< bitfield BOFF   */
    using EWARN  = regbits< type,  6,  1 >;  /**< bitfield EWARN  */
    using EPASS  = regbits< type,  5,  1 >;  /**< bitfield EPASS  */
    using RXOK   = regbits< type,  4,  1 >;  /**< bitfield RXOK   */
    using TXOK   = regbits< type,  3,  1 >;  /**< bitfield TXOK   */
    using LEC    = regbits< type,  0,  3 >;  /**< bitfield LEC    */
  };

  /**
   * register ERRCNT
   */
  struct ERRCNT
  : public reg< uint16_t, base_addr + 0x4, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x4, ro, 0x0000 >;

    using RP   = regbits< type, 15,  1 >;  /**< bitfield RP   */
    using REC  = regbits< type,  8,  7 >;  /**< bitfield REC  */
    using TEC  = regbits< type,  0,  8 >;  /**< bitfield TEC  */
  };

  /**
   * register BTR
   */
  struct BTR
  : public reg< uint16_t, base_addr + 0x6, rw, 0x2301 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0x2301 >;

    using TSEG2  = regbits< type, 12,  3 >;  /**< bitfield TSEG2  */
    using TSEG1  = regbits< type,  8,  4 >;  /**< bitfield TSEG1  */
    using SJW    = regbits< type,  6,  2 >;  /**< bitfield SJW    */
    using BRP    = regbits< type,  0,  6 >;  /**< bitfield BRP    */
  };

  /**
   * register INTR
   */
  struct INTR
  : public reg< uint16_t, base_addr + 0x8, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0x0000 >;

    using INTID  = regbits< type,  0, 16 >;  /**< bitfield INTID  */
  };

  /**
   * register TESTR
   */
  struct TESTR
  : public reg< uint16_t, base_addr + 0xa, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0x0000 >;

    using RX      = regbits< type,  7,  1 >;  /**< bitfield RX      */
    using TX      = regbits< type,  5,  2 >;  /**< bitfield TX      */
    using LBACK   = regbits< type,  4,  1 >;  /**< bitfield LBACK   */
    using SILENT  = regbits< type,  3,  1 >;  /**< bitfield SILENT  */
    using BASIC   = regbits< type,  2,  1 >;  /**< bitfield BASIC   */
  };

  /**
   * register BRPER
   */
  struct BRPER
  : public reg< uint16_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0x0000 >;

    using BRPE  = regbits< type,  0,  4 >;  /**< bitfield BRPE  */
  };

  /**
   * register IF1CREQ
   */
  struct IF1CREQ
  : public reg< uint16_t, base_addr + 0x10, rw, 0x0001 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0x0001 >;

    using BUSY           = regbits< type, 15,  1 >;  /**< bitfield BUSY           */
    using MESSAGENUMBER  = regbits< type,  0,  8 >;  /**< bitfield MESSAGENUMBER  */
  };

  /**
   * register IF1CMSK
   */
  struct IF1CMSK
  : public reg< uint16_t, base_addr + 0x12, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0x0000 >;

    using WRRD     = regbits< type,  7,  1 >;  /**< bitfield WRRD     */
    using MASK     = regbits< type,  6,  1 >;  /**< bitfield MASK     */
    using ARB      = regbits< type,  5,  1 >;  /**< bitfield ARB      */
    using CONTROL  = regbits< type,  4,  1 >;  /**< bitfield CONTROL  */
    using CIP      = regbits< type,  3,  1 >;  /**< bitfield CIP      */
    using NEWDAT   = regbits< type,  2,  1 >;  /**< bitfield NEWDAT   */
    using DATAA    = regbits< type,  1,  1 >;  /**< bitfield DATAA    */
    using DATAB    = regbits< type,  0,  1 >;  /**< bitfield DATAB    */
  };

  /**
   * register IF1MSK1
   */
  struct IF1MSK1
  : public reg< uint16_t, base_addr + 0x14, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0xFFFF >;

    using MSK15  = regbits< type, 15,  1 >;  /**< bitfield MSK15  */
    using MSK14  = regbits< type, 14,  1 >;  /**< bitfield MSK14  */
    using MSK13  = regbits< type, 13,  1 >;  /**< bitfield MSK13  */
    using MSK12  = regbits< type, 12,  1 >;  /**< bitfield MSK12  */
    using MSK11  = regbits< type, 11,  1 >;  /**< bitfield MSK11  */
    using MSK10  = regbits< type, 10,  1 >;  /**< bitfield MSK10  */
    using MSK9   = regbits< type,  9,  1 >;  /**< bitfield MSK9   */
    using MSK8   = regbits< type,  8,  1 >;  /**< bitfield MSK8   */
    using MSK7   = regbits< type,  7,  1 >;  /**< bitfield MSK7   */
    using MSK6   = regbits< type,  6,  1 >;  /**< bitfield MSK6   */
    using MSK5   = regbits< type,  5,  1 >;  /**< bitfield MSK5   */
    using MSK4   = regbits< type,  4,  1 >;  /**< bitfield MSK4   */
    using MSK3   = regbits< type,  3,  1 >;  /**< bitfield MSK3   */
    using MSK2   = regbits< type,  2,  1 >;  /**< bitfield MSK2   */
    using MSK1   = regbits< type,  1,  1 >;  /**< bitfield MSK1   */
    using MSK0   = regbits< type,  0,  1 >;  /**< bitfield MSK0   */
  };

  /**
   * register IF1MSK2
   */
  struct IF1MSK2
  : public reg< uint16_t, base_addr + 0x16, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0xFFFF >;

    using MXTD   = regbits< type, 15,  1 >;  /**< bitfield MXTD   */
    using MDIR   = regbits< type, 14,  1 >;  /**< bitfield MDIR   */
    using MSK28  = regbits< type, 12,  1 >;  /**< bitfield MSK28  */
    using MSK27  = regbits< type, 11,  1 >;  /**< bitfield MSK27  */
    using MSK26  = regbits< type, 10,  1 >;  /**< bitfield MSK26  */
    using MSK25  = regbits< type,  9,  1 >;  /**< bitfield MSK25  */
    using MSK24  = regbits< type,  8,  1 >;  /**< bitfield MSK24  */
    using MSK23  = regbits< type,  7,  1 >;  /**< bitfield MSK23  */
    using MSK22  = regbits< type,  6,  1 >;  /**< bitfield MSK22  */
    using MSK21  = regbits< type,  5,  1 >;  /**< bitfield MSK21  */
    using MSK20  = regbits< type,  4,  1 >;  /**< bitfield MSK20  */
    using MSK19  = regbits< type,  3,  1 >;  /**< bitfield MSK19  */
    using MSK18  = regbits< type,  2,  1 >;  /**< bitfield MSK18  */
    using MSK17  = regbits< type,  1,  1 >;  /**< bitfield MSK17  */
    using MSK16  = regbits< type,  0,  1 >;  /**< bitfield MSK16  */
  };

  /**
   * register IF1ARB1
   */
  struct IF1ARB1
  : public reg< uint16_t, base_addr + 0x18, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0x0000 >;

    using ID15  = regbits< type, 15,  1 >;  /**< bitfield ID15  */
    using ID14  = regbits< type, 14,  1 >;  /**< bitfield ID14  */
    using ID13  = regbits< type, 13,  1 >;  /**< bitfield ID13  */
    using ID12  = regbits< type, 12,  1 >;  /**< bitfield ID12  */
    using ID11  = regbits< type, 11,  1 >;  /**< bitfield ID11  */
    using ID10  = regbits< type, 10,  1 >;  /**< bitfield ID10  */
    using ID9   = regbits< type,  9,  1 >;  /**< bitfield ID9   */
    using ID8   = regbits< type,  8,  1 >;  /**< bitfield ID8   */
    using ID7   = regbits< type,  7,  1 >;  /**< bitfield ID7   */
    using ID6   = regbits< type,  6,  1 >;  /**< bitfield ID6   */
    using ID5   = regbits< type,  5,  1 >;  /**< bitfield ID5   */
    using ID4   = regbits< type,  4,  1 >;  /**< bitfield ID4   */
    using ID3   = regbits< type,  3,  1 >;  /**< bitfield ID3   */
    using ID2   = regbits< type,  2,  1 >;  /**< bitfield ID2   */
    using ID1   = regbits< type,  1,  1 >;  /**< bitfield ID1   */
    using ID0   = regbits< type,  0,  1 >;  /**< bitfield ID0   */
  };

  /**
   * register IF1ARB2
   */
  struct IF1ARB2
  : public reg< uint16_t, base_addr + 0x1a, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1a, rw, 0x0000 >;

    using MSGVAL  = regbits< type, 15,  1 >;  /**< bitfield MSGVAL  */
    using XTD     = regbits< type, 14,  1 >;  /**< bitfield XTD     */
    using DIR     = regbits< type, 13,  1 >;  /**< bitfield DIR     */
    using ID28    = regbits< type, 12,  1 >;  /**< bitfield ID28    */
    using ID27    = regbits< type, 11,  1 >;  /**< bitfield ID27    */
    using ID26    = regbits< type, 10,  1 >;  /**< bitfield ID26    */
    using ID25    = regbits< type,  9,  1 >;  /**< bitfield ID25    */
    using ID24    = regbits< type,  8,  1 >;  /**< bitfield ID24    */
    using ID23    = regbits< type,  7,  1 >;  /**< bitfield ID23    */
    using ID22    = regbits< type,  6,  1 >;  /**< bitfield ID22    */
    using ID21    = regbits< type,  5,  1 >;  /**< bitfield ID21    */
    using ID20    = regbits< type,  4,  1 >;  /**< bitfield ID20    */
    using ID19    = regbits< type,  3,  1 >;  /**< bitfield ID19    */
    using ID18    = regbits< type,  2,  1 >;  /**< bitfield ID18    */
    using ID17    = regbits< type,  1,  1 >;  /**< bitfield ID17    */
    using ID16    = regbits< type,  0,  1 >;  /**< bitfield ID16    */
  };

  /**
   * register IF1MCTR
   */
  struct IF1MCTR
  : public reg< uint16_t, base_addr + 0x1c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0x0000 >;

    using NEWDAT  = regbits< type, 15,  1 >;  /**< bitfield NEWDAT  */
    using MSGLST  = regbits< type, 14,  1 >;  /**< bitfield MSGLST  */
    using INTPND  = regbits< type, 13,  1 >;  /**< bitfield INTPND  */
    using UMASK   = regbits< type, 12,  1 >;  /**< bitfield UMASK   */
    using TXIE    = regbits< type, 11,  1 >;  /**< bitfield TXIE    */
    using RXIE    = regbits< type, 10,  1 >;  /**< bitfield RXIE    */
    using RMTEN   = regbits< type,  9,  1 >;  /**< bitfield RMTEN   */
    using TXRQST  = regbits< type,  8,  1 >;  /**< bitfield TXRQST  */
    using EOB     = regbits< type,  7,  1 >;  /**< bitfield EOB     */
    using DLC     = regbits< type,  0,  4 >;  /**< bitfield DLC     */
  };

  /**
   * register IF1DTA1_L
   */
  struct IF1DTA1_L
  : public reg< uint16_t, base_addr + 0x20, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0x0000 >;

    using DATA_1_  = regbits< type,  8,  8 >;  /**< bitfield DATA_1_  */
    using DATA_0_  = regbits< type,  0,  8 >;  /**< bitfield DATA_0_  */
  };

  /**
   * register IF1DTA2_L
   */
  struct IF1DTA2_L
  : public reg< uint16_t, base_addr + 0x22, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x22, rw, 0x0000 >;

    using DATA_3_  = regbits< type,  8,  8 >;  /**< bitfield DATA_3_  */
    using DATA_2_  = regbits< type,  0,  8 >;  /**< bitfield DATA_2_  */
  };

  /**
   * register IF1DTB1_L
   */
  struct IF1DTB1_L
  : public reg< uint16_t, base_addr + 0x24, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0x0000 >;

    using DATA_5_  = regbits< type,  8,  8 >;  /**< bitfield DATA_5_  */
    using DATA_4_  = regbits< type,  0,  8 >;  /**< bitfield DATA_4_  */
  };

  /**
   * register IF1DTB2_L
   */
  struct IF1DTB2_L
  : public reg< uint16_t, base_addr + 0x26, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x26, rw, 0x0000 >;

    using DATA_7_  = regbits< type,  8,  8 >;  /**< bitfield DATA_7_  */
    using DATA_6_  = regbits< type,  0,  8 >;  /**< bitfield DATA_6_  */
  };

  /**
   * register IF1DTA2_B
   */
  struct IF1DTA2_B
  : public reg< uint16_t, base_addr + 0x30, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x30, rw, 0x0000 >;

    using DATA_2_  = regbits< type,  8,  8 >;  /**< bitfield DATA_2_  */
    using DATA_3_  = regbits< type,  0,  8 >;  /**< bitfield DATA_3_  */
  };

  /**
   * register IF1DTA1_B
   */
  struct IF1DTA1_B
  : public reg< uint16_t, base_addr + 0x32, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x32, rw, 0x0000 >;

    using DATA_0_  = regbits< type,  8,  8 >;  /**< bitfield DATA_0_  */
    using DATA_1_  = regbits< type,  0,  8 >;  /**< bitfield DATA_1_  */
  };

  /**
   * register IF1DTB2_B
   */
  struct IF1DTB2_B
  : public reg< uint16_t, base_addr + 0x34, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x34, rw, 0x0000 >;

    using DATA_6_  = regbits< type,  8,  8 >;  /**< bitfield DATA_6_  */
    using DATA_7_  = regbits< type,  0,  8 >;  /**< bitfield DATA_7_  */
  };

  /**
   * register IF1DTB1_B
   */
  struct IF1DTB1_B
  : public reg< uint16_t, base_addr + 0x36, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x36, rw, 0x0000 >;

    using DATA_4_  = regbits< type,  8,  8 >;  /**< bitfield DATA_4_  */
    using DATA_5_  = regbits< type,  0,  8 >;  /**< bitfield DATA_5_  */
  };

  /**
   * register IF2CREQ
   */
  struct IF2CREQ
  : public reg< uint16_t, base_addr + 0x40, rw, 0x0001 >
  {
    using type = reg< uint16_t, base_addr + 0x40, rw, 0x0001 >;

    using BUSY           = regbits< type, 15,  1 >;  /**< bitfield BUSY           */
    using MESSAGENUMBER  = regbits< type,  0,  8 >;  /**< bitfield MESSAGENUMBER  */
  };

  /**
   * register IF2CMSK
   */
  struct IF2CMSK
  : public reg< uint16_t, base_addr + 0x42, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x42, rw, 0x0000 >;

    using WRRD     = regbits< type,  7,  1 >;  /**< bitfield WRRD     */
    using MASK     = regbits< type,  6,  1 >;  /**< bitfield MASK     */
    using ARB      = regbits< type,  5,  1 >;  /**< bitfield ARB      */
    using CONTROL  = regbits< type,  4,  1 >;  /**< bitfield CONTROL  */
    using CIP      = regbits< type,  3,  1 >;  /**< bitfield CIP      */
    using NEWDAT   = regbits< type,  2,  1 >;  /**< bitfield NEWDAT   */
    using DATAA    = regbits< type,  1,  1 >;  /**< bitfield DATAA    */
    using DATAB    = regbits< type,  0,  1 >;  /**< bitfield DATAB    */
  };

  /**
   * register IF2MSK1
   */
  struct IF2MSK1
  : public reg< uint16_t, base_addr + 0x44, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x44, rw, 0xFFFF >;

    using MSK15  = regbits< type, 15,  1 >;  /**< bitfield MSK15  */
    using MSK14  = regbits< type, 14,  1 >;  /**< bitfield MSK14  */
    using MSK13  = regbits< type, 13,  1 >;  /**< bitfield MSK13  */
    using MSK12  = regbits< type, 12,  1 >;  /**< bitfield MSK12  */
    using MSK11  = regbits< type, 11,  1 >;  /**< bitfield MSK11  */
    using MSK10  = regbits< type, 10,  1 >;  /**< bitfield MSK10  */
    using MSK9   = regbits< type,  9,  1 >;  /**< bitfield MSK9   */
    using MSK8   = regbits< type,  8,  1 >;  /**< bitfield MSK8   */
    using MSK7   = regbits< type,  7,  1 >;  /**< bitfield MSK7   */
    using MSK6   = regbits< type,  6,  1 >;  /**< bitfield MSK6   */
    using MSK5   = regbits< type,  5,  1 >;  /**< bitfield MSK5   */
    using MSK4   = regbits< type,  4,  1 >;  /**< bitfield MSK4   */
    using MSK3   = regbits< type,  3,  1 >;  /**< bitfield MSK3   */
    using MSK2   = regbits< type,  2,  1 >;  /**< bitfield MSK2   */
    using MSK1   = regbits< type,  1,  1 >;  /**< bitfield MSK1   */
    using MSK0   = regbits< type,  0,  1 >;  /**< bitfield MSK0   */
  };

  /**
   * register IF2MSK2
   */
  struct IF2MSK2
  : public reg< uint16_t, base_addr + 0x46, rw, 0xDFFF >
  {
    using type = reg< uint16_t, base_addr + 0x46, rw, 0xDFFF >;

    using MXTD   = regbits< type, 15,  1 >;  /**< bitfield MXTD   */
    using MDIR   = regbits< type, 14,  1 >;  /**< bitfield MDIR   */
    using MSK28  = regbits< type, 12,  1 >;  /**< bitfield MSK28  */
    using MSK27  = regbits< type, 11,  1 >;  /**< bitfield MSK27  */
    using MSK26  = regbits< type, 10,  1 >;  /**< bitfield MSK26  */
    using MSK25  = regbits< type,  9,  1 >;  /**< bitfield MSK25  */
    using MSK24  = regbits< type,  8,  1 >;  /**< bitfield MSK24  */
    using MSK23  = regbits< type,  7,  1 >;  /**< bitfield MSK23  */
    using MSK22  = regbits< type,  6,  1 >;  /**< bitfield MSK22  */
    using MSK21  = regbits< type,  5,  1 >;  /**< bitfield MSK21  */
    using MSK20  = regbits< type,  4,  1 >;  /**< bitfield MSK20  */
    using MSK19  = regbits< type,  3,  1 >;  /**< bitfield MSK19  */
    using MSK18  = regbits< type,  2,  1 >;  /**< bitfield MSK18  */
    using MSK17  = regbits< type,  1,  1 >;  /**< bitfield MSK17  */
    using MSK16  = regbits< type,  0,  1 >;  /**< bitfield MSK16  */
  };

  /**
   * register IF2ARB1
   */
  struct IF2ARB1
  : public reg< uint16_t, base_addr + 0x48, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x48, rw, 0x0000 >;

    using ID15  = regbits< type, 15,  1 >;  /**< bitfield ID15  */
    using ID14  = regbits< type, 14,  1 >;  /**< bitfield ID14  */
    using ID13  = regbits< type, 13,  1 >;  /**< bitfield ID13  */
    using ID12  = regbits< type, 12,  1 >;  /**< bitfield ID12  */
    using ID11  = regbits< type, 11,  1 >;  /**< bitfield ID11  */
    using ID10  = regbits< type, 10,  1 >;  /**< bitfield ID10  */
    using ID9   = regbits< type,  9,  1 >;  /**< bitfield ID9   */
    using ID8   = regbits< type,  8,  1 >;  /**< bitfield ID8   */
    using ID7   = regbits< type,  7,  1 >;  /**< bitfield ID7   */
    using ID6   = regbits< type,  6,  1 >;  /**< bitfield ID6   */
    using ID5   = regbits< type,  5,  1 >;  /**< bitfield ID5   */
    using ID4   = regbits< type,  4,  1 >;  /**< bitfield ID4   */
    using ID3   = regbits< type,  3,  1 >;  /**< bitfield ID3   */
    using ID2   = regbits< type,  2,  1 >;  /**< bitfield ID2   */
    using ID1   = regbits< type,  1,  1 >;  /**< bitfield ID1   */
    using ID0   = regbits< type,  0,  1 >;  /**< bitfield ID0   */
  };

  /**
   * register IF2ARB2
   */
  struct IF2ARB2
  : public reg< uint16_t, base_addr + 0x4a, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x4a, rw, 0x0000 >;

    using MSGVAL  = regbits< type, 15,  1 >;  /**< bitfield MSGVAL  */
    using XTD     = regbits< type, 14,  1 >;  /**< bitfield XTD     */
    using DIR     = regbits< type, 13,  1 >;  /**< bitfield DIR     */
    using ID28    = regbits< type, 12,  1 >;  /**< bitfield ID28    */
    using ID27    = regbits< type, 11,  1 >;  /**< bitfield ID27    */
    using ID26    = regbits< type, 10,  1 >;  /**< bitfield ID26    */
    using ID25    = regbits< type,  9,  1 >;  /**< bitfield ID25    */
    using ID24    = regbits< type,  8,  1 >;  /**< bitfield ID24    */
    using ID23    = regbits< type,  7,  1 >;  /**< bitfield ID23    */
    using ID22    = regbits< type,  6,  1 >;  /**< bitfield ID22    */
    using ID21    = regbits< type,  5,  1 >;  /**< bitfield ID21    */
    using ID20    = regbits< type,  4,  1 >;  /**< bitfield ID20    */
    using ID19    = regbits< type,  3,  1 >;  /**< bitfield ID19    */
    using ID18    = regbits< type,  2,  1 >;  /**< bitfield ID18    */
    using ID17    = regbits< type,  1,  1 >;  /**< bitfield ID17    */
    using ID16    = regbits< type,  0,  1 >;  /**< bitfield ID16    */
  };

  /**
   * register IF2MCTR
   */
  struct IF2MCTR
  : public reg< uint16_t, base_addr + 0x4c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x4c, rw, 0x0000 >;

    using NEWDAT  = regbits< type, 15,  1 >;  /**< bitfield NEWDAT  */
    using MSGLST  = regbits< type, 14,  1 >;  /**< bitfield MSGLST  */
    using INTPND  = regbits< type, 13,  1 >;  /**< bitfield INTPND  */
    using UMASK   = regbits< type, 12,  1 >;  /**< bitfield UMASK   */
    using TXIE    = regbits< type, 11,  1 >;  /**< bitfield TXIE    */
    using RXIE    = regbits< type, 10,  1 >;  /**< bitfield RXIE    */
    using RMTEN   = regbits< type,  9,  1 >;  /**< bitfield RMTEN   */
    using TXRQST  = regbits< type,  8,  1 >;  /**< bitfield TXRQST  */
    using EOB     = regbits< type,  7,  1 >;  /**< bitfield EOB     */
    using DLC     = regbits< type,  0,  4 >;  /**< bitfield DLC     */
  };

  /**
   * register IF2DTA1_L
   */
  struct IF2DTA1_L
  : public reg< uint16_t, base_addr + 0x50, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x50, rw, 0x0000 >;

    using DATA_1_  = regbits< type,  8,  8 >;  /**< bitfield DATA_1_  */
    using DATA_0_  = regbits< type,  0,  8 >;  /**< bitfield DATA_0_  */
  };

  /**
   * register IF2DTA2_L
   */
  struct IF2DTA2_L
  : public reg< uint16_t, base_addr + 0x52, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x52, rw, 0x0000 >;

    using DATA_3_  = regbits< type,  8,  8 >;  /**< bitfield DATA_3_  */
    using DATA_2_  = regbits< type,  0,  8 >;  /**< bitfield DATA_2_  */
  };

  /**
   * register IF2DTB1_L
   */
  struct IF2DTB1_L
  : public reg< uint16_t, base_addr + 0x54, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x54, rw, 0x0000 >;

    using DATA_5_  = regbits< type,  8,  8 >;  /**< bitfield DATA_5_  */
    using DATA_4_  = regbits< type,  0,  8 >;  /**< bitfield DATA_4_  */
  };

  /**
   * register IF2DTB2_L
   */
  struct IF2DTB2_L
  : public reg< uint16_t, base_addr + 0x56, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x56, rw, 0x0000 >;

    using DATA_7_  = regbits< type,  8,  8 >;  /**< bitfield DATA_7_  */
    using DATA_6_  = regbits< type,  0,  8 >;  /**< bitfield DATA_6_  */
  };

  /**
   * register IF2DTA2_B
   */
  struct IF2DTA2_B
  : public reg< uint16_t, base_addr + 0x60, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x60, rw, 0x0000 >;

    using DATA_2_  = regbits< type,  8,  8 >;  /**< bitfield DATA_2_  */
    using DATA_3_  = regbits< type,  0,  8 >;  /**< bitfield DATA_3_  */
  };

  /**
   * register IF2DTA1_B
   */
  struct IF2DTA1_B
  : public reg< uint16_t, base_addr + 0x62, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x62, rw, 0x0000 >;

    using DATA_0_  = regbits< type,  8,  8 >;  /**< bitfield DATA_0_  */
    using DATA_1_  = regbits< type,  0,  8 >;  /**< bitfield DATA_1_  */
  };

  /**
   * register IF2DTB2_B
   */
  struct IF2DTB2_B
  : public reg< uint16_t, base_addr + 0x64, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x64, rw, 0x0000 >;

    using DATA_6_  = regbits< type,  8,  8 >;  /**< bitfield DATA_6_  */
    using DATA_7_  = regbits< type,  0,  8 >;  /**< bitfield DATA_7_  */
  };

  /**
   * register IF2DTB1_B
   */
  struct IF2DTB1_B
  : public reg< uint16_t, base_addr + 0x66, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x66, rw, 0x0000 >;

    using DATA_4_  = regbits< type,  8,  8 >;  /**< bitfield DATA_4_  */
    using DATA_5_  = regbits< type,  0,  8 >;  /**< bitfield DATA_5_  */
  };

  /**
   * register TREQR1
   */
  struct TREQR1
  : public reg< uint16_t, base_addr + 0x80, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x80, ro, 0x0000 >;

    using TXRQST16  = regbits< type, 15,  1 >;  /**< bitfield TXRQST16  */
    using TXRQST15  = regbits< type, 14,  1 >;  /**< bitfield TXRQST15  */
    using TXRQST14  = regbits< type, 13,  1 >;  /**< bitfield TXRQST14  */
    using TXRQST13  = regbits< type, 12,  1 >;  /**< bitfield TXRQST13  */
    using TXRQST12  = regbits< type, 11,  1 >;  /**< bitfield TXRQST12  */
    using TXRQST11  = regbits< type, 10,  1 >;  /**< bitfield TXRQST11  */
    using TXRQST10  = regbits< type,  9,  1 >;  /**< bitfield TXRQST10  */
    using TXRQST9   = regbits< type,  8,  1 >;  /**< bitfield TXRQST9   */
    using TXRQST8   = regbits< type,  7,  1 >;  /**< bitfield TXRQST8   */
    using TXRQST7   = regbits< type,  6,  1 >;  /**< bitfield TXRQST7   */
    using TXRQST6   = regbits< type,  5,  1 >;  /**< bitfield TXRQST6   */
    using TXRQST5   = regbits< type,  4,  1 >;  /**< bitfield TXRQST5   */
    using TXRQST4   = regbits< type,  3,  1 >;  /**< bitfield TXRQST4   */
    using TXRQST3   = regbits< type,  2,  1 >;  /**< bitfield TXRQST3   */
    using TXRQST2   = regbits< type,  1,  1 >;  /**< bitfield TXRQST2   */
    using TXRQST1   = regbits< type,  0,  1 >;  /**< bitfield TXRQST1   */
  };

  /**
   * register TREQR2
   */
  struct TREQR2
  : public reg< uint16_t, base_addr + 0x82, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x82, ro, 0x0000 >;

    using TXRQST32  = regbits< type, 15,  1 >;  /**< bitfield TXRQST32  */
    using TXRQST31  = regbits< type, 14,  1 >;  /**< bitfield TXRQST31  */
    using TXRQST30  = regbits< type, 13,  1 >;  /**< bitfield TXRQST30  */
    using TXRQST29  = regbits< type, 12,  1 >;  /**< bitfield TXRQST29  */
    using TXRQST28  = regbits< type, 11,  1 >;  /**< bitfield TXRQST28  */
    using TXRQST27  = regbits< type, 10,  1 >;  /**< bitfield TXRQST27  */
    using TXRQST26  = regbits< type,  9,  1 >;  /**< bitfield TXRQST26  */
    using TXRQST25  = regbits< type,  8,  1 >;  /**< bitfield TXRQST25  */
    using TXRQST24  = regbits< type,  7,  1 >;  /**< bitfield TXRQST24  */
    using TXRQST23  = regbits< type,  6,  1 >;  /**< bitfield TXRQST23  */
    using TXRQST22  = regbits< type,  5,  1 >;  /**< bitfield TXRQST22  */
    using TXRQST21  = regbits< type,  4,  1 >;  /**< bitfield TXRQST21  */
    using TXRQST20  = regbits< type,  3,  1 >;  /**< bitfield TXRQST20  */
    using TXRQST19  = regbits< type,  2,  1 >;  /**< bitfield TXRQST19  */
    using TXRQST18  = regbits< type,  1,  1 >;  /**< bitfield TXRQST18  */
    using TXRQST17  = regbits< type,  0,  1 >;  /**< bitfield TXRQST17  */
  };

  /**
   * register NEWDT1
   */
  struct NEWDT1
  : public reg< uint16_t, base_addr + 0x90, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x90, ro, 0x0000 >;

    using NEWDAT16  = regbits< type, 15,  1 >;  /**< bitfield NEWDAT16  */
    using NEWDAT15  = regbits< type, 14,  1 >;  /**< bitfield NEWDAT15  */
    using NEWDAT14  = regbits< type, 13,  1 >;  /**< bitfield NEWDAT14  */
    using NEWDAT13  = regbits< type, 12,  1 >;  /**< bitfield NEWDAT13  */
    using NEWDAT12  = regbits< type, 11,  1 >;  /**< bitfield NEWDAT12  */
    using NEWDAT11  = regbits< type, 10,  1 >;  /**< bitfield NEWDAT11  */
    using NEWDAT10  = regbits< type,  9,  1 >;  /**< bitfield NEWDAT10  */
    using NEWDAT9   = regbits< type,  8,  1 >;  /**< bitfield NEWDAT9   */
    using NEWDAT8   = regbits< type,  7,  1 >;  /**< bitfield NEWDAT8   */
    using NEWDAT7   = regbits< type,  6,  1 >;  /**< bitfield NEWDAT7   */
    using NEWDAT6   = regbits< type,  5,  1 >;  /**< bitfield NEWDAT6   */
    using NEWDAT5   = regbits< type,  4,  1 >;  /**< bitfield NEWDAT5   */
    using NEWDAT4   = regbits< type,  3,  1 >;  /**< bitfield NEWDAT4   */
    using NEWDAT3   = regbits< type,  2,  1 >;  /**< bitfield NEWDAT3   */
    using NEWDAT2   = regbits< type,  1,  1 >;  /**< bitfield NEWDAT2   */
    using NEWDAT1   = regbits< type,  0,  1 >;  /**< bitfield NEWDAT1   */
  };

  /**
   * register NEWDT2
   */
  struct NEWDT2
  : public reg< uint16_t, base_addr + 0x92, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x92, ro, 0x0000 >;

    using NEWDAT32  = regbits< type, 15,  1 >;  /**< bitfield NEWDAT32  */
    using NEWDAT31  = regbits< type, 14,  1 >;  /**< bitfield NEWDAT31  */
    using NEWDAT30  = regbits< type, 13,  1 >;  /**< bitfield NEWDAT30  */
    using NEWDAT29  = regbits< type, 12,  1 >;  /**< bitfield NEWDAT29  */
    using NEWDAT28  = regbits< type, 11,  1 >;  /**< bitfield NEWDAT28  */
    using NEWDAT27  = regbits< type, 10,  1 >;  /**< bitfield NEWDAT27  */
    using NEWDAT26  = regbits< type,  9,  1 >;  /**< bitfield NEWDAT26  */
    using NEWDAT25  = regbits< type,  8,  1 >;  /**< bitfield NEWDAT25  */
    using NEWDAT24  = regbits< type,  7,  1 >;  /**< bitfield NEWDAT24  */
    using NEWDAT23  = regbits< type,  6,  1 >;  /**< bitfield NEWDAT23  */
    using NEWDAT22  = regbits< type,  5,  1 >;  /**< bitfield NEWDAT22  */
    using NEWDAT21  = regbits< type,  4,  1 >;  /**< bitfield NEWDAT21  */
    using NEWDAT20  = regbits< type,  3,  1 >;  /**< bitfield NEWDAT20  */
    using NEWDAT19  = regbits< type,  2,  1 >;  /**< bitfield NEWDAT19  */
    using NEWDAT18  = regbits< type,  1,  1 >;  /**< bitfield NEWDAT18  */
    using NEWDAT17  = regbits< type,  0,  1 >;  /**< bitfield NEWDAT17  */
  };

  /**
   * register INTPND1
   */
  struct INTPND1
  : public reg< uint16_t, base_addr + 0xa0, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xa0, ro, 0x0000 >;

    using INTPND16  = regbits< type, 15,  1 >;  /**< bitfield INTPND16  */
    using INTPND15  = regbits< type, 14,  1 >;  /**< bitfield INTPND15  */
    using INTPND14  = regbits< type, 13,  1 >;  /**< bitfield INTPND14  */
    using INTPND13  = regbits< type, 12,  1 >;  /**< bitfield INTPND13  */
    using INTPND12  = regbits< type, 11,  1 >;  /**< bitfield INTPND12  */
    using INTPND11  = regbits< type, 10,  1 >;  /**< bitfield INTPND11  */
    using INTPND10  = regbits< type,  9,  1 >;  /**< bitfield INTPND10  */
    using INTPND9   = regbits< type,  8,  1 >;  /**< bitfield INTPND9   */
    using INTPND8   = regbits< type,  7,  1 >;  /**< bitfield INTPND8   */
    using INTPND7   = regbits< type,  6,  1 >;  /**< bitfield INTPND7   */
    using INTPND6   = regbits< type,  5,  1 >;  /**< bitfield INTPND6   */
    using INTPND5   = regbits< type,  4,  1 >;  /**< bitfield INTPND5   */
    using INTPND4   = regbits< type,  3,  1 >;  /**< bitfield INTPND4   */
    using INTPND3   = regbits< type,  2,  1 >;  /**< bitfield INTPND3   */
    using INTPND2   = regbits< type,  1,  1 >;  /**< bitfield INTPND2   */
    // fixme: Field name equals parent register name: INTPND1
    using INTPND1_  = regbits< type,  0,  1 >;  /**< bitfield INTPND1   */
  };

  /**
   * register INTPND2
   */
  struct INTPND2
  : public reg< uint16_t, base_addr + 0xa2, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xa2, ro, 0x0000 >;

    using INTPND32  = regbits< type, 15,  1 >;  /**< bitfield INTPND32  */
    using INTPND31  = regbits< type, 14,  1 >;  /**< bitfield INTPND31  */
    using INTPND30  = regbits< type, 13,  1 >;  /**< bitfield INTPND30  */
    using INTPND29  = regbits< type, 12,  1 >;  /**< bitfield INTPND29  */
    using INTPND28  = regbits< type, 11,  1 >;  /**< bitfield INTPND28  */
    using INTPND27  = regbits< type, 10,  1 >;  /**< bitfield INTPND27  */
    using INTPND26  = regbits< type,  9,  1 >;  /**< bitfield INTPND26  */
    using INTPND25  = regbits< type,  8,  1 >;  /**< bitfield INTPND25  */
    using INTPND24  = regbits< type,  7,  1 >;  /**< bitfield INTPND24  */
    using INTPND23  = regbits< type,  6,  1 >;  /**< bitfield INTPND23  */
    using INTPND22  = regbits< type,  5,  1 >;  /**< bitfield INTPND22  */
    using INTPND21  = regbits< type,  4,  1 >;  /**< bitfield INTPND21  */
    using INTPND20  = regbits< type,  3,  1 >;  /**< bitfield INTPND20  */
    using INTPND19  = regbits< type,  2,  1 >;  /**< bitfield INTPND19  */
    using INTPND18  = regbits< type,  1,  1 >;  /**< bitfield INTPND18  */
    using INTPND17  = regbits< type,  0,  1 >;  /**< bitfield INTPND17  */
  };

  /**
   * register MSGVAL1
   */
  struct MSGVAL1
  : public reg< uint16_t, base_addr + 0xb0, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xb0, ro, 0x0000 >;

    using MSGVAL16  = regbits< type, 15,  1 >;  /**< bitfield MSGVAL16  */
    using MSGVAL15  = regbits< type, 14,  1 >;  /**< bitfield MSGVAL15  */
    using MSGVAL14  = regbits< type, 13,  1 >;  /**< bitfield MSGVAL14  */
    using MSGVAL13  = regbits< type, 12,  1 >;  /**< bitfield MSGVAL13  */
    using MSGVAL12  = regbits< type, 11,  1 >;  /**< bitfield MSGVAL12  */
    using MSGVAL11  = regbits< type, 10,  1 >;  /**< bitfield MSGVAL11  */
    using MSGVAL10  = regbits< type,  9,  1 >;  /**< bitfield MSGVAL10  */
    using MSGVAL9   = regbits< type,  8,  1 >;  /**< bitfield MSGVAL9   */
    using MSGVAL8   = regbits< type,  7,  1 >;  /**< bitfield MSGVAL8   */
    using MSGVAL7   = regbits< type,  6,  1 >;  /**< bitfield MSGVAL7   */
    using MSGVAL6   = regbits< type,  5,  1 >;  /**< bitfield MSGVAL6   */
    using MSGVAL5   = regbits< type,  4,  1 >;  /**< bitfield MSGVAL5   */
    using MSGVAL4   = regbits< type,  3,  1 >;  /**< bitfield MSGVAL4   */
    using MSGVAL3   = regbits< type,  2,  1 >;  /**< bitfield MSGVAL3   */
    using MSGVAL2   = regbits< type,  1,  1 >;  /**< bitfield MSGVAL2   */
    // fixme: Field name equals parent register name: MSGVAL1
    using MSGVAL1_  = regbits< type,  0,  1 >;  /**< bitfield MSGVAL1   */
  };

  /**
   * register MSGVAL2
   */
  struct MSGVAL2
  : public reg< uint16_t, base_addr + 0xb2, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xb2, ro, 0x0000 >;

    using MSGVAL32  = regbits< type, 15,  1 >;  /**< bitfield MSGVAL32  */
    using MSGVAL31  = regbits< type, 14,  1 >;  /**< bitfield MSGVAL31  */
    using MSGVAL30  = regbits< type, 13,  1 >;  /**< bitfield MSGVAL30  */
    using MSGVAL29  = regbits< type, 12,  1 >;  /**< bitfield MSGVAL29  */
    using MSGVAL28  = regbits< type, 11,  1 >;  /**< bitfield MSGVAL28  */
    using MSGVAL27  = regbits< type, 10,  1 >;  /**< bitfield MSGVAL27  */
    using MSGVAL26  = regbits< type,  9,  1 >;  /**< bitfield MSGVAL26  */
    using MSGVAL25  = regbits< type,  8,  1 >;  /**< bitfield MSGVAL25  */
    using MSGVAL24  = regbits< type,  7,  1 >;  /**< bitfield MSGVAL24  */
    using MSGVAL23  = regbits< type,  6,  1 >;  /**< bitfield MSGVAL23  */
    using MSGVAL22  = regbits< type,  5,  1 >;  /**< bitfield MSGVAL22  */
    using MSGVAL21  = regbits< type,  4,  1 >;  /**< bitfield MSGVAL21  */
    using MSGVAL20  = regbits< type,  3,  1 >;  /**< bitfield MSGVAL20  */
    using MSGVAL19  = regbits< type,  2,  1 >;  /**< bitfield MSGVAL19  */
    using MSGVAL18  = regbits< type,  1,  1 >;  /**< bitfield MSGVAL18  */
    using MSGVAL17  = regbits< type,  0,  1 >;  /**< bitfield MSGVAL17  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CAN1_HPP_INCLUDED
