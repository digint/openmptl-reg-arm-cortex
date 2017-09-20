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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123BE6PZ.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123BE6PZ
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

#ifndef ARCH_REG_FLASH_CTRL_HPP_INCLUDED
#define ARCH_REG_FLASH_CTRL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for FLASH_CTRL peripheral
 */
struct FLASH_CTRL
{
  static constexpr reg_addr_t base_addr = 0x400fd000;

  /**
   * Flash Memory Address
   */
  struct FMA
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FMA_OFFSET  = regbits< type,  0, 17 >;  /**< Address Offset  */
  };

  /**
   * Flash Memory Data
   */
  struct FMD
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FMD_DATA  = regbits< type,  0, 32 >;  /**< Data Value  */
  };

  /**
   * Flash Memory Control
   */
  struct FMC
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FMC_WRITE   = regbits< type,  0,  1 >;  /**< Write a Word into Flash Memory  */
    using FLASH_FMC_ERASE   = regbits< type,  1,  1 >;  /**< Erase a Page of Flash Memory    */
    using FLASH_FMC_MERASE  = regbits< type,  2,  1 >;  /**< Mass Erase Flash Memory         */
    using FLASH_FMC_COMT    = regbits< type,  3,  1 >;  /**< Commit Register Value           */
    using FLASH_FMC_WRKEY   = regbits< type, 17, 15 >;  /**< FLASH write key                 */
  };

  /**
   * Flash Controller Raw Interrupt Status
   */
  struct FCRIS
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FCRIS_ARIS     = regbits< type,  0,  1 >;  /**< Access Raw Interrupt Status        */
    using FLASH_FCRIS_PRIS     = regbits< type,  1,  1 >;  /**< Programming Raw Interrupt Status   */
    using FLASH_FCRIS_ERIS     = regbits< type,  2,  1 >;  /**< EEPROM Raw Interrupt Status        */
    using FLASH_FCRIS_VOLTRIS  = regbits< type,  9,  1 >;  /**< VOLTSTAT Raw Interrupt Status      */
    using FLASH_FCRIS_INVDRIS  = regbits< type, 10,  1 >;  /**< Invalid Data Raw Interrupt Status  */
    using FLASH_FCRIS_ERRIS    = regbits< type, 11,  1 >;  /**< ERVER Raw Interrupt Status         */
    using FLASH_FCRIS_PROGRIS  = regbits< type, 13,  1 >;  /**< PROGVER Raw Interrupt Status       */
  };

  /**
   * Flash Controller Interrupt Mask
   */
  struct FCIM
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FCIM_AMASK     = regbits< type,  0,  1 >;  /**< Access Interrupt Mask        */
    using FLASH_FCIM_PMASK     = regbits< type,  1,  1 >;  /**< Programming Interrupt Mask   */
    using FLASH_FCIM_EMASK     = regbits< type,  2,  1 >;  /**< EEPROM Interrupt Mask        */
    using FLASH_FCIM_VOLTMASK  = regbits< type,  9,  1 >;  /**< VOLT Interrupt Mask          */
    using FLASH_FCIM_INVDMASK  = regbits< type, 10,  1 >;  /**< Invalid Data Interrupt Mask  */
    using FLASH_FCIM_ERMASK    = regbits< type, 11,  1 >;  /**< ERVER Interrupt Mask         */
    using FLASH_FCIM_PROGMASK  = regbits< type, 13,  1 >;  /**< PROGVER Interrupt Mask       */
  };

  /**
   * Flash Controller Masked Interrupt Status and Clear
   */
  struct FCMISC
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FCMISC_AMISC     = regbits< type,  0,  1 >;  /**< Access Masked Interrupt Status and Clear        */
    using FLASH_FCMISC_PMISC     = regbits< type,  1,  1 >;  /**< Programming Masked Interrupt Status and Clear   */
    using FLASH_FCMISC_EMISC     = regbits< type,  2,  1 >;  /**< EEPROM Masked Interrupt Status and Clear        */
    using FLASH_FCMISC_VOLTMISC  = regbits< type,  9,  1 >;  /**< VOLT Masked Interrupt Status and Clear          */
    using FLASH_FCMISC_INVDMISC  = regbits< type, 10,  1 >;  /**< Invalid Data Masked Interrupt Status and Clear  */
    using FLASH_FCMISC_ERMISC    = regbits< type, 11,  1 >;  /**< ERVER Masked Interrupt Status and Clear         */
    using FLASH_FCMISC_PROGMISC  = regbits< type, 13,  1 >;  /**< PROGVER Masked Interrupt Status and Clear       */
  };

  /**
   * Flash Memory Control 2
   */
  struct FMC2
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FMC2_WRBUF  = regbits< type,  0,  1 >;  /**< Buffered Flash Memory Write  */
  };

  /**
   * Flash Write Buffer Valid
   */
  struct FWBVAL
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FWBVAL_FWB  = regbits< type,  0, 32 >;  /**< Flash Memory Write Buffer  */
  };

  /**
   * Flash Write Buffer n
   */
  struct FWBN
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FWBN_DATA  = regbits< type,  0, 32 >;  /**< Data  */
  };

  /**
   * Flash Size
   */
  struct FSIZE
  : public reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_FSIZE_SIZE  = regbits< type,  0, 16 >;  /**< Flash Size  */
  };

  /**
   * SRAM Size
   */
  struct SSIZE
  : public reg< uint32_t, base_addr + 0x00000fc4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fc4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_SSIZE_SIZE  = regbits< type,  0, 16 >;  /**< SRAM Size  */
  };

  /**
   * ROM Software Map
   */
  struct ROMSWMAP
  : public reg< uint32_t, base_addr + 0x00000fcc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ROM Software Map
   */
  struct ROMSWMAP
  : public reg< uint32_t, base_addr + 0x00000fcc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000fcc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_ROMSWMAP_SAFERTOS  = regbits< type,  0,  1 >;  /**< SafeRTOS Present  */
  };

  /**
   * ROM Control
   */
  struct RMCTL
  : public reg< uint32_t, base_addr + 0x000010f0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000010f0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_RMCTL_BA  = regbits< type,  0,  1 >;  /**< Boot Alias  */
  };

  /**
   * Boot Configuration
   */
  struct BOOTCFG
  : public reg< uint32_t, base_addr + 0x000011d0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000011d0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_BOOTCFG_DBG0  = regbits< type,  0,  1 >;  /**< Debug Control 0     */
    using FLASH_BOOTCFG_DBG1  = regbits< type,  1,  1 >;  /**< Debug Control 1     */
    using FLASH_BOOTCFG_KEY   = regbits< type,  4,  1 >;  /**< KEY Select          */
    using FLASH_BOOTCFG_EN    = regbits< type,  8,  1 >;  /**< Boot GPIO Enable    */
    using FLASH_BOOTCFG_POL   = regbits< type,  9,  1 >;  /**< Boot GPIO Polarity  */
    using FLASH_BOOTCFG_PIN   = regbits< type, 10,  3 >;  /**< Boot GPIO Pin       */
    using FLASH_BOOTCFG_PORT  = regbits< type, 13,  3 >;  /**< Boot GPIO Port      */
    using FLASH_BOOTCFG_NW    = regbits< type, 31,  1 >;  /**< Not Written         */
  };

  /**
   * User Register 0
   */
  struct USERREG0
  : public reg< uint32_t, base_addr + 0x000011e0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000011e0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_USERREG0_DATA  = regbits< type,  0, 32 >;  /**< User Data  */
  };

  /**
   * User Register 1
   */
  struct USERREG1
  : public reg< uint32_t, base_addr + 0x000011e4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000011e4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_USERREG1_DATA  = regbits< type,  0, 32 >;  /**< User Data  */
  };

  /**
   * User Register 2
   */
  struct USERREG2
  : public reg< uint32_t, base_addr + 0x000011e8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000011e8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_USERREG2_DATA  = regbits< type,  0, 32 >;  /**< User Data  */
  };

  /**
   * User Register 3
   */
  struct USERREG3
  : public reg< uint32_t, base_addr + 0x000011ec, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000011ec, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FLASH_USERREG3_DATA  = regbits< type,  0, 32 >;  /**< User Data  */
  };

  /**
   * Flash Memory Protection Read Enable 0
   */
  struct FMPRE0
  : public reg< uint32_t, base_addr + 0x00001200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Flash Memory Protection Read Enable 1
   */
  struct FMPRE1
  : public reg< uint32_t, base_addr + 0x00001204, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Flash Memory Protection Program Enable 0
   */
  struct FMPPE0
  : public reg< uint32_t, base_addr + 0x00001400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Flash Memory Protection Program Enable 1
   */
  struct FMPPE1
  : public reg< uint32_t, base_addr + 0x00001404, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_CTRL_HPP_INCLUDED
