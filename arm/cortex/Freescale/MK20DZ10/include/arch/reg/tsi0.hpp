/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MK20DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK20DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK20DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TSI0_HPP_INCLUDED
#define ARCH_REG_TSI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Touch Sensing Input
 */
struct TSI0
{
  static constexpr reg_addr_t base_addr = 0x40045000;

  /**
   * General Control and Status Register
   */
  struct GENCS
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using STPE      = regbits< type,  0,  1 >;  /**< no description available                      */
    using STM       = regbits< type,  1,  1 >;  /**< Scan trigger mode                             */
    using ESOR      = regbits< type,  4,  1 >;  /**< End-of-scan or out-of-range interrupt select  */
    using ERIE      = regbits< type,  5,  1 >;  /**< TSI error interrupt Enable                    */
    using TSIIE     = regbits< type,  6,  1 >;  /**< TSI interrupt enable                          */
    using TSIEN     = regbits< type,  7,  1 >;  /**< TSI module enable                             */
    using SWTS      = regbits< type,  8,  1 >;  /**< Software trigger start                        */
    using SCNIP     = regbits< type,  9,  1 >;  /**< Scan-in-progress status                       */
    using OVRF      = regbits< type, 12,  1 >;  /**< Overrun error flag                            */
    using EXTERF    = regbits< type, 13,  1 >;  /**< External electrode error occurred             */
    using OUTRGF    = regbits< type, 14,  1 >;  /**< Out of Range Flag                             */
    using EOSF      = regbits< type, 15,  1 >;  /**< End of scan flag                              */
    using PS        = regbits< type, 16,  3 >;  /**< Electrode oscillator prescaler                */
    using NSCN      = regbits< type, 19,  5 >;  /**< Number of Consecutive Scans per Electrode     */
    using LPSCNITV  = regbits< type, 24,  4 >;  /**< TSI Low Power Mode Scan Interval              */
    using LPCLKS    = regbits< type, 28,  1 >;  /**< Low Power Mode Clock Source Selection         */
  };

  /**
   * SCAN control register
   */
  struct SCANC
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using AMPSC     = regbits< type,  0,  3 >;  /**< Active mode prescaler                               */
    using AMCLKS    = regbits< type,  3,  2 >;  /**< Active mode clock source                            */
    using AMCLKDIV  = regbits< type,  5,  1 >;  /**< Active mode clock divider                           */
    using SMOD      = regbits< type,  8,  8 >;  /**< Scan modulo                                         */
    using DELVOL    = regbits< type, 16,  3 >;  /**< Delta voltage select applied to analog oscillators  */
    using EXTCHRG   = regbits< type, 19,  5 >;  /**< External oscillator charge current select           */
    using CAPTRM    = regbits< type, 24,  3 >;  /**< Internal capacitance trim value                     */
    using REFCHRG   = regbits< type, 27,  5 >;  /**< Reference oscillator charge current select          */
  };

  /**
   * Pin enable register
   */
  struct PEN
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using PEN0   = regbits< type,  0,  1 >;  /**< TSI pin 0 enable    */
    using PEN1   = regbits< type,  1,  1 >;  /**< TSI pin 1 enable    */
    using PEN2   = regbits< type,  2,  1 >;  /**< TSI pin 2 enable    */
    using PEN3   = regbits< type,  3,  1 >;  /**< TSI pin 3 enable    */
    using PEN4   = regbits< type,  4,  1 >;  /**< TSI pin 4 enable    */
    using PEN5   = regbits< type,  5,  1 >;  /**< TSI pin 5 enable    */
    using PEN6   = regbits< type,  6,  1 >;  /**< TSI pin 6 enable    */
    using PEN7   = regbits< type,  7,  1 >;  /**< TSI pin 7 enable    */
    using PEN8   = regbits< type,  8,  1 >;  /**< TSI pin 8 enable    */
    using PEN9   = regbits< type,  9,  1 >;  /**< TSI pin 9 enable    */
    using PEN10  = regbits< type, 10,  1 >;  /**< TSI pin 10 enable   */
    using PEN11  = regbits< type, 11,  1 >;  /**< TSI pin 11 enable   */
    using PEN12  = regbits< type, 12,  1 >;  /**< TSI pin 12 enable   */
    using PEN13  = regbits< type, 13,  1 >;  /**< TSI pin 13 enable   */
    using PEN14  = regbits< type, 14,  1 >;  /**< TSI pin 14 enable   */
    using PEN15  = regbits< type, 15,  1 >;  /**< TSI pin 15 enable   */
    using LPSP   = regbits< type, 16,  4 >;  /**< Low-power scan pin  */
  };

  /**
   * Status Register
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using ORNGF0   = regbits< type,  0,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 0   */
    using ORNGF1   = regbits< type,  1,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 1   */
    using ORNGF2   = regbits< type,  2,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 2   */
    using ORNGF3   = regbits< type,  3,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 3   */
    using ORNGF4   = regbits< type,  4,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 4   */
    using ORNGF5   = regbits< type,  5,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 5   */
    using ORNGF6   = regbits< type,  6,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 6   */
    using ORNGF7   = regbits< type,  7,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 7   */
    using ORNGF8   = regbits< type,  8,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 8   */
    using ORNGF9   = regbits< type,  9,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 9   */
    using ORNGF10  = regbits< type, 10,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 10  */
    using ORNGF11  = regbits< type, 11,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 11  */
    using ORNGF12  = regbits< type, 12,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 12  */
    using ORNGF13  = regbits< type, 13,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 13  */
    using ORNGF14  = regbits< type, 14,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 14  */
    using ORNGF15  = regbits< type, 15,  1 >;  /**< Touch Sensing Electrode Out-of-Range Flag 15  */
    using ERROF0   = regbits< type, 16,  1 >;  /**< TouchSensing Error Flag 0                     */
    using ERROF1   = regbits< type, 17,  1 >;  /**< TouchSensing Error Flag 1                     */
    using ERROF2   = regbits< type, 18,  1 >;  /**< TouchSensing Error Flag 2                     */
    using ERROF3   = regbits< type, 19,  1 >;  /**< TouchSensing Error Flag 3                     */
    using ERROF4   = regbits< type, 20,  1 >;  /**< TouchSensing Error Flag 4                     */
    using ERROF5   = regbits< type, 21,  1 >;  /**< TouchSensing Error Flag 5                     */
    using ERROF6   = regbits< type, 22,  1 >;  /**< TouchSensing Error Flag 6                     */
    using ERROF7   = regbits< type, 23,  1 >;  /**< TouchSensing Error Flag 7                     */
    using ERROF8   = regbits< type, 24,  1 >;  /**< TouchSensing Error Flag 8                     */
    using ERROF9   = regbits< type, 25,  1 >;  /**< TouchSensing Error Flag 9                     */
    using ERROF10  = regbits< type, 26,  1 >;  /**< TouchSensing Error Flag 10                    */
    using ERROF11  = regbits< type, 27,  1 >;  /**< TouchSensing Error Flag 11                    */
    using ERROF12  = regbits< type, 28,  1 >;  /**< TouchSensing Error Flag 12                    */
    using ERROF13  = regbits< type, 29,  1 >;  /**< TouchSensing Error Flag 13                    */
    using ERROF14  = regbits< type, 30,  1 >;  /**< TouchSensing Error Flag 14                    */
    using ERROF15  = regbits< type, 31,  1 >;  /**< TouchSensing Error Flag 15                    */
  };

  /**
   * Counter Register
   */
  struct CNTR%s
  : public reg< uint32_t, base_addr + 0x100, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0 >;

    using CTN1  = regbits< type,  0, 16 >;  /**< Touch sensing channel n-1 counter value.  */
    using CTN   = regbits< type, 16, 16 >;  /**< Touch sensing channel n counter value.    */
  };

  /**
   * Channel n threshold register
   */
  struct THRESHLD%s
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using HTHH  = regbits< type,  0, 16 >;  /**< High threshold value  */
    using LTHH  = regbits< type, 16, 16 >;  /**< Low threshold value   */
  };
};
} // namespace mptl

#endif // ARCH_REG_TSI0_HPP_INCLUDED
