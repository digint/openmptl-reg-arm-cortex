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
//  Import from CMSIS-SVD: "Atmel/ATSAM3X4E.svd"
//
//  vendor: Atmel
//  name: ATSAM3X4E
//  series: SAM3X
//  version: 20130131
//  description: Atmel ATSAM3X4E device: Cortex-M3 Microcontroller with 2x128 KB Flash, HS USB, 144 Pins (refer to http://www.atmel.com/devices/SAM3X4E.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0x400e0600;

  /**
   * System Clock Enable Register
   */
  struct PMC_SCER
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using UOTGCLK  = regbits< type,  5,  1 >;  /**< Enable USB OTG Clock (48 MHz, USB_48M) for UTMI  */
    using PCK0     = regbits< type,  8,  1 >;  /**< Programmable Clock 0 Output Enable               */
    using PCK1     = regbits< type,  9,  1 >;  /**< Programmable Clock 1 Output Enable               */
    using PCK2     = regbits< type, 10,  1 >;  /**< Programmable Clock 2 Output Enable               */
  };

  /**
   * System Clock Disable Register
   */
  struct PMC_SCDR
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using UOTGCLK  = regbits< type,  5,  1 >;  /**< Disable USB OTG Clock (48 MHz, USB_48M) for UTMI  */
    using PCK0     = regbits< type,  8,  1 >;  /**< Programmable Clock 0 Output Disable               */
    using PCK1     = regbits< type,  9,  1 >;  /**< Programmable Clock 1 Output Disable               */
    using PCK2     = regbits< type, 10,  1 >;  /**< Programmable Clock 2 Output Disable               */
  };

  /**
   * System Clock Status Register
   */
  struct PMC_SCSR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000001 >;

    using UOTGCLK  = regbits< type,  5,  1 >;  /**< USB OTG Clock (48 MHz, USB_48M) Clock Status  */
    using PCK0     = regbits< type,  8,  1 >;  /**< Programmable Clock 0 Output Status            */
    using PCK1     = regbits< type,  9,  1 >;  /**< Programmable Clock 1 Output Status            */
    using PCK2     = regbits< type, 10,  1 >;  /**< Programmable Clock 2 Output Status            */
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
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x10200800 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x10200800 >;

    using UPLLEN     = regbits< type, 16,  1 >;  /**< UTMI PLL Enable         */
    using UPLLCOUNT  = regbits< type, 20,  4 >;  /**< UTMI PLL Start-up Time  */
  };

  /**
   * Main Oscillator Register
   */
  struct CKGR_MOR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000001 >;

    using MOSCXTEN  = regbits< type,  0,  1 >;  /**< Main Crystal Oscillator Enable                  */
    using MOSCXTBY  = regbits< type,  1,  1 >;  /**< Main Crystal Oscillator Bypass                  */
    using MOSCRCEN  = regbits< type,  3,  1 >;  /**< Main On-Chip RC Oscillator Enable               */
    using MOSCRCF   = regbits< type,  4,  3 >;  /**< Main On-Chip RC Oscillator Frequency Selection  */
    using MOSCXTST  = regbits< type,  8,  8 >;  /**< Main Crystal Oscillator Start-up Time           */
    using KEY       = regbits< type, 16,  8 >;  /**< Password                                        */
    using MOSCSEL   = regbits< type, 24,  1 >;  /**< Main Oscillator Selection                       */
    using CFDEN     = regbits< type, 25,  1 >;  /**< Clock Failure Detector Enable                   */
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

    using DIVA       = regbits< type,  0,  8 >;  /**< Divider           */
    using PLLACOUNT  = regbits< type,  8,  6 >;  /**< PLLA Counter      */
    using MULA       = regbits< type, 16, 11 >;  /**< PLLA Multiplier   */
    using ONE        = regbits< type, 29,  1 >;  /**< Must Be Set to 1  */
  };

  /**
   * Master Clock Register
   */
  struct PMC_MCKR
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x00000001 >;

    using CSS       = regbits< type,  0,  2 >;  /**< Master Clock Source Selection  */
    using PRES      = regbits< type,  4,  3 >;  /**< Processor Clock Prescaler      */
    using PLLADIV2  = regbits< type, 12,  1 >;  /**< PLLA Divisor by 2              */
    using UPLLDIV2  = regbits< type, 13,  1 >;
  };

  /**
   * USB Clock Register
   */
  struct PMC_USB
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >;

    using USBS    = regbits< type,  0,  1 >;  /**< USB Input Clock Selection  */
    using USBDIV  = regbits< type,  8,  4 >;  /**< Divider for USB Clock.     */
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
    using PCKRDY2   = regbits< type, 10,  1 >;  /**< Programmable Clock Ready 2 Interrupt Enable        */
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
    using LOCKU     = regbits< type,  6,  1 >;  /**< UTMI PLL Lock Interrupt Disable                     */
    using PCKRDY0   = regbits< type,  8,  1 >;  /**< Programmable Clock Ready 0 Interrupt Disable        */
    using PCKRDY1   = regbits< type,  9,  1 >;  /**< Programmable Clock Ready 1 Interrupt Disable        */
    using PCKRDY2   = regbits< type, 10,  1 >;  /**< Programmable Clock Ready 2 Interrupt Disable        */
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
    using LOCKU     = regbits< type,  6,  1 >;  /**< UTMI PLL Lock Status                        */
    using OSCSELS   = regbits< type,  7,  1 >;  /**< Slow Clock Oscillator Selection             */
    using PCKRDY0   = regbits< type,  8,  1 >;  /**< Programmable Clock Ready Status             */
    using PCKRDY1   = regbits< type,  9,  1 >;  /**< Programmable Clock Ready Status             */
    using PCKRDY2   = regbits< type, 10,  1 >;  /**< Programmable Clock Ready Status             */
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
    using LOCKU     = regbits< type,  6,  1 >;  /**< UTMI PLL Lock Interrupt Mask                     */
    using PCKRDY0   = regbits< type,  8,  1 >;  /**< Programmable Clock Ready 0 Interrupt Mask        */
    using PCKRDY1   = regbits< type,  9,  1 >;  /**< Programmable Clock Ready 1 Interrupt Mask        */
    using PCKRDY2   = regbits< type, 10,  1 >;  /**< Programmable Clock Ready 2 Interrupt Mask        */
    using MOSCSELS  = regbits< type, 16,  1 >;  /**< Main Oscillator Selection Status Interrupt Mask  */
    using MOSCRCS   = regbits< type, 17,  1 >;  /**< Main On-Chip RC Status Interrupt Mask            */
    using CFDEV     = regbits< type, 18,  1 >;  /**< Clock Failure Detector Event Interrupt Mask      */
  };

  /**
   * Fast Startup Mode Register
   */
  struct PMC_FSMR
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >;

    using FSTT0   = regbits< type,  0,  1 >;  /**< Fast Startup Input Enable 0   */
    using FSTT1   = regbits< type,  1,  1 >;  /**< Fast Startup Input Enable 1   */
    using FSTT2   = regbits< type,  2,  1 >;  /**< Fast Startup Input Enable 2   */
    using FSTT3   = regbits< type,  3,  1 >;  /**< Fast Startup Input Enable 3   */
    using FSTT4   = regbits< type,  4,  1 >;  /**< Fast Startup Input Enable 4   */
    using FSTT5   = regbits< type,  5,  1 >;  /**< Fast Startup Input Enable 5   */
    using FSTT6   = regbits< type,  6,  1 >;  /**< Fast Startup Input Enable 6   */
    using FSTT7   = regbits< type,  7,  1 >;  /**< Fast Startup Input Enable 7   */
    using FSTT8   = regbits< type,  8,  1 >;  /**< Fast Startup Input Enable 8   */
    using FSTT9   = regbits< type,  9,  1 >;  /**< Fast Startup Input Enable 9   */
    using FSTT10  = regbits< type, 10,  1 >;  /**< Fast Startup Input Enable 10  */
    using FSTT11  = regbits< type, 11,  1 >;  /**< Fast Startup Input Enable 11  */
    using FSTT12  = regbits< type, 12,  1 >;  /**< Fast Startup Input Enable 12  */
    using FSTT13  = regbits< type, 13,  1 >;  /**< Fast Startup Input Enable 13  */
    using FSTT14  = regbits< type, 14,  1 >;  /**< Fast Startup Input Enable 14  */
    using FSTT15  = regbits< type, 15,  1 >;  /**< Fast Startup Input Enable 15  */
    using RTTAL   = regbits< type, 16,  1 >;  /**< RTT Alarm Enable              */
    using RTCAL   = regbits< type, 17,  1 >;  /**< RTC Alarm Enable              */
    using USBAL   = regbits< type, 18,  1 >;  /**< USB Alarm Enable              */
    using LPM     = regbits< type, 20,  1 >;  /**< Low Power Mode                */
  };

  /**
   * Fast Startup Polarity Register
   */
  struct PMC_FSPR
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >;

    using FSTP0   = regbits< type,  0,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP1   = regbits< type,  1,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP2   = regbits< type,  2,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP3   = regbits< type,  3,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP4   = regbits< type,  4,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP5   = regbits< type,  5,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP6   = regbits< type,  6,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP7   = regbits< type,  7,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP8   = regbits< type,  8,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP9   = regbits< type,  9,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP10  = regbits< type, 10,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP11  = regbits< type, 11,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP12  = regbits< type, 12,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP13  = regbits< type, 13,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP14  = regbits< type, 14,  1 >;  /**< Fast Startup Input Polarityx  */
    using FSTP15  = regbits< type, 15,  1 >;  /**< Fast Startup Input Polarityx  */
  };

  /**
   * Fault Output Clear Register
   */
  struct PMC_FOCR
  : public reg< uint32_t, base_addr + 0x00000078, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, wo, 0 >;

    using FOCLR  = regbits< type,  0,  1 >;  /**< Fault Output Clear  */
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
