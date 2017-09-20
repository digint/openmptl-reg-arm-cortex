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
//  Import from CMSIS-SVD: "Holtek/ht32f275x.svd"
//
//  name: HT32F275x
//  version: 1.0
//  description: This is the description for the Holtek HT32F275x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FMC_HPP_INCLUDED
#define ARCH_REG_FMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * FMC
 */
struct FMC
{
  static constexpr reg_addr_t base_addr = 0x40080000;

  /**
   * FMC_TADR
   */
  struct FMC_TADR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TADB  = regbits< type,  0, 32 >;  /**< TADB  */
  };

  /**
   * FMC_WRDR
   */
  struct FMC_WRDR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WRDB  = regbits< type,  0, 32 >;  /**< WRDB  */
  };

  /**
   * FMC_OCMR
   */
  struct FMC_OCMR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CMD       = regbits< type,  0,  4 >;  /**< CMD        */
    using RESERVED  = regbits< type,  4, 28 >;  /**< Reserved.  */
  };

  /**
   * FMC_OPCR
   */
  struct FMC_OPCR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OPM       = regbits< type,  1,  4 >;  /**< OPM        */
    using RESERVED  = regbits< type,  5, 27 >;  /**< Reserved.  */
  };

  /**
   * FMC_OIER
   */
  struct FMC_OIER
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ORFIEN    = regbits< type,  0,  1 >;  /**< ORFIEN     */
    using ITADIEN   = regbits< type,  1,  1 >;  /**< ITADIEN    */
    using OBEIEN    = regbits< type,  2,  1 >;  /**< OBEIEN     */
    using IOCMIEN   = regbits< type,  3,  1 >;  /**< IOCMIEN    */
    using OREIEN    = regbits< type,  4,  1 >;  /**< OREIEN     */
    using RESERVED  = regbits< type,  5, 27 >;  /**< Reserved.  */
  };

  /**
   * FMC_OISR
   */
  struct FMC_OISR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ORFF      = regbits< type,  0,  1 >;  /**< ORFF       */
    using ITADF     = regbits< type,  1,  1 >;  /**< ITADF      */
    using OBEF      = regbits< type,  2,  1 >;  /**< OBEF       */
    using IOCMF     = regbits< type,  3,  1 >;  /**< IOCMF      */
    using OREF      = regbits< type,  4,  1 >;  /**< OREF       */
    using RORFF     = regbits< type, 16,  1 >;  /**< RORFF      */
    using PPEF      = regbits< type, 17,  1 >;  /**< PPEF       */
    using RESERVED  = regbits< type, 18, 14 >;  /**< Reserved.  */
  };

  /**
   * FMC_PPSR0
   */
  struct FMC_PPSR0
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PPSB  = regbits< type,  0, 32 >;  /**< PPSB  */
  };

  /**
   * FMC_PPSR1
   */
  struct FMC_PPSR1
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PPSB  = regbits< type,  0, 32 >;  /**< PPSB  */
  };

  /**
   * FMC_PPSR2
   */
  struct FMC_PPSR2
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PPSB  = regbits< type,  0, 32 >;  /**< PPSB  */
  };

  /**
   * FMC_PPSR3
   */
  struct FMC_PPSR3
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PPSB  = regbits< type,  0, 32 >;  /**< PPSB  */
  };

  /**
   * FMC_CPSR
   */
  struct FMC_CPSR
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CPSB      = regbits< type,  0,  1 >;  /**< CPSB       */
    using OBPSB     = regbits< type,  1,  1 >;  /**< OBPSB      */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * FMC_VMCR
   */
  struct FMC_VMCR
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using VMCB      = regbits< type,  0,  2 >;  /**< VMCB       */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * FMC_CFCR
   */
  struct FMC_CFCR
  : public reg< uint32_t, base_addr + 0x00000200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WAIT      = regbits< type,  0,  3 >;  /**< WAIT       */
    using PFBE      = regbits< type,  4,  1 >;  /**< PFBE       */
    using DCDB      = regbits< type,  7,  1 >;  /**< DCDB       */
    using CE        = regbits< type, 12,  1 >;  /**< CE         */
    using FHLAEN    = regbits< type, 15,  1 >;  /**< FHLAEN     */
    using FZWPSEN   = regbits< type, 16,  1 >;  /**< FZWPSEN    */
    using RESERVED  = regbits< type, 17, 15 >;  /**< Reserved.  */
  };

  /**
   * FMC_SBVT0
   */
  struct FMC_SBVT0
  : public reg< uint32_t, base_addr + 0x00000300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SBVT  = regbits< type,  0, 32 >;  /**< SBVT  */
  };

  /**
   * FMC_SBVT1
   */
  struct FMC_SBVT1
  : public reg< uint32_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SBVT  = regbits< type,  0, 32 >;  /**< SBVT  */
  };

  /**
   * FMC_SBVT2
   */
  struct FMC_SBVT2
  : public reg< uint32_t, base_addr + 0x00000308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SBVT  = regbits< type,  0, 32 >;  /**< SBVT  */
  };

  /**
   * FMC_SBVT3
   */
  struct FMC_SBVT3
  : public reg< uint32_t, base_addr + 0x0000030c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000030c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SBVT  = regbits< type,  0, 32 >;  /**< SBVT  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FMC_HPP_INCLUDED
