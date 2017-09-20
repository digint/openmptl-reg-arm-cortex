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
//  Import from CMSIS-SVD: "Freescale/MKL03Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL03Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL03Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ROM_HPP_INCLUDED
#define ARCH_REG_ROM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System ROM
 */
struct ROM
{
  static constexpr reg_addr_t base_addr = 0xf0002000;

  /**
   * Entry
   */
  struct ENTRY%s
  : public reg< uint32_t, base_addr + 0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0 >;

    using ENTRY  = regbits< type,  0, 32 >;  /**< ENTRY  */
  };

  /**
   * End of Table Marker Register
   */
  struct TABLEMARK
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using MARK  = regbits< type,  0, 32 >;  /**< Hardwired to 0x0000_0000  */
  };

  /**
   * System Access Register
   */
  struct SYSACCESS
  : public reg< uint32_t, base_addr + 0xfcc, ro, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0xfcc, ro, 0x1 >;

    // fixme: Field name equals parent register name: SYSACCESS
    using SYSACCESS_ = regbits< type,  0, 32 >;  /**< Hardwired to 0x0000_0001  */
  };

  /**
   * Peripheral ID Register
   */
  struct PERIPHID%s
  : public reg< uint32_t, base_addr + 0xfd0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xfd0, ro, 0 >;

    using PERIPHID  = regbits< type,  0, 32 >;  /**< Peripheral ID1 is hardwired to 0x0000_00E0; ID2 to 0x0000_0008; and all the others to 0x0000_0000.  */
  };

  /**
   * Component ID Register
   */
  struct COMPID%s
  : public reg< uint32_t, base_addr + 0xff0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xff0, ro, 0 >;

    using COMPID  = regbits< type,  0, 32 >;  /**< Component ID  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ROM_HPP_INCLUDED
