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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9G25.svd"
//
//  vendor: Atmel
//  name: AT91SAM9G25
//  series: SAM9G
//  version: 20130207
//  description: Atmel AT91SAM9G25 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Ethernet, HS USB, LPDDR/DDR2/MLC NAND support, 217 and 247 Pins (refer to http://www.atmel.com/devices/SAM9G25.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UDPHS_HPP_INCLUDED
#define ARCH_REG_UDPHS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB High Speed Device Port
 */
struct UDPHS
{
  static constexpr reg_addr_t base_addr = 0xf803c000;

  /**
   * UDPHS Control Register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000200 >;

    using DEV_ADDR   = regbits< type,  0,  7 >;  /**< UDPHS Address            */
    using FADDR_EN   = regbits< type,  7,  1 >;  /**< Function Address Enable  */
    using EN_UDPHS   = regbits< type,  8,  1 >;  /**< UDPHS Enable             */
    using DETACH     = regbits< type,  9,  1 >;  /**< Detach Command           */
    using REWAKEUP   = regbits< type, 10,  1 >;  /**< Send Remote Wake Up      */
    using PULLD_DIS  = regbits< type, 11,  1 >;  /**< Pull-Down Disable        */
  };

  /**
   * UDPHS Frame Number Register
   */
  struct FNUM
  : public reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >;

    using MICRO_FRAME_NUM  = regbits< type,  0,  3 >;  /**< Microframe Number                                    */
    using FRAME_NUMBER     = regbits< type,  3, 11 >;  /**< Frame Number as defined in the Packet Field Formats  */
    using FNUM_ERR         = regbits< type, 31,  1 >;  /**< Frame Number CRC Error                               */
  };

  /**
   * UDPHS Interrupt Enable Register
   */
  struct IEN
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000010 >;

    using DET_SUSPD  = regbits< type,  1,  1 >;  /**< Suspend Interrupt Enable          */
    using MICRO_SOF  = regbits< type,  2,  1 >;  /**< Micro-SOF Interrupt Enable        */
    using INT_SOF    = regbits< type,  3,  1 >;  /**< SOF Interrupt Enable              */
    using ENDRESET   = regbits< type,  4,  1 >;  /**< End Of Reset Interrupt Enable     */
    using WAKE_UP    = regbits< type,  5,  1 >;  /**< Wake Up CPU Interrupt Enable      */
    using ENDOFRSM   = regbits< type,  6,  1 >;  /**< End Of Resume Interrupt Enable    */
    using UPSTR_RES  = regbits< type,  7,  1 >;  /**< Upstream Resume Interrupt Enable  */
    using EPT_0      = regbits< type,  8,  1 >;  /**< Endpoint 0 Interrupt Enable       */
    using EPT_1      = regbits< type,  9,  1 >;  /**< Endpoint 1 Interrupt Enable       */
    using EPT_2      = regbits< type, 10,  1 >;  /**< Endpoint 2 Interrupt Enable       */
    using EPT_3      = regbits< type, 11,  1 >;  /**< Endpoint 3 Interrupt Enable       */
    using EPT_4      = regbits< type, 12,  1 >;  /**< Endpoint 4 Interrupt Enable       */
    using EPT_5      = regbits< type, 13,  1 >;  /**< Endpoint 5 Interrupt Enable       */
    using EPT_6      = regbits< type, 14,  1 >;  /**< Endpoint 6 Interrupt Enable       */
    using DMA_1      = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt Enable    */
    using DMA_2      = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt Enable    */
    using DMA_3      = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt Enable    */
    using DMA_4      = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt Enable    */
    using DMA_5      = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt Enable    */
    using DMA_6      = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt Enable    */
  };

  /**
   * UDPHS Interrupt Status Register
   */
  struct INTSTA
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >;

    using SPEED      = regbits< type,  0,  1 >;  /**< Speed Status                    */
    using DET_SUSPD  = regbits< type,  1,  1 >;  /**< Suspend Interrupt               */
    using MICRO_SOF  = regbits< type,  2,  1 >;  /**< Micro Start Of Frame Interrupt  */
    using INT_SOF    = regbits< type,  3,  1 >;  /**< Start Of Frame Interrupt        */
    using ENDRESET   = regbits< type,  4,  1 >;  /**< End Of Reset Interrupt          */
    using WAKE_UP    = regbits< type,  5,  1 >;  /**< Wake Up CPU Interrupt           */
    using ENDOFRSM   = regbits< type,  6,  1 >;  /**< End Of Resume Interrupt         */
    using UPSTR_RES  = regbits< type,  7,  1 >;  /**< Upstream Resume Interrupt       */
    using EPT_0      = regbits< type,  8,  1 >;  /**< Endpoint 0 Interrupt            */
    using EPT_1      = regbits< type,  9,  1 >;  /**< Endpoint 1 Interrupt            */
    using EPT_2      = regbits< type, 10,  1 >;  /**< Endpoint 2 Interrupt            */
    using EPT_3      = regbits< type, 11,  1 >;  /**< Endpoint 3 Interrupt            */
    using EPT_4      = regbits< type, 12,  1 >;  /**< Endpoint 4 Interrupt            */
    using EPT_5      = regbits< type, 13,  1 >;  /**< Endpoint 5 Interrupt            */
    using EPT_6      = regbits< type, 14,  1 >;  /**< Endpoint 6 Interrupt            */
    using DMA_1      = regbits< type, 25,  1 >;  /**< DMA Channel 1 Interrupt         */
    using DMA_2      = regbits< type, 26,  1 >;  /**< DMA Channel 2 Interrupt         */
    using DMA_3      = regbits< type, 27,  1 >;  /**< DMA Channel 3 Interrupt         */
    using DMA_4      = regbits< type, 28,  1 >;  /**< DMA Channel 4 Interrupt         */
    using DMA_5      = regbits< type, 29,  1 >;  /**< DMA Channel 5 Interrupt         */
    using DMA_6      = regbits< type, 30,  1 >;  /**< DMA Channel 6 Interrupt         */
  };

  /**
   * UDPHS Clear Interrupt Register
   */
  struct CLRINT
  : public reg< uint32_t, base_addr + 0x00000018, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, wo, 0 >;

    using DET_SUSPD  = regbits< type,  1,  1 >;  /**< Suspend Interrupt Clear               */
    using MICRO_SOF  = regbits< type,  2,  1 >;  /**< Micro Start Of Frame Interrupt Clear  */
    using INT_SOF    = regbits< type,  3,  1 >;  /**< Start Of Frame Interrupt Clear        */
    using ENDRESET   = regbits< type,  4,  1 >;  /**< End Of Reset Interrupt Clear          */
    using WAKE_UP    = regbits< type,  5,  1 >;  /**< Wake Up CPU Interrupt Clear           */
    using ENDOFRSM   = regbits< type,  6,  1 >;  /**< End Of Resume Interrupt Clear         */
    using UPSTR_RES  = regbits< type,  7,  1 >;  /**< Upstream Resume Interrupt Clear       */
  };

  /**
   * UDPHS Endpoints Reset Register
   */
  struct EPTRST
  : public reg< uint32_t, base_addr + 0x0000001c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, wo, 0 >;

    using EPT_0  = regbits< type,  0,  1 >;  /**< Endpoint 0 Reset  */
    using EPT_1  = regbits< type,  1,  1 >;  /**< Endpoint 1 Reset  */
    using EPT_2  = regbits< type,  2,  1 >;  /**< Endpoint 2 Reset  */
    using EPT_3  = regbits< type,  3,  1 >;  /**< Endpoint 3 Reset  */
    using EPT_4  = regbits< type,  4,  1 >;  /**< Endpoint 4 Reset  */
    using EPT_5  = regbits< type,  5,  1 >;  /**< Endpoint 5 Reset  */
    using EPT_6  = regbits< type,  6,  1 >;  /**< Endpoint 6 Reset  */
  };

  /**
   * UDPHS Test Register
   */
  struct TST
  : public reg< uint32_t, base_addr + 0x000000e0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e0, rw, 0x00000000 >;

    using SPEED_CFG  = regbits< type,  0,  2 >;  /**< Speed Configuration  */
    using TST_J      = regbits< type,  2,  1 >;  /**< Test J Mode          */
    using TST_K      = regbits< type,  3,  1 >;  /**< Test K Mode          */
    using TST_PKT    = regbits< type,  4,  1 >;  /**< Test Packet Mode     */
    using OPMODE2    = regbits< type,  5,  1 >;  /**< OpMode2              */
  };

  /**
   * UDPHS Endpoint Configuration Register (endpoint = 0)
   */
  struct EPTCFG0
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0x00000000 >;

    using EPT_SIZE   = regbits< type,  0,  3 >;  /**< Endpoint Size                         */
    using EPT_DIR    = regbits< type,  3,  1 >;  /**< Endpoint Direction                    */
    using EPT_TYPE   = regbits< type,  4,  2 >;  /**< Endpoint Type                         */
    using BK_NUMBER  = regbits< type,  6,  2 >;  /**< Number of Banks                       */
    using NB_TRANS   = regbits< type,  8,  2 >;  /**< Number Of Transaction per Microframe  */
    using EPT_MAPD   = regbits< type, 31,  1 >;  /**< Endpoint Mapped                       */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 0)
   */
  struct EPTCTLENB0
  : public reg< uint32_t, base_addr + 0x00000104, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, wo, 0 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                               */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                        */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                     */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable          */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enable                       */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP                                         */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enable                            */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enable                                 */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enable                                */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                             */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable        */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 0)
   */
  struct EPTCTLENB0_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000104, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, wo, 0 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                      */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable                             */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 0)
   */
  struct EPTCTLDIS0
  : public reg< uint32_t, base_addr + 0x00000108, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, wo, 0 >;

    using EPT_DISABL  = regbits< type,  0,  1 >;  /**< Endpoint Disable                                      */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                             */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Enable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                   */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable        */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Disable                     */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Disable                      */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Disable                          */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Disable                               */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Disable                              */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                           */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                        */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 0)
   */
  struct EPTCTLDIS0_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000108, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, wo, 0 >;

    using EPT_DISABL   = regbits< type,  0,  1 >;  /**< Endpoint Disable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Disable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Disable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Disable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< bank flush error Interrupt Disable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                                               */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 0)
   */
  struct EPTCTL0
  : public reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled (Not for CONTROL Endpoints)  */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                       */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                    */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled         */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enabled                      */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Enabled                       */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enabled                           */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enabled                                */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enabled                               */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                            */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                         */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 0)
   */
  struct EPTCTL0_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, ro, 0x00000000 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                              */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enabled                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enabled                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enabled                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enabled                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                                               */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 0)
   */
  struct EPTSETSTA0
  : public reg< uint32_t, base_addr + 0x00000114, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Set      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 0)
   */
  struct EPTSETSTA0_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000114, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, wo, 0 >;

    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY_TRER  = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 0)
   */
  struct EPTCLRSTA0
  : public reg< uint32_t, base_addr + 0x00000118, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Clear       */
    using TOGGLESQ    = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Clear                */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Clear                    */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Clear                         */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Clear                        */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 0)
   */
  struct EPTCLRSTA0_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000118, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, wo, 0 >;

    using TOGGLESQ     = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Clear                    */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< Number of Transaction Error Clear   */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Clear              */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 0)
   */
  struct EPTSTA0
  : public reg< uint32_t, base_addr + 0x0000011c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, ro, 0x00000040 >;

    using FRCESTALL      = regbits< type,  5,  1 >;  /**< Stall Handshake Request         */
    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing               */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                  */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank     */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete    */
    using TXRDY          = regbits< type, 11,  1 >;  /**< TX Packet Ready                 */
    using RX_SETUP       = regbits< type, 12,  1 >;  /**< Received SETUP                  */
    using STALL_SNT      = regbits< type, 13,  1 >;  /**< Stall Sent                      */
    using NAK_IN         = regbits< type, 14,  1 >;  /**< NAK IN                          */
    using NAK_OUT        = regbits< type, 15,  1 >;  /**< NAK OUT                         */
    using CURBK_CTLDIR   = regbits< type, 16,  2 >;  /**< Current Bank/Control Direction  */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                    */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 0)
   */
  struct EPTSTA0_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000011c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000011c, ro, 0x00000040 >;

    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing                          */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                             */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank                */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete               */
    using TXRDY_TRER     = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error          */
    using ERR_FL_ISO     = regbits< type, 12,  1 >;  /**< Error Flow                                 */
    using ERR_CRC_NTR    = regbits< type, 13,  1 >;  /**< CRC ISO Error/Number of Transaction Error  */
    using ERR_FLUSH      = regbits< type, 14,  1 >;  /**< Bank Flush Error                           */
    using CURBK          = regbits< type, 16,  2 >;  /**< Current Bank                               */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                           */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                           */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                               */
  };

  /**
   * UDPHS Endpoint Configuration Register (endpoint = 1)
   */
  struct EPTCFG1
  : public reg< uint32_t, base_addr + 0x00000120, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000120, rw, 0x00000000 >;

    using EPT_SIZE   = regbits< type,  0,  3 >;  /**< Endpoint Size                         */
    using EPT_DIR    = regbits< type,  3,  1 >;  /**< Endpoint Direction                    */
    using EPT_TYPE   = regbits< type,  4,  2 >;  /**< Endpoint Type                         */
    using BK_NUMBER  = regbits< type,  6,  2 >;  /**< Number of Banks                       */
    using NB_TRANS   = regbits< type,  8,  2 >;  /**< Number Of Transaction per Microframe  */
    using EPT_MAPD   = regbits< type, 31,  1 >;  /**< Endpoint Mapped                       */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 1)
   */
  struct EPTCTLENB1
  : public reg< uint32_t, base_addr + 0x00000124, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, wo, 0 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                               */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                        */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                     */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable          */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enable                       */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP                                         */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enable                            */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enable                                 */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enable                                */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                             */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable        */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 1)
   */
  struct EPTCTLENB1_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000124, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000124, wo, 0 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                      */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable                             */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 1)
   */
  struct EPTCTLDIS1
  : public reg< uint32_t, base_addr + 0x00000128, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, wo, 0 >;

    using EPT_DISABL  = regbits< type,  0,  1 >;  /**< Endpoint Disable                                      */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                             */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Enable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                   */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable        */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Disable                     */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Disable                      */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Disable                          */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Disable                               */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Disable                              */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                           */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                        */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 1)
   */
  struct EPTCTLDIS1_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000128, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000128, wo, 0 >;

    using EPT_DISABL   = regbits< type,  0,  1 >;  /**< Endpoint Disable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Disable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Disable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Disable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< bank flush error Interrupt Disable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                                               */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 1)
   */
  struct EPTCTL1
  : public reg< uint32_t, base_addr + 0x0000012c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000012c, ro, 0x00000000 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled (Not for CONTROL Endpoints)  */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                       */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                    */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled         */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enabled                      */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Enabled                       */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enabled                           */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enabled                                */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enabled                               */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                            */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                         */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 1)
   */
  struct EPTCTL1_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000012c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000012c, ro, 0x00000000 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                              */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enabled                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enabled                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enabled                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enabled                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                                               */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 1)
   */
  struct EPTSETSTA1
  : public reg< uint32_t, base_addr + 0x00000134, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Set      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 1)
   */
  struct EPTSETSTA1_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000134, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, wo, 0 >;

    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY_TRER  = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 1)
   */
  struct EPTCLRSTA1
  : public reg< uint32_t, base_addr + 0x00000138, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Clear       */
    using TOGGLESQ    = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Clear                */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Clear                    */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Clear                         */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Clear                        */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 1)
   */
  struct EPTCLRSTA1_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000138, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, wo, 0 >;

    using TOGGLESQ     = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Clear                    */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< Number of Transaction Error Clear   */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Clear              */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 1)
   */
  struct EPTSTA1
  : public reg< uint32_t, base_addr + 0x0000013c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000013c, ro, 0x00000040 >;

    using FRCESTALL      = regbits< type,  5,  1 >;  /**< Stall Handshake Request         */
    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing               */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                  */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank     */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete    */
    using TXRDY          = regbits< type, 11,  1 >;  /**< TX Packet Ready                 */
    using RX_SETUP       = regbits< type, 12,  1 >;  /**< Received SETUP                  */
    using STALL_SNT      = regbits< type, 13,  1 >;  /**< Stall Sent                      */
    using NAK_IN         = regbits< type, 14,  1 >;  /**< NAK IN                          */
    using NAK_OUT        = regbits< type, 15,  1 >;  /**< NAK OUT                         */
    using CURBK_CTLDIR   = regbits< type, 16,  2 >;  /**< Current Bank/Control Direction  */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                    */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 1)
   */
  struct EPTSTA1_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000013c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000013c, ro, 0x00000040 >;

    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing                          */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                             */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank                */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete               */
    using TXRDY_TRER     = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error          */
    using ERR_FL_ISO     = regbits< type, 12,  1 >;  /**< Error Flow                                 */
    using ERR_CRC_NTR    = regbits< type, 13,  1 >;  /**< CRC ISO Error/Number of Transaction Error  */
    using ERR_FLUSH      = regbits< type, 14,  1 >;  /**< Bank Flush Error                           */
    using CURBK          = regbits< type, 16,  2 >;  /**< Current Bank                               */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                           */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                           */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                               */
  };

  /**
   * UDPHS Endpoint Configuration Register (endpoint = 2)
   */
  struct EPTCFG2
  : public reg< uint32_t, base_addr + 0x00000140, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000140, rw, 0x00000000 >;

    using EPT_SIZE   = regbits< type,  0,  3 >;  /**< Endpoint Size                         */
    using EPT_DIR    = regbits< type,  3,  1 >;  /**< Endpoint Direction                    */
    using EPT_TYPE   = regbits< type,  4,  2 >;  /**< Endpoint Type                         */
    using BK_NUMBER  = regbits< type,  6,  2 >;  /**< Number of Banks                       */
    using NB_TRANS   = regbits< type,  8,  2 >;  /**< Number Of Transaction per Microframe  */
    using EPT_MAPD   = regbits< type, 31,  1 >;  /**< Endpoint Mapped                       */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 2)
   */
  struct EPTCTLENB2
  : public reg< uint32_t, base_addr + 0x00000144, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, wo, 0 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                               */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                        */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                     */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable          */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enable                       */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP                                         */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enable                            */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enable                                 */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enable                                */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                             */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable        */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 2)
   */
  struct EPTCTLENB2_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000144, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000144, wo, 0 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                      */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable                             */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 2)
   */
  struct EPTCTLDIS2
  : public reg< uint32_t, base_addr + 0x00000148, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000148, wo, 0 >;

    using EPT_DISABL  = regbits< type,  0,  1 >;  /**< Endpoint Disable                                      */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                             */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Enable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                   */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable        */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Disable                     */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Disable                      */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Disable                          */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Disable                               */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Disable                              */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                           */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                        */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 2)
   */
  struct EPTCTLDIS2_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000148, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000148, wo, 0 >;

    using EPT_DISABL   = regbits< type,  0,  1 >;  /**< Endpoint Disable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Disable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Disable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Disable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< bank flush error Interrupt Disable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                                               */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 2)
   */
  struct EPTCTL2
  : public reg< uint32_t, base_addr + 0x0000014c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000014c, ro, 0x00000000 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled (Not for CONTROL Endpoints)  */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                       */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                    */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled         */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enabled                      */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Enabled                       */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enabled                           */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enabled                                */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enabled                               */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                            */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                         */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 2)
   */
  struct EPTCTL2_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000014c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000014c, ro, 0x00000000 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                              */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enabled                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enabled                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enabled                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enabled                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                                               */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 2)
   */
  struct EPTSETSTA2
  : public reg< uint32_t, base_addr + 0x00000154, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000154, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Set      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 2)
   */
  struct EPTSETSTA2_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000154, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000154, wo, 0 >;

    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY_TRER  = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 2)
   */
  struct EPTCLRSTA2
  : public reg< uint32_t, base_addr + 0x00000158, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000158, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Clear       */
    using TOGGLESQ    = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Clear                */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Clear                    */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Clear                         */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Clear                        */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 2)
   */
  struct EPTCLRSTA2_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000158, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000158, wo, 0 >;

    using TOGGLESQ     = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Clear                    */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< Number of Transaction Error Clear   */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Clear              */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 2)
   */
  struct EPTSTA2
  : public reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000040 >;

    using FRCESTALL      = regbits< type,  5,  1 >;  /**< Stall Handshake Request         */
    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing               */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                  */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank     */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete    */
    using TXRDY          = regbits< type, 11,  1 >;  /**< TX Packet Ready                 */
    using RX_SETUP       = regbits< type, 12,  1 >;  /**< Received SETUP                  */
    using STALL_SNT      = regbits< type, 13,  1 >;  /**< Stall Sent                      */
    using NAK_IN         = regbits< type, 14,  1 >;  /**< NAK IN                          */
    using NAK_OUT        = regbits< type, 15,  1 >;  /**< NAK OUT                         */
    using CURBK_CTLDIR   = regbits< type, 16,  2 >;  /**< Current Bank/Control Direction  */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                    */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 2)
   */
  struct EPTSTA2_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000015c, ro, 0x00000040 >;

    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing                          */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                             */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank                */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete               */
    using TXRDY_TRER     = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error          */
    using ERR_FL_ISO     = regbits< type, 12,  1 >;  /**< Error Flow                                 */
    using ERR_CRC_NTR    = regbits< type, 13,  1 >;  /**< CRC ISO Error/Number of Transaction Error  */
    using ERR_FLUSH      = regbits< type, 14,  1 >;  /**< Bank Flush Error                           */
    using CURBK          = regbits< type, 16,  2 >;  /**< Current Bank                               */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                           */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                           */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                               */
  };

  /**
   * UDPHS Endpoint Configuration Register (endpoint = 3)
   */
  struct EPTCFG3
  : public reg< uint32_t, base_addr + 0x00000160, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, rw, 0x00000000 >;

    using EPT_SIZE   = regbits< type,  0,  3 >;  /**< Endpoint Size                         */
    using EPT_DIR    = regbits< type,  3,  1 >;  /**< Endpoint Direction                    */
    using EPT_TYPE   = regbits< type,  4,  2 >;  /**< Endpoint Type                         */
    using BK_NUMBER  = regbits< type,  6,  2 >;  /**< Number of Banks                       */
    using NB_TRANS   = regbits< type,  8,  2 >;  /**< Number Of Transaction per Microframe  */
    using EPT_MAPD   = regbits< type, 31,  1 >;  /**< Endpoint Mapped                       */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 3)
   */
  struct EPTCTLENB3
  : public reg< uint32_t, base_addr + 0x00000164, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, wo, 0 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                               */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                        */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                     */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable          */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enable                       */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP                                         */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enable                            */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enable                                 */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enable                                */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                             */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable        */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 3)
   */
  struct EPTCTLENB3_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000164, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, wo, 0 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                      */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable                             */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 3)
   */
  struct EPTCTLDIS3
  : public reg< uint32_t, base_addr + 0x00000168, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000168, wo, 0 >;

    using EPT_DISABL  = regbits< type,  0,  1 >;  /**< Endpoint Disable                                      */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                             */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Enable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                   */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable        */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Disable                     */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Disable                      */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Disable                          */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Disable                               */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Disable                              */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                           */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                        */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 3)
   */
  struct EPTCTLDIS3_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000168, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000168, wo, 0 >;

    using EPT_DISABL   = regbits< type,  0,  1 >;  /**< Endpoint Disable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Disable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Disable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Disable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< bank flush error Interrupt Disable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                                               */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 3)
   */
  struct EPTCTL3
  : public reg< uint32_t, base_addr + 0x0000016c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000016c, ro, 0x00000000 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled (Not for CONTROL Endpoints)  */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                       */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                    */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled         */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enabled                      */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Enabled                       */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enabled                           */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enabled                                */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enabled                               */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                            */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                         */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 3)
   */
  struct EPTCTL3_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000016c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000016c, ro, 0x00000000 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                              */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enabled                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enabled                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enabled                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enabled                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                                               */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 3)
   */
  struct EPTSETSTA3
  : public reg< uint32_t, base_addr + 0x00000174, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000174, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Set      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 3)
   */
  struct EPTSETSTA3_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000174, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000174, wo, 0 >;

    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY_TRER  = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 3)
   */
  struct EPTCLRSTA3
  : public reg< uint32_t, base_addr + 0x00000178, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000178, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Clear       */
    using TOGGLESQ    = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Clear                */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Clear                    */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Clear                         */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Clear                        */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 3)
   */
  struct EPTCLRSTA3_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000178, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000178, wo, 0 >;

    using TOGGLESQ     = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Clear                    */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< Number of Transaction Error Clear   */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Clear              */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 3)
   */
  struct EPTSTA3
  : public reg< uint32_t, base_addr + 0x0000017c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000017c, ro, 0x00000040 >;

    using FRCESTALL      = regbits< type,  5,  1 >;  /**< Stall Handshake Request         */
    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing               */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                  */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank     */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete    */
    using TXRDY          = regbits< type, 11,  1 >;  /**< TX Packet Ready                 */
    using RX_SETUP       = regbits< type, 12,  1 >;  /**< Received SETUP                  */
    using STALL_SNT      = regbits< type, 13,  1 >;  /**< Stall Sent                      */
    using NAK_IN         = regbits< type, 14,  1 >;  /**< NAK IN                          */
    using NAK_OUT        = regbits< type, 15,  1 >;  /**< NAK OUT                         */
    using CURBK_CTLDIR   = regbits< type, 16,  2 >;  /**< Current Bank/Control Direction  */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                    */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 3)
   */
  struct EPTSTA3_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000017c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000017c, ro, 0x00000040 >;

    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing                          */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                             */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank                */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete               */
    using TXRDY_TRER     = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error          */
    using ERR_FL_ISO     = regbits< type, 12,  1 >;  /**< Error Flow                                 */
    using ERR_CRC_NTR    = regbits< type, 13,  1 >;  /**< CRC ISO Error/Number of Transaction Error  */
    using ERR_FLUSH      = regbits< type, 14,  1 >;  /**< Bank Flush Error                           */
    using CURBK          = regbits< type, 16,  2 >;  /**< Current Bank                               */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                           */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                           */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                               */
  };

  /**
   * UDPHS Endpoint Configuration Register (endpoint = 4)
   */
  struct EPTCFG4
  : public reg< uint32_t, base_addr + 0x00000180, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000180, rw, 0x00000000 >;

    using EPT_SIZE   = regbits< type,  0,  3 >;  /**< Endpoint Size                         */
    using EPT_DIR    = regbits< type,  3,  1 >;  /**< Endpoint Direction                    */
    using EPT_TYPE   = regbits< type,  4,  2 >;  /**< Endpoint Type                         */
    using BK_NUMBER  = regbits< type,  6,  2 >;  /**< Number of Banks                       */
    using NB_TRANS   = regbits< type,  8,  2 >;  /**< Number Of Transaction per Microframe  */
    using EPT_MAPD   = regbits< type, 31,  1 >;  /**< Endpoint Mapped                       */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 4)
   */
  struct EPTCTLENB4
  : public reg< uint32_t, base_addr + 0x00000184, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000184, wo, 0 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                               */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                        */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                     */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable          */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enable                       */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP                                         */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enable                            */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enable                                 */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enable                                */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                             */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable        */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 4)
   */
  struct EPTCTLENB4_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000184, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000184, wo, 0 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                      */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable                             */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 4)
   */
  struct EPTCTLDIS4
  : public reg< uint32_t, base_addr + 0x00000188, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000188, wo, 0 >;

    using EPT_DISABL  = regbits< type,  0,  1 >;  /**< Endpoint Disable                                      */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                             */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Enable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                   */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable        */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Disable                     */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Disable                      */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Disable                          */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Disable                               */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Disable                              */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                           */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                        */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 4)
   */
  struct EPTCTLDIS4_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000188, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000188, wo, 0 >;

    using EPT_DISABL   = regbits< type,  0,  1 >;  /**< Endpoint Disable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Disable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Disable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Disable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< bank flush error Interrupt Disable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                                               */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 4)
   */
  struct EPTCTL4
  : public reg< uint32_t, base_addr + 0x0000018c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000018c, ro, 0x00000000 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled (Not for CONTROL Endpoints)  */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                       */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                    */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled         */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enabled                      */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Enabled                       */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enabled                           */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enabled                                */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enabled                               */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                            */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                         */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 4)
   */
  struct EPTCTL4_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000018c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000018c, ro, 0x00000000 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                              */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enabled                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enabled                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enabled                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enabled                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                                               */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 4)
   */
  struct EPTSETSTA4
  : public reg< uint32_t, base_addr + 0x00000194, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000194, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Set      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 4)
   */
  struct EPTSETSTA4_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000194, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000194, wo, 0 >;

    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY_TRER  = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 4)
   */
  struct EPTCLRSTA4
  : public reg< uint32_t, base_addr + 0x00000198, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000198, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Clear       */
    using TOGGLESQ    = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Clear                */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Clear                    */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Clear                         */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Clear                        */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 4)
   */
  struct EPTCLRSTA4_ISOENDPT
  : public reg< uint32_t, base_addr + 0x00000198, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000198, wo, 0 >;

    using TOGGLESQ     = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Clear                    */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< Number of Transaction Error Clear   */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Clear              */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 4)
   */
  struct EPTSTA4
  : public reg< uint32_t, base_addr + 0x0000019c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000019c, ro, 0x00000040 >;

    using FRCESTALL      = regbits< type,  5,  1 >;  /**< Stall Handshake Request         */
    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing               */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                  */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank     */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete    */
    using TXRDY          = regbits< type, 11,  1 >;  /**< TX Packet Ready                 */
    using RX_SETUP       = regbits< type, 12,  1 >;  /**< Received SETUP                  */
    using STALL_SNT      = regbits< type, 13,  1 >;  /**< Stall Sent                      */
    using NAK_IN         = regbits< type, 14,  1 >;  /**< NAK IN                          */
    using NAK_OUT        = regbits< type, 15,  1 >;  /**< NAK OUT                         */
    using CURBK_CTLDIR   = regbits< type, 16,  2 >;  /**< Current Bank/Control Direction  */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                    */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 4)
   */
  struct EPTSTA4_ISOENDPT
  : public reg< uint32_t, base_addr + 0x0000019c, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x0000019c, ro, 0x00000040 >;

    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing                          */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                             */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank                */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete               */
    using TXRDY_TRER     = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error          */
    using ERR_FL_ISO     = regbits< type, 12,  1 >;  /**< Error Flow                                 */
    using ERR_CRC_NTR    = regbits< type, 13,  1 >;  /**< CRC ISO Error/Number of Transaction Error  */
    using ERR_FLUSH      = regbits< type, 14,  1 >;  /**< Bank Flush Error                           */
    using CURBK          = regbits< type, 16,  2 >;  /**< Current Bank                               */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                           */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                           */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                               */
  };

  /**
   * UDPHS Endpoint Configuration Register (endpoint = 5)
   */
  struct EPTCFG5
  : public reg< uint32_t, base_addr + 0x000001a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a0, rw, 0x00000000 >;

    using EPT_SIZE   = regbits< type,  0,  3 >;  /**< Endpoint Size                         */
    using EPT_DIR    = regbits< type,  3,  1 >;  /**< Endpoint Direction                    */
    using EPT_TYPE   = regbits< type,  4,  2 >;  /**< Endpoint Type                         */
    using BK_NUMBER  = regbits< type,  6,  2 >;  /**< Number of Banks                       */
    using NB_TRANS   = regbits< type,  8,  2 >;  /**< Number Of Transaction per Microframe  */
    using EPT_MAPD   = regbits< type, 31,  1 >;  /**< Endpoint Mapped                       */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 5)
   */
  struct EPTCTLENB5
  : public reg< uint32_t, base_addr + 0x000001a4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a4, wo, 0 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                               */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                        */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                     */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable          */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enable                       */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP                                         */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enable                            */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enable                                 */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enable                                */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                             */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable        */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 5)
   */
  struct EPTCTLENB5_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001a4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a4, wo, 0 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                      */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable                             */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 5)
   */
  struct EPTCTLDIS5
  : public reg< uint32_t, base_addr + 0x000001a8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a8, wo, 0 >;

    using EPT_DISABL  = regbits< type,  0,  1 >;  /**< Endpoint Disable                                      */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                             */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Enable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                   */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable        */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Disable                     */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Disable                      */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Disable                          */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Disable                               */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Disable                              */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                           */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                        */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 5)
   */
  struct EPTCTLDIS5_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001a8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001a8, wo, 0 >;

    using EPT_DISABL   = regbits< type,  0,  1 >;  /**< Endpoint Disable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Disable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Disable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Disable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< bank flush error Interrupt Disable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                                               */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 5)
   */
  struct EPTCTL5
  : public reg< uint32_t, base_addr + 0x000001ac, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001ac, ro, 0x00000000 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled (Not for CONTROL Endpoints)  */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                       */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                    */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled         */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enabled                      */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Enabled                       */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enabled                           */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enabled                                */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enabled                               */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                            */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                         */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 5)
   */
  struct EPTCTL5_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001ac, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001ac, ro, 0x00000000 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                              */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enabled                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enabled                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enabled                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enabled                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                                               */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 5)
   */
  struct EPTSETSTA5
  : public reg< uint32_t, base_addr + 0x000001b4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001b4, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Set      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 5)
   */
  struct EPTSETSTA5_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001b4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001b4, wo, 0 >;

    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY_TRER  = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 5)
   */
  struct EPTCLRSTA5
  : public reg< uint32_t, base_addr + 0x000001b8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001b8, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Clear       */
    using TOGGLESQ    = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Clear                */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Clear                    */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Clear                         */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Clear                        */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 5)
   */
  struct EPTCLRSTA5_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001b8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001b8, wo, 0 >;

    using TOGGLESQ     = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Clear                    */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< Number of Transaction Error Clear   */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Clear              */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 5)
   */
  struct EPTSTA5
  : public reg< uint32_t, base_addr + 0x000001bc, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x000001bc, ro, 0x00000040 >;

    using FRCESTALL      = regbits< type,  5,  1 >;  /**< Stall Handshake Request         */
    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing               */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                  */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank     */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete    */
    using TXRDY          = regbits< type, 11,  1 >;  /**< TX Packet Ready                 */
    using RX_SETUP       = regbits< type, 12,  1 >;  /**< Received SETUP                  */
    using STALL_SNT      = regbits< type, 13,  1 >;  /**< Stall Sent                      */
    using NAK_IN         = regbits< type, 14,  1 >;  /**< NAK IN                          */
    using NAK_OUT        = regbits< type, 15,  1 >;  /**< NAK OUT                         */
    using CURBK_CTLDIR   = regbits< type, 16,  2 >;  /**< Current Bank/Control Direction  */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                    */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 5)
   */
  struct EPTSTA5_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001bc, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x000001bc, ro, 0x00000040 >;

    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing                          */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                             */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank                */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete               */
    using TXRDY_TRER     = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error          */
    using ERR_FL_ISO     = regbits< type, 12,  1 >;  /**< Error Flow                                 */
    using ERR_CRC_NTR    = regbits< type, 13,  1 >;  /**< CRC ISO Error/Number of Transaction Error  */
    using ERR_FLUSH      = regbits< type, 14,  1 >;  /**< Bank Flush Error                           */
    using CURBK          = regbits< type, 16,  2 >;  /**< Current Bank                               */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                           */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                           */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                               */
  };

  /**
   * UDPHS Endpoint Configuration Register (endpoint = 6)
   */
  struct EPTCFG6
  : public reg< uint32_t, base_addr + 0x000001c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001c0, rw, 0x00000000 >;

    using EPT_SIZE   = regbits< type,  0,  3 >;  /**< Endpoint Size                         */
    using EPT_DIR    = regbits< type,  3,  1 >;  /**< Endpoint Direction                    */
    using EPT_TYPE   = regbits< type,  4,  2 >;  /**< Endpoint Type                         */
    using BK_NUMBER  = regbits< type,  6,  2 >;  /**< Number of Banks                       */
    using NB_TRANS   = regbits< type,  8,  2 >;  /**< Number Of Transaction per Microframe  */
    using EPT_MAPD   = regbits< type, 31,  1 >;  /**< Endpoint Mapped                       */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 6)
   */
  struct EPTCTLENB6
  : public reg< uint32_t, base_addr + 0x000001c4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001c4, wo, 0 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                               */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                        */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                     */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable          */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enable                       */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP                                         */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enable                            */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enable                                 */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enable                                */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                             */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable        */
  };

  /**
   * UDPHS Endpoint Control Enable Register (endpoint = 6)
   */
  struct EPTCTLENB6_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001c4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001c4, wo, 0 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                      */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Send/Short Packet Interrupt Enable                             */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 6)
   */
  struct EPTCTLDIS6
  : public reg< uint32_t, base_addr + 0x000001c8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001c8, wo, 0 >;

    using EPT_DISABL  = regbits< type,  0,  1 >;  /**< Endpoint Disable                                      */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                             */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Enable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                   */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable        */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Disable                     */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Disable                      */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Disable                          */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Disable                               */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Disable                              */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                           */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                        */
  };

  /**
   * UDPHS Endpoint Control Disable Register (endpoint = 6)
   */
  struct EPTCTLDIS6_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001c8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001c8, wo, 0 >;

    using EPT_DISABL   = regbits< type,  0,  1 >;  /**< Endpoint Disable                                                             */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Disable                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupts Disable DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Disable                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Disable                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Disable                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Disable                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Disable                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Disable                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< bank flush error Interrupt Disable                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Disable                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Disable                                               */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 6)
   */
  struct EPTCTL6
  : public reg< uint32_t, base_addr + 0x000001cc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001cc, ro, 0x00000000 >;

    using EPT_ENABL   = regbits< type,  0,  1 >;  /**< Endpoint Enable                                        */
    using AUTO_VALID  = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled (Not for CONTROL Endpoints)  */
    using INTDIS_DMA  = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                 */
    using NYET_DIS    = regbits< type,  4,  1 >;  /**< NYET Disable (Only for High Speed Bulk OUT endpoints)  */
    using ERR_OVFLW   = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                       */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                    */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled         */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Interrupt Enabled                      */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Interrupt Enabled                       */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Interrupt Enabled                           */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Interrupt Enabled                                */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Interrupt Enabled                               */
    using BUSY_BANK   = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                            */
    using SHRT_PCKT   = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                         */
  };

  /**
   * UDPHS Endpoint Control Register (endpoint = 6)
   */
  struct EPTCTL6_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001cc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001cc, ro, 0x00000000 >;

    using EPT_ENABL    = regbits< type,  0,  1 >;  /**< Endpoint Enable                                                              */
    using AUTO_VALID   = regbits< type,  1,  1 >;  /**< Packet Auto-Valid Enabled                                                    */
    using INTDIS_DMA   = regbits< type,  3,  1 >;  /**< Interrupt Disables DMA                                                       */
    using DATAX_RX     = regbits< type,  6,  1 >;  /**< DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using MDATA_RX     = regbits< type,  7,  1 >;  /**< MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)  */
    using ERR_OVFLW    = regbits< type,  8,  1 >;  /**< Overflow Error Interrupt Enabled                                             */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Interrupt Enabled                                          */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Interrupt Enabled                               */
    using TXRDY_TRER   = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error Interrupt Enabled                          */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Interrupt Enabled                                                 */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< ISO CRC Error/Number of Transaction Error Interrupt Enabled                  */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Interrupt Enabled                                           */
    using BUSY_BANK    = regbits< type, 18,  1 >;  /**< Busy Bank Interrupt Enabled                                                  */
    using SHRT_PCKT    = regbits< type, 31,  1 >;  /**< Short Packet Interrupt Enabled                                               */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 6)
   */
  struct EPTSETSTA6
  : public reg< uint32_t, base_addr + 0x000001d4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d4, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Set      */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY       = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Set Status Register (endpoint = 6)
   */
  struct EPTSETSTA6_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001d4, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d4, wo, 0 >;

    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< KILL Bank Set (for IN Endpoint)  */
    using TXRDY_TRER  = regbits< type, 11,  1 >;  /**< TX Packet Ready Set              */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 6)
   */
  struct EPTCLRSTA6
  : public reg< uint32_t, base_addr + 0x000001d8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d8, wo, 0 >;

    using FRCESTALL   = regbits< type,  5,  1 >;  /**< Stall Handshake Request Clear       */
    using TOGGLESQ    = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL  = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT   = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using RX_SETUP    = regbits< type, 12,  1 >;  /**< Received SETUP Clear                */
    using STALL_SNT   = regbits< type, 13,  1 >;  /**< Stall Sent Clear                    */
    using NAK_IN      = regbits< type, 14,  1 >;  /**< NAKIN Clear                         */
    using NAK_OUT     = regbits< type, 15,  1 >;  /**< NAKOUT Clear                        */
  };

  /**
   * UDPHS Endpoint Clear Status Register (endpoint = 6)
   */
  struct EPTCLRSTA6_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001d8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x000001d8, wo, 0 >;

    using TOGGLESQ     = regbits< type,  6,  1 >;  /**< Data Toggle Clear                   */
    using RXRDY_TXKL   = regbits< type,  9,  1 >;  /**< Received OUT Data Clear             */
    using TX_COMPLT    = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete Clear  */
    using ERR_FL_ISO   = regbits< type, 12,  1 >;  /**< Error Flow Clear                    */
    using ERR_CRC_NTR  = regbits< type, 13,  1 >;  /**< Number of Transaction Error Clear   */
    using ERR_FLUSH    = regbits< type, 14,  1 >;  /**< Bank Flush Error Clear              */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 6)
   */
  struct EPTSTA6
  : public reg< uint32_t, base_addr + 0x000001dc, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x000001dc, ro, 0x00000040 >;

    using FRCESTALL      = regbits< type,  5,  1 >;  /**< Stall Handshake Request         */
    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing               */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                  */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank     */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete    */
    using TXRDY          = regbits< type, 11,  1 >;  /**< TX Packet Ready                 */
    using RX_SETUP       = regbits< type, 12,  1 >;  /**< Received SETUP                  */
    using STALL_SNT      = regbits< type, 13,  1 >;  /**< Stall Sent                      */
    using NAK_IN         = regbits< type, 14,  1 >;  /**< NAK IN                          */
    using NAK_OUT        = regbits< type, 15,  1 >;  /**< NAK OUT                         */
    using CURBK_CTLDIR   = regbits< type, 16,  2 >;  /**< Current Bank/Control Direction  */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                    */
  };

  /**
   * UDPHS Endpoint Status Register (endpoint = 6)
   */
  struct EPTSTA6_ISOENDPT
  : public reg< uint32_t, base_addr + 0x000001dc, ro, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x000001dc, ro, 0x00000040 >;

    using TOGGLESQ_STA   = regbits< type,  6,  2 >;  /**< Toggle Sequencing                          */
    using ERR_OVFLW      = regbits< type,  8,  1 >;  /**< Overflow Error                             */
    using RXRDY_TXKL     = regbits< type,  9,  1 >;  /**< Received OUT Data/KILL Bank                */
    using TX_COMPLT      = regbits< type, 10,  1 >;  /**< Transmitted IN Data Complete               */
    using TXRDY_TRER     = regbits< type, 11,  1 >;  /**< TX Packet Ready/Transaction Error          */
    using ERR_FL_ISO     = regbits< type, 12,  1 >;  /**< Error Flow                                 */
    using ERR_CRC_NTR    = regbits< type, 13,  1 >;  /**< CRC ISO Error/Number of Transaction Error  */
    using ERR_FLUSH      = regbits< type, 14,  1 >;  /**< Bank Flush Error                           */
    using CURBK          = regbits< type, 16,  2 >;  /**< Current Bank                               */
    using BUSY_BANK_STA  = regbits< type, 18,  2 >;  /**< Busy Bank Number                           */
    using BYTE_COUNT     = regbits< type, 20, 11 >;  /**< UDPHS Byte Count                           */
    using SHRT_PCKT      = regbits< type, 31,  1 >;  /**< Short Packet                               */
  };

  /**
   * UDPHS DMA Next Descriptor Address Register (channel = 0)
   */
  struct DMANXTDSC0
  : public reg< uint32_t, base_addr + 0x00000300, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000300, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * UDPHS DMA Channel Address Register (channel = 0)
   */
  struct DMAADDRESS0
  : public reg< uint32_t, base_addr + 0x00000304, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000304, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * UDPHS DMA Channel Control Register (channel = 0)
   */
  struct DMACONTROL0
  : public reg< uint32_t, base_addr + 0x00000308, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000308, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< (Channel Enable Command)                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable (Command)  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable (Control)                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                        */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                          */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                      */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                       */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                         */
  };

  /**
   * UDPHS DMA Channel Status Register (channel = 0)
   */
  struct DMASTATUS0
  : public reg< uint32_t, base_addr + 0x0000030c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000030c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * UDPHS DMA Next Descriptor Address Register (channel = 1)
   */
  struct DMANXTDSC1
  : public reg< uint32_t, base_addr + 0x00000310, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000310, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * UDPHS DMA Channel Address Register (channel = 1)
   */
  struct DMAADDRESS1
  : public reg< uint32_t, base_addr + 0x00000314, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000314, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * UDPHS DMA Channel Control Register (channel = 1)
   */
  struct DMACONTROL1
  : public reg< uint32_t, base_addr + 0x00000318, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000318, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< (Channel Enable Command)                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable (Command)  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable (Control)                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                        */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                          */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                      */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                       */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                         */
  };

  /**
   * UDPHS DMA Channel Status Register (channel = 1)
   */
  struct DMASTATUS1
  : public reg< uint32_t, base_addr + 0x0000031c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000031c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * UDPHS DMA Next Descriptor Address Register (channel = 2)
   */
  struct DMANXTDSC2
  : public reg< uint32_t, base_addr + 0x00000320, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000320, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * UDPHS DMA Channel Address Register (channel = 2)
   */
  struct DMAADDRESS2
  : public reg< uint32_t, base_addr + 0x00000324, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000324, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * UDPHS DMA Channel Control Register (channel = 2)
   */
  struct DMACONTROL2
  : public reg< uint32_t, base_addr + 0x00000328, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000328, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< (Channel Enable Command)                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable (Command)  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable (Control)                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                        */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                          */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                      */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                       */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                         */
  };

  /**
   * UDPHS DMA Channel Status Register (channel = 2)
   */
  struct DMASTATUS2
  : public reg< uint32_t, base_addr + 0x0000032c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000032c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * UDPHS DMA Next Descriptor Address Register (channel = 3)
   */
  struct DMANXTDSC3
  : public reg< uint32_t, base_addr + 0x00000330, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000330, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * UDPHS DMA Channel Address Register (channel = 3)
   */
  struct DMAADDRESS3
  : public reg< uint32_t, base_addr + 0x00000334, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000334, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * UDPHS DMA Channel Control Register (channel = 3)
   */
  struct DMACONTROL3
  : public reg< uint32_t, base_addr + 0x00000338, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000338, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< (Channel Enable Command)                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable (Command)  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable (Control)                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                        */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                          */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                      */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                       */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                         */
  };

  /**
   * UDPHS DMA Channel Status Register (channel = 3)
   */
  struct DMASTATUS3
  : public reg< uint32_t, base_addr + 0x0000033c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000033c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * UDPHS DMA Next Descriptor Address Register (channel = 4)
   */
  struct DMANXTDSC4
  : public reg< uint32_t, base_addr + 0x00000340, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000340, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * UDPHS DMA Channel Address Register (channel = 4)
   */
  struct DMAADDRESS4
  : public reg< uint32_t, base_addr + 0x00000344, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000344, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * UDPHS DMA Channel Control Register (channel = 4)
   */
  struct DMACONTROL4
  : public reg< uint32_t, base_addr + 0x00000348, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000348, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< (Channel Enable Command)                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable (Command)  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable (Control)                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                        */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                          */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                      */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                       */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                         */
  };

  /**
   * UDPHS DMA Channel Status Register (channel = 4)
   */
  struct DMASTATUS4
  : public reg< uint32_t, base_addr + 0x0000034c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000034c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };

  /**
   * UDPHS DMA Next Descriptor Address Register (channel = 5)
   */
  struct DMANXTDSC5
  : public reg< uint32_t, base_addr + 0x00000350, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000350, rw, 0x00000000 >;

    using NXT_DSC_ADD  = regbits< type,  0, 32 >;  /**< Next Descriptor Address  */
  };

  /**
   * UDPHS DMA Channel Address Register (channel = 5)
   */
  struct DMAADDRESS5
  : public reg< uint32_t, base_addr + 0x00000354, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000354, rw, 0x00000000 >;

    using BUFF_ADD  = regbits< type,  0, 32 >;  /**< Buffer Address  */
  };

  /**
   * UDPHS DMA Channel Control Register (channel = 5)
   */
  struct DMACONTROL5
  : public reg< uint32_t, base_addr + 0x00000358, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000358, rw, 0x00000000 >;

    using CHANN_ENB    = regbits< type,  0,  1 >;  /**< (Channel Enable Command)                                */
    using LDNXT_DSC    = regbits< type,  1,  1 >;  /**< Load Next Channel Transfer Descriptor Enable (Command)  */
    using END_TR_EN    = regbits< type,  2,  1 >;  /**< End of Transfer Enable (Control)                        */
    using END_B_EN     = regbits< type,  3,  1 >;  /**< End of Buffer Enable (Control)                          */
    using END_TR_IT    = regbits< type,  4,  1 >;  /**< End of Transfer Interrupt Enable                        */
    using END_BUFFIT   = regbits< type,  5,  1 >;  /**< End of Buffer Interrupt Enable                          */
    using DESC_LD_IT   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Interrupt Enable                      */
    using BURST_LCK    = regbits< type,  7,  1 >;  /**< Burst Lock Enable                                       */
    using BUFF_LENGTH  = regbits< type, 16, 16 >;  /**< Buffer Byte Length (Write-only)                         */
  };

  /**
   * UDPHS DMA Channel Status Register (channel = 5)
   */
  struct DMASTATUS5
  : public reg< uint32_t, base_addr + 0x0000035c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000035c, rw, 0x00000000 >;

    using CHANN_ENB   = regbits< type,  0,  1 >;  /**< Channel Enable Status           */
    using CHANN_ACT   = regbits< type,  1,  1 >;  /**< Channel Active Status           */
    using END_TR_ST   = regbits< type,  4,  1 >;  /**< End of Channel Transfer Status  */
    using END_BF_ST   = regbits< type,  5,  1 >;  /**< End of Channel Buffer Status    */
    using DESC_LDST   = regbits< type,  6,  1 >;  /**< Descriptor Loaded Status        */
    using BUFF_COUNT  = regbits< type, 16, 16 >;  /**< Buffer Byte Count               */
  };
};
} // namespace mptl

#endif // ARCH_REG_UDPHS_HPP_INCLUDED
