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
//  Import from CMSIS-SVD: "STMicro/STM32F427x.svd"
//
//  name: STM32F427x
//  version: 1.1
//  description: STM32F427x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OTG_HS_GLOBAL_HPP_INCLUDED
#define ARCH_REG_OTG_HS_GLOBAL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB on the go high speed
 */
struct OTG_HS_GLOBAL
{
  static constexpr reg_addr_t base_addr = 0x40040000;

  /**
   * OTG_HS control and status register
   */
  struct OTG_HS_GOTGCTL
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000800 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000800 >;

    using SRQSCS   = regbits< type,  0,  1 >;  /**< Session request success   */
    using SRQ      = regbits< type,  1,  1 >;  /**< Session request           */
    using HNGSCS   = regbits< type,  8,  1 >;  /**< Host negotiation success  */
    using HNPRQ    = regbits< type,  9,  1 >;  /**< HNP request               */
    using HSHNPEN  = regbits< type, 10,  1 >;  /**< Host set HNP enable       */
    using DHNPEN   = regbits< type, 11,  1 >;  /**< Device HNP enabled        */
    using CIDSTS   = regbits< type, 16,  1 >;  /**< Connector ID status       */
    using DBCT     = regbits< type, 17,  1 >;  /**< Long/short debounce time  */
    using ASVLD    = regbits< type, 18,  1 >;  /**< A-session valid           */
    using BSVLD    = regbits< type, 19,  1 >;  /**< B-session valid           */
  };

  /**
   * OTG_HS interrupt register
   */
  struct OTG_HS_GOTGINT
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using SEDET    = regbits< type,  2,  1 >;  /**< Session end detected                    */
    using SRSSCHG  = regbits< type,  8,  1 >;  /**< Session request success status change   */
    using HNSSCHG  = regbits< type,  9,  1 >;  /**< Host negotiation success status change  */
    using HNGDET   = regbits< type, 17,  1 >;  /**< Host negotiation detected               */
    using ADTOCHG  = regbits< type, 18,  1 >;  /**< A-device timeout change                 */
    using DBCDNE   = regbits< type, 19,  1 >;  /**< Debounce done                           */
  };

  /**
   * OTG_HS AHB configuration register
   */
  struct OTG_HS_GAHBCFG
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using GINT      = regbits< type,  0,  1 >;  /**< Global interrupt mask        */
    using HBSTLEN   = regbits< type,  1,  4 >;  /**< Burst length/type            */
    using DMAEN     = regbits< type,  5,  1 >;  /**< DMA enable                   */
    using TXFELVL   = regbits< type,  7,  1 >;  /**< TxFIFO empty level           */
    using PTXFELVL  = regbits< type,  8,  1 >;  /**< Periodic TxFIFO empty level  */
  };

  /**
   * OTG_HS USB configuration register
   */
  struct OTG_HS_GUSBCFG
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000A00 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000A00 >;

    using TOCAL       = regbits< type,  0,  3 >;  /**< FS timeout calibration                                                       */
    using PHYSEL      = regbits< type,  6,  1 >;  /**< USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial transceiver select  */
    using SRPCAP      = regbits< type,  8,  1 >;  /**< SRP-capable                                                                  */
    using HNPCAP      = regbits< type,  9,  1 >;  /**< HNP-capable                                                                  */
    using TRDT        = regbits< type, 10,  4 >;  /**< USB turnaround time                                                          */
    using PHYLPCS     = regbits< type, 15,  1 >;  /**< PHY Low-power clock select                                                   */
    using ULPIFSLS    = regbits< type, 17,  1 >;  /**< ULPI FS/LS select                                                            */
    using ULPIAR      = regbits< type, 18,  1 >;  /**< ULPI Auto-resume                                                             */
    using ULPICSM     = regbits< type, 19,  1 >;  /**< ULPI Clock SuspendM                                                          */
    using ULPIEVBUSD  = regbits< type, 20,  1 >;  /**< ULPI External VBUS Drive                                                     */
    using ULPIEVBUSI  = regbits< type, 21,  1 >;  /**< ULPI external VBUS indicator                                                 */
    using TSDPS       = regbits< type, 22,  1 >;  /**< TermSel DLine pulsing selection                                              */
    using PCCI        = regbits< type, 23,  1 >;  /**< Indicator complement                                                         */
    using PTCI        = regbits< type, 24,  1 >;  /**< Indicator pass through                                                       */
    using ULPIIPD     = regbits< type, 25,  1 >;  /**< ULPI interface protect disable                                               */
    using FHMOD       = regbits< type, 29,  1 >;  /**< Forced host mode                                                             */
    using FDMOD       = regbits< type, 30,  1 >;  /**< Forced peripheral mode                                                       */
    using CTXPKT      = regbits< type, 31,  1 >;  /**< Corrupt Tx packet                                                            */
  };

  /**
   * OTG_HS reset register
   */
  struct OTG_HS_GRSTCTL
  : public reg< uint32_t, base_addr + 0x10, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x20000000 >;

    using CSRST    = regbits< type,  0,  1 >;  /**< Core soft reset           */
    using HSRST    = regbits< type,  1,  1 >;  /**< HCLK soft reset           */
    using FCRST    = regbits< type,  2,  1 >;  /**< Host frame counter reset  */
    using RXFFLSH  = regbits< type,  4,  1 >;  /**< RxFIFO flush              */
    using TXFFLSH  = regbits< type,  5,  1 >;  /**< TxFIFO flush              */
    using TXFNUM   = regbits< type,  6,  5 >;  /**< TxFIFO number             */
    using DMAREQ   = regbits< type, 30,  1 >;  /**< DMA request signal        */
    using AHBIDL   = regbits< type, 31,  1 >;  /**< AHB master idle           */
  };

  /**
   * OTG_HS core interrupt register
   */
  struct OTG_HS_GINTSTS
  : public reg< uint32_t, base_addr + 0x14, rw, 0x04000020 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x04000020 >;

    using CMOD               = regbits< type,  0,  1 >;  /**< Current mode of operation                       */
    using MMIS               = regbits< type,  1,  1 >;  /**< Mode mismatch interrupt                         */
    using OTGINT             = regbits< type,  2,  1 >;  /**< OTG interrupt                                   */
    using SOF                = regbits< type,  3,  1 >;  /**< Start of frame                                  */
    using RXFLVL             = regbits< type,  4,  1 >;  /**< RxFIFO nonempty                                 */
    using NPTXFE             = regbits< type,  5,  1 >;  /**< Nonperiodic TxFIFO empty                        */
    using GINAKEFF           = regbits< type,  6,  1 >;  /**< Global IN nonperiodic NAK effective             */
    using BOUTNAKEFF         = regbits< type,  7,  1 >;  /**< Global OUT NAK effective                        */
    using ESUSP              = regbits< type, 10,  1 >;  /**< Early suspend                                   */
    using USBSUSP            = regbits< type, 11,  1 >;  /**< USB suspend                                     */
    using USBRST             = regbits< type, 12,  1 >;  /**< USB reset                                       */
    using ENUMDNE            = regbits< type, 13,  1 >;  /**< Enumeration done                                */
    using ISOODRP            = regbits< type, 14,  1 >;  /**< Isochronous OUT packet dropped interrupt        */
    using EOPF               = regbits< type, 15,  1 >;  /**< End of periodic frame interrupt                 */
    using IEPINT             = regbits< type, 18,  1 >;  /**< IN endpoint interrupt                           */
    using OEPINT             = regbits< type, 19,  1 >;  /**< OUT endpoint interrupt                          */
    using IISOIXFR           = regbits< type, 20,  1 >;  /**< Incomplete isochronous IN transfer              */
    using PXFR_INCOMPISOOUT  = regbits< type, 21,  1 >;  /**< Incomplete periodic transfer                    */
    using DATAFSUSP          = regbits< type, 22,  1 >;  /**< Data fetch suspended                            */
    using HPRTINT            = regbits< type, 24,  1 >;  /**< Host port interrupt                             */
    using HCINT              = regbits< type, 25,  1 >;  /**< Host channels interrupt                         */
    using PTXFE              = regbits< type, 26,  1 >;  /**< Periodic TxFIFO empty                           */
    using CIDSCHG            = regbits< type, 28,  1 >;  /**< Connector ID status change                      */
    using DISCINT            = regbits< type, 29,  1 >;  /**< Disconnect detected interrupt                   */
    using SRQINT             = regbits< type, 30,  1 >;  /**< Session request/new session detected interrupt  */
    using WKUINT             = regbits< type, 31,  1 >;  /**< Resume/remote wakeup detected interrupt         */
  };

  /**
   * OTG_HS interrupt mask register
   */
  struct OTG_HS_GINTMSK
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0 >;

    using MMISM            = regbits< type,  1,  1 >;  /**< Mode mismatch interrupt mask                         */
    using OTGINT           = regbits< type,  2,  1 >;  /**< OTG interrupt mask                                   */
    using SOFM             = regbits< type,  3,  1 >;  /**< Start of frame mask                                  */
    using RXFLVLM          = regbits< type,  4,  1 >;  /**< Receive FIFO nonempty mask                           */
    using NPTXFEM          = regbits< type,  5,  1 >;  /**< Nonperiodic TxFIFO empty mask                        */
    using GINAKEFFM        = regbits< type,  6,  1 >;  /**< Global nonperiodic IN NAK effective mask             */
    using GONAKEFFM        = regbits< type,  7,  1 >;  /**< Global OUT NAK effective mask                        */
    using ESUSPM           = regbits< type, 10,  1 >;  /**< Early suspend mask                                   */
    using USBSUSPM         = regbits< type, 11,  1 >;  /**< USB suspend mask                                     */
    using USBRST           = regbits< type, 12,  1 >;  /**< USB reset mask                                       */
    using ENUMDNEM         = regbits< type, 13,  1 >;  /**< Enumeration done mask                                */
    using ISOODRPM         = regbits< type, 14,  1 >;  /**< Isochronous OUT packet dropped interrupt mask        */
    using EOPFM            = regbits< type, 15,  1 >;  /**< End of periodic frame interrupt mask                 */
    using EPMISM           = regbits< type, 17,  1 >;  /**< Endpoint mismatch interrupt mask                     */
    using IEPINT           = regbits< type, 18,  1 >;  /**< IN endpoints interrupt mask                          */
    using OEPINT           = regbits< type, 19,  1 >;  /**< OUT endpoints interrupt mask                         */
    using IISOIXFRM        = regbits< type, 20,  1 >;  /**< Incomplete isochronous IN transfer mask              */
    using PXFRM_IISOOXFRM  = regbits< type, 21,  1 >;  /**< Incomplete periodic transfer mask                    */
    using FSUSPM           = regbits< type, 22,  1 >;  /**< Data fetch suspended mask                            */
    using PRTIM            = regbits< type, 24,  1 >;  /**< Host port interrupt mask                             */
    using HCIM             = regbits< type, 25,  1 >;  /**< Host channels interrupt mask                         */
    using PTXFEM           = regbits< type, 26,  1 >;  /**< Periodic TxFIFO empty mask                           */
    using CIDSCHGM         = regbits< type, 28,  1 >;  /**< Connector ID status change mask                      */
    using DISCINT          = regbits< type, 29,  1 >;  /**< Disconnect detected interrupt mask                   */
    using SRQIM            = regbits< type, 30,  1 >;  /**< Session request/new session detected interrupt mask  */
    using WUIM             = regbits< type, 31,  1 >;  /**< Resume/remote wakeup detected interrupt mask         */
  };

  /**
   * OTG_HS Receive status debug read register (host mode)
   */
  struct OTG_HS_GRXSTSR_Host
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x0 >;

    using CHNUM   = regbits< type,  0,  4 >;  /**< Channel number  */
    using BCNT    = regbits< type,  4, 11 >;  /**< Byte count      */
    using DPID    = regbits< type, 15,  2 >;  /**< Data PID        */
    using PKTSTS  = regbits< type, 17,  4 >;  /**< Packet status   */
  };

  /**
   * OTG_HS status read and pop register (host mode)
   */
  struct OTG_HS_GRXSTSP_Host
  : public reg< uint32_t, base_addr + 0x20, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x0 >;

    using CHNUM   = regbits< type,  0,  4 >;  /**< Channel number  */
    using BCNT    = regbits< type,  4, 11 >;  /**< Byte count      */
    using DPID    = regbits< type, 15,  2 >;  /**< Data PID        */
    using PKTSTS  = regbits< type, 17,  4 >;  /**< Packet status   */
  };

  /**
   * OTG_HS Receive FIFO size register
   */
  struct OTG_HS_GRXFSIZ
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000200 >;

    using RXFD  = regbits< type,  0, 16 >;  /**< RxFIFO depth  */
  };

  /**
   * OTG_HS nonperiodic transmit FIFO size register (host mode)
   */
  struct OTG_HS_GNPTXFSIZ_Host
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000200 >;

    using NPTXFSA  = regbits< type,  0, 16 >;  /**< Nonperiodic transmit RAM start address  */
    using NPTXFD   = regbits< type, 16, 16 >;  /**< Nonperiodic TxFIFO depth                */
  };

  /**
   * Endpoint 0 transmit FIFO size (peripheral mode)
   */
  struct OTG_HS_TX0FSIZ_Peripheral
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000200 >;

    using TX0FSA  = regbits< type,  0, 16 >;  /**< Endpoint 0 transmit RAM start address  */
    using TX0FD   = regbits< type, 16, 16 >;  /**< Endpoint 0 TxFIFO depth                */
  };

  /**
   * OTG_HS nonperiodic transmit FIFO/queue status register
   */
  struct OTG_HS_GNPTXSTS
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00080200 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00080200 >;

    using NPTXFSAV  = regbits< type,  0, 16 >;  /**< Nonperiodic TxFIFO space available                  */
    using NPTQXSAV  = regbits< type, 16,  8 >;  /**< Nonperiodic transmit request queue space available  */
    using NPTXQTOP  = regbits< type, 24,  7 >;  /**< Top of the nonperiodic transmit request queue       */
  };

  /**
   * OTG_HS general core configuration register
   */
  struct OTG_HS_GCCFG
  : public reg< uint32_t, base_addr + 0x38, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x0 >;

    using PWRDWN      = regbits< type, 16,  1 >;  /**< Power down                                                    */
    using I2CPADEN    = regbits< type, 17,  1 >;  /**< Enable I2C bus connection for the external I2C PHY interface  */
    using VBUSASEN    = regbits< type, 18,  1 >;  /**< Enable the VBUS sensing device                                */
    using VBUSBSEN    = regbits< type, 19,  1 >;  /**< Enable the VBUS sensing device                                */
    using SOFOUTEN    = regbits< type, 20,  1 >;  /**< SOF output enable                                             */
    using NOVBUSSENS  = regbits< type, 21,  1 >;  /**< VBUS sensing disable option                                   */
  };

  /**
   * OTG_HS core ID register
   */
  struct OTG_HS_CID
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00001200 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00001200 >;

    using PRODUCT_ID  = regbits< type,  0, 32 >;  /**< Product ID field  */
  };

  /**
   * OTG_HS Host periodic transmit FIFO size register
   */
  struct OTG_HS_HPTXFSIZ
  : public reg< uint32_t, base_addr + 0x100, rw, 0x02000600 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x02000600 >;

    using PTXSA  = regbits< type,  0, 16 >;  /**< Host periodic TxFIFO start address  */
    using PTXFD  = regbits< type, 16, 16 >;  /**< Host periodic TxFIFO depth          */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO size register
   */
  struct OTG_HS_DIEPTXF1
  : public reg< uint32_t, base_addr + 0x104, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFOx transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO size register
   */
  struct OTG_HS_DIEPTXF2
  : public reg< uint32_t, base_addr + 0x108, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFOx transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO size register
   */
  struct OTG_HS_DIEPTXF3
  : public reg< uint32_t, base_addr + 0x11c, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFOx transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO size register
   */
  struct OTG_HS_DIEPTXF4
  : public reg< uint32_t, base_addr + 0x120, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFOx transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO size register
   */
  struct OTG_HS_DIEPTXF5
  : public reg< uint32_t, base_addr + 0x124, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFOx transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO size register
   */
  struct OTG_HS_DIEPTXF6
  : public reg< uint32_t, base_addr + 0x128, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFOx transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };

  /**
   * OTG_HS device IN endpoint transmit FIFO size register
   */
  struct OTG_HS_DIEPTXF7
  : public reg< uint32_t, base_addr + 0x12c, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFOx transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };

  /**
   * OTG_HS Receive status debug read register (peripheral mode mode)
   */
  struct OTG_HS_GRXSTSR_Peripheral
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x0 >;

    using EPNUM   = regbits< type,  0,  4 >;  /**< Endpoint number  */
    using BCNT    = regbits< type,  4, 11 >;  /**< Byte count       */
    using DPID    = regbits< type, 15,  2 >;  /**< Data PID         */
    using PKTSTS  = regbits< type, 17,  4 >;  /**< Packet status    */
    using FRMNUM  = regbits< type, 21,  4 >;  /**< Frame number     */
  };

  /**
   * OTG_HS status read and pop register (peripheral mode)
   */
  struct OTG_HS_GRXSTSP_Peripheral
  : public reg< uint32_t, base_addr + 0x20, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x0 >;

    using EPNUM   = regbits< type,  0,  4 >;  /**< Endpoint number  */
    using BCNT    = regbits< type,  4, 11 >;  /**< Byte count       */
    using DPID    = regbits< type, 15,  2 >;  /**< Data PID         */
    using PKTSTS  = regbits< type, 17,  4 >;  /**< Packet status    */
    using FRMNUM  = regbits< type, 21,  4 >;  /**< Frame number     */
  };
};
} // namespace mptl

#endif // ARCH_REG_OTG_HS_GLOBAL_HPP_INCLUDED
