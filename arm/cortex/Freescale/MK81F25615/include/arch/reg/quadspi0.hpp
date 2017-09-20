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
//  Import from CMSIS-SVD: "Freescale/MK81F25615.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK81F25615
//  series: Kinetis_K
//  version: 1.6
//  description: MK81F25615 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_QUADSPI0_HPP_INCLUDED
#define ARCH_REG_QUADSPI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * QuadSPI
 */
struct QuadSPI0
{
  static constexpr reg_addr_t base_addr = 0x400da000;

  /**
   * Module Configuration Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0, rw, 0xF400C >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xF400C >;

    using SWRSTSD     = regbits< type,  0,  1 >;  /**< Software reset for Serial Flash domain                                                                                                 */
    using SWRSTHD     = regbits< type,  1,  1 >;  /**< Software reset for AHB domain                                                                                                          */
    using END_CFG     = regbits< type,  2,  2 >;  /**< Defines the endianness of the QSPI module.For more details refer to Byte Ordering Endianess                                            */
    using DQS_LAT_EN  = regbits< type,  5,  1 >;  /**< DQS Latency Enable: This field is valid when latency is included in between read access from FLash in case when QSPI_MCR[DQS_EN] is 1  */
    using DQS_EN      = regbits< type,  6,  1 >;  /**< DQS enable: This field is valid for both SDR and DDR mode                                                                              */
    using DDR_EN      = regbits< type,  7,  1 >;  /**< DDR mode enable:                                                                                                                       */
    using CLR_RXF     = regbits< type, 10,  1 >;  /**< Clear RX FIFO. Invalidate the RX Buffer. This is a self-clearing field.                                                                */
    using CLR_TXF     = regbits< type, 11,  1 >;  /**< Clear TX FIFO/Buffer. Invalidate the TX Buffer content. This is a self-clearing field.                                                 */
    using MDIS        = regbits< type, 14,  1 >;  /**< Module Disable                                                                                                                         */
    using SCLKCFG     = regbits< type, 24,  8 >;  /**< Serial Clock Configuration                                                                                                             */
  };

  /**
   * IP Configuration Register
   */
  struct IPCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using IDATSZ  = regbits< type,  0, 16 >;  /**< IP data transfer size: Defines the data transfer size in bytes of the IP command.  */
    using PAR_EN  = regbits< type, 16,  1 >;  /**< When set, a transaction to two serial flash devices is triggered in parallel mode  */
    using SEQID   = regbits< type, 24,  4 >;  /**< Points to a sequence in the Look-up-table                                          */
  };

  /**
   * Flash Configuration Register
   */
  struct FLSHCR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x303 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x303 >;

    using TCSS  = regbits< type,  0,  4 >;  /**< Serial flash CS setup time in terms of serial flash clock cycles                                    */
    using TCSH  = regbits< type,  8,  4 >;  /**< Serial flash CS hold time in terms of serial flash clock cycles                                     */
    using TDH   = regbits< type, 16,  2 >;  /**< Serial flash Data In hold time: This helps in meeting the Data In Hold time requirement of a Flash  */
  };

  /**
   * Buffer0 Configuration Register
   */
  struct BUF0CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x2 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x2 >;

    using MSTRID  = regbits< type,  0,  4 >;  /**< Master ID: The ID of the AHB master associated with BUFFER0                                                                        */
    using ADATSZ  = regbits< type,  8,  7 >;  /**< AHB data transfer size                                                                                                             */
    using HP_EN   = regbits< type, 31,  1 >;  /**< High Priority Enable: When set, the master associated with this buffer is assigned a priority higher than the rest of the masters  */
  };

  /**
   * Buffer1 Configuration Register
   */
  struct BUF1CR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x3 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x3 >;

    using MSTRID  = regbits< type,  0,  4 >;  /**< Master ID: The ID of the AHB master associated with BUFFER1  */
    using ADATSZ  = regbits< type,  8,  7 >;  /**< AHB data transfer size                                       */
  };

  /**
   * Buffer2 Configuration Register
   */
  struct BUF2CR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x4 >;

    using MSTRID  = regbits< type,  0,  4 >;  /**< Master ID: The ID of the AHB master associated with BUFFER2  */
    using ADATSZ  = regbits< type,  8,  7 >;  /**< AHB data transfer size                                       */
  };

  /**
   * Buffer3 Configuration Register
   */
  struct BUF3CR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x80000000 >;

    using MSTRID  = regbits< type,  0,  4 >;  /**< Master ID: The ID of the AHB master associated with BUFFER3        */
    using ADATSZ  = regbits< type,  8,  7 >;  /**< AHB data transfer size                                             */
    using ALLMST  = regbits< type, 31,  1 >;  /**< All master enable: When set, buffer3 acts as an all-master buffer  */
  };

  /**
   * Buffer Generic Configuration Register
   */
  struct BFGENCR
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using SEQID   = regbits< type, 12,  4 >;  /**< Points to a sequence in the Look-up-table                                          */
    using PAR_EN  = regbits< type, 16,  1 >;  /**< When set, a transaction to two serial flash devices is triggered in parallel mode  */
  };

  /**
   * SOC Configuration Register
   */
  struct SOCCR
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using QSPISRC     = regbits< type,  0,  3 >;  /**< QSPI clock source select                                                                                                                                              */
    using DQSLPEN     = regbits< type,  8,  1 >;  /**< When this bit is set the internal generated DQS is selected and looped back to QuadSPI, without going to DQS pad. DQSPADLPEN should be cleared when this bit is set.  */
    using DQSPADLPEN  = regbits< type,  9,  1 >;  /**< When this bit is set the internal generated DQS will be sent to the DQS pad first and then looped back to QuadSPI. DQSLPEN should be cleared when this bit is set.    */
    using DQSPHASEL   = regbits< type, 10,  2 >;  /**< Select phase shift for internal DQS generation. These bits are always zero in SDR mode.                                                                               */
    using DQSINVSEL   = regbits< type, 12,  1 >;  /**< Select clock source for internal DQS generation                                                                                                                       */
    using CK2EN       = regbits< type, 13,  1 >;  /**< Flash CK2 clock pin enable                                                                                                                                            */
    using DIFFCKEN    = regbits< type, 14,  1 >;  /**< Differential flash clock pins enable                                                                                                                                  */
    using OCTEN       = regbits< type, 15,  1 >;  /**< Octal data pins enable                                                                                                                                                */
    using DLYTAPSELA  = regbits< type, 16,  6 >;  /**< Delay chain tap number selection for QSPI Port A DQS                                                                                                                  */
    using DLYTAPSELB  = regbits< type, 24,  6 >;  /**< Delay chain tap number selection for QSPI Port B DQS                                                                                                                  */
  };

  /**
   * Buffer0 Top Index Register
   */
  struct BUF0IND
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using TPINDX0  = regbits< type,  3, 29 >;  /**< Top index of buffer 0.  */
  };

  /**
   * Buffer1 Top Index Register
   */
  struct BUF1IND
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using TPINDX1  = regbits< type,  3, 29 >;  /**< Top index of buffer 1.  */
  };

  /**
   * Buffer2 Top Index Register
   */
  struct BUF2IND
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using TPINDX2  = regbits< type,  3, 29 >;  /**< Top index of buffer 2.  */
  };

  /**
   * Serial Flash Address Register
   */
  struct SFAR
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SFADR  = regbits< type,  0, 32 >;  /**< Serial Flash Address. The register content is used as byte address for all following IP Commands.  */
  };

  /**
   * Serial Flash Address Configuration Register
   */
  struct SFACR
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using CAS  = regbits< type,  0,  4 >;  /**< Column Address Space  */
    using WA   = regbits< type, 16,  1 >;  /**< Word Addressable      */
  };

  /**
   * Sampling Register
   */
  struct SMPR
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using HSENA   = regbits< type,  0,  1 >;  /**< Half Speed serial flash clock Enable                                                                                                                      */
    using HSPHS   = regbits< type,  1,  1 >;  /**< Half Speed Phase selection for SDR instructions.                                                                                                          */
    using HSDLY   = regbits< type,  2,  1 >;  /**< Half Speed Delay selection for SDR instructions.                                                                                                          */
    using FSPHS   = regbits< type,  5,  1 >;  /**< Full Speed Phase selection for SDR instructions.                                                                                                          */
    using FSDLY   = regbits< type,  6,  1 >;  /**< Full Speed Delay selection for SDR instructions. Select the delay with respect to the reference edge for the sample point valid for full speed commands:  */
    using DDRSMP  = regbits< type, 16,  3 >;  /**< DDR Sampling point                                                                                                                                        */
  };

  /**
   * RX Buffer Status Register
   */
  struct RBSR
  : public reg< uint32_t, base_addr + 0x10c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, ro, 0 >;

    using RDBFL  = regbits< type,  8,  5 >;  /**< RX Buffer Fill Level, indicates how many entries of 4 bytes are still available in the RX Buffer  */
    using RDCTR  = regbits< type, 16, 16 >;  /**< Read Counter, indicates how many entries of 4 bytes have been removed from the RX Buffer          */
  };

  /**
   * RX Buffer Control Register
   */
  struct RBCT
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using WMRK   = regbits< type,  0,  4 >;  /**< RX Buffer Watermark: This field determines when the readout action of the RX Buffer is triggered  */
    using RXBRD  = regbits< type,  8,  1 >;  /**< RX Buffer Readout: This bit specifies the access scheme for the RX Buffer readout.                */
  };

  /**
   * TX Buffer Status Register
   */
  struct TBSR
  : public reg< uint32_t, base_addr + 0x150, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x150, ro, 0 >;

    using TRBFL  = regbits< type,  8,  5 >;  /**< TX Buffer Fill Level  */
    using TRCTR  = regbits< type, 16, 16 >;  /**< Transmit Counter      */
  };

  /**
   * TX Buffer Data Register
   */
  struct TBDR
  : public reg< uint32_t, base_addr + 0x154, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0 >;

    using TXDATA  = regbits< type,  0, 32 >;  /**< TX Data On write access the data is written into the next available entry of the TX Buffer and the QPSI_TBSR[TRBFL] field is updated accordingly  */
  };

  /**
   * Tx Buffer Control Register
   */
  struct TBCT
  : public reg< uint32_t, base_addr + 0x158, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x158, rw, 0 >;

    using WMRK  = regbits< type,  0,  4 >;  /**< Determines the watermark for the TX Buffer  */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x15c, ro, 0x2003800 >
  {
    using type = reg< uint32_t, base_addr + 0x15c, ro, 0x2003800 >;

    using BUSY     = regbits< type,  0,  1 >;  /**< Module Busy: Asserted when module is currently busy handling a transaction to an external flash device                                          */
    using IP_ACC   = regbits< type,  1,  1 >;  /**< IP Access: Asserted when transaction currently executed was initiated by IP bus.                                                                */
    using AHB_ACC  = regbits< type,  2,  1 >;  /**< AHB Access: Asserted when the transaction currently executed was initiated by AHB bus.                                                          */
    using AHBGNT   = regbits< type,  5,  1 >;  /**< AHB Command priority Granted: Asserted when another module has been granted priority of AHB Commands against IP Commands                        */
    using AHBTRN   = regbits< type,  6,  1 >;  /**< AHB Access Transaction pending: Asserted when there is a pending request on the AHB interface                                                   */
    using AHB0NE   = regbits< type,  7,  1 >;  /**< AHB 0 Buffer Not Empty: Asserted when AHB 0 buffer contains data.                                                                               */
    using AHB1NE   = regbits< type,  8,  1 >;  /**< AHB 1 Buffer Not Empty: Asserted when AHB 1 buffer contains data.                                                                               */
    using AHB2NE   = regbits< type,  9,  1 >;  /**< AHB 2 Buffer Not Empty: Asserted when AHB 2 buffer contains data.                                                                               */
    using AHB3NE   = regbits< type, 10,  1 >;  /**< AHB 3 Buffer Not Empty: Asserted when AHB 3 buffer contains data.                                                                               */
    using AHB0FUL  = regbits< type, 11,  1 >;  /**< AHB 0 Buffer Full: Asserted when AHB 0 buffer is full.                                                                                          */
    using AHB1FUL  = regbits< type, 12,  1 >;  /**< AHB 1 Buffer Full: Asserted when AHB 1 buffer is full.                                                                                          */
    using AHB2FUL  = regbits< type, 13,  1 >;  /**< AHB 2 Buffer Full: Asserted when AHB 2 buffer is full.                                                                                          */
    using AHB3FUL  = regbits< type, 14,  1 >;  /**< AHB 3 Buffer Full: Asserted when AHB 3 buffer is full.                                                                                          */
    using RXWE     = regbits< type, 16,  1 >;  /**< RX Buffer Watermark Exceeded: Asserted when the number of valid entries in the RX Buffer exceeds the number given in the QSPI_RBCT[WMRK] field  */
    using RXFULL   = regbits< type, 19,  1 >;  /**< RX Buffer Full: Asserted when the RX Buffer is full, i                                                                                          */
    using RXDMA    = regbits< type, 23,  1 >;  /**< RX Buffer DMA: Asserted when RX Buffer read out via DMA is active i.e DMA is requested or running.                                              */
    using TXEDA    = regbits< type, 24,  1 >;  /**< Tx Buffer Enough Data Available                                                                                                                 */
    using TXWA     = regbits< type, 25,  1 >;  /**< TX Buffer watermark Available                                                                                                                   */
    using TXDMA    = regbits< type, 26,  1 >;  /**< TXDMA                                                                                                                                           */
    using TXFULL   = regbits< type, 27,  1 >;  /**< TX Buffer Full: Asserted when no more data can be stored.                                                                                       */
    using DLPSMP   = regbits< type, 29,  3 >;  /**< Data learning pattern sampling point: The sampling point found by the controller with the data learning pattern                                 */
  };

  /**
   * Flag Register
   */
  struct FR
  : public reg< uint32_t, base_addr + 0x160, rw, 0x8000000 >
  {
    using type = reg< uint32_t, base_addr + 0x160, rw, 0x8000000 >;

    using TFF     = regbits< type,  0,  1 >;  /**< IP Command Transaction Finished Flag: Set when the QuadSPI module has finished a running IP Command                                                                                                                            */
    using IPGEF   = regbits< type,  4,  1 >;  /**< IP Command Trigger during AHB Grant Error Flag: Set when the following condition occurs: A write access occurs to the QSPI_IPCR[SEQID] field and the QSPI_SR[AHBGNT] bit is set                                                */
    using IPIEF   = regbits< type,  6,  1 >;  /**< IP Command Trigger could not be executed Error Flag                                                                                                                                                                            */
    using IPAEF   = regbits< type,  7,  1 >;  /**< IP Command Trigger during AHB Access Error Flag                                                                                                                                                                                */
    using IUEF    = regbits< type, 11,  1 >;  /**< IP Command Usage Error Flag: Set when in parallel flash mode the execution of an IP Command is started with more than one pad enabled and the sequence pointed to by the sequence ID contains a WRITE or a WRITE_DDR command   */
    using ABOF    = regbits< type, 12,  1 >;  /**< AHB Buffer Overflow Flag: Set when the size of the AHB access exceeds the size of the AHB buffer                                                                                                                               */
    using AIBSEF  = regbits< type, 13,  1 >;  /**< AHB Illegal Burst Size Error Flag: Set whenever the total burst size(size x beat) of an AHB transaction is greater than the prefetch data size                                                                                 */
    using AITEF   = regbits< type, 14,  1 >;  /**< AHB Illegal transaction error flag                                                                                                                                                                                             */
    using ABSEF   = regbits< type, 15,  1 >;  /**< AHB Sequence Error Flag: Set when the execution of an AHB Command is started with a WRITE or WRITE_DDR Command in the sequence pointed to by the QSPI_BUFxCR register                                                          */
    using RBDF    = regbits< type, 16,  1 >;  /**< RX Buffer Drain Flag: Will be set if the QuadSPI_SR[RXWE] status bit is asserted                                                                                                                                               */
    using RBOF    = regbits< type, 17,  1 >;  /**< RX Buffer Overflow Flag: Set when not all the data read from the serial flash device could be pushed into the RX Buffer                                                                                                        */
    using ILLINE  = regbits< type, 23,  1 >;  /**< Illegal Instruction Error Flag: Set when an illegal instruction is encountered by the controller in any of the sequences                                                                                                       */
    using TBUF    = regbits< type, 26,  1 >;  /**< TX Buffer Underrun Flag: Set when the module tried to pull data although TX Buffer was emptyor the buffer contains less than 128bits of data                                                                                   */
    using TBFF    = regbits< type, 27,  1 >;  /**< TX Buffer Fill Flag: Before writing to the TX buffer, this bit should be cleared                                                                                                                                               */
    using DLPFF   = regbits< type, 31,  1 >;  /**< Data Learning Pattern Failure Flag: Set when DATA_LEARN instruction was encountered in a sequence but no sampling point was found for the data learning patternin case only 8 bit data learning is requested for non DQS mode  */
  };

  /**
   * Interrupt and DMA Request Select and Enable Register
   */
  struct RSER
  : public reg< uint32_t, base_addr + 0x164, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x164, rw, 0 >;

    using TFIE     = regbits< type,  0,  1 >;  /**< Transaction Finished Interrupt Enable                                                         */
    using IPGEIE   = regbits< type,  4,  1 >;  /**< IP Command Trigger during AHB Grant Error Interrupt Enable                                    */
    using IPIEIE   = regbits< type,  6,  1 >;  /**< IP Command Trigger during IP Access Error Interrupt Enable                                    */
    using IPAEIE   = regbits< type,  7,  1 >;  /**< IP Command Trigger during AHB Access Error Interrupt Enable                                   */
    using IUEIE    = regbits< type, 11,  1 >;  /**< IP Command Usage Error Interrupt Enable                                                       */
    using ABOIE    = regbits< type, 12,  1 >;  /**< AHB Buffer Overflow Interrupt Enable                                                          */
    using AIBSIE   = regbits< type, 13,  1 >;  /**< AHB Illegal Burst Size Interrupt Enable                                                       */
    using AITIE    = regbits< type, 14,  1 >;  /**< AHB Illegal transaction interrupt enable.                                                     */
    using ABSEIE   = regbits< type, 15,  1 >;  /**< AHB Sequence Error Interrupt Enable: Triggered by ABSEF flags of QSPI_FR                      */
    using RBDIE    = regbits< type, 16,  1 >;  /**< RX Buffer Drain Interrupt Enable: Enables generation of IRQ requests for RX Buffer Drain      */
    using RBOIE    = regbits< type, 17,  1 >;  /**< RX Buffer Overflow Interrupt Enable                                                           */
    using RBDDE    = regbits< type, 21,  1 >;  /**< RX Buffer Drain DMA Enable: Enables generation of DMA requests for RX Buffer Drain            */
    using ILLINIE  = regbits< type, 23,  1 >;  /**< Illegal Instruction Error Interrupt Enable. Triggered by ILLINE flag in QSPI_FR               */
    using TBFDE    = regbits< type, 25,  1 >;  /**< TX Buffer Fill DMA Enable                                                                     */
    using TBUIE    = regbits< type, 26,  1 >;  /**< TX Buffer Underrun Interrupt Enable                                                           */
    using TBFIE    = regbits< type, 27,  1 >;  /**< TX Buffer Fill Interrupt Enable                                                               */
    using DLPFIE   = regbits< type, 31,  1 >;  /**< Data Learning Pattern Failure Interrupt enable . Triggered by DLPFF flag in QSPI_FR register  */
  };

  /**
   * Sequence Suspend Status Register
   */
  struct SPNDST
  : public reg< uint32_t, base_addr + 0x168, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x168, ro, 0 >;

    using SUSPND  = regbits< type,  0,  1 >;  /**< When set, it signifies that a sequence is in suspended state                                        */
    using SPDBUF  = regbits< type,  6,  2 >;  /**< Suspended Buffer: Provides the suspended buffer number. Valid only when SUSPND is set to 1'b1       */
    using DATLFT  = regbits< type,  9,  6 >;  /**< Data left: Provides information about the amount of data left to be read in the suspended sequence  */
  };

  /**
   * Sequence Pointer Clear Register
   */
  struct SPTRCLR
  : public reg< uint32_t, base_addr + 0x16c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x16c, rw, 0 >;

    using BFPTRC  = regbits< type,  0,  1 >;  /**< Buffer Pointer Clear: 1: Clears the sequence pointer for AHB accesses as defined in QuadSPI_BFGENCR                        */
    using IPPTRC  = regbits< type,  8,  1 >;  /**< IP Pointer Clear: 1: Clears the sequence pointer for IP accesses as defined in QuadSPI_IPCR This is a self-clearing field  */
  };

  /**
   * Serial Flash A1 Top Address
   */
  struct SFA1AD
  : public reg< uint32_t, base_addr + 0x180, rw, 0x6FFFFC00 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x6FFFFC00 >;

    using TPADA1  = regbits< type, 10, 22 >;  /**< Top address for Serial Flash A1. In effect, TPADxx is the first location of the next memory.  */
  };

  /**
   * Serial Flash A2 Top Address
   */
  struct SFA2AD
  : public reg< uint32_t, base_addr + 0x184, rw, 0x6FFFFC00 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0x6FFFFC00 >;

    using TPADA2  = regbits< type, 10, 22 >;  /**< Top address for Serial Flash A2. In effect, TPxxAD is the first location of the next memory.  */
  };

  /**
   * Serial Flash B1Top Address
   */
  struct SFB1AD
  : public reg< uint32_t, base_addr + 0x188, rw, 0x6FFFFC00 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0x6FFFFC00 >;

    using TPADB1  = regbits< type, 10, 22 >;  /**< Top address for Serial Flash B1.In effect, TPxxAD is the first location of the next memory.  */
  };

  /**
   * Serial Flash B2Top Address
   */
  struct SFB2AD
  : public reg< uint32_t, base_addr + 0x18c, rw, 0x6FFFFC00 >
  {
    using type = reg< uint32_t, base_addr + 0x18c, rw, 0x6FFFFC00 >;

    using TPADB2  = regbits< type, 10, 22 >;  /**< Top address for Serial Flash B2. In effect, TPxxAD is the first location of the next memory.  */
  };

  /**
   * Data Learn Pattern Register
   */
  struct DLPR
  : public reg< uint32_t, base_addr + 0x190, rw, 0xAA553443 >
  {
    using type = reg< uint32_t, base_addr + 0x190, rw, 0xAA553443 >;

    using DLPV  = regbits< type,  0, 32 >;  /**< Data Learning Pattern Value: This value is used for data learning in DDR and DQS mode  */
  };

  /**
   * RX Buffer Data Register
   */
  struct RBDR%s
  : public reg< uint32_t, base_addr + 0x200, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, ro, 0 >;

    using RXDATA  = regbits< type,  0, 32 >;  /**< RX Data  */
  };

  /**
   * LUT Key Register
   */
  struct LUTKEY
  : public reg< uint32_t, base_addr + 0x300, rw, 0x5AF05AF0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x5AF05AF0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< The key to lock or unlock the LUT. The KEY is 0x5AF05AF0. The read value is always 0x5AF05AF0  */
  };

  /**
   * LUT Lock Configuration Register
   */
  struct LCKCR
  : public reg< uint32_t, base_addr + 0x304, rw, 0x2 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0x2 >;

    using LOCK    = regbits< type,  0,  1 >;  /**< Locks the LUT when the following condition is met: This register is written just after the LUTKEYLUT Key Register The LUT key register was written with 0x5AF05AF0 key  */
    using UNLOCK  = regbits< type,  1,  1 >;  /**< Unlocks the LUT when the following two conditions are met: 1                                                                                                            */
  };

  /**
   * Look-up Table register
   */
  struct LUT%s
  : public reg< uint32_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0 >;

    using OPRND0  = regbits< type,  0,  8 >;  /**< Operand for INSTR0.          */
    using PAD0    = regbits< type,  8,  2 >;  /**< Pad information for INSTR0.  */
    using INSTR0  = regbits< type, 10,  6 >;  /**< Instruction 0                */
    using OPRND1  = regbits< type, 16,  8 >;  /**< Operand for INSTR1.          */
    using PAD1    = regbits< type, 24,  2 >;  /**< Pad information for INSTR1.  */
    using INSTR1  = regbits< type, 26,  6 >;  /**< Instruction 1                */
  };
};
} // namespace mptl

#endif // ARCH_REG_QUADSPI0_HPP_INCLUDED
