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
//  Import from CMSIS-SVD: "Fujitsu/MB9AF14xN.svd"
//
//  name: MB9AF14xN
//  version: 1.8
//  description: MB9AF14xN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADC0_HPP_INCLUDED
#define ARCH_REG_ADC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * ADC0 Registers
 */
struct ADC0
{
  static constexpr reg_addr_t base_addr = 0x40027000;

  /**
   * A/D Control Register
   */
  struct ADCR
  : public reg< uint8_t, base_addr + 0x1, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x00 >;

    using SCIF   = regbits< type,  7,  1 >;  /**< Scan conversion interrupt request bit               */
    using PCIF   = regbits< type,  6,  1 >;  /**< Priority conversion interrupt request bit           */
    using CMPIF  = regbits< type,  5,  1 >;  /**< Conversion result comparison interrupt request bit  */
    using SCIE   = regbits< type,  3,  1 >;  /**< Scan conversion interrupt enable bit                */
    using PCIE   = regbits< type,  2,  1 >;  /**< Priority conversion interrupt enable bit            */
    using CMPIE  = regbits< type,  1,  1 >;  /**< Conversion result comparison interrupt enable bit   */
    using OVRIE  = regbits< type,  0,  1 >;  /**< FIFO overrun interrupt enable bit                   */
  };

  /**
   * A/D Status Register
   */
  struct ADSR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using ADSTP  = regbits< type,  7,  1 >;  /**< A/D conversion forced stop bit     */
    using FDAS   = regbits< type,  6,  1 >;  /**< FIFO data placement selection bit  */
    using PCNS   = regbits< type,  2,  1 >;  /**< Priority conversion pending flag   */
    using PCS    = regbits< type,  1,  1 >;  /**< Priority conversion status flag    */
    using SCS    = regbits< type,  0,  1 >;  /**< Scan conversion status flag        */
  };

  /**
   * Scan Conversion Control Register
   */
  struct SCCR
  : public reg< uint8_t, base_addr + 0x9, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0x80 >;

    using SEMP   = regbits< type,  7,  1 >;  /**< Scan conversion FIFO empty bit          */
    using SFUL   = regbits< type,  6,  1 >;  /**< Scan conversion FIFO full bit           */
    using SOVR   = regbits< type,  5,  1 >;  /**< Scan conversion overrun flag            */
    using SFCLR  = regbits< type,  4,  1 >;  /**< Scan conversion FIFO clear bit          */
    using RPT    = regbits< type,  2,  1 >;  /**< Scan conversion repeat bit              */
    using SHEN   = regbits< type,  1,  1 >;  /**< Scan conversion timer start enable bit  */
    using SSTR   = regbits< type,  0,  1 >;  /**< Scan conversion start bit               */
  };

  /**
   * Scan Conversion FIFO Stage Count Setup Register
   */
  struct SFNS
  : public reg< uint8_t, base_addr + 0x8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x00 >;

    using SFS  = regbits< type,  0,  4 >;  /**< Scan conversion FIFO stage count setting bit  */
  };

  /**
   * Scan Conversion FIFO Data Register
   */
  struct SCFD
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using SD    = regbits< type, 20, 12 >;  /**< Scan conversion result             */
    using INVL  = regbits< type, 12,  1 >;  /**< A/D conversion result disable bit  */
    using RS    = regbits< type,  8,  2 >;  /**< Scan conversion start factor       */
    using SC    = regbits< type,  0,  5 >;  /**< Conversion input channel bits      */
  };

  /**
   * Scan Conversion Input Selection Register 3
   */
  struct SCIS3
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using AN31  = regbits< type,  7,  1 >;  /**< Bit7 of SCIS3  */
    using AN30  = regbits< type,  6,  1 >;  /**< Bit6 of SCIS3  */
    using AN29  = regbits< type,  5,  1 >;  /**< Bit5 of SCIS3  */
    using AN28  = regbits< type,  4,  1 >;  /**< Bit4 of SCIS3  */
    using AN27  = regbits< type,  3,  1 >;  /**< Bit3 of SCIS3  */
    using AN26  = regbits< type,  2,  1 >;  /**< Bit2 of SCIS3  */
    using AN25  = regbits< type,  1,  1 >;  /**< Bit1 of SCIS3  */
    using AN24  = regbits< type,  0,  1 >;  /**< Bit0 of SCIS3  */
  };

  /**
   * Scan Conversion Input Selection Register 2
   */
  struct SCIS2
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using AN23  = regbits< type,  7,  1 >;  /**< Bit7 of SCIS2  */
    using AN22  = regbits< type,  6,  1 >;  /**< Bit6 of SCIS2  */
    using AN21  = regbits< type,  5,  1 >;  /**< Bit5 of SCIS2  */
    using AN20  = regbits< type,  4,  1 >;  /**< Bit4 of SCIS2  */
    using AN19  = regbits< type,  3,  1 >;  /**< Bit3 of SCIS2  */
    using AN18  = regbits< type,  2,  1 >;  /**< Bit2 of SCIS2  */
    using AN17  = regbits< type,  1,  1 >;  /**< Bit1 of SCIS2  */
    using AN16  = regbits< type,  0,  1 >;  /**< Bit0 of SCIS2  */
  };

  /**
   * Scan Conversion Input Selection Register 1
   */
  struct SCIS1
  : public reg< uint8_t, base_addr + 0x15, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x00 >;

    using AN15  = regbits< type,  7,  1 >;  /**< Bit7 of SCIS1  */
    using AN14  = regbits< type,  6,  1 >;  /**< Bit6 of SCIS1  */
    using AN13  = regbits< type,  5,  1 >;  /**< Bit5 of SCIS1  */
    using AN12  = regbits< type,  4,  1 >;  /**< Bit4 of SCIS1  */
    using AN11  = regbits< type,  3,  1 >;  /**< Bit3 of SCIS1  */
    using AN10  = regbits< type,  2,  1 >;  /**< Bit2 of SCIS1  */
    using AN9   = regbits< type,  1,  1 >;  /**< Bit1 of SCIS1  */
    using AN8   = regbits< type,  0,  1 >;  /**< Bit0 of SCIS1  */
  };

  /**
   * Scan Conversion Input Selection Register 0
   */
  struct SCIS0
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using AN7  = regbits< type,  7,  1 >;  /**< Bit7 of SCIS0  */
    using AN6  = regbits< type,  6,  1 >;  /**< Bit6 of SCIS0  */
    using AN5  = regbits< type,  5,  1 >;  /**< Bit5 of SCIS0  */
    using AN4  = regbits< type,  4,  1 >;  /**< Bit4 of SCIS0  */
    using AN3  = regbits< type,  3,  1 >;  /**< Bit3 of SCIS0  */
    using AN2  = regbits< type,  2,  1 >;  /**< Bit2 of SCIS0  */
    using AN1  = regbits< type,  1,  1 >;  /**< Bit1 of SCIS0  */
    using AN0  = regbits< type,  0,  1 >;  /**< Bit0 of SCIS0  */
  };

  /**
   * Priority Conversion FIFO Stage Count Setup Register
   */
  struct PFNS
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x00 >;

    using TEST  = regbits< type,  4,  2 >;  /**< Test bits                                          */
    using PFS   = regbits< type,  0,  2 >;  /**< Priority conversion FIFO stage count setting bits  */
  };

  /**
   * Priority Conversion Control Register
   */
  struct PCCR
  : public reg< uint8_t, base_addr + 0x19, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x19, rw, 0x80 >;

    using PEMP   = regbits< type,  7,  1 >;  /**< Priority conversion FIFO empty bit             */
    using PFUL   = regbits< type,  6,  1 >;  /**< Priority conversion FIFO full bit              */
    using POVR   = regbits< type,  5,  1 >;  /**< Priority conversion overrun flag               */
    using PFCLR  = regbits< type,  4,  1 >;  /**< Priority conversion FIFO clear bit             */
    using ESCE   = regbits< type,  3,  1 >;  /**< External trigger analog input selection bit    */
    using PEEN   = regbits< type,  2,  1 >;  /**< Priority conversion external start enable bit  */
    using PHEN   = regbits< type,  1,  1 >;  /**< Priority conversion timer start enable bit     */
    using PSTR   = regbits< type,  0,  1 >;  /**< Priority conversion start bit                  */
  };

  /**
   * Priority Conversion FIFO Data Register
   */
  struct PCFD
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using PD    = regbits< type, 20, 12 >;  /**< Priority conversion result         */
    using INVL  = regbits< type, 12,  1 >;  /**< A/D conversion result disable bit  */
    using RS    = regbits< type,  8,  3 >;  /**< Scan conversion start factor       */
    using PC    = regbits< type,  0,  5 >;  /**< Conversion input channel bits      */
  };

  /**
   * Priority Conversion Input Selection Register
   */
  struct PCIS
  : public reg< uint8_t, base_addr + 0x20, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x00 >;

    using P2A  = regbits< type,  3,  5 >;  /**< Priority level 2 analog input selection  */
    using P1A  = regbits< type,  0,  3 >;  /**< Priority level 1 analog input selection  */
  };

  /**
   * A/D Comparison Control Register
   */
  struct CMPCR
  : public reg< uint8_t, base_addr + 0x24, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0x00 >;

    using CMPEN  = regbits< type,  7,  1 >;  /**< Conversion result comparison function operation enable bit  */
    using CMD1   = regbits< type,  6,  1 >;  /**< Comparison mode 1                                           */
    using CMD0   = regbits< type,  5,  1 >;  /**< Comparison mode 0                                           */
    using CCH    = regbits< type,  0,  5 >;  /**< Comparison target analog input channel                      */
  };

  /**
   * A/D Comparison Value Setup Register
   */
  struct CMPD
  : public reg< uint16_t, base_addr + 0x26, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x26, rw, 0x0000 >;

    using CMAD  = regbits< type,  6, 10 >;  /**< A/D conversion result value setting bits  */
  };

  /**
   * Sampling Time Selection Register 3
   */
  struct ADSS3
  : public reg< uint8_t, base_addr + 0x29, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x29, rw, 0x00 >;

    using TS31  = regbits< type,  7,  1 >;  /**< Bit7 of ADSS3  */
    using TS30  = regbits< type,  6,  1 >;  /**< Bit6 of ADSS3  */
    using TS29  = regbits< type,  5,  1 >;  /**< Bit5 of ADSS3  */
    using TS28  = regbits< type,  4,  1 >;  /**< Bit4 of ADSS3  */
    using TS27  = regbits< type,  3,  1 >;  /**< Bit3 of ADSS3  */
    using TS26  = regbits< type,  2,  1 >;  /**< Bit2 of ADSS3  */
    using TS25  = regbits< type,  1,  1 >;  /**< Bit1 of ADSS3  */
    using TS24  = regbits< type,  0,  1 >;  /**< Bit0 of ADSS3  */
  };

  /**
   * Sampling Time Selection Register 2
   */
  struct ADSS2
  : public reg< uint8_t, base_addr + 0x28, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0x00 >;

    using TS23  = regbits< type,  7,  1 >;  /**< Bit7 of ADSS2  */
    using TS22  = regbits< type,  6,  1 >;  /**< Bit6 of ADSS2  */
    using TS21  = regbits< type,  5,  1 >;  /**< Bit5 of ADSS2  */
    using TS20  = regbits< type,  4,  1 >;  /**< Bit4 of ADSS2  */
    using TS19  = regbits< type,  3,  1 >;  /**< Bit3 of ADSS2  */
    using TS18  = regbits< type,  2,  1 >;  /**< Bit2 of ADSS2  */
    using TS17  = regbits< type,  1,  1 >;  /**< Bit1 of ADSS2  */
    using TS16  = regbits< type,  0,  1 >;  /**< Bit0 of ADSS2  */
  };

  /**
   * Sampling Time Selection Register 1
   */
  struct ADSS1
  : public reg< uint8_t, base_addr + 0x2d, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2d, rw, 0x00 >;

    using TS15  = regbits< type,  7,  1 >;  /**< Bit7 of ADSS1  */
    using TS14  = regbits< type,  6,  1 >;  /**< Bit6 of ADSS1  */
    using TS13  = regbits< type,  5,  1 >;  /**< Bit5 of ADSS1  */
    using TS12  = regbits< type,  4,  1 >;  /**< Bit4 of ADSS1  */
    using TS11  = regbits< type,  3,  1 >;  /**< Bit3 of ADSS1  */
    using TS10  = regbits< type,  2,  1 >;  /**< Bit2 of ADSS1  */
    using TS9   = regbits< type,  1,  1 >;  /**< Bit1 of ADSS1  */
    using TS8   = regbits< type,  0,  1 >;  /**< Bit0 of ADSS1  */
  };

  /**
   * Sampling Time Selection Register 0
   */
  struct ADSS0
  : public reg< uint8_t, base_addr + 0x2c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2c, rw, 0x00 >;

    using TS7  = regbits< type,  7,  1 >;  /**< Bit7 of ADSS0  */
    using TS6  = regbits< type,  6,  1 >;  /**< Bit6 of ADSS0  */
    using TS5  = regbits< type,  5,  1 >;  /**< Bit5 of ADSS0  */
    using TS4  = regbits< type,  4,  1 >;  /**< Bit4 of ADSS0  */
    using TS3  = regbits< type,  3,  1 >;  /**< Bit3 of ADSS0  */
    using TS2  = regbits< type,  2,  1 >;  /**< Bit2 of ADSS0  */
    using TS1  = regbits< type,  1,  1 >;  /**< Bit1 of ADSS0  */
    using TS0  = regbits< type,  0,  1 >;  /**< Bit0 of ADSS0  */
  };

  /**
   * Sampling Time Setup Register 1
   */
  struct ADST1
  : public reg< uint8_t, base_addr + 0x30, rw, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x10 >;

    using STX1  = regbits< type,  5,  3 >;  /**< Sampling time N times setting bits  */
    using ST1   = regbits< type,  0,  5 >;  /**< Sampling time setting bits          */
  };

  /**
   * Sampling Time Setup Register 0
   */
  struct ADST0
  : public reg< uint8_t, base_addr + 0x31, rw, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x31, rw, 0x10 >;

    using STX0  = regbits< type,  5,  3 >;  /**< Sampling time N times setting bits  */
    using ST0   = regbits< type,  0,  5 >;  /**< Sampling time setting bits          */
  };

  /**
   * Comparison Time Setup Register
   */
  struct ADCT
  : public reg< uint8_t, base_addr + 0x34, rw, 0x07 >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0x07 >;

    using CT  = regbits< type,  0,  8 >;  /**< Compare clock frequency division ratio setting bits  */
  };

  /**
   * Priority Conversion Timer Trigger Selection Register
   */
  struct PRTSL
  : public reg< uint8_t, base_addr + 0x38, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x38, rw, 0x00 >;

    // fixme: Field name equals parent register name: PRTSL
    using PRTSL_ = regbits< type,  0,  4 >;  /**< Priority conversion timer trigger selection bit  */
  };

  /**
   * Scan Conversion Timer Trigger Selection Register
   */
  struct SCTSL
  : public reg< uint8_t, base_addr + 0x39, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x39, rw, 0x00 >;

    // fixme: Field name equals parent register name: SCTSL
    using SCTSL_ = regbits< type,  0,  4 >;  /**< Scan conversion timer trigger selection bit  */
  };

  /**
   * A/D Operation Enable Setup Register
   */
  struct ADCEN
  : public reg< uint16_t, base_addr + 0x3c, rw, 0xFF00 >
  {
    using type = reg< uint16_t, base_addr + 0x3c, rw, 0xFF00 >;

    using ENBLTIME  = regbits< type,  8,  8 >;  /**< Basic cycle selection bit       */
    using READY     = regbits< type,  1,  1 >;  /**< A/D operation enable state bit  */
    using ENBL      = regbits< type,  0,  1 >;  /**< A/D operation enable bit        */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC0_HPP_INCLUDED
