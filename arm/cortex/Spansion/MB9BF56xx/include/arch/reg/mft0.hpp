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
//  Import from CMSIS-SVD: "Spansion/MB9BF56xx.svd"
//
//  name: MB9BF56xx
//  version: 1.0
//  description: MB9BF56xx
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
   * register FRT_TCCP0
   */
  struct FRT_TCCP0
  : public reg< uint16_t, base_addr + 0x142, rw, 0xFFFF >
  {
  };

  /**
   * register FRT_TCDT0
   */
  struct FRT_TCDT0
  : public reg< uint16_t, base_addr + 0x146, rw, 0x0000 >
  {
  };

  /**
   * register FRT_TCSA0
   */
  struct FRT_TCSA0
  : public reg< uint16_t, base_addr + 0x148, rw, 0x0040 >
  {
    using type = reg< uint16_t, base_addr + 0x148, rw, 0x0040 >;

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
   * register FRT_TCSC0
   */
  struct FRT_TCSC0
  : public reg< uint16_t, base_addr + 0x14b, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x14b, rw, 0x0000 >;

    using MSPC  = regbits< type, 12,  4 >;  /**< bitfield MSPC  */
    using MSZC  = regbits< type,  8,  4 >;  /**< bitfield MSZC  */
    using MSPI  = regbits< type,  4,  4 >;  /**< bitfield MSPI  */
    using MSZI  = regbits< type,  0,  4 >;  /**< bitfield MSZI  */
  };

  /**
   * register FRT_TCCP1
   *
   * (derived from: FRT_TCCP0)
   */
  struct FRT_TCCP1
  : public reg< uint32_t, base_addr + 0x14e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCDT1
   *
   * (derived from: FRT_TCDT0)
   */
  struct FRT_TCDT1
  : public reg< uint32_t, base_addr + 0x152, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCSA1
   *
   * (derived from: FRT_TCSA0)
   */
  struct FRT_TCSA1
  : public reg< uint32_t, base_addr + 0x154, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCSC1
   *
   * (derived from: FRT_TCSC0)
   */
  struct FRT_TCSC1
  : public reg< uint32_t, base_addr + 0x156, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCCP2
   *
   * (derived from: FRT_TCCP0)
   */
  struct FRT_TCCP2
  : public reg< uint32_t, base_addr + 0x15a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCDT2
   *
   * (derived from: FRT_TCDT0)
   */
  struct FRT_TCDT2
  : public reg< uint32_t, base_addr + 0x15e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCSA2
   *
   * (derived from: FRT_TCSA0)
   */
  struct FRT_TCSA2
  : public reg< uint32_t, base_addr + 0x160, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCSC2
   *
   * (derived from: FRT_TCSC0)
   */
  struct FRT_TCSC2
  : public reg< uint32_t, base_addr + 0x162, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register FRT_TCAL
   */
  struct FRT_TCAL
  : public reg< uint32_t, base_addr + 0x164, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x164, rw, 0x00000000 >;

    using SCLR22  = regbits< type, 24,  1 >;  /**< bitfield SCLR22  */
    using SCLR21  = regbits< type, 23,  1 >;  /**< bitfield SCLR21  */
    using SCLR20  = regbits< type, 22,  1 >;  /**< bitfield SCLR20  */
    using SCLR12  = regbits< type, 21,  1 >;  /**< bitfield SCLR12  */
    using SCLR11  = regbits< type, 20,  1 >;  /**< bitfield SCLR11  */
    using SCLR10  = regbits< type, 19,  1 >;  /**< bitfield SCLR10  */
    using SCLR02  = regbits< type, 18,  1 >;  /**< bitfield SCLR02  */
    using SCLR01  = regbits< type, 17,  1 >;  /**< bitfield SCLR01  */
    using SCLR00  = regbits< type, 16,  1 >;  /**< bitfield SCLR00  */
    using STOP22  = regbits< type,  8,  1 >;  /**< bitfield STOP22  */
    using STOP21  = regbits< type,  7,  1 >;  /**< bitfield STOP21  */
    using STOP20  = regbits< type,  6,  1 >;  /**< bitfield STOP20  */
    using STOP12  = regbits< type,  5,  1 >;  /**< bitfield STOP12  */
    using STOP11  = regbits< type,  4,  1 >;  /**< bitfield STOP11  */
    using STOP10  = regbits< type,  3,  1 >;  /**< bitfield STOP10  */
    using STOP02  = regbits< type,  2,  1 >;  /**< bitfield STOP02  */
    using STOP01  = regbits< type,  1,  1 >;  /**< bitfield STOP01  */
    using STOP00  = regbits< type,  0,  1 >;  /**< bitfield STOP00  */
  };

  /**
   * register OCU_OCCP0
   */
  struct OCU_OCCP0
  : public reg< uint16_t, base_addr + 0x102, rw, 0x0000 >
  {
  };

  /**
   * register OCU_OCCP1
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP1
  : public reg< uint32_t, base_addr + 0x106, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCCP2
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP2
  : public reg< uint32_t, base_addr + 0x10a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCCP3
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP3
  : public reg< uint32_t, base_addr + 0x10e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCCP4
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP4
  : public reg< uint32_t, base_addr + 0x112, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCCP5
   *
   * (derived from: OCU_OCCP0)
   */
  struct OCU_OCCP5
  : public reg< uint32_t, base_addr + 0x116, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSA10
   */
  struct OCU_OCSA10
  : public reg< uint8_t, base_addr + 0x118, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x118, rw, 0x00 >;

    using IOP1  = regbits< type,  7,  1 >;  /**< bitfield IOP1  */
    using IOP0  = regbits< type,  6,  1 >;  /**< bitfield IOP0  */
    using IOE1  = regbits< type,  5,  1 >;  /**< bitfield IOE1  */
    using IOE0  = regbits< type,  4,  1 >;  /**< bitfield IOE0  */
    using CST1  = regbits< type,  1,  1 >;  /**< bitfield CST1  */
    using CST0  = regbits< type,  0,  1 >;  /**< bitfield CST0  */
  };

  /**
   * register OCU_OCSB10
   */
  struct OCU_OCSB10
  : public reg< uint8_t, base_addr + 0x119, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x119, rw, 0x00 >;

    using FM4   = regbits< type,  7,  1 >;  /**< bitfield FM4   */
    using CMOD  = regbits< type,  4,  1 >;  /**< bitfield CMOD  */
    using OTD1  = regbits< type,  1,  1 >;  /**< bitfield OTD1  */
    using OTD0  = regbits< type,  0,  1 >;  /**< bitfield OTD0  */
  };

  /**
   * register OCU_OCSD10
   */
  struct OCU_OCSD10
  : public reg< uint8_t, base_addr + 0x11a, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11a, rw, 0x00 >;

    using OCSE1BUFE  = regbits< type,  6,  2 >;  /**< bitfield OCSE1BUFE  */
    using OCSE0BUFE  = regbits< type,  4,  2 >;  /**< bitfield OCSE0BUFE  */
    using OCCP1BUFE  = regbits< type,  2,  2 >;  /**< bitfield OCCP1BUFE  */
    using OCCP0BUFE  = regbits< type,  0,  2 >;  /**< bitfield OCCP0BUFE  */
  };

  /**
   * register OCU_OCSA32
   *
   * (derived from: OCU_OCSA10)
   */
  struct OCU_OCSA32
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSB32
   *
   * (derived from: OCU_OCSB10)
   */
  struct OCU_OCSB32
  : public reg< uint32_t, base_addr + 0x11d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSD32
   *
   * (derived from: OCU_OCSD10)
   */
  struct OCU_OCSD32
  : public reg< uint32_t, base_addr + 0x11e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSA54
   *
   * (derived from: OCU_OCSA10)
   */
  struct OCU_OCSA54
  : public reg< uint32_t, base_addr + 0x120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSB54
   *
   * (derived from: OCU_OCSB10)
   */
  struct OCU_OCSB54
  : public reg< uint32_t, base_addr + 0x121, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSD54
   *
   * (derived from: OCU_OCSD10)
   */
  struct OCU_OCSD54
  : public reg< uint32_t, base_addr + 0x122, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSC
   */
  struct OCU_OCSC
  : public reg< uint16_t, base_addr + 0x124, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x124, rw, 0x0000 >;

    using MOD5  = regbits< type, 13,  1 >;  /**< bitfield MOD5  */
    using MOD4  = regbits< type, 12,  1 >;  /**< bitfield MOD4  */
    using MOD3  = regbits< type, 11,  1 >;  /**< bitfield MOD3  */
    using MOD2  = regbits< type, 10,  1 >;  /**< bitfield MOD2  */
    using MOD1  = regbits< type,  9,  1 >;  /**< bitfield MOD1  */
    using MOD0  = regbits< type,  8,  1 >;  /**< bitfield MOD0  */
  };

  /**
   * register OCU_OCSE0
   */
  struct OCU_OCSE0
  : public reg< uint8_t, base_addr + 0x128, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x128, rw, 0x00 >;

    using OCSE  = regbits< type,  0,  8 >;  /**< bitfield OCSE  */
  };

  /**
   * register OCU_OCSE1
   */
  struct OCU_OCSE1
  : public reg< uint16_t, base_addr + 0x12c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x12c, rw, 0x0000 >;

    using OCSE  = regbits< type,  0, 16 >;  /**< bitfield OCSE  */
  };

  /**
   * register OCU_OCSE2
   *
   * (derived from: OCU_OCSE0)
   */
  struct OCU_OCSE2
  : public reg< uint32_t, base_addr + 0x130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSE3
   *
   * (derived from: OCU_OCSE1)
   */
  struct OCU_OCSE3
  : public reg< uint32_t, base_addr + 0x134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSE4
   *
   * (derived from: OCU_OCSE0)
   */
  struct OCU_OCSE4
  : public reg< uint32_t, base_addr + 0x138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCSE5
   *
   * (derived from: OCU_OCSE1)
   */
  struct OCU_OCSE5
  : public reg< uint32_t, base_addr + 0x13c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCFS10
   */
  struct OCU_OCFS10
  : public reg< uint8_t, base_addr + 0x168, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x168, rw, 0x00 >;

    using FSO1  = regbits< type,  4,  4 >;  /**< bitfield FSO1  */
    using FSO0  = regbits< type,  0,  4 >;  /**< bitfield FSO0  */
  };

  /**
   * register OCU_OCFS32
   *
   * (derived from: OCU_OCFS10)
   */
  struct OCU_OCFS32
  : public reg< uint32_t, base_addr + 0x169, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register OCU_OCFS54
   *
   * (derived from: OCU_OCFS10)
   */
  struct OCU_OCFS54
  : public reg< uint32_t, base_addr + 0x16a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register WFG_WFTF10
   */
  struct WFG_WFTF10
  : public reg< uint16_t, base_addr + 0x18e, rw, 0x0000 >
  {
  };

  /**
   * register WFG_WFTA10
   */
  struct WFG_WFTA10
  : public reg< uint8_t, base_addr + 0x190, rw, 0x00 >
  {
  };

  /**
   * register WFG_WFTB10
   */
  struct WFG_WFTB10
  : public reg< uint8_t, base_addr + 0x192, rw, 0x00 >
  {
  };

  /**
   * register WFG_WFTF32
   */
  struct WFG_WFTF32
  : public reg< uint16_t, base_addr + 0x196, rw, 0x0000 >
  {
  };

  /**
   * register WFG_WFTA32
   */
  struct WFG_WFTA32
  : public reg< uint8_t, base_addr + 0x198, rw, 0x00 >
  {
  };

  /**
   * register WFG_WFTB32
   */
  struct WFG_WFTB32
  : public reg< uint8_t, base_addr + 0x19a, rw, 0x00 >
  {
  };

  /**
   * register WFG_WFTF54
   */
  struct WFG_WFTF54
  : public reg< uint16_t, base_addr + 0x19e, rw, 0x0000 >
  {
  };

  /**
   * register WFG_WFTA54
   */
  struct WFG_WFTA54
  : public reg< uint8_t, base_addr + 0x1a0, rw, 0x00 >
  {
  };

  /**
   * register WFG_WFTB54
   */
  struct WFG_WFTB54
  : public reg< uint8_t, base_addr + 0x1a2, rw, 0x00 >
  {
  };

  /**
   * register WFG_WFSA10
   */
  struct WFG_WFSA10
  : public reg< uint16_t, base_addr + 0x1a4, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1a4, rw, 0x0000 >;

    using DMOD  = regbits< type, 12,  2 >;  /**< bitfield DMOD  */
    using PGEN  = regbits< type, 10,  2 >;  /**< bitfield PGEN  */
    using PSEL  = regbits< type,  8,  2 >;  /**< bitfield PSEL  */
    using GTEN  = regbits< type,  6,  2 >;  /**< bitfield GTEN  */
    using TMD   = regbits< type,  3,  3 >;  /**< bitfield TMD   */
    using DCK   = regbits< type,  0,  3 >;  /**< bitfield DCK   */
  };

  /**
   * register WFG_WFSA32
   *
   * (derived from: WFG_WFSA10)
   */
  struct WFG_WFSA32
  : public reg< uint32_t, base_addr + 0x1a8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register WFG_WFSA54
   *
   * (derived from: WFG_WFSA10)
   */
  struct WFG_WFSA54
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register WFG_WFIR
   */
  struct WFG_WFIR
  : public reg< uint16_t, base_addr + 0x1b0, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1b0, rw, 0x0000 >;

    using TMIS54  = regbits< type, 15,  1 >;  /**< bitfield TMIS54  */
    using TMIE54  = regbits< type, 14,  1 >;  /**< bitfield TMIE54  */
    using TMIC54  = regbits< type, 13,  1 >;  /**< bitfield TMIC54  */
    using TMIF54  = regbits< type, 12,  1 >;  /**< bitfield TMIF54  */
    using TMIS32  = regbits< type, 11,  1 >;  /**< bitfield TMIS32  */
    using TMIE32  = regbits< type, 10,  1 >;  /**< bitfield TMIE32  */
    using TMIC32  = regbits< type,  9,  1 >;  /**< bitfield TMIC32  */
    using TMIF32  = regbits< type,  8,  1 >;  /**< bitfield TMIF32  */
    using TMIS10  = regbits< type,  7,  1 >;  /**< bitfield TMIS10  */
    using TMIE10  = regbits< type,  6,  1 >;  /**< bitfield TMIE10  */
    using TMIC10  = regbits< type,  5,  1 >;  /**< bitfield TMIC10  */
    using TMIF10  = regbits< type,  4,  1 >;  /**< bitfield TMIF10  */
    using DTICB   = regbits< type,  3,  1 >;  /**< bitfield DTICB   */
    using DTIFB   = regbits< type,  2,  1 >;  /**< bitfield DTIFB   */
    using DTICA   = regbits< type,  1,  1 >;  /**< bitfield DTICA   */
    using DTIFA   = regbits< type,  0,  1 >;  /**< bitfield DTIFA   */
  };

  /**
   * register WFG_NZCL
   */
  struct WFG_NZCL
  : public reg< uint16_t, base_addr + 0x1b4, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1b4, rw, 0x0000 >;

    using WIM54  = regbits< type, 14,  1 >;  /**< bitfield WIM54  */
    using WIM32  = regbits< type, 13,  1 >;  /**< bitfield WIM32  */
    using WIM10  = regbits< type, 12,  1 >;  /**< bitfield WIM10  */
    using DIMB   = regbits< type,  9,  1 >;  /**< bitfield DIMB   */
    using DIMA   = regbits< type,  8,  1 >;  /**< bitfield DIMA   */
    using DTIEB  = regbits< type,  5,  1 >;  /**< bitfield DTIEB  */
    using SDTI   = regbits< type,  4,  1 >;  /**< bitfield SDTI   */
    using NWS    = regbits< type,  1,  3 >;  /**< bitfield NWS    */
    using DTIEA  = regbits< type,  0,  1 >;  /**< bitfield DTIEA  */
  };

  /**
   * register ICU_ICFS10
   */
  struct ICU_ICFS10
  : public reg< uint8_t, base_addr + 0x16c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x16c, rw, 0x00 >;

    using FSI0  = regbits< type,  0,  4 >;  /**< bitfield FSI0  */
    using FSI1  = regbits< type,  4,  4 >;  /**< bitfield FSI1  */
  };

  /**
   * register ICU_ICFS32
   *
   * (derived from: ICU_ICFS10)
   */
  struct ICU_ICFS32
  : public reg< uint32_t, base_addr + 0x16d, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICCP0
   */
  struct ICU_ICCP0
  : public reg< uint16_t, base_addr + 0x176, ro, 0x0000 >
  {
  };

  /**
   * register ICU_ICCP1
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP1
  : public reg< uint32_t, base_addr + 0x17a, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICCP2
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP2
  : public reg< uint32_t, base_addr + 0x17e, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICCP3
   *
   * (derived from: ICU_ICCP0)
   */
  struct ICU_ICCP3
  : public reg< uint32_t, base_addr + 0x182, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICSA10
   */
  struct ICU_ICSA10
  : public reg< uint8_t, base_addr + 0x184, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x184, rw, 0x00 >;

    using EG0   = regbits< type,  0,  2 >;  /**< bitfield EG0   */
    using EG1   = regbits< type,  2,  2 >;  /**< bitfield EG1   */
    using ICE0  = regbits< type,  4,  1 >;  /**< bitfield ICE0  */
    using ICE1  = regbits< type,  5,  1 >;  /**< bitfield ICE1  */
    using ICP0  = regbits< type,  6,  1 >;  /**< bitfield ICP0  */
    using ICP1  = regbits< type,  7,  1 >;  /**< bitfield ICP1  */
  };

  /**
   * register ICU_ICSB10
   */
  struct ICU_ICSB10
  : public reg< uint8_t, base_addr + 0x185, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x185, ro, 0x00 >;

    using IEI0  = regbits< type,  0,  1 >;  /**< bitfield IEI0  */
    using IEI1  = regbits< type,  1,  1 >;  /**< bitfield IEI1  */
  };

  /**
   * register ICU_ICSA32
   *
   * (derived from: ICU_ICSA10)
   */
  struct ICU_ICSA32
  : public reg< uint32_t, base_addr + 0x188, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ICU_ICSB32
   *
   * (derived from: ICU_ICSB10)
   */
  struct ICU_ICSB32
  : public reg< uint32_t, base_addr + 0x189, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACFS10
   */
  struct ADCMP_ACFS10
  : public reg< uint8_t, base_addr + 0x170, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x170, rw, 0x00 >;

    using FSA1  = regbits< type,  4,  4 >;  /**< bitfield FSA1  */
    using FSA0  = regbits< type,  0,  4 >;  /**< bitfield FSA0  */
  };

  /**
   * register ADCMP_ACFS32
   *
   * (derived from: ADCMP_ACFS10)
   */
  struct ADCMP_ACFS32
  : public reg< uint32_t, base_addr + 0x171, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACFS54
   *
   * (derived from: ADCMP_ACFS10)
   */
  struct ADCMP_ACFS54
  : public reg< uint32_t, base_addr + 0x172, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACMP0
   */
  struct ADCMP_ACMP0
  : public reg< uint16_t, base_addr + 0x1ba, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1ba, rw, 0x0000 >;

    using ACMP  = regbits< type,  0, 16 >;  /**< bitfield ACMP  */
  };

  /**
   * register ADCMP_ACMP1
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP1
  : public reg< uint32_t, base_addr + 0x1be, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACMP2
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP2
  : public reg< uint32_t, base_addr + 0x1c2, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACMP3
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP3
  : public reg< uint32_t, base_addr + 0x1c6, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACMP4
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP4
  : public reg< uint32_t, base_addr + 0x1ca, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACMP5
   *
   * (derived from: ADCMP_ACMP0)
   */
  struct ADCMP_ACMP5
  : public reg< uint32_t, base_addr + 0x1ce, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSA
   */
  struct ADCMP_ACSA
  : public reg< uint16_t, base_addr + 0x1d0, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1d0, rw, 0x0000 >;

    using SEL54  = regbits< type, 12,  2 >;  /**< bitfield SEL54  */
    using SEL32  = regbits< type, 10,  2 >;  /**< bitfield SEL32  */
    using SEL10  = regbits< type,  8,  2 >;  /**< bitfield SEL10  */
    using CE54   = regbits< type,  4,  2 >;  /**< bitfield CE54   */
    using CE32   = regbits< type,  2,  2 >;  /**< bitfield CE32   */
    using CE10   = regbits< type,  0,  2 >;  /**< bitfield CE10   */
  };

  /**
   * register ADCMP_ACSC0
   */
  struct ADCMP_ACSC0
  : public reg< uint8_t, base_addr + 0x1d4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1d4, rw, 0x00 >;

    using ADSEL  = regbits< type,  2,  3 >;  /**< bitfield ADSEL  */
    using BUFE   = regbits< type,  0,  2 >;  /**< bitfield BUFE   */
  };

  /**
   * register ADCMP_ACSD0
   */
  struct ADCMP_ACSD0
  : public reg< uint8_t, base_addr + 0x1d5, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1d5, rw, 0x00 >;

    using ZE    = regbits< type,  7,  1 >;  /**< bitfield ZE    */
    using UE    = regbits< type,  6,  1 >;  /**< bitfield UE    */
    using PE    = regbits< type,  5,  1 >;  /**< bitfield PE    */
    using DE    = regbits< type,  4,  1 >;  /**< bitfield DE    */
    using OCUS  = regbits< type,  1,  1 >;  /**< bitfield OCUS  */
    using AMOD  = regbits< type,  0,  1 >;  /**< bitfield AMOD  */
  };

  /**
   * register ADCMP_ACSC1
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC1
  : public reg< uint32_t, base_addr + 0x1d8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSD1
   *
   * (derived from: ADCMP_ACSD0)
   */
  struct ADCMP_ACSD1
  : public reg< uint32_t, base_addr + 0x1d9, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSC2
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC2
  : public reg< uint32_t, base_addr + 0x1dc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSD2
   *
   * (derived from: ADCMP_ACSD0)
   */
  struct ADCMP_ACSD2
  : public reg< uint32_t, base_addr + 0x1dd, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSC3
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC3
  : public reg< uint32_t, base_addr + 0x1e0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSD3
   *
   * (derived from: ADCMP_ACSD0)
   */
  struct ADCMP_ACSD3
  : public reg< uint32_t, base_addr + 0x1e1, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSC4
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC4
  : public reg< uint32_t, base_addr + 0x1e4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSD4
   *
   * (derived from: ADCMP_ACSD0)
   */
  struct ADCMP_ACSD4
  : public reg< uint32_t, base_addr + 0x1e5, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSC5
   *
   * (derived from: ADCMP_ACSC0)
   */
  struct ADCMP_ACSC5
  : public reg< uint32_t, base_addr + 0x1e8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADCMP_ACSD5
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
