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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9M11.svd"
//
//  vendor: Atmel
//  name: AT91SAM9M11
//  series: SAM9M
//  version: 20130207
//  description: Atmel AT91SAM9M11 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Hardware Encryption, Video Decoder, DDR2/LPDDR, Dual EBI, 324 Pins (refer to http://www.atmel.com/devices/SAM9M11.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AC97C_HPP_INCLUDED
#define ARCH_REG_AC97C_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AC97 Controller
 */
struct AC97C
{
  static constexpr reg_addr_t base_addr = 0xfffac000;

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using ENA   = regbits< type,  0,  1 >;  /**< AC97 Controller Global Enable        */
    using WRST  = regbits< type,  1,  1 >;  /**< Warm Reset                           */
    using VRA   = regbits< type,  2,  1 >;  /**< Variable Rate (for Data Slots 3-12)  */
  };

  /**
   * Input Channel Assignment Register
   */
  struct ICA
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using CHID3   = regbits< type,  0,  3 >;  /**< Channel ID for the input slot 3   */
    using CHID4   = regbits< type,  3,  3 >;  /**< Channel ID for the input slot 4   */
    using CHID5   = regbits< type,  6,  3 >;  /**< Channel ID for the input slot 5   */
    using CHID6   = regbits< type,  9,  3 >;  /**< Channel ID for the input slot 6   */
    using CHID7   = regbits< type, 12,  3 >;  /**< Channel ID for the input slot 7   */
    using CHID8   = regbits< type, 15,  3 >;  /**< Channel ID for the input slot 8   */
    using CHID9   = regbits< type, 18,  3 >;  /**< Channel ID for the input slot 9   */
    using CHID10  = regbits< type, 21,  3 >;  /**< Channel ID for the input slot 10  */
    using CHID11  = regbits< type, 24,  3 >;  /**< Channel ID for the input slot 11  */
    using CHID12  = regbits< type, 27,  3 >;  /**< Channel ID for the input slot 12  */
  };

  /**
   * Output Channel Assignment Register
   */
  struct OCA
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >;

    using CHID3   = regbits< type,  0,  3 >;  /**< Channel ID for the output slot 3   */
    using CHID4   = regbits< type,  3,  3 >;  /**< Channel ID for the output slot 4   */
    using CHID5   = regbits< type,  6,  3 >;  /**< Channel ID for the output slot 5   */
    using CHID6   = regbits< type,  9,  3 >;  /**< Channel ID for the output slot 6   */
    using CHID7   = regbits< type, 12,  3 >;  /**< Channel ID for the output slot 7   */
    using CHID8   = regbits< type, 15,  3 >;  /**< Channel ID for the output slot 8   */
    using CHID9   = regbits< type, 18,  3 >;  /**< Channel ID for the output slot 9   */
    using CHID10  = regbits< type, 21,  3 >;  /**< Channel ID for the output slot 10  */
    using CHID11  = regbits< type, 24,  3 >;  /**< Channel ID for the output slot 11  */
    using CHID12  = regbits< type, 27,  3 >;  /**< Channel ID for the output slot 12  */
  };

  /**
   * Channel A Receive Holding Register
   */
  struct CARHR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using RDATA  = regbits< type,  0, 20 >;  /**< Receive Data  */
  };

  /**
   * Channel A Transmit Holding Register
   */
  struct CATHR
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using TDATA  = regbits< type,  0, 20 >;  /**< Transmit Data  */
  };

  /**
   * Channel A Status Register
   */
  struct CASR
  : public reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Channel Transmit Ready               */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Channel Transmit Empty               */
    using UNRUN    = regbits< type,  2,  1 >;  /**< Transmit Underrun                    */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Channel Receive Ready                */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun                      */
    using ENDTX    = regbits< type, 10,  1 >;  /**< End of Transmission for Channel A    */
    using TXBUFE   = regbits< type, 11,  1 >;  /**< Transmit Buffer Empty for Channel A  */
    using ENDRX    = regbits< type, 14,  1 >;  /**< End of Reception for Channel A       */
    using RXBUFF   = regbits< type, 15,  1 >;  /**< Receive Buffer Full for Channel A    */
  };

  /**
   * Channel A Mode Register
   */
  struct CAMR
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Channel Transmit Ready Interrupt Enable               */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Channel Transmit Empty Interrupt Enable               */
    using UNRUN    = regbits< type,  2,  1 >;  /**< Transmit Underrun Interrupt Enable                    */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Channel Receive Ready Interrupt Enable                */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun Interrupt Enable                      */
    using ENDTX    = regbits< type, 10,  1 >;  /**< End of Transmission for Channel A Interrupt Enable    */
    using TXBUFE   = regbits< type, 11,  1 >;  /**< Transmit Buffer Empty for Channel A Interrupt Enable  */
    using ENDRX    = regbits< type, 14,  1 >;  /**< End of Reception for Channel A Interrupt Enable       */
    using RXBUFF   = regbits< type, 15,  1 >;  /**< Receive Buffer Full for Channel A Interrupt Enable    */
    using SIZE     = regbits< type, 16,  2 >;  /**< Channel A Data Size                                   */
    using CEM      = regbits< type, 18,  1 >;  /**< Channel A Endian Mode                                 */
    using CEN      = regbits< type, 21,  1 >;  /**< Channel A Enable                                      */
    using PDCEN    = regbits< type, 22,  1 >;  /**< Peripheral Data Controller Channel Enable             */
  };

  /**
   * Channel B Receive Holding Register
   */
  struct CBRHR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using RDATA  = regbits< type,  0, 20 >;  /**< Receive Data  */
  };

  /**
   * Channel B Transmit Holding Register
   */
  struct CBTHR
  : public reg< uint32_t, base_addr + 0x00000034, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, wo, 0 >;

    using TDATA  = regbits< type,  0, 20 >;  /**< Transmit Data  */
  };

  /**
   * Channel B Status Register
   */
  struct CBSR
  : public reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Channel Transmit Ready               */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Channel Transmit Empty               */
    using UNRUN    = regbits< type,  2,  1 >;  /**< Transmit Underrun                    */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Channel Receive Ready                */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun                      */
    using ENDTX    = regbits< type,  9,  1 >;  /**< End of Transmission for Channel B    */
    using TXBUFE   = regbits< type, 10,  1 >;  /**< Transmit Buffer Empty for Channel B  */
    using ENDRX    = regbits< type, 14,  1 >;  /**< End of Reception for Channel B       */
    using RXBUFF   = regbits< type, 15,  1 >;  /**< Receive Buffer Full for Channel B    */
  };

  /**
   * Channel B Mode Register
   */
  struct CBMR
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Channel Transmit Ready Interrupt Enable               */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Channel Transmit Empty Interrupt Enable               */
    using UNRUN    = regbits< type,  2,  1 >;  /**< Transmit Underrun Interrupt Enable                    */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Channel Receive Ready Interrupt Enable                */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun Interrupt Enable                      */
    using ENDTX    = regbits< type, 10,  1 >;  /**< End of Transmission for Channel B Interrupt Enable    */
    using TXBUFE   = regbits< type, 11,  1 >;  /**< Transmit Buffer Empty for Channel B Interrupt Enable  */
    using ENDRX    = regbits< type, 14,  1 >;  /**< End of Reception for Channel B Interrupt Enable       */
    using RXBUFF   = regbits< type, 15,  1 >;  /**< Receive Buffer Full for Channel B Interrupt Enable    */
    using SIZE     = regbits< type, 16,  2 >;  /**< Channel B Data Size                                   */
    using CEM      = regbits< type, 18,  1 >;  /**< Channel B Endian Mode                                 */
    using CEN      = regbits< type, 21,  1 >;  /**< Channel B Enable                                      */
    using PDCEN    = regbits< type, 22,  1 >;  /**< Peripheral Data Controller Channel Enable             */
  };

  /**
   * Codec Channel Receive Holding Register
   */
  struct CORHR
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >;

    using SDATA  = regbits< type,  0, 16 >;  /**< Status Data  */
  };

  /**
   * Codec Channel Transmit Holding Register
   */
  struct COTHR
  : public reg< uint32_t, base_addr + 0x00000044, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, wo, 0 >;

    using CDATA  = regbits< type,  0, 16 >;  /**< Command Data                  */
    using CADDR  = regbits< type, 16,  7 >;  /**< CODEC control register index  */
    using READ   = regbits< type, 23,  1 >;  /**< Read-write command            */
  };

  /**
   * Codec Status Register
   */
  struct COSR
  : public reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Channel Transmit Ready  */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Channel Transmit Empty  */
    using UNRUN    = regbits< type,  2,  1 >;  /**< Transmit Underrun       */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Channel Receive Ready   */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun         */
  };

  /**
   * Codec Mode Register
   */
  struct COMR
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >;

    using TXRDY    = regbits< type,  0,  1 >;  /**< Channel Transmit Ready Interrupt Enable  */
    using TXEMPTY  = regbits< type,  1,  1 >;  /**< Channel Transmit Empty Interrupt Enable  */
    using UNRUN    = regbits< type,  2,  1 >;  /**< Transmit Underrun Interrupt Enable       */
    using RXRDY    = regbits< type,  4,  1 >;  /**< Channel Receive Ready Interrupt Enable   */
    using OVRUN    = regbits< type,  5,  1 >;  /**< Receive Overrun Interrupt Enable         */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >;

    using SOF    = regbits< type,  0,  1 >;  /**< Start Of Frame       */
    using WKUP   = regbits< type,  1,  1 >;  /**< Wake Up detection    */
    using COEVT  = regbits< type,  2,  1 >;  /**< CODEC Channel Event  */
    using CAEVT  = regbits< type,  3,  1 >;  /**< Channel A Event      */
    using CBEVT  = regbits< type,  4,  1 >;  /**< Channel B Event      */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000054, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, wo, 0 >;

    using SOF    = regbits< type,  0,  1 >;  /**< Start Of Frame   */
    using WKUP   = regbits< type,  1,  1 >;  /**< Wake Up          */
    using COEVT  = regbits< type,  2,  1 >;  /**< Codec Event      */
    using CAEVT  = regbits< type,  3,  1 >;  /**< Channel A Event  */
    using CBEVT  = regbits< type,  4,  1 >;  /**< Channel B Event  */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000058, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, wo, 0 >;

    using SOF    = regbits< type,  0,  1 >;  /**< Start Of Frame   */
    using WKUP   = regbits< type,  1,  1 >;  /**< Wake Up          */
    using COEVT  = regbits< type,  2,  1 >;  /**< Codec Event      */
    using CAEVT  = regbits< type,  3,  1 >;  /**< Channel A Event  */
    using CBEVT  = regbits< type,  4,  1 >;  /**< Channel B Event  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000005c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, ro, 0x00000000 >;

    using SOF    = regbits< type,  0,  1 >;  /**< Start Of Frame   */
    using WKUP   = regbits< type,  1,  1 >;  /**< Wake Up          */
    using COEVT  = regbits< type,  2,  1 >;  /**< Codec Event      */
    using CAEVT  = regbits< type,  3,  1 >;  /**< Channel A Event  */
    using CBEVT  = regbits< type,  4,  1 >;  /**< Channel B Event  */
  };

  /**
   * Receive Pointer Register
   */
  struct RPR
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >;

    using RXPTR  = regbits< type,  0, 32 >;  /**< Receive Pointer Register  */
  };

  /**
   * Receive Counter Register
   */
  struct RCR
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >;

    using RXCTR  = regbits< type,  0, 16 >;  /**< Receive Counter Register  */
  };

  /**
   * Transmit Pointer Register
   */
  struct TPR
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >;

    using TXPTR  = regbits< type,  0, 32 >;  /**< Transmit Counter Register  */
  };

  /**
   * Transmit Counter Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >;

    using TXCTR  = regbits< type,  0, 16 >;  /**< Transmit Counter Register  */
  };

  /**
   * Receive Next Pointer Register
   */
  struct RNPR
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >;

    using RXNPTR  = regbits< type,  0, 32 >;  /**< Receive Next Pointer  */
  };

  /**
   * Receive Next Counter Register
   */
  struct RNCR
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >;

    using RXNCTR  = regbits< type,  0, 16 >;  /**< Receive Next Counter  */
  };

  /**
   * Transmit Next Pointer Register
   */
  struct TNPR
  : public reg< uint32_t, base_addr + 0x00000118, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, rw, 0x00000000 >;

    using TXNPTR  = regbits< type,  0, 32 >;  /**< Transmit Next Pointer  */
  };

  /**
   * Transmit Next Counter Register
   */
  struct TNCR
  : public reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, rw, 0x00000000 >;

    using TXNCTR  = regbits< type,  0, 16 >;  /**< Transmit Counter Next  */
  };

  /**
   * Transfer Control Register
   */
  struct PTCR
  : public reg< uint32_t, base_addr + 0x00000120, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, wo, 0x00000000 >;

    using RXTEN   = regbits< type,  0,  1 >;  /**< Receiver Transfer Enable      */
    using RXTDIS  = regbits< type,  1,  1 >;  /**< Receiver Transfer Disable     */
    using TXTEN   = regbits< type,  8,  1 >;  /**< Transmitter Transfer Enable   */
    using TXTDIS  = regbits< type,  9,  1 >;  /**< Transmitter Transfer Disable  */
  };

  /**
   * Transfer Status Register
   */
  struct PTSR
  : public reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, ro, 0x00000000 >;

    using RXTEN  = regbits< type,  0,  1 >;  /**< Receiver Transfer Enable     */
    using TXTEN  = regbits< type,  8,  1 >;  /**< Transmitter Transfer Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AC97C_HPP_INCLUDED
