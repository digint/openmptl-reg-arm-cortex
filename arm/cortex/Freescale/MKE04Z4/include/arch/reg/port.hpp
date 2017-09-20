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
//  Import from CMSIS-SVD: "Freescale/MKE04Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE04Z4
//  series: Kinetis_E
//  version: 1.6
//  description: MKE04Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PORT_HPP_INCLUDED
#define ARCH_REG_PORT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Port control and interrupts
 */
struct PORT
{
  static constexpr reg_addr_t base_addr = 0x40049000;

  /**
   * Port Filter Register
   */
  struct IOFLT
  : public reg< uint32_t, base_addr + 0, rw, 0xC00000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xC00000 >;

    using FLTA     = regbits< type,  0,  2 >;  /**< Filter Selection for Input from PTA              */
    using FLTB     = regbits< type,  2,  2 >;  /**< Filter Selection for Input from PTB              */
    using FLTC     = regbits< type,  4,  2 >;  /**< Filter Selection for Input from PTC              */
    using FLTIIC   = regbits< type, 10,  2 >;  /**< Filter Selection For Input from SCL/SDA          */
    using FLTFTM0  = regbits< type, 12,  2 >;  /**< Filter Selection For Input from FTM0CH0/FTM0CH1  */
    using FLTPWT   = regbits< type, 14,  2 >;  /**< Filter Selection For Input from PWT_IN1/PWT_IN0  */
    using FLTRST   = regbits< type, 16,  2 >;  /**< Filter Selection for Input from RESET/IRQ        */
    using FLTKBI0  = regbits< type, 18,  2 >;  /**< Filter selection for Input from KBI0             */
    using FLTKBI1  = regbits< type, 20,  2 >;  /**< Filter Selection for Input from KBI1             */
    using FLTNMI   = regbits< type, 22,  2 >;  /**< Filter Selection for Input from NMI              */
    using FLTDIV1  = regbits< type, 24,  2 >;  /**< Filter Division Set 1                            */
    using FLTDIV2  = regbits< type, 26,  3 >;  /**< Filter Division Set 2                            */
    using FLTDIV3  = regbits< type, 29,  3 >;  /**< Filter Division Set 3                            */
  };

  /**
   * Port Pullup Enable Low Register
   */
  struct PUEL
  : public reg< uint32_t, base_addr + 0x4, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x1 >;

    using PTAPE0  = regbits< type,  0,  1 >;  /**< Pull Enable for Port A Bit 0  */
    using PTAPE1  = regbits< type,  1,  1 >;  /**< Pull Enable for Port A Bit 1  */
    using PTAPE2  = regbits< type,  2,  1 >;  /**< Pull Enable for Port A Bit 2  */
    using PTAPE3  = regbits< type,  3,  1 >;  /**< Pull Enable for Port A Bit 3  */
    using PTAPE4  = regbits< type,  4,  1 >;  /**< Pull Enable for Port A Bit 4  */
    using PTAPE5  = regbits< type,  5,  1 >;  /**< Pull Enable for Port A Bit 5  */
    using PTAPE6  = regbits< type,  6,  1 >;  /**< Pull Enable for Port A Bit 6  */
    using PTAPE7  = regbits< type,  7,  1 >;  /**< Pull Enable for Port A Bit 7  */
    using PTBPE0  = regbits< type,  8,  1 >;  /**< Pull Enable for Port B Bit 0  */
    using PTBPE1  = regbits< type,  9,  1 >;  /**< Pull Enable for Port B Bit 1  */
    using PTBPE2  = regbits< type, 10,  1 >;  /**< Pull Enable for Port B Bit 2  */
    using PTBPE3  = regbits< type, 11,  1 >;  /**< Pull Enable for Port B Bit 3  */
    using PTBPE4  = regbits< type, 12,  1 >;  /**< Pull Enable for Port B Bit 4  */
    using PTBPE5  = regbits< type, 13,  1 >;  /**< Pull Enable for Port B Bit 5  */
    using PTBPE6  = regbits< type, 14,  1 >;  /**< Pull Enable for Port B Bit 6  */
    using PTBPE7  = regbits< type, 15,  1 >;  /**< Pull Enable for Port B Bit 7  */
    using PTCPE0  = regbits< type, 16,  1 >;  /**< Pull Enable for Port C Bit 0  */
    using PTCPE1  = regbits< type, 17,  1 >;  /**< Pull Enable for Port C Bit 1  */
    using PTCPE2  = regbits< type, 18,  1 >;  /**< Pull Enable for Port C Bit 2  */
    using PTCPE3  = regbits< type, 19,  1 >;  /**< Pull Enable for Port C Bit 3  */
    using PTCPE4  = regbits< type, 20,  1 >;  /**< Pull Enable for Port C Bit 4  */
    using PTCPE5  = regbits< type, 21,  1 >;  /**< Pull Enable for Port C Bit 5  */
  };

  /**
   * Port High Drive Enable Register
   */
  struct HDRVE
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using PTB5  = regbits< type,  1,  1 >;  /**< High Current Drive Capability of PTB5  */
    using PTC1  = regbits< type,  2,  1 >;  /**< High Current Drive Capability of PTC1  */
    using PTC5  = regbits< type,  3,  1 >;  /**< High Current Drive Capability of PTC5  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PORT_HPP_INCLUDED
