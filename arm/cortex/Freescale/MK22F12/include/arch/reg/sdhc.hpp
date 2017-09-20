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
//  Import from CMSIS-SVD: "Freescale/MK22F12.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK22F12
//  series: Kinetis_K
//  version: 1.6
//  description: MK22F12 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SDHC_HPP_INCLUDED
#define ARCH_REG_SDHC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Secured Digital Host Controller
 */
struct SDHC
{
  static constexpr reg_addr_t base_addr = 0x400b1000;

  /**
   * DMA System Address register
   */
  struct DSADDR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    // fixme: Field name equals parent register name: DSADDR
    using DSADDR_ = regbits< type,  2, 30 >;  /**< DMA System Address  */
  };

  /**
   * Block Attributes register
   */
  struct BLKATTR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using BLKSIZE  = regbits< type,  0, 13 >;  /**< Transfer Block Size                */
    using BLKCNT   = regbits< type, 16, 16 >;  /**< Blocks Count For Current Transfer  */
  };

  /**
   * Command Argument register
   */
  struct CMDARG
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    // fixme: Field name equals parent register name: CMDARG
    using CMDARG_ = regbits< type,  0, 32 >;  /**< Command Argument  */
  };

  /**
   * Transfer Type register
   */
  struct XFERTYP
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using DMAEN   = regbits< type,  0,  1 >;  /**< DMA Enable                      */
    using BCEN    = regbits< type,  1,  1 >;  /**< Block Count Enable              */
    using AC12EN  = regbits< type,  2,  1 >;  /**< Auto CMD12 Enable               */
    using DTDSEL  = regbits< type,  4,  1 >;  /**< Data Transfer Direction Select  */
    using MSBSEL  = regbits< type,  5,  1 >;  /**< Multi/Single Block Select       */
    using RSPTYP  = regbits< type, 16,  2 >;  /**< Response Type Select            */
    using CCCEN   = regbits< type, 19,  1 >;  /**< Command CRC Check Enable        */
    using CICEN   = regbits< type, 20,  1 >;  /**< Command Index Check Enable      */
    using DPSEL   = regbits< type, 21,  1 >;  /**< Data Present Select             */
    using CMDTYP  = regbits< type, 22,  2 >;  /**< Command Type                    */
    using CMDINX  = regbits< type, 24,  6 >;  /**< Command Index                   */
  };

  /**
   * Command Response 0
   */
  struct CMDRSP0
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    // fixme: Field name equals parent register name: CMDRSP0
    using CMDRSP0_ = regbits< type,  0, 32 >;  /**< Command Response 0  */
  };

  /**
   * Command Response 1
   */
  struct CMDRSP1
  : public reg< uint32_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0 >;

    // fixme: Field name equals parent register name: CMDRSP1
    using CMDRSP1_ = regbits< type,  0, 32 >;  /**< Command Response 1  */
  };

  /**
   * Command Response 2
   */
  struct CMDRSP2
  : public reg< uint32_t, base_addr + 0x18, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0 >;

    // fixme: Field name equals parent register name: CMDRSP2
    using CMDRSP2_ = regbits< type,  0, 32 >;  /**< Command Response 2  */
  };

  /**
   * Command Response 3
   */
  struct CMDRSP3
  : public reg< uint32_t, base_addr + 0x1c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0 >;

    // fixme: Field name equals parent register name: CMDRSP3
    using CMDRSP3_ = regbits< type,  0, 32 >;  /**< Command Response 3  */
  };

  /**
   * Buffer Data Port register
   */
  struct DATPORT
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using DATCONT  = regbits< type,  0, 32 >;  /**< Data Content  */
  };

  /**
   * Present State register
   */
  struct PRSSTAT
  : public reg< uint32_t, base_addr + 0x24, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0 >;

    using CIHB    = regbits< type,  0,  1 >;  /**< Command Inhibit (CMD)              */
    using CDIHB   = regbits< type,  1,  1 >;  /**< Command Inhibit (DAT)              */
    using DLA     = regbits< type,  2,  1 >;  /**< Data Line Active                   */
    using SDSTB   = regbits< type,  3,  1 >;  /**< SD Clock Stable                    */
    using IPGOFF  = regbits< type,  4,  1 >;  /**< Bus Clock Gated Off Internally     */
    using HCKOFF  = regbits< type,  5,  1 >;  /**< System Clock Gated Off Internally  */
    using PEROFF  = regbits< type,  6,  1 >;  /**< SDHC clock Gated Off Internally    */
    using SDOFF   = regbits< type,  7,  1 >;  /**< SD Clock Gated Off Internally      */
    using WTA     = regbits< type,  8,  1 >;  /**< Write Transfer Active              */
    using RTA     = regbits< type,  9,  1 >;  /**< Read Transfer Active               */
    using BWEN    = regbits< type, 10,  1 >;  /**< Buffer Write Enable                */
    using BREN    = regbits< type, 11,  1 >;  /**< Buffer Read Enable                 */
    using CINS    = regbits< type, 16,  1 >;  /**< Card Inserted                      */
    using CLSL    = regbits< type, 23,  1 >;  /**< CMD Line Signal Level              */
    using DLSL    = regbits< type, 24,  8 >;  /**< DAT Line Signal Level              */
  };

  /**
   * Protocol Control register
   */
  struct PROCTL
  : public reg< uint32_t, base_addr + 0x28, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x20 >;

    using LCTL     = regbits< type,  0,  1 >;  /**< LED Control                               */
    using DTW      = regbits< type,  1,  2 >;  /**< Data Transfer Width                       */
    using D3CD     = regbits< type,  3,  1 >;  /**< DAT3 As Card Detection Pin                */
    using EMODE    = regbits< type,  4,  2 >;  /**< Endian Mode                               */
    using CDTL     = regbits< type,  6,  1 >;  /**< Card Detect Test Level                    */
    using CDSS     = regbits< type,  7,  1 >;  /**< Card Detect Signal Selection              */
    using DMAS     = regbits< type,  8,  2 >;  /**< DMA Select                                */
    using SABGREQ  = regbits< type, 16,  1 >;  /**< Stop At Block Gap Request                 */
    using CREQ     = regbits< type, 17,  1 >;  /**< Continue Request                          */
    using RWCTL    = regbits< type, 18,  1 >;  /**< Read Wait Control                         */
    using IABG     = regbits< type, 19,  1 >;  /**< Interrupt At Block Gap                    */
    using WECINT   = regbits< type, 24,  1 >;  /**< Wakeup Event Enable On Card Interrupt     */
    using WECINS   = regbits< type, 25,  1 >;  /**< Wakeup Event Enable On SD Card Insertion  */
    using WECRM    = regbits< type, 26,  1 >;  /**< Wakeup Event Enable On SD Card Removal    */
  };

  /**
   * System Control register
   */
  struct SYSCTL
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x8008 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x8008 >;

    using IPGEN    = regbits< type,  0,  1 >;  /**< IPG Clock Enable             */
    using HCKEN    = regbits< type,  1,  1 >;  /**< System Clock Enable          */
    using PEREN    = regbits< type,  2,  1 >;  /**< Peripheral Clock Enable      */
    using SDCLKEN  = regbits< type,  3,  1 >;  /**< SD Clock Enable              */
    using DVS      = regbits< type,  4,  4 >;  /**< Divisor                      */
    using SDCLKFS  = regbits< type,  8,  8 >;  /**< SDCLK Frequency Select       */
    using DTOCV    = regbits< type, 16,  4 >;  /**< Data Timeout Counter Value   */
    using RSTA     = regbits< type, 24,  1 >;  /**< Software Reset For ALL       */
    using RSTC     = regbits< type, 25,  1 >;  /**< Software Reset For CMD Line  */
    using RSTD     = regbits< type, 26,  1 >;  /**< Software Reset For DAT Line  */
    using INITA    = regbits< type, 27,  1 >;  /**< Initialization Active        */
  };

  /**
   * Interrupt Status register
   */
  struct IRQSTAT
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using CC     = regbits< type,  0,  1 >;  /**< Command Complete       */
    using TC     = regbits< type,  1,  1 >;  /**< Transfer Complete      */
    using BGE    = regbits< type,  2,  1 >;  /**< Block Gap Event        */
    using DINT   = regbits< type,  3,  1 >;  /**< DMA Interrupt          */
    using BWR    = regbits< type,  4,  1 >;  /**< Buffer Write Ready     */
    using BRR    = regbits< type,  5,  1 >;  /**< Buffer Read Ready      */
    using CINS   = regbits< type,  6,  1 >;  /**< Card Insertion         */
    using CRM    = regbits< type,  7,  1 >;  /**< Card Removal           */
    using CINT   = regbits< type,  8,  1 >;  /**< Card Interrupt         */
    using CTOE   = regbits< type, 16,  1 >;  /**< Command Timeout Error  */
    using CCE    = regbits< type, 17,  1 >;  /**< Command CRC Error      */
    using CEBE   = regbits< type, 18,  1 >;  /**< Command End Bit Error  */
    using CIE    = regbits< type, 19,  1 >;  /**< Command Index Error    */
    using DTOE   = regbits< type, 20,  1 >;  /**< Data Timeout Error     */
    using DCE    = regbits< type, 21,  1 >;  /**< Data CRC Error         */
    using DEBE   = regbits< type, 22,  1 >;  /**< Data End Bit Error     */
    using AC12E  = regbits< type, 24,  1 >;  /**< Auto CMD12 Error       */
    using DMAE   = regbits< type, 28,  1 >;  /**< DMA Error              */
  };

  /**
   * Interrupt Status Enable register
   */
  struct IRQSTATEN
  : public reg< uint32_t, base_addr + 0x34, rw, 0x117F013F >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x117F013F >;

    using CCSEN     = regbits< type,  0,  1 >;  /**< Command Complete Status Enable       */
    using TCSEN     = regbits< type,  1,  1 >;  /**< Transfer Complete Status Enable      */
    using BGESEN    = regbits< type,  2,  1 >;  /**< Block Gap Event Status Enable        */
    using DINTSEN   = regbits< type,  3,  1 >;  /**< DMA Interrupt Status Enable          */
    using BWRSEN    = regbits< type,  4,  1 >;  /**< Buffer Write Ready Status Enable     */
    using BRRSEN    = regbits< type,  5,  1 >;  /**< Buffer Read Ready Status Enable      */
    using CINSEN    = regbits< type,  6,  1 >;  /**< Card Insertion Status Enable         */
    using CRMSEN    = regbits< type,  7,  1 >;  /**< Card Removal Status Enable           */
    using CINTSEN   = regbits< type,  8,  1 >;  /**< Card Interrupt Status Enable         */
    using CTOESEN   = regbits< type, 16,  1 >;  /**< Command Timeout Error Status Enable  */
    using CCESEN    = regbits< type, 17,  1 >;  /**< Command CRC Error Status Enable      */
    using CEBESEN   = regbits< type, 18,  1 >;  /**< Command End Bit Error Status Enable  */
    using CIESEN    = regbits< type, 19,  1 >;  /**< Command Index Error Status Enable    */
    using DTOESEN   = regbits< type, 20,  1 >;  /**< Data Timeout Error Status Enable     */
    using DCESEN    = regbits< type, 21,  1 >;  /**< Data CRC Error Status Enable         */
    using DEBESEN   = regbits< type, 22,  1 >;  /**< Data End Bit Error Status Enable     */
    using AC12ESEN  = regbits< type, 24,  1 >;  /**< Auto CMD12 Error Status Enable       */
    using DMAESEN   = regbits< type, 28,  1 >;  /**< DMA Error Status Enable              */
  };

  /**
   * Interrupt Signal Enable register
   */
  struct IRQSIGEN
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using CCIEN     = regbits< type,  0,  1 >;  /**< Command Complete Interrupt Enable       */
    using TCIEN     = regbits< type,  1,  1 >;  /**< Transfer Complete Interrupt Enable      */
    using BGEIEN    = regbits< type,  2,  1 >;  /**< Block Gap Event Interrupt Enable        */
    using DINTIEN   = regbits< type,  3,  1 >;  /**< DMA Interrupt Enable                    */
    using BWRIEN    = regbits< type,  4,  1 >;  /**< Buffer Write Ready Interrupt Enable     */
    using BRRIEN    = regbits< type,  5,  1 >;  /**< Buffer Read Ready Interrupt Enable      */
    using CINSIEN   = regbits< type,  6,  1 >;  /**< Card Insertion Interrupt Enable         */
    using CRMIEN    = regbits< type,  7,  1 >;  /**< Card Removal Interrupt Enable           */
    using CINTIEN   = regbits< type,  8,  1 >;  /**< Card Interrupt Enable                   */
    using CTOEIEN   = regbits< type, 16,  1 >;  /**< Command Timeout Error Interrupt Enable  */
    using CCEIEN    = regbits< type, 17,  1 >;  /**< Command CRC Error Interrupt Enable      */
    using CEBEIEN   = regbits< type, 18,  1 >;  /**< Command End Bit Error Interrupt Enable  */
    using CIEIEN    = regbits< type, 19,  1 >;  /**< Command Index Error Interrupt Enable    */
    using DTOEIEN   = regbits< type, 20,  1 >;  /**< Data Timeout Error Interrupt Enable     */
    using DCEIEN    = regbits< type, 21,  1 >;  /**< Data CRC Error Interrupt Enable         */
    using DEBEIEN   = regbits< type, 22,  1 >;  /**< Data End Bit Error Interrupt Enable     */
    using AC12EIEN  = regbits< type, 24,  1 >;  /**< Auto CMD12 Error Interrupt Enable       */
    using DMAEIEN   = regbits< type, 28,  1 >;  /**< DMA Error Interrupt Enable              */
  };

  /**
   * Auto CMD12 Error Status Register
   */
  struct AC12ERR
  : public reg< uint32_t, base_addr + 0x3c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0 >;

    using AC12NE     = regbits< type,  0,  1 >;  /**< Auto CMD12 Not Executed                 */
    using AC12TOE    = regbits< type,  1,  1 >;  /**< Auto CMD12 Timeout Error                */
    using AC12EBE    = regbits< type,  2,  1 >;  /**< Auto CMD12 End Bit Error                */
    using AC12CE     = regbits< type,  3,  1 >;  /**< Auto CMD12 CRC Error                    */
    using AC12IE     = regbits< type,  4,  1 >;  /**< Auto CMD12 Index Error                  */
    using CNIBAC12E  = regbits< type,  7,  1 >;  /**< Command Not Issued By Auto CMD12 Error  */
  };

  /**
   * Host Controller Capabilities
   */
  struct HTCAPBLT
  : public reg< uint32_t, base_addr + 0x40, ro, 0x7F30000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x7F30000 >;

    using MBL    = regbits< type, 16,  3 >;  /**< Max Block Length        */
    using ADMAS  = regbits< type, 20,  1 >;  /**< ADMA Support            */
    using HSS    = regbits< type, 21,  1 >;  /**< High Speed Support      */
    using DMAS   = regbits< type, 22,  1 >;  /**< DMA Support             */
    using SRS    = regbits< type, 23,  1 >;  /**< Suspend/Resume Support  */
    using VS33   = regbits< type, 24,  1 >;  /**< Voltage Support 3.3 V   */
  };

  /**
   * Watermark Level Register
   */
  struct WML
  : public reg< uint32_t, base_addr + 0x44, rw, 0x100010 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x100010 >;

    using RDWML  = regbits< type,  0,  8 >;  /**< Read Watermark Level   */
    using WRWML  = regbits< type, 16,  8 >;  /**< Write Watermark Level  */
  };

  /**
   * Force Event register
   */
  struct FEVT
  : public reg< uint32_t, base_addr + 0x50, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, wo, 0 >;

    using AC12NE     = regbits< type,  0,  1 >;  /**< Force Event Auto Command 12 Not Executed                   */
    using AC12TOE    = regbits< type,  1,  1 >;  /**< Force Event Auto Command 12 Time Out Error                 */
    using AC12CE     = regbits< type,  2,  1 >;  /**< Force Event Auto Command 12 CRC Error                      */
    using AC12EBE    = regbits< type,  3,  1 >;  /**< Force Event Auto Command 12 End Bit Error                  */
    using AC12IE     = regbits< type,  4,  1 >;  /**< Force Event Auto Command 12 Index Error                    */
    using CNIBAC12E  = regbits< type,  7,  1 >;  /**< Force Event Command Not Executed By Auto Command 12 Error  */
    using CTOE       = regbits< type, 16,  1 >;  /**< Force Event Command Time Out Error                         */
    using CCE        = regbits< type, 17,  1 >;  /**< Force Event Command CRC Error                              */
    using CEBE       = regbits< type, 18,  1 >;  /**< Force Event Command End Bit Error                          */
    using CIE        = regbits< type, 19,  1 >;  /**< Force Event Command Index Error                            */
    using DTOE       = regbits< type, 20,  1 >;  /**< Force Event Data Time Out Error                            */
    using DCE        = regbits< type, 21,  1 >;  /**< Force Event Data CRC Error                                 */
    using DEBE       = regbits< type, 22,  1 >;  /**< Force Event Data End Bit Error                             */
    using AC12E      = regbits< type, 24,  1 >;  /**< Force Event Auto Command 12 Error                          */
    using DMAE       = regbits< type, 28,  1 >;  /**< Force Event DMA Error                                      */
    using CINT       = regbits< type, 31,  1 >;  /**< Force Event Card Interrupt                                 */
  };

  /**
   * ADMA Error Status register
   */
  struct ADMAES
  : public reg< uint32_t, base_addr + 0x54, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0 >;

    // fixme: Field name equals parent register name: ADMAES
    using ADMAES_  = regbits< type,  0,  2 >;  /**< ADMA Error State (When ADMA Error Is Occurred.)  */
    using ADMALME  = regbits< type,  2,  1 >;  /**< ADMA Length Mismatch Error                       */
    using ADMADCE  = regbits< type,  3,  1 >;  /**< ADMA Descriptor Error                            */
  };

  /**
   * ADMA System Addressregister
   */
  struct ADSADDR
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    // fixme: Field name equals parent register name: ADSADDR
    using ADSADDR_ = regbits< type,  2, 30 >;  /**< ADMA System Address  */
  };

  /**
   * Vendor Specific register
   */
  struct VENDOR
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x1 >;

    using EXTDMAEN  = regbits< type,  0,  1 >;  /**< External DMA Request Enable                          */
    using EXBLKNU   = regbits< type,  1,  1 >;  /**< Exact Block Number Block Read Enable For SDIO CMD53  */
    using INTSTVAL  = regbits< type, 16,  8 >;  /**< Internal State Value                                 */
  };

  /**
   * MMC Boot register
   */
  struct MMCBOOT
  : public reg< uint32_t, base_addr + 0xc4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0 >;

    using DTOCVACK    = regbits< type,  0,  4 >;  /**< Boot ACK Time Out Counter Value                        */
    using BOOTACK     = regbits< type,  4,  1 >;  /**< Boot Ack Mode Select                                   */
    using BOOTMODE    = regbits< type,  5,  1 >;  /**< Boot Mode Select                                       */
    using BOOTEN      = regbits< type,  6,  1 >;  /**< Boot Mode Enable                                       */
    using AUTOSABGEN  = regbits< type,  7,  1 >;  /**< When boot, enable auto stop at block gap function      */
    using BOOTBLKCNT  = regbits< type, 16, 16 >;  /**< Defines the stop at block gap value of automatic mode  */
  };

  /**
   * Host Controller Version
   */
  struct HOSTVER
  : public reg< uint32_t, base_addr + 0xfc, ro, 0x1201 >
  {
    using type = reg< uint32_t, base_addr + 0xfc, ro, 0x1201 >;

    using SVN  = regbits< type,  0,  8 >;  /**< Specification Version Number  */
    using VVN  = regbits< type,  8,  8 >;  /**< Vendor Version Number         */
  };
};
} // namespace mptl

#endif // ARCH_REG_SDHC_HPP_INCLUDED
