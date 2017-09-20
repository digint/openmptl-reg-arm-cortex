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
//  Import from CMSIS-SVD: "STMicro/STM32F413.svd"
//
//  name: STM32F413
//  version: 1.0
//  description: STM32F413_v1r0
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_QUADSPI_HPP_INCLUDED
#define ARCH_REG_QUADSPI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * QuadSPI interface
 */
struct QUADSPI
{
  static constexpr reg_addr_t base_addr = 0xa0001000;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using PRESCALER  = regbits< type, 24,  8 >;  /**< Clock prescaler                     */
    using PMM        = regbits< type, 23,  1 >;  /**< Polling match mode                  */
    using APMS       = regbits< type, 22,  1 >;  /**< Automatic poll mode stop            */
    using TOIE       = regbits< type, 20,  1 >;  /**< TimeOut interrupt enable            */
    using SMIE       = regbits< type, 19,  1 >;  /**< Status match interrupt enable       */
    using FTIE       = regbits< type, 18,  1 >;  /**< FIFO threshold interrupt enable     */
    using TCIE       = regbits< type, 17,  1 >;  /**< Transfer complete interrupt enable  */
    using TEIE       = regbits< type, 16,  1 >;  /**< Transfer error interrupt enable     */
    using FTHRES     = regbits< type,  8,  5 >;  /**< IFO threshold level                 */
    using FSEL       = regbits< type,  7,  1 >;  /**< FLASH memory selection              */
    using DFM        = regbits< type,  6,  1 >;  /**< Dual-flash mode                     */
    using SSHIFT     = regbits< type,  4,  1 >;  /**< Sample shift                        */
    using TCEN       = regbits< type,  3,  1 >;  /**< Timeout counter enable              */
    using DMAEN      = regbits< type,  2,  1 >;  /**< DMA enable                          */
    using ABORT      = regbits< type,  1,  1 >;  /**< Abort request                       */
    using EN         = regbits< type,  0,  1 >;  /**< Enable                              */
  };

  /**
   * device configuration register
   */
  struct DCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using FSIZE   = regbits< type, 16,  5 >;  /**< FLASH memory size      */
    using CSHT    = regbits< type,  8,  3 >;  /**< Chip select high time  */
    using CKMODE  = regbits< type,  0,  1 >;  /**< Mode 0 / mode 3        */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using FLEVEL  = regbits< type,  8,  7 >;  /**< FIFO level              */
    using BUSY    = regbits< type,  5,  1 >;  /**< Busy                    */
    using TOF     = regbits< type,  4,  1 >;  /**< Timeout flag            */
    using SMF     = regbits< type,  3,  1 >;  /**< Status match flag       */
    using FTF     = regbits< type,  2,  1 >;  /**< FIFO threshold flag     */
    using TCF     = regbits< type,  1,  1 >;  /**< Transfer complete flag  */
    using TEF     = regbits< type,  0,  1 >;  /**< Transfer error flag     */
  };

  /**
   * flag clear register
   */
  struct FCR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using CTOF  = regbits< type,  4,  1 >;  /**< Clear timeout flag            */
    using CSMF  = regbits< type,  3,  1 >;  /**< Clear status match flag       */
    using CTCF  = regbits< type,  1,  1 >;  /**< Clear transfer complete flag  */
    using CTEF  = regbits< type,  0,  1 >;  /**< Clear transfer error flag     */
  };

  /**
   * data length register
   */
  struct DLR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using DL  = regbits< type,  0, 32 >;  /**< Data length  */
  };

  /**
   * communication configuration register
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using DDRM         = regbits< type, 31,  1 >;  /**< Double data rate mode            */
    using DHHC         = regbits< type, 30,  1 >;  /**< DDR hold half cycle              */
    using SIOO         = regbits< type, 28,  1 >;  /**< Send instruction only once mode  */
    using FMODE        = regbits< type, 26,  2 >;  /**< Functional mode                  */
    using DMODE        = regbits< type, 24,  2 >;  /**< Data mode                        */
    using DCYC         = regbits< type, 18,  5 >;  /**< Number of dummy cycles           */
    using ABSIZE       = regbits< type, 16,  2 >;  /**< Alternate bytes size             */
    using ABMODE       = regbits< type, 14,  2 >;  /**< Alternate bytes mode             */
    using ADSIZE       = regbits< type, 12,  2 >;  /**< Address size                     */
    using ADMODE       = regbits< type, 10,  2 >;  /**< Address mode                     */
    using IMODE        = regbits< type,  8,  2 >;  /**< Instruction mode                 */
    using INSTRUCTION  = regbits< type,  0,  8 >;  /**< Instruction                      */
  };

  /**
   * address register
   */
  struct AR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using ADDRESS  = regbits< type,  0, 32 >;  /**< Address  */
  };

  /**
   * ABR
   */
  struct ABR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using ALTERNATE  = regbits< type,  0, 32 >;  /**< ALTERNATE  */
  };

  /**
   * data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data  */
  };

  /**
   * polling status mask register
   */
  struct PSMKR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using MASK  = regbits< type,  0, 32 >;  /**< Status mask  */
  };

  /**
   * polling status match register
   */
  struct PSMAR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using MATCH  = regbits< type,  0, 32 >;  /**< Status match  */
  };

  /**
   * polling interval register
   */
  struct PIR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using INTERVAL  = regbits< type,  0, 16 >;  /**< Polling interval  */
  };

  /**
   * low-power timeout register
   */
  struct LPTR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using TIMEOUT  = regbits< type,  0, 16 >;  /**< Timeout period  */
  };
};
} // namespace mptl

#endif // ARCH_REG_QUADSPI_HPP_INCLUDED
