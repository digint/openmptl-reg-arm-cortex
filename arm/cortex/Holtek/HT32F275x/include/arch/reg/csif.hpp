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

#ifndef ARCH_REG_CSIF_HPP_INCLUDED
#define ARCH_REG_CSIF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * CSIF
 */
struct CSIF
{
  static constexpr reg_addr_t base_addr = 0x400cc000;

  /**
   * CSIF_ENR
   */
  struct CSIF_ENR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RESERVED  = regbits< type,  0, 31 >;  /**< Reserved.  */
    using CSIF_EN   = regbits< type, 31,  1 >;  /**< CSIF_EN    */
  };

  /**
   * CSIF_CR
   */
  struct CSIF_CR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using VSYNCTYP  = regbits< type,  1,  1 >;  /**< VSYNCTYP   */
    using HSYNCTYP  = regbits< type,  2,  1 >;  /**< HSYNCTYP   */
    using CLKEDGE   = regbits< type,  3,  1 >;  /**< CLKEDGE    */
    using IMG_FMT   = regbits< type,  4,  1 >;  /**< IMG_FMT    */
    using VSYNCPOL  = regbits< type,  6,  1 >;  /**< VSYNCPOL   */
    using HSYNCPOL  = regbits< type,  7,  1 >;  /**< HSYNCPOL   */
    using IMG_SLD   = regbits< type,  8,  8 >;  /**< IMG_SLD    */
    using IMG_SFD   = regbits< type, 16,  8 >;  /**< IMG_SFD    */
    using RESERVED  = regbits< type, 24,  8 >;  /**< Reserved.  */
  };

  /**
   * CSIF_IMGWH
   */
  struct CSIF_IMGWH
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IMG_WID   = regbits< type,  0, 11 >;  /**< IMG_WID    */
    using IMG_HGH   = regbits< type, 16, 11 >;  /**< IMG_HGH    */
    using RESERVED  = regbits< type, 27,  5 >;  /**< Reserved.  */
  };

  /**
   * CSIF_WCR0
   */
  struct CSIF_WCR0
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WIN_HSTR  = regbits< type,  0, 11 >;  /**< WIN_HSTR  */
    using WIN_VSTR  = regbits< type, 16, 11 >;  /**< WIN_VSTR  */
    using WIN_EN    = regbits< type, 31,  1 >;  /**< WIN_EN    */
  };

  /**
   * CSIF_WCR1
   */
  struct CSIF_WCR1
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WIN_WID   = regbits< type,  0, 11 >;  /**< WIN_WID    */
    using WIN_HGH   = regbits< type, 16, 11 >;  /**< WIN_HGH    */
    using RESERVED  = regbits< type, 27,  5 >;  /**< Reserved.  */
  };

  /**
   * CSIF_SMP
   */
  struct CSIF_SMP
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CSML    = regbits< type,  8,  5 >;  /**< CSML    */
    using RSML    = regbits< type, 16,  5 >;  /**< RSML    */
    using SMP_EN  = regbits< type, 31,  1 >;  /**< SMP_EN  */
  };

  /**
   * CSIF_SMPCOL
   */
  struct CSIF_SMPCOL
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CSM  = regbits< type,  0, 32 >;  /**< CSM  */
  };

  /**
   * CSIF_SMPROW
   */
  struct CSIF_SMPROW
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RSM  = regbits< type,  0, 32 >;  /**< RSM  */
  };

  /**
   * CSIF_FIFO0
   */
  struct CSIF_FIFO0
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIFODATA  = regbits< type,  0, 32 >;  /**< FIFODATA  */
  };

  /**
   * CSIF_FIFO1
   */
  struct CSIF_FIFO1
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIFODATA  = regbits< type,  0, 32 >;  /**< FIFODATA  */
  };

  /**
   * CSIF_FIFO2
   */
  struct CSIF_FIFO2
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIFODATA  = regbits< type,  0, 32 >;  /**< FIFODATA  */
  };

  /**
   * CSIF_FIFO3
   */
  struct CSIF_FIFO3
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIFODATA  = regbits< type,  0, 32 >;  /**< FIFODATA  */
  };

  /**
   * CSIF_FIFO4
   */
  struct CSIF_FIFO4
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIFODATA  = regbits< type,  0, 32 >;  /**< FIFODATA  */
  };

  /**
   * CSIF_FIFO5
   */
  struct CSIF_FIFO5
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIFODATA  = regbits< type,  0, 32 >;  /**< FIFODATA  */
  };

  /**
   * CSIF_FIFO6
   */
  struct CSIF_FIFO6
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIFODATA  = regbits< type,  0, 32 >;  /**< FIFODATA  */
  };

  /**
   * CSIF_FIFO7
   */
  struct CSIF_FIFO7
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIFODATA  = regbits< type,  0, 32 >;  /**< FIFODATA  */
  };

  /**
   * CSIF_IER
   */
  struct CSIF_IER
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SOFFLGE   = regbits< type,  0,  1 >;  /**< SOFFLGE    */
    using EOFFLGE   = regbits< type,  1,  1 >;  /**< EOFFLGE    */
    using CAPSTAE   = regbits< type,  2,  1 >;  /**< CAPSTAE    */
    using CAPSTSE   = regbits< type,  3,  1 >;  /**< CAPSTSE    */
    using BADFRME   = regbits< type,  4,  1 >;  /**< BADFRME    */
    using FIFOOVRE  = regbits< type,  8,  1 >;  /**< FIFOOVRE   */
    using FIFOEMPE  = regbits< type,  9,  1 >;  /**< FIFOEMPE   */
    using FIFOFULE  = regbits< type, 10,  1 >;  /**< FIFOFULE   */
    using RESERVED  = regbits< type, 11, 21 >;  /**< Reserved.  */
  };

  /**
   * CSIF_SR
   */
  struct CSIF_SR
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SOF_FLG   = regbits< type,  0,  1 >;  /**< SOF_FLG    */
    using EOF_FLG   = regbits< type,  1,  1 >;  /**< EOF_FLG    */
    using CAP_STA   = regbits< type,  2,  1 >;  /**< CAP_STA    */
    using CAP_STS   = regbits< type,  3,  1 >;  /**< CAP_STS    */
    using BAD_FRM   = regbits< type,  4,  1 >;  /**< BAD_FRM    */
    using FIFO_OVR  = regbits< type,  8,  1 >;  /**< FIFO_OVR   */
    using FIFO_EMP  = regbits< type,  9,  1 >;  /**< FIFO_EMP   */
    using FIFO_FUL  = regbits< type, 10,  1 >;  /**< FIFO_FUL   */
    using RESERVED  = regbits< type, 11, 21 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CSIF_HPP_INCLUDED
