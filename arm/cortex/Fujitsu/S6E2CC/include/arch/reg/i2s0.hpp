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
//  Import from CMSIS-SVD: "Fujitsu/S6E2CC.svd"
//
//  name: S6E2CC
//  version: 1.1
//  description: S6E2CC
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2S0_HPP_INCLUDED
#define ARCH_REG_I2S0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * I2S
 */
struct I2S0
{
  static constexpr reg_addr_t base_addr = 0x4006c000;

  /**
   * Receive FIFO Register
   */
  struct RXFDAT
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using RXDATA  = regbits< type,  0, 32 >;  /**< Words received from the serial bus are written to the receive FIFO  */
  };

  /**
   * Transmit FIFO Register
   */
  struct TXFDAT
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TXDATA  = regbits< type,  0, 32 >;  /**< As long as the transmit FIFO is not full, the words to be transmitted can be written.  */
  };

  /**
   * Control Register
   */
  struct CNTREG
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using CKRT   = regbits< type, 26,  6 >;  /**< When operating in master mode, this sets the clock division ratio for output.                               */
    using OVHD   = regbits< type, 16, 10 >;  /**< Following the valid data of the frame, it can insert OVERHEAD bits to enable adjustment of the frame rate.  */
    using MSKB   = regbits< type, 14,  1 >;  /**< This sets the serial output data of the invalid transmit frames                                             */
    using MSMD   = regbits< type, 13,  1 >;  /**< This sets master or slave mode.                                                                             */
    using SBFN   = regbits< type, 12,  1 >;  /**< This specifies the subframe configuration (number of subframes) of the frame                                */
    using RHLL   = regbits< type, 11,  1 >;  /**< This sets the FIFO word configuration to one or two words                                                   */
    using ECKM   = regbits< type, 10,  1 >;  /**< In master mode, this selects the base clock divider.                                                        */
    using BEXT   = regbits< type,  9,  1 >;  /**< When the receive word length is smaller than the FIFO word length, this sets the upper bit extension mode.  */
    using FRUN   = regbits< type,  8,  1 >;  /**< This sets the output mode of the frame sync signal                                                          */
    using MLSB   = regbits< type,  7,  1 >;  /**< This sets word bit shift order                                                                              */
    using TXDIS  = regbits< type,  6,  1 >;  /**< This enables or disables the transmit function                                                              */
    using RXDIS  = regbits< type,  5,  1 >;  /**< This enables or disables the receive function                                                               */
    using SMPL   = regbits< type,  4,  1 >;  /**< This specifies the point where data is sampled                                                              */
    using CPOL   = regbits< type,  3,  1 >;  /**< This specifies the I2SCK polarity where drive sampling of the serial data is performed                      */
    using FSPH   = regbits< type,  2,  1 >;  /**< This specifies the phase for I2SWS frame data                                                               */
    using FSLN   = regbits< type,  1,  1 >;  /**< This specifies the pulse width of I2SWS                                                                     */
    using FSPL   = regbits< type,  0,  1 >;  /**< This sets the polarity of the I2SWS pin                                                                     */
  };

  /**
   * Channel Control Register 0
   */
  struct MCR0REG
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using S1CHN  = regbits< type, 26,  5 >;  /**< This sets the number of channels for subframe 1                       */
    using S1CHL  = regbits< type, 21,  5 >;  /**< This sets the channel length of the channels that make up subframe 1  */
    using S1WDL  = regbits< type, 16,  5 >;  /**< This sets the word length of the channels that make up subframe 1     */
    using S0CHN  = regbits< type, 10,  5 >;  /**< This sets the number of channels for subframe 0                       */
    using S0CHL  = regbits< type,  5,  5 >;  /**< This sets the channel length of the channels that make up subframe 1  */
    using S0WDL  = regbits< type,  0,  5 >;  /**< This sets the word length of the channels that make up subframe 1     */
  };

  /**
   * Channel Control Register 1
   */
  struct MCR1REG
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using S0CH31  = regbits< type, 31,  1 >;  /**< This controls the enable/disable state of the channel 31 in subframe 0  */
    using S0CH30  = regbits< type, 30,  1 >;  /**< This controls the enable/disable state of the channel 30 in subframe 0  */
    using S0CH29  = regbits< type, 29,  1 >;  /**< This controls the enable/disable state of the channel 29 in subframe 0  */
    using S0CH28  = regbits< type, 28,  1 >;  /**< This controls the enable/disable state of the channel 28 in subframe 0  */
    using S0CH27  = regbits< type, 27,  1 >;  /**< This controls the enable/disable state of the channel 27 in subframe 0  */
    using S0CH26  = regbits< type, 26,  1 >;  /**< This controls the enable/disable state of the channel 26 in subframe 0  */
    using S0CH25  = regbits< type, 25,  1 >;  /**< This controls the enable/disable state of the channel 25 in subframe 0  */
    using S0CH24  = regbits< type, 24,  1 >;  /**< This controls the enable/disable state of the channel 24 in subframe 0  */
    using S0CH23  = regbits< type, 23,  1 >;  /**< This controls the enable/disable state of the channel 23 in subframe 0  */
    using S0CH22  = regbits< type, 22,  1 >;  /**< This controls the enable/disable state of the channel 22 in subframe 0  */
    using S0CH21  = regbits< type, 21,  1 >;  /**< This controls the enable/disable state of the channel 21 in subframe 0  */
    using S0CH20  = regbits< type, 20,  1 >;  /**< This controls the enable/disable state of the channel 20 in subframe 0  */
    using S0CH19  = regbits< type, 19,  1 >;  /**< This controls the enable/disable state of the channel 19 in subframe 0  */
    using S0CH18  = regbits< type, 18,  1 >;  /**< This controls the enable/disable state of the channel 18 in subframe 0  */
    using S0CH17  = regbits< type, 17,  1 >;  /**< This controls the enable/disable state of the channel 17 in subframe 0  */
    using S0CH16  = regbits< type, 16,  1 >;  /**< This controls the enable/disable state of the channel 16 in subframe 0  */
    using S0CH15  = regbits< type, 15,  1 >;  /**< This controls the enable/disable state of the channel 15 in subframe 0  */
    using S0CH14  = regbits< type, 14,  1 >;  /**< This controls the enable/disable state of the channel 14 in subframe 0  */
    using S0CH13  = regbits< type, 13,  1 >;  /**< This controls the enable/disable state of the channel 13 in subframe 0  */
    using S0CH12  = regbits< type, 12,  1 >;  /**< This controls the enable/disable state of the channel 12 in subframe 0  */
    using S0CH11  = regbits< type, 11,  1 >;  /**< This controls the enable/disable state of the channel 11 in subframe 0  */
    using S0CH10  = regbits< type, 10,  1 >;  /**< This controls the enable/disable state of the channel 10 in subframe 0  */
    using S0CH09  = regbits< type,  9,  1 >;  /**< This controls the enable/disable state of the channel 9 in subframe 0   */
    using S0CH08  = regbits< type,  8,  1 >;  /**< This controls the enable/disable state of the channel 8 in subframe 0   */
    using S0CH07  = regbits< type,  7,  1 >;  /**< This controls the enable/disable state of the channel 7 in subframe 0   */
    using S0CH06  = regbits< type,  6,  1 >;  /**< This controls the enable/disable state of the channel 6 in subframe 0   */
    using S0CH05  = regbits< type,  5,  1 >;  /**< This controls the enable/disable state of the channel 5 in subframe 0   */
    using S0CH04  = regbits< type,  4,  1 >;  /**< This controls the enable/disable state of the channel 4 in subframe 0   */
    using S0CH03  = regbits< type,  3,  1 >;  /**< This controls the enable/disable state of the channel 3 in subframe 0   */
    using S0CH02  = regbits< type,  2,  1 >;  /**< This controls the enable/disable state of the channel 2 in subframe 0   */
    using S0CH01  = regbits< type,  1,  1 >;  /**< This controls the enable/disable state of the channel 1 in subframe 0   */
    using S0CH00  = regbits< type,  0,  1 >;  /**< This controls the enable/disable state of the channel 0 in subframe 0   */
  };

  /**
   * Channel Control Register 2
   */
  struct MCR2REG
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using S1CH31  = regbits< type, 31,  1 >;  /**< This controls the enable/disable state of the channel 31 in subframe 1  */
    using S1CH30  = regbits< type, 30,  1 >;  /**< This controls the enable/disable state of the channel 30 in subframe 1  */
    using S1CH29  = regbits< type, 29,  1 >;  /**< This controls the enable/disable state of the channel 29 in subframe 1  */
    using S1CH28  = regbits< type, 28,  1 >;  /**< This controls the enable/disable state of the channel 28 in subframe 1  */
    using S1CH27  = regbits< type, 27,  1 >;  /**< This controls the enable/disable state of the channel 27 in subframe 1  */
    using S1CH26  = regbits< type, 26,  1 >;  /**< This controls the enable/disable state of the channel 26 in subframe 1  */
    using S1CH25  = regbits< type, 25,  1 >;  /**< This controls the enable/disable state of the channel 25 in subframe 1  */
    using S1CH24  = regbits< type, 24,  1 >;  /**< This controls the enable/disable state of the channel 24 in subframe 1  */
    using S1CH23  = regbits< type, 23,  1 >;  /**< This controls the enable/disable state of the channel 23 in subframe 1  */
    using S1CH22  = regbits< type, 22,  1 >;  /**< This controls the enable/disable state of the channel 22 in subframe 1  */
    using S1CH21  = regbits< type, 21,  1 >;  /**< This controls the enable/disable state of the channel 21 in subframe 1  */
    using S1CH20  = regbits< type, 20,  1 >;  /**< This controls the enable/disable state of the channel 20 in subframe 1  */
    using S1CH19  = regbits< type, 19,  1 >;  /**< This controls the enable/disable state of the channel 19 in subframe 1  */
    using S1CH18  = regbits< type, 18,  1 >;  /**< This controls the enable/disable state of the channel 18 in subframe 1  */
    using S1CH17  = regbits< type, 17,  1 >;  /**< This controls the enable/disable state of the channel 17 in subframe 1  */
    using S1CH16  = regbits< type, 16,  1 >;  /**< This controls the enable/disable state of the channel 16 in subframe 1  */
    using S1CH15  = regbits< type, 15,  1 >;  /**< This controls the enable/disable state of the channel 15 in subframe 1  */
    using S1CH14  = regbits< type, 14,  1 >;  /**< This controls the enable/disable state of the channel 14 in subframe 1  */
    using S1CH13  = regbits< type, 13,  1 >;  /**< This controls the enable/disable state of the channel 13 in subframe 1  */
    using S1CH12  = regbits< type, 12,  1 >;  /**< This controls the enable/disable state of the channel 12 in subframe 1  */
    using S1CH11  = regbits< type, 11,  1 >;  /**< This controls the enable/disable state of the channel 11 in subframe 1  */
    using S1CH10  = regbits< type, 10,  1 >;  /**< This controls the enable/disable state of the channel 10 in subframe 1  */
    using S1CH09  = regbits< type,  9,  1 >;  /**< This controls the enable/disable state of the channel 9 in subframe 1   */
    using S1CH08  = regbits< type,  8,  1 >;  /**< This controls the enable/disable state of the channel 8 in subframe 1   */
    using S1CH07  = regbits< type,  7,  1 >;  /**< This controls the enable/disable state of the channel 7 in subframe 1   */
    using S1CH06  = regbits< type,  6,  1 >;  /**< This controls the enable/disable state of the channel 6 in subframe 1   */
    using S1CH05  = regbits< type,  5,  1 >;  /**< This controls the enable/disable state of the channel 5 in subframe 1   */
    using S1CH04  = regbits< type,  4,  1 >;  /**< This controls the enable/disable state of the channel 4 in subframe 1   */
    using S1CH03  = regbits< type,  3,  1 >;  /**< This controls the enable/disable state of the channel 3 in subframe 1   */
    using S1CH02  = regbits< type,  2,  1 >;  /**< This controls the enable/disable state of the channel 2 in subframe 1   */
    using S1CH01  = regbits< type,  1,  1 >;  /**< This controls the enable/disable state of the channel 1 in subframe 1   */
    using S1CH00  = regbits< type,  0,  1 >;  /**< This controls the enable/disable state of the channel 0 in subframe 1   */
  };

  /**
   * Operation Control Register
   */
  struct OPRREG
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using RXENB  = regbits< type, 24,  1 >;  /**< This sets the enabled/disabled state of the receive operation   */
    using TXENB  = regbits< type, 16,  1 >;  /**< This sets the enabled/disabled state of the transmit operation  */
    using START  = regbits< type,  0,  1 >;  /**< This enables or disables the I2S interface                      */
  };

  /**
   * Soft Reset Register
   */
  struct SRST
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SRST
    using SRST_ = regbits< type,  0,  1 >;  /**< Soft reset bit  */
  };

  /**
   * Interrupt Control Register
   */
  struct INTCNT
  : public reg< uint32_t, base_addr + 0x20, rw, 0x7F3F0000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x7F3F0000 >;

    using TXUD1M  = regbits< type, 30,  1 >;  /**< This bit masks the transmit FIFO underflow interrupt             */
    using TBERM   = regbits< type, 29,  1 >;  /**< This bit masks the transmit channel block size error interrupt   */
    using FERRM   = regbits< type, 28,  1 >;  /**< This bit masks the frame error interrupt mask                    */
    using TXUD0M  = regbits< type, 27,  1 >;  /**< This bit masks the transmit FIFO underflow interrupt             */
    using TXOVM   = regbits< type, 26,  1 >;  /**< This bit masks the transmit FIFO overflow interrupt              */
    using TXFDM   = regbits< type, 25,  1 >;  /**< This bit masks the transmit DMA request                          */
    using TXFIM   = regbits< type, 24,  1 >;  /**< This bit masks the transmit FIFO interrupt                       */
    using RBERM   = regbits< type, 21,  1 >;  /**< This bit masks the receive channel block size error interrupt    */
    using RXUDM   = regbits< type, 20,  1 >;  /**< This bit masks the receive FIFO underflow interrupt              */
    using RXOVM   = regbits< type, 19,  1 >;  /**< This bit masks the receive FIFO overflow interrupt               */
    using EOPM    = regbits< type, 18,  1 >;  /**< This bit masks the interrupts by EOPI of the STATUS register     */
    using RXFDM   = regbits< type, 17,  1 >;  /**< This bit masks the receive DMA request                           */
    using RXFIM   = regbits< type, 16,  1 >;  /**< This bit masks the receive FIFO interrupt                        */
    using TFTH    = regbits< type,  8,  4 >;  /**< This bit sets the transmit FIFO threshold value                  */
    using RPTMR   = regbits< type,  4,  2 >;  /**< This is the bit for setting the packet receive completion timer  */
    using RFTH    = regbits< type,  0,  4 >;  /**< This bit sets the receive FIFO threshold value                   */
  };

  /**
   * Status Register
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using TBERR   = regbits< type, 31,  1 >;  /**< If the block size of the DMA transmit channel is set to a value larger than the transmit FIFO threshold value, this bit is set to 1.  */
    using RBERR   = regbits< type, 30,  1 >;  /**< If the block size of the DMA receive channel is set to a value larger than the receive FIFO threshold value, this bit is set to 1.    */
    using FERR    = regbits< type, 29,  1 >;  /**< This indicates that a frame error has occurred                                                                                        */
    using TXUDR1  = regbits< type, 28,  1 >;  /**< This is set to 1 when the transmit FIFO underflows at the frame start                                                                 */
    using TXUDR0  = regbits< type, 27,  1 >;  /**< This is set to 1 when the transmit FIFO underflows during frame transmission                                                          */
    using TXOVR   = regbits< type, 26,  1 >;  /**< This is set to 1 when the transmit FIFO overflows                                                                                     */
    using RXUDR   = regbits< type, 25,  1 >;  /**< This is set to 1 when the receive FIFO underflows                                                                                     */
    using RXOVR   = regbits< type, 24,  1 >;  /**< This is set to 1 when the receive FIFO overflows                                                                                      */
    using EOPI    = regbits< type, 19,  1 >;  /**< This is the interrupt flag based on the receive timer                                                                                 */
    using BSY     = regbits< type, 18,  1 >;  /**< This indicates the status of the serial transmit control unit                                                                         */
    using TXFI    = regbits< type, 17,  1 >;  /**< This is set to 1 when the transmit FIFO empty slot meets or exceeds the threshold value                                               */
    using RXFI    = regbits< type, 16,  1 >;  /**< This is set to 1 when the receive FIFO data count meets or exceeds the threshold value                                                */
    using TXNUM   = regbits< type,  8,  8 >;  /**< This indicates the data count in the transmit FIFO                                                                                    */
    using RXNUM   = regbits< type,  0,  8 >;  /**< This indicates the data count in the receive FIFO                                                                                     */
  };

  /**
   * DMA Startup Register
   */
  struct DMAACT
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using TL1E0   = regbits< type, 24,  1 >;  /**< This sets the operation mode of TXDREQ              */
    using TDMACT  = regbits< type, 16,  1 >;  /**< This bit is enabled when the same register TL1E0=0  */
    using RL1E0   = regbits< type,  8,  1 >;  /**< This sets the operation mode of RXDREQ              */
    using RDMACT  = regbits< type,  0,  1 >;  /**< This bit is enabled when the same register RL1E0=0  */
  };

  /**
   * Test Register
   */
  struct TSTREG
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using LBMD  = regbits< type,  0,  1 >;  /**< This sets the loopback mode  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2S0_HPP_INCLUDED
