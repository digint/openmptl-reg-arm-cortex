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
//  Import from CMSIS-SVD: "Atmel/ATSAM4S16C.svd"
//
//  vendor: Atmel
//  name: ATSAM4S16C
//  series: SAM4S
//  version: 20130131
//  description: Atmel ATSAM4S16C device: Cortex-M4 Microcontroller with 1MB Flash, 128KB SRAM, USB, 100 Pins (refer to http://www.atmel.com/devices/SAM4S16C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UDP_HPP_INCLUDED
#define ARCH_REG_UDP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB Device Port
 */
struct UDP
{
  static constexpr reg_addr_t base_addr = 0x40034000;

  /**
   * Frame Number Register
   */
  struct FRM_NUM
  : public reg< uint32_t, base_addr + 0x00000000, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: FRM_NUM
    using FRM_NUM_ = regbits< type,  0, 11 >;  /**< Frame Number as Defined in the Packet Field Formats  */
    using FRM_ERR  = regbits< type, 16,  1 >;  /**< Frame Error                                          */
    using FRM_OK   = regbits< type, 17,  1 >;  /**< Frame OK                                             */
  };

  /**
   * Global State Register
   */
  struct GLB_STAT
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000010 >;

    using FADDEN   = regbits< type,  0,  1 >;  /**< Function Address Enable  */
    using CONFG    = regbits< type,  1,  1 >;  /**< Configured               */
    using ESR      = regbits< type,  2,  1 >;  /**< Enable Send Resume       */
    using RSMINPR  = regbits< type,  3,  1 >;
    using RMWUPE   = regbits< type,  4,  1 >;  /**< Remote Wake Up Enable    */
  };

  /**
   * Function Address Register
   */
  struct FADDR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000100 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000100 >;

    using FADD  = regbits< type,  0,  7 >;  /**< Function Address Value  */
    using FEN   = regbits< type,  8,  1 >;  /**< Function Enable         */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0 >;

    using EP0INT  = regbits< type,  0,  1 >;  /**< Enable Endpoint 0 Interrupt      */
    using EP1INT  = regbits< type,  1,  1 >;  /**< Enable Endpoint 1 Interrupt      */
    using EP2INT  = regbits< type,  2,  1 >;  /**< Enable Endpoint 2Interrupt       */
    using EP3INT  = regbits< type,  3,  1 >;  /**< Enable Endpoint 3 Interrupt      */
    using EP4INT  = regbits< type,  4,  1 >;  /**< Enable Endpoint 4 Interrupt      */
    using EP5INT  = regbits< type,  5,  1 >;  /**< Enable Endpoint 5 Interrupt      */
    using EP6INT  = regbits< type,  6,  1 >;  /**< Enable Endpoint 6 Interrupt      */
    using EP7INT  = regbits< type,  7,  1 >;  /**< Enable Endpoint 7 Interrupt      */
    using RXSUSP  = regbits< type,  8,  1 >;  /**< Enable UDP Suspend Interrupt     */
    using RXRSM   = regbits< type,  9,  1 >;  /**< Enable UDP Resume Interrupt      */
    using EXTRSM  = regbits< type, 10,  1 >;
    using SOFINT  = regbits< type, 11,  1 >;  /**< Enable Start Of Frame Interrupt  */
    using WAKEUP  = regbits< type, 13,  1 >;  /**< Enable UDP bus Wakeup Interrupt  */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0 >;

    using EP0INT  = regbits< type,  0,  1 >;  /**< Disable Endpoint 0 Interrupt      */
    using EP1INT  = regbits< type,  1,  1 >;  /**< Disable Endpoint 1 Interrupt      */
    using EP2INT  = regbits< type,  2,  1 >;  /**< Disable Endpoint 2 Interrupt      */
    using EP3INT  = regbits< type,  3,  1 >;  /**< Disable Endpoint 3 Interrupt      */
    using EP4INT  = regbits< type,  4,  1 >;  /**< Disable Endpoint 4 Interrupt      */
    using EP5INT  = regbits< type,  5,  1 >;  /**< Disable Endpoint 5 Interrupt      */
    using EP6INT  = regbits< type,  6,  1 >;  /**< Disable Endpoint 6 Interrupt      */
    using EP7INT  = regbits< type,  7,  1 >;  /**< Disable Endpoint 7 Interrupt      */
    using RXSUSP  = regbits< type,  8,  1 >;  /**< Disable UDP Suspend Interrupt     */
    using RXRSM   = regbits< type,  9,  1 >;  /**< Disable UDP Resume Interrupt      */
    using EXTRSM  = regbits< type, 10,  1 >;
    using SOFINT  = regbits< type, 11,  1 >;  /**< Disable Start Of Frame Interrupt  */
    using WAKEUP  = regbits< type, 13,  1 >;  /**< Disable USB Bus Interrupt         */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000018, ro, 0x00001200 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, ro, 0x00001200 >;

    using EP0INT  = regbits< type,  0,  1 >;  /**< Mask Endpoint 0 Interrupt      */
    using EP1INT  = regbits< type,  1,  1 >;  /**< Mask Endpoint 1 Interrupt      */
    using EP2INT  = regbits< type,  2,  1 >;  /**< Mask Endpoint 2 Interrupt      */
    using EP3INT  = regbits< type,  3,  1 >;  /**< Mask Endpoint 3 Interrupt      */
    using EP4INT  = regbits< type,  4,  1 >;  /**< Mask Endpoint 4 Interrupt      */
    using EP5INT  = regbits< type,  5,  1 >;  /**< Mask Endpoint 5 Interrupt      */
    using EP6INT  = regbits< type,  6,  1 >;  /**< Mask Endpoint 6 Interrupt      */
    using EP7INT  = regbits< type,  7,  1 >;  /**< Mask Endpoint 7 Interrupt      */
    using RXSUSP  = regbits< type,  8,  1 >;  /**< Mask UDP Suspend Interrupt     */
    using RXRSM   = regbits< type,  9,  1 >;  /**< Mask UDP Resume Interrupt.     */
    using EXTRSM  = regbits< type, 10,  1 >;
    using SOFINT  = regbits< type, 11,  1 >;  /**< Mask Start Of Frame Interrupt  */
    using BIT12   = regbits< type, 12,  1 >;  /**< UDP_IMR Bit 12                 */
    using WAKEUP  = regbits< type, 13,  1 >;  /**< USB Bus WAKEUP Interrupt       */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using EP0INT     = regbits< type,  0,  1 >;  /**< Endpoint 0 Interrupt Status        */
    using EP1INT     = regbits< type,  1,  1 >;  /**< Endpoint 1 Interrupt Status        */
    using EP2INT     = regbits< type,  2,  1 >;  /**< Endpoint 2 Interrupt Status        */
    using EP3INT     = regbits< type,  3,  1 >;  /**< Endpoint 3 Interrupt Status        */
    using EP4INT     = regbits< type,  4,  1 >;  /**< Endpoint 4 Interrupt Status        */
    using EP5INT     = regbits< type,  5,  1 >;  /**< Endpoint 5 Interrupt Status        */
    using EP6INT     = regbits< type,  6,  1 >;  /**< Endpoint 6 Interrupt Status        */
    using EP7INT     = regbits< type,  7,  1 >;  /**< Endpoint 7Interrupt Status         */
    using RXSUSP     = regbits< type,  8,  1 >;  /**< UDP Suspend Interrupt Status       */
    using RXRSM      = regbits< type,  9,  1 >;  /**< UDP Resume Interrupt Status        */
    using EXTRSM     = regbits< type, 10,  1 >;
    using SOFINT     = regbits< type, 11,  1 >;  /**< Start of Frame Interrupt Status    */
    using ENDBUSRES  = regbits< type, 12,  1 >;  /**< End of BUS Reset Interrupt Status  */
    using WAKEUP     = regbits< type, 13,  1 >;  /**< UDP Resume Interrupt Status        */
  };

  /**
   * Interrupt Clear Register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0 >;

    using RXSUSP     = regbits< type,  8,  1 >;  /**< Clear UDP Suspend Interrupt       */
    using RXRSM      = regbits< type,  9,  1 >;  /**< Clear UDP Resume Interrupt        */
    using EXTRSM     = regbits< type, 10,  1 >;
    using SOFINT     = regbits< type, 11,  1 >;  /**< Clear Start Of Frame Interrupt    */
    using ENDBUSRES  = regbits< type, 12,  1 >;  /**< Clear End of Bus Reset Interrupt  */
    using WAKEUP     = regbits< type, 13,  1 >;  /**< Clear Wakeup Interrupt            */
  };

  /**
   * Reset Endpoint Register
   */
  struct RST_EP
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    using EP0  = regbits< type,  0,  1 >;  /**< Reset Endpoint 0  */
    using EP1  = regbits< type,  1,  1 >;  /**< Reset Endpoint 1  */
    using EP2  = regbits< type,  2,  1 >;  /**< Reset Endpoint 2  */
    using EP3  = regbits< type,  3,  1 >;  /**< Reset Endpoint 3  */
    using EP4  = regbits< type,  4,  1 >;  /**< Reset Endpoint 4  */
    using EP5  = regbits< type,  5,  1 >;  /**< Reset Endpoint 5  */
    using EP6  = regbits< type,  6,  1 >;  /**< Reset Endpoint 6  */
    using EP7  = regbits< type,  7,  1 >;  /**< Reset Endpoint 7  */
  };

  /**
   * Endpoint Control and Status Register
   */
  struct CSR[%s]
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXCOMP       = regbits< type,  0,  1 >;  /**< Generates an IN Packet with Data Previously Written in the DPR          */
    using RX_DATA_BK0  = regbits< type,  1,  1 >;  /**< Receive Data Bank 0                                                     */
    using RXSETUP      = regbits< type,  2,  1 >;  /**< Received Setup                                                          */
    using STALLSENT    = regbits< type,  3,  1 >;  /**< Stall Sent                                                              */
    using TXPKTRDY     = regbits< type,  4,  1 >;  /**< Transmit Packet Ready                                                   */
    using FORCESTALL   = regbits< type,  5,  1 >;  /**< Force Stall (used by Control, Bulk and Isochronous Endpoints)           */
    using RX_DATA_BK1  = regbits< type,  6,  1 >;  /**< Receive Data Bank 1 (only used by endpoints with ping-pong attributes)  */
    using DIR          = regbits< type,  7,  1 >;  /**< Transfer Direction (only available for control endpoints)               */
    using EPTYPE       = regbits< type,  8,  3 >;  /**< Endpoint Type                                                           */
    using DTGLE        = regbits< type, 11,  1 >;  /**< Data Toggle                                                             */
    using EPEDS        = regbits< type, 15,  1 >;  /**< Endpoint Enable Disable                                                 */
    using RXBYTECNT    = regbits< type, 16, 11 >;  /**< Number of Bytes Available in the FIFO                                   */
  };

  /**
   * Endpoint Control and Status Register
   */
  struct CSR0_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXCOMP       = regbits< type,  0,  1 >;  /**< Generates an IN Packet with Data Previously Written in the DPR          */
    using RX_DATA_BK0  = regbits< type,  1,  1 >;  /**< Receive Data Bank 0                                                     */
    using RXSETUP      = regbits< type,  2,  1 >;  /**< Received Setup                                                          */
    using ISOERROR     = regbits< type,  3,  1 >;  /**< A CRC error has been detected in an isochronous transfer                */
    using TXPKTRDY     = regbits< type,  4,  1 >;  /**< Transmit Packet Ready                                                   */
    using FORCESTALL   = regbits< type,  5,  1 >;  /**< Force Stall (used by Control, Bulk and Isochronous Endpoints)           */
    using RX_DATA_BK1  = regbits< type,  6,  1 >;  /**< Receive Data Bank 1 (only used by endpoints with ping-pong attributes)  */
    using DIR          = regbits< type,  7,  1 >;  /**< Transfer Direction (only available for control endpoints)               */
    using EPTYPE       = regbits< type,  8,  3 >;  /**< Endpoint Type                                                           */
    using DTGLE        = regbits< type, 11,  1 >;  /**< Data Toggle                                                             */
    using EPEDS        = regbits< type, 15,  1 >;  /**< Endpoint Enable Disable                                                 */
    using RXBYTECNT    = regbits< type, 16, 11 >;  /**< Number of Bytes Available in the FIFO                                   */
  };

  /**
   * Endpoint FIFO Data Register
   */
  struct FDR[%s]
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using FIFO_DATA  = regbits< type,  0,  8 >;  /**< FIFO Data Value  */
  };

  /**
   * Transceiver Control Register
   */
  struct TXVC
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0x00000100 >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0x00000100 >;

    using TXVDIS  = regbits< type,  8,  1 >;  /**< Transceiver Disable  */
    using PUON    = regbits< type,  9,  1 >;  /**< Pull-up On           */
  };
};
} // namespace mptl

#endif // ARCH_REG_UDP_HPP_INCLUDED
