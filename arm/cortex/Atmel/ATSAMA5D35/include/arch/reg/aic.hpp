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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D35.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D35
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D35 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, dual Ethernet, dual CAN, security (refer to http://www.atmel.com/devices/SAMA5D35.aspx for more)
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
   * Source Select Register
   */
  struct SSR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using INTSEL  = regbits< type,  0,  7 >;  /**< Interrupt line Selection  */
  };

  /**
   * Source Mode Register
   */
  struct SMR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using PRIOR    = regbits< type,  0,  3 >;  /**< Priority Level         */
    using SRCTYPE  = regbits< type,  5,  2 >;  /**< Interrupt Source Type  */
  };

  /**
   * Source Vector Register
   */
  struct SVR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using VECTOR  = regbits< type,  0, 32 >;  /**< Source Vector  */
  };

  /**
   * Interrupt Vector Register
   */
  struct IVR
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using IRQV  = regbits< type,  0, 32 >;  /**< Interrupt Vector Register  */
  };

  /**
   * FIQ Interrupt Vector Register
   */
  struct FVR
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >;

    using FIQV  = regbits< type,  0, 32 >;  /**< FIQ Vector Register  */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using IRQID  = regbits< type,  0,  7 >;  /**< Current Interrupt Identifier  */
  };

  /**
   * Interrupt Pending Register 0
   */
  struct IPR0
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

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
   * Interrupt Pending Register 1
   */
  struct IPR1
  : public reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >;

    using PID32  = regbits< type,  0,  1 >;  /**< Interrupt Pending  */
    using PID33  = regbits< type,  1,  1 >;  /**< Interrupt Pending  */
    using PID34  = regbits< type,  2,  1 >;  /**< Interrupt Pending  */
    using PID35  = regbits< type,  3,  1 >;  /**< Interrupt Pending  */
    using PID36  = regbits< type,  4,  1 >;  /**< Interrupt Pending  */
    using PID37  = regbits< type,  5,  1 >;  /**< Interrupt Pending  */
    using PID38  = regbits< type,  6,  1 >;  /**< Interrupt Pending  */
    using PID39  = regbits< type,  7,  1 >;  /**< Interrupt Pending  */
    using PID40  = regbits< type,  8,  1 >;  /**< Interrupt Pending  */
    using PID41  = regbits< type,  9,  1 >;  /**< Interrupt Pending  */
    using PID42  = regbits< type, 10,  1 >;  /**< Interrupt Pending  */
    using PID43  = regbits< type, 11,  1 >;  /**< Interrupt Pending  */
    using PID44  = regbits< type, 12,  1 >;  /**< Interrupt Pending  */
    using PID45  = regbits< type, 13,  1 >;  /**< Interrupt Pending  */
    using PID46  = regbits< type, 14,  1 >;  /**< Interrupt Pending  */
    using PID47  = regbits< type, 15,  1 >;  /**< Interrupt Pending  */
    using PID48  = regbits< type, 16,  1 >;  /**< Interrupt Pending  */
    using PID49  = regbits< type, 17,  1 >;  /**< Interrupt Pending  */
    using PID50  = regbits< type, 18,  1 >;  /**< Interrupt Pending  */
    using PID51  = regbits< type, 19,  1 >;  /**< Interrupt Pending  */
    using PID52  = regbits< type, 20,  1 >;  /**< Interrupt Pending  */
    using PID53  = regbits< type, 21,  1 >;  /**< Interrupt Pending  */
    using PID54  = regbits< type, 22,  1 >;  /**< Interrupt Pending  */
    using PID55  = regbits< type, 23,  1 >;  /**< Interrupt Pending  */
    using PID56  = regbits< type, 24,  1 >;  /**< Interrupt Pending  */
    using PID57  = regbits< type, 25,  1 >;  /**< Interrupt Pending  */
    using PID58  = regbits< type, 26,  1 >;  /**< Interrupt Pending  */
    using PID59  = regbits< type, 27,  1 >;  /**< Interrupt Pending  */
    using PID60  = regbits< type, 28,  1 >;  /**< Interrupt Pending  */
    using PID61  = regbits< type, 29,  1 >;  /**< Interrupt Pending  */
    using PID62  = regbits< type, 30,  1 >;  /**< Interrupt Pending  */
    using PID63  = regbits< type, 31,  1 >;  /**< Interrupt Pending  */
  };

  /**
   * Interrupt Pending Register 2
   */
  struct IPR2
  : public reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >;

    using PID64  = regbits< type,  0,  1 >;  /**< Interrupt Pending  */
    using PID65  = regbits< type,  1,  1 >;  /**< Interrupt Pending  */
    using PID66  = regbits< type,  2,  1 >;  /**< Interrupt Pending  */
    using PID67  = regbits< type,  3,  1 >;  /**< Interrupt Pending  */
    using PID68  = regbits< type,  4,  1 >;  /**< Interrupt Pending  */
    using PID69  = regbits< type,  5,  1 >;  /**< Interrupt Pending  */
    using PID70  = regbits< type,  6,  1 >;  /**< Interrupt Pending  */
    using PID71  = regbits< type,  7,  1 >;  /**< Interrupt Pending  */
    using PID72  = regbits< type,  8,  1 >;  /**< Interrupt Pending  */
    using PID73  = regbits< type,  9,  1 >;  /**< Interrupt Pending  */
    using PID74  = regbits< type, 10,  1 >;  /**< Interrupt Pending  */
    using PID75  = regbits< type, 11,  1 >;  /**< Interrupt Pending  */
    using PID76  = regbits< type, 12,  1 >;  /**< Interrupt Pending  */
    using PID77  = regbits< type, 13,  1 >;  /**< Interrupt Pending  */
    using PID78  = regbits< type, 14,  1 >;  /**< Interrupt Pending  */
    using PID79  = regbits< type, 15,  1 >;  /**< Interrupt Pending  */
    using PID80  = regbits< type, 16,  1 >;  /**< Interrupt Pending  */
    using PID81  = regbits< type, 17,  1 >;  /**< Interrupt Pending  */
    using PID82  = regbits< type, 18,  1 >;  /**< Interrupt Pending  */
    using PID83  = regbits< type, 19,  1 >;  /**< Interrupt Pending  */
    using PID84  = regbits< type, 20,  1 >;  /**< Interrupt Pending  */
    using PID85  = regbits< type, 21,  1 >;  /**< Interrupt Pending  */
    using PID86  = regbits< type, 22,  1 >;  /**< Interrupt Pending  */
    using PID87  = regbits< type, 23,  1 >;  /**< Interrupt Pending  */
    using PID88  = regbits< type, 24,  1 >;  /**< Interrupt Pending  */
    using PID89  = regbits< type, 25,  1 >;  /**< Interrupt Pending  */
    using PID90  = regbits< type, 26,  1 >;  /**< Interrupt Pending  */
    using PID91  = regbits< type, 27,  1 >;  /**< Interrupt Pending  */
    using PID92  = regbits< type, 28,  1 >;  /**< Interrupt Pending  */
    using PID93  = regbits< type, 29,  1 >;  /**< Interrupt Pending  */
    using PID94  = regbits< type, 30,  1 >;  /**< Interrupt Pending  */
    using PID95  = regbits< type, 31,  1 >;  /**< Interrupt Pending  */
  };

  /**
   * Interrupt Pending Register 3
   */
  struct IPR3
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using PID96   = regbits< type,  0,  1 >;  /**< Interrupt Pending  */
    using PID97   = regbits< type,  1,  1 >;  /**< Interrupt Pending  */
    using PID98   = regbits< type,  2,  1 >;  /**< Interrupt Pending  */
    using PID99   = regbits< type,  3,  1 >;  /**< Interrupt Pending  */
    using PID100  = regbits< type,  4,  1 >;  /**< Interrupt Pending  */
    using PID101  = regbits< type,  5,  1 >;  /**< Interrupt Pending  */
    using PID102  = regbits< type,  6,  1 >;  /**< Interrupt Pending  */
    using PID103  = regbits< type,  7,  1 >;  /**< Interrupt Pending  */
    using PID104  = regbits< type,  8,  1 >;  /**< Interrupt Pending  */
    using PID105  = regbits< type,  9,  1 >;  /**< Interrupt Pending  */
    using PID106  = regbits< type, 10,  1 >;  /**< Interrupt Pending  */
    using PID107  = regbits< type, 11,  1 >;  /**< Interrupt Pending  */
    using PID108  = regbits< type, 12,  1 >;  /**< Interrupt Pending  */
    using PID109  = regbits< type, 13,  1 >;  /**< Interrupt Pending  */
    using PID110  = regbits< type, 14,  1 >;  /**< Interrupt Pending  */
    using PID111  = regbits< type, 15,  1 >;  /**< Interrupt Pending  */
    using PID112  = regbits< type, 16,  1 >;  /**< Interrupt Pending  */
    using PID113  = regbits< type, 17,  1 >;  /**< Interrupt Pending  */
    using PID114  = regbits< type, 18,  1 >;  /**< Interrupt Pending  */
    using PID115  = regbits< type, 19,  1 >;  /**< Interrupt Pending  */
    using PID116  = regbits< type, 20,  1 >;  /**< Interrupt Pending  */
    using PID117  = regbits< type, 21,  1 >;  /**< Interrupt Pending  */
    using PID118  = regbits< type, 22,  1 >;  /**< Interrupt Pending  */
    using PID119  = regbits< type, 23,  1 >;  /**< Interrupt Pending  */
    using PID120  = regbits< type, 24,  1 >;  /**< Interrupt Pending  */
    using PID121  = regbits< type, 25,  1 >;  /**< Interrupt Pending  */
    using PID122  = regbits< type, 26,  1 >;  /**< Interrupt Pending  */
    using PID123  = regbits< type, 27,  1 >;  /**< Interrupt Pending  */
    using PID124  = regbits< type, 28,  1 >;  /**< Interrupt Pending  */
    using PID125  = regbits< type, 29,  1 >;  /**< Interrupt Pending  */
    using PID126  = regbits< type, 30,  1 >;  /**< Interrupt Pending  */
    using PID127  = regbits< type, 31,  1 >;  /**< Interrupt Pending  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using INTM  = regbits< type,  0,  1 >;  /**< Interrupt Mask  */
  };

  /**
   * Core Interrupt Status Register
   */
  struct CISR
  : public reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >;

    using NFIQ  = regbits< type,  0,  1 >;  /**< NFIQ Status  */
    using NIRQ  = regbits< type,  1,  1 >;  /**< NIRQ Status  */
  };

  /**
   * End of Interrupt Command Register
   */
  struct EOICR
  : public reg< uint32_t, base_addr + 0x00000038, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, wo, 0 >;

    using ENDIT  = regbits< type,  0,  1 >;  /**< Interrupt Processing Complete Command  */
  };

  /**
   * Spurious Interrupt Vector Register
   */
  struct SPU
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >;

    using SIVR  = regbits< type,  0, 32 >;  /**< Spurious Interrupt Vector Register  */
  };

  /**
   * Interrupt Enable Command Register
   */
  struct IECR
  : public reg< uint32_t, base_addr + 0x00000040, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, wo, 0 >;

    using INTEN  = regbits< type,  0,  1 >;  /**< Interrupt Enable  */
  };

  /**
   * Interrupt Disable Command Register
   */
  struct IDCR
  : public reg< uint32_t, base_addr + 0x00000044, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, wo, 0 >;

    using INTD  = regbits< type,  0,  1 >;  /**< Interrupt Disable  */
  };

  /**
   * Interrupt Clear Command Register
   */
  struct ICCR
  : public reg< uint32_t, base_addr + 0x00000048, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, wo, 0 >;

    using INTCLR  = regbits< type,  0,  1 >;  /**< Interrupt Clear  */
  };

  /**
   * Interrupt Set Command Register
   */
  struct ISCR
  : public reg< uint32_t, base_addr + 0x0000004c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, wo, 0 >;

    using INTSET  = regbits< type,  0,  1 >;  /**< Interrupt Set  */
  };

  /**
   * Fast Forcing Enable Register
   */
  struct FFER
  : public reg< uint32_t, base_addr + 0x00000050, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, wo, 0 >;

    using FFEN  = regbits< type,  0,  1 >;  /**< Fast Forcing Enable  */
  };

  /**
   * Fast Forcing Disable Register
   */
  struct FFDR
  : public reg< uint32_t, base_addr + 0x00000054, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, wo, 0 >;

    using FFDIS  = regbits< type,  0,  1 >;  /**< Fast Forcing Disable  */
  };

  /**
   * Fast Forcing Status Register
   */
  struct FFSR
  : public reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >;

    using FFS  = regbits< type,  0,  1 >;  /**< Fast Forcing Status  */
  };

  /**
   * Debug Control Register
   */
  struct DCR
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >;

    using PROT  = regbits< type,  0,  1 >;  /**< Protection Mode  */
    using GMSK  = regbits< type,  1,  1 >;  /**< General Mask     */
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Violation Status  */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AIC_HPP_INCLUDED
