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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123GH6PM.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123GH6PM
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_GPIOB_AHB_HPP_INCLUDED
#define ARCH_REG_GPIOB_AHB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for GPIOA peripheral
 *
 * (derived from: GPIOA)
 */
struct GPIOB_AHB
{
  static constexpr reg_addr_t base_addr = 0x40059000;

  /**
   * GPIO Data
   */
  struct DATA
  : public reg< uint32_t, base_addr + 0x000003fc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Direction
   */
  struct DIR
  : public reg< uint32_t, base_addr + 0x00000400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Interrupt Sense
   */
  struct IS
  : public reg< uint32_t, base_addr + 0x00000404, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Interrupt Both Edges
   */
  struct IBE
  : public reg< uint32_t, base_addr + 0x00000408, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Interrupt Event
   */
  struct IEV
  : public reg< uint32_t, base_addr + 0x0000040c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Interrupt Mask
   */
  struct IM
  : public reg< uint32_t, base_addr + 0x00000410, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000410, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GPIO_IM_GPIO  = regbits< type,  0,  8 >;  /**< GPIO Interrupt Mask Enable  */
  };

  /**
   * GPIO Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x00000414, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000414, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GPIO_RIS_GPIO  = regbits< type,  0,  8 >;  /**< GPIO Interrupt Raw Status  */
  };

  /**
   * GPIO Masked Interrupt Status
   */
  struct MIS
  : public reg< uint32_t, base_addr + 0x00000418, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000418, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GPIO_MIS_GPIO  = regbits< type,  0,  8 >;  /**< GPIO Masked Interrupt Status  */
  };

  /**
   * GPIO Interrupt Clear
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x0000041c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000041c, wo, 0 >;

    using GPIO_ICR_GPIO  = regbits< type,  0,  8 >;  /**< GPIO Interrupt Clear  */
  };

  /**
   * GPIO Alternate Function Select
   */
  struct AFSEL
  : public reg< uint32_t, base_addr + 0x00000420, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO 2-mA Drive Select
   */
  struct DR2R
  : public reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO 4-mA Drive Select
   */
  struct DR4R
  : public reg< uint32_t, base_addr + 0x00000504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO 8-mA Drive Select
   */
  struct DR8R
  : public reg< uint32_t, base_addr + 0x00000508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Open Drain Select
   */
  struct ODR
  : public reg< uint32_t, base_addr + 0x0000050c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Pull-Up Select
   */
  struct PUR
  : public reg< uint32_t, base_addr + 0x00000510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Pull-Down Select
   */
  struct PDR
  : public reg< uint32_t, base_addr + 0x00000514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Slew Rate Control Select
   */
  struct SLR
  : public reg< uint32_t, base_addr + 0x00000518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Digital Enable
   */
  struct DEN
  : public reg< uint32_t, base_addr + 0x0000051c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Lock
   */
  struct LOCK
  : public reg< uint32_t, base_addr + 0x00000520, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000520, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GPIO_LOCK  = regbits< type,  0, 32 >;  /**< GPIO Lock  */
  };

  /**
   * GPIO Commit
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000524, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Analog Mode Select
   */
  struct AMSEL
  : public reg< uint32_t, base_addr + 0x00000528, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO Port Control
   */
  struct PCTL
  : public reg< uint32_t, base_addr + 0x0000052c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO ADC Control
   */
  struct ADCCTL
  : public reg< uint32_t, base_addr + 0x00000530, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * GPIO DMA Control
   */
  struct DMACTL
  : public reg< uint32_t, base_addr + 0x00000534, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIOB_AHB_HPP_INCLUDED
