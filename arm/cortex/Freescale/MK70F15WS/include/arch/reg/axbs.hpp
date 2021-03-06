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
//  Import from CMSIS-SVD: "Freescale/MK70F15WS.svd"
//
//  name: MK70F15WS
//  version: 1.6
//  description: MK70F15WS Freescale Microcontroller
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

    using M0        = regbits< type,  0,  3 >;  /**< Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.  */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available                                                                      */
    using M1        = regbits< type,  4,  3 >;  /**< Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.  */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available                                                                      */
    using M2        = regbits< type,  8,  3 >;  /**< Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.  */
    using RESERVED  = regbits< type, 11,  1 >;  /**< no description available                                                                      */
    using M3        = regbits< type, 12,  3 >;  /**< Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.  */
    using RESERVED  = regbits< type, 15,  1 >;  /**< no description available                                                                      */
    using M4        = regbits< type, 16,  3 >;  /**< Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.  */
    using RESERVED  = regbits< type, 19,  1 >;  /**< no description available                                                                      */
    using M5        = regbits< type, 20,  3 >;  /**< Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.  */
    using RESERVED  = regbits< type, 23,  1 >;  /**< no description available                                                                      */
    using M6        = regbits< type, 24,  3 >;  /**< Master 6 Priority. Sets the arbitration priority for this port on the associated slave port.  */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available                                                                      */
    using M7        = regbits< type, 28,  3 >;  /**< Master 7 Priority. Sets the arbitration priority for this port on the associated slave port.  */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available                                                                      */
  };

  /**
   * Control Register
   */
  struct CRS%s
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using PARK      = regbits< type,  0,  3 >;  /**< Park                      */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available  */
    using PCTL      = regbits< type,  4,  2 >;  /**< Parking Control           */
    using RESERVED  = regbits< type,  6,  2 >;  /**< no description available  */
    using ARB       = regbits< type,  8,  2 >;  /**< Arbitration Mode          */
    using RESERVED  = regbits< type, 10, 20 >;  /**< no description available  */
    using HLP       = regbits< type, 30,  1 >;  /**< Halt Low Priority         */
    using RO        = regbits< type, 31,  1 >;  /**< Read Only                 */
  };

  /**
   * Master General Purpose Control Register
   */
  struct MGPCR%s
  : public reg< uint32_t, base_addr + 0x800, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0 >;

    using AULB      = regbits< type,  0,  3 >;  /**< Arbitrates On Undefined Length Bursts  */
    using RESERVED  = regbits< type,  3, 29 >;  /**< no description available               */
  };
};
} // namespace mptl

#endif // ARCH_REG_AXBS_HPP_INCLUDED
