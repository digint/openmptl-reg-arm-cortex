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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9CN11.svd"
//
//  vendor: Atmel
//  name: AT91SAM9CN11
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9CN11 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Crypto engine, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9CN11.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AES_HPP_INCLUDED
#define ARCH_REG_AES_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Advanced Encryption Standard
 */
struct AES
{
  static constexpr reg_addr_t base_addr = 0xf000c000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using START  = regbits< type,  0,  1 >;  /**< Start Processing  */
    using SWRST  = regbits< type,  8,  1 >;  /**< Software Reset    */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using CIPHER    = regbits< type,  0,  1 >;  /**< Processing Mode            */
    using DUALBUFF  = regbits< type,  3,  1 >;  /**< Dual Input BUFFer          */
    using PROCDLY   = regbits< type,  4,  4 >;  /**< Processing Delay           */
    using SMOD      = regbits< type,  8,  2 >;  /**< Start Mode                 */
    using KEYSIZE   = regbits< type, 10,  2 >;  /**< Key Size                   */
    using OPMOD     = regbits< type, 12,  3 >;  /**< Operation Mode             */
    using LOD       = regbits< type, 15,  1 >;  /**< Last Output Data Mode      */
    using CFBS      = regbits< type, 16,  3 >;  /**< Cipher Feedback Data Size  */
    using CKEY      = regbits< type, 20,  4 >;  /**< Key                        */
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
    using URAT    = regbits< type, 12,  4 >;  /**< Unspecified Register Access:                  */
  };

  /**
   * Key Word Register
   */
  struct KEYWR[%s]
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0 >;

    using KEYW  = regbits< type,  0, 32 >;  /**< Key Word  */
  };

  /**
   * Input Data Register
   */
  struct IDATAR[%s]
  : public reg< uint32_t, base_addr + 0x00000040, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, wo, 0 >;

    using IDATA  = regbits< type,  0, 32 >;  /**< Input Data Word  */
  };

  /**
   * Output Data Register
   */
  struct ODATAR[%s]
  : public reg< uint32_t, base_addr + 0x00000050, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using ODATA  = regbits< type,  0, 32 >;  /**< Output Data  */
  };

  /**
   * Initialization Vector Register
   */
  struct IVR[%s]
  : public reg< uint32_t, base_addr + 0x00000060, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, wo, 0 >;

    using IV  = regbits< type,  0, 32 >;  /**< Initialization Vector  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AES_HPP_INCLUDED
