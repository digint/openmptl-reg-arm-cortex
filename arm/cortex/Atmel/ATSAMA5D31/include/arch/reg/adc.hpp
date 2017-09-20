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
  static constexpr reg_addr_t base_addr = 0xf8018000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using SWRST    = regbits< type,  0,  1 >;  /**< Software Reset                */
    using START    = regbits< type,  1,  1 >;  /**< Start Conversion              */
    using TSCALIB  = regbits< type,  2,  1 >;  /**< Touchscreen Calibration       */
    using AUTOCAL  = regbits< type,  3,  1 >;  /**< Automatic Calibration of ADC  */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using TRGSEL    = regbits< type,  1,  3 >;  /**< Trigger Selection         */
    using SLEEP     = regbits< type,  5,  1 >;  /**< Sleep Mode                */
    using FWUP      = regbits< type,  6,  1 >;  /**< Fast Wake Up              */
    using PRESCAL   = regbits< type,  8,  8 >;  /**< Prescaler Rate Selection  */
    using STARTUP   = regbits< type, 16,  4 >;  /**< Start Up Time             */
    using SETTLING  = regbits< type, 20,  2 >;  /**< Analog Settling Time      */
    using ANACH     = regbits< type, 23,  1 >;  /**< Analog Change             */
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

    using EOC0   = regbits< type,  0,  1 >;  /**< End of Conversion Interrupt Enable 0                 */
    using EOC1   = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Enable 1                 */
    using EOC2   = regbits< type,  2,  1 >;  /**< End of Conversion Interrupt Enable 2                 */
    using EOC3   = regbits< type,  3,  1 >;  /**< End of Conversion Interrupt Enable 3                 */
    using EOC4   = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Enable 4                 */
    using EOC5   = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Enable 5                 */
    using EOC6   = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Enable 6                 */
    using EOC7   = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Enable 7                 */
    using EOC8   = regbits< type,  8,  1 >;  /**< End of Conversion Interrupt Enable 8                 */
    using EOC9   = regbits< type,  9,  1 >;  /**< End of Conversion Interrupt Enable 9                 */
    using EOC10  = regbits< type, 10,  1 >;  /**< End of Conversion Interrupt Enable 10                */
    using EOC11  = regbits< type, 11,  1 >;  /**< End of Conversion Interrupt Enable 11                */
    using XRDY   = regbits< type, 20,  1 >;  /**< Touchscreen Measure XPOS Ready Interrupt Enable      */
    using YRDY   = regbits< type, 21,  1 >;  /**< Touchscreen Measure YPOS Ready Interrupt Enable      */
    using PRDY   = regbits< type, 22,  1 >;  /**< Touchscreen Measure Pressure Ready Interrupt Enable  */
    using EOCAL  = regbits< type, 23,  1 >;  /**< End of Calibration Sequence                          */
    using DRDY   = regbits< type, 24,  1 >;  /**< Data Ready Interrupt Enable                          */
    using GOVRE  = regbits< type, 25,  1 >;  /**< General Overrun Error Interrupt Enable               */
    using COMPE  = regbits< type, 26,  1 >;  /**< Comparison Event Interrupt Enable                    */
    using PEN    = regbits< type, 29,  1 >;  /**< Pen Contact Interrupt Enable                         */
    using NOPEN  = regbits< type, 30,  1 >;  /**< No Pen Contact Interrupt Enable                      */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using EOC0   = regbits< type,  0,  1 >;  /**< End of Conversion Interrupt Disable 0                 */
    using EOC1   = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Disable 1                 */
    using EOC2   = regbits< type,  2,  1 >;  /**< End of Conversion Interrupt Disable 2                 */
    using EOC3   = regbits< type,  3,  1 >;  /**< End of Conversion Interrupt Disable 3                 */
    using EOC4   = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Disable 4                 */
    using EOC5   = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Disable 5                 */
    using EOC6   = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Disable 6                 */
    using EOC7   = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Disable 7                 */
    using EOC8   = regbits< type,  8,  1 >;  /**< End of Conversion Interrupt Disable 8                 */
    using EOC9   = regbits< type,  9,  1 >;  /**< End of Conversion Interrupt Disable 9                 */
    using EOC10  = regbits< type, 10,  1 >;  /**< End of Conversion Interrupt Disable 10                */
    using EOC11  = regbits< type, 11,  1 >;  /**< End of Conversion Interrupt Disable 11                */
    using XRDY   = regbits< type, 20,  1 >;  /**< Touchscreen Measure XPOS Ready Interrupt Disable      */
    using YRDY   = regbits< type, 21,  1 >;  /**< Touchscreen Measure YPOS Ready Interrupt Disable      */
    using PRDY   = regbits< type, 22,  1 >;  /**< Touchscreen Measure Pressure Ready Interrupt Disable  */
    using EOCAL  = regbits< type, 23,  1 >;  /**< End of Calibration Sequence                           */
    using DRDY   = regbits< type, 24,  1 >;  /**< Data Ready Interrupt Disable                          */
    using GOVRE  = regbits< type, 25,  1 >;  /**< General Overrun Error Interrupt Disable               */
    using COMPE  = regbits< type, 26,  1 >;  /**< Comparison Event Interrupt Disable                    */
    using PEN    = regbits< type, 29,  1 >;  /**< Pen Contact Interrupt Disable                         */
    using NOPEN  = regbits< type, 30,  1 >;  /**< No Pen Contact Interrupt Disable                      */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using EOC0   = regbits< type,  0,  1 >;  /**< End of Conversion Interrupt Mask 0                 */
    using EOC1   = regbits< type,  1,  1 >;  /**< End of Conversion Interrupt Mask 1                 */
    using EOC2   = regbits< type,  2,  1 >;  /**< End of Conversion Interrupt Mask 2                 */
    using EOC3   = regbits< type,  3,  1 >;  /**< End of Conversion Interrupt Mask 3                 */
    using EOC4   = regbits< type,  4,  1 >;  /**< End of Conversion Interrupt Mask 4                 */
    using EOC5   = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Mask 5                 */
    using EOC6   = regbits< type,  6,  1 >;  /**< End of Conversion Interrupt Mask 6                 */
    using EOC7   = regbits< type,  7,  1 >;  /**< End of Conversion Interrupt Mask 7                 */
    using EOC8   = regbits< type,  8,  1 >;  /**< End of Conversion Interrupt Mask 8                 */
    using EOC9   = regbits< type,  9,  1 >;  /**< End of Conversion Interrupt Mask 9                 */
    using EOC10  = regbits< type, 10,  1 >;  /**< End of Conversion Interrupt Mask 10                */
    using EOC11  = regbits< type, 11,  1 >;  /**< End of Conversion Interrupt Mask 11                */
    using XRDY   = regbits< type, 20,  1 >;  /**< Touchscreen Measure XPOS Ready Interrupt Mask      */
    using YRDY   = regbits< type, 21,  1 >;  /**< Touchscreen Measure YPOS Ready Interrupt Mask      */
    using PRDY   = regbits< type, 22,  1 >;  /**< Touchscreen Measure Pressure Ready Interrupt Mask  */
    using EOCAL  = regbits< type, 23,  1 >;  /**< End of Calibration Sequence                        */
    using DRDY   = regbits< type, 24,  1 >;  /**< Data Ready Interrupt Mask                          */
    using GOVRE  = regbits< type, 25,  1 >;  /**< General Overrun Error Interrupt Mask               */
    using COMPE  = regbits< type, 26,  1 >;  /**< Comparison Event Interrupt Mask                    */
    using PEN    = regbits< type, 29,  1 >;  /**< Pen Contact Interrupt Mask                         */
    using NOPEN  = regbits< type, 30,  1 >;  /**< No Pen Contact Interrupt Mask                      */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using EOC0   = regbits< type,  0,  1 >;  /**< End of Conversion 0                 */
    using EOC1   = regbits< type,  1,  1 >;  /**< End of Conversion 1                 */
    using EOC2   = regbits< type,  2,  1 >;  /**< End of Conversion 2                 */
    using EOC3   = regbits< type,  3,  1 >;  /**< End of Conversion 3                 */
    using EOC4   = regbits< type,  4,  1 >;  /**< End of Conversion 4                 */
    using EOC5   = regbits< type,  5,  1 >;  /**< End of Conversion 5                 */
    using EOC6   = regbits< type,  6,  1 >;  /**< End of Conversion 6                 */
    using EOC7   = regbits< type,  7,  1 >;  /**< End of Conversion 7                 */
    using EOC8   = regbits< type,  8,  1 >;  /**< End of Conversion 8                 */
    using EOC9   = regbits< type,  9,  1 >;  /**< End of Conversion 9                 */
    using EOC10  = regbits< type, 10,  1 >;  /**< End of Conversion 10                */
    using EOC11  = regbits< type, 11,  1 >;  /**< End of Conversion 11                */
    using XRDY   = regbits< type, 20,  1 >;  /**< Touchscreen XPOS Measure Ready      */
    using YRDY   = regbits< type, 21,  1 >;  /**< Touchscreen YPOS Measure Ready      */
    using PRDY   = regbits< type, 22,  1 >;  /**< Touchscreen Pressure Measure Ready  */
    using EOCAL  = regbits< type, 23,  1 >;  /**< End of Calibration Sequence         */
    using DRDY   = regbits< type, 24,  1 >;  /**< Data Ready                          */
    using GOVRE  = regbits< type, 25,  1 >;  /**< General Overrun Error               */
    using COMPE  = regbits< type, 26,  1 >;  /**< Comparison Error                    */
    using PEN    = regbits< type, 29,  1 >;  /**< Pen contact                         */
    using NOPEN  = regbits< type, 30,  1 >;  /**< No Pen contact                      */
    using PENS   = regbits< type, 31,  1 >;  /**< Pen detect Status                   */
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
  };

  /**
   * Extended Mode Register
   */
  struct EMR
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >;

    using CMPMODE    = regbits< type,  0,  2 >;  /**< Comparison Mode               */
    using CMPSEL     = regbits< type,  4,  4 >;  /**< Comparison Selected Channel   */
    using CMPALL     = regbits< type,  9,  1 >;  /**< Compare All Channels          */
    using CMPFILTER  = regbits< type, 12,  2 >;  /**< Compare Event Filtering       */
    using TAG        = regbits< type, 24,  1 >;  /**< TAG of the ADC_LDCR register  */
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

    using PENDETSENS  = regbits< type,  0,  2 >;  /**< Pen Detection Sensitivity  */
  };

  /**
   * Touchscreen Mode Register
   */
  struct TSMR
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >;

    using TSMODE   = regbits< type,  0,  2 >;  /**< Touchscreen Mode                   */
    using TSAV     = regbits< type,  4,  2 >;  /**< Touchscreen Average                */
    using TSFREQ   = regbits< type,  8,  4 >;  /**< Touchscreen Frequency              */
    using TSSCTIM  = regbits< type, 16,  4 >;  /**< Touchscreen Switches Closure Time  */
    using NOTSDMA  = regbits< type, 22,  1 >;  /**< No TouchScreen DMA                 */
    using PENDET   = regbits< type, 24,  1 >;  /**< Pen Contact Detection Enable       */
    using PENDBC   = regbits< type, 28,  4 >;  /**< Pen Detect Debouncing Period       */
  };

  /**
   * Touchscreen X Position Register
   */
  struct XPOSR
  : public reg< uint32_t, base_addr + 0x000000b4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, ro, 0x00000000 >;

    using XPOS    = regbits< type,  0, 12 >;  /**< X Position     */
    using XSCALE  = regbits< type, 16, 12 >;  /**< Scale of XPOS  */
  };

  /**
   * Touchscreen Y Position Register
   */
  struct YPOSR
  : public reg< uint32_t, base_addr + 0x000000b8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, ro, 0x00000000 >;

    using YPOS    = regbits< type,  0, 12 >;  /**< Y Position     */
    using YSCALE  = regbits< type, 16, 12 >;  /**< Scale of YPOS  */
  };

  /**
   * Touchscreen Pressure Register
   */
  struct PRESSR
  : public reg< uint32_t, base_addr + 0x000000bc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, ro, 0x00000000 >;

    using Z1  = regbits< type,  0, 12 >;  /**< Data of Z1 Measurement  */
    using Z2  = regbits< type, 16, 12 >;  /**< Data of Z2 Measurement  */
  };

  /**
   * Trigger Register
   */
  struct TRGR
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >;

    using TRGMOD  = regbits< type,  0,  3 >;  /**< Trigger Mode    */
    using TRGPER  = regbits< type, 16, 16 >;  /**< Trigger Period  */
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
};
} // namespace mptl

#endif // ARCH_REG_ADC_HPP_INCLUDED
