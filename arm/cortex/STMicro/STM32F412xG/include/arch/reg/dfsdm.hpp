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
//  Import from CMSIS-SVD: "STMicro/STM32F412xG.svd"
//
//  name: STM32F412xG
//  version: 1.0
//  description: STM32F412xG
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DFSDM_HPP_INCLUDED
#define ARCH_REG_DFSDM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Digital filter for sigma delta modulators
 */
struct DFSDM
{
  static constexpr reg_addr_t base_addr = 0x40016000;

  /**
   * channel configuration y register
   */
  struct CHCFG0R1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using DFSDMEN   = regbits< type, 31,  1 >;  /**< DFSDMEN   */
    using CKOUTSRC  = regbits< type, 30,  1 >;  /**< CKOUTSRC  */
    using CKOUTDIV  = regbits< type, 16,  8 >;  /**< CKOUTDIV  */
    using DATPACK   = regbits< type, 14,  2 >;  /**< DATPACK   */
    using DATMPX    = regbits< type, 12,  2 >;  /**< DATMPX    */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< CHINSEL   */
    using CHEN      = regbits< type,  7,  1 >;  /**< CHEN      */
    using CKABEN    = regbits< type,  6,  1 >;  /**< CKABEN    */
    using SCDEN     = regbits< type,  5,  1 >;  /**< SCDEN     */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPICKSEL  */
    using SITP      = regbits< type,  0,  2 >;  /**< SITP      */
  };

  /**
   * channel configuration y register
   */
  struct CHCFG0R2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using OFFSET  = regbits< type,  8, 24 >;  /**< OFFSET  */
    using DTRBS   = regbits< type,  3,  5 >;  /**< DTRBS   */
  };

  /**
   * analog watchdog and short-circuit detector register
   */
  struct AWSCD0R
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using AWFORD  = regbits< type, 22,  2 >;  /**< AWFORD  */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< AWFOSR  */
    using BKSCD   = regbits< type, 12,  4 >;  /**< BKSCD   */
    using SCDT    = regbits< type,  0,  8 >;  /**< SCDT    */
  };

  /**
   * channel watchdog filter data register
   */
  struct CHWDAT0R
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< WDATA  */
  };

  /**
   * channel data input register
   */
  struct CHDATIN0R
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using INDAT1  = regbits< type, 16, 16 >;  /**< INDAT1  */
    using INDAT0  = regbits< type,  0, 16 >;  /**< INDAT0  */
  };

  /**
   * CHCFG1R1
   */
  struct CHCFG1R1
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0 >;

    using DATPACK   = regbits< type, 14,  2 >;  /**< DATPACK   */
    using DATMPX    = regbits< type, 12,  2 >;  /**< DATMPX    */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< CHINSEL   */
    using CHEN      = regbits< type,  7,  1 >;  /**< CHEN      */
    using CKABEN    = regbits< type,  6,  1 >;  /**< CKABEN    */
    using SCDEN     = regbits< type,  5,  1 >;  /**< SCDEN     */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPICKSEL  */
    using SITP      = regbits< type,  0,  2 >;  /**< SITP      */
  };

  /**
   * CHCFG1R2
   */
  struct CHCFG1R2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x0 >;

    using OFFSET  = regbits< type,  8, 24 >;  /**< OFFSET  */
    using DTRBS   = regbits< type,  3,  5 >;  /**< DTRBS   */
  };

  /**
   * AWSCD1R
   */
  struct AWSCD1R
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0 >;

    using AWFORD  = regbits< type, 22,  2 >;  /**< AWFORD  */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< AWFOSR  */
    using BKSCD   = regbits< type, 12,  4 >;  /**< BKSCD   */
    using SCDT    = regbits< type,  0,  8 >;  /**< SCDT    */
  };

  /**
   * CHWDAT1R
   */
  struct CHWDAT1R
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x0 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< WDATA  */
  };

  /**
   * CHDATIN1R
   */
  struct CHDATIN1R
  : public reg< uint32_t, base_addr + 0x30, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x0 >;

    using INDAT1  = regbits< type, 16, 16 >;  /**< INDAT1  */
    using INDAT0  = regbits< type,  0, 16 >;  /**< INDAT0  */
  };

  /**
   * CHCFG2R1
   */
  struct CHCFG2R1
  : public reg< uint32_t, base_addr + 0x40, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x0 >;

    using DATPACK   = regbits< type, 14,  2 >;  /**< DATPACK   */
    using DATMPX    = regbits< type, 12,  2 >;  /**< DATMPX    */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< CHINSEL   */
    using CHEN      = regbits< type,  7,  1 >;  /**< CHEN      */
    using CKABEN    = regbits< type,  6,  1 >;  /**< CKABEN    */
    using SCDEN     = regbits< type,  5,  1 >;  /**< SCDEN     */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPICKSEL  */
    using SITP      = regbits< type,  0,  2 >;  /**< SITP      */
  };

  /**
   * CHCFG2R2
   */
  struct CHCFG2R2
  : public reg< uint32_t, base_addr + 0x44, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x0 >;

    using OFFSET  = regbits< type,  8, 24 >;  /**< OFFSET  */
    using DTRBS   = regbits< type,  3,  5 >;  /**< DTRBS   */
  };

  /**
   * AWSCD2R
   */
  struct AWSCD2R
  : public reg< uint32_t, base_addr + 0x48, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x0 >;

    using AWFORD  = regbits< type, 22,  2 >;  /**< AWFORD  */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< AWFOSR  */
    using BKSCD   = regbits< type, 12,  4 >;  /**< BKSCD   */
    using SCDT    = regbits< type,  0,  8 >;  /**< SCDT    */
  };

  /**
   * CHWDAT2R
   */
  struct CHWDAT2R
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x0 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< WDATA  */
  };

  /**
   * CHDATIN2R
   */
  struct CHDATIN2R
  : public reg< uint32_t, base_addr + 0x50, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x0 >;

    using INDAT1  = regbits< type, 16, 16 >;  /**< INDAT1  */
    using INDAT0  = regbits< type,  0, 16 >;  /**< INDAT0  */
  };

  /**
   * CHCFG3R1
   */
  struct CHCFG3R1
  : public reg< uint32_t, base_addr + 0x60, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x0 >;

    using DATPACK   = regbits< type, 14,  2 >;  /**< DATPACK   */
    using DATMPX    = regbits< type, 12,  2 >;  /**< DATMPX    */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< CHINSEL   */
    using CHEN      = regbits< type,  7,  1 >;  /**< CHEN      */
    using CKABEN    = regbits< type,  6,  1 >;  /**< CKABEN    */
    using SCDEN     = regbits< type,  5,  1 >;  /**< SCDEN     */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPICKSEL  */
    using SITP      = regbits< type,  0,  2 >;  /**< SITP      */
  };

  /**
   * CHCFG3R2
   */
  struct CHCFG3R2
  : public reg< uint32_t, base_addr + 0x64, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x0 >;

    using OFFSET  = regbits< type,  8, 24 >;  /**< OFFSET  */
    using DTRBS   = regbits< type,  3,  5 >;  /**< DTRBS   */
  };

  /**
   * AWSCD3R
   */
  struct AWSCD3R
  : public reg< uint32_t, base_addr + 0x68, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x0 >;

    using AWFORD  = regbits< type, 22,  2 >;  /**< AWFORD  */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< AWFOSR  */
    using BKSCD   = regbits< type, 12,  4 >;  /**< BKSCD   */
    using SCDT    = regbits< type,  0,  8 >;  /**< SCDT    */
  };

  /**
   * CHWDAT3R
   */
  struct CHWDAT3R
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x0 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< WDATA  */
  };

  /**
   * CHDATIN3R
   */
  struct CHDATIN3R
  : public reg< uint32_t, base_addr + 0x70, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x0 >;

    using INDAT1  = regbits< type, 16, 16 >;  /**< INDAT1  */
    using INDAT0  = regbits< type,  0, 16 >;  /**< INDAT0  */
  };

  /**
   * CHCFG4R1
   */
  struct CHCFG4R1
  : public reg< uint32_t, base_addr + 0x80, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x0 >;

    using DATPACK   = regbits< type, 14,  2 >;  /**< DATPACK   */
    using DATMPX    = regbits< type, 12,  2 >;  /**< DATMPX    */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< CHINSEL   */
    using CHEN      = regbits< type,  7,  1 >;  /**< CHEN      */
    using CKABEN    = regbits< type,  6,  1 >;  /**< CKABEN    */
    using SCDEN     = regbits< type,  5,  1 >;  /**< SCDEN     */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPICKSEL  */
    using SITP      = regbits< type,  0,  2 >;  /**< SITP      */
  };

  /**
   * CHCFG4R2
   */
  struct CHCFG4R2
  : public reg< uint32_t, base_addr + 0x84, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x0 >;

    using OFFSET  = regbits< type,  8, 24 >;  /**< OFFSET  */
    using DTRBS   = regbits< type,  3,  5 >;  /**< DTRBS   */
  };

  /**
   * AWSCD4R
   */
  struct AWSCD4R
  : public reg< uint32_t, base_addr + 0x88, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x0 >;

    using AWFORD  = regbits< type, 22,  2 >;  /**< AWFORD  */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< AWFOSR  */
    using BKSCD   = regbits< type, 12,  4 >;  /**< BKSCD   */
    using SCDT    = regbits< type,  0,  8 >;  /**< SCDT    */
  };

  /**
   * CHWDAT4R
   */
  struct CHWDAT4R
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x0 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< WDATA  */
  };

  /**
   * CHDATIN4R
   */
  struct CHDATIN4R
  : public reg< uint32_t, base_addr + 0x90, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x0 >;

    using INDAT1  = regbits< type, 16, 16 >;  /**< INDAT1  */
    using INDAT0  = regbits< type,  0, 16 >;  /**< INDAT0  */
  };

  /**
   * CHCFG5R1
   */
  struct CHCFG5R1
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x0 >;

    using DATPACK   = regbits< type, 14,  2 >;  /**< DATPACK   */
    using DATMPX    = regbits< type, 12,  2 >;  /**< DATMPX    */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< CHINSEL   */
    using CHEN      = regbits< type,  7,  1 >;  /**< CHEN      */
    using CKABEN    = regbits< type,  6,  1 >;  /**< CKABEN    */
    using SCDEN     = regbits< type,  5,  1 >;  /**< SCDEN     */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPICKSEL  */
    using SITP      = regbits< type,  0,  2 >;  /**< SITP      */
  };

  /**
   * CHCFG5R2
   */
  struct CHCFG5R2
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x0 >;

    using OFFSET  = regbits< type,  8, 24 >;  /**< OFFSET  */
    using DTRBS   = regbits< type,  3,  5 >;  /**< DTRBS   */
  };

  /**
   * AWSCD5R
   */
  struct AWSCD5R
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x0 >;

    using AWFORD  = regbits< type, 22,  2 >;  /**< AWFORD  */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< AWFOSR  */
    using BKSCD   = regbits< type, 12,  4 >;  /**< BKSCD   */
    using SCDT    = regbits< type,  0,  8 >;  /**< SCDT    */
  };

  /**
   * CHWDAT5R
   */
  struct CHWDAT5R
  : public reg< uint32_t, base_addr + 0xac, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x0 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< WDATA  */
  };

  /**
   * CHDATIN5R
   */
  struct CHDATIN5R
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x0 >;

    using INDAT1  = regbits< type, 16, 16 >;  /**< INDAT1  */
    using INDAT0  = regbits< type,  0, 16 >;  /**< INDAT0  */
  };

  /**
   * CHCFG6R1
   */
  struct CHCFG6R1
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x0 >;

    using DATPACK   = regbits< type, 14,  2 >;  /**< DATPACK   */
    using DATMPX    = regbits< type, 12,  2 >;  /**< DATMPX    */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< CHINSEL   */
    using CHEN      = regbits< type,  7,  1 >;  /**< CHEN      */
    using CKABEN    = regbits< type,  6,  1 >;  /**< CKABEN    */
    using SCDEN     = regbits< type,  5,  1 >;  /**< SCDEN     */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPICKSEL  */
    using SITP      = regbits< type,  0,  2 >;  /**< SITP      */
  };

  /**
   * CHCFG6R2
   */
  struct CHCFG6R2
  : public reg< uint32_t, base_addr + 0xc4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0x0 >;

    using OFFSET  = regbits< type,  8, 24 >;  /**< OFFSET  */
    using DTRBS   = regbits< type,  3,  5 >;  /**< DTRBS   */
  };

  /**
   * AWSCD6R
   */
  struct AWSCD6R
  : public reg< uint32_t, base_addr + 0xc8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0x0 >;

    using AWFORD  = regbits< type, 22,  2 >;  /**< AWFORD  */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< AWFOSR  */
    using BKSCD   = regbits< type, 12,  4 >;  /**< BKSCD   */
    using SCDT    = regbits< type,  0,  8 >;  /**< SCDT    */
  };

  /**
   * CHWDAT6R
   */
  struct CHWDAT6R
  : public reg< uint32_t, base_addr + 0xcc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0x0 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< WDATA  */
  };

  /**
   * CHDATIN6R
   */
  struct CHDATIN6R
  : public reg< uint32_t, base_addr + 0xd0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0x0 >;

    using INDAT1  = regbits< type, 16, 16 >;  /**< INDAT1  */
    using INDAT0  = regbits< type,  0, 16 >;  /**< INDAT0  */
  };

  /**
   * CHCFG7R1
   */
  struct CHCFG7R1
  : public reg< uint32_t, base_addr + 0xe0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0x0 >;

    using DATPACK   = regbits< type, 14,  2 >;  /**< DATPACK   */
    using DATMPX    = regbits< type, 12,  2 >;  /**< DATMPX    */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< CHINSEL   */
    using CHEN      = regbits< type,  7,  1 >;  /**< CHEN      */
    using CKABEN    = regbits< type,  6,  1 >;  /**< CKABEN    */
    using SCDEN     = regbits< type,  5,  1 >;  /**< SCDEN     */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPICKSEL  */
    using SITP      = regbits< type,  0,  2 >;  /**< SITP      */
  };

  /**
   * CHCFG7R2
   */
  struct CHCFG7R2
  : public reg< uint32_t, base_addr + 0xe4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0x0 >;

    using OFFSET  = regbits< type,  8, 24 >;  /**< OFFSET  */
    using DTRBS   = regbits< type,  3,  5 >;  /**< DTRBS   */
  };

  /**
   * AWSCD7R
   */
  struct AWSCD7R
  : public reg< uint32_t, base_addr + 0xe8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, rw, 0x0 >;

    using AWFORD  = regbits< type, 22,  2 >;  /**< AWFORD  */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< AWFOSR  */
    using BKSCD   = regbits< type, 12,  4 >;  /**< BKSCD   */
    using SCDT    = regbits< type,  0,  8 >;  /**< SCDT    */
  };

  /**
   * CHWDAT7R
   */
  struct CHWDAT7R
  : public reg< uint32_t, base_addr + 0xec, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xec, rw, 0x0 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< WDATA  */
  };

  /**
   * CHDATIN7R
   */
  struct CHDATIN7R
  : public reg< uint32_t, base_addr + 0xf0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, rw, 0x0 >;

    using INDAT1  = regbits< type, 16, 16 >;  /**< INDAT1  */
    using INDAT0  = regbits< type,  0, 16 >;  /**< INDAT0  */
  };

  /**
   * control register 1
   */
  struct DFSDM0_CR1
  : public reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >;

    using AWFSEL    = regbits< type, 30,  1 >;  /**< Analog watchdog fast mode select                                              */
    using FAST      = regbits< type, 29,  1 >;  /**< Fast conversion mode selection for regular conversions                        */
    using RCH       = regbits< type, 24,  3 >;  /**< Regular channel selection                                                     */
    using RDMAEN    = regbits< type, 21,  1 >;  /**< DMA channel enabled to read data for the regular conversion                   */
    using RSYNC     = regbits< type, 19,  1 >;  /**< Launch regular conversion synchronously with DFSDM0                           */
    using RCONT     = regbits< type, 18,  1 >;  /**< Continuous mode selection for regular conversions                             */
    using RSWSTART  = regbits< type, 17,  1 >;  /**< Software start of a conversion on the regular channel                         */
    using JEXTEN    = regbits< type, 13,  2 >;  /**< Trigger enable and trigger edge selection for injected conversions            */
    using JEXTSEL   = regbits< type,  8,  3 >;  /**< Trigger signal selection for launching injected conversions                   */
    using JDMAEN    = regbits< type,  5,  1 >;  /**< DMA channel enabled to read data for the injected channel group               */
    using JSCAN     = regbits< type,  4,  1 >;  /**< Scanning conversion mode for injected conversions                             */
    using JSYNC     = regbits< type,  3,  1 >;  /**< Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger  */
    using JSWSTART  = regbits< type,  1,  1 >;  /**< Start a conversion of the injected group of channels                          */
    using DFEN      = regbits< type,  0,  1 >;  /**< DFSDM enable                                                                  */
  };

  /**
   * control register 2
   */
  struct DFSDM0_CR2
  : public reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >;

    using AWDCH   = regbits< type, 16,  8 >;  /**< Analog watchdog channel selection            */
    using EXCH    = regbits< type,  8,  8 >;  /**< Extremes detector channel selection          */
    using CKABIE  = regbits< type,  6,  1 >;  /**< Clock absence interrupt enable               */
    using SCDIE   = regbits< type,  5,  1 >;  /**< Short-circuit detector interrupt enable      */
    using AWDIE   = regbits< type,  4,  1 >;  /**< Analog watchdog interrupt enable             */
    using ROVRIE  = regbits< type,  3,  1 >;  /**< Regular data overrun interrupt enable        */
    using JOVRIE  = regbits< type,  2,  1 >;  /**< Injected data overrun interrupt enable       */
    using REOCIE  = regbits< type,  1,  1 >;  /**< Regular end of conversion interrupt enable   */
    using JEOCIE  = regbits< type,  0,  1 >;  /**< Injected end of conversion interrupt enable  */
  };

  /**
   * interrupt and status register
   */
  struct DFSDM0_ISR
  : public reg< uint32_t, base_addr + 0x108, ro, 0x00FF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x108, ro, 0x00FF0000 >;

    using SCDF   = regbits< type, 24,  8 >;  /**< short-circuit detector flag             */
    using CKABF  = regbits< type, 16,  8 >;  /**< Clock absence flag                      */
    using RCIP   = regbits< type, 14,  1 >;  /**< Regular conversion in progress status   */
    using JCIP   = regbits< type, 13,  1 >;  /**< Injected conversion in progress status  */
    using AWDF   = regbits< type,  4,  1 >;  /**< Analog watchdog                         */
    using ROVRF  = regbits< type,  3,  1 >;  /**< Regular conversion overrun flag         */
    using JOVRF  = regbits< type,  2,  1 >;  /**< Injected conversion overrun flag        */
    using REOCF  = regbits< type,  1,  1 >;  /**< End of regular conversion flag          */
    using JEOCF  = regbits< type,  0,  1 >;  /**< End of injected conversion flag         */
  };

  /**
   * interrupt flag clear register
   */
  struct DFSDM0_ICR
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >;

    using CLRSCDF   = regbits< type, 24,  8 >;  /**< Clear the short-circuit detector flag       */
    using CLRCKABF  = regbits< type, 16,  8 >;  /**< Clear the clock absence flag                */
    using CLRROVRF  = regbits< type,  3,  1 >;  /**< Clear the regular conversion overrun flag   */
    using CLRJOVRF  = regbits< type,  2,  1 >;  /**< Clear the injected conversion overrun flag  */
  };

  /**
   * injected channel group selection register
   */
  struct DFSDM0_JCHGR
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x00000001 >;

    using JCHG  = regbits< type,  0,  8 >;  /**< Injected channel group selection  */
  };

  /**
   * filter control register
   */
  struct DFSDM0_FCR
  : public reg< uint32_t, base_addr + 0x114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x00000000 >;

    using FORD  = regbits< type, 29,  3 >;  /**< Sinc filter order                                 */
    using FOSR  = regbits< type, 16, 10 >;  /**< Sinc filter oversampling ratio (decimation rate)  */
    using IOSR  = regbits< type,  0,  8 >;  /**< Integrator oversampling ratio (averaging length)  */
  };

  /**
   * data register for injected group
   */
  struct DFSDM0_JDATAR
  : public reg< uint32_t, base_addr + 0x118, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x118, ro, 0x00000000 >;

    using JDATA    = regbits< type,  8, 24 >;  /**< Injected group conversion data            */
    using JDATACH  = regbits< type,  0,  3 >;  /**< Injected channel most recently converted  */
  };

  /**
   * data register for the regular channel
   */
  struct DFSDM0_RDATAR
  : public reg< uint32_t, base_addr + 0x11c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, ro, 0x00000000 >;

    using RDATA    = regbits< type,  8, 24 >;  /**< Regular channel conversion data          */
    using RPEND    = regbits< type,  4,  1 >;  /**< Regular channel pending data             */
    using RDATACH  = regbits< type,  0,  3 >;  /**< Regular channel most recently converted  */
  };

  /**
   * analog watchdog high threshold register
   */
  struct DFSDM0_AWHTR
  : public reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >;

    using AWHT   = regbits< type,  8, 24 >;  /**< Analog watchdog high threshold                                   */
    using BKAWH  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog high threshold event  */
  };

  /**
   * analog watchdog low threshold register
   */
  struct DFSDM0_AWLTR
  : public reg< uint32_t, base_addr + 0x124, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x00000000 >;

    using AWLT   = regbits< type,  8, 24 >;  /**< Analog watchdog low threshold                                   */
    using BKAWL  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog low threshold event  */
  };

  /**
   * analog watchdog status register
   */
  struct DFSDM0_AWSR
  : public reg< uint32_t, base_addr + 0x128, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x128, ro, 0x00000000 >;

    using AWHTF  = regbits< type,  8,  8 >;  /**< Analog watchdog high threshold flag  */
    using AWLTF  = regbits< type,  0,  8 >;  /**< Analog watchdog low threshold flag   */
  };

  /**
   * analog watchdog clear flag register
   */
  struct DFSDM0_AWCFR
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >;

    using CLRAWHTF  = regbits< type,  8,  8 >;  /**< Clear the analog watchdog high threshold flag  */
    using CLRAWLTF  = regbits< type,  0,  8 >;  /**< Clear the analog watchdog low threshold flag   */
  };

  /**
   * Extremes detector maximum register
   */
  struct DFSDM0_EXMAX
  : public reg< uint32_t, base_addr + 0x130, ro, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x130, ro, 0x80000000 >;

    using EXMAX    = regbits< type,  8, 24 >;  /**< Extremes detector maximum value         */
    using EXMAXCH  = regbits< type,  0,  3 >;  /**< Extremes detector maximum data channel  */
  };

  /**
   * Extremes detector minimum register
   */
  struct DFSDM0_EXMIN
  : public reg< uint32_t, base_addr + 0x134, ro, 0x7FFFFF00 >
  {
    using type = reg< uint32_t, base_addr + 0x134, ro, 0x7FFFFF00 >;

    using EXMIN    = regbits< type,  8, 24 >;  /**< EXMIN                                   */
    using EXMINCH  = regbits< type,  0,  3 >;  /**< Extremes detector minimum data channel  */
  };

  /**
   * conversion timer register
   */
  struct DFSDM0_CNVTIMR
  : public reg< uint32_t, base_addr + 0x138, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x138, ro, 0x00000000 >;

    using CNVCNT  = regbits< type,  4, 28 >;  /**< 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN  */
  };

  /**
   * control register 1
   */
  struct DFSDM1_CR1
  : public reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >;

    using AWFSEL    = regbits< type, 30,  1 >;  /**< Analog watchdog fast mode select                                              */
    using FAST      = regbits< type, 29,  1 >;  /**< Fast conversion mode selection for regular conversions                        */
    using RCH       = regbits< type, 24,  3 >;  /**< Regular channel selection                                                     */
    using RDMAEN    = regbits< type, 21,  1 >;  /**< DMA channel enabled to read data for the regular conversion                   */
    using RSYNC     = regbits< type, 19,  1 >;  /**< Launch regular conversion synchronously with DFSDM0                           */
    using RCONT     = regbits< type, 18,  1 >;  /**< Continuous mode selection for regular conversions                             */
    using RSWSTART  = regbits< type, 17,  1 >;  /**< Software start of a conversion on the regular channel                         */
    using JEXTEN    = regbits< type, 13,  2 >;  /**< Trigger enable and trigger edge selection for injected conversions            */
    using JEXTSEL   = regbits< type,  8,  3 >;  /**< Trigger signal selection for launching injected conversions                   */
    using JDMAEN    = regbits< type,  5,  1 >;  /**< DMA channel enabled to read data for the injected channel group               */
    using JSCAN     = regbits< type,  4,  1 >;  /**< Scanning conversion mode for injected conversions                             */
    using JSYNC     = regbits< type,  3,  1 >;  /**< Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger  */
    using JSWSTART  = regbits< type,  1,  1 >;  /**< Start a conversion of the injected group of channels                          */
    using DFEN      = regbits< type,  0,  1 >;  /**< DFSDM enable                                                                  */
  };

  /**
   * control register 2
   */
  struct DFSDM1_CR2
  : public reg< uint32_t, base_addr + 0x204, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0x00000000 >;

    using AWDCH   = regbits< type, 16,  8 >;  /**< Analog watchdog channel selection            */
    using EXCH    = regbits< type,  8,  8 >;  /**< Extremes detector channel selection          */
    using CKABIE  = regbits< type,  6,  1 >;  /**< Clock absence interrupt enable               */
    using SCDIE   = regbits< type,  5,  1 >;  /**< Short-circuit detector interrupt enable      */
    using AWDIE   = regbits< type,  4,  1 >;  /**< Analog watchdog interrupt enable             */
    using ROVRIE  = regbits< type,  3,  1 >;  /**< Regular data overrun interrupt enable        */
    using JOVRIE  = regbits< type,  2,  1 >;  /**< Injected data overrun interrupt enable       */
    using REOCIE  = regbits< type,  1,  1 >;  /**< Regular end of conversion interrupt enable   */
    using JEOCIE  = regbits< type,  0,  1 >;  /**< Injected end of conversion interrupt enable  */
  };

  /**
   * interrupt and status register
   */
  struct DFSDM1_ISR
  : public reg< uint32_t, base_addr + 0x208, ro, 0x00FF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x208, ro, 0x00FF0000 >;

    using SCDF   = regbits< type, 24,  8 >;  /**< short-circuit detector flag             */
    using CKABF  = regbits< type, 16,  8 >;  /**< Clock absence flag                      */
    using RCIP   = regbits< type, 14,  1 >;  /**< Regular conversion in progress status   */
    using JCIP   = regbits< type, 13,  1 >;  /**< Injected conversion in progress status  */
    using AWDF   = regbits< type,  4,  1 >;  /**< Analog watchdog                         */
    using ROVRF  = regbits< type,  3,  1 >;  /**< Regular conversion overrun flag         */
    using JOVRF  = regbits< type,  2,  1 >;  /**< Injected conversion overrun flag        */
    using REOCF  = regbits< type,  1,  1 >;  /**< End of regular conversion flag          */
    using JEOCF  = regbits< type,  0,  1 >;  /**< End of injected conversion flag         */
  };

  /**
   * interrupt flag clear register
   */
  struct DFSDM1_ICR
  : public reg< uint32_t, base_addr + 0x20c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0x00000000 >;

    using CLRSCDF   = regbits< type, 24,  8 >;  /**< Clear the short-circuit detector flag       */
    using CLRCKABF  = regbits< type, 16,  8 >;  /**< Clear the clock absence flag                */
    using CLRROVRF  = regbits< type,  3,  1 >;  /**< Clear the regular conversion overrun flag   */
    using CLRJOVRF  = regbits< type,  2,  1 >;  /**< Clear the injected conversion overrun flag  */
  };

  /**
   * injected channel group selection register
   */
  struct DFSDM1_JCHGR
  : public reg< uint32_t, base_addr + 0x210, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x210, rw, 0x00000001 >;

    using JCHG  = regbits< type,  0,  8 >;  /**< Injected channel group selection  */
  };

  /**
   * filter control register
   */
  struct DFSDM1_FCR
  : public reg< uint32_t, base_addr + 0x214, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x214, rw, 0x00000000 >;

    using FORD  = regbits< type, 29,  3 >;  /**< Sinc filter order                                 */
    using FOSR  = regbits< type, 16, 10 >;  /**< Sinc filter oversampling ratio (decimation rate)  */
    using IOSR  = regbits< type,  0,  8 >;  /**< Integrator oversampling ratio (averaging length)  */
  };

  /**
   * data register for injected group
   */
  struct DFSDM1_JDATAR
  : public reg< uint32_t, base_addr + 0x218, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x218, ro, 0x00000000 >;

    using JDATA    = regbits< type,  8, 24 >;  /**< Injected group conversion data            */
    using JDATACH  = regbits< type,  0,  3 >;  /**< Injected channel most recently converted  */
  };

  /**
   * data register for the regular channel
   */
  struct DFSDM1_RDATAR
  : public reg< uint32_t, base_addr + 0x21c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x21c, ro, 0x00000000 >;

    using RDATA    = regbits< type,  8, 24 >;  /**< Regular channel conversion data          */
    using RPEND    = regbits< type,  4,  1 >;  /**< Regular channel pending data             */
    using RDATACH  = regbits< type,  0,  3 >;  /**< Regular channel most recently converted  */
  };

  /**
   * analog watchdog high threshold register
   */
  struct DFSDM1_AWHTR
  : public reg< uint32_t, base_addr + 0x220, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x220, rw, 0x00000000 >;

    using AWHT   = regbits< type,  8, 24 >;  /**< Analog watchdog high threshold                                   */
    using BKAWH  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog high threshold event  */
  };

  /**
   * analog watchdog low threshold register
   */
  struct DFSDM1_AWLTR
  : public reg< uint32_t, base_addr + 0x224, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x224, rw, 0x00000000 >;

    using AWLT   = regbits< type,  8, 24 >;  /**< Analog watchdog low threshold                                   */
    using BKAWL  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog low threshold event  */
  };

  /**
   * analog watchdog status register
   */
  struct DFSDM1_AWSR
  : public reg< uint32_t, base_addr + 0x228, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x228, ro, 0x00000000 >;

    using AWHTF  = regbits< type,  8,  8 >;  /**< Analog watchdog high threshold flag  */
    using AWLTF  = regbits< type,  0,  8 >;  /**< Analog watchdog low threshold flag   */
  };

  /**
   * analog watchdog clear flag register
   */
  struct DFSDM1_AWCFR
  : public reg< uint32_t, base_addr + 0x22c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x22c, rw, 0x00000000 >;

    using CLRAWHTF  = regbits< type,  8,  8 >;  /**< Clear the analog watchdog high threshold flag  */
    using CLRAWLTF  = regbits< type,  0,  8 >;  /**< Clear the analog watchdog low threshold flag   */
  };

  /**
   * Extremes detector maximum register
   */
  struct DFSDM1_EXMAX
  : public reg< uint32_t, base_addr + 0x230, ro, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x230, ro, 0x80000000 >;

    using EXMAX    = regbits< type,  8, 24 >;  /**< Extremes detector maximum value         */
    using EXMAXCH  = regbits< type,  0,  3 >;  /**< Extremes detector maximum data channel  */
  };

  /**
   * Extremes detector minimum register
   */
  struct DFSDM1_EXMIN
  : public reg< uint32_t, base_addr + 0x234, ro, 0x7FFFFF00 >
  {
    using type = reg< uint32_t, base_addr + 0x234, ro, 0x7FFFFF00 >;

    using EXMIN    = regbits< type,  8, 24 >;  /**< EXMIN                                   */
    using EXMINCH  = regbits< type,  0,  3 >;  /**< Extremes detector minimum data channel  */
  };

  /**
   * conversion timer register
   */
  struct DFSDM1_CNVTIMR
  : public reg< uint32_t, base_addr + 0x238, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x238, ro, 0x00000000 >;

    using CNVCNT  = regbits< type,  4, 28 >;  /**< 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN  */
  };

  /**
   * control register 1
   */
  struct DFSDM2_CR1
  : public reg< uint32_t, base_addr + 0x300, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x00000000 >;

    using AWFSEL    = regbits< type, 30,  1 >;  /**< Analog watchdog fast mode select                                              */
    using FAST      = regbits< type, 29,  1 >;  /**< Fast conversion mode selection for regular conversions                        */
    using RCH       = regbits< type, 24,  3 >;  /**< Regular channel selection                                                     */
    using RDMAEN    = regbits< type, 21,  1 >;  /**< DMA channel enabled to read data for the regular conversion                   */
    using RSYNC     = regbits< type, 19,  1 >;  /**< Launch regular conversion synchronously with DFSDM0                           */
    using RCONT     = regbits< type, 18,  1 >;  /**< Continuous mode selection for regular conversions                             */
    using RSWSTART  = regbits< type, 17,  1 >;  /**< Software start of a conversion on the regular channel                         */
    using JEXTEN    = regbits< type, 13,  2 >;  /**< Trigger enable and trigger edge selection for injected conversions            */
    using JEXTSEL   = regbits< type,  8,  3 >;  /**< Trigger signal selection for launching injected conversions                   */
    using JDMAEN    = regbits< type,  5,  1 >;  /**< DMA channel enabled to read data for the injected channel group               */
    using JSCAN     = regbits< type,  4,  1 >;  /**< Scanning conversion mode for injected conversions                             */
    using JSYNC     = regbits< type,  3,  1 >;  /**< Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger  */
    using JSWSTART  = regbits< type,  1,  1 >;  /**< Start a conversion of the injected group of channels                          */
    using DFEN      = regbits< type,  0,  1 >;  /**< DFSDM enable                                                                  */
  };

  /**
   * control register 2
   */
  struct DFSDM2_CR2
  : public reg< uint32_t, base_addr + 0x304, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0x00000000 >;

    using AWDCH   = regbits< type, 16,  8 >;  /**< Analog watchdog channel selection            */
    using EXCH    = regbits< type,  8,  8 >;  /**< Extremes detector channel selection          */
    using CKABIE  = regbits< type,  6,  1 >;  /**< Clock absence interrupt enable               */
    using SCDIE   = regbits< type,  5,  1 >;  /**< Short-circuit detector interrupt enable      */
    using AWDIE   = regbits< type,  4,  1 >;  /**< Analog watchdog interrupt enable             */
    using ROVRIE  = regbits< type,  3,  1 >;  /**< Regular data overrun interrupt enable        */
    using JOVRIE  = regbits< type,  2,  1 >;  /**< Injected data overrun interrupt enable       */
    using REOCIE  = regbits< type,  1,  1 >;  /**< Regular end of conversion interrupt enable   */
    using JEOCIE  = regbits< type,  0,  1 >;  /**< Injected end of conversion interrupt enable  */
  };

  /**
   * interrupt and status register
   */
  struct DFSDM2_ISR
  : public reg< uint32_t, base_addr + 0x308, ro, 0x00FF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x308, ro, 0x00FF0000 >;

    using SCDF   = regbits< type, 24,  8 >;  /**< short-circuit detector flag             */
    using CKABF  = regbits< type, 16,  8 >;  /**< Clock absence flag                      */
    using RCIP   = regbits< type, 14,  1 >;  /**< Regular conversion in progress status   */
    using JCIP   = regbits< type, 13,  1 >;  /**< Injected conversion in progress status  */
    using AWDF   = regbits< type,  4,  1 >;  /**< Analog watchdog                         */
    using ROVRF  = regbits< type,  3,  1 >;  /**< Regular conversion overrun flag         */
    using JOVRF  = regbits< type,  2,  1 >;  /**< Injected conversion overrun flag        */
    using REOCF  = regbits< type,  1,  1 >;  /**< End of regular conversion flag          */
    using JEOCF  = regbits< type,  0,  1 >;  /**< End of injected conversion flag         */
  };

  /**
   * interrupt flag clear register
   */
  struct DFSDM2_ICR
  : public reg< uint32_t, base_addr + 0x30c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0x00000000 >;

    using CLRSCDF   = regbits< type, 24,  8 >;  /**< Clear the short-circuit detector flag       */
    using CLRCKABF  = regbits< type, 16,  8 >;  /**< Clear the clock absence flag                */
    using CLRROVRF  = regbits< type,  3,  1 >;  /**< Clear the regular conversion overrun flag   */
    using CLRJOVRF  = regbits< type,  2,  1 >;  /**< Clear the injected conversion overrun flag  */
  };

  /**
   * injected channel group selection register
   */
  struct DFSDM2_JCHGR
  : public reg< uint32_t, base_addr + 0x310, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0x00000001 >;

    using JCHG  = regbits< type,  0,  8 >;  /**< Injected channel group selection  */
  };

  /**
   * filter control register
   */
  struct DFSDM2_FCR
  : public reg< uint32_t, base_addr + 0x314, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0x00000000 >;

    using FORD  = regbits< type, 29,  3 >;  /**< Sinc filter order                                 */
    using FOSR  = regbits< type, 16, 10 >;  /**< Sinc filter oversampling ratio (decimation rate)  */
    using IOSR  = regbits< type,  0,  8 >;  /**< Integrator oversampling ratio (averaging length)  */
  };

  /**
   * data register for injected group
   */
  struct DFSDM2_JDATAR
  : public reg< uint32_t, base_addr + 0x318, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x318, ro, 0x00000000 >;

    using JDATA    = regbits< type,  8, 24 >;  /**< Injected group conversion data            */
    using JDATACH  = regbits< type,  0,  3 >;  /**< Injected channel most recently converted  */
  };

  /**
   * data register for the regular channel
   */
  struct DFSDM2_RDATAR
  : public reg< uint32_t, base_addr + 0x31c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, ro, 0x00000000 >;

    using RDATA    = regbits< type,  8, 24 >;  /**< Regular channel conversion data          */
    using RPEND    = regbits< type,  4,  1 >;  /**< Regular channel pending data             */
    using RDATACH  = regbits< type,  0,  3 >;  /**< Regular channel most recently converted  */
  };

  /**
   * analog watchdog high threshold register
   */
  struct DFSDM2_AWHTR
  : public reg< uint32_t, base_addr + 0x320, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x320, rw, 0x00000000 >;

    using AWHT   = regbits< type,  8, 24 >;  /**< Analog watchdog high threshold                                   */
    using BKAWH  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog high threshold event  */
  };

  /**
   * analog watchdog low threshold register
   */
  struct DFSDM2_AWLTR
  : public reg< uint32_t, base_addr + 0x324, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x324, rw, 0x00000000 >;

    using AWLT   = regbits< type,  8, 24 >;  /**< Analog watchdog low threshold                                   */
    using BKAWL  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog low threshold event  */
  };

  /**
   * analog watchdog status register
   */
  struct DFSDM2_AWSR
  : public reg< uint32_t, base_addr + 0x328, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x328, ro, 0x00000000 >;

    using AWHTF  = regbits< type,  8,  8 >;  /**< Analog watchdog high threshold flag  */
    using AWLTF  = regbits< type,  0,  8 >;  /**< Analog watchdog low threshold flag   */
  };

  /**
   * analog watchdog clear flag register
   */
  struct DFSDM2_AWCFR
  : public reg< uint32_t, base_addr + 0x32c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x32c, rw, 0x00000000 >;

    using CLRAWHTF  = regbits< type,  8,  8 >;  /**< Clear the analog watchdog high threshold flag  */
    using CLRAWLTF  = regbits< type,  0,  8 >;  /**< Clear the analog watchdog low threshold flag   */
  };

  /**
   * Extremes detector maximum register
   */
  struct DFSDM2_EXMAX
  : public reg< uint32_t, base_addr + 0x330, ro, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x330, ro, 0x80000000 >;

    using EXMAX    = regbits< type,  8, 24 >;  /**< Extremes detector maximum value         */
    using EXMAXCH  = regbits< type,  0,  3 >;  /**< Extremes detector maximum data channel  */
  };

  /**
   * Extremes detector minimum register
   */
  struct DFSDM2_EXMIN
  : public reg< uint32_t, base_addr + 0x334, ro, 0x7FFFFF00 >
  {
    using type = reg< uint32_t, base_addr + 0x334, ro, 0x7FFFFF00 >;

    using EXMIN    = regbits< type,  8, 24 >;  /**< EXMIN                                   */
    using EXMINCH  = regbits< type,  0,  3 >;  /**< Extremes detector minimum data channel  */
  };

  /**
   * conversion timer register
   */
  struct DFSDM2_CNVTIMR
  : public reg< uint32_t, base_addr + 0x338, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x338, ro, 0x00000000 >;

    using CNVCNT  = regbits< type,  4, 28 >;  /**< 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN  */
  };

  /**
   * control register 1
   */
  struct DFSDM3_CR1
  : public reg< uint32_t, base_addr + 0x400, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0x00000000 >;

    using AWFSEL    = regbits< type, 30,  1 >;  /**< Analog watchdog fast mode select                                              */
    using FAST      = regbits< type, 29,  1 >;  /**< Fast conversion mode selection for regular conversions                        */
    using RCH       = regbits< type, 24,  3 >;  /**< Regular channel selection                                                     */
    using RDMAEN    = regbits< type, 21,  1 >;  /**< DMA channel enabled to read data for the regular conversion                   */
    using RSYNC     = regbits< type, 19,  1 >;  /**< Launch regular conversion synchronously with DFSDM0                           */
    using RCONT     = regbits< type, 18,  1 >;  /**< Continuous mode selection for regular conversions                             */
    using RSWSTART  = regbits< type, 17,  1 >;  /**< Software start of a conversion on the regular channel                         */
    using JEXTEN    = regbits< type, 13,  2 >;  /**< Trigger enable and trigger edge selection for injected conversions            */
    using JEXTSEL   = regbits< type,  8,  3 >;  /**< Trigger signal selection for launching injected conversions                   */
    using JDMAEN    = regbits< type,  5,  1 >;  /**< DMA channel enabled to read data for the injected channel group               */
    using JSCAN     = regbits< type,  4,  1 >;  /**< Scanning conversion mode for injected conversions                             */
    using JSYNC     = regbits< type,  3,  1 >;  /**< Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger  */
    using JSWSTART  = regbits< type,  1,  1 >;  /**< Start a conversion of the injected group of channels                          */
    using DFEN      = regbits< type,  0,  1 >;  /**< DFSDM enable                                                                  */
  };

  /**
   * control register 2
   */
  struct DFSDM3_CR2
  : public reg< uint32_t, base_addr + 0x404, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0x00000000 >;

    using AWDCH   = regbits< type, 16,  8 >;  /**< Analog watchdog channel selection            */
    using EXCH    = regbits< type,  8,  8 >;  /**< Extremes detector channel selection          */
    using CKABIE  = regbits< type,  6,  1 >;  /**< Clock absence interrupt enable               */
    using SCDIE   = regbits< type,  5,  1 >;  /**< Short-circuit detector interrupt enable      */
    using AWDIE   = regbits< type,  4,  1 >;  /**< Analog watchdog interrupt enable             */
    using ROVRIE  = regbits< type,  3,  1 >;  /**< Regular data overrun interrupt enable        */
    using JOVRIE  = regbits< type,  2,  1 >;  /**< Injected data overrun interrupt enable       */
    using REOCIE  = regbits< type,  1,  1 >;  /**< Regular end of conversion interrupt enable   */
    using JEOCIE  = regbits< type,  0,  1 >;  /**< Injected end of conversion interrupt enable  */
  };

  /**
   * interrupt and status register
   */
  struct DFSDM3_ISR
  : public reg< uint32_t, base_addr + 0x408, ro, 0x00FF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x408, ro, 0x00FF0000 >;

    using SCDF   = regbits< type, 24,  8 >;  /**< short-circuit detector flag             */
    using CKABF  = regbits< type, 16,  8 >;  /**< Clock absence flag                      */
    using RCIP   = regbits< type, 14,  1 >;  /**< Regular conversion in progress status   */
    using JCIP   = regbits< type, 13,  1 >;  /**< Injected conversion in progress status  */
    using AWDF   = regbits< type,  4,  1 >;  /**< Analog watchdog                         */
    using ROVRF  = regbits< type,  3,  1 >;  /**< Regular conversion overrun flag         */
    using JOVRF  = regbits< type,  2,  1 >;  /**< Injected conversion overrun flag        */
    using REOCF  = regbits< type,  1,  1 >;  /**< End of regular conversion flag          */
    using JEOCF  = regbits< type,  0,  1 >;  /**< End of injected conversion flag         */
  };

  /**
   * interrupt flag clear register
   */
  struct DFSDM3_ICR
  : public reg< uint32_t, base_addr + 0x40c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, rw, 0x00000000 >;

    using CLRSCDF   = regbits< type, 24,  8 >;  /**< Clear the short-circuit detector flag       */
    using CLRCKABF  = regbits< type, 16,  8 >;  /**< Clear the clock absence flag                */
    using CLRROVRF  = regbits< type,  3,  1 >;  /**< Clear the regular conversion overrun flag   */
    using CLRJOVRF  = regbits< type,  2,  1 >;  /**< Clear the injected conversion overrun flag  */
  };

  /**
   * injected channel group selection register
   */
  struct DFSDM3_JCHGR
  : public reg< uint32_t, base_addr + 0x410, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x410, rw, 0x00000001 >;

    using JCHG  = regbits< type,  0,  8 >;  /**< Injected channel group selection  */
  };

  /**
   * filter control register
   */
  struct DFSDM3_FCR
  : public reg< uint32_t, base_addr + 0x414, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x414, rw, 0x00000000 >;

    using FORD  = regbits< type, 29,  3 >;  /**< Sinc filter order                                 */
    using FOSR  = regbits< type, 16, 10 >;  /**< Sinc filter oversampling ratio (decimation rate)  */
    using IOSR  = regbits< type,  0,  8 >;  /**< Integrator oversampling ratio (averaging length)  */
  };

  /**
   * data register for injected group
   */
  struct DFSDM3_JDATAR
  : public reg< uint32_t, base_addr + 0x418, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x418, ro, 0x00000000 >;

    using JDATA    = regbits< type,  8, 24 >;  /**< Injected group conversion data            */
    using JDATACH  = regbits< type,  0,  3 >;  /**< Injected channel most recently converted  */
  };

  /**
   * data register for the regular channel
   */
  struct DFSDM3_RDATAR
  : public reg< uint32_t, base_addr + 0x41c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x41c, ro, 0x00000000 >;

    using RDATA    = regbits< type,  8, 24 >;  /**< Regular channel conversion data          */
    using RPEND    = regbits< type,  4,  1 >;  /**< Regular channel pending data             */
    using RDATACH  = regbits< type,  0,  3 >;  /**< Regular channel most recently converted  */
  };

  /**
   * analog watchdog high threshold register
   */
  struct DFSDM3_AWHTR
  : public reg< uint32_t, base_addr + 0x420, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x420, rw, 0x00000000 >;

    using AWHT   = regbits< type,  8, 24 >;  /**< Analog watchdog high threshold                                   */
    using BKAWH  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog high threshold event  */
  };

  /**
   * analog watchdog low threshold register
   */
  struct DFSDM3_AWLTR
  : public reg< uint32_t, base_addr + 0x424, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x424, rw, 0x00000000 >;

    using AWLT   = regbits< type,  8, 24 >;  /**< Analog watchdog low threshold                                   */
    using BKAWL  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog low threshold event  */
  };

  /**
   * analog watchdog status register
   */
  struct DFSDM3_AWSR
  : public reg< uint32_t, base_addr + 0x428, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x428, ro, 0x00000000 >;

    using AWHTF  = regbits< type,  8,  8 >;  /**< Analog watchdog high threshold flag  */
    using AWLTF  = regbits< type,  0,  8 >;  /**< Analog watchdog low threshold flag   */
  };

  /**
   * analog watchdog clear flag register
   */
  struct DFSDM3_AWCFR
  : public reg< uint32_t, base_addr + 0x42c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x42c, rw, 0x00000000 >;

    using CLRAWHTF  = regbits< type,  8,  8 >;  /**< Clear the analog watchdog high threshold flag  */
    using CLRAWLTF  = regbits< type,  0,  8 >;  /**< Clear the analog watchdog low threshold flag   */
  };

  /**
   * Extremes detector maximum register
   */
  struct DFSDM3_EXMAX
  : public reg< uint32_t, base_addr + 0x430, ro, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x430, ro, 0x80000000 >;

    using EXMAX    = regbits< type,  8, 24 >;  /**< Extremes detector maximum value         */
    using EXMAXCH  = regbits< type,  0,  3 >;  /**< Extremes detector maximum data channel  */
  };

  /**
   * Extremes detector minimum register
   */
  struct DFSDM3_EXMIN
  : public reg< uint32_t, base_addr + 0x434, ro, 0x7FFFFF00 >
  {
    using type = reg< uint32_t, base_addr + 0x434, ro, 0x7FFFFF00 >;

    using EXMIN    = regbits< type,  8, 24 >;  /**< EXMIN                                   */
    using EXMINCH  = regbits< type,  0,  3 >;  /**< Extremes detector minimum data channel  */
  };

  /**
   * conversion timer register
   */
  struct DFSDM3_CNVTIMR
  : public reg< uint32_t, base_addr + 0x438, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x438, ro, 0x00000000 >;

    using CNVCNT  = regbits< type,  4, 28 >;  /**< 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DFSDM_HPP_INCLUDED
