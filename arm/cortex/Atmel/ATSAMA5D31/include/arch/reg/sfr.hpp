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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D31.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D31
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D31 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, LCD controller, 10/100 Ethernet, security (refer to http://www.atmel.com/devices/SAMA5D31.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SFR_HPP_INCLUDED
#define ARCH_REG_SFR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Special Function Registers
 */
struct SFR
{
  static constexpr reg_addr_t base_addr = 0xf0038000;

  /**
   * OHCI Interrupt Configuration Register
   */
  struct OHCIICR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using RES0      = regbits< type,  0,  1 >;  /**< USB PORTx RESET                            */
    using RES1      = regbits< type,  1,  1 >;  /**< USB PORTx RESET                            */
    using RES2      = regbits< type,  2,  1 >;  /**< USB PORTx RESET                            */
    using ARIE      = regbits< type,  4,  1 >;  /**< OHCI Asynchronous Resume Interrupt Enable  */
    using APPSTART  = regbits< type,  5,  1 >;  /**< Reserved                                   */
    using UDPPUDIS  = regbits< type, 23,  1 >;  /**< OHCI USB DEVICE PULL-UP DISABLE            */
  };

  /**
   * OHCI Interrupt Status Register
   */
  struct OHCIISR
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using RIS0  = regbits< type,  0,  1 >;  /**< OHCI Resume Interrupt Status Port 0  */
    using RIS1  = regbits< type,  1,  1 >;  /**< OHCI Resume Interrupt Status Port 1  */
    using RIS2  = regbits< type,  2,  1 >;  /**< OHCI Resume Interrupt Status Port 2  */
  };

  /**
   * AHB Configuration Register
   */
  struct AHB
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using PFETCH10  = regbits< type, 10,  1 >;  /**< AHB MASTERx 10 Converter Prefetch                          */
    using PFETCH11  = regbits< type, 11,  1 >;  /**< AHB MASTERx 11 Converter Prefetch                          */
    using PFETCH12  = regbits< type, 12,  1 >;  /**< AHB MASTERx 12 Converter Prefetch                          */
    using PFETCH13  = regbits< type, 13,  1 >;  /**< AHB MASTERx 13 Converter Prefetch                          */
    using PFETCH14  = regbits< type, 14,  1 >;  /**< AHB MASTERx 14 Converter Prefetch                          */
    using DLBOPT10  = regbits< type, 26,  1 >;  /**< AHB MASTERx 10 Converter Define Length Burst Optimization  */
    using DLBOPT11  = regbits< type, 27,  1 >;  /**< AHB MASTERx 11 Converter Define Length Burst Optimization  */
    using DLBOPT12  = regbits< type, 28,  1 >;  /**< AHB MASTERx 12 Converter Define Length Burst Optimization  */
    using DLBOPT13  = regbits< type, 29,  1 >;  /**< AHB MASTERx 13 Converter Define Length Burst Optimization  */
    using DLBOPT14  = regbits< type, 30,  1 >;  /**< AHB MASTERx 14 Converter Define Length Burst Optimization  */
  };

  /**
   * Bridge Configuration Register
   */
  struct BRIDGE
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >;

    using APBTURBO    = regbits< type,  0,  1 >;  /**< AHB to APB Bridge mode                          */
    using AXI2AHBSEL  = regbits< type,  8,  1 >;  /**< AXI to AHB bridge for DDR controller selection  */
  };

  /**
   * Security Configuration Register
   */
  struct SECURE
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    using ROM   = regbits< type,  0,  1 >;  /**< Disable Access to ROM Code         */
    using FUSE  = regbits< type,  8,  1 >;  /**< Disable Access to Fuse Controller  */
  };

  /**
   * UTMI Clock Trimming Register
   */
  struct UTMICKTRIM
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x00010000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x00010000 >;

    using FREQ  = regbits< type,  0,  2 >;  /**< UTMI Reference Clock Frequency  */
    using VBG   = regbits< type, 16,  4 >;  /**< UTMI Band Gap Voltage Trimming  */
  };

  /**
   * UTMI High Speed Trimming Register
   */
  struct UTMIHSTRIM
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x00044433 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x00044433 >;

    using SQUELCH  = regbits< type,  0,  3 >;  /**< UTMI HS SQUELCH Voltage Trimming          */
    using DISC     = regbits< type,  4,  3 >;  /**< UTMI Disconnect Voltage Trimming          */
    using SLOPE0   = regbits< type,  8,  3 >;  /**< UTMI HS PORTx Transceiver Slope Trimming  */
    using SLOPE1   = regbits< type, 12,  3 >;  /**< UTMI HS PORTx Transceiver Slope Trimming  */
    using SLOPE2   = regbits< type, 16,  3 >;  /**< UTMI HS PORTx Transceiver Slope Trimming  */
  };

  /**
   * UTMI Full Speed Trimming Register
   */
  struct UTMIFSTRIM
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00430211 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00430211 >;

    using RISE  = regbits< type,  0,  3 >;  /**< FS Transceiver output rising slope trimming   */
    using FALL  = regbits< type,  4,  3 >;  /**< FS Transceiver output falling slope trimming  */
    using XCVR  = regbits< type,  8,  2 >;  /**< FS Transceiver crossover voltage trimming     */
    using ZN    = regbits< type, 16,  3 >;  /**< FS Transceiver NMOS impedance trimming        */
    using ZP    = regbits< type, 20,  3 >;  /**< FS Transceiver PMOS impedance trimming        */
  };

  /**
   * UTMI DP/DM Pin Swapping Register
   */
  struct UTMISWAP
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >;

    using PORT0  = regbits< type,  0,  1 >;  /**< PORT 0 DP/DM Pin Swapping  */
    using PORT1  = regbits< type,  1,  1 >;  /**< PORT 1 DP/DM Pin Swapping  */
    using PORT2  = regbits< type,  2,  1 >;  /**< PORT 2 DP/DM Pin Swapping  */
  };

  /**
   * EBI Configuration Register
   */
  struct EBICFG
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DRIVE0  = regbits< type,  0,  2 >;  /**< EBI Pins Drive Level           */
    using PULL0   = regbits< type,  2,  2 >;  /**< EBI Pins Pull Value            */
    using SCH0    = regbits< type,  4,  1 >;  /**< EBI Pins Schmitt Trigger       */
    using DRIVE1  = regbits< type,  8,  2 >;  /**< EBI Pins Drive Level           */
    using PULL1   = regbits< type, 10,  2 >;  /**< EBI Pins Pull Value            */
    using SCH1    = regbits< type, 12,  1 >;  /**< EBI Pins Schmitt Trigger       */
    using BMS     = regbits< type, 16,  1 >;  /**< BMS Sampled Value (Read Only)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SFR_HPP_INCLUDED
