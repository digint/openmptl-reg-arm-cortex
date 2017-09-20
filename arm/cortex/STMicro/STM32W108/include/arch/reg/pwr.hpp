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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PWR_HPP_INCLUDED
#define ARCH_REG_PWR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power control
 */
struct PWR
{
  static constexpr reg_addr_t base_addr = 0x40000004;

  /**
   * PWR_DSLEEPCR1
   */
  struct PWR_DSLEEPCR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using PWR_CSYSPWRUPACKCR  = regbits< type,  1,  1 >;  /**< PWR_CSYSPWRUPACKCR  */
  };

  /**
   * PWR_DSLEEPCR2
   */
  struct PWR_DSLEEPCR2
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using MODE  = regbits< type,  0,  1 >;  /**< MODE  */
  };

  /**
   * Voltage regulator Control register
   */
  struct PWR_VREGCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000207 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000207 >;

    using PWR_VREGCR_1V2TRIM  = regbits< type,  0,  3 >;  /**< 1V2 regulator trim value                 */
    using PWR_VREGCR_1V2EN    = regbits< type,  4,  1 >;  /**< 1V2 direct controle of regulator on/off  */
    using PWR_VREGCR_1V8TRIM  = regbits< type,  7,  3 >;  /**< 1V8 regulator trim value                 */
    using PWR_VREGCR_1V8EN    = regbits< type, 11,  1 >;  /**< 1V8 direct controle of regulator on/off  */
    using PWR_VREGCR_VREFEN   = regbits< type, 15,  1 >;  /**< VREF on/off                              */
  };

  /**
   * PWR_WAKECR1
   */
  struct PWR_WAKECR1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000200 >;

    using WAKEEN        = regbits< type,  0,  1 >;  /**< WAKEEN        */
    using SC1           = regbits< type,  1,  1 >;  /**< SC1           */
    using SC2           = regbits< type,  2,  1 >;  /**< SC2           */
    using IRQD          = regbits< type,  3,  1 >;  /**< IRQD          */
    using COMPA         = regbits< type,  4,  1 >;  /**< COMPA         */
    using COMPB         = regbits< type,  5,  1 >;  /**< COMPB         */
    using WRAP          = regbits< type,  6,  1 >;  /**< WRAP          */
    using CORE          = regbits< type,  7,  1 >;  /**< CORE          */
    using CPWRRUPREQ    = regbits< type,  8,  1 >;  /**< CPWRRUPREQ    */
    using CSYSPWRUPREQ  = regbits< type,  9,  1 >;  /**< CSYSPWRUPREQ  */
  };

  /**
   * PWR_WAKECR2
   */
  struct PWR_WAKECR2
  : public reg< uint32_t, base_addr + 0x20, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, wo, 0x00000000 >;

    using COREWAKE  = regbits< type,  5,  1 >;  /**< COREWAKE  */
  };

  /**
   * PWR_WAKESR
   */
  struct PWR_WAKESR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using GPIOPIN       = regbits< type,  0,  1 >;  /**< GPIOPIN       */
    using SC1           = regbits< type,  1,  1 >;  /**< SC1           */
    using SC2           = regbits< type,  2,  1 >;  /**< SC2           */
    using IRQD          = regbits< type,  3,  1 >;  /**< IRQD          */
    using COMPA         = regbits< type,  4,  1 >;  /**< COMPA         */
    using COMPB         = regbits< type,  5,  1 >;  /**< COMPB         */
    using WRAP          = regbits< type,  6,  1 >;  /**< WRAP          */
    using CORE          = regbits< type,  7,  1 >;  /**< CORE          */
    using CPWRRUPREQ    = regbits< type,  8,  1 >;  /**< CPWRRUPREQ    */
    using CSYSPWRUPREQ  = regbits< type,  9,  1 >;  /**< CSYSPWRUPREQ  */
  };

  /**
   * PWR_CPWRUPREQSR
   */
  struct PWR_CPWRUPREQSR
  : public reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >;

    using REQ  = regbits< type,  0,  1 >;  /**< REQ  */
  };

  /**
   * PWR_CSYSPWRUPREQSR
   */
  struct PWR_CSYSPWRUPREQSR
  : public reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >;

    using REQ  = regbits< type,  0,  1 >;  /**< REQ  */
  };

  /**
   * PWR_CSYSPWRUPACKSR
   */
  struct PWR_CSYSPWRUPACKSR
  : public reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >;

    using ACK  = regbits< type,  0,  1 >;  /**< ACK  */
  };

  /**
   * PWR_CSYSPWRUPACKCR
   */
  struct PWR_CSYSPWRUPACKCR
  : public reg< uint32_t, base_addr + 0x3c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0x00000000 >;

    using INHIBIT  = regbits< type,  0,  1 >;  /**< INHIBIT  */
  };

  /**
   * Wake GPIO Port A register
   */
  struct PWR_WAKEPAR
  : public reg< uint32_t, base_addr + 0xbc04, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc04, rw, 0x00000000 >;

    using PA0  = regbits< type,  0,  1 >;  /**< PA0  */
    using PA1  = regbits< type,  1,  1 >;  /**< PA1  */
    using PA2  = regbits< type,  2,  1 >;  /**< PA2  */
    using PA3  = regbits< type,  3,  1 >;  /**< PA3  */
    using PA4  = regbits< type,  4,  1 >;  /**< PA4  */
    using PA5  = regbits< type,  5,  1 >;  /**< PA5  */
    using PA6  = regbits< type,  6,  1 >;  /**< PA6  */
    using PA7  = regbits< type,  7,  1 >;  /**< PA7  */
  };

  /**
   * Wake GPIO Port B register
   */
  struct PWR_WAKEPBR
  : public reg< uint32_t, base_addr + 0xbc08, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc08, rw, 0x00000000 >;

    using PB0  = regbits< type,  0,  1 >;  /**< PB0  */
    using PB1  = regbits< type,  1,  1 >;  /**< PB1  */
    using PB2  = regbits< type,  2,  1 >;  /**< PB2  */
    using PB3  = regbits< type,  3,  1 >;  /**< PB3  */
    using PB4  = regbits< type,  4,  1 >;  /**< PB4  */
    using PB5  = regbits< type,  5,  1 >;  /**< PB5  */
    using PB6  = regbits< type,  6,  1 >;  /**< PB6  */
    using PB7  = regbits< type,  7,  1 >;  /**< PB7  */
  };

  /**
   * Wake GPIO Port C register
   */
  struct PWR_WAKEPCR
  : public reg< uint32_t, base_addr + 0xbc0c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc0c, rw, 0x00000000 >;

    using PC0  = regbits< type,  0,  1 >;  /**< PC0  */
    using PC1  = regbits< type,  1,  1 >;  /**< PC1  */
    using PC2  = regbits< type,  2,  1 >;  /**< PC2  */
    using PC3  = regbits< type,  3,  1 >;  /**< PC3  */
    using PC4  = regbits< type,  4,  1 >;  /**< PC4  */
    using PC5  = regbits< type,  5,  1 >;  /**< PC5  */
    using PC6  = regbits< type,  6,  1 >;  /**< PC6  */
    using PC7  = regbits< type,  7,  1 >;  /**< PC7  */
  };

  /**
   * Wake filter register
   */
  struct PWR_WAKEFILTR
  : public reg< uint32_t, base_addr + 0xbc18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc18, rw, 0x00000000 >;

    using GPIO  = regbits< type,  0,  1 >;  /**< Enable filter on GPIO wakeup sources enabled by the PWR_WAKEPxR registers  */
    using SC1   = regbits< type,  1,  1 >;  /**< Enable filter on GPIO wakeup source SC1 (PB2)                              */
    using SC2   = regbits< type,  2,  1 >;  /**< Enable filter on GPIO wakeup source SC2 (PA2)                              */
    using IRQD  = regbits< type,  3,  1 >;  /**< Enable filter on GPIO wakeup source EXTI D                                 */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWR_HPP_INCLUDED
