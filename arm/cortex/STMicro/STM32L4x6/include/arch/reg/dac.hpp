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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DAC_HPP_INCLUDED
#define ARCH_REG_DAC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Digital-to-analog converter
 */
struct DAC
{
  static constexpr reg_addr_t base_addr = 0x40007400;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using EN1        = regbits< type,  0,  1 >;  /**< DAC channel1 enable                                 */
    using TEN1       = regbits< type,  2,  1 >;  /**< DAC channel1 trigger enable                         */
    using TSEL1      = regbits< type,  3,  3 >;  /**< DAC channel1 trigger selection                      */
    using WAVE1      = regbits< type,  6,  2 >;  /**< DAC channel1 noise/triangle wave generation enable  */
    using MAMP1      = regbits< type,  8,  4 >;  /**< DAC channel1 mask/amplitude selector                */
    using DMAEN1     = regbits< type, 12,  1 >;  /**< DAC channel1 DMA enable                             */
    using DMAUDRIE1  = regbits< type, 13,  1 >;  /**< DAC channel1 DMA Underrun Interrupt enable          */
    using CEN1       = regbits< type, 14,  1 >;  /**< DAC Channel 1 calibration enable                    */
    using EN2        = regbits< type, 16,  1 >;  /**< DAC channel2 enable                                 */
    using TEN2       = regbits< type, 18,  1 >;  /**< DAC channel2 trigger enable                         */
    using TSEL2      = regbits< type, 19,  3 >;  /**< DAC channel2 trigger selection                      */
    using WAVE2      = regbits< type, 22,  2 >;  /**< DAC channel2 noise/triangle wave generation enable  */
    using MAMP2      = regbits< type, 24,  4 >;  /**< DAC channel2 mask/amplitude selector                */
    using DMAEN2     = regbits< type, 28,  1 >;  /**< DAC channel2 DMA enable                             */
    using DMAUDRIE2  = regbits< type, 29,  1 >;  /**< DAC channel2 DMA underrun interrupt enable          */
    using CEN2       = regbits< type, 30,  1 >;  /**< DAC Channel 2 calibration enable                    */
  };

  /**
   * software trigger register
   */
  struct SWTRIGR
  : public reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >;

    using SWTRIG1  = regbits< type,  0,  1 >;  /**< DAC channel1 software trigger  */
    using SWTRIG2  = regbits< type,  1,  1 >;  /**< DAC channel2 software trigger  */
  };

  /**
   * channel1 12-bit right-aligned data holding register
   */
  struct DHR12R1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0, 12 >;  /**< DAC channel1 12-bit right-aligned data  */
  };

  /**
   * channel1 12-bit left-aligned data holding register
   */
  struct DHR12L1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  4, 12 >;  /**< DAC channel1 12-bit left-aligned data  */
  };

  /**
   * channel1 8-bit right-aligned data holding register
   */
  struct DHR8R1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0,  8 >;  /**< DAC channel1 8-bit right-aligned data  */
  };

  /**
   * channel2 12-bit right aligned data holding register
   */
  struct DHR12R2
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using DACC2DHR  = regbits< type,  0, 12 >;  /**< DAC channel2 12-bit right-aligned data  */
  };

  /**
   * channel2 12-bit left aligned data holding register
   */
  struct DHR12L2
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using DACC2DHR  = regbits< type,  4, 12 >;  /**< DAC channel2 12-bit left-aligned data  */
  };

  /**
   * channel2 8-bit right-aligned data holding register
   */
  struct DHR8R2
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using DACC2DHR  = regbits< type,  0,  8 >;  /**< DAC channel2 8-bit right-aligned data  */
  };

  /**
   * Dual DAC 12-bit right-aligned data holding register
   */
  struct DHR12RD
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0, 12 >;  /**< DAC channel1 12-bit right-aligned data  */
    using DACC2DHR  = regbits< type, 16, 12 >;  /**< DAC channel2 12-bit right-aligned data  */
  };

  /**
   * DUAL DAC 12-bit left aligned data holding register
   */
  struct DHR12LD
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  4, 12 >;  /**< DAC channel1 12-bit left-aligned data  */
    using DACC2DHR  = regbits< type, 20, 12 >;  /**< DAC channel2 12-bit left-aligned data  */
  };

  /**
   * DUAL DAC 8-bit right aligned data holding register
   */
  struct DHR8RD
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using DACC1DHR  = regbits< type,  0,  8 >;  /**< DAC channel1 8-bit right-aligned data  */
    using DACC2DHR  = regbits< type,  8,  8 >;  /**< DAC channel2 8-bit right-aligned data  */
  };

  /**
   * channel1 data output register
   */
  struct DOR1
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >;

    using DACC1DOR  = regbits< type,  0, 12 >;  /**< DAC channel1 data output  */
  };

  /**
   * channel2 data output register
   */
  struct DOR2
  : public reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >;

    using DACC2DOR  = regbits< type,  0, 12 >;  /**< DAC channel2 data output  */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using DMAUDR1    = regbits< type, 13,  1 >;  /**< DAC channel1 DMA underrun flag               */
    using CAL_FLAG1  = regbits< type, 14,  1 >;  /**< DAC Channel 1 calibration offset status      */
    using BWST1      = regbits< type, 15,  1 >;  /**< DAC Channel 1 busy writing sample time flag  */
    using DMAUDR2    = regbits< type, 29,  1 >;  /**< DAC channel2 DMA underrun flag               */
    using CAL_FLAG2  = regbits< type, 30,  1 >;  /**< DAC Channel 2 calibration offset status      */
    using BWST2      = regbits< type, 31,  1 >;  /**< DAC Channel 2 busy writing sample time flag  */
  };

  /**
   * calibration control register
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using OTRIM1  = regbits< type,  0,  5 >;  /**< DAC Channel 1 offset trimming value  */
    using OTRIM2  = regbits< type, 16,  5 >;  /**< DAC Channel 2 offset trimming value  */
  };

  /**
   * mode control register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using MODE1  = regbits< type,  0,  3 >;  /**< DAC Channel 1 mode  */
    using MODE2  = regbits< type, 16,  3 >;  /**< DAC Channel 2 mode  */
  };

  /**
   * Sample and Hold sample time register 1
   */
  struct SHSR1
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using TSAMPLE1  = regbits< type,  0, 10 >;  /**< DAC Channel 1 sample Time  */
  };

  /**
   * Sample and Hold sample time register 2
   */
  struct SHSR2
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using TSAMPLE2  = regbits< type,  0, 10 >;  /**< DAC Channel 2 sample Time  */
  };

  /**
   * Sample and Hold hold time register
   */
  struct SHHR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00010001 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00010001 >;

    using THOLD1  = regbits< type,  0, 10 >;  /**< DAC Channel 1 hold Time  */
    using THOLD2  = regbits< type, 16, 10 >;  /**< DAC Channel 2 hold time  */
  };

  /**
   * Sample and Hold refresh time register
   */
  struct SHRR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000001 >;

    using TREFRESH1  = regbits< type,  0,  8 >;  /**< DAC Channel 1 refresh Time  */
    using TREFRESH2  = regbits< type, 16,  8 >;  /**< DAC Channel 2 refresh Time  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC_HPP_INCLUDED
