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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123GH6ZRB.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123GH6ZRB
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
    using USB_IS_BABBLE   = regbits< type,  2,  1 >;  /**< Babble Detected             */
    using USB_IS_SOF      = regbits< type,  3,  1 >;  /**< Start of Frame              */
    using USB_IS_CONN     = regbits< type,  4,  1 >;  /**< Session Connect             */
    using USB_IS_DISCON   = regbits< type,  5,  1 >;  /**< Session Disconnect          */
    using USB_IS_SESREQ   = regbits< type,  6,  1 >;  /**< SESSION REQUEST             */
    using USB_IS_VBUSERR  = regbits< type,  7,  1 >;  /**< VBUS Error                  */
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

    using USB_IE_SUSPND   = regbits< type,  0,  1 >;  /**< Enable SUSPEND Interrupt         */
    using USB_IE_RESUME   = regbits< type,  1,  1 >;  /**< Enable RESUME Interrupt          */
    using USB_IE_BABBLE   = regbits< type,  2,  1 >;  /**< Enable Babble Interrupt          */
    using USB_IE_SOF      = regbits< type,  3,  1 >;  /**< Enable Start-of-Frame Interrupt  */
    using USB_IE_CONN     = regbits< type,  4,  1 >;  /**< Enable Connect Interrupt         */
    using USB_IE_DISCON   = regbits< type,  5,  1 >;  /**< Enable Disconnect Interrupt      */
    using USB_IE_SESREQ   = regbits< type,  6,  1 >;  /**< Enable Session Request           */
    using USB_IE_VBUSERR  = regbits< type,  7,  1 >;  /**< Enable VBUS Error Interrupt      */
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
    using USB_TEST_FORCEH   = regbits< type,  7,  1 >;  /**< Force Host Mode        */
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
   * USB Device Control
   */
  struct DEVCTL
  : public reg< uint8_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_DEVCTL_SESSION  = regbits< type,  0,  1 >;  /**< Session Start/End           */
    using USB_DEVCTL_HOSTREQ  = regbits< type,  1,  1 >;  /**< Host Request                */
    using USB_DEVCTL_HOST     = regbits< type,  2,  1 >;  /**< Host Mode                   */
    using USB_DEVCTL_VBUS     = regbits< type,  3,  2 >;  /**< VBUS Level                  */
    using USB_DEVCTL_LSDEV    = regbits< type,  5,  1 >;  /**< Low-Speed Device Detected   */
    using USB_DEVCTL_FSDEV    = regbits< type,  6,  1 >;  /**< Full-Speed Device Detected  */
    using USB_DEVCTL_DEV      = regbits< type,  7,  1 >;  /**< Device Mode                 */
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
   * USB OTG VBUS Pulse Timing
   */
  struct VPLEN
  : public reg< uint8_t, base_addr + 0x0000007b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000007b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_VPLEN_VPLEN  = regbits< type,  0,  8 >;  /**< VBUS Pulse Length  */
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
   * USB Transmit Functional Address Endpoint 0
   */
  struct TXFUNCADDR0
  : public reg< uint8_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFUNCADDR0_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Transmit Hub Address Endpoint 0
   */
  struct TXHUBADDR0
  : public reg< uint8_t, base_addr + 0x00000082, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000082, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBADDR0_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Transmit Hub Port Endpoint 0
   */
  struct TXHUBPORT0
  : public reg< uint8_t, base_addr + 0x00000083, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000083, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBPORT0_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Transmit Functional Address Endpoint 1
   */
  struct TXFUNCADDR1
  : public reg< uint8_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFUNCADDR1_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Transmit Hub Address Endpoint 1
   */
  struct TXHUBADDR1
  : public reg< uint8_t, base_addr + 0x0000008a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000008a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBADDR1_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Transmit Hub Port Endpoint 1
   */
  struct TXHUBPORT1
  : public reg< uint8_t, base_addr + 0x0000008b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000008b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBPORT1_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Receive Functional Address Endpoint 1
   */
  struct RXFUNCADDR1
  : public reg< uint8_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXFUNCADDR1_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Receive Hub Address Endpoint 1
   */
  struct RXHUBADDR1
  : public reg< uint8_t, base_addr + 0x0000008e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000008e, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBADDR1_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Receive Hub Port Endpoint 1
   */
  struct RXHUBPORT1
  : public reg< uint8_t, base_addr + 0x0000008f, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000008f, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBPORT1_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Transmit Functional Address Endpoint 2
   */
  struct TXFUNCADDR2
  : public reg< uint8_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000090, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFUNCADDR2_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Transmit Hub Address Endpoint 2
   */
  struct TXHUBADDR2
  : public reg< uint8_t, base_addr + 0x00000092, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000092, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBADDR2_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Transmit Hub Port Endpoint 2
   */
  struct TXHUBPORT2
  : public reg< uint8_t, base_addr + 0x00000093, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000093, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBPORT2_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Receive Functional Address Endpoint 2
   */
  struct RXFUNCADDR2
  : public reg< uint8_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000094, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXFUNCADDR2_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Receive Hub Address Endpoint 2
   */
  struct RXHUBADDR2
  : public reg< uint8_t, base_addr + 0x00000096, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000096, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBADDR2_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Receive Hub Port Endpoint 2
   */
  struct RXHUBPORT2
  : public reg< uint8_t, base_addr + 0x00000097, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000097, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBPORT2_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Transmit Functional Address Endpoint 3
   */
  struct TXFUNCADDR3
  : public reg< uint8_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000098, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFUNCADDR3_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Transmit Hub Address Endpoint 3
   */
  struct TXHUBADDR3
  : public reg< uint8_t, base_addr + 0x0000009a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000009a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBADDR3_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Transmit Hub Port Endpoint 3
   */
  struct TXHUBPORT3
  : public reg< uint8_t, base_addr + 0x0000009b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000009b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBPORT3_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Receive Functional Address Endpoint 3
   */
  struct RXFUNCADDR3
  : public reg< uint8_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000009c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXFUNCADDR3_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Receive Hub Address Endpoint 3
   */
  struct RXHUBADDR3
  : public reg< uint8_t, base_addr + 0x0000009e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000009e, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBADDR3_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Receive Hub Port Endpoint 3
   */
  struct RXHUBPORT3
  : public reg< uint8_t, base_addr + 0x0000009f, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000009f, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBPORT3_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Transmit Functional Address Endpoint 4
   */
  struct TXFUNCADDR4
  : public reg< uint8_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000a0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFUNCADDR4_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Transmit Hub Address Endpoint 4
   */
  struct TXHUBADDR4
  : public reg< uint8_t, base_addr + 0x000000a2, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000a2, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBADDR4_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Transmit Hub Port Endpoint 4
   */
  struct TXHUBPORT4
  : public reg< uint8_t, base_addr + 0x000000a3, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000a3, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBPORT4_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Receive Functional Address Endpoint 4
   */
  struct RXFUNCADDR4
  : public reg< uint8_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000a4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXFUNCADDR4_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Receive Hub Address Endpoint 4
   */
  struct RXHUBADDR4
  : public reg< uint8_t, base_addr + 0x000000a6, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000a6, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBADDR4_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Receive Hub Port Endpoint 4
   */
  struct RXHUBPORT4
  : public reg< uint8_t, base_addr + 0x000000a7, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000a7, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBPORT4_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Transmit Functional Address Endpoint 5
   */
  struct TXFUNCADDR5
  : public reg< uint8_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000a8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFUNCADDR5_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Transmit Hub Address Endpoint 5
   */
  struct TXHUBADDR5
  : public reg< uint8_t, base_addr + 0x000000aa, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000aa, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBADDR5_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Transmit Hub Port Endpoint 5
   */
  struct TXHUBPORT5
  : public reg< uint8_t, base_addr + 0x000000ab, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000ab, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBPORT5_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Receive Functional Address Endpoint 5
   */
  struct RXFUNCADDR5
  : public reg< uint8_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000ac, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXFUNCADDR5_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Receive Hub Address Endpoint 5
   */
  struct RXHUBADDR5
  : public reg< uint8_t, base_addr + 0x000000ae, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000ae, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBADDR5_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Receive Hub Port Endpoint 5
   */
  struct RXHUBPORT5
  : public reg< uint8_t, base_addr + 0x000000af, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000af, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBPORT5_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Transmit Functional Address Endpoint 6
   */
  struct TXFUNCADDR6
  : public reg< uint8_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFUNCADDR6_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Transmit Hub Address Endpoint 6
   */
  struct TXHUBADDR6
  : public reg< uint8_t, base_addr + 0x000000b2, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000b2, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBADDR6_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Transmit Hub Port Endpoint 6
   */
  struct TXHUBPORT6
  : public reg< uint8_t, base_addr + 0x000000b3, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000b3, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBPORT6_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Receive Functional Address Endpoint 6
   */
  struct RXFUNCADDR6
  : public reg< uint8_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXFUNCADDR6_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Receive Hub Address Endpoint 6
   */
  struct RXHUBADDR6
  : public reg< uint8_t, base_addr + 0x000000b6, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000b6, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBADDR6_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Receive Hub Port Endpoint 6
   */
  struct RXHUBPORT6
  : public reg< uint8_t, base_addr + 0x000000b7, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000b7, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBPORT6_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Transmit Functional Address Endpoint 7
   */
  struct TXFUNCADDR7
  : public reg< uint8_t, base_addr + 0x000000b8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000b8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXFUNCADDR7_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Transmit Hub Address Endpoint 7
   */
  struct TXHUBADDR7
  : public reg< uint8_t, base_addr + 0x000000ba, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000ba, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBADDR7_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Transmit Hub Port Endpoint 7
   */
  struct TXHUBPORT7
  : public reg< uint8_t, base_addr + 0x000000bb, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000bb, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXHUBPORT7_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
  };

  /**
   * USB Receive Functional Address Endpoint 7
   */
  struct RXFUNCADDR7
  : public reg< uint8_t, base_addr + 0x000000bc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000bc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXFUNCADDR7_ADDR  = regbits< type,  0,  7 >;  /**< Device Address  */
  };

  /**
   * USB Receive Hub Address Endpoint 7
   */
  struct RXHUBADDR7
  : public reg< uint8_t, base_addr + 0x000000be, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000be, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBADDR7_ADDR  = regbits< type,  0,  7 >;  /**< Hub Address  */
  };

  /**
   * USB Receive Hub Port Endpoint 7
   */
  struct RXHUBPORT7
  : public reg< uint8_t, base_addr + 0x000000bf, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x000000bf, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXHUBPORT7_PORT  = regbits< type,  0,  7 >;  /**< Hub Port  */
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
   * USB Control and Status Endpoint 0 Low
   */
  struct CSRL0
  : public reg< uint8_t, base_addr + 0x00000102, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x00000102, wo, 0 >;

    using USB_CSRL0_SETUP   = regbits< type,  3,  1 >;  /**< Setup Packet    */
    using USB_CSRL0_ERROR   = regbits< type,  4,  1 >;  /**< Error           */
    using USB_CSRL0_REQPKT  = regbits< type,  5,  1 >;  /**< Request Packet  */
    using USB_CSRL0_STATUS  = regbits< type,  6,  1 >;  /**< STATUS Packet   */
    using USB_CSRL0_NAKTO   = regbits< type,  7,  1 >;  /**< NAK Timeout     */
  };

  /**
   * USB Control and Status Endpoint 0 High
   */
  struct CSRH0
  : public reg< uint8_t, base_addr + 0x00000103, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x00000103, wo, 0 >;

    using USB_CSRH0_FLUSH  = regbits< type,  0,  1 >;  /**< Flush FIFO                */
    using USB_CSRH0_DT     = regbits< type,  1,  1 >;  /**< Data Toggle               */
    using USB_CSRH0_DTWE   = regbits< type,  2,  1 >;  /**< Data Toggle Write Enable  */
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
   * USB Type Endpoint 0
   */
  struct TYPE0
  : public reg< uint8_t, base_addr + 0x0000010a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000010a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TYPE0_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed  */
  };

  /**
   * USB NAK Limit
   */
  struct NAKLMT
  : public reg< uint8_t, base_addr + 0x0000010b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000010b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_NAKLMT_NAKLMT  = regbits< type,  0,  5 >;  /**< EP0 NAK Limit  */
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
    using USB_TXCSRL1_ERROR    = regbits< type,  2,  1 >;  /**< Error                  */
    using USB_TXCSRL1_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL1_SETUP    = regbits< type,  4,  1 >;  /**< Setup Packet           */
    using USB_TXCSRL1_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL1_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
    using USB_TXCSRL1_NAKTO    = regbits< type,  7,  1 >;  /**< NAK Timeout            */
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

    using USB_TXCSRH1_DT       = regbits< type,  0,  1 >;  /**< Data Toggle               */
    using USB_TXCSRH1_DTWE     = regbits< type,  1,  1 >;  /**< Data Toggle Write Enable  */
    using USB_TXCSRH1_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode          */
    using USB_TXCSRH1_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle         */
    using USB_TXCSRH1_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable        */
    using USB_TXCSRH1_MODE     = regbits< type,  5,  1 >;  /**< Mode                      */
    using USB_TXCSRH1_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers     */
    using USB_TXCSRH1_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set                  */
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
   * USB Receive Control and Status Endpoint 1 Low
   */
  struct RXCSRL1
  : public reg< uint8_t, base_addr + 0x00000116, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000116, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL1_ERROR   = regbits< type,  2,  1 >;  /**< Error           */
    using USB_RXCSRL1_NAKTO   = regbits< type,  3,  1 >;  /**< NAK Timeout     */
    using USB_RXCSRL1_REQPKT  = regbits< type,  5,  1 >;  /**< Request Packet  */
  };

  /**
   * USB Receive Control and Status Endpoint 1 High
   */
  struct RXCSRH1
  : public reg< uint8_t, base_addr + 0x00000117, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000117, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH1_DT      = regbits< type,  1,  1 >;  /**< Data Toggle               */
    using USB_RXCSRH1_DTWE    = regbits< type,  2,  1 >;  /**< Data Toggle Write Enable  */
    using USB_RXCSRH1_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode          */
    using USB_RXCSRH1_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error                 */
    using USB_RXCSRH1_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable        */
    using USB_RXCSRH1_AUTORQ  = regbits< type,  6,  1 >;  /**< Auto Request              */
    using USB_RXCSRH1_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear                */
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
   * USB Host Transmit Configure Type Endpoint 1
   */
  struct TXTYPE1
  : public reg< uint8_t, base_addr + 0x0000011a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000011a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXTYPE1_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_TXTYPE1_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_TXTYPE1_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Transmit Interval Endpoint 1
   */
  struct TXINTERVAL1
  : public reg< uint8_t, base_addr + 0x0000011b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000011b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL1_TXPOLL  = regbits< type,  0,  8 >;  /**< TX Polling  */
  };

  /**
   * USB Host Transmit Interval Endpoint 1
   */
  struct TXINTERVAL1
  : public reg< uint8_t, base_addr + 0x0000011b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000011b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL1_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
  };

  /**
   * USB Host Configure Receive Type Endpoint 1
   */
  struct RXTYPE1
  : public reg< uint8_t, base_addr + 0x0000011c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000011c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXTYPE1_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_RXTYPE1_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_RXTYPE1_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 1
   */
  struct RXINTERVAL1
  : public reg< uint8_t, base_addr + 0x0000011d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000011d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL1_TXPOLL  = regbits< type,  0,  8 >;  /**< RX Polling  */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 1
   */
  struct RXINTERVAL1
  : public reg< uint8_t, base_addr + 0x0000011d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000011d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL1_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
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
    using USB_TXCSRL2_ERROR    = regbits< type,  2,  1 >;  /**< Error                  */
    using USB_TXCSRL2_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL2_SETUP    = regbits< type,  4,  1 >;  /**< Setup Packet           */
    using USB_TXCSRL2_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL2_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
    using USB_TXCSRL2_NAKTO    = regbits< type,  7,  1 >;  /**< NAK Timeout            */
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

    using USB_TXCSRH2_DT       = regbits< type,  0,  1 >;  /**< Data Toggle               */
    using USB_TXCSRH2_DTWE     = regbits< type,  1,  1 >;  /**< Data Toggle Write Enable  */
    using USB_TXCSRH2_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode          */
    using USB_TXCSRH2_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle         */
    using USB_TXCSRH2_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable        */
    using USB_TXCSRH2_MODE     = regbits< type,  5,  1 >;  /**< Mode                      */
    using USB_TXCSRH2_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers     */
    using USB_TXCSRH2_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set                  */
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
   * USB Receive Control and Status Endpoint 2 Low
   */
  struct RXCSRL2
  : public reg< uint8_t, base_addr + 0x00000126, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000126, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL2_ERROR   = regbits< type,  2,  1 >;  /**< Error           */
    using USB_RXCSRL2_NAKTO   = regbits< type,  3,  1 >;  /**< NAK Timeout     */
    using USB_RXCSRL2_REQPKT  = regbits< type,  5,  1 >;  /**< Request Packet  */
  };

  /**
   * USB Receive Control and Status Endpoint 2 High
   */
  struct RXCSRH2
  : public reg< uint8_t, base_addr + 0x00000127, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000127, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH2_DT      = regbits< type,  1,  1 >;  /**< Data Toggle               */
    using USB_RXCSRH2_DTWE    = regbits< type,  2,  1 >;  /**< Data Toggle Write Enable  */
    using USB_RXCSRH2_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode          */
    using USB_RXCSRH2_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error                 */
    using USB_RXCSRH2_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable        */
    using USB_RXCSRH2_AUTORQ  = regbits< type,  6,  1 >;  /**< Auto Request              */
    using USB_RXCSRH2_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear                */
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
   * USB Host Transmit Configure Type Endpoint 2
   */
  struct TXTYPE2
  : public reg< uint8_t, base_addr + 0x0000012a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000012a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXTYPE2_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_TXTYPE2_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_TXTYPE2_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Transmit Interval Endpoint 2
   */
  struct TXINTERVAL2
  : public reg< uint8_t, base_addr + 0x0000012b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000012b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL2_TXPOLL  = regbits< type,  0,  8 >;  /**< TX Polling  */
  };

  /**
   * USB Host Transmit Interval Endpoint 2
   */
  struct TXINTERVAL2
  : public reg< uint8_t, base_addr + 0x0000012b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000012b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL2_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
  };

  /**
   * USB Host Configure Receive Type Endpoint 2
   */
  struct RXTYPE2
  : public reg< uint8_t, base_addr + 0x0000012c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000012c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXTYPE2_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_RXTYPE2_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_RXTYPE2_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 2
   */
  struct RXINTERVAL2
  : public reg< uint8_t, base_addr + 0x0000012d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000012d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL2_TXPOLL  = regbits< type,  0,  8 >;  /**< RX Polling  */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 2
   */
  struct RXINTERVAL2
  : public reg< uint8_t, base_addr + 0x0000012d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000012d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL2_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
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
    using USB_TXCSRL3_ERROR    = regbits< type,  2,  1 >;  /**< Error                  */
    using USB_TXCSRL3_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL3_SETUP    = regbits< type,  4,  1 >;  /**< Setup Packet           */
    using USB_TXCSRL3_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL3_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
    using USB_TXCSRL3_NAKTO    = regbits< type,  7,  1 >;  /**< NAK Timeout            */
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

    using USB_TXCSRH3_DT       = regbits< type,  0,  1 >;  /**< Data Toggle               */
    using USB_TXCSRH3_DTWE     = regbits< type,  1,  1 >;  /**< Data Toggle Write Enable  */
    using USB_TXCSRH3_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode          */
    using USB_TXCSRH3_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle         */
    using USB_TXCSRH3_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable        */
    using USB_TXCSRH3_MODE     = regbits< type,  5,  1 >;  /**< Mode                      */
    using USB_TXCSRH3_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers     */
    using USB_TXCSRH3_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set                  */
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
   * USB Receive Control and Status Endpoint 3 Low
   */
  struct RXCSRL3
  : public reg< uint8_t, base_addr + 0x00000136, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000136, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL3_ERROR   = regbits< type,  2,  1 >;  /**< Error           */
    using USB_RXCSRL3_NAKTO   = regbits< type,  3,  1 >;  /**< NAK Timeout     */
    using USB_RXCSRL3_REQPKT  = regbits< type,  5,  1 >;  /**< Request Packet  */
  };

  /**
   * USB Receive Control and Status Endpoint 3 High
   */
  struct RXCSRH3
  : public reg< uint8_t, base_addr + 0x00000137, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000137, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH3_DT      = regbits< type,  1,  1 >;  /**< Data Toggle               */
    using USB_RXCSRH3_DTWE    = regbits< type,  2,  1 >;  /**< Data Toggle Write Enable  */
    using USB_RXCSRH3_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode          */
    using USB_RXCSRH3_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error                 */
    using USB_RXCSRH3_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable        */
    using USB_RXCSRH3_AUTORQ  = regbits< type,  6,  1 >;  /**< Auto Request              */
    using USB_RXCSRH3_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear                */
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
   * USB Host Transmit Configure Type Endpoint 3
   */
  struct TXTYPE3
  : public reg< uint8_t, base_addr + 0x0000013a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000013a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXTYPE3_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_TXTYPE3_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_TXTYPE3_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Transmit Interval Endpoint 3
   */
  struct TXINTERVAL3
  : public reg< uint8_t, base_addr + 0x0000013b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000013b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL3_TXPOLL  = regbits< type,  0,  8 >;  /**< TX Polling  */
  };

  /**
   * USB Host Transmit Interval Endpoint 3
   */
  struct TXINTERVAL3
  : public reg< uint8_t, base_addr + 0x0000013b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000013b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL3_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
  };

  /**
   * USB Host Configure Receive Type Endpoint 3
   */
  struct RXTYPE3
  : public reg< uint8_t, base_addr + 0x0000013c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000013c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXTYPE3_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_RXTYPE3_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_RXTYPE3_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 3
   */
  struct RXINTERVAL3
  : public reg< uint8_t, base_addr + 0x0000013d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000013d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL3_TXPOLL  = regbits< type,  0,  8 >;  /**< RX Polling  */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 3
   */
  struct RXINTERVAL3
  : public reg< uint8_t, base_addr + 0x0000013d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000013d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL3_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
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
    using USB_TXCSRL4_ERROR    = regbits< type,  2,  1 >;  /**< Error                  */
    using USB_TXCSRL4_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL4_SETUP    = regbits< type,  4,  1 >;  /**< Setup Packet           */
    using USB_TXCSRL4_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL4_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
    using USB_TXCSRL4_NAKTO    = regbits< type,  7,  1 >;  /**< NAK Timeout            */
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

    using USB_TXCSRH4_DT       = regbits< type,  0,  1 >;  /**< Data Toggle               */
    using USB_TXCSRH4_DTWE     = regbits< type,  1,  1 >;  /**< Data Toggle Write Enable  */
    using USB_TXCSRH4_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode          */
    using USB_TXCSRH4_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle         */
    using USB_TXCSRH4_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable        */
    using USB_TXCSRH4_MODE     = regbits< type,  5,  1 >;  /**< Mode                      */
    using USB_TXCSRH4_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers     */
    using USB_TXCSRH4_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set                  */
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
   * USB Receive Control and Status Endpoint 4 Low
   */
  struct RXCSRL4
  : public reg< uint8_t, base_addr + 0x00000146, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000146, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL4_ERROR   = regbits< type,  2,  1 >;  /**< Error           */
    using USB_RXCSRL4_NAKTO   = regbits< type,  3,  1 >;  /**< NAK Timeout     */
    using USB_RXCSRL4_REQPKT  = regbits< type,  5,  1 >;  /**< Request Packet  */
  };

  /**
   * USB Receive Control and Status Endpoint 4 High
   */
  struct RXCSRH4
  : public reg< uint8_t, base_addr + 0x00000147, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000147, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH4_DT      = regbits< type,  1,  1 >;  /**< Data Toggle               */
    using USB_RXCSRH4_DTWE    = regbits< type,  2,  1 >;  /**< Data Toggle Write Enable  */
    using USB_RXCSRH4_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode          */
    using USB_RXCSRH4_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error                 */
    using USB_RXCSRH4_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable        */
    using USB_RXCSRH4_AUTORQ  = regbits< type,  6,  1 >;  /**< Auto Request              */
    using USB_RXCSRH4_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear                */
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
   * USB Host Transmit Configure Type Endpoint 4
   */
  struct TXTYPE4
  : public reg< uint8_t, base_addr + 0x0000014a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000014a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXTYPE4_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_TXTYPE4_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_TXTYPE4_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Transmit Interval Endpoint 4
   */
  struct TXINTERVAL4
  : public reg< uint8_t, base_addr + 0x0000014b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000014b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL4_TXPOLL  = regbits< type,  0,  8 >;  /**< TX Polling  */
  };

  /**
   * USB Host Transmit Interval Endpoint 4
   */
  struct TXINTERVAL4
  : public reg< uint8_t, base_addr + 0x0000014b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000014b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL4_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
  };

  /**
   * USB Host Configure Receive Type Endpoint 4
   */
  struct RXTYPE4
  : public reg< uint8_t, base_addr + 0x0000014c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000014c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXTYPE4_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_RXTYPE4_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_RXTYPE4_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 4
   */
  struct RXINTERVAL4
  : public reg< uint8_t, base_addr + 0x0000014d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000014d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL4_TXPOLL  = regbits< type,  0,  8 >;  /**< RX Polling  */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 4
   */
  struct RXINTERVAL4
  : public reg< uint8_t, base_addr + 0x0000014d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000014d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL4_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
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
    using USB_TXCSRL5_ERROR    = regbits< type,  2,  1 >;  /**< Error                  */
    using USB_TXCSRL5_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL5_SETUP    = regbits< type,  4,  1 >;  /**< Setup Packet           */
    using USB_TXCSRL5_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL5_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
    using USB_TXCSRL5_NAKTO    = regbits< type,  7,  1 >;  /**< NAK Timeout            */
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

    using USB_TXCSRH5_DT       = regbits< type,  0,  1 >;  /**< Data Toggle               */
    using USB_TXCSRH5_DTWE     = regbits< type,  1,  1 >;  /**< Data Toggle Write Enable  */
    using USB_TXCSRH5_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode          */
    using USB_TXCSRH5_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle         */
    using USB_TXCSRH5_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable        */
    using USB_TXCSRH5_MODE     = regbits< type,  5,  1 >;  /**< Mode                      */
    using USB_TXCSRH5_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers     */
    using USB_TXCSRH5_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set                  */
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
   * USB Receive Control and Status Endpoint 5 Low
   */
  struct RXCSRL5
  : public reg< uint8_t, base_addr + 0x00000156, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000156, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL5_ERROR   = regbits< type,  2,  1 >;  /**< Error           */
    using USB_RXCSRL5_NAKTO   = regbits< type,  3,  1 >;  /**< NAK Timeout     */
    using USB_RXCSRL5_REQPKT  = regbits< type,  5,  1 >;  /**< Request Packet  */
  };

  /**
   * USB Receive Control and Status Endpoint 5 High
   */
  struct RXCSRH5
  : public reg< uint8_t, base_addr + 0x00000157, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000157, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH5_DT      = regbits< type,  1,  1 >;  /**< Data Toggle               */
    using USB_RXCSRH5_DTWE    = regbits< type,  2,  1 >;  /**< Data Toggle Write Enable  */
    using USB_RXCSRH5_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode          */
    using USB_RXCSRH5_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error                 */
    using USB_RXCSRH5_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable        */
    using USB_RXCSRH5_AUTORQ  = regbits< type,  6,  1 >;  /**< Auto Request              */
    using USB_RXCSRH5_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear                */
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
   * USB Host Transmit Configure Type Endpoint 5
   */
  struct TXTYPE5
  : public reg< uint8_t, base_addr + 0x0000015a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000015a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXTYPE5_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_TXTYPE5_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_TXTYPE5_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Transmit Interval Endpoint 5
   */
  struct TXINTERVAL5
  : public reg< uint8_t, base_addr + 0x0000015b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000015b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL5_TXPOLL  = regbits< type,  0,  8 >;  /**< TX Polling  */
  };

  /**
   * USB Host Transmit Interval Endpoint 5
   */
  struct TXINTERVAL5
  : public reg< uint8_t, base_addr + 0x0000015b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000015b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL5_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
  };

  /**
   * USB Host Configure Receive Type Endpoint 5
   */
  struct RXTYPE5
  : public reg< uint8_t, base_addr + 0x0000015c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000015c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXTYPE5_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_RXTYPE5_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_RXTYPE5_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 5
   */
  struct RXINTERVAL5
  : public reg< uint8_t, base_addr + 0x0000015d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000015d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL5_TXPOLL  = regbits< type,  0,  8 >;  /**< RX Polling  */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 5
   */
  struct RXINTERVAL5
  : public reg< uint8_t, base_addr + 0x0000015d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000015d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL5_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
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
    using USB_TXCSRL6_ERROR    = regbits< type,  2,  1 >;  /**< Error                  */
    using USB_TXCSRL6_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL6_SETUP    = regbits< type,  4,  1 >;  /**< Setup Packet           */
    using USB_TXCSRL6_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL6_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
    using USB_TXCSRL6_NAKTO    = regbits< type,  7,  1 >;  /**< NAK Timeout            */
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

    using USB_TXCSRH6_DT       = regbits< type,  0,  1 >;  /**< Data Toggle               */
    using USB_TXCSRH6_DTWE     = regbits< type,  1,  1 >;  /**< Data Toggle Write Enable  */
    using USB_TXCSRH6_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode          */
    using USB_TXCSRH6_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle         */
    using USB_TXCSRH6_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable        */
    using USB_TXCSRH6_MODE     = regbits< type,  5,  1 >;  /**< Mode                      */
    using USB_TXCSRH6_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers     */
    using USB_TXCSRH6_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set                  */
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
   * USB Receive Control and Status Endpoint 6 Low
   */
  struct RXCSRL6
  : public reg< uint8_t, base_addr + 0x00000166, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000166, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL6_ERROR   = regbits< type,  2,  1 >;  /**< Error           */
    using USB_RXCSRL6_NAKTO   = regbits< type,  3,  1 >;  /**< NAK Timeout     */
    using USB_RXCSRL6_REQPKT  = regbits< type,  5,  1 >;  /**< Request Packet  */
  };

  /**
   * USB Receive Control and Status Endpoint 6 High
   */
  struct RXCSRH6
  : public reg< uint8_t, base_addr + 0x00000167, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000167, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH6_DT      = regbits< type,  1,  1 >;  /**< Data Toggle               */
    using USB_RXCSRH6_DTWE    = regbits< type,  2,  1 >;  /**< Data Toggle Write Enable  */
    using USB_RXCSRH6_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode          */
    using USB_RXCSRH6_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error                 */
    using USB_RXCSRH6_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable        */
    using USB_RXCSRH6_AUTORQ  = regbits< type,  6,  1 >;  /**< Auto Request              */
    using USB_RXCSRH6_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear                */
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
   * USB Host Transmit Configure Type Endpoint 6
   */
  struct TXTYPE6
  : public reg< uint8_t, base_addr + 0x0000016a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000016a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXTYPE6_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_TXTYPE6_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_TXTYPE6_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Transmit Interval Endpoint 6
   */
  struct TXINTERVAL6
  : public reg< uint8_t, base_addr + 0x0000016b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000016b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL6_TXPOLL  = regbits< type,  0,  8 >;  /**< TX Polling  */
  };

  /**
   * USB Host Transmit Interval Endpoint 6
   */
  struct TXINTERVAL6
  : public reg< uint8_t, base_addr + 0x0000016b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000016b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL6_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
  };

  /**
   * USB Host Configure Receive Type Endpoint 6
   */
  struct RXTYPE6
  : public reg< uint8_t, base_addr + 0x0000016c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000016c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXTYPE6_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_RXTYPE6_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_RXTYPE6_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 6
   */
  struct RXINTERVAL6
  : public reg< uint8_t, base_addr + 0x0000016d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000016d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL6_TXPOLL  = regbits< type,  0,  8 >;  /**< RX Polling  */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 6
   */
  struct RXINTERVAL6
  : public reg< uint8_t, base_addr + 0x0000016d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000016d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL6_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
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
    using USB_TXCSRL7_ERROR    = regbits< type,  2,  1 >;  /**< Error                  */
    using USB_TXCSRL7_FLUSH    = regbits< type,  3,  1 >;  /**< Flush FIFO             */
    using USB_TXCSRL7_SETUP    = regbits< type,  4,  1 >;  /**< Setup Packet           */
    using USB_TXCSRL7_STALLED  = regbits< type,  5,  1 >;  /**< Endpoint Stalled       */
    using USB_TXCSRL7_CLRDT    = regbits< type,  6,  1 >;  /**< Clear Data Toggle      */
    using USB_TXCSRL7_NAKTO    = regbits< type,  7,  1 >;  /**< NAK Timeout            */
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

    using USB_TXCSRH7_DT       = regbits< type,  0,  1 >;  /**< Data Toggle               */
    using USB_TXCSRH7_DTWE     = regbits< type,  1,  1 >;  /**< Data Toggle Write Enable  */
    using USB_TXCSRH7_DMAMOD   = regbits< type,  2,  1 >;  /**< DMA Request Mode          */
    using USB_TXCSRH7_FDT      = regbits< type,  3,  1 >;  /**< Force Data Toggle         */
    using USB_TXCSRH7_DMAEN    = regbits< type,  4,  1 >;  /**< DMA Request Enable        */
    using USB_TXCSRH7_MODE     = regbits< type,  5,  1 >;  /**< Mode                      */
    using USB_TXCSRH7_ISO      = regbits< type,  6,  1 >;  /**< Isochronous Transfers     */
    using USB_TXCSRH7_AUTOSET  = regbits< type,  7,  1 >;  /**< Auto Set                  */
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
   * USB Receive Control and Status Endpoint 7 Low
   */
  struct RXCSRL7
  : public reg< uint8_t, base_addr + 0x00000176, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000176, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRL7_ERROR   = regbits< type,  2,  1 >;  /**< Error           */
    using USB_RXCSRL7_NAKTO   = regbits< type,  3,  1 >;  /**< NAK Timeout     */
    using USB_RXCSRL7_REQPKT  = regbits< type,  5,  1 >;  /**< Request Packet  */
  };

  /**
   * USB Receive Control and Status Endpoint 7 High
   */
  struct RXCSRH7
  : public reg< uint8_t, base_addr + 0x00000177, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x00000177, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXCSRH7_DT      = regbits< type,  1,  1 >;  /**< Data Toggle               */
    using USB_RXCSRH7_DTWE    = regbits< type,  2,  1 >;  /**< Data Toggle Write Enable  */
    using USB_RXCSRH7_DMAMOD  = regbits< type,  3,  1 >;  /**< DMA Request Mode          */
    using USB_RXCSRH7_PIDERR  = regbits< type,  4,  1 >;  /**< PID Error                 */
    using USB_RXCSRH7_DMAEN   = regbits< type,  5,  1 >;  /**< DMA Request Enable        */
    using USB_RXCSRH7_AUTORQ  = regbits< type,  6,  1 >;  /**< Auto Request              */
    using USB_RXCSRH7_AUTOCL  = regbits< type,  7,  1 >;  /**< Auto Clear                */
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
   * USB Host Transmit Configure Type Endpoint 7
   */
  struct TXTYPE7
  : public reg< uint8_t, base_addr + 0x0000017a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000017a, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXTYPE7_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_TXTYPE7_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_TXTYPE7_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Transmit Interval Endpoint 7
   */
  struct TXINTERVAL7
  : public reg< uint8_t, base_addr + 0x0000017b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000017b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL7_TXPOLL  = regbits< type,  0,  8 >;  /**< TX Polling  */
  };

  /**
   * USB Host Transmit Interval Endpoint 7
   */
  struct TXINTERVAL7
  : public reg< uint8_t, base_addr + 0x0000017b, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000017b, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_TXINTERVAL7_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
  };

  /**
   * USB Host Configure Receive Type Endpoint 7
   */
  struct RXTYPE7
  : public reg< uint8_t, base_addr + 0x0000017c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000017c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXTYPE7_TEP    = regbits< type,  0,  4 >;  /**< Target Endpoint Number  */
    using USB_RXTYPE7_PROTO  = regbits< type,  4,  2 >;  /**< Protocol                */
    using USB_RXTYPE7_SPEED  = regbits< type,  6,  2 >;  /**< Operating Speed         */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 7
   */
  struct RXINTERVAL7
  : public reg< uint8_t, base_addr + 0x0000017d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000017d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL7_TXPOLL  = regbits< type,  0,  8 >;  /**< RX Polling  */
  };

  /**
   * USB Host Receive Polling Interval Endpoint 7
   */
  struct RXINTERVAL7
  : public reg< uint8_t, base_addr + 0x0000017d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0000017d, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RXINTERVAL7_NAKLMT  = regbits< type,  0,  8 >;  /**< NAK Limit  */
  };

  /**
   * USB Request Packet Count in Block Transfer Endpoint 1
   */
  struct RQPKTCOUNT1
  : public reg< uint16_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RQPKTCOUNT1  = regbits< type,  0, 16 >;  /**< Block Transfer Packet Count  */
  };

  /**
   * USB Request Packet Count in Block Transfer Endpoint 2
   */
  struct RQPKTCOUNT2
  : public reg< uint16_t, base_addr + 0x00000308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RQPKTCOUNT2  = regbits< type,  0, 16 >;  /**< Block Transfer Packet Count  */
  };

  /**
   * USB Request Packet Count in Block Transfer Endpoint 3
   */
  struct RQPKTCOUNT3
  : public reg< uint16_t, base_addr + 0x0000030c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x0000030c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RQPKTCOUNT3  = regbits< type,  0, 16 >;  /**< Block Transfer Packet Count  */
  };

  /**
   * USB Request Packet Count in Block Transfer Endpoint 4
   */
  struct RQPKTCOUNT4
  : public reg< uint16_t, base_addr + 0x00000310, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000310, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RQPKTCOUNT4_COUNT  = regbits< type,  0, 16 >;  /**< Block Transfer Packet Count  */
  };

  /**
   * USB Request Packet Count in Block Transfer Endpoint 5
   */
  struct RQPKTCOUNT5
  : public reg< uint16_t, base_addr + 0x00000314, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000314, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RQPKTCOUNT5_COUNT  = regbits< type,  0, 16 >;  /**< Block Transfer Packet Count  */
  };

  /**
   * USB Request Packet Count in Block Transfer Endpoint 6
   */
  struct RQPKTCOUNT6
  : public reg< uint16_t, base_addr + 0x00000318, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x00000318, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RQPKTCOUNT6_COUNT  = regbits< type,  0, 16 >;  /**< Block Transfer Packet Count  */
  };

  /**
   * USB Request Packet Count in Block Transfer Endpoint 7
   */
  struct RQPKTCOUNT7
  : public reg< uint16_t, base_addr + 0x0000031c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x0000031c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_RQPKTCOUNT7_COUNT  = regbits< type,  0, 16 >;  /**< Block Transfer Packet Count  */
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
   * USB External Power Control
   */
  struct EPC
  : public reg< uint32_t, base_addr + 0x00000400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000400, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_EPC_EPEN          = regbits< type,  0,  2 >;  /**< External Power Supply Enable Configuration  */
    using USB_EPC_EPENDE        = regbits< type,  2,  1 >;  /**< EPEN Drive Enable                           */
    using USB_EPC_PFLTEN        = regbits< type,  4,  1 >;  /**< Power Fault Input Enable                    */
    using USB_EPC_PFLTSEN_HIGH  = regbits< type,  5,  1 >;  /**< Power Fault Sense                           */
    using USB_EPC_PFLTAEN       = regbits< type,  6,  1 >;  /**< Power Fault Action Enable                   */
    using USB_EPC_PFLTACT       = regbits< type,  8,  2 >;  /**< Power Fault Action                          */
  };

  /**
   * USB External Power Control Raw Interrupt Status
   */
  struct EPCRIS
  : public reg< uint32_t, base_addr + 0x00000404, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000404, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_EPCRIS_PF  = regbits< type,  0,  1 >;  /**< USB Power Fault Interrupt Status  */
  };

  /**
   * USB External Power Control Interrupt Mask
   */
  struct EPCIM
  : public reg< uint32_t, base_addr + 0x00000408, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000408, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_EPCIM_PF  = regbits< type,  0,  1 >;  /**< USB Power Fault Interrupt Mask  */
  };

  /**
   * USB External Power Control Interrupt Status and Clear
   */
  struct EPCISC
  : public reg< uint32_t, base_addr + 0x0000040c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000040c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_EPCISC_PF  = regbits< type,  0,  1 >;  /**< USB Power Fault Interrupt Status and Clear  */
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
   * USB General-Purpose Control and Status
   */
  struct GPCS
  : public reg< uint32_t, base_addr + 0x0000041c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000041c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_GPCS_DEVMOD     = regbits< type,  0,  1 >;  /**< Device Mode         */
    using USB_GPCS_DEVMODOTG  = regbits< type,  1,  1 >;  /**< Enable Device Mode  */
  };

  /**
   * USB VBUS Droop Control
   */
  struct VDC
  : public reg< uint32_t, base_addr + 0x00000430, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000430, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_VDC_VBDEN  = regbits< type,  0,  1 >;  /**< VBUS Droop Enable  */
  };

  /**
   * USB VBUS Droop Control Raw Interrupt Status
   */
  struct VDCRIS
  : public reg< uint32_t, base_addr + 0x00000434, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000434, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_VDCRIS_VD  = regbits< type,  0,  1 >;  /**< VBUS Droop Raw Interrupt Status  */
  };

  /**
   * USB VBUS Droop Control Interrupt Mask
   */
  struct VDCIM
  : public reg< uint32_t, base_addr + 0x00000438, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000438, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_VDCIM_VD  = regbits< type,  0,  1 >;  /**< VBUS Droop Interrupt Mask  */
  };

  /**
   * USB VBUS Droop Control Interrupt Status and Clear
   */
  struct VDCISC
  : public reg< uint32_t, base_addr + 0x0000043c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000043c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_VDCISC_VD  = regbits< type,  0,  1 >;  /**< VBUS Droop Interrupt Status and Clear  */
  };

  /**
   * USB ID Valid Detect Raw Interrupt Status
   */
  struct IDVRIS
  : public reg< uint32_t, base_addr + 0x00000444, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000444, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_IDVRIS_ID  = regbits< type,  0,  1 >;  /**< ID Valid Detect Raw Interrupt Status  */
  };

  /**
   * USB ID Valid Detect Interrupt Mask
   */
  struct IDVIM
  : public reg< uint32_t, base_addr + 0x00000448, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000448, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_IDVIM_ID  = regbits< type,  0,  1 >;  /**< ID Valid Detect Interrupt Mask  */
  };

  /**
   * USB ID Valid Detect Interrupt Status and Clear
   */
  struct IDVISC
  : public reg< uint32_t, base_addr + 0x0000044c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000044c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using USB_IDVISC_ID  = regbits< type,  0,  1 >;  /**< ID Valid Detect Interrupt Status and Clear  */
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
