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
//  Import from CMSIS-SVD: "Freescale/MKL81Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL81Z7
//  series: Kinetis_L
//  version: 1.6
//  description: MKL81Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EMVSIM1_HPP_INCLUDED
#define ARCH_REG_EMVSIM1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * EMVSIM
 */
struct EMVSIM1
{
  static constexpr reg_addr_t base_addr = 0x4004f000;

  /**
   * Version ID Register
   */
  struct VER_ID
  : public reg< uint32_t, base_addr + 0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0 >;

    using VER  = regbits< type,  0, 32 >;  /**< Version ID of the module  */
  };

  /**
   * Parameter Register
   */
  struct PARAM
  : public reg< uint32_t, base_addr + 0x4, ro, 0x1010 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x1010 >;

    using RX_FIFO_DEPTH  = regbits< type,  0,  8 >;  /**< Receive FIFO Depth   */
    using TX_FIFO_DEPTH  = regbits< type,  8,  8 >;  /**< Transmit FIFO Depth  */
  };

  /**
   * Clock Configuration Register
   */
  struct CLKCFG
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using CLK_PRSC        = regbits< type,  0,  8 >;  /**< Clock Prescaler Value                   */
    using GPCNT1_CLK_SEL  = regbits< type,  8,  2 >;  /**< General Purpose Counter 1 Clock Select  */
    using GPCNT0_CLK_SEL  = regbits< type, 10,  2 >;  /**< General Purpose Counter 0 Clock Select  */
  };

  /**
   * Baud Rate Divisor Register
   */
  struct DIVISOR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x174 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x174 >;

    using DIVISOR_VALUE  = regbits< type,  0,  9 >;  /**< Divisor (F/D) Value  */
  };

  /**
   * Control Register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x10, rw, 0x1000006 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x1000006 >;

    using IC            = regbits< type,  0,  1 >;  /**< Inverse Convention                             */
    using ICM           = regbits< type,  1,  1 >;  /**< Initial Character Mode                         */
    using ANACK         = regbits< type,  2,  1 >;  /**< Auto NACK Enable                               */
    using ONACK         = regbits< type,  3,  1 >;  /**< Overrun NACK Enable                            */
    using FLSH_RX       = regbits< type,  8,  1 >;  /**< Flush Receiver Bit                             */
    using FLSH_TX       = regbits< type,  9,  1 >;  /**< Flush Transmitter Bit                          */
    using SW_RST        = regbits< type, 10,  1 >;  /**< Software Reset Bit                             */
    using KILL_CLOCKS   = regbits< type, 11,  1 >;  /**< Kill all internal clocks                       */
    using DOZE_EN       = regbits< type, 12,  1 >;  /**< Doze Enable                                    */
    using STOP_EN       = regbits< type, 13,  1 >;  /**< STOP Enable                                    */
    using RCV_EN        = regbits< type, 16,  1 >;  /**< Receiver Enable                                */
    using XMT_EN        = regbits< type, 17,  1 >;  /**< Transmitter Enable                             */
    using RCVR_11       = regbits< type, 18,  1 >;  /**< Receiver 11 ETU Mode Enable                    */
    using RX_DMA_EN     = regbits< type, 19,  1 >;  /**< Receive DMA Enable                             */
    using TX_DMA_EN     = regbits< type, 20,  1 >;  /**< Transmit DMA Enable                            */
    using INV_CRC_VAL   = regbits< type, 24,  1 >;  /**< Invert bits in the CRC Output Value            */
    using CRC_OUT_FLIP  = regbits< type, 25,  1 >;  /**< CRC Output Value Bit Reversal or Flip          */
    using CRC_IN_FLIP   = regbits< type, 26,  1 >;  /**< CRC Input Byte's Bit Reversal or Flip Control  */
    using CWT_EN        = regbits< type, 27,  1 >;  /**< Character Wait Time Counter Enable             */
    using LRC_EN        = regbits< type, 28,  1 >;  /**< LRC Enable                                     */
    using CRC_EN        = regbits< type, 29,  1 >;  /**< CRC Enable                                     */
    using XMT_CRC_LRC   = regbits< type, 30,  1 >;  /**< Transmit CRC or LRC Enable                     */
    using BWT_EN        = regbits< type, 31,  1 >;  /**< Block Wait Time Counter Enable                 */
  };

  /**
   * Interrupt Mask Register
   */
  struct INT_MASK
  : public reg< uint32_t, base_addr + 0x14, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0xFFFF >;

    using RDT_IM      = regbits< type,  0,  1 >;  /**< Receive Data Threshold Interrupt Mask             */
    using TC_IM       = regbits< type,  1,  1 >;  /**< Transmit Complete Interrupt Mask                  */
    using RFO_IM      = regbits< type,  2,  1 >;  /**< Receive FIFO Overflow Interrupt Mask              */
    using ETC_IM      = regbits< type,  3,  1 >;  /**< Early Transmit Complete Interrupt Mask            */
    using TFE_IM      = regbits< type,  4,  1 >;  /**< Transmit FIFO Empty Interrupt Mask                */
    using TNACK_IM    = regbits< type,  5,  1 >;  /**< Transmit NACK Threshold Interrupt Mask            */
    using TFF_IM      = regbits< type,  6,  1 >;  /**< Transmit FIFO Full Interrupt Mask                 */
    using TDT_IM      = regbits< type,  7,  1 >;  /**< Transmit Data Threshold Interrupt Mask            */
    using GPCNT0_IM   = regbits< type,  8,  1 >;  /**< General Purpose Timer 0 Timeout Interrupt Mask    */
    using CWT_ERR_IM  = regbits< type,  9,  1 >;  /**< Character Wait Time Error Interrupt Mask          */
    using RNACK_IM    = regbits< type, 10,  1 >;  /**< Receiver NACK Threshold Interrupt Mask            */
    using BWT_ERR_IM  = regbits< type, 11,  1 >;  /**< Block Wait Time Error Interrupt Mask              */
    using BGT_ERR_IM  = regbits< type, 12,  1 >;  /**< Block Guard Time Error Interrupt                  */
    using GPCNT1_IM   = regbits< type, 13,  1 >;  /**< General Purpose Counter 1 Timeout Interrupt Mask  */
    using RX_DATA_IM  = regbits< type, 14,  1 >;  /**< Receive Data Interrupt Mask                       */
    using PEF_IM      = regbits< type, 15,  1 >;  /**< Parity Error Interrupt Mask                       */
  };

  /**
   * Receiver Threshold Register
   */
  struct RX_THD
  : public reg< uint32_t, base_addr + 0x18, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x1 >;

    using RDT       = regbits< type,  0,  4 >;  /**< Receiver Data Threshold Value  */
    using RNCK_THD  = regbits< type,  8,  4 >;  /**< Receiver NACK Threshold Value  */
  };

  /**
   * Transmitter Threshold Register
   */
  struct TX_THD
  : public reg< uint32_t, base_addr + 0x1c, rw, 0xF >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0xF >;

    using TDT       = regbits< type,  0,  4 >;  /**< Transmitter Data Threshold Value  */
    using TNCK_THD  = regbits< type,  8,  4 >;  /**< Transmitter NACK Threshold Value  */
  };

  /**
   * Receive Status Register
   */
  struct RX_STATUS
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using RFO      = regbits< type,  0,  1 >;  /**< Receive FIFO Overflow Flag             */
    using RX_DATA  = regbits< type,  4,  1 >;  /**< Receive Data Interrupt Flag            */
    using RDTF     = regbits< type,  5,  1 >;  /**< Receive Data Threshold Interrupt Flag  */
    using LRC_OK   = regbits< type,  6,  1 >;  /**< LRC Check OK Flag                      */
    using CRC_OK   = regbits< type,  7,  1 >;  /**< CRC Check OK Flag                      */
    using CWT_ERR  = regbits< type,  8,  1 >;  /**< Character Wait Time Error Flag         */
    using RTE      = regbits< type,  9,  1 >;  /**< Received NACK Threshold Error Flag     */
    using BWT_ERR  = regbits< type, 10,  1 >;  /**< Block Wait Time Error Flag             */
    using BGT_ERR  = regbits< type, 11,  1 >;  /**< Block Guard Time Error Flag            */
    using PEF      = regbits< type, 12,  1 >;  /**< Parity Error Flag                      */
    using FEF      = regbits< type, 13,  1 >;  /**< Frame Error Flag                       */
    using RX_WPTR  = regbits< type, 16,  4 >;  /**< Receive FIFO Write Pointer Value       */
    using RX_CNT   = regbits< type, 24,  8 >;  /**< Receive FIFO Byte Count                */
  };

  /**
   * Transmitter Status Register
   */
  struct TX_STATUS
  : public reg< uint32_t, base_addr + 0x24, rw, 0xB8 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0xB8 >;

    using TNTE       = regbits< type,  0,  1 >;  /**< Transmit NACK Threshold Error Flag      */
    using TFE        = regbits< type,  3,  1 >;  /**< Transmit FIFO Empty Flag                */
    using ETCF       = regbits< type,  4,  1 >;  /**< Early Transmit Complete Flag            */
    using TCF        = regbits< type,  5,  1 >;  /**< Transmit Complete Flag                  */
    using TFF        = regbits< type,  6,  1 >;  /**< Transmit FIFO Full Flag                 */
    using TDTF       = regbits< type,  7,  1 >;  /**< Transmit Data Threshold Flag            */
    using GPCNT0_TO  = regbits< type,  8,  1 >;  /**< General Purpose Counter 0 Timeout Flag  */
    using GPCNT1_TO  = regbits< type,  9,  1 >;  /**< General Purpose Counter 1 Timeout Flag  */
    using TX_RPTR    = regbits< type, 16,  4 >;  /**< Transmit FIFO Read Pointer              */
    using TX_CNT     = regbits< type, 24,  8 >;  /**< Transmit FIFO Byte Count                */
  };

  /**
   * Port Control and Status Register
   */
  struct PCSR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x1000000 >;

    using SAPD     = regbits< type,  0,  1 >;  /**< Auto Power Down Enable                     */
    using SVCC_EN  = regbits< type,  1,  1 >;  /**< Vcc Enable for Smart Card                  */
    using VCCENP   = regbits< type,  2,  1 >;  /**< VCC Enable Polarity Control                */
    using SRST     = regbits< type,  3,  1 >;  /**< Reset to Smart Card                        */
    using SCEN     = regbits< type,  4,  1 >;  /**< Clock Enable for Smart Card                */
    using SCSP     = regbits< type,  5,  1 >;  /**< Smart Card Clock Stop Polarity             */
    using SPD      = regbits< type,  7,  1 >;  /**< Auto Power Down Control                    */
    using SPDIM    = regbits< type, 24,  1 >;  /**< Smart Card Presence Detect Interrupt Mask  */
    using SPDIF    = regbits< type, 25,  1 >;  /**< Smart Card Presence Detect Interrupt Flag  */
    using SPDP     = regbits< type, 26,  1 >;  /**< Smart Card Presence Detect Pin Status      */
    using SPDES    = regbits< type, 27,  1 >;  /**< SIM Presence Detect Edge Select            */
  };

  /**
   * Receive Data Read Buffer
   */
  struct RX_BUF
  : public reg< uint32_t, base_addr + 0x2c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0 >;

    using RX_BYTE  = regbits< type,  0,  8 >;  /**< Receive Data Byte Read  */
  };

  /**
   * Transmit Data Buffer
   */
  struct TX_BUF
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using TX_BYTE  = regbits< type,  0,  8 >;  /**< Transmit Data Byte  */
  };

  /**
   * Transmitter Guard ETU Value Register
   */
  struct TX_GETU
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using GETU  = regbits< type,  0,  8 >;  /**< Transmitter Guard Time Value in ETU  */
  };

  /**
   * Character Wait Time Value Register
   */
  struct CWT_VAL
  : public reg< uint32_t, base_addr + 0x38, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0xFFFF >;

    using CWT  = regbits< type,  0, 16 >;  /**< Character Wait Time Value  */
  };

  /**
   * Block Wait Time Value Register
   */
  struct BWT_VAL
  : public reg< uint32_t, base_addr + 0x3c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0xFFFFFFFF >;

    using BWT  = regbits< type,  0, 32 >;  /**< Block Wait Time Value  */
  };

  /**
   * Block Guard Time Value Register
   */
  struct BGT_VAL
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using BGT  = regbits< type,  0, 16 >;  /**< Block Guard Time Value  */
  };

  /**
   * General Purpose Counter 0 Timeout Value Register
   */
  struct GPCNT0_VAL
  : public reg< uint32_t, base_addr + 0x44, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0xFFFF >;

    using GPCNT0  = regbits< type,  0, 16 >;  /**< General Purpose Counter 0 Timeout Value  */
  };

  /**
   * General Purpose Counter 1 Timeout Value
   */
  struct GPCNT1_VAL
  : public reg< uint32_t, base_addr + 0x48, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0xFFFF >;

    using GPCNT1  = regbits< type,  0, 16 >;  /**< General Purpose Counter 1 Timeout Value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EMVSIM1_HPP_INCLUDED
