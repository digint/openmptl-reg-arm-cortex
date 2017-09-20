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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9M10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9M10
//  series: SAM9M
//  version: 20130207
//  description: Atmel AT91SAM9M10 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, DDR2/LPDDR, Video Decoder, LCD, HS USB, 10/100 Ethernet, Dual EBI, 324 Pins (refer to http://www.atmel.com/devices/SAM9M10.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DDRSDRC1_HPP_INCLUDED
#define ARCH_REG_DDRSDRC1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * DDR_SDR SDRAM Controller 1
 */
struct DDRSDRC1
{
  static constexpr reg_addr_t base_addr = 0xffffe400;

  /**
   * DDRSDRC Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using MODE  = regbits< type,  0,  3 >;  /**< DDRSDRC Command Mode  */
  };

  /**
   * DDRSDRC Refresh Timer Register
   */
  struct RTR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using COUNT  = regbits< type,  0, 12 >;  /**< DDRSDRC Refresh Timer Count  */
  };

  /**
   * DDRSDRC Configuration Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00007024 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00007024 >;

    using NC        = regbits< type,  0,  2 >;  /**< Number of Column Bits                           */
    using NR        = regbits< type,  2,  2 >;  /**< Number of Row Bits                              */
    using CAS       = regbits< type,  4,  3 >;  /**< CAS Latency                                     */
    using DLL       = regbits< type,  7,  1 >;  /**< Reset DLL                                       */
    using DIC       = regbits< type,  8,  1 >;  /**< Output Driver Impedance Control                 */
    using DIS_DLL   = regbits< type,  9,  1 >;  /**< Disable DLL                                     */
    using OCD       = regbits< type, 12,  3 >;  /**< Off-chip Driver                                 */
    using EBISHARE  = regbits< type, 16,  1 >;  /**< External Bus Interface is Shared                */
    using ACTBST    = regbits< type, 18,  1 >;  /**< ACTIVE Bank X to Burst Stop Read Access Bank Y  */
  };

  /**
   * DDRSDRC Timing Parameter 0 Register
   */
  struct TPR0
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x20227225 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x20227225 >;

    using TRAS         = regbits< type,  0,  4 >;  /**< Active to Precharge Delay                                */
    using TRCD         = regbits< type,  4,  4 >;  /**< Row to Column Delay                                      */
    using TWR          = regbits< type,  8,  4 >;  /**< Write Recovery Delay                                     */
    using TRC          = regbits< type, 12,  4 >;  /**< Row Cycle Delay                                          */
    using TRP          = regbits< type, 16,  4 >;  /**< Row Precharge Delay                                      */
    using TRRD         = regbits< type, 20,  4 >;  /**< Active bankA to Active bankB                             */
    using TWTR         = regbits< type, 24,  3 >;  /**< Internal Write to Read Delay                             */
    using REDUCE_WRRD  = regbits< type, 27,  1 >;  /**< Reduce Write to Read Delay                               */
    using TMRD         = regbits< type, 28,  4 >;  /**< Load Mode Register Command to Active or Refresh Command  */
  };

  /**
   * DDRSDRC Timing Parameter 1 Register
   */
  struct TPR1
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x03C80808 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x03C80808 >;

    using TRFC   = regbits< type,  0,  5 >;  /**< Row Cycle Delay                              */
    using TXSNR  = regbits< type,  8,  8 >;  /**< Exit Self Refresh Delay to Non-read Command  */
    using TXSRD  = regbits< type, 16,  8 >;  /**< ExiT Self Refresh Delay to Read Command      */
    using TXP    = regbits< type, 24,  4 >;  /**< Exit Power-down Delay to First Command       */
  };

  /**
   * DDRSDRC Timing Parameter 2 Register
   */
  struct TPR2
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00002062 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00002062 >;

    using TXARD   = regbits< type,  0,  4 >;  /**< Exit Active Power Down Delay to Read Command in Mode "Fast Exit".  */
    using TXARDS  = regbits< type,  4,  4 >;  /**< Exit Active Power Down Delay to Read Command in Mode "Slow Exit".  */
    using TRPA    = regbits< type,  8,  4 >;  /**< Row Precharge All Delay                                            */
    using TRTP    = regbits< type, 12,  3 >;  /**< Read to Precharge                                                  */
  };

  /**
   * DDRSDRC Low-power Register
   */
  struct LPR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00010000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00010000 >;

    using LPCB     = regbits< type,  0,  2 >;  /**< Low-power Command Bit                                 */
    using CLK_FR   = regbits< type,  2,  1 >;  /**< Clock Frozen Command Bit                              */
    using PASR     = regbits< type,  4,  3 >;  /**< Partial Array Self Refresh                            */
    using TCR      = regbits< type,  8,  2 >;  /**< Temperature Compensated Self Refresh                  */
    using DS       = regbits< type, 10,  2 >;  /**< Drive Strength                                        */
    using TIMEOUT  = regbits< type, 12,  2 >;  /**< Low Power Mode                                        */
    using APDE     = regbits< type, 16,  1 >;  /**< Active Power Down Exit Time                           */
    using UPD_MR   = regbits< type, 20,  2 >;  /**< Update Load Mode Register and Extended Mode Register  */
  };

  /**
   * DDRSDRC Memory Device Register
   */
  struct MD
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000010 >;

    // fixme: Field name equals parent register name: MD
    using MD_  = regbits< type,  0,  3 >;  /**< Memory Device   */
    using DBW  = regbits< type,  4,  1 >;  /**< Data Bus Width  */
  };

  /**
   * DDRSDRC DLL Information Register
   */
  struct DLL
  : public reg< uint32_t, base_addr + 0x00000024, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, ro, 0x00000001 >;

    using MDINC  = regbits< type,  0,  1 >;  /**< DLL Master Delay Increment      */
    using MDDEC  = regbits< type,  1,  1 >;  /**< DLL Master Delay Decrement      */
    using MDOVF  = regbits< type,  2,  1 >;  /**< DLL Master Delay Overflow Flag  */
    using MDVAL  = regbits< type,  8,  8 >;  /**< DLL Master Delay Value          */
  };

  /**
   * DDRSDRC High Speed Register
   */
  struct HS
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >;

    using DIS_ANTICIP_READ  = regbits< type,  2,  1 >;  /**< Anticip Read Access  */
  };

  /**
   * DDRSDRC Delay I/O Register
   */
  struct DELAY[%s]
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DELAY1  = regbits< type,  0,  4 >;  /**< Delay1..Delay8  */
    using DELAY2  = regbits< type,  4,  4 >;  /**< Delay1..Delay8  */
    using DELAY3  = regbits< type,  8,  4 >;  /**< Delay1..Delay8  */
    using DELAY4  = regbits< type, 12,  4 >;  /**< Delay1..Delay8  */
    using DELAY5  = regbits< type, 16,  4 >;  /**< Delay1..Delay8  */
    using DELAY6  = regbits< type, 20,  4 >;  /**< Delay1..Delay8  */
    using DELAY7  = regbits< type, 24,  4 >;  /**< Delay1..Delay8  */
    using DELAY8  = regbits< type, 28,  4 >;  /**< Delay1..Delay8  */
  };

  /**
   * DDRSDRC Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * DDRSDRC Write Protect Status Register
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

#endif // ARCH_REG_DDRSDRC1_HPP_INCLUDED
