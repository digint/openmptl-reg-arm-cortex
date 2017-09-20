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
//  Import from CMSIS-SVD: "Freescale/MKM34ZA5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKM34ZA5
//  series: Kinetis_M
//  version: 1.6
//  description: MKM34ZA5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AFE_HPP_INCLUDED
#define ARCH_REG_AFE_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog Front End
 */
struct AFE
{
  static constexpr reg_addr_t base_addr = 0x40030000;

  /**
   * Channel0 Configuration Register
   */
  struct CH0_CFR
  : public reg< uint32_t, base_addr + 0, rw, 0x80000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x80000 >;

    using HW_TRG            = regbits< type,  9,  1 >;  /**< Hardware Trigger Select                              */
    using DEC_CLK_INP_SEL   = regbits< type, 10,  1 >;  /**< Decimator Clock Input Select                         */
    using DEC_CLK_EDGE_SEL  = regbits< type, 11,  1 >;  /**< Decimator Clock Edge Select                          */
    using CC                = regbits< type, 12,  1 >;  /**< Continuous Conversion/Single Conversion Mode Select  */
    using DEC_EN            = regbits< type, 13,  1 >;  /**< Decimation Filter enable                             */
    using SD_MOD_EN         = regbits< type, 14,  1 >;  /**< Sigma Delta Modulator enable                         */
    using BYP_MODE          = regbits< type, 17,  1 >;  /**< AFE Channel bypass mode                              */
    using PGA_GAIN_SEL      = regbits< type, 19,  3 >;  /**< PGA Gain Select                                      */
    using PGA_EN            = regbits< type, 24,  1 >;  /**< PGA enable                                           */
    using DEC_OSR           = regbits< type, 29,  3 >;  /**< Decimator OverSampling Ratio select                  */
  };

  /**
   * Channel1 Configuration Register
   */
  struct CH1_CFR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x80000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x80000 >;

    using HW_TRG            = regbits< type,  9,  1 >;  /**< Hardware Trigger Select                              */
    using DEC_CLK_INP_SEL   = regbits< type, 10,  1 >;  /**< Decimator Clock Input Select                         */
    using DEC_CLK_EDGE_SEL  = regbits< type, 11,  1 >;  /**< Decimator Clock Edge Select                          */
    using CC                = regbits< type, 12,  1 >;  /**< Continuous Conversion/Single Conversion Mode Select  */
    using DEC_EN            = regbits< type, 13,  1 >;  /**< Decimation Filter enable                             */
    using SD_MOD_EN         = regbits< type, 14,  1 >;  /**< Sigma Delta Modulator enable                         */
    using BYP_MODE          = regbits< type, 17,  1 >;  /**< AFE Channel bypass mode                              */
    using PGA_GAIN_SEL      = regbits< type, 19,  3 >;  /**< PGA Gain Select                                      */
    using PGA_EN            = regbits< type, 24,  1 >;  /**< PGA enable                                           */
    using DEC_OSR           = regbits< type, 29,  3 >;  /**< Decimator OverSampling Ratio select                  */
  };

  /**
   * Channel2 Configuration Register
   */
  struct CH2_CFR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using HW_TRG            = regbits< type,  9,  1 >;  /**< Hardware Trigger Select                              */
    using DEC_CLK_INP_SEL   = regbits< type, 10,  1 >;  /**< Decimator Clock Input Select                         */
    using DEC_CLK_EDGE_SEL  = regbits< type, 11,  1 >;  /**< Decimator Clock Edge Select                          */
    using CC                = regbits< type, 12,  1 >;  /**< Continuous Conversion/Single Conversion Mode Select  */
    using DEC_EN            = regbits< type, 13,  1 >;  /**< Decimation Filter enable                             */
    using SD_MOD_EN         = regbits< type, 14,  1 >;  /**< Sigma Delta Modulator enable                         */
    using BYP_MODE          = regbits< type, 17,  1 >;  /**< AFE Channel bypass mode                              */
    using DEC_OSR           = regbits< type, 29,  3 >;  /**< Decimator OverSampling Ratio select                  */
  };

  /**
   * Channel3 Configuration Register
   */
  struct CH3_CFR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using HW_TRG            = regbits< type,  9,  1 >;  /**< Hardware Trigger Select                              */
    using DEC_CLK_INP_SEL   = regbits< type, 10,  1 >;  /**< Decimator Clock Input Select                         */
    using DEC_CLK_EDGE_SEL  = regbits< type, 11,  1 >;  /**< Decimator Clock Edge Select                          */
    using CC                = regbits< type, 12,  1 >;  /**< Continuous Conversion/Single Conversion Mode Select  */
    using DEC_EN            = regbits< type, 13,  1 >;  /**< Decimation Filter enable                             */
    using SD_MOD_EN         = regbits< type, 14,  1 >;  /**< Sigma Delta Modulator enable                         */
    using BYP_MODE          = regbits< type, 17,  1 >;  /**< AFE Channel bypass mode                              */
    using DEC_OSR           = regbits< type, 29,  3 >;  /**< Decimator OverSampling Ratio select                  */
  };

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x40FA00 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x40FA00 >;

    using STRTUP_CNT     = regbits< type,  9,  7 >;  /**< Start up count         */
    using RESULT_FORMAT  = regbits< type, 18,  1 >;  /**< Result Format          */
    using DLY_OK         = regbits< type, 21,  1 >;  /**< Delay OK               */
    using RST_B          = regbits< type, 22,  1 >;  /**< Software Reset         */
    using LPM_EN         = regbits< type, 25,  1 >;  /**< Low power Mode enable  */
    using SOFT_TRG3      = regbits< type, 27,  1 >;  /**< Software Trigger3      */
    using SOFT_TRG2      = regbits< type, 28,  1 >;  /**< Software Trigger2      */
    using SOFT_TRG1      = regbits< type, 29,  1 >;  /**< Software Trigger1      */
    using SOFT_TRG0      = regbits< type, 30,  1 >;  /**< Software Trigger0      */
    using MSTR_EN        = regbits< type, 31,  1 >;  /**< AFE Master Enable      */
  };

  /**
   * Clock Configuration Register
   */
  struct CKR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x10000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x10000000 >;

    using CLS  = regbits< type, 21,  2 >;  /**< Clock Source Select   */
    using DIV  = regbits< type, 28,  4 >;  /**< Clock Divider Select  */
  };

  /**
   * DMA and Interrupt Register
   */
  struct DI
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using INTEN3  = regbits< type, 23,  1 >;  /**< Interrupt Enable 3  */
    using INTEN2  = regbits< type, 24,  1 >;  /**< Interrupt Enable 2  */
    using INTEN1  = regbits< type, 25,  1 >;  /**< Interrupt Enable 1  */
    using INTEN0  = regbits< type, 26,  1 >;  /**< Interrupt Enable 0  */
    using DMAEN3  = regbits< type, 28,  1 >;  /**< DMA Enable3         */
    using DMAEN2  = regbits< type, 29,  1 >;  /**< DMA Enable2         */
    using DMAEN1  = regbits< type, 30,  1 >;  /**< DMA Enable1         */
    using DMAEN0  = regbits< type, 31,  1 >;  /**< DMA Enable0         */
  };

  /**
   * Channel0 Delay Register
   */
  struct CH0_DR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using DLY  = regbits< type,  0, 11 >;  /**< Delay  */
  };

  /**
   * Channel1 Delay Register
   */
  struct CH1_DR
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using DLY  = regbits< type,  0, 11 >;  /**< Delay  */
  };

  /**
   * Channel2 Delay Register
   */
  struct CH2_DR
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using DLY  = regbits< type,  0, 11 >;  /**< Delay  */
  };

  /**
   * Channel3 Delay Register
   */
  struct CH3_DR
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using DLY  = regbits< type,  0, 11 >;  /**< Delay  */
  };

  /**
   * Channel0 Result Register
   */
  struct CH0_RR
  : public reg< uint32_t, base_addr + 0x44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0 >;

    using SDR        = regbits< type,  0, 23 >;  /**< Sample Data Result  */
    using SIGN_BITS  = regbits< type, 23,  9 >;  /**< Sign Bits           */
  };

  /**
   * Channel1 Result Register
   */
  struct CH1_RR
  : public reg< uint32_t, base_addr + 0x48, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0 >;

    using SDR        = regbits< type,  0, 23 >;  /**< Sample Data Result  */
    using SIGN_BITS  = regbits< type, 23,  9 >;  /**< Sign Bits           */
  };

  /**
   * Channel2 Result Register
   */
  struct CH2_RR
  : public reg< uint32_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0 >;

    using SDR        = regbits< type,  0, 23 >;  /**< Sample Data Result  */
    using SIGN_BITS  = regbits< type, 23,  9 >;  /**< Sign Bits           */
  };

  /**
   * Channel3 Result Register
   */
  struct CH3_RR
  : public reg< uint32_t, base_addr + 0x50, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0 >;

    using SDR        = regbits< type,  0, 23 >;  /**< Sample Data Result  */
    using SIGN_BITS  = regbits< type, 23,  9 >;  /**< Sign Bits           */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0 >;

    using RDY3  = regbits< type, 16,  1 >;  /**< AFE Ready4           */
    using RDY2  = regbits< type, 17,  1 >;  /**< AFE Ready3           */
    using RDY1  = regbits< type, 18,  1 >;  /**< AFE Ready2           */
    using RDY0  = regbits< type, 19,  1 >;  /**< AFE Ready1           */
    using OVR3  = regbits< type, 21,  1 >;  /**< Overflow Flag        */
    using OVR2  = regbits< type, 22,  1 >;  /**< Overflow Flag        */
    using OVR1  = regbits< type, 23,  1 >;  /**< Overflow Flag        */
    using OVR0  = regbits< type, 24,  1 >;  /**< Overflow Flag        */
    using COC3  = regbits< type, 28,  1 >;  /**< Conversion Complete  */
    using COC2  = regbits< type, 29,  1 >;  /**< Conversion Complete  */
    using COC1  = regbits< type, 30,  1 >;  /**< Conversion Complete  */
    using COC0  = regbits< type, 31,  1 >;  /**< Conversion Complete  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AFE_HPP_INCLUDED
