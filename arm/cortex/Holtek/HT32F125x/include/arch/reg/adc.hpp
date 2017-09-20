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
//  Import from CMSIS-SVD: "Holtek/ht32f125x.svd"
//
//  name: HT32F125x
//  version: 1.0
//  description: This is the description for the Holtek HT32F125x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADC_HPP_INCLUDED
#define ARCH_REG_ADC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * ADC
 */
struct ADC
{
  static constexpr reg_addr_t base_addr = 0x40010000;

  /**
   * ADC_RST
   */
  struct ADC_RST
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADRST     = regbits< type,  0,  1 >;  /**< ADRST      */
    using RESERVED  = regbits< type,  1, 31 >;  /**< Reserved.  */
  };

  /**
   * ADC_CONV
   */
  struct ADC_CONV
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADMODE    = regbits< type,  0,  2 >;  /**< ADMODE     */
    using ADSEQL    = regbits< type,  8,  3 >;  /**< ADSEQL     */
    using ADSUBL    = regbits< type, 16,  3 >;  /**< ADSUBL     */
    using RESERVED  = regbits< type, 19, 13 >;  /**< Reserved.  */
  };

  /**
   * ADC_LST0
   */
  struct ADC_LST0
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADSEQ0    = regbits< type,  0,  5 >;  /**< ADSEQ0     */
    using ADSEQ1    = regbits< type,  8,  5 >;  /**< ADSEQ1     */
    using ADSEQ2    = regbits< type, 16,  5 >;  /**< ADSEQ2     */
    using ADSEQ3    = regbits< type, 24,  5 >;  /**< ADSEQ3     */
    using RESERVED  = regbits< type, 29,  3 >;  /**< Reserved.  */
  };

  /**
   * ADC_LST1
   */
  struct ADC_LST1
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADSEQ4    = regbits< type,  0,  5 >;  /**< ADSEQ4     */
    using ADSEQ5    = regbits< type,  8,  5 >;  /**< ADSEQ5     */
    using ADSEQ6    = regbits< type, 16,  5 >;  /**< ADSEQ6     */
    using ADSEQ7    = regbits< type, 24,  5 >;  /**< ADSEQ7     */
    using RESERVED  = regbits< type, 29,  3 >;  /**< Reserved.  */
  };

  /**
   * ADC_STR0
   */
  struct ADC_STR0
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADST0     = regbits< type,  0,  8 >;  /**< ADST0      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * ADC_STR1
   */
  struct ADC_STR1
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADST1     = regbits< type,  0,  8 >;  /**< ADST1      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * ADC_STR2
   */
  struct ADC_STR2
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADST2     = regbits< type,  0,  8 >;  /**< ADST2      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * ADC_STR3
   */
  struct ADC_STR3
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADST3     = regbits< type,  0,  8 >;  /**< ADST3      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * ADC_STR4
   */
  struct ADC_STR4
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADST4     = regbits< type,  0,  8 >;  /**< ADST4      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * ADC_STR5
   */
  struct ADC_STR5
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADST5     = regbits< type,  0,  8 >;  /**< ADST5      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * ADC_STR6
   */
  struct ADC_STR6
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADST6     = regbits< type,  0,  8 >;  /**< ADST6      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * ADC_STR7
   */
  struct ADC_STR7
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADST7     = regbits< type,  0,  8 >;  /**< ADST7      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * ADC_DR0
   */
  struct ADC_DR0
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADD0    = regbits< type,  0, 16 >;  /**< ADD0    */
    using ADVLD0  = regbits< type, 31,  1 >;  /**< ADVLD0  */
  };

  /**
   * ADC_DR1
   */
  struct ADC_DR1
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADD1    = regbits< type,  0, 16 >;  /**< ADD1    */
    using ADVLD1  = regbits< type, 31,  1 >;  /**< ADVLD1  */
  };

  /**
   * ADC_DR2
   */
  struct ADC_DR2
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADD2    = regbits< type,  0, 16 >;  /**< ADD2    */
    using ADVLD2  = regbits< type, 31,  1 >;  /**< ADVLD2  */
  };

  /**
   * ADC_DR3
   */
  struct ADC_DR3
  : public reg< uint32_t, base_addr + 0x000000bc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADD3    = regbits< type,  0, 16 >;  /**< ADD3    */
    using ADVLD3  = regbits< type, 31,  1 >;  /**< ADVLD3  */
  };

  /**
   * ADC_DR4
   */
  struct ADC_DR4
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADD4    = regbits< type,  0, 16 >;  /**< ADD4    */
    using ADVLD4  = regbits< type, 31,  1 >;  /**< ADVLD4  */
  };

  /**
   * ADC_DR5
   */
  struct ADC_DR5
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADD5    = regbits< type,  0, 16 >;  /**< ADD5    */
    using ADVLD5  = regbits< type, 31,  1 >;  /**< ADVLD5  */
  };

  /**
   * ADC_DR6
   */
  struct ADC_DR6
  : public reg< uint32_t, base_addr + 0x000000c8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADD6    = regbits< type,  0, 16 >;  /**< ADD6    */
    using ADVLD6  = regbits< type, 31,  1 >;  /**< ADVLD6  */
  };

  /**
   * ADC_DR7
   */
  struct ADC_DR7
  : public reg< uint32_t, base_addr + 0x000000cc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000000cc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADD7    = regbits< type,  0, 16 >;  /**< ADD7    */
    using ADVLD7  = regbits< type, 31,  1 >;  /**< ADVLD7  */
  };

  /**
   * ADC_TCR
   */
  struct ADC_TCR
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADSW      = regbits< type,  0,  1 >;  /**< ADSW       */
    using ADEXTI    = regbits< type,  1,  1 >;  /**< ADEXTI     */
    using GPTM      = regbits< type,  2,  1 >;  /**< GPTM       */
    using RESERVED  = regbits< type,  3, 29 >;  /**< Reserved.  */
  };

  /**
   * ADC_TSR
   */
  struct ADC_TSR
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADSC      = regbits< type,  0,  1 >;  /**< ADSC       */
    using ADEXTIS   = regbits< type,  8,  4 >;  /**< ADEXTIS    */
    using GPTMS     = regbits< type, 16,  3 >;  /**< GPTMS      */
    using GPTME     = regbits< type, 24,  3 >;  /**< GPTME      */
    using RESERVED  = regbits< type, 27,  5 >;  /**< Reserved.  */
  };

  /**
   * ADC_WCR
   */
  struct ADC_WCR
  : public reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADWLE     = regbits< type,  0,  1 >;  /**< ADWLE      */
    using ADWUE     = regbits< type,  1,  1 >;  /**< ADWUE      */
    using ADWALL    = regbits< type,  2,  1 >;  /**< ADWALL     */
    using ADWCH     = regbits< type,  8,  4 >;  /**< ADWCH      */
    using ADLCH     = regbits< type, 16,  4 >;  /**< ADLCH      */
    using ADUCH     = regbits< type, 24,  4 >;  /**< ADUCH      */
    using RESERVED  = regbits< type, 28,  4 >;  /**< Reserved.  */
  };

  /**
   * ADC_LTR
   */
  struct ADC_LTR
  : public reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADLT      = regbits< type,  0, 12 >;  /**< ADLT       */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * ADC_UTR
   */
  struct ADC_UTR
  : public reg< uint32_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADUT      = regbits< type,  0, 12 >;  /**< ADUT       */
    using RESERVED  = regbits< type, 12, 20 >;  /**< Reserved.  */
  };

  /**
   * ADC_IMR
   */
  struct ADC_IMR
  : public reg< uint32_t, base_addr + 0x00000130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADIMS     = regbits< type,  0,  1 >;  /**< ADIMS      */
    using ADIMG     = regbits< type,  1,  1 >;  /**< ADIMG      */
    using ADIMC     = regbits< type,  2,  1 >;  /**< ADIMC      */
    using ADIML     = regbits< type, 16,  1 >;  /**< ADIML      */
    using ADIMU     = regbits< type, 17,  1 >;  /**< ADIMU      */
    using ADIMO     = regbits< type, 24,  1 >;  /**< ADIMO      */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };

  /**
   * ADC_IRAW
   */
  struct ADC_IRAW
  : public reg< uint32_t, base_addr + 0x00000134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADIRAWS   = regbits< type,  0,  1 >;  /**< ADIRAWS    */
    using ADIRAWG   = regbits< type,  1,  1 >;  /**< ADIRAWG    */
    using ADIRAWC   = regbits< type,  2,  1 >;  /**< ADIRAWC    */
    using ADIRAWL   = regbits< type, 16,  1 >;  /**< ADIRAWL    */
    using ADIRAWU   = regbits< type, 17,  1 >;  /**< ADIRAWU    */
    using ADIRAWO   = regbits< type, 24,  1 >;  /**< ADIRAWO    */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };

  /**
   * ADC_IMASK
   */
  struct ADC_IMASK
  : public reg< uint32_t, base_addr + 0x00000138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADIMASKS  = regbits< type,  0,  1 >;  /**< ADIMASKS   */
    using ADIMASKG  = regbits< type,  1,  1 >;  /**< ADIMASKG   */
    using ADIMASKC  = regbits< type,  2,  1 >;  /**< ADIMASKC   */
    using ADIMASKL  = regbits< type, 16,  1 >;  /**< ADIMASKL   */
    using ADIMASKU  = regbits< type, 17,  1 >;  /**< ADIMASKU   */
    using ADIMASKO  = regbits< type, 24,  1 >;  /**< ADIMASKO   */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };

  /**
   * ADC_ICLR
   */
  struct ADC_ICLR
  : public reg< uint32_t, base_addr + 0x0000013c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000013c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADICLRS   = regbits< type,  0,  1 >;  /**< ADICLRS    */
    using ADICLRG   = regbits< type,  1,  1 >;  /**< ADICLRG    */
    using ADICLRC   = regbits< type,  2,  1 >;  /**< ADICLRC    */
    using ADICLRL   = regbits< type, 16,  1 >;  /**< ADICLRL    */
    using ADICLRU   = regbits< type, 17,  1 >;  /**< ADICLRU    */
    using ADICLRO   = regbits< type, 24,  1 >;  /**< ADICLRO    */
    using RESERVED  = regbits< type, 25,  7 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC_HPP_INCLUDED
