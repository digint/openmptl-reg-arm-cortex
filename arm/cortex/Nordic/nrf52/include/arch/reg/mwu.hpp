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
//  Import from CMSIS-SVD: "Nordic/nrf52.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf52
//  series: nrf52
//  version: 1
//  description: nRF52 reference description for radio MCU with ARM 32-bit Cortex-M4 Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MWU_HPP_INCLUDED
#define ARCH_REG_MWU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Memory Watch Unit
 */
struct MWU
{
  static constexpr reg_addr_t base_addr = 0x40020000;

  /**
   * Enable or disable interrupt
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION0WA   = regbits< type,  0,  1 >;  /**< Enable or disable interrupt on EVENTS_REGION[0].WA event   */
    using REGION0RA   = regbits< type,  1,  1 >;  /**< Enable or disable interrupt on EVENTS_REGION[0].RA event   */
    using REGION1WA   = regbits< type,  2,  1 >;  /**< Enable or disable interrupt on EVENTS_REGION[1].WA event   */
    using REGION1RA   = regbits< type,  3,  1 >;  /**< Enable or disable interrupt on EVENTS_REGION[1].RA event   */
    using REGION2WA   = regbits< type,  4,  1 >;  /**< Enable or disable interrupt on EVENTS_REGION[2].WA event   */
    using REGION2RA   = regbits< type,  5,  1 >;  /**< Enable or disable interrupt on EVENTS_REGION[2].RA event   */
    using REGION3WA   = regbits< type,  6,  1 >;  /**< Enable or disable interrupt on EVENTS_REGION[3].WA event   */
    using REGION3RA   = regbits< type,  7,  1 >;  /**< Enable or disable interrupt on EVENTS_REGION[3].RA event   */
    using PREGION0WA  = regbits< type, 24,  1 >;  /**< Enable or disable interrupt on EVENTS_PREGION[0].WA event  */
    using PREGION0RA  = regbits< type, 25,  1 >;  /**< Enable or disable interrupt on EVENTS_PREGION[0].RA event  */
    using PREGION1WA  = regbits< type, 26,  1 >;  /**< Enable or disable interrupt on EVENTS_PREGION[1].WA event  */
    using PREGION1RA  = regbits< type, 27,  1 >;  /**< Enable or disable interrupt on EVENTS_PREGION[1].RA event  */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION0WA   = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_REGION[0].WA event   */
    using REGION0RA   = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_REGION[0].RA event   */
    using REGION1WA   = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_REGION[1].WA event   */
    using REGION1RA   = regbits< type,  3,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_REGION[1].RA event   */
    using REGION2WA   = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_REGION[2].WA event   */
    using REGION2RA   = regbits< type,  5,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_REGION[2].RA event   */
    using REGION3WA   = regbits< type,  6,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_REGION[3].WA event   */
    using REGION3RA   = regbits< type,  7,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_REGION[3].RA event   */
    using PREGION0WA  = regbits< type, 24,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_PREGION[0].WA event  */
    using PREGION0RA  = regbits< type, 25,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_PREGION[0].RA event  */
    using PREGION1WA  = regbits< type, 26,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_PREGION[1].WA event  */
    using PREGION1RA  = regbits< type, 27,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_PREGION[1].RA event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION0WA   = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_REGION[0].WA event   */
    using REGION0RA   = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_REGION[0].RA event   */
    using REGION1WA   = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_REGION[1].WA event   */
    using REGION1RA   = regbits< type,  3,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_REGION[1].RA event   */
    using REGION2WA   = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_REGION[2].WA event   */
    using REGION2RA   = regbits< type,  5,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_REGION[2].RA event   */
    using REGION3WA   = regbits< type,  6,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_REGION[3].WA event   */
    using REGION3RA   = regbits< type,  7,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_REGION[3].RA event   */
    using PREGION0WA  = regbits< type, 24,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_PREGION[0].WA event  */
    using PREGION0RA  = regbits< type, 25,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_PREGION[0].RA event  */
    using PREGION1WA  = regbits< type, 26,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_PREGION[1].WA event  */
    using PREGION1RA  = regbits< type, 27,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_PREGION[1].RA event  */
  };

  /**
   * Enable or disable non-maskable interrupt
   */
  struct NMIEN
  : public reg< uint32_t, base_addr + 0x320, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x320, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION0WA   = regbits< type,  0,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_REGION[0].WA event   */
    using REGION0RA   = regbits< type,  1,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_REGION[0].RA event   */
    using REGION1WA   = regbits< type,  2,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_REGION[1].WA event   */
    using REGION1RA   = regbits< type,  3,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_REGION[1].RA event   */
    using REGION2WA   = regbits< type,  4,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_REGION[2].WA event   */
    using REGION2RA   = regbits< type,  5,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_REGION[2].RA event   */
    using REGION3WA   = regbits< type,  6,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_REGION[3].WA event   */
    using REGION3RA   = regbits< type,  7,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_REGION[3].RA event   */
    using PREGION0WA  = regbits< type, 24,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_PREGION[0].WA event  */
    using PREGION0RA  = regbits< type, 25,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_PREGION[0].RA event  */
    using PREGION1WA  = regbits< type, 26,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_PREGION[1].WA event  */
    using PREGION1RA  = regbits< type, 27,  1 >;  /**< Enable or disable non-maskable interrupt on EVENTS_PREGION[1].RA event  */
  };

  /**
   * Enable non-maskable interrupt
   */
  struct NMIENSET
  : public reg< uint32_t, base_addr + 0x324, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x324, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION0WA   = regbits< type,  0,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_REGION[0].WA event   */
    using REGION0RA   = regbits< type,  1,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_REGION[0].RA event   */
    using REGION1WA   = regbits< type,  2,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_REGION[1].WA event   */
    using REGION1RA   = regbits< type,  3,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_REGION[1].RA event   */
    using REGION2WA   = regbits< type,  4,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_REGION[2].WA event   */
    using REGION2RA   = regbits< type,  5,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_REGION[2].RA event   */
    using REGION3WA   = regbits< type,  6,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_REGION[3].WA event   */
    using REGION3RA   = regbits< type,  7,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_REGION[3].RA event   */
    using PREGION0WA  = regbits< type, 24,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[0].WA event  */
    using PREGION0RA  = regbits< type, 25,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[0].RA event  */
    using PREGION1WA  = regbits< type, 26,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[1].WA event  */
    using PREGION1RA  = regbits< type, 27,  1 >;  /**< Write '1' to Enable non-maskable interrupt on EVENTS_PREGION[1].RA event  */
  };

  /**
   * Disable non-maskable interrupt
   */
  struct NMIENCLR
  : public reg< uint32_t, base_addr + 0x328, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x328, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION0WA   = regbits< type,  0,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_REGION[0].WA event   */
    using REGION0RA   = regbits< type,  1,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_REGION[0].RA event   */
    using REGION1WA   = regbits< type,  2,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_REGION[1].WA event   */
    using REGION1RA   = regbits< type,  3,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_REGION[1].RA event   */
    using REGION2WA   = regbits< type,  4,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_REGION[2].WA event   */
    using REGION2RA   = regbits< type,  5,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_REGION[2].RA event   */
    using REGION3WA   = regbits< type,  6,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_REGION[3].WA event   */
    using REGION3RA   = regbits< type,  7,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_REGION[3].RA event   */
    using PREGION0WA  = regbits< type, 24,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[0].WA event  */
    using PREGION0RA  = regbits< type, 25,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[0].RA event  */
    using PREGION1WA  = regbits< type, 26,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[1].WA event  */
    using PREGION1RA  = regbits< type, 27,  1 >;  /**< Write '1' to Clear non-maskable interrupt on EVENTS_PREGION[1].RA event  */
  };

  /**
   * Enable/disable regions watch
   */
  struct REGIONEN
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RGN0WA   = regbits< type,  0,  1 >;  /**< Enable/disable write access watch in region[0]   */
    using RGN0RA   = regbits< type,  1,  1 >;  /**< Enable/disable read access watch in region[0]    */
    using RGN1WA   = regbits< type,  2,  1 >;  /**< Enable/disable write access watch in region[1]   */
    using RGN1RA   = regbits< type,  3,  1 >;  /**< Enable/disable read access watch in region[1]    */
    using RGN2WA   = regbits< type,  4,  1 >;  /**< Enable/disable write access watch in region[2]   */
    using RGN2RA   = regbits< type,  5,  1 >;  /**< Enable/disable read access watch in region[2]    */
    using RGN3WA   = regbits< type,  6,  1 >;  /**< Enable/disable write access watch in region[3]   */
    using RGN3RA   = regbits< type,  7,  1 >;  /**< Enable/disable read access watch in region[3]    */
    using PRGN0WA  = regbits< type, 24,  1 >;  /**< Enable/disable write access watch in PREGION[0]  */
    using PRGN0RA  = regbits< type, 25,  1 >;  /**< Enable/disable read access watch in PREGION[0]   */
    using PRGN1WA  = regbits< type, 26,  1 >;  /**< Enable/disable write access watch in PREGION[1]  */
    using PRGN1RA  = regbits< type, 27,  1 >;  /**< Enable/disable read access watch in PREGION[1]   */
  };

  /**
   * Enable regions watch
   */
  struct REGIONENSET
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RGN0WA   = regbits< type,  0,  1 >;  /**< Enable write access watch in region[0]   */
    using RGN0RA   = regbits< type,  1,  1 >;  /**< Enable read access watch in region[0]    */
    using RGN1WA   = regbits< type,  2,  1 >;  /**< Enable write access watch in region[1]   */
    using RGN1RA   = regbits< type,  3,  1 >;  /**< Enable read access watch in region[1]    */
    using RGN2WA   = regbits< type,  4,  1 >;  /**< Enable write access watch in region[2]   */
    using RGN2RA   = regbits< type,  5,  1 >;  /**< Enable read access watch in region[2]    */
    using RGN3WA   = regbits< type,  6,  1 >;  /**< Enable write access watch in region[3]   */
    using RGN3RA   = regbits< type,  7,  1 >;  /**< Enable read access watch in region[3]    */
    using PRGN0WA  = regbits< type, 24,  1 >;  /**< Enable write access watch in PREGION[0]  */
    using PRGN0RA  = regbits< type, 25,  1 >;  /**< Enable read access watch in PREGION[0]   */
    using PRGN1WA  = regbits< type, 26,  1 >;  /**< Enable write access watch in PREGION[1]  */
    using PRGN1RA  = regbits< type, 27,  1 >;  /**< Enable read access watch in PREGION[1]   */
  };

  /**
   * Disable regions watch
   */
  struct REGIONENCLR
  : public reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RGN0WA   = regbits< type,  0,  1 >;  /**< Disable write access watch in region[0]   */
    using RGN0RA   = regbits< type,  1,  1 >;  /**< Disable read access watch in region[0]    */
    using RGN1WA   = regbits< type,  2,  1 >;  /**< Disable write access watch in region[1]   */
    using RGN1RA   = regbits< type,  3,  1 >;  /**< Disable read access watch in region[1]    */
    using RGN2WA   = regbits< type,  4,  1 >;  /**< Disable write access watch in region[2]   */
    using RGN2RA   = regbits< type,  5,  1 >;  /**< Disable read access watch in region[2]    */
    using RGN3WA   = regbits< type,  6,  1 >;  /**< Disable write access watch in region[3]   */
    using RGN3RA   = regbits< type,  7,  1 >;  /**< Disable read access watch in region[3]    */
    using PRGN0WA  = regbits< type, 24,  1 >;  /**< Disable write access watch in PREGION[0]  */
    using PRGN0RA  = regbits< type, 25,  1 >;  /**< Disable read access watch in PREGION[0]   */
    using PRGN1WA  = regbits< type, 26,  1 >;  /**< Disable write access watch in PREGION[1]  */
    using PRGN1RA  = regbits< type, 27,  1 >;  /**< Disable read access watch in PREGION[1]   */
  };
};
} // namespace mptl

#endif // ARCH_REG_MWU_HPP_INCLUDED
