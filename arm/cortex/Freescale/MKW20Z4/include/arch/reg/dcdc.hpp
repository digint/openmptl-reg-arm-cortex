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
//  Import from CMSIS-SVD: "Freescale/MKW20Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW20Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW20Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DCDC_HPP_INCLUDED
#define ARCH_REG_DCDC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * DC to DC Converter
 */
struct DCDC
{
  static constexpr reg_addr_t base_addr = 0x4005a000;

  /**
   * DCDC REGISTER 0
   */
  struct REG0
  : public reg< uint32_t, base_addr + 0, rw, 0x4180000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x4180000 >;

    using DCDC_DISABLE_AUTO_CLK_SWITCH  = regbits< type,  1,  1 >;  /**< Disable automatic clock switch from internal oscillator to external clock.                   */
    using DCDC_SEL_CLK                  = regbits< type,  2,  1 >;  /**< Select external clock for DCDC when DCDC_DISABLE_AUTO_CLK_SWITCH is set.                     */
    using DCDC_PWD_OSC_INT              = regbits< type,  3,  1 >;  /**< Power down internal oscillator. Only set this bit when 32M crystal oscillator is available.  */
    using DCDC_LP_DF_CMP_ENABLE         = regbits< type,  9,  1 >;  /**< Enable low power differential comparators, to sense lower supply in pulsed mode              */
    using DCDC_VBAT_DIV_CTRL            = regbits< type, 10,  2 >;  /**< Controls VBAT voltage divider                                                                */
    using DCDC_LP_STATE_HYS_L           = regbits< type, 17,  2 >;  /**< Configure the hysteretic lower threshold value in low power mode                             */
    using DCDC_LP_STATE_HYS_H           = regbits< type, 19,  2 >;  /**< Configure the hysteretic upper threshold value in low power mode                             */
    using HYST_LP_COMP_ADJ              = regbits< type, 21,  1 >;  /**< Adjust hysteretic value in low power comparator.                                             */
    using HYST_LP_CMP_DISABLE           = regbits< type, 22,  1 >;  /**< Disable hysteresis in low power comparator.                                                  */
    using OFFSET_RSNS_LP_ADJ            = regbits< type, 23,  1 >;  /**< Adjust hysteretic value in low power voltage sense.                                          */
    using OFFSET_RSNS_LP_DISABLE        = regbits< type, 24,  1 >;  /**< Disable hysteresis in low power voltage sense.                                               */
    using DCDC_LESS_I                   = regbits< type, 25,  1 >;  /**< Reduce DCDC current. It will save approximately 20 uA in RUN.                                */
    using PWD_CMP_OFFSET                = regbits< type, 26,  1 >;  /**< Power down output range comparator                                                           */
    using DCDC_XTALOK_DISABLE           = regbits< type, 27,  1 >;  /**< Disable xtalok detection circuit.                                                            */
    using PSWITCH_STATUS                = regbits< type, 28,  1 >;  /**< Status register to indicate PSWITCH status                                                   */
    using VLPS_CONFIG_DCDC_HP           = regbits< type, 29,  1 >;  /**< Selects behavior of DCDC in device VLPS low power mode                                       */
    using VLPR_VLPW_CONFIG_DCDC_HP      = regbits< type, 30,  1 >;  /**< Selects behavior of DCDC in device VLPR and VLPW low power modes                             */
    using DCDC_STS_DC_OK                = regbits< type, 31,  1 >;  /**< Status register to indicate DCDC lock                                                        */
  };

  /**
   * DCDC REGISTER 1
   */
  struct REG1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x17C21C >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x17C21C >;

    using POSLIMIT_BUCK_IN             = regbits< type,  0,  7 >;  /**< Upper limit duty cycle limit in DC-DC converter                                */
    using POSLIMIT_BOOST_IN            = regbits< type,  7,  7 >;  /**< Upper limit duty cycle limit in DC-DC converter                                */
    using DCDC_LOOPCTRL_CM_HST_THRESH  = regbits< type, 21,  1 >;  /**< Enable hysteresis in switching converter common mode analog comparators        */
    using DCDC_LOOPCTRL_DF_HST_THRESH  = regbits< type, 22,  1 >;  /**< Enable hysteresis in switching converter differential mode analog comparators  */
    using DCDC_LOOPCTRL_EN_CM_HYST     = regbits< type, 23,  1 >;  /**< Enable hysteresis in switching converter common mode analog comparators        */
    using DCDC_LOOPCTRL_EN_DF_HYST     = regbits< type, 24,  1 >;  /**< Enable hysteresis in switching converter differential mode analog comparators  */
  };

  /**
   * DCDC REGISTER 2
   */
  struct REG2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x4009 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x4009 >;

    using DCDC_LOOPCTRL_DC_C          = regbits< type,  0,  2 >;  /**< Ratio of integral control parameter to proportional control parameter in the switching DC-DC converter, it can be used to optimize efficiency and loop response  */
    using DCDC_LOOPCTRL_DC_FF         = regbits< type,  6,  3 >;  /**< Two complement feed forward step in duty cycle in the switching DC-DC converter                                                                                  */
    using DCDC_LOOPCTRL_HYST_SIGN     = regbits< type, 13,  1 >;  /**< Invert the sign of the hysteresis in DC-DC analog comparators. This bit is set when in Pulsed mode.                                                              */
    using DCDC_LOOPCTRL_TOGGLE_DIF    = regbits< type, 14,  1 >;  /**< Set high to enable supply stepping to change, only after the differential control loop has toggled                                                               */
    using DCDC_BATTMONITOR_EN_BATADJ  = regbits< type, 15,  1 >;  /**< This bit enables the DC-DC to improve efficiency and minimize ripple using the information from the BATT_VAL field                                               */
    using DCDC_BATTMONITOR_BATT_VAL   = regbits< type, 16, 10 >;  /**< Software should be configured to place the battery voltage in this register measured with an 8 mV LSB resolution through the ADC                                 */
  };

  /**
   * DCDC REGISTER 3
   */
  struct REG3
  : public reg< uint32_t, base_addr + 0xc, rw, 0xA9C6 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0xA9C6 >;

    using DCDC_VDD1P8CTRL_TRG             = regbits< type,  0,  6 >;  /**< Target value of VDD1P8, 25 mV each step in two ranges, from 0x00 to 0x11 and 0x20 to 0x3F.         */
    using DCDC_VDD1P45CTRL_TRG_BUCK       = regbits< type,  6,  5 >;  /**< Target value of VDD1P45 in buck mode, 25 mV each step from 0x00 to 0x0F                            */
    using DCDC_VDD1P45CTRL_TRG_BOOST      = regbits< type, 11,  5 >;  /**< Target value of VDD1P45 in boost mode, 25 mV each step from 0x00 to 0x0F                           */
    using DCDC_VDD1P45CTRL_ADJTN          = regbits< type, 17,  4 >;  /**< Adjust value of duty cycle when switching between VDD1P45 and VDD1P8. The unit is 1/32 or 3.125%.  */
    using DCDC_MINPWR_DC_HALFCLK_PULSED   = regbits< type, 21,  1 >;  /**< Set DCDC clock to half frequency for the Pulsed mode.                                              */
    using DCDC_MINPWR_DOUBLE_FETS_PULSED  = regbits< type, 22,  1 >;  /**< Use double switch FET for the Pulsed mode.                                                         */
    using DCDC_MINPWR_HALF_FETS_PULSED    = regbits< type, 23,  1 >;  /**< Use half switch FET for the Pulsed mode.                                                           */
    using DCDC_MINPWR_DC_HALFCLK          = regbits< type, 24,  1 >;  /**< Set DCDC clock to half frequency for the continuous mode.                                          */
    using DCDC_MINPWR_DOUBLE_FETS         = regbits< type, 25,  1 >;  /**< Use double switch FET for the continuous mode.                                                     */
    using DCDC_MINPWR_HALF_FETS           = regbits< type, 26,  1 >;  /**< Use half switch FET for the continuous mode.                                                       */
    using DCDC_VDD1P45CTRL_DISABLE_STEP   = regbits< type, 29,  1 >;  /**< Disable stepping for VDD1P45. Must set this bit before enter low power modes.                      */
    using DCDC_VDD1P8CTRL_DISABLE_STEP    = regbits< type, 30,  1 >;  /**< Disable stepping for VDD1P8. Must set this bit before enter low power modes.                       */
  };

  /**
   * DCDC REGISTER 4
   */
  struct REG4
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using DCDC_SW_SHUTDOWN  = regbits< type,  0,  1 >;  /**< Shut down DCDC in buck mode. DCDC can be turned on by pulling PSWITCH to high momentarily (min 50 ms).  */
    using UNLOCK            = regbits< type, 16, 16 >;  /**< 0x3E77 KEY-Key needed to unlock HW_POWER_RESET register                                                 */
  };

  /**
   * DCDC REGISTER 6
   */
  struct REG6
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using PSWITCH_INT_RISE_EN  = regbits< type,  0,  1 >;  /**< Enable rising edge detect for interrupt.                                        */
    using PSWITCH_INT_FALL_EN  = regbits< type,  1,  1 >;  /**< Enable falling edge detect for interrupt.                                       */
    using PSWITCH_INT_CLEAR    = regbits< type,  2,  1 >;  /**< Write 1 to clear interrupt. Set to 0 after clear.                               */
    using PSWITCH_INT_MUTE     = regbits< type,  3,  1 >;  /**< Mask interrupt to SoC, edge detection result can be read from PSIWTCH_INT_STS.  */
    using PSWITCH_INT_STS      = regbits< type, 31,  1 >;  /**< PSWITCH edge detection interrupt status                                         */
  };

  /**
   * DCDC REGISTER 7
   */
  struct REG7
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using INTEGRATOR_VALUE      = regbits< type,  0, 19 >;  /**< Integrator value which can be loaded in pulsed mode                          */
    using INTEGRATOR_VALUE_SEL  = regbits< type, 19,  1 >;  /**< Select the integrator value from above register or saved value in hardware.  */
    using PULSE_RUN_SPEEDUP     = regbits< type, 20,  1 >;  /**< Enable pulse run speedup                                                     */
  };
};
} // namespace mptl

#endif // ARCH_REG_DCDC_HPP_INCLUDED
