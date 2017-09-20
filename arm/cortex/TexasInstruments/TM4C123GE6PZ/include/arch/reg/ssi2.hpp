/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123GE6PZ.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123GE6PZ
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SSI2_HPP_INCLUDED
#define ARCH_REG_SSI2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for SSI0 peripheral
 *
 * (derived from: SSI0)
 */
struct SSI2
{
  static constexpr reg_addr_t base_addr = 0x4000a000;

  /**
   * SSI Control 0
   */
  struct CR0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_CR0_DSS  = regbits< type,  0,  4 >;  /**< SSI Data Size Select       */
    using SSI_CR0_FRF  = regbits< type,  4,  2 >;  /**< SSI Frame Format Select    */
    using SSI_CR0_SPO  = regbits< type,  6,  1 >;  /**< SSI Serial Clock Polarity  */
    using SSI_CR0_SPH  = regbits< type,  7,  1 >;  /**< SSI Serial Clock Phase     */
    using SSI_CR0_SCR  = regbits< type,  8,  8 >;  /**< SSI Serial Clock Rate      */
  };

  /**
   * SSI Control 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_CR1_LBM  = regbits< type,  0,  1 >;  /**< SSI Loopback Mode                   */
    using SSI_CR1_SSE  = regbits< type,  1,  1 >;  /**< SSI Synchronous Serial Port Enable  */
    using SSI_CR1_MS   = regbits< type,  2,  1 >;  /**< SSI Master/Slave Select             */
    using SSI_CR1_SOD  = regbits< type,  3,  1 >;  /**< SSI Slave Mode Output Disable       */
    using SSI_CR1_EOT  = regbits< type,  4,  1 >;  /**< End of Transmission                 */
  };

  /**
   * SSI Data
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_DR_DATA  = regbits< type,  0, 16 >;  /**< SSI Receive/Transmit Data  */
  };

  /**
   * SSI Status
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_SR_TFE  = regbits< type,  0,  1 >;  /**< SSI Transmit FIFO Empty     */
    using SSI_SR_TNF  = regbits< type,  1,  1 >;  /**< SSI Transmit FIFO Not Full  */
    using SSI_SR_RNE  = regbits< type,  2,  1 >;  /**< SSI Receive FIFO Not Empty  */
    using SSI_SR_RFF  = regbits< type,  3,  1 >;  /**< SSI Receive FIFO Full       */
    using SSI_SR_BSY  = regbits< type,  4,  1 >;  /**< SSI Busy Bit                */
  };

  /**
   * SSI Clock Prescale
   */
  struct CPSR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_CPSR_CPSDVSR  = regbits< type,  0,  8 >;  /**< SSI Clock Prescale Divisor  */
  };

  /**
   * SSI Interrupt Mask
   */
  struct IM
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_IM_RORIM  = regbits< type,  0,  1 >;  /**< SSI Receive Overrun Interrupt Mask   */
    using SSI_IM_RTIM   = regbits< type,  1,  1 >;  /**< SSI Receive Time-Out Interrupt Mask  */
    using SSI_IM_RXIM   = regbits< type,  2,  1 >;  /**< SSI Receive FIFO Interrupt Mask      */
    using SSI_IM_TXIM   = regbits< type,  3,  1 >;  /**< SSI Transmit FIFO Interrupt Mask     */
  };

  /**
   * SSI Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_RIS_RORRIS  = regbits< type,  0,  1 >;  /**< SSI Receive Overrun Raw Interrupt Status   */
    using SSI_RIS_RTRIS   = regbits< type,  1,  1 >;  /**< SSI Receive Time-Out Raw Interrupt Status  */
    using SSI_RIS_RXRIS   = regbits< type,  2,  1 >;  /**< SSI Receive FIFO Raw Interrupt Status      */
    using SSI_RIS_TXRIS   = regbits< type,  3,  1 >;  /**< SSI Transmit FIFO Raw Interrupt Status     */
  };

  /**
   * SSI Masked Interrupt Status
   */
  struct MIS
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_MIS_RORMIS  = regbits< type,  0,  1 >;  /**< SSI Receive Overrun Masked Interrupt Status   */
    using SSI_MIS_RTMIS   = regbits< type,  1,  1 >;  /**< SSI Receive Time-Out Masked Interrupt Status  */
    using SSI_MIS_RXMIS   = regbits< type,  2,  1 >;  /**< SSI Receive FIFO Masked Interrupt Status      */
    using SSI_MIS_TXMIS   = regbits< type,  3,  1 >;  /**< SSI Transmit FIFO Masked Interrupt Status     */
  };

  /**
   * SSI Interrupt Clear
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0 >;

    using SSI_ICR_RORIC  = regbits< type,  0,  1 >;  /**< SSI Receive Overrun Interrupt Clear   */
    using SSI_ICR_RTIC   = regbits< type,  1,  1 >;  /**< SSI Receive Time-Out Interrupt Clear  */
  };

  /**
   * SSI DMA Control
   */
  struct DMACTL
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_DMACTL_RXDMAE  = regbits< type,  0,  1 >;  /**< Receive DMA Enable   */
    using SSI_DMACTL_TXDMAE  = regbits< type,  1,  1 >;  /**< Transmit DMA Enable  */
  };

  /**
   * SSI Clock Configuration
   */
  struct CC
  : public reg< uint32_t, base_addr + 0x00000fc8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SSI_CC_CS  = regbits< type,  0,  4 >;  /**< SSI Baud Clock Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SSI2_HPP_INCLUDED
