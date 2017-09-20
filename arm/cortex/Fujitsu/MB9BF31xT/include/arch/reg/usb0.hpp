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
//  Import from CMSIS-SVD: "Fujitsu/MB9BF31xT.svd"
//
//  name: MB9BF31xT
//  version: 1.8
//  description: MB9BF31xT
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
 * USB0 Function
 */
struct USB0
{
  static constexpr reg_addr_t base_addr = 0x40040000;

  /**
   * UDC Control Register
   */
  struct UDCC
  : public reg< uint16_t, base_addr + 0x2120, rw, 0x00A0 >
  {
    using type = reg< uint16_t, base_addr + 0x2120, rw, 0x00A0 >;

    using RST        = regbits< type,  7,  1 >;  /**< Function Reset bit                         */
    using RESUM      = regbits< type,  6,  1 >;  /**< Resume Setting bit                         */
    using HCONX      = regbits< type,  5,  1 >;  /**< Host Connection bit                        */
    using USTP       = regbits< type,  4,  1 >;  /**< USB Operating Clock Stop bit               */
    using STALCLREN  = regbits< type,  3,  1 >;  /**< Endpoint 1 to 5 STAL bit Clear Select bit  */
    using RFBK       = regbits< type,  1,  1 >;  /**< Data Toggle Mode Select bit                */
    using PWC        = regbits< type,  0,  1 >;  /**< Power Control bit                          */
  };

  /**
   * EP0 Control Register
   */
  struct EP0C
  : public reg< uint16_t, base_addr + 0x2124, rw, 0x0040 >
  {
    using type = reg< uint16_t, base_addr + 0x2124, rw, 0x0040 >;

    using STAL  = regbits< type,  9,  1 >;  /**< Endpoint 0 Stall Setting bit         */
    using PKS0  = regbits< type,  0,  7 >;  /**< Packet Size Endpoint 0 Setting bits  */
  };

  /**
   * EP1 Control Register
   */
  struct EP1C
  : public reg< uint16_t, base_addr + 0x2128, rw, 0x6100 >
  {
    using type = reg< uint16_t, base_addr + 0x2128, rw, 0x6100 >;

    using EPEN  = regbits< type, 15,  1 >;  /**< Endpoint Enable bit                     */
    using TYPE  = regbits< type, 13,  2 >;  /**< Endpoint Transfer Type Select bits      */
    using DIR   = regbits< type, 12,  1 >;  /**< Endpoint Transfer Direction Select bit  */
    using DMAE  = regbits< type, 11,  1 >;  /**< DMA Automatic Transfer Enable bit       */
    using NULE  = regbits< type, 10,  1 >;  /**< Null Automatic Transfer Enable bit      */
    using STAL  = regbits< type,  9,  1 >;  /**< Endpoint Stall Setting bit              */
    using PKS   = regbits< type,  0,  9 >;  /**< Packet Size Setting bits                */
  };

  /**
   * EP2 Control Register
   */
  struct EP2C
  : public reg< uint16_t, base_addr + 0x212c, rw, 0x6040 >
  {
    using type = reg< uint16_t, base_addr + 0x212c, rw, 0x6040 >;

    using EPEN  = regbits< type, 15,  1 >;  /**< Endpoint Enable bit                     */
    using TYPE  = regbits< type, 13,  2 >;  /**< Endpoint Transfer Type Select bits      */
    using DIR   = regbits< type, 12,  1 >;  /**< Endpoint Transfer Direction Select bit  */
    using DMAE  = regbits< type, 11,  1 >;  /**< DMA Automatic Transfer Enable bit       */
    using NULE  = regbits< type, 10,  1 >;  /**< Null Automatic Transfer Enable bit      */
    using STAL  = regbits< type,  9,  1 >;  /**< Endpoint Stall Setting bit              */
    using PKS   = regbits< type,  0,  7 >;  /**< Packet Size Setting bits                */
  };

  /**
   * EP3 Control Register
   *
   * (derived from: EP2C)
   */
  struct EP3C
  : public reg< uint32_t, base_addr + 0x2130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EP4 Control Register
   *
   * (derived from: EP2C)
   */
  struct EP4C
  : public reg< uint32_t, base_addr + 0x2134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EP5 Control Register
   *
   * (derived from: EP2C)
   */
  struct EP5C
  : public reg< uint32_t, base_addr + 0x2138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Time Stamp Register
   */
  struct TMSP
  : public reg< uint16_t, base_addr + 0x213c, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x213c, ro, 0x0000 >;

    // fixme: Field name equals parent register name: TMSP
    using TMSP_ = regbits< type,  0, 11 >;  /**< Time Stamp bits  */
  };

  /**
   * UDC Status Register
   */
  struct UDCS
  : public reg< uint8_t, base_addr + 0x2140, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2140, rw, 0x00 >;

    using SUSP  = regbits< type,  5,  1 >;  /**< Suspend detection bit        */
    using SOF   = regbits< type,  4,  1 >;  /**< SOF Detection bit            */
    using BRST  = regbits< type,  3,  1 >;  /**< Bus Reset Detection bit      */
    using WKUP  = regbits< type,  2,  1 >;  /**< Wake-up Detection bit        */
    using SETP  = regbits< type,  1,  1 >;  /**< Setup Stage Detection bit    */
    using CONF  = regbits< type,  0,  1 >;  /**< Configuration Detection bit  */
  };

  /**
   * UDC Interrupt Enable Register
   */
  struct UDCIE
  : public reg< uint8_t, base_addr + 0x2141, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2141, rw, 0x00 >;

    using SUSPIE  = regbits< type,  5,  1 >;  /**< Suspend Interrupt Enable bit         */
    using SOFIE   = regbits< type,  4,  1 >;  /**< SOF Reception Interrupt Enable bit   */
    using BRSTIE  = regbits< type,  3,  1 >;  /**< Bus Reset Enable bit                 */
    using WKUPIE  = regbits< type,  2,  1 >;  /**< Wake-up Interrupt Enable bit         */
    using CONFN   = regbits< type,  1,  1 >;  /**< Configuration Number Indication bit  */
    using CONFIE  = regbits< type,  0,  1 >;  /**< Configuration Interrupt Enable bit   */
  };

  /**
   * EP0I Status Register
   */
  struct EP0IS
  : public reg< uint16_t, base_addr + 0x2144, rw, 0x8400 >
  {
    using type = reg< uint16_t, base_addr + 0x2144, rw, 0x8400 >;

    using BFINI   = regbits< type, 15,  1 >;  /**< Send Buffer Initialization bit           */
    using DRQIIE  = regbits< type, 14,  1 >;  /**< Send Data Interrupt Enable bit           */
    using DRQI    = regbits< type, 10,  1 >;  /**< Send/Receive Data Interrupt Request bit  */
  };

  /**
   * EP0O Status Register
   */
  struct EP0OS
  : public reg< uint16_t, base_addr + 0x2148, rw, 0x8000 >
  {
    using type = reg< uint16_t, base_addr + 0x2148, rw, 0x8000 >;

    using BFINI   = regbits< type, 15,  1 >;  /**< Receive Buffer Initialization bit   */
    using DRQOIE  = regbits< type, 14,  1 >;  /**< Receive Data Interrupt Enable bit   */
    using SPKIE   = regbits< type, 13,  1 >;  /**< Short Packet Interrupt Enable bit   */
    using DRQO    = regbits< type, 10,  1 >;  /**< Receive Data Interrupt Request bit  */
    using SPK     = regbits< type,  9,  1 >;  /**< Short Packet Interrupt Request bit  */
    using SIZE    = regbits< type,  0,  7 >;  /**< Packet Size Indication bit          */
  };

  /**
   * EP1 Status Register
   */
  struct EP1S
  : public reg< uint16_t, base_addr + 0x214c, rw, 0x8000 >
  {
    using type = reg< uint16_t, base_addr + 0x214c, rw, 0x8000 >;

    using BFINI  = regbits< type, 15,  1 >;  /**< Send/Receive Buffer Initialization bit  */
    using DRQIE  = regbits< type, 14,  1 >;  /**< Packet Transfer Interrupt Enable bit    */
    using SPKIE  = regbits< type, 13,  1 >;  /**< Short Packet Interrupt Enable bit       */
    using BUSY   = regbits< type, 11,  1 >;  /**< Busy Flag bit                           */
    using DRQ    = regbits< type, 10,  1 >;  /**< Packet Transfer Interrupt Request bit   */
    using SPK    = regbits< type,  9,  1 >;  /**< Short Packet Interrupt Request bit      */
    using SIZE   = regbits< type,  0,  9 >;  /**< packet SIZE                             */
  };

  /**
   * EP2 Status Register
   */
  struct EP2S
  : public reg< uint16_t, base_addr + 0x2150, rw, 0x8000 >
  {
    using type = reg< uint16_t, base_addr + 0x2150, rw, 0x8000 >;

    using BFINI  = regbits< type, 15,  1 >;  /**< Send/Receive Buffer Initialization bit  */
    using DRQIE  = regbits< type, 14,  1 >;  /**< Packet Transfer Interrupt Enable bit    */
    using SPKIE  = regbits< type, 13,  1 >;  /**< Short Packet Interrupt Enable bit       */
    using BUSY   = regbits< type, 11,  1 >;  /**< Busy Flag bit                           */
    using DRQ    = regbits< type, 10,  1 >;  /**< Packet Transfer Interrupt Request bit   */
    using SPK    = regbits< type,  9,  1 >;  /**< Short Packet Interrupt Request bit      */
    using SIZE   = regbits< type,  0,  7 >;  /**< packet SIZE                             */
  };

  /**
   * EP3 Status Register
   *
   * (derived from: EP2S)
   */
  struct EP3S
  : public reg< uint32_t, base_addr + 0x2154, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EP4 Status Register
   *
   * (derived from: EP2S)
   */
  struct EP4S
  : public reg< uint32_t, base_addr + 0x2158, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EP5 Status Register
   *
   * (derived from: EP2S)
   */
  struct EP5S
  : public reg< uint32_t, base_addr + 0x215c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EP0 Data Register
   */
  struct EP0DT
  : public reg< uint16_t, base_addr + 0x2160, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x2160, rw, 0x0000 >;

    using BFDT  = regbits< type,  0, 16 >;  /**< Endpoint Send/Receive Buffer Data  */
  };

  /**
   * EP1 Data Register
   *
   * (derived from: EP0DT)
   */
  struct EP1DT
  : public reg< uint32_t, base_addr + 0x2164, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EP2 Data Register
   *
   * (derived from: EP0DT)
   */
  struct EP2DT
  : public reg< uint32_t, base_addr + 0x2168, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EP3 Data Register
   *
   * (derived from: EP0DT)
   */
  struct EP3DT
  : public reg< uint32_t, base_addr + 0x216c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EP4 Data Register
   *
   * (derived from: EP0DT)
   */
  struct EP4DT
  : public reg< uint32_t, base_addr + 0x2170, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * EP5 Data Register
   *
   * (derived from: EP0DT)
   */
  struct EP5DT
  : public reg< uint32_t, base_addr + 0x2174, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Host Control Register
   */
  struct HCNT
  : public reg< uint16_t, base_addr + 0x2100, rw, 0x0100 >
  {
    using type = reg< uint16_t, base_addr + 0x2100, rw, 0x0100 >;

    using SOFSTEP  = regbits< type, 10,  1 >;  /**< SOF interrupt occurrence selection bit               */
    using CANCEL   = regbits< type,  9,  1 >;  /**< token cancellation enable bit                        */
    using RETRY    = regbits< type,  8,  1 >;  /**< retry enable bit                                     */
    using RWKIRE   = regbits< type,  7,  1 >;  /**< resume interrupt enable bit                          */
    using URIRE    = regbits< type,  6,  1 >;  /**< bus reset interrupt enable bit                       */
    using CMPIRE   = regbits< type,  5,  1 >;  /**< token completion interrupt enable bit                */
    using CNNIRE   = regbits< type,  4,  1 >;  /**< device connection detection interrupt enable bit     */
    using DIRE     = regbits< type,  3,  1 >;  /**< device disconnection detection interrupt enable bit  */
    using SOFIRE   = regbits< type,  2,  1 >;  /**< SOF interrupt enable bit                             */
    using URST     = regbits< type,  1,  1 >;  /**< bus reset bit                                        */
    using HOST     = regbits< type,  0,  1 >;  /**< host mode bit                                        */
  };

  /**
   * Host Interrupt Register
   */
  struct HIRQ
  : public reg< uint8_t, base_addr + 0x2104, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2104, rw, 0x00 >;

    using TCAN    = regbits< type,  7,  1 >;  /**< token cancellation flag              */
    using RWKIRQ  = regbits< type,  5,  1 >;  /**< remote Wake-up end flag              */
    using URIRQ   = regbits< type,  4,  1 >;  /**< bus reset end flag                   */
    using CMPIRQ  = regbits< type,  3,  1 >;  /**< token completion flag                */
    using CNNIRQ  = regbits< type,  2,  1 >;  /**< device connection detection flag     */
    using DIRQ    = regbits< type,  1,  1 >;  /**< device disconnection detection flag  */
    using SOFIRQ  = regbits< type,  0,  1 >;  /**< SOF starting flag                    */
  };

  /**
   * Host Error Status Register
   */
  struct HERR
  : public reg< uint8_t, base_addr + 0x2105, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x2105, rw, 0x03 >;

    using LSTSOF  = regbits< type,  7,  1 >;  /**< lost SOF flag           */
    using RERR    = regbits< type,  6,  1 >;  /**< receive error flag      */
    using TOUT    = regbits< type,  5,  1 >;  /**< timeout flag            */
    using CRC     = regbits< type,  4,  1 >;  /**< CRC error flag          */
    using TGERR   = regbits< type,  3,  1 >;  /**< toggle error flag       */
    using STUFF   = regbits< type,  2,  1 >;  /**< stuffing error flag     */
    using HS      = regbits< type,  0,  2 >;  /**< handshake status flags  */
  };

  /**
   * Host Status Register
   */
  struct HSTATE
  : public reg< uint8_t, base_addr + 0x2108, rw, 0x12 >
  {
    using type = reg< uint8_t, base_addr + 0x2108, rw, 0x12 >;

    using ALIVE    = regbits< type,  5,  1 >;  /**< specify the keep-alive function in the low-speed mode  */
    using CLKSEL   = regbits< type,  4,  1 >;  /**< USB operation clock selection bit                      */
    using SOFBUSY  = regbits< type,  3,  1 >;  /**< SOF busy flag                                          */
    using SUSP     = regbits< type,  2,  1 >;  /**< suspend setting bit                                    */
    using TMODE    = regbits< type,  1,  1 >;  /**< transmission mode flag                                 */
    using CSTAT    = regbits< type,  0,  1 >;  /**< connection status flag                                 */
  };

  /**
   * SOF Interrupt Frame Compare Register
   */
  struct HFCOMP
  : public reg< uint8_t, base_addr + 0x2109, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2109, rw, 0x00 >;

    using FRAMECOMP  = regbits< type,  0,  8 >;  /**< frame compare data  */
  };

  /**
   * Retry Timer Setup Register
   */
  struct HRTIMER
  : public reg< uint16_t, base_addr + 0x210c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x210c, rw, 0x0000 >;

    using RTIMER1  = regbits< type,  8,  8 >;  /**< retry timer setting 1  */
    using RTIMER0  = regbits< type,  0,  8 >;  /**< retry timer setting 0  */
  };

  /**
   * Retry Timer Setup Register 2
   */
  struct HRTIMER2
  : public reg< uint8_t, base_addr + 0x2110, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2110, rw, 0x00 >;

    using RTIMER2  = regbits< type,  0,  2 >;  /**< retry timer setting 2  */
  };

  /**
   * Host Address Register
   */
  struct HADR
  : public reg< uint8_t, base_addr + 0x2111, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2111, rw, 0x00 >;

    using ADDRESS  = regbits< type,  0,  7 >;  /**< Host Address  */
  };

  /**
   * EOF Setup Register
   */
  struct HEOF
  : public reg< uint16_t, base_addr + 0x2114, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x2114, rw, 0x0000 >;

    using EOF1  = regbits< type,  8,  6 >;  /**< End Frame 1  */
    using EOF0  = regbits< type,  0,  8 >;  /**< End Frame 0  */
  };

  /**
   * Frame Setup Register
   */
  struct HFRAME
  : public reg< uint16_t, base_addr + 0x2118, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x2118, rw, 0x0000 >;

    using FRAME1  = regbits< type,  8,  3 >;  /**< Frame Setup 1  */
    using FRAME0  = regbits< type,  0,  8 >;  /**< Frame Setup 0  */
  };

  /**
   * Host Token Endpoint Register
   */
  struct HTOKEN
  : public reg< uint8_t, base_addr + 0x211c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x211c, rw, 0x00 >;

    using TGGL   = regbits< type,  7,  1 >;  /**< toggle bit         */
    using TKNEN  = regbits< type,  4,  3 >;  /**< token enable bits  */
    using ENDPT  = regbits< type,  0,  4 >;  /**< endpoint bits      */
  };
};
} // namespace mptl

#endif // ARCH_REG_USB0_HPP_INCLUDED
