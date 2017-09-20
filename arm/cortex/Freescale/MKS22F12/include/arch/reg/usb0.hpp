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
//  Import from CMSIS-SVD: "Freescale/MKS22F12.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKS22F12
//  series: Kinetis_K
//  version: 1.6
//  description: MKS22F12 Freescale Microcontroller
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

    using NID  = regbits< type,  0,  6 >;  /**< Ones' complement of PERID[ID] bits.  */
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

    using IEHOST  = regbits< type,  0,  1 >;  /**< This bit is set if host mode is enabled.  */
  };

  /**
   * OTG Interrupt Status register
   */
  struct OTGISTAT
  : public reg< uint8_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0 >;

    using LINE_STATE_CHG  = regbits< type,  5,  1 >;  /**< This interrupt is set when the USB line state (CTL[SE0] and CTL[JSTATE] bits) are stable without change for 1 millisecond, and the value of the line state is different from the last time when the line state was stable  */
    using ONEMSEC         = regbits< type,  6,  1 >;  /**< This bit is set when the 1 millisecond timer expires                                                                                                                                                                       */
  };

  /**
   * OTG Interrupt Control register
   */
  struct OTGICR
  : public reg< uint8_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0 >;

    using LINESTATEEN  = regbits< type,  5,  1 >;  /**< Line State Change Interrupt Enable  */
    using ONEMSECEN    = regbits< type,  6,  1 >;  /**< One Millisecond Interrupt Enable    */
  };

  /**
   * OTG Status register
   */
  struct OTGSTAT
  : public reg< uint8_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0 >;

    using LINESTATESTABLE  = regbits< type,  5,  1 >;  /**< Indicates that the internal signals that control the LINE_STATE_CHG field of OTGISTAT are stable for at least 1 ms  */
    using ONEMSECEN        = regbits< type,  6,  1 >;  /**< This bit is reserved for the 1ms count, but it is not useful to software.                                           */
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

    using USBRST  = regbits< type,  0,  1 >;  /**< This bit is set when the USB Module has decoded a valid USB reset                                        */
    using ERROR   = regbits< type,  1,  1 >;  /**< This bit is set when any of the error conditions within Error Interrupt Status (ERRSTAT) register occur  */
    using SOFTOK  = regbits< type,  2,  1 >;  /**< This bit is set when the USB Module receives a Start Of Frame (SOF) token                                */
    using TOKDNE  = regbits< type,  3,  1 >;  /**< This bit is set when the current token being processed has completed                                     */
    using SLEEP   = regbits< type,  4,  1 >;  /**< This bit is set when the USB Module detects a constant idle on the USB bus for 3 ms                      */
    using RESUME  = regbits< type,  5,  1 >;  /**< This bit is set when a K-state is observed on the DP/DM signals for 2                                    */
    using ATTACH  = regbits< type,  6,  1 >;  /**< Attach Interrupt                                                                                         */
    using STALL   = regbits< type,  7,  1 >;  /**< Stall Interrupt                                                                                          */
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
    using OWNERR   = regbits< type,  6,  1 >;  /**< This field is valid when the USB Module is operating in peripheral mode (CTL[HOSTMODEEN]=0)                                                                */
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
    using OWNERREN   = regbits< type,  6,  1 >;  /**< OWNERR Interrupt Enable    */
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
   * BDT Page register 1
   */
  struct BDTPAGE1
  : public reg< uint8_t, base_addr + 0x9c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9c, rw, 0 >;

    using BDTBA  = regbits< type,  1,  7 >;  /**< Provides address bits 15 through 9 of the BDT base address.  */
  };

  /**
   * Frame Number register Low
   */
  struct FRMNUML
  : public reg< uint8_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa0, rw, 0 >;

    using FRM  = regbits< type,  0,  8 >;  /**< This 8-bit field and the 3-bit field in the Frame Number Register High are used to compute the address where the current Buffer Descriptor Table (BDT) resides in system memory  */
  };

  /**
   * Frame Number register High
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
   * SOF Threshold register
   */
  struct SOFTHLD
  : public reg< uint8_t, base_addr + 0xac, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xac, rw, 0 >;

    using CNT  = regbits< type,  0,  8 >;  /**< Represents the SOF count threshold in byte times when SOFDYNTHLD=0 or 8 byte times when SOFDYNTHLD=1  */
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

    using EPHSHK     = regbits< type,  0,  1 >;  /**< When set this bit enables an endpoint to perform handshaking during a transaction to this endpoint                     */
    using EPSTALL    = regbits< type,  1,  1 >;  /**< When set, this bit indicates that the endpoint is stalled                                                              */
    using EPTXEN     = regbits< type,  2,  1 >;  /**< This bit, when set, enables the endpoint for TX transfers. See                                                         */
    using EPRXEN     = regbits< type,  3,  1 >;  /**< This bit, when set, enables the endpoint for RX transfers. See                                                         */
    using EPCTLDIS   = regbits< type,  4,  1 >;  /**< This bit, when set, disables control (SETUP) transfers                                                                 */
    using RETRYDIS   = regbits< type,  6,  1 >;  /**< This is a Host mode only bit and is present in the control register for endpoint 0 (ENDPT0) only                       */
    using HOSTWOHUB  = regbits< type,  7,  1 >;  /**< Host without a hub This is a Host mode only field and is present in the control register for endpoint 0 (ENDPT0) only  */
  };

  /**
   * USB Control register
   */
  struct USBCTRL
  : public reg< uint8_t, base_addr + 0x100, rw, 0xC0 >
  {
    using type = reg< uint8_t, base_addr + 0x100, rw, 0xC0 >;

    using UARTSEL   = regbits< type,  4,  1 >;  /**< Selects USB signals to be used as UART signals.     */
    using UARTCHLS  = regbits< type,  5,  1 >;  /**< UART Signal Channel Select                          */
    using PDE       = regbits< type,  6,  1 >;  /**< Enables the weak pulldowns on the USB transceiver.  */
    using SUSP      = regbits< type,  7,  1 >;  /**< Places the USB transceiver into the suspend state.  */
  };

  /**
   * USB OTG Observe register
   */
  struct OBSERVE
  : public reg< uint8_t, base_addr + 0x104, ro, 0x50 >
  {
    using type = reg< uint8_t, base_addr + 0x104, ro, 0x50 >;

    using DMPD  = regbits< type,  4,  1 >;  /**< Provides observability of the D- Pulldown enable at the USB transceiver.  */
    using DPPD  = regbits< type,  6,  1 >;  /**< Provides observability of the D+ Pulldown enable at the USB transceiver.  */
    using DPPU  = regbits< type,  7,  1 >;  /**< Provides observability of the D+ Pullup enable at the USB transceiver.    */
  };

  /**
   * USB OTG Control register
   */
  struct CONTROL
  : public reg< uint8_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x108, rw, 0 >;

    using DPPULLUPNONOTG  = regbits< type,  4,  1 >;  /**< Provides control of the DP Pullup in USBOTG, if USB is configured in non-OTG device mode.  */
  };

  /**
   * USB Transceiver Control register 0
   */
  struct USBTRC0
  : public reg< uint8_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x10c, rw, 0 >;

    using USB_RESUME_INT        = regbits< type,  0,  1 >;  /**< USB Asynchronous Interrupt                    */
    using SYNC_DET              = regbits< type,  1,  1 >;  /**< Synchronous USB Interrupt Detect              */
    using USB_CLK_RECOVERY_INT  = regbits< type,  2,  1 >;  /**< Combined USB Clock Recovery interrupt status  */
    using VREDG_DET             = regbits< type,  3,  1 >;  /**< VREGIN Rising Edge Interrupt Detect           */
    using VFEDG_DET             = regbits< type,  4,  1 >;  /**< VREGIN Falling Edge Interrupt Detect          */
    using USBRESMEN             = regbits< type,  5,  1 >;  /**< Asynchronous Resume Interrupt Enable          */
    using USBRESET              = regbits< type,  7,  1 >;  /**< USB Reset                                     */
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

  /**
   * Miscellaneous Control register
   */
  struct MISCCTRL
  : public reg< uint8_t, base_addr + 0x12c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x12c, rw, 0 >;

    using SOFDYNTHLD    = regbits< type,  0,  1 >;  /**< Dynamic SOF Threshold Compare mode             */
    using SOFBUSSET     = regbits< type,  1,  1 >;  /**< SOF_TOK Interrupt Generation Mode Select       */
    using OWNERRISODIS  = regbits< type,  2,  1 >;  /**< OWN Error Detect for ISO IN / ISO OUT Disable  */
    using VREDG_EN      = regbits< type,  3,  1 >;  /**< VREGIN Rising Edge Interrupt Enable            */
    using VFEDG_EN      = regbits< type,  4,  1 >;  /**< VREGIN Falling Edge Interrupt Enable           */
    using STL_ADJ_EN    = regbits< type,  7,  1 >;  /**< USB Peripheral mode Stall Adjust Enable        */
  };

  /**
   * Peripheral mode stall disable for endpoints 7 to 0 in IN direction
   */
  struct STALL_IL_DIS
  : public reg< uint8_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x130, rw, 0 >;

    using STALL_I_DIS0  = regbits< type,  0,  1 >;  /**< Disable endpoint 0 IN direction.  */
    using STALL_I_DIS1  = regbits< type,  1,  1 >;  /**< Disable endpoint 1 IN direction.  */
    using STALL_I_DIS2  = regbits< type,  2,  1 >;  /**< Disable endpoint 2 IN direction.  */
    using STALL_I_DIS3  = regbits< type,  3,  1 >;  /**< Disable endpoint 3 IN direction.  */
    using STALL_I_DIS4  = regbits< type,  4,  1 >;  /**< Disable endpoint 4 IN direction.  */
    using STALL_I_DIS5  = regbits< type,  5,  1 >;  /**< Disable endpoint 5 IN direction.  */
    using STALL_I_DIS6  = regbits< type,  6,  1 >;  /**< Disable endpoint 6 IN direction.  */
    using STALL_I_DIS7  = regbits< type,  7,  1 >;  /**< Disable endpoint 7 IN direction.  */
  };

  /**
   * Peripheral mode stall disable for endpoints 15 to 8 in IN direction
   */
  struct STALL_IH_DIS
  : public reg< uint8_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x134, rw, 0 >;

    using STALL_I_DIS8   = regbits< type,  0,  1 >;  /**< Disable endpoint 8 IN direction.   */
    using STALL_I_DIS9   = regbits< type,  1,  1 >;  /**< Disable endpoint 9 IN direction.   */
    using STALL_I_DIS10  = regbits< type,  2,  1 >;  /**< Disable endpoint 10 IN direction.  */
    using STALL_I_DIS11  = regbits< type,  3,  1 >;  /**< Disable endpoint 11 IN direction.  */
    using STALL_I_DIS12  = regbits< type,  4,  1 >;  /**< Disable endpoint 12 IN direction.  */
    using STALL_I_DIS13  = regbits< type,  5,  1 >;  /**< Disable endpoint 13 IN direction.  */
    using STALL_I_DIS14  = regbits< type,  6,  1 >;  /**< Disable endpoint 14 IN direction.  */
    using STALL_I_DIS15  = regbits< type,  7,  1 >;  /**< Disable endpoint 15 IN direction.  */
  };

  /**
   * Peripheral mode stall disable for endpoints 7 to 0 in OUT direction
   */
  struct STALL_OL_DIS
  : public reg< uint8_t, base_addr + 0x138, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x138, rw, 0 >;

    using STALL_O_DIS0  = regbits< type,  0,  1 >;  /**< Disable endpoint 0 OUT direction.  */
    using STALL_O_DIS1  = regbits< type,  1,  1 >;  /**< Disable endpoint 1 OUT direction.  */
    using STALL_O_DIS2  = regbits< type,  2,  1 >;  /**< Disable endpoint 2 OUT direction.  */
    using STALL_O_DIS3  = regbits< type,  3,  1 >;  /**< Disable endpoint 3 OUT direction.  */
    using STALL_O_DIS4  = regbits< type,  4,  1 >;  /**< Disable endpoint 4 OUT direction.  */
    using STALL_O_DIS5  = regbits< type,  5,  1 >;  /**< Disable endpoint 5 OUT direction.  */
    using STALL_O_DIS6  = regbits< type,  6,  1 >;  /**< Disable endpoint 6 OUT direction.  */
    using STALL_O_DIS7  = regbits< type,  7,  1 >;  /**< Disable endpoint 7 OUT direction.  */
  };

  /**
   * Peripheral mode stall disable for endpoints 15 to 8 in OUT direction
   */
  struct STALL_OH_DIS
  : public reg< uint8_t, base_addr + 0x13c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x13c, rw, 0 >;

    using STALL_O_DIS8   = regbits< type,  0,  1 >;  /**< Disable endpoint 8 OUT direction.   */
    using STALL_O_DIS9   = regbits< type,  1,  1 >;  /**< Disable endpoint 9 OUT direction.   */
    using STALL_O_DIS10  = regbits< type,  2,  1 >;  /**< Disable endpoint 10 OUT direction.  */
    using STALL_O_DIS11  = regbits< type,  3,  1 >;  /**< Disable endpoint 11 OUT direction.  */
    using STALL_O_DIS12  = regbits< type,  4,  1 >;  /**< Disable endpoint 12 OUT direction.  */
    using STALL_O_DIS13  = regbits< type,  5,  1 >;  /**< Disable endpoint 13 OUT direction.  */
    using STALL_O_DIS14  = regbits< type,  6,  1 >;  /**< Disable endpoint 14 OUT direction.  */
    using STALL_O_DIS15  = regbits< type,  7,  1 >;  /**< Disable endpoint 15 OUT direction.  */
  };

  /**
   * USB Clock recovery control
   */
  struct CLK_RECOVER_CTRL
  : public reg< uint8_t, base_addr + 0x140, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x140, rw, 0 >;

    using RESTART_IFRTRIM_EN     = regbits< type,  5,  1 >;  /**< Restart from IFR trim value         */
    using RESET_RESUME_ROUGH_EN  = regbits< type,  6,  1 >;  /**< Reset/resume to rough phase enable  */
    using CLOCK_RECOVER_EN       = regbits< type,  7,  1 >;  /**< Crystal-less USB enable             */
  };

  /**
   * IRC48M oscillator enable register
   */
  struct CLK_RECOVER_IRC_EN
  : public reg< uint8_t, base_addr + 0x144, rw, 0x1 >
  {
    using type = reg< uint8_t, base_addr + 0x144, rw, 0x1 >;

    using REG_EN  = regbits< type,  0,  1 >;  /**< IRC48M regulator enable This bit is used to enable the local analog regulator for IRC48M module             */
    using IRC_EN  = regbits< type,  1,  1 >;  /**< IRC48M enable This bit is used to enable the on-chip IRC48M module to generate clocks for crystal-less USB  */
  };

  /**
   * Clock recovery combined interrupt enable
   */
  struct CLK_RECOVER_INT_EN
  : public reg< uint8_t, base_addr + 0x154, rw, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x154, rw, 0x10 >;

    using OVF_ERROR_EN  = regbits< type,  4,  1 >;  /**< Determines whether OVF_ERROR condition signal is used in generation of USB_CLK_RECOVERY_INT.  */
  };

  /**
   * Clock recovery separated interrupt status
   */
  struct CLK_RECOVER_INT_STATUS
  : public reg< uint8_t, base_addr + 0x15c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x15c, rw, 0 >;

    using OVF_ERROR  = regbits< type,  4,  1 >;  /**< Indicates that the USB clock recovery algorithm has detected that the frequency trim adjustment needed for the IRC48M output clock is outside the available TRIM_FINE adjustment range for the IRC48M module  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USB0_HPP_INCLUDED