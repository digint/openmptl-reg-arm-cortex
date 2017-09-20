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
//  Import from CMSIS-SVD: "Freescale/MK60DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK60DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK60DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SPI0_HPP_INCLUDED
#define ARCH_REG_SPI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Deserial Serial Peripheral Interface
 */
struct SPI0
{
  static constexpr reg_addr_t base_addr = 0x4002c000;

  /**
   * DSPI Module Configuration Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0, rw, 0x4001 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x4001 >;

    using HALT       = regbits< type,  0,  1 >;  /**< Halt                                     */
    using SMPL_PT    = regbits< type,  8,  2 >;  /**< Sample Point                             */
    using CLR_RXF    = regbits< type, 10,  1 >;  /**< no description available                 */
    using CLR_TXF    = regbits< type, 11,  1 >;  /**< Clear TX FIFO                            */
    using DIS_RXF    = regbits< type, 12,  1 >;  /**< Disable Receive FIFO                     */
    using DIS_TXF    = regbits< type, 13,  1 >;  /**< Disable Transmit FIFO                    */
    using MDIS       = regbits< type, 14,  1 >;  /**< Module Disable                           */
    using DOZE       = regbits< type, 15,  1 >;  /**< Doze Enable                              */
    using PCSIS      = regbits< type, 16,  6 >;  /**< Peripheral Chip Select x Inactive State  */
    using ROOE       = regbits< type, 24,  1 >;  /**< Receive FIFO Overflow Overwrite Enable   */
    using PCSSE      = regbits< type, 25,  1 >;  /**< Peripheral Chip Select Strobe Enable     */
    using MTFE       = regbits< type, 26,  1 >;  /**< Modified Timing Format Enable            */
    using FRZ        = regbits< type, 27,  1 >;  /**< Freeze                                   */
    using DCONF      = regbits< type, 28,  2 >;  /**< DSPI Configuration                       */
    using CONT_SCKE  = regbits< type, 30,  1 >;  /**< Continuous SCK Enable                    */
    using MSTR       = regbits< type, 31,  1 >;  /**< Master/Slave Mode Select                 */
  };

  /**
   * DSPI Transfer Count Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using SPI_TCNT  = regbits< type, 16, 16 >;  /**< SPI Transfer Counter  */
  };

  /**
   * DSPI Clock and Transfer Attributes Register (In Master Mode)
   */
  struct CTAR%s
  : public reg< uint32_t, base_addr + 0xc, rw, 0x78000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x78000000 >;

    using BR      = regbits< type,  0,  4 >;  /**< Baud Rate Scaler                */
    using DT      = regbits< type,  4,  4 >;  /**< Delay After Transfer Scaler     */
    using ASC     = regbits< type,  8,  4 >;  /**< After SCK Delay Scaler          */
    using CSSCK   = regbits< type, 12,  4 >;  /**< PCS to SCK Delay Scaler         */
    using PBR     = regbits< type, 16,  2 >;  /**< Baud Rate Prescaler             */
    using PDT     = regbits< type, 18,  2 >;  /**< Delay after Transfer Prescaler  */
    using PASC    = regbits< type, 20,  2 >;  /**< After SCK Delay Prescaler       */
    using PCSSCK  = regbits< type, 22,  2 >;  /**< PCS to SCK Delay Prescaler      */
    using LSBFE   = regbits< type, 24,  1 >;  /**< LBS First                       */
    using CPHA    = regbits< type, 25,  1 >;  /**< Clock Phase                     */
    using CPOL    = regbits< type, 26,  1 >;  /**< Clock Polarity                  */
    using FMSZ    = regbits< type, 27,  4 >;  /**< Frame Size                      */
    using DBR     = regbits< type, 31,  1 >;  /**< Double Baud Rate                */
  };

  /**
   * DSPI Clock and Transfer Attributes Register (In Slave Mode)
   */
  struct CTAR_SLAVE
  : public reg< uint32_t, base_addr + 0xc, rw, 0x78000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x78000000 >;

    using CPHA  = regbits< type, 25,  1 >;  /**< Clock Phase     */
    using CPOL  = regbits< type, 26,  1 >;  /**< Clock Polarity  */
    using FMSZ  = regbits< type, 27,  5 >;  /**< Frame Size      */
  };

  /**
   * DSPI Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x2000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x2000000 >;

    using POPNXTPTR  = regbits< type,  0,  4 >;  /**< Pop Next Pointer              */
    using RXCTR      = regbits< type,  4,  4 >;  /**< RX FIFO Counter               */
    using TXNXTPTR   = regbits< type,  8,  4 >;  /**< Transmit Next Pointer         */
    using TXCTR      = regbits< type, 12,  4 >;  /**< TX FIFO Counter               */
    using RFDF       = regbits< type, 17,  1 >;  /**< Receive FIFO Drain Flag       */
    using RFOF       = regbits< type, 19,  1 >;  /**< Receive FIFO Overflow Flag    */
    using TFFF       = regbits< type, 25,  1 >;  /**< Transmit FIFO Fill Flag       */
    using TFUF       = regbits< type, 27,  1 >;  /**< Transmit FIFO Underflow Flag  */
    using EOQF       = regbits< type, 28,  1 >;  /**< End of Queue Flag             */
    using TXRXS      = regbits< type, 30,  1 >;  /**< TX and RX Status              */
    using TCF        = regbits< type, 31,  1 >;  /**< Transfer Complete Flag        */
  };

  /**
   * DSPI DMA/Interrupt Request Select and Enable Register
   */
  struct RSER
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using RFDF_DIRS  = regbits< type, 16,  1 >;  /**< Receive FIFO Drain DMA or Interrupt Request Select.  */
    using RFDF_RE    = regbits< type, 17,  1 >;  /**< Receive FIFO Drain Request Enable                    */
    using RFOF_RE    = regbits< type, 19,  1 >;  /**< Receive FIFO Overflow Request Enable                 */
    using TFFF_DIRS  = regbits< type, 24,  1 >;  /**< Transmit FIFO Fill DMA or Interrupt Request Select   */
    using TFFF_RE    = regbits< type, 25,  1 >;  /**< Transmit FIFO Fill Request Enable                    */
    using TFUF_RE    = regbits< type, 27,  1 >;  /**< Transmit FIFO Underflow Request Enable               */
    using EOQF_RE    = regbits< type, 28,  1 >;  /**< DSPI Finished Request Enable                         */
    using TCF_RE     = regbits< type, 31,  1 >;  /**< Transmission Complete Request Enable                 */
  };

  /**
   * DSPI PUSH TX FIFO Register In Master Mode
   */
  struct PUSHR
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using TXDATA  = regbits< type,  0, 16 >;  /**< Transmit Data                             */
    using PCS     = regbits< type, 16,  6 >;  /**< no description available                  */
    using CTCNT   = regbits< type, 26,  1 >;  /**< Clear Transfer Counter.                   */
    using EOQ     = regbits< type, 27,  1 >;  /**< End Of Queue                              */
    using CTAS    = regbits< type, 28,  3 >;  /**< Clock and Transfer Attributes Select.     */
    using CONT    = regbits< type, 31,  1 >;  /**< Continuous Peripheral Chip Select Enable  */
  };

  /**
   * DSPI PUSH TX FIFO Register In Slave Mode
   */
  struct PUSHR_SLAVE
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using TXDATA  = regbits< type,  0, 32 >;  /**< Transmit Data  */
  };

  /**
   * DSPI POP RX FIFO Register
   */
  struct POPR
  : public reg< uint32_t, base_addr + 0x38, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0 >;

    using RXDATA  = regbits< type,  0, 32 >;  /**< Received Data  */
  };

  /**
   * DSPI Transmit FIFO Registers
   */
  struct TXFR%s
  : public reg< uint32_t, base_addr + 0x3c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0 >;

    using TXDATA        = regbits< type,  0, 16 >;  /**< Transmit Data                      */
    using TXCMD_TXDATA  = regbits< type, 16, 16 >;  /**< Transmit Command or Transmit Data  */
  };

  /**
   * DSPI Receive FIFO Registers
   */
  struct RXFR%s
  : public reg< uint32_t, base_addr + 0x7c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, ro, 0 >;

    using RXDATA  = regbits< type,  0, 32 >;  /**< Receive Data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SPI0_HPP_INCLUDED
