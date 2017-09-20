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
//  Import from CMSIS-SVD: "Fujitsu/MB9B460L.svd"
//
//  name: MB9B460L
//  version: 1.3
//  description: MB9B460L Series
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CLK_GATING_HPP_INCLUDED
#define ARCH_REG_CLK_GATING_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Peripheral Clock Gating
 */
struct CLK_GATING
{
  static constexpr reg_addr_t base_addr = 0x4003c100;

  /**
   * Peripheral Function Clock Control Register 0
   */
  struct CKEN0
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using GIOCK    = regbits< type, 28,  1 >;  /**< Settings for operation clock supplying and gating to GPIO function                       */
    using EXBCK    = regbits< type, 26,  1 >;  /**< Settings for operation clock supplying and gating of external bus interface function     */
    using DMACK    = regbits< type, 24,  1 >;  /**< Supplying and gating settings of DMAC operation clock                                    */
    using ADCCK3   = regbits< type, 19,  1 >;  /**< Settings for operation clock supplying and gating to A/D converter unit 3                */
    using ADCCK2   = regbits< type, 18,  1 >;  /**< Settings for operation clock supplying and gating to A/D converter unit 2                */
    using ADCCK1   = regbits< type, 17,  1 >;  /**< Settings for operation clock supplying and gating to A/D converter unit 1                */
    using ADCCK0   = regbits< type, 16,  1 >;  /**< Settings for operation clock supplying and gating to A/D converter unit 0                */
    using MFSCK15  = regbits< type, 15,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.15  */
    using MFSCK14  = regbits< type, 14,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.14  */
    using MFSCK13  = regbits< type, 13,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.13  */
    using MFSCK12  = regbits< type, 12,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.12  */
    using MFSCK11  = regbits< type, 11,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.11  */
    using MFSCK10  = regbits< type, 10,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.10  */
    using MFSCK9   = regbits< type,  9,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.9   */
    using MFSCK8   = regbits< type,  8,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.8   */
    using MFSCK7   = regbits< type,  7,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.7   */
    using MFSCK6   = regbits< type,  6,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.6   */
    using MFSCK5   = regbits< type,  5,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.5   */
    using MFSCK4   = regbits< type,  4,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.4   */
    using MFSCK3   = regbits< type,  3,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.3   */
    using MFSCK2   = regbits< type,  2,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.2   */
    using MFSCK1   = regbits< type,  1,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.1   */
    using MFSCK0   = regbits< type,  0,  1 >;  /**< Settings for operation clock supply and gating to multi-function serial interface ch.0   */
  };

  /**
   * Peripheral Function Reset Control Register 0
   */
  struct MRST0
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using EXBRST    = regbits< type, 26,  1 >;  /**< Reset control for external bus interface                            */
    using DMARST    = regbits< type, 24,  1 >;  /**< Reset control of DMAC                                               */
    using ADCRST3   = regbits< type, 19,  1 >;  /**< Reset control of A/D converter unit 3                               */
    using ADCRST2   = regbits< type, 18,  1 >;  /**< Reset control of A/D converter unit 2                               */
    using ADCRST1   = regbits< type, 17,  1 >;  /**< Reset control of A/D converter unit 1                               */
    using ADCRST0   = regbits< type, 16,  1 >;  /**< Reset control of A/D converter unit 0                               */
    using MFSRST15  = regbits< type, 15,  1 >;  /**< Control of software reset of multi-function serial interface ch.15  */
    using MFSRST14  = regbits< type, 14,  1 >;  /**< Control of software reset of multi-function serial interface ch.14  */
    using MFSRST13  = regbits< type, 13,  1 >;  /**< Control of software reset of multi-function serial interface ch.13  */
    using MFSRST12  = regbits< type, 12,  1 >;  /**< Control of software reset of multi-function serial interface ch.12  */
    using MFSRST11  = regbits< type, 11,  1 >;  /**< Control of software reset of multi-function serial interface ch.11  */
    using MFSRST10  = regbits< type, 10,  1 >;  /**< Control of software reset of multi-function serial interface ch.10  */
    using MFSRST9   = regbits< type,  9,  1 >;  /**< Control of software reset of multi-function serial interface ch.9   */
    using MFSRST8   = regbits< type,  8,  1 >;  /**< Control of software reset of multi-function serial interface ch.8   */
    using MFSRST7   = regbits< type,  7,  1 >;  /**< Control of software reset of multi-function serial interface ch.7   */
    using MFSRST6   = regbits< type,  6,  1 >;  /**< Control of software reset of multi-function serial interface ch.6   */
    using MFSRST5   = regbits< type,  5,  1 >;  /**< Control of software reset of multi-function serial interface ch.5   */
    using MFSRST4   = regbits< type,  4,  1 >;  /**< Control of software reset of multi-function serial interface ch.4   */
    using MFSRST3   = regbits< type,  3,  1 >;  /**< Control of software reset of multi-function serial interface ch.3   */
    using MFSRST2   = regbits< type,  2,  1 >;  /**< Control of software reset of multi-function serial interface ch.2   */
    using MFSRST1   = regbits< type,  1,  1 >;  /**< Control of software reset of multi-function serial interface ch.1   */
    using MFSRST0   = regbits< type,  0,  1 >;  /**< Control of software reset of multi-function serial interface ch.0   */
  };

  /**
   * Peripheral Function Clock Control Register 1
   */
  struct CKEN1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using QDUCK3  = regbits< type, 19,  1 >;  /**< Reset control of quad counter unit 3                                                          */
    using QDUCK2  = regbits< type, 18,  1 >;  /**< Reset control of quad counter unit 2                                                          */
    using QDUCK1  = regbits< type, 17,  1 >;  /**< Reset control of quad counter unit 1                                                          */
    using QDUCK0  = regbits< type, 16,  1 >;  /**< Reset control of quad counter unit 0                                                          */
    using MFTCK3  = regbits< type, 11,  1 >;  /**< Settings for operation clock supply and gating of multi-function timer 3 and PPG 24/26/28/30  */
    using MFTCK2  = regbits< type, 10,  1 >;  /**< Settings for operation clock supply and gating of multi-function timer 2 and PPG 16/18/20/22  */
    using MFTCK1  = regbits< type,  9,  1 >;  /**< Settings for operation clock supply and gating of multi-function timer 1 and PPG 8/10/12/14   */
    using MFTCK0  = regbits< type,  8,  1 >;  /**< Settings for operation clock supply and gating of multi-function timer 0 and PPG 0/2/4/6      */
    using BTMCK3  = regbits< type,  3,  1 >;  /**< Settings operation clock supply and gating to base timer 12/13/14/15                          */
    using BTMCK2  = regbits< type,  2,  1 >;  /**< Settings operation clock supply and gating to base timer 8/9/10/11                            */
    using BTMCK1  = regbits< type,  1,  1 >;  /**< Settings operation clock supply and gating to base timer 4/5/6/7                              */
    using BTMCK0  = regbits< type,  0,  1 >;  /**< Settings operation clock supply and gating to base timer 0/1/2/3                              */
  };

  /**
   * Peripheral Function Reset Control Register 1
   */
  struct MRST1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using QDURST3  = regbits< type, 19,  1 >;  /**< Reset control of quad counter unit 3                                 */
    using QDURST2  = regbits< type, 18,  1 >;  /**< Reset control of quad counter unit 2                                 */
    using QDURST1  = regbits< type, 17,  1 >;  /**< Reset control of quad counter unit 1                                 */
    using QDURST0  = regbits< type, 16,  1 >;  /**< Reset control of quad counter unit 0                                 */
    using MFTRST3  = regbits< type, 11,  1 >;  /**< Control of multi-function timer 3 and PPG 24/26/28/30 reset control  */
    using MFTRST2  = regbits< type, 10,  1 >;  /**< Control of multi-function timer 2 and PPG 16/18/20/22 reset control  */
    using MFTRST1  = regbits< type,  9,  1 >;  /**< Control of multi-function timer 1 and PPG 8/10/12/14 reset control   */
    using MFTRST0  = regbits< type,  8,  1 >;  /**< Control of multi-function timer 0 and PPG 0/2/4/6 reset control      */
    using BTMRST3  = regbits< type,  3,  1 >;  /**< Reset control of base timer 12/13/14/15                              */
    using BTMRST2  = regbits< type,  2,  1 >;  /**< Reset control of base timer 8/9/10/11                                */
    using BTMRST1  = regbits< type,  1,  1 >;  /**< Reset control of base timer 4/5/6/7                                  */
    using BTMRST0  = regbits< type,  0,  1 >;  /**< Reset control of base timer 0/1/2/3                                  */
  };

  /**
   * Peripheral Function Clock Control Register 2
   */
  struct CKEN2
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0 >;

    using SDCCK   = regbits< type,  8,  1 >;  /**< Settings for operation clock supply and gating to SD card interface  */
    using CANCK1  = regbits< type,  5,  1 >;  /**< Settings for operation clock supply and gating to SD card interface  */
    using CANCK0  = regbits< type,  4,  1 >;  /**< Settings for operation clock supply and gating to SD card interface  */
    using USBCK1  = regbits< type,  1,  1 >;  /**< Settings for operation clock supply and gating to SD card interface  */
    using USBCK0  = regbits< type,  0,  1 >;  /**< $                                                                    */
  };

  /**
   * Peripheral Function Reset Control Register 2
   */
  struct MRST2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x0 >;

    using SDCRST   = regbits< type,  8,  1 >;  /**< Reset control of SD card interface         */
    using CANRST1  = regbits< type,  5,  1 >;  /**< Reset control of SD card interface         */
    using CANRST0  = regbits< type,  4,  1 >;  /**< Reset control of SD card interface         */
    using USBRST1  = regbits< type,  1,  1 >;  /**< Reset control of USB (function/host) ch.1  */
    using USBRST0  = regbits< type,  0,  1 >;  /**< Reset control of USB (function/host) ch.0  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CLK_GATING_HPP_INCLUDED
