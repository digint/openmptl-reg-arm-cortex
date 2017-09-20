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

#ifndef ARCH_REG_OTG_FS_GLOBAL_HPP_INCLUDED
#define ARCH_REG_OTG_FS_GLOBAL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB on the go full speed
 */
struct OTG_FS_GLOBAL
{
  static constexpr reg_addr_t base_addr = 0x50000000;

  /**
   * OTG_FS control and status register (OTG_FS_GOTGCTL)
   */
  struct FS_GOTGCTL
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
   * OTG_FS interrupt register (OTG_FS_GOTGINT)
   */
  struct FS_GOTGINT
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using SEDET    = regbits< type,  2,  1 >;  /**< Session end detected                    */
    using SRSSCHG  = regbits< type,  8,  1 >;  /**< Session request success status change   */
    using HNSSCHG  = regbits< type,  9,  1 >;  /**< Host negotiation success status change  */
    using HNGDET   = regbits< type, 17,  1 >;  /**< Host negotiation detected               */
    using ADTOCHG  = regbits< type, 18,  1 >;  /**< A-device timeout change                 */
    using DBCDNE   = regbits< type, 19,  1 >;  /**< Debounce done                           */
  };

  /**
   * OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
   */
  struct FS_GAHBCFG
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using GINT      = regbits< type,  0,  1 >;  /**< Global interrupt mask        */
    using TXFELVL   = regbits< type,  7,  1 >;  /**< TxFIFO empty level           */
    using PTXFELVL  = regbits< type,  8,  1 >;  /**< Periodic TxFIFO empty level  */
  };

  /**
   * OTG_FS USB configuration register (OTG_FS_GUSBCFG)
   */
  struct FS_GUSBCFG
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000A00 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000A00 >;

    using TOCAL   = regbits< type,  0,  3 >;  /**< FS timeout calibration                */
    using PHYSEL  = regbits< type,  6,  1 >;  /**< Full Speed serial transceiver select  */
    using SRPCAP  = regbits< type,  8,  1 >;  /**< SRP-capable                           */
    using HNPCAP  = regbits< type,  9,  1 >;  /**< HNP-capable                           */
    using TRDT    = regbits< type, 10,  4 >;  /**< USB turnaround time                   */
    using FHMOD   = regbits< type, 29,  1 >;  /**< Force host mode                       */
    using FDMOD   = regbits< type, 30,  1 >;  /**< Force device mode                     */
    using CTXPKT  = regbits< type, 31,  1 >;  /**< Corrupt Tx packet                     */
  };

  /**
   * OTG_FS reset register (OTG_FS_GRSTCTL)
   */
  struct FS_GRSTCTL
  : public reg< uint32_t, base_addr + 0x10, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x20000000 >;

    using CSRST    = regbits< type,  0,  1 >;  /**< Core soft reset           */
    using HSRST    = regbits< type,  1,  1 >;  /**< HCLK soft reset           */
    using FCRST    = regbits< type,  2,  1 >;  /**< Host frame counter reset  */
    using RXFFLSH  = regbits< type,  4,  1 >;  /**< RxFIFO flush              */
    using TXFFLSH  = regbits< type,  5,  1 >;  /**< TxFIFO flush              */
    using TXFNUM   = regbits< type,  6,  5 >;  /**< TxFIFO number             */
    using AHBIDL   = regbits< type, 31,  1 >;  /**< AHB master idle           */
  };

  /**
   * OTG_FS core interrupt register (OTG_FS_GINTSTS)
   */
  struct FS_GINTSTS
  : public reg< uint32_t, base_addr + 0x14, rw, 0x04000020 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x04000020 >;

    using CMOD                = regbits< type,  0,  1 >;  /**< Current mode of operation                                                                 */
    using MMIS                = regbits< type,  1,  1 >;  /**< Mode mismatch interrupt                                                                   */
    using OTGINT              = regbits< type,  2,  1 >;  /**< OTG interrupt                                                                             */
    using SOF                 = regbits< type,  3,  1 >;  /**< Start of frame                                                                            */
    using RXFLVL              = regbits< type,  4,  1 >;  /**< RxFIFO non-empty                                                                          */
    using NPTXFE              = regbits< type,  5,  1 >;  /**< Non-periodic TxFIFO empty                                                                 */
    using GINAKEFF            = regbits< type,  6,  1 >;  /**< Global IN non-periodic NAK effective                                                      */
    using GOUTNAKEFF          = regbits< type,  7,  1 >;  /**< Global OUT NAK effective                                                                  */
    using ESUSP               = regbits< type, 10,  1 >;  /**< Early suspend                                                                             */
    using USBSUSP             = regbits< type, 11,  1 >;  /**< USB suspend                                                                               */
    using USBRST              = regbits< type, 12,  1 >;  /**< USB reset                                                                                 */
    using ENUMDNE             = regbits< type, 13,  1 >;  /**< Enumeration done                                                                          */
    using ISOODRP             = regbits< type, 14,  1 >;  /**< Isochronous OUT packet dropped interrupt                                                  */
    using EOPF                = regbits< type, 15,  1 >;  /**< End of periodic frame interrupt                                                           */
    using IEPINT              = regbits< type, 18,  1 >;  /**< IN endpoint interrupt                                                                     */
    using OEPINT              = regbits< type, 19,  1 >;  /**< OUT endpoint interrupt                                                                    */
    using IISOIXFR            = regbits< type, 20,  1 >;  /**< Incomplete isochronous IN transfer                                                        */
    using IPXFR_INCOMPISOOUT  = regbits< type, 21,  1 >;  /**< Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)  */
    using HPRTINT             = regbits< type, 24,  1 >;  /**< Host port interrupt                                                                       */
    using HCINT               = regbits< type, 25,  1 >;  /**< Host channels interrupt                                                                   */
    using PTXFE               = regbits< type, 26,  1 >;  /**< Periodic TxFIFO empty                                                                     */
    using CIDSCHG             = regbits< type, 28,  1 >;  /**< Connector ID status change                                                                */
    using DISCINT             = regbits< type, 29,  1 >;  /**< Disconnect detected interrupt                                                             */
    using SRQINT              = regbits< type, 30,  1 >;  /**< Session request/new session detected interrupt                                            */
    using WKUPINT             = regbits< type, 31,  1 >;  /**< Resume/remote wakeup detected interrupt                                                   */
  };

  /**
   * OTG_FS interrupt mask register (OTG_FS_GINTMSK)
   */
  struct FS_GINTMSK
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using MMISM             = regbits< type,  1,  1 >;  /**< Mode mismatch interrupt mask                                                                        */
    using OTGINT            = regbits< type,  2,  1 >;  /**< OTG interrupt mask                                                                                  */
    using SOFM              = regbits< type,  3,  1 >;  /**< Start of frame mask                                                                                 */
    using RXFLVLM           = regbits< type,  4,  1 >;  /**< Receive FIFO non-empty mask                                                                         */
    using NPTXFEM           = regbits< type,  5,  1 >;  /**< Non-periodic TxFIFO empty mask                                                                      */
    using GINAKEFFM         = regbits< type,  6,  1 >;  /**< Global non-periodic IN NAK effective mask                                                           */
    using GONAKEFFM         = regbits< type,  7,  1 >;  /**< Global OUT NAK effective mask                                                                       */
    using ESUSPM            = regbits< type, 10,  1 >;  /**< Early suspend mask                                                                                  */
    using USBSUSPM          = regbits< type, 11,  1 >;  /**< USB suspend mask                                                                                    */
    using USBRST            = regbits< type, 12,  1 >;  /**< USB reset mask                                                                                      */
    using ENUMDNEM          = regbits< type, 13,  1 >;  /**< Enumeration done mask                                                                               */
    using ISOODRPM          = regbits< type, 14,  1 >;  /**< Isochronous OUT packet dropped interrupt mask                                                       */
    using EOPFM             = regbits< type, 15,  1 >;  /**< End of periodic frame interrupt mask                                                                */
    using EPMISM            = regbits< type, 17,  1 >;  /**< Endpoint mismatch interrupt mask                                                                    */
    using IEPINT            = regbits< type, 18,  1 >;  /**< IN endpoints interrupt mask                                                                         */
    using OEPINT            = regbits< type, 19,  1 >;  /**< OUT endpoints interrupt mask                                                                        */
    using IISOIXFRM         = regbits< type, 20,  1 >;  /**< Incomplete isochronous IN transfer mask                                                             */
    using IPXFRM_IISOOXFRM  = regbits< type, 21,  1 >;  /**< Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)  */
    using PRTIM             = regbits< type, 24,  1 >;  /**< Host port interrupt mask                                                                            */
    using HCIM              = regbits< type, 25,  1 >;  /**< Host channels interrupt mask                                                                        */
    using PTXFEM            = regbits< type, 26,  1 >;  /**< Periodic TxFIFO empty mask                                                                          */
    using CIDSCHGM          = regbits< type, 28,  1 >;  /**< Connector ID status change mask                                                                     */
    using DISCINT           = regbits< type, 29,  1 >;  /**< Disconnect detected interrupt mask                                                                  */
    using SRQIM             = regbits< type, 30,  1 >;  /**< Session request/new session detected interrupt mask                                                 */
    using WUIM              = regbits< type, 31,  1 >;  /**< Resume/remote wakeup detected interrupt mask                                                        */
  };

  /**
   * OTG_FS Receive status debug read(Device mode)
   */
  struct FS_GRXSTSR_Device
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using EPNUM   = regbits< type,  0,  4 >;  /**< Endpoint number  */
    using BCNT    = regbits< type,  4, 11 >;  /**< Byte count       */
    using DPID    = regbits< type, 15,  2 >;  /**< Data PID         */
    using PKTSTS  = regbits< type, 17,  4 >;  /**< Packet status    */
    using FRMNUM  = regbits< type, 21,  4 >;  /**< Frame number     */
  };

  /**
   * OTG_FS Receive status debug read(Host mode)
   */
  struct FS_GRXSTSR_Host
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using EPNUM   = regbits< type,  0,  4 >;  /**< Endpoint number  */
    using BCNT    = regbits< type,  4, 11 >;  /**< Byte count       */
    using DPID    = regbits< type, 15,  2 >;  /**< Data PID         */
    using PKTSTS  = regbits< type, 17,  4 >;  /**< Packet status    */
    using FRMNUM  = regbits< type, 21,  4 >;  /**< Frame number     */
  };

  /**
   * OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
   */
  struct FS_GRXFSIZ
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000200 >;

    using RXFD  = regbits< type,  0, 16 >;  /**< RxFIFO depth  */
  };

  /**
   * OTG_FS non-periodic transmit FIFO size register (Device mode)
   */
  struct FS_GNPTXFSIZ_Device
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000200 >;

    using TX0FSA  = regbits< type,  0, 16 >;  /**< Endpoint 0 transmit RAM start address  */
    using TX0FD   = regbits< type, 16, 16 >;  /**< Endpoint 0 TxFIFO depth                */
  };

  /**
   * OTG_FS non-periodic transmit FIFO size register (Host mode)
   */
  struct FS_GNPTXFSIZ_Host
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000200 >;

    using NPTXFSA  = regbits< type,  0, 16 >;  /**< Non-periodic transmit RAM start address  */
    using NPTXFD   = regbits< type, 16, 16 >;  /**< Non-periodic TxFIFO depth                */
  };

  /**
   * OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
   */
  struct FS_GNPTXSTS
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00080200 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00080200 >;

    using NPTXFSAV  = regbits< type,  0, 16 >;  /**< Non-periodic TxFIFO space available                  */
    using NPTQXSAV  = regbits< type, 16,  8 >;  /**< Non-periodic transmit request queue space available  */
    using NPTXQTOP  = regbits< type, 24,  7 >;  /**< Top of the non-periodic transmit request queue       */
  };

  /**
   * OTG_FS general core configuration register (OTG_FS_GCCFG)
   */
  struct FS_GCCFG
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using PWRDWN    = regbits< type, 16,  1 >;  /**< Power down                      */
    using VBUSASEN  = regbits< type, 18,  1 >;  /**< Enable the VBUS sensing device  */
    using VBUSBSEN  = regbits< type, 19,  1 >;  /**< Enable the VBUS sensing device  */
    using SOFOUTEN  = regbits< type, 20,  1 >;  /**< SOF output enable               */
  };

  /**
   * core ID register
   */
  struct FS_CID
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00001000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00001000 >;

    using PRODUCT_ID  = regbits< type,  0, 32 >;  /**< Product ID field  */
  };

  /**
   * OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
   */
  struct FS_HPTXFSIZ
  : public reg< uint32_t, base_addr + 0x100, rw, 0x02000600 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x02000600 >;

    using PTXSA    = regbits< type,  0, 16 >;  /**< Host periodic TxFIFO start address  */
    using PTXFSIZ  = regbits< type, 16, 16 >;  /**< Host periodic TxFIFO depth          */
  };

  /**
   * OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
   */
  struct FS_DIEPTXF1
  : public reg< uint32_t, base_addr + 0x104, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFO2 transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };

  /**
   * OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
   */
  struct FS_DIEPTXF2
  : public reg< uint32_t, base_addr + 0x108, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFO3 transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };

  /**
   * OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)
   */
  struct FS_DIEPTXF3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x02000400 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x02000400 >;

    using INEPTXSA  = regbits< type,  0, 16 >;  /**< IN endpoint FIFO4 transmit RAM start address  */
    using INEPTXFD  = regbits< type, 16, 16 >;  /**< IN endpoint TxFIFO depth                      */
  };
};
} // namespace mptl

#endif // ARCH_REG_OTG_FS_GLOBAL_HPP_INCLUDED
