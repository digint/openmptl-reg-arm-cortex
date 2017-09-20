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
//  Import from CMSIS-SVD: "Fujitsu/MB9B160L.svd"
//
//  name: MB9B160L
//  version: 1.3
//  description: MB9BF160L Series
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MFT0_HPP_INCLUDED
#define ARCH_REG_MFT0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Multifunction Timer 0
 */
struct MFT0
{
  static constexpr reg_addr_t base_addr = 0x40020000;

  /**
   * FRT-ch.0 Cycle Setting Register
   */
  struct FRT_TCCP0
  : public reg< uint16_t, base_addr + 0x142, rw, 0xFFFF >
  {
  };

  /**
   * FRT-ch.0 Count Value Register
   */
  struct FRT_TCDT0
  : public reg< uint16_t, base_addr + 0x146, rw, 0x0000 >
  {
  };

  /**
   * FRT-ch.0 Control Register A
   */
  struct FRT_TCSA0
  : public reg< uint16_t, base_addr + 0x148, rw, 0x0040 >
  {
    using type = reg< uint16_t, base_addr + 0x148, rw, 0x0040 >;

    using ECKE   = regbits< type, 15,  1 >;  /**< Uses an external input clock (FRCK) as FRT's count clock  */
    using IRQZF  = regbits< type, 14,  1 >;  /**< zero interrupt flag                                       */
    using IRQZE  = regbits< type, 13,  1 >;  /**< "Generates interrupt, when ""1"" is set to TCSA.IRQZF"    */
    using ICLR   = regbits< type,  9,  1 >;  /**< interrupt flag                                            */
    using ICRE   = regbits< type,  8,  1 >;  /**< "Generates interrupt when ""1"" is set to TCSA.ICLR"      */
    using BFE    = regbits< type,  7,  1 >;  /**< Enables TCCP's buffer function                            */
    using STOP   = regbits< type,  6,  1 >;  /**< Puts FRT in stopping state                                */
    using MODE   = regbits< type,  5,  1 >;  /**< FRT's count mode                                          */
    using SCLR   = regbits< type,  4,  1 >;  /**< FRT operation state initialization request                */
    using CLK    = regbits< type,  0,  4 >;  /**< FRT clock cycle                                           */
  };

  /**
   * FRT-ch.0 Control Register C
   */
  struct FRT_TCSC0
  : public reg< uint16_t, base_addr + 0x14a, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x14a, rw, 0x0000 >;

    using MSPC  = regbits< type, 12,  4 >;  /**< Current counter value of a Peak value detection mask counter  */
    using MSZC  = regbits< type,  8,  4 >;  /**< Current counter value of a Zero value detection mask counter  */
    using MSPI  = regbits< type,  4,  4 >;  /**< Masked Peak value detection number                            */
    using MSZI  = regbits< type,  0,  4 >;  /**< Masked Zero value detection number                            */
  };

  /**
   * FRT-ch.1 Cycle Setting Register
   *
   * (derived from: FRT_TCCP0)
   */
  struct FRT_TCCP1
  : public reg< uint32_t, base_addr + 0x14e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.1 Count Value Register
   *
   * (derived from: FRT_TCDT0)
   */
  struct FRT_TCDT1
  : public reg< uint32_t, base_addr + 0x152, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.1 Control Register A
   *
   * (derived from: FRT_TCSA0)
   */
  struct FRT_TCSA1
  : public reg< uint32_t, base_addr + 0x154, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.1 Control Register C
   *
   * (derived from: FRT_TCSC0)
   */
  struct FRT_TCSC1
  : public reg< uint32_t, base_addr + 0x156, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.2 Cycle Setting Register
   *
   * (derived from: FRT_TCCP0)
   */
  struct FRT_TCCP2
  : public reg< uint32_t, base_addr + 0x15a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.2 Count Value Register
   *
   * (derived from: FRT_TCDT0)
   */
  struct FRT_TCDT2
  : public reg< uint32_t, base_addr + 0x15e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.2 Control Register A
   *
   * (derived from: FRT_TCSA0)
   */
  struct FRT_TCSA2
  : public reg< uint32_t, base_addr + 0x160, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.2 Control Register C
   *
   * (derived from: FRT_TCSC0)
   */
  struct FRT_TCSC2
  : public reg< uint32_t, base_addr + 0x162, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT Simultaneous Start Control Register
   */
  struct FRT_TCAL
  : public reg< uint32_t, base_addr + 0x164, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x164, rw, 0x00000000 >;

    using SCLR22  = regbits< type, 24,  1 >;  /**< Mirror register of the SCLR bit located in TCSA2 register of MFT-unit2  */
    using SCLR21  = regbits< type, 23,  1 >;  /**< Mirror register of the SCLR bit located in TCSA1 register of MFT-unit2  */
    using SCLR20  = regbits< type, 22,  1 >;  /**< Mirror register of the SCLR bit located in TCSA0 register of MFT-unit2  */
    using SCLR12  = regbits< type, 21,  1 >;  /**< Mirror register of the SCLR bit located in TCSA2 register of MFT-unit1  */
    using SCLR11  = regbits< type, 20,  1 >;  /**< Mirror register of the SCLR bit located in TCSA1 register of MFT-unit1  */
    using SCLR10  = regbits< type, 19,  1 >;  /**< Mirror register of the SCLR bit located in TCSA0 register of MFT-unit1  */
    using SCLR02  = regbits< type, 18,  1 >;  /**< Mirror register of the SCLR bit located in TCSA2 register of MFT-unit0  */
    using SCLR01  = regbits< type, 17,  1 >;  /**< Mirror register of the SCLR bit located in TCSA1 register of MFT-unit0  */
    using SCLR00  = regbits< type, 16,  1 >;  /**< Mirror register of the SCLR bit located in TCSA0 register of MFT-unit0  */
    using STOP22  = regbits< type,  8,  1 >;  /**< Mirror register of the STOP bit located in TCSA2 register of MFT-unit2  */
    using STOP21  = regbits< type,  7,  1 >;  /**< Mirror register of the STOP bit located in TCSA1 register of MFT-unit2  */
    using STOP20  = regbits< type,  6,  1 >;  /**< Mirror register of the STOP bit located in TCSA0 register of MFT-unit2  */
    using STOP12  = regbits< type,  5,  1 >;  /**< Mirror register of the STOP bit located in TCSA2 register of MFT-unit1  */
    using STOP11  = regbits< type,  4,  1 >;  /**< Mirror register of the STOP bit located in TCSA1 register of MFT-unit1  */
    using STOP10  = regbits< type,  3,  1 >;  /**< Mirror register of the STOP bit located in TCSA0 register of MFT-unit1  */
    using STOP02  = regbits< type,  2,  1 >;  /**< Mirror register of the STOP bit located in TCSA2 register of MFT-unit0  */
    using STOP01  = regbits< type,  1,  1 >;  /**< Mirror register of the STOP bit located in TCSA1 register of MFT-unit0  */
    using STOP00  = regbits< type,  0,  1 >;  /**< Mirror register of the STOP bit located in TCSA0 register of MFT-unit0  */
  };

  /**
   * OCU ch.0 Compare Value Store Register
   */
  struct OCU_OCCP0
  : public reg< uint16_t, base_addr + 0x102, rw, 0x0000 >
  {
  };

  /**
   * OCU ch.1 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP1
  : public reg< uint32_t, base_addr + 0x106, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.2 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP2
  : public reg< uint32_t, base_addr + 0x10a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.3 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP3
  : public reg< uint32_t, base_addr + 0x10e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.4 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP4
  : public reg< uint32_t, base_addr + 0x112, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.5 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP5
  : public reg< uint32_t, base_addr + 0x116, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.0/1 Control Register A
   */
  struct OCU_OCSA10
  : public reg< uint8_t, base_addr + 0x118, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x118, rw, 0x00 >;

    using IOP1  = regbits< type,  7,  1 >;  /**< Indicates that a match has already been detected between FRT's count value and OCCP(1) value at OCU ch.(1).  */
    using IOP0  = regbits< type,  6,  1 >;  /**< Indicates that a match has already been detected between FRT's count value and OCCP(0) value at OCU ch.(0).  */
    using IOE1  = regbits< type,  5,  1 >;  /**< "Generates interrupt, when ""1"" is set to OCSA.IOP1"                                                        */
    using IOE0  = regbits< type,  4,  1 >;  /**< "Generates interrupt, when ""1"" is set to OCSA.IOP0"                                                        */
    using CST1  = regbits< type,  1,  1 >;  /**< Enables the operation of OCU ch.(1)                                                                          */
    using CST0  = regbits< type,  0,  1 >;  /**< Enables the operation of OCU ch.(0)                                                                          */
  };

  /**
   * OCU ch.0/1 Control Register B
   */
  struct OCU_OCSB10
  : public reg< uint8_t, base_addr + 0x119, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x119, rw, 0x00 >;

    using FM4   = regbits< type,  7,  1 >;  /**< selects FM4 mode for operating mode                                     */
    using CMOD  = regbits< type,  4,  1 >;  /**< selects OCU's operation mode in combination with OCSC.MOD0 to MOD5      */
    using OTD1  = regbits< type,  1,  1 >;  /**< Indicates that the RT(1) output pin is in the High-level output state.  */
    using OTD0  = regbits< type,  0,  1 >;  /**< Indicates that the RT(0) output pin is in the High-level output state.  */
  };

  /**
   * OCU ch.0/1 Control Register D
   */
  struct OCU_OCSD10
  : public reg< uint8_t, base_addr + 0x11a, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11a, rw, 0x00 >;

    using OCSE1BUFE  = regbits< type,  6,  2 >;  /**< Enable buffer register function of OCSE(1)  */
    using OCSE0BUFE  = regbits< type,  4,  2 >;  /**< Enable buffer register function of OCSE(0)  */
    using OCCP1BUFE  = regbits< type,  2,  2 >;  /**< Enable buffer register function of OCCP(1)  */
    using OCCP0BUFE  = regbits< type,  0,  2 >;  /**< Enable buffer register function of OCCP(0)  */
  };

  /**
   * OCU ch.2/3 Control Register A
   *
   * (derived from: OCU_OCSA10)
   */
  struct OCU_OCSA32
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.2/3 Control Register B
   *
   * (derived from: OCU_OCSB10)
   */
  struct OCU_OCSB32
  : public reg< uint32_t, base_addr + 0x11d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.2/3 Control Register D
   *
   * (derived from: OCU_OCSD10)
   */
  struct OCU_OCSD32
  : public reg< uint32_t, base_addr + 0x11e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.4/5 Control Register A
   *
   * (derived from: OCU_OCSA10)
   */
  struct OCU_OCSA54
  : public reg< uint32_t, base_addr + 0x120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.4/5 Control Register B
   *
   * (derived from: OCU_OCSB10)
   */
  struct OCU_OCSB54
  : public reg< uint32_t, base_addr + 0x121, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.4/5 Control Register D
   *
   * (derived from: OCU_OCSD10)
   */
  struct OCU_OCSD54
  : public reg< uint32_t, base_addr + 0x122, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU Control Register C
   */
  struct OCU_OCSC
  : public reg< uint16_t, base_addr + 0x124, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x124, rw, 0x0000 >;

    using MOD5  = regbits< type, 13,  1 >;  /**< OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD  */
    using MOD4  = regbits< type, 12,  1 >;  /**< OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD  */
    using MOD3  = regbits< type, 11,  1 >;  /**< OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD  */
    using MOD2  = regbits< type, 10,  1 >;  /**< OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD  */
    using MOD1  = regbits< type,  9,  1 >;  /**< OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD  */
    using MOD0  = regbits< type,  8,  1 >;  /**< OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD  */
  };

  /**
   * OCU ch.0 Control Register E
   */
  struct OCU_OCSE0
  : public reg< uint16_t, base_addr + 0x128, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x128, rw, 0x0000 >;

    using OCSE  = regbits< type,  0, 16 >;  /**< specify the setting conditions of the OCU's matching detection register (IOP0)  */
  };

  /**
   * OCU ch.1 Control Register E
   */
  struct OCU_OCSE1
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >;

    using OCSE  = regbits< type,  0, 32 >;  /**< specify the setting conditions of the OCU's matching detection register (IOP0/IOP1)  */
  };

  /**
   * OCU ch.2 Control Register E
   *
   * (derived from: OCU_OCSE0)
   */
  struct OCU_OCSE2
  : public reg< uint32_t, base_addr + 0x130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.3 Control Register E
   *
   * (derived from: OCU_OCSE1)
   */
  struct OCU_OCSE3
  : public reg< uint32_t, base_addr + 0x134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.4 Control Register E
   *
   * (derived from: OCU_OCSE0)
   */
  struct OCU_OCSE4
  : public reg< uint32_t, base_addr + 0x138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.5 Control Register E
   *
   * (derived from: OCU_OCSE1)
   */
  struct OCU_OCSE5
  : public reg< uint32_t, base_addr + 0x13c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.0/1 Connecting FRT Select Register
   */
  struct OCU_OCFS10
  : public reg< uint8_t, base_addr + 0x168, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x168, rw, 0x00 >;

    using FSO1  = regbits< type,  4,  4 >;  /**< Connects FRT ch.x to OCU ch.1  */
    using FSO0  = regbits< type,  0,  4 >;  /**< Connects FRT ch.x to OCU ch.0  */
  };

  /**
   * OCU ch.2/3 Connecting FRT Select Register
   *
   * (derived from: OCU_OCFS10)
   */
  struct OCU_OCFS32
  : public reg< uint32_t, base_addr + 0x169, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.4/5 Connecting FRT Select Register
   *
   * (derived from: OCU_OCFS10)
   */
  struct OCU_OCFS54
  : public reg< uint32_t, base_addr + 0x16a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pulse Counter Value Register for WFG ch.0/1
   */
  struct WFG_WFTF10
  : public reg< uint16_t, base_addr + 0x18e, rw, 0x0000 >
  {
  };

  /**
   * WFG Timer Value Register for WFG ch.0/1
   */
  struct WFG_WFTA10
  : public reg< uint16_t, base_addr + 0x190, rw, 0x0000 >
  {
  };

  /**
   * WFG Timer Value Register for WFG ch.0/1
   */
  struct WFG_WFTB10
  : public reg< uint16_t, base_addr + 0x192, rw, 0x0000 >
  {
  };

  /**
   * Pulse Counter Value Register for WFG ch.2/3
   */
  struct WFG_WFTF32
  : public reg< uint16_t, base_addr + 0x196, rw, 0x0000 >
  {
  };

  /**
   * WFG Timer Value Register for WFG ch.2/3
   */
  struct WFG_WFTA32
  : public reg< uint16_t, base_addr + 0x198, rw, 0x0000 >
  {
  };

  /**
   * WFG Timer Value Register for WFG ch.2/3
   */
  struct WFG_WFTB32
  : public reg< uint16_t, base_addr + 0x19a, rw, 0x0000 >
  {
  };

  /**
   * Pulse Counter Value Register for WFG ch.4/5
   */
  struct WFG_WFTF54
  : public reg< uint16_t, base_addr + 0x19e, rw, 0x0000 >
  {
  };

  /**
   * WFG Timer Value Register for WFG ch.4/5
   */
  struct WFG_WFTA54
  : public reg< uint16_t, base_addr + 0x1a0, rw, 0x0000 >
  {
  };

  /**
   * WFG Timer Value Register for WFG ch.4/5
   */
  struct WFG_WFTB54
  : public reg< uint16_t, base_addr + 0x1a2, rw, 0x0000 >
  {
  };

  /**
   * WFG Control Register A for WFG ch.0/1
   */
  struct WFG_WFSA10
  : public reg< uint16_t, base_addr + 0x1a4, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1a4, rw, 0x0000 >;

    using DMOD  = regbits< type, 12,  2 >;  /**< 1specifies polarity for RTO(0) and RTO(1) signal outputs                */
    using PGEN  = regbits< type, 10,  2 >;  /**< specifies how to reflect the CH_PPG signal for each channel of the WFG  */
    using PSEL  = regbits< type,  8,  2 >;  /**< select the PPG timer unit to be used for each channel of the WFG        */
    using GTEN  = regbits< type,  6,  2 >;  /**< selects the output conditions for the CH_GATE output signal of the WFG  */
    using TMD   = regbits< type,  3,  3 >;  /**< select the WFG's operation mode                                         */
    using DCK   = regbits< type,  0,  3 >;  /**< set the count clock cycle for the WFG timer and Pulse counter           */
  };

  /**
   * WFG Control Register A for WFG ch.2/3
   *
   * (derived from: WFG_WFSA10)
   */
  struct WFG_WFSA32
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * WFG Control Register A for WFG ch.4/5
   *
   * (derived from: WFG_WFSA10)
   */
  struct WFG_WFSA54
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * WFG Interrupt Control Register
   */
  struct WFG_WFIR
  : public reg< uint16_t, base_addr + 0x1b0, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1b0, rw, 0x0000 >;

    using TMIS54  = regbits< type, 15,  1 >;  /**< stops the WFG54 reload timer and clears TMIF54                       */
    using TMIE54  = regbits< type, 14,  1 >;  /**< stops the WFG54 reload timer and clears TMIF54                       */
    using TMIC54  = regbits< type, 13,  1 >;  /**< clears TIMF54 bit                                                    */
    using TMIF54  = regbits< type, 12,  1 >;  /**< detects the event of WFG54 reload timer interrupt occurrence         */
    using TMIS32  = regbits< type, 11,  1 >;  /**< stops the WFG32 reload timer and clears TMIF32                       */
    using TMIE32  = regbits< type, 10,  1 >;  /**< 1stops the WFG32 reload timer and clears TMIF32                      */
    using TMIC32  = regbits< type,  9,  1 >;  /**< clears TIMF32 bit                                                    */
    using TMIF32  = regbits< type,  8,  1 >;  /**< detects the event of WFG32 reload timer interrupt occurrence         */
    using TMIS10  = regbits< type,  7,  1 >;  /**< stops the WFG10 reload timer and clears TMIF10                       */
    using TMIE10  = regbits< type,  6,  1 >;  /**< starts WFG10 reload timer and checks the operation state of it.      */
    using TMIC10  = regbits< type,  5,  1 >;  /**< clears TIMF10 bit                                                    */
    using TMIF10  = regbits< type,  4,  1 >;  /**< detects the event of WFG10 reload timer interrupt occurrence         */
    using DTICB   = regbits< type,  3,  1 >;  /**< clears DTIFB bit.                                                    */
    using DTIFB   = regbits< type,  2,  1 >;  /**< detects DTTIX signal input via analog noise filter                   */
    using DTICA   = regbits< type,  1,  1 >;  /**< clears the DTIFA interrupt flag                                      */
    using DTIFA   = regbits< type,  0,  1 >;  /**< detects the event of DTTIX signal input via digital noise-canceller  */
  };

  /**
   * NZCL Control Register
   */
  struct WFG_NZCL
  : public reg< uint16_t, base_addr + 0x1b4, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1b4, rw, 0x0000 >;

    using WIM54  = regbits< type, 14,  1 >;  /**< selects whether a WFG54 reload timer interrupt is masked when the WFIR.TMIF54 flag is set  */
    using WIM32  = regbits< type, 13,  1 >;  /**< selects whether a WFG32 reload timer interrupt is masked when the WFIR.TMIF32 flag is set  */
    using WIM10  = regbits< type, 12,  1 >;  /**< selects whether a WFG10 reload timer interrupt is masked when the WFIR.TMIF10 flag is set  */
    using DIMB   = regbits< type,  9,  1 >;  /**< selects whether a DTIF interrupt is masked when the WFIR.TIFDTIFB flag is set              */
    using DIMA   = regbits< type,  8,  1 >;  /**< selects whether a DTIF interrupt is masked when the WFIR.DTIFA flag is set                 */
    using DTIEB  = regbits< type,  5,  1 >;  /**< Enables the path from DTTIX pin to analog noise filter                                     */
    using SDTI   = regbits< type,  4,  1 >;  /**< sets the WFIR.DTIFA register by writing to the register from the CPU                       */
    using NWS    = regbits< type,  1,  3 >;  /**< set the noise-canceling width for a digital noise-canceller                                */
    using DTIEA  = regbits< type,  0,  1 >;  /**< Enables the path for digital noise filter from DTTIX pin                                   */
  };

  /**
   * ICU ch.0/1 Connecting FRT Select Register
   */
  struct ICU_ICFS10
  : public reg< uint8_t, base_addr + 0x16c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x16c, rw, 0x00 >;

    using FSI1  = regbits< type,  4,  4 >;  /**< Connects FRT ch.x to ICU ch.(1)  */
    using FSI0  = regbits< type,  0,  4 >;  /**< Connects FRT ch.x to ICU ch.(0)  */
  };

  /**
   * ICU ch.2/3 Connecting FRT Select Register
   *
   * (derived from: ICU_ICFS10)
   */
  struct ICU_ICFS32
  : public reg< uint32_t, base_addr + 0x16d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ICU-ch.0 Capture Value Store Register
   */
  struct ICU_ICCP0
  : public reg< uint16_t, base_addr + 0x176, ro, 0x0000 >
  {
  };

  /**
   * ICU-ch.1 Capture Value Store Register
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP1
  : public reg< uint32_t, base_addr + 0x17a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ICU-ch.2 Capture Value Store Register
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP2
  : public reg< uint32_t, base_addr + 0x17e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ICU-ch.3 Capture Value Store Register
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP3
  : public reg< uint32_t, base_addr + 0x182, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ICU ch.0/1 Control Register A
   */
  struct ICU_ICSA10
  : public reg< uint8_t, base_addr + 0x184, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x184, rw, 0x00 >;

    using ICP1  = regbits< type,  7,  1 >;  /**< Indicates that a valid edge has been detected at ICU ch.(1) and the capture operation has been performed  */
    using ICP0  = regbits< type,  6,  1 >;  /**< Indicates that a valid edge has been detected at ICU ch.(0) and the capture operation has been performed  */
    using ICE1  = regbits< type,  5,  1 >;  /**< "Generates interrupt, when ""1"" is set to ICSA.ICP1."                                                    */
    using ICE0  = regbits< type,  4,  1 >;  /**< "Generates interrupt, when ""1"" is set to ICSA.ICP0."                                                    */
    using EG1   = regbits< type,  2,  2 >;  /**< enables/disables the operation of ICU-ch.(1) and selects a valid edge(s)                                  */
    using EG0   = regbits< type,  0,  2 >;  /**< enables/disables the operation of ICU-ch.(0) and selects a valid edge(s)                                  */
  };

  /**
   * ICU ch.0/1 Control Register B
   */
  struct ICU_ICSB10
  : public reg< uint8_t, base_addr + 0x185, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x185, ro, 0x00 >;

    using IEI1  = regbits< type,  1,  1 >;  /**< indicates the latest valid edge of ICU ch.(1)  */
    using IEI0  = regbits< type,  0,  1 >;  /**< indicates the latest valid edge of ICU ch.(0)  */
  };

  /**
   * ICU ch.2/3 Control Register A
   *
   * (derived from: ICU_ICSA10)
   */
  struct ICU_ICSA32
  : public reg< uint32_t, base_addr + 0x188, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ICU ch.2/3 Control Register B
   *
   * (derived from: ICU_ICSB10)
   */
  struct ICU_ICSB32
  : public reg< uint32_t, base_addr + 0x189, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.0/1 Connecting FRT Select Register
   */
  struct ADCMP_ACFS10
  : public reg< uint8_t, base_addr + 0x170, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x170, rw, 0x00 >;

    using FSA1  = regbits< type,  4,  4 >;  /**< specify the FRT to be connected to ADCMP ch.(1)  */
    using FSA0  = regbits< type,  0,  4 >;  /**< specify the FRT to be connected to ADCMP ch.(0)  */
  };

  /**
   * ADCMP ch.2/3 Connecting FRT Select Register
   *
   * (derived from: ADCMP_ACFS10)
   */
  struct ADCMP_ACFS32
  : public reg< uint32_t, base_addr + 0x171, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.4/5 Connecting FRT Select Register
   *
   * (derived from: ADCMP_ACFS10)
   */
  struct ADCMP_ACFS54
  : public reg< uint32_t, base_addr + 0x172, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.0 Compare Value Store Register
   */
  struct ADCMP_ACMP0
  : public reg< uint16_t, base_addr + 0x1ba, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1ba, rw, 0x0000 >;

    using ACMP  = regbits< type,  0, 16 >;
  };

  /**
   * ADCMP ch.1 Compare Value Store Register
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP1
  : public reg< uint32_t, base_addr + 0x1be, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.2 Compare Value Store Register
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP2
  : public reg< uint32_t, base_addr + 0x1c2, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.3 Compare Value Store Register
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP3
  : public reg< uint32_t, base_addr + 0x1c6, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.4 Compare Value Store Register
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP4
  : public reg< uint32_t, base_addr + 0x1ca, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.5 Compare Value Store Register
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP5
  : public reg< uint32_t, base_addr + 0x1ce, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP Control Register A
   */
  struct ADCMP_ACSA
  : public reg< uint16_t, base_addr + 0x1d0, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1d0, rw, 0x0000 >;

    using SEL54  = regbits< type, 12,  2 >;  /**< selects compatible operation of ADCMP ch.5 and ch.4 with FM3 Family products    */
    using SEL32  = regbits< type, 10,  2 >;  /**< selects compatible operation of ADCMP ch.3 and ch.2 with FM3 Family products    */
    using SEL10  = regbits< type,  8,  2 >;  /**< selects compatible operation of ADCMP ch.1 and ch.0 with FM3 Family products    */
    using CE54   = regbits< type,  4,  2 >;  /**< enables/disables compatibility of ADCMP ch.5 and ch.4 with FM3 Family products  */
    using CE32   = regbits< type,  2,  2 >;  /**< enables/disables compatibility of ADCMP ch.3 and ch.2 with FM3 Family products  */
    using CE10   = regbits< type,  0,  2 >;  /**< enables/disables compatibility of ADCMP ch.1 and ch.0 with FM3 Family products  */
  };

  /**
   * ADCMP ch.0 Control Register C
   */
  struct ADCMP_ACSC0
  : public reg< uint8_t, base_addr + 0x1d4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1d4, rw, 0x00 >;

    using ADSEL  = regbits< type,  2,  3 >;  /**< specify the destinations of ADC start signals that are output by ADCMP               */
    using BUFE   = regbits< type,  0,  2 >;  /**< select enable/disable and transfer timing for buffer function of the ACMP register.  */
  };

  /**
   * ADCMP ch.0 Control Register D
   */
  struct ADCMP_ACSD0
  : public reg< uint8_t, base_addr + 0x1d5, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1d5, rw, 0x00 >;

    using ZE    = regbits< type,  7,  1 >;  /**< enables/disables the operation of the ADCMP when the FRT is "0x0000"                                      */
    using UE    = regbits< type,  6,  1 >;  /**< enables/disables the operation of the ADCMP that is counting up for the connected FRT                     */
    using PE    = regbits< type,  5,  1 >;  /**< enables/disables the operation of the ADCMP that is counting down at the Peak value of the connected FRT  */
    using DE    = regbits< type,  4,  1 >;  /**< enables/disables the operation of the ADCMP that is counting down for the connected FRT                   */
    using OCUS  = regbits< type,  1,  1 >;  /**< selects the OCU OCCP register that will become the start for offset start                                 */
    using AMOD  = regbits< type,  0,  1 >;  /**< selects operation mode for ADCMP                                                                          */
  };

  /**
   * ADCMP ch.1 Control Register C
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC1
  : public reg< uint32_t, base_addr + 0x1d8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.1 Control Register D
   *
   * (derived from: ADCMP_ACSD0)
   */
  struct ADCMP_ACSD1
  : public reg< uint32_t, base_addr + 0x1d9, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.2 Control Register C
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC2
  : public reg< uint32_t, base_addr + 0x1dc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.2 Control Register D
   *
   * (derived from: ADCMP_ACSD0)
   */
  struct ADCMP_ACSD2
  : public reg< uint32_t, base_addr + 0x1dd, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.3 Control Register C
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC3
  : public reg< uint32_t, base_addr + 0x1e0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.3 Control Register D
   *
   * (derived from: ADCMP_ACSD0)
   */
  struct ADCMP_ACSD3
  : public reg< uint32_t, base_addr + 0x1e1, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.4 Control Register C
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC4
  : public reg< uint32_t, base_addr + 0x1e4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.4 Control Register D
   *
   * (derived from: ADCMP_ACSD0)
   */
  struct ADCMP_ACSD4
  : public reg< uint32_t, base_addr + 0x1e5, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.5 Control Register C
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC5
  : public reg< uint32_t, base_addr + 0x1e8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.5 Control Register D
   *
   * (derived from: ADCMP_ACSD0)
   */
  struct ADCMP_ACSD5
  : public reg< uint32_t, base_addr + 0x1e9, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_MFT0_HPP_INCLUDED
