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
//  Import from CMSIS-SVD: "Spansion/MB9BF52xT.svd"
//
//  name: MB9BF52xT
//  version: 1.0
//  description: MB9BF52xT
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
 * peripheral USB0
 */
struct USB0
{
  static constexpr reg_addr_t base_addr = 0x40040000;

  /**
   * register UDCC
   */
  struct UDCC
  : public reg< uint16_t, base_addr + 0x2120, rw, 0x00A0 >
  {
    using type = reg< uint16_t, base_addr + 0x2120, rw, 0x00A0 >;

    using RST        = regbits< type,  7,  1 >;  /**< bitfield RST        */
    using RESUM      = regbits< type,  6,  1 >;  /**< bitfield RESUM      */
    using HCONX      = regbits< type,  5,  1 >;  /**< bitfield HCONX      */
    using USTP       = regbits< type,  4,  1 >;  /**< bitfield USTP       */
    using STALCLREN  = regbits< type,  3,  1 >;  /**< bitfield STALCLREN  */
    using RFBK       = regbits< type,  1,  1 >;  /**< bitfield RFBK       */
    using PWC        = regbits< type,  0,  1 >;  /**< bitfield PWC        */
  };

  /**
   * register EP0C
   */
  struct EP0C
  : public reg< uint16_t, base_addr + 0x2124, rw, 0x0040 >
  {
    using type = reg< uint16_t, base_addr + 0x2124, rw, 0x0040 >;

    using STAL  = regbits< type,  9,  1 >;  /**< bitfield STAL  */
    using PKS0  = regbits< type,  0,  7 >;  /**< bitfield PKS0  */
  };

  /**
   * register EP1C
   */
  struct EP1C
  : public reg< uint16_t, base_addr + 0x2128, rw, 0x6100 >
  {
    using type = reg< uint16_t, base_addr + 0x2128, rw, 0x6100 >;

    using EPEN  = regbits< type, 15,  1 >;  /**< bitfield EPEN  */
    using TYPE  = regbits< type, 13,  2 >;  /**< bitfield TYPE  */
    using DIR   = regbits< type, 12,  1 >;  /**< bitfield DIR   */
    using DMAE  = regbits< type, 11,  1 >;  /**< bitfield DMAE  */
    using NULE  = regbits< type, 10,  1 >;  /**< bitfield NULE  */
    using STAL  = regbits< type,  9,  1 >;  /**< bitfield STAL  */
    using PKS   = regbits< type,  0,  9 >;  /**< bitfield PKS   */
  };

  /**
   * register EP2C
   */
  struct EP2C
  : public reg< uint16_t, base_addr + 0x212c, rw, 0x6040 >
  {
    using type = reg< uint16_t, base_addr + 0x212c, rw, 0x6040 >;

    using EPEN  = regbits< type, 15,  1 >;  /**< bitfield EPEN  */
    using TYPE  = regbits< type, 13,  2 >;  /**< bitfield TYPE  */
    using DIR   = regbits< type, 12,  1 >;  /**< bitfield DIR   */
    using DMAE  = regbits< type, 11,  1 >;  /**< bitfield DMAE  */
    using NULE  = regbits< type, 10,  1 >;  /**< bitfield NULE  */
    using STAL  = regbits< type,  9,  1 >;  /**< bitfield STAL  */
    using PKS   = regbits< type,  0,  7 >;  /**< bitfield PKS   */
  };

  /**
   * register EP3C
   *
   * (derived from: EP2C)
   */
  struct EP3C
  : public reg< uint32_t, base_addr + 0x2130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register EP4C
   *
   * (derived from: EP2C)
   */
  struct EP4C
  : public reg< uint32_t, base_addr + 0x2134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register EP5C
   *
   * (derived from: EP2C)
   */
  struct EP5C
  : public reg< uint32_t, base_addr + 0x2138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register TMSP
   */
  struct TMSP
  : public reg< uint16_t, base_addr + 0x213c, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x213c, ro, 0x0000 >;

    // fixme: Field name equals parent register name: TMSP
    using TMSP_ = regbits< type,  0, 11 >;  /**< bitfield TMSP  */
  };

  /**
   * register UDCS
   */
  struct UDCS
  : public reg< uint8_t, base_addr + 0x2140, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2140, rw, 0x00 >;

    using SUSP  = regbits< type,  5,  1 >;  /**< bitfield SUSP  */
    using SOF   = regbits< type,  4,  1 >;  /**< bitfield SOF   */
    using BRST  = regbits< type,  3,  1 >;  /**< bitfield BRST  */
    using WKUP  = regbits< type,  2,  1 >;  /**< bitfield WKUP  */
    using SETP  = regbits< type,  1,  1 >;  /**< bitfield SETP  */
    using CONF  = regbits< type,  0,  1 >;  /**< bitfield CONF  */
  };

  /**
   * register UDCIE
   */
  struct UDCIE
  : public reg< uint8_t, base_addr + 0x2141, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2141, rw, 0x00 >;

    using SUSPIE  = regbits< type,  5,  1 >;  /**< bitfield SUSPIE  */
    using SOFIE   = regbits< type,  4,  1 >;  /**< bitfield SOFIE   */
    using BRSTIE  = regbits< type,  3,  1 >;  /**< bitfield BRSTIE  */
    using WKUPIE  = regbits< type,  2,  1 >;  /**< bitfield WKUPIE  */
    using CONFN   = regbits< type,  1,  1 >;  /**< bitfield CONFN   */
    using CONFIE  = regbits< type,  0,  1 >;  /**< bitfield CONFIE  */
  };

  /**
   * register EP0IS
   */
  struct EP0IS
  : public reg< uint16_t, base_addr + 0x2144, rw, 0x8400 >
  {
    using type = reg< uint16_t, base_addr + 0x2144, rw, 0x8400 >;

    using BFINI   = regbits< type, 15,  1 >;  /**< bitfield BFINI   */
    using DRQIIE  = regbits< type, 14,  1 >;  /**< bitfield DRQIIE  */
    using DRQI    = regbits< type, 10,  1 >;  /**< bitfield DRQI    */
  };

  /**
   * register EP0OS
   */
  struct EP0OS
  : public reg< uint16_t, base_addr + 0x2148, rw, 0x8000 >
  {
    using type = reg< uint16_t, base_addr + 0x2148, rw, 0x8000 >;

    using BFINI   = regbits< type, 15,  1 >;  /**< bitfield BFINI   */
    using DRQOIE  = regbits< type, 14,  1 >;  /**< bitfield DRQOIE  */
    using SPKIE   = regbits< type, 13,  1 >;  /**< bitfield SPKIE   */
    using DRQO    = regbits< type, 10,  1 >;  /**< bitfield DRQO    */
    using SPK     = regbits< type,  9,  1 >;  /**< bitfield SPK     */
    using SIZE    = regbits< type,  0,  7 >;  /**< bitfield SIZE    */
  };

  /**
   * register EP1S
   */
  struct EP1S
  : public reg< uint16_t, base_addr + 0x214c, rw, 0x8000 >
  {
    using type = reg< uint16_t, base_addr + 0x214c, rw, 0x8000 >;

    using BFINI  = regbits< type, 15,  1 >;  /**< bitfield BFINI  */
    using DRQIE  = regbits< type, 14,  1 >;  /**< bitfield DRQIE  */
    using SPKIE  = regbits< type, 13,  1 >;  /**< bitfield SPKIE  */
    using BUSY   = regbits< type, 11,  1 >;  /**< bitfield BUSY   */
    using DRQ    = regbits< type, 10,  1 >;  /**< bitfield DRQ    */
    using SPK    = regbits< type,  9,  1 >;  /**< bitfield SPK    */
    using SIZE   = regbits< type,  0,  9 >;  /**< bitfield SIZE   */
  };

  /**
   * register EP2S
   */
  struct EP2S
  : public reg< uint16_t, base_addr + 0x2150, rw, 0x8000 >
  {
    using type = reg< uint16_t, base_addr + 0x2150, rw, 0x8000 >;

    using BFINI  = regbits< type, 15,  1 >;  /**< bitfield BFINI  */
    using DRQIE  = regbits< type, 14,  1 >;  /**< bitfield DRQIE  */
    using SPKIE  = regbits< type, 13,  1 >;  /**< bitfield SPKIE  */
    using BUSY   = regbits< type, 11,  1 >;  /**< bitfield BUSY   */
    using DRQ    = regbits< type, 10,  1 >;  /**< bitfield DRQ    */
    using SPK    = regbits< type,  9,  1 >;  /**< bitfield SPK    */
    using SIZE   = regbits< type,  0,  7 >;  /**< bitfield SIZE   */
  };

  /**
   * register EP3S
   *
   * (derived from: EP2S)
   */
  struct EP3S
  : public reg< uint32_t, base_addr + 0x2154, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register EP4S
   *
   * (derived from: EP2S)
   */
  struct EP4S
  : public reg< uint32_t, base_addr + 0x2158, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register EP5S
   *
   * (derived from: EP2S)
   */
  struct EP5S
  : public reg< uint32_t, base_addr + 0x215c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register EP0DT
   */
  struct EP0DT
  : public reg< uint16_t, base_addr + 0x2160, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x2160, rw, 0x0000 >;

    using BFDT  = regbits< type,  0, 16 >;  /**< bitfield BFDT  */
  };

  /**
   * register EP1DT
   *
   * (derived from: EP0DT)
   */
  struct EP1DT
  : public reg< uint32_t, base_addr + 0x2164, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register EP2DT
   *
   * (derived from: EP0DT)
   */
  struct EP2DT
  : public reg< uint32_t, base_addr + 0x2168, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register EP3DT
   *
   * (derived from: EP0DT)
   */
  struct EP3DT
  : public reg< uint32_t, base_addr + 0x216c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register EP4DT
   *
   * (derived from: EP0DT)
   */
  struct EP4DT
  : public reg< uint32_t, base_addr + 0x2170, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register EP5DT
   *
   * (derived from: EP0DT)
   */
  struct EP5DT
  : public reg< uint32_t, base_addr + 0x2174, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register HCNT
   */
  struct HCNT
  : public reg< uint16_t, base_addr + 0x2100, rw, 0x0100 >
  {
    using type = reg< uint16_t, base_addr + 0x2100, rw, 0x0100 >;

    using SOFSTEP  = regbits< type, 10,  1 >;  /**< bitfield SOFSTEP  */
    using CANCEL   = regbits< type,  9,  1 >;  /**< bitfield CANCEL   */
    using RETRY    = regbits< type,  8,  1 >;  /**< bitfield RETRY    */
    using RWKIRE   = regbits< type,  7,  1 >;  /**< bitfield RWKIRE   */
    using URIRE    = regbits< type,  6,  1 >;  /**< bitfield URIRE    */
    using CMPIRE   = regbits< type,  5,  1 >;  /**< bitfield CMPIRE   */
    using CNNIRE   = regbits< type,  4,  1 >;  /**< bitfield CNNIRE   */
    using DIRE     = regbits< type,  3,  1 >;  /**< bitfield DIRE     */
    using SOFIRE   = regbits< type,  2,  1 >;  /**< bitfield SOFIRE   */
    using URST     = regbits< type,  1,  1 >;  /**< bitfield URST     */
    using HOST     = regbits< type,  0,  1 >;  /**< bitfield HOST     */
  };

  /**
   * register HIRQ
   */
  struct HIRQ
  : public reg< uint8_t, base_addr + 0x2104, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2104, rw, 0x00 >;

    using TCAN    = regbits< type,  7,  1 >;  /**< bitfield TCAN    */
    using RWKIRQ  = regbits< type,  5,  1 >;  /**< bitfield RWKIRQ  */
    using URIRQ   = regbits< type,  4,  1 >;  /**< bitfield URIRQ   */
    using CMPIRQ  = regbits< type,  3,  1 >;  /**< bitfield CMPIRQ  */
    using CNNIRQ  = regbits< type,  2,  1 >;  /**< bitfield CNNIRQ  */
    using DIRQ    = regbits< type,  1,  1 >;  /**< bitfield DIRQ    */
    using SOFIRQ  = regbits< type,  0,  1 >;  /**< bitfield SOFIRQ  */
  };

  /**
   * register HERR
   */
  struct HERR
  : public reg< uint8_t, base_addr + 0x2105, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x2105, rw, 0x03 >;

    using LSTSOF  = regbits< type,  7,  1 >;  /**< bitfield LSTSOF  */
    using RERR    = regbits< type,  6,  1 >;  /**< bitfield RERR    */
    using TOUT    = regbits< type,  5,  1 >;  /**< bitfield TOUT    */
    using CRC     = regbits< type,  4,  1 >;  /**< bitfield CRC     */
    using TGERR   = regbits< type,  3,  1 >;  /**< bitfield TGERR   */
    using STUFF   = regbits< type,  2,  1 >;  /**< bitfield STUFF   */
    using HS      = regbits< type,  0,  2 >;  /**< bitfield HS      */
  };

  /**
   * register HSTATE
   */
  struct HSTATE
  : public reg< uint8_t, base_addr + 0x2108, rw, 0x12 >
  {
    using type = reg< uint8_t, base_addr + 0x2108, rw, 0x12 >;

    using ALIVE    = regbits< type,  5,  1 >;  /**< bitfield ALIVE    */
    using CLKSEL   = regbits< type,  4,  1 >;  /**< bitfield CLKSEL   */
    using SOFBUSY  = regbits< type,  3,  1 >;  /**< bitfield SOFBUSY  */
    using SUSP     = regbits< type,  2,  1 >;  /**< bitfield SUSP     */
    using TMODE    = regbits< type,  1,  1 >;  /**< bitfield TMODE    */
    using CSTAT    = regbits< type,  0,  1 >;  /**< bitfield CSTAT    */
  };

  /**
   * register HFCOMP
   */
  struct HFCOMP
  : public reg< uint8_t, base_addr + 0x2109, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2109, rw, 0x00 >;

    using FRAMECOMP  = regbits< type,  0,  8 >;  /**< bitfield FRAMECOMP  */
  };

  /**
   * register HRTIMER
   */
  struct HRTIMER
  : public reg< uint16_t, base_addr + 0x210c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x210c, rw, 0x0000 >;

    using RTIMER1  = regbits< type,  8,  8 >;  /**< bitfield RTIMER1  */
    using RTIMER0  = regbits< type,  0,  8 >;  /**< bitfield RTIMER0  */
  };

  /**
   * register HRTIMER2
   */
  struct HRTIMER2
  : public reg< uint8_t, base_addr + 0x2110, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2110, rw, 0x00 >;

    using RTIMER2  = regbits< type,  0,  2 >;  /**< bitfield RTIMER2  */
  };

  /**
   * register HADR
   */
  struct HADR
  : public reg< uint8_t, base_addr + 0x2111, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2111, rw, 0x00 >;

    using ADDRESS  = regbits< type,  0,  7 >;  /**< bitfield ADDRESS  */
  };

  /**
   * register HEOF
   */
  struct HEOF
  : public reg< uint16_t, base_addr + 0x2114, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x2114, rw, 0x0000 >;

    using EOF1  = regbits< type,  8,  6 >;  /**< bitfield EOF1  */
    using EOF0  = regbits< type,  0,  8 >;  /**< bitfield EOF0  */
  };

  /**
   * register HFRAME
   */
  struct HFRAME
  : public reg< uint16_t, base_addr + 0x2118, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x2118, rw, 0x0000 >;

    using FRAME1  = regbits< type,  8,  3 >;  /**< bitfield FRAME1  */
    using FRAME0  = regbits< type,  0,  8 >;  /**< bitfield FRAME0  */
  };

  /**
   * register HTOKEN
   */
  struct HTOKEN
  : public reg< uint8_t, base_addr + 0x211c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x211c, rw, 0x00 >;

    using TGGL   = regbits< type,  7,  1 >;  /**< bitfield TGGL   */
    using TKNEN  = regbits< type,  4,  3 >;  /**< bitfield TKNEN  */
    using ENDPT  = regbits< type,  0,  4 >;  /**< bitfield ENDPT  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USB0_HPP_INCLUDED
