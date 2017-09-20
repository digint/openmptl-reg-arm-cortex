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
//  Import from CMSIS-SVD: "STMicro/STM32F7x.svd"
//
//  name: STM32F7x
//  version: 1.1
//  description: STM32F7x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SPDIF_RX_HPP_INCLUDED
#define ARCH_REG_SPDIF_RX_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Receiver Interface
 */
struct SPDIF_RX
{
  static constexpr reg_addr_t base_addr = 0x40004000;

  /**
   * Control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using SPDIFEN  = regbits< type,  0,  2 >;  /**< Peripheral Block Enable                                */
    using RXDMAEN  = regbits< type,  2,  1 >;  /**< Receiver DMA ENable for data flow                      */
    using RXSTEO   = regbits< type,  3,  1 >;  /**< STerEO Mode                                            */
    using DRFMT    = regbits< type,  4,  2 >;  /**< RX Data format                                         */
    using PMSK     = regbits< type,  6,  1 >;  /**< Mask Parity error bit                                  */
    using VMSK     = regbits< type,  7,  1 >;  /**< Mask of Validity bit                                   */
    using CUMSK    = regbits< type,  8,  1 >;  /**< Mask of channel status and user bits                   */
    using PTMSK    = regbits< type,  9,  1 >;  /**< Mask of Preamble Type bits                             */
    using CBDMAEN  = regbits< type, 10,  1 >;  /**< Control Buffer DMA ENable for control flow             */
    using CHSEL    = regbits< type, 11,  1 >;  /**< Channel Selection                                      */
    using NBTR     = regbits< type, 12,  2 >;  /**< Maximum allowed re-tries during synchronization phase  */
    using WFA      = regbits< type, 14,  1 >;  /**< Wait For Activity                                      */
    using INSEL    = regbits< type, 16,  3 >;  /**< input selection                                        */
  };

  /**
   * Interrupt mask register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using RXNEIE   = regbits< type,  0,  1 >;  /**< RXNE interrupt enable                            */
    using CSRNEIE  = regbits< type,  1,  1 >;  /**< Control Buffer Ready Interrupt Enable            */
    using PERRIE   = regbits< type,  2,  1 >;  /**< Parity error interrupt enable                    */
    using OVRIE    = regbits< type,  3,  1 >;  /**< Overrun error Interrupt Enable                   */
    using SBLKIE   = regbits< type,  4,  1 >;  /**< Synchronization Block Detected Interrupt Enable  */
    using SYNCDIE  = regbits< type,  5,  1 >;  /**< Synchronization Done                             */
    using IFEIE    = regbits< type,  6,  1 >;  /**< Serial Interface Error Interrupt Enable          */
  };

  /**
   * Status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using RXNE    = regbits< type,  0,  1 >;  /**< Read data register not empty                  */
    using CSRNE   = regbits< type,  1,  1 >;  /**< Control Buffer register is not empty          */
    using PERR    = regbits< type,  2,  1 >;  /**< Parity error                                  */
    using OVR     = regbits< type,  3,  1 >;  /**< Overrun error                                 */
    using SBD     = regbits< type,  4,  1 >;  /**< Synchronization Block Detected                */
    using SYNCD   = regbits< type,  5,  1 >;  /**< Synchronization Done                          */
    using FERR    = regbits< type,  6,  1 >;  /**< Framing error                                 */
    using SERR    = regbits< type,  7,  1 >;  /**< Synchronization error                         */
    using TERR    = regbits< type,  8,  1 >;  /**< Time-out error                                */
    using WIDTH5  = regbits< type, 16, 15 >;  /**< Duration of 5 symbols counted with SPDIF_CLK  */
  };

  /**
   * Interrupt Flag Clear register
   */
  struct IFCR
  : public reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >;

    using PERRCF   = regbits< type,  2,  1 >;  /**< Clears the Parity error flag                    */
    using OVRCF    = regbits< type,  3,  1 >;  /**< Clears the Overrun error flag                   */
    using SBDCF    = regbits< type,  4,  1 >;  /**< Clears the Synchronization Block Detected flag  */
    using SYNCDCF  = regbits< type,  5,  1 >;  /**< Clears the Synchronization Done flag            */
  };

  /**
   * Data input register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: DR
    using DR_ = regbits< type,  0, 24 >;  /**< Parity Error bit    */
    using PE  = regbits< type, 24,  1 >;  /**< Parity Error bit    */
    using V   = regbits< type, 25,  1 >;  /**< Validity bit        */
    using U   = regbits< type, 26,  1 >;  /**< User bit            */
    using C   = regbits< type, 27,  1 >;  /**< Channel Status bit  */
    using PT  = regbits< type, 28,  2 >;  /**< Preamble Type       */
  };

  /**
   * Channel Status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    using USR  = regbits< type,  0, 16 >;  /**< User data information         */
    using CS   = regbits< type, 16,  8 >;  /**< Channel A status information  */
    using SOB  = regbits< type, 24,  1 >;  /**< Start Of Block                */
  };

  /**
   * Debug Information register
   */
  struct DIR
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >;

    using THI  = regbits< type,  0, 13 >;  /**< Threshold HIGH  */
    using TLO  = regbits< type, 16, 13 >;  /**< Threshold LOW   */
  };
};
} // namespace mptl

#endif // ARCH_REG_SPDIF_RX_HPP_INCLUDED
