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
//  Import from CMSIS-SVD: "Holtek/ht32f275x.svd"
//
//  name: HT32F275x
//  version: 1.0
//  description: This is the description for the Holtek HT32F275x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AFIO_HPP_INCLUDED
#define ARCH_REG_AFIO_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AFIO
 */
struct AFIO
{
  static constexpr reg_addr_t base_addr = 0x40022000;

  /**
   * AFIO_ESSR0
   */
  struct AFIO_ESSR0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI0PIN  = regbits< type,  0,  4 >;  /**< EXTI0PIN  */
    using EXTI1PIN  = regbits< type,  4,  4 >;  /**< EXTI1PIN  */
    using EXTI2PIN  = regbits< type,  8,  4 >;  /**< EXTI2PIN  */
    using EXTI3PIN  = regbits< type, 12,  4 >;  /**< EXTI3PIN  */
    using EXTI4PIN  = regbits< type, 16,  4 >;  /**< EXTI4PIN  */
    using EXTI5PIN  = regbits< type, 20,  4 >;  /**< EXTI5PIN  */
    using EXTI6PIN  = regbits< type, 24,  4 >;  /**< EXTI6PIN  */
    using EXTI7PIN  = regbits< type, 28,  4 >;  /**< EXTI7PIN  */
  };

  /**
   * AFIO_ESSR1
   */
  struct AFIO_ESSR1
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EXTI8PIN   = regbits< type,  0,  4 >;  /**< EXTI8PIN   */
    using EXTI9PIN   = regbits< type,  4,  4 >;  /**< EXTI9PIN   */
    using EXTI10PIN  = regbits< type,  8,  4 >;  /**< EXTI10PIN  */
    using EXTI11PIN  = regbits< type, 12,  4 >;  /**< EXTI11PIN  */
    using EXTI12PIN  = regbits< type, 16,  4 >;  /**< EXTI12PIN  */
    using EXTI13PIN  = regbits< type, 20,  4 >;  /**< EXTI13PIN  */
    using EXTI14PIN  = regbits< type, 24,  4 >;  /**< EXTI14PIN  */
    using EXTI15PIN  = regbits< type, 28,  4 >;  /**< EXTI15PIN  */
  };

  /**
   * AFIO_GPACFGR
   */
  struct AFIO_GPACFGR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PACFG0   = regbits< type,  0,  2 >;  /**< PACFG0   */
    using PACFG1   = regbits< type,  2,  2 >;  /**< PACFG1   */
    using PACFG2   = regbits< type,  4,  2 >;  /**< PACFG2   */
    using PACFG3   = regbits< type,  6,  2 >;  /**< PACFG3   */
    using PACFG4   = regbits< type,  8,  2 >;  /**< PACFG4   */
    using PACFG5   = regbits< type, 10,  2 >;  /**< PACFG5   */
    using PACFG6   = regbits< type, 12,  2 >;  /**< PACFG6   */
    using PACFG7   = regbits< type, 14,  2 >;  /**< PACFG7   */
    using PACFG8   = regbits< type, 16,  2 >;  /**< PACFG8   */
    using PACFG9   = regbits< type, 18,  2 >;  /**< PACFG9   */
    using PACFG10  = regbits< type, 20,  2 >;  /**< PACFG10  */
    using PACFG11  = regbits< type, 22,  2 >;  /**< PACFG11  */
    using PACFG12  = regbits< type, 24,  2 >;  /**< PACFG12  */
    using PACFG13  = regbits< type, 26,  2 >;  /**< PACFG13  */
    using PACFG14  = regbits< type, 28,  2 >;  /**< PACFG14  */
    using PACFG15  = regbits< type, 30,  2 >;  /**< PACFG15  */
  };

  /**
   * AFIO_GPBCFGR
   */
  struct AFIO_GPBCFGR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PBCFG0   = regbits< type,  0,  2 >;  /**< PBCFG0   */
    using PBCFG1   = regbits< type,  2,  2 >;  /**< PBCFG1   */
    using PBCFG2   = regbits< type,  4,  2 >;  /**< PBCFG2   */
    using PBCFG3   = regbits< type,  6,  2 >;  /**< PBCFG3   */
    using PBCFG4   = regbits< type,  8,  2 >;  /**< PBCFG4   */
    using PBCFG5   = regbits< type, 10,  2 >;  /**< PBCFG5   */
    using PBCFG6   = regbits< type, 12,  2 >;  /**< PBCFG6   */
    using PBCFG7   = regbits< type, 14,  2 >;  /**< PBCFG7   */
    using PBCFG8   = regbits< type, 16,  2 >;  /**< PBCFG8   */
    using PBCFG9   = regbits< type, 18,  2 >;  /**< PBCFG9   */
    using PBCFG10  = regbits< type, 20,  2 >;  /**< PBCFG10  */
    using PBCFG11  = regbits< type, 22,  2 >;  /**< PBCFG11  */
    using PBCFG12  = regbits< type, 24,  2 >;  /**< PBCFG12  */
    using PBCFG13  = regbits< type, 26,  2 >;  /**< PBCFG13  */
    using PBCFG14  = regbits< type, 28,  2 >;  /**< PBCFG14  */
    using PBCFG15  = regbits< type, 30,  2 >;  /**< PBCFG15  */
  };

  /**
   * AFIO_GPCCFGR
   */
  struct AFIO_GPCCFGR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PCCFG0   = regbits< type,  0,  2 >;  /**< PCCFG0   */
    using PCCFG1   = regbits< type,  2,  2 >;  /**< PCCFG1   */
    using PCCFG2   = regbits< type,  4,  2 >;  /**< PCCFG2   */
    using PCCFG3   = regbits< type,  6,  2 >;  /**< PCCFG3   */
    using PCCFG4   = regbits< type,  8,  2 >;  /**< PCCFG4   */
    using PCCFG5   = regbits< type, 10,  2 >;  /**< PCCFG5   */
    using PCCFG6   = regbits< type, 12,  2 >;  /**< PCCFG6   */
    using PCCFG7   = regbits< type, 14,  2 >;  /**< PCCFG7   */
    using PCCFG8   = regbits< type, 16,  2 >;  /**< PCCFG8   */
    using PCCFG9   = regbits< type, 18,  2 >;  /**< PCCFG9   */
    using PCCFG10  = regbits< type, 20,  2 >;  /**< PCCFG10  */
    using PCCFG11  = regbits< type, 22,  2 >;  /**< PCCFG11  */
    using PCCFG12  = regbits< type, 24,  2 >;  /**< PCCFG12  */
    using PCCFG13  = regbits< type, 26,  2 >;  /**< PCCFG13  */
    using PCCFG14  = regbits< type, 28,  2 >;  /**< PCCFG14  */
    using PCCFG15  = regbits< type, 30,  2 >;  /**< PCCFG15  */
  };

  /**
   * AFIO_GPDCFGR
   */
  struct AFIO_GPDCFGR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PDCFG0   = regbits< type,  0,  2 >;  /**< PDCFG0   */
    using PDCFG1   = regbits< type,  2,  2 >;  /**< PDCFG1   */
    using PDCFG2   = regbits< type,  4,  2 >;  /**< PDCFG2   */
    using PDCFG3   = regbits< type,  6,  2 >;  /**< PDCFG3   */
    using PDCFG4   = regbits< type,  8,  2 >;  /**< PDCFG4   */
    using PDCFG5   = regbits< type, 10,  2 >;  /**< PDCFG5   */
    using PDCFG6   = regbits< type, 12,  2 >;  /**< PDCFG6   */
    using PDCFG7   = regbits< type, 14,  2 >;  /**< PDCFG7   */
    using PDCFG8   = regbits< type, 16,  2 >;  /**< PDCFG8   */
    using PDCFG9   = regbits< type, 18,  2 >;  /**< PDCFG9   */
    using PDCFG10  = regbits< type, 20,  2 >;  /**< PDCFG10  */
    using PDCFG11  = regbits< type, 22,  2 >;  /**< PDCFG11  */
    using PDCFG12  = regbits< type, 24,  2 >;  /**< PDCFG12  */
    using PDCFG13  = regbits< type, 26,  2 >;  /**< PDCFG13  */
    using PDCFG14  = regbits< type, 28,  2 >;  /**< PDCFG14  */
    using PDCFG15  = regbits< type, 30,  2 >;  /**< PDCFG15  */
  };

  /**
   * AFIO_GPECFGR
   */
  struct AFIO_GPECFGR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PECFG0   = regbits< type,  0,  2 >;  /**< PECFG0   */
    using PECFG1   = regbits< type,  2,  2 >;  /**< PECFG1   */
    using PECFG2   = regbits< type,  4,  2 >;  /**< PECFG2   */
    using PECFG3   = regbits< type,  6,  2 >;  /**< PECFG3   */
    using PECFG4   = regbits< type,  8,  2 >;  /**< PECFG4   */
    using PECFG5   = regbits< type, 10,  2 >;  /**< PECFG5   */
    using PECFG6   = regbits< type, 12,  2 >;  /**< PECFG6   */
    using PECFG7   = regbits< type, 14,  2 >;  /**< PECFG7   */
    using PECFG8   = regbits< type, 16,  2 >;  /**< PECFG8   */
    using PECFG9   = regbits< type, 18,  2 >;  /**< PECFG9   */
    using PECFG10  = regbits< type, 20,  2 >;  /**< PECFG10  */
    using PECFG11  = regbits< type, 22,  2 >;  /**< PECFG11  */
    using PECFG12  = regbits< type, 24,  2 >;  /**< PECFG12  */
    using PECFG13  = regbits< type, 26,  2 >;  /**< PECFG13  */
    using PECFG14  = regbits< type, 28,  2 >;  /**< PECFG14  */
    using PECFG15  = regbits< type, 30,  2 >;  /**< PECFG15  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AFIO_HPP_INCLUDED
