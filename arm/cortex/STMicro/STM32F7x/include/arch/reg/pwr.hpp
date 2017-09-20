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
//  Import from CMSIS-SVD: "STMicro/STM32F7x.svd"
//
//  name: STM32F7x
//  version: 1.1
//  description: STM32F7x
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
  static constexpr reg_addr_t base_addr = 0x40007000;

  /**
   * power control register
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000C000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000C000 >;

    using LPDS    = regbits< type,  0,  1 >;  /**< Low-power deep sleep                               */
    using PDDS    = regbits< type,  1,  1 >;  /**< Power down deepsleep                               */
    using CSBF    = regbits< type,  3,  1 >;  /**< Clear standby flag                                 */
    using PVDE    = regbits< type,  4,  1 >;  /**< Power voltage detector enable                      */
    using PLS     = regbits< type,  5,  3 >;  /**< PVD level selection                                */
    using DBP     = regbits< type,  8,  1 >;  /**< Disable backup domain write protection             */
    using FPDS    = regbits< type,  9,  1 >;  /**< Flash power down in Stop mode                      */
    using LPUDS   = regbits< type, 10,  1 >;  /**< Low-power regulator in deepsleep under-drive mode  */
    using MRUDS   = regbits< type, 11,  1 >;  /**< Main regulator in deepsleep under-drive mode       */
    using ADCDC1  = regbits< type, 13,  1 >;  /**< ADCDC1                                             */
    using VOS     = regbits< type, 14,  2 >;  /**< Regulator voltage scaling output selection         */
    using ODEN    = regbits< type, 16,  1 >;  /**< Over-drive enable                                  */
    using ODSWEN  = regbits< type, 17,  1 >;  /**< Over-drive switching enabled                       */
    using UDEN    = regbits< type, 18,  2 >;  /**< Under-drive enable in stop mode                    */
  };

  /**
   * power control/status register
   */
  struct CSR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using WUIF     = regbits< type,  0,  1 >;  /**< Wakeup internal flag                                  */
    using SBF      = regbits< type,  1,  1 >;  /**< Standby flag                                          */
    using PVDO     = regbits< type,  2,  1 >;  /**< PVD output                                            */
    using BRR      = regbits< type,  3,  1 >;  /**< Backup regulator ready                                */
    using BRE      = regbits< type,  9,  1 >;  /**< Backup regulator enable                               */
    using VOSRDY   = regbits< type, 14,  1 >;  /**< Regulator voltage scaling output selection ready bit  */
    using ODRDY    = regbits< type, 16,  1 >;  /**< Over-drive mode ready                                 */
    using ODSWRDY  = regbits< type, 17,  1 >;  /**< Over-drive mode switching ready                       */
    using UDRDY    = regbits< type, 18,  2 >;  /**< Under-drive ready flag                                */
  };

  /**
   * power control register
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using CWUPF1  = regbits< type,  0,  1 >;  /**< Clear Wakeup Pin flag for PA0     */
    using CWUPF2  = regbits< type,  1,  1 >;  /**< Clear Wakeup Pin flag for PA2     */
    using CWUPF3  = regbits< type,  2,  1 >;  /**< Clear Wakeup Pin flag for PC1     */
    using CWUPF4  = regbits< type,  3,  1 >;  /**< Clear Wakeup Pin flag for PC13    */
    using CWUPF5  = regbits< type,  4,  1 >;  /**< Clear Wakeup Pin flag for PI8     */
    using CWUPF6  = regbits< type,  5,  1 >;  /**< Clear Wakeup Pin flag for PI11    */
    using WUPP1   = regbits< type,  8,  1 >;  /**< Wakeup pin polarity bit for PA0   */
    using WUPP2   = regbits< type,  9,  1 >;  /**< Wakeup pin polarity bit for PA2   */
    using WUPP3   = regbits< type, 10,  1 >;  /**< Wakeup pin polarity bit for PC1   */
    using WUPP4   = regbits< type, 11,  1 >;  /**< Wakeup pin polarity bit for PC13  */
    using WUPP5   = regbits< type, 12,  1 >;  /**< Wakeup pin polarity bit for PI8   */
    using WUPP6   = regbits< type, 13,  1 >;  /**< Wakeup pin polarity bit for PI11  */
  };

  /**
   * power control/status register
   */
  struct CSR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using WUPF1  = regbits< type,  0,  1 >;  /**< Wakeup Pin flag for PA0     */
    using WUPF2  = regbits< type,  1,  1 >;  /**< Wakeup Pin flag for PA2     */
    using WUPF3  = regbits< type,  2,  1 >;  /**< Wakeup Pin flag for PC1     */
    using WUPF4  = regbits< type,  3,  1 >;  /**< Wakeup Pin flag for PC13    */
    using WUPF5  = regbits< type,  4,  1 >;  /**< Wakeup Pin flag for PI8     */
    using WUPF6  = regbits< type,  5,  1 >;  /**< Wakeup Pin flag for PI11    */
    using EWUP1  = regbits< type,  8,  1 >;  /**< Enable Wakeup pin for PA0   */
    using EWUP2  = regbits< type,  9,  1 >;  /**< Enable Wakeup pin for PA2   */
    using EWUP3  = regbits< type, 10,  1 >;  /**< Enable Wakeup pin for PC1   */
    using EWUP4  = regbits< type, 11,  1 >;  /**< Enable Wakeup pin for PC13  */
    using EWUP5  = regbits< type, 12,  1 >;  /**< Enable Wakeup pin for PI8   */
    using EWUP6  = regbits< type, 13,  1 >;  /**< Enable Wakeup pin for PI11  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PWR_HPP_INCLUDED
