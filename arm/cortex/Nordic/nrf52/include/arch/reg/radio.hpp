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
//  Import from CMSIS-SVD: "Nordic/nrf52.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf52
//  series: nrf52
//  version: 1
//  description: nRF52 reference description for radio MCU with ARM 32-bit Cortex-M4 Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RADIO_HPP_INCLUDED
#define ARCH_REG_RADIO_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * 2.4 GHz Radio
 */
struct RADIO
{
  static constexpr reg_addr_t base_addr = 0x40001000;

  /**
   * Enable RADIO in TX mode
   */
  struct TASKS_TXEN
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Enable RADIO in RX mode
   */
  struct TASKS_RXEN
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Start RADIO
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Stop RADIO
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Disable RADIO
   */
  struct TASKS_DISABLE
  : public reg< uint32_t, base_addr + 0x010, wo, 0 >
  {
  };

  /**
   * Start the RSSI and take one single sample of the receive signal strength.
   */
  struct TASKS_RSSISTART
  : public reg< uint32_t, base_addr + 0x014, wo, 0 >
  {
  };

  /**
   * Stop the RSSI measurement
   */
  struct TASKS_RSSISTOP
  : public reg< uint32_t, base_addr + 0x018, wo, 0 >
  {
  };

  /**
   * Start the bit counter
   */
  struct TASKS_BCSTART
  : public reg< uint32_t, base_addr + 0x01c, wo, 0 >
  {
  };

  /**
   * Stop the bit counter
   */
  struct TASKS_BCSTOP
  : public reg< uint32_t, base_addr + 0x020, wo, 0 >
  {
  };

  /**
   * RADIO has ramped up and is ready to be started
   */
  struct EVENTS_READY
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Address sent or received
   */
  struct EVENTS_ADDRESS
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Packet payload sent or received
   */
  struct EVENTS_PAYLOAD
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Packet sent or received
   */
  struct EVENTS_END
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RADIO has been disabled
   */
  struct EVENTS_DISABLED
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * A device address match occurred on the last received packet
   */
  struct EVENTS_DEVMATCH
  : public reg< uint32_t, base_addr + 0x114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * No device address match occurred on the last received packet
   */
  struct EVENTS_DEVMISS
  : public reg< uint32_t, base_addr + 0x118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Sampling of receive signal strength complete. A new RSSI sample is ready for readout from the "RADIO.RSSISAMPLE" register
   */
  struct EVENTS_RSSIEND
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Bit counter reached bit count value specified in the "RADIO.BCC" register
   */
  struct EVENTS_BCMATCH
  : public reg< uint32_t, base_addr + 0x128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Packet received with CRC ok
   */
  struct EVENTS_CRCOK
  : public reg< uint32_t, base_addr + 0x130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Packet received with CRC error
   */
  struct EVENTS_CRCERROR
  : public reg< uint32_t, base_addr + 0x134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY_START        = regbits< type,  0,  1 >;  /**< Shortcut between EVENTS_READY event and TASKS_START task        */
    using END_DISABLE        = regbits< type,  1,  1 >;  /**< Shortcut between EVENTS_END event and TASKS_DISABLE task        */
    using DISABLED_TXEN      = regbits< type,  2,  1 >;  /**< Shortcut between EVENTS_DISABLED event and TASKS_TXEN task      */
    using DISABLED_RXEN      = regbits< type,  3,  1 >;  /**< Shortcut between EVENTS_DISABLED event and TASKS_RXEN task      */
    using ADDRESS_RSSISTART  = regbits< type,  4,  1 >;  /**< Shortcut between EVENTS_ADDRESS event and TASKS_RSSISTART task  */
    using END_START          = regbits< type,  5,  1 >;  /**< Shortcut between EVENTS_END event and TASKS_START task          */
    using ADDRESS_BCSTART    = regbits< type,  6,  1 >;  /**< Shortcut between EVENTS_ADDRESS event and TASKS_BCSTART task    */
    using DISABLED_RSSISTOP  = regbits< type,  8,  1 >;  /**< Shortcut between EVENTS_DISABLED event and TASKS_RSSISTOP task  */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY     = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_READY event     */
    using ADDRESS   = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ADDRESS event   */
    using PAYLOAD   = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_PAYLOAD event   */
    using END       = regbits< type,  3,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_END event       */
    using DISABLED  = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_DISABLED event  */
    using DEVMATCH  = regbits< type,  5,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_DEVMATCH event  */
    using DEVMISS   = regbits< type,  6,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_DEVMISS event   */
    using RSSIEND   = regbits< type,  7,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RSSIEND event   */
    using BCMATCH   = regbits< type, 10,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_BCMATCH event   */
    using CRCOK     = regbits< type, 12,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CRCOK event     */
    using CRCERROR  = regbits< type, 13,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CRCERROR event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY     = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_READY event     */
    using ADDRESS   = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ADDRESS event   */
    using PAYLOAD   = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_PAYLOAD event   */
    using END       = regbits< type,  3,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_END event       */
    using DISABLED  = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_DISABLED event  */
    using DEVMATCH  = regbits< type,  5,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_DEVMATCH event  */
    using DEVMISS   = regbits< type,  6,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_DEVMISS event   */
    using RSSIEND   = regbits< type,  7,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RSSIEND event   */
    using BCMATCH   = regbits< type, 10,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_BCMATCH event   */
    using CRCOK     = regbits< type, 12,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CRCOK event     */
    using CRCERROR  = regbits< type, 13,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CRCERROR event  */
  };

  /**
   * CRC status
   */
  struct CRCSTATUS
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CRCSTATUS
    using CRCSTATUS_ = regbits< type,  0,  1 >;  /**< CRC status of packet received  */
  };

  /**
   * Received address
   */
  struct RXMATCH
  : public reg< uint32_t, base_addr + 0x408, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x408, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RXMATCH
    using RXMATCH_ = regbits< type,  0,  3 >;  /**< Received address  */
  };

  /**
   * CRC field of previously received packet
   */
  struct RXCRC
  : public reg< uint32_t, base_addr + 0x40c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x40c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RXCRC
    using RXCRC_ = regbits< type,  0, 24 >;  /**< CRC field of previously received packet  */
  };

  /**
   * Device address match index
   */
  struct DAI
  : public reg< uint32_t, base_addr + 0x410, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x410, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DAI
    using DAI_ = regbits< type,  0,  3 >;  /**< Device address match index  */
  };

  /**
   * Packet pointer
   */
  struct PACKETPTR
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: PACKETPTR
    using PACKETPTR_ = regbits< type,  0, 32 >;  /**< Packet pointer  */
  };

  /**
   * Frequency
   */
  struct FREQUENCY
  : public reg< uint32_t, base_addr + 0x508, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0x00000002 >;

    // fixme: Field name equals parent register name: FREQUENCY
    using FREQUENCY_ = regbits< type,  0,  7 >;  /**< Radio channel frequency  */
  };

  /**
   * Output power
   */
  struct TXPOWER
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: TXPOWER
    using TXPOWER_ = regbits< type,  0,  8 >;  /**< RADIO output power.  */
  };

  /**
   * Data rate and modulation
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MODE
    using MODE_ = regbits< type,  0,  4 >;  /**< Radio data rate and modulation setting. The radio supports Frequency-shift Keying (FSK) modulation.  */
  };

  /**
   * Packet configuration register 0
   */
  struct PCNF0
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LFLEN   = regbits< type,  0,  4 >;  /**< Length on air of LENGTH field in number of bits.                     */
    using S0LEN   = regbits< type,  8,  1 >;  /**< Length on air of S0 field in number of bytes.                        */
    using S1LEN   = regbits< type, 16,  4 >;  /**< Length on air of S1 field in number of bits.                         */
    using S1INCL  = regbits< type, 20,  1 >;  /**< Include or exclude S1 field in RAM                                   */
    using PLEN    = regbits< type, 24,  1 >;  /**< Length of preamble on air. Decision point: "RADIO.TASKS_START" task  */
  };

  /**
   * Packet configuration register 1
   */
  struct PCNF1
  : public reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MAXLEN   = regbits< type,  0,  8 >;  /**< Maximum length of packet payload. If the packet payload is larger than MAXLEN, the radio will truncate the payload to MAXLEN.  */
    using STATLEN  = regbits< type,  8,  8 >;  /**< Static length in number of bytes                                                                                               */
    using BALEN    = regbits< type, 16,  3 >;  /**< Base address length in number of bytes                                                                                         */
    using ENDIAN   = regbits< type, 24,  1 >;  /**< On air endianness of packet, this applies to the S0, LENGTH, S1 and the PAYLOAD fields.                                        */
    using WHITEEN  = regbits< type, 25,  1 >;  /**< Enable or disable packet whitening                                                                                             */
  };

  /**
   * Base address 0
   */
  struct BASE0
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: BASE0
    using BASE0_ = regbits< type,  0, 32 >;  /**< Base address 0  */
  };

  /**
   * Base address 1
   */
  struct BASE1
  : public reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: BASE1
    using BASE1_ = regbits< type,  0, 32 >;  /**< Base address 1  */
  };

  /**
   * Prefixes bytes for logical addresses 0-3
   */
  struct PREFIX0
  : public reg< uint32_t, base_addr + 0x524, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using AP0  = regbits< type,  0,  8 >;  /**< Address prefix 0.  */
    using AP1  = regbits< type,  8,  8 >;  /**< Address prefix 1.  */
    using AP2  = regbits< type, 16,  8 >;  /**< Address prefix 2.  */
    using AP3  = regbits< type, 24,  8 >;  /**< Address prefix 3.  */
  };

  /**
   * Prefixes bytes for logical addresses 4-7
   */
  struct PREFIX1
  : public reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using AP4  = regbits< type,  0,  8 >;  /**< Address prefix 4.  */
    using AP5  = regbits< type,  8,  8 >;  /**< Address prefix 5.  */
    using AP6  = regbits< type, 16,  8 >;  /**< Address prefix 6.  */
    using AP7  = regbits< type, 24,  8 >;  /**< Address prefix 7.  */
  };

  /**
   * Transmit address select
   */
  struct TXADDRESS
  : public reg< uint32_t, base_addr + 0x52c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x52c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: TXADDRESS
    using TXADDRESS_ = regbits< type,  0,  3 >;  /**< Transmit address select  */
  };

  /**
   * Receive address select
   */
  struct RXADDRESSES
  : public reg< uint32_t, base_addr + 0x530, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x530, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADDR0  = regbits< type,  0,  1 >;  /**< Enable or disable reception on logical address 0.  */
    using ADDR1  = regbits< type,  1,  1 >;  /**< Enable or disable reception on logical address 1.  */
    using ADDR2  = regbits< type,  2,  1 >;  /**< Enable or disable reception on logical address 2.  */
    using ADDR3  = regbits< type,  3,  1 >;  /**< Enable or disable reception on logical address 3.  */
    using ADDR4  = regbits< type,  4,  1 >;  /**< Enable or disable reception on logical address 4.  */
    using ADDR5  = regbits< type,  5,  1 >;  /**< Enable or disable reception on logical address 5.  */
    using ADDR6  = regbits< type,  6,  1 >;  /**< Enable or disable reception on logical address 6.  */
    using ADDR7  = regbits< type,  7,  1 >;  /**< Enable or disable reception on logical address 7.  */
  };

  /**
   * CRC configuration
   */
  struct CRCCNF
  : public reg< uint32_t, base_addr + 0x534, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x534, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LEN       = regbits< type,  0,  2 >;  /**< CRC length in number of bytes.                                   */
    using SKIPADDR  = regbits< type,  8,  1 >;  /**< Include or exclude packet address field out of CRC calculation.  */
  };

  /**
   * CRC polynomial
   */
  struct CRCPOLY
  : public reg< uint32_t, base_addr + 0x538, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x538, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: CRCPOLY
    using CRCPOLY_ = regbits< type,  0, 24 >;  /**< CRC polynomial  */
  };

  /**
   * CRC initial value
   */
  struct CRCINIT
  : public reg< uint32_t, base_addr + 0x53c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x53c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CRCINIT
    using CRCINIT_ = regbits< type,  0, 24 >;  /**< CRC initial value  */
  };

  /**
   * Unspecified
   */
  struct UNUSED0
  : public reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Inter Frame Spacing in us
   */
  struct TIFS
  : public reg< uint32_t, base_addr + 0x544, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x544, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: TIFS
    using TIFS_ = regbits< type,  0,  8 >;  /**< Inter Frame Spacing in us  */
  };

  /**
   * RSSI sample
   */
  struct RSSISAMPLE
  : public reg< uint32_t, base_addr + 0x548, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x548, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RSSISAMPLE
    using RSSISAMPLE_ = regbits< type,  0,  7 >;  /**< RSSI sample  */
  };

  /**
   * Current radio state
   */
  struct STATE
  : public reg< uint32_t, base_addr + 0x550, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x550, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: STATE
    using STATE_ = regbits< type,  0,  4 >;  /**< Current radio state  */
  };

  /**
   * Data whitening initial value
   */
  struct DATAWHITEIV
  : public reg< uint32_t, base_addr + 0x554, rw, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x554, rw, 0x00000040 >;

    // fixme: Field name equals parent register name: DATAWHITEIV
    using DATAWHITEIV_ = regbits< type,  0,  7 >;  /**< Data whitening initial value. Bit 6 is hard-wired to '1', writing '0' to it has no effect, and it will always be read back and used by the device as '1'.  */
  };

  /**
   * Bit counter compare
   */
  struct BCC
  : public reg< uint32_t, base_addr + 0x560, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x560, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: BCC
    using BCC_ = regbits< type,  0, 32 >;  /**< Bit counter compare  */
  };

  /**
   * Description collection[0]: Device address base segment 0
   */
  struct DAB[%s]
  : public reg< uint32_t, base_addr + 0x600, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DAB  = regbits< type,  0, 32 >;  /**< Device address base segment 0  */
  };

  /**
   * Description collection[0]: Device address prefix 0
   */
  struct DAP[%s]
  : public reg< uint32_t, base_addr + 0x620, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x620, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DAP  = regbits< type,  0, 16 >;  /**< Device address prefix 0  */
  };

  /**
   * Device address match configuration
   */
  struct DACNF
  : public reg< uint32_t, base_addr + 0x640, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x640, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENA0    = regbits< type,  0,  1 >;  /**< Enable or disable device address matching using device address 0  */
    using ENA1    = regbits< type,  1,  1 >;  /**< Enable or disable device address matching using device address 1  */
    using ENA2    = regbits< type,  2,  1 >;  /**< Enable or disable device address matching using device address 2  */
    using ENA3    = regbits< type,  3,  1 >;  /**< Enable or disable device address matching using device address 3  */
    using ENA4    = regbits< type,  4,  1 >;  /**< Enable or disable device address matching using device address 4  */
    using ENA5    = regbits< type,  5,  1 >;  /**< Enable or disable device address matching using device address 5  */
    using ENA6    = regbits< type,  6,  1 >;  /**< Enable or disable device address matching using device address 6  */
    using ENA7    = regbits< type,  7,  1 >;  /**< Enable or disable device address matching using device address 7  */
    using TXADD0  = regbits< type,  8,  1 >;  /**< TxAdd for device address 0                                        */
    using TXADD1  = regbits< type,  9,  1 >;  /**< TxAdd for device address 1                                        */
    using TXADD2  = regbits< type, 10,  1 >;  /**< TxAdd for device address 2                                        */
    using TXADD3  = regbits< type, 11,  1 >;  /**< TxAdd for device address 3                                        */
    using TXADD4  = regbits< type, 12,  1 >;  /**< TxAdd for device address 4                                        */
    using TXADD5  = regbits< type, 13,  1 >;  /**< TxAdd for device address 5                                        */
    using TXADD6  = regbits< type, 14,  1 >;  /**< TxAdd for device address 6                                        */
    using TXADD7  = regbits< type, 15,  1 >;  /**< TxAdd for device address 7                                        */
  };

  /**
   * Radio mode configuration register 0
   */
  struct MODECNF0
  : public reg< uint32_t, base_addr + 0x650, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x650, rw, 0x00000200 >;

    using RU   = regbits< type,  0,  1 >;  /**< Radio ramp-up time  */
    using DTX  = regbits< type,  8,  2 >;  /**< Default TX value    */
  };

  /**
   * Peripheral power control
   */
  struct POWER
  : public reg< uint32_t, base_addr + 0xffc, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0xffc, rw, 0x00000001 >;

    // fixme: Field name equals parent register name: POWER
    using POWER_ = regbits< type,  0,  1 >;  /**< Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RADIO_HPP_INCLUDED
