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
//  Import from CMSIS-SVD: "STMicro/STM32F446x.svd"
//
//  name: STM32F446x
//  version: 1.0
//  description: STM32F446x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SAI2_HPP_INCLUDED
#define ARCH_REG_SAI2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial audio interface
 *
 * (derived from: SAI1)
 */
struct SAI2
{
  static constexpr reg_addr_t base_addr = 0x40015c00;

  /**
   * BConfiguration register 1
   */
  struct BCR1
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000040 >;

    using MCJDIV    = regbits< type, 20,  4 >;  /**< Master clock divider         */
    using NODIV     = regbits< type, 19,  1 >;  /**< No divider                   */
    using DMAEN     = regbits< type, 17,  1 >;  /**< DMA enable                   */
    using SAIBEN    = regbits< type, 16,  1 >;  /**< Audio block B enable         */
    using OutDri    = regbits< type, 13,  1 >;  /**< Output drive                 */
    using MONO      = regbits< type, 12,  1 >;  /**< Mono mode                    */
    using SYNCEN    = regbits< type, 10,  2 >;  /**< Synchronization enable       */
    using CKSTR     = regbits< type,  9,  1 >;  /**< Clock strobing edge          */
    using LSBFIRST  = regbits< type,  8,  1 >;  /**< Least significant bit first  */
    using DS        = regbits< type,  5,  3 >;  /**< Data size                    */
    using PRTCFG    = regbits< type,  2,  2 >;  /**< Protocol configuration       */
    using MODE      = regbits< type,  0,  2 >;  /**< Audio block mode             */
  };

  /**
   * BConfiguration register 2
   */
  struct BCR2
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using COMP     = regbits< type, 14,  2 >;  /**< Companding mode                   */
    using CPL      = regbits< type, 13,  1 >;  /**< Complement bit                    */
    using MUTECN   = regbits< type,  7,  6 >;  /**< Mute counter                      */
    using MUTEVAL  = regbits< type,  6,  1 >;  /**< Mute value                        */
    using MUTE     = regbits< type,  5,  1 >;  /**< Mute                              */
    using TRIS     = regbits< type,  4,  1 >;  /**< Tristate management on data line  */
    using FFLUS    = regbits< type,  3,  1 >;  /**< FIFO flush                        */
    using FTH      = regbits< type,  0,  3 >;  /**< FIFO threshold                    */
  };

  /**
   * BFRCR
   */
  struct BFRCR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000007 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000007 >;

    using FSOFF  = regbits< type, 18,  1 >;  /**< Frame synchronization offset               */
    using FSPOL  = regbits< type, 17,  1 >;  /**< Frame synchronization polarity             */
    using FSDEF  = regbits< type, 16,  1 >;  /**< Frame synchronization definition           */
    using FSALL  = regbits< type,  8,  7 >;  /**< Frame synchronization active level length  */
    using FRL    = regbits< type,  0,  8 >;  /**< Frame length                               */
  };

  /**
   * BSlot register
   */
  struct BSLOTR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using SLOTEN  = regbits< type, 16, 16 >;  /**< Slot enable                        */
    using NBSLOT  = regbits< type,  8,  4 >;  /**< Number of slots in an audio frame  */
    using SLOTSZ  = regbits< type,  6,  2 >;  /**< Slot size                          */
    using FBOFF   = regbits< type,  0,  5 >;  /**< First bit offset                   */
  };

  /**
   * BInterrupt mask register2
   */
  struct BIM
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using LFSDETIE  = regbits< type,  6,  1 >;  /**< Late frame synchronization detection interrupt enable         */
    using AFSDETIE  = regbits< type,  5,  1 >;  /**< Anticipated frame synchronization detection interrupt enable  */
    using CNRDYIE   = regbits< type,  4,  1 >;  /**< Codec not ready interrupt enable                              */
    using FREQIE    = regbits< type,  3,  1 >;  /**< FIFO request interrupt enable                                 */
    using WCKCFG    = regbits< type,  2,  1 >;  /**< Wrong clock configuration interrupt enable                    */
    using MUTEDET   = regbits< type,  1,  1 >;  /**< Mute detection interrupt enable                               */
    using OVRUDRIE  = regbits< type,  0,  1 >;  /**< Overrun/underrun interrupt enable                             */
  };

  /**
   * BStatus register
   */
  struct BSR
  : public reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >;

    using FLVL     = regbits< type, 16,  3 >;  /**< FIFO level threshold                         */
    using LFSDET   = regbits< type,  6,  1 >;  /**< Late frame synchronization detection         */
    using AFSDET   = regbits< type,  5,  1 >;  /**< Anticipated frame synchronization detection  */
    using CNRDY    = regbits< type,  4,  1 >;  /**< Codec not ready                              */
    using FREQ     = regbits< type,  3,  1 >;  /**< FIFO request                                 */
    using WCKCFG   = regbits< type,  2,  1 >;  /**< Wrong clock configuration flag               */
    using MUTEDET  = regbits< type,  1,  1 >;  /**< Mute detection                               */
    using OVRUDR   = regbits< type,  0,  1 >;  /**< Overrun / underrun                           */
  };

  /**
   * BClear flag register
   */
  struct BCLRFR
  : public reg< uint32_t, base_addr + 0x3c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, wo, 0x00000000 >;

    using LFSDET   = regbits< type,  6,  1 >;  /**< Clear late frame synchronization detection flag         */
    using CAFSDET  = regbits< type,  5,  1 >;  /**< Clear anticipated frame synchronization detection flag  */
    using CNRDY    = regbits< type,  4,  1 >;  /**< Clear codec not ready flag                              */
    using WCKCFG   = regbits< type,  2,  1 >;  /**< Clear wrong clock configuration flag                    */
    using MUTEDET  = regbits< type,  1,  1 >;  /**< Mute detection flag                                     */
    using OVRUDR   = regbits< type,  0,  1 >;  /**< Clear overrun / underrun                                */
  };

  /**
   * BData register
   */
  struct BDR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data  */
  };

  /**
   * AConfiguration register 1
   */
  struct ACR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000040 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000040 >;

    using MCJDIV    = regbits< type, 20,  4 >;  /**< Master clock divider         */
    using NODIV     = regbits< type, 19,  1 >;  /**< No divider                   */
    using DMAEN     = regbits< type, 17,  1 >;  /**< DMA enable                   */
    using SAIAEN    = regbits< type, 16,  1 >;  /**< Audio block A enable         */
    using OutDri    = regbits< type, 13,  1 >;  /**< Output drive                 */
    using MONO      = regbits< type, 12,  1 >;  /**< Mono mode                    */
    using SYNCEN    = regbits< type, 10,  2 >;  /**< Synchronization enable       */
    using CKSTR     = regbits< type,  9,  1 >;  /**< Clock strobing edge          */
    using LSBFIRST  = regbits< type,  8,  1 >;  /**< Least significant bit first  */
    using DS        = regbits< type,  5,  3 >;  /**< Data size                    */
    using PRTCFG    = regbits< type,  2,  2 >;  /**< Protocol configuration       */
    using MODE      = regbits< type,  0,  2 >;  /**< Audio block mode             */
  };

  /**
   * AConfiguration register 2
   */
  struct ACR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using COMP     = regbits< type, 14,  2 >;  /**< Companding mode                   */
    using CPL      = regbits< type, 13,  1 >;  /**< Complement bit                    */
    using MUTECN   = regbits< type,  7,  6 >;  /**< Mute counter                      */
    using MUTEVAL  = regbits< type,  6,  1 >;  /**< Mute value                        */
    using MUTE     = regbits< type,  5,  1 >;  /**< Mute                              */
    using TRIS     = regbits< type,  4,  1 >;  /**< Tristate management on data line  */
    using FFLUS    = regbits< type,  3,  1 >;  /**< FIFO flush                        */
    using FTH      = regbits< type,  0,  3 >;  /**< FIFO threshold                    */
  };

  /**
   * AFRCR
   */
  struct AFRCR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000007 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000007 >;

    using FSOFF  = regbits< type, 18,  1 >;  /**< Frame synchronization offset               */
    using FSPOL  = regbits< type, 17,  1 >;  /**< Frame synchronization polarity             */
    using FSDEF  = regbits< type, 16,  1 >;  /**< Frame synchronization definition           */
    using FSALL  = regbits< type,  8,  7 >;  /**< Frame synchronization active level length  */
    using FRL    = regbits< type,  0,  8 >;  /**< Frame length                               */
  };

  /**
   * ASlot register
   */
  struct ASLOTR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using SLOTEN  = regbits< type, 16, 16 >;  /**< Slot enable                        */
    using NBSLOT  = regbits< type,  8,  4 >;  /**< Number of slots in an audio frame  */
    using SLOTSZ  = regbits< type,  6,  2 >;  /**< Slot size                          */
    using FBOFF   = regbits< type,  0,  5 >;  /**< First bit offset                   */
  };

  /**
   * AInterrupt mask register2
   */
  struct AIM
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using LFSDET    = regbits< type,  6,  1 >;  /**< Late frame synchronization detection interrupt enable         */
    using AFSDETIE  = regbits< type,  5,  1 >;  /**< Anticipated frame synchronization detection interrupt enable  */
    using CNRDYIE   = regbits< type,  4,  1 >;  /**< Codec not ready interrupt enable                              */
    using FREQIE    = regbits< type,  3,  1 >;  /**< FIFO request interrupt enable                                 */
    using WCKCFG    = regbits< type,  2,  1 >;  /**< Wrong clock configuration interrupt enable                    */
    using MUTEDET   = regbits< type,  1,  1 >;  /**< Mute detection interrupt enable                               */
    using OVRUDRIE  = regbits< type,  0,  1 >;  /**< Overrun/underrun interrupt enable                             */
  };

  /**
   * AStatus register
   */
  struct ASR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using FLVL     = regbits< type, 16,  3 >;  /**< FIFO level threshold                                    */
    using LFSDET   = regbits< type,  6,  1 >;  /**< Late frame synchronization detection                    */
    using AFSDET   = regbits< type,  5,  1 >;  /**< Anticipated frame synchronization detection             */
    using CNRDY    = regbits< type,  4,  1 >;  /**< Codec not ready                                         */
    using FREQ     = regbits< type,  3,  1 >;  /**< FIFO request                                            */
    using WCKCFG   = regbits< type,  2,  1 >;  /**< Wrong clock configuration flag. This bit is read only.  */
    using MUTEDET  = regbits< type,  1,  1 >;  /**< Mute detection                                          */
    using OVRUDR   = regbits< type,  0,  1 >;  /**< Overrun / underrun                                      */
  };

  /**
   * AClear flag register
   */
  struct ACLRFR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using LFSDET   = regbits< type,  6,  1 >;  /**< Clear late frame synchronization detection flag          */
    using CAFSDET  = regbits< type,  5,  1 >;  /**< Clear anticipated frame synchronization detection flag.  */
    using CNRDY    = regbits< type,  4,  1 >;  /**< Clear codec not ready flag                               */
    using WCKCFG   = regbits< type,  2,  1 >;  /**< Clear wrong clock configuration flag                     */
    using MUTEDET  = regbits< type,  1,  1 >;  /**< Mute detection flag                                      */
    using OVRUDR   = regbits< type,  0,  1 >;  /**< Clear overrun / underrun                                 */
  };

  /**
   * AData register
   */
  struct ADR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data  */
  };

  /**
   * Global configuration register
   */
  struct GCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using SYNCIN   = regbits< type,  0,  2 >;  /**< Synchronization inputs   */
    using SYNCOUT  = regbits< type,  4,  2 >;  /**< Synchronization outputs  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SAI2_HPP_INCLUDED
