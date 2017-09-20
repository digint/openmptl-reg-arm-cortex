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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C1233H6PZ.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C1233H6PZ
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HIB_HPP_INCLUDED
#define ARCH_REG_HIB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for HIB peripheral
 */
struct HIB
{
  static constexpr reg_addr_t base_addr = 0x400fc000;

  /**
   * Hibernation RTC Counter
   */
  struct RTCC
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_RTCC  = regbits< type,  0, 32 >;  /**< RTC Counter  */
  };

  /**
   * Hibernation RTC Match 0
   */
  struct RTCM0
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_RTCM0  = regbits< type,  0, 32 >;  /**< RTC Match 0  */
  };

  /**
   * Hibernation RTC Load
   */
  struct RTCLD
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_RTCLD  = regbits< type,  0, 32 >;  /**< RTC Load  */
  };

  /**
   * Hibernation Control
   */
  struct CTL
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_CTL_RTCEN    = regbits< type,  0,  1 >;  /**< RTC Timer Enable                   */
    using HIB_CTL_HIBREQ   = regbits< type,  1,  1 >;  /**< Hibernation Request                */
    using HIB_CTL_RTCWEN   = regbits< type,  3,  1 >;  /**< RTC Wake-up Enable                 */
    using HIB_CTL_PINWEN   = regbits< type,  4,  1 >;  /**< External WAKE Pin Enable           */
    using HIB_CTL_CLK32EN  = regbits< type,  6,  1 >;  /**< Clocking Enable                    */
    using HIB_CTL_VABORT   = regbits< type,  7,  1 >;  /**< Power Cut Abort Enable             */
    using HIB_CTL_VDD3ON   = regbits< type,  8,  1 >;  /**< VDD Powered                        */
    using HIB_CTL_BATWKEN  = regbits< type,  9,  1 >;  /**< Wake on Low Battery                */
    using HIB_CTL_BATCHK   = regbits< type, 10,  1 >;  /**< Check Battery Status               */
    using HIB_CTL_VBATSEL  = regbits< type, 13,  2 >;  /**< Select for Low-Battery Comparator  */
    using HIB_CTL_OSCBYP   = regbits< type, 16,  1 >;  /**< Oscillator Bypass                  */
    using HIB_CTL_OSCDRV   = regbits< type, 17,  1 >;  /**< Oscillator Drive Capability        */
    using HIB_CTL_WRC      = regbits< type, 31,  1 >;  /**< Write Complete/Capable             */
  };

  /**
   * Hibernation Interrupt Mask
   */
  struct IM
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_IM_RTCALT0  = regbits< type,  0,  1 >;  /**< RTC Alert 0 Interrupt Mask                      */
    using HIB_IM_LOWBAT   = regbits< type,  2,  1 >;  /**< Low Battery Voltage Interrupt Mask              */
    using HIB_IM_EXTW     = regbits< type,  3,  1 >;  /**< External Wake-Up Interrupt Mask                 */
    using HIB_IM_WC       = regbits< type,  4,  1 >;  /**< External Write Complete/Capable Interrupt Mask  */
  };

  /**
   * Hibernation Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_RIS_RTCALT0  = regbits< type,  0,  1 >;  /**< RTC Alert 0 Raw Interrupt Status             */
    using HIB_RIS_LOWBAT   = regbits< type,  2,  1 >;  /**< Low Battery Voltage Raw Interrupt Status     */
    using HIB_RIS_EXTW     = regbits< type,  3,  1 >;  /**< External Wake-Up Raw Interrupt Status        */
    using HIB_RIS_WC       = regbits< type,  4,  1 >;  /**< Write Complete/Capable Raw Interrupt Status  */
  };

  /**
   * Hibernation Masked Interrupt Status
   */
  struct MIS
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_MIS_RTCALT0  = regbits< type,  0,  1 >;  /**< RTC Alert 0 Masked Interrupt Status             */
    using HIB_MIS_LOWBAT   = regbits< type,  2,  1 >;  /**< Low Battery Voltage Masked Interrupt Status     */
    using HIB_MIS_EXTW     = regbits< type,  3,  1 >;  /**< External Wake-Up Masked Interrupt Status        */
    using HIB_MIS_WC       = regbits< type,  4,  1 >;  /**< Write Complete/Capable Masked Interrupt Status  */
  };

  /**
   * Hibernation Interrupt Clear
   */
  struct IC
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_IC_RTCALT0  = regbits< type,  0,  1 >;  /**< RTC Alert0 Masked Interrupt Clear              */
    using HIB_IC_LOWBAT   = regbits< type,  2,  1 >;  /**< Low Battery Voltage Masked Interrupt Clear     */
    using HIB_IC_EXTW     = regbits< type,  3,  1 >;  /**< External Wake-Up Masked Interrupt Clear        */
    using HIB_IC_WC       = regbits< type,  4,  1 >;  /**< Write Complete/Capable Masked Interrupt Clear  */
  };

  /**
   * Hibernation RTC Trim
   */
  struct RTCT
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_RTCT_TRIM  = regbits< type,  0, 16 >;  /**< RTC Trim Value  */
  };

  /**
   * Hibernation RTC Sub Seconds
   */
  struct RTCSS
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_RTCSS_RTCSSC  = regbits< type,  0, 15 >;  /**< RTC Sub Seconds Count  */
    using HIB_RTCSS_RTCSSM  = regbits< type, 16, 15 >;  /**< RTC Sub Seconds Match  */
  };

  /**
   * Hibernation Data
   */
  struct DATA
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HIB_DATA_RTD  = regbits< type,  0, 32 >;  /**< Hibernation Module NV Data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_HIB_HPP_INCLUDED
