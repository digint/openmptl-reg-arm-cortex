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
//  Import from CMSIS-SVD: "Spansion/MB9BF52xS.svd"
//
//  name: MB9BF52xS
//  version: 1.0
//  description: MB9BF52xS
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EXTI_HPP_INCLUDED
#define ARCH_REG_EXTI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral EXTI
 */
struct EXTI
{
  static constexpr reg_addr_t base_addr = 0x40030000;

  /**
   * register ENIR
   */
  struct ENIR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using EN31  = regbits< type, 31,  1 >;  /**< bitfield EN31  */
    using EN30  = regbits< type, 30,  1 >;  /**< bitfield EN30  */
    using EN29  = regbits< type, 29,  1 >;  /**< bitfield EN29  */
    using EN28  = regbits< type, 28,  1 >;  /**< bitfield EN28  */
    using EN27  = regbits< type, 27,  1 >;  /**< bitfield EN27  */
    using EN26  = regbits< type, 26,  1 >;  /**< bitfield EN26  */
    using EN25  = regbits< type, 25,  1 >;  /**< bitfield EN25  */
    using EN24  = regbits< type, 24,  1 >;  /**< bitfield EN24  */
    using EN23  = regbits< type, 23,  1 >;  /**< bitfield EN23  */
    using EN22  = regbits< type, 22,  1 >;  /**< bitfield EN22  */
    using EN21  = regbits< type, 21,  1 >;  /**< bitfield EN21  */
    using EN20  = regbits< type, 20,  1 >;  /**< bitfield EN20  */
    using EN19  = regbits< type, 19,  1 >;  /**< bitfield EN19  */
    using EN18  = regbits< type, 18,  1 >;  /**< bitfield EN18  */
    using EN17  = regbits< type, 17,  1 >;  /**< bitfield EN17  */
    using EN16  = regbits< type, 16,  1 >;  /**< bitfield EN16  */
    using EN15  = regbits< type, 15,  1 >;  /**< bitfield EN15  */
    using EN14  = regbits< type, 14,  1 >;  /**< bitfield EN14  */
    using EN13  = regbits< type, 13,  1 >;  /**< bitfield EN13  */
    using EN12  = regbits< type, 12,  1 >;  /**< bitfield EN12  */
    using EN11  = regbits< type, 11,  1 >;  /**< bitfield EN11  */
    using EN10  = regbits< type, 10,  1 >;  /**< bitfield EN10  */
    using EN9   = regbits< type,  9,  1 >;  /**< bitfield EN9   */
    using EN8   = regbits< type,  8,  1 >;  /**< bitfield EN8   */
    using EN7   = regbits< type,  7,  1 >;  /**< bitfield EN7   */
    using EN6   = regbits< type,  6,  1 >;  /**< bitfield EN6   */
    using EN5   = regbits< type,  5,  1 >;  /**< bitfield EN5   */
    using EN4   = regbits< type,  4,  1 >;  /**< bitfield EN4   */
    using EN3   = regbits< type,  3,  1 >;  /**< bitfield EN3   */
    using EN2   = regbits< type,  2,  1 >;  /**< bitfield EN2   */
    using EN1   = regbits< type,  1,  1 >;  /**< bitfield EN1   */
    using EN0   = regbits< type,  0,  1 >;  /**< bitfield EN0   */
  };

  /**
   * register EIRR
   */
  struct EIRR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x0 >;

    using ER31  = regbits< type, 31,  1 >;  /**< bitfield ER31  */
    using ER30  = regbits< type, 30,  1 >;  /**< bitfield ER30  */
    using ER29  = regbits< type, 29,  1 >;  /**< bitfield ER29  */
    using ER28  = regbits< type, 28,  1 >;  /**< bitfield ER28  */
    using ER27  = regbits< type, 27,  1 >;  /**< bitfield ER27  */
    using ER26  = regbits< type, 26,  1 >;  /**< bitfield ER26  */
    using ER25  = regbits< type, 25,  1 >;  /**< bitfield ER25  */
    using ER24  = regbits< type, 24,  1 >;  /**< bitfield ER24  */
    using ER23  = regbits< type, 23,  1 >;  /**< bitfield ER23  */
    using ER22  = regbits< type, 22,  1 >;  /**< bitfield ER22  */
    using ER21  = regbits< type, 21,  1 >;  /**< bitfield ER21  */
    using ER20  = regbits< type, 20,  1 >;  /**< bitfield ER20  */
    using ER19  = regbits< type, 19,  1 >;  /**< bitfield ER19  */
    using ER18  = regbits< type, 18,  1 >;  /**< bitfield ER18  */
    using ER17  = regbits< type, 17,  1 >;  /**< bitfield ER17  */
    using ER16  = regbits< type, 16,  1 >;  /**< bitfield ER16  */
    using ER15  = regbits< type, 15,  1 >;  /**< bitfield ER15  */
    using ER14  = regbits< type, 14,  1 >;  /**< bitfield ER14  */
    using ER13  = regbits< type, 13,  1 >;  /**< bitfield ER13  */
    using ER12  = regbits< type, 12,  1 >;  /**< bitfield ER12  */
    using ER11  = regbits< type, 11,  1 >;  /**< bitfield ER11  */
    using ER10  = regbits< type, 10,  1 >;  /**< bitfield ER10  */
    using ER9   = regbits< type,  9,  1 >;  /**< bitfield ER9   */
    using ER8   = regbits< type,  8,  1 >;  /**< bitfield ER8   */
    using ER7   = regbits< type,  7,  1 >;  /**< bitfield ER7   */
    using ER6   = regbits< type,  6,  1 >;  /**< bitfield ER6   */
    using ER5   = regbits< type,  5,  1 >;  /**< bitfield ER5   */
    using ER4   = regbits< type,  4,  1 >;  /**< bitfield ER4   */
    using ER3   = regbits< type,  3,  1 >;  /**< bitfield ER3   */
    using ER2   = regbits< type,  2,  1 >;  /**< bitfield ER2   */
    using ER1   = regbits< type,  1,  1 >;  /**< bitfield ER1   */
    using ER0   = regbits< type,  0,  1 >;  /**< bitfield ER0   */
  };

  /**
   * register EICL
   */
  struct EICL
  : public reg< uint32_t, base_addr + 0x8, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0xFFFFFFFF >;

    using ECL31  = regbits< type, 31,  1 >;  /**< bitfield ECL31  */
    using ECL30  = regbits< type, 30,  1 >;  /**< bitfield ECL30  */
    using ECL29  = regbits< type, 29,  1 >;  /**< bitfield ECL29  */
    using ECL28  = regbits< type, 28,  1 >;  /**< bitfield ECL28  */
    using ECL27  = regbits< type, 27,  1 >;  /**< bitfield ECL27  */
    using ECL26  = regbits< type, 26,  1 >;  /**< bitfield ECL26  */
    using ECL25  = regbits< type, 25,  1 >;  /**< bitfield ECL25  */
    using ECL24  = regbits< type, 24,  1 >;  /**< bitfield ECL24  */
    using ECL23  = regbits< type, 23,  1 >;  /**< bitfield ECL23  */
    using ECL22  = regbits< type, 22,  1 >;  /**< bitfield ECL22  */
    using ECL21  = regbits< type, 21,  1 >;  /**< bitfield ECL21  */
    using ECL20  = regbits< type, 20,  1 >;  /**< bitfield ECL20  */
    using ECL19  = regbits< type, 19,  1 >;  /**< bitfield ECL19  */
    using ECL18  = regbits< type, 18,  1 >;  /**< bitfield ECL18  */
    using ECL17  = regbits< type, 17,  1 >;  /**< bitfield ECL17  */
    using ECL16  = regbits< type, 16,  1 >;  /**< bitfield ECL16  */
    using ECL15  = regbits< type, 15,  1 >;  /**< bitfield ECL15  */
    using ECL14  = regbits< type, 14,  1 >;  /**< bitfield ECL14  */
    using ECL13  = regbits< type, 13,  1 >;  /**< bitfield ECL13  */
    using ECL12  = regbits< type, 12,  1 >;  /**< bitfield ECL12  */
    using ECL11  = regbits< type, 11,  1 >;  /**< bitfield ECL11  */
    using ECL10  = regbits< type, 10,  1 >;  /**< bitfield ECL10  */
    using ECL9   = regbits< type,  9,  1 >;  /**< bitfield ECL9   */
    using ECL8   = regbits< type,  8,  1 >;  /**< bitfield ECL8   */
    using ECL7   = regbits< type,  7,  1 >;  /**< bitfield ECL7   */
    using ECL6   = regbits< type,  6,  1 >;  /**< bitfield ECL6   */
    using ECL5   = regbits< type,  5,  1 >;  /**< bitfield ECL5   */
    using ECL4   = regbits< type,  4,  1 >;  /**< bitfield ECL4   */
    using ECL3   = regbits< type,  3,  1 >;  /**< bitfield ECL3   */
    using ECL2   = regbits< type,  2,  1 >;  /**< bitfield ECL2   */
    using ECL1   = regbits< type,  1,  1 >;  /**< bitfield ECL1   */
    using ECL0   = regbits< type,  0,  1 >;  /**< bitfield ECL0   */
  };

  /**
   * register ELVR
   */
  struct ELVR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using LB15  = regbits< type, 31,  1 >;  /**< bitfield LB15  */
    using LA15  = regbits< type, 30,  1 >;  /**< bitfield LA15  */
    using LB14  = regbits< type, 29,  1 >;  /**< bitfield LB14  */
    using LA14  = regbits< type, 28,  1 >;  /**< bitfield LA14  */
    using LB13  = regbits< type, 27,  1 >;  /**< bitfield LB13  */
    using LA13  = regbits< type, 26,  1 >;  /**< bitfield LA13  */
    using LB12  = regbits< type, 25,  1 >;  /**< bitfield LB12  */
    using LA12  = regbits< type, 24,  1 >;  /**< bitfield LA12  */
    using LB11  = regbits< type, 23,  1 >;  /**< bitfield LB11  */
    using LA11  = regbits< type, 22,  1 >;  /**< bitfield LA11  */
    using LB10  = regbits< type, 21,  1 >;  /**< bitfield LB10  */
    using LA10  = regbits< type, 20,  1 >;  /**< bitfield LA10  */
    using LB9   = regbits< type, 19,  1 >;  /**< bitfield LB9   */
    using LA9   = regbits< type, 18,  1 >;  /**< bitfield LA9   */
    using LB8   = regbits< type, 17,  1 >;  /**< bitfield LB8   */
    using LA8   = regbits< type, 16,  1 >;  /**< bitfield LA8   */
    using LB7   = regbits< type, 15,  1 >;  /**< bitfield LB7   */
    using LA7   = regbits< type, 14,  1 >;  /**< bitfield LA7   */
    using LB6   = regbits< type, 13,  1 >;  /**< bitfield LB6   */
    using LA6   = regbits< type, 12,  1 >;  /**< bitfield LA6   */
    using LB5   = regbits< type, 11,  1 >;  /**< bitfield LB5   */
    using LA5   = regbits< type, 10,  1 >;  /**< bitfield LA5   */
    using LB4   = regbits< type,  9,  1 >;  /**< bitfield LB4   */
    using LA4   = regbits< type,  8,  1 >;  /**< bitfield LA4   */
    using LB3   = regbits< type,  7,  1 >;  /**< bitfield LB3   */
    using LA3   = regbits< type,  6,  1 >;  /**< bitfield LA3   */
    using LB2   = regbits< type,  5,  1 >;  /**< bitfield LB2   */
    using LA2   = regbits< type,  4,  1 >;  /**< bitfield LA2   */
    using LB1   = regbits< type,  3,  1 >;  /**< bitfield LB1   */
    using LA1   = regbits< type,  2,  1 >;  /**< bitfield LA1   */
    using LB0   = regbits< type,  1,  1 >;  /**< bitfield LB0   */
    using LA0   = regbits< type,  0,  1 >;  /**< bitfield LA0   */
  };

  /**
   * register ELVR1
   */
  struct ELVR1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using LB31  = regbits< type, 31,  1 >;  /**< bitfield LB31  */
    using LA31  = regbits< type, 30,  1 >;  /**< bitfield LA31  */
    using LB30  = regbits< type, 29,  1 >;  /**< bitfield LB30  */
    using LA30  = regbits< type, 28,  1 >;  /**< bitfield LA30  */
    using LB29  = regbits< type, 27,  1 >;  /**< bitfield LB29  */
    using LA29  = regbits< type, 26,  1 >;  /**< bitfield LA29  */
    using LB28  = regbits< type, 25,  1 >;  /**< bitfield LB28  */
    using LA28  = regbits< type, 24,  1 >;  /**< bitfield LA28  */
    using LB27  = regbits< type, 23,  1 >;  /**< bitfield LB27  */
    using LA27  = regbits< type, 22,  1 >;  /**< bitfield LA27  */
    using LB26  = regbits< type, 21,  1 >;  /**< bitfield LB26  */
    using LA26  = regbits< type, 20,  1 >;  /**< bitfield LA26  */
    using LB25  = regbits< type, 19,  1 >;  /**< bitfield LB25  */
    using LA25  = regbits< type, 18,  1 >;  /**< bitfield LA25  */
    using LB24  = regbits< type, 17,  1 >;  /**< bitfield LB24  */
    using LA24  = regbits< type, 16,  1 >;  /**< bitfield LA24  */
    using LB23  = regbits< type, 15,  1 >;  /**< bitfield LB23  */
    using LA23  = regbits< type, 14,  1 >;  /**< bitfield LA23  */
    using LB22  = regbits< type, 13,  1 >;  /**< bitfield LB22  */
    using LA22  = regbits< type, 12,  1 >;  /**< bitfield LA22  */
    using LB21  = regbits< type, 11,  1 >;  /**< bitfield LB21  */
    using LA21  = regbits< type, 10,  1 >;  /**< bitfield LA21  */
    using LB20  = regbits< type,  9,  1 >;  /**< bitfield LB20  */
    using LA20  = regbits< type,  8,  1 >;  /**< bitfield LA20  */
    using LB19  = regbits< type,  7,  1 >;  /**< bitfield LB19  */
    using LA19  = regbits< type,  6,  1 >;  /**< bitfield LA19  */
    using LB18  = regbits< type,  5,  1 >;  /**< bitfield LB18  */
    using LA18  = regbits< type,  4,  1 >;  /**< bitfield LA18  */
    using LB17  = regbits< type,  3,  1 >;  /**< bitfield LB17  */
    using LA17  = regbits< type,  2,  1 >;  /**< bitfield LA17  */
    using LB16  = regbits< type,  1,  1 >;  /**< bitfield LB16  */
    using LA16  = regbits< type,  0,  1 >;  /**< bitfield LA16  */
  };

  /**
   * register NMIRR
   */
  struct NMIRR
  : public reg< uint8_t, base_addr + 0x14, ro, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0x14, ro, 0x0 >;

    using NR  = regbits< type,  0,  1 >;  /**< bitfield NR  */
  };

  /**
   * register NMICL
   */
  struct NMICL
  : public reg< uint8_t, base_addr + 0x18, rw, 0x1 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x1 >;

    using NCL  = regbits< type,  0,  1 >;  /**< bitfield NCL  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXTI_HPP_INCLUDED
