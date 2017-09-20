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
//  Import from CMSIS-SVD: "Freescale/MK70F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK70F15
//  series: Kinetis_K
//  version: 1.6
//  description: MK70F15 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PORTA_HPP_INCLUDED
#define ARCH_REG_PORTA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pin Control and Interrupts
 */
struct PORTA
{
  static constexpr reg_addr_t base_addr = 0x40049000;

  /**
   * Pin Control Register n
   */
  struct PCR0
  : public reg< uint32_t, base_addr + 0, rw, 0x742 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x742 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x743 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x743 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x743 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x743 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x743 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x743 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x743 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x743 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0x43 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x43 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR6
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR7
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR8
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR9
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR10
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR11
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR12
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR13
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR14
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR15
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR16
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR17
  : public reg< uint32_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR18
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR19
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR20
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR21
  : public reg< uint32_t, base_addr + 0x54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR22
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR23
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR24
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR25
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR26
  : public reg< uint32_t, base_addr + 0x68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR27
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR28
  : public reg< uint32_t, base_addr + 0x70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR29
  : public reg< uint32_t, base_addr + 0x74, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR30
  : public reg< uint32_t, base_addr + 0x78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Pin Control Register n
   */
  struct PCR31
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0 >;

    using PS    = regbits< type,  0,  1 >;  /**< Pull Select              */
    using PE    = regbits< type,  1,  1 >;  /**< Pull Enable              */
    using SRE   = regbits< type,  2,  1 >;  /**< Slew Rate Enable         */
    using PFE   = regbits< type,  4,  1 >;  /**< Passive Filter Enable    */
    using ODE   = regbits< type,  5,  1 >;  /**< Open Drain Enable        */
    using DSE   = regbits< type,  6,  1 >;  /**< Drive Strength Enable    */
    using MUX   = regbits< type,  8,  3 >;  /**< Pin Mux Control          */
    using LK    = regbits< type, 15,  1 >;  /**< Lock Register            */
    using IRQC  = regbits< type, 16,  4 >;  /**< Interrupt Configuration  */
    using ISF   = regbits< type, 24,  1 >;  /**< Interrupt Status Flag    */
  };

  /**
   * Global Pin Control Low Register
   */
  struct GPCLR
  : public reg< uint32_t, base_addr + 0x80, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, wo, 0 >;

    using GPWD  = regbits< type,  0, 16 >;  /**< Global Pin Write Data    */
    using GPWE  = regbits< type, 16, 16 >;  /**< Global Pin Write Enable  */
  };

  /**
   * Global Pin Control High Register
   */
  struct GPCHR
  : public reg< uint32_t, base_addr + 0x84, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, wo, 0 >;

    using GPWD  = regbits< type,  0, 16 >;  /**< Global Pin Write Data    */
    using GPWE  = regbits< type, 16, 16 >;  /**< Global Pin Write Enable  */
  };

  /**
   * Interrupt Status Flag Register
   */
  struct ISFR
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0 >;

    using ISF  = regbits< type,  0, 32 >;  /**< Interrupt Status Flag  */
  };

  /**
   * Digital Filter Enable Register
   */
  struct DFER
  : public reg< uint32_t, base_addr + 0xc0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0 >;

    using DFE  = regbits< type,  0, 32 >;  /**< Digital Filter Enable  */
  };

  /**
   * Digital Filter Clock Register
   */
  struct DFCR
  : public reg< uint32_t, base_addr + 0xc4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0 >;

    using CS  = regbits< type,  0,  1 >;  /**< Clock Source  */
  };

  /**
   * Digital Filter Width Register
   */
  struct DFWR
  : public reg< uint32_t, base_addr + 0xc8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0 >;

    using FILT  = regbits< type,  0,  5 >;  /**< Filter Length  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PORTA_HPP_INCLUDED
