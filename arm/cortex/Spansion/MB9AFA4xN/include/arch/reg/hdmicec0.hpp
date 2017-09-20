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
//  Import from CMSIS-SVD: "Spansion/MB9AFA4xN.svd"
//
//  name: MB9AFA4xN
//  version: 1.7
//  description: MB9AFA4xN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HDMICEC0_HPP_INCLUDED
#define ARCH_REG_HDMICEC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * HDMI-CEC ch.0
 */
struct HDMICEC0
{
  static constexpr reg_addr_t base_addr = 0x40034000;

  /**
   * Transmission Control Register
   */
  struct TXCTRL
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using IBREN   = regbits< type,  5,  1 >;  /**< Bus error detection interrupt enable bit  */
    using ITSTEN  = regbits< type,  4,  1 >;  /**< transmission status interrupt enable bit  */
    using EOM     = regbits< type,  3,  1 >;  /**< EOM setting bit                           */
    using START   = regbits< type,  2,  1 >;  /**< START setting bit                         */
    using TXEN    = regbits< type,  0,  1 >;  /**< Transmission operation enable bit         */
  };

  /**
   * Transmission Data Register
   */
  struct TXDATA
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    // fixme: Field name equals parent register name: TXDATA
    using TXDATA_ = regbits< type,  0,  8 >;  /**< Transmission Data  */
  };

  /**
   * Transmission Status Register
   */
  struct TXSTS
  : public reg< uint8_t, base_addr + 0x8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x00 >;

    using IBR    = regbits< type,  5,  1 >;  /**< Bus error detection interrupt request bit  */
    using ITST   = regbits< type,  4,  1 >;  /**< Transmission status interrupt request bit  */
    using ACKSV  = regbits< type,  0,  1 >;  /**< ACK cycle value bit                        */
  };

  /**
   * Signal Free Time Setting Register
   */
  struct SFREE
  : public reg< uint8_t, base_addr + 0xc, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xc, rw, 0x00 >;

    // fixme: Field name equals parent register name: SFREE
    using SFREE_ = regbits< type,  0,  4 >;  /**< Signal free time setting bits  */
  };

  /**
   * Reception Interrupt Control Register
   */
  struct RCST
  : public reg< uint8_t, base_addr + 0x40, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x40, rw, 0x00 >;

    using STIE    = regbits< type,  7,  1 >;  /**< Start bit interrupt enable bit                    */
    using ACKIE   = regbits< type,  6,  1 >;  /**< ACK interrupt enable bit                          */
    using OVFIE   = regbits< type,  5,  1 >;  /**< Counter overflow interrupt enable bit             */
    using OVFSEL  = regbits< type,  4,  1 >;  /**< Counter overflow detection condition setting bit  */
    using ST      = regbits< type,  3,  1 >;  /**< Start bit detection bit                           */
    using ACK     = regbits< type,  2,  1 >;  /**< ACK: ACK detection bit                            */
    using EOM     = regbits< type,  1,  1 >;  /**< EOM detection bit                                 */
    using OVF     = regbits< type,  0,  1 >;  /**< Counter overflow detection bit                    */
  };

  /**
   * Reception Control Register
   */
  struct RCCR
  : public reg< uint8_t, base_addr + 0x41, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x41, rw, 0x00 >;

    using THSEL  = regbits< type,  7,  1 >;  /**< Threshold selection bit        */
    using ADRCE  = regbits< type,  3,  1 >;  /**< Address comparison enable bit  */
    using MOD1   = regbits< type,  2,  1 >;  /**< Operation mode setting bits    */
    using MOD0   = regbits< type,  1,  1 >;  /**< Operation mode setting bits    */
    using EN     = regbits< type,  0,  1 >;  /**< Operation enable bit           */
  };

  /**
   * "H" Width Setting Register A
   */
  struct RCDAHW
  : public reg< uint8_t, base_addr + 0x44, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x44, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCDAHW
    using RCDAHW_ = regbits< type,  0,  8 >;  /**< "H" Width Setting A  */
  };

  /**
   * Start Bit "H" Width Setting Register
   */
  struct RCSHW
  : public reg< uint8_t, base_addr + 0x45, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x45, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCSHW
    using RCSHW_ = regbits< type,  0,  8 >;  /**< Start Bit "H" Width Setting  */
  };

  /**
   * "H" Width Setting Register B
   */
  struct RCDBHW
  : public reg< uint8_t, base_addr + 0x49, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x49, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCDBHW
    using RCDBHW_ = regbits< type,  0,  8 >;  /**< "H" Width Setting B  */
  };

  /**
   * Device Address Setting Register 2
   */
  struct RCADR2
  : public reg< uint8_t, base_addr + 0x4c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4c, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCADR2
    using RCADR2_ = regbits< type,  0,  5 >;  /**< Device Address 2  */
  };

  /**
   * Device Address Setting Register 1
   */
  struct RCADR1
  : public reg< uint8_t, base_addr + 0x4d, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4d, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCADR1
    using RCADR1_ = regbits< type,  0,  5 >;  /**< Device Address 1  */
  };

  /**
   * Data Save Register (High-Low)
   */
  struct RCDTHL
  : public reg< uint8_t, base_addr + 0x50, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x50, ro, 0x00 >;

    // fixme: Field name equals parent register name: RCDTHL
    using RCDTHL_ = regbits< type,  0,  8 >;  /**< RCDTHL  */
  };

  /**
   * Data Save Register (High-High)
   */
  struct RCDTHH
  : public reg< uint8_t, base_addr + 0x51, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x51, ro, 0x00 >;

    // fixme: Field name equals parent register name: RCDTHH
    using RCDTHH_ = regbits< type,  0,  8 >;  /**< RCDTHH  */
  };

  /**
   * Data Save Register (Low-Low)
   */
  struct RCDTLL
  : public reg< uint8_t, base_addr + 0x54, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x54, ro, 0x00 >;

    // fixme: Field name equals parent register name: RCDTLL
    using RCDTLL_ = regbits< type,  0,  8 >;  /**< RCDTLL  */
  };

  /**
   * Data Save Register (Low-High)
   */
  struct RCDTLH
  : public reg< uint8_t, base_addr + 0x55, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x55, ro, 0x00 >;

    // fixme: Field name equals parent register name: RCDTLH
    using RCDTLH_ = regbits< type,  0,  8 >;  /**< RCDTLH  */
  };

  /**
   * Clock Division Setting Register
   */
  struct RCCKD
  : public reg< uint16_t, base_addr + 0x58, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x58, rw, 0x0000 >;

    using CKSEL  = regbits< type, 12,  1 >;  /**< Operating clock selection bit          */
    using CKDIV  = regbits< type,  0, 12 >;  /**< Operating clock division setting bits  */
  };

  /**
   * Repeat Code "H" Width Setting Register
   */
  struct RCRHW
  : public reg< uint8_t, base_addr + 0x5c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x5c, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCRHW
    using RCRHW_ = regbits< type,  0,  8 >;  /**< "Repeat code "H" width setting bits"  */
  };

  /**
   * Repeat Code Interrupt Control Register
   */
  struct RCRC
  : public reg< uint8_t, base_addr + 0x5d, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x5d, rw, 0x00 >;

    using RCIE  = regbits< type,  4,  1 >;  /**< Repeat Code Interrupt enable bit  */
    using RC    = regbits< type,  0,  1 >;  /**< Repeat code detection flag bit    */
  };

  /**
   * Data Bit Width Violation Control Register
   */
  struct RCLE
  : public reg< uint8_t, base_addr + 0x61, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x61, rw, 0x00 >;

    using LELIE  = regbits< type,  7,  1 >;  /**< Maximum data bit width violation interrupt enable bit  */
    using LESIE  = regbits< type,  6,  1 >;  /**< Minimum data bit width violation interrupt enable bit  */
    using LELE   = regbits< type,  5,  1 >;  /**< Maximum data bit width violation detection enable bit  */
    using LESE   = regbits< type,  4,  1 >;  /**< Minimum data bit width violation detection enable bit  */
    using EPE    = regbits< type,  3,  1 >;  /**< Error pulse output enable bit                          */
    using LEL    = regbits< type,  1,  1 >;  /**< Maximum data bit width violation detection flag bit    */
    using LES    = regbits< type,  0,  1 >;  /**< Minimum data bit width violation detection flag bit    */
  };

  /**
   * Minimum Data Bit Width Setting Register
   */
  struct RCLESW
  : public reg< uint8_t, base_addr + 0x64, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x64, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCLESW
    using RCLESW_ = regbits< type,  0,  8 >;  /**< Minimum data bit width setting bits  */
  };

  /**
   * Maximum Data Bit Width Setting Register
   */
  struct RCLELW
  : public reg< uint8_t, base_addr + 0x65, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x65, rw, 0x00 >;

    // fixme: Field name equals parent register name: RCLELW
    using RCLELW_ = regbits< type,  0,  8 >;  /**< Maximum data bit width setting bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_HDMICEC0_HPP_INCLUDED
