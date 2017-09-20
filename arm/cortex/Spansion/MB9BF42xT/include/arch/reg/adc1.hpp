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
//  Import from CMSIS-SVD: "Spansion/MB9BF42xT.svd"
//
//  name: MB9BF42xT
//  version: 1.0
//  description: MB9BF42xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADC1_HPP_INCLUDED
#define ARCH_REG_ADC1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral ADC0
 *
 * (derived from: ADC0)
 */
struct ADC1
{
  static constexpr reg_addr_t base_addr = 0x40027100;

  /**
   * register ADCR
   */
  struct ADCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using SCIF   = regbits< type,  7,  1 >;  /**< bitfield SCIF   */
    using PCIF   = regbits< type,  6,  1 >;  /**< bitfield PCIF   */
    using CMPIF  = regbits< type,  5,  1 >;  /**< bitfield CMPIF  */
    using SCIE   = regbits< type,  3,  1 >;  /**< bitfield SCIE   */
    using PCIE   = regbits< type,  2,  1 >;  /**< bitfield PCIE   */
    using CMPIE  = regbits< type,  1,  1 >;  /**< bitfield CMPIE  */
    using OVRIE  = regbits< type,  0,  1 >;  /**< bitfield OVRIE  */
  };

  /**
   * register ADSR
   */
  struct ADSR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using ADSTP  = regbits< type,  7,  1 >;  /**< bitfield ADSTP  */
    using FDAS   = regbits< type,  6,  1 >;  /**< bitfield FDAS   */
    using PCNS   = regbits< type,  2,  1 >;  /**< bitfield PCNS   */
    using PCS    = regbits< type,  1,  1 >;  /**< bitfield PCS    */
    using SCS    = regbits< type,  0,  1 >;  /**< bitfield SCS    */
  };

  /**
   * register SCCR
   */
  struct SCCR
  : public reg< uint8_t, base_addr + 0x9, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0x80 >;

    using SEMP   = regbits< type,  7,  1 >;  /**< bitfield SEMP   */
    using SFUL   = regbits< type,  6,  1 >;  /**< bitfield SFUL   */
    using SOVR   = regbits< type,  5,  1 >;  /**< bitfield SOVR   */
    using SFCLR  = regbits< type,  4,  1 >;  /**< bitfield SFCLR  */
    using RPT    = regbits< type,  2,  1 >;  /**< bitfield RPT    */
    using SHEN   = regbits< type,  1,  1 >;  /**< bitfield SHEN   */
    using SSTR   = regbits< type,  0,  1 >;  /**< bitfield SSTR   */
  };

  /**
   * register SFNS
   */
  struct SFNS
  : public reg< uint8_t, base_addr + 0x8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x00 >;

    using SFS  = regbits< type,  0,  4 >;  /**< bitfield SFS  */
  };

  /**
   * register SCFD
   */
  struct SCFD
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using SD    = regbits< type, 20, 12 >;  /**< bitfield SD    */
    using INVL  = regbits< type, 12,  1 >;  /**< bitfield INVL  */
    using RS    = regbits< type,  8,  2 >;  /**< bitfield RS    */
    using SC    = regbits< type,  0,  5 >;  /**< bitfield SC    */
  };

  /**
   * register SCIS3
   */
  struct SCIS3
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using AN31  = regbits< type,  7,  1 >;  /**< bitfield AN31  */
    using AN30  = regbits< type,  6,  1 >;  /**< bitfield AN30  */
    using AN29  = regbits< type,  5,  1 >;  /**< bitfield AN29  */
    using AN28  = regbits< type,  4,  1 >;  /**< bitfield AN28  */
    using AN27  = regbits< type,  3,  1 >;  /**< bitfield AN27  */
    using AN26  = regbits< type,  2,  1 >;  /**< bitfield AN26  */
    using AN25  = regbits< type,  1,  1 >;  /**< bitfield AN25  */
    using AN24  = regbits< type,  0,  1 >;  /**< bitfield AN24  */
  };

  /**
   * register SCIS2
   */
  struct SCIS2
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using AN23  = regbits< type,  7,  1 >;  /**< bitfield AN23  */
    using AN22  = regbits< type,  6,  1 >;  /**< bitfield AN22  */
    using AN21  = regbits< type,  5,  1 >;  /**< bitfield AN21  */
    using AN20  = regbits< type,  4,  1 >;  /**< bitfield AN20  */
    using AN19  = regbits< type,  3,  1 >;  /**< bitfield AN19  */
    using AN18  = regbits< type,  2,  1 >;  /**< bitfield AN18  */
    using AN17  = regbits< type,  1,  1 >;  /**< bitfield AN17  */
    using AN16  = regbits< type,  0,  1 >;  /**< bitfield AN16  */
  };

  /**
   * register SCIS1
   */
  struct SCIS1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x00 >;

    using AN15  = regbits< type,  7,  1 >;  /**< bitfield AN15  */
    using AN14  = regbits< type,  6,  1 >;  /**< bitfield AN14  */
    using AN13  = regbits< type,  5,  1 >;  /**< bitfield AN13  */
    using AN12  = regbits< type,  4,  1 >;  /**< bitfield AN12  */
    using AN11  = regbits< type,  3,  1 >;  /**< bitfield AN11  */
    using AN10  = regbits< type,  2,  1 >;  /**< bitfield AN10  */
    using AN9   = regbits< type,  1,  1 >;  /**< bitfield AN9   */
    using AN8   = regbits< type,  0,  1 >;  /**< bitfield AN8   */
  };

  /**
   * register SCIS0
   */
  struct SCIS0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using AN7  = regbits< type,  7,  1 >;  /**< bitfield AN7  */
    using AN6  = regbits< type,  6,  1 >;  /**< bitfield AN6  */
    using AN5  = regbits< type,  5,  1 >;  /**< bitfield AN5  */
    using AN4  = regbits< type,  4,  1 >;  /**< bitfield AN4  */
    using AN3  = regbits< type,  3,  1 >;  /**< bitfield AN3  */
    using AN2  = regbits< type,  2,  1 >;  /**< bitfield AN2  */
    using AN1  = regbits< type,  1,  1 >;  /**< bitfield AN1  */
    using AN0  = regbits< type,  0,  1 >;  /**< bitfield AN0  */
  };

  /**
   * register PFNS
   */
  struct PFNS
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x00 >;

    using TEST  = regbits< type,  4,  2 >;  /**< bitfield TEST  */
    using PFS   = regbits< type,  0,  2 >;  /**< bitfield PFS   */
  };

  /**
   * register PCCR
   */
  struct PCCR
  : public reg< uint8_t, base_addr + 0x19, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x19, rw, 0x80 >;

    using PEMP   = regbits< type,  7,  1 >;  /**< bitfield PEMP   */
    using PFUL   = regbits< type,  6,  1 >;  /**< bitfield PFUL   */
    using POVR   = regbits< type,  5,  1 >;  /**< bitfield POVR   */
    using PFCLR  = regbits< type,  4,  1 >;  /**< bitfield PFCLR  */
    using ESCE   = regbits< type,  3,  1 >;  /**< bitfield ESCE   */
    using PEEN   = regbits< type,  2,  1 >;  /**< bitfield PEEN   */
    using PHEN   = regbits< type,  1,  1 >;  /**< bitfield PHEN   */
    using PSTR   = regbits< type,  0,  1 >;  /**< bitfield PSTR   */
  };

  /**
   * register PCFD
   */
  struct PCFD
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using PD    = regbits< type, 20, 12 >;  /**< bitfield PD    */
    using INVL  = regbits< type, 12,  1 >;  /**< bitfield INVL  */
    using RS    = regbits< type,  8,  3 >;  /**< bitfield RS    */
    using PC    = regbits< type,  0,  5 >;  /**< bitfield PC    */
  };

  /**
   * register PCIS
   */
  struct PCIS
  : public reg< uint8_t, base_addr + 0x20, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x00 >;

    using P2A  = regbits< type,  3,  5 >;  /**< bitfield P2A  */
    using P1A  = regbits< type,  0,  3 >;  /**< bitfield P1A  */
  };

  /**
   * register CMPCR
   */
  struct CMPCR
  : public reg< uint8_t, base_addr + 0x24, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0x00 >;

    using CMPEN  = regbits< type,  7,  1 >;  /**< bitfield CMPEN  */
    using CMD1   = regbits< type,  6,  1 >;  /**< bitfield CMD1   */
    using CMD0   = regbits< type,  5,  1 >;  /**< bitfield CMD0   */
    using CCH    = regbits< type,  0,  5 >;  /**< bitfield CCH    */
  };

  /**
   * register CMPD
   */
  struct CMPD
  : public reg< uint16_t, base_addr + 0x26, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x26, rw, 0x0000 >;

    using CMAD  = regbits< type,  6, 10 >;  /**< bitfield CMAD  */
  };

  /**
   * register ADSS3
   */
  struct ADSS3
  : public reg< uint8_t, base_addr + 0x29, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x29, rw, 0x00 >;

    using TS31  = regbits< type,  7,  1 >;  /**< bitfield TS31  */
    using TS30  = regbits< type,  6,  1 >;  /**< bitfield TS30  */
    using TS29  = regbits< type,  5,  1 >;  /**< bitfield TS29  */
    using TS28  = regbits< type,  4,  1 >;  /**< bitfield TS28  */
    using TS27  = regbits< type,  3,  1 >;  /**< bitfield TS27  */
    using TS26  = regbits< type,  2,  1 >;  /**< bitfield TS26  */
    using TS25  = regbits< type,  1,  1 >;  /**< bitfield TS25  */
    using TS24  = regbits< type,  0,  1 >;  /**< bitfield TS24  */
  };

  /**
   * register ADSS2
   */
  struct ADSS2
  : public reg< uint8_t, base_addr + 0x28, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0x00 >;

    using TS23  = regbits< type,  7,  1 >;  /**< bitfield TS23  */
    using TS22  = regbits< type,  6,  1 >;  /**< bitfield TS22  */
    using TS21  = regbits< type,  5,  1 >;  /**< bitfield TS21  */
    using TS20  = regbits< type,  4,  1 >;  /**< bitfield TS20  */
    using TS19  = regbits< type,  3,  1 >;  /**< bitfield TS19  */
    using TS18  = regbits< type,  2,  1 >;  /**< bitfield TS18  */
    using TS17  = regbits< type,  1,  1 >;  /**< bitfield TS17  */
    using TS16  = regbits< type,  0,  1 >;  /**< bitfield TS16  */
  };

  /**
   * register ADSS1
   */
  struct ADSS1
  : public reg< uint8_t, base_addr + 0x2d, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2d, rw, 0x00 >;

    using TS15  = regbits< type,  7,  1 >;  /**< bitfield TS15  */
    using TS14  = regbits< type,  6,  1 >;  /**< bitfield TS14  */
    using TS13  = regbits< type,  5,  1 >;  /**< bitfield TS13  */
    using TS12  = regbits< type,  4,  1 >;  /**< bitfield TS12  */
    using TS11  = regbits< type,  3,  1 >;  /**< bitfield TS11  */
    using TS10  = regbits< type,  2,  1 >;  /**< bitfield TS10  */
    using TS9   = regbits< type,  1,  1 >;  /**< bitfield TS9   */
    using TS8   = regbits< type,  0,  1 >;  /**< bitfield TS8   */
  };

  /**
   * register ADSS0
   */
  struct ADSS0
  : public reg< uint8_t, base_addr + 0x2c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2c, rw, 0x00 >;

    using TS7  = regbits< type,  7,  1 >;  /**< bitfield TS7  */
    using TS6  = regbits< type,  6,  1 >;  /**< bitfield TS6  */
    using TS5  = regbits< type,  5,  1 >;  /**< bitfield TS5  */
    using TS4  = regbits< type,  4,  1 >;  /**< bitfield TS4  */
    using TS3  = regbits< type,  3,  1 >;  /**< bitfield TS3  */
    using TS2  = regbits< type,  2,  1 >;  /**< bitfield TS2  */
    using TS1  = regbits< type,  1,  1 >;  /**< bitfield TS1  */
    using TS0  = regbits< type,  0,  1 >;  /**< bitfield TS0  */
  };

  /**
   * register ADST1
   */
  struct ADST1
  : public reg< uint8_t, base_addr + 0x30, rw, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x10 >;

    using STX1  = regbits< type,  5,  3 >;  /**< bitfield STX1  */
    using ST1   = regbits< type,  0,  5 >;  /**< bitfield ST1   */
  };

  /**
   * register ADST0
   */
  struct ADST0
  : public reg< uint8_t, base_addr + 0x31, rw, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x31, rw, 0x10 >;

    using STX0  = regbits< type,  5,  3 >;  /**< bitfield STX0  */
    using ST0   = regbits< type,  0,  5 >;  /**< bitfield ST0   */
  };

  /**
   * register ADCT
   */
  struct ADCT
  : public reg< uint8_t, base_addr + 0x34, rw, 0x07 >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0x07 >;

    using CT  = regbits< type,  0,  8 >;  /**< bitfield CT  */
  };

  /**
   * register PRTSL
   */
  struct PRTSL
  : public reg< uint8_t, base_addr + 0x38, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x38, rw, 0x00 >;

    // fixme: Field name equals parent register name: PRTSL
    using PRTSL_ = regbits< type,  0,  4 >;  /**< bitfield PRTSL  */
  };

  /**
   * register SCTSL
   */
  struct SCTSL
  : public reg< uint8_t, base_addr + 0x39, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x39, rw, 0x00 >;

    // fixme: Field name equals parent register name: SCTSL
    using SCTSL_ = regbits< type,  0,  4 >;  /**< bitfield SCTSL  */
  };

  /**
   * register ADCEN
   */
  struct ADCEN
  : public reg< uint16_t, base_addr + 0x3c, rw, 0xFF00 >
  {
    using type = reg< uint16_t, base_addr + 0x3c, rw, 0xFF00 >;

    using ENBLTIME  = regbits< type,  8,  8 >;  /**< bitfield ENBLTIME  */
    using READY     = regbits< type,  1,  1 >;  /**< bitfield READY     */
    using ENBL      = regbits< type,  0,  1 >;  /**< bitfield ENBL      */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC1_HPP_INCLUDED
