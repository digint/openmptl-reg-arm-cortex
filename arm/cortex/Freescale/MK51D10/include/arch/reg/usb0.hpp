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
//  Import from CMSIS-SVD: "Freescale/MK51D10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK51D10
//  series: Kinetis_K
//  version: 1.6
//  description: MK51D10 Freescale Microcontroller
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
 * Universal Serial Bus, OTG Capable Controller
 */
struct USB0
{
  static constexpr reg_addr_t base_addr = 0x40072000;

  /**
   * Peripheral ID register
   */
  struct PERID
  : public reg< uint8_t, base_addr + 0, ro, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0, ro, 0x4 >;

    using ID  = regbits< type,  0,  6 >;  /**< Peripheral Identification  */
  };

  /**
   * Peripheral ID Complement register
   */
  struct IDCOMP
  : public reg< uint8_t, base_addr + 0x4, ro, 0xFB >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0xFB >;

    using NID  = regbits< type,  0,  6 >;  /**< Ones complement of peripheral identification bits.  */
  };

  /**
   * Peripheral Revision register
   */
  struct REV
  : public reg< uint8_t, base_addr + 0x8, ro, 0x33 >
  {
    using type = reg< uint8_t, base_addr + 0x8, ro, 0x33 >;

    // fixme: Field name equals parent register name: REV
    using REV_ = regbits< type,  0,  8 >;  /**< Revision  */
  };

  /**
   * Peripheral Additional Info register
   */
  struct ADDINFO
  : public reg< uint8_t, base_addr + 0xc, ro, 0x1 >
  {
    using type = reg< uint8_t, base_addr + 0xc, ro, 0x1 >;

    using IEHOST  = regbits< type,  0,  1 >;  /**< When this bit is set, the USB peripheral is operating in host mode.  */
    using IRQNUM  = regbits< type,  3,  5 >;  /**< Assigned Interrupt Request Number                                    */
  };

  /**
   * OTG Interrupt Status register
   */
  struct OTGISTAT
  : public reg< uint8_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0 >;

    using AVBUSCHG        = regbits< type,  0,  1 >;  /**< This bit is set when a change in VBUS is detected on an A device.                                          */
    using B_SESS_CHG      = regbits< type,  2,  1 >;  /**< This bit is set when a change in VBUS is detected on a B device.                                           */
    using SESSVLDCHG      = regbits< type,  3,  1 >;  /**< This bit is set when a change in VBUS is detected indicating a session valid or a session no longer valid  */
    using LINE_STATE_CHG  = regbits< type,  5,  1 >;  /**< This bit is set when the USB line state changes                                                            */
    using ONEMSEC         = regbits< type,  6,  1 >;  /**< This bit is set when the 1 millisecond timer expires                                                       */
    using IDCHG           = regbits< type,  7,  1 >;  /**< This bit is set when a change in the ID Signal from the USB connector is sensed.                           */
  };

  /**
   * OTG Interrupt Control Register
   */
  struct OTGICR
  : public reg< uint8_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0 >;

    using AVBUSEN      = regbits< type,  0,  1 >;  /**< A VBUS Valid Interrupt Enable       */
    using BSESSEN      = regbits< type,  2,  1 >;  /**< B Session END Interrupt Enable      */
    using SESSVLDEN    = regbits< type,  3,  1 >;  /**< Session Valid Interrupt Enable      */
    using LINESTATEEN  = regbits< type,  5,  1 >;  /**< Line State Change Interrupt Enable  */
    using ONEMSECEN    = regbits< type,  6,  1 >;  /**< One Millisecond Interrupt Enable    */
    using IDEN         = regbits< type,  7,  1 >;  /**< ID Interrupt Enable                 */
  };

  /**
   * OTG Status register
   */
  struct OTGSTAT
  : public reg< uint8_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0 >;

    using AVBUSVLD         = regbits< type,  0,  1 >;  /**< A VBUS Valid                                                                                                                 */
    using BSESSEND         = regbits< type,  2,  1 >;  /**< B Session End                                                                                                                */
    using SESS_VLD         = regbits< type,  3,  1 >;  /**< Session Valid                                                                                                                */
    using LINESTATESTABLE  = regbits< type,  5,  1 >;  /**< Indicates that the internal signals that control the LINE_STATE_CHG field of OTGISTAT are stable for at least 1 millisecond  */
    using ONEMSECEN        = regbits< type,  6,  1 >;  /**< This bit is reserved for the 1ms count, but it is not useful to software.                                                    */
    using ID               = regbits< type,  7,  1 >;  /**< Indicates the current state of the ID pin on the USB connector                                                               */
  };

  /**
   * OTG Control register
   */
  struct OTGCTL
  : public reg< uint8_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, rw, 0 >;

    using OTGEN   = regbits< type,  2,  1 >;  /**< On-The-Go pullup/pulldown resistor enable  */
    using DMLOW   = regbits< type,  4,  1 >;  /**< D- Data Line pull-down resistor enable     */
    using DPLOW   = regbits< type,  5,  1 >;  /**< D+ Data Line pull-down resistor enable     */
    using DPHIGH  = regbits< type,  7,  1 >;  /**< D+ Data Line pullup resistor enable        */
  };

  /**
   * Interrupt Status register
   */
  struct ISTAT
  : public reg< uint8_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x80, rw, 0 >;

    using USBRST  = regbits< type,  0,  1 >;  /**< This bit is set when the USB Module has decoded a valid USB reset                                                    */
    using ERROR   = regbits< type,  1,  1 >;  /**< This bit is set when any of the error conditions within Error Interrupt Status (ERRSTAT) register occur              */
    using SOFTOK  = regbits< type,  2,  1 >;  /**< This bit is set when the USB Module receives a Start Of Frame (SOF) token                                            */
    using TOKDNE  = regbits< type,  3,  1 >;  /**< This bit is set when the current token being processed has completed                                                 */
    using SLEEP   = regbits< type,  4,  1 >;  /**< This bit is set when the USB Module detects a constant idle on the USB bus for 3 ms                                  */
    using RESUME  = regbits< type,  5,  1 >;  /**< This bit is set depending upon the DP/DM signals, and can be used to signal remote wake-up signaling on the USB bus  */
    using ATTACH  = regbits< type,  6,  1 >;  /**< Attach Interrupt                                                                                                     */
    using STALL   = regbits< type,  7,  1 >;  /**< Stall Interrupt                                                                                                      */
  };

  /**
   * Interrupt Enable register
   */
  struct INTEN
  : public reg< uint8_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x84, rw, 0 >;

    using USBRSTEN  = regbits< type,  0,  1 >;  /**< USBRST Interrupt Enable  */
    using ERROREN   = regbits< type,  1,  1 >;  /**< ERROR Interrupt Enable   */
    using SOFTOKEN  = regbits< type,  2,  1 >;  /**< SOFTOK Interrupt Enable  */
    using TOKDNEEN  = regbits< type,  3,  1 >;  /**< TOKDNE Interrupt Enable  */
    using SLEEPEN   = regbits< type,  4,  1 >;  /**< SLEEP Interrupt Enable   */
    using RESUMEEN  = regbits< type,  5,  1 >;  /**< RESUME Interrupt Enable  */
    using ATTACHEN  = regbits< type,  6,  1 >;  /**< ATTACH Interrupt Enable  */
    using STALLEN   = regbits< type,  7,  1 >;  /**< STALL Interrupt Enable   */
  };

  /**
   * Error Interrupt Status register
   */
  struct ERRSTAT
  : public reg< uint8_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x88, rw, 0 >;

    using PIDERR   = regbits< type,  0,  1 >;  /**< This bit is set when the PID check field fails.                                                                                                            */
    using CRC5EOF  = regbits< type,  1,  1 >;  /**< This error interrupt has two functions                                                                                                                     */
    using CRC16    = regbits< type,  2,  1 >;  /**< This bit is set when a data packet is rejected due to a CRC16 error.                                                                                       */
    using DFN8     = regbits< type,  3,  1 >;  /**< This bit is set if the data field received was not 8 bits in length                                                                                        */
    using BTOERR   = regbits< type,  4,  1 >;  /**< This bit is set when a bus turnaround timeout error occurs                                                                                                 */
    using DMAERR   = regbits< type,  5,  1 >;  /**< This bit is set if the USB Module has requested a DMA access to read a new BDT but has not been given the bus before it needs to receive or transmit data  */
    using BTSERR   = regbits< type,  7,  1 >;  /**< This bit is set when a bit stuff error is detected                                                                                                         */
  };

  /**
   * Error Interrupt Enable register
   */
  struct ERREN
  : public reg< uint8_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8c, rw, 0 >;

    using PIDERREN   = regbits< type,  0,  1 >;  /**< PIDERR Interrupt Enable    */
    using CRC5EOFEN  = regbits< type,  1,  1 >;  /**< CRC5/EOF Interrupt Enable  */
    using CRC16EN    = regbits< type,  2,  1 >;  /**< CRC16 Interrupt Enable     */
    using DFN8EN     = regbits< type,  3,  1 >;  /**< DFN8 Interrupt Enable      */
    using BTOERREN   = regbits< type,  4,  1 >;  /**< BTOERR Interrupt Enable    */
    using DMAERREN   = regbits< type,  5,  1 >;  /**< DMAERR Interrupt Enable    */
    using BTSERREN   = regbits< type,  7,  1 >;  /**< BTSERR Interrupt Enable    */
  };

  /**
   * Status register
   */
  struct STAT
  : public reg< uint8_t, base_addr + 0x90, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x90, ro, 0 >;

    using ODD   = regbits< type,  2,  1 >;  /**< This bit is set if the last buffer descriptor updated was in the odd bank of the BDT.             */
    using TX    = regbits< type,  3,  1 >;  /**< Transmit Indicator                                                                                */
    using ENDP  = regbits< type,  4,  4 >;  /**< This four-bit field encodes the endpoint address that received or transmitted the previous token  */
  };

  /**
   * Control register
   */
  struct CTL
  : public reg< uint8_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x94, rw, 0 >;

    using USBENSOFEN          = regbits< type,  0,  1 >;  /**< USB Enable                                                                                                  */
    using ODDRST              = regbits< type,  1,  1 >;  /**< Setting this bit to 1 resets all the BDT ODD ping/pong fields to 0, which then specifies the EVEN BDT bank  */
    using RESUME              = regbits< type,  2,  1 >;  /**< When set to 1 this bit enables the USB Module to execute resume signaling                                   */
    using HOSTMODEEN          = regbits< type,  3,  1 >;  /**< When set to 1, this bit enables the USB Module to operate in Host mode                                      */
    using RESET               = regbits< type,  4,  1 >;  /**< Setting this bit enables the USB Module to generate USB reset signaling                                     */
    using TXSUSPENDTOKENBUSY  = regbits< type,  5,  1 >;  /**< In Host mode, TOKEN_BUSY is set when the USB module is busy executing a USB token                           */
    using SE0                 = regbits< type,  6,  1 >;  /**< Live USB Single Ended Zero signal                                                                           */
    using JSTATE              = regbits< type,  7,  1 >;  /**< Live USB differential receiver JSTATE signal                                                                */
  };

  /**
   * Address register
   */
  struct ADDR
  : public reg< uint8_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x98, rw, 0 >;

    // fixme: Field name equals parent register name: ADDR
    using ADDR_ = regbits< type,  0,  7 >;  /**< USB Address           */
    using LSEN  = regbits< type,  7,  1 >;  /**< Low Speed Enable bit  */
  };

  /**
   * BDT Page Register 1
   */
  struct BDTPAGE1
  : public reg< uint8_t, base_addr + 0x9c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9c, rw, 0 >;

    using BDTBA  = regbits< type,  1,  7 >;  /**< Provides address bits 15 through 9 of the BDT base address.  */
  };

  /**
   * Frame Number Register Low
   */
  struct FRMNUML
  : public reg< uint8_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa0, rw, 0 >;

    using FRM  = regbits< type,  0,  8 >;  /**< This 8-bit field and the 3-bit field in the Frame Number Register High are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory  */
  };

  /**
   * Frame Number Register High
   */
  struct FRMNUMH
  : public reg< uint8_t, base_addr + 0xa4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa4, rw, 0 >;

    using FRM  = regbits< type,  0,  3 >;  /**< This 3-bit field and the 8-bit field in the Frame Number Register Low are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory  */
  };

  /**
   * Token register
   */
  struct TOKEN
  : public reg< uint8_t, base_addr + 0xa8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa8, rw, 0 >;

    using TOKENENDPT  = regbits< type,  0,  4 >;  /**< Holds the Endpoint address for the token command     */
    using TOKENPID    = regbits< type,  4,  4 >;  /**< Contains the token type executed by the USB module.  */
  };

  /**
   * SOF Threshold Register
   */
  struct SOFTHLD
  : public reg< uint8_t, base_addr + 0xac, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xac, rw, 0 >;

    using CNT  = regbits< type,  0,  8 >;  /**< Represents the SOF count threshold in byte times.  */
  };

  /**
   * BDT Page Register 2
   */
  struct BDTPAGE2
  : public reg< uint8_t, base_addr + 0xb0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb0, rw, 0 >;

    using BDTBA  = regbits< type,  0,  8 >;  /**< Provides address bits 23 through 16 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory  */
  };

  /**
   * BDT Page Register 3
   */
  struct BDTPAGE3
  : public reg< uint8_t, base_addr + 0xb4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb4, rw, 0 >;

    using BDTBA  = regbits< type,  0,  8 >;  /**< Provides address bits 31 through 24 of the BDT base address that defines the location of Buffer Descriptor Table resides in system memory  */
  };

  /**
   * Endpoint Control register
   */
  struct ENDPT%s
  : public reg< uint8_t, base_addr + 0xc0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xc0, rw, 0 >;

    using EPHSHK     = regbits< type,  0,  1 >;  /**< When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint  */
    using EPSTALL    = regbits< type,  1,  1 >;  /**< When set this bit indicates that the endpoint is called                                             */
    using EPTXEN     = regbits< type,  2,  1 >;  /**< This bit, when set, enables the endpoint for TX transfers.                                          */
    using EPRXEN     = regbits< type,  3,  1 >;  /**< This bit, when set, enables the endpoint for RX transfers.                                          */
    using EPCTLDIS   = regbits< type,  4,  1 >;  /**< This bit, when set, disables control (SETUP) transfers                                              */
    using RETRYDIS   = regbits< type,  6,  1 >;  /**< This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only    */
    using HOSTWOHUB  = regbits< type,  7,  1 >;  /**< This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only  */
  };

  /**
   * USB Control register
   */
  struct USBCTRL
  : public reg< uint8_t, base_addr + 0x100, rw, 0xC0 >
  {
    using type = reg< uint8_t, base_addr + 0x100, rw, 0xC0 >;

    using PDE   = regbits< type,  6,  1 >;  /**< Enables the weak pulldowns on the USB transceiver.  */
    using SUSP  = regbits< type,  7,  1 >;  /**< Places the USB transceiver into the suspend state.  */
  };

  /**
   * USB OTG Observe register
   */
  struct OBSERVE
  : public reg< uint8_t, base_addr + 0x104, ro, 0x50 >
  {
    using type = reg< uint8_t, base_addr + 0x104, ro, 0x50 >;

    using DMPD  = regbits< type,  4,  1 >;  /**< Provides observability of the D- Pulldown . enable at the USB transceiver  */
    using DPPD  = regbits< type,  6,  1 >;  /**< Provides observability of the D+ Pulldown . enable at the USB transceiver  */
    using DPPU  = regbits< type,  7,  1 >;  /**< Provides observability of the D+ Pullup . enable at the USB transceiver    */
  };

  /**
   * USB OTG Control register
   */
  struct CONTROL
  : public reg< uint8_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x108, rw, 0 >;

    using DPPULLUPNONOTG  = regbits< type,  4,  1 >;  /**< Provides control of the DP Pullup in the USB OTG module, if USB is configured in non-OTG device mode  */
  };

  /**
   * USB Transceiver Control Register 0
   */
  struct USBTRC0
  : public reg< uint8_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x10c, rw, 0 >;

    using USB_RESUME_INT  = regbits< type,  0,  1 >;  /**< USB Asynchronous Interrupt            */
    using SYNC_DET        = regbits< type,  1,  1 >;  /**< Synchronous USB Interrupt Detect      */
    using USBRESMEN       = regbits< type,  5,  1 >;  /**< Asynchronous Resume Interrupt Enable  */
    using USBRESET        = regbits< type,  7,  1 >;  /**< USB Reset                             */
  };

  /**
   * Frame Adjust Register
   */
  struct USBFRMADJUST
  : public reg< uint8_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x114, rw, 0 >;

    using ADJ  = regbits< type,  0,  8 >;  /**< Frame Adjustment  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USB0_HPP_INCLUDED
