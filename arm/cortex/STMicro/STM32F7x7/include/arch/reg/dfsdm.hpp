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
//  Import from CMSIS-SVD: "STMicro/STM32F7x7.svd"
//
//  name: STM32F7x7
//  version: 1.0
//  description: STM32F7x7
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DFSDM_HPP_INCLUDED
#define ARCH_REG_DFSDM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Digital filter for sigma delta modulators
 */
struct DFSDM
{
  static constexpr reg_addr_t base_addr = 0x40017400;

  /**
   * DFSDM channel configuration 0 register 1
   */
  struct DFSDM_CHCFG0R1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using SITP      = regbits< type,  0,  2 >;  /**< Serial interface type for channel 0            */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPI clock select for channel 0                 */
    using SCDEN     = regbits< type,  5,  1 >;  /**< Short-circuit detector enable on channel 0     */
    using CKABEN    = regbits< type,  6,  1 >;  /**< Clock absence detector enable on channel 0     */
    using CHEN      = regbits< type,  7,  1 >;  /**< Channel 0 enable                               */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< Channel inputs selection                       */
    using DATMPX    = regbits< type, 12,  2 >;  /**< Input data multiplexer for channel 0           */
    using DATPACK   = regbits< type, 14,  2 >;  /**< Data packing mode in DFSDM_CHDATINyR register  */
    using CKOUTDIV  = regbits< type, 16,  8 >;  /**< Output serial clock divider                    */
    using CKOUTSRC  = regbits< type, 30,  1 >;  /**< Output serial clock source selection           */
    using DFSDMEN   = regbits< type, 31,  1 >;  /**< Global enable for DFSDM interface              */
  };

  /**
   * DFSDM channel configuration 1 register 1
   */
  struct DFSDM_CHCFG1R1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using SITP      = regbits< type,  0,  2 >;  /**< Serial interface type for channel 1            */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPI clock select for channel 1                 */
    using SCDEN     = regbits< type,  5,  1 >;  /**< Short-circuit detector enable on channel 1     */
    using CKABEN    = regbits< type,  6,  1 >;  /**< Clock absence detector enable on channel 1     */
    using CHEN      = regbits< type,  7,  1 >;  /**< Channel 1 enable                               */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< Channel inputs selection                       */
    using DATMPX    = regbits< type, 12,  2 >;  /**< Input data multiplexer for channel 1           */
    using DATPACK   = regbits< type, 14,  2 >;  /**< Data packing mode in DFSDM_CHDATINyR register  */
    using CKOUTDIV  = regbits< type, 16,  8 >;  /**< Output serial clock divider                    */
    using CKOUTSRC  = regbits< type, 30,  1 >;  /**< Output serial clock source selection           */
    using DFSDMEN   = regbits< type, 31,  1 >;  /**< Global enable for DFSDM interface              */
  };

  /**
   * DFSDM channel configuration 2 register 1
   */
  struct DFSDM_CHCFG2R1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using SITP      = regbits< type,  0,  2 >;  /**< Serial interface type for channel 2            */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPI clock select for channel 2                 */
    using SCDEN     = regbits< type,  5,  1 >;  /**< Short-circuit detector enable on channel 2     */
    using CKABEN    = regbits< type,  6,  1 >;  /**< Clock absence detector enable on channel 2     */
    using CHEN      = regbits< type,  7,  1 >;  /**< Channel 2 enable                               */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< Channel inputs selection                       */
    using DATMPX    = regbits< type, 12,  2 >;  /**< Input data multiplexer for channel 2           */
    using DATPACK   = regbits< type, 14,  2 >;  /**< Data packing mode in DFSDM_CHDATINyR register  */
    using CKOUTDIV  = regbits< type, 16,  8 >;  /**< Output serial clock divider                    */
    using CKOUTSRC  = regbits< type, 30,  1 >;  /**< Output serial clock source selection           */
    using DFSDMEN   = regbits< type, 31,  1 >;  /**< Global enable for DFSDM interface              */
  };

  /**
   * DFSDM channel configuration 3 register 1
   */
  struct DFSDM_CHCFG3R1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using SITP      = regbits< type,  0,  2 >;  /**< Serial interface type for channel 3            */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPI clock select for channel 3                 */
    using SCDEN     = regbits< type,  5,  1 >;  /**< Short-circuit detector enable on channel 3     */
    using CKABEN    = regbits< type,  6,  1 >;  /**< Clock absence detector enable on channel 3     */
    using CHEN      = regbits< type,  7,  1 >;  /**< Channel 3 enable                               */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< Channel inputs selection                       */
    using DATMPX    = regbits< type, 12,  2 >;  /**< Input data multiplexer for channel 3           */
    using DATPACK   = regbits< type, 14,  2 >;  /**< Data packing mode in DFSDM_CHDATINyR register  */
    using CKOUTDIV  = regbits< type, 16,  8 >;  /**< Output serial clock divider                    */
    using CKOUTSRC  = regbits< type, 30,  1 >;  /**< Output serial clock source selection           */
    using DFSDMEN   = regbits< type, 31,  1 >;  /**< Global enable for DFSDM interface              */
  };

  /**
   * DFSDM channel configuration 4 register 1
   */
  struct DFSDM_CHCFG4R1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using SITP      = regbits< type,  0,  2 >;  /**< Serial interface type for channel 4            */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPI clock select for channel 4                 */
    using SCDEN     = regbits< type,  5,  1 >;  /**< Short-circuit detector enable on channel 4     */
    using CKABEN    = regbits< type,  6,  1 >;  /**< Clock absence detector enable on channel 4     */
    using CHEN      = regbits< type,  7,  1 >;  /**< Channel 4 enable                               */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< Channel inputs selection                       */
    using DATMPX    = regbits< type, 12,  2 >;  /**< Input data multiplexer for channel 4           */
    using DATPACK   = regbits< type, 14,  2 >;  /**< Data packing mode in DFSDM_CHDATINyR register  */
    using CKOUTDIV  = regbits< type, 16,  8 >;  /**< Output serial clock divider                    */
    using CKOUTSRC  = regbits< type, 30,  1 >;  /**< Output serial clock source selection           */
    using DFSDMEN   = regbits< type, 31,  1 >;  /**< Global enable for DFSDM interface              */
  };

  /**
   * DFSDM channel configuration 5 register 1
   */
  struct DFSDM_CHCFG5R1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using SITP      = regbits< type,  0,  2 >;  /**< Serial interface type for channel 5            */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPI clock select for channel 5                 */
    using SCDEN     = regbits< type,  5,  1 >;  /**< Short-circuit detector enable on channel 5     */
    using CKABEN    = regbits< type,  6,  1 >;  /**< Clock absence detector enable on channel 5     */
    using CHEN      = regbits< type,  7,  1 >;  /**< Channel 5 enable                               */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< Channel inputs selection                       */
    using DATMPX    = regbits< type, 12,  2 >;  /**< Input data multiplexer for channel 5           */
    using DATPACK   = regbits< type, 14,  2 >;  /**< Data packing mode in DFSDM_CHDATINyR register  */
    using CKOUTDIV  = regbits< type, 16,  8 >;  /**< Output serial clock divider                    */
    using CKOUTSRC  = regbits< type, 30,  1 >;  /**< Output serial clock source selection           */
    using DFSDMEN   = regbits< type, 31,  1 >;  /**< Global enable for DFSDM interface              */
  };

  /**
   * DFSDM channel configuration 6 register 1
   */
  struct DFSDM_CHCFG6R1
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using SITP      = regbits< type,  0,  2 >;  /**< Serial interface type for channel 6            */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPI clock select for channel 6                 */
    using SCDEN     = regbits< type,  5,  1 >;  /**< Short-circuit detector enable on channel 6     */
    using CKABEN    = regbits< type,  6,  1 >;  /**< Clock absence detector enable on channel 6     */
    using CHEN      = regbits< type,  7,  1 >;  /**< Channel 6 enable                               */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< Channel inputs selection                       */
    using DATMPX    = regbits< type, 12,  2 >;  /**< Input data multiplexer for channel 6           */
    using DATPACK   = regbits< type, 14,  2 >;  /**< Data packing mode in DFSDM_CHDATINyR register  */
    using CKOUTDIV  = regbits< type, 16,  8 >;  /**< Output serial clock divider                    */
    using CKOUTSRC  = regbits< type, 30,  1 >;  /**< Output serial clock source selection           */
    using DFSDMEN   = regbits< type, 31,  1 >;  /**< Global enable for DFSDM interface              */
  };

  /**
   * DFSDM channel configuration 7 register 1
   */
  struct DFSDM_CHCFG7R1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using SITP      = regbits< type,  0,  2 >;  /**< Serial interface type for channel 7            */
    using SPICKSEL  = regbits< type,  2,  2 >;  /**< SPI clock select for channel 7                 */
    using SCDEN     = regbits< type,  5,  1 >;  /**< Short-circuit detector enable on channel 7     */
    using CKABEN    = regbits< type,  6,  1 >;  /**< Clock absence detector enable on channel 7     */
    using CHEN      = regbits< type,  7,  1 >;  /**< Channel 7 enable                               */
    using CHINSEL   = regbits< type,  8,  1 >;  /**< Channel inputs selection                       */
    using DATMPX    = regbits< type, 12,  2 >;  /**< Input data multiplexer for channel 7           */
    using DATPACK   = regbits< type, 14,  2 >;  /**< Data packing mode in DFSDM_CHDATINyR register  */
    using CKOUTDIV  = regbits< type, 16,  8 >;  /**< Output serial clock divider                    */
    using CKOUTSRC  = regbits< type, 30,  1 >;  /**< Output serial clock source selection           */
    using DFSDMEN   = regbits< type, 31,  1 >;  /**< Global enable for DFSDM interface              */
  };

  /**
   * DFSDM channel configuration 0 register 2
   */
  struct DFSDM_CHCFG0R2
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using DTRBS   = regbits< type,  3,  5 >;  /**< Data right bit-shift for channel 0       */
    using OFFSET  = regbits< type,  8, 24 >;  /**< 24-bit calibration offset for channel 0  */
  };

  /**
   * DFSDM channel configuration 1 register 2
   */
  struct DFSDM_CHCFG1R2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using DTRBS   = regbits< type,  3,  5 >;  /**< Data right bit-shift for channel 1       */
    using OFFSET  = regbits< type,  8, 24 >;  /**< 24-bit calibration offset for channel 1  */
  };

  /**
   * DFSDM channel configuration 2 register 2
   */
  struct DFSDM_CHCFG2R2
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using DTRBS   = regbits< type,  3,  5 >;  /**< Data right bit-shift for channel 2       */
    using OFFSET  = regbits< type,  8, 24 >;  /**< 24-bit calibration offset for channel 2  */
  };

  /**
   * DFSDM channel configuration 3 register 2
   */
  struct DFSDM_CHCFG3R2
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using DTRBS   = regbits< type,  3,  5 >;  /**< Data right bit-shift for channel 3       */
    using OFFSET  = regbits< type,  8, 24 >;  /**< 24-bit calibration offset for channel 3  */
  };

  /**
   * DFSDM channel configuration 4 register 2
   */
  struct DFSDM_CHCFG4R2
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using DTRBS   = regbits< type,  3,  5 >;  /**< Data right bit-shift for channel 4       */
    using OFFSET  = regbits< type,  8, 24 >;  /**< 24-bit calibration offset for channel 4  */
  };

  /**
   * DFSDM channel configuration 5 register 2
   */
  struct DFSDM_CHCFG5R2
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using DTRBS   = regbits< type,  3,  5 >;  /**< Data right bit-shift for channel 5       */
    using OFFSET  = regbits< type,  8, 24 >;  /**< 24-bit calibration offset for channel 5  */
  };

  /**
   * DFSDM channel configuration 6 register 2
   */
  struct DFSDM_CHCFG6R2
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using DTRBS   = regbits< type,  3,  5 >;  /**< Data right bit-shift for channel 6       */
    using OFFSET  = regbits< type,  8, 24 >;  /**< 24-bit calibration offset for channel 6  */
  };

  /**
   * DFSDM channel configuration 7 register 2
   */
  struct DFSDM_CHCFG7R2
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using DTRBS   = regbits< type,  3,  5 >;  /**< Data right bit-shift for channel 7       */
    using OFFSET  = regbits< type,  8, 24 >;  /**< 24-bit calibration offset for channel 7  */
  };

  /**
   * DFSDM analog watchdog and short-circuit detector register
   */
  struct DFSDM_AWSCD0R
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using SCDT    = regbits< type,  0,  8 >;  /**< short-circuit detector threshold for channel 0                            */
    using BKSCD   = regbits< type, 12,  4 >;  /**< Break signal assignment for short-circuit detector on channel 0           */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< Analog watchdog filter oversampling ratio (decimation rate) on channel 0  */
    using AWFORD  = regbits< type, 22,  2 >;  /**< Analog watchdog Sinc filter order on channel 0                            */
  };

  /**
   * DFSDM analog watchdog and short-circuit detector register
   */
  struct DFSDM_AWSCD1R
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using SCDT    = regbits< type,  0,  8 >;  /**< short-circuit detector threshold for channel 1                            */
    using BKSCD   = regbits< type, 12,  4 >;  /**< Break signal assignment for short-circuit detector on channel 1           */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< Analog watchdog filter oversampling ratio (decimation rate) on channel 1  */
    using AWFORD  = regbits< type, 22,  2 >;  /**< Analog watchdog Sinc filter order on channel 1                            */
  };

  /**
   * DFSDM analog watchdog and short-circuit detector register
   */
  struct DFSDM_AWSCD2R
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using SCDT    = regbits< type,  0,  8 >;  /**< short-circuit detector threshold for channel 2                            */
    using BKSCD   = regbits< type, 12,  4 >;  /**< Break signal assignment for short-circuit detector on channel 2           */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< Analog watchdog filter oversampling ratio (decimation rate) on channel 2  */
    using AWFORD  = regbits< type, 22,  2 >;  /**< Analog watchdog Sinc filter order on channel 2                            */
  };

  /**
   * DFSDM analog watchdog and short-circuit detector register
   */
  struct DFSDM_AWSCD3R
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using SCDT    = regbits< type,  0,  8 >;  /**< short-circuit detector threshold for channel 3                            */
    using BKSCD   = regbits< type, 12,  4 >;  /**< Break signal assignment for short-circuit detector on channel 3           */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< Analog watchdog filter oversampling ratio (decimation rate) on channel 3  */
    using AWFORD  = regbits< type, 22,  2 >;  /**< Analog watchdog Sinc filter order on channel 3                            */
  };

  /**
   * DFSDM analog watchdog and short-circuit detector register
   */
  struct DFSDM_AWSCD4R
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using SCDT    = regbits< type,  0,  8 >;  /**< short-circuit detector threshold for channel 4                            */
    using BKSCD   = regbits< type, 12,  4 >;  /**< Break signal assignment for short-circuit detector on channel 4           */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< Analog watchdog filter oversampling ratio (decimation rate) on channel 4  */
    using AWFORD  = regbits< type, 22,  2 >;  /**< Analog watchdog Sinc filter order on channel 4                            */
  };

  /**
   * DFSDM analog watchdog and short-circuit detector register
   */
  struct DFSDM_AWSCD5R
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using SCDT    = regbits< type,  0,  8 >;  /**< short-circuit detector threshold for channel 5                            */
    using BKSCD   = regbits< type, 12,  4 >;  /**< Break signal assignment for short-circuit detector on channel 5           */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< Analog watchdog filter oversampling ratio (decimation rate) on channel 5  */
    using AWFORD  = regbits< type, 22,  2 >;  /**< Analog watchdog Sinc filter order on channel 5                            */
  };

  /**
   * DFSDM analog watchdog and short-circuit detector register
   */
  struct DFSDM_AWSCD6R
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using SCDT    = regbits< type,  0,  8 >;  /**< short-circuit detector threshold for channel 6                            */
    using BKSCD   = regbits< type, 12,  4 >;  /**< Break signal assignment for short-circuit detector on channel 6           */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< Analog watchdog filter oversampling ratio (decimation rate) on channel 6  */
    using AWFORD  = regbits< type, 22,  2 >;  /**< Analog watchdog Sinc filter order on channel 6                            */
  };

  /**
   * DFSDM analog watchdog and short-circuit detector register
   */
  struct DFSDM_AWSCD7R
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using SCDT    = regbits< type,  0,  8 >;  /**< short-circuit detector threshold for channel 7                            */
    using BKSCD   = regbits< type, 12,  4 >;  /**< Break signal assignment for short-circuit detector on channel 7           */
    using AWFOSR  = regbits< type, 16,  5 >;  /**< Analog watchdog filter oversampling ratio (decimation rate) on channel 7  */
    using AWFORD  = regbits< type, 22,  2 >;  /**< Analog watchdog Sinc filter order on channel 7                            */
  };

  /**
   * DFSDM channel watchdog filter data register
   */
  struct DFSDM_CHWDAT0R
  : public reg< uint32_t, base_addr + 0x60, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0x00000000 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< Input channel y watchdog data  */
  };

  /**
   * DFSDM channel watchdog filter data register
   */
  struct DFSDM_CHWDAT1R
  : public reg< uint32_t, base_addr + 0x64, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, ro, 0x00000000 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< Input channel y watchdog data  */
  };

  /**
   * DFSDM channel watchdog filter data register
   */
  struct DFSDM_CHWDAT2R
  : public reg< uint32_t, base_addr + 0x68, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, ro, 0x00000000 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< Input channel y watchdog data  */
  };

  /**
   * DFSDM channel watchdog filter data register
   */
  struct DFSDM_CHWDAT3R
  : public reg< uint32_t, base_addr + 0x6c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, ro, 0x00000000 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< Input channel y watchdog data  */
  };

  /**
   * DFSDM channel watchdog filter data register
   */
  struct DFSDM_CHWDAT4R
  : public reg< uint32_t, base_addr + 0x70, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0x00000000 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< Input channel y watchdog data  */
  };

  /**
   * DFSDM channel watchdog filter data register
   */
  struct DFSDM_CHWDAT5R
  : public reg< uint32_t, base_addr + 0x74, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0x00000000 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< Input channel y watchdog data  */
  };

  /**
   * DFSDM channel watchdog filter data register
   */
  struct DFSDM_CHWDAT6R
  : public reg< uint32_t, base_addr + 0x78, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, ro, 0x00000000 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< Input channel y watchdog data  */
  };

  /**
   * DFSDM channel watchdog filter data register
   */
  struct DFSDM_CHWDAT7R
  : public reg< uint32_t, base_addr + 0x7c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, ro, 0x00000000 >;

    using WDATA  = regbits< type,  0, 16 >;  /**< Input channel y watchdog data  */
  };

  /**
   * DFSDM channel data input register
   */
  struct DFSDM_CHDATIN0R
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using INDAT0  = regbits< type,  0, 16 >;  /**< Input data for channel 0  */
    using INDAT1  = regbits< type, 16, 16 >;  /**< Input data for channel 1  */
  };

  /**
   * DFSDM channel data input register
   */
  struct DFSDM_CHDATIN1R
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >;

    using INDAT0  = regbits< type,  0, 16 >;  /**< Input data for channel 1  */
    using INDAT1  = regbits< type, 16, 16 >;  /**< Input data for channel 2  */
  };

  /**
   * DFSDM channel data input register
   */
  struct DFSDM_CHDATIN2R
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using INDAT0  = regbits< type,  0, 16 >;  /**< Input data for channel 2  */
    using INDAT1  = regbits< type, 16, 16 >;  /**< Input data for channel 3  */
  };

  /**
   * DFSDM channel data input register
   */
  struct DFSDM_CHDATIN3R
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >;

    using INDAT0  = regbits< type,  0, 16 >;  /**< Input data for channel 3  */
    using INDAT1  = regbits< type, 16, 16 >;  /**< Input data for channel 4  */
  };

  /**
   * DFSDM channel data input register
   */
  struct DFSDM_CHDATIN4R
  : public reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >;

    using INDAT0  = regbits< type,  0, 16 >;  /**< Input data for channel 4  */
    using INDAT1  = regbits< type, 16, 16 >;  /**< Input data for channel 5  */
  };

  /**
   * DFSDM channel data input register
   */
  struct DFSDM_CHDATIN5R
  : public reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >;

    using INDAT0  = regbits< type,  0, 16 >;  /**< Input data for channel 5  */
    using INDAT1  = regbits< type, 16, 16 >;  /**< Input data for channel 6  */
  };

  /**
   * DFSDM channel data input register
   */
  struct DFSDM_CHDATIN6R
  : public reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >;

    using INDAT0  = regbits< type,  0, 16 >;  /**< Input data for channel 6  */
    using INDAT1  = regbits< type, 16, 16 >;  /**< Input data for channel 7  */
  };

  /**
   * DFSDM channel data input register
   */
  struct DFSDM_CHDATIN7R
  : public reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >;

    using INDAT0  = regbits< type,  0, 16 >;  /**< Input data for channel 7  */
    using INDAT1  = regbits< type, 16, 16 >;  /**< Input data for channel 8  */
  };

  /**
   * DFSDM control register 1
   */
  struct DFSDM0_CR1
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >;

    using DFEN      = regbits< type,  0,  1 >;  /**< DFSDM enable                                                                  */
    using JSWSTART  = regbits< type,  1,  1 >;  /**< Start a conversion of the injected group of channels                          */
    using JSYNC     = regbits< type,  3,  1 >;  /**< Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger  */
    using JSCAN     = regbits< type,  4,  1 >;  /**< Scanning conversion mode for injected conversions                             */
    using JDMAEN    = regbits< type,  5,  1 >;  /**< DMA channel enabled to read data for the injected channel group               */
    using JEXTSEL   = regbits< type,  8,  5 >;  /**< Trigger signal selection for launching injected conversions                   */
    using JEXTEN    = regbits< type, 13,  2 >;  /**< Trigger enable and trigger edge selection for injected conversions            */
    using RSWSTART  = regbits< type, 17,  1 >;  /**< Software start of a conversion on the regular channel                         */
    using RCONT     = regbits< type, 18,  1 >;  /**< Continuous mode selection for regular conversions                             */
    using RSYNC     = regbits< type, 19,  1 >;  /**< Launch regular conversion synchronously with DFSDM0                           */
    using RDMAEN    = regbits< type, 21,  1 >;  /**< DMA channel enabled to read data for the regular conversion                   */
    using RCH       = regbits< type, 24,  3 >;  /**< Regular channel selection                                                     */
    using FAST      = regbits< type, 29,  1 >;  /**< Fast conversion mode selection for regular conversions                        */
    using AWFSEL    = regbits< type, 30,  1 >;  /**< Analog watchdog fast mode select                                              */
  };

  /**
   * DFSDM control register 1
   */
  struct DFSDM1_CR1
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >;

    using DFEN      = regbits< type,  0,  1 >;  /**< DFSDM enable                                                                  */
    using JSWSTART  = regbits< type,  1,  1 >;  /**< Start a conversion of the injected group of channels                          */
    using JSYNC     = regbits< type,  3,  1 >;  /**< Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger  */
    using JSCAN     = regbits< type,  4,  1 >;  /**< Scanning conversion mode for injected conversions                             */
    using JDMAEN    = regbits< type,  5,  1 >;  /**< DMA channel enabled to read data for the injected channel group               */
    using JEXTSEL   = regbits< type,  8,  5 >;  /**< Trigger signal selection for launching injected conversions                   */
    using JEXTEN    = regbits< type, 13,  2 >;  /**< Trigger enable and trigger edge selection for injected conversions            */
    using RSWSTART  = regbits< type, 17,  1 >;  /**< Software start of a conversion on the regular channel                         */
    using RCONT     = regbits< type, 18,  1 >;  /**< Continuous mode selection for regular conversions                             */
    using RSYNC     = regbits< type, 19,  1 >;  /**< Launch regular conversion synchronously with DFSDM0                           */
    using RDMAEN    = regbits< type, 21,  1 >;  /**< DMA channel enabled to read data for the regular conversion                   */
    using RCH       = regbits< type, 24,  3 >;  /**< Regular channel selection                                                     */
    using FAST      = regbits< type, 29,  1 >;  /**< Fast conversion mode selection for regular conversions                        */
    using AWFSEL    = regbits< type, 30,  1 >;  /**< Analog watchdog fast mode select                                              */
  };

  /**
   * DFSDM control register 1
   */
  struct DFSDM2_CR1
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >;

    using DFEN      = regbits< type,  0,  1 >;  /**< DFSDM enable                                                                  */
    using JSWSTART  = regbits< type,  1,  1 >;  /**< Start a conversion of the injected group of channels                          */
    using JSYNC     = regbits< type,  3,  1 >;  /**< Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger  */
    using JSCAN     = regbits< type,  4,  1 >;  /**< Scanning conversion mode for injected conversions                             */
    using JDMAEN    = regbits< type,  5,  1 >;  /**< DMA channel enabled to read data for the injected channel group               */
    using JEXTSEL   = regbits< type,  8,  5 >;  /**< Trigger signal selection for launching injected conversions                   */
    using JEXTEN    = regbits< type, 13,  2 >;  /**< Trigger enable and trigger edge selection for injected conversions            */
    using RSWSTART  = regbits< type, 17,  1 >;  /**< Software start of a conversion on the regular channel                         */
    using RCONT     = regbits< type, 18,  1 >;  /**< Continuous mode selection for regular conversions                             */
    using RSYNC     = regbits< type, 19,  1 >;  /**< Launch regular conversion synchronously with DFSDM0                           */
    using RDMAEN    = regbits< type, 21,  1 >;  /**< DMA channel enabled to read data for the regular conversion                   */
    using RCH       = regbits< type, 24,  3 >;  /**< Regular channel selection                                                     */
    using FAST      = regbits< type, 29,  1 >;  /**< Fast conversion mode selection for regular conversions                        */
    using AWFSEL    = regbits< type, 30,  1 >;  /**< Analog watchdog fast mode select                                              */
  };

  /**
   * DFSDM control register 1
   */
  struct DFSDM3_CR1
  : public reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >;

    using DFEN      = regbits< type,  0,  1 >;  /**< DFSDM enable                                                                  */
    using JSWSTART  = regbits< type,  1,  1 >;  /**< Start a conversion of the injected group of channels                          */
    using JSYNC     = regbits< type,  3,  1 >;  /**< Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger  */
    using JSCAN     = regbits< type,  4,  1 >;  /**< Scanning conversion mode for injected conversions                             */
    using JDMAEN    = regbits< type,  5,  1 >;  /**< DMA channel enabled to read data for the injected channel group               */
    using JEXTSEL   = regbits< type,  8,  5 >;  /**< Trigger signal selection for launching injected conversions                   */
    using JEXTEN    = regbits< type, 13,  2 >;  /**< Trigger enable and trigger edge selection for injected conversions            */
    using RSWSTART  = regbits< type, 17,  1 >;  /**< Software start of a conversion on the regular channel                         */
    using RCONT     = regbits< type, 18,  1 >;  /**< Continuous mode selection for regular conversions                             */
    using RSYNC     = regbits< type, 19,  1 >;  /**< Launch regular conversion synchronously with DFSDM0                           */
    using RDMAEN    = regbits< type, 21,  1 >;  /**< DMA channel enabled to read data for the regular conversion                   */
    using RCH       = regbits< type, 24,  3 >;  /**< Regular channel selection                                                     */
    using FAST      = regbits< type, 29,  1 >;  /**< Fast conversion mode selection for regular conversions                        */
    using AWFSEL    = regbits< type, 30,  1 >;  /**< Analog watchdog fast mode select                                              */
  };

  /**
   * DFSDM control register 2
   */
  struct DFSDM0_CR2
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >;

    using JEOCIE  = regbits< type,  0,  1 >;  /**< Injected end of conversion interrupt enable  */
    using REOCIE  = regbits< type,  1,  1 >;  /**< Regular end of conversion interrupt enable   */
    using JOVRIE  = regbits< type,  2,  1 >;  /**< Injected data overrun interrupt enable       */
    using ROVRIE  = regbits< type,  3,  1 >;  /**< Regular data overrun interrupt enable        */
    using AWDIE   = regbits< type,  4,  1 >;  /**< Analog watchdog interrupt enable             */
    using SCDIE   = regbits< type,  5,  1 >;  /**< Short-circuit detector interrupt enable      */
    using CKABIE  = regbits< type,  6,  1 >;  /**< Clock absence interrupt enable               */
    using EXCH    = regbits< type,  8,  8 >;  /**< Extremes detector channel selection          */
    using AWDCH   = regbits< type, 16,  8 >;  /**< Analog watchdog channel selection            */
  };

  /**
   * DFSDM control register 2
   */
  struct DFSDM1_CR2
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >;

    using JEOCIE  = regbits< type,  0,  1 >;  /**< Injected end of conversion interrupt enable  */
    using REOCIE  = regbits< type,  1,  1 >;  /**< Regular end of conversion interrupt enable   */
    using JOVRIE  = regbits< type,  2,  1 >;  /**< Injected data overrun interrupt enable       */
    using ROVRIE  = regbits< type,  3,  1 >;  /**< Regular data overrun interrupt enable        */
    using AWDIE   = regbits< type,  4,  1 >;  /**< Analog watchdog interrupt enable             */
    using SCDIE   = regbits< type,  5,  1 >;  /**< Short-circuit detector interrupt enable      */
    using CKABIE  = regbits< type,  6,  1 >;  /**< Clock absence interrupt enable               */
    using EXCH    = regbits< type,  8,  8 >;  /**< Extremes detector channel selection          */
    using AWDCH   = regbits< type, 16,  8 >;  /**< Analog watchdog channel selection            */
  };

  /**
   * DFSDM control register 2
   */
  struct DFSDM2_CR2
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >;

    using JEOCIE  = regbits< type,  0,  1 >;  /**< Injected end of conversion interrupt enable  */
    using REOCIE  = regbits< type,  1,  1 >;  /**< Regular end of conversion interrupt enable   */
    using JOVRIE  = regbits< type,  2,  1 >;  /**< Injected data overrun interrupt enable       */
    using ROVRIE  = regbits< type,  3,  1 >;  /**< Regular data overrun interrupt enable        */
    using AWDIE   = regbits< type,  4,  1 >;  /**< Analog watchdog interrupt enable             */
    using SCDIE   = regbits< type,  5,  1 >;  /**< Short-circuit detector interrupt enable      */
    using CKABIE  = regbits< type,  6,  1 >;  /**< Clock absence interrupt enable               */
    using EXCH    = regbits< type,  8,  8 >;  /**< Extremes detector channel selection          */
    using AWDCH   = regbits< type, 16,  8 >;  /**< Analog watchdog channel selection            */
  };

  /**
   * DFSDM control register 2
   */
  struct DFSDM3_CR2
  : public reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >;

    using JEOCIE  = regbits< type,  0,  1 >;  /**< Injected end of conversion interrupt enable  */
    using REOCIE  = regbits< type,  1,  1 >;  /**< Regular end of conversion interrupt enable   */
    using JOVRIE  = regbits< type,  2,  1 >;  /**< Injected data overrun interrupt enable       */
    using ROVRIE  = regbits< type,  3,  1 >;  /**< Regular data overrun interrupt enable        */
    using AWDIE   = regbits< type,  4,  1 >;  /**< Analog watchdog interrupt enable             */
    using SCDIE   = regbits< type,  5,  1 >;  /**< Short-circuit detector interrupt enable      */
    using CKABIE  = regbits< type,  6,  1 >;  /**< Clock absence interrupt enable               */
    using EXCH    = regbits< type,  8,  8 >;  /**< Extremes detector channel selection          */
    using AWDCH   = regbits< type, 16,  8 >;  /**< Analog watchdog channel selection            */
  };

  /**
   * DFSDM interrupt and status register
   */
  struct DFSDM0_ISR
  : public reg< uint32_t, base_addr + 0xc0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, ro, 0x00000000 >;

    using JEOCF  = regbits< type,  0,  1 >;  /**< End of injected conversion flag         */
    using REOCF  = regbits< type,  1,  1 >;  /**< End of regular conversion flag          */
    using JOVRF  = regbits< type,  2,  1 >;  /**< Injected conversion overrun flag        */
    using ROVRF  = regbits< type,  3,  1 >;  /**< Regular conversion overrun flag         */
    using AWDF   = regbits< type,  4,  1 >;  /**< Analog watchdog                         */
    using JCIP   = regbits< type, 13,  1 >;  /**< Injected conversion in progress status  */
    using RCIP   = regbits< type, 14,  1 >;  /**< Regular conversion in progress status   */
    using CKABF  = regbits< type, 16,  8 >;  /**< Clock absence flag                      */
    using SCDF   = regbits< type, 24,  8 >;  /**< short-circuit detector flag             */
  };

  /**
   * DFSDM interrupt and status register
   */
  struct DFSDM1_ISR
  : public reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, ro, 0x00000000 >;

    using JEOCF  = regbits< type,  0,  1 >;  /**< End of injected conversion flag         */
    using REOCF  = regbits< type,  1,  1 >;  /**< End of regular conversion flag          */
    using JOVRF  = regbits< type,  2,  1 >;  /**< Injected conversion overrun flag        */
    using ROVRF  = regbits< type,  3,  1 >;  /**< Regular conversion overrun flag         */
    using AWDF   = regbits< type,  4,  1 >;  /**< Analog watchdog                         */
    using JCIP   = regbits< type, 13,  1 >;  /**< Injected conversion in progress status  */
    using RCIP   = regbits< type, 14,  1 >;  /**< Regular conversion in progress status   */
    using CKABF  = regbits< type, 16,  8 >;  /**< Clock absence flag                      */
    using SCDF   = regbits< type, 24,  8 >;  /**< short-circuit detector flag             */
  };

  /**
   * DFSDM interrupt and status register
   */
  struct DFSDM2_ISR
  : public reg< uint32_t, base_addr + 0xc8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, ro, 0x00000000 >;

    using JEOCF  = regbits< type,  0,  1 >;  /**< End of injected conversion flag         */
    using REOCF  = regbits< type,  1,  1 >;  /**< End of regular conversion flag          */
    using JOVRF  = regbits< type,  2,  1 >;  /**< Injected conversion overrun flag        */
    using ROVRF  = regbits< type,  3,  1 >;  /**< Regular conversion overrun flag         */
    using AWDF   = regbits< type,  4,  1 >;  /**< Analog watchdog                         */
    using JCIP   = regbits< type, 13,  1 >;  /**< Injected conversion in progress status  */
    using RCIP   = regbits< type, 14,  1 >;  /**< Regular conversion in progress status   */
    using CKABF  = regbits< type, 16,  8 >;  /**< Clock absence flag                      */
    using SCDF   = regbits< type, 24,  8 >;  /**< short-circuit detector flag             */
  };

  /**
   * DFSDM interrupt and status register
   */
  struct DFSDM3_ISR
  : public reg< uint32_t, base_addr + 0xcc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, ro, 0x00000000 >;

    using JEOCF  = regbits< type,  0,  1 >;  /**< End of injected conversion flag         */
    using REOCF  = regbits< type,  1,  1 >;  /**< End of regular conversion flag          */
    using JOVRF  = regbits< type,  2,  1 >;  /**< Injected conversion overrun flag        */
    using ROVRF  = regbits< type,  3,  1 >;  /**< Regular conversion overrun flag         */
    using AWDF   = regbits< type,  4,  1 >;  /**< Analog watchdog                         */
    using JCIP   = regbits< type, 13,  1 >;  /**< Injected conversion in progress status  */
    using RCIP   = regbits< type, 14,  1 >;  /**< Regular conversion in progress status   */
    using CKABF  = regbits< type, 16,  8 >;  /**< Clock absence flag                      */
    using SCDF   = regbits< type, 24,  8 >;  /**< short-circuit detector flag             */
  };

  /**
   * DFSDM interrupt flag clear register
   */
  struct DFSDM0_ICR
  : public reg< uint32_t, base_addr + 0xd0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0x00000000 >;

    using CLRJOVRF  = regbits< type,  2,  1 >;  /**< Clear the injected conversion overrun flag  */
    using CLRROVRF  = regbits< type,  3,  1 >;  /**< Clear the regular conversion overrun flag   */
    using CLRCKABF  = regbits< type, 16,  8 >;  /**< Clear the clock absence flag                */
    using CLRSCDF   = regbits< type, 24,  8 >;  /**< Clear the short-circuit detector flag       */
  };

  /**
   * DFSDM interrupt flag clear register
   */
  struct DFSDM1_ICR
  : public reg< uint32_t, base_addr + 0xd4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd4, rw, 0x00000000 >;

    using CLRJOVRF  = regbits< type,  2,  1 >;  /**< Clear the injected conversion overrun flag  */
    using CLRROVRF  = regbits< type,  3,  1 >;  /**< Clear the regular conversion overrun flag   */
    using CLRCKABF  = regbits< type, 16,  8 >;  /**< Clear the clock absence flag                */
    using CLRSCDF   = regbits< type, 24,  8 >;  /**< Clear the short-circuit detector flag       */
  };

  /**
   * DFSDM interrupt flag clear register
   */
  struct DFSDM2_ICR
  : public reg< uint32_t, base_addr + 0xd8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, rw, 0x00000000 >;

    using CLRJOVRF  = regbits< type,  2,  1 >;  /**< Clear the injected conversion overrun flag  */
    using CLRROVRF  = regbits< type,  3,  1 >;  /**< Clear the regular conversion overrun flag   */
    using CLRCKABF  = regbits< type, 16,  8 >;  /**< Clear the clock absence flag                */
    using CLRSCDF   = regbits< type, 24,  8 >;  /**< Clear the short-circuit detector flag       */
  };

  /**
   * DFSDM interrupt flag clear register
   */
  struct DFSDM3_ICR
  : public reg< uint32_t, base_addr + 0xdc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xdc, rw, 0x00000000 >;

    using CLRJOVRF  = regbits< type,  2,  1 >;  /**< Clear the injected conversion overrun flag  */
    using CLRROVRF  = regbits< type,  3,  1 >;  /**< Clear the regular conversion overrun flag   */
    using CLRCKABF  = regbits< type, 16,  8 >;  /**< Clear the clock absence flag                */
    using CLRSCDF   = regbits< type, 24,  8 >;  /**< Clear the short-circuit detector flag       */
  };

  /**
   * DFSDM injected channel group selection register
   */
  struct DFSDM0_JCHGR
  : public reg< uint32_t, base_addr + 0xe0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0x00000000 >;

    using JCHG  = regbits< type,  0,  8 >;  /**< Injected channel group selection  */
  };

  /**
   * DFSDM injected channel group selection register
   */
  struct DFSDM1_JCHGR
  : public reg< uint32_t, base_addr + 0xe4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0x00000000 >;

    using JCHG  = regbits< type,  0,  8 >;  /**< Injected channel group selection  */
  };

  /**
   * DFSDM injected channel group selection register
   */
  struct DFSDM2_JCHGR
  : public reg< uint32_t, base_addr + 0xe8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, rw, 0x00000000 >;

    using JCHG  = regbits< type,  0,  8 >;  /**< Injected channel group selection  */
  };

  /**
   * DFSDM injected channel group selection register
   */
  struct DFSDM3_JCHGR
  : public reg< uint32_t, base_addr + 0xec, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xec, rw, 0x00000000 >;

    using JCHG  = regbits< type,  0,  8 >;  /**< Injected channel group selection  */
  };

  /**
   * DFSDM filter control register
   */
  struct DFSDM0_FCR
  : public reg< uint32_t, base_addr + 0xf0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, rw, 0x00000000 >;

    using IOSR  = regbits< type,  0,  8 >;  /**< Integrator oversampling ratio (averaging length)  */
    using FOSR  = regbits< type, 16, 10 >;  /**< Sinc filter oversampling ratio (decimation rate)  */
    using FORD  = regbits< type, 29,  3 >;  /**< Sinc filter order                                 */
  };

  /**
   * DFSDM filter control register
   */
  struct DFSDM1_FCR
  : public reg< uint32_t, base_addr + 0xf4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, rw, 0x00000000 >;

    using IOSR  = regbits< type,  0,  8 >;  /**< Integrator oversampling ratio (averaging length)  */
    using FOSR  = regbits< type, 16, 10 >;  /**< Sinc filter oversampling ratio (decimation rate)  */
    using FORD  = regbits< type, 29,  3 >;  /**< Sinc filter order                                 */
  };

  /**
   * DFSDM filter control register
   */
  struct DFSDM2_FCR
  : public reg< uint32_t, base_addr + 0xf8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf8, rw, 0x00000000 >;

    using IOSR  = regbits< type,  0,  8 >;  /**< Integrator oversampling ratio (averaging length)  */
    using FOSR  = regbits< type, 16, 10 >;  /**< Sinc filter oversampling ratio (decimation rate)  */
    using FORD  = regbits< type, 29,  3 >;  /**< Sinc filter order                                 */
  };

  /**
   * DFSDM filter control register
   */
  struct DFSDM3_FCR
  : public reg< uint32_t, base_addr + 0xfc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xfc, rw, 0x00000000 >;

    using IOSR  = regbits< type,  0,  8 >;  /**< Integrator oversampling ratio (averaging length)  */
    using FOSR  = regbits< type, 16, 10 >;  /**< Sinc filter oversampling ratio (decimation rate)  */
    using FORD  = regbits< type, 29,  3 >;  /**< Sinc filter order                                 */
  };

  /**
   * DFSDM data register for injected group
   */
  struct DFSDM0_JDATAR
  : public reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >;

    using JDATACH  = regbits< type,  0,  3 >;  /**< Injected channel most recently converted  */
    using JDATA    = regbits< type,  8, 24 >;  /**< Injected group conversion data            */
  };

  /**
   * DFSDM data register for injected group
   */
  struct DFSDM1_JDATAR
  : public reg< uint32_t, base_addr + 0x104, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104, ro, 0x00000000 >;

    using JDATACH  = regbits< type,  0,  3 >;  /**< Injected channel most recently converted  */
    using JDATA    = regbits< type,  8, 24 >;  /**< Injected group conversion data            */
  };

  /**
   * DFSDM data register for injected group
   */
  struct DFSDM2_JDATAR
  : public reg< uint32_t, base_addr + 0x108, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x108, ro, 0x00000000 >;

    using JDATACH  = regbits< type,  0,  3 >;  /**< Injected channel most recently converted  */
    using JDATA    = regbits< type,  8, 24 >;  /**< Injected group conversion data            */
  };

  /**
   * DFSDM data register for injected group
   */
  struct DFSDM3_JDATAR
  : public reg< uint32_t, base_addr + 0x10c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, ro, 0x00000000 >;

    using JDATACH  = regbits< type,  0,  3 >;  /**< Injected channel most recently converted  */
    using JDATA    = regbits< type,  8, 24 >;  /**< Injected group conversion data            */
  };

  /**
   * DFSDM data register for the regular channel
   */
  struct DFSDM0_RDATAR
  : public reg< uint32_t, base_addr + 0x110, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, ro, 0x00000000 >;

    using RDATACH  = regbits< type,  0,  3 >;  /**< Regular channel most recently converted  */
    using RPEND    = regbits< type,  4,  1 >;  /**< Regular channel pending data             */
    using RDATA    = regbits< type,  8, 24 >;  /**< Regular channel conversion data          */
  };

  /**
   * DFSDM data register for the regular channel
   */
  struct DFSDM1_RDATAR
  : public reg< uint32_t, base_addr + 0x114, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x114, ro, 0x00000000 >;

    using RDATACH  = regbits< type,  0,  3 >;  /**< Regular channel most recently converted  */
    using RPEND    = regbits< type,  4,  1 >;  /**< Regular channel pending data             */
    using RDATA    = regbits< type,  8, 24 >;  /**< Regular channel conversion data          */
  };

  /**
   * DFSDM data register for the regular channel
   */
  struct DFSDM2_RDATAR
  : public reg< uint32_t, base_addr + 0x118, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x118, ro, 0x00000000 >;

    using RDATACH  = regbits< type,  0,  3 >;  /**< Regular channel most recently converted  */
    using RPEND    = regbits< type,  4,  1 >;  /**< Regular channel pending data             */
    using RDATA    = regbits< type,  8, 24 >;  /**< Regular channel conversion data          */
  };

  /**
   * DFSDM data register for the regular channel
   */
  struct DFSDM3_RDATAR
  : public reg< uint32_t, base_addr + 0x11c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, ro, 0x00000000 >;

    using RDATACH  = regbits< type,  0,  3 >;  /**< Regular channel most recently converted  */
    using RPEND    = regbits< type,  4,  1 >;  /**< Regular channel pending data             */
    using RDATA    = regbits< type,  8, 24 >;  /**< Regular channel conversion data          */
  };

  /**
   * DFSDM analog watchdog high threshold register
   */
  struct DFSDM0_AWHTR
  : public reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x00000000 >;

    using BKAWH  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog high threshold event  */
    using AWHT   = regbits< type,  8, 24 >;  /**< Analog watchdog high threshold                                   */
  };

  /**
   * DFSDM analog watchdog high threshold register
   */
  struct DFSDM1_AWHTR
  : public reg< uint32_t, base_addr + 0x124, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x00000000 >;

    using BKAWH  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog high threshold event  */
    using AWHT   = regbits< type,  8, 24 >;  /**< Analog watchdog high threshold                                   */
  };

  /**
   * DFSDM analog watchdog high threshold register
   */
  struct DFSDM2_AWHTR
  : public reg< uint32_t, base_addr + 0x128, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x00000000 >;

    using BKAWH  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog high threshold event  */
    using AWHT   = regbits< type,  8, 24 >;  /**< Analog watchdog high threshold                                   */
  };

  /**
   * DFSDM analog watchdog high threshold register
   */
  struct DFSDM3_AWHTR
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x00000000 >;

    using BKAWH  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog high threshold event  */
    using AWHT   = regbits< type,  8, 24 >;  /**< Analog watchdog high threshold                                   */
  };

  /**
   * DFSDM analog watchdog low threshold register
   */
  struct DFSDM0_AWLTR
  : public reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0x00000000 >;

    using BKAWL  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog low threshold event  */
    using AWLT   = regbits< type,  8, 24 >;  /**< Analog watchdog low threshold                                   */
  };

  /**
   * DFSDM analog watchdog low threshold register
   */
  struct DFSDM1_AWLTR
  : public reg< uint32_t, base_addr + 0x134, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0x00000000 >;

    using BKAWL  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog low threshold event  */
    using AWLT   = regbits< type,  8, 24 >;  /**< Analog watchdog low threshold                                   */
  };

  /**
   * DFSDM analog watchdog low threshold register
   */
  struct DFSDM2_AWLTR
  : public reg< uint32_t, base_addr + 0x138, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x138, rw, 0x00000000 >;

    using BKAWL  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog low threshold event  */
    using AWLT   = regbits< type,  8, 24 >;  /**< Analog watchdog low threshold                                   */
  };

  /**
   * DFSDM analog watchdog low threshold register
   */
  struct DFSDM3_AWLTR
  : public reg< uint32_t, base_addr + 0x13c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x13c, rw, 0x00000000 >;

    using BKAWL  = regbits< type,  0,  4 >;  /**< Break signal assignment to analog watchdog low threshold event  */
    using AWLT   = regbits< type,  8, 24 >;  /**< Analog watchdog low threshold                                   */
  };

  /**
   * DFSDM analog watchdog status register
   */
  struct DFSDM0_AWSR
  : public reg< uint32_t, base_addr + 0x140, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x140, ro, 0x00000000 >;

    using AWLTF  = regbits< type,  0,  8 >;  /**< Analog watchdog low threshold flag   */
    using AWHTF  = regbits< type,  8,  8 >;  /**< Analog watchdog high threshold flag  */
  };

  /**
   * DFSDM analog watchdog status register
   */
  struct DFSDM1_AWSR
  : public reg< uint32_t, base_addr + 0x144, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x144, ro, 0x00000000 >;

    using AWLTF  = regbits< type,  0,  8 >;  /**< Analog watchdog low threshold flag   */
    using AWHTF  = regbits< type,  8,  8 >;  /**< Analog watchdog high threshold flag  */
  };

  /**
   * DFSDM analog watchdog status register
   */
  struct DFSDM2_AWSR
  : public reg< uint32_t, base_addr + 0x148, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x148, ro, 0x00000000 >;

    using AWLTF  = regbits< type,  0,  8 >;  /**< Analog watchdog low threshold flag   */
    using AWHTF  = regbits< type,  8,  8 >;  /**< Analog watchdog high threshold flag  */
  };

  /**
   * DFSDM analog watchdog status register
   */
  struct DFSDM3_AWSR
  : public reg< uint32_t, base_addr + 0x14c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14c, ro, 0x00000000 >;

    using AWLTF  = regbits< type,  0,  8 >;  /**< Analog watchdog low threshold flag   */
    using AWHTF  = regbits< type,  8,  8 >;  /**< Analog watchdog high threshold flag  */
  };

  /**
   * DFSDM analog watchdog clear flag register
   */
  struct DFSDM0_AWCFR
  : public reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x150, rw, 0x00000000 >;

    using CLRAWLTF  = regbits< type,  0,  8 >;  /**< Clear the analog watchdog low threshold flag   */
    using CLRAWHTF  = regbits< type,  8,  8 >;  /**< Clear the analog watchdog high threshold flag  */
  };

  /**
   * DFSDM analog watchdog clear flag register
   */
  struct DFSDM1_AWCFR
  : public reg< uint32_t, base_addr + 0x154, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x154, rw, 0x00000000 >;

    using CLRAWLTF  = regbits< type,  0,  8 >;  /**< Clear the analog watchdog low threshold flag   */
    using CLRAWHTF  = regbits< type,  8,  8 >;  /**< Clear the analog watchdog high threshold flag  */
  };

  /**
   * DFSDM analog watchdog clear flag register
   */
  struct DFSDM2_AWCFR
  : public reg< uint32_t, base_addr + 0x158, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x158, rw, 0x00000000 >;

    using CLRAWLTF  = regbits< type,  0,  8 >;  /**< Clear the analog watchdog low threshold flag   */
    using CLRAWHTF  = regbits< type,  8,  8 >;  /**< Clear the analog watchdog high threshold flag  */
  };

  /**
   * DFSDM analog watchdog clear flag register
   */
  struct DFSDM3_AWCFR
  : public reg< uint32_t, base_addr + 0x15c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x15c, rw, 0x00000000 >;

    using CLRAWLTF  = regbits< type,  0,  8 >;  /**< Clear the analog watchdog low threshold flag   */
    using CLRAWHTF  = regbits< type,  8,  8 >;  /**< Clear the analog watchdog high threshold flag  */
  };

  /**
   * DFSDM Extremes detector maximum register
   */
  struct DFSDM0_EXMAX
  : public reg< uint32_t, base_addr + 0x160, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x160, ro, 0x00000000 >;

    using EXMAXCH  = regbits< type,  0,  3 >;  /**< Extremes detector maximum data channel  */
    using EXMAX    = regbits< type,  8, 24 >;  /**< Extremes detector maximum value         */
  };

  /**
   * DFSDM Extremes detector maximum register
   */
  struct DFSDM1_EXMAX
  : public reg< uint32_t, base_addr + 0x164, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x164, ro, 0x00000000 >;

    using EXMAXCH  = regbits< type,  0,  3 >;  /**< Extremes detector maximum data channel  */
    using EXMAX    = regbits< type,  8, 24 >;  /**< Extremes detector maximum value         */
  };

  /**
   * DFSDM Extremes detector maximum register
   */
  struct DFSDM2_EXMAX
  : public reg< uint32_t, base_addr + 0x168, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x168, ro, 0x00000000 >;

    using EXMAXCH  = regbits< type,  0,  3 >;  /**< Extremes detector maximum data channel  */
    using EXMAX    = regbits< type,  8, 24 >;  /**< Extremes detector maximum value         */
  };

  /**
   * DFSDM Extremes detector maximum register
   */
  struct DFSDM3_EXMAX
  : public reg< uint32_t, base_addr + 0x16c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x16c, ro, 0x00000000 >;

    using EXMAXCH  = regbits< type,  0,  3 >;  /**< Extremes detector maximum data channel  */
    using EXMAX    = regbits< type,  8, 24 >;  /**< Extremes detector maximum value         */
  };

  /**
   * DFSDM Extremes detector minimum register
   */
  struct DFSDM0_EXMIN
  : public reg< uint32_t, base_addr + 0x170, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x170, ro, 0x00000000 >;

    using EXMINCH  = regbits< type,  0,  3 >;  /**< Extremes detector minimum data channel  */
    using EXMIN    = regbits< type,  8, 24 >;  /**< Extremes detector minimum value         */
  };

  /**
   * DFSDM Extremes detector minimum register
   */
  struct DFSDM1_EXMIN
  : public reg< uint32_t, base_addr + 0x174, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x174, ro, 0x00000000 >;

    using EXMINCH  = regbits< type,  0,  3 >;  /**< Extremes detector minimum data channel  */
    using EXMIN    = regbits< type,  8, 24 >;  /**< Extremes detector minimum value         */
  };

  /**
   * DFSDM Extremes detector minimum register
   */
  struct DFSDM2_EXMIN
  : public reg< uint32_t, base_addr + 0x178, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x178, ro, 0x00000000 >;

    using EXMINCH  = regbits< type,  0,  3 >;  /**< Extremes detector minimum data channel  */
    using EXMIN    = regbits< type,  8, 24 >;  /**< Extremes detector minimum value         */
  };

  /**
   * DFSDM Extremes detector minimum register
   */
  struct DFSDM3_EXMIN
  : public reg< uint32_t, base_addr + 0x17c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x17c, ro, 0x00000000 >;

    using EXMINCH  = regbits< type,  0,  3 >;  /**< Extremes detector minimum data channel  */
    using EXMIN    = regbits< type,  8, 24 >;  /**< Extremes detector minimum value         */
  };

  /**
   * DFSDM conversion timer register
   */
  struct DFSDM0_CNVTIMR
  : public reg< uint32_t, base_addr + 0x180, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x180, ro, 0x00000000 >;

    using CNVCNT  = regbits< type,  4, 28 >;  /**< 28-bit timer counting conversion time  */
  };

  /**
   * DFSDM conversion timer register
   */
  struct DFSDM1_CNVTIMR
  : public reg< uint32_t, base_addr + 0x184, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x184, ro, 0x00000000 >;

    using CNVCNT  = regbits< type,  4, 28 >;  /**< 28-bit timer counting conversion time  */
  };

  /**
   * DFSDM conversion timer register
   */
  struct DFSDM2_CNVTIMR
  : public reg< uint32_t, base_addr + 0x188, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x188, ro, 0x00000000 >;

    using CNVCNT  = regbits< type,  4, 28 >;  /**< 28-bit timer counting conversion time  */
  };

  /**
   * DFSDM conversion timer register
   */
  struct DFSDM3_CNVTIMR
  : public reg< uint32_t, base_addr + 0x18c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18c, ro, 0x00000000 >;

    using CNVCNT  = regbits< type,  4, 28 >;  /**< 28-bit timer counting conversion time  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DFSDM_HPP_INCLUDED
