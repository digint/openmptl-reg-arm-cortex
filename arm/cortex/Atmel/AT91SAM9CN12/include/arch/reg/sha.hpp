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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9CN12.svd"
//
//  vendor: Atmel
//  name: AT91SAM9CN12
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9CN12 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Secure BootROM, Crypto engine, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9CN12.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SHA_HPP_INCLUDED
#define ARCH_REG_SHA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Secure Hash Algorithm
 */
struct SHA
{
  static constexpr reg_addr_t base_addr = 0xf0014000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using START  = regbits< type,  0,  1 >;  /**< Start Processing          */
    using FIRST  = regbits< type,  4,  1 >;  /**< First Block of a Message  */
    using SWRST  = regbits< type,  8,  1 >;  /**< Software Reset            */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using SMOD      = regbits< type,  0,  2 >;  /**< Start Mode         */
    using PROCDLY   = regbits< type,  4,  1 >;  /**< Processing Delay   */
    using ALGO      = regbits< type,  8,  3 >;  /**< SHA Algorithm.     */
    using DUALBUFF  = regbits< type, 16,  1 >;  /**< Dual Input BUFFer  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready Interrupt Enable                             */
    using URAD    = regbits< type,  8,  1 >;  /**< Unspecified Register Access Detection Interrupt Enable  */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready Interrupt Disable                             */
    using URAD    = regbits< type,  8,  1 >;  /**< Unspecified Register Access Detection Interrupt Disable  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready Interrupt Mask                             */
    using URAD    = regbits< type,  8,  1 >;  /**< Unspecified Register Access Detection Interrupt Mask  */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready                                    */
    using URAD    = regbits< type,  8,  1 >;  /**< Unspecified Register Access Detection Status  */
    using URAT    = regbits< type, 12,  3 >;  /**< Unspecified Register Access Type              */
  };

  /**
   * Input Data 0 Register
   */
  struct IDATAR[%s]
  : public reg< uint32_t, base_addr + 0x00000040, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, wo, 0 >;

    using IDATA  = regbits< type,  0, 32 >;  /**< Input Data  */
  };

  /**
   * Output Data 0 Register
   */
  struct ODATAR[%s]
  : public reg< uint32_t, base_addr + 0x00000080, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using ODATA  = regbits< type,  0, 32 >;  /**< Output Data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SHA_HPP_INCLUDED
