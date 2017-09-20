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
//  Import from CMSIS-SVD: "Atmel/ATSAM3S2B.svd"
//
//  vendor: Atmel
//  name: ATSAM3S2B
//  series: SAM3S
//  version: 20130131
//  description: Atmel ATSAM3S2B device: Cortex-M3 Microcontroller with 128KB Flash, USB, 64 Pins (refer to http://www.atmel.com/devices/SAM3S2B.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0x40038000;

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
    using SETTLING  = regbits< type, 20,  2 >;  /**< Analog Settling Time      */
    using ANACH     = regbits< type, 23,  1 >;  /**< Analog Change             */
    using TRACKTIM  = regbits< type, 24,  4 >;  /**< Tracking Time             */
    using TRANSFER  = regbits< type, 28,  2 >;  /**< Transfer Period           */
    using USEQ      = regbits< type, 31,  1 >;  /**< Use Sequence Enable       */
  };

  /**
   * Channel Sequence Register 1
   */
  struct SEQR1
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using USCH1  = regbits< type,  0,  3 >;  /**< User Sequence Number 1  */
    using USCH2  = regbits< type,  4,  3 >;  /**< User Sequence Number 2  */
    using USCH3  = regbits< type,  8,  3 >;  /**< User Sequence Number 3  */
    using USCH4  = regbits< type, 12,  3 >;  /**< User Sequence Number 4  */
    using USCH5  = regbits< type, 16,  3 >;  /**< User Sequence Number 5  */
    using USCH6  = regbits< type, 20,  3 >;  /**< User Sequence Number 6  */
    using USCH7  = regbits< type, 24,  3 >;  /**< User Sequence Number 7  */
    using USCH8  = regbits< type, 28,  3 >;  /**< User Sequence Number 8  */
  };

  /**
   * Channel Sequence Register 2
   */
  struct SEQR2
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using USCH9   = regbits< type,  0,  3 >;  /**< User Sequence Number 9   */
    using USCH10  = regbits< type,  4,  3 >;  /**< User Sequence Number 10  */
    using USCH11  = regbits< type,  8,  3 >;  /**< User Sequence Number 11  */
    using USCH12  = regbits< type, 12,  3 >;  /**< User Sequence Number 12  */
    using USCH13  = regbits< type, 16,  3 >;  /**< User Sequence Number 13  */
    using USCH14  = regbits< type, 20,  3 >;  /**< User Sequence Number 14  */
    using USCH15  = regbits< type, 24,  3 >;  /**< User Sequence Number 15  */
    using USCH16  = regbits< type, 28,  3 >;  /**< User Sequence Number 16  */
  };

  /**
   * Channel Enable Register
   */
  struct CHER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using CH0   = regbits< type,  0,  1 >;  /**< Channel 0 Enable   */
    using CH1   = regbits< type,  1,  1 >;  /**< Channel 1 Enable   */
    using CH2   = regbits< type,  2,  1 >;  /**< Channel 2 Enable   */
    using CH3   = regbits< type,  3,  1 >;  /**< Channel 3 Enable   */
    using CH4   = regbits< type,  4,  1 >;  /**< Channel 4 Enable   */
    using CH5   = regbits< type,  5,  1 >;  /**< Channel 5 Enable   */
    using CH6   = regbits< type,  6,  1 >;  /**< Channel 6 Enable   */
    using CH7   = regbits< type,  7,  1 >;  /**< Channel 7 Enable   */
    using CH8   = regbits< type,  8,  1 >;  /**< Channel 8 Enable   */
    using CH9   = regbits< type,  9,  1 >;  /**< Channel 9 Enable   */
    using CH10  = regbits< type, 10,  1 >;  /**< Channel 10 Enable  */
    using CH11  = regbits< type, 11,  1 >;  /**< Channel 11 Enable  */
    using CH12  = regbits< type, 12,  1 >;  /**< Channel 12 Enable  */
    using CH13  = regbits< type, 13,  1 >;  /**< Channel 13 Enable  */
    using CH14  = regbits< type, 14,  1 >;  /**< Channel 14 Enable  */
    using CH15  = regbits< type, 15,  1 >;  /**< Channel 15 Enable  */
  };

  /**
   * Channel Disable Register
   */
  struct CHDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using CH0   = regbits< type,  0,  1 >;  /**< Channel 0 Disable   */
    using CH1   = regbits< type,  1,  1 >;  /**< Channel 1 Disable   */
    using CH2   = regbits< type,  2,  1 >;  /**< Channel 2 Disable   */
    using CH3   = regbits< type,  3,  1 >;  /**< Channel 3 Disable   */
    using CH4   = regbits< type,  4,  1 >;  /**< Channel 4 Disable   */
    using CH5   = regbits< type,  5,  1 >;  /**< Channel 5 Disable   */
    using CH6   = regbits< type,  6,  1 >;  /**< Channel 6 Disable   */
    using CH7   = regbits< type,  7,  1 >;  /**< Channel 7 Disable   */
    using CH8   = regbits< type,  8,  1 >;  /**< Channel 8 Disable   */
    using CH9   = regbits< type,  9,  1 >;  /**< Channel 9 Disable   */
    using CH10  = regbits< type, 10,  1 >;  /**< Channel 10 Disable  */
    using CH11  = regbits< type, 11,  1 >;  /**< Channel 11 Disable  */
    using CH12  = regbits< type, 12,  1 >;  /**< Channel 12 Disable  */
    using CH13  = regbits< type, 13,  1 >;  /**< Channel 13 Disable  */
    using CH14  = regbits< type, 14,  1 >;  /**< Channel 14 Disable  */
    using CH15  = regbits< type, 15,  1 >;  /**< Channel 15 Disable  */
  };

  /**
   * Channel Status Register
   */
  struct CHSR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using CH0   = regbits< type,  0,  1 >;  /**< Channel 0 Status   */
    using CH1   = regbits< type,  1,  1 >;  /**< Channel 1 Status   */
    using CH2   = regbits< type,  2,  1 >;  /**< Channel 2 Status   */
    using CH3   = regbits< type,  3,  1 >;  /**< Channel 3 Status   */
    using CH4   = regbits< type,  4,  1 >;  /**< Channel 4 Status   */
    using CH5   = regbits< type,  5,  1 >;  /**< Channel 5 Status   */
    using CH6   = regbits< type,  6,  1 >;  /**< Channel 6 Status   */
    using CH7   = regbits< type,  7,  1 >;  /**< Channel 7 Status   */
    using CH8   = regbits< type,  8,  1 >;  /**< Channel 8 Status   */
    using CH9   = regbits< type,  9,  1 >;  /**< Channel 9 Status   */
    using CH10  = regbits< type, 10,  1 >;  /**< Channel 10 Status  */
    using CH11  = regbits< type, 11,  1 >;  /**< Channel 11 Status  */
    using CH12  = regbits< type, 12,  1 >;  /**< Channel 12 Status  */
    using CH13  = regbits< type, 13,  1 >;  /**< Channel 13 Status  */
    using CH14  = regbits< type, 14,  1 >;  /**< Channel 14 Status  */
    using CH15  = regbits< type, 15,  1 >;  /**< Channel 15 Status  */
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
    using EOC4    = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Enable 4    */
    using EOC5    = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Enable 5    */
    using EOC6    = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Enable 6    */
    using EOC7    = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Enable 7    */
    using EOC8    = regbits< type,  8,  1 >;  /**< End of Conversion Interrupt Enable 8    */
    using EOC9    = regbits< type,  9,  1 >;  /**< End of Conversion Interrupt Enable 9    */
    using EOC10   = regbits< type, 10,  1 >;  /**< End of Conversion Interrupt Enable 10   */
    using EOC11   = regbits< type, 11,  1 >;  /**< End of Conversion Interrupt Enable 11   */
    using EOC12   = regbits< type, 12,  1 >;  /**< End of Conversion Interrupt Enable 12   */
    using EOC13   = regbits< type, 13,  1 >;  /**< End of Conversion Interrupt Enable 13   */
    using EOC14   = regbits< type, 14,  1 >;  /**< End of Conversion Interrupt Enable 14   */
    using EOC15   = regbits< type, 15,  1 >;  /**< End of Conversion Interrupt Enable 15   */
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
    using EOC4    = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Disable 4    */
    using EOC5    = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Disable 5    */
    using EOC6    = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Disable 6    */
    using EOC7    = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Disable 7    */
    using EOC8    = regbits< type,  8,  1 >;  /**< End of Conversion Interrupt Disable 8    */
    using EOC9    = regbits< type,  9,  1 >;  /**< End of Conversion Interrupt Disable 9    */
    using EOC10   = regbits< type, 10,  1 >;  /**< End of Conversion Interrupt Disable 10   */
    using EOC11   = regbits< type, 11,  1 >;  /**< End of Conversion Interrupt Disable 11   */
    using EOC12   = regbits< type, 12,  1 >;  /**< End of Conversion Interrupt Disable 12   */
    using EOC13   = regbits< type, 13,  1 >;  /**< End of Conversion Interrupt Disable 13   */
    using EOC14   = regbits< type, 14,  1 >;  /**< End of Conversion Interrupt Disable 14   */
    using EOC15   = regbits< type, 15,  1 >;  /**< End of Conversion Interrupt Disable 15   */
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
    using EOC4    = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Mask 4    */
    using EOC5    = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Mask 5    */
    using EOC6    = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Mask 6    */
    using EOC7    = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Mask 7    */
    using EOC8    = regbits< type,  8,  1 >;  /**< End of Conversion Interrupt Mask 8    */
    using EOC9    = regbits< type,  9,  1 >;  /**< End of Conversion Interrupt Mask 9    */
    using EOC10   = regbits< type, 10,  1 >;  /**< End of Conversion Interrupt Mask 10   */
    using EOC11   = regbits< type, 11,  1 >;  /**< End of Conversion Interrupt Mask 11   */
    using EOC12   = regbits< type, 12,  1 >;  /**< End of Conversion Interrupt Mask 12   */
    using EOC13   = regbits< type, 13,  1 >;  /**< End of Conversion Interrupt Mask 13   */
    using EOC14   = regbits< type, 14,  1 >;  /**< End of Conversion Interrupt Mask 14   */
    using EOC15   = regbits< type, 15,  1 >;  /**< End of Conversion Interrupt Mask 15   */
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
    using EOC4    = regbits< type,  4,  1 >;  /**< End of Conversion 4    */
    using EOC5    = regbits< type,  5,  1 >;  /**< End of Conversion 5    */
    using EOC6    = regbits< type,  6,  1 >;  /**< End of Conversion 6    */
    using EOC7    = regbits< type,  7,  1 >;  /**< End of Conversion 7    */
    using EOC8    = regbits< type,  8,  1 >;  /**< End of Conversion 8    */
    using EOC9    = regbits< type,  9,  1 >;  /**< End of Conversion 9    */
    using EOC10   = regbits< type, 10,  1 >;  /**< End of Conversion 10   */
    using EOC11   = regbits< type, 11,  1 >;  /**< End of Conversion 11   */
    using EOC12   = regbits< type, 12,  1 >;  /**< End of Conversion 12   */
    using EOC13   = regbits< type, 13,  1 >;  /**< End of Conversion 13   */
    using EOC14   = regbits< type, 14,  1 >;  /**< End of Conversion 14   */
    using EOC15   = regbits< type, 15,  1 >;  /**< End of Conversion 15   */
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

    using OVRE0   = regbits< type,  0,  1 >;  /**< Overrun Error 0   */
    using OVRE1   = regbits< type,  1,  1 >;  /**< Overrun Error 1   */
    using OVRE2   = regbits< type,  2,  1 >;  /**< Overrun Error 2   */
    using OVRE3   = regbits< type,  3,  1 >;  /**< Overrun Error 3   */
    using OVRE4   = regbits< type,  4,  1 >;  /**< Overrun Error 4   */
    using OVRE5   = regbits< type,  5,  1 >;  /**< Overrun Error 5   */
    using OVRE6   = regbits< type,  6,  1 >;  /**< Overrun Error 6   */
    using OVRE7   = regbits< type,  7,  1 >;  /**< Overrun Error 7   */
    using OVRE8   = regbits< type,  8,  1 >;  /**< Overrun Error 8   */
    using OVRE9   = regbits< type,  9,  1 >;  /**< Overrun Error 9   */
    using OVRE10  = regbits< type, 10,  1 >;  /**< Overrun Error 10  */
    using OVRE11  = regbits< type, 11,  1 >;  /**< Overrun Error 11  */
    using OVRE12  = regbits< type, 12,  1 >;  /**< Overrun Error 12  */
    using OVRE13  = regbits< type, 13,  1 >;  /**< Overrun Error 13  */
    using OVRE14  = regbits< type, 14,  1 >;  /**< Overrun Error 14  */
    using OVRE15  = regbits< type, 15,  1 >;  /**< Overrun Error 15  */
  };

  /**
   * Extended Mode Register
   */
  struct EMR
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >;

    using CMPMODE  = regbits< type,  0,  2 >;  /**< Comparison Mode              */
    using CMPSEL   = regbits< type,  4,  4 >;  /**< Comparison Selected Channel  */
    using CMPALL   = regbits< type,  9,  1 >;  /**< Compare All Channels         */
    using TAG      = regbits< type, 24,  1 >;  /**< TAG of ADC_LDCR register     */
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
   * Channel Gain Register
   */
  struct CGR
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >;

    using GAIN0   = regbits< type,  0,  2 >;  /**< Gain for channel 0   */
    using GAIN1   = regbits< type,  2,  2 >;  /**< Gain for channel 1   */
    using GAIN2   = regbits< type,  4,  2 >;  /**< Gain for channel 2   */
    using GAIN3   = regbits< type,  6,  2 >;  /**< Gain for channel 3   */
    using GAIN4   = regbits< type,  8,  2 >;  /**< Gain for channel 4   */
    using GAIN5   = regbits< type, 10,  2 >;  /**< Gain for channel 5   */
    using GAIN6   = regbits< type, 12,  2 >;  /**< Gain for channel 6   */
    using GAIN7   = regbits< type, 14,  2 >;  /**< Gain for channel 7   */
    using GAIN8   = regbits< type, 16,  2 >;  /**< Gain for channel 8   */
    using GAIN9   = regbits< type, 18,  2 >;  /**< Gain for channel 9   */
    using GAIN10  = regbits< type, 20,  2 >;  /**< Gain for channel 10  */
    using GAIN11  = regbits< type, 22,  2 >;  /**< Gain for channel 11  */
    using GAIN12  = regbits< type, 24,  2 >;  /**< Gain for channel 12  */
    using GAIN13  = regbits< type, 26,  2 >;  /**< Gain for channel 13  */
    using GAIN14  = regbits< type, 28,  2 >;  /**< Gain for channel 14  */
    using GAIN15  = regbits< type, 30,  2 >;  /**< Gain for channel 15  */
  };

  /**
   * Channel Offset Register
   */
  struct COR
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >;

    using OFF0    = regbits< type,  0,  1 >;  /**< Offset for channel 0                */
    using OFF1    = regbits< type,  1,  1 >;  /**< Offset for channel 1                */
    using OFF2    = regbits< type,  2,  1 >;  /**< Offset for channel 2                */
    using OFF3    = regbits< type,  3,  1 >;  /**< Offset for channel 3                */
    using OFF4    = regbits< type,  4,  1 >;  /**< Offset for channel 4                */
    using OFF5    = regbits< type,  5,  1 >;  /**< Offset for channel 5                */
    using OFF6    = regbits< type,  6,  1 >;  /**< Offset for channel 6                */
    using OFF7    = regbits< type,  7,  1 >;  /**< Offset for channel 7                */
    using OFF8    = regbits< type,  8,  1 >;  /**< Offset for channel 8                */
    using OFF9    = regbits< type,  9,  1 >;  /**< Offset for channel 9                */
    using OFF10   = regbits< type, 10,  1 >;  /**< Offset for channel 10               */
    using OFF11   = regbits< type, 11,  1 >;  /**< Offset for channel 11               */
    using OFF12   = regbits< type, 12,  1 >;  /**< Offset for channel 12               */
    using OFF13   = regbits< type, 13,  1 >;  /**< Offset for channel 13               */
    using OFF14   = regbits< type, 14,  1 >;  /**< Offset for channel 14               */
    using OFF15   = regbits< type, 15,  1 >;  /**< Offset for channel 15               */
    using DIFF0   = regbits< type, 16,  1 >;  /**< Differential inputs for channel 0   */
    using DIFF1   = regbits< type, 17,  1 >;  /**< Differential inputs for channel 1   */
    using DIFF2   = regbits< type, 18,  1 >;  /**< Differential inputs for channel 2   */
    using DIFF3   = regbits< type, 19,  1 >;  /**< Differential inputs for channel 3   */
    using DIFF4   = regbits< type, 20,  1 >;  /**< Differential inputs for channel 4   */
    using DIFF5   = regbits< type, 21,  1 >;  /**< Differential inputs for channel 5   */
    using DIFF6   = regbits< type, 22,  1 >;  /**< Differential inputs for channel 6   */
    using DIFF7   = regbits< type, 23,  1 >;  /**< Differential inputs for channel 7   */
    using DIFF8   = regbits< type, 24,  1 >;  /**< Differential inputs for channel 8   */
    using DIFF9   = regbits< type, 25,  1 >;  /**< Differential inputs for channel 9   */
    using DIFF10  = regbits< type, 26,  1 >;  /**< Differential inputs for channel 10  */
    using DIFF11  = regbits< type, 27,  1 >;  /**< Differential inputs for channel 11  */
    using DIFF12  = regbits< type, 28,  1 >;  /**< Differential inputs for channel 12  */
    using DIFF13  = regbits< type, 29,  1 >;  /**< Differential inputs for channel 13  */
    using DIFF14  = regbits< type, 30,  1 >;  /**< Differential inputs for channel 14  */
    using DIFF15  = regbits< type, 31,  1 >;  /**< Differential inputs for channel 15  */
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
   * Analog Control Register
   */
  struct ACR
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x00000100 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x00000100 >;

    using TSON   = regbits< type,  4,  1 >;  /**< Temperature Sensor On     */
    using IBCTL  = regbits< type,  8,  2 >;  /**< ADC Bias Current Control  */
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
