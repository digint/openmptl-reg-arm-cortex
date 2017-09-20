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
//  Import from CMSIS-SVD: "Atmel/ATSAM3U2E.svd"
//
//  vendor: Atmel
//  name: ATSAM3U2E
//  series: SAM3U
//  version: 20130131
//  description: Atmel ATSAM3U2E device: Cortex-M3 Microcontroller with 128KB Flash, HS USB, 144 Pins (refer to http://www.atmel.com/devices/SAM3U2E.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADC_HPP_INCLUDED
#define ARCH_REG_ADC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog-to-Digital Converter
 */
struct ADC
{
  static constexpr reg_addr_t base_addr = 0x400ac000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using SWRST  = regbits< type,  0,  1 >;  /**< Software Reset    */
    using START  = regbits< type,  1,  1 >;  /**< Start Conversion  */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using TRGEN    = regbits< type,  0,  1 >;  /**< Trigger Enable            */
    using TRGSEL   = regbits< type,  1,  3 >;  /**< Trigger Selection         */
    using LOWRES   = regbits< type,  4,  1 >;  /**< Resolution                */
    using SLEEP    = regbits< type,  5,  1 >;  /**< Sleep Mode                */
    using PRESCAL  = regbits< type,  8,  8 >;  /**< Prescaler Rate Selection  */
    using STARTUP  = regbits< type, 16,  7 >;  /**< Start Up Time             */
    using SHTIM    = regbits< type, 24,  4 >;  /**< Sample & Hold Time        */
  };

  /**
   * Channel Enable Register
   */
  struct CHER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using CH0  = regbits< type,  0,  1 >;  /**< Channel 0 Enable  */
    using CH1  = regbits< type,  1,  1 >;  /**< Channel 1 Enable  */
    using CH2  = regbits< type,  2,  1 >;  /**< Channel 2 Enable  */
    using CH3  = regbits< type,  3,  1 >;  /**< Channel 3 Enable  */
    using CH4  = regbits< type,  4,  1 >;  /**< Channel 4 Enable  */
    using CH5  = regbits< type,  5,  1 >;  /**< Channel 5 Enable  */
    using CH6  = regbits< type,  6,  1 >;  /**< Channel 6 Enable  */
    using CH7  = regbits< type,  7,  1 >;  /**< Channel 7 Enable  */
  };

  /**
   * Channel Disable Register
   */
  struct CHDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using CH0  = regbits< type,  0,  1 >;  /**< Channel 0 Disable  */
    using CH1  = regbits< type,  1,  1 >;  /**< Channel 1 Disable  */
    using CH2  = regbits< type,  2,  1 >;  /**< Channel 2 Disable  */
    using CH3  = regbits< type,  3,  1 >;  /**< Channel 3 Disable  */
    using CH4  = regbits< type,  4,  1 >;  /**< Channel 4 Disable  */
    using CH5  = regbits< type,  5,  1 >;  /**< Channel 5 Disable  */
    using CH6  = regbits< type,  6,  1 >;  /**< Channel 6 Disable  */
    using CH7  = regbits< type,  7,  1 >;  /**< Channel 7 Disable  */
  };

  /**
   * Channel Status Register
   */
  struct CHSR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using CH0  = regbits< type,  0,  1 >;  /**< Channel 0 Status  */
    using CH1  = regbits< type,  1,  1 >;  /**< Channel 1 Status  */
    using CH2  = regbits< type,  2,  1 >;  /**< Channel 2 Status  */
    using CH3  = regbits< type,  3,  1 >;  /**< Channel 3 Status  */
    using CH4  = regbits< type,  4,  1 >;  /**< Channel 4 Status  */
    using CH5  = regbits< type,  5,  1 >;  /**< Channel 5 Status  */
    using CH6  = regbits< type,  6,  1 >;  /**< Channel 6 Status  */
    using CH7  = regbits< type,  7,  1 >;  /**< Channel 7 Status  */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x000C0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x000C0000 >;

    using EOC0    = regbits< type,  0,  1 >;  /**< End of Conversion 0    */
    using EOC1    = regbits< type,  1,  1 >;  /**< End of Conversion 1    */
    using EOC2    = regbits< type,  2,  1 >;  /**< End of Conversion 2    */
    using EOC3    = regbits< type,  3,  1 >;  /**< End of Conversion 3    */
    using EOC4    = regbits< type,  4,  1 >;  /**< End of Conversion 4    */
    using EOC5    = regbits< type,  5,  1 >;  /**< End of Conversion 5    */
    using EOC6    = regbits< type,  6,  1 >;  /**< End of Conversion 6    */
    using EOC7    = regbits< type,  7,  1 >;  /**< End of Conversion 7    */
    using OVRE0   = regbits< type,  8,  1 >;  /**< Overrun Error 0        */
    using OVRE1   = regbits< type,  9,  1 >;  /**< Overrun Error 1        */
    using OVRE2   = regbits< type, 10,  1 >;  /**< Overrun Error 2        */
    using OVRE3   = regbits< type, 11,  1 >;  /**< Overrun Error 3        */
    using OVRE4   = regbits< type, 12,  1 >;  /**< Overrun Error 4        */
    using OVRE5   = regbits< type, 13,  1 >;  /**< Overrun Error 5        */
    using OVRE6   = regbits< type, 14,  1 >;  /**< Overrun Error 6        */
    using OVRE7   = regbits< type, 15,  1 >;  /**< Overrun Error 7        */
    using DRDY    = regbits< type, 16,  1 >;  /**< Data Ready             */
    using GOVRE   = regbits< type, 17,  1 >;  /**< General Overrun Error  */
    using ENDRX   = regbits< type, 18,  1 >;  /**< End of RX Buffer       */
    using RXBUFF  = regbits< type, 19,  1 >;  /**< RX Buffer Full         */
  };

  /**
   * Last Converted Data Register
   */
  struct LCDR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using LDATA  = regbits< type,  0, 10 >;  /**< Last Data Converted  */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using EOC0    = regbits< type,  0,  1 >;  /**< End of Conversion Interrupt Enable 0    */
    using EOC1    = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Enable 1    */
    using EOC2    = regbits< type,  2,  1 >;  /**< End of Conversion Interrupt Enable 2    */
    using EOC3    = regbits< type,  3,  1 >;  /**< End of Conversion Interrupt Enable 3    */
    using EOC4    = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Enable 4    */
    using EOC5    = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Enable 5    */
    using EOC6    = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Enable 6    */
    using EOC7    = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Enable 7    */
    using OVRE0   = regbits< type,  8,  1 >;  /**< Overrun Error Interrupt Enable 0        */
    using OVRE1   = regbits< type,  9,  1 >;  /**< Overrun Error Interrupt Enable 1        */
    using OVRE2   = regbits< type, 10,  1 >;  /**< Overrun Error Interrupt Enable 2        */
    using OVRE3   = regbits< type, 11,  1 >;  /**< Overrun Error Interrupt Enable 3        */
    using OVRE4   = regbits< type, 12,  1 >;  /**< Overrun Error Interrupt Enable 4        */
    using OVRE5   = regbits< type, 13,  1 >;  /**< Overrun Error Interrupt Enable 5        */
    using OVRE6   = regbits< type, 14,  1 >;  /**< Overrun Error Interrupt Enable 6        */
    using OVRE7   = regbits< type, 15,  1 >;  /**< Overrun Error Interrupt Enable 7        */
    using DRDY    = regbits< type, 16,  1 >;  /**< Data Ready Interrupt Enable             */
    using GOVRE   = regbits< type, 17,  1 >;  /**< General Overrun Error Interrupt Enable  */
    using ENDRX   = regbits< type, 18,  1 >;  /**< End of Receive Buffer Interrupt Enable  */
    using RXBUFF  = regbits< type, 19,  1 >;  /**< Receive Buffer Full Interrupt Enable    */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using EOC0    = regbits< type,  0,  1 >;  /**< End of Conversion Interrupt Disable 0    */
    using EOC1    = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Disable 1    */
    using EOC2    = regbits< type,  2,  1 >;  /**< End of Conversion Interrupt Disable 2    */
    using EOC3    = regbits< type,  3,  1 >;  /**< End of Conversion Interrupt Disable 3    */
    using EOC4    = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Disable 4    */
    using EOC5    = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Disable 5    */
    using EOC6    = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Disable 6    */
    using EOC7    = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Disable 7    */
    using OVRE0   = regbits< type,  8,  1 >;  /**< Overrun Error Interrupt Disable 0        */
    using OVRE1   = regbits< type,  9,  1 >;  /**< Overrun Error Interrupt Disable 1        */
    using OVRE2   = regbits< type, 10,  1 >;  /**< Overrun Error Interrupt Disable 2        */
    using OVRE3   = regbits< type, 11,  1 >;  /**< Overrun Error Interrupt Disable 3        */
    using OVRE4   = regbits< type, 12,  1 >;  /**< Overrun Error Interrupt Disable 4        */
    using OVRE5   = regbits< type, 13,  1 >;  /**< Overrun Error Interrupt Disable 5        */
    using OVRE6   = regbits< type, 14,  1 >;  /**< Overrun Error Interrupt Disable 6        */
    using OVRE7   = regbits< type, 15,  1 >;  /**< Overrun Error Interrupt Disable 7        */
    using DRDY    = regbits< type, 16,  1 >;  /**< Data Ready Interrupt Disable             */
    using GOVRE   = regbits< type, 17,  1 >;  /**< General Overrun Error Interrupt Disable  */
    using ENDRX   = regbits< type, 18,  1 >;  /**< End of Receive Buffer Interrupt Disable  */
    using RXBUFF  = regbits< type, 19,  1 >;  /**< Receive Buffer Full Interrupt Disable    */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using EOC0    = regbits< type,  0,  1 >;  /**< End of Conversion Interrupt Mask 0    */
    using EOC1    = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Mask 1    */
    using EOC2    = regbits< type,  2,  1 >;  /**< End of Conversion Interrupt Mask 2    */
    using EOC3    = regbits< type,  3,  1 >;  /**< End of Conversion Interrupt Mask 3    */
    using EOC4    = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Mask 4    */
    using EOC5    = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Mask 5    */
    using EOC6    = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Mask 6    */
    using EOC7    = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Mask 7    */
    using OVRE0   = regbits< type,  8,  1 >;  /**< Overrun Error Interrupt Mask 0        */
    using OVRE1   = regbits< type,  9,  1 >;  /**< Overrun Error Interrupt Mask 1        */
    using OVRE2   = regbits< type, 10,  1 >;  /**< Overrun Error Interrupt Mask 2        */
    using OVRE3   = regbits< type, 11,  1 >;  /**< Overrun Error Interrupt Mask 3        */
    using OVRE4   = regbits< type, 12,  1 >;  /**< Overrun Error Interrupt Mask 4        */
    using OVRE5   = regbits< type, 13,  1 >;  /**< Overrun Error Interrupt Mask 5        */
    using OVRE6   = regbits< type, 14,  1 >;  /**< Overrun Error Interrupt Mask 6        */
    using OVRE7   = regbits< type, 15,  1 >;  /**< Overrun Error Interrupt Mask 7        */
    using DRDY    = regbits< type, 16,  1 >;  /**< Data Ready Interrupt Mask             */
    using GOVRE   = regbits< type, 17,  1 >;  /**< General Overrun Error Interrupt Mask  */
    using ENDRX   = regbits< type, 18,  1 >;  /**< End of Receive Buffer Interrupt Mask  */
    using RXBUFF  = regbits< type, 19,  1 >;  /**< Receive Buffer Full Interrupt Mask    */
  };

  /**
   * Channel Data Register
   */
  struct CDR[%s]
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using DATA  = regbits< type,  0, 10 >;  /**< Converted Data  */
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

#endif // ARCH_REG_ADC_HPP_INCLUDED
