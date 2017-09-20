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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21J16A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21J16A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21J16A device: Cortex-M0+ Microcontroller with 64KB Flash, 8KB SRAM, 64-pin package (refer to http://www.atmel.com/devices/SAMD21J16A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DSU_HPP_INCLUDED
#define ARCH_REG_DSU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Device Service Unit
 */
struct DSU
{
  static constexpr reg_addr_t base_addr = 0x41002000;

  /**
   * Address
   */
  struct ADDR
  : public reg< uint32_t, base_addr + 0x0004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ADDR
    using ADDR_ = regbits< type,  2, 30 >;  /**< Address  */
  };

  /**
   * Component Identification 0
   */
  struct CID0
  : public reg< uint32_t, base_addr + 0x1ff0, ro, 0x0000000D >
  {
    using type = reg< uint32_t, base_addr + 0x1ff0, ro, 0x0000000D >;

    using PREAMBLEB0  = regbits< type,  0,  8 >;  /**< Preamble Byte 0  */
  };

  /**
   * Component Identification 1
   */
  struct CID1
  : public reg< uint32_t, base_addr + 0x1ff4, ro, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x1ff4, ro, 0x00000010 >;

    using PREAMBLE  = regbits< type,  0,  4 >;  /**< Preamble         */
    using CCLASS    = regbits< type,  4,  4 >;  /**< Component Class  */
  };

  /**
   * Component Identification 2
   */
  struct CID2
  : public reg< uint32_t, base_addr + 0x1ff8, ro, 0x00000005 >
  {
    using type = reg< uint32_t, base_addr + 0x1ff8, ro, 0x00000005 >;

    using PREAMBLEB2  = regbits< type,  0,  8 >;  /**< Preamble Byte 2  */
  };

  /**
   * Component Identification 3
   */
  struct CID3
  : public reg< uint32_t, base_addr + 0x1ffc, ro, 0x000000B1 >
  {
    using type = reg< uint32_t, base_addr + 0x1ffc, ro, 0x000000B1 >;

    using PREAMBLEB3  = regbits< type,  0,  8 >;  /**< Preamble Byte 3  */
  };

  /**
   * Control
   */
  struct CTRL
  : public reg< uint8_t, base_addr + 0x0000, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x0000, wo, 0 >;

    using SWRST  = regbits< type,  0,  1 >;  /**< Software Reset                  */
    using CRC    = regbits< type,  2,  1 >;  /**< 32-bit Cyclic Redundancy Check  */
    using MBIST  = regbits< type,  3,  1 >;  /**< Memory Built-In Self-Test       */
    using CE     = regbits< type,  4,  1 >;  /**< Chip Erase                      */
  };

  /**
   * Data
   */
  struct DATA
  : public reg< uint32_t, base_addr + 0x000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DATA
    using DATA_ = regbits< type,  0, 32 >;  /**< Data  */
  };

  /**
   * Debug Communication Channel n
   */
  struct DCC%s
  : public reg< uint32_t, base_addr + 0x0010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data  */
  };

  /**
   * Device Identification
   */
  struct DID
  : public reg< uint32_t, base_addr + 0x0018, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0018, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using DEVSEL     = regbits< type,  0,  8 >;  /**< Device Select       */
    using REVISION   = regbits< type,  8,  4 >;  /**< Revision            */
    using DIE        = regbits< type, 12,  4 >;  /**< Die Identification  */
    using SERIES     = regbits< type, 16,  6 >;  /**< Product Series      */
    using FAMILY     = regbits< type, 23,  5 >;  /**< Product Family      */
    using PROCESSOR  = regbits< type, 28,  4 >;  /**< Processor           */
  };

  /**
   * Coresight ROM Table End
   */
  struct END
  : public reg< uint32_t, base_addr + 0x1008, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x1008, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: END
    using END_ = regbits< type,  0, 32 >;  /**< End Marker  */
  };

  /**
   * Coresight ROM Table Entry n
   */
  struct ENTRY%s
  : public reg< uint32_t, base_addr + 0x1000, ro, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x1000, ro, 0x00000002 >;

    using EPRES   = regbits< type,  0,  1 >;  /**< Entry Present   */
    using FMT     = regbits< type,  1,  1 >;  /**< Format          */
    using ADDOFF  = regbits< type, 12, 20 >;  /**< Address Offset  */
  };

  /**
   * Length
   */
  struct LENGTH
  : public reg< uint32_t, base_addr + 0x0008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: LENGTH
    using LENGTH_ = regbits< type,  2, 30 >;  /**< Length  */
  };

  /**
   * Coresight ROM Table Memory Type
   */
  struct MEMTYPE
  : public reg< uint32_t, base_addr + 0x1fcc, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x1fcc, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SMEMP  = regbits< type,  0,  1 >;  /**< System Memory Present  */
  };

  /**
   * Peripheral Identification 0
   */
  struct PID0
  : public reg< uint32_t, base_addr + 0x1fe0, ro, 0x000000D0 >
  {
    using type = reg< uint32_t, base_addr + 0x1fe0, ro, 0x000000D0 >;

    using PARTNBL  = regbits< type,  0,  8 >;  /**< Part Number Low  */
  };

  /**
   * Peripheral Identification 1
   */
  struct PID1
  : public reg< uint32_t, base_addr + 0x1fe4, ro, 0x000000FC >
  {
    using type = reg< uint32_t, base_addr + 0x1fe4, ro, 0x000000FC >;

    using PARTNBH  = regbits< type,  0,  4 >;  /**< Part Number High                       */
    using JEPIDCL  = regbits< type,  4,  4 >;  /**< Low part of the JEP-106 Identity Code  */
  };

  /**
   * Peripheral Identification 2
   */
  struct PID2
  : public reg< uint32_t, base_addr + 0x1fe8, ro, 0x00000009 >
  {
    using type = reg< uint32_t, base_addr + 0x1fe8, ro, 0x00000009 >;

    using JEPIDCH   = regbits< type,  0,  3 >;  /**< JEP-106 Identity Code High     */
    using JEPU      = regbits< type,  3,  1 >;  /**< JEP-106 Identity Code is used  */
    using REVISION  = regbits< type,  4,  4 >;  /**< Revision Number                */
  };

  /**
   * Peripheral Identification 3
   */
  struct PID3
  : public reg< uint32_t, base_addr + 0x1fec, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x1fec, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using CUSMOD  = regbits< type,  0,  4 >;  /**< ARM CUSMOD       */
    using REVAND  = regbits< type,  4,  4 >;  /**< Revision Number  */
  };

  /**
   * Peripheral Identification 4
   */
  struct PID4
  : public reg< uint32_t, base_addr + 0x1fd0, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x1fd0, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using JEPCC  = regbits< type,  0,  4 >;  /**< JEP-106 Continuation Code  */
    using FKBC   = regbits< type,  4,  4 >;  /**< 4KB Count                  */
  };

  /**
   * Status A
   */
  struct STATUSA
  : public reg< uint8_t, base_addr + 0x0001, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0001, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DONE     = regbits< type,  0,  1 >;  /**< Done                       */
    using CRSTEXT  = regbits< type,  1,  1 >;  /**< CPU Reset Phase Extension  */
    using BERR     = regbits< type,  2,  1 >;  /**< Bus Error                  */
    using FAIL     = regbits< type,  3,  1 >;  /**< Failure                    */
    using PERR     = regbits< type,  4,  1 >;  /**< Protection Error           */
  };

  /**
   * Status B
   */
  struct STATUSB
  : public reg< uint8_t, base_addr + 0x0002, ro, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x0002, ro, 0x10 >;

    using PROT     = regbits< type,  0,  1 >;  /**< Protected                            */
    using DBGPRES  = regbits< type,  1,  1 >;  /**< Debugger Present                     */
    using DCCD0    = regbits< type,  2,  1 >;  /**< Debug Communication Channel 0 Dirty  */
    using DCCD1    = regbits< type,  3,  1 >;  /**< Debug Communication Channel 1 Dirty  */
    using HPE      = regbits< type,  4,  1 >;  /**< Hot-Plugging Enable                  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DSU_HPP_INCLUDED
