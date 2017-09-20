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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D35.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D35
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D35 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, dual Ethernet, dual CAN, security (refer to http://www.atmel.com/devices/SAMA5D35.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AXIMX_HPP_INCLUDED
#define ARCH_REG_AXIMX_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AXI Matrix
 */
struct AXIMX
{
  static constexpr reg_addr_t base_addr = 0x00800000;

  /**
   * Remap Register
   */
  struct REMAP
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0x00000000 >;

    using REMAP0  = regbits< type,  0,  1 >;  /**< Remap State 0  */
    using REMAP1  = regbits< type,  1,  1 >;  /**< Remap State 1  */
  };

  /**
   * Peripheral ID Register 4
   */
  struct PERIPH_ID4
  : public reg< uint32_t, base_addr + 0x00001fd0, ro, 0x00000004 >
  {
    using type = reg< uint32_t, base_addr + 0x00001fd0, ro, 0x00000004 >;

    using ID  = regbits< type,  0,  8 >;  /**< Peripheral ID  */
  };

  /**
   * Peripheral ID Register 5
   */
  struct PERIPH_ID5
  : public reg< uint32_t, base_addr + 0x00001fd4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00001fd4, ro, 0x00000000 >;

    using ID  = regbits< type,  0,  8 >;  /**< Peripheral ID  */
  };

  /**
   * Peripheral ID Register 6
   */
  struct PERIPH_ID6
  : public reg< uint32_t, base_addr + 0x00001fd8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00001fd8, ro, 0x00000000 >;

    using ID  = regbits< type,  0,  8 >;  /**< Peripheral ID  */
  };

  /**
   * Peripheral ID Register 7
   */
  struct PERIPH_ID7
  : public reg< uint32_t, base_addr + 0x00001fdc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00001fdc, ro, 0x00000000 >;

    using ID  = regbits< type,  0,  8 >;  /**< Peripheral ID  */
  };

  /**
   * Peripheral ID Register 0
   */
  struct PERIPH_ID0
  : public reg< uint32_t, base_addr + 0x00001fe0, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x00001fe0, ro, 0x00000001 >;

    using ID  = regbits< type,  0,  8 >;  /**< Peripheral ID  */
  };

  /**
   * Peripheral ID Register 1
   */
  struct PERIPH_ID1
  : public reg< uint32_t, base_addr + 0x00001fe4, ro, 0x000000B3 >
  {
    using type = reg< uint32_t, base_addr + 0x00001fe4, ro, 0x000000B3 >;

    using ID  = regbits< type,  0,  8 >;  /**< Peripheral ID  */
  };

  /**
   * Peripheral ID Register 2
   */
  struct PERIPH_ID2
  : public reg< uint32_t, base_addr + 0x00001fe8, ro, 0x0000006B >
  {
    using type = reg< uint32_t, base_addr + 0x00001fe8, ro, 0x0000006B >;

    using ID  = regbits< type,  0,  8 >;  /**< Peripheral ID  */
  };

  /**
   * Peripheral ID Register 3
   */
  struct PERIPH_ID3
  : public reg< uint32_t, base_addr + 0x00001fec, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00001fec, ro, 0x00000000 >;

    using ID  = regbits< type,  0,  8 >;  /**< Peripheral ID  */
  };

  /**
   * Component ID Register
   */
  struct COMP_ID[%s]
  : public reg< uint32_t, base_addr + 0x00001ff0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00001ff0, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using ID  = regbits< type,  0,  8 >;  /**< Component ID  */
  };

  /**
   * AMIB3 Bus Matrix Functionality Modification Register
   */
  struct AMIB3_FN_MOD_BM_ISS
  : public reg< uint32_t, base_addr + 0x00005008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00005008, rw, 0x00000000 >;

    using RD_ISS  = regbits< type,  0,  1 >;  /**< Read Issuing   */
    using WR_ISS  = regbits< type,  1,  1 >;  /**< Write Issuing  */
  };

  /**
   * AMIB3 Bypass Merge
   */
  struct AMIB3_FN_MOD2
  : public reg< uint32_t, base_addr + 0x00005024, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00005024, rw, 0x00000000 >;

    using BP_MRG  = regbits< type,  0,  1 >;  /**< Bypass Merge  */
  };

  /**
   * ASIB0 Read Channel QoS Register
   */
  struct ASIB0_READ_QOS
  : public reg< uint32_t, base_addr + 0x00042100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00042100, rw, 0x00000000 >;

    using RD_QOS  = regbits< type,  0,  4 >;  /**< Read QoS  */
  };

  /**
   * ASIB0 Write Channel QoS Register
   */
  struct ASIB0_WRITE_QOS
  : public reg< uint32_t, base_addr + 0x00042104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00042104, rw, 0x00000000 >;

    using WR_QOS  = regbits< type,  0,  4 >;  /**< Write QoS  */
  };

  /**
   * ASIB1 AHB Functionality Modification Register
   */
  struct ASIB1_FN_MOD_AHB
  : public reg< uint32_t, base_addr + 0x00043028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00043028, rw, 0x00000000 >;

    using RD_INCR_OVR  = regbits< type,  0,  1 >;  /**< Read INCR Override   */
    using WR_INCR_OVR  = regbits< type,  1,  1 >;  /**< Write INCR override  */
    using LOCK_OVR     = regbits< type,  2,  1 >;  /**< Lock Override        */
  };

  /**
   * ASIB1 Read Channel QoS Register
   */
  struct ASIB1_READ_QOS
  : public reg< uint32_t, base_addr + 0x00043100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00043100, rw, 0x00000000 >;

    using RD_QOS  = regbits< type,  0,  4 >;  /**< Read QoS  */
  };

  /**
   * ASIB1 Write Channel QoS Register
   */
  struct ASIB1_WRITE_QOS
  : public reg< uint32_t, base_addr + 0x00043104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00043104, rw, 0x00000000 >;

    using WR_QOS  = regbits< type,  0,  4 >;  /**< Write QoS  */
  };

  /**
   * ASIB1 Issuing Functionality Modification Register
   */
  struct ASIB1_FN_MOD
  : public reg< uint32_t, base_addr + 0x00043108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00043108, rw, 0x00000000 >;

    using RD_ISS  = regbits< type,  0,  1 >;  /**< Read Issuing   */
    using WR_ISS  = regbits< type,  1,  1 >;  /**< Write Issuing  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AXIMX_HPP_INCLUDED
