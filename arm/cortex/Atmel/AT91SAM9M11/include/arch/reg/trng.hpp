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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9M11.svd"
//
//  vendor: Atmel
//  name: AT91SAM9M11
//  series: SAM9M
//  version: 20130207
//  description: Atmel AT91SAM9M11 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Hardware Encryption, Video Decoder, DDR2/LPDDR, Dual EBI, 324 Pins (refer to http://www.atmel.com/devices/SAM9M11.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TRNG_HPP_INCLUDED
#define ARCH_REG_TRNG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * True Random Number Generator
 */
struct TRNG
{
  static constexpr reg_addr_t base_addr = 0xfffcc000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using ENABLE  = regbits< type,  0,  1 >;  /**< Enables the TRNG to provide random values  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready Interrupt Enable  */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready Interrupt Disable  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready Interrupt Mask  */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready  */
  };

  /**
   * Output Data Register
   */
  struct ODATA
  : public reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: ODATA
    using ODATA_ = regbits< type,  0, 32 >;  /**< Output Data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TRNG_HPP_INCLUDED
