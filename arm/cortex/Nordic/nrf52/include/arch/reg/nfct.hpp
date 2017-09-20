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

#ifndef ARCH_REG_NFCT_HPP_INCLUDED
#define ARCH_REG_NFCT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * NFC-A compatible radio
 */
struct NFCT
{
  static constexpr reg_addr_t base_addr = 0x40005000;

  /**
   * Activate NFC peripheral for incoming and outgoing frames, change state to activated
   */
  struct TASKS_ACTIVATE
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Disable NFC peripheral
   */
  struct TASKS_DISABLE
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Enable NFC sense field mode, change state to sense mode
   */
  struct TASKS_SENSE
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Start transmission of a outgoing frame, change state to transmit
   */
  struct TASKS_STARTTX
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Initializes the EasyDMA for receive.
   */
  struct TASKS_ENABLERXDATA
  : public reg< uint32_t, base_addr + 0x01c, wo, 0 >
  {
  };

  /**
   * Force state machine to IDLE state
   */
  struct TASKS_GOIDLE
  : public reg< uint32_t, base_addr + 0x024, wo, 0 >
  {
  };

  /**
   * Force state machine to SLEEP_A state
   */
  struct TASKS_GOSLEEP
  : public reg< uint32_t, base_addr + 0x028, wo, 0 >
  {
  };

  /**
   * The NFC peripheral is ready to receive and send frames
   */
  struct EVENTS_READY
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Remote NFC field detected
   */
  struct EVENTS_FIELDDETECTED
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Remote NFC field lost
   */
  struct EVENTS_FIELDLOST
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Marks the start of the first symbol of a transmitted frame
   */
  struct EVENTS_TXFRAMESTART
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Marks the end of the last transmitted on-air symbol of a frame
   */
  struct EVENTS_TXFRAMEEND
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Marks the end of the first symbol of a received frame
   */
  struct EVENTS_RXFRAMESTART
  : public reg< uint32_t, base_addr + 0x114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Received data have been checked (CRC, parity) and transferred to RAM, and EasyDMA has ended accessing the RX buffer
   */
  struct EVENTS_RXFRAMEEND
  : public reg< uint32_t, base_addr + 0x118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * NFC error reported. The ERRORSTATUS register contains details on the source of the error.
   */
  struct EVENTS_ERROR
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * NFC RX frame error reported. The FRAMESTATUS.RX register contains details on the source of the error.
   */
  struct EVENTS_RXERROR
  : public reg< uint32_t, base_addr + 0x128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX buffer (as defined by PACKETPTR and MAXLEN) in Data RAM full.
   */
  struct EVENTS_ENDRX
  : public reg< uint32_t, base_addr + 0x12c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Transmission of data in RAM has ended, and EasyDMA has ended accessing the TX buffer
   */
  struct EVENTS_ENDTX
  : public reg< uint32_t, base_addr + 0x130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Auto collision resolution process has started
   */
  struct EVENTS_AUTOCOLRESSTARTED
  : public reg< uint32_t, base_addr + 0x138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * NFC Auto collision resolution error reported.
   */
  struct EVENTS_COLLISION
  : public reg< uint32_t, base_addr + 0x148, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * NFC Auto collision resolution successfully completed
   */
  struct EVENTS_SELECTED
  : public reg< uint32_t, base_addr + 0x14c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EasyDMA is ready to receive or send frames.
   */
  struct EVENTS_STARTED
  : public reg< uint32_t, base_addr + 0x150, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIELDDETECTED_ACTIVATE  = regbits< type,  0,  1 >;  /**< Shortcut between EVENTS_FIELDDETECTED event and TASKS_ACTIVATE task  */
    using FIELDLOST_SENSE         = regbits< type,  1,  1 >;  /**< Shortcut between EVENTS_FIELDLOST event and TASKS_SENSE task         */
  };

  /**
   * Enable or disable interrupt
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY              = regbits< type,  0,  1 >;  /**< Enable or disable interrupt on EVENTS_READY event              */
    using FIELDDETECTED      = regbits< type,  1,  1 >;  /**< Enable or disable interrupt on EVENTS_FIELDDETECTED event      */
    using FIELDLOST          = regbits< type,  2,  1 >;  /**< Enable or disable interrupt on EVENTS_FIELDLOST event          */
    using TXFRAMESTART       = regbits< type,  3,  1 >;  /**< Enable or disable interrupt on EVENTS_TXFRAMESTART event       */
    using TXFRAMEEND         = regbits< type,  4,  1 >;  /**< Enable or disable interrupt on EVENTS_TXFRAMEEND event         */
    using RXFRAMESTART       = regbits< type,  5,  1 >;  /**< Enable or disable interrupt on EVENTS_RXFRAMESTART event       */
    using RXFRAMEEND         = regbits< type,  6,  1 >;  /**< Enable or disable interrupt on EVENTS_RXFRAMEEND event         */
    using ERROR              = regbits< type,  7,  1 >;  /**< Enable or disable interrupt on EVENTS_ERROR event              */
    using RXERROR            = regbits< type, 10,  1 >;  /**< Enable or disable interrupt on EVENTS_RXERROR event            */
    using ENDRX              = regbits< type, 11,  1 >;  /**< Enable or disable interrupt on EVENTS_ENDRX event              */
    using ENDTX              = regbits< type, 12,  1 >;  /**< Enable or disable interrupt on EVENTS_ENDTX event              */
    using AUTOCOLRESSTARTED  = regbits< type, 14,  1 >;  /**< Enable or disable interrupt on EVENTS_AUTOCOLRESSTARTED event  */
    using COLLISION          = regbits< type, 18,  1 >;  /**< Enable or disable interrupt on EVENTS_COLLISION event          */
    using SELECTED           = regbits< type, 19,  1 >;  /**< Enable or disable interrupt on EVENTS_SELECTED event           */
    using STARTED            = regbits< type, 20,  1 >;  /**< Enable or disable interrupt on EVENTS_STARTED event            */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY              = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_READY event              */
    using FIELDDETECTED      = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_FIELDDETECTED event      */
    using FIELDLOST          = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_FIELDLOST event          */
    using TXFRAMESTART       = regbits< type,  3,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_TXFRAMESTART event       */
    using TXFRAMEEND         = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_TXFRAMEEND event         */
    using RXFRAMESTART       = regbits< type,  5,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXFRAMESTART event       */
    using RXFRAMEEND         = regbits< type,  6,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXFRAMEEND event         */
    using ERROR              = regbits< type,  7,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ERROR event              */
    using RXERROR            = regbits< type, 10,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXERROR event            */
    using ENDRX              = regbits< type, 11,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ENDRX event              */
    using ENDTX              = regbits< type, 12,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ENDTX event              */
    using AUTOCOLRESSTARTED  = regbits< type, 14,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_AUTOCOLRESSTARTED event  */
    using COLLISION          = regbits< type, 18,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COLLISION event          */
    using SELECTED           = regbits< type, 19,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_SELECTED event           */
    using STARTED            = regbits< type, 20,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STARTED event            */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY              = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_READY event              */
    using FIELDDETECTED      = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_FIELDDETECTED event      */
    using FIELDLOST          = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_FIELDLOST event          */
    using TXFRAMESTART       = regbits< type,  3,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_TXFRAMESTART event       */
    using TXFRAMEEND         = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_TXFRAMEEND event         */
    using RXFRAMESTART       = regbits< type,  5,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXFRAMESTART event       */
    using RXFRAMEEND         = regbits< type,  6,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXFRAMEEND event         */
    using ERROR              = regbits< type,  7,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ERROR event              */
    using RXERROR            = regbits< type, 10,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXERROR event            */
    using ENDRX              = regbits< type, 11,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ENDRX event              */
    using ENDTX              = regbits< type, 12,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ENDTX event              */
    using AUTOCOLRESSTARTED  = regbits< type, 14,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_AUTOCOLRESSTARTED event  */
    using COLLISION          = regbits< type, 18,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COLLISION event          */
    using SELECTED           = regbits< type, 19,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_SELECTED event           */
    using STARTED            = regbits< type, 20,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STARTED event            */
  };

  /**
   * NFC Error Status register
   */
  struct ERRORSTATUS
  : public reg< uint32_t, base_addr + 0x404, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FRAMEDELAYTIMEOUT  = regbits< type,  0,  1 >;  /**< No STARTTX task triggered before expiration of the time set in FRAMEDELAYMAX  */
    using INVALIDNFCSYMBOL   = regbits< type,  1,  1 >;  /**< The received pulse does not match a valid NFC-A symbol                        */
    using NFCFIELDTOOSTRONG  = regbits< type,  2,  1 >;  /**< Field level is too high at max load resistance                                */
    using NFCFIELDTOOWEAK    = regbits< type,  3,  1 >;  /**< Field level is too low at min load resistance                                 */
    using EOFERROR           = regbits< type,  6,  1 >;  /**< No valid End of Frame detected                                                */
  };

  /**
   * Current value driven to the NFC Load Control
   */
  struct CURRENTLOADCTRL
  : public reg< uint32_t, base_addr + 0x430, ro, 0x00000008 >
  {
    using type = reg< uint32_t, base_addr + 0x430, ro, 0x00000008 >;

    // fixme: Field name equals parent register name: CURRENTLOADCTRL
    using CURRENTLOADCTRL_ = regbits< type,  0,  6 >;  /**< Current value driven to the NFC Load Control  */
  };

  /**
   * Indicates the presence or not of a valid field
   */
  struct FIELDPRESENT
  : public reg< uint32_t, base_addr + 0x43c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x43c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: FIELDPRESENT
    using FIELDPRESENT_ = regbits< type,  0,  1 >;  /**< Indicates the presence or not of a valid field. Linked to the FIELDDETECTED and FIELDLOST events.  */
    using LOCKDETECT    = regbits< type,  1,  1 >;  /**< Indicates if the low level has locked to the field                                                 */
  };

  /**
   * Minimum frame delay
   */
  struct FRAMEDELAYMIN
  : public reg< uint32_t, base_addr + 0x504, rw, 0x00000480 >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0x00000480 >;

    // fixme: Field name equals parent register name: FRAMEDELAYMIN
    using FRAMEDELAYMIN_ = regbits< type,  0, 16 >;  /**< Minimum frame delay in number of 13.56 MHz clocks  */
  };

  /**
   * Maximum frame delay
   */
  struct FRAMEDELAYMAX
  : public reg< uint32_t, base_addr + 0x508, rw, 0x00001000 >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0x00001000 >;

    // fixme: Field name equals parent register name: FRAMEDELAYMAX
    using FRAMEDELAYMAX_ = regbits< type,  0, 16 >;  /**< Maximum frame delay in number of 13.56 MHz clocks  */
  };

  /**
   * Configuration register for the Frame Delay Timer
   */
  struct FRAMEDELAYMODE
  : public reg< uint32_t, base_addr + 0x50c, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0x00000001 >;

    // fixme: Field name equals parent register name: FRAMEDELAYMODE
    using FRAMEDELAYMODE_ = regbits< type,  0,  2 >;  /**< Configuration register for the Frame Delay Timer  */
  };

  /**
   * Packet pointer for TXD and RXD data storage in Data RAM
   */
  struct PACKETPTR
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PTR  = regbits< type,  0, 32 >;  /**< Packet pointer for TXD and RXD data storage in Data RAM. This address is a byte aligned RAM address.  */
  };

  /**
   * Size of allocated for TXD and RXD data storage buffer in Data RAM
   */
  struct MAXLEN
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MAXLEN
    using MAXLEN_ = regbits< type,  0,  9 >;  /**< Size of allocated for TXD and RXD data storage buffer in Data RAM  */
  };

  /**
   * Last NFCID1 part (4, 7 or 10 bytes ID)
   */
  struct NFCID1_LAST
  : public reg< uint32_t, base_addr + 0x590, rw, 0x00006363 >
  {
    using type = reg< uint32_t, base_addr + 0x590, rw, 0x00006363 >;

    using NFCID1_Z  = regbits< type,  0,  8 >;  /**< NFCID1 byte Z (very last byte sent)  */
    using NFCID1_Y  = regbits< type,  8,  8 >;  /**< NFCID1 byte Y                        */
    using NFCID1_X  = regbits< type, 16,  8 >;  /**< NFCID1 byte X                        */
    using NFCID1_W  = regbits< type, 24,  8 >;  /**< NFCID1 byte W                        */
  };

  /**
   * Second last NFCID1 part (7 or 10 bytes ID)
   */
  struct NFCID1_2ND_LAST
  : public reg< uint32_t, base_addr + 0x594, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x594, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NFCID1_V  = regbits< type,  0,  8 >;  /**< NFCID1 byte V  */
    using NFCID1_U  = regbits< type,  8,  8 >;  /**< NFCID1 byte U  */
    using NFCID1_T  = regbits< type, 16,  8 >;  /**< NFCID1 byte T  */
  };

  /**
   * Third last NFCID1 part (10 bytes ID)
   */
  struct NFCID1_3RD_LAST
  : public reg< uint32_t, base_addr + 0x598, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x598, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NFCID1_S  = regbits< type,  0,  8 >;  /**< NFCID1 byte S  */
    using NFCID1_R  = regbits< type,  8,  8 >;  /**< NFCID1 byte R  */
    using NFCID1_Q  = regbits< type, 16,  8 >;  /**< NFCID1 byte Q  */
  };

  /**
   * Controls the Auto collision resolution function. This setting must be done before the NFCT peripheral is enabled.
   */
  struct AUTOCOLRESCONFIG
  : public reg< uint32_t, base_addr + 0x59c, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x59c, rw, 0x00000002 >;

    using MODE    = regbits< type,  0,  1 >;  /**< Enables/disables Auto collision resolution                                                         */
    using FILTER  = regbits< type,  1,  1 >;  /**< Enables/disables Auto collision resolution short frame (any frames less than 7 bits) noise filter  */
  };

  /**
   * NFC-A SENS_RES auto-response settings
   */
  struct SENSRES
  : public reg< uint32_t, base_addr + 0x5a0, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x5a0, rw, 0x00000001 >;

    using BITFRAMESDD  = regbits< type,  0,  5 >;  /**< Bit frame SDD as defined by the b5:b1 of byte 1 in SENS_RES response in the NFC Forum, NFC Digital Protocol Technical Specification               */
    using RFU5         = regbits< type,  5,  1 >;  /**< Reserved for future use. Shall be 0.                                                                                                              */
    using NFCIDSIZE    = regbits< type,  6,  2 >;  /**< NFCID1 size. This value is used by the Auto collision resolution engine.                                                                          */
    using PLATFCONFIG  = regbits< type,  8,  4 >;  /**< Tag platform configuration as defined by the b4:b1 of byte 2 in SENS_RES response in the NFC Forum, NFC Digital Protocol Technical Specification  */
    using RFU74        = regbits< type, 12,  4 >;  /**< Reserved for future use. Shall be 0.                                                                                                              */
  };

  /**
   * NFC-A SEL_RES auto-response settings
   */
  struct SELRES
  : public reg< uint32_t, base_addr + 0x5a4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x5a4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RFU10     = regbits< type,  0,  2 >;  /**< Reserved for future use. Shall be 0.                                                                                 */
    using CASCADE   = regbits< type,  2,  1 >;  /**< Cascade bit (controlled by hardware, write has no effect)                                                            */
    using RFU43     = regbits< type,  3,  2 >;  /**< Reserved for future use. Shall be 0.                                                                                 */
    using PROTOCOL  = regbits< type,  5,  2 >;  /**< Protocol as defined by the b7:b6 of SEL_RES response in the NFC Forum, NFC Digital Protocol Technical Specification  */
    using RFU7      = regbits< type,  7,  1 >;  /**< Reserved for future use. Shall be 0.                                                                                 */
  };
};
} // namespace mptl

#endif // ARCH_REG_NFCT_HPP_INCLUDED
