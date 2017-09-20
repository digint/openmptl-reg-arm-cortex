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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G20.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G20
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G20 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, USB, Ethernet, 217 and 247 Pins (refer to http://www.atmel.com/devices/SAM9G20.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0xfffe0000;

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

    using TRGEN     = regbits< type,  0,  1 >;  /**< Trigger Enable            */
    using TRGSEL    = regbits< type,  1,  3 >;  /**< Trigger Selection         */
    using LOWRES    = regbits< type,  4,  1 >;  /**< Resolution                */
    using SLEEP     = regbits< type,  5,  1 >;  /**< Sleep Mode                */
    using FWUP      = regbits< type,  6,  1 >;  /**< Fast Wake Up              */
    using FREERUN   = regbits< type,  7,  1 >;  /**< Free Run Mode             */
    using PRESCAL   = regbits< type,  8,  8 >;  /**< Prescaler Rate Selection  */
    using STARTUP   = regbits< type, 16,  4 >;  /**< Start Up Time             */
    using TRACKTIM  = regbits< type, 24,  4 >;  /**< Tracking Time             */
    using USEQ      = regbits< type, 31,  1 >;  /**< Use Sequence Enable       */
  };

  /**
   * Channel Sequence Register 1
   */
  struct SEQR1
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using USCH1  = regbits< type,  0,  4 >;  /**< User Sequence Number 1  */
    using USCH2  = regbits< type,  4,  4 >;  /**< User Sequence Number 2  */
    using USCH3  = regbits< type,  8,  4 >;  /**< User Sequence Number 3  */
    using USCH4  = regbits< type, 12,  4 >;  /**< User Sequence Number 4  */
    using USCH5  = regbits< type, 16,  4 >;  /**< User Sequence Number 5  */
    using USCH6  = regbits< type, 20,  4 >;  /**< User Sequence Number 6  */
    using USCH7  = regbits< type, 24,  4 >;  /**< User Sequence Number 7  */
    using USCH8  = regbits< type, 28,  4 >;  /**< User Sequence Number 8  */
  };

  /**
   * Channel Sequence Register 2
   */
  struct SEQR2
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using USCH9   = regbits< type,  0,  4 >;  /**< User Sequence Number 9   */
    using USCH10  = regbits< type,  4,  4 >;  /**< User Sequence Number 10  */
    using USCH11  = regbits< type,  8,  4 >;  /**< User Sequence Number 11  */
    using USCH12  = regbits< type, 12,  4 >;  /**< User Sequence Number 12  */
    using USCH13  = regbits< type, 16,  4 >;  /**< User Sequence Number 13  */
    using USCH14  = regbits< type, 20,  4 >;  /**< User Sequence Number 14  */
    using USCH15  = regbits< type, 24,  4 >;  /**< User Sequence Number 15  */
    using USCH16  = regbits< type, 28,  4 >;  /**< User Sequence Number 16  */
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
  };

  /**
   * Last Converted Data Register
   */
  struct LCDR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using LDATA  = regbits< type,  0, 12 >;  /**< Last Data Converted  */
    using CHNB   = regbits< type, 12,  4 >;  /**< Channel Number       */
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
    using DRDY    = regbits< type, 24,  1 >;  /**< Data Ready Interrupt Enable             */
    using GOVRE   = regbits< type, 25,  1 >;  /**< General Overrun Error Interrupt Enable  */
    using COMPE   = regbits< type, 26,  1 >;  /**< Comparison Event Interrupt Enable       */
    using ENDRX   = regbits< type, 27,  1 >;  /**< End of Receive Buffer Interrupt Enable  */
    using RXBUFF  = regbits< type, 28,  1 >;  /**< Receive Buffer Full Interrupt Enable    */
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
    using DRDY    = regbits< type, 24,  1 >;  /**< Data Ready Interrupt Disable             */
    using GOVRE   = regbits< type, 25,  1 >;  /**< General Overrun Error Interrupt Disable  */
    using COMPE   = regbits< type, 26,  1 >;  /**< Comparison Event Interrupt Disable       */
    using ENDRX   = regbits< type, 27,  1 >;  /**< End of Receive Buffer Interrupt Disable  */
    using RXBUFF  = regbits< type, 28,  1 >;  /**< Receive Buffer Full Interrupt Disable    */
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
    using DRDY    = regbits< type, 24,  1 >;  /**< Data Ready Interrupt Mask             */
    using GOVRE   = regbits< type, 25,  1 >;  /**< General Overrun Error Interrupt Mask  */
    using COMPE   = regbits< type, 26,  1 >;  /**< Comparison Event Interrupt Mask       */
    using ENDRX   = regbits< type, 27,  1 >;  /**< End of Receive Buffer Interrupt Mask  */
    using RXBUFF  = regbits< type, 28,  1 >;  /**< Receive Buffer Full Interrupt Mask    */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using EOC0    = regbits< type,  0,  1 >;  /**< End of Conversion 0    */
    using EOC1    = regbits< type,  1,  1 >;  /**< End of Conversion 1    */
    using EOC2    = regbits< type,  2,  1 >;  /**< End of Conversion 2    */
    using EOC3    = regbits< type,  3,  1 >;  /**< End of Conversion 3    */
    using DRDY    = regbits< type, 24,  1 >;  /**< Data Ready             */
    using GOVRE   = regbits< type, 25,  1 >;  /**< General Overrun Error  */
    using COMPE   = regbits< type, 26,  1 >;  /**< Comparison Error       */
    using ENDRX   = regbits< type, 27,  1 >;  /**< End of RX Buffer       */
    using RXBUFF  = regbits< type, 28,  1 >;  /**< RX Buffer Full         */
  };

  /**
   * Overrun Status Register
   */
  struct OVER
  : public reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >;

    using OVRE0  = regbits< type,  0,  1 >;  /**< Overrun Error 0  */
    using OVRE1  = regbits< type,  1,  1 >;  /**< Overrun Error 1  */
    using OVRE2  = regbits< type,  2,  1 >;  /**< Overrun Error 2  */
    using OVRE3  = regbits< type,  3,  1 >;  /**< Overrun Error 3  */
  };

  /**
   * Extended Mode Register
   */
  struct EMR
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >;

    using CMPMODE  = regbits< type,  0,  2 >;  /**< Comparison Mode               */
    using CMPSEL   = regbits< type,  4,  4 >;  /**< Comparison Selected Channel   */
    using CMPALL   = regbits< type,  9,  1 >;  /**< Compare All Channels          */
    using TAG      = regbits< type, 24,  1 >;  /**< TAG of the ADC_LDCR register  */
  };

  /**
   * Compare Window Register
   */
  struct CWR
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using LOWTHRES   = regbits< type,  0, 12 >;  /**< Low Threshold   */
    using HIGHTHRES  = regbits< type, 16, 12 >;  /**< High Threshold  */
  };

  /**
   * Channel Data Register
   */
  struct CDR[%s]
  : public reg< uint32_t, base_addr + 0x00000050, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using DATA  = regbits< type,  0, 12 >;  /**< Converted Data  */
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Violation Status  */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
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
