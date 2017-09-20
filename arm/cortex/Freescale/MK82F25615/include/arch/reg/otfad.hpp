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
//  Import from CMSIS-SVD: "Freescale/MK82F25615.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK82F25615
//  series: Kinetis_K
//  version: 1.6
//  description: MK82F25615 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OTFAD_HPP_INCLUDED
#define ARCH_REG_OTFAD_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * OTFAD
 */
struct OTFAD
{
  static constexpr reg_addr_t base_addr = 0x400dac00;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using FSVM  = regbits< type,  2,  1 >;  /**< Force Security Violation Mode      */
    using FLDM  = regbits< type,  3,  1 >;  /**< Force Logically Disabled Mode      */
    using RRAE  = regbits< type,  7,  1 >;  /**< Restricted Register Access Enable  */
    using CCTX  = regbits< type, 16,  2 >;  /**< CRC Context                        */
    using CRCE  = regbits< type, 20,  1 >;  /**< CRC Enable                         */
    using CRCI  = regbits< type, 21,  1 >;  /**< CRC Initialization                 */
    using GE    = regbits< type, 31,  1 >;  /**< Global OTFAD Enable                */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x40 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x40 >;

    using MDPCP  = regbits< type,  1,  1 >;  /**< MDPC Present                     */
    using MODE   = regbits< type,  2,  2 >;  /**< Operating Mode                   */
    using NCTX   = regbits< type,  4,  4 >;  /**< Number of Contexts               */
    using HRL    = regbits< type, 24,  4 >;  /**< Hardware Revision Level          */
    using RRAM   = regbits< type, 28,  1 >;  /**< Restricted Register Access Mode  */
    using GEM    = regbits< type, 29,  1 >;  /**< Global Enable Mode               */
  };

  /**
   * Cyclic Redundancy Check Register
   */
  struct CRC
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using CRCD  = regbits< type,  0, 32 >;  /**< CRC Data.  */
  };

  /**
   * AES Key Word0
   */
  struct CTX%s_KEY_W0
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using W0KEY  = regbits< type,  0, 32 >;  /**< AES Key  */
  };

  /**
   * AES Key Word1
   */
  struct CTX%s_KEY_W1
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using W1KEY  = regbits< type,  0, 32 >;  /**< AES Key  */
  };

  /**
   * AES Key Word2
   */
  struct CTX%s_KEY_W2
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using W2KEY  = regbits< type,  0, 32 >;  /**< AES Key  */
  };

  /**
   * AES Key Word3
   */
  struct CTX%s_KEY_W3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using W3KEY  = regbits< type,  0, 32 >;  /**< AES Key  */
  };

  /**
   * AES Counter Word0
   */
  struct CTX%s_CTR_W0
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using W0CTR  = regbits< type,  0, 32 >;  /**< AES Counter  */
  };

  /**
   * AES Counter Word1
   */
  struct CTX%s_CTR_W1
  : public reg< uint32_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0 >;

    using W1CTR  = regbits< type,  0, 32 >;  /**< AES Counter  */
  };

  /**
   * AES Region Descriptor Word0
   */
  struct CTX%s_RGD_W0
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using SRTADDR  = regbits< type, 10, 22 >;  /**< Start Address  */
  };

  /**
   * AES Region Descriptor Word1
   */
  struct CTX%s_RGD_W1
  : public reg< uint32_t, base_addr + 0x11c, rw, 0x3F8 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0x3F8 >;

    using VLD      = regbits< type,  0,  1 >;  /**< Valid                   */
    using ADE      = regbits< type,  1,  1 >;  /**< Aes Decryption Enable.  */
    using RO       = regbits< type,  2,  1 >;  /**< Read-Only               */
    using ENDADDR  = regbits< type, 10, 22 >;  /**< End Address             */
  };
};
} // namespace mptl

#endif // ARCH_REG_OTFAD_HPP_INCLUDED
