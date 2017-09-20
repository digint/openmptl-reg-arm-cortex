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
  static constexpr reg_addr_t base_addr = 0xfffc8000;

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

    using SMOD     = regbits< type,  0,  2 >;  /**< Start Mode        */
    using PROCDLY  = regbits< type,  4,  1 >;  /**< Processing Delay  */
    using ALGO     = regbits< type,  8,  1 >;  /**< SHA Algorithm     */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready Interrupt Enable                             */
    using ENDTX   = regbits< type,  1,  1 >;  /**< End of Transmit Buffer Interrupt Enable                 */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< Transmit Buffer Empty Interrupt Enable                  */
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
    using ENDTX   = regbits< type,  1,  1 >;  /**< End of Transmit Buffer Interrupt Disable                 */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< Transmit Buffer Empty Interrupt Disable                  */
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
    using ENDTX   = regbits< type,  1,  1 >;  /**< End of Transmit Buffer Interrupt Mask                 */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< Transmit Buffer Empty Interrupt Mask                  */
    using URAD    = regbits< type,  8,  1 >;  /**< Unspecified Register Access Detection Interrupt Mask  */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x0000000A >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x0000000A >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready                                    */
    using ENDTX   = regbits< type,  1,  1 >;  /**< End of TX Buffer                              */
    using TXBUFE  = regbits< type,  2,  1 >;  /**< TX Buffer Empty                               */
    using URAD    = regbits< type,  8,  1 >;  /**< Unspecified Register Access Detection Status  */
    using URAT    = regbits< type, 12,  3 >;  /**< Unspecified Register Access Type              */
  };

  /**
   * Input Data Register
   */
  struct IDATAxR[%s]
  : public reg< uint32_t, base_addr + 0x00000040, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, wo, 0 >;

    using IDATAx  = regbits< type,  0, 32 >;  /**< Input Data x  */
  };

  /**
   * Output Data Register
   */
  struct ODATAxR[%s]
  : public reg< uint32_t, base_addr + 0x00000080, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using ODATAx  = regbits< type,  0, 32 >;  /**< Output Data x  */
  };

  /**
   * Transmit Pointer Register
   */
  struct TPR
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >;

    using TXPTR  = regbits< type,  0, 32 >;  /**< Transmit Counter Register  */
  };

  /**
   * Transmit Counter Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >;

    using TXCTR  = regbits< type,  0, 16 >;  /**< Transmit Counter Register  */
  };

  /**
   * Transmit Next Pointer Register
   */
  struct TNPR
  : public reg< uint32_t, base_addr + 0x00000118, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, rw, 0x00000000 >;

    using TXNPTR  = regbits< type,  0, 32 >;  /**< Transmit Next Pointer  */
  };

  /**
   * Transmit Next Counter Register
   */
  struct TNCR
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >;

    using TXNCTR  = regbits< type,  0, 16 >;  /**< Transmit Counter Next  */
  };

  /**
   * Transfer Control Register
   */
  struct PTCR
  : public reg< uint32_t, base_addr + 0x00000120, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, wo, 0x00000000 >;

    using RXTEN   = regbits< type,  0,  1 >;  /**< Receiver Transfer Enable      */
    using RXTDIS  = regbits< type,  1,  1 >;  /**< Receiver Transfer Disable     */
    using TXTEN   = regbits< type,  8,  1 >;  /**< Transmitter Transfer Enable   */
    using TXTDIS  = regbits< type,  9,  1 >;  /**< Transmitter Transfer Disable  */
  };

  /**
   * Transfer Status Register
   */
  struct PTSR
  : public reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >;

    using RXTEN  = regbits< type,  0,  1 >;  /**< Receiver Transfer Enable     */
    using TXTEN  = regbits< type,  8,  1 >;  /**< Transmitter Transfer Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SHA_HPP_INCLUDED
