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
//  Import from CMSIS-SVD: "Nordic/nrf51.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf51
//  series: nrf51
//  version: 522
//  description: nRF51 reference description for radio MCU with ARM 32-bit Cortex-M0 Microcontroller at 16MHz CPU clock
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
 * The radio.
 */
struct RADIO
{
  static constexpr reg_addr_t base_addr = 0x40001000;

  /**
   * Enable radio in TX mode.
   */
  struct TASKS_TXEN
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Enable radio in RX mode.
   */
  struct TASKS_RXEN
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Start radio.
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Stop radio.
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Disable radio.
   */
  struct TASKS_DISABLE
  : public reg< uint32_t, base_addr + 0x010, wo, 0 >
  {
  };

  /**
   * Start the RSSI and take one sample of the receive signal strength.
   */
  struct TASKS_RSSISTART
  : public reg< uint32_t, base_addr + 0x014, wo, 0 >
  {
  };

  /**
   * Stop the RSSI measurement.
   */
  struct TASKS_RSSISTOP
  : public reg< uint32_t, base_addr + 0x018, wo, 0 >
  {
  };

  /**
   * Start the bit counter.
   */
  struct TASKS_BCSTART
  : public reg< uint32_t, base_addr + 0x01c, wo, 0 >
  {
  };

  /**
   * Stop the bit counter.
   */
  struct TASKS_BCSTOP
  : public reg< uint32_t, base_addr + 0x020, wo, 0 >
  {
  };

  /**
   * Ready event.
   */
  struct EVENTS_READY
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Address event.
   */
  struct EVENTS_ADDRESS
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Payload event.
   */
  struct EVENTS_PAYLOAD
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * End event.
   */
  struct EVENTS_END
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Disable event.
   */
  struct EVENTS_DISABLED
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * A device address match occurred on the last received packet.
   */
  struct EVENTS_DEVMATCH
  : public reg< uint32_t, base_addr + 0x114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * No device address match occurred on the last received packet.
   */
  struct EVENTS_DEVMISS
  : public reg< uint32_t, base_addr + 0x118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Sampling of the receive signal strength complete. A new RSSI sample is ready for readout at the RSSISAMPLE register.
   */
  struct EVENTS_RSSIEND
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Bit counter reached bit count value specified in BCC register.
   */
  struct EVENTS_BCMATCH
  : public reg< uint32_t, base_addr + 0x128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcuts for the radio.
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY_START        = regbits< type,  0,  1 >;  /**< Shortcut between READY event and START task.        */
    using END_DISABLE        = regbits< type,  1,  1 >;  /**< Shortcut between END event and DISABLE task.        */
    using DISABLED_TXEN      = regbits< type,  2,  1 >;  /**< Shortcut between DISABLED event and TXEN task.      */
    using DISABLED_RXEN      = regbits< type,  3,  1 >;  /**< Shortcut between DISABLED event and RXEN task.      */
    using ADDRESS_RSSISTART  = regbits< type,  4,  1 >;  /**< Shortcut between ADDRESS event and RSSISTART task.  */
    using END_START          = regbits< type,  5,  1 >;  /**< Shortcut between END event and START task.          */
    using ADDRESS_BCSTART    = regbits< type,  6,  1 >;  /**< Shortcut between ADDRESS event and BCSTART task.    */
    using DISABLED_RSSISTOP  = regbits< type,  8,  1 >;  /**< Shortcut between DISABLED event and RSSISTOP task.  */
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY     = regbits< type,  0,  1 >;  /**< Enable interrupt on READY event.     */
    using ADDRESS   = regbits< type,  1,  1 >;  /**< Enable interrupt on ADDRESS event.   */
    using PAYLOAD   = regbits< type,  2,  1 >;  /**< Enable interrupt on PAYLOAD event.   */
    using END       = regbits< type,  3,  1 >;  /**< Enable interrupt on END event.       */
    using DISABLED  = regbits< type,  4,  1 >;  /**< Enable interrupt on DISABLED event.  */
    using DEVMATCH  = regbits< type,  5,  1 >;  /**< Enable interrupt on DEVMATCH event.  */
    using DEVMISS   = regbits< type,  6,  1 >;  /**< Enable interrupt on DEVMISS event.   */
    using RSSIEND   = regbits< type,  7,  1 >;  /**< Enable interrupt on RSSIEND event.   */
    using BCMATCH   = regbits< type, 10,  1 >;  /**< Enable interrupt on BCMATCH event.   */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY     = regbits< type,  0,  1 >;  /**< Disable interrupt on READY event.     */
    using ADDRESS   = regbits< type,  1,  1 >;  /**< Disable interrupt on ADDRESS event.   */
    using PAYLOAD   = regbits< type,  2,  1 >;  /**< Disable interrupt on PAYLOAD event.   */
    using END       = regbits< type,  3,  1 >;  /**< Disable interrupt on END event.       */
    using DISABLED  = regbits< type,  4,  1 >;  /**< Disable interrupt on DISABLED event.  */
    using DEVMATCH  = regbits< type,  5,  1 >;  /**< Disable interrupt on DEVMATCH event.  */
    using DEVMISS   = regbits< type,  6,  1 >;  /**< Disable interrupt on DEVMISS event.   */
    using RSSIEND   = regbits< type,  7,  1 >;  /**< Disable interrupt on RSSIEND event.   */
    using BCMATCH   = regbits< type, 10,  1 >;  /**< Disable interrupt on BCMATCH event.   */
  };

  /**
   * CRC status of received packet.
   */
  struct CRCSTATUS
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CRCSTATUS
    using CRCSTATUS_ = regbits< type,  0,  1 >;  /**< CRC status of received packet.  */
  };

  /**
   * Received address.
   */
  struct RXMATCH
  : public reg< uint32_t, base_addr + 0x408, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x408, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RXMATCH
    using RXMATCH_ = regbits< type,  0,  3 >;  /**< Logical address in which previous packet was received.  */
  };

  /**
   * Received CRC.
   */
  struct RXCRC
  : public reg< uint32_t, base_addr + 0x40c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x40c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RXCRC
    using RXCRC_ = regbits< type,  0, 24 >;  /**< CRC field of previously received packet.  */
  };

  /**
   * Device address match index.
   */
  struct DAI
  : public reg< uint32_t, base_addr + 0x410, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x410, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DAI
    using DAI_ = regbits< type,  0,  3 >;  /**< Index (n) of device address (see DAB[n] and DAP[n]) that obtained an address match.  */
  };

  /**
   * Packet pointer. Decision point: START task.
   */
  struct PACKETPTR
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Frequency.
   */
  struct FREQUENCY
  : public reg< uint32_t, base_addr + 0x508, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0x00000002 >;

    // fixme: Field name equals parent register name: FREQUENCY
    using FREQUENCY_ = regbits< type,  0,  7 >;  /**< Radio channel frequency offset in MHz: RF Frequency = 2400 + FREQUENCY (MHz). Decision point: TXEN or RXEN task.  */
  };

  /**
   * Output power.
   */
  struct TXPOWER
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: TXPOWER
    using TXPOWER_ = regbits< type,  0,  8 >;  /**< Radio output power. Decision point: TXEN task.  */
  };

  /**
   * Data rate and modulation.
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MODE
    using MODE_ = regbits< type,  0,  2 >;  /**< Radio data rate and modulation setting. Decision point: TXEN or RXEN task.  */
  };

  /**
   * Packet configuration 0.
   */
  struct PCNF0
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LFLEN  = regbits< type,  0,  4 >;  /**< Length of length field in number of bits. Decision point: START task.  */
    using S0LEN  = regbits< type,  8,  1 >;  /**< Length of S0 field in number of bytes. Decision point: START task.     */
    using S1LEN  = regbits< type, 16,  4 >;  /**< Length of S1 field in number of bits. Decision point: START task.      */
  };

  /**
   * Packet configuration 1.
   */
  struct PCNF1
  : public reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MAXLEN   = regbits< type,  0,  8 >;  /**< Maximum length of packet payload in number of bytes.                   */
    using STATLEN  = regbits< type,  8,  8 >;  /**< Static length in number of bytes. Decision point: START task.          */
    using BALEN    = regbits< type, 16,  3 >;  /**< Base address length in number of bytes. Decision point: START task.    */
    using ENDIAN   = regbits< type, 24,  1 >;  /**< On air endianness of packet length field. Decision point: START task.  */
    using WHITEEN  = regbits< type, 25,  1 >;  /**< Packet whitening enable.                                               */
  };

  /**
   * Radio base address 0. Decision point: START task.
   */
  struct BASE0
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Radio base address 1. Decision point: START task.
   */
  struct BASE1
  : public reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Prefixes bytes for logical addresses 0 to 3.
   */
  struct PREFIX0
  : public reg< uint32_t, base_addr + 0x524, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using AP0  = regbits< type,  0,  8 >;  /**< Address prefix 0. Decision point: START task.  */
    using AP1  = regbits< type,  8,  8 >;  /**< Address prefix 1. Decision point: START task.  */
    using AP2  = regbits< type, 16,  8 >;  /**< Address prefix 2. Decision point: START task.  */
    using AP3  = regbits< type, 24,  8 >;  /**< Address prefix 3. Decision point: START task.  */
  };

  /**
   * Prefixes bytes for logical addresses 4 to 7.
   */
  struct PREFIX1
  : public reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x528, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using AP4  = regbits< type,  0,  8 >;  /**< Address prefix 4. Decision point: START task.  */
    using AP5  = regbits< type,  8,  8 >;  /**< Address prefix 5. Decision point: START task.  */
    using AP6  = regbits< type, 16,  8 >;  /**< Address prefix 6. Decision point: START task.  */
    using AP7  = regbits< type, 24,  8 >;  /**< Address prefix 7. Decision point: START task.  */
  };

  /**
   * Transmit address select.
   */
  struct TXADDRESS
  : public reg< uint32_t, base_addr + 0x52c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x52c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: TXADDRESS
    using TXADDRESS_ = regbits< type,  0,  3 >;  /**< Logical address to be used when transmitting a packet. Decision point: START task.  */
  };

  /**
   * Receive address select.
   */
  struct RXADDRESSES
  : public reg< uint32_t, base_addr + 0x530, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x530, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADDR0  = regbits< type,  0,  1 >;  /**< Enable reception on logical address 0. Decision point: START task.  */
    using ADDR1  = regbits< type,  1,  1 >;  /**< Enable reception on logical address 1. Decision point: START task.  */
    using ADDR2  = regbits< type,  2,  1 >;  /**< Enable reception on logical address 2. Decision point: START task.  */
    using ADDR3  = regbits< type,  3,  1 >;  /**< Enable reception on logical address 3. Decision point: START task.  */
    using ADDR4  = regbits< type,  4,  1 >;  /**< Enable reception on logical address 4. Decision point: START task.  */
    using ADDR5  = regbits< type,  5,  1 >;  /**< Enable reception on logical address 5. Decision point: START task.  */
    using ADDR6  = regbits< type,  6,  1 >;  /**< Enable reception on logical address 6. Decision point: START task.  */
    using ADDR7  = regbits< type,  7,  1 >;  /**< Enable reception on logical address 7. Decision point: START task.  */
  };

  /**
   * CRC configuration.
   */
  struct CRCCNF
  : public reg< uint32_t, base_addr + 0x534, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x534, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LEN       = regbits< type,  0,  2 >;  /**< CRC length. Decision point: START task.                                             */
    using SKIPADDR  = regbits< type,  8,  1 >;  /**< Leave packet address field out of the CRC calculation. Decision point: START task.  */
  };

  /**
   * CRC polynomial.
   */
  struct CRCPOLY
  : public reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CRCPOLY
    using CRCPOLY_ = regbits< type,  0, 24 >;  /**< CRC polynomial. Decision point: START task.  */
  };

  /**
   * CRC initial value.
   */
  struct CRCINIT
  : public reg< uint32_t, base_addr + 0x53c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x53c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CRCINIT
    using CRCINIT_ = regbits< type,  0, 24 >;  /**< Initial value for CRC calculation. Decision point: START task.  */
  };

  /**
   * Test features enable register.
   */
  struct TEST
  : public reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CONSTCARRIER  = regbits< type,  0,  1 >;  /**< Constant carrier. Decision point: TXEN task.  */
    using PLLLOCK       = regbits< type,  1,  1 >;  /**< PLL lock. Decision point: TXEN or RXEN task.  */
  };

  /**
   * Inter Frame Spacing in microseconds.
   */
  struct TIFS
  : public reg< uint32_t, base_addr + 0x544, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x544, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: TIFS
    using TIFS_ = regbits< type,  0,  8 >;  /**< Inter frame spacing in microseconds. Decision point: START rask  */
  };

  /**
   * RSSI sample.
   */
  struct RSSISAMPLE
  : public reg< uint32_t, base_addr + 0x548, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x548, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RSSISAMPLE
    using RSSISAMPLE_ = regbits< type,  0,  7 >;  /**< RSSI sample result. The result is read as a positive value so that ReceivedSignalStrength = -RSSISAMPLE dBm  */
  };

  /**
   * Current radio state.
   */
  struct STATE
  : public reg< uint32_t, base_addr + 0x550, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x550, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: STATE
    using STATE_ = regbits< type,  0,  4 >;  /**< Current radio state.  */
  };

  /**
   * Data whitening initial value.
   */
  struct DATAWHITEIV
  : public reg< uint32_t, base_addr + 0x554, rw, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x554, rw, 0x00000040 >;

    // fixme: Field name equals parent register name: DATAWHITEIV
    using DATAWHITEIV_ = regbits< type,  0,  7 >;  /**< Data whitening initial value. Bit 0 corresponds to Position 0 of the LSFR, Bit 1 to position 5... Decision point: TXEN or RXEN task.  */
  };

  /**
   * Bit counter compare.
   */
  struct BCC
  : public reg< uint32_t, base_addr + 0x560, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Device address base segment.
   */
  struct DAB[%s]
  : public reg< uint32_t, base_addr + 0x600, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Device address prefix.
   */
  struct DAP[%s]
  : public reg< uint32_t, base_addr + 0x620, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x620, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DAP  = regbits< type,  0, 16 >;  /**< Device address prefix.  */
  };

  /**
   * Device address match configuration.
   */
  struct DACNF
  : public reg< uint32_t, base_addr + 0x640, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x640, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENA0    = regbits< type,  0,  1 >;  /**< Enable or disable device address matching using device address 0.  */
    using ENA1    = regbits< type,  1,  1 >;  /**< Enable or disable device address matching using device address 1.  */
    using ENA2    = regbits< type,  2,  1 >;  /**< Enable or disable device address matching using device address 2.  */
    using ENA3    = regbits< type,  3,  1 >;  /**< Enable or disable device address matching using device address 3.  */
    using ENA4    = regbits< type,  4,  1 >;  /**< Enable or disable device address matching using device address 4.  */
    using ENA5    = regbits< type,  5,  1 >;  /**< Enable or disable device address matching using device address 5.  */
    using ENA6    = regbits< type,  6,  1 >;  /**< Enable or disable device address matching using device address 6.  */
    using ENA7    = regbits< type,  7,  1 >;  /**< Enable or disable device address matching using device address 7.  */
    using TXADD0  = regbits< type,  8,  1 >;  /**< TxAdd for device address 0.                                        */
    using TXADD1  = regbits< type,  9,  1 >;  /**< TxAdd for device address 1.                                        */
    using TXADD2  = regbits< type, 10,  1 >;  /**< TxAdd for device address 2.                                        */
    using TXADD3  = regbits< type, 11,  1 >;  /**< TxAdd for device address 3.                                        */
    using TXADD4  = regbits< type, 12,  1 >;  /**< TxAdd for device address 4.                                        */
    using TXADD5  = regbits< type, 13,  1 >;  /**< TxAdd for device address 5.                                        */
    using TXADD6  = regbits< type, 14,  1 >;  /**< TxAdd for device address 6.                                        */
    using TXADD7  = regbits< type, 15,  1 >;  /**< TxAdd for device address 7.                                        */
  };

  /**
   * Trim value override register 0.
   */
  struct OVERRIDE0
  : public reg< uint32_t, base_addr + 0x724, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x724, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: OVERRIDE0
    using OVERRIDE0_ = regbits< type,  0, 32 >;  /**< Trim value override 0.  */
  };

  /**
   * Trim value override register 1.
   */
  struct OVERRIDE1
  : public reg< uint32_t, base_addr + 0x728, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x728, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: OVERRIDE1
    using OVERRIDE1_ = regbits< type,  0, 32 >;  /**< Trim value override 1.  */
  };

  /**
   * Trim value override register 2.
   */
  struct OVERRIDE2
  : public reg< uint32_t, base_addr + 0x72c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x72c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: OVERRIDE2
    using OVERRIDE2_ = regbits< type,  0, 32 >;  /**< Trim value override 2.  */
  };

  /**
   * Trim value override register 3.
   */
  struct OVERRIDE3
  : public reg< uint32_t, base_addr + 0x730, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x730, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: OVERRIDE3
    using OVERRIDE3_ = regbits< type,  0, 32 >;  /**< Trim value override 3.  */
  };

  /**
   * Trim value override register 4.
   */
  struct OVERRIDE4
  : public reg< uint32_t, base_addr + 0x734, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x734, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: OVERRIDE4
    using OVERRIDE4_ = regbits< type,  0, 28 >;  /**< Trim value override 4.                              */
    using ENABLE     = regbits< type, 31,  1 >;  /**< Enable or disable override of default trim values.  */
  };

  /**
   * Peripheral power control.
   */
  struct POWER
  : public reg< uint32_t, base_addr + 0xffc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0xffc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: POWER
    using POWER_ = regbits< type,  0,  1 >;  /**< Peripheral power control.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RADIO_HPP_INCLUDED
