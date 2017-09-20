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
//  Import from CMSIS-SVD: "Atmel/ATSAM4S16C.svd"
//
//  vendor: Atmel
//  name: ATSAM4S16C
//  series: SAM4S
//  version: 20130131
//  description: Atmel ATSAM4S16C device: Cortex-M4 Microcontroller with 1MB Flash, 128KB SRAM, USB, 100 Pins (refer to http://www.atmel.com/devices/SAM4S16C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SUPC_HPP_INCLUDED
#define ARCH_REG_SUPC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Supply Controller
 */
struct SUPC
{
  static constexpr reg_addr_t base_addr = 0x400e1410;

  /**
   * Supply Controller Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using VROFF    = regbits< type,  2,  1 >;  /**< Voltage Regulator Off      */
    using XTALSEL  = regbits< type,  3,  1 >;  /**< Crystal Oscillator Select  */
    using KEY      = regbits< type, 24,  8 >;  /**< Password                   */
  };

  /**
   * Supply Controller Supply Monitor Mode Register
   */
  struct SMMR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using SMTH     = regbits< type,  0,  4 >;  /**< Supply Monitor Threshold         */
    using SMSMPL   = regbits< type,  8,  3 >;  /**< Supply Monitor Sampling Period   */
    using SMRSTEN  = regbits< type, 12,  1 >;  /**< Supply Monitor Reset Enable      */
    using SMIEN    = regbits< type, 13,  1 >;  /**< Supply Monitor Interrupt Enable  */
  };

  /**
   * Supply Controller Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00005A00 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00005A00 >;

    using BODRSTEN   = regbits< type, 12,  1 >;  /**< Brownout Detector Reset Enable  */
    using BODDIS     = regbits< type, 13,  1 >;  /**< Brownout Detector Disable       */
    using ONREG      = regbits< type, 14,  1 >;  /**< Voltage Regulator enable        */
    using OSCBYPASS  = regbits< type, 20,  1 >;  /**< Oscillator Bypass               */
    using KEY        = regbits< type, 24,  8 >;  /**< Password Key                    */
  };

  /**
   * Supply Controller Wake Up Mode Register
   */
  struct WUMR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using SMEN      = regbits< type,  1,  1 >;  /**< Supply Monitor Wake Up Enable     */
    using RTTEN     = regbits< type,  2,  1 >;  /**< Real Time Timer Wake Up Enable    */
    using RTCEN     = regbits< type,  3,  1 >;  /**< Real Time Clock Wake Up Enable    */
    using LPDBCEN0  = regbits< type,  5,  1 >;  /**< Low power Debouncer ENable WKUP0  */
    using LPDBCEN1  = regbits< type,  6,  1 >;  /**< Low power Debouncer ENable WKUP1  */
    using LPDBCCLR  = regbits< type,  7,  1 >;  /**< Low power Debouncer Clear         */
    using WKUPDBC   = regbits< type, 12,  3 >;  /**< Wake Up Inputs Debouncer Period   */
    using LPDBC     = regbits< type, 16,  3 >;  /**< Low Power DeBounCer Period        */
  };

  /**
   * Supply Controller Wake Up Inputs Register
   */
  struct WUIR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using WKUPEN0   = regbits< type,  0,  1 >;  /**< Wake Up Input Enable 0   */
    using WKUPEN1   = regbits< type,  1,  1 >;  /**< Wake Up Input Enable 1   */
    using WKUPEN2   = regbits< type,  2,  1 >;  /**< Wake Up Input Enable 2   */
    using WKUPEN3   = regbits< type,  3,  1 >;  /**< Wake Up Input Enable 3   */
    using WKUPEN4   = regbits< type,  4,  1 >;  /**< Wake Up Input Enable 4   */
    using WKUPEN5   = regbits< type,  5,  1 >;  /**< Wake Up Input Enable 5   */
    using WKUPEN6   = regbits< type,  6,  1 >;  /**< Wake Up Input Enable 6   */
    using WKUPEN7   = regbits< type,  7,  1 >;  /**< Wake Up Input Enable 7   */
    using WKUPEN8   = regbits< type,  8,  1 >;  /**< Wake Up Input Enable 8   */
    using WKUPEN9   = regbits< type,  9,  1 >;  /**< Wake Up Input Enable 9   */
    using WKUPEN10  = regbits< type, 10,  1 >;  /**< Wake Up Input Enable 10  */
    using WKUPEN11  = regbits< type, 11,  1 >;  /**< Wake Up Input Enable 11  */
    using WKUPEN12  = regbits< type, 12,  1 >;  /**< Wake Up Input Enable 12  */
    using WKUPEN13  = regbits< type, 13,  1 >;  /**< Wake Up Input Enable 13  */
    using WKUPEN14  = regbits< type, 14,  1 >;  /**< Wake Up Input Enable 14  */
    using WKUPEN15  = regbits< type, 15,  1 >;  /**< Wake Up Input Enable 15  */
    using WKUPT0    = regbits< type, 16,  1 >;  /**< Wake Up Input Type 0     */
    using WKUPT1    = regbits< type, 17,  1 >;  /**< Wake Up Input Type 1     */
    using WKUPT2    = regbits< type, 18,  1 >;  /**< Wake Up Input Type 2     */
    using WKUPT3    = regbits< type, 19,  1 >;  /**< Wake Up Input Type 3     */
    using WKUPT4    = regbits< type, 20,  1 >;  /**< Wake Up Input Type 4     */
    using WKUPT5    = regbits< type, 21,  1 >;  /**< Wake Up Input Type 5     */
    using WKUPT6    = regbits< type, 22,  1 >;  /**< Wake Up Input Type 6     */
    using WKUPT7    = regbits< type, 23,  1 >;  /**< Wake Up Input Type 7     */
    using WKUPT8    = regbits< type, 24,  1 >;  /**< Wake Up Input Type 8     */
    using WKUPT9    = regbits< type, 25,  1 >;  /**< Wake Up Input Type 9     */
    using WKUPT10   = regbits< type, 26,  1 >;  /**< Wake Up Input Type 10    */
    using WKUPT11   = regbits< type, 27,  1 >;  /**< Wake Up Input Type 11    */
    using WKUPT12   = regbits< type, 28,  1 >;  /**< Wake Up Input Type 12    */
    using WKUPT13   = regbits< type, 29,  1 >;  /**< Wake Up Input Type 13    */
    using WKUPT14   = regbits< type, 30,  1 >;  /**< Wake Up Input Type 14    */
    using WKUPT15   = regbits< type, 31,  1 >;  /**< Wake Up Input Type 15    */
  };

  /**
   * Supply Controller Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >;

    using WKUPS     = regbits< type,  1,  1 >;  /**< WKUP Wake Up Status                          */
    using SMWS      = regbits< type,  2,  1 >;  /**< Supply Monitor Detection Wake Up Status      */
    using BODRSTS   = regbits< type,  3,  1 >;  /**< Brownout Detector Reset Status               */
    using SMRSTS    = regbits< type,  4,  1 >;  /**< Supply Monitor Reset Status                  */
    using SMS       = regbits< type,  5,  1 >;  /**< Supply Monitor Status                        */
    using SMOS      = regbits< type,  6,  1 >;  /**< Supply Monitor Output Status                 */
    using OSCSEL    = regbits< type,  7,  1 >;  /**< 32-kHz Oscillator Selection Status           */
    using LPDBCS0   = regbits< type, 13,  1 >;  /**< Low Power Debouncer Wake Up Status on WKUP0  */
    using LPDBCS1   = regbits< type, 14,  1 >;  /**< Low Power Debouncer Wake Up Status on WKUP1  */
    using WKUPIS0   = regbits< type, 16,  1 >;  /**< WKUP Input Status 0                          */
    using WKUPIS1   = regbits< type, 17,  1 >;  /**< WKUP Input Status 1                          */
    using WKUPIS2   = regbits< type, 18,  1 >;  /**< WKUP Input Status 2                          */
    using WKUPIS3   = regbits< type, 19,  1 >;  /**< WKUP Input Status 3                          */
    using WKUPIS4   = regbits< type, 20,  1 >;  /**< WKUP Input Status 4                          */
    using WKUPIS5   = regbits< type, 21,  1 >;  /**< WKUP Input Status 5                          */
    using WKUPIS6   = regbits< type, 22,  1 >;  /**< WKUP Input Status 6                          */
    using WKUPIS7   = regbits< type, 23,  1 >;  /**< WKUP Input Status 7                          */
    using WKUPIS8   = regbits< type, 24,  1 >;  /**< WKUP Input Status 8                          */
    using WKUPIS9   = regbits< type, 25,  1 >;  /**< WKUP Input Status 9                          */
    using WKUPIS10  = regbits< type, 26,  1 >;  /**< WKUP Input Status 10                         */
    using WKUPIS11  = regbits< type, 27,  1 >;  /**< WKUP Input Status 11                         */
    using WKUPIS12  = regbits< type, 28,  1 >;  /**< WKUP Input Status 12                         */
    using WKUPIS13  = regbits< type, 29,  1 >;  /**< WKUP Input Status 13                         */
    using WKUPIS14  = regbits< type, 30,  1 >;  /**< WKUP Input Status 14                         */
    using WKUPIS15  = regbits< type, 31,  1 >;  /**< WKUP Input Status 15                         */
  };
};
} // namespace mptl

#endif // ARCH_REG_SUPC_HPP_INCLUDED
