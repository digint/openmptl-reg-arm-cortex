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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21G18A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21G18A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21G18A device: Cortex-M0+ Microcontroller with 256KB Flash, 32KB SRAM, 48-pin package (refer to http://www.atmel.com/devices/SAMD21G18A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2S_HPP_INCLUDED
#define ARCH_REG_I2S_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Inter-IC Sound Interface
 */
struct I2S
{
  static constexpr reg_addr_t base_addr = 0x42005000;

  /**
   * Clock Unit n Control
   */
  struct CLKCTRL%s
  : public reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SLOTSIZE   = regbits< type,  0,  2 >;  /**< Slot Size                            */
    using NBSLOTS    = regbits< type,  2,  3 >;  /**< Number of Slots in Frame             */
    using FSWIDTH    = regbits< type,  5,  2 >;  /**< Frame Sync Width                     */
    using BITDELAY   = regbits< type,  7,  1 >;  /**< Data Delay from Frame Sync           */
    using FSSEL      = regbits< type,  8,  1 >;  /**< Frame Sync Select                    */
    using FSINV      = regbits< type, 11,  1 >;  /**< Frame Sync Invert                    */
    using SCKSEL     = regbits< type, 12,  1 >;  /**< Serial Clock Select                  */
    using MCKSEL     = regbits< type, 16,  1 >;  /**< Master Clock Select                  */
    using MCKEN      = regbits< type, 18,  1 >;  /**< Master Clock Enable                  */
    using MCKDIV     = regbits< type, 19,  5 >;  /**< Master Clock Division Factor         */
    using MCKOUTDIV  = regbits< type, 24,  5 >;  /**< Master Clock Output Division Factor  */
    using FSOUTINV   = regbits< type, 29,  1 >;  /**< Frame Sync Output Invert             */
    using SCKOUTINV  = regbits< type, 30,  1 >;  /**< Serial Clock Output Invert           */
    using MCKOUTINV  = regbits< type, 31,  1 >;  /**< Master Clock Output Invert           */
  };

  /**
   * Control A
   */
  struct CTRLA
  : public reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST   = regbits< type,  0,  1 >;  /**< Software Reset       */
    using ENABLE  = regbits< type,  1,  1 >;  /**< Enable               */
    using CKEN0   = regbits< type,  2,  1 >;  /**< Clock Unit 0 Enable  */
    using CKEN1   = regbits< type,  3,  1 >;  /**< Clock Unit 1 Enable  */
    using SEREN0  = regbits< type,  4,  1 >;  /**< Serializer 0 Enable  */
    using SEREN1  = regbits< type,  5,  1 >;  /**< Serializer 1 Enable  */
  };

  /**
   * Data n
   */
  struct DATA%s
  : public reg< uint32_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DATA  = regbits< type,  0, 32 >;  /**< Sample Data  */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RXRDY0  = regbits< type,  0,  1 >;  /**< Receive Ready 0 Interrupt Enable      */
    using RXRDY1  = regbits< type,  1,  1 >;  /**< Receive Ready 1 Interrupt Enable      */
    using RXOR0   = regbits< type,  4,  1 >;  /**< Receive Overrun 0 Interrupt Enable    */
    using RXOR1   = regbits< type,  5,  1 >;  /**< Receive Overrun 1 Interrupt Enable    */
    using TXRDY0  = regbits< type,  8,  1 >;  /**< Transmit Ready 0 Interrupt Enable     */
    using TXRDY1  = regbits< type,  9,  1 >;  /**< Transmit Ready 1 Interrupt Enable     */
    using TXUR0   = regbits< type, 12,  1 >;  /**< Transmit Underrun 0 Interrupt Enable  */
    using TXUR1   = regbits< type, 13,  1 >;  /**< Transmit Underrun 1 Interrupt Enable  */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint16_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RXRDY0  = regbits< type,  0,  1 >;  /**< Receive Ready 0 Interrupt Enable      */
    using RXRDY1  = regbits< type,  1,  1 >;  /**< Receive Ready 1 Interrupt Enable      */
    using RXOR0   = regbits< type,  4,  1 >;  /**< Receive Overrun 0 Interrupt Enable    */
    using RXOR1   = regbits< type,  5,  1 >;  /**< Receive Overrun 1 Interrupt Enable    */
    using TXRDY0  = regbits< type,  8,  1 >;  /**< Transmit Ready 0 Interrupt Enable     */
    using TXRDY1  = regbits< type,  9,  1 >;  /**< Transmit Ready 1 Interrupt Enable     */
    using TXUR0   = regbits< type, 12,  1 >;  /**< Transmit Underrun 0 Interrupt Enable  */
    using TXUR1   = regbits< type, 13,  1 >;  /**< Transmit Underrun 1 Interrupt Enable  */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint16_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RXRDY0  = regbits< type,  0,  1 >;  /**< Receive Ready 0      */
    using RXRDY1  = regbits< type,  1,  1 >;  /**< Receive Ready 1      */
    using RXOR0   = regbits< type,  4,  1 >;  /**< Receive Overrun 0    */
    using RXOR1   = regbits< type,  5,  1 >;  /**< Receive Overrun 1    */
    using TXRDY0  = regbits< type,  8,  1 >;  /**< Transmit Ready 0     */
    using TXRDY1  = regbits< type,  9,  1 >;  /**< Transmit Ready 1     */
    using TXUR0   = regbits< type, 12,  1 >;  /**< Transmit Underrun 0  */
    using TXUR1   = regbits< type, 13,  1 >;  /**< Transmit Underrun 1  */
  };

  /**
   * Serializer n Control
   */
  struct SERCTRL%s
  : public reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SERMODE    = regbits< type,  0,  2 >;  /**< Serializer Mode                       */
    using TXDEFAULT  = regbits< type,  2,  2 >;  /**< Line Default Line when Slot Disabled  */
    using TXSAME     = regbits< type,  4,  1 >;  /**< Transmit Data when Underrun           */
    using CLKSEL     = regbits< type,  5,  1 >;  /**< Clock Unit Selection                  */
    using SLOTADJ    = regbits< type,  7,  1 >;  /**< Data Slot Formatting Adjust           */
    using DATASIZE   = regbits< type,  8,  3 >;  /**< Data Word Size                        */
    using WORDADJ    = regbits< type, 12,  1 >;  /**< Data Word Formatting Adjust           */
    using EXTEND     = regbits< type, 13,  2 >;  /**< Data Formatting Bit Extension         */
    using BITREV     = regbits< type, 15,  1 >;  /**< Data Formatting Bit Reverse           */
    using SLOTDIS0   = regbits< type, 16,  1 >;  /**< Slot 0 Disabled for this Serializer   */
    using SLOTDIS1   = regbits< type, 17,  1 >;  /**< Slot 1 Disabled for this Serializer   */
    using SLOTDIS2   = regbits< type, 18,  1 >;  /**< Slot 2 Disabled for this Serializer   */
    using SLOTDIS3   = regbits< type, 19,  1 >;  /**< Slot 3 Disabled for this Serializer   */
    using SLOTDIS4   = regbits< type, 20,  1 >;  /**< Slot 4 Disabled for this Serializer   */
    using SLOTDIS5   = regbits< type, 21,  1 >;  /**< Slot 5 Disabled for this Serializer   */
    using SLOTDIS6   = regbits< type, 22,  1 >;  /**< Slot 6 Disabled for this Serializer   */
    using SLOTDIS7   = regbits< type, 23,  1 >;  /**< Slot 7 Disabled for this Serializer   */
    using MONO       = regbits< type, 24,  1 >;  /**< Mono Mode                             */
    using DMA        = regbits< type, 25,  1 >;  /**< Single or Multiple DMA Channels       */
    using RXLOOP     = regbits< type, 26,  1 >;  /**< Loop-back Test Mode                   */
  };

  /**
   * Synchronization Status
   */
  struct SYNCBUSY
  : public reg< uint16_t, base_addr + 0x18, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x18, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST   = regbits< type,  0,  1 >;  /**< Software Reset Synchronization Status       */
    using ENABLE  = regbits< type,  1,  1 >;  /**< Enable Synchronization Status               */
    using CKEN0   = regbits< type,  2,  1 >;  /**< Clock Unit 0 Enable Synchronization Status  */
    using CKEN1   = regbits< type,  3,  1 >;  /**< Clock Unit 1 Enable Synchronization Status  */
    using SEREN0  = regbits< type,  4,  1 >;  /**< Serializer 0 Enable Synchronization Status  */
    using SEREN1  = regbits< type,  5,  1 >;  /**< Serializer 1 Enable Synchronization Status  */
    using DATA0   = regbits< type,  8,  1 >;  /**< Data 0 Synchronization Status               */
    using DATA1   = regbits< type,  9,  1 >;  /**< Data 1 Synchronization Status               */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2S_HPP_INCLUDED
