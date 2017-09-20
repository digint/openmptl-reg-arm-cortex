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
//  Import from CMSIS-SVD: "Spansion/MB9AF12xK.svd"
//
//  name: MB9AF12xK
//  version: 1.0
//  description: MB9AF12xK
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
 * peripheral MFT0
 */
struct MFT0
{
  static constexpr reg_addr_t base_addr = 0x40020000;

  /**
   * register FRT_TCSA0
   */
  struct FRT_TCSA0
  : public reg< uint16_t, base_addr + 0x30, rw, 0x0040 >
  {
    using type = reg< uint16_t, base_addr + 0x30, rw, 0x0040 >;

    using CLK    = regbits< type,  0,  4 >;  /**< bitfield CLK    */
    using SCLR   = regbits< type,  4,  1 >;  /**< bitfield SCLR   */
    using MODE   = regbits< type,  5,  1 >;  /**< bitfield MODE   */
    using STOP   = regbits< type,  6,  1 >;  /**< bitfield STOP   */
    using BFE    = regbits< type,  7,  1 >;  /**< bitfield BFE    */
    using ICRE   = regbits< type,  8,  1 >;  /**< bitfield ICRE   */
    using ICLR   = regbits< type,  9,  1 >;  /**< bitfield ICLR   */
    using IRQZE  = regbits< type, 13,  1 >;  /**< bitfield IRQZE  */
    using IRQZF  = regbits< type, 14,  1 >;  /**< bitfield IRQZF  */
    using ECKE   = regbits< type, 15,  1 >;  /**< bitfield ECKE   */
  };

  /**
   * register FRT_TCSA1
   *
   * (derived from: FRT_TCSA0)
   */
  struct FRT_TCSA1
  : public reg< uint32_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCSA2
   *
   * (derived from: FRT_TCSA0)
   */
  struct FRT_TCSA2
  : public reg< uint32_t, base_addr + 0x50, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCSB0
   */
  struct FRT_TCSB0
  : public reg< uint16_t, base_addr + 0x34, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x34, rw, 0x0000 >;

    using AD0E  = regbits< type,  0,  1 >;  /**< bitfield AD0E  */
  };

  /**
   * register FRT_TCSB1
   *
   * (derived from: FRT_TCSB0)
   */
  struct FRT_TCSB1
  : public reg< uint32_t, base_addr + 0x44, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCSB2
   *
   * (derived from: FRT_TCSB0)
   */
  struct FRT_TCSB2
  : public reg< uint32_t, base_addr + 0x54, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCCP0
   */
  struct FRT_TCCP0
  : public reg< uint16_t, base_addr + 0x28, rw, 0xFFFF >
  {
  };

  /**
   * register FRT_TCCP1
   *
   * (derived from: FRT_TCCP0)
   */
  struct FRT_TCCP1
  : public reg< uint32_t, base_addr + 0x38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCCP2
   *
   * (derived from: FRT_TCCP0)
   */
  struct FRT_TCCP2
  : public reg< uint32_t, base_addr + 0x48, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCDT0
   */
  struct FRT_TCDT0
  : public reg< uint16_t, base_addr + 0x2c, rw, 0x0000 >
  {
  };

  /**
   * register FRT_TCDT1
   *
   * (derived from: FRT_TCDT0)
   */
  struct FRT_TCDT1
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCDT2
   *
   * (derived from: FRT_TCDT0)
   */
  struct FRT_TCDT2
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCFS10
   */
  struct OCU_OCFS10
  : public reg< uint8_t, base_addr + 0x58, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x58, rw, 0x00 >;

    using FSO0  = regbits< type,  0,  4 >;  /**< bitfield FSO0  */
    using FSO1  = regbits< type,  4,  4 >;  /**< bitfield FSO1  */
  };

  /**
   * register OCU_OCFS32
   *
   * (derived from: OCU_OCFS10)
   */
  struct OCU_OCFS32
  : public reg< uint32_t, base_addr + 0x59, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCFS54
   *
   * (derived from: OCU_OCFS10)
   */
  struct OCU_OCFS54
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSA10
   */
  struct OCU_OCSA10
  : public reg< uint8_t, base_addr + 0x18, rw, 0x0C >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x0C >;

    using CST0   = regbits< type,  0,  1 >;  /**< bitfield CST0   */
    using CST1   = regbits< type,  1,  1 >;  /**< bitfield CST1   */
    using BDIS0  = regbits< type,  2,  1 >;  /**< bitfield BDIS0  */
    using BDIS1  = regbits< type,  3,  1 >;  /**< bitfield BDIS1  */
    using IOE0   = regbits< type,  4,  1 >;  /**< bitfield IOE0   */
    using IOE1   = regbits< type,  5,  1 >;  /**< bitfield IOE1   */
    using IOP0   = regbits< type,  6,  1 >;  /**< bitfield IOP0   */
    using IOP1   = regbits< type,  7,  1 >;  /**< bitfield IOP1   */
  };

  /**
   * register OCU_OCSA32
   *
   * (derived from: OCU_OCSA10)
   */
  struct OCU_OCSA32
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSA54
   *
   * (derived from: OCU_OCSA10)
   */
  struct OCU_OCSA54
  : public reg< uint32_t, base_addr + 0x20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSB10
   */
  struct OCU_OCSB10
  : public reg< uint8_t, base_addr + 0x19, rw, 0x60 >
  {
    using type = reg< uint8_t, base_addr + 0x19, rw, 0x60 >;

    using OTD0  = regbits< type,  0,  1 >;  /**< bitfield OTD0  */
    using OTD1  = regbits< type,  1,  1 >;  /**< bitfield OTD1  */
    using CMOD  = regbits< type,  4,  1 >;  /**< bitfield CMOD  */
    using BTS0  = regbits< type,  5,  1 >;  /**< bitfield BTS0  */
    using BTS1  = regbits< type,  6,  1 >;  /**< bitfield BTS1  */
  };

  /**
   * register OCU_OCSB32
   *
   * (derived from: OCU_OCSB10)
   */
  struct OCU_OCSB32
  : public reg< uint32_t, base_addr + 0x1d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSB54
   *
   * (derived from: OCU_OCSB10)
   */
  struct OCU_OCSB54
  : public reg< uint32_t, base_addr + 0x21, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSC
   */
  struct OCU_OCSC
  : public reg< uint16_t, base_addr + 0x24, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0x0000 >;

    using MOD0  = regbits< type,  8,  1 >;  /**< bitfield MOD0  */
    using MOD1  = regbits< type,  9,  1 >;  /**< bitfield MOD1  */
    using MOD2  = regbits< type, 10,  1 >;  /**< bitfield MOD2  */
    using MOD3  = regbits< type, 11,  1 >;  /**< bitfield MOD3  */
    using MOD4  = regbits< type, 12,  1 >;  /**< bitfield MOD4  */
    using MOD5  = regbits< type, 13,  1 >;  /**< bitfield MOD5  */
  };

  /**
   * register OCU_OCCP0
   */
  struct OCU_OCCP0
  : public reg< uint16_t, base_addr + 0x0, rw, 0x0000 >
  {
  };

  /**
   * register OCU_OCCP1
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCCP2
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCCP3
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP3
  : public reg< uint32_t, base_addr + 0xc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCCP4
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP4
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCCP5
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP5
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register WFG_WFSA10
   */
  struct WFG_WFSA10
  : public reg< uint16_t, base_addr + 0x8c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x8c, rw, 0x0000 >;

    using DCK   = regbits< type,  0,  3 >;  /**< bitfield DCK   */
    using TMD   = regbits< type,  3,  3 >;  /**< bitfield TMD   */
    using GTEN  = regbits< type,  6,  2 >;  /**< bitfield GTEN  */
    using PSEL  = regbits< type,  8,  2 >;  /**< bitfield PSEL  */
    using PGEN  = regbits< type, 10,  2 >;  /**< bitfield PGEN  */
    using DMOD  = regbits< type, 12,  1 >;  /**< bitfield DMOD  */
  };

  /**
   * register WFG_WFSA32
   *
   * (derived from: WFG_WFSA10)
   */
  struct WFG_WFSA32
  : public reg< uint32_t, base_addr + 0x90, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register WFG_WFSA54
   *
   * (derived from: WFG_WFSA10)
   */
  struct WFG_WFSA54
  : public reg< uint32_t, base_addr + 0x94, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register WFG_WFTM10
   */
  struct WFG_WFTM10
  : public reg< uint16_t, base_addr + 0x80, rw, 0x0000 >
  {
  };

  /**
   * register WFG_WFTM32
   *
   * (derived from: WFG_WFTM10)
   */
  struct WFG_WFTM32
  : public reg< uint32_t, base_addr + 0x84, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register WFG_WFTM54
   *
   * (derived from: WFG_WFTM10)
   */
  struct WFG_WFTM54
  : public reg< uint32_t, base_addr + 0x88, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register WFG_NZCL
   */
  struct WFG_NZCL
  : public reg< uint16_t, base_addr + 0x9c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x9c, rw, 0x0000 >;

    using DTIE  = regbits< type,  0,  1 >;  /**< bitfield DTIE  */
    using NWS   = regbits< type,  1,  3 >;  /**< bitfield NWS   */
    using SDTI  = regbits< type,  4,  1 >;  /**< bitfield SDTI  */
  };

  /**
   * register WFG_WFIR
   */
  struct WFG_WFIR
  : public reg< uint16_t, base_addr + 0x98, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x98, rw, 0x0000 >;

    using DTIF    = regbits< type,  0,  1 >;  /**< bitfield DTIF    */
    using DTIC    = regbits< type,  1,  1 >;  /**< bitfield DTIC    */
    using TMIF10  = regbits< type,  4,  1 >;  /**< bitfield TMIF10  */
    using TMIC10  = regbits< type,  5,  1 >;  /**< bitfield TMIC10  */
    using TMIE10  = regbits< type,  6,  1 >;  /**< bitfield TMIE10  */
    using TMIS10  = regbits< type,  7,  1 >;  /**< bitfield TMIS10  */
    using TMIF32  = regbits< type,  8,  1 >;  /**< bitfield TMIF32  */
    using TMIC32  = regbits< type,  9,  1 >;  /**< bitfield TMIC32  */
    using TMIE32  = regbits< type, 10,  1 >;  /**< bitfield TMIE32  */
    using TMIS32  = regbits< type, 11,  1 >;  /**< bitfield TMIS32  */
    using TMIF54  = regbits< type, 12,  1 >;  /**< bitfield TMIF54  */
    using TMIC54  = regbits< type, 13,  1 >;  /**< bitfield TMIC54  */
    using TMIE54  = regbits< type, 14,  1 >;  /**< bitfield TMIE54  */
    using TMIS54  = regbits< type, 15,  1 >;  /**< bitfield TMIS54  */
  };

  /**
   * register ICU_ICFS10
   */
  struct ICU_ICFS10
  : public reg< uint8_t, base_addr + 0x60, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x60, rw, 0x00 >;

    using FSI0  = regbits< type,  0,  4 >;  /**< bitfield FSI0  */
    using FSI1  = regbits< type,  4,  4 >;  /**< bitfield FSI1  */
  };

  /**
   * register ICU_ICFS32
   *
   * (derived from: ICU_ICFS10)
   */
  struct ICU_ICFS32
  : public reg< uint32_t, base_addr + 0x61, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICSA10
   */
  struct ICU_ICSA10
  : public reg< uint8_t, base_addr + 0x78, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x78, rw, 0x00 >;

    using EG0   = regbits< type,  0,  2 >;  /**< bitfield EG0   */
    using EG1   = regbits< type,  2,  2 >;  /**< bitfield EG1   */
    using ICE0  = regbits< type,  4,  1 >;  /**< bitfield ICE0  */
    using ICE1  = regbits< type,  5,  1 >;  /**< bitfield ICE1  */
    using ICP0  = regbits< type,  6,  1 >;  /**< bitfield ICP0  */
    using ICP1  = regbits< type,  7,  1 >;  /**< bitfield ICP1  */
  };

  /**
   * register ICU_ICSA32
   *
   * (derived from: ICU_ICSA10)
   */
  struct ICU_ICSA32
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICSB10
   */
  struct ICU_ICSB10
  : public reg< uint8_t, base_addr + 0x79, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x79, ro, 0x00 >;

    using IEI0  = regbits< type,  0,  1 >;  /**< bitfield IEI0  */
    using IEI1  = regbits< type,  1,  1 >;  /**< bitfield IEI1  */
  };

  /**
   * register ICU_ICSB32
   *
   * (derived from: ICU_ICSB10)
   */
  struct ICU_ICSB32
  : public reg< uint32_t, base_addr + 0x7d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICCP0
   */
  struct ICU_ICCP0
  : public reg< uint16_t, base_addr + 0x68, ro, 0x0000 >
  {
  };

  /**
   * register ICU_ICCP1
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP1
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICCP2
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP2
  : public reg< uint32_t, base_addr + 0x70, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICCP3
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP3
  : public reg< uint32_t, base_addr + 0x74, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSA
   */
  struct ADCMP_ACSA
  : public reg< uint16_t, base_addr + 0xbc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xbc, rw, 0x0000 >;

    using CE0   = regbits< type,  0,  2 >;  /**< bitfield CE0   */
    using CE1   = regbits< type,  2,  2 >;  /**< bitfield CE1   */
    using CE2   = regbits< type,  4,  2 >;  /**< bitfield CE2   */
    using SEL0  = regbits< type,  8,  2 >;  /**< bitfield SEL0  */
    using SEL1  = regbits< type, 10,  2 >;  /**< bitfield SEL1  */
    using SEL2  = regbits< type, 12,  2 >;  /**< bitfield SEL2  */
  };

  /**
   * register ADCMP_ACSB
   */
  struct ADCMP_ACSB
  : public reg< uint8_t, base_addr + 0xb8, rw, 0x07 >
  {
    using type = reg< uint8_t, base_addr + 0xb8, rw, 0x07 >;

    using BDIS0  = regbits< type,  0,  1 >;  /**< bitfield BDIS0  */
    using BDIS1  = regbits< type,  1,  1 >;  /**< bitfield BDIS1  */
    using BDIS2  = regbits< type,  2,  1 >;  /**< bitfield BDIS2  */
    using BTS0   = regbits< type,  4,  1 >;  /**< bitfield BTS0   */
    using BTS1   = regbits< type,  5,  1 >;  /**< bitfield BTS1   */
    using BTS2   = regbits< type,  6,  1 >;  /**< bitfield BTS2   */
  };

  /**
   * register ADCMP_ACCP0
   */
  struct ADCMP_ACCP0
  : public reg< uint16_t, base_addr + 0xa0, rw, 0x0000 >
  {
  };

  /**
   * register ADCMP_ACCP1
   *
   * (derived from: ADCMP_ACCP0)
   */
  struct ADCMP_ACCP1
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACCP2
   *
   * (derived from: ADCMP_ACCP0)
   */
  struct ADCMP_ACCP2
  : public reg< uint32_t, base_addr + 0xb0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACCPDN0
   */
  struct ADCMP_ACCPDN0
  : public reg< uint16_t, base_addr + 0xa4, rw, 0x0000 >
  {
  };

  /**
   * register ADCMP_ACCPDN1
   *
   * (derived from: ADCMP_ACCPDN0)
   */
  struct ADCMP_ACCPDN1
  : public reg< uint32_t, base_addr + 0xac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACCPDN2
   *
   * (derived from: ADCMP_ACCPDN0)
   */
  struct ADCMP_ACCPDN2
  : public reg< uint32_t, base_addr + 0xb4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ATSA
   */
  struct ADCMP_ATSA
  : public reg< uint16_t, base_addr + 0xc0, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xc0, rw, 0x0000 >;

    using AD0S  = regbits< type,  0,  2 >;  /**< bitfield AD0S  */
    using AD0P  = regbits< type,  8,  2 >;  /**< bitfield AD0P  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MFT0_HPP_INCLUDED
