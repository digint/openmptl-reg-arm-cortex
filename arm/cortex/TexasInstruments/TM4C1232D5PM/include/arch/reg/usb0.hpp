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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C1232D5PM.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C1232D5PM
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

#ifndef ARCH_REG_USB0_HPP_INCLUDED
#define ARCH_REG_USB0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for USB0 peripheral
 */
struct USB0
{
  static constexpr reg_addr_t base_addr = 0x40050000;

  /**
   * USB Device Functional Address
   */
  struct FADDR
  : public reg< uint8_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FADDR  = regbits< type,  0,  7 >;  /**< Function Address  */
  };

  /**
   * USB Power
   */
  struct POWER
  : public reg< uint8_t, base_addr + 0x00000001, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000001, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_POWER_PWRDNPHY  = regbits< type,  0,  1 >;  /**< Power Down PHY           */
    using USB_POWER_SUSPEND   = regbits< type,  1,  1 >;  /**< SUSPEND Mode             */
    using USB_POWER_RESUME    = regbits< type,  2,  1 >;  /**< RESUME Signaling         */
    using USB_POWER_RESET     = regbits< type,  3,  1 >;  /**< RESET Signaling          */
    using USB_POWER_SOFTCONN  = regbits< type,  6,  1 >;  /**< Soft Connect/Disconnect  */
    using USB_POWER_ISOUP     = regbits< type,  7,  1 >;  /**< Isochronous Update       */
  };

  /**
   * USB Transmit Interrupt Status
   */
  struct TXIS
  : public reg< uint16_t, base_addr + 0x00000002, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000002, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXIS_EP0  = regbits< type,  0,  1 >;  /**< TX and RX Endpoint 0 Interrupt  */
    using USB_TXIS_EP1  = regbits< type,  1,  1 >;  /**< TX Endpoint 1 Interrupt         */
    using USB_TXIS_EP2  = regbits< type,  2,  1 >;  /**< TX Endpoint 2 Interrupt         */
    using USB_TXIS_EP3  = regbits< type,  3,  1 >;  /**< TX Endpoint 3 Interrupt         */
    using USB_TXIS_EP4  = regbits< type,  4,  1 >;  /**< TX Endpoint 4 Interrupt         */
    using USB_TXIS_EP5  = regbits< type,  5,  1 >;  /**< TX Endpoint 5 Interrupt         */
    using USB_TXIS_EP6  = regbits< type,  6,  1 >;  /**< TX Endpoint 6 Interrupt         */
    using USB_TXIS_EP7  = regbits< type,  7,  1 >;  /**< TX Endpoint 7 Interrupt         */
  };

  /**
   * USB Receive Interrupt Status
   */
  struct RXIS
  : public reg< uint16_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXIS_EP1  = regbits< type,  1,  1 >;  /**< RX Endpoint 1 Interrupt  */
    using USB_RXIS_EP2  = regbits< type,  2,  1 >;  /**< RX Endpoint 2 Interrupt  */
    using USB_RXIS_EP3  = regbits< type,  3,  1 >;  /**< RX Endpoint 3 Interrupt  */
    using USB_RXIS_EP4  = regbits< type,  4,  1 >;  /**< RX Endpoint 4 Interrupt  */
    using USB_RXIS_EP5  = regbits< type,  5,  1 >;  /**< RX Endpoint 5 Interrupt  */
    using USB_RXIS_EP6  = regbits< type,  6,  1 >;  /**< RX Endpoint 6 Interrupt  */
    using USB_RXIS_EP7  = regbits< type,  7,  1 >;  /**< RX Endpoint 7 Interrupt  */
  };

  /**
   * USB Transmit Interrupt Enable
   */
  struct TXIE
  : public reg< uint16_t, base_addr + 0x00000006, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000006, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXIE_EP0  = regbits< type,  0,  1 >;  /**< TX and RX Endpoint 0 Interrupt Enable  */
    using USB_TXIE_EP1  = regbits< type,  1,  1 >;  /**< TX Endpoint 1 Interrupt Enable         */
    using USB_TXIE_EP2  = regbits< type,  2,  1 >;  /**< TX Endpoint 2 Interrupt Enable         */
    using USB_TXIE_EP3  = regbits< type,  3,  1 >;  /**< TX Endpoint 3 Interrupt Enable         */
    using USB_TXIE_EP4  = regbits< type,  4,  1 >;  /**< TX Endpoint 4 Interrupt Enable         */
    using USB_TXIE_EP5  = regbits< type,  5,  1 >;  /**< TX Endpoint 5 Interrupt Enable         */
    using USB_TXIE_EP6  = regbits< type,  6,  1 >;  /**< TX Endpoint 6 Interrupt Enable         */
    using USB_TXIE_EP7  = regbits< type,  7,  1 >;  /**< TX Endpoint 7 Interrupt Enable         */
  };

  /**
   * USB Receive Interrupt Enable
   */
  struct RXIE
  : public reg< uint16_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXIE_EP1  = regbits< type,  1,  1 >;  /**< RX Endpoint 1 Interrupt Enable  */
    using USB_RXIE_EP2  = regbits< type,  2,  1 >;  /**< RX Endpoint 2 Interrupt Enable  */
    using USB_RXIE_EP3  = regbits< type,  3,  1 >;  /**< RX Endpoint 3 Interrupt Enable  */
    using USB_RXIE_EP4  = regbits< type,  4,  1 >;  /**< RX Endpoint 4 Interrupt Enable  */
    using USB_RXIE_EP5  = regbits< type,  5,  1 >;  /**< RX Endpoint 5 Interrupt Enable  */
    using USB_RXIE_EP6  = regbits< type,  6,  1 >;  /**< RX Endpoint 6 Interrupt Enable  */
    using USB_RXIE_EP7  = regbits< type,  7,  1 >;  /**< RX Endpoint 7 Interrupt Enable  */
  };

  /**
   * USB General Interrupt Status
   */
  struct IS
  : public reg< uint8_t, base_addr + 0x0000000a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000000a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_IS_SUSPEND  = regbits< type,  0,  1 >;  /**< SUSPEND Signaling Detected  */
    using USB_IS_RESUME   = regbits< type,  1,  1 >;  /**< RESUME Signaling Detected   */
    using USB_IS_SOF      = regbits< type,  3,  1 >;  /**< Start of Frame              */
  };

  /**
   * USB General Interrupt Status
   */
  struct IS
  : public reg< uint8_t, base_addr + 0x0000000a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000000a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_IS_RESET  = regbits< type,  2,  1 >;  /**< RESET Signaling Detected  */
  };

  /**
   * USB Interrupt Enable
   */
  struct IE
  : public reg< uint8_t, base_addr + 0x0000000b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000000b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_IE_SUSPND  = regbits< type,  0,  1 >;  /**< Enable SUSPEND Interrupt         */
    using USB_IE_RESUME  = regbits< type,  1,  1 >;  /**< Enable RESUME Interrupt          */
    using USB_IE_SOF     = regbits< type,  3,  1 >;  /**< Enable Start-of-Frame Interrupt  */
    using USB_IE_DISCON  = regbits< type,  5,  1 >;  /**< Enable Disconnect Interrupt      */
  };

  /**
   * USB Interrupt Enable
   */
  struct IE
  : public reg< uint8_t, base_addr + 0x0000000b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000000b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_IE_RESET  = regbits< type,  2,  1 >;  /**< Enable RESET Interrupt  */
  };

  /**
   * USB Frame Value
   */
  struct FRAME
  : public reg< uint16_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FRAME  = regbits< type,  0, 11 >;  /**< Frame Number  */
  };

  /**
   * USB Endpoint Index
   */
  struct EPIDX
  : public reg< uint8_t, base_addr + 0x0000000e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000000e, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_EPIDX_EPIDX  = regbits< type,  0,  4 >;  /**< Endpoint Index  */
  };

  /**
   * USB Test Mode
   */
  struct TEST
  : public reg< uint8_t, base_addr + 0x0000000f, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000000f, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TEST_FORCEFS  = regbits< type,  5,  1 >;  /**< Force Full-Speed Mode  */
    using USB_TEST_FIFOACC  = regbits< type,  6,  1 >;  /**< FIFO Access            */
  };

  /**
   * USB FIFO Endpoint 0
   */
  struct FIFO0
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FIFO0_EPDATA  = regbits< type,  0, 32 >;  /**< Endpoint Data  */
  };

  /**
   * USB FIFO Endpoint 1
   */
  struct FIFO1
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FIFO1_EPDATA  = regbits< type,  0, 32 >;  /**< Endpoint Data  */
  };

  /**
   * USB FIFO Endpoint 2
   */
  struct FIFO2
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FIFO2_EPDATA  = regbits< type,  0, 32 >;  /**< Endpoint Data  */
  };

  /**
   * USB FIFO Endpoint 3
   */
  struct FIFO3
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FIFO3_EPDATA  = regbits< type,  0, 32 >;  /**< Endpoint Data  */
  };

  /**
   * USB FIFO Endpoint 4
   */
  struct FIFO4
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FIFO4_EPDATA  = regbits< type,  0, 32 >;  /**< Endpoint Data  */
  };

  /**
   * USB FIFO Endpoint 5
   */
  struct FIFO5
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FIFO5_EPDATA  = regbits< type,  0, 32 >;  /**< Endpoint Data  */
  };

  /**
   * USB FIFO Endpoint 6
   */
  struct FIFO6
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FIFO6_EPDATA  = regbits< type,  0, 32 >;  /**< Endpoint Data  */
  };

  /**
   * USB FIFO Endpoint 7
   */
  struct FIFO7
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FIFO7_EPDATA  = regbits< type,  0, 32 >;  /**< Endpoint Data  */
  };

  /**
   * USB Transmit Dynamic FIFO Sizing
   */
  struct TXFIFOSZ
  : public reg< uint8_t, base_addr + 0x00000062, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000062, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFIFOSZ_SIZE  = regbits< type,  0,  4 >;  /**< Max Packet Size               */
    using USB_TXFIFOSZ_DPB   = regbits< type,  4,  1 >;  /**< Double Packet Buffer Support  */
  };

  /**
   * USB Receive Dynamic FIFO Sizing
   */
  struct RXFIFOSZ
  : public reg< uint8_t, base_addr + 0x00000063, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000063, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXFIFOSZ_SIZE  = regbits< type,  0,  4 >;  /**< Max Packet Size               */
    using USB_RXFIFOSZ_DPB   = regbits< type,  4,  1 >;  /**< Double Packet Buffer Support  */
  };

  /**
   * USB Transmit FIFO Start Address
   */
  struct TXFIFOADD
  : public reg< uint16_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000064, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFIFOADD_ADDR  = regbits< type,  0,  9 >;  /**< Transmit/Receive Start Address  */
  };

  /**
   * USB Receive FIFO Start Address
   */
  struct RXFIFOADD
  : public reg< uint16_t, base_addr + 0x00000066, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000066, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXFIFOADD_ADDR  = regbits< type,  0,  9 >;  /**< Transmit/Receive Start Address  */
  };

  /**
   * USB Connect Timing
   */
  struct CONTIM
  : public reg< uint8_t, base_addr + 0x0000007a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000007a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_CONTIM_WTID   = regbits< type,  0,  4 >;  /**< Wait ID       */
    using USB_CONTIM_WTCON  = regbits< type,  4,  4 >;  /**< Connect Wait  */
  };

  /**
   * USB Full-Speed Last Transaction to End of Frame Timing
   */
  struct FSEOF
  : public reg< uint8_t, base_addr + 0x0000007d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000007d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_FSEOF_FSEOFG  = regbits< type,  0,  8 >;  /**< Full-Speed End-of-Frame Gap  */
  };

  /**
   * USB Low-Speed Last Transaction to End of Frame Timing
   */
  struct LSEOF
  : public reg< uint8_t, base_addr + 0x0000007e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000007e, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_LSEOF_LSEOFG  = regbits< type,  0,  8 >;  /**< Low-Speed End-of-Frame Gap  */
  };

  /**
   * USB Control and Status Endpoint 0 Low
   */
  struct CSRL0
  : public reg< uint8_t, base_addr + 0x00000102, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x00000102, wo, 0 >;

    using USB_CSRL0_RXRDY    = regbits< type,  0,  1 >;  /**< Receive Packet Ready   */
    using USB_CSRL0_TXRDY    = regbits< type,  1,  1 >;  /**< Transmit Packet Ready  */
    using USB_CSRL0_STALLED  = regbits< type,  2,  1 >;  /**< Endpoint Stalled       */
    using USB_CSRL0_DATAEND  = regbits< type,  3,  1 >;  /**< Data End               */
    using USB_CSRL0_SETEND   = regbits< type,  4,  1 >;  /**< Setup End              */
    using USB_CSRL0_STALL    = regbits< type,  5,  1 >;  /**< Send Stall             */
    using USB_CSRL0_RXRDYC   = regbits< type,  6,  1 >;  /**< RXRDY Clear            */
    using USB_CSRL0_SETENDC  = regbits< type,  7,  1 >;  /**< Setup End Clear        */
  };

  /**
   * USB Control and Status Endpoint 0 High
   */
  struct CSRH0
  : public reg< uint8_t, base_addr + 0x00000103, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x00000103, wo, 0 >;

    using USB_CSRH0_FLUSH  = regbits< type,  0,  1 >;  /**< Flush FIFO  */
  };

  /**
   * USB Receive Byte Count Endpoint 0
   */
  struct COUNT0
  : public reg< uint8_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_COUNT0_COUNT  = regbits< type,  0,  7 >;  /**< FIFO Count  */
  };

  /**
   * USB Maximum Transmit Data Endpoint 1
   */
  struct TXMAXP1
  : public reg< uint16_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXMAXP1_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Transmit Control and Status Endpoint 1 Low
   */
  struct TXCSRL1
  : public reg< uint8_t, base_addr + 0x00000112, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000112, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL1_TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Packet Ready  */
    using USB_TXCSRL1_FIFONE   = regbits< type,  1,  1 >;  /**< FIFO Not Empty         */
    using USB_TXCSRL1_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL1_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL1_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
  };

  /**
   * USB Transmit Control and Status Endpoint 1 Low
   */
  struct TXCSRL1
  : public reg< uint8_t, base_addr + 0x00000112, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000112, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL1_UNDRN  = regbits< type,  2,  1 >;  /**< Underrun    */
    using USB_TXCSRL1_STALL  = regbits< type,  4,  1 >;  /**< Send STALL  */
  };

  /**
   * USB Transmit Control and Status Endpoint 1 High
   */
  struct TXCSRH1
  : public reg< uint8_t, base_addr + 0x00000113, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000113, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRH1_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode       */
    using USB_TXCSRH1_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle      */
    using USB_TXCSRH1_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable     */
    using USB_TXCSRH1_MODE     = regbits< type,  5,  1 >;  /**< Mode                   */
    using USB_TXCSRH1_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
    using USB_TXCSRH1_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set               */
  };

  /**
   * USB Maximum Receive Data Endpoint 1
   */
  struct RXMAXP1
  : public reg< uint16_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXMAXP1_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Receive Control and Status Endpoint 1 Low
   */
  struct RXCSRL1
  : public reg< uint8_t, base_addr + 0x00000116, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000116, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL1_RXRDY    = regbits< type,  0,  1 >;  /**< Receive Packet Ready  */
    using USB_RXCSRL1_FULL     = regbits< type,  1,  1 >;  /**< FIFO Full             */
    using USB_RXCSRL1_OVER     = regbits< type,  2,  1 >;  /**< Overrun               */
    using USB_RXCSRL1_DATAERR  = regbits< type,  3,  1 >;  /**< Data Error            */
    using USB_RXCSRL1_FLUSH    = regbits< type,  4,  1 >;  /**< Flush FIFO            */
    using USB_RXCSRL1_STALL    = regbits< type,  5,  1 >;  /**< Send STALL            */
    using USB_RXCSRL1_STALLED  = regbits< type,  6,  1 >;  /**< Endpoint Stalled      */
    using USB_RXCSRL1_CLRDT    = regbits< type,  7,  1 >;  /**< Clear Data Toggle     */
  };

  /**
   * USB Receive Control and Status Endpoint 1 High
   */
  struct RXCSRH1
  : public reg< uint8_t, base_addr + 0x00000117, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000117, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH1_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode    */
    using USB_RXCSRH1_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error           */
    using USB_RXCSRH1_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable  */
    using USB_RXCSRH1_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear          */
  };

  /**
   * USB Receive Control and Status Endpoint 1 High
   */
  struct RXCSRH1
  : public reg< uint8_t, base_addr + 0x00000117, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000117, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH1_DISNYET  = regbits< type,  4,  1 >;  /**< Disable NYET           */
    using USB_RXCSRH1_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
  };

  /**
   * USB Receive Byte Count Endpoint 1
   */
  struct RXCOUNT1
  : public reg< uint16_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCOUNT1_COUNT  = regbits< type,  0, 13 >;  /**< Receive Packet Count  */
  };

  /**
   * USB Maximum Transmit Data Endpoint 2
   */
  struct TXMAXP2
  : public reg< uint16_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXMAXP2_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Transmit Control and Status Endpoint 2 Low
   */
  struct TXCSRL2
  : public reg< uint8_t, base_addr + 0x00000122, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000122, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL2_TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Packet Ready  */
    using USB_TXCSRL2_FIFONE   = regbits< type,  1,  1 >;  /**< FIFO Not Empty         */
    using USB_TXCSRL2_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL2_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL2_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
  };

  /**
   * USB Transmit Control and Status Endpoint 2 Low
   */
  struct TXCSRL2
  : public reg< uint8_t, base_addr + 0x00000122, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000122, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL2_UNDRN  = regbits< type,  2,  1 >;  /**< Underrun    */
    using USB_TXCSRL2_STALL  = regbits< type,  4,  1 >;  /**< Send STALL  */
  };

  /**
   * USB Transmit Control and Status Endpoint 2 High
   */
  struct TXCSRH2
  : public reg< uint8_t, base_addr + 0x00000123, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000123, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRH2_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode       */
    using USB_TXCSRH2_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle      */
    using USB_TXCSRH2_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable     */
    using USB_TXCSRH2_MODE     = regbits< type,  5,  1 >;  /**< Mode                   */
    using USB_TXCSRH2_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
    using USB_TXCSRH2_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set               */
  };

  /**
   * USB Maximum Receive Data Endpoint 2
   */
  struct RXMAXP2
  : public reg< uint16_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXMAXP2_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Receive Control and Status Endpoint 2 Low
   */
  struct RXCSRL2
  : public reg< uint8_t, base_addr + 0x00000126, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000126, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL2_RXRDY    = regbits< type,  0,  1 >;  /**< Receive Packet Ready  */
    using USB_RXCSRL2_FULL     = regbits< type,  1,  1 >;  /**< FIFO Full             */
    using USB_RXCSRL2_OVER     = regbits< type,  2,  1 >;  /**< Overrun               */
    using USB_RXCSRL2_DATAERR  = regbits< type,  3,  1 >;  /**< Data Error            */
    using USB_RXCSRL2_FLUSH    = regbits< type,  4,  1 >;  /**< Flush FIFO            */
    using USB_RXCSRL2_STALL    = regbits< type,  5,  1 >;  /**< Send STALL            */
    using USB_RXCSRL2_STALLED  = regbits< type,  6,  1 >;  /**< Endpoint Stalled      */
    using USB_RXCSRL2_CLRDT    = regbits< type,  7,  1 >;  /**< Clear Data Toggle     */
  };

  /**
   * USB Receive Control and Status Endpoint 2 High
   */
  struct RXCSRH2
  : public reg< uint8_t, base_addr + 0x00000127, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000127, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH2_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode    */
    using USB_RXCSRH2_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error           */
    using USB_RXCSRH2_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable  */
    using USB_RXCSRH2_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear          */
  };

  /**
   * USB Receive Control and Status Endpoint 2 High
   */
  struct RXCSRH2
  : public reg< uint8_t, base_addr + 0x00000127, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000127, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH2_DISNYET  = regbits< type,  4,  1 >;  /**< Disable NYET           */
    using USB_RXCSRH2_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
  };

  /**
   * USB Receive Byte Count Endpoint 2
   */
  struct RXCOUNT2
  : public reg< uint16_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCOUNT2_COUNT  = regbits< type,  0, 13 >;  /**< Receive Packet Count  */
  };

  /**
   * USB Maximum Transmit Data Endpoint 3
   */
  struct TXMAXP3
  : public reg< uint16_t, base_addr + 0x00000130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000130, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXMAXP3_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Transmit Control and Status Endpoint 3 Low
   */
  struct TXCSRL3
  : public reg< uint8_t, base_addr + 0x00000132, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000132, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL3_TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Packet Ready  */
    using USB_TXCSRL3_FIFONE   = regbits< type,  1,  1 >;  /**< FIFO Not Empty         */
    using USB_TXCSRL3_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL3_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL3_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
  };

  /**
   * USB Transmit Control and Status Endpoint 3 Low
   */
  struct TXCSRL3
  : public reg< uint8_t, base_addr + 0x00000132, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000132, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL3_UNDRN  = regbits< type,  2,  1 >;  /**< Underrun    */
    using USB_TXCSRL3_STALL  = regbits< type,  4,  1 >;  /**< Send STALL  */
  };

  /**
   * USB Transmit Control and Status Endpoint 3 High
   */
  struct TXCSRH3
  : public reg< uint8_t, base_addr + 0x00000133, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000133, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRH3_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode       */
    using USB_TXCSRH3_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle      */
    using USB_TXCSRH3_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable     */
    using USB_TXCSRH3_MODE     = regbits< type,  5,  1 >;  /**< Mode                   */
    using USB_TXCSRH3_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
    using USB_TXCSRH3_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set               */
  };

  /**
   * USB Maximum Receive Data Endpoint 3
   */
  struct RXMAXP3
  : public reg< uint16_t, base_addr + 0x00000134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000134, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXMAXP3_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Receive Control and Status Endpoint 3 Low
   */
  struct RXCSRL3
  : public reg< uint8_t, base_addr + 0x00000136, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000136, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL3_RXRDY    = regbits< type,  0,  1 >;  /**< Receive Packet Ready  */
    using USB_RXCSRL3_FULL     = regbits< type,  1,  1 >;  /**< FIFO Full             */
    using USB_RXCSRL3_OVER     = regbits< type,  2,  1 >;  /**< Overrun               */
    using USB_RXCSRL3_DATAERR  = regbits< type,  3,  1 >;  /**< Data Error            */
    using USB_RXCSRL3_FLUSH    = regbits< type,  4,  1 >;  /**< Flush FIFO            */
    using USB_RXCSRL3_STALL    = regbits< type,  5,  1 >;  /**< Send STALL            */
    using USB_RXCSRL3_STALLED  = regbits< type,  6,  1 >;  /**< Endpoint Stalled      */
    using USB_RXCSRL3_CLRDT    = regbits< type,  7,  1 >;  /**< Clear Data Toggle     */
  };

  /**
   * USB Receive Control and Status Endpoint 3 High
   */
  struct RXCSRH3
  : public reg< uint8_t, base_addr + 0x00000137, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000137, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH3_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode    */
    using USB_RXCSRH3_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error           */
    using USB_RXCSRH3_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable  */
    using USB_RXCSRH3_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear          */
  };

  /**
   * USB Receive Control and Status Endpoint 3 High
   */
  struct RXCSRH3
  : public reg< uint8_t, base_addr + 0x00000137, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000137, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH3_DISNYET  = regbits< type,  4,  1 >;  /**< Disable NYET           */
    using USB_RXCSRH3_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
  };

  /**
   * USB Receive Byte Count Endpoint 3
   */
  struct RXCOUNT3
  : public reg< uint16_t, base_addr + 0x00000138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000138, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCOUNT3_COUNT  = regbits< type,  0, 13 >;  /**< Receive Packet Count  */
  };

  /**
   * USB Maximum Transmit Data Endpoint 4
   */
  struct TXMAXP4
  : public reg< uint16_t, base_addr + 0x00000140, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000140, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXMAXP4_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Transmit Control and Status Endpoint 4 Low
   */
  struct TXCSRL4
  : public reg< uint8_t, base_addr + 0x00000142, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000142, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL4_TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Packet Ready  */
    using USB_TXCSRL4_FIFONE   = regbits< type,  1,  1 >;  /**< FIFO Not Empty         */
    using USB_TXCSRL4_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL4_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL4_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
  };

  /**
   * USB Transmit Control and Status Endpoint 4 Low
   */
  struct TXCSRL4
  : public reg< uint8_t, base_addr + 0x00000142, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000142, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL4_UNDRN  = regbits< type,  2,  1 >;  /**< Underrun    */
    using USB_TXCSRL4_STALL  = regbits< type,  4,  1 >;  /**< Send STALL  */
  };

  /**
   * USB Transmit Control and Status Endpoint 4 High
   */
  struct TXCSRH4
  : public reg< uint8_t, base_addr + 0x00000143, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000143, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRH4_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode       */
    using USB_TXCSRH4_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle      */
    using USB_TXCSRH4_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable     */
    using USB_TXCSRH4_MODE     = regbits< type,  5,  1 >;  /**< Mode                   */
    using USB_TXCSRH4_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
    using USB_TXCSRH4_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set               */
  };

  /**
   * USB Maximum Receive Data Endpoint 4
   */
  struct RXMAXP4
  : public reg< uint16_t, base_addr + 0x00000144, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000144, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXMAXP4_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Receive Control and Status Endpoint 4 Low
   */
  struct RXCSRL4
  : public reg< uint8_t, base_addr + 0x00000146, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000146, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL4_RXRDY    = regbits< type,  0,  1 >;  /**< Receive Packet Ready  */
    using USB_RXCSRL4_FULL     = regbits< type,  1,  1 >;  /**< FIFO Full             */
    using USB_RXCSRL4_OVER     = regbits< type,  2,  1 >;  /**< Overrun               */
    using USB_RXCSRL4_DATAERR  = regbits< type,  3,  1 >;  /**< Data Error            */
    using USB_RXCSRL4_FLUSH    = regbits< type,  4,  1 >;  /**< Flush FIFO            */
    using USB_RXCSRL4_STALL    = regbits< type,  5,  1 >;  /**< Send STALL            */
    using USB_RXCSRL4_STALLED  = regbits< type,  6,  1 >;  /**< Endpoint Stalled      */
    using USB_RXCSRL4_CLRDT    = regbits< type,  7,  1 >;  /**< Clear Data Toggle     */
  };

  /**
   * USB Receive Control and Status Endpoint 4 High
   */
  struct RXCSRH4
  : public reg< uint8_t, base_addr + 0x00000147, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000147, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH4_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode    */
    using USB_RXCSRH4_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error           */
    using USB_RXCSRH4_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable  */
    using USB_RXCSRH4_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear          */
  };

  /**
   * USB Receive Control and Status Endpoint 4 High
   */
  struct RXCSRH4
  : public reg< uint8_t, base_addr + 0x00000147, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000147, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH4_DISNYET  = regbits< type,  4,  1 >;  /**< Disable NYET           */
    using USB_RXCSRH4_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
  };

  /**
   * USB Receive Byte Count Endpoint 4
   */
  struct RXCOUNT4
  : public reg< uint16_t, base_addr + 0x00000148, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000148, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCOUNT4_COUNT  = regbits< type,  0, 13 >;  /**< Receive Packet Count  */
  };

  /**
   * USB Maximum Transmit Data Endpoint 5
   */
  struct TXMAXP5
  : public reg< uint16_t, base_addr + 0x00000150, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000150, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXMAXP5_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Transmit Control and Status Endpoint 5 Low
   */
  struct TXCSRL5
  : public reg< uint8_t, base_addr + 0x00000152, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000152, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL5_TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Packet Ready  */
    using USB_TXCSRL5_FIFONE   = regbits< type,  1,  1 >;  /**< FIFO Not Empty         */
    using USB_TXCSRL5_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL5_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL5_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
  };

  /**
   * USB Transmit Control and Status Endpoint 5 Low
   */
  struct TXCSRL5
  : public reg< uint8_t, base_addr + 0x00000152, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000152, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL5_UNDRN  = regbits< type,  2,  1 >;  /**< Underrun    */
    using USB_TXCSRL5_STALL  = regbits< type,  4,  1 >;  /**< Send STALL  */
  };

  /**
   * USB Transmit Control and Status Endpoint 5 High
   */
  struct TXCSRH5
  : public reg< uint8_t, base_addr + 0x00000153, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000153, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRH5_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode       */
    using USB_TXCSRH5_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle      */
    using USB_TXCSRH5_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable     */
    using USB_TXCSRH5_MODE     = regbits< type,  5,  1 >;  /**< Mode                   */
    using USB_TXCSRH5_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
    using USB_TXCSRH5_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set               */
  };

  /**
   * USB Maximum Receive Data Endpoint 5
   */
  struct RXMAXP5
  : public reg< uint16_t, base_addr + 0x00000154, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000154, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXMAXP5_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Receive Control and Status Endpoint 5 Low
   */
  struct RXCSRL5
  : public reg< uint8_t, base_addr + 0x00000156, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000156, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL5_RXRDY    = regbits< type,  0,  1 >;  /**< Receive Packet Ready  */
    using USB_RXCSRL5_FULL     = regbits< type,  1,  1 >;  /**< FIFO Full             */
    using USB_RXCSRL5_OVER     = regbits< type,  2,  1 >;  /**< Overrun               */
    using USB_RXCSRL5_DATAERR  = regbits< type,  3,  1 >;  /**< Data Error            */
    using USB_RXCSRL5_FLUSH    = regbits< type,  4,  1 >;  /**< Flush FIFO            */
    using USB_RXCSRL5_STALL    = regbits< type,  5,  1 >;  /**< Send STALL            */
    using USB_RXCSRL5_STALLED  = regbits< type,  6,  1 >;  /**< Endpoint Stalled      */
    using USB_RXCSRL5_CLRDT    = regbits< type,  7,  1 >;  /**< Clear Data Toggle     */
  };

  /**
   * USB Receive Control and Status Endpoint 5 High
   */
  struct RXCSRH5
  : public reg< uint8_t, base_addr + 0x00000157, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000157, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH5_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode    */
    using USB_RXCSRH5_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error           */
    using USB_RXCSRH5_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable  */
    using USB_RXCSRH5_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear          */
  };

  /**
   * USB Receive Control and Status Endpoint 5 High
   */
  struct RXCSRH5
  : public reg< uint8_t, base_addr + 0x00000157, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000157, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH5_DISNYET  = regbits< type,  4,  1 >;  /**< Disable NYET           */
    using USB_RXCSRH5_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
  };

  /**
   * USB Receive Byte Count Endpoint 5
   */
  struct RXCOUNT5
  : public reg< uint16_t, base_addr + 0x00000158, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000158, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCOUNT5_COUNT  = regbits< type,  0, 13 >;  /**< Receive Packet Count  */
  };

  /**
   * USB Maximum Transmit Data Endpoint 6
   */
  struct TXMAXP6
  : public reg< uint16_t, base_addr + 0x00000160, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000160, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXMAXP6_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Transmit Control and Status Endpoint 6 Low
   */
  struct TXCSRL6
  : public reg< uint8_t, base_addr + 0x00000162, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000162, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL6_TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Packet Ready  */
    using USB_TXCSRL6_FIFONE   = regbits< type,  1,  1 >;  /**< FIFO Not Empty         */
    using USB_TXCSRL6_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL6_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL6_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
  };

  /**
   * USB Transmit Control and Status Endpoint 6 Low
   */
  struct TXCSRL6
  : public reg< uint8_t, base_addr + 0x00000162, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000162, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL6_UNDRN  = regbits< type,  2,  1 >;  /**< Underrun    */
    using USB_TXCSRL6_STALL  = regbits< type,  4,  1 >;  /**< Send STALL  */
  };

  /**
   * USB Transmit Control and Status Endpoint 6 High
   */
  struct TXCSRH6
  : public reg< uint8_t, base_addr + 0x00000163, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000163, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRH6_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode       */
    using USB_TXCSRH6_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle      */
    using USB_TXCSRH6_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable     */
    using USB_TXCSRH6_MODE     = regbits< type,  5,  1 >;  /**< Mode                   */
    using USB_TXCSRH6_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
    using USB_TXCSRH6_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set               */
  };

  /**
   * USB Maximum Receive Data Endpoint 6
   */
  struct RXMAXP6
  : public reg< uint16_t, base_addr + 0x00000164, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000164, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXMAXP6_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Receive Control and Status Endpoint 6 Low
   */
  struct RXCSRL6
  : public reg< uint8_t, base_addr + 0x00000166, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000166, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL6_RXRDY    = regbits< type,  0,  1 >;  /**< Receive Packet Ready  */
    using USB_RXCSRL6_FULL     = regbits< type,  1,  1 >;  /**< FIFO Full             */
    using USB_RXCSRL6_OVER     = regbits< type,  2,  1 >;  /**< Overrun               */
    using USB_RXCSRL6_DATAERR  = regbits< type,  3,  1 >;  /**< Data Error            */
    using USB_RXCSRL6_FLUSH    = regbits< type,  4,  1 >;  /**< Flush FIFO            */
    using USB_RXCSRL6_STALL    = regbits< type,  5,  1 >;  /**< Send STALL            */
    using USB_RXCSRL6_STALLED  = regbits< type,  6,  1 >;  /**< Endpoint Stalled      */
    using USB_RXCSRL6_CLRDT    = regbits< type,  7,  1 >;  /**< Clear Data Toggle     */
  };

  /**
   * USB Receive Control and Status Endpoint 6 High
   */
  struct RXCSRH6
  : public reg< uint8_t, base_addr + 0x00000167, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000167, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH6_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode    */
    using USB_RXCSRH6_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error           */
    using USB_RXCSRH6_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable  */
    using USB_RXCSRH6_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear          */
  };

  /**
   * USB Receive Control and Status Endpoint 6 High
   */
  struct RXCSRH6
  : public reg< uint8_t, base_addr + 0x00000167, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000167, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH6_DISNYET  = regbits< type,  4,  1 >;  /**< Disable NYET           */
    using USB_RXCSRH6_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
  };

  /**
   * USB Receive Byte Count Endpoint 6
   */
  struct RXCOUNT6
  : public reg< uint16_t, base_addr + 0x00000168, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000168, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCOUNT6_COUNT  = regbits< type,  0, 13 >;  /**< Receive Packet Count  */
  };

  /**
   * USB Maximum Transmit Data Endpoint 7
   */
  struct TXMAXP7
  : public reg< uint16_t, base_addr + 0x00000170, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000170, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXMAXP7_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Transmit Control and Status Endpoint 7 Low
   */
  struct TXCSRL7
  : public reg< uint8_t, base_addr + 0x00000172, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000172, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL7_TXRDY    = regbits< type,  0,  1 >;  /**< Transmit Packet Ready  */
    using USB_TXCSRL7_FIFONE   = regbits< type,  1,  1 >;  /**< FIFO Not Empty         */
    using USB_TXCSRL7_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL7_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL7_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
  };

  /**
   * USB Transmit Control and Status Endpoint 7 Low
   */
  struct TXCSRL7
  : public reg< uint8_t, base_addr + 0x00000172, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000172, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRL7_UNDRN  = regbits< type,  2,  1 >;  /**< Underrun    */
    using USB_TXCSRL7_STALL  = regbits< type,  4,  1 >;  /**< Send STALL  */
  };

  /**
   * USB Transmit Control and Status Endpoint 7 High
   */
  struct TXCSRH7
  : public reg< uint8_t, base_addr + 0x00000173, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000173, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXCSRH7_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode       */
    using USB_TXCSRH7_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle      */
    using USB_TXCSRH7_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable     */
    using USB_TXCSRH7_MODE     = regbits< type,  5,  1 >;  /**< Mode                   */
    using USB_TXCSRH7_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
    using USB_TXCSRH7_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set               */
  };

  /**
   * USB Maximum Receive Data Endpoint 7
   */
  struct RXMAXP7
  : public reg< uint16_t, base_addr + 0x00000174, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000174, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXMAXP7_MAXLOAD  = regbits< type,  0, 11 >;  /**< Maximum Payload  */
  };

  /**
   * USB Receive Control and Status Endpoint 7 Low
   */
  struct RXCSRL7
  : public reg< uint8_t, base_addr + 0x00000176, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000176, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL7_RXRDY    = regbits< type,  0,  1 >;  /**< Receive Packet Ready  */
    using USB_RXCSRL7_FULL     = regbits< type,  1,  1 >;  /**< FIFO Full             */
    using USB_RXCSRL7_OVER     = regbits< type,  2,  1 >;  /**< Overrun               */
    using USB_RXCSRL7_DATAERR  = regbits< type,  3,  1 >;  /**< Data Error            */
    using USB_RXCSRL7_FLUSH    = regbits< type,  4,  1 >;  /**< Flush FIFO            */
    using USB_RXCSRL7_STALL    = regbits< type,  5,  1 >;  /**< Send STALL            */
    using USB_RXCSRL7_STALLED  = regbits< type,  6,  1 >;  /**< Endpoint Stalled      */
    using USB_RXCSRL7_CLRDT    = regbits< type,  7,  1 >;  /**< Clear Data Toggle     */
  };

  /**
   * USB Receive Control and Status Endpoint 7 High
   */
  struct RXCSRH7
  : public reg< uint8_t, base_addr + 0x00000177, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000177, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH7_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode    */
    using USB_RXCSRH7_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error           */
    using USB_RXCSRH7_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable  */
    using USB_RXCSRH7_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear          */
  };

  /**
   * USB Receive Control and Status Endpoint 7 High
   */
  struct RXCSRH7
  : public reg< uint8_t, base_addr + 0x00000177, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000177, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH7_DISNYET  = regbits< type,  4,  1 >;  /**< Disable NYET           */
    using USB_RXCSRH7_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers  */
  };

  /**
   * USB Receive Byte Count Endpoint 7
   */
  struct RXCOUNT7
  : public reg< uint16_t, base_addr + 0x00000178, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000178, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCOUNT7_COUNT  = regbits< type,  0, 13 >;  /**< Receive Packet Count  */
  };

  /**
   * USB Receive Double Packet Buffer Disable
   */
  struct RXDPKTBUFDIS
  : public reg< uint16_t, base_addr + 0x00000340, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000340, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXDPKTBUFDIS_EP1  = regbits< type,  1,  1 >;  /**< EP1 RX Double-Packet Buffer Disable  */
    using USB_RXDPKTBUFDIS_EP2  = regbits< type,  2,  1 >;  /**< EP2 RX Double-Packet Buffer Disable  */
    using USB_RXDPKTBUFDIS_EP3  = regbits< type,  3,  1 >;  /**< EP3 RX Double-Packet Buffer Disable  */
    using USB_RXDPKTBUFDIS_EP4  = regbits< type,  4,  1 >;  /**< EP4 RX Double-Packet Buffer Disable  */
    using USB_RXDPKTBUFDIS_EP5  = regbits< type,  5,  1 >;  /**< EP5 RX Double-Packet Buffer Disable  */
    using USB_RXDPKTBUFDIS_EP6  = regbits< type,  6,  1 >;  /**< EP6 RX Double-Packet Buffer Disable  */
    using USB_RXDPKTBUFDIS_EP7  = regbits< type,  7,  1 >;  /**< EP7 RX Double-Packet Buffer Disable  */
  };

  /**
   * USB Transmit Double Packet Buffer Disable
   */
  struct TXDPKTBUFDIS
  : public reg< uint16_t, base_addr + 0x00000342, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000342, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXDPKTBUFDIS_EP1  = regbits< type,  1,  1 >;  /**< EP1 TX Double-Packet Buffer Disable  */
    using USB_TXDPKTBUFDIS_EP2  = regbits< type,  2,  1 >;  /**< EP2 TX Double-Packet Buffer Disable  */
    using USB_TXDPKTBUFDIS_EP3  = regbits< type,  3,  1 >;  /**< EP3 TX Double-Packet Buffer Disable  */
    using USB_TXDPKTBUFDIS_EP4  = regbits< type,  4,  1 >;  /**< EP4 TX Double-Packet Buffer Disable  */
    using USB_TXDPKTBUFDIS_EP5  = regbits< type,  5,  1 >;  /**< EP5 TX Double-Packet Buffer Disable  */
    using USB_TXDPKTBUFDIS_EP6  = regbits< type,  6,  1 >;  /**< EP6 TX Double-Packet Buffer Disable  */
    using USB_TXDPKTBUFDIS_EP7  = regbits< type,  7,  1 >;  /**< EP7 TX Double-Packet Buffer Disable  */
  };

  /**
   * USB Device RESUME Raw Interrupt Status
   */
  struct DRRIS
  : public reg< uint32_t, base_addr + 0x00000410, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000410, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_DRRIS_RESUME  = regbits< type,  0,  1 >;  /**< RESUME Interrupt Status  */
  };

  /**
   * USB Device RESUME Interrupt Mask
   */
  struct DRIM
  : public reg< uint32_t, base_addr + 0x00000414, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000414, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_DRIM_RESUME  = regbits< type,  0,  1 >;  /**< RESUME Interrupt Mask  */
  };

  /**
   * USB Device RESUME Interrupt Status and Clear
   */
  struct DRISC
  : public reg< uint32_t, base_addr + 0x00000418, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000418, wo, 0 >;

    using USB_DRISC_RESUME  = regbits< type,  0,  1 >;  /**< RESUME Interrupt Status and Clear  */
  };

  /**
   * USB DMA Select
   */
  struct DMASEL
  : public reg< uint32_t, base_addr + 0x00000450, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000450, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_DMASEL_DMAARX  = regbits< type,  0,  4 >;  /**< DMA A RX Select  */
    using USB_DMASEL_DMAATX  = regbits< type,  4,  4 >;  /**< DMA A TX Select  */
    using USB_DMASEL_DMABRX  = regbits< type,  8,  4 >;  /**< DMA B RX Select  */
    using USB_DMASEL_DMABTX  = regbits< type, 12,  4 >;  /**< DMA B TX Select  */
    using USB_DMASEL_DMACRX  = regbits< type, 16,  4 >;  /**< DMA C RX Select  */
    using USB_DMASEL_DMACTX  = regbits< type, 20,  4 >;  /**< DMA C TX Select  */
  };

  /**
   * USB Peripheral Properties
   */
  struct PP
  : public reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_PP_TYPE  = regbits< type,  0,  4 >;  /**< Controller Type  */
    using USB_PP_PHY   = regbits< type,  4,  1 >;  /**< PHY Present      */
    using USB_PP_USB   = regbits< type,  6,  2 >;  /**< USB Capability   */
    using USB_PP_ECNT  = regbits< type,  8,  8 >;  /**< Endpoint Count   */
  };
};
} // namespace mptl

#endif // ARCH_REG_USB0_HPP_INCLUDED
