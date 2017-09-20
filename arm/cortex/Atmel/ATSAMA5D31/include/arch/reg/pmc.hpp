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

#ifndef ARCH_REG_PMC_HPP_INCLUDED
#define ARCH_REG_PMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power Management Controller
 */
struct PMC
{
  static constexpr reg_addr_t base_addr = 0xfffffc00;

  /**
   * System Clock Enable Register
   */
  struct PMC_SCER
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using DDRCK  = regbits< type,  2,  1 >;  /**< DDR Clock Enable                    */
    using SMDCK  = regbits< type,  4,  1 >;  /**< SMD Clock Enable                    */
    using UHP    = regbits< type,  6,  1 >;  /**< USB Host OHCI Clocks Enable         */
    using UDP    = regbits< type,  7,  1 >;  /**< USB Device Clock Enable             */
    using PCK0   = regbits< type,  8,  1 >;  /**< Programmable Clock 0 Output Enable  */
    using PCK1   = regbits< type,  9,  1 >;  /**< Programmable Clock 1 Output Enable  */
    using PCK2   = regbits< type, 10,  1 >;  /**< Programmable Clock 2 Output Enable  */
  };

  /**
   * System Clock Disable Register
   */
  struct PMC_SCDR
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using PCK    = regbits< type,  0,  1 >;  /**< Processor Clock Disable              */
    using DDRCK  = regbits< type,  2,  1 >;  /**< DDR Clock Disable                    */
    using SMDCK  = regbits< type,  4,  1 >;  /**< SMD Clock Disable                    */
    using UHP    = regbits< type,  6,  1 >;  /**< USB Host OHCI Clock Disable          */
    using UDP    = regbits< type,  7,  1 >;  /**< USB Device Clock Enable              */
    using PCK0   = regbits< type,  8,  1 >;  /**< Programmable Clock 0 Output Disable  */
    using PCK1   = regbits< type,  9,  1 >;  /**< Programmable Clock 1 Output Disable  */
    using PCK2   = regbits< type, 10,  1 >;  /**< Programmable Clock 2 Output Disable  */
  };

  /**
   * System Clock Status Register
   */
  struct PMC_SCSR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000005 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000005 >;

    using PCK    = regbits< type,  0,  1 >;  /**< Processor Clock Status              */
    using DDRCK  = regbits< type,  2,  1 >;  /**< DDR Clock Status                    */
    using SMDCK  = regbits< type,  4,  1 >;  /**< SMD Clock Status                    */
    using UHP    = regbits< type,  6,  1 >;  /**< USB Host Port Clock Status          */
    using UDP    = regbits< type,  7,  1 >;  /**< USB Device Port Clock Status        */
    using PCK0   = regbits< type,  8,  1 >;  /**< Programmable Clock 0 Output Status  */
    using PCK1   = regbits< type,  9,  1 >;  /**< Programmable Clock 1 Output Status  */
    using PCK2   = regbits< type, 10,  1 >;  /**< Programmable Clock 2 Output Status  */
  };

  /**
   * Peripheral Clock Enable Register 0
   */
  struct PMC_PCER0
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using PID2   = regbits< type,  2,  1 >;  /**< Peripheral Clock 2 Enable   */
    using PID3   = regbits< type,  3,  1 >;  /**< Peripheral Clock 3 Enable   */
    using PID4   = regbits< type,  4,  1 >;  /**< Peripheral Clock 4 Enable   */
    using PID5   = regbits< type,  5,  1 >;  /**< Peripheral Clock 5 Enable   */
    using PID6   = regbits< type,  6,  1 >;  /**< Peripheral Clock 6 Enable   */
    using PID7   = regbits< type,  7,  1 >;  /**< Peripheral Clock 7 Enable   */
    using PID8   = regbits< type,  8,  1 >;  /**< Peripheral Clock 8 Enable   */
    using PID9   = regbits< type,  9,  1 >;  /**< Peripheral Clock 9 Enable   */
    using PID10  = regbits< type, 10,  1 >;  /**< Peripheral Clock 10 Enable  */
    using PID11  = regbits< type, 11,  1 >;  /**< Peripheral Clock 11 Enable  */
    using PID12  = regbits< type, 12,  1 >;  /**< Peripheral Clock 12 Enable  */
    using PID13  = regbits< type, 13,  1 >;  /**< Peripheral Clock 13 Enable  */
    using PID14  = regbits< type, 14,  1 >;  /**< Peripheral Clock 14 Enable  */
    using PID15  = regbits< type, 15,  1 >;  /**< Peripheral Clock 15 Enable  */
    using PID16  = regbits< type, 16,  1 >;  /**< Peripheral Clock 16 Enable  */
    using PID17  = regbits< type, 17,  1 >;  /**< Peripheral Clock 17 Enable  */
    using PID18  = regbits< type, 18,  1 >;  /**< Peripheral Clock 18 Enable  */
    using PID19  = regbits< type, 19,  1 >;  /**< Peripheral Clock 19 Enable  */
    using PID20  = regbits< type, 20,  1 >;  /**< Peripheral Clock 20 Enable  */
    using PID21  = regbits< type, 21,  1 >;  /**< Peripheral Clock 21 Enable  */
    using PID22  = regbits< type, 22,  1 >;  /**< Peripheral Clock 22 Enable  */
    using PID23  = regbits< type, 23,  1 >;  /**< Peripheral Clock 23 Enable  */
    using PID24  = regbits< type, 24,  1 >;  /**< Peripheral Clock 24 Enable  */
    using PID25  = regbits< type, 25,  1 >;  /**< Peripheral Clock 25 Enable  */
    using PID26  = regbits< type, 26,  1 >;  /**< Peripheral Clock 26 Enable  */
    using PID27  = regbits< type, 27,  1 >;  /**< Peripheral Clock 27 Enable  */
    using PID28  = regbits< type, 28,  1 >;  /**< Peripheral Clock 28 Enable  */
    using PID29  = regbits< type, 29,  1 >;  /**< Peripheral Clock 29 Enable  */
    using PID30  = regbits< type, 30,  1 >;  /**< Peripheral Clock 30 Enable  */
    using PID31  = regbits< type, 31,  1 >;  /**< Peripheral Clock 31 Enable  */
  };

  /**
   * Peripheral Clock Disable Register 0
   */
  struct PMC_PCDR0
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using PID2   = regbits< type,  2,  1 >;  /**< Peripheral Clock 2 Disable   */
    using PID3   = regbits< type,  3,  1 >;  /**< Peripheral Clock 3 Disable   */
    using PID4   = regbits< type,  4,  1 >;  /**< Peripheral Clock 4 Disable   */
    using PID5   = regbits< type,  5,  1 >;  /**< Peripheral Clock 5 Disable   */
    using PID6   = regbits< type,  6,  1 >;  /**< Peripheral Clock 6 Disable   */
    using PID7   = regbits< type,  7,  1 >;  /**< Peripheral Clock 7 Disable   */
    using PID8   = regbits< type,  8,  1 >;  /**< Peripheral Clock 8 Disable   */
    using PID9   = regbits< type,  9,  1 >;  /**< Peripheral Clock 9 Disable   */
    using PID10  = regbits< type, 10,  1 >;  /**< Peripheral Clock 10 Disable  */
    using PID11  = regbits< type, 11,  1 >;  /**< Peripheral Clock 11 Disable  */
    using PID12  = regbits< type, 12,  1 >;  /**< Peripheral Clock 12 Disable  */
    using PID13  = regbits< type, 13,  1 >;  /**< Peripheral Clock 13 Disable  */
    using PID14  = regbits< type, 14,  1 >;  /**< Peripheral Clock 14 Disable  */
    using PID15  = regbits< type, 15,  1 >;  /**< Peripheral Clock 15 Disable  */
    using PID16  = regbits< type, 16,  1 >;  /**< Peripheral Clock 16 Disable  */
    using PID17  = regbits< type, 17,  1 >;  /**< Peripheral Clock 17 Disable  */
    using PID18  = regbits< type, 18,  1 >;  /**< Peripheral Clock 18 Disable  */
    using PID19  = regbits< type, 19,  1 >;  /**< Peripheral Clock 19 Disable  */
    using PID20  = regbits< type, 20,  1 >;  /**< Peripheral Clock 20 Disable  */
    using PID21  = regbits< type, 21,  1 >;  /**< Peripheral Clock 21 Disable  */
    using PID22  = regbits< type, 22,  1 >;  /**< Peripheral Clock 22 Disable  */
    using PID23  = regbits< type, 23,  1 >;  /**< Peripheral Clock 23 Disable  */
    using PID24  = regbits< type, 24,  1 >;  /**< Peripheral Clock 24 Disable  */
    using PID25  = regbits< type, 25,  1 >;  /**< Peripheral Clock 25 Disable  */
    using PID26  = regbits< type, 26,  1 >;  /**< Peripheral Clock 26 Disable  */
    using PID27  = regbits< type, 27,  1 >;  /**< Peripheral Clock 27 Disable  */
    using PID28  = regbits< type, 28,  1 >;  /**< Peripheral Clock 28 Disable  */
    using PID29  = regbits< type, 29,  1 >;  /**< Peripheral Clock 29 Disable  */
    using PID30  = regbits< type, 30,  1 >;  /**< Peripheral Clock 30 Disable  */
    using PID31  = regbits< type, 31,  1 >;  /**< Peripheral Clock 31 Disable  */
  };

  /**
   * Peripheral Clock Status Register 0
   */
  struct PMC_PCSR0
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using PID2   = regbits< type,  2,  1 >;  /**< Peripheral Clock 2 Status   */
    using PID3   = regbits< type,  3,  1 >;  /**< Peripheral Clock 3 Status   */
    using PID4   = regbits< type,  4,  1 >;  /**< Peripheral Clock 4 Status   */
    using PID5   = regbits< type,  5,  1 >;  /**< Peripheral Clock 5 Status   */
    using PID6   = regbits< type,  6,  1 >;  /**< Peripheral Clock 6 Status   */
    using PID7   = regbits< type,  7,  1 >;  /**< Peripheral Clock 7 Status   */
    using PID8   = regbits< type,  8,  1 >;  /**< Peripheral Clock 8 Status   */
    using PID9   = regbits< type,  9,  1 >;  /**< Peripheral Clock 9 Status   */
    using PID10  = regbits< type, 10,  1 >;  /**< Peripheral Clock 10 Status  */
    using PID11  = regbits< type, 11,  1 >;  /**< Peripheral Clock 11 Status  */
    using PID12  = regbits< type, 12,  1 >;  /**< Peripheral Clock 12 Status  */
    using PID13  = regbits< type, 13,  1 >;  /**< Peripheral Clock 13 Status  */
    using PID14  = regbits< type, 14,  1 >;  /**< Peripheral Clock 14 Status  */
    using PID15  = regbits< type, 15,  1 >;  /**< Peripheral Clock 15 Status  */
    using PID16  = regbits< type, 16,  1 >;  /**< Peripheral Clock 16 Status  */
    using PID17  = regbits< type, 17,  1 >;  /**< Peripheral Clock 17 Status  */
    using PID18  = regbits< type, 18,  1 >;  /**< Peripheral Clock 18 Status  */
    using PID19  = regbits< type, 19,  1 >;  /**< Peripheral Clock 19 Status  */
    using PID20  = regbits< type, 20,  1 >;  /**< Peripheral Clock 20 Status  */
    using PID21  = regbits< type, 21,  1 >;  /**< Peripheral Clock 21 Status  */
    using PID22  = regbits< type, 22,  1 >;  /**< Peripheral Clock 22 Status  */
    using PID23  = regbits< type, 23,  1 >;  /**< Peripheral Clock 23 Status  */
    using PID24  = regbits< type, 24,  1 >;  /**< Peripheral Clock 24 Status  */
    using PID25  = regbits< type, 25,  1 >;  /**< Peripheral Clock 25 Status  */
    using PID26  = regbits< type, 26,  1 >;  /**< Peripheral Clock 26 Status  */
    using PID27  = regbits< type, 27,  1 >;  /**< Peripheral Clock 27 Status  */
    using PID28  = regbits< type, 28,  1 >;  /**< Peripheral Clock 28 Status  */
    using PID29  = regbits< type, 29,  1 >;  /**< Peripheral Clock 29 Status  */
    using PID30  = regbits< type, 30,  1 >;  /**< Peripheral Clock 30 Status  */
    using PID31  = regbits< type, 31,  1 >;  /**< Peripheral Clock 31 Status  */
  };

  /**
   * UTMI Clock Register
   */
  struct CKGR_UCKR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x10200000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x10200000 >;

    using UPLLEN     = regbits< type, 16,  1 >;  /**< UTMI PLL Enable          */
    using UPLLCOUNT  = regbits< type, 20,  4 >;  /**< UTMI PLL Start-up Time   */
    using BIASEN     = regbits< type, 24,  1 >;  /**< UTMI BIAS Enable         */
    using BIASCOUNT  = regbits< type, 28,  4 >;  /**< UTMI BIAS Start-up Time  */
  };

  /**
   * Main Oscillator Register
   */
  struct CKGR_MOR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x01000008 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x01000008 >;

    using MOSCXTEN  = regbits< type,  0,  1 >;  /**< Main Crystal Oscillator Enable         */
    using MOSCXTBY  = regbits< type,  1,  1 >;  /**< Main Crystal Oscillator Bypass         */
    using MOSCRCEN  = regbits< type,  3,  1 >;  /**< Main On-Chip RC Oscillator Enable      */
    using MOSCXTST  = regbits< type,  8,  8 >;  /**< Main Crystal Oscillator Start-up Time  */
    using KEY       = regbits< type, 16,  8 >;  /**< Password                               */
    using MOSCSEL   = regbits< type, 24,  1 >;  /**< Main Oscillator Selection              */
    using CFDEN     = regbits< type, 25,  1 >;  /**< Clock Failure Detector Enable          */
  };

  /**
   * Main Clock Frequency Register
   */
  struct CKGR_MCFR
  : public reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >;

    using MAINF     = regbits< type,  0, 16 >;  /**< Main Clock Frequency  */
    using MAINFRDY  = regbits< type, 16,  1 >;  /**< Main Clock Ready      */
  };

  /**
   * PLLA Register
   */
  struct CKGR_PLLAR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00003F00 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00003F00 >;

    using DIVA       = regbits< type,  0,  8 >;  /**< Divider A                   */
    using PLLACOUNT  = regbits< type,  8,  6 >;  /**< PLLA Counter                */
    using OUTA       = regbits< type, 14,  2 >;  /**< PLLA Clock Frequency Range  */
    using MULA       = regbits< type, 16, 11 >;  /**< PLLA Multiplier             */
    using STUCKTO1   = regbits< type, 29,  1 >;
  };

  /**
   * Master Clock Register
   */
  struct PMC_MCKR
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x00000001 >;

    using CSS       = regbits< type,  0,  2 >;  /**< Master/Processor Clock Source Selection  */
    using PRES      = regbits< type,  4,  3 >;  /**< Master/Processor Clock Prescaler         */
    using MDIV      = regbits< type,  8,  2 >;  /**< Master Clock Division                    */
    using PLLADIV2  = regbits< type, 12,  1 >;  /**< PLLA divisor by 2                        */
  };

  /**
   * USB Clock Register
   */
  struct PMC_USB
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >;

    using USBS    = regbits< type,  0,  1 >;  /**< USB OHCI Input Clock Selection  */
    using USBDIV  = regbits< type,  8,  4 >;  /**< Divider for USB OHCI Clock.     */
  };

  /**
   * Soft Modem Clock Register
   */
  struct PMC_SMD
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >;

    using SMDS    = regbits< type,  0,  1 >;  /**< SMD input clock selection  */
    using SMDDIV  = regbits< type,  8,  5 >;  /**< Divider for SMD Clock.     */
  };

  /**
   * Programmable Clock 0 Register
   */
  struct PMC_PCK[%s]
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CSS   = regbits< type,  0,  3 >;  /**< Master Clock Source Selection  */
    using PRES  = regbits< type,  4,  3 >;  /**< Programmable Clock Prescaler   */
  };

  /**
   * Interrupt Enable Register
   */
  struct PMC_IER
  : public reg< uint32_t, base_addr + 0x00000060, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, wo, 0 >;

    using MOSCXTS   = regbits< type,  0,  1 >;  /**< Main Crystal Oscillator Status Interrupt Enable    */
    using LOCKA     = regbits< type,  1,  1 >;  /**< PLLA Lock Interrupt Enable                         */
    using MCKRDY    = regbits< type,  3,  1 >;  /**< Master Clock Ready Interrupt Enable                */
    using LOCKU     = regbits< type,  6,  1 >;  /**< UTMI PLL Lock Interrupt Enable                     */
    using PCKRDY0   = regbits< type,  8,  1 >;  /**< Programmable Clock Ready 0 Interrupt Enable        */
    using PCKRDY1   = regbits< type,  9,  1 >;  /**< Programmable Clock Ready 1 Interrupt Enable        */
    using MOSCSELS  = regbits< type, 16,  1 >;  /**< Main Oscillator Selection Status Interrupt Enable  */
    using MOSCRCS   = regbits< type, 17,  1 >;  /**< Main On-Chip RC Status Interrupt Enable            */
    using CFDEV     = regbits< type, 18,  1 >;  /**< Clock Failure Detector Event Interrupt Enable      */
  };

  /**
   * Interrupt Disable Register
   */
  struct PMC_IDR
  : public reg< uint32_t, base_addr + 0x00000064, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, wo, 0 >;

    using MOSCXTS   = regbits< type,  0,  1 >;  /**< Main Crystal Oscillator Status Interrupt Disable    */
    using LOCKA     = regbits< type,  1,  1 >;  /**< PLLA Lock Interrupt Disable                         */
    using MCKRDY    = regbits< type,  3,  1 >;  /**< Master Clock Ready Interrupt Disable                */
    using LOCKU     = regbits< type,  6,  1 >;  /**< UTMI PLL Lock Interrupt Enable                      */
    using PCKRDY0   = regbits< type,  8,  1 >;  /**< Programmable Clock Ready 0 Interrupt Disable        */
    using PCKRDY1   = regbits< type,  9,  1 >;  /**< Programmable Clock Ready 1 Interrupt Disable        */
    using MOSCSELS  = regbits< type, 16,  1 >;  /**< Main Oscillator Selection Status Interrupt Disable  */
    using MOSCRCS   = regbits< type, 17,  1 >;  /**< Main On-Chip RC Status Interrupt Disable            */
    using CFDEV     = regbits< type, 18,  1 >;  /**< Clock Failure Detector Event Interrupt Disable      */
  };

  /**
   * Status Register
   */
  struct PMC_SR
  : public reg< uint32_t, base_addr + 0x00000068, ro, 0x00010008 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, ro, 0x00010008 >;

    using MOSCXTS   = regbits< type,  0,  1 >;  /**< Main XTAL Oscillator Status                 */
    using LOCKA     = regbits< type,  1,  1 >;  /**< PLLA Lock Status                            */
    using MCKRDY    = regbits< type,  3,  1 >;  /**< Master Clock Status                         */
    using LOCKU     = regbits< type,  6,  1 >;  /**< UPLL Clock Status                           */
    using OSCSELS   = regbits< type,  7,  1 >;  /**< Slow Clock Oscillator Selection             */
    using PCKRDY0   = regbits< type,  8,  1 >;  /**< Programmable Clock Ready Status             */
    using PCKRDY1   = regbits< type,  9,  1 >;  /**< Programmable Clock Ready Status             */
    using MOSCSELS  = regbits< type, 16,  1 >;  /**< Main Oscillator Selection Status            */
    using MOSCRCS   = regbits< type, 17,  1 >;  /**< Main On-Chip RC Oscillator Status           */
    using CFDEV     = regbits< type, 18,  1 >;  /**< Clock Failure Detector Event                */
    using CFDS      = regbits< type, 19,  1 >;  /**< Clock Failure Detector Status               */
    using FOS       = regbits< type, 20,  1 >;  /**< Clock Failure Detector Fault Output Status  */
  };

  /**
   * Interrupt Mask Register
   */
  struct PMC_IMR
  : public reg< uint32_t, base_addr + 0x0000006c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, ro, 0x00000000 >;

    using MOSCXTS   = regbits< type,  0,  1 >;  /**< Main Crystal Oscillator Status Interrupt Mask    */
    using LOCKA     = regbits< type,  1,  1 >;  /**< PLLA Lock Interrupt Mask                         */
    using MCKRDY    = regbits< type,  3,  1 >;  /**< Master Clock Ready Interrupt Mask                */
    using PCKRDY0   = regbits< type,  8,  1 >;  /**< Programmable Clock Ready 0 Interrupt Mask        */
    using PCKRDY1   = regbits< type,  9,  1 >;  /**< Programmable Clock Ready 1 Interrupt Mask        */
    using MOSCSELS  = regbits< type, 16,  1 >;  /**< Main Oscillator Selection Status Interrupt Mask  */
    using MOSCRCS   = regbits< type, 17,  1 >;  /**< Main On-Chip RC Status Interrupt Mask            */
    using CFDEV     = regbits< type, 18,  1 >;  /**< Clock Failure Detector Event Interrupt Mask      */
  };

  /**
   * PLL Charge Pump Current Register
   */
  struct PMC_PLLICPR
  : public reg< uint32_t, base_addr + 0x00000080, wo, 0x01000100 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, wo, 0x01000100 >;

    using ICPLLA  = regbits< type,  0,  1 >;  /**< Charge Pump Current  */
  };

  /**
   * Write Protect Mode Register
   */
  struct PMC_WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * Write Protect Status Register
   */
  struct PMC_WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Violation Status  */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };

  /**
   * Peripheral Clock Enable Register 1
   */
  struct PMC_PCER1
  : public reg< uint32_t, base_addr + 0x00000100, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, wo, 0 >;

    using PID32  = regbits< type,  0,  1 >;  /**< Peripheral Clock 32 Enable  */
    using PID33  = regbits< type,  1,  1 >;  /**< Peripheral Clock 33 Enable  */
    using PID34  = regbits< type,  2,  1 >;  /**< Peripheral Clock 34 Enable  */
    using PID35  = regbits< type,  3,  1 >;  /**< Peripheral Clock 35 Enable  */
    using PID36  = regbits< type,  4,  1 >;  /**< Peripheral Clock 36 Enable  */
    using PID37  = regbits< type,  5,  1 >;  /**< Peripheral Clock 37 Enable  */
    using PID38  = regbits< type,  6,  1 >;  /**< Peripheral Clock 38 Enable  */
    using PID39  = regbits< type,  7,  1 >;  /**< Peripheral Clock 39 Enable  */
    using PID40  = regbits< type,  8,  1 >;  /**< Peripheral Clock 40 Enable  */
    using PID41  = regbits< type,  9,  1 >;  /**< Peripheral Clock 41 Enable  */
    using PID42  = regbits< type, 10,  1 >;  /**< Peripheral Clock 42 Enable  */
    using PID43  = regbits< type, 11,  1 >;  /**< Peripheral Clock 43 Enable  */
    using PID44  = regbits< type, 12,  1 >;  /**< Peripheral Clock 44 Enable  */
    using PID45  = regbits< type, 13,  1 >;  /**< Peripheral Clock 45 Enable  */
    using PID46  = regbits< type, 14,  1 >;  /**< Peripheral Clock 46 Enable  */
    using PID47  = regbits< type, 15,  1 >;  /**< Peripheral Clock 47 Enable  */
    using PID48  = regbits< type, 16,  1 >;  /**< Peripheral Clock 48 Enable  */
    using PID49  = regbits< type, 17,  1 >;  /**< Peripheral Clock 49 Enable  */
    using PID50  = regbits< type, 18,  1 >;  /**< Peripheral Clock 50 Enable  */
    using PID51  = regbits< type, 19,  1 >;  /**< Peripheral Clock 51 Enable  */
    using PID53  = regbits< type, 20,  2 >;  /**< Peripheral Clock 53 Enable  */
    using PID54  = regbits< type, 22,  1 >;  /**< Peripheral Clock 54 Enable  */
    using PID55  = regbits< type, 23,  1 >;  /**< Peripheral Clock 55 Enable  */
    using PID56  = regbits< type, 24,  1 >;  /**< Peripheral Clock 56 Enable  */
    using PID57  = regbits< type, 25,  1 >;  /**< Peripheral Clock 57 Enable  */
    using PID58  = regbits< type, 26,  1 >;  /**< Peripheral Clock 58 Enable  */
    using PID59  = regbits< type, 27,  1 >;  /**< Peripheral Clock 59 Enable  */
    using PID60  = regbits< type, 28,  1 >;  /**< Peripheral Clock 60 Enable  */
    using PID61  = regbits< type, 29,  1 >;  /**< Peripheral Clock 61 Enable  */
    using PID62  = regbits< type, 30,  1 >;  /**< Peripheral Clock 62 Enable  */
    using PID63  = regbits< type, 31,  1 >;  /**< Peripheral Clock 63 Enable  */
  };

  /**
   * Peripheral Clock Disable Register 1
   */
  struct PMC_PCDR1
  : public reg< uint32_t, base_addr + 0x00000104, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, wo, 0 >;

    using PID32  = regbits< type,  0,  1 >;  /**< Peripheral Clock 32 Disable  */
    using PID33  = regbits< type,  1,  1 >;  /**< Peripheral Clock 33 Disable  */
    using PID34  = regbits< type,  2,  1 >;  /**< Peripheral Clock 34 Disable  */
    using PID35  = regbits< type,  3,  1 >;  /**< Peripheral Clock 35 Disable  */
    using PID36  = regbits< type,  4,  1 >;  /**< Peripheral Clock 36 Disable  */
    using PID37  = regbits< type,  5,  1 >;  /**< Peripheral Clock 37 Disable  */
    using PID38  = regbits< type,  6,  1 >;  /**< Peripheral Clock 38 Disable  */
    using PID39  = regbits< type,  7,  1 >;  /**< Peripheral Clock 39 Disable  */
    using PID40  = regbits< type,  8,  1 >;  /**< Peripheral Clock 40 Disable  */
    using PID41  = regbits< type,  9,  1 >;  /**< Peripheral Clock 41 Disable  */
    using PID42  = regbits< type, 10,  1 >;  /**< Peripheral Clock 42 Disable  */
    using PID43  = regbits< type, 11,  1 >;  /**< Peripheral Clock 43 Disable  */
    using PID44  = regbits< type, 12,  1 >;  /**< Peripheral Clock 44 Disable  */
    using PID45  = regbits< type, 13,  1 >;  /**< Peripheral Clock 45 Disable  */
    using PID46  = regbits< type, 14,  1 >;  /**< Peripheral Clock 46 Disable  */
    using PID47  = regbits< type, 15,  1 >;  /**< Peripheral Clock 47 Disable  */
    using PID48  = regbits< type, 16,  1 >;  /**< Peripheral Clock 48 Disable  */
    using PID49  = regbits< type, 17,  1 >;  /**< Peripheral Clock 49 Disable  */
    using PID50  = regbits< type, 18,  1 >;  /**< Peripheral Clock 50 Disable  */
    using PID51  = regbits< type, 19,  1 >;  /**< Peripheral Clock 51 Disable  */
    using PID53  = regbits< type, 20,  2 >;  /**< Peripheral Clock 53 Disable  */
    using PID54  = regbits< type, 22,  1 >;  /**< Peripheral Clock 54 Disable  */
    using PID55  = regbits< type, 23,  1 >;  /**< Peripheral Clock 55 Disable  */
    using PID56  = regbits< type, 24,  1 >;  /**< Peripheral Clock 56 Disable  */
    using PID57  = regbits< type, 25,  1 >;  /**< Peripheral Clock 57 Disable  */
    using PID58  = regbits< type, 26,  1 >;  /**< Peripheral Clock 58 Disable  */
    using PID59  = regbits< type, 27,  1 >;  /**< Peripheral Clock 59 Disable  */
    using PID60  = regbits< type, 28,  1 >;  /**< Peripheral Clock 60 Disable  */
    using PID61  = regbits< type, 29,  1 >;  /**< Peripheral Clock 61 Disable  */
    using PID62  = regbits< type, 30,  1 >;  /**< Peripheral Clock 62 Disable  */
    using PID63  = regbits< type, 31,  1 >;  /**< Peripheral Clock 63 Disable  */
  };

  /**
   * Peripheral Clock Status Register 1
   */
  struct PMC_PCSR1
  : public reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >;

    using PID32  = regbits< type,  0,  1 >;  /**< Peripheral Clock 32 Status  */
    using PID33  = regbits< type,  1,  1 >;  /**< Peripheral Clock 33 Status  */
    using PID34  = regbits< type,  2,  1 >;  /**< Peripheral Clock 34 Status  */
    using PID35  = regbits< type,  3,  1 >;  /**< Peripheral Clock 35 Status  */
    using PID36  = regbits< type,  4,  1 >;  /**< Peripheral Clock 36 Status  */
    using PID37  = regbits< type,  5,  1 >;  /**< Peripheral Clock 37 Status  */
    using PID38  = regbits< type,  6,  1 >;  /**< Peripheral Clock 38 Status  */
    using PID39  = regbits< type,  7,  1 >;  /**< Peripheral Clock 39 Status  */
    using PID40  = regbits< type,  8,  1 >;  /**< Peripheral Clock 40 Status  */
    using PID41  = regbits< type,  9,  1 >;  /**< Peripheral Clock 41 Status  */
    using PID42  = regbits< type, 10,  1 >;  /**< Peripheral Clock 42 Status  */
    using PID43  = regbits< type, 11,  1 >;  /**< Peripheral Clock 43 Status  */
    using PID44  = regbits< type, 12,  1 >;  /**< Peripheral Clock 44 Status  */
    using PID45  = regbits< type, 13,  1 >;  /**< Peripheral Clock 45 Status  */
    using PID46  = regbits< type, 14,  1 >;  /**< Peripheral Clock 46 Status  */
    using PID47  = regbits< type, 15,  1 >;  /**< Peripheral Clock 47 Status  */
    using PID48  = regbits< type, 16,  1 >;  /**< Peripheral Clock 48 Status  */
    using PID49  = regbits< type, 17,  1 >;  /**< Peripheral Clock 49 Status  */
    using PID50  = regbits< type, 18,  1 >;  /**< Peripheral Clock 50 Status  */
    using PID51  = regbits< type, 19,  1 >;  /**< Peripheral Clock 51 Status  */
    using PID53  = regbits< type, 20,  2 >;  /**< Peripheral Clock 53 Status  */
    using PID54  = regbits< type, 22,  1 >;  /**< Peripheral Clock 54 Status  */
    using PID55  = regbits< type, 23,  1 >;  /**< Peripheral Clock 55 Status  */
    using PID56  = regbits< type, 24,  1 >;  /**< Peripheral Clock 56 Status  */
    using PID57  = regbits< type, 25,  1 >;  /**< Peripheral Clock 57 Status  */
    using PID58  = regbits< type, 26,  1 >;  /**< Peripheral Clock 58 Status  */
    using PID59  = regbits< type, 27,  1 >;  /**< Peripheral Clock 59 Status  */
    using PID60  = regbits< type, 28,  1 >;  /**< Peripheral Clock 60 Status  */
    using PID61  = regbits< type, 29,  1 >;  /**< Peripheral Clock 61 Status  */
    using PID62  = regbits< type, 30,  1 >;  /**< Peripheral Clock 62 Status  */
    using PID63  = regbits< type, 31,  1 >;  /**< Peripheral Clock 63 Status  */
  };

  /**
   * Peripheral Control Register
   */
  struct PMC_PCR
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >;

    using PID  = regbits< type,  0,  6 >;  /**< Peripheral ID  */
    using CMD  = regbits< type, 12,  1 >;  /**< Command        */
    using DIV  = regbits< type, 16,  2 >;  /**< Divisor Value  */
    using EN   = regbits< type, 28,  1 >;  /**< Enable         */
  };
};
} // namespace mptl

#endif // ARCH_REG_PMC_HPP_INCLUDED
