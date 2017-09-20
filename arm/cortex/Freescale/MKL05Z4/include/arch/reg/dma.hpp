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
//  Import from CMSIS-SVD: "Freescale/MKL05Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL05Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL05Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DMA_HPP_INCLUDED
#define ARCH_REG_DMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * DMA Controller
 */
struct DMA
{
  static constexpr reg_addr_t base_addr = 0x40008000;

  /**
   * Source Address Register
   */
  struct SAR%s
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SAR  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * Destination Address Register
   */
  struct DAR%s
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using DAR  = regbits< type,  0, 32 >;  /**< no description available  */
  };

  /**
   * DMA Status Register / Byte Count Register
   */
  struct DSR_BCR%s
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using BCR   = regbits< type,  0, 24 >;  /**< no description available  */
    using DONE  = regbits< type, 24,  1 >;  /**< Transactions done         */
    using BSY   = regbits< type, 25,  1 >;  /**< Busy                      */
    using REQ   = regbits< type, 26,  1 >;  /**< Request                   */
    using BED   = regbits< type, 28,  1 >;  /**< Bus error on destination  */
    using BES   = regbits< type, 29,  1 >;  /**< Bus error on source       */
    using CE    = regbits< type, 30,  1 >;  /**< Configuration error       */
  };

  /**
   * DMA_DSR0 register.
   */
  struct DSR0
  : public reg< uint8_t, base_addr + 0x10b, rw, 0 >
  {
  };

  /**
   * DMA Control Register
   */
  struct DCR%s
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using LCH2    = regbits< type,  0,  2 >;  /**< Link channel 2                              */
    using LCH1    = regbits< type,  2,  2 >;  /**< Link channel 1                              */
    using LINKCC  = regbits< type,  4,  2 >;  /**< Link channel control                        */
    using D_REQ   = regbits< type,  7,  1 >;  /**< Disable request                             */
    using DMOD    = regbits< type,  8,  4 >;  /**< Destination address modulo                  */
    using SMOD    = regbits< type, 12,  4 >;  /**< Source address modulo                       */
    using START   = regbits< type, 16,  1 >;  /**< Start transfer                              */
    using DSIZE   = regbits< type, 17,  2 >;  /**< Destination size                            */
    using DINC    = regbits< type, 19,  1 >;  /**< Destination increment                       */
    using SSIZE   = regbits< type, 20,  2 >;  /**< Source size                                 */
    using SINC    = regbits< type, 22,  1 >;  /**< Source increment                            */
    using EADREQ  = regbits< type, 23,  1 >;  /**< Enable asynchronous DMA requests            */
    using AA      = regbits< type, 28,  1 >;  /**< Auto-align                                  */
    using CS      = regbits< type, 29,  1 >;  /**< Cycle steal                                 */
    using ERQ     = regbits< type, 30,  1 >;  /**< Enable peripheral request                   */
    using EINT    = regbits< type, 31,  1 >;  /**< Enable interrupt on completion of transfer  */
  };

  /**
   * DMA_DSR1 register.
   */
  struct DSR1
  : public reg< uint8_t, base_addr + 0x11b, rw, 0 >
  {
  };

  /**
   * DMA_DSR2 register.
   */
  struct DSR2
  : public reg< uint8_t, base_addr + 0x12b, rw, 0 >
  {
  };

  /**
   * DMA_DSR3 register.
   */
  struct DSR3
  : public reg< uint8_t, base_addr + 0x13b, rw, 0 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_DMA_HPP_INCLUDED
