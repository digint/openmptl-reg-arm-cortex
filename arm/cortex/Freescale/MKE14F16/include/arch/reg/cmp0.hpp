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
//  Import from CMSIS-SVD: "Freescale/MKE14F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE14F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE14F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CMP0_HPP_INCLUDED
#define ARCH_REG_CMP0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)
 */
struct CMP0
{
  static constexpr reg_addr_t base_addr = 0x40073000;

  /**
   * CMP Control Register 0
   */
  struct C0
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using HYSTCTR     = regbits< type,  0,  2 >;  /**< Comparator hard block hysteresis control. See chip data sheet to get the actual hystersis value with each level  */
    using OFFSET      = regbits< type,  2,  1 >;  /**< Comparator hard block offset control. See chip data sheet to get the actual offset value with each level         */
    using FILTER_CNT  = regbits< type,  4,  3 >;  /**< Filter Sample Count                                                                                              */
    using EN          = regbits< type,  8,  1 >;  /**< Comparator Module Enable                                                                                         */
    using OPE         = regbits< type,  9,  1 >;  /**< Comparator Output Pin Enable                                                                                     */
    using COS         = regbits< type, 10,  1 >;  /**< Comparator Output Select                                                                                         */
    using INVT        = regbits< type, 11,  1 >;  /**< Comparator invert                                                                                                */
    using PMODE       = regbits< type, 12,  1 >;  /**< Power Mode Select                                                                                                */
    using WE          = regbits< type, 14,  1 >;  /**< Windowing Enable                                                                                                 */
    using SE          = regbits< type, 15,  1 >;  /**< Sample Enable                                                                                                    */
    using FPR         = regbits< type, 16,  8 >;  /**< Filter Sample Period                                                                                             */
    using COUT        = regbits< type, 24,  1 >;  /**< Analog Comparator Output                                                                                         */
    using CFF         = regbits< type, 25,  1 >;  /**< Analog Comparator Flag Falling                                                                                   */
    using CFR         = regbits< type, 26,  1 >;  /**< Analog Comparator Flag Rising                                                                                    */
    using IEF         = regbits< type, 27,  1 >;  /**< Comparator Interrupt Enable Falling                                                                              */
    using IER         = regbits< type, 28,  1 >;  /**< Comparator Interrupt Enable Rising                                                                               */
    using DMAEN       = regbits< type, 30,  1 >;  /**< DMA Enable                                                                                                       */
  };

  /**
   * CMP Control Register 1
   */
  struct C1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using VOSEL   = regbits< type,  0,  8 >;  /**< DAC Output Voltage Select                                      */
    using MSEL    = regbits< type,  8,  3 >;  /**< Minus Input MUX Control                                        */
    using PSEL    = regbits< type, 11,  3 >;  /**< Plus Input MUX Control                                         */
    using VRSEL   = regbits< type, 14,  1 >;  /**< Supply Voltage Reference Source Select                         */
    using DACEN   = regbits< type, 15,  1 >;  /**< DAC Enable                                                     */
    using CHN0    = regbits< type, 16,  1 >;  /**< Channel 0 input enable                                         */
    using CHN1    = regbits< type, 17,  1 >;  /**< Channel 1 input enable                                         */
    using CHN2    = regbits< type, 18,  1 >;  /**< Channel 2 input enable                                         */
    using CHN3    = regbits< type, 19,  1 >;  /**< Channel 3 input enable                                         */
    using CHN4    = regbits< type, 20,  1 >;  /**< Channel 4 input enable                                         */
    using CHN5    = regbits< type, 21,  1 >;  /**< Channel 5 input enable                                         */
    using CHN6    = regbits< type, 22,  1 >;  /**< Channel 6 input enable                                         */
    using CHN7    = regbits< type, 23,  1 >;  /**< Channel 7 input enable                                         */
    using INNSEL  = regbits< type, 24,  2 >;  /**< Selection of the input to the negative port of the comparator  */
    using INPSEL  = regbits< type, 27,  2 >;  /**< Selection of the input to the positive port of the comparator  */
  };

  /**
   * CMP Control Register 2
   */
  struct C2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using ACOn     = regbits< type,  0,  8 >;  /**< The result of the input comparison for channel n  */
    using INITMOD  = regbits< type,  8,  6 >;  /**< Comparator and DAC initialization delay modulus.  */
    using NSAM     = regbits< type, 14,  2 >;  /**< Number of sample clocks                           */
    using CH0F     = regbits< type, 16,  1 >;  /**< Channel 0 input changed flag                      */
    using CH1F     = regbits< type, 17,  1 >;  /**< Channel 1 input changed flag                      */
    using CH2F     = regbits< type, 18,  1 >;  /**< Channel 2 input changed flag                      */
    using CH3F     = regbits< type, 19,  1 >;  /**< Channel 3 input changed flag                      */
    using CH4F     = regbits< type, 20,  1 >;  /**< Channel 4 input changed flag                      */
    using CH5F     = regbits< type, 21,  1 >;  /**< Channel 5 input changed flag                      */
    using CH6F     = regbits< type, 22,  1 >;  /**< Channel 6 input changed flag                      */
    using CH7F     = regbits< type, 23,  1 >;  /**< Channel 7 input changed flag                      */
    using FXMXCH   = regbits< type, 25,  3 >;  /**< Fixed channel selection                           */
    using FXMP     = regbits< type, 29,  1 >;  /**< Fixed MUX Port                                    */
    using RRIE     = regbits< type, 30,  1 >;  /**< Round-Robin interrupt enable                      */
    using RRE      = regbits< type, 31,  1 >;  /**< Round-Robin Enable                                */
  };
};
} // namespace mptl

#endif // ARCH_REG_CMP0_HPP_INCLUDED
