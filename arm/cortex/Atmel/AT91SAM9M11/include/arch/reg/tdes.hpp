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

#ifndef ARCH_REG_TDES_HPP_INCLUDED
#define ARCH_REG_TDES_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Triple Data Encryption Standard
 */
struct TDES
{
  static constexpr reg_addr_t base_addr = 0xfffc4000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using START     = regbits< type,  0,  1 >;  /**< Start Processing  */
    using SWRST     = regbits< type,  8,  1 >;  /**< Software Reset    */
    using LOADSEED  = regbits< type, 16,  1 >;  /**< Load Seed         */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000002 >;

    using CIPHER   = regbits< type,  0,  1 >;  /**< Processing Mode            */
    using TDESMOD  = regbits< type,  1,  1 >;  /**< ALGORITHM mode             */
    using KEYMOD   = regbits< type,  4,  1 >;  /**< Key Mode                   */
    using SMOD     = regbits< type,  8,  2 >;  /**< Start Mode                 */
    using OPMOD    = regbits< type, 12,  2 >;  /**< Operation Mode             */
    using LOD      = regbits< type, 15,  1 >;  /**< Last Output Data Mode      */
    using CFBS     = regbits< type, 16,  2 >;  /**< Cipher Feedback Data Size  */
    using CKEY     = regbits< type, 20,  4 >;  /**< Countermeasure Key         */
    using CTYPE    = regbits< type, 24,  6 >;  /**< Countermeasure Type        */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready Interrupt Enable                             */
    using ENDRX   = regbits< type,  1,  1 >;  /**< End of Receive Buffer Interrupt Enable                  */
    using ENDTX   = regbits< type,  2,  1 >;  /**< End of Transmit Buffer Interrupt Enable                 */
    using RXBUFF  = regbits< type,  3,  1 >;  /**< Receive Buffer Full Interrupt Enable                    */
    using TXBUFE  = regbits< type,  4,  1 >;  /**< Transmit Buffer Empty Interrupt Enable                  */
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
    using ENDRX   = regbits< type,  1,  1 >;  /**< End of Receive Buffer Interrupt Disable                  */
    using ENDTX   = regbits< type,  2,  1 >;  /**< End of Transmit Buffer Interrupt Disable                 */
    using RXBUFF  = regbits< type,  3,  1 >;  /**< Receive Buffer Full Interrupt Disable                    */
    using TXBUFE  = regbits< type,  4,  1 >;  /**< Transmit Buffer Empty Interrupt Disable                  */
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
    using ENDRX   = regbits< type,  1,  1 >;  /**< End of Receive Buffer Interrupt Mask                  */
    using ENDTX   = regbits< type,  2,  1 >;  /**< End of Transmit Buffer Interrupt Mask                 */
    using RXBUFF  = regbits< type,  3,  1 >;  /**< Receive Buffer Full Interrupt Mask                    */
    using TXBUFE  = regbits< type,  4,  1 >;  /**< Transmit Buffer Empty Interrupt Mask                  */
    using URAD    = regbits< type,  8,  1 >;  /**< Unspecified Register Access Detection Interrupt Mask  */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x0000001E >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x0000001E >;

    using DATRDY  = regbits< type,  0,  1 >;  /**< Data Ready                                    */
    using ENDRX   = regbits< type,  1,  1 >;  /**< End of RX Buffer                              */
    using ENDTX   = regbits< type,  2,  1 >;  /**< End of TX Buffer                              */
    using RXBUFF  = regbits< type,  3,  1 >;  /**< RX Buffer Full                                */
    using TXBUFE  = regbits< type,  4,  1 >;  /**< TX Buffer Empty                               */
    using URAD    = regbits< type,  8,  1 >;  /**< Unspecified Register Access Detection Status  */
    using URAT    = regbits< type, 12,  2 >;  /**< Unspecified Register Access Type:             */
  };

  /**
   * Key 1 Word Register
   */
  struct KEY1WxR[%s]
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0 >;

    using KEY1Wx  = regbits< type,  0, 32 >;  /**< Key 1 Word x  */
  };

  /**
   * Key 2 Word Register
   */
  struct KEY2WxR[%s]
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using KEY2Wx  = regbits< type,  0, 32 >;  /**< Key 2 Word x  */
  };

  /**
   * Key 3 Word Register
   */
  struct KEY3WxR[%s]
  : public reg< uint32_t, base_addr + 0x00000030, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, wo, 0 >;

    using KEY3Wx  = regbits< type,  0, 32 >;  /**< Key 3 Word x  */
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
  : public reg< uint32_t, base_addr + 0x00000050, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using ODATAx  = regbits< type,  0, 32 >;  /**< Output Data x  */
  };

  /**
   * Initialization Vector Register
   */
  struct IVxR[%s]
  : public reg< uint32_t, base_addr + 0x00000060, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, wo, 0 >;

    using IVx  = regbits< type,  0, 32 >;  /**< Initialization Vector x  */
  };

  /**
   * Receive Pointer Register
   */
  struct RPR
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >;

    using RXPTR  = regbits< type,  0, 32 >;  /**< Receive Pointer Register  */
  };

  /**
   * Receive Counter Register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >;

    using RXCTR  = regbits< type,  0, 16 >;  /**< Receive Counter Register  */
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
   * Receive Next Pointer Register
   */
  struct RNPR
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >;

    using RXNPTR  = regbits< type,  0, 32 >;  /**< Receive Next Pointer  */
  };

  /**
   * Receive Next Counter Register
   */
  struct RNCR
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >;

    using RXNCTR  = regbits< type,  0, 16 >;  /**< Receive Next Counter  */
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

#endif // ARCH_REG_TDES_HPP_INCLUDED
