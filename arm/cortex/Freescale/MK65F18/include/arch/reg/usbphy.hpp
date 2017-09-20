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
//  Import from CMSIS-SVD: "Freescale/MK65F18.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK65F18
//  series: Kinetis_K
//  version: 1.6
//  description: MK65F18 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USBPHY_HPP_INCLUDED
#define ARCH_REG_USBPHY_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USBPHY Register Reference Index
 */
struct USBPHY
{
  static constexpr reg_addr_t base_addr = 0x400a2000;

  /**
   * USB PHY Power-Down Register
   */
  struct PWD
  : public reg< uint32_t, base_addr + 0, rw, 0x1E1C00 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x1E1C00 >;

    using TXPWDFS     = regbits< type, 10,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using TXPWDIBIAS  = regbits< type, 11,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using TXPWDV2I    = regbits< type, 12,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDENV    = regbits< type, 17,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWD1PT1   = regbits< type, 18,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDDIFF   = regbits< type, 19,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDRX     = regbits< type, 20,  1 >;  /**< This bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled            */
  };

  /**
   * USB PHY Power-Down Register
   */
  struct PWD_SET
  : public reg< uint32_t, base_addr + 0x4, rw, 0x1E1C00 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x1E1C00 >;

    using TXPWDFS     = regbits< type, 10,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using TXPWDIBIAS  = regbits< type, 11,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using TXPWDV2I    = regbits< type, 12,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDENV    = regbits< type, 17,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWD1PT1   = regbits< type, 18,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDDIFF   = regbits< type, 19,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDRX     = regbits< type, 20,  1 >;  /**< This bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled            */
  };

  /**
   * USB PHY Power-Down Register
   */
  struct PWD_CLR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x1E1C00 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x1E1C00 >;

    using TXPWDFS     = regbits< type, 10,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using TXPWDIBIAS  = regbits< type, 11,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using TXPWDV2I    = regbits< type, 12,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDENV    = regbits< type, 17,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWD1PT1   = regbits< type, 18,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDDIFF   = regbits< type, 19,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDRX     = regbits< type, 20,  1 >;  /**< This bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled            */
  };

  /**
   * USB PHY Power-Down Register
   */
  struct PWD_TOG
  : public reg< uint32_t, base_addr + 0xc, rw, 0x1E1C00 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x1E1C00 >;

    using TXPWDFS     = regbits< type, 10,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using TXPWDIBIAS  = regbits< type, 11,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using TXPWDV2I    = regbits< type, 12,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDENV    = regbits< type, 17,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWD1PT1   = regbits< type, 18,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDDIFF   = regbits< type, 19,  1 >;  /**< Note that this bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled  */
    using RXPWDRX     = regbits< type, 20,  1 >;  /**< This bit will be auto cleared if there is USB wakeup event while ENAUTOCLR_PHY_PWD bit of USBPHY_CTRL is enabled            */
  };

  /**
   * USB PHY Transmitter Control Register
   */
  struct TX
  : public reg< uint32_t, base_addr + 0x10, rw, 0x10060607 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x10060607 >;

    using D_CAL               = regbits< type,  0,  4 >;  /**< Decode to trim the nominal 17                                                            */
    using TXCAL45DM           = regbits< type,  8,  4 >;  /**< Decode to trim the nominal 45ohm series termination resistance to the USB_DM output pin  */
    using TXCAL45DP           = regbits< type, 16,  4 >;  /**< Decode to trim the nominal 45ohm series termination resistance to the USB_DP output pin  */
    using USBPHY_TX_EDGECTRL  = regbits< type, 26,  3 >;  /**< Controls the edge-rate of the current sensing transistors used in HS transmit            */
  };

  /**
   * USB PHY Transmitter Control Register
   */
  struct TX_SET
  : public reg< uint32_t, base_addr + 0x14, rw, 0x10060607 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x10060607 >;

    using D_CAL               = regbits< type,  0,  4 >;  /**< Decode to trim the nominal 17                                                            */
    using TXCAL45DM           = regbits< type,  8,  4 >;  /**< Decode to trim the nominal 45ohm series termination resistance to the USB_DM output pin  */
    using TXCAL45DP           = regbits< type, 16,  4 >;  /**< Decode to trim the nominal 45ohm series termination resistance to the USB_DP output pin  */
    using USBPHY_TX_EDGECTRL  = regbits< type, 26,  3 >;  /**< Controls the edge-rate of the current sensing transistors used in HS transmit            */
  };

  /**
   * USB PHY Transmitter Control Register
   */
  struct TX_CLR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x10060607 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x10060607 >;

    using D_CAL               = regbits< type,  0,  4 >;  /**< Decode to trim the nominal 17                                                            */
    using TXCAL45DM           = regbits< type,  8,  4 >;  /**< Decode to trim the nominal 45ohm series termination resistance to the USB_DM output pin  */
    using TXCAL45DP           = regbits< type, 16,  4 >;  /**< Decode to trim the nominal 45ohm series termination resistance to the USB_DP output pin  */
    using USBPHY_TX_EDGECTRL  = regbits< type, 26,  3 >;  /**< Controls the edge-rate of the current sensing transistors used in HS transmit            */
  };

  /**
   * USB PHY Transmitter Control Register
   */
  struct TX_TOG
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x10060607 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x10060607 >;

    using D_CAL               = regbits< type,  0,  4 >;  /**< Decode to trim the nominal 17                                                            */
    using TXCAL45DM           = regbits< type,  8,  4 >;  /**< Decode to trim the nominal 45ohm series termination resistance to the USB_DM output pin  */
    using TXCAL45DP           = regbits< type, 16,  4 >;  /**< Decode to trim the nominal 45ohm series termination resistance to the USB_DP output pin  */
    using USBPHY_TX_EDGECTRL  = regbits< type, 26,  3 >;  /**< Controls the edge-rate of the current sensing transistors used in HS transmit            */
  };

  /**
   * USB PHY Receiver Control Register
   */
  struct RX
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using ENVADJ     = regbits< type,  0,  3 >;  /**< The ENVADJ field adjusts the trip point for the envelope detector                                            */
    using DISCONADJ  = regbits< type,  4,  3 >;  /**< The DISCONADJ field adjusts the trip point for the disconnect detector.                                      */
    using RXDBYPASS  = regbits< type, 22,  1 >;  /**< This test mode is intended for lab use only, replace FS differential receiver with DP single ended receiver  */
  };

  /**
   * USB PHY Receiver Control Register
   */
  struct RX_SET
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using ENVADJ     = regbits< type,  0,  3 >;  /**< The ENVADJ field adjusts the trip point for the envelope detector                                            */
    using DISCONADJ  = regbits< type,  4,  3 >;  /**< The DISCONADJ field adjusts the trip point for the disconnect detector.                                      */
    using RXDBYPASS  = regbits< type, 22,  1 >;  /**< This test mode is intended for lab use only, replace FS differential receiver with DP single ended receiver  */
  };

  /**
   * USB PHY Receiver Control Register
   */
  struct RX_CLR
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using ENVADJ     = regbits< type,  0,  3 >;  /**< The ENVADJ field adjusts the trip point for the envelope detector                                            */
    using DISCONADJ  = regbits< type,  4,  3 >;  /**< The DISCONADJ field adjusts the trip point for the disconnect detector.                                      */
    using RXDBYPASS  = regbits< type, 22,  1 >;  /**< This test mode is intended for lab use only, replace FS differential receiver with DP single ended receiver  */
  };

  /**
   * USB PHY Receiver Control Register
   */
  struct RX_TOG
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using ENVADJ     = regbits< type,  0,  3 >;  /**< The ENVADJ field adjusts the trip point for the envelope detector                                            */
    using DISCONADJ  = regbits< type,  4,  3 >;  /**< The DISCONADJ field adjusts the trip point for the disconnect detector.                                      */
    using RXDBYPASS  = regbits< type, 22,  1 >;  /**< This test mode is intended for lab use only, replace FS differential receiver with DP single ended receiver  */
  };

  /**
   * USB PHY General Control Register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x30, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0xC0000000 >;

    using ENHOSTDISCONDETECT    = regbits< type,  1,  1 >;  /**< For host mode, enables high-speed disconnect detector                                                                                        */
    using HOSTDISCONDETECT_IRQ  = regbits< type,  3,  1 >;  /**< Indicates that the device has disconnected in High-Speed mode                                                                                */
    using ENDEVPLUGINDET        = regbits< type,  4,  1 >;  /**< Enables non-standard resistive plugged-in detection                                                                                          */
    using DEVPLUGIN_IRQ         = regbits< type, 12,  1 >;  /**< Indicates that the device is connected                                                                                                       */
    using ENUTMILEVEL2          = regbits< type, 14,  1 >;  /**< Enables UTMI+ Level 2 operation for the USB HS PHY                                                                                           */
    using ENUTMILEVEL3          = regbits< type, 15,  1 >;  /**< Enables UTMI+ Level 3 operation for the USB HS PHY                                                                                           */
    using AUTORESUME_EN         = regbits< type, 18,  1 >;  /**< Enable the auto resume feature, when set, HW will use 32KHz clock to send Resume to respond to the device remote wakeup(for host mode only)  */
    using ENAUTOCLR_CLKGATE     = regbits< type, 19,  1 >;  /**< Enables the feature to auto-clear the CLKGATE bit if there is wakeup event while USB is suspended                                            */
    using ENAUTOCLR_PHY_PWD     = regbits< type, 20,  1 >;  /**< Enables the feature to auto-clear the PWD register bits in USBPHY_PWD if there is wakeup event while USB is suspended                        */
    using FSDLL_RST_EN          = regbits< type, 24,  1 >;  /**< Enables the feature to reset the FSDLL lock detection logic at the end of each TX packet.                                                    */
    using OTG_ID_VALUE          = regbits< type, 27,  1 >;  /**< Indicates the results of USB_ID pin while monitoring the cable plugged into the Micro- or Mini-AB receptacle                                 */
    using HOST_FORCE_LS_SE0     = regbits< type, 28,  1 >;  /**< Forces the next FS packet that is transmitted to have a EOP with low-speed timing                                                            */
    using UTMI_SUSPENDM         = regbits< type, 29,  1 >;  /**< Used by the PHY to indicate a powered-down state                                                                                             */
    using CLKGATE               = regbits< type, 30,  1 >;  /**< Gate UTMI Clocks                                                                                                                             */
    using SFTRST                = regbits< type, 31,  1 >;  /**< Writing a 1 to this bit will soft-reset the USBPHY_PWD, USBPHY_TX, USBPHY_RX, and USBPHY_CTRL registers                                      */
  };

  /**
   * USB PHY General Control Register
   */
  struct CTRL_SET
  : public reg< uint32_t, base_addr + 0x34, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0xC0000000 >;

    using ENHOSTDISCONDETECT    = regbits< type,  1,  1 >;  /**< For host mode, enables high-speed disconnect detector                                                                                        */
    using HOSTDISCONDETECT_IRQ  = regbits< type,  3,  1 >;  /**< Indicates that the device has disconnected in High-Speed mode                                                                                */
    using ENDEVPLUGINDET        = regbits< type,  4,  1 >;  /**< Enables non-standard resistive plugged-in detection                                                                                          */
    using DEVPLUGIN_IRQ         = regbits< type, 12,  1 >;  /**< Indicates that the device is connected                                                                                                       */
    using ENUTMILEVEL2          = regbits< type, 14,  1 >;  /**< Enables UTMI+ Level 2 operation for the USB HS PHY                                                                                           */
    using ENUTMILEVEL3          = regbits< type, 15,  1 >;  /**< Enables UTMI+ Level 3 operation for the USB HS PHY                                                                                           */
    using AUTORESUME_EN         = regbits< type, 18,  1 >;  /**< Enable the auto resume feature, when set, HW will use 32KHz clock to send Resume to respond to the device remote wakeup(for host mode only)  */
    using ENAUTOCLR_CLKGATE     = regbits< type, 19,  1 >;  /**< Enables the feature to auto-clear the CLKGATE bit if there is wakeup event while USB is suspended                                            */
    using ENAUTOCLR_PHY_PWD     = regbits< type, 20,  1 >;  /**< Enables the feature to auto-clear the PWD register bits in USBPHY_PWD if there is wakeup event while USB is suspended                        */
    using FSDLL_RST_EN          = regbits< type, 24,  1 >;  /**< Enables the feature to reset the FSDLL lock detection logic at the end of each TX packet.                                                    */
    using OTG_ID_VALUE          = regbits< type, 27,  1 >;  /**< Indicates the results of USB_ID pin while monitoring the cable plugged into the Micro- or Mini-AB receptacle                                 */
    using HOST_FORCE_LS_SE0     = regbits< type, 28,  1 >;  /**< Forces the next FS packet that is transmitted to have a EOP with low-speed timing                                                            */
    using UTMI_SUSPENDM         = regbits< type, 29,  1 >;  /**< Used by the PHY to indicate a powered-down state                                                                                             */
    using CLKGATE               = regbits< type, 30,  1 >;  /**< Gate UTMI Clocks                                                                                                                             */
    using SFTRST                = regbits< type, 31,  1 >;  /**< Writing a 1 to this bit will soft-reset the USBPHY_PWD, USBPHY_TX, USBPHY_RX, and USBPHY_CTRL registers                                      */
  };

  /**
   * USB PHY General Control Register
   */
  struct CTRL_CLR
  : public reg< uint32_t, base_addr + 0x38, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0xC0000000 >;

    using ENHOSTDISCONDETECT    = regbits< type,  1,  1 >;  /**< For host mode, enables high-speed disconnect detector                                                                                        */
    using HOSTDISCONDETECT_IRQ  = regbits< type,  3,  1 >;  /**< Indicates that the device has disconnected in High-Speed mode                                                                                */
    using ENDEVPLUGINDET        = regbits< type,  4,  1 >;  /**< Enables non-standard resistive plugged-in detection                                                                                          */
    using DEVPLUGIN_IRQ         = regbits< type, 12,  1 >;  /**< Indicates that the device is connected                                                                                                       */
    using ENUTMILEVEL2          = regbits< type, 14,  1 >;  /**< Enables UTMI+ Level 2 operation for the USB HS PHY                                                                                           */
    using ENUTMILEVEL3          = regbits< type, 15,  1 >;  /**< Enables UTMI+ Level 3 operation for the USB HS PHY                                                                                           */
    using AUTORESUME_EN         = regbits< type, 18,  1 >;  /**< Enable the auto resume feature, when set, HW will use 32KHz clock to send Resume to respond to the device remote wakeup(for host mode only)  */
    using ENAUTOCLR_CLKGATE     = regbits< type, 19,  1 >;  /**< Enables the feature to auto-clear the CLKGATE bit if there is wakeup event while USB is suspended                                            */
    using ENAUTOCLR_PHY_PWD     = regbits< type, 20,  1 >;  /**< Enables the feature to auto-clear the PWD register bits in USBPHY_PWD if there is wakeup event while USB is suspended                        */
    using FSDLL_RST_EN          = regbits< type, 24,  1 >;  /**< Enables the feature to reset the FSDLL lock detection logic at the end of each TX packet.                                                    */
    using OTG_ID_VALUE          = regbits< type, 27,  1 >;  /**< Indicates the results of USB_ID pin while monitoring the cable plugged into the Micro- or Mini-AB receptacle                                 */
    using HOST_FORCE_LS_SE0     = regbits< type, 28,  1 >;  /**< Forces the next FS packet that is transmitted to have a EOP with low-speed timing                                                            */
    using UTMI_SUSPENDM         = regbits< type, 29,  1 >;  /**< Used by the PHY to indicate a powered-down state                                                                                             */
    using CLKGATE               = regbits< type, 30,  1 >;  /**< Gate UTMI Clocks                                                                                                                             */
    using SFTRST                = regbits< type, 31,  1 >;  /**< Writing a 1 to this bit will soft-reset the USBPHY_PWD, USBPHY_TX, USBPHY_RX, and USBPHY_CTRL registers                                      */
  };

  /**
   * USB PHY General Control Register
   */
  struct CTRL_TOG
  : public reg< uint32_t, base_addr + 0x3c, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0xC0000000 >;

    using ENHOSTDISCONDETECT    = regbits< type,  1,  1 >;  /**< For host mode, enables high-speed disconnect detector                                                                                        */
    using HOSTDISCONDETECT_IRQ  = regbits< type,  3,  1 >;  /**< Indicates that the device has disconnected in High-Speed mode                                                                                */
    using ENDEVPLUGINDET        = regbits< type,  4,  1 >;  /**< Enables non-standard resistive plugged-in detection                                                                                          */
    using DEVPLUGIN_IRQ         = regbits< type, 12,  1 >;  /**< Indicates that the device is connected                                                                                                       */
    using ENUTMILEVEL2          = regbits< type, 14,  1 >;  /**< Enables UTMI+ Level 2 operation for the USB HS PHY                                                                                           */
    using ENUTMILEVEL3          = regbits< type, 15,  1 >;  /**< Enables UTMI+ Level 3 operation for the USB HS PHY                                                                                           */
    using AUTORESUME_EN         = regbits< type, 18,  1 >;  /**< Enable the auto resume feature, when set, HW will use 32KHz clock to send Resume to respond to the device remote wakeup(for host mode only)  */
    using ENAUTOCLR_CLKGATE     = regbits< type, 19,  1 >;  /**< Enables the feature to auto-clear the CLKGATE bit if there is wakeup event while USB is suspended                                            */
    using ENAUTOCLR_PHY_PWD     = regbits< type, 20,  1 >;  /**< Enables the feature to auto-clear the PWD register bits in USBPHY_PWD if there is wakeup event while USB is suspended                        */
    using FSDLL_RST_EN          = regbits< type, 24,  1 >;  /**< Enables the feature to reset the FSDLL lock detection logic at the end of each TX packet.                                                    */
    using OTG_ID_VALUE          = regbits< type, 27,  1 >;  /**< Indicates the results of USB_ID pin while monitoring the cable plugged into the Micro- or Mini-AB receptacle                                 */
    using HOST_FORCE_LS_SE0     = regbits< type, 28,  1 >;  /**< Forces the next FS packet that is transmitted to have a EOP with low-speed timing                                                            */
    using UTMI_SUSPENDM         = regbits< type, 29,  1 >;  /**< Used by the PHY to indicate a powered-down state                                                                                             */
    using CLKGATE               = regbits< type, 30,  1 >;  /**< Gate UTMI Clocks                                                                                                                             */
    using SFTRST                = regbits< type, 31,  1 >;  /**< Writing a 1 to this bit will soft-reset the USBPHY_PWD, USBPHY_TX, USBPHY_RX, and USBPHY_CTRL registers                                      */
  };

  /**
   * USB PHY Status Register
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using HOSTDISCONDETECT_STATUS  = regbits< type,  3,  1 >;  /**< Indicates at the local host (downstream) port that the remote device has disconnected while in High-Speed mode  */
    using DEVPLUGIN_STATUS         = regbits< type,  6,  1 >;  /**< Status indicator for non-standard resistive plugged-in detection                                                */
    using OTGID_STATUS             = regbits< type,  8,  1 >;  /**< Indicates the results of USB_ID pin on the USB cable plugged into the local Micro- or Mini-AB receptacle        */
    using RESUME_STATUS            = regbits< type, 10,  1 >;  /**< Indicates that the host is sending a wake-up after Suspend and has triggered an interrupt.                      */
  };

  /**
   * USB PHY Debug Register
   */
  struct DEBUG
  : public reg< uint32_t, base_addr + 0x50, rw, 0x7F180000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x7F180000 >;

    using OTGIDPIOLOCK          = regbits< type,  0,  1 >;  /**< Once OTG ID from USBPHY_STATUS_OTGID_STATUS is sampled, use this to hold the value                                                                                                                                                             */
    using DEBUG_INTERFACE_HOLD  = regbits< type,  1,  1 >;  /**< Use holding registers to assist in timing for external UTMI interface.                                                                                                                                                                         */
    using HSTPULLDOWN           = regbits< type,  2,  2 >;  /**< This bit field selects whether to connect pulldown resistors on the USB_DP/USB_DM pins if the corresponding pulldown overdrive mode is enabled through USBPHY_DEBUG[5:4} Set bit 3 to value 1'b1 to connect the 15ohm pulldown on USB_DP line  */
    using ENHSTPULLDOWN         = regbits< type,  4,  2 >;  /**< This bit field selects host pulldown overdrive mode                                                                                                                                                                                            */
    using TX2RXCOUNT            = regbits< type,  8,  4 >;  /**< Delay in between the end of transmit to the beginning of receive                                                                                                                                                                               */
    using ENTX2RXCOUNT          = regbits< type, 12,  1 >;  /**< Set this bit to allow a countdown to transition in between TX and RX.                                                                                                                                                                          */
    using SQUELCHRESETCOUNT     = regbits< type, 16,  5 >;  /**< Delay in between the detection of squelch to the reset of high-speed RX.                                                                                                                                                                       */
    using ENSQUELCHRESET        = regbits< type, 24,  1 >;  /**< Set bit to allow squelch to reset high-speed receive.                                                                                                                                                                                          */
    using SQUELCHRESETLENGTH    = regbits< type, 25,  4 >;  /**< Duration of RESET in terms of the number of 480-MHz cycles.                                                                                                                                                                                    */
    using HOST_RESUME_DEBUG     = regbits< type, 29,  1 >;  /**< Choose to trigger the host resume SE0 with HOST_FORCE_LS_SE0 = 0 or UTMI_SUSPEND = 1.                                                                                                                                                          */
    using CLKGATE               = regbits< type, 30,  1 >;  /**< Gate Test Clocks                                                                                                                                                                                                                               */
  };

  /**
   * USB PHY Debug Register
   */
  struct DEBUG_SET
  : public reg< uint32_t, base_addr + 0x54, rw, 0x7F180000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x7F180000 >;

    using OTGIDPIOLOCK          = regbits< type,  0,  1 >;  /**< Once OTG ID from USBPHY_STATUS_OTGID_STATUS is sampled, use this to hold the value                                                                                                                                                             */
    using DEBUG_INTERFACE_HOLD  = regbits< type,  1,  1 >;  /**< Use holding registers to assist in timing for external UTMI interface.                                                                                                                                                                         */
    using HSTPULLDOWN           = regbits< type,  2,  2 >;  /**< This bit field selects whether to connect pulldown resistors on the USB_DP/USB_DM pins if the corresponding pulldown overdrive mode is enabled through USBPHY_DEBUG[5:4} Set bit 3 to value 1'b1 to connect the 15ohm pulldown on USB_DP line  */
    using ENHSTPULLDOWN         = regbits< type,  4,  2 >;  /**< This bit field selects host pulldown overdrive mode                                                                                                                                                                                            */
    using TX2RXCOUNT            = regbits< type,  8,  4 >;  /**< Delay in between the end of transmit to the beginning of receive                                                                                                                                                                               */
    using ENTX2RXCOUNT          = regbits< type, 12,  1 >;  /**< Set this bit to allow a countdown to transition in between TX and RX.                                                                                                                                                                          */
    using SQUELCHRESETCOUNT     = regbits< type, 16,  5 >;  /**< Delay in between the detection of squelch to the reset of high-speed RX.                                                                                                                                                                       */
    using ENSQUELCHRESET        = regbits< type, 24,  1 >;  /**< Set bit to allow squelch to reset high-speed receive.                                                                                                                                                                                          */
    using SQUELCHRESETLENGTH    = regbits< type, 25,  4 >;  /**< Duration of RESET in terms of the number of 480-MHz cycles.                                                                                                                                                                                    */
    using HOST_RESUME_DEBUG     = regbits< type, 29,  1 >;  /**< Choose to trigger the host resume SE0 with HOST_FORCE_LS_SE0 = 0 or UTMI_SUSPEND = 1.                                                                                                                                                          */
    using CLKGATE               = regbits< type, 30,  1 >;  /**< Gate Test Clocks                                                                                                                                                                                                                               */
  };

  /**
   * USB PHY Debug Register
   */
  struct DEBUG_CLR
  : public reg< uint32_t, base_addr + 0x58, rw, 0x7F180000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x7F180000 >;

    using OTGIDPIOLOCK          = regbits< type,  0,  1 >;  /**< Once OTG ID from USBPHY_STATUS_OTGID_STATUS is sampled, use this to hold the value                                                                                                                                                             */
    using DEBUG_INTERFACE_HOLD  = regbits< type,  1,  1 >;  /**< Use holding registers to assist in timing for external UTMI interface.                                                                                                                                                                         */
    using HSTPULLDOWN           = regbits< type,  2,  2 >;  /**< This bit field selects whether to connect pulldown resistors on the USB_DP/USB_DM pins if the corresponding pulldown overdrive mode is enabled through USBPHY_DEBUG[5:4} Set bit 3 to value 1'b1 to connect the 15ohm pulldown on USB_DP line  */
    using ENHSTPULLDOWN         = regbits< type,  4,  2 >;  /**< This bit field selects host pulldown overdrive mode                                                                                                                                                                                            */
    using TX2RXCOUNT            = regbits< type,  8,  4 >;  /**< Delay in between the end of transmit to the beginning of receive                                                                                                                                                                               */
    using ENTX2RXCOUNT          = regbits< type, 12,  1 >;  /**< Set this bit to allow a countdown to transition in between TX and RX.                                                                                                                                                                          */
    using SQUELCHRESETCOUNT     = regbits< type, 16,  5 >;  /**< Delay in between the detection of squelch to the reset of high-speed RX.                                                                                                                                                                       */
    using ENSQUELCHRESET        = regbits< type, 24,  1 >;  /**< Set bit to allow squelch to reset high-speed receive.                                                                                                                                                                                          */
    using SQUELCHRESETLENGTH    = regbits< type, 25,  4 >;  /**< Duration of RESET in terms of the number of 480-MHz cycles.                                                                                                                                                                                    */
    using HOST_RESUME_DEBUG     = regbits< type, 29,  1 >;  /**< Choose to trigger the host resume SE0 with HOST_FORCE_LS_SE0 = 0 or UTMI_SUSPEND = 1.                                                                                                                                                          */
    using CLKGATE               = regbits< type, 30,  1 >;  /**< Gate Test Clocks                                                                                                                                                                                                                               */
  };

  /**
   * USB PHY Debug Register
   */
  struct DEBUG_TOG
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x7F180000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x7F180000 >;

    using OTGIDPIOLOCK          = regbits< type,  0,  1 >;  /**< Once OTG ID from USBPHY_STATUS_OTGID_STATUS is sampled, use this to hold the value                                                                                                                                                             */
    using DEBUG_INTERFACE_HOLD  = regbits< type,  1,  1 >;  /**< Use holding registers to assist in timing for external UTMI interface.                                                                                                                                                                         */
    using HSTPULLDOWN           = regbits< type,  2,  2 >;  /**< This bit field selects whether to connect pulldown resistors on the USB_DP/USB_DM pins if the corresponding pulldown overdrive mode is enabled through USBPHY_DEBUG[5:4} Set bit 3 to value 1'b1 to connect the 15ohm pulldown on USB_DP line  */
    using ENHSTPULLDOWN         = regbits< type,  4,  2 >;  /**< This bit field selects host pulldown overdrive mode                                                                                                                                                                                            */
    using TX2RXCOUNT            = regbits< type,  8,  4 >;  /**< Delay in between the end of transmit to the beginning of receive                                                                                                                                                                               */
    using ENTX2RXCOUNT          = regbits< type, 12,  1 >;  /**< Set this bit to allow a countdown to transition in between TX and RX.                                                                                                                                                                          */
    using SQUELCHRESETCOUNT     = regbits< type, 16,  5 >;  /**< Delay in between the detection of squelch to the reset of high-speed RX.                                                                                                                                                                       */
    using ENSQUELCHRESET        = regbits< type, 24,  1 >;  /**< Set bit to allow squelch to reset high-speed receive.                                                                                                                                                                                          */
    using SQUELCHRESETLENGTH    = regbits< type, 25,  4 >;  /**< Duration of RESET in terms of the number of 480-MHz cycles.                                                                                                                                                                                    */
    using HOST_RESUME_DEBUG     = regbits< type, 29,  1 >;  /**< Choose to trigger the host resume SE0 with HOST_FORCE_LS_SE0 = 0 or UTMI_SUSPEND = 1.                                                                                                                                                          */
    using CLKGATE               = regbits< type, 30,  1 >;  /**< Gate Test Clocks                                                                                                                                                                                                                               */
  };

  /**
   * UTMI Debug Status Register 0
   */
  struct DEBUG0_STATUS
  : public reg< uint32_t, base_addr + 0x60, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0 >;

    using LOOP_BACK_FAIL_COUNT     = regbits< type,  0, 16 >;  /**< Running count of the failed pseudo-random generator loopback         */
    using UTMI_RXERROR_FAIL_COUNT  = regbits< type, 16, 10 >;  /**< Running count of the UTMI_RXERROR.                                   */
    using SQUELCH_COUNT            = regbits< type, 26,  6 >;  /**< Running count of the squelch reset instead of normal end for HS RX.  */
  };

  /**
   * UTMI Debug Status Register 1
   */
  struct DEBUG1
  : public reg< uint32_t, base_addr + 0x70, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x1000 >;

    using ENTAILADJVD  = regbits< type, 13,  2 >;  /**< Delay increment of the rise of squelch:  */
  };

  /**
   * UTMI Debug Status Register 1
   */
  struct DEBUG1_SET
  : public reg< uint32_t, base_addr + 0x74, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0x1000 >;

    using ENTAILADJVD  = regbits< type, 13,  2 >;  /**< Delay increment of the rise of squelch:  */
  };

  /**
   * UTMI Debug Status Register 1
   */
  struct DEBUG1_CLR
  : public reg< uint32_t, base_addr + 0x78, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x1000 >;

    using ENTAILADJVD  = regbits< type, 13,  2 >;  /**< Delay increment of the rise of squelch:  */
  };

  /**
   * UTMI Debug Status Register 1
   */
  struct DEBUG1_TOG
  : public reg< uint32_t, base_addr + 0x7c, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0x1000 >;

    using ENTAILADJVD  = regbits< type, 13,  2 >;  /**< Delay increment of the rise of squelch:  */
  };

  /**
   * UTMI RTL Version
   */
  struct VERSION
  : public reg< uint32_t, base_addr + 0x80, ro, 0x4030000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, ro, 0x4030000 >;

    using STEP   = regbits< type,  0, 16 >;  /**< Fixed read-only value reflecting the stepping of the RTL version.     */
    using MINOR  = regbits< type, 16,  8 >;  /**< Fixed read-only value reflecting the MINOR field of the RTL version.  */
    using MAJOR  = regbits< type, 24,  8 >;  /**< Fixed read-only value reflecting the MAJOR field of the RTL version.  */
  };

  /**
   * USB PHY PLL Control/Status Register
   */
  struct PLL_SIC
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x12000 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x12000 >;

    using PLL_DIV_SEL        = regbits< type,  0,  2 >;  /**< This field controls the USB PLL feedback loop divider  */
    using PLL_EN_USB_CLKS    = regbits< type,  6,  1 >;  /**< Enable the USB clock output from the USB PHY PLL.      */
    using PLL_HOLD_RING_OFF  = regbits< type, 11,  1 >;  /**< Analog debug bit                                       */
    using PLL_POWER          = regbits< type, 12,  1 >;  /**< Power up the USB PLL.                                  */
    using PLL_ENABLE         = regbits< type, 13,  1 >;  /**< Enable the clock output from the USB PLL.              */
    using PLL_BYPASS         = regbits< type, 16,  1 >;  /**< Bypass the USB PLL.                                    */
    using PLL_LOCK           = regbits< type, 31,  1 >;  /**< USB PLL lock status indicator                          */
  };

  /**
   * USB PHY PLL Control/Status Register
   */
  struct PLL_SIC_SET
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x12000 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x12000 >;

    using PLL_DIV_SEL        = regbits< type,  0,  2 >;  /**< This field controls the USB PLL feedback loop divider  */
    using PLL_EN_USB_CLKS    = regbits< type,  6,  1 >;  /**< Enable the USB clock output from the USB PHY PLL.      */
    using PLL_HOLD_RING_OFF  = regbits< type, 11,  1 >;  /**< Analog debug bit                                       */
    using PLL_POWER          = regbits< type, 12,  1 >;  /**< Power up the USB PLL.                                  */
    using PLL_ENABLE         = regbits< type, 13,  1 >;  /**< Enable the clock output from the USB PLL.              */
    using PLL_BYPASS         = regbits< type, 16,  1 >;  /**< Bypass the USB PLL.                                    */
    using PLL_LOCK           = regbits< type, 31,  1 >;  /**< USB PLL lock status indicator                          */
  };

  /**
   * USB PHY PLL Control/Status Register
   */
  struct PLL_SIC_CLR
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x12000 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x12000 >;

    using PLL_DIV_SEL        = regbits< type,  0,  2 >;  /**< This field controls the USB PLL feedback loop divider  */
    using PLL_EN_USB_CLKS    = regbits< type,  6,  1 >;  /**< Enable the USB clock output from the USB PHY PLL.      */
    using PLL_HOLD_RING_OFF  = regbits< type, 11,  1 >;  /**< Analog debug bit                                       */
    using PLL_POWER          = regbits< type, 12,  1 >;  /**< Power up the USB PLL.                                  */
    using PLL_ENABLE         = regbits< type, 13,  1 >;  /**< Enable the clock output from the USB PLL.              */
    using PLL_BYPASS         = regbits< type, 16,  1 >;  /**< Bypass the USB PLL.                                    */
    using PLL_LOCK           = regbits< type, 31,  1 >;  /**< USB PLL lock status indicator                          */
  };

  /**
   * USB PHY PLL Control/Status Register
   */
  struct PLL_SIC_TOG
  : public reg< uint32_t, base_addr + 0xac, rw, 0x12000 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x12000 >;

    using PLL_DIV_SEL        = regbits< type,  0,  2 >;  /**< This field controls the USB PLL feedback loop divider  */
    using PLL_EN_USB_CLKS    = regbits< type,  6,  1 >;  /**< Enable the USB clock output from the USB PHY PLL.      */
    using PLL_HOLD_RING_OFF  = regbits< type, 11,  1 >;  /**< Analog debug bit                                       */
    using PLL_POWER          = regbits< type, 12,  1 >;  /**< Power up the USB PLL.                                  */
    using PLL_ENABLE         = regbits< type, 13,  1 >;  /**< Enable the clock output from the USB PLL.              */
    using PLL_BYPASS         = regbits< type, 16,  1 >;  /**< Bypass the USB PLL.                                    */
    using PLL_LOCK           = regbits< type, 31,  1 >;  /**< USB PLL lock status indicator                          */
  };

  /**
   * USB PHY VBUS Detect Control Register
   */
  struct USB1_VBUS_DETECT
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x700004 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x700004 >;

    using VBUSVALID_THRESH        = regbits< type,  0,  3 >;  /**< Sets the threshold for the VBUSVALID comparator                                    */
    using VBUS_OVERRIDE_EN        = regbits< type,  3,  1 >;  /**< VBUS detect signal override enable                                                 */
    using SESSEND_OVERRIDE        = regbits< type,  4,  1 >;  /**< Override value for SESSEND                                                         */
    using BVALID_OVERRIDE         = regbits< type,  5,  1 >;  /**< Override value for B-Device Session Valid                                          */
    using AVALID_OVERRIDE         = regbits< type,  6,  1 >;  /**< Override value for A-Device Session Valid                                          */
    using VBUSVALID_OVERRIDE      = regbits< type,  7,  1 >;  /**< Override value for VBUS_VALID signal sent to USB controller                        */
    using VBUSVALID_SEL           = regbits< type,  8,  1 >;  /**< Selects the source of the VBUS_VALID signal reported to the USB controller         */
    using VBUS_SOURCE_SEL         = regbits< type,  9,  2 >;  /**< Selects the source of the VBUS_VALID signal reported to the USB controller         */
    using VBUSVALID_TO_SESSVALID  = regbits< type, 18,  1 >;  /**< Selects the comparator used for VBUS_VALID                                         */
    using PWRUP_CMPS              = regbits< type, 20,  1 >;  /**< Enables the VBUS_VALID comparator                                                  */
    using DISCHARGE_VBUS          = regbits< type, 26,  1 >;  /**< Controls VBUS discharge resistor                                                   */
    using EN_CHARGER_RESISTOR     = regbits< type, 31,  1 >;  /**< Enables resistors used for an older method of resistive battery charger detection  */
  };

  /**
   * USB PHY VBUS Detect Control Register
   */
  struct USB1_VBUS_DETECT_SET
  : public reg< uint32_t, base_addr + 0xc4, rw, 0x700004 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0x700004 >;

    using VBUSVALID_THRESH        = regbits< type,  0,  3 >;  /**< Sets the threshold for the VBUSVALID comparator                                    */
    using VBUS_OVERRIDE_EN        = regbits< type,  3,  1 >;  /**< VBUS detect signal override enable                                                 */
    using SESSEND_OVERRIDE        = regbits< type,  4,  1 >;  /**< Override value for SESSEND                                                         */
    using BVALID_OVERRIDE         = regbits< type,  5,  1 >;  /**< Override value for B-Device Session Valid                                          */
    using AVALID_OVERRIDE         = regbits< type,  6,  1 >;  /**< Override value for A-Device Session Valid                                          */
    using VBUSVALID_OVERRIDE      = regbits< type,  7,  1 >;  /**< Override value for VBUS_VALID signal sent to USB controller                        */
    using VBUSVALID_SEL           = regbits< type,  8,  1 >;  /**< Selects the source of the VBUS_VALID signal reported to the USB controller         */
    using VBUS_SOURCE_SEL         = regbits< type,  9,  2 >;  /**< Selects the source of the VBUS_VALID signal reported to the USB controller         */
    using VBUSVALID_TO_SESSVALID  = regbits< type, 18,  1 >;  /**< Selects the comparator used for VBUS_VALID                                         */
    using PWRUP_CMPS              = regbits< type, 20,  1 >;  /**< Enables the VBUS_VALID comparator                                                  */
    using DISCHARGE_VBUS          = regbits< type, 26,  1 >;  /**< Controls VBUS discharge resistor                                                   */
    using EN_CHARGER_RESISTOR     = regbits< type, 31,  1 >;  /**< Enables resistors used for an older method of resistive battery charger detection  */
  };

  /**
   * USB PHY VBUS Detect Control Register
   */
  struct USB1_VBUS_DETECT_CLR
  : public reg< uint32_t, base_addr + 0xc8, rw, 0x700004 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0x700004 >;

    using VBUSVALID_THRESH        = regbits< type,  0,  3 >;  /**< Sets the threshold for the VBUSVALID comparator                                    */
    using VBUS_OVERRIDE_EN        = regbits< type,  3,  1 >;  /**< VBUS detect signal override enable                                                 */
    using SESSEND_OVERRIDE        = regbits< type,  4,  1 >;  /**< Override value for SESSEND                                                         */
    using BVALID_OVERRIDE         = regbits< type,  5,  1 >;  /**< Override value for B-Device Session Valid                                          */
    using AVALID_OVERRIDE         = regbits< type,  6,  1 >;  /**< Override value for A-Device Session Valid                                          */
    using VBUSVALID_OVERRIDE      = regbits< type,  7,  1 >;  /**< Override value for VBUS_VALID signal sent to USB controller                        */
    using VBUSVALID_SEL           = regbits< type,  8,  1 >;  /**< Selects the source of the VBUS_VALID signal reported to the USB controller         */
    using VBUS_SOURCE_SEL         = regbits< type,  9,  2 >;  /**< Selects the source of the VBUS_VALID signal reported to the USB controller         */
    using VBUSVALID_TO_SESSVALID  = regbits< type, 18,  1 >;  /**< Selects the comparator used for VBUS_VALID                                         */
    using PWRUP_CMPS              = regbits< type, 20,  1 >;  /**< Enables the VBUS_VALID comparator                                                  */
    using DISCHARGE_VBUS          = regbits< type, 26,  1 >;  /**< Controls VBUS discharge resistor                                                   */
    using EN_CHARGER_RESISTOR     = regbits< type, 31,  1 >;  /**< Enables resistors used for an older method of resistive battery charger detection  */
  };

  /**
   * USB PHY VBUS Detect Control Register
   */
  struct USB1_VBUS_DETECT_TOG
  : public reg< uint32_t, base_addr + 0xcc, rw, 0x700004 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0x700004 >;

    using VBUSVALID_THRESH        = regbits< type,  0,  3 >;  /**< Sets the threshold for the VBUSVALID comparator                                    */
    using VBUS_OVERRIDE_EN        = regbits< type,  3,  1 >;  /**< VBUS detect signal override enable                                                 */
    using SESSEND_OVERRIDE        = regbits< type,  4,  1 >;  /**< Override value for SESSEND                                                         */
    using BVALID_OVERRIDE         = regbits< type,  5,  1 >;  /**< Override value for B-Device Session Valid                                          */
    using AVALID_OVERRIDE         = regbits< type,  6,  1 >;  /**< Override value for A-Device Session Valid                                          */
    using VBUSVALID_OVERRIDE      = regbits< type,  7,  1 >;  /**< Override value for VBUS_VALID signal sent to USB controller                        */
    using VBUSVALID_SEL           = regbits< type,  8,  1 >;  /**< Selects the source of the VBUS_VALID signal reported to the USB controller         */
    using VBUS_SOURCE_SEL         = regbits< type,  9,  2 >;  /**< Selects the source of the VBUS_VALID signal reported to the USB controller         */
    using VBUSVALID_TO_SESSVALID  = regbits< type, 18,  1 >;  /**< Selects the comparator used for VBUS_VALID                                         */
    using PWRUP_CMPS              = regbits< type, 20,  1 >;  /**< Enables the VBUS_VALID comparator                                                  */
    using DISCHARGE_VBUS          = regbits< type, 26,  1 >;  /**< Controls VBUS discharge resistor                                                   */
    using EN_CHARGER_RESISTOR     = regbits< type, 31,  1 >;  /**< Enables resistors used for an older method of resistive battery charger detection  */
  };

  /**
   * USB PHY VBUS Detector Status Register
   */
  struct USB1_VBUS_DET_STAT
  : public reg< uint32_t, base_addr + 0xd0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, ro, 0 >;

    using SESSEND        = regbits< type,  0,  1 >;  /**< Session End indicator          */
    using BVALID         = regbits< type,  1,  1 >;  /**< B-Device Session Valid status  */
    using AVALID         = regbits< type,  2,  1 >;  /**< A-Device Session Valid status  */
    using VBUS_VALID     = regbits< type,  3,  1 >;  /**< VBUS voltage status            */
    using VBUS_VALID_3V  = regbits< type,  4,  1 >;  /**< VBUS_VALID_3V detector status  */
  };

  /**
   * USB PHY Charger Detect Status Register
   */
  struct USB1_CHRG_DET_STAT
  : public reg< uint32_t, base_addr + 0xf0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, ro, 0 >;

    using PLUG_CONTACT   = regbits< type,  0,  1 >;  /**< Battery Charging Data Contact Detection phase output                               */
    using CHRG_DETECTED  = regbits< type,  1,  1 >;  /**< Battery Charging Primary Detection phase output                                    */
    using DM_STATE       = regbits< type,  2,  1 >;  /**< Single ended receiver output for the USB_DM pin, from charger detection circuits.  */
    using DP_STATE       = regbits< type,  3,  1 >;  /**< Single ended receiver output for the USB_DP pin, from charger detection circuits.  */
    using SECDET_DCP     = regbits< type,  4,  1 >;  /**< Battery Charging Secondary Detection phase output                                  */
  };

  /**
   * USB PHY Analog Control Register
   */
  struct ANACTRL
  : public reg< uint32_t, base_addr + 0x100, rw, 0x402 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x402 >;

    using TESTCLK_SEL      = regbits< type,  0,  1 >;  /**< Test clock selection to analog test                                                                                                                                  */
    using PFD_CLKGATE      = regbits< type,  1,  1 >;  /**< This bit field controls clock gating (disabling) for the PFD pfd_clk output for power savings when the PFD is not used                                               */
    using PFD_CLK_SEL      = regbits< type,  2,  2 >;  /**< This bit field for the PFD selects the frequency relationship between the local pfd_clk output and the exported USB1PFDCLK                                           */
    using PFD_FRAC         = regbits< type,  4,  6 >;  /**< PFD fractional divider setting used to select the pfd_clk output frequency                                                                                           */
    using DEV_PULLDOWN     = regbits< type, 10,  1 >;  /**< Setting this field to 1'b1 will enable the 15kohm pulldown resistors on both USB_DP and USB_DM pins                                                                  */
    using EMPH_PULSE_CTRL  = regbits< type, 11,  2 >;  /**< Controls pre-emphasis time duration for the High Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1                */
    using EMPH_EN          = regbits< type, 13,  1 >;  /**< Enables pre-emphasis for the High-Speed TX drivers                                                                                                                   */
    using EMPH_CUR_CTRL    = regbits< type, 14,  2 >;  /**< Controls the amount of pre-emphasis current added for the High-Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1  */
    using PFD_STABLE       = regbits< type, 31,  1 >;  /**< PFD stable signal from the Phase Fractional Divider.                                                                                                                 */
  };

  /**
   * USB PHY Analog Control Register
   */
  struct ANACTRL_SET
  : public reg< uint32_t, base_addr + 0x104, rw, 0x402 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x402 >;

    using TESTCLK_SEL      = regbits< type,  0,  1 >;  /**< Test clock selection to analog test                                                                                                                                  */
    using PFD_CLKGATE      = regbits< type,  1,  1 >;  /**< This bit field controls clock gating (disabling) for the PFD pfd_clk output for power savings when the PFD is not used                                               */
    using PFD_CLK_SEL      = regbits< type,  2,  2 >;  /**< This bit field for the PFD selects the frequency relationship between the local pfd_clk output and the exported USB1PFDCLK                                           */
    using PFD_FRAC         = regbits< type,  4,  6 >;  /**< PFD fractional divider setting used to select the pfd_clk output frequency                                                                                           */
    using DEV_PULLDOWN     = regbits< type, 10,  1 >;  /**< Setting this field to 1'b1 will enable the 15kohm pulldown resistors on both USB_DP and USB_DM pins                                                                  */
    using EMPH_PULSE_CTRL  = regbits< type, 11,  2 >;  /**< Controls pre-emphasis time duration for the High Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1                */
    using EMPH_EN          = regbits< type, 13,  1 >;  /**< Enables pre-emphasis for the High-Speed TX drivers                                                                                                                   */
    using EMPH_CUR_CTRL    = regbits< type, 14,  2 >;  /**< Controls the amount of pre-emphasis current added for the High-Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1  */
    using PFD_STABLE       = regbits< type, 31,  1 >;  /**< PFD stable signal from the Phase Fractional Divider.                                                                                                                 */
  };

  /**
   * USB PHY Analog Control Register
   */
  struct ANACTRL_CLR
  : public reg< uint32_t, base_addr + 0x108, rw, 0x402 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x402 >;

    using TESTCLK_SEL      = regbits< type,  0,  1 >;  /**< Test clock selection to analog test                                                                                                                                  */
    using PFD_CLKGATE      = regbits< type,  1,  1 >;  /**< This bit field controls clock gating (disabling) for the PFD pfd_clk output for power savings when the PFD is not used                                               */
    using PFD_CLK_SEL      = regbits< type,  2,  2 >;  /**< This bit field for the PFD selects the frequency relationship between the local pfd_clk output and the exported USB1PFDCLK                                           */
    using PFD_FRAC         = regbits< type,  4,  6 >;  /**< PFD fractional divider setting used to select the pfd_clk output frequency                                                                                           */
    using DEV_PULLDOWN     = regbits< type, 10,  1 >;  /**< Setting this field to 1'b1 will enable the 15kohm pulldown resistors on both USB_DP and USB_DM pins                                                                  */
    using EMPH_PULSE_CTRL  = regbits< type, 11,  2 >;  /**< Controls pre-emphasis time duration for the High Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1                */
    using EMPH_EN          = regbits< type, 13,  1 >;  /**< Enables pre-emphasis for the High-Speed TX drivers                                                                                                                   */
    using EMPH_CUR_CTRL    = regbits< type, 14,  2 >;  /**< Controls the amount of pre-emphasis current added for the High-Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1  */
    using PFD_STABLE       = regbits< type, 31,  1 >;  /**< PFD stable signal from the Phase Fractional Divider.                                                                                                                 */
  };

  /**
   * USB PHY Analog Control Register
   */
  struct ANACTRL_TOG
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x402 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x402 >;

    using TESTCLK_SEL      = regbits< type,  0,  1 >;  /**< Test clock selection to analog test                                                                                                                                  */
    using PFD_CLKGATE      = regbits< type,  1,  1 >;  /**< This bit field controls clock gating (disabling) for the PFD pfd_clk output for power savings when the PFD is not used                                               */
    using PFD_CLK_SEL      = regbits< type,  2,  2 >;  /**< This bit field for the PFD selects the frequency relationship between the local pfd_clk output and the exported USB1PFDCLK                                           */
    using PFD_FRAC         = regbits< type,  4,  6 >;  /**< PFD fractional divider setting used to select the pfd_clk output frequency                                                                                           */
    using DEV_PULLDOWN     = regbits< type, 10,  1 >;  /**< Setting this field to 1'b1 will enable the 15kohm pulldown resistors on both USB_DP and USB_DM pins                                                                  */
    using EMPH_PULSE_CTRL  = regbits< type, 11,  2 >;  /**< Controls pre-emphasis time duration for the High Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1                */
    using EMPH_EN          = regbits< type, 13,  1 >;  /**< Enables pre-emphasis for the High-Speed TX drivers                                                                                                                   */
    using EMPH_CUR_CTRL    = regbits< type, 14,  2 >;  /**< Controls the amount of pre-emphasis current added for the High-Speed TX drivers after each data transition when the USBPHY_ANACTRL[EMPH_EN] bit is set high to 1'b1  */
    using PFD_STABLE       = regbits< type, 31,  1 >;  /**< PFD stable signal from the Phase Fractional Divider.                                                                                                                 */
  };

  /**
   * USB PHY Loopback Control/Status Register
   */
  struct USB1_LOOPBACK
  : public reg< uint32_t, base_addr + 0x110, rw, 0x550000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x550000 >;

    using UTMI_TESTSTART     = regbits< type,  0,  1 >;  /**< This bit enables the USB loopback test.                                                                                             */
    using UTMI_DIG_TST0      = regbits< type,  1,  1 >;  /**< Mode control for USB loopback test                                                                                                  */
    using UTMI_DIG_TST1      = regbits< type,  2,  1 >;  /**< Mode control for USB loopback test                                                                                                  */
    using TSTI_TX_HS_MODE    = regbits< type,  3,  1 >;  /**< Select HS or FS mode for USB loopback testing                                                                                       */
    using TSTI_TX_LS_MODE    = regbits< type,  4,  1 >;  /**< Set to value 1'b1 to choose LS for USB loopback testing, set to value 1'b0 to choose HS or FS mode which is defined by TSTI1_TX_HS  */
    using TSTI_TX_EN         = regbits< type,  5,  1 >;  /**< Enable TX for USB loopback test.                                                                                                    */
    using TSTI_TX_HIZ        = regbits< type,  6,  1 >;  /**< Sets TX Hi-Z for USB loopback test.                                                                                                 */
    using UTMO_DIG_TST0      = regbits< type,  7,  1 >;  /**< This read-only bit is a status bit for USB loopback test results                                                                    */
    using UTMO_DIG_TST1      = regbits< type,  8,  1 >;  /**< This read-only bit is a status bit for USB loopback test                                                                            */
    using TSTI_HSFS_MODE_EN  = regbits< type, 15,  1 >;  /**< Setting this bit field to value 1'b1 will enable the loopback test to dynamically change the packet speed                           */
    using TSTPKT             = regbits< type, 16,  8 >;  /**< Selects the packet data byte used for USB loopback testing in Pulse mode                                                            */
  };

  /**
   * USB PHY Loopback Control/Status Register
   */
  struct USB1_LOOPBACK_SET
  : public reg< uint32_t, base_addr + 0x114, rw, 0x550000 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x550000 >;

    using UTMI_TESTSTART     = regbits< type,  0,  1 >;  /**< This bit enables the USB loopback test.                                                                                             */
    using UTMI_DIG_TST0      = regbits< type,  1,  1 >;  /**< Mode control for USB loopback test                                                                                                  */
    using UTMI_DIG_TST1      = regbits< type,  2,  1 >;  /**< Mode control for USB loopback test                                                                                                  */
    using TSTI_TX_HS_MODE    = regbits< type,  3,  1 >;  /**< Select HS or FS mode for USB loopback testing                                                                                       */
    using TSTI_TX_LS_MODE    = regbits< type,  4,  1 >;  /**< Set to value 1'b1 to choose LS for USB loopback testing, set to value 1'b0 to choose HS or FS mode which is defined by TSTI1_TX_HS  */
    using TSTI_TX_EN         = regbits< type,  5,  1 >;  /**< Enable TX for USB loopback test.                                                                                                    */
    using TSTI_TX_HIZ        = regbits< type,  6,  1 >;  /**< Sets TX Hi-Z for USB loopback test.                                                                                                 */
    using UTMO_DIG_TST0      = regbits< type,  7,  1 >;  /**< This read-only bit is a status bit for USB loopback test results                                                                    */
    using UTMO_DIG_TST1      = regbits< type,  8,  1 >;  /**< This read-only bit is a status bit for USB loopback test                                                                            */
    using TSTI_HSFS_MODE_EN  = regbits< type, 15,  1 >;  /**< Setting this bit field to value 1'b1 will enable the loopback test to dynamically change the packet speed                           */
    using TSTPKT             = regbits< type, 16,  8 >;  /**< Selects the packet data byte used for USB loopback testing in Pulse mode                                                            */
  };

  /**
   * USB PHY Loopback Control/Status Register
   */
  struct USB1_LOOPBACK_CLR
  : public reg< uint32_t, base_addr + 0x118, rw, 0x550000 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0x550000 >;

    using UTMI_TESTSTART     = regbits< type,  0,  1 >;  /**< This bit enables the USB loopback test.                                                                                             */
    using UTMI_DIG_TST0      = regbits< type,  1,  1 >;  /**< Mode control for USB loopback test                                                                                                  */
    using UTMI_DIG_TST1      = regbits< type,  2,  1 >;  /**< Mode control for USB loopback test                                                                                                  */
    using TSTI_TX_HS_MODE    = regbits< type,  3,  1 >;  /**< Select HS or FS mode for USB loopback testing                                                                                       */
    using TSTI_TX_LS_MODE    = regbits< type,  4,  1 >;  /**< Set to value 1'b1 to choose LS for USB loopback testing, set to value 1'b0 to choose HS or FS mode which is defined by TSTI1_TX_HS  */
    using TSTI_TX_EN         = regbits< type,  5,  1 >;  /**< Enable TX for USB loopback test.                                                                                                    */
    using TSTI_TX_HIZ        = regbits< type,  6,  1 >;  /**< Sets TX Hi-Z for USB loopback test.                                                                                                 */
    using UTMO_DIG_TST0      = regbits< type,  7,  1 >;  /**< This read-only bit is a status bit for USB loopback test results                                                                    */
    using UTMO_DIG_TST1      = regbits< type,  8,  1 >;  /**< This read-only bit is a status bit for USB loopback test                                                                            */
    using TSTI_HSFS_MODE_EN  = regbits< type, 15,  1 >;  /**< Setting this bit field to value 1'b1 will enable the loopback test to dynamically change the packet speed                           */
    using TSTPKT             = regbits< type, 16,  8 >;  /**< Selects the packet data byte used for USB loopback testing in Pulse mode                                                            */
  };

  /**
   * USB PHY Loopback Control/Status Register
   */
  struct USB1_LOOPBACK_TOG
  : public reg< uint32_t, base_addr + 0x11c, rw, 0x550000 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0x550000 >;

    using UTMI_TESTSTART     = regbits< type,  0,  1 >;  /**< This bit enables the USB loopback test.                                                                                             */
    using UTMI_DIG_TST0      = regbits< type,  1,  1 >;  /**< Mode control for USB loopback test                                                                                                  */
    using UTMI_DIG_TST1      = regbits< type,  2,  1 >;  /**< Mode control for USB loopback test                                                                                                  */
    using TSTI_TX_HS_MODE    = regbits< type,  3,  1 >;  /**< Select HS or FS mode for USB loopback testing                                                                                       */
    using TSTI_TX_LS_MODE    = regbits< type,  4,  1 >;  /**< Set to value 1'b1 to choose LS for USB loopback testing, set to value 1'b0 to choose HS or FS mode which is defined by TSTI1_TX_HS  */
    using TSTI_TX_EN         = regbits< type,  5,  1 >;  /**< Enable TX for USB loopback test.                                                                                                    */
    using TSTI_TX_HIZ        = regbits< type,  6,  1 >;  /**< Sets TX Hi-Z for USB loopback test.                                                                                                 */
    using UTMO_DIG_TST0      = regbits< type,  7,  1 >;  /**< This read-only bit is a status bit for USB loopback test results                                                                    */
    using UTMO_DIG_TST1      = regbits< type,  8,  1 >;  /**< This read-only bit is a status bit for USB loopback test                                                                            */
    using TSTI_HSFS_MODE_EN  = regbits< type, 15,  1 >;  /**< Setting this bit field to value 1'b1 will enable the loopback test to dynamically change the packet speed                           */
    using TSTPKT             = regbits< type, 16,  8 >;  /**< Selects the packet data byte used for USB loopback testing in Pulse mode                                                            */
  };

  /**
   * USB PHY Loopback Packet Number Select Register
   */
  struct USB1_LOOPBACK_HSFSCNT
  : public reg< uint32_t, base_addr + 0x120, rw, 0x40010 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x40010 >;

    using TSTI_HS_NUMBER  = regbits< type,  0, 16 >;  /**< High speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1.  */
    using TSTI_FS_NUMBER  = regbits< type, 16, 16 >;  /**< Full speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1.  */
  };

  /**
   * USB PHY Loopback Packet Number Select Register
   */
  struct USB1_LOOPBACK_HSFSCNT_SET
  : public reg< uint32_t, base_addr + 0x124, rw, 0x40010 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x40010 >;

    using TSTI_HS_NUMBER  = regbits< type,  0, 16 >;  /**< High speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1.  */
    using TSTI_FS_NUMBER  = regbits< type, 16, 16 >;  /**< Full speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1.  */
  };

  /**
   * USB PHY Loopback Packet Number Select Register
   */
  struct USB1_LOOPBACK_HSFSCNT_CLR
  : public reg< uint32_t, base_addr + 0x128, rw, 0x40010 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x40010 >;

    using TSTI_HS_NUMBER  = regbits< type,  0, 16 >;  /**< High speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1.  */
    using TSTI_FS_NUMBER  = regbits< type, 16, 16 >;  /**< Full speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1.  */
  };

  /**
   * USB PHY Loopback Packet Number Select Register
   */
  struct USB1_LOOPBACK_HSFSCNT_TOG
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x40010 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x40010 >;

    using TSTI_HS_NUMBER  = regbits< type,  0, 16 >;  /**< High speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1.  */
    using TSTI_FS_NUMBER  = regbits< type, 16, 16 >;  /**< Full speed packet number, used when USBPHY_USB1_LOOPBACK[TSTI_HSFS_MODE_EN] is set to value 1'b1.  */
  };

  /**
   * USB PHY Trim Override Enable Register
   */
  struct TRIM_OVERRIDE_EN
  : public reg< uint32_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0 >;

    using TRIM_DIV_SEL_OVERRIDE          = regbits< type,  0,  1 >;  /**< Override enable for PLL_DIV_SEL, when set, the register value in USBPHY_PLL_SIC[1:0] will be used.   */
    using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE  = regbits< type,  1,  1 >;  /**< Override enable for ENV_TAIL_ADJ, when set, the register value in USBPHY_DEBUG1[14:13] will be used  */
    using TRIM_TX_D_CAL_OVERRIDE         = regbits< type,  2,  1 >;  /**< Override enable for TX_D_CAL, when set, the register value in USBPHY_TX[3:0] will be used.           */
    using TRIM_TX_CAL45DP_OVERRIDE       = regbits< type,  3,  1 >;  /**< Override enable for TX_CAL45DP, when set, the register value in USBPHY_TX[19:16] will be used.       */
    using TRIM_TX_CAL45DM_OVERRIDE       = regbits< type,  4,  1 >;  /**< Override enable for TX_CAL45DM, when set, the register value in USBPHY_TX[11:8] will be used.        */
    using TRIM_PLL_CTRL0_DIV_SEL         = regbits< type, 16,  2 >;  /**< IFR value of PLL_DIV_SEL.                                                                            */
    using TRIM_USB_REG_ENV_TAIL_ADJ_VD   = regbits< type, 18,  2 >;  /**< IFR value of ENV_TAIL_ADJ.                                                                           */
    using TRIM_USBPHY_TX_D_CAL           = regbits< type, 20,  4 >;  /**< IFR value of TX_D_CAL.                                                                               */
    using TRIM_USBPHY_TX_CAL45DP         = regbits< type, 24,  4 >;  /**< IFR value of TX_CAL45DP.                                                                             */
    using TRIM_USBPHY_TX_CAL45DM         = regbits< type, 28,  4 >;  /**< IFR value of TX_CAL45DM.                                                                             */
  };

  /**
   * USB PHY Trim Override Enable Register
   */
  struct TRIM_OVERRIDE_EN_SET
  : public reg< uint32_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0 >;

    using TRIM_DIV_SEL_OVERRIDE          = regbits< type,  0,  1 >;  /**< Override enable for PLL_DIV_SEL, when set, the register value in USBPHY_PLL_SIC[1:0] will be used.   */
    using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE  = regbits< type,  1,  1 >;  /**< Override enable for ENV_TAIL_ADJ, when set, the register value in USBPHY_DEBUG1[14:13] will be used  */
    using TRIM_TX_D_CAL_OVERRIDE         = regbits< type,  2,  1 >;  /**< Override enable for TX_D_CAL, when set, the register value in USBPHY_TX[3:0] will be used.           */
    using TRIM_TX_CAL45DP_OVERRIDE       = regbits< type,  3,  1 >;  /**< Override enable for TX_CAL45DP, when set, the register value in USBPHY_TX[19:16] will be used.       */
    using TRIM_TX_CAL45DM_OVERRIDE       = regbits< type,  4,  1 >;  /**< Override enable for TX_CAL45DM, when set, the register value in USBPHY_TX[11:8] will be used.        */
    using TRIM_PLL_CTRL0_DIV_SEL         = regbits< type, 16,  2 >;  /**< IFR value of PLL_DIV_SEL.                                                                            */
    using TRIM_USB_REG_ENV_TAIL_ADJ_VD   = regbits< type, 18,  2 >;  /**< IFR value of ENV_TAIL_ADJ.                                                                           */
    using TRIM_USBPHY_TX_D_CAL           = regbits< type, 20,  4 >;  /**< IFR value of TX_D_CAL.                                                                               */
    using TRIM_USBPHY_TX_CAL45DP         = regbits< type, 24,  4 >;  /**< IFR value of TX_CAL45DP.                                                                             */
    using TRIM_USBPHY_TX_CAL45DM         = regbits< type, 28,  4 >;  /**< IFR value of TX_CAL45DM.                                                                             */
  };

  /**
   * USB PHY Trim Override Enable Register
   */
  struct TRIM_OVERRIDE_EN_CLR
  : public reg< uint32_t, base_addr + 0x138, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x138, rw, 0 >;

    using TRIM_DIV_SEL_OVERRIDE          = regbits< type,  0,  1 >;  /**< Override enable for PLL_DIV_SEL, when set, the register value in USBPHY_PLL_SIC[1:0] will be used.   */
    using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE  = regbits< type,  1,  1 >;  /**< Override enable for ENV_TAIL_ADJ, when set, the register value in USBPHY_DEBUG1[14:13] will be used  */
    using TRIM_TX_D_CAL_OVERRIDE         = regbits< type,  2,  1 >;  /**< Override enable for TX_D_CAL, when set, the register value in USBPHY_TX[3:0] will be used.           */
    using TRIM_TX_CAL45DP_OVERRIDE       = regbits< type,  3,  1 >;  /**< Override enable for TX_CAL45DP, when set, the register value in USBPHY_TX[19:16] will be used.       */
    using TRIM_TX_CAL45DM_OVERRIDE       = regbits< type,  4,  1 >;  /**< Override enable for TX_CAL45DM, when set, the register value in USBPHY_TX[11:8] will be used.        */
    using TRIM_PLL_CTRL0_DIV_SEL         = regbits< type, 16,  2 >;  /**< IFR value of PLL_DIV_SEL.                                                                            */
    using TRIM_USB_REG_ENV_TAIL_ADJ_VD   = regbits< type, 18,  2 >;  /**< IFR value of ENV_TAIL_ADJ.                                                                           */
    using TRIM_USBPHY_TX_D_CAL           = regbits< type, 20,  4 >;  /**< IFR value of TX_D_CAL.                                                                               */
    using TRIM_USBPHY_TX_CAL45DP         = regbits< type, 24,  4 >;  /**< IFR value of TX_CAL45DP.                                                                             */
    using TRIM_USBPHY_TX_CAL45DM         = regbits< type, 28,  4 >;  /**< IFR value of TX_CAL45DM.                                                                             */
  };

  /**
   * USB PHY Trim Override Enable Register
   */
  struct TRIM_OVERRIDE_EN_TOG
  : public reg< uint32_t, base_addr + 0x13c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x13c, rw, 0 >;

    using TRIM_DIV_SEL_OVERRIDE          = regbits< type,  0,  1 >;  /**< Override enable for PLL_DIV_SEL, when set, the register value in USBPHY_PLL_SIC[1:0] will be used.   */
    using TRIM_ENV_TAIL_ADJ_VD_OVERRIDE  = regbits< type,  1,  1 >;  /**< Override enable for ENV_TAIL_ADJ, when set, the register value in USBPHY_DEBUG1[14:13] will be used  */
    using TRIM_TX_D_CAL_OVERRIDE         = regbits< type,  2,  1 >;  /**< Override enable for TX_D_CAL, when set, the register value in USBPHY_TX[3:0] will be used.           */
    using TRIM_TX_CAL45DP_OVERRIDE       = regbits< type,  3,  1 >;  /**< Override enable for TX_CAL45DP, when set, the register value in USBPHY_TX[19:16] will be used.       */
    using TRIM_TX_CAL45DM_OVERRIDE       = regbits< type,  4,  1 >;  /**< Override enable for TX_CAL45DM, when set, the register value in USBPHY_TX[11:8] will be used.        */
    using TRIM_PLL_CTRL0_DIV_SEL         = regbits< type, 16,  2 >;  /**< IFR value of PLL_DIV_SEL.                                                                            */
    using TRIM_USB_REG_ENV_TAIL_ADJ_VD   = regbits< type, 18,  2 >;  /**< IFR value of ENV_TAIL_ADJ.                                                                           */
    using TRIM_USBPHY_TX_D_CAL           = regbits< type, 20,  4 >;  /**< IFR value of TX_D_CAL.                                                                               */
    using TRIM_USBPHY_TX_CAL45DP         = regbits< type, 24,  4 >;  /**< IFR value of TX_CAL45DP.                                                                             */
    using TRIM_USBPHY_TX_CAL45DM         = regbits< type, 28,  4 >;  /**< IFR value of TX_CAL45DM.                                                                             */
  };
};
} // namespace mptl

#endif // ARCH_REG_USBPHY_HPP_INCLUDED
