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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9X35.svd"
//
//  vendor: Atmel
//  name: AT91SAM9X35
//  series: SAM9X
//  version: 20130207
//  description: Atmel AT91SAM9X35 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, LCD, Touchscreen, Ethernet, Dual CAN, HS USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9X35.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SPI1_HPP_INCLUDED
#define ARCH_REG_SPI1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial Peripheral Interface 1
 */
struct SPI1
{
  static constexpr reg_addr_t base_addr = 0xf0004000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using SPIEN     = regbits< type,  0,  1 >;  /**< SPI Enable          */
    using SPIDIS    = regbits< type,  1,  1 >;  /**< SPI Disable         */
    using SWRST     = regbits< type,  7,  1 >;  /**< SPI Software Reset  */
    using LASTXFER  = regbits< type, 24,  1 >;  /**< Last Transfer       */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using MSTR     = regbits< type,  0,  1 >;  /**< Master/Slave Mode               */
    using PS       = regbits< type,  1,  1 >;  /**< Peripheral Select               */
    using PCSDEC   = regbits< type,  2,  1 >;  /**< Chip Select Decode              */
    using MODFDIS  = regbits< type,  4,  1 >;  /**< Mode Fault Detection            */
    using WDRBT    = regbits< type,  5,  1 >;  /**< Wait Data Read Before Transfer  */
    using LLB      = regbits< type,  7,  1 >;  /**< Local Loopback Enable           */
    using PCS      = regbits< type, 16,  4 >;  /**< Peripheral Chip Select          */
    using DLYBCS   = regbits< type, 24,  8 >;  /**< Delay Between Chip Selects      */
  };

  /**
   * Receive Data Register
   */
  struct RDR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >;

    using RD   = regbits< type,  0, 16 >;  /**< Receive Data            */
    using PCS  = regbits< type, 16,  4 >;  /**< Peripheral Chip Select  */
  };

  /**
   * Transmit Data Register
   */
  struct TDR
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using TD        = regbits< type,  0, 16 >;  /**< Transmit Data           */
    using PCS       = regbits< type, 16,  4 >;  /**< Peripheral Chip Select  */
    using LASTXFER  = regbits< type, 24,  1 >;  /**< Last Transfer           */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x000000F0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x000000F0 >;

    using RDRF     = regbits< type,  0,  1 >;  /**< Receive Data Register Full    */
    using TDRE     = regbits< type,  1,  1 >;  /**< Transmit Data Register Empty  */
    using MODF     = regbits< type,  2,  1 >;  /**< Mode Fault Error              */
    using OVRES    = regbits< type,  3,  1 >;  /**< Overrun Error Status          */
    using NSSR     = regbits< type,  8,  1 >;  /**< NSS Rising                    */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmission Registers Empty  */
    using SPIENS   = regbits< type, 16,  1 >;  /**< SPI Enable Status             */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using RDRF     = regbits< type,  0,  1 >;  /**< Receive Data Register Full Interrupt Enable        */
    using TDRE     = regbits< type,  1,  1 >;  /**< SPI Transmit Data Register Empty Interrupt Enable  */
    using MODF     = regbits< type,  2,  1 >;  /**< Mode Fault Error Interrupt Enable                  */
    using OVRES    = regbits< type,  3,  1 >;  /**< Overrun Error Interrupt Enable                     */
    using TXBUFE   = regbits< type,  7,  1 >;
    using NSSR     = regbits< type,  8,  1 >;  /**< NSS Rising Interrupt Enable                        */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmission Registers Empty Enable                */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000018, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, wo, 0 >;

    using RDRF     = regbits< type,  0,  1 >;  /**< Receive Data Register Full Interrupt Disable        */
    using TDRE     = regbits< type,  1,  1 >;  /**< SPI Transmit Data Register Empty Interrupt Disable  */
    using MODF     = regbits< type,  2,  1 >;  /**< Mode Fault Error Interrupt Disable                  */
    using OVRES    = regbits< type,  3,  1 >;  /**< Overrun Error Interrupt Disable                     */
    using NSSR     = regbits< type,  8,  1 >;  /**< NSS Rising Interrupt Disable                        */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmission Registers Empty Disable                */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using RDRF     = regbits< type,  0,  1 >;  /**< Receive Data Register Full Interrupt Mask        */
    using TDRE     = regbits< type,  1,  1 >;  /**< SPI Transmit Data Register Empty Interrupt Mask  */
    using MODF     = regbits< type,  2,  1 >;  /**< Mode Fault Error Interrupt Mask                  */
    using OVRES    = regbits< type,  3,  1 >;  /**< Overrun Error Interrupt Mask                     */
    using NSSR     = regbits< type,  8,  1 >;  /**< NSS Rising Interrupt Mask                        */
    using TXEMPTY  = regbits< type,  9,  1 >;  /**< Transmission Registers Empty Mask                */
  };

  /**
   * Chip Select Register
   */
  struct CSR[%s]
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CPOL    = regbits< type,  0,  1 >;  /**< Clock Polarity                       */
    using NCPHA   = regbits< type,  1,  1 >;  /**< Clock Phase                          */
    using CSAAT   = regbits< type,  3,  1 >;  /**< Chip Select Active After Transfer    */
    using BITS    = regbits< type,  4,  4 >;  /**< Bits Per Transfer                    */
    using SCBR    = regbits< type,  8,  8 >;  /**< Serial Clock Baud Rate               */
    using DLYBS   = regbits< type, 16,  8 >;  /**< Delay Before SPCK                    */
    using DLYBCT  = regbits< type, 24,  8 >;  /**< Delay Between Consecutive Transfers  */
  };

  /**
   * Write Protection Control Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protection Enable        */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protection Key Password  */
  };

  /**
   * Write Protection Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protection Violation Status  */
    using WPVSRC  = regbits< type,  8,  8 >;  /**< Write Protection Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SPI1_HPP_INCLUDED
