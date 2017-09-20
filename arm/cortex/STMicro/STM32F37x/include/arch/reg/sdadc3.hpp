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
//  Import from CMSIS-SVD: "STMicro/STM32F37x.svd"
//
//  name: STM32F37x
//  version: 1.3
//  description: STM32F37x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SDADC3_HPP_INCLUDED
#define ARCH_REG_SDADC3_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Sigma-delta analog-to-digital converter
 *
 * (derived from: SDADC1)
 */
struct SDADC3
{
  static constexpr reg_addr_t base_addr = 0x40016800;

  /**
   * control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using EOCALIE  = regbits< type,  0,  1 >;  /**< End of calibration interrupt enable                              */
    using JEOCIE   = regbits< type,  1,  1 >;  /**< Injected end of conversion interrupt enable                      */
    using JOVRIE   = regbits< type,  2,  1 >;  /**< Injected data overrun interrupt enable                           */
    using REOCIE   = regbits< type,  3,  1 >;  /**< Regular end of conversion interrupt enable                       */
    using ROVRIE   = regbits< type,  4,  1 >;  /**< Regular data overrun interrupt enable                            */
    using REFV     = regbits< type,  8,  2 >;  /**< Reference voltage selection                                      */
    using SLOWCK   = regbits< type, 10,  1 >;  /**< Slow clock mode enable                                           */
    using SBI      = regbits< type, 11,  1 >;  /**< Enter Standby mode when idle                                     */
    using PDI      = regbits< type, 12,  1 >;  /**< Enter power down mode when idle                                  */
    using JSYNC    = regbits< type, 14,  1 >;  /**< Launch a injected conversion synchronously with SDADC1           */
    using RSYNC    = regbits< type, 15,  1 >;  /**< Launch regular conversion synchronously with SDADC1              */
    using JDMAEN   = regbits< type, 16,  1 >;  /**< DMA channel enabled to read data for the injected channel group  */
    using RDMAEN   = regbits< type, 17,  1 >;  /**< DMA channel enabled to read data for the regular channel         */
    using INIT     = regbits< type, 31,  1 >;  /**< Initialization mode request                                      */
  };

  /**
   * control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using FAST        = regbits< type, 24,  1 >;  /**< Fast conversion mode selection                                                    */
    using RSWSTART    = regbits< type, 23,  1 >;  /**< Software start of a conversion on the regular channel                             */
    using RCONT       = regbits< type, 22,  1 >;  /**< Continuous mode selection for regular conversions                                 */
    using RCH         = regbits< type, 16,  4 >;  /**< Regular channel selection                                                         */
    using JSWSTART    = regbits< type, 15,  1 >;  /**< Start a conversion of the injected group of channels                              */
    using JEXTEN      = regbits< type, 13,  2 >;  /**< Trigger enable and trigger edge selection for injected conversions                */
    using JEXTSEL     = regbits< type,  8,  4 >;  /**< Trigger signal selection for launching injected conversions                       */
    using JDS         = regbits< type,  6,  1 >;  /**< Delay start of injected conversions.                                              */
    using JCONT       = regbits< type,  5,  1 >;  /**< Continuous mode selection for injected conversions                                */
    using STARTCALIB  = regbits< type,  4,  1 >;  /**< Start calibration                                                                 */
    using CALIBCNT    = regbits< type,  1,  2 >;  /**< Number of calibration sequences to be performed (number of valid configurations)  */
    using ADON        = regbits< type,  0,  1 >;  /**< SDADC enable                                                                      */
  };

  /**
   * interrupt and status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using INITRDY  = regbits< type, 31,  1 >;  /**< Initialization mode is ready            */
    using STABIP   = regbits< type, 15,  1 >;  /**< Stabilization in progress status        */
    using RCIP     = regbits< type, 14,  1 >;  /**< Regular conversion in progress status   */
    using JCIP     = regbits< type, 13,  1 >;  /**< Injected conversion in progress status  */
    using CALIBIP  = regbits< type, 12,  1 >;  /**< Calibration in progress status          */
    using ROVRF    = regbits< type,  4,  1 >;  /**< Regular conversion overrun flag         */
    using REOCF    = regbits< type,  3,  1 >;  /**< End of regular conversion flag          */
    using JOVRF    = regbits< type,  2,  1 >;  /**< Injected conversion overrun flag        */
    using JEOCF    = regbits< type,  1,  1 >;  /**< End of injected conversion flag         */
    using EOCALF   = regbits< type,  0,  1 >;  /**< End of calibration flag                 */
  };

  /**
   * interrupt and status clear register
   */
  struct CLRISR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using CLRROVRF   = regbits< type,  4,  1 >;  /**< Clear the regular conversion overrun flag   */
    using CLRJOVRF   = regbits< type,  2,  1 >;  /**< Clear the injected conversion overrun flag  */
    using CLREOCALF  = regbits< type,  0,  1 >;  /**< Clear the end of calibration flag           */
  };

  /**
   * injected channel group selection register
   */
  struct JCHGR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000001 >;

    using JCHG  = regbits< type,  0,  9 >;  /**< Injected channel group selection  */
  };

  /**
   * configuration 0 register
   */
  struct CONF0R
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using COMMON0  = regbits< type, 30,  2 >;  /**< Common mode for configuration 0                    */
    using SE0      = regbits< type, 26,  2 >;  /**< Single-ended mode for configuration 0              */
    using GAIN0    = regbits< type, 20,  3 >;  /**< Gain setting for configuration 0                   */
    using OFFSET0  = regbits< type,  0, 12 >;  /**< Twelve-bit calibration offset for configuration 0  */
  };

  /**
   * configuration 1 register
   */
  struct CONF1R
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using COMMON1  = regbits< type, 30,  2 >;  /**< Common mode for configuration 1                    */
    using SE1      = regbits< type, 26,  2 >;  /**< Single-ended mode for configuration 1              */
    using GAIN1    = regbits< type, 20,  3 >;  /**< Gain setting for configuration 1                   */
    using OFFSET1  = regbits< type,  0, 12 >;  /**< Twelve-bit calibration offset for configuration 1  */
  };

  /**
   * configuration 2 register
   */
  struct CONF2R
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using COMMON2  = regbits< type, 30,  2 >;  /**< Common mode for configuration 2                    */
    using SE2      = regbits< type, 26,  2 >;  /**< Single-ended mode for configuration 2              */
    using GAIN2    = regbits< type, 20,  3 >;  /**< Gain setting for configuration 2                   */
    using OFFSET2  = regbits< type,  0, 12 >;  /**< Twelve-bit calibration offset for configuration 2  */
  };

  /**
   * channel configuration register 1
   */
  struct CONFCHR1
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using CONFCH7  = regbits< type, 28,  2 >;  /**< CONFCH7  */
    using CONFCH6  = regbits< type, 24,  2 >;  /**< CONFCH6  */
    using CONFCH5  = regbits< type, 20,  2 >;  /**< CONFCH5  */
    using CONFCH4  = regbits< type, 16,  2 >;  /**< CONFCH4  */
    using CONFCH3  = regbits< type, 12,  2 >;  /**< CONFCH3  */
    using CONFCH2  = regbits< type,  8,  2 >;  /**< CONFCH2  */
    using CONFCH1  = regbits< type,  4,  2 >;  /**< CONFCH1  */
    using CONFCH0  = regbits< type,  0,  2 >;  /**< CONFCH0  */
  };

  /**
   * channel configuration register 2
   */
  struct CONFCHR2
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using CONFCH8  = regbits< type,  0,  2 >;  /**< Channel 8 configuration  */
  };

  /**
   * data register for injected group
   */
  struct JDATAR
  : public reg< uint32_t, base_addr + 0x60, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0x00000000 >;

    using JDATACH  = regbits< type, 25,  4 >;  /**< Injected channel most recently converted  */
    using JDATA    = regbits< type,  0, 16 >;  /**< Injected group conversion data            */
  };

  /**
   * data register for the regular channel
   */
  struct RDATAR
  : public reg< uint32_t, base_addr + 0x64, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, ro, 0x00000000 >;

    using RDATA  = regbits< type,  0, 16 >;  /**< Regular channel conversion data  */
  };

  /**
   * SDADC1 and SDADC2 injected data register
   */
  struct JDATA12R
  : public reg< uint32_t, base_addr + 0x70, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0x00000000 >;

    using JDATA2  = regbits< type, 16, 16 >;  /**< Injected group conversion data for SDADC2  */
    using JDATA1  = regbits< type,  0, 16 >;  /**< Injected group conversion data for SDADC1  */
  };

  /**
   * SDADC1 and SDADC2 regular data register
   */
  struct RDATA12R
  : public reg< uint32_t, base_addr + 0x74, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0x00000000 >;

    using RDATA2  = regbits< type, 16, 16 >;  /**< Regular conversion data for SDADC2  */
    using RDATA1  = regbits< type,  0, 16 >;  /**< Regular conversion data for SDADC1  */
  };

  /**
   * SDADC1 and SDADC3 injected data register
   */
  struct JDATA13R
  : public reg< uint32_t, base_addr + 0x78, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, ro, 0x00000000 >;

    using JDATA3  = regbits< type, 16, 16 >;  /**< Injected group conversion data for SDADC3  */
    using JDATA1  = regbits< type,  0, 16 >;  /**< Injected group conversion data for SDADC1  */
  };

  /**
   * SDADC1 and SDADC3 regular data register
   */
  struct RDATA13R
  : public reg< uint32_t, base_addr + 0x7c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, ro, 0x00000000 >;

    using RDATA3  = regbits< type, 16, 16 >;  /**< Regular conversion data for SDADC3  */
    using RDATA1  = regbits< type,  0, 16 >;  /**< Regular conversion data for SDADC1  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SDADC3_HPP_INCLUDED
