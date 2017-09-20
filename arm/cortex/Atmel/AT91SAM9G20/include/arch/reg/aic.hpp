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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G20.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G20
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G20 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, USB, Ethernet, 217 and 247 Pins (refer to http://www.atmel.com/devices/SAM9G20.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AIC_HPP_INCLUDED
#define ARCH_REG_AIC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Advanced Interrupt Controller
 */
struct AIC
{
  static constexpr reg_addr_t base_addr = 0xfffff000;

  /**
   * Source Mode Register
   */
  struct SMR[%s]
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRIOR    = regbits< type,  0,  3 >;  /**< Priority Level         */
    using SRCTYPE  = regbits< type,  5,  2 >;  /**< Interrupt Source Type  */
  };

  /**
   * Source Vector Register
   */
  struct SVR[%s]
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using VECTOR  = regbits< type,  0, 32 >;  /**< Source Vector  */
  };

  /**
   * Interrupt Vector Register
   */
  struct IVR
  : public reg< uint32_t, base_addr + 0x00000100, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, ro, 0x00000000 >;

    using IRQV  = regbits< type,  0, 32 >;  /**< Interrupt Vector Register  */
  };

  /**
   * FIQ Interrupt Vector Register
   */
  struct FVR
  : public reg< uint32_t, base_addr + 0x00000104, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, ro, 0x00000000 >;

    using FIQV  = regbits< type,  0, 32 >;  /**< FIQ Vector Register  */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, ro, 0x00000000 >;

    using IRQID  = regbits< type,  0,  5 >;  /**< Current Interrupt Identifier  */
  };

  /**
   * Interrupt Pending Register
   */
  struct IPR
  : public reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >;

    using FIQ    = regbits< type,  0,  1 >;  /**< Interrupt Pending  */
    using SYS    = regbits< type,  1,  1 >;  /**< Interrupt Pending  */
    using PID2   = regbits< type,  2,  1 >;  /**< Interrupt Pending  */
    using PID3   = regbits< type,  3,  1 >;  /**< Interrupt Pending  */
    using PID4   = regbits< type,  4,  1 >;  /**< Interrupt Pending  */
    using PID5   = regbits< type,  5,  1 >;  /**< Interrupt Pending  */
    using PID6   = regbits< type,  6,  1 >;  /**< Interrupt Pending  */
    using PID7   = regbits< type,  7,  1 >;  /**< Interrupt Pending  */
    using PID8   = regbits< type,  8,  1 >;  /**< Interrupt Pending  */
    using PID9   = regbits< type,  9,  1 >;  /**< Interrupt Pending  */
    using PID10  = regbits< type, 10,  1 >;  /**< Interrupt Pending  */
    using PID11  = regbits< type, 11,  1 >;  /**< Interrupt Pending  */
    using PID12  = regbits< type, 12,  1 >;  /**< Interrupt Pending  */
    using PID13  = regbits< type, 13,  1 >;  /**< Interrupt Pending  */
    using PID14  = regbits< type, 14,  1 >;  /**< Interrupt Pending  */
    using PID15  = regbits< type, 15,  1 >;  /**< Interrupt Pending  */
    using PID16  = regbits< type, 16,  1 >;  /**< Interrupt Pending  */
    using PID17  = regbits< type, 17,  1 >;  /**< Interrupt Pending  */
    using PID18  = regbits< type, 18,  1 >;  /**< Interrupt Pending  */
    using PID19  = regbits< type, 19,  1 >;  /**< Interrupt Pending  */
    using PID20  = regbits< type, 20,  1 >;  /**< Interrupt Pending  */
    using PID21  = regbits< type, 21,  1 >;  /**< Interrupt Pending  */
    using PID22  = regbits< type, 22,  1 >;  /**< Interrupt Pending  */
    using PID23  = regbits< type, 23,  1 >;  /**< Interrupt Pending  */
    using PID24  = regbits< type, 24,  1 >;  /**< Interrupt Pending  */
    using PID25  = regbits< type, 25,  1 >;  /**< Interrupt Pending  */
    using PID26  = regbits< type, 26,  1 >;  /**< Interrupt Pending  */
    using PID27  = regbits< type, 27,  1 >;  /**< Interrupt Pending  */
    using PID28  = regbits< type, 28,  1 >;  /**< Interrupt Pending  */
    using PID29  = regbits< type, 29,  1 >;  /**< Interrupt Pending  */
    using PID30  = regbits< type, 30,  1 >;  /**< Interrupt Pending  */
    using PID31  = regbits< type, 31,  1 >;  /**< Interrupt Pending  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000110, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, ro, 0x00000000 >;

    using FIQ    = regbits< type,  0,  1 >;  /**< Interrupt Mask  */
    using SYS    = regbits< type,  1,  1 >;  /**< Interrupt Mask  */
    using PID2   = regbits< type,  2,  1 >;  /**< Interrupt Mask  */
    using PID3   = regbits< type,  3,  1 >;  /**< Interrupt Mask  */
    using PID4   = regbits< type,  4,  1 >;  /**< Interrupt Mask  */
    using PID5   = regbits< type,  5,  1 >;  /**< Interrupt Mask  */
    using PID6   = regbits< type,  6,  1 >;  /**< Interrupt Mask  */
    using PID7   = regbits< type,  7,  1 >;  /**< Interrupt Mask  */
    using PID8   = regbits< type,  8,  1 >;  /**< Interrupt Mask  */
    using PID9   = regbits< type,  9,  1 >;  /**< Interrupt Mask  */
    using PID10  = regbits< type, 10,  1 >;  /**< Interrupt Mask  */
    using PID11  = regbits< type, 11,  1 >;  /**< Interrupt Mask  */
    using PID12  = regbits< type, 12,  1 >;  /**< Interrupt Mask  */
    using PID13  = regbits< type, 13,  1 >;  /**< Interrupt Mask  */
    using PID14  = regbits< type, 14,  1 >;  /**< Interrupt Mask  */
    using PID15  = regbits< type, 15,  1 >;  /**< Interrupt Mask  */
    using PID16  = regbits< type, 16,  1 >;  /**< Interrupt Mask  */
    using PID17  = regbits< type, 17,  1 >;  /**< Interrupt Mask  */
    using PID18  = regbits< type, 18,  1 >;  /**< Interrupt Mask  */
    using PID19  = regbits< type, 19,  1 >;  /**< Interrupt Mask  */
    using PID20  = regbits< type, 20,  1 >;  /**< Interrupt Mask  */
    using PID21  = regbits< type, 21,  1 >;  /**< Interrupt Mask  */
    using PID22  = regbits< type, 22,  1 >;  /**< Interrupt Mask  */
    using PID23  = regbits< type, 23,  1 >;  /**< Interrupt Mask  */
    using PID24  = regbits< type, 24,  1 >;  /**< Interrupt Mask  */
    using PID25  = regbits< type, 25,  1 >;  /**< Interrupt Mask  */
    using PID26  = regbits< type, 26,  1 >;  /**< Interrupt Mask  */
    using PID27  = regbits< type, 27,  1 >;  /**< Interrupt Mask  */
    using PID28  = regbits< type, 28,  1 >;  /**< Interrupt Mask  */
    using PID29  = regbits< type, 29,  1 >;  /**< Interrupt Mask  */
    using PID30  = regbits< type, 30,  1 >;  /**< Interrupt Mask  */
    using PID31  = regbits< type, 31,  1 >;  /**< Interrupt Mask  */
  };

  /**
   * Core Interrupt Status Register
   */
  struct CISR
  : public reg< uint32_t, base_addr + 0x00000114, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, ro, 0x00000000 >;

    using NFIQ  = regbits< type,  0,  1 >;  /**< NFIQ Status  */
    using NIRQ  = regbits< type,  1,  1 >;  /**< NIRQ Status  */
  };

  /**
   * Interrupt Enable Command Register
   */
  struct IECR
  : public reg< uint32_t, base_addr + 0x00000120, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, wo, 0 >;

    using FIQ    = regbits< type,  0,  1 >;  /**< Interrupt Enable  */
    using SYS    = regbits< type,  1,  1 >;  /**< Interrupt Enable  */
    using PID2   = regbits< type,  2,  1 >;  /**< Interrupt Enable  */
    using PID3   = regbits< type,  3,  1 >;  /**< Interrupt Enable  */
    using PID4   = regbits< type,  4,  1 >;  /**< Interrupt Enable  */
    using PID5   = regbits< type,  5,  1 >;  /**< Interrupt Enable  */
    using PID6   = regbits< type,  6,  1 >;  /**< Interrupt Enable  */
    using PID7   = regbits< type,  7,  1 >;  /**< Interrupt Enable  */
    using PID8   = regbits< type,  8,  1 >;  /**< Interrupt Enable  */
    using PID9   = regbits< type,  9,  1 >;  /**< Interrupt Enable  */
    using PID10  = regbits< type, 10,  1 >;  /**< Interrupt Enable  */
    using PID11  = regbits< type, 11,  1 >;  /**< Interrupt Enable  */
    using PID12  = regbits< type, 12,  1 >;  /**< Interrupt Enable  */
    using PID13  = regbits< type, 13,  1 >;  /**< Interrupt Enable  */
    using PID14  = regbits< type, 14,  1 >;  /**< Interrupt Enable  */
    using PID15  = regbits< type, 15,  1 >;  /**< Interrupt Enable  */
    using PID16  = regbits< type, 16,  1 >;  /**< Interrupt Enable  */
    using PID17  = regbits< type, 17,  1 >;  /**< Interrupt Enable  */
    using PID18  = regbits< type, 18,  1 >;  /**< Interrupt Enable  */
    using PID19  = regbits< type, 19,  1 >;  /**< Interrupt Enable  */
    using PID20  = regbits< type, 20,  1 >;  /**< Interrupt Enable  */
    using PID21  = regbits< type, 21,  1 >;  /**< Interrupt Enable  */
    using PID22  = regbits< type, 22,  1 >;  /**< Interrupt Enable  */
    using PID23  = regbits< type, 23,  1 >;  /**< Interrupt Enable  */
    using PID24  = regbits< type, 24,  1 >;  /**< Interrupt Enable  */
    using PID25  = regbits< type, 25,  1 >;  /**< Interrupt Enable  */
    using PID26  = regbits< type, 26,  1 >;  /**< Interrupt Enable  */
    using PID27  = regbits< type, 27,  1 >;  /**< Interrupt Enable  */
    using PID28  = regbits< type, 28,  1 >;  /**< Interrupt Enable  */
    using PID29  = regbits< type, 29,  1 >;  /**< Interrupt Enable  */
    using PID30  = regbits< type, 30,  1 >;  /**< Interrupt Enable  */
    using PID31  = regbits< type, 31,  1 >;  /**< Interrupt Enable  */
  };

  /**
   * Interrupt Disable Command Register
   */
  struct IDCR
  : public reg< uint32_t, base_addr + 0x00000124, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, wo, 0 >;

    using FIQ    = regbits< type,  0,  1 >;  /**< Interrupt Disable  */
    using SYS    = regbits< type,  1,  1 >;  /**< Interrupt Disable  */
    using PID2   = regbits< type,  2,  1 >;  /**< Interrupt Disable  */
    using PID3   = regbits< type,  3,  1 >;  /**< Interrupt Disable  */
    using PID4   = regbits< type,  4,  1 >;  /**< Interrupt Disable  */
    using PID5   = regbits< type,  5,  1 >;  /**< Interrupt Disable  */
    using PID6   = regbits< type,  6,  1 >;  /**< Interrupt Disable  */
    using PID7   = regbits< type,  7,  1 >;  /**< Interrupt Disable  */
    using PID8   = regbits< type,  8,  1 >;  /**< Interrupt Disable  */
    using PID9   = regbits< type,  9,  1 >;  /**< Interrupt Disable  */
    using PID10  = regbits< type, 10,  1 >;  /**< Interrupt Disable  */
    using PID11  = regbits< type, 11,  1 >;  /**< Interrupt Disable  */
    using PID12  = regbits< type, 12,  1 >;  /**< Interrupt Disable  */
    using PID13  = regbits< type, 13,  1 >;  /**< Interrupt Disable  */
    using PID14  = regbits< type, 14,  1 >;  /**< Interrupt Disable  */
    using PID15  = regbits< type, 15,  1 >;  /**< Interrupt Disable  */
    using PID16  = regbits< type, 16,  1 >;  /**< Interrupt Disable  */
    using PID17  = regbits< type, 17,  1 >;  /**< Interrupt Disable  */
    using PID18  = regbits< type, 18,  1 >;  /**< Interrupt Disable  */
    using PID19  = regbits< type, 19,  1 >;  /**< Interrupt Disable  */
    using PID20  = regbits< type, 20,  1 >;  /**< Interrupt Disable  */
    using PID21  = regbits< type, 21,  1 >;  /**< Interrupt Disable  */
    using PID22  = regbits< type, 22,  1 >;  /**< Interrupt Disable  */
    using PID23  = regbits< type, 23,  1 >;  /**< Interrupt Disable  */
    using PID24  = regbits< type, 24,  1 >;  /**< Interrupt Disable  */
    using PID25  = regbits< type, 25,  1 >;  /**< Interrupt Disable  */
    using PID26  = regbits< type, 26,  1 >;  /**< Interrupt Disable  */
    using PID27  = regbits< type, 27,  1 >;  /**< Interrupt Disable  */
    using PID28  = regbits< type, 28,  1 >;  /**< Interrupt Disable  */
    using PID29  = regbits< type, 29,  1 >;  /**< Interrupt Disable  */
    using PID30  = regbits< type, 30,  1 >;  /**< Interrupt Disable  */
    using PID31  = regbits< type, 31,  1 >;  /**< Interrupt Disable  */
  };

  /**
   * Interrupt Clear Command Register
   */
  struct ICCR
  : public reg< uint32_t, base_addr + 0x00000128, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, wo, 0 >;

    using FIQ    = regbits< type,  0,  1 >;  /**< Interrupt Clear  */
    using SYS    = regbits< type,  1,  1 >;  /**< Interrupt Clear  */
    using PID2   = regbits< type,  2,  1 >;  /**< Interrupt Clear  */
    using PID3   = regbits< type,  3,  1 >;  /**< Interrupt Clear  */
    using PID4   = regbits< type,  4,  1 >;  /**< Interrupt Clear  */
    using PID5   = regbits< type,  5,  1 >;  /**< Interrupt Clear  */
    using PID6   = regbits< type,  6,  1 >;  /**< Interrupt Clear  */
    using PID7   = regbits< type,  7,  1 >;  /**< Interrupt Clear  */
    using PID8   = regbits< type,  8,  1 >;  /**< Interrupt Clear  */
    using PID9   = regbits< type,  9,  1 >;  /**< Interrupt Clear  */
    using PID10  = regbits< type, 10,  1 >;  /**< Interrupt Clear  */
    using PID11  = regbits< type, 11,  1 >;  /**< Interrupt Clear  */
    using PID12  = regbits< type, 12,  1 >;  /**< Interrupt Clear  */
    using PID13  = regbits< type, 13,  1 >;  /**< Interrupt Clear  */
    using PID14  = regbits< type, 14,  1 >;  /**< Interrupt Clear  */
    using PID15  = regbits< type, 15,  1 >;  /**< Interrupt Clear  */
    using PID16  = regbits< type, 16,  1 >;  /**< Interrupt Clear  */
    using PID17  = regbits< type, 17,  1 >;  /**< Interrupt Clear  */
    using PID18  = regbits< type, 18,  1 >;  /**< Interrupt Clear  */
    using PID19  = regbits< type, 19,  1 >;  /**< Interrupt Clear  */
    using PID20  = regbits< type, 20,  1 >;  /**< Interrupt Clear  */
    using PID21  = regbits< type, 21,  1 >;  /**< Interrupt Clear  */
    using PID22  = regbits< type, 22,  1 >;  /**< Interrupt Clear  */
    using PID23  = regbits< type, 23,  1 >;  /**< Interrupt Clear  */
    using PID24  = regbits< type, 24,  1 >;  /**< Interrupt Clear  */
    using PID25  = regbits< type, 25,  1 >;  /**< Interrupt Clear  */
    using PID26  = regbits< type, 26,  1 >;  /**< Interrupt Clear  */
    using PID27  = regbits< type, 27,  1 >;  /**< Interrupt Clear  */
    using PID28  = regbits< type, 28,  1 >;  /**< Interrupt Clear  */
    using PID29  = regbits< type, 29,  1 >;  /**< Interrupt Clear  */
    using PID30  = regbits< type, 30,  1 >;  /**< Interrupt Clear  */
    using PID31  = regbits< type, 31,  1 >;  /**< Interrupt Clear  */
  };

  /**
   * Interrupt Set Command Register
   */
  struct ISCR
  : public reg< uint32_t, base_addr + 0x0000012c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000012c, wo, 0 >;

    using FIQ    = regbits< type,  0,  1 >;  /**< Interrupt Set  */
    using SYS    = regbits< type,  1,  1 >;  /**< Interrupt Set  */
    using PID2   = regbits< type,  2,  1 >;  /**< Interrupt Set  */
    using PID3   = regbits< type,  3,  1 >;  /**< Interrupt Set  */
    using PID4   = regbits< type,  4,  1 >;  /**< Interrupt Set  */
    using PID5   = regbits< type,  5,  1 >;  /**< Interrupt Set  */
    using PID6   = regbits< type,  6,  1 >;  /**< Interrupt Set  */
    using PID7   = regbits< type,  7,  1 >;  /**< Interrupt Set  */
    using PID8   = regbits< type,  8,  1 >;  /**< Interrupt Set  */
    using PID9   = regbits< type,  9,  1 >;  /**< Interrupt Set  */
    using PID10  = regbits< type, 10,  1 >;  /**< Interrupt Set  */
    using PID11  = regbits< type, 11,  1 >;  /**< Interrupt Set  */
    using PID12  = regbits< type, 12,  1 >;  /**< Interrupt Set  */
    using PID13  = regbits< type, 13,  1 >;  /**< Interrupt Set  */
    using PID14  = regbits< type, 14,  1 >;  /**< Interrupt Set  */
    using PID15  = regbits< type, 15,  1 >;  /**< Interrupt Set  */
    using PID16  = regbits< type, 16,  1 >;  /**< Interrupt Set  */
    using PID17  = regbits< type, 17,  1 >;  /**< Interrupt Set  */
    using PID18  = regbits< type, 18,  1 >;  /**< Interrupt Set  */
    using PID19  = regbits< type, 19,  1 >;  /**< Interrupt Set  */
    using PID20  = regbits< type, 20,  1 >;  /**< Interrupt Set  */
    using PID21  = regbits< type, 21,  1 >;  /**< Interrupt Set  */
    using PID22  = regbits< type, 22,  1 >;  /**< Interrupt Set  */
    using PID23  = regbits< type, 23,  1 >;  /**< Interrupt Set  */
    using PID24  = regbits< type, 24,  1 >;  /**< Interrupt Set  */
    using PID25  = regbits< type, 25,  1 >;  /**< Interrupt Set  */
    using PID26  = regbits< type, 26,  1 >;  /**< Interrupt Set  */
    using PID27  = regbits< type, 27,  1 >;  /**< Interrupt Set  */
    using PID28  = regbits< type, 28,  1 >;  /**< Interrupt Set  */
    using PID29  = regbits< type, 29,  1 >;  /**< Interrupt Set  */
    using PID30  = regbits< type, 30,  1 >;  /**< Interrupt Set  */
    using PID31  = regbits< type, 31,  1 >;  /**< Interrupt Set  */
  };

  /**
   * End of Interrupt Command Register
   */
  struct EOICR
  : public reg< uint32_t, base_addr + 0x00000130, wo, 0 >
  {
  };

  /**
   * Spurious Interrupt Vector Register
   */
  struct SPU
  : public reg< uint32_t, base_addr + 0x00000134, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, rw, 0x00000000 >;

    using SIVR  = regbits< type,  0, 32 >;  /**< Spurious Interrupt Vector Register  */
  };

  /**
   * Debug Control Register
   */
  struct DCR
  : public reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >;

    using PROT  = regbits< type,  0,  1 >;  /**< Protection Mode  */
    using GMSK  = regbits< type,  1,  1 >;  /**< General Mask     */
  };

  /**
   * Fast Forcing Enable Register
   */
  struct FFER
  : public reg< uint32_t, base_addr + 0x00000140, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000140, wo, 0 >;

    using SYS    = regbits< type,  1,  1 >;  /**< Fast Forcing Enable  */
    using PID2   = regbits< type,  2,  1 >;  /**< Fast Forcing Enable  */
    using PID3   = regbits< type,  3,  1 >;  /**< Fast Forcing Enable  */
    using PID4   = regbits< type,  4,  1 >;  /**< Fast Forcing Enable  */
    using PID5   = regbits< type,  5,  1 >;  /**< Fast Forcing Enable  */
    using PID6   = regbits< type,  6,  1 >;  /**< Fast Forcing Enable  */
    using PID7   = regbits< type,  7,  1 >;  /**< Fast Forcing Enable  */
    using PID8   = regbits< type,  8,  1 >;  /**< Fast Forcing Enable  */
    using PID9   = regbits< type,  9,  1 >;  /**< Fast Forcing Enable  */
    using PID10  = regbits< type, 10,  1 >;  /**< Fast Forcing Enable  */
    using PID11  = regbits< type, 11,  1 >;  /**< Fast Forcing Enable  */
    using PID12  = regbits< type, 12,  1 >;  /**< Fast Forcing Enable  */
    using PID13  = regbits< type, 13,  1 >;  /**< Fast Forcing Enable  */
    using PID14  = regbits< type, 14,  1 >;  /**< Fast Forcing Enable  */
    using PID15  = regbits< type, 15,  1 >;  /**< Fast Forcing Enable  */
    using PID16  = regbits< type, 16,  1 >;  /**< Fast Forcing Enable  */
    using PID17  = regbits< type, 17,  1 >;  /**< Fast Forcing Enable  */
    using PID18  = regbits< type, 18,  1 >;  /**< Fast Forcing Enable  */
    using PID19  = regbits< type, 19,  1 >;  /**< Fast Forcing Enable  */
    using PID20  = regbits< type, 20,  1 >;  /**< Fast Forcing Enable  */
    using PID21  = regbits< type, 21,  1 >;  /**< Fast Forcing Enable  */
    using PID22  = regbits< type, 22,  1 >;  /**< Fast Forcing Enable  */
    using PID23  = regbits< type, 23,  1 >;  /**< Fast Forcing Enable  */
    using PID24  = regbits< type, 24,  1 >;  /**< Fast Forcing Enable  */
    using PID25  = regbits< type, 25,  1 >;  /**< Fast Forcing Enable  */
    using PID26  = regbits< type, 26,  1 >;  /**< Fast Forcing Enable  */
    using PID27  = regbits< type, 27,  1 >;  /**< Fast Forcing Enable  */
    using PID28  = regbits< type, 28,  1 >;  /**< Fast Forcing Enable  */
    using PID29  = regbits< type, 29,  1 >;  /**< Fast Forcing Enable  */
    using PID30  = regbits< type, 30,  1 >;  /**< Fast Forcing Enable  */
    using PID31  = regbits< type, 31,  1 >;  /**< Fast Forcing Enable  */
  };

  /**
   * Fast Forcing Disable Register
   */
  struct FFDR
  : public reg< uint32_t, base_addr + 0x00000144, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, wo, 0 >;

    using SYS    = regbits< type,  1,  1 >;  /**< Fast Forcing Disable  */
    using PID2   = regbits< type,  2,  1 >;  /**< Fast Forcing Disable  */
    using PID3   = regbits< type,  3,  1 >;  /**< Fast Forcing Disable  */
    using PID4   = regbits< type,  4,  1 >;  /**< Fast Forcing Disable  */
    using PID5   = regbits< type,  5,  1 >;  /**< Fast Forcing Disable  */
    using PID6   = regbits< type,  6,  1 >;  /**< Fast Forcing Disable  */
    using PID7   = regbits< type,  7,  1 >;  /**< Fast Forcing Disable  */
    using PID8   = regbits< type,  8,  1 >;  /**< Fast Forcing Disable  */
    using PID9   = regbits< type,  9,  1 >;  /**< Fast Forcing Disable  */
    using PID10  = regbits< type, 10,  1 >;  /**< Fast Forcing Disable  */
    using PID11  = regbits< type, 11,  1 >;  /**< Fast Forcing Disable  */
    using PID12  = regbits< type, 12,  1 >;  /**< Fast Forcing Disable  */
    using PID13  = regbits< type, 13,  1 >;  /**< Fast Forcing Disable  */
    using PID14  = regbits< type, 14,  1 >;  /**< Fast Forcing Disable  */
    using PID15  = regbits< type, 15,  1 >;  /**< Fast Forcing Disable  */
    using PID16  = regbits< type, 16,  1 >;  /**< Fast Forcing Disable  */
    using PID17  = regbits< type, 17,  1 >;  /**< Fast Forcing Disable  */
    using PID18  = regbits< type, 18,  1 >;  /**< Fast Forcing Disable  */
    using PID19  = regbits< type, 19,  1 >;  /**< Fast Forcing Disable  */
    using PID20  = regbits< type, 20,  1 >;  /**< Fast Forcing Disable  */
    using PID21  = regbits< type, 21,  1 >;  /**< Fast Forcing Disable  */
    using PID22  = regbits< type, 22,  1 >;  /**< Fast Forcing Disable  */
    using PID23  = regbits< type, 23,  1 >;  /**< Fast Forcing Disable  */
    using PID24  = regbits< type, 24,  1 >;  /**< Fast Forcing Disable  */
    using PID25  = regbits< type, 25,  1 >;  /**< Fast Forcing Disable  */
    using PID26  = regbits< type, 26,  1 >;  /**< Fast Forcing Disable  */
    using PID27  = regbits< type, 27,  1 >;  /**< Fast Forcing Disable  */
    using PID28  = regbits< type, 28,  1 >;  /**< Fast Forcing Disable  */
    using PID29  = regbits< type, 29,  1 >;  /**< Fast Forcing Disable  */
    using PID30  = regbits< type, 30,  1 >;  /**< Fast Forcing Disable  */
    using PID31  = regbits< type, 31,  1 >;  /**< Fast Forcing Disable  */
  };

  /**
   * Fast Forcing Status Register
   */
  struct FFSR
  : public reg< uint32_t, base_addr + 0x00000148, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000148, ro, 0x00000000 >;

    using SYS    = regbits< type,  1,  1 >;  /**< Fast Forcing Status  */
    using PID2   = regbits< type,  2,  1 >;  /**< Fast Forcing Status  */
    using PID3   = regbits< type,  3,  1 >;  /**< Fast Forcing Status  */
    using PID4   = regbits< type,  4,  1 >;  /**< Fast Forcing Status  */
    using PID5   = regbits< type,  5,  1 >;  /**< Fast Forcing Status  */
    using PID6   = regbits< type,  6,  1 >;  /**< Fast Forcing Status  */
    using PID7   = regbits< type,  7,  1 >;  /**< Fast Forcing Status  */
    using PID8   = regbits< type,  8,  1 >;  /**< Fast Forcing Status  */
    using PID9   = regbits< type,  9,  1 >;  /**< Fast Forcing Status  */
    using PID10  = regbits< type, 10,  1 >;  /**< Fast Forcing Status  */
    using PID11  = regbits< type, 11,  1 >;  /**< Fast Forcing Status  */
    using PID12  = regbits< type, 12,  1 >;  /**< Fast Forcing Status  */
    using PID13  = regbits< type, 13,  1 >;  /**< Fast Forcing Status  */
    using PID14  = regbits< type, 14,  1 >;  /**< Fast Forcing Status  */
    using PID15  = regbits< type, 15,  1 >;  /**< Fast Forcing Status  */
    using PID16  = regbits< type, 16,  1 >;  /**< Fast Forcing Status  */
    using PID17  = regbits< type, 17,  1 >;  /**< Fast Forcing Status  */
    using PID18  = regbits< type, 18,  1 >;  /**< Fast Forcing Status  */
    using PID19  = regbits< type, 19,  1 >;  /**< Fast Forcing Status  */
    using PID20  = regbits< type, 20,  1 >;  /**< Fast Forcing Status  */
    using PID21  = regbits< type, 21,  1 >;  /**< Fast Forcing Status  */
    using PID22  = regbits< type, 22,  1 >;  /**< Fast Forcing Status  */
    using PID23  = regbits< type, 23,  1 >;  /**< Fast Forcing Status  */
    using PID24  = regbits< type, 24,  1 >;  /**< Fast Forcing Status  */
    using PID25  = regbits< type, 25,  1 >;  /**< Fast Forcing Status  */
    using PID26  = regbits< type, 26,  1 >;  /**< Fast Forcing Status  */
    using PID27  = regbits< type, 27,  1 >;  /**< Fast Forcing Status  */
    using PID28  = regbits< type, 28,  1 >;  /**< Fast Forcing Status  */
    using PID29  = regbits< type, 29,  1 >;  /**< Fast Forcing Status  */
    using PID30  = regbits< type, 30,  1 >;  /**< Fast Forcing Status  */
    using PID31  = regbits< type, 31,  1 >;  /**< Fast Forcing Status  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AIC_HPP_INCLUDED
