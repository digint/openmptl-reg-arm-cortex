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
//  Import from CMSIS-SVD: "Fujitsu/MB9BF50xN.svd"
//
//  name: MB9BF50xN
//  version: 1.8
//  description: MB9BF50xN
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
   * FRT-ch.0 Control Register A
   */
  struct FRT_TCSA0
  : public reg< uint16_t, base_addr + 0x30, rw, 0x0040 >
  {
    using type = reg< uint16_t, base_addr + 0x30, rw, 0x0040 >;

    using CLK    = regbits< type,  0,  4 >;  /**< FRT clock cycle                                           */
    using SCLR   = regbits< type,  4,  1 >;  /**< FRT operation state initialization request                */
    using MODE   = regbits< type,  5,  1 >;  /**< FRT's count mode                                          */
    using STOP   = regbits< type,  6,  1 >;  /**< Puts FRT in stopping state                                */
    using BFE    = regbits< type,  7,  1 >;  /**< Enables TCCP's buffer function                            */
    using ICRE   = regbits< type,  8,  1 >;  /**< "Generates interrupt when ""1"" is set to TCSA.ICLR"      */
    using ICLR   = regbits< type,  9,  1 >;  /**< interrupt flag                                            */
    using IRQZE  = regbits< type, 13,  1 >;  /**< "Generates interrupt, when ""1"" is set to TCSA.IRQZF"    */
    using IRQZF  = regbits< type, 14,  1 >;  /**< zero interrupt flag                                       */
    using ECKE   = regbits< type, 15,  1 >;  /**< Uses an external input clock (FRCK) as FRT's count clock  */
  };

  /**
   * FRT-ch.1 Control Register A
   *
   * (derived from: FRT_TCSA0)
   */
  struct FRT_TCSA1
  : public reg< uint32_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.2 Control Register A
   *
   * (derived from: FRT_TCSA0)
   */
  struct FRT_TCSA2
  : public reg< uint32_t, base_addr + 0x50, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.0 Control Register B
   */
  struct FRT_TCSB0
  : public reg< uint16_t, base_addr + 0x34, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x34, rw, 0x0000 >;

    using AD2E  = regbits< type,  2,  1 >;  /**< Outputs AD conversion start signal to ADCunit2 upon Zero value detection by FRT  */
    using AD1E  = regbits< type,  1,  1 >;  /**< Outputs AD conversion start signal to ADCunit1 upon Zero value detection by FRT  */
    using AD0E  = regbits< type,  0,  1 >;  /**< Outputs AD conversion start signal to ADCunit0 upon Zero value detection by FRT  */
  };

  /**
   * FRT-ch.1 Control Register B
   *
   * (derived from: FRT_TCSB0)
   */
  struct FRT_TCSB1
  : public reg< uint32_t, base_addr + 0x44, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.2 Control Register B
   *
   * (derived from: FRT_TCSB0)
   */
  struct FRT_TCSB2
  : public reg< uint32_t, base_addr + 0x54, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.0 Cycle Setting Register
   */
  struct FRT_TCCP0
  : public reg< uint16_t, base_addr + 0x28, rw, 0xFFFF >
  {
  };

  /**
   * FRT-ch.1 Cycle Setting Register
   *
   * (derived from: FRT_TCCP0)
   */
  struct FRT_TCCP1
  : public reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.2 Cycle Setting Register
   *
   * (derived from: FRT_TCCP0)
   */
  struct FRT_TCCP2
  : public reg< uint32_t, base_addr + 0x48, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.0 Count Value Register
   */
  struct FRT_TCDT0
  : public reg< uint16_t, base_addr + 0x2c, rw, 0x0000 >
  {
  };

  /**
   * FRT-ch.1 Count Value Register
   *
   * (derived from: FRT_TCDT0)
   */
  struct FRT_TCDT1
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * FRT-ch.2 Count Value Register
   *
   * (derived from: FRT_TCDT0)
   */
  struct FRT_TCDT2
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * "OCU ch.1,0 Connecting FRT Select Register"
   */
  struct OCU_OCFS10
  : public reg< uint8_t, base_addr + 0x58, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x58, rw, 0x00 >;

    using FSO0  = regbits< type,  0,  4 >;  /**< Connects FRT ch.x to OCU ch.0  */
    using FSO1  = regbits< type,  4,  4 >;  /**< Connects FRT ch.x to OCU ch.1  */
  };

  /**
   * "OCU ch.3,2 Connecting FRT Select Register"
   *
   * (derived from: OCU_OCFS10)
   */
  struct OCU_OCFS32
  : public reg< uint32_t, base_addr + 0x59, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * "OCU ch.5,4 Connecting FRT Select Register"
   *
   * (derived from: OCU_OCFS10)
   */
  struct OCU_OCFS54
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * "OCU ch.1,0 Control Register A"
   */
  struct OCU_OCSA10
  : public reg< uint8_t, base_addr + 0x18, rw, 0x0C >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x0C >;

    using CST0   = regbits< type,  0,  1 >;  /**< Enables the operation of OCU ch.(0)                                                                          */
    using CST1   = regbits< type,  1,  1 >;  /**< Enables the operation of OCU ch.(1)                                                                          */
    using BDIS0  = regbits< type,  2,  1 >;  /**< Disables the buffer function of the OCCP(0) register                                                         */
    using BDIS1  = regbits< type,  3,  1 >;  /**< Disables the buffer function of the OCCP(1) register                                                         */
    using IOE0   = regbits< type,  4,  1 >;  /**< "Generates interrupt, when ""1"" is set to OCSA.IOP0"                                                        */
    using IOE1   = regbits< type,  5,  1 >;  /**< "Generates interrupt, when ""1"" is set to OCSA.IOP1"                                                        */
    using IOP0   = regbits< type,  6,  1 >;  /**< Indicates that a match has already been detected between FRT's count value and OCCP(0) value at OCU ch.(0).  */
    using IOP1   = regbits< type,  7,  1 >;  /**< Indicates that a match has already been detected between FRT's count value and OCCP(1) value at OCU ch.(1).  */
  };

  /**
   * "OCU ch.3,2 Control Register A"
   *
   * (derived from: OCU_OCSA10)
   */
  struct OCU_OCSA32
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * "OCU ch.5,4 Control Register A"
   *
   * (derived from: OCU_OCSA10)
   */
  struct OCU_OCSA54
  : public reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * "OCU ch.1,0 Control Register B"
   */
  struct OCU_OCSB10
  : public reg< uint8_t, base_addr + 0x19, rw, 0x60 >
  {
    using type = reg< uint8_t, base_addr + 0x19, rw, 0x60 >;

    using OTD0  = regbits< type,  0,  1 >;  /**< Indicates that the RT(0) output pin is in the High-level output state.             */
    using OTD1  = regbits< type,  1,  1 >;  /**< Indicates that the RT(1) output pin is in the High-level output state.             */
    using CMOD  = regbits< type,  4,  1 >;  /**< selects OCU's operation mode in combination with OCSC.MOD0 to MOD5                 */
    using BTS0  = regbits< type,  5,  1 >;  /**< Performs buffer transfer of the OCCP(0) register upon Peak value detection by FRT  */
    using BTS1  = regbits< type,  6,  1 >;  /**< Performs buffer transfer of the OCCP(1) register upon Peak value detection by FRT  */
  };

  /**
   * "OCU ch.3,2 Control Register B"
   *
   * (derived from: OCU_OCSB10)
   */
  struct OCU_OCSB32
  : public reg< uint32_t, base_addr + 0x1d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * "OCU ch.5,4 Control Register B"
   *
   * (derived from: OCU_OCSB10)
   */
  struct OCU_OCSB54
  : public reg< uint32_t, base_addr + 0x21, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU Control Register C
   */
  struct OCU_OCSC
  : public reg< uint16_t, base_addr + 0x24, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0x0000 >;

    using MOD0  = regbits< type,  8,  1 >;  /**< OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD  */
    using MOD1  = regbits< type,  9,  1 >;  /**< OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD  */
    using MOD2  = regbits< type, 10,  1 >;  /**< OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD  */
    using MOD3  = regbits< type, 11,  1 >;  /**< OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD  */
    using MOD4  = regbits< type, 12,  1 >;  /**< OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD  */
    using MOD5  = regbits< type, 13,  1 >;  /**< OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD  */
  };

  /**
   * OCU ch.0 Compare Value Store Register
   */
  struct OCU_OCCP0
  : public reg< uint16_t, base_addr + 0x0, rw, 0x0000 >
  {
  };

  /**
   * OCU ch.1 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.2 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.3 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP3
  : public reg< uint32_t, base_addr + 0xc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.4 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP4
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * OCU ch.5 Compare Value Store Register
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP5
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * WFG ch.10 Control Register A
   */
  struct WFG_WFSA10
  : public reg< uint16_t, base_addr + 0x8c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x8c, rw, 0x0000 >;

    using DCK   = regbits< type,  0,  3 >;  /**< clock cycle of the WFG timer                                                                   */
    using TMD   = regbits< type,  3,  3 >;  /**< WFG's operation mode                                                                           */
    using GTEN  = regbits< type,  6,  2 >;  /**< the CH_GATE signal for each channel of WFG                                                     */
    using PSEL  = regbits< type,  8,  2 >;  /**< the PPG timer unit to be used at each channel of WFG                                           */
    using PGEN  = regbits< type, 10,  2 >;  /**< specifies how to reflect the CH_PPG signal that is input to each channel of WFG on WFG output  */
    using DMOD  = regbits< type, 12,  1 >;  /**< specifies which polarity will be used to output the non-overlap signal                         */
  };

  /**
   * WFG ch.32 Control Register A
   *
   * (derived from: WFG_WFSA10)
   */
  struct WFG_WFSA32
  : public reg< uint32_t, base_addr + 0x90, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * WFG ch.54 Control Register A
   *
   * (derived from: WFG_WFSA10)
   */
  struct WFG_WFSA54
  : public reg< uint32_t, base_addr + 0x94, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * WFG ch.10 Timer Value Register
   */
  struct WFG_WFTM10
  : public reg< uint16_t, base_addr + 0x80, rw, 0x0000 >
  {
  };

  /**
   * WFG ch.32 Timer Value Register
   *
   * (derived from: WFG_WFTM10)
   */
  struct WFG_WFTM32
  : public reg< uint32_t, base_addr + 0x84, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * WFG ch.54 Timer Value Register
   *
   * (derived from: WFG_WFTM10)
   */
  struct WFG_WFTM54
  : public reg< uint32_t, base_addr + 0x88, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * NZCL Control Register
   */
  struct WFG_NZCL
  : public reg< uint16_t, base_addr + 0x9c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x9c, rw, 0x0000 >;

    using DTIE  = regbits< type,  0,  1 >;  /**< DTIF interrupt enable                                           */
    using NWS   = regbits< type,  1,  3 >;  /**< noise-canceling width of the noise-canceller for the DTTIX pin  */
    using SDTI  = regbits< type,  4,  1 >;  /**< Forcibly generates DTIF interrupt                               */
  };

  /**
   * WFG Interrupt Control Register
   */
  struct WFG_WFIR
  : public reg< uint16_t, base_addr + 0x98, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x98, rw, 0x0000 >;

    using DTIF    = regbits< type,  0,  1 >;  /**< Indicates that DTIF interrupt has been generated.                   */
    using DTIC    = regbits< type,  1,  1 >;  /**< Clears WFIR.DTIF and deasserts the DTIF interrupt signal.           */
    using TMIF10  = regbits< type,  4,  1 >;  /**< Indicates that WFG10 timer interrupt has been generated.            */
    using TMIC10  = regbits< type,  5,  1 >;  /**< Clears WFIR.TMIF10 and deasserts the WFG10 timer interrupt signal.  */
    using TMIE10  = regbits< type,  6,  1 >;  /**< Starts the WFG10 timer                                              */
    using TMIS10  = regbits< type,  7,  1 >;  /**< Stops the WFG10 timer                                               */
    using TMIF32  = regbits< type,  8,  1 >;  /**< Indicates that WFG32 timer interrupt has been generated.            */
    using TMIC32  = regbits< type,  9,  1 >;  /**< Clears WFIR.TMIF32 and deasserts the WFG32 timer interrupt signal.  */
    using TMIE32  = regbits< type, 10,  1 >;  /**< Starts the WFG32 timer                                              */
    using TMIS32  = regbits< type, 11,  1 >;  /**< Stops the WFG32 timer                                               */
    using TMIF54  = regbits< type, 12,  1 >;  /**< Indicates that WFG54 timer interrupt has been generated.            */
    using TMIC54  = regbits< type, 13,  1 >;  /**< Clears WFIR.TMIF54 and deasserts the WFG54 timer interrupt signal.  */
    using TMIE54  = regbits< type, 14,  1 >;  /**< Starts the WFG54 timer                                              */
    using TMIS54  = regbits< type, 15,  1 >;  /**< Stops the WFG54 timer                                               */
  };

  /**
   * "ICU ch.1,0 Connecting FRT Select Register"
   */
  struct ICU_ICFS10
  : public reg< uint8_t, base_addr + 0x60, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x60, rw, 0x00 >;

    using FSI0  = regbits< type,  0,  4 >;  /**< Connects FRT ch.x to ICU ch.(0)  */
    using FSI1  = regbits< type,  4,  4 >;  /**< Connects FRT ch.x to ICU ch.(1)  */
  };

  /**
   * "ICU ch.3,2 Connecting FRT Select Register"
   *
   * (derived from: ICU_ICFS10)
   */
  struct ICU_ICFS32
  : public reg< uint32_t, base_addr + 0x61, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * "ICU ch.1,0 Control Register A"
   */
  struct ICU_ICSA10
  : public reg< uint8_t, base_addr + 0x78, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x78, rw, 0x00 >;

    using EG0   = regbits< type,  0,  2 >;  /**< enables/disables the operation of ICU-ch.(0) and selects a valid edge(s)                                  */
    using EG1   = regbits< type,  2,  2 >;  /**< enables/disables the operation of ICU-ch.(1) and selects a valid edge(s)                                  */
    using ICE0  = regbits< type,  4,  1 >;  /**< "Generates interrupt, when ""1"" is set to ICSA.ICP0."                                                    */
    using ICE1  = regbits< type,  5,  1 >;  /**< "Generates interrupt, when ""1"" is set to ICSA.ICP1."                                                    */
    using ICP0  = regbits< type,  6,  1 >;  /**< Indicates that a valid edge has been detected at ICU ch.(0) and the capture operation has been performed  */
    using ICP1  = regbits< type,  7,  1 >;  /**< Indicates that a valid edge has been detected at ICU ch.(1) and the capture operation has been performed  */
  };

  /**
   * "ICU ch.3,2 Control Register A"
   *
   * (derived from: ICU_ICSA10)
   */
  struct ICU_ICSA32
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * "ICU ch.1,0 Control Register B"
   */
  struct ICU_ICSB10
  : public reg< uint8_t, base_addr + 0x79, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x79, ro, 0x00 >;

    using IEI0  = regbits< type,  0,  1 >;  /**< indicates the latest valid edge of ICU-ch.(0)  */
    using IEI1  = regbits< type,  1,  1 >;  /**< indicates the latest valid edge of ICU-ch.(1)  */
  };

  /**
   * "ICU ch.3,2 Control Register B"
   *
   * (derived from: ICU_ICSB10)
   */
  struct ICU_ICSB32
  : public reg< uint32_t, base_addr + 0x7d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ICU ch.0 Capture value store register
   */
  struct ICU_ICCP0
  : public reg< uint16_t, base_addr + 0x68, ro, 0x0000 >
  {
  };

  /**
   * ICU ch.1 Capture value store register
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP1
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ICU ch.2 Capture value store register
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP2
  : public reg< uint32_t, base_addr + 0x70, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ICU ch.3 Capture value store register
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP3
  : public reg< uint32_t, base_addr + 0x74, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP Control Register A
   */
  struct ADCMP_ACSA
  : public reg< uint16_t, base_addr + 0xbc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xbc, rw, 0x0000 >;

    using CE0   = regbits< type,  0,  2 >;  /**< enable or disable the operation of ADCMP-ch.0 and select the FRT to be connected          */
    using CE1   = regbits< type,  2,  2 >;  /**< enable or disable the operation of ADCMP-ch.1 and select the FRT to be connected          */
    using CE2   = regbits< type,  4,  2 >;  /**< enable or disable the operation of ADCMP-ch.2 and select the FRT to be connected          */
    using SEL0  = regbits< type,  8,  2 >;  /**< which count state FRT should be in to instruct AD conversion to be started at ADCMP-ch.0  */
    using SEL1  = regbits< type, 10,  2 >;  /**< which count state FRT should be in to instruct AD conversion to be started at ADCMP-ch.1  */
    using SEL2  = regbits< type, 12,  2 >;  /**< which count state FRT should be in to instruct AD conversion to be started at ADCMP-ch.2  */
  };

  /**
   * ADCMP Control Register B
   */
  struct ADCMP_ACSB
  : public reg< uint8_t, base_addr + 0xb8, rw, 0x07 >
  {
    using type = reg< uint8_t, base_addr + 0xb8, rw, 0x07 >;

    using BDIS0  = regbits< type,  0,  1 >;  /**< Disables the buffer function of the ACCP0 and ACCPDN0 registers                               */
    using BDIS1  = regbits< type,  1,  1 >;  /**< Disables the buffer function of the ACCP1 and ACCPDN1 registers                               */
    using BDIS2  = regbits< type,  2,  1 >;  /**< Disables the buffer function of the ACCP2 and ACCPDN2 registers                               */
    using BTS0   = regbits< type,  4,  1 >;  /**< Performs buffer transfer of the ACCP0 and ACCPDN0 registers upon Peak value detection by FRT  */
    using BTS1   = regbits< type,  5,  1 >;  /**< Performs buffer transfer of the ACCP1 and ACCPDN1 registers upon Peak value detection by FRT  */
    using BTS2   = regbits< type,  6,  1 >;  /**< Performs buffer transfer of the ACCP2 and ACCPDN2 registers upon Peak value detection by FRT  */
  };

  /**
   * ADCMP ch.0 Compare Value Store Register
   */
  struct ADCMP_ACCP0
  : public reg< uint16_t, base_addr + 0xa0, rw, 0x0000 >
  {
  };

  /**
   * ADCMP ch.1 Compare Value Store Register
   *
   * (derived from: ADCMP_ACCP0)
   */
  struct ADCMP_ACCP1
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.2 Compare Value Store Register
   *
   * (derived from: ADCMP_ACCP0)
   */
  struct ADCMP_ACCP2
  : public reg< uint32_t, base_addr + 0xb0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.0 Compare Value Store Register
   */
  struct ADCMP_ACCPDN0
  : public reg< uint16_t, base_addr + 0xa4, rw, 0x0000 >
  {
  };

  /**
   * ADCMP ch.1 Compare Value Store Register
   *
   * (derived from: ADCMP_ACCPDN0)
   */
  struct ADCMP_ACCPDN1
  : public reg< uint32_t, base_addr + 0xac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADCMP ch.2 Compare Value Store Register
   *
   * (derived from: ADCMP_ACCPDN0)
   */
  struct ADCMP_ACCPDN2
  : public reg< uint32_t, base_addr + 0xb4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ADC Start Trigger Select Register
   */
  struct ADCMP_ATSA
  : public reg< uint16_t, base_addr + 0xc0, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc0, rw, 0x0000 >;

    using AD0S  = regbits< type,  0,  2 >;  /**< selects the start signal to be used to start the scan conversion of ADC unit0  */
    using AD1S  = regbits< type,  2,  2 >;  /**< selects the start signal to be used to start the scan conversion of ADC unit1  */
    using AD2S  = regbits< type,  4,  2 >;  /**< selects the start signal to be used to start the scan conversion of ADC unit2  */
    using AD0P  = regbits< type,  8,  2 >;  /**< selects the start signal to be used to start priority conversion of ADC unit0  */
    using AD1P  = regbits< type, 10,  2 >;  /**< selects the start signal to be used to start priority conversion of ADC unit1  */
    using AD2P  = regbits< type, 12,  2 >;  /**< selects the start signal to be used to start priority conversion of ADC unit2  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MFT0_HPP_INCLUDED
