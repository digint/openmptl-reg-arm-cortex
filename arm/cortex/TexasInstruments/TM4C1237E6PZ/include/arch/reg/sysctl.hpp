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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C1237E6PZ.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C1237E6PZ
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

#ifndef ARCH_REG_SYSCTL_HPP_INCLUDED
#define ARCH_REG_SYSCTL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for SYSCTL peripheral
 */
struct SYSCTL
{
  static constexpr reg_addr_t base_addr = 0x400fe000;

  /**
   * Device Identification 0
   */
  struct DID0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DID0_MIN    = regbits< type,  0,  8 >;  /**< Minor Revision  */
    using SYSCTL_DID0_MAJ    = regbits< type,  8,  8 >;  /**< Major Revision  */
    using SYSCTL_DID0_CLASS  = regbits< type, 16,  8 >;  /**< Device Class    */
    using SYSCTL_DID0_VER    = regbits< type, 28,  3 >;  /**< DID0 Version    */
  };

  /**
   * Device Identification 1
   */
  struct DID1
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DID1_QUAL    = regbits< type,  0,  2 >;  /**< Qualification Status  */
    using SYSCTL_DID1_ROHS    = regbits< type,  2,  1 >;  /**< RoHS-Compliance       */
    using SYSCTL_DID1_PKG     = regbits< type,  3,  2 >;  /**< Package Type          */
    using SYSCTL_DID1_TEMP    = regbits< type,  5,  3 >;  /**< Temperature Range     */
    using SYSCTL_DID1_PINCNT  = regbits< type, 13,  3 >;  /**< Package Pin Count     */
    using SYSCTL_DID1_PRTNO   = regbits< type, 16,  8 >;  /**< Part Number           */
    using SYSCTL_DID1_FAM     = regbits< type, 24,  4 >;  /**< Family                */
    using SYSCTL_DID1_VER     = regbits< type, 28,  4 >;  /**< DID1 Version          */
  };

  /**
   * Device Capabilities 0
   */
  struct DC0
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC0_FLASHSZ  = regbits< type,  0, 16 >;  /**< Flash Size  */
    using SYSCTL_DC0_SRAMSZ   = regbits< type, 16, 16 >;  /**< SRAM Size   */
  };

  /**
   * Device Capabilities 1
   */
  struct DC1
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC1_JTAG       = regbits< type,  0,  1 >;  /**< JTAG Present                */
    using SYSCTL_DC1_SWD        = regbits< type,  1,  1 >;  /**< SWD Present                 */
    using SYSCTL_DC1_SWO        = regbits< type,  2,  1 >;  /**< SWO Trace Port Present      */
    using SYSCTL_DC1_WDT0       = regbits< type,  3,  1 >;  /**< Watchdog Timer 0 Present    */
    using SYSCTL_DC1_PLL        = regbits< type,  4,  1 >;  /**< PLL Present                 */
    using SYSCTL_DC1_TEMP       = regbits< type,  5,  1 >;  /**< Temp Sensor Present         */
    using SYSCTL_DC1_HIB        = regbits< type,  6,  1 >;  /**< Hibernation Module Present  */
    using SYSCTL_DC1_MPU        = regbits< type,  7,  1 >;  /**< MPU Present                 */
    using SYSCTL_DC1_ADC0SPD    = regbits< type,  8,  2 >;  /**< Max ADC0 Speed              */
    using SYSCTL_DC1_ADC1SPD    = regbits< type, 10,  2 >;  /**< Max ADC1 Speed              */
    using SYSCTL_DC1_MINSYSDIV  = regbits< type, 12,  4 >;  /**< System Clock Divider        */
    using SYSCTL_DC1_ADC0       = regbits< type, 16,  1 >;  /**< ADC Module 0 Present        */
    using SYSCTL_DC1_ADC1       = regbits< type, 17,  1 >;  /**< ADC Module 1 Present        */
    using SYSCTL_DC1_PWM0       = regbits< type, 20,  1 >;  /**< PWM Module 0 Present        */
    using SYSCTL_DC1_PWM1       = regbits< type, 21,  1 >;  /**< PWM Module 1 Present        */
    using SYSCTL_DC1_CAN0       = regbits< type, 24,  1 >;  /**< CAN Module 0 Present        */
    using SYSCTL_DC1_CAN1       = regbits< type, 25,  1 >;  /**< CAN Module 1 Present        */
    using SYSCTL_DC1_WDT1       = regbits< type, 28,  1 >;  /**< Watchdog Timer1 Present     */
  };

  /**
   * Device Capabilities 2
   */
  struct DC2
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC2_UART0   = regbits< type,  0,  1 >;  /**< UART Module 0 Present        */
    using SYSCTL_DC2_UART1   = regbits< type,  1,  1 >;  /**< UART Module 1 Present        */
    using SYSCTL_DC2_UART2   = regbits< type,  2,  1 >;  /**< UART Module 2 Present        */
    using SYSCTL_DC2_SSI0    = regbits< type,  4,  1 >;  /**< SSI Module 0 Present         */
    using SYSCTL_DC2_SSI1    = regbits< type,  5,  1 >;  /**< SSI Module 1 Present         */
    using SYSCTL_DC2_QEI0    = regbits< type,  8,  1 >;  /**< QEI Module 0 Present         */
    using SYSCTL_DC2_QEI1    = regbits< type,  9,  1 >;  /**< QEI Module 1 Present         */
    using SYSCTL_DC2_I2C0    = regbits< type, 12,  1 >;  /**< I2C Module 0 Present         */
    using SYSCTL_DC2_I2C0HS  = regbits< type, 13,  1 >;  /**< I2C Module 0 Speed           */
    using SYSCTL_DC2_I2C1    = regbits< type, 14,  1 >;  /**< I2C Module 1 Present         */
    using SYSCTL_DC2_I2C1HS  = regbits< type, 15,  1 >;  /**< I2C Module 1 Speed           */
    using SYSCTL_DC2_TIMER0  = regbits< type, 16,  1 >;  /**< Timer Module 0 Present       */
    using SYSCTL_DC2_TIMER1  = regbits< type, 17,  1 >;  /**< Timer Module 1 Present       */
    using SYSCTL_DC2_TIMER2  = regbits< type, 18,  1 >;  /**< Timer Module 2 Present       */
    using SYSCTL_DC2_TIMER3  = regbits< type, 19,  1 >;  /**< Timer Module 3 Present       */
    using SYSCTL_DC2_COMP0   = regbits< type, 24,  1 >;  /**< Analog Comparator 0 Present  */
    using SYSCTL_DC2_COMP1   = regbits< type, 25,  1 >;  /**< Analog Comparator 1 Present  */
    using SYSCTL_DC2_COMP2   = regbits< type, 26,  1 >;  /**< Analog Comparator 2 Present  */
    using SYSCTL_DC2_I2S0    = regbits< type, 28,  1 >;  /**< I2S Module 0 Present         */
    using SYSCTL_DC2_EPI0    = regbits< type, 30,  1 >;  /**< EPI Module 0 Present         */
  };

  /**
   * Device Capabilities 3
   */
  struct DC3
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC3_PWM0      = regbits< type,  0,  1 >;  /**< PWM0 Pin Present               */
    using SYSCTL_DC3_PWM1      = regbits< type,  1,  1 >;  /**< PWM1 Pin Present               */
    using SYSCTL_DC3_PWM2      = regbits< type,  2,  1 >;  /**< PWM2 Pin Present               */
    using SYSCTL_DC3_PWM3      = regbits< type,  3,  1 >;  /**< PWM3 Pin Present               */
    using SYSCTL_DC3_PWM4      = regbits< type,  4,  1 >;  /**< PWM4 Pin Present               */
    using SYSCTL_DC3_PWM5      = regbits< type,  5,  1 >;  /**< PWM5 Pin Present               */
    using SYSCTL_DC3_C0MINUS   = regbits< type,  6,  1 >;  /**< C0- Pin Present                */
    using SYSCTL_DC3_C0PLUS    = regbits< type,  7,  1 >;  /**< C0+ Pin Present                */
    using SYSCTL_DC3_C0O       = regbits< type,  8,  1 >;  /**< C0o Pin Present                */
    using SYSCTL_DC3_C1MINUS   = regbits< type,  9,  1 >;  /**< C1- Pin Present                */
    using SYSCTL_DC3_C1PLUS    = regbits< type, 10,  1 >;  /**< C1+ Pin Present                */
    using SYSCTL_DC3_C1O       = regbits< type, 11,  1 >;  /**< C1o Pin Present                */
    using SYSCTL_DC3_C2MINUS   = regbits< type, 12,  1 >;  /**< C2- Pin Present                */
    using SYSCTL_DC3_C2PLUS    = regbits< type, 13,  1 >;  /**< C2+ Pin Present                */
    using SYSCTL_DC3_C2O       = regbits< type, 14,  1 >;  /**< C2o Pin Present                */
    using SYSCTL_DC3_PWMFAULT  = regbits< type, 15,  1 >;  /**< PWM Fault Pin Present          */
    using SYSCTL_DC3_ADC0AIN0  = regbits< type, 16,  1 >;  /**< ADC Module 0 AIN0 Pin Present  */
    using SYSCTL_DC3_ADC0AIN1  = regbits< type, 17,  1 >;  /**< ADC Module 0 AIN1 Pin Present  */
    using SYSCTL_DC3_ADC0AIN2  = regbits< type, 18,  1 >;  /**< ADC Module 0 AIN2 Pin Present  */
    using SYSCTL_DC3_ADC0AIN3  = regbits< type, 19,  1 >;  /**< ADC Module 0 AIN3 Pin Present  */
    using SYSCTL_DC3_ADC0AIN4  = regbits< type, 20,  1 >;  /**< ADC Module 0 AIN4 Pin Present  */
    using SYSCTL_DC3_ADC0AIN5  = regbits< type, 21,  1 >;  /**< ADC Module 0 AIN5 Pin Present  */
    using SYSCTL_DC3_ADC0AIN6  = regbits< type, 22,  1 >;  /**< ADC Module 0 AIN6 Pin Present  */
    using SYSCTL_DC3_ADC0AIN7  = regbits< type, 23,  1 >;  /**< ADC Module 0 AIN7 Pin Present  */
    using SYSCTL_DC3_CCP0      = regbits< type, 24,  1 >;  /**< CCP0 Pin Present               */
    using SYSCTL_DC3_CCP1      = regbits< type, 25,  1 >;  /**< CCP1 Pin Present               */
    using SYSCTL_DC3_CCP2      = regbits< type, 26,  1 >;  /**< CCP2 Pin Present               */
    using SYSCTL_DC3_CCP3      = regbits< type, 27,  1 >;  /**< CCP3 Pin Present               */
    using SYSCTL_DC3_CCP4      = regbits< type, 28,  1 >;  /**< CCP4 Pin Present               */
    using SYSCTL_DC3_CCP5      = regbits< type, 29,  1 >;  /**< CCP5 Pin Present               */
    using SYSCTL_DC3_32KHZ     = regbits< type, 31,  1 >;  /**< 32KHz Input Clock Available    */
  };

  /**
   * Device Capabilities 4
   */
  struct DC4
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC4_GPIOA  = regbits< type,  0,  1 >;  /**< GPIO Port A Present           */
    using SYSCTL_DC4_GPIOB  = regbits< type,  1,  1 >;  /**< GPIO Port B Present           */
    using SYSCTL_DC4_GPIOC  = regbits< type,  2,  1 >;  /**< GPIO Port C Present           */
    using SYSCTL_DC4_GPIOD  = regbits< type,  3,  1 >;  /**< GPIO Port D Present           */
    using SYSCTL_DC4_GPIOE  = regbits< type,  4,  1 >;  /**< GPIO Port E Present           */
    using SYSCTL_DC4_GPIOF  = regbits< type,  5,  1 >;  /**< GPIO Port F Present           */
    using SYSCTL_DC4_GPIOG  = regbits< type,  6,  1 >;  /**< GPIO Port G Present           */
    using SYSCTL_DC4_GPIOH  = regbits< type,  7,  1 >;  /**< GPIO Port H Present           */
    using SYSCTL_DC4_GPIOJ  = regbits< type,  8,  1 >;  /**< GPIO Port J Present           */
    using SYSCTL_DC4_ROM    = regbits< type, 12,  1 >;  /**< Internal Code ROM Present     */
    using SYSCTL_DC4_UDMA   = regbits< type, 13,  1 >;  /**< Micro-DMA Module Present      */
    using SYSCTL_DC4_CCP6   = regbits< type, 14,  1 >;  /**< CCP6 Pin Present              */
    using SYSCTL_DC4_CCP7   = regbits< type, 15,  1 >;  /**< CCP7 Pin Present              */
    using SYSCTL_DC4_PICAL  = regbits< type, 18,  1 >;  /**< PIOSC Calibrate               */
    using SYSCTL_DC4_E1588  = regbits< type, 24,  1 >;  /**< 1588 Capable                  */
    using SYSCTL_DC4_EMAC0  = regbits< type, 28,  1 >;  /**< Ethernet MAC Layer 0 Present  */
    using SYSCTL_DC4_EPHY0  = regbits< type, 30,  1 >;  /**< Ethernet PHY Layer 0 Present  */
  };

  /**
   * Device Capabilities 5
   */
  struct DC5
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC5_PWM0       = regbits< type,  0,  1 >;  /**< PWM0 Pin Present           */
    using SYSCTL_DC5_PWM1       = regbits< type,  1,  1 >;  /**< PWM1 Pin Present           */
    using SYSCTL_DC5_PWM2       = regbits< type,  2,  1 >;  /**< PWM2 Pin Present           */
    using SYSCTL_DC5_PWM3       = regbits< type,  3,  1 >;  /**< PWM3 Pin Present           */
    using SYSCTL_DC5_PWM4       = regbits< type,  4,  1 >;  /**< PWM4 Pin Present           */
    using SYSCTL_DC5_PWM5       = regbits< type,  5,  1 >;  /**< PWM5 Pin Present           */
    using SYSCTL_DC5_PWM6       = regbits< type,  6,  1 >;  /**< PWM6 Pin Present           */
    using SYSCTL_DC5_PWM7       = regbits< type,  7,  1 >;  /**< PWM7 Pin Present           */
    using SYSCTL_DC5_PWMESYNC   = regbits< type, 20,  1 >;  /**< PWM Extended SYNC Active   */
    using SYSCTL_DC5_PWMEFLT    = regbits< type, 21,  1 >;  /**< PWM Extended Fault Active  */
    using SYSCTL_DC5_PWMFAULT0  = regbits< type, 24,  1 >;  /**< PWM Fault 0 Pin Present    */
    using SYSCTL_DC5_PWMFAULT1  = regbits< type, 25,  1 >;  /**< PWM Fault 1 Pin Present    */
    using SYSCTL_DC5_PWMFAULT2  = regbits< type, 26,  1 >;  /**< PWM Fault 2 Pin Present    */
    using SYSCTL_DC5_PWMFAULT3  = regbits< type, 27,  1 >;  /**< PWM Fault 3 Pin Present    */
  };

  /**
   * Device Capabilities 6
   */
  struct DC6
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC6_USB0     = regbits< type,  0,  2 >;  /**< USB Module 0 Present      */
    using SYSCTL_DC6_USB0PHY  = regbits< type,  4,  1 >;  /**< USB Module 0 PHY Present  */
  };

  /**
   * Device Capabilities 7
   */
  struct DC7
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC7_DMACH0   = regbits< type,  0,  1 >;  /**< USB_EP1_RX / UART2_RX   */
    using SYSCTL_DC7_DMACH1   = regbits< type,  1,  1 >;  /**< USB_EP1_TX / UART2_TX   */
    using SYSCTL_DC7_DMACH2   = regbits< type,  2,  1 >;  /**< USB_EP2_RX / Timer3A    */
    using SYSCTL_DC7_DMACH3   = regbits< type,  3,  1 >;  /**< USB_EP2_TX / Timer3B    */
    using SYSCTL_DC7_DMACH4   = regbits< type,  4,  1 >;  /**< USB_EP3_RX / Timer2A    */
    using SYSCTL_DC7_DMACH5   = regbits< type,  5,  1 >;  /**< USB_EP3_TX / Timer2B    */
    using SYSCTL_DC7_DMACH6   = regbits< type,  6,  1 >;  /**< ETH_RX / Timer2A        */
    using SYSCTL_DC7_DMACH7   = regbits< type,  7,  1 >;  /**< ETH_TX / Timer2B        */
    using SYSCTL_DC7_DMACH8   = regbits< type,  8,  1 >;  /**< UART0_RX / UART1_RX     */
    using SYSCTL_DC7_DMACH9   = regbits< type,  9,  1 >;  /**< UART0_TX / UART1_TX     */
    using SYSCTL_DC7_DMACH10  = regbits< type, 10,  1 >;  /**< SSI0_RX / SSI1_RX       */
    using SYSCTL_DC7_DMACH11  = regbits< type, 11,  1 >;  /**< SSI0_TX / SSI1_TX       */
    using SYSCTL_DC7_DMACH12  = regbits< type, 12,  1 >;  /**< CAN0_RX / UART2_RX      */
    using SYSCTL_DC7_DMACH13  = regbits< type, 13,  1 >;  /**< CAN0_TX / UART2_TX      */
    using SYSCTL_DC7_DMACH14  = regbits< type, 14,  1 >;  /**< ADC0_SS0 / Timer2A      */
    using SYSCTL_DC7_DMACH15  = regbits< type, 15,  1 >;  /**< ADC0_SS1 / Timer2B      */
    using SYSCTL_DC7_DMACH16  = regbits< type, 16,  1 >;  /**< ADC0_SS2                */
    using SYSCTL_DC7_DMACH17  = regbits< type, 17,  1 >;  /**< ADC0_SS3                */
    using SYSCTL_DC7_DMACH18  = regbits< type, 18,  1 >;  /**< Timer0A / Timer1A       */
    using SYSCTL_DC7_DMACH19  = regbits< type, 19,  1 >;  /**< Timer0B / Timer1B       */
    using SYSCTL_DC7_DMACH20  = regbits< type, 20,  1 >;  /**< Timer1A / EPI0_NBRFIFO  */
    using SYSCTL_DC7_DMACH21  = regbits< type, 21,  1 >;  /**< Timer1B / EPI0_WFIFO    */
    using SYSCTL_DC7_DMACH22  = regbits< type, 22,  1 >;  /**< UART1_RX / CAN2_RX      */
    using SYSCTL_DC7_DMACH23  = regbits< type, 23,  1 >;  /**< UART1_TX / CAN2_TX      */
    using SYSCTL_DC7_DMACH24  = regbits< type, 24,  1 >;  /**< SSI1_RX / ADC1_SS0      */
    using SYSCTL_DC7_DMACH25  = regbits< type, 25,  1 >;  /**< SSI1_TX / ADC1_SS1      */
    using SYSCTL_DC7_DMACH26  = regbits< type, 26,  1 >;  /**< CAN1_RX / ADC1_SS2      */
    using SYSCTL_DC7_DMACH27  = regbits< type, 27,  1 >;  /**< CAN1_TX / ADC1_SS3      */
    using SYSCTL_DC7_DMACH28  = regbits< type, 28,  1 >;  /**< I2S0_RX / CAN1_RX       */
    using SYSCTL_DC7_DMACH29  = regbits< type, 29,  1 >;  /**< I2S0_TX / CAN1_TX       */
    using SYSCTL_DC7_DMACH30  = regbits< type, 30,  1 >;  /**< SW                      */
  };

  /**
   * Device Capabilities 8 ADC Channels
   */
  struct DC8
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC8_ADC0AIN0   = regbits< type,  0,  1 >;  /**< ADC Module 0 AIN0 Pin Present   */
    using SYSCTL_DC8_ADC0AIN1   = regbits< type,  1,  1 >;  /**< ADC Module 0 AIN1 Pin Present   */
    using SYSCTL_DC8_ADC0AIN2   = regbits< type,  2,  1 >;  /**< ADC Module 0 AIN2 Pin Present   */
    using SYSCTL_DC8_ADC0AIN3   = regbits< type,  3,  1 >;  /**< ADC Module 0 AIN3 Pin Present   */
    using SYSCTL_DC8_ADC0AIN4   = regbits< type,  4,  1 >;  /**< ADC Module 0 AIN4 Pin Present   */
    using SYSCTL_DC8_ADC0AIN5   = regbits< type,  5,  1 >;  /**< ADC Module 0 AIN5 Pin Present   */
    using SYSCTL_DC8_ADC0AIN6   = regbits< type,  6,  1 >;  /**< ADC Module 0 AIN6 Pin Present   */
    using SYSCTL_DC8_ADC0AIN7   = regbits< type,  7,  1 >;  /**< ADC Module 0 AIN7 Pin Present   */
    using SYSCTL_DC8_ADC0AIN8   = regbits< type,  8,  1 >;  /**< ADC Module 0 AIN8 Pin Present   */
    using SYSCTL_DC8_ADC0AIN9   = regbits< type,  9,  1 >;  /**< ADC Module 0 AIN9 Pin Present   */
    using SYSCTL_DC8_ADC0AIN10  = regbits< type, 10,  1 >;  /**< ADC Module 0 AIN10 Pin Present  */
    using SYSCTL_DC8_ADC0AIN11  = regbits< type, 11,  1 >;  /**< ADC Module 0 AIN11 Pin Present  */
    using SYSCTL_DC8_ADC0AIN12  = regbits< type, 12,  1 >;  /**< ADC Module 0 AIN12 Pin Present  */
    using SYSCTL_DC8_ADC0AIN13  = regbits< type, 13,  1 >;  /**< ADC Module 0 AIN13 Pin Present  */
    using SYSCTL_DC8_ADC0AIN14  = regbits< type, 14,  1 >;  /**< ADC Module 0 AIN14 Pin Present  */
    using SYSCTL_DC8_ADC0AIN15  = regbits< type, 15,  1 >;  /**< ADC Module 0 AIN15 Pin Present  */
    using SYSCTL_DC8_ADC1AIN0   = regbits< type, 16,  1 >;  /**< ADC Module 1 AIN0 Pin Present   */
    using SYSCTL_DC8_ADC1AIN1   = regbits< type, 17,  1 >;  /**< ADC Module 1 AIN1 Pin Present   */
    using SYSCTL_DC8_ADC1AIN2   = regbits< type, 18,  1 >;  /**< ADC Module 1 AIN2 Pin Present   */
    using SYSCTL_DC8_ADC1AIN3   = regbits< type, 19,  1 >;  /**< ADC Module 1 AIN3 Pin Present   */
    using SYSCTL_DC8_ADC1AIN4   = regbits< type, 20,  1 >;  /**< ADC Module 1 AIN4 Pin Present   */
    using SYSCTL_DC8_ADC1AIN5   = regbits< type, 21,  1 >;  /**< ADC Module 1 AIN5 Pin Present   */
    using SYSCTL_DC8_ADC1AIN6   = regbits< type, 22,  1 >;  /**< ADC Module 1 AIN6 Pin Present   */
    using SYSCTL_DC8_ADC1AIN7   = regbits< type, 23,  1 >;  /**< ADC Module 1 AIN7 Pin Present   */
    using SYSCTL_DC8_ADC1AIN8   = regbits< type, 24,  1 >;  /**< ADC Module 1 AIN8 Pin Present   */
    using SYSCTL_DC8_ADC1AIN9   = regbits< type, 25,  1 >;  /**< ADC Module 1 AIN9 Pin Present   */
    using SYSCTL_DC8_ADC1AIN10  = regbits< type, 26,  1 >;  /**< ADC Module 1 AIN10 Pin Present  */
    using SYSCTL_DC8_ADC1AIN11  = regbits< type, 27,  1 >;  /**< ADC Module 1 AIN11 Pin Present  */
    using SYSCTL_DC8_ADC1AIN12  = regbits< type, 28,  1 >;  /**< ADC Module 1 AIN12 Pin Present  */
    using SYSCTL_DC8_ADC1AIN13  = regbits< type, 29,  1 >;  /**< ADC Module 1 AIN13 Pin Present  */
    using SYSCTL_DC8_ADC1AIN14  = regbits< type, 30,  1 >;  /**< ADC Module 1 AIN14 Pin Present  */
    using SYSCTL_DC8_ADC1AIN15  = regbits< type, 31,  1 >;  /**< ADC Module 1 AIN15 Pin Present  */
  };

  /**
   * Brown-Out Reset Control
   */
  struct PBORCTL
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PBORCTL_BOR1  = regbits< type,  1,  1 >;  /**< VDD under BOR1 Event Action  */
    using SYSCTL_PBORCTL_BOR0  = regbits< type,  2,  1 >;  /**< VDD under BOR0 Event Action  */
  };

  /**
   * Software Reset Control 0
   */
  struct SRCR0
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRCR0_WDT0  = regbits< type,  3,  1 >;  /**< WDT0 Reset Control  */
    using SYSCTL_SRCR0_HIB   = regbits< type,  6,  1 >;  /**< HIB Reset Control   */
    using SYSCTL_SRCR0_ADC0  = regbits< type, 16,  1 >;  /**< ADC0 Reset Control  */
    using SYSCTL_SRCR0_ADC1  = regbits< type, 17,  1 >;  /**< ADC1 Reset Control  */
    using SYSCTL_SRCR0_CAN0  = regbits< type, 24,  1 >;  /**< CAN0 Reset Control  */
    using SYSCTL_SRCR0_WDT1  = regbits< type, 28,  1 >;  /**< WDT1 Reset Control  */
  };

  /**
   * Software Reset Control 1
   */
  struct SRCR1
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRCR1_UART0   = regbits< type,  0,  1 >;  /**< UART0 Reset Control          */
    using SYSCTL_SRCR1_UART1   = regbits< type,  1,  1 >;  /**< UART1 Reset Control          */
    using SYSCTL_SRCR1_UART2   = regbits< type,  2,  1 >;  /**< UART2 Reset Control          */
    using SYSCTL_SRCR1_SSI0    = regbits< type,  4,  1 >;  /**< SSI0 Reset Control           */
    using SYSCTL_SRCR1_SSI1    = regbits< type,  5,  1 >;  /**< SSI1 Reset Control           */
    using SYSCTL_SRCR1_I2C0    = regbits< type, 12,  1 >;  /**< I2C0 Reset Control           */
    using SYSCTL_SRCR1_I2C1    = regbits< type, 14,  1 >;  /**< I2C1 Reset Control           */
    using SYSCTL_SRCR1_TIMER0  = regbits< type, 16,  1 >;  /**< Timer 0 Reset Control        */
    using SYSCTL_SRCR1_TIMER1  = regbits< type, 17,  1 >;  /**< Timer 1 Reset Control        */
    using SYSCTL_SRCR1_TIMER2  = regbits< type, 18,  1 >;  /**< Timer 2 Reset Control        */
    using SYSCTL_SRCR1_TIMER3  = regbits< type, 19,  1 >;  /**< Timer 3 Reset Control        */
    using SYSCTL_SRCR1_COMP0   = regbits< type, 24,  1 >;  /**< Analog Comp 0 Reset Control  */
    using SYSCTL_SRCR1_COMP1   = regbits< type, 25,  1 >;  /**< Analog Comp 1 Reset Control  */
    using SYSCTL_SRCR1_COMP2   = regbits< type, 26,  1 >;  /**< Analog Comp 2 Reset Control  */
  };

  /**
   * Software Reset Control 2
   */
  struct SRCR2
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRCR2_GPIOA  = regbits< type,  0,  1 >;  /**< Port A Reset Control     */
    using SYSCTL_SRCR2_GPIOB  = regbits< type,  1,  1 >;  /**< Port B Reset Control     */
    using SYSCTL_SRCR2_GPIOC  = regbits< type,  2,  1 >;  /**< Port C Reset Control     */
    using SYSCTL_SRCR2_GPIOD  = regbits< type,  3,  1 >;  /**< Port D Reset Control     */
    using SYSCTL_SRCR2_GPIOE  = regbits< type,  4,  1 >;  /**< Port E Reset Control     */
    using SYSCTL_SRCR2_GPIOF  = regbits< type,  5,  1 >;  /**< Port F Reset Control     */
    using SYSCTL_SRCR2_GPIOG  = regbits< type,  6,  1 >;  /**< Port G Reset Control     */
    using SYSCTL_SRCR2_GPIOH  = regbits< type,  7,  1 >;  /**< Port H Reset Control     */
    using SYSCTL_SRCR2_GPIOJ  = regbits< type,  8,  1 >;  /**< Port J Reset Control     */
    using SYSCTL_SRCR2_UDMA   = regbits< type, 13,  1 >;  /**< Micro-DMA Reset Control  */
    using SYSCTL_SRCR2_USB0   = regbits< type, 16,  1 >;  /**< USB0 Reset Control       */
  };

  /**
   * Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RIS_MOFRIS      = regbits< type,  3,  1 >;  /**< Main Oscillator Fault Raw Interrupt Status  */
    using SYSCTL_RIS_PLLLRIS     = regbits< type,  6,  1 >;  /**< PLL Lock Raw Interrupt Status               */
    using SYSCTL_RIS_USBPLLLRIS  = regbits< type,  7,  1 >;  /**< USB PLL Lock Raw Interrupt Status           */
    using SYSCTL_RIS_MOSCPUPRIS  = regbits< type,  8,  1 >;  /**< MOSC Power Up Raw Interrupt Status          */
    using SYSCTL_RIS_VDDARIS     = regbits< type, 10,  1 >;  /**< VDDA Power OK Event Raw Interrupt Status    */
  };

  /**
   * Interrupt Mask Control
   */
  struct IMC
  : public reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_IMC_MOFIM      = regbits< type,  3,  1 >;  /**< Main Oscillator Fault Interrupt Mask  */
    using SYSCTL_IMC_PLLLIM     = regbits< type,  6,  1 >;  /**< PLL Lock Interrupt Mask               */
    using SYSCTL_IMC_USBPLLLIM  = regbits< type,  7,  1 >;  /**< USB PLL Lock Interrupt Mask           */
    using SYSCTL_IMC_MOSCPUPIM  = regbits< type,  8,  1 >;  /**< MOSC Power Up Interrupt Mask          */
    using SYSCTL_IMC_VDDAIM     = regbits< type, 10,  1 >;  /**< VDDA Power OK Interrupt Mask          */
  };

  /**
   * Masked Interrupt Status and Clear
   */
  struct MISC
  : public reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_MISC_MOFMIS      = regbits< type,  3,  1 >;  /**< Main Oscillator Fault Masked Interrupt Status  */
    using SYSCTL_MISC_PLLLMIS     = regbits< type,  6,  1 >;  /**< PLL Lock Masked Interrupt Status               */
    using SYSCTL_MISC_USBPLLLMIS  = regbits< type,  7,  1 >;  /**< USB PLL Lock Masked Interrupt Status           */
    using SYSCTL_MISC_MOSCPUPMIS  = regbits< type,  8,  1 >;  /**< MOSC Power Up Masked Interrupt Status          */
    using SYSCTL_MISC_VDDAMIS     = regbits< type, 10,  1 >;  /**< VDDA Power OK Masked Interrupt Status          */
  };

  /**
   * Reset Cause
   */
  struct RESC
  : public reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RESC_EXT       = regbits< type,  0,  1 >;  /**< External Reset          */
    using SYSCTL_RESC_POR       = regbits< type,  1,  1 >;  /**< Power-On Reset          */
    using SYSCTL_RESC_BOR       = regbits< type,  2,  1 >;  /**< Brown-Out Reset         */
    using SYSCTL_RESC_WDT0      = regbits< type,  3,  1 >;  /**< Watchdog Timer 0 Reset  */
    using SYSCTL_RESC_SW        = regbits< type,  4,  1 >;  /**< Software Reset          */
    using SYSCTL_RESC_WDT1      = regbits< type,  5,  1 >;  /**< Watchdog Timer 1 Reset  */
    using SYSCTL_RESC_MOSCFAIL  = regbits< type, 16,  1 >;  /**< MOSC Failure Reset      */
  };

  /**
   * Run-Mode Clock Configuration
   */
  struct RCC
  : public reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCC_MOSCDIS    = regbits< type,  0,  1 >;  /**< Main Oscillator Disable      */
    using SYSCTL_RCC_OSCSRC     = regbits< type,  4,  2 >;  /**< Oscillator Source            */
    using SYSCTL_RCC_XTAL       = regbits< type,  6,  5 >;  /**< Crystal Value                */
    using SYSCTL_RCC_BYPASS     = regbits< type, 11,  1 >;  /**< PLL Bypass                   */
    using SYSCTL_RCC_PWRDN      = regbits< type, 13,  1 >;  /**< PLL Power Down               */
    using SYSCTL_RCC_USESYSDIV  = regbits< type, 22,  1 >;  /**< Enable System Clock Divider  */
    using SYSCTL_RCC_SYSDIV     = regbits< type, 23,  4 >;  /**< System Clock Divisor         */
    using SYSCTL_RCC_ACG        = regbits< type, 27,  1 >;  /**< Auto Clock Gating            */
  };

  /**
   * GPIO High-Performance Bus Control
   */
  struct GPIOHBCTL
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_GPIOHBCTL_PORTA  = regbits< type,  0,  1 >;  /**< Port A Advanced High-Performance Bus  */
    using SYSCTL_GPIOHBCTL_PORTB  = regbits< type,  1,  1 >;  /**< Port B Advanced High-Performance Bus  */
    using SYSCTL_GPIOHBCTL_PORTC  = regbits< type,  2,  1 >;  /**< Port C Advanced High-Performance Bus  */
    using SYSCTL_GPIOHBCTL_PORTD  = regbits< type,  3,  1 >;  /**< Port D Advanced High-Performance Bus  */
    using SYSCTL_GPIOHBCTL_PORTE  = regbits< type,  4,  1 >;  /**< Port E Advanced High-Performance Bus  */
    using SYSCTL_GPIOHBCTL_PORTF  = regbits< type,  5,  1 >;  /**< Port F Advanced High-Performance Bus  */
    using SYSCTL_GPIOHBCTL_PORTG  = regbits< type,  6,  1 >;  /**< Port G Advanced High-Performance Bus  */
    using SYSCTL_GPIOHBCTL_PORTH  = regbits< type,  7,  1 >;  /**< Port H Advanced High-Performance Bus  */
    using SYSCTL_GPIOHBCTL_PORTJ  = regbits< type,  8,  1 >;  /**< Port J Advanced High-Performance Bus  */
  };

  /**
   * Run-Mode Clock Configuration 2
   */
  struct RCC2
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCC2_OSCSRC2     = regbits< type,  4,  3 >;  /**< Oscillator Source 2                */
    using SYSCTL_RCC2_BYPASS2     = regbits< type, 11,  1 >;  /**< PLL Bypass 2                       */
    using SYSCTL_RCC2_PWRDN2      = regbits< type, 13,  1 >;  /**< Power-Down PLL 2                   */
    using SYSCTL_RCC2_USBPWRDN    = regbits< type, 14,  1 >;  /**< Power-Down USB PLL                 */
    using SYSCTL_RCC2_SYSDIV2LSB  = regbits< type, 22,  1 >;  /**< Additional LSB for SYSDIV2         */
    using SYSCTL_RCC2_SYSDIV2     = regbits< type, 23,  6 >;  /**< System Clock Divisor 2             */
    using SYSCTL_RCC2_DIV400      = regbits< type, 30,  1 >;  /**< Divide PLL as 400 MHz vs. 200 MHz  */
    using SYSCTL_RCC2_USERCC2     = regbits< type, 31,  1 >;  /**< Use RCC2                           */
  };

  /**
   * Main Oscillator Control
   */
  struct MOSCCTL
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_MOSCCTL_CVAL    = regbits< type,  0,  1 >;  /**< Clock Validation for MOSC  */
    using SYSCTL_MOSCCTL_MOSCIM  = regbits< type,  1,  1 >;  /**< MOSC Failure Action        */
    using SYSCTL_MOSCCTL_NOXTAL  = regbits< type,  2,  1 >;  /**< No Crystal Connected       */
  };

  /**
   * Run Mode Clock Gating Control Register 0
   */
  struct RCGC0
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGC0_WDT0     = regbits< type,  3,  1 >;  /**< WDT0 Clock Gating Control  */
    using SYSCTL_RCGC0_HIB      = regbits< type,  6,  1 >;  /**< HIB Clock Gating Control   */
    using SYSCTL_RCGC0_ADC0SPD  = regbits< type,  8,  2 >;  /**< ADC0 Sample Speed          */
    using SYSCTL_RCGC0_ADC1SPD  = regbits< type, 10,  2 >;  /**< ADC1 Sample Speed          */
    using SYSCTL_RCGC0_ADC0     = regbits< type, 16,  1 >;  /**< ADC0 Clock Gating Control  */
    using SYSCTL_RCGC0_ADC1     = regbits< type, 17,  1 >;  /**< ADC1 Clock Gating Control  */
    using SYSCTL_RCGC0_CAN0     = regbits< type, 24,  1 >;  /**< CAN0 Clock Gating Control  */
    using SYSCTL_RCGC0_WDT1     = regbits< type, 28,  1 >;  /**< WDT1 Clock Gating Control  */
  };

  /**
   * Run Mode Clock Gating Control Register 1
   */
  struct RCGC1
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGC1_UART0   = regbits< type,  0,  1 >;  /**< UART0 Clock Gating Control        */
    using SYSCTL_RCGC1_UART1   = regbits< type,  1,  1 >;  /**< UART1 Clock Gating Control        */
    using SYSCTL_RCGC1_UART2   = regbits< type,  2,  1 >;  /**< UART2 Clock Gating Control        */
    using SYSCTL_RCGC1_SSI0    = regbits< type,  4,  1 >;  /**< SSI0 Clock Gating Control         */
    using SYSCTL_RCGC1_SSI1    = regbits< type,  5,  1 >;  /**< SSI1 Clock Gating Control         */
    using SYSCTL_RCGC1_I2C0    = regbits< type, 12,  1 >;  /**< I2C0 Clock Gating Control         */
    using SYSCTL_RCGC1_I2C1    = regbits< type, 14,  1 >;  /**< I2C1 Clock Gating Control         */
    using SYSCTL_RCGC1_TIMER0  = regbits< type, 16,  1 >;  /**< Timer 0 Clock Gating Control      */
    using SYSCTL_RCGC1_TIMER1  = regbits< type, 17,  1 >;  /**< Timer 1 Clock Gating Control      */
    using SYSCTL_RCGC1_TIMER2  = regbits< type, 18,  1 >;  /**< Timer 2 Clock Gating Control      */
    using SYSCTL_RCGC1_TIMER3  = regbits< type, 19,  1 >;  /**< Timer 3 Clock Gating Control      */
    using SYSCTL_RCGC1_COMP0   = regbits< type, 24,  1 >;  /**< Analog Comparator 0 Clock Gating  */
    using SYSCTL_RCGC1_COMP1   = regbits< type, 25,  1 >;  /**< Analog Comparator 1 Clock Gating  */
    using SYSCTL_RCGC1_COMP2   = regbits< type, 26,  1 >;  /**< Analog Comparator 2 Clock Gating  */
  };

  /**
   * Run Mode Clock Gating Control Register 2
   */
  struct RCGC2
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGC2_GPIOA  = regbits< type,  0,  1 >;  /**< Port A Clock Gating Control     */
    using SYSCTL_RCGC2_GPIOB  = regbits< type,  1,  1 >;  /**< Port B Clock Gating Control     */
    using SYSCTL_RCGC2_GPIOC  = regbits< type,  2,  1 >;  /**< Port C Clock Gating Control     */
    using SYSCTL_RCGC2_GPIOD  = regbits< type,  3,  1 >;  /**< Port D Clock Gating Control     */
    using SYSCTL_RCGC2_GPIOE  = regbits< type,  4,  1 >;  /**< Port E Clock Gating Control     */
    using SYSCTL_RCGC2_GPIOF  = regbits< type,  5,  1 >;  /**< Port F Clock Gating Control     */
    using SYSCTL_RCGC2_GPIOG  = regbits< type,  6,  1 >;  /**< Port G Clock Gating Control     */
    using SYSCTL_RCGC2_GPIOH  = regbits< type,  7,  1 >;  /**< Port H Clock Gating Control     */
    using SYSCTL_RCGC2_GPIOJ  = regbits< type,  8,  1 >;  /**< Port J Clock Gating Control     */
    using SYSCTL_RCGC2_UDMA   = regbits< type, 13,  1 >;  /**< Micro-DMA Clock Gating Control  */
    using SYSCTL_RCGC2_USB0   = regbits< type, 16,  1 >;  /**< USB0 Clock Gating Control       */
  };

  /**
   * Sleep Mode Clock Gating Control Register 0
   */
  struct SCGC0
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGC0_WDT0  = regbits< type,  3,  1 >;  /**< WDT0 Clock Gating Control  */
    using SYSCTL_SCGC0_HIB   = regbits< type,  6,  1 >;  /**< HIB Clock Gating Control   */
    using SYSCTL_SCGC0_ADC0  = regbits< type, 16,  1 >;  /**< ADC0 Clock Gating Control  */
    using SYSCTL_SCGC0_ADC1  = regbits< type, 17,  1 >;  /**< ADC1 Clock Gating Control  */
    using SYSCTL_SCGC0_CAN0  = regbits< type, 24,  1 >;  /**< CAN0 Clock Gating Control  */
    using SYSCTL_SCGC0_WDT1  = regbits< type, 28,  1 >;  /**< WDT1 Clock Gating Control  */
  };

  /**
   * Sleep Mode Clock Gating Control Register 1
   */
  struct SCGC1
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGC1_UART0   = regbits< type,  0,  1 >;  /**< UART0 Clock Gating Control        */
    using SYSCTL_SCGC1_UART1   = regbits< type,  1,  1 >;  /**< UART1 Clock Gating Control        */
    using SYSCTL_SCGC1_UART2   = regbits< type,  2,  1 >;  /**< UART2 Clock Gating Control        */
    using SYSCTL_SCGC1_SSI0    = regbits< type,  4,  1 >;  /**< SSI0 Clock Gating Control         */
    using SYSCTL_SCGC1_SSI1    = regbits< type,  5,  1 >;  /**< SSI1 Clock Gating Control         */
    using SYSCTL_SCGC1_I2C0    = regbits< type, 12,  1 >;  /**< I2C0 Clock Gating Control         */
    using SYSCTL_SCGC1_I2C1    = regbits< type, 14,  1 >;  /**< I2C1 Clock Gating Control         */
    using SYSCTL_SCGC1_TIMER0  = regbits< type, 16,  1 >;  /**< Timer 0 Clock Gating Control      */
    using SYSCTL_SCGC1_TIMER1  = regbits< type, 17,  1 >;  /**< Timer 1 Clock Gating Control      */
    using SYSCTL_SCGC1_TIMER2  = regbits< type, 18,  1 >;  /**< Timer 2 Clock Gating Control      */
    using SYSCTL_SCGC1_TIMER3  = regbits< type, 19,  1 >;  /**< Timer 3 Clock Gating Control      */
    using SYSCTL_SCGC1_COMP0   = regbits< type, 24,  1 >;  /**< Analog Comparator 0 Clock Gating  */
    using SYSCTL_SCGC1_COMP1   = regbits< type, 25,  1 >;  /**< Analog Comparator 1 Clock Gating  */
    using SYSCTL_SCGC1_COMP2   = regbits< type, 26,  1 >;  /**< Analog Comparator 2 Clock Gating  */
  };

  /**
   * Sleep Mode Clock Gating Control Register 2
   */
  struct SCGC2
  : public reg< uint32_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGC2_GPIOA  = regbits< type,  0,  1 >;  /**< Port A Clock Gating Control     */
    using SYSCTL_SCGC2_GPIOB  = regbits< type,  1,  1 >;  /**< Port B Clock Gating Control     */
    using SYSCTL_SCGC2_GPIOC  = regbits< type,  2,  1 >;  /**< Port C Clock Gating Control     */
    using SYSCTL_SCGC2_GPIOD  = regbits< type,  3,  1 >;  /**< Port D Clock Gating Control     */
    using SYSCTL_SCGC2_GPIOE  = regbits< type,  4,  1 >;  /**< Port E Clock Gating Control     */
    using SYSCTL_SCGC2_GPIOF  = regbits< type,  5,  1 >;  /**< Port F Clock Gating Control     */
    using SYSCTL_SCGC2_GPIOG  = regbits< type,  6,  1 >;  /**< Port G Clock Gating Control     */
    using SYSCTL_SCGC2_GPIOH  = regbits< type,  7,  1 >;  /**< Port H Clock Gating Control     */
    using SYSCTL_SCGC2_GPIOJ  = regbits< type,  8,  1 >;  /**< Port J Clock Gating Control     */
    using SYSCTL_SCGC2_UDMA   = regbits< type, 13,  1 >;  /**< Micro-DMA Clock Gating Control  */
    using SYSCTL_SCGC2_USB0   = regbits< type, 16,  1 >;  /**< USB0 Clock Gating Control       */
  };

  /**
   * Deep Sleep Mode Clock Gating Control Register 0
   */
  struct DCGC0
  : public reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGC0_WDT0  = regbits< type,  3,  1 >;  /**< WDT0 Clock Gating Control  */
    using SYSCTL_DCGC0_HIB   = regbits< type,  6,  1 >;  /**< HIB Clock Gating Control   */
    using SYSCTL_DCGC0_ADC0  = regbits< type, 16,  1 >;  /**< ADC0 Clock Gating Control  */
    using SYSCTL_DCGC0_ADC1  = regbits< type, 17,  1 >;  /**< ADC1 Clock Gating Control  */
    using SYSCTL_DCGC0_CAN0  = regbits< type, 24,  1 >;  /**< CAN0 Clock Gating Control  */
    using SYSCTL_DCGC0_WDT1  = regbits< type, 28,  1 >;  /**< WDT1 Clock Gating Control  */
  };

  /**
   * Deep-Sleep Mode Clock Gating Control Register 1
   */
  struct DCGC1
  : public reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGC1_UART0   = regbits< type,  0,  1 >;  /**< UART0 Clock Gating Control        */
    using SYSCTL_DCGC1_UART1   = regbits< type,  1,  1 >;  /**< UART1 Clock Gating Control        */
    using SYSCTL_DCGC1_UART2   = regbits< type,  2,  1 >;  /**< UART2 Clock Gating Control        */
    using SYSCTL_DCGC1_SSI0    = regbits< type,  4,  1 >;  /**< SSI0 Clock Gating Control         */
    using SYSCTL_DCGC1_SSI1    = regbits< type,  5,  1 >;  /**< SSI1 Clock Gating Control         */
    using SYSCTL_DCGC1_I2C0    = regbits< type, 12,  1 >;  /**< I2C0 Clock Gating Control         */
    using SYSCTL_DCGC1_I2C1    = regbits< type, 14,  1 >;  /**< I2C1 Clock Gating Control         */
    using SYSCTL_DCGC1_TIMER0  = regbits< type, 16,  1 >;  /**< Timer 0 Clock Gating Control      */
    using SYSCTL_DCGC1_TIMER1  = regbits< type, 17,  1 >;  /**< Timer 1 Clock Gating Control      */
    using SYSCTL_DCGC1_TIMER2  = regbits< type, 18,  1 >;  /**< Timer 2 Clock Gating Control      */
    using SYSCTL_DCGC1_TIMER3  = regbits< type, 19,  1 >;  /**< Timer 3 Clock Gating Control      */
    using SYSCTL_DCGC1_COMP0   = regbits< type, 24,  1 >;  /**< Analog Comparator 0 Clock Gating  */
    using SYSCTL_DCGC1_COMP1   = regbits< type, 25,  1 >;  /**< Analog Comparator 1 Clock Gating  */
    using SYSCTL_DCGC1_COMP2   = regbits< type, 26,  1 >;  /**< Analog Comparator 2 Clock Gating  */
  };

  /**
   * Deep Sleep Mode Clock Gating Control Register 2
   */
  struct DCGC2
  : public reg< uint32_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGC2_GPIOA  = regbits< type,  0,  1 >;  /**< Port A Clock Gating Control     */
    using SYSCTL_DCGC2_GPIOB  = regbits< type,  1,  1 >;  /**< Port B Clock Gating Control     */
    using SYSCTL_DCGC2_GPIOC  = regbits< type,  2,  1 >;  /**< Port C Clock Gating Control     */
    using SYSCTL_DCGC2_GPIOD  = regbits< type,  3,  1 >;  /**< Port D Clock Gating Control     */
    using SYSCTL_DCGC2_GPIOE  = regbits< type,  4,  1 >;  /**< Port E Clock Gating Control     */
    using SYSCTL_DCGC2_GPIOF  = regbits< type,  5,  1 >;  /**< Port F Clock Gating Control     */
    using SYSCTL_DCGC2_GPIOG  = regbits< type,  6,  1 >;  /**< Port G Clock Gating Control     */
    using SYSCTL_DCGC2_GPIOH  = regbits< type,  7,  1 >;  /**< Port H Clock Gating Control     */
    using SYSCTL_DCGC2_GPIOJ  = regbits< type,  8,  1 >;  /**< Port J Clock Gating Control     */
    using SYSCTL_DCGC2_UDMA   = regbits< type, 13,  1 >;  /**< Micro-DMA Clock Gating Control  */
    using SYSCTL_DCGC2_USB0   = regbits< type, 16,  1 >;  /**< USB0 Clock Gating Control       */
  };

  /**
   * Deep Sleep Clock Configuration
   */
  struct DSLPCLKCFG
  : public reg< uint32_t, base_addr + 0x00000144, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DSLPCLKCFG_O  = regbits< type,  4,  3 >;  /**< Clock Source            */
    using SYSCTL_DSLPCLKCFG_D  = regbits< type, 23,  6 >;  /**< Divider Field Override  */
  };

  /**
   * System Properties
   */
  struct SYSPROP
  : public reg< uint32_t, base_addr + 0x0000014c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000014c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SYSPROP_FPU  = regbits< type,  0,  1 >;  /**< FPU Present  */
  };

  /**
   * Precision Internal Oscillator Calibration
   */
  struct PIOSCCAL
  : public reg< uint32_t, base_addr + 0x00000150, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000150, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PIOSCCAL_UT      = regbits< type,  0,  7 >;  /**< User Trim Value      */
    using SYSCTL_PIOSCCAL_UPDATE  = regbits< type,  8,  1 >;  /**< Update Trim          */
    using SYSCTL_PIOSCCAL_CAL     = regbits< type,  9,  1 >;  /**< Start Calibration    */
    using SYSCTL_PIOSCCAL_UTEN    = regbits< type, 31,  1 >;  /**< Use User Trim Value  */
  };

  /**
   * Precision Internal Oscillator Statistics
   */
  struct PIOSCSTAT
  : public reg< uint32_t, base_addr + 0x00000154, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000154, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PIOSCSTAT_CT  = regbits< type,  0,  7 >;  /**< Calibration Trim Value  */
    using SYSCTL_PIOSCSTAT_CR  = regbits< type,  8,  2 >;  /**< Calibration Result      */
    using SYSCTL_PIOSCSTAT_DT  = regbits< type, 16,  7 >;  /**< Default Trim Value      */
  };

  /**
   * PLL Frequency 0
   */
  struct PLLFREQ0
  : public reg< uint32_t, base_addr + 0x00000160, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PLLFREQ0_MINT   = regbits< type,  0, 10 >;  /**< PLL M Integer Value     */
    using SYSCTL_PLLFREQ0_MFRAC  = regbits< type, 10, 10 >;  /**< PLL M Fractional Value  */
  };

  /**
   * PLL Frequency 1
   */
  struct PLLFREQ1
  : public reg< uint32_t, base_addr + 0x00000164, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PLLFREQ1_N  = regbits< type,  0,  5 >;  /**< PLL N Value  */
    using SYSCTL_PLLFREQ1_Q  = regbits< type,  8,  5 >;  /**< PLL Q Value  */
  };

  /**
   * PLL Status
   */
  struct PLLSTAT
  : public reg< uint32_t, base_addr + 0x00000168, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000168, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PLLSTAT_LOCK  = regbits< type,  0,  1 >;  /**< PLL Lock  */
  };

  /**
   * Device Capabilities 9 ADC Digital Comparators
   */
  struct DC9
  : public reg< uint32_t, base_addr + 0x00000190, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000190, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DC9_ADC0DC0  = regbits< type,  0,  1 >;  /**< ADC0 DC0 Present  */
    using SYSCTL_DC9_ADC0DC1  = regbits< type,  1,  1 >;  /**< ADC0 DC1 Present  */
    using SYSCTL_DC9_ADC0DC2  = regbits< type,  2,  1 >;  /**< ADC0 DC2 Present  */
    using SYSCTL_DC9_ADC0DC3  = regbits< type,  3,  1 >;  /**< ADC0 DC3 Present  */
    using SYSCTL_DC9_ADC0DC4  = regbits< type,  4,  1 >;  /**< ADC0 DC4 Present  */
    using SYSCTL_DC9_ADC0DC5  = regbits< type,  5,  1 >;  /**< ADC0 DC5 Present  */
    using SYSCTL_DC9_ADC0DC6  = regbits< type,  6,  1 >;  /**< ADC0 DC6 Present  */
    using SYSCTL_DC9_ADC0DC7  = regbits< type,  7,  1 >;  /**< ADC0 DC7 Present  */
    using SYSCTL_DC9_ADC1DC0  = regbits< type, 16,  1 >;  /**< ADC1 DC0 Present  */
    using SYSCTL_DC9_ADC1DC1  = regbits< type, 17,  1 >;  /**< ADC1 DC1 Present  */
    using SYSCTL_DC9_ADC1DC2  = regbits< type, 18,  1 >;  /**< ADC1 DC2 Present  */
    using SYSCTL_DC9_ADC1DC3  = regbits< type, 19,  1 >;  /**< ADC1 DC3 Present  */
    using SYSCTL_DC9_ADC1DC4  = regbits< type, 20,  1 >;  /**< ADC1 DC4 Present  */
    using SYSCTL_DC9_ADC1DC5  = regbits< type, 21,  1 >;  /**< ADC1 DC5 Present  */
    using SYSCTL_DC9_ADC1DC6  = regbits< type, 22,  1 >;  /**< ADC1 DC6 Present  */
    using SYSCTL_DC9_ADC1DC7  = regbits< type, 23,  1 >;  /**< ADC1 DC7 Present  */
  };

  /**
   * Non-Volatile Memory Information
   */
  struct NVMSTAT
  : public reg< uint32_t, base_addr + 0x000001a0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000001a0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_NVMSTAT_FWB  = regbits< type,  0,  1 >;  /**< 32 Word Flash Write Buffer Active  */
  };

  /**
   * Watchdog Timer Peripheral Present
   */
  struct PPWD
  : public reg< uint32_t, base_addr + 0x00000300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPWD_P0  = regbits< type,  0,  1 >;  /**< Watchdog Timer 0 Present  */
    using SYSCTL_PPWD_P1  = regbits< type,  1,  1 >;  /**< Watchdog Timer 1 Present  */
  };

  /**
   * Timer Peripheral Present
   */
  struct PPTIMER
  : public reg< uint32_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPTIMER_P0  = regbits< type,  0,  1 >;  /**< Timer 0 Present  */
    using SYSCTL_PPTIMER_P1  = regbits< type,  1,  1 >;  /**< Timer 1 Present  */
    using SYSCTL_PPTIMER_P2  = regbits< type,  2,  1 >;  /**< Timer 2 Present  */
    using SYSCTL_PPTIMER_P3  = regbits< type,  3,  1 >;  /**< Timer 3 Present  */
    using SYSCTL_PPTIMER_P4  = regbits< type,  4,  1 >;  /**< Timer 4 Present  */
    using SYSCTL_PPTIMER_P5  = regbits< type,  5,  1 >;  /**< Timer 5 Present  */
  };

  /**
   * General-Purpose Input/Output Peripheral Present
   */
  struct PPGPIO
  : public reg< uint32_t, base_addr + 0x00000308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPGPIO_P0   = regbits< type,  0,  1 >;  /**< GPIO Port A Present  */
    using SYSCTL_PPGPIO_P1   = regbits< type,  1,  1 >;  /**< GPIO Port B Present  */
    using SYSCTL_PPGPIO_P2   = regbits< type,  2,  1 >;  /**< GPIO Port C Present  */
    using SYSCTL_PPGPIO_P3   = regbits< type,  3,  1 >;  /**< GPIO Port D Present  */
    using SYSCTL_PPGPIO_P4   = regbits< type,  4,  1 >;  /**< GPIO Port E Present  */
    using SYSCTL_PPGPIO_P5   = regbits< type,  5,  1 >;  /**< GPIO Port F Present  */
    using SYSCTL_PPGPIO_P6   = regbits< type,  6,  1 >;  /**< GPIO Port G Present  */
    using SYSCTL_PPGPIO_P7   = regbits< type,  7,  1 >;  /**< GPIO Port H Present  */
    using SYSCTL_PPGPIO_P8   = regbits< type,  8,  1 >;  /**< GPIO Port J Present  */
    using SYSCTL_PPGPIO_P9   = regbits< type,  9,  1 >;  /**< GPIO Port K Present  */
    using SYSCTL_PPGPIO_P10  = regbits< type, 10,  1 >;  /**< GPIO Port L Present  */
    using SYSCTL_PPGPIO_P11  = regbits< type, 11,  1 >;  /**< GPIO Port M Present  */
    using SYSCTL_PPGPIO_P12  = regbits< type, 12,  1 >;  /**< GPIO Port N Present  */
    using SYSCTL_PPGPIO_P13  = regbits< type, 13,  1 >;  /**< GPIO Port P Present  */
    using SYSCTL_PPGPIO_P14  = regbits< type, 14,  1 >;  /**< GPIO Port Q Present  */
  };

  /**
   * Micro Direct Memory Access Peripheral Present
   */
  struct PPDMA
  : public reg< uint32_t, base_addr + 0x0000030c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000030c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPDMA_P0  = regbits< type,  0,  1 >;  /**< uDMA Module Present  */
  };

  /**
   * Hibernation Peripheral Present
   */
  struct PPHIB
  : public reg< uint32_t, base_addr + 0x00000314, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000314, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPHIB_P0  = regbits< type,  0,  1 >;  /**< Hibernation Module Present  */
  };

  /**
   * Universal Asynchronous Receiver/Transmitter Peripheral Present
   */
  struct PPUART
  : public reg< uint32_t, base_addr + 0x00000318, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000318, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPUART_P0  = regbits< type,  0,  1 >;  /**< UART Module 0 Present  */
    using SYSCTL_PPUART_P1  = regbits< type,  1,  1 >;  /**< UART Module 1 Present  */
    using SYSCTL_PPUART_P2  = regbits< type,  2,  1 >;  /**< UART Module 2 Present  */
    using SYSCTL_PPUART_P3  = regbits< type,  3,  1 >;  /**< UART Module 3 Present  */
    using SYSCTL_PPUART_P4  = regbits< type,  4,  1 >;  /**< UART Module 4 Present  */
    using SYSCTL_PPUART_P5  = regbits< type,  5,  1 >;  /**< UART Module 5 Present  */
    using SYSCTL_PPUART_P6  = regbits< type,  6,  1 >;  /**< UART Module 6 Present  */
    using SYSCTL_PPUART_P7  = regbits< type,  7,  1 >;  /**< UART Module 7 Present  */
  };

  /**
   * Synchronous Serial Interface Peripheral Present
   */
  struct PPSSI
  : public reg< uint32_t, base_addr + 0x0000031c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000031c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPSSI_P0  = regbits< type,  0,  1 >;  /**< SSI Module 0 Present  */
    using SYSCTL_PPSSI_P1  = regbits< type,  1,  1 >;  /**< SSI Module 1 Present  */
    using SYSCTL_PPSSI_P2  = regbits< type,  2,  1 >;  /**< SSI Module 2 Present  */
    using SYSCTL_PPSSI_P3  = regbits< type,  3,  1 >;  /**< SSI Module 3 Present  */
  };

  /**
   * Inter-Integrated Circuit Peripheral Present
   */
  struct PPI2C
  : public reg< uint32_t, base_addr + 0x00000320, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000320, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPI2C_P0  = regbits< type,  0,  1 >;  /**< I2C Module 0 Present  */
    using SYSCTL_PPI2C_P1  = regbits< type,  1,  1 >;  /**< I2C Module 1 Present  */
    using SYSCTL_PPI2C_P2  = regbits< type,  2,  1 >;  /**< I2C Module 2 Present  */
    using SYSCTL_PPI2C_P3  = regbits< type,  3,  1 >;  /**< I2C Module 3 Present  */
    using SYSCTL_PPI2C_P4  = regbits< type,  4,  1 >;  /**< I2C Module 4 Present  */
    using SYSCTL_PPI2C_P5  = regbits< type,  5,  1 >;  /**< I2C Module 5 Present  */
  };

  /**
   * Universal Serial Bus Peripheral Present
   */
  struct PPUSB
  : public reg< uint32_t, base_addr + 0x00000328, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000328, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPUSB_P0  = regbits< type,  0,  1 >;  /**< USB Module Present  */
  };

  /**
   * Controller Area Network Peripheral Present
   */
  struct PPCAN
  : public reg< uint32_t, base_addr + 0x00000334, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000334, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPCAN_P0  = regbits< type,  0,  1 >;  /**< CAN Module 0 Present  */
    using SYSCTL_PPCAN_P1  = regbits< type,  1,  1 >;  /**< CAN Module 1 Present  */
  };

  /**
   * Analog-to-Digital Converter Peripheral Present
   */
  struct PPADC
  : public reg< uint32_t, base_addr + 0x00000338, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000338, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPADC_P0  = regbits< type,  0,  1 >;  /**< ADC Module 0 Present  */
    using SYSCTL_PPADC_P1  = regbits< type,  1,  1 >;  /**< ADC Module 1 Present  */
  };

  /**
   * Analog Comparator Peripheral Present
   */
  struct PPACMP
  : public reg< uint32_t, base_addr + 0x0000033c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000033c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPACMP_P0  = regbits< type,  0,  1 >;  /**< Analog Comparator Module Present  */
  };

  /**
   * Pulse Width Modulator Peripheral Present
   */
  struct PPPWM
  : public reg< uint32_t, base_addr + 0x00000340, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000340, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPPWM_P0  = regbits< type,  0,  1 >;  /**< PWM Module 0 Present  */
    using SYSCTL_PPPWM_P1  = regbits< type,  1,  1 >;  /**< PWM Module 1 Present  */
  };

  /**
   * Quadrature Encoder Interface Peripheral Present
   */
  struct PPQEI
  : public reg< uint32_t, base_addr + 0x00000344, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000344, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPQEI_P0  = regbits< type,  0,  1 >;  /**< QEI Module 0 Present  */
    using SYSCTL_PPQEI_P1  = regbits< type,  1,  1 >;  /**< QEI Module 1 Present  */
  };

  /**
   * EEPROM Peripheral Present
   */
  struct PPEEPROM
  : public reg< uint32_t, base_addr + 0x00000358, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000358, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPEEPROM_P0  = regbits< type,  0,  1 >;  /**< EEPROM Module Present  */
  };

  /**
   * Wide Timer Peripheral Present
   */
  struct PPWTIMER
  : public reg< uint32_t, base_addr + 0x0000035c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000035c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PPWTIMER_P0  = regbits< type,  0,  1 >;  /**< Wide Timer 0 Present  */
    using SYSCTL_PPWTIMER_P1  = regbits< type,  1,  1 >;  /**< Wide Timer 1 Present  */
    using SYSCTL_PPWTIMER_P2  = regbits< type,  2,  1 >;  /**< Wide Timer 2 Present  */
    using SYSCTL_PPWTIMER_P3  = regbits< type,  3,  1 >;  /**< Wide Timer 3 Present  */
    using SYSCTL_PPWTIMER_P4  = regbits< type,  4,  1 >;  /**< Wide Timer 4 Present  */
    using SYSCTL_PPWTIMER_P5  = regbits< type,  5,  1 >;  /**< Wide Timer 5 Present  */
  };

  /**
   * Watchdog Timer Software Reset
   */
  struct SRWD
  : public reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRWD_R0  = regbits< type,  0,  1 >;  /**< Watchdog Timer 0 Software Reset  */
    using SYSCTL_SRWD_R1  = regbits< type,  1,  1 >;  /**< Watchdog Timer 1 Software Reset  */
  };

  /**
   * Timer Software Reset
   */
  struct SRTIMER
  : public reg< uint32_t, base_addr + 0x00000504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRTIMER_R0  = regbits< type,  0,  1 >;  /**< Timer 0 Software Reset  */
    using SYSCTL_SRTIMER_R1  = regbits< type,  1,  1 >;  /**< Timer 1 Software Reset  */
    using SYSCTL_SRTIMER_R2  = regbits< type,  2,  1 >;  /**< Timer 2 Software Reset  */
    using SYSCTL_SRTIMER_R3  = regbits< type,  3,  1 >;  /**< Timer 3 Software Reset  */
    using SYSCTL_SRTIMER_R4  = regbits< type,  4,  1 >;  /**< Timer 4 Software Reset  */
    using SYSCTL_SRTIMER_R5  = regbits< type,  5,  1 >;  /**< Timer 5 Software Reset  */
  };

  /**
   * General-Purpose Input/Output Software Reset
   */
  struct SRGPIO
  : public reg< uint32_t, base_addr + 0x00000508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRGPIO_R0  = regbits< type,  0,  1 >;  /**< GPIO Port A Software Reset  */
    using SYSCTL_SRGPIO_R1  = regbits< type,  1,  1 >;  /**< GPIO Port B Software Reset  */
    using SYSCTL_SRGPIO_R2  = regbits< type,  2,  1 >;  /**< GPIO Port C Software Reset  */
    using SYSCTL_SRGPIO_R3  = regbits< type,  3,  1 >;  /**< GPIO Port D Software Reset  */
    using SYSCTL_SRGPIO_R4  = regbits< type,  4,  1 >;  /**< GPIO Port E Software Reset  */
    using SYSCTL_SRGPIO_R5  = regbits< type,  5,  1 >;  /**< GPIO Port F Software Reset  */
    using SYSCTL_SRGPIO_R6  = regbits< type,  6,  1 >;  /**< GPIO Port G Software Reset  */
    using SYSCTL_SRGPIO_R7  = regbits< type,  7,  1 >;  /**< GPIO Port H Software Reset  */
    using SYSCTL_SRGPIO_R8  = regbits< type,  8,  1 >;  /**< GPIO Port J Software Reset  */
    using SYSCTL_SRGPIO_R9  = regbits< type,  9,  1 >;  /**< GPIO Port K Software Reset  */
  };

  /**
   * Micro Direct Memory Access Software Reset
   */
  struct SRDMA
  : public reg< uint32_t, base_addr + 0x0000050c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000050c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRDMA_R0  = regbits< type,  0,  1 >;  /**< uDMA Module Software Reset  */
  };

  /**
   * Hibernation Software Reset
   */
  struct SRHIB
  : public reg< uint32_t, base_addr + 0x00000514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRHIB_R0  = regbits< type,  0,  1 >;  /**< Hibernation Module Software Reset  */
  };

  /**
   * Universal Asynchronous Receiver/Transmitter Software Reset
   */
  struct SRUART
  : public reg< uint32_t, base_addr + 0x00000518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000518, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRUART_R0  = regbits< type,  0,  1 >;  /**< UART Module 0 Software Reset  */
    using SYSCTL_SRUART_R1  = regbits< type,  1,  1 >;  /**< UART Module 1 Software Reset  */
    using SYSCTL_SRUART_R2  = regbits< type,  2,  1 >;  /**< UART Module 2 Software Reset  */
    using SYSCTL_SRUART_R3  = regbits< type,  3,  1 >;  /**< UART Module 3 Software Reset  */
    using SYSCTL_SRUART_R4  = regbits< type,  4,  1 >;  /**< UART Module 4 Software Reset  */
    using SYSCTL_SRUART_R5  = regbits< type,  5,  1 >;  /**< UART Module 5 Software Reset  */
    using SYSCTL_SRUART_R6  = regbits< type,  6,  1 >;  /**< UART Module 6 Software Reset  */
    using SYSCTL_SRUART_R7  = regbits< type,  7,  1 >;  /**< UART Module 7 Software Reset  */
  };

  /**
   * Synchronous Serial Interface Software Reset
   */
  struct SRSSI
  : public reg< uint32_t, base_addr + 0x0000051c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000051c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRSSI_R0  = regbits< type,  0,  1 >;  /**< SSI Module 0 Software Reset  */
    using SYSCTL_SRSSI_R1  = regbits< type,  1,  1 >;  /**< SSI Module 1 Software Reset  */
    using SYSCTL_SRSSI_R2  = regbits< type,  2,  1 >;  /**< SSI Module 2 Software Reset  */
    using SYSCTL_SRSSI_R3  = regbits< type,  3,  1 >;  /**< SSI Module 3 Software Reset  */
  };

  /**
   * Inter-Integrated Circuit Software Reset
   */
  struct SRI2C
  : public reg< uint32_t, base_addr + 0x00000520, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000520, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRI2C_R0  = regbits< type,  0,  1 >;  /**< I2C Module 0 Software Reset  */
    using SYSCTL_SRI2C_R1  = regbits< type,  1,  1 >;  /**< I2C Module 1 Software Reset  */
    using SYSCTL_SRI2C_R2  = regbits< type,  2,  1 >;  /**< I2C Module 2 Software Reset  */
    using SYSCTL_SRI2C_R3  = regbits< type,  3,  1 >;  /**< I2C Module 3 Software Reset  */
    using SYSCTL_SRI2C_R4  = regbits< type,  4,  1 >;  /**< I2C Module 4 Software Reset  */
    using SYSCTL_SRI2C_R5  = regbits< type,  5,  1 >;  /**< I2C Module 5 Software Reset  */
  };

  /**
   * Universal Serial Bus Software Reset
   */
  struct SRUSB
  : public reg< uint32_t, base_addr + 0x00000528, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000528, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRUSB_R0  = regbits< type,  0,  1 >;  /**< USB Module Software Reset  */
  };

  /**
   * Controller Area Network Software Reset
   */
  struct SRCAN
  : public reg< uint32_t, base_addr + 0x00000534, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000534, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRCAN_R0  = regbits< type,  0,  1 >;  /**< CAN Module 0 Software Reset  */
  };

  /**
   * Analog-to-Digital Converter Software Reset
   */
  struct SRADC
  : public reg< uint32_t, base_addr + 0x00000538, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000538, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRADC_R0  = regbits< type,  0,  1 >;  /**< ADC Module 0 Software Reset  */
    using SYSCTL_SRADC_R1  = regbits< type,  1,  1 >;  /**< ADC Module 1 Software Reset  */
  };

  /**
   * Analog Comparator Software Reset
   */
  struct SRACMP
  : public reg< uint32_t, base_addr + 0x0000053c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000053c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRACMP_R0  = regbits< type,  0,  1 >;  /**< Analog Comparator Module 0 Software Reset  */
  };

  /**
   * EEPROM Software Reset
   */
  struct SREEPROM
  : public reg< uint32_t, base_addr + 0x00000558, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000558, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SREEPROM_R0  = regbits< type,  0,  1 >;  /**< EEPROM Module Software Reset  */
  };

  /**
   * Wide Timer Software Reset
   */
  struct SRWTIMER
  : public reg< uint32_t, base_addr + 0x0000055c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000055c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SRWTIMER_R0  = regbits< type,  0,  1 >;  /**< Wide Timer 0 Software Reset  */
    using SYSCTL_SRWTIMER_R1  = regbits< type,  1,  1 >;  /**< Wide Timer 1 Software Reset  */
    using SYSCTL_SRWTIMER_R2  = regbits< type,  2,  1 >;  /**< Wide Timer 2 Software Reset  */
    using SYSCTL_SRWTIMER_R3  = regbits< type,  3,  1 >;  /**< Wide Timer 3 Software Reset  */
    using SYSCTL_SRWTIMER_R4  = regbits< type,  4,  1 >;  /**< Wide Timer 4 Software Reset  */
    using SYSCTL_SRWTIMER_R5  = regbits< type,  5,  1 >;  /**< Wide Timer 5 Software Reset  */
  };

  /**
   * Watchdog Timer Run Mode Clock Gating Control
   */
  struct RCGCWD
  : public reg< uint32_t, base_addr + 0x00000600, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000600, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCWD_R0  = regbits< type,  0,  1 >;  /**< Watchdog Timer 0 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCWD_R1  = regbits< type,  1,  1 >;  /**< Watchdog Timer 1 Run Mode Clock Gating Control  */
  };

  /**
   * Timer Run Mode Clock Gating Control
   */
  struct RCGCTIMER
  : public reg< uint32_t, base_addr + 0x00000604, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000604, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCTIMER_R0  = regbits< type,  0,  1 >;  /**< Timer 0 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCTIMER_R1  = regbits< type,  1,  1 >;  /**< Timer 1 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCTIMER_R2  = regbits< type,  2,  1 >;  /**< Timer 2 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCTIMER_R3  = regbits< type,  3,  1 >;  /**< Timer 3 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCTIMER_R4  = regbits< type,  4,  1 >;  /**< Timer 4 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCTIMER_R5  = regbits< type,  5,  1 >;  /**< Timer 5 Run Mode Clock Gating Control  */
  };

  /**
   * General-Purpose Input/Output Run Mode Clock Gating Control
   */
  struct RCGCGPIO
  : public reg< uint32_t, base_addr + 0x00000608, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000608, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCGPIO_R0  = regbits< type,  0,  1 >;  /**< GPIO Port A Run Mode Clock Gating Control  */
    using SYSCTL_RCGCGPIO_R1  = regbits< type,  1,  1 >;  /**< GPIO Port B Run Mode Clock Gating Control  */
    using SYSCTL_RCGCGPIO_R2  = regbits< type,  2,  1 >;  /**< GPIO Port C Run Mode Clock Gating Control  */
    using SYSCTL_RCGCGPIO_R3  = regbits< type,  3,  1 >;  /**< GPIO Port D Run Mode Clock Gating Control  */
    using SYSCTL_RCGCGPIO_R4  = regbits< type,  4,  1 >;  /**< GPIO Port E Run Mode Clock Gating Control  */
    using SYSCTL_RCGCGPIO_R5  = regbits< type,  5,  1 >;  /**< GPIO Port F Run Mode Clock Gating Control  */
    using SYSCTL_RCGCGPIO_R6  = regbits< type,  6,  1 >;  /**< GPIO Port G Run Mode Clock Gating Control  */
    using SYSCTL_RCGCGPIO_R7  = regbits< type,  7,  1 >;  /**< GPIO Port H Run Mode Clock Gating Control  */
    using SYSCTL_RCGCGPIO_R8  = regbits< type,  8,  1 >;  /**< GPIO Port J Run Mode Clock Gating Control  */
    using SYSCTL_RCGCGPIO_R9  = regbits< type,  9,  1 >;  /**< GPIO Port K Run Mode Clock Gating Control  */
  };

  /**
   * Micro Direct Memory Access Run Mode Clock Gating Control
   */
  struct RCGCDMA
  : public reg< uint32_t, base_addr + 0x0000060c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000060c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCDMA_R0  = regbits< type,  0,  1 >;  /**< uDMA Module Run Mode Clock Gating Control  */
  };

  /**
   * Hibernation Run Mode Clock Gating Control
   */
  struct RCGCHIB
  : public reg< uint32_t, base_addr + 0x00000614, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000614, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCHIB_R0  = regbits< type,  0,  1 >;  /**< Hibernation Module Run Mode Clock Gating Control  */
  };

  /**
   * Universal Asynchronous Receiver/Transmitter Run Mode Clock Gating Control
   */
  struct RCGCUART
  : public reg< uint32_t, base_addr + 0x00000618, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000618, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCUART_R0  = regbits< type,  0,  1 >;  /**< UART Module 0 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCUART_R1  = regbits< type,  1,  1 >;  /**< UART Module 1 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCUART_R2  = regbits< type,  2,  1 >;  /**< UART Module 2 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCUART_R3  = regbits< type,  3,  1 >;  /**< UART Module 3 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCUART_R4  = regbits< type,  4,  1 >;  /**< UART Module 4 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCUART_R5  = regbits< type,  5,  1 >;  /**< UART Module 5 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCUART_R6  = regbits< type,  6,  1 >;  /**< UART Module 6 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCUART_R7  = regbits< type,  7,  1 >;  /**< UART Module 7 Run Mode Clock Gating Control  */
  };

  /**
   * Synchronous Serial Interface Run Mode Clock Gating Control
   */
  struct RCGCSSI
  : public reg< uint32_t, base_addr + 0x0000061c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000061c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCSSI_R0  = regbits< type,  0,  1 >;  /**< SSI Module 0 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCSSI_R1  = regbits< type,  1,  1 >;  /**< SSI Module 1 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCSSI_R2  = regbits< type,  2,  1 >;  /**< SSI Module 2 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCSSI_R3  = regbits< type,  3,  1 >;  /**< SSI Module 3 Run Mode Clock Gating Control  */
  };

  /**
   * Inter-Integrated Circuit Run Mode Clock Gating Control
   */
  struct RCGCI2C
  : public reg< uint32_t, base_addr + 0x00000620, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000620, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCI2C_R0  = regbits< type,  0,  1 >;  /**< I2C Module 0 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCI2C_R1  = regbits< type,  1,  1 >;  /**< I2C Module 1 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCI2C_R2  = regbits< type,  2,  1 >;  /**< I2C Module 2 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCI2C_R3  = regbits< type,  3,  1 >;  /**< I2C Module 3 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCI2C_R4  = regbits< type,  4,  1 >;  /**< I2C Module 4 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCI2C_R5  = regbits< type,  5,  1 >;  /**< I2C Module 5 Run Mode Clock Gating Control  */
  };

  /**
   * Universal Serial Bus Run Mode Clock Gating Control
   */
  struct RCGCUSB
  : public reg< uint32_t, base_addr + 0x00000628, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000628, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCUSB_R0  = regbits< type,  0,  1 >;  /**< USB Module Run Mode Clock Gating Control  */
  };

  /**
   * Controller Area Network Run Mode Clock Gating Control
   */
  struct RCGCCAN
  : public reg< uint32_t, base_addr + 0x00000634, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000634, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCCAN_R0  = regbits< type,  0,  1 >;  /**< CAN Module 0 Run Mode Clock Gating Control  */
  };

  /**
   * Analog-to-Digital Converter Run Mode Clock Gating Control
   */
  struct RCGCADC
  : public reg< uint32_t, base_addr + 0x00000638, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000638, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCADC_R0  = regbits< type,  0,  1 >;  /**< ADC Module 0 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCADC_R1  = regbits< type,  1,  1 >;  /**< ADC Module 1 Run Mode Clock Gating Control  */
  };

  /**
   * Analog Comparator Run Mode Clock Gating Control
   */
  struct RCGCACMP
  : public reg< uint32_t, base_addr + 0x0000063c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000063c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCACMP_R0  = regbits< type,  0,  1 >;  /**< Analog Comparator Module 0 Run Mode Clock Gating Control  */
  };

  /**
   * EEPROM Run Mode Clock Gating Control
   */
  struct RCGCEEPROM
  : public reg< uint32_t, base_addr + 0x00000658, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000658, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCEEPROM_R0  = regbits< type,  0,  1 >;  /**< EEPROM Module Run Mode Clock Gating Control  */
  };

  /**
   * Wide Timer Run Mode Clock Gating Control
   */
  struct RCGCWTIMER
  : public reg< uint32_t, base_addr + 0x0000065c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000065c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_RCGCWTIMER_R0  = regbits< type,  0,  1 >;  /**< Wide Timer 0 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCWTIMER_R1  = regbits< type,  1,  1 >;  /**< Wide Timer 1 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCWTIMER_R2  = regbits< type,  2,  1 >;  /**< Wide Timer 2 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCWTIMER_R3  = regbits< type,  3,  1 >;  /**< Wide Timer 3 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCWTIMER_R4  = regbits< type,  4,  1 >;  /**< Wide Timer 4 Run Mode Clock Gating Control  */
    using SYSCTL_RCGCWTIMER_R5  = regbits< type,  5,  1 >;  /**< Wide Timer 5 Run Mode Clock Gating Control  */
  };

  /**
   * Watchdog Timer Sleep Mode Clock Gating Control
   */
  struct SCGCWD
  : public reg< uint32_t, base_addr + 0x00000700, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000700, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCWD_S0  = regbits< type,  0,  1 >;  /**< Watchdog Timer 0 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCWD_S1  = regbits< type,  1,  1 >;  /**< Watchdog Timer 1 Sleep Mode Clock Gating Control  */
  };

  /**
   * Timer Sleep Mode Clock Gating Control
   */
  struct SCGCTIMER
  : public reg< uint32_t, base_addr + 0x00000704, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000704, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCTIMER_S0  = regbits< type,  0,  1 >;  /**< Timer 0 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCTIMER_S1  = regbits< type,  1,  1 >;  /**< Timer 1 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCTIMER_S2  = regbits< type,  2,  1 >;  /**< Timer 2 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCTIMER_S3  = regbits< type,  3,  1 >;  /**< Timer 3 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCTIMER_S4  = regbits< type,  4,  1 >;  /**< Timer 4 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCTIMER_S5  = regbits< type,  5,  1 >;  /**< Timer 5 Sleep Mode Clock Gating Control  */
  };

  /**
   * General-Purpose Input/Output Sleep Mode Clock Gating Control
   */
  struct SCGCGPIO
  : public reg< uint32_t, base_addr + 0x00000708, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000708, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCGPIO_S0  = regbits< type,  0,  1 >;  /**< GPIO Port A Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCGPIO_S1  = regbits< type,  1,  1 >;  /**< GPIO Port B Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCGPIO_S2  = regbits< type,  2,  1 >;  /**< GPIO Port C Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCGPIO_S3  = regbits< type,  3,  1 >;  /**< GPIO Port D Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCGPIO_S4  = regbits< type,  4,  1 >;  /**< GPIO Port E Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCGPIO_S5  = regbits< type,  5,  1 >;  /**< GPIO Port F Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCGPIO_S6  = regbits< type,  6,  1 >;  /**< GPIO Port G Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCGPIO_S7  = regbits< type,  7,  1 >;  /**< GPIO Port H Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCGPIO_S8  = regbits< type,  8,  1 >;  /**< GPIO Port J Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCGPIO_S9  = regbits< type,  9,  1 >;  /**< GPIO Port K Sleep Mode Clock Gating Control  */
  };

  /**
   * Micro Direct Memory Access Sleep Mode Clock Gating Control
   */
  struct SCGCDMA
  : public reg< uint32_t, base_addr + 0x0000070c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000070c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCDMA_S0  = regbits< type,  0,  1 >;  /**< uDMA Module Sleep Mode Clock Gating Control  */
  };

  /**
   * Hibernation Sleep Mode Clock Gating Control
   */
  struct SCGCHIB
  : public reg< uint32_t, base_addr + 0x00000714, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000714, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCHIB_S0  = regbits< type,  0,  1 >;  /**< Hibernation Module Sleep Mode Clock Gating Control  */
  };

  /**
   * Universal Asynchronous Receiver/Transmitter Sleep Mode Clock Gating Control
   */
  struct SCGCUART
  : public reg< uint32_t, base_addr + 0x00000718, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000718, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCUART_S0  = regbits< type,  0,  1 >;  /**< UART Module 0 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCUART_S1  = regbits< type,  1,  1 >;  /**< UART Module 1 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCUART_S2  = regbits< type,  2,  1 >;  /**< UART Module 2 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCUART_S3  = regbits< type,  3,  1 >;  /**< UART Module 3 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCUART_S4  = regbits< type,  4,  1 >;  /**< UART Module 4 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCUART_S5  = regbits< type,  5,  1 >;  /**< UART Module 5 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCUART_S6  = regbits< type,  6,  1 >;  /**< UART Module 6 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCUART_S7  = regbits< type,  7,  1 >;  /**< UART Module 7 Sleep Mode Clock Gating Control  */
  };

  /**
   * Synchronous Serial Interface Sleep Mode Clock Gating Control
   */
  struct SCGCSSI
  : public reg< uint32_t, base_addr + 0x0000071c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000071c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCSSI_S0  = regbits< type,  0,  1 >;  /**< SSI Module 0 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCSSI_S1  = regbits< type,  1,  1 >;  /**< SSI Module 1 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCSSI_S2  = regbits< type,  2,  1 >;  /**< SSI Module 2 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCSSI_S3  = regbits< type,  3,  1 >;  /**< SSI Module 3 Sleep Mode Clock Gating Control  */
  };

  /**
   * Inter-Integrated Circuit Sleep Mode Clock Gating Control
   */
  struct SCGCI2C
  : public reg< uint32_t, base_addr + 0x00000720, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000720, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCI2C_S0  = regbits< type,  0,  1 >;  /**< I2C Module 0 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCI2C_S1  = regbits< type,  1,  1 >;  /**< I2C Module 1 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCI2C_S2  = regbits< type,  2,  1 >;  /**< I2C Module 2 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCI2C_S3  = regbits< type,  3,  1 >;  /**< I2C Module 3 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCI2C_S4  = regbits< type,  4,  1 >;  /**< I2C Module 4 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCI2C_S5  = regbits< type,  5,  1 >;  /**< I2C Module 5 Sleep Mode Clock Gating Control  */
  };

  /**
   * Universal Serial Bus Sleep Mode Clock Gating Control
   */
  struct SCGCUSB
  : public reg< uint32_t, base_addr + 0x00000728, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000728, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCUSB_S0  = regbits< type,  0,  1 >;  /**< USB Module Sleep Mode Clock Gating Control  */
  };

  /**
   * Controller Area Network Sleep Mode Clock Gating Control
   */
  struct SCGCCAN
  : public reg< uint32_t, base_addr + 0x00000734, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000734, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCCAN_S0  = regbits< type,  0,  1 >;  /**< CAN Module 0 Sleep Mode Clock Gating Control  */
  };

  /**
   * Analog-to-Digital Converter Sleep Mode Clock Gating Control
   */
  struct SCGCADC
  : public reg< uint32_t, base_addr + 0x00000738, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000738, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCADC_S0  = regbits< type,  0,  1 >;  /**< ADC Module 0 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCADC_S1  = regbits< type,  1,  1 >;  /**< ADC Module 1 Sleep Mode Clock Gating Control  */
  };

  /**
   * Analog Comparator Sleep Mode Clock Gating Control
   */
  struct SCGCACMP
  : public reg< uint32_t, base_addr + 0x0000073c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000073c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCACMP_S0  = regbits< type,  0,  1 >;  /**< Analog Comparator Module 0 Sleep Mode Clock Gating Control  */
  };

  /**
   * EEPROM Sleep Mode Clock Gating Control
   */
  struct SCGCEEPROM
  : public reg< uint32_t, base_addr + 0x00000758, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000758, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCEEPROM_S0  = regbits< type,  0,  1 >;  /**< EEPROM Module Sleep Mode Clock Gating Control  */
  };

  /**
   * Wide Timer Sleep Mode Clock Gating Control
   */
  struct SCGCWTIMER
  : public reg< uint32_t, base_addr + 0x0000075c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000075c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_SCGCWTIMER_S0  = regbits< type,  0,  1 >;  /**< Wide Timer 0 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCWTIMER_S1  = regbits< type,  1,  1 >;  /**< Wide Timer 1 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCWTIMER_S2  = regbits< type,  2,  1 >;  /**< Wide Timer 2 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCWTIMER_S3  = regbits< type,  3,  1 >;  /**< Wide Timer 3 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCWTIMER_S4  = regbits< type,  4,  1 >;  /**< Wide Timer 4 Sleep Mode Clock Gating Control  */
    using SYSCTL_SCGCWTIMER_S5  = regbits< type,  5,  1 >;  /**< Wide Timer 5 Sleep Mode Clock Gating Control  */
  };

  /**
   * Watchdog Timer Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCWD
  : public reg< uint32_t, base_addr + 0x00000800, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000800, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCWD_D0  = regbits< type,  0,  1 >;  /**< Watchdog Timer 0 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCWD_D1  = regbits< type,  1,  1 >;  /**< Watchdog Timer 1 Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Timer Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCTIMER
  : public reg< uint32_t, base_addr + 0x00000804, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000804, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCTIMER_D0  = regbits< type,  0,  1 >;  /**< Timer 0 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCTIMER_D1  = regbits< type,  1,  1 >;  /**< Timer 1 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCTIMER_D2  = regbits< type,  2,  1 >;  /**< Timer 2 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCTIMER_D3  = regbits< type,  3,  1 >;  /**< Timer 3 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCTIMER_D4  = regbits< type,  4,  1 >;  /**< Timer 4 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCTIMER_D5  = regbits< type,  5,  1 >;  /**< Timer 5 Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * General-Purpose Input/Output Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCGPIO
  : public reg< uint32_t, base_addr + 0x00000808, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000808, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCGPIO_D0  = regbits< type,  0,  1 >;  /**< GPIO Port A Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCGPIO_D1  = regbits< type,  1,  1 >;  /**< GPIO Port B Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCGPIO_D2  = regbits< type,  2,  1 >;  /**< GPIO Port C Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCGPIO_D3  = regbits< type,  3,  1 >;  /**< GPIO Port D Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCGPIO_D4  = regbits< type,  4,  1 >;  /**< GPIO Port E Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCGPIO_D5  = regbits< type,  5,  1 >;  /**< GPIO Port F Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCGPIO_D6  = regbits< type,  6,  1 >;  /**< GPIO Port G Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCGPIO_D7  = regbits< type,  7,  1 >;  /**< GPIO Port H Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCGPIO_D8  = regbits< type,  8,  1 >;  /**< GPIO Port J Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCGPIO_D9  = regbits< type,  9,  1 >;  /**< GPIO Port K Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Micro Direct Memory Access Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCDMA
  : public reg< uint32_t, base_addr + 0x0000080c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000080c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCDMA_D0  = regbits< type,  0,  1 >;  /**< uDMA Module Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Hibernation Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCHIB
  : public reg< uint32_t, base_addr + 0x00000814, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000814, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCHIB_D0  = regbits< type,  0,  1 >;  /**< Hibernation Module Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Universal Asynchronous Receiver/Transmitter Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCUART
  : public reg< uint32_t, base_addr + 0x00000818, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000818, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCUART_D0  = regbits< type,  0,  1 >;  /**< UART Module 0 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCUART_D1  = regbits< type,  1,  1 >;  /**< UART Module 1 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCUART_D2  = regbits< type,  2,  1 >;  /**< UART Module 2 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCUART_D3  = regbits< type,  3,  1 >;  /**< UART Module 3 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCUART_D4  = regbits< type,  4,  1 >;  /**< UART Module 4 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCUART_D5  = regbits< type,  5,  1 >;  /**< UART Module 5 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCUART_D6  = regbits< type,  6,  1 >;  /**< UART Module 6 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCUART_D7  = regbits< type,  7,  1 >;  /**< UART Module 7 Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Synchronous Serial Interface Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCSSI
  : public reg< uint32_t, base_addr + 0x0000081c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000081c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCSSI_D0  = regbits< type,  0,  1 >;  /**< SSI Module 0 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCSSI_D1  = regbits< type,  1,  1 >;  /**< SSI Module 1 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCSSI_D2  = regbits< type,  2,  1 >;  /**< SSI Module 2 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCSSI_D3  = regbits< type,  3,  1 >;  /**< SSI Module 3 Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Inter-Integrated Circuit Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCI2C
  : public reg< uint32_t, base_addr + 0x00000820, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000820, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCI2C_D0  = regbits< type,  0,  1 >;  /**< I2C Module 0 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCI2C_D1  = regbits< type,  1,  1 >;  /**< I2C Module 1 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCI2C_D2  = regbits< type,  2,  1 >;  /**< I2C Module 2 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCI2C_D3  = regbits< type,  3,  1 >;  /**< I2C Module 3 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCI2C_D4  = regbits< type,  4,  1 >;  /**< I2C Module 4 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCI2C_D5  = regbits< type,  5,  1 >;  /**< I2C Module 5 Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Universal Serial Bus Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCUSB
  : public reg< uint32_t, base_addr + 0x00000828, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000828, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCUSB_D0  = regbits< type,  0,  1 >;  /**< USB Module Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Controller Area Network Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCCAN
  : public reg< uint32_t, base_addr + 0x00000834, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000834, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCCAN_D0  = regbits< type,  0,  1 >;  /**< CAN Module 0 Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Analog-to-Digital Converter Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCADC
  : public reg< uint32_t, base_addr + 0x00000838, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000838, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCADC_D0  = regbits< type,  0,  1 >;  /**< ADC Module 0 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCADC_D1  = regbits< type,  1,  1 >;  /**< ADC Module 1 Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Analog Comparator Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCACMP
  : public reg< uint32_t, base_addr + 0x0000083c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000083c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCACMP_D0  = regbits< type,  0,  1 >;  /**< Analog Comparator Module 0 Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * EEPROM Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCEEPROM
  : public reg< uint32_t, base_addr + 0x00000858, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000858, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCEEPROM_D0  = regbits< type,  0,  1 >;  /**< EEPROM Module Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Wide Timer Deep-Sleep Mode Clock Gating Control
   */
  struct DCGCWTIMER
  : public reg< uint32_t, base_addr + 0x0000085c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000085c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_DCGCWTIMER_D0  = regbits< type,  0,  1 >;  /**< Wide Timer 0 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCWTIMER_D1  = regbits< type,  1,  1 >;  /**< Wide Timer 1 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCWTIMER_D2  = regbits< type,  2,  1 >;  /**< Wide Timer 2 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCWTIMER_D3  = regbits< type,  3,  1 >;  /**< Wide Timer 3 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCWTIMER_D4  = regbits< type,  4,  1 >;  /**< Wide Timer 4 Deep-Sleep Mode Clock Gating Control  */
    using SYSCTL_DCGCWTIMER_D5  = regbits< type,  5,  1 >;  /**< Wide Timer 5 Deep-Sleep Mode Clock Gating Control  */
  };

  /**
   * Watchdog Timer Peripheral Ready
   */
  struct PRWD
  : public reg< uint32_t, base_addr + 0x00000a00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRWD_R0  = regbits< type,  0,  1 >;  /**< Watchdog Timer 0 Peripheral Ready  */
    using SYSCTL_PRWD_R1  = regbits< type,  1,  1 >;  /**< Watchdog Timer 1 Peripheral Ready  */
  };

  /**
   * Timer Peripheral Ready
   */
  struct PRTIMER
  : public reg< uint32_t, base_addr + 0x00000a04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRTIMER_R0  = regbits< type,  0,  1 >;  /**< Timer 0 Peripheral Ready  */
    using SYSCTL_PRTIMER_R1  = regbits< type,  1,  1 >;  /**< Timer 1 Peripheral Ready  */
    using SYSCTL_PRTIMER_R2  = regbits< type,  2,  1 >;  /**< Timer 2 Peripheral Ready  */
    using SYSCTL_PRTIMER_R3  = regbits< type,  3,  1 >;  /**< Timer 3 Peripheral Ready  */
    using SYSCTL_PRTIMER_R4  = regbits< type,  4,  1 >;  /**< Timer 4 Peripheral Ready  */
    using SYSCTL_PRTIMER_R5  = regbits< type,  5,  1 >;  /**< Timer 5 Peripheral Ready  */
  };

  /**
   * General-Purpose Input/Output Peripheral Ready
   */
  struct PRGPIO
  : public reg< uint32_t, base_addr + 0x00000a08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRGPIO_R0  = regbits< type,  0,  1 >;  /**< GPIO Port A Peripheral Ready  */
    using SYSCTL_PRGPIO_R1  = regbits< type,  1,  1 >;  /**< GPIO Port B Peripheral Ready  */
    using SYSCTL_PRGPIO_R2  = regbits< type,  2,  1 >;  /**< GPIO Port C Peripheral Ready  */
    using SYSCTL_PRGPIO_R3  = regbits< type,  3,  1 >;  /**< GPIO Port D Peripheral Ready  */
    using SYSCTL_PRGPIO_R4  = regbits< type,  4,  1 >;  /**< GPIO Port E Peripheral Ready  */
    using SYSCTL_PRGPIO_R5  = regbits< type,  5,  1 >;  /**< GPIO Port F Peripheral Ready  */
    using SYSCTL_PRGPIO_R6  = regbits< type,  6,  1 >;  /**< GPIO Port G Peripheral Ready  */
    using SYSCTL_PRGPIO_R7  = regbits< type,  7,  1 >;  /**< GPIO Port H Peripheral Ready  */
    using SYSCTL_PRGPIO_R8  = regbits< type,  8,  1 >;  /**< GPIO Port J Peripheral Ready  */
    using SYSCTL_PRGPIO_R9  = regbits< type,  9,  1 >;  /**< GPIO Port K Peripheral Ready  */
  };

  /**
   * Micro Direct Memory Access Peripheral Ready
   */
  struct PRDMA
  : public reg< uint32_t, base_addr + 0x00000a0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRDMA_R0  = regbits< type,  0,  1 >;  /**< uDMA Module Peripheral Ready  */
  };

  /**
   * Hibernation Peripheral Ready
   */
  struct PRHIB
  : public reg< uint32_t, base_addr + 0x00000a14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRHIB_R0  = regbits< type,  0,  1 >;  /**< Hibernation Module Peripheral Ready  */
  };

  /**
   * Universal Asynchronous Receiver/Transmitter Peripheral Ready
   */
  struct PRUART
  : public reg< uint32_t, base_addr + 0x00000a18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a18, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRUART_R0  = regbits< type,  0,  1 >;  /**< UART Module 0 Peripheral Ready  */
    using SYSCTL_PRUART_R1  = regbits< type,  1,  1 >;  /**< UART Module 1 Peripheral Ready  */
    using SYSCTL_PRUART_R2  = regbits< type,  2,  1 >;  /**< UART Module 2 Peripheral Ready  */
    using SYSCTL_PRUART_R3  = regbits< type,  3,  1 >;  /**< UART Module 3 Peripheral Ready  */
    using SYSCTL_PRUART_R4  = regbits< type,  4,  1 >;  /**< UART Module 4 Peripheral Ready  */
    using SYSCTL_PRUART_R5  = regbits< type,  5,  1 >;  /**< UART Module 5 Peripheral Ready  */
    using SYSCTL_PRUART_R6  = regbits< type,  6,  1 >;  /**< UART Module 6 Peripheral Ready  */
    using SYSCTL_PRUART_R7  = regbits< type,  7,  1 >;  /**< UART Module 7 Peripheral Ready  */
  };

  /**
   * Synchronous Serial Interface Peripheral Ready
   */
  struct PRSSI
  : public reg< uint32_t, base_addr + 0x00000a1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a1c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRSSI_R0  = regbits< type,  0,  1 >;  /**< SSI Module 0 Peripheral Ready  */
    using SYSCTL_PRSSI_R1  = regbits< type,  1,  1 >;  /**< SSI Module 1 Peripheral Ready  */
    using SYSCTL_PRSSI_R2  = regbits< type,  2,  1 >;  /**< SSI Module 2 Peripheral Ready  */
    using SYSCTL_PRSSI_R3  = regbits< type,  3,  1 >;  /**< SSI Module 3 Peripheral Ready  */
  };

  /**
   * Inter-Integrated Circuit Peripheral Ready
   */
  struct PRI2C
  : public reg< uint32_t, base_addr + 0x00000a20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a20, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRI2C_R0  = regbits< type,  0,  1 >;  /**< I2C Module 0 Peripheral Ready  */
    using SYSCTL_PRI2C_R1  = regbits< type,  1,  1 >;  /**< I2C Module 1 Peripheral Ready  */
    using SYSCTL_PRI2C_R2  = regbits< type,  2,  1 >;  /**< I2C Module 2 Peripheral Ready  */
    using SYSCTL_PRI2C_R3  = regbits< type,  3,  1 >;  /**< I2C Module 3 Peripheral Ready  */
    using SYSCTL_PRI2C_R4  = regbits< type,  4,  1 >;  /**< I2C Module 4 Peripheral Ready  */
    using SYSCTL_PRI2C_R5  = regbits< type,  5,  1 >;  /**< I2C Module 5 Peripheral Ready  */
  };

  /**
   * Universal Serial Bus Peripheral Ready
   */
  struct PRUSB
  : public reg< uint32_t, base_addr + 0x00000a28, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a28, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRUSB_R0  = regbits< type,  0,  1 >;  /**< USB Module Peripheral Ready  */
  };

  /**
   * Controller Area Network Peripheral Ready
   */
  struct PRCAN
  : public reg< uint32_t, base_addr + 0x00000a34, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a34, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRCAN_R0  = regbits< type,  0,  1 >;  /**< CAN Module 0 Peripheral Ready  */
  };

  /**
   * Analog-to-Digital Converter Peripheral Ready
   */
  struct PRADC
  : public reg< uint32_t, base_addr + 0x00000a38, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a38, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRADC_R0  = regbits< type,  0,  1 >;  /**< ADC Module 0 Peripheral Ready  */
    using SYSCTL_PRADC_R1  = regbits< type,  1,  1 >;  /**< ADC Module 1 Peripheral Ready  */
  };

  /**
   * Analog Comparator Peripheral Ready
   */
  struct PRACMP
  : public reg< uint32_t, base_addr + 0x00000a3c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a3c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRACMP_R0  = regbits< type,  0,  1 >;  /**< Analog Comparator Module 0 Peripheral Ready  */
  };

  /**
   * EEPROM Peripheral Ready
   */
  struct PREEPROM
  : public reg< uint32_t, base_addr + 0x00000a58, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a58, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PREEPROM_R0  = regbits< type,  0,  1 >;  /**< EEPROM Module Peripheral Ready  */
  };

  /**
   * Wide Timer Peripheral Ready
   */
  struct PRWTIMER
  : public reg< uint32_t, base_addr + 0x00000a5c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000a5c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SYSCTL_PRWTIMER_R0  = regbits< type,  0,  1 >;  /**< Wide Timer 0 Peripheral Ready  */
    using SYSCTL_PRWTIMER_R1  = regbits< type,  1,  1 >;  /**< Wide Timer 1 Peripheral Ready  */
    using SYSCTL_PRWTIMER_R2  = regbits< type,  2,  1 >;  /**< Wide Timer 2 Peripheral Ready  */
    using SYSCTL_PRWTIMER_R3  = regbits< type,  3,  1 >;  /**< Wide Timer 3 Peripheral Ready  */
    using SYSCTL_PRWTIMER_R4  = regbits< type,  4,  1 >;  /**< Wide Timer 4 Peripheral Ready  */
    using SYSCTL_PRWTIMER_R5  = regbits< type,  5,  1 >;  /**< Wide Timer 5 Peripheral Ready  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSCTL_HPP_INCLUDED
