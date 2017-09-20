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

#ifndef ARCH_REG_GPBR_HPP_INCLUDED
#define ARCH_REG_GPBR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General Purpose Backup Register
 */
struct GPBR
{
  static constexpr reg_addr_t base_addr = 0xfffffe60;

  /**
   * General Purpose Backup Register
   */
  struct GPBR[%s]
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GPBR_VALUE  = regbits< type,  0, 32 >;  /**< Value of GPBR x  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPBR_HPP_INCLUDED
