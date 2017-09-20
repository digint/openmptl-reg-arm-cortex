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
//  Import from CMSIS-SVD: "Freescale/MK30DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK30DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK30DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AXBS_HPP_INCLUDED
#define ARCH_REG_AXBS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Crossbar switch
 */
struct AXBS
{
  static constexpr reg_addr_t base_addr = 0x40004000;

  /**
   * Priority Registers Slave
   */
  struct PRS%s
  : public reg< uint32_t, base_addr + 0, rw, 0x76543210 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x76543210 >;

    using M0  = regbits< type,  0,  3 >;  /**< Master 0 priority. Sets the arbitration priority for this port on the associated slave port.  */
    using M1  = regbits< type,  4,  3 >;  /**< Master 1 priority. Sets the arbitration priority for this port on the associated slave port.  */
    using M2  = regbits< type,  8,  3 >;  /**< Master 2 priority. Sets the arbitration priority for this port on the associated slave port.  */
    using M3  = regbits< type, 12,  3 >;  /**< Master 3 priority. Sets the arbitration priority for this port on the associated slave port.  */
    using M4  = regbits< type, 16,  3 >;  /**< Master 4 priority. Sets the arbitration priority for this port on the associated slave port.  */
    using M5  = regbits< type, 20,  3 >;  /**< Master 5 priority. Sets the arbitration priority for this port on the associated slave port.  */
  };

  /**
   * Control Register
   */
  struct CRS%s
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using PARK  = regbits< type,  0,  3 >;  /**< Park               */
    using PCTL  = regbits< type,  4,  2 >;  /**< Parking control    */
    using ARB   = regbits< type,  8,  2 >;  /**< Arbitration mode   */
    using HLP   = regbits< type, 30,  1 >;  /**< Halt low priority  */
    using RO    = regbits< type, 31,  1 >;  /**< Read only          */
  };

  /**
   * Master General Purpose Control Register
   */
  struct MGPCR0
  : public reg< uint32_t, base_addr + 0x800, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0 >;

    using AULB  = regbits< type,  0,  3 >;  /**< Arbitrates on undefined length bursts  */
  };

  /**
   * Master General Purpose Control Register
   */
  struct MGPCR1
  : public reg< uint32_t, base_addr + 0x900, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x900, rw, 0 >;

    using AULB  = regbits< type,  0,  3 >;  /**< Arbitrates on undefined length bursts  */
  };

  /**
   * Master General Purpose Control Register
   */
  struct MGPCR2
  : public reg< uint32_t, base_addr + 0xa00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa00, rw, 0 >;

    using AULB  = regbits< type,  0,  3 >;  /**< Arbitrates on undefined length bursts  */
  };

  /**
   * Master General Purpose Control Register
   */
  struct MGPCR5
  : public reg< uint32_t, base_addr + 0xd00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd00, rw, 0 >;

    using AULB  = regbits< type,  0,  3 >;  /**< Arbitrates on undefined length bursts  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AXBS_HPP_INCLUDED
