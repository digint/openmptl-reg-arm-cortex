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

#ifndef ARCH_REG_CLK_GATING_HPP_INCLUDED
#define ARCH_REG_CLK_GATING_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral CLK_GATING
 */
struct CLK_GATING
{
  static constexpr reg_addr_t base_addr = 0x4003c100;

  /**
   * register CKEN0
   */
  struct CKEN0
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using GIOCK    = regbits< type, 28,  1 >;  /**< bitfield GIOCK    */
    using EXBCK    = regbits< type, 26,  1 >;  /**< bitfield EXBCK    */
    using DMACK    = regbits< type, 24,  1 >;  /**< bitfield DMACK    */
    using ADCCK3   = regbits< type, 19,  1 >;  /**< bitfield ADCCK3   */
    using ADCCK2   = regbits< type, 18,  1 >;  /**< bitfield ADCCK2   */
    using ADCCK1   = regbits< type, 17,  1 >;  /**< bitfield ADCCK1   */
    using ADCCK0   = regbits< type, 16,  1 >;  /**< bitfield ADCCK0   */
    using MFSCK15  = regbits< type, 15,  1 >;  /**< bitfield MFSCK15  */
    using MFSCK14  = regbits< type, 14,  1 >;  /**< bitfield MFSCK14  */
    using MFSCK13  = regbits< type, 13,  1 >;  /**< bitfield MFSCK13  */
    using MFSCK12  = regbits< type, 12,  1 >;  /**< bitfield MFSCK12  */
    using MFSCK11  = regbits< type, 11,  1 >;  /**< bitfield MFSCK11  */
    using MFSCK10  = regbits< type, 10,  1 >;  /**< bitfield MFSCK10  */
    using MFSCK9   = regbits< type,  9,  1 >;  /**< bitfield MFSCK9   */
    using MFSCK8   = regbits< type,  8,  1 >;  /**< bitfield MFSCK8   */
    using MFSCK7   = regbits< type,  7,  1 >;  /**< bitfield MFSCK7   */
    using MFSCK6   = regbits< type,  6,  1 >;  /**< bitfield MFSCK6   */
    using MFSCK5   = regbits< type,  5,  1 >;  /**< bitfield MFSCK5   */
    using MFSCK4   = regbits< type,  4,  1 >;  /**< bitfield MFSCK4   */
    using MFSCK3   = regbits< type,  3,  1 >;  /**< bitfield MFSCK3   */
    using MFSCK2   = regbits< type,  2,  1 >;  /**< bitfield MFSCK2   */
    using MFSCK1   = regbits< type,  1,  1 >;  /**< bitfield MFSCK1   */
    using MFSCK0   = regbits< type,  0,  1 >;  /**< bitfield MFSCK0   */
  };

  /**
   * register MRST0
   */
  struct MRST0
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using EXBRST    = regbits< type, 26,  1 >;  /**< bitfield EXBRST    */
    using DMARST    = regbits< type, 24,  1 >;  /**< bitfield DMARST    */
    using ADCRST3   = regbits< type, 19,  1 >;  /**< bitfield ADCRST3   */
    using ADCRST2   = regbits< type, 18,  1 >;  /**< bitfield ADCRST2   */
    using ADCRST1   = regbits< type, 17,  1 >;  /**< bitfield ADCRST1   */
    using ADCRST0   = regbits< type, 16,  1 >;  /**< bitfield ADCRST0   */
    using MFSRST15  = regbits< type, 15,  1 >;  /**< bitfield MFSRST15  */
    using MFSRST14  = regbits< type, 14,  1 >;  /**< bitfield MFSRST14  */
    using MFSRST13  = regbits< type, 13,  1 >;  /**< bitfield MFSRST13  */
    using MFSRST12  = regbits< type, 12,  1 >;  /**< bitfield MFSRST12  */
    using MFSRST11  = regbits< type, 11,  1 >;  /**< bitfield MFSRST11  */
    using MFSRST10  = regbits< type, 10,  1 >;  /**< bitfield MFSRST10  */
    using MFSRST9   = regbits< type,  9,  1 >;  /**< bitfield MFSRST9   */
    using MFSRST8   = regbits< type,  8,  1 >;  /**< bitfield MFSRST8   */
    using MFSRST7   = regbits< type,  7,  1 >;  /**< bitfield MFSRST7   */
    using MFSRST6   = regbits< type,  6,  1 >;  /**< bitfield MFSRST6   */
    using MFSRST5   = regbits< type,  5,  1 >;  /**< bitfield MFSRST5   */
    using MFSRST4   = regbits< type,  4,  1 >;  /**< bitfield MFSRST4   */
    using MFSRST3   = regbits< type,  3,  1 >;  /**< bitfield MFSRST3   */
    using MFSRST2   = regbits< type,  2,  1 >;  /**< bitfield MFSRST2   */
    using MFSRST1   = regbits< type,  1,  1 >;  /**< bitfield MFSRST1   */
    using MFSRST0   = regbits< type,  0,  1 >;  /**< bitfield MFSRST0   */
  };

  /**
   * register CKEN1
   */
  struct CKEN1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using QDUCK3  = regbits< type, 19,  1 >;  /**< bitfield QDUCK3  */
    using QDUCK2  = regbits< type, 18,  1 >;  /**< bitfield QDUCK2  */
    using QDUCK1  = regbits< type, 17,  1 >;  /**< bitfield QDUCK1  */
    using QDUCK0  = regbits< type, 16,  1 >;  /**< bitfield QDUCK0  */
    using MFTCK3  = regbits< type, 11,  1 >;  /**< bitfield MFTCK3  */
    using MFTCK2  = regbits< type, 10,  1 >;  /**< bitfield MFTCK2  */
    using MFTCK1  = regbits< type,  9,  1 >;  /**< bitfield MFTCK1  */
    using MFTCK0  = regbits< type,  8,  1 >;  /**< bitfield MFTCK0  */
    using BTMCK3  = regbits< type,  3,  1 >;  /**< bitfield BTMCK3  */
    using BTMCK2  = regbits< type,  2,  1 >;  /**< bitfield BTMCK2  */
    using BTMCK1  = regbits< type,  1,  1 >;  /**< bitfield BTMCK1  */
    using BTMCK0  = regbits< type,  0,  1 >;  /**< bitfield BTMCK0  */
  };

  /**
   * register MRST1
   */
  struct MRST1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using QDURST3  = regbits< type, 19,  1 >;  /**< bitfield QDURST3  */
    using QDURST2  = regbits< type, 18,  1 >;  /**< bitfield QDURST2  */
    using QDURST1  = regbits< type, 17,  1 >;  /**< bitfield QDURST1  */
    using QDURST0  = regbits< type, 16,  1 >;  /**< bitfield QDURST0  */
    using MFTRST3  = regbits< type, 11,  1 >;  /**< bitfield MFTRST3  */
    using MFTRST2  = regbits< type, 10,  1 >;  /**< bitfield MFTRST2  */
    using MFTRST1  = regbits< type,  9,  1 >;  /**< bitfield MFTRST1  */
    using MFTRST0  = regbits< type,  8,  1 >;  /**< bitfield MFTRST0  */
    using BTMRST3  = regbits< type,  3,  1 >;  /**< bitfield BTMRST3  */
    using BTMRST2  = regbits< type,  2,  1 >;  /**< bitfield BTMRST2  */
    using BTMRST1  = regbits< type,  1,  1 >;  /**< bitfield BTMRST1  */
    using BTMRST0  = regbits< type,  0,  1 >;  /**< bitfield BTMRST0  */
  };

  /**
   * register CKEN2
   */
  struct CKEN2
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0 >;

    using SDCCK   = regbits< type,  8,  1 >;  /**< bitfield SDCCK   */
    using CANCK1  = regbits< type,  5,  1 >;  /**< bitfield CANCK1  */
    using CANCK0  = regbits< type,  4,  1 >;  /**< bitfield CANCK0  */
    using USBCK1  = regbits< type,  1,  1 >;  /**< bitfield USBCK1  */
    using USBCK0  = regbits< type,  0,  1 >;  /**< bitfield USBCK0  */
  };

  /**
   * register MRST2
   */
  struct MRST2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x0 >;

    using SDCRST   = regbits< type,  8,  1 >;  /**< bitfield SDCRST   */
    using CANRST1  = regbits< type,  5,  1 >;  /**< bitfield CANRST1  */
    using CANRST0  = regbits< type,  4,  1 >;  /**< bitfield CANRST0  */
    using USBRST1  = regbits< type,  1,  1 >;  /**< bitfield USBRST1  */
    using USBRST0  = regbits< type,  0,  1 >;  /**< bitfield USBRST0  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CLK_GATING_HPP_INCLUDED
