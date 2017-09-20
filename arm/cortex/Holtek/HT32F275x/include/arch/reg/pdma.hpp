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

#ifndef ARCH_REG_PDMA_HPP_INCLUDED
#define ARCH_REG_PDMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * PDMA
 */
struct PDMA
{
  static constexpr reg_addr_t base_addr = 0x40090000;

  /**
   * PDMA_CH0CR
   */
  struct PDMA_CH0CR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH0SADR
   */
  struct PDMA_CH0SADR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH0DADR
   */
  struct PDMA_CH0DADR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH0CADR
   */
  struct PDMA_CH0CADR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH0TSR
   */
  struct PDMA_CH0TSR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH0CTSR
   */
  struct PDMA_CH0CTSR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH1CR
   */
  struct PDMA_CH1CR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH1SADR
   */
  struct PDMA_CH1SADR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH1DADR
   */
  struct PDMA_CH1DADR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH1CADR
   */
  struct PDMA_CH1CADR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH1TSR
   */
  struct PDMA_CH1TSR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH1CTSR
   */
  struct PDMA_CH1CTSR
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH2CR
   */
  struct PDMA_CH2CR
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH2SADR
   */
  struct PDMA_CH2SADR
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH2DADR
   */
  struct PDMA_CH2DADR
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH2CADR
   */
  struct PDMA_CH2CADR
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH2TSR
   */
  struct PDMA_CH2TSR
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH2CTSR
   */
  struct PDMA_CH2CTSR
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH3CR
   */
  struct PDMA_CH3CR
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH3SADR
   */
  struct PDMA_CH3SADR
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH3DADR
   */
  struct PDMA_CH3DADR
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH3CADR
   */
  struct PDMA_CH3CADR
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH3TSR
   */
  struct PDMA_CH3TSR
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH3CTSR
   */
  struct PDMA_CH3CTSR
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH4CR
   */
  struct PDMA_CH4CR
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH4SADR
   */
  struct PDMA_CH4SADR
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH4DADR
   */
  struct PDMA_CH4DADR
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH4CADR
   */
  struct PDMA_CH4CADR
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH4TSR
   */
  struct PDMA_CH4TSR
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH4CTSR
   */
  struct PDMA_CH4CTSR
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH5CR
   */
  struct PDMA_CH5CR
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH5SADR
   */
  struct PDMA_CH5SADR
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH5DADR
   */
  struct PDMA_CH5DADR
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH5CADR
   */
  struct PDMA_CH5CADR
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH5TSR
   */
  struct PDMA_CH5TSR
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH5CTSR
   */
  struct PDMA_CH5CTSR
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH6CR
   */
  struct PDMA_CH6CR
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH6SADR
   */
  struct PDMA_CH6SADR
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH6DADR
   */
  struct PDMA_CH6DADR
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH6CADR
   */
  struct PDMA_CH6CADR
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH6TSR
   */
  struct PDMA_CH6TSR
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH6CTSR
   */
  struct PDMA_CH6CTSR
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH7CR
   */
  struct PDMA_CH7CR
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH7SADR
   */
  struct PDMA_CH7SADR
  : public reg< uint32_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH7DADR
   */
  struct PDMA_CH7DADR
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH7CADR
   */
  struct PDMA_CH7CADR
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH7TSR
   */
  struct PDMA_CH7TSR
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH7CTSR
   */
  struct PDMA_CH7CTSR
  : public reg< uint32_t, base_addr + 0x000000bc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH8CR
   */
  struct PDMA_CH8CR
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH8SADR
   */
  struct PDMA_CH8SADR
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH8DADR
   */
  struct PDMA_CH8DADR
  : public reg< uint32_t, base_addr + 0x000000c8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH8CADR
   */
  struct PDMA_CH8CADR
  : public reg< uint32_t, base_addr + 0x000000cc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000cc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH8TSR
   */
  struct PDMA_CH8TSR
  : public reg< uint32_t, base_addr + 0x000000d0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000d0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH8CTSR
   */
  struct PDMA_CH8CTSR
  : public reg< uint32_t, base_addr + 0x000000d4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000d4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH9CR
   */
  struct PDMA_CH9CR
  : public reg< uint32_t, base_addr + 0x000000d8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000d8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH9SADR
   */
  struct PDMA_CH9SADR
  : public reg< uint32_t, base_addr + 0x000000dc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000dc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH9DADR
   */
  struct PDMA_CH9DADR
  : public reg< uint32_t, base_addr + 0x000000e0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000e0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH9CADR
   */
  struct PDMA_CH9CADR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH9TSR
   */
  struct PDMA_CH9TSR
  : public reg< uint32_t, base_addr + 0x000000e8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH9CTSR
   */
  struct PDMA_CH9CTSR
  : public reg< uint32_t, base_addr + 0x000000ec, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000ec, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH10CR
   */
  struct PDMA_CH10CR
  : public reg< uint32_t, base_addr + 0x000000f0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000f0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH10SADR
   */
  struct PDMA_CH10SADR
  : public reg< uint32_t, base_addr + 0x000000f4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000f4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH10DADR
   */
  struct PDMA_CH10DADR
  : public reg< uint32_t, base_addr + 0x000000f8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000f8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH10CADR
   */
  struct PDMA_CH10CADR
  : public reg< uint32_t, base_addr + 0x000000fc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000fc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH10TSR
   */
  struct PDMA_CH10TSR
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH10CTSR
   */
  struct PDMA_CH10CTSR
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_CH11CR
   */
  struct PDMA_CH11CR
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CHEN      = regbits< type,  0,  1 >;  /**< CHEN       */
    using SWTRIG    = regbits< type,  1,  1 >;  /**< SWTRIG     */
    using DWIDTH    = regbits< type,  2,  2 >;  /**< DWIDTH     */
    using DSTAINC   = regbits< type,  4,  1 >;  /**< DSTAINC    */
    using DSTAMOD   = regbits< type,  5,  1 >;  /**< DSTAMOD    */
    using SRCAINC   = regbits< type,  6,  1 >;  /**< SRCAINC    */
    using SRCAMOD   = regbits< type,  7,  1 >;  /**< SRCAMOD    */
    using CHPRI     = regbits< type,  8,  2 >;  /**< CHPRI      */
    using FIXAEN    = regbits< type, 10,  1 >;  /**< FIXAEN     */
    using AUTORL    = regbits< type, 11,  1 >;  /**< AUTORL     */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * PDMA_CH11SADR
   */
  struct PDMA_CH11SADR
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SADR  = regbits< type,  0, 32 >;  /**< SADR  */
  };

  /**
   * PDMA_CH11DADR
   */
  struct PDMA_CH11DADR
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DADR  = regbits< type,  0, 32 >;  /**< DADR  */
  };

  /**
   * PDMA_CH11CADR
   */
  struct PDMA_CH11CADR
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CDADR  = regbits< type,  0, 16 >;  /**< CDADR  */
    using CSADR  = regbits< type, 16, 16 >;  /**< CSADR  */
  };

  /**
   * PDMA_CH11TSR
   */
  struct PDMA_CH11TSR
  : public reg< uint32_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BLKLEN  = regbits< type,  0, 16 >;  /**< BLKLEN  */
    using BLKCNT  = regbits< type, 16, 16 >;  /**< BLKCNT  */
  };

  /**
   * PDMA_CH11CTSR
   */
  struct PDMA_CH11CTSR
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CBLKLEN  = regbits< type,  0, 16 >;  /**< CBLKLEN  */
    using CBLKCNT  = regbits< type, 16, 16 >;  /**< CBLKCNT  */
  };

  /**
   * PDMA_ISR0
   */
  struct PDMA_ISR0
  : public reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GEISTA0   = regbits< type,  0,  1 >;  /**< GEISTA0    */
    using BEISTA0   = regbits< type,  1,  1 >;  /**< BEISTA0    */
    using HTISTA0   = regbits< type,  2,  1 >;  /**< HTISTA0    */
    using TCISTA0   = regbits< type,  3,  1 >;  /**< TCISTA0    */
    using TEISTA0   = regbits< type,  4,  1 >;  /**< TEISTA0    */
    using GEISTA1   = regbits< type,  5,  1 >;  /**< GEISTA1    */
    using BEISTA1   = regbits< type,  6,  1 >;  /**< BEISTA1    */
    using HTISTA1   = regbits< type,  7,  1 >;  /**< HTISTA1    */
    using TCISTA1   = regbits< type,  8,  1 >;  /**< TCISTA1    */
    using TEISTA1   = regbits< type,  9,  1 >;  /**< TEISTA1    */
    using GEISTA2   = regbits< type, 10,  1 >;  /**< GEISTA2    */
    using BEISTA2   = regbits< type, 11,  1 >;  /**< BEISTA2    */
    using HTISTA2   = regbits< type, 12,  1 >;  /**< HTISTA2    */
    using TCISTA2   = regbits< type, 13,  1 >;  /**< TCISTA2    */
    using TEISTA2   = regbits< type, 14,  1 >;  /**< TEISTA2    */
    using GEISTA3   = regbits< type, 15,  1 >;  /**< GEISTA3    */
    using BEISTA3   = regbits< type, 16,  1 >;  /**< BEISTA3    */
    using HTISTA3   = regbits< type, 17,  1 >;  /**< HTISTA3    */
    using TCISTA3   = regbits< type, 18,  1 >;  /**< TCISTA3    */
    using TEISTA3   = regbits< type, 19,  1 >;  /**< TEISTA3    */
    using GEISTA4   = regbits< type, 20,  1 >;  /**< GEISTA4    */
    using BEISTA4   = regbits< type, 21,  1 >;  /**< BEISTA4    */
    using HTISTA4   = regbits< type, 22,  1 >;  /**< HTISTA4    */
    using TCISTA4   = regbits< type, 23,  1 >;  /**< TCISTA4    */
    using TEISTA4   = regbits< type, 24,  1 >;  /**< TEISTA4    */
    using GEISTA5   = regbits< type, 25,  1 >;  /**< GEISTA5    */
    using BEISTA5   = regbits< type, 26,  1 >;  /**< BEISTA5    */
    using HTISTA5   = regbits< type, 27,  1 >;  /**< HTISTA5    */
    using TCISTA5   = regbits< type, 28,  1 >;  /**< TCISTA5    */
    using TEISTA5   = regbits< type, 29,  1 >;  /**< TEISTA5    */
    using RESERVED  = regbits< type, 30,  2 >;  /**< Reserved.  */
  };

  /**
   * PDMA_ISR1
   */
  struct PDMA_ISR1
  : public reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GEISTA6   = regbits< type,  0,  1 >;  /**< GEISTA6    */
    using BEISTA6   = regbits< type,  1,  1 >;  /**< BEISTA6    */
    using HTISTA6   = regbits< type,  2,  1 >;  /**< HTISTA6    */
    using TCISTA6   = regbits< type,  3,  1 >;  /**< TCISTA6    */
    using TEISTA6   = regbits< type,  4,  1 >;  /**< TEISTA6    */
    using GEISTA7   = regbits< type,  5,  1 >;  /**< GEISTA7    */
    using BEISTA7   = regbits< type,  6,  1 >;  /**< BEISTA7    */
    using HTISTA7   = regbits< type,  7,  1 >;  /**< HTISTA7    */
    using TCISTA7   = regbits< type,  8,  1 >;  /**< TCISTA7    */
    using TEISTA7   = regbits< type,  9,  1 >;  /**< TEISTA7    */
    using GEISTA8   = regbits< type, 10,  1 >;  /**< GEISTA8    */
    using BEISTA8   = regbits< type, 11,  1 >;  /**< BEISTA8    */
    using HTISTA8   = regbits< type, 12,  1 >;  /**< HTISTA8    */
    using TCISTA8   = regbits< type, 13,  1 >;  /**< TCISTA8    */
    using TEISTA8   = regbits< type, 14,  1 >;  /**< TEISTA8    */
    using GEISTA9   = regbits< type, 15,  1 >;  /**< GEISTA9    */
    using BEISTA9   = regbits< type, 16,  1 >;  /**< BEISTA9    */
    using HTISTA9   = regbits< type, 17,  1 >;  /**< HTISTA9    */
    using TCISTA9   = regbits< type, 18,  1 >;  /**< TCISTA9    */
    using TEISTA9   = regbits< type, 19,  1 >;  /**< TEISTA9    */
    using GEISTA10  = regbits< type, 20,  1 >;  /**< GEISTA10   */
    using BEISTA10  = regbits< type, 21,  1 >;  /**< BEISTA10   */
    using HTISTA10  = regbits< type, 22,  1 >;  /**< HTISTA10   */
    using TCISTA10  = regbits< type, 23,  1 >;  /**< TCISTA10   */
    using TEISTA10  = regbits< type, 24,  1 >;  /**< TEISTA10   */
    using GEISTA11  = regbits< type, 25,  1 >;  /**< GEISTA11   */
    using BEISTA11  = regbits< type, 26,  1 >;  /**< BEISTA11   */
    using HTISTA11  = regbits< type, 27,  1 >;  /**< HTISTA11   */
    using TCISTA11  = regbits< type, 28,  1 >;  /**< TCISTA11   */
    using TEISTA11  = regbits< type, 29,  1 >;  /**< TEISTA11   */
    using RESERVED  = regbits< type, 30,  2 >;  /**< Reserved.  */
  };

  /**
   * PDMA_ISCR0
   */
  struct PDMA_ISCR0
  : public reg< uint32_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GEICLR0   = regbits< type,  0,  1 >;  /**< GEICLR0    */
    using BEICLR0   = regbits< type,  1,  1 >;  /**< BEICLR0    */
    using HTICLR0   = regbits< type,  2,  1 >;  /**< HTICLR0    */
    using TCICLR0   = regbits< type,  3,  1 >;  /**< TCICLR0    */
    using TEICLR0   = regbits< type,  4,  1 >;  /**< TEICLR0    */
    using GEICLR1   = regbits< type,  5,  1 >;  /**< GEICLR1    */
    using BEICLR1   = regbits< type,  6,  1 >;  /**< BEICLR1    */
    using HTICLR1   = regbits< type,  7,  1 >;  /**< HTICLR1    */
    using TCICLR1   = regbits< type,  8,  1 >;  /**< TCICLR1    */
    using TEICLR1   = regbits< type,  9,  1 >;  /**< TEICLR1    */
    using GEICLR2   = regbits< type, 10,  1 >;  /**< GEICLR2    */
    using BEICLR2   = regbits< type, 11,  1 >;  /**< BEICLR2    */
    using HTICLR2   = regbits< type, 12,  1 >;  /**< HTICLR2    */
    using TCICLR2   = regbits< type, 13,  1 >;  /**< TCICLR2    */
    using TEICLR2   = regbits< type, 14,  1 >;  /**< TEICLR2    */
    using GEICLR3   = regbits< type, 15,  1 >;  /**< GEICLR3    */
    using BEICLR3   = regbits< type, 16,  1 >;  /**< BEICLR3    */
    using HTICLR3   = regbits< type, 17,  1 >;  /**< HTICLR3    */
    using TCICLR3   = regbits< type, 18,  1 >;  /**< TCICLR3    */
    using TEICLR3   = regbits< type, 19,  1 >;  /**< TEICLR3    */
    using GEICLR4   = regbits< type, 20,  1 >;  /**< GEICLR4    */
    using BEICLR4   = regbits< type, 21,  1 >;  /**< BEICLR4    */
    using HTICLR4   = regbits< type, 22,  1 >;  /**< HTICLR4    */
    using TCICLR4   = regbits< type, 23,  1 >;  /**< TCICLR4    */
    using TEICLR4   = regbits< type, 24,  1 >;  /**< TEICLR4    */
    using GEICLR5   = regbits< type, 25,  1 >;  /**< GEICLR5    */
    using BEICLR5   = regbits< type, 26,  1 >;  /**< BEICLR5    */
    using HTICLR5   = regbits< type, 27,  1 >;  /**< HTICLR5    */
    using TCICLR5   = regbits< type, 28,  1 >;  /**< TCICLR5    */
    using TEICLR5   = regbits< type, 29,  1 >;  /**< TEICLR5    */
    using RESERVED  = regbits< type, 30,  2 >;  /**< Reserved.  */
  };

  /**
   * PDMA_ISCR1
   */
  struct PDMA_ISCR1
  : public reg< uint32_t, base_addr + 0x0000012c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000012c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GEICLR6   = regbits< type,  0,  1 >;  /**< GEICLR6    */
    using BEICLR6   = regbits< type,  1,  1 >;  /**< BEICLR6    */
    using HTICLR6   = regbits< type,  2,  1 >;  /**< HTICLR6    */
    using TCICLR6   = regbits< type,  3,  1 >;  /**< TCICLR6    */
    using TEICLR6   = regbits< type,  4,  1 >;  /**< TEICLR6    */
    using GEICLR7   = regbits< type,  5,  1 >;  /**< GEICLR7    */
    using BEICLR7   = regbits< type,  6,  1 >;  /**< BEICLR7    */
    using HTICLR7   = regbits< type,  7,  1 >;  /**< HTICLR7    */
    using TCICLR7   = regbits< type,  8,  1 >;  /**< TCICLR7    */
    using TEICLR7   = regbits< type,  9,  1 >;  /**< TEICLR7    */
    using GEICLR8   = regbits< type, 10,  1 >;  /**< GEICLR8    */
    using BEICLR8   = regbits< type, 11,  1 >;  /**< BEICLR8    */
    using HTICLR8   = regbits< type, 12,  1 >;  /**< HTICLR8    */
    using TCICLR8   = regbits< type, 13,  1 >;  /**< TCICLR8    */
    using TEICLR8   = regbits< type, 14,  1 >;  /**< TEICLR8    */
    using GEICLR9   = regbits< type, 15,  1 >;  /**< GEICLR9    */
    using BEICLR9   = regbits< type, 16,  1 >;  /**< BEICLR9    */
    using HTICLR9   = regbits< type, 17,  1 >;  /**< HTICLR9    */
    using TCICLR9   = regbits< type, 18,  1 >;  /**< TCICLR9    */
    using TEICLR9   = regbits< type, 19,  1 >;  /**< TEICLR9    */
    using GEICLR10  = regbits< type, 20,  1 >;  /**< GEICLR10   */
    using BEICLR10  = regbits< type, 21,  1 >;  /**< BEICLR10   */
    using HTICLR10  = regbits< type, 22,  1 >;  /**< HTICLR10   */
    using TCICLR10  = regbits< type, 23,  1 >;  /**< TCICLR10   */
    using TEICLR10  = regbits< type, 24,  1 >;  /**< TEICLR10   */
    using GEICLR11  = regbits< type, 25,  1 >;  /**< GEICLR11   */
    using BEICLR11  = regbits< type, 26,  1 >;  /**< BEICLR11   */
    using HTICLR11  = regbits< type, 27,  1 >;  /**< HTICLR11   */
    using TCICLR11  = regbits< type, 28,  1 >;  /**< TCICLR11   */
    using TEICLR11  = regbits< type, 29,  1 >;  /**< TEICLR11   */
    using RESERVED  = regbits< type, 30,  2 >;  /**< Reserved.  */
  };

  /**
   * PDMA_IER0
   */
  struct PDMA_IER0
  : public reg< uint32_t, base_addr + 0x00000130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GEIE0     = regbits< type,  0,  1 >;  /**< GEIE0      */
    using BEIE0     = regbits< type,  1,  1 >;  /**< BEIE0      */
    using HTIE0     = regbits< type,  2,  1 >;  /**< HTIE0      */
    using TCIE0     = regbits< type,  3,  1 >;  /**< TCIE0      */
    using TEIE0     = regbits< type,  4,  1 >;  /**< TEIE0      */
    using GEIE1     = regbits< type,  5,  1 >;  /**< GEIE1      */
    using BEIE1     = regbits< type,  6,  1 >;  /**< BEIE1      */
    using HTIE1     = regbits< type,  7,  1 >;  /**< HTIE1      */
    using TCIE1     = regbits< type,  8,  1 >;  /**< TCIE1      */
    using TEIE1     = regbits< type,  9,  1 >;  /**< TEIE1      */
    using GEIE2     = regbits< type, 10,  1 >;  /**< GEIE2      */
    using BEIE2     = regbits< type, 11,  1 >;  /**< BEIE2      */
    using HTIE2     = regbits< type, 12,  1 >;  /**< HTIE2      */
    using TCIE2     = regbits< type, 13,  1 >;  /**< TCIE2      */
    using TEIE2     = regbits< type, 14,  1 >;  /**< TEIE2      */
    using GEIE3     = regbits< type, 15,  1 >;  /**< GEIE3      */
    using BEIE3     = regbits< type, 16,  1 >;  /**< BEIE3      */
    using HTIE3     = regbits< type, 17,  1 >;  /**< HTIE3      */
    using TCIE3     = regbits< type, 18,  1 >;  /**< TCIE3      */
    using TEIE3     = regbits< type, 19,  1 >;  /**< TEIE3      */
    using GEIE4     = regbits< type, 20,  1 >;  /**< GEIE4      */
    using BEIE4     = regbits< type, 21,  1 >;  /**< BEIE4      */
    using HTIE4     = regbits< type, 22,  1 >;  /**< HTIE4      */
    using TCIE4     = regbits< type, 23,  1 >;  /**< TCIE4      */
    using TEIE4     = regbits< type, 24,  1 >;  /**< TEIE4      */
    using GEIE5     = regbits< type, 25,  1 >;  /**< GEIE5      */
    using BEIE5     = regbits< type, 26,  1 >;  /**< BEIE5      */
    using HTIE5     = regbits< type, 27,  1 >;  /**< HTIE5      */
    using TCIE5     = regbits< type, 28,  1 >;  /**< TCIE5      */
    using TEIE5     = regbits< type, 29,  1 >;  /**< TEIE5      */
    using RESERVED  = regbits< type, 30,  2 >;  /**< Reserved.  */
  };

  /**
   * PDMA_IER1
   */
  struct PDMA_IER1
  : public reg< uint32_t, base_addr + 0x00000134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GEIE6     = regbits< type,  0,  1 >;  /**< GEIE6      */
    using BEIE6     = regbits< type,  1,  1 >;  /**< BEIE6      */
    using HTIE6     = regbits< type,  2,  1 >;  /**< HTIE6      */
    using TCIE6     = regbits< type,  3,  1 >;  /**< TCIE6      */
    using TEIE6     = regbits< type,  4,  1 >;  /**< TEIE6      */
    using GEIE7     = regbits< type,  5,  1 >;  /**< GEIE7      */
    using BEIE7     = regbits< type,  6,  1 >;  /**< BEIE7      */
    using HTIE7     = regbits< type,  7,  1 >;  /**< HTIE7      */
    using TCIE7     = regbits< type,  8,  1 >;  /**< TCIE7      */
    using TEIE7     = regbits< type,  9,  1 >;  /**< TEIE7      */
    using GEIE8     = regbits< type, 10,  1 >;  /**< GEIE8      */
    using BEIE8     = regbits< type, 11,  1 >;  /**< BEIE8      */
    using HTIE8     = regbits< type, 12,  1 >;  /**< HTIE8      */
    using TCIE8     = regbits< type, 13,  1 >;  /**< TCIE8      */
    using TEIE8     = regbits< type, 14,  1 >;  /**< TEIE8      */
    using GEIE9     = regbits< type, 15,  1 >;  /**< GEIE9      */
    using BEIE9     = regbits< type, 16,  1 >;  /**< BEIE9      */
    using HTIE9     = regbits< type, 17,  1 >;  /**< HTIE9      */
    using TCIE9     = regbits< type, 18,  1 >;  /**< TCIE9      */
    using TEIE9     = regbits< type, 19,  1 >;  /**< TEIE9      */
    using GEIE10    = regbits< type, 20,  1 >;  /**< GEIE10     */
    using BEIE10    = regbits< type, 21,  1 >;  /**< BEIE10     */
    using HTIE10    = regbits< type, 22,  1 >;  /**< HTIE10     */
    using TCIE10    = regbits< type, 23,  1 >;  /**< TCIE10     */
    using TEIE10    = regbits< type, 24,  1 >;  /**< TEIE10     */
    using GEIE11    = regbits< type, 25,  1 >;  /**< GEIE11     */
    using BEIE11    = regbits< type, 26,  1 >;  /**< BEIE11     */
    using HTIE11    = regbits< type, 27,  1 >;  /**< HTIE11     */
    using TCIE11    = regbits< type, 28,  1 >;  /**< TCIE11     */
    using TEIE11    = regbits< type, 29,  1 >;  /**< TEIE11     */
    using RESERVED  = regbits< type, 30,  2 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PDMA_HPP_INCLUDED
