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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9CN12.svd"
//
//  vendor: Atmel
//  name: AT91SAM9CN12
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9CN12 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Secure BootROM, Crypto engine, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9CN12.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWM_HPP_INCLUDED
#define ARCH_REG_PWM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Pulse Width Modulation Controller
 */
struct PWM
{
  static constexpr reg_addr_t base_addr = 0xf8034000;

  /**
   * PWM Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using DIVA  = regbits< type,  0,  8 >;  /**< CLKA, CLKB Divide Factor  */
    using PREA  = regbits< type,  8,  4 >;
    using DIVB  = regbits< type, 16,  8 >;  /**< CLKA, CLKB Divide Factor  */
    using PREB  = regbits< type, 24,  4 >;
  };

  /**
   * PWM Enable Register
   */
  struct ENA
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Disable Register
   */
  struct DIS
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID.  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID.  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID.  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID.  */
  };

  /**
   * PWM Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID.  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID.  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID.  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID.  */
  };

  /**
   * PWM Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00000000 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID.  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID.  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID.  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID.  */
  };

  /**
   * PWM Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using CHID0  = regbits< type,  0,  1 >;  /**< Channel ID  */
    using CHID1  = regbits< type,  1,  1 >;  /**< Channel ID  */
    using CHID2  = regbits< type,  2,  1 >;  /**< Channel ID  */
    using CHID3  = regbits< type,  3,  1 >;  /**< Channel ID  */
  };

  /**
   * PWM Channel Mode Register (ch_num = 0)
   */
  struct CMR0
  : public reg< uint32_t, base_addr + 0x00000200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000200, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler     */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment      */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity       */
    using CPD   = regbits< type, 10,  1 >;  /**< Channel Update Period  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 0)
   */
  struct CDTY0
  : public reg< uint32_t, base_addr + 0x00000204, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000204, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 32 >;  /**< Channel Duty Cycle  */
  };

  /**
   * PWM Channel Period Register (ch_num = 0)
   */
  struct CPRD0
  : public reg< uint32_t, base_addr + 0x00000208, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000208, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 32 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 0)
   */
  struct CCNT0
  : public reg< uint32_t, base_addr + 0x0000020c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000020c, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 32 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Update Register (ch_num = 0)
   */
  struct CUPD0
  : public reg< uint32_t, base_addr + 0x00000210, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000210, wo, 0 >;

    using CUPD  = regbits< type,  0, 32 >;
  };

  /**
   * PWM Channel Mode Register (ch_num = 1)
   */
  struct CMR1
  : public reg< uint32_t, base_addr + 0x00000220, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000220, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler     */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment      */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity       */
    using CPD   = regbits< type, 10,  1 >;  /**< Channel Update Period  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 1)
   */
  struct CDTY1
  : public reg< uint32_t, base_addr + 0x00000224, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000224, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 32 >;  /**< Channel Duty Cycle  */
  };

  /**
   * PWM Channel Period Register (ch_num = 1)
   */
  struct CPRD1
  : public reg< uint32_t, base_addr + 0x00000228, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000228, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 32 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 1)
   */
  struct CCNT1
  : public reg< uint32_t, base_addr + 0x0000022c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000022c, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 32 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Update Register (ch_num = 1)
   */
  struct CUPD1
  : public reg< uint32_t, base_addr + 0x00000230, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000230, wo, 0 >;

    using CUPD  = regbits< type,  0, 32 >;
  };

  /**
   * PWM Channel Mode Register (ch_num = 2)
   */
  struct CMR2
  : public reg< uint32_t, base_addr + 0x00000240, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000240, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler     */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment      */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity       */
    using CPD   = regbits< type, 10,  1 >;  /**< Channel Update Period  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 2)
   */
  struct CDTY2
  : public reg< uint32_t, base_addr + 0x00000244, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000244, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 32 >;  /**< Channel Duty Cycle  */
  };

  /**
   * PWM Channel Period Register (ch_num = 2)
   */
  struct CPRD2
  : public reg< uint32_t, base_addr + 0x00000248, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000248, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 32 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 2)
   */
  struct CCNT2
  : public reg< uint32_t, base_addr + 0x0000024c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000024c, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 32 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Update Register (ch_num = 2)
   */
  struct CUPD2
  : public reg< uint32_t, base_addr + 0x00000250, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000250, wo, 0 >;

    using CUPD  = regbits< type,  0, 32 >;
  };

  /**
   * PWM Channel Mode Register (ch_num = 3)
   */
  struct CMR3
  : public reg< uint32_t, base_addr + 0x00000260, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000260, rw, 0x00000000 >;

    using CPRE  = regbits< type,  0,  4 >;  /**< Channel Pre-scaler     */
    using CALG  = regbits< type,  8,  1 >;  /**< Channel Alignment      */
    using CPOL  = regbits< type,  9,  1 >;  /**< Channel Polarity       */
    using CPD   = regbits< type, 10,  1 >;  /**< Channel Update Period  */
  };

  /**
   * PWM Channel Duty Cycle Register (ch_num = 3)
   */
  struct CDTY3
  : public reg< uint32_t, base_addr + 0x00000264, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000264, rw, 0x00000000 >;

    using CDTY  = regbits< type,  0, 32 >;  /**< Channel Duty Cycle  */
  };

  /**
   * PWM Channel Period Register (ch_num = 3)
   */
  struct CPRD3
  : public reg< uint32_t, base_addr + 0x00000268, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000268, rw, 0x00000000 >;

    using CPRD  = regbits< type,  0, 32 >;  /**< Channel Period  */
  };

  /**
   * PWM Channel Counter Register (ch_num = 3)
   */
  struct CCNT3
  : public reg< uint32_t, base_addr + 0x0000026c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000026c, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 32 >;  /**< Channel Counter Register  */
  };

  /**
   * PWM Channel Update Register (ch_num = 3)
   */
  struct CUPD3
  : public reg< uint32_t, base_addr + 0x00000270, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000270, wo, 0 >;

    using CUPD  = regbits< type,  0, 32 >;
  };
};
} // namespace mptl

#endif // ARCH_REG_PWM_HPP_INCLUDED
