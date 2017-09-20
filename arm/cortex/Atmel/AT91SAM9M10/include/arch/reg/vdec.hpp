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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9M10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9M10
//  series: SAM9M
//  version: 20130207
//  description: Atmel AT91SAM9M10 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, DDR2/LPDDR, Video Decoder, LCD, HS USB, 10/100 Ethernet, Dual EBI, 324 Pins (refer to http://www.atmel.com/devices/SAM9M10.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_VDEC_HPP_INCLUDED
#define ARCH_REG_VDEC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Video Decoder
 */
struct VDEC
{
  static constexpr reg_addr_t base_addr = 0x00900000;

  /**
   * ID Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000000, ro, 0x81701000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, ro, 0x81701000 >;

    using BUILD_VER  = regbits< type,  0,  4 >;  /**< Build Version  */
    using MINOR_VER  = regbits< type,  4,  8 >;  /**< Minor Version  */
    using MAJOR_VER  = regbits< type, 12,  4 >;  /**< Major Version  */
    using PROD_ID    = regbits< type, 16, 16 >;  /**< Product ID     */
  };

  /**
   * Decoder Interrupt Register
   */
  struct DIR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using DE      = regbits< type,  0,  1 >;  /**< Decoder Enable         */
    using ID      = regbits< type,  4,  1 >;  /**< Interrupt Disable      */
    using ISET    = regbits< type,  8,  1 >;  /**< Decoder Interrupt Set  */
    using DR      = regbits< type, 12,  1 >;  /**< Decoder Ready          */
    using BE      = regbits< type, 13,  1 >;  /**< Bus Error              */
    using SBE     = regbits< type, 14,  1 >;  /**< Stream Buffer Empty    */
    using ASOD    = regbits< type, 15,  1 >;  /**< ASO Detected           */
    using ISE     = regbits< type, 16,  1 >;  /**< Input Stream Error     */
    using JPEGSD  = regbits< type, 17,  1 >;  /**< JPEG Slice Decoded     */
    using TO      = regbits< type, 18,  1 >;  /**< Timeout                */
  };

  /**
   * Decoder Device Configuration Register
   */
  struct DDCR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000400 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000400 >;

    using MAX_BURST_LEN  = regbits< type,  0,  5 >;  /**< Maximum Burst Length for Decoder Bus Transactions  */
    using PRIOR          = regbits< type,  5,  3 >;  /**< Decoder Core Internal Bus Service Priority         */
    using DO_LE          = regbits< type,  8,  1 >;  /**< Decoder Output Endian Mode                         */
    using INTCE_LE       = regbits< type,  9,  1 >;  /**< Interface Endian Mode                              */
    using DDCGE          = regbits< type, 10,  1 >;  /**< Decoder Dynamic Clock Gating Enable                */
    using LAT_COMP       = regbits< type, 11,  6 >;  /**< Decoder Latency Compensation                       */
    using DOPF           = regbits< type, 17,  1 >;  /**< Decoder Output Picture Format                      */
    using AHB_BURST      = regbits< type, 18,  1 >;  /**< AHB Precise Burst and Data Discard Enable          */
    using DI_LE          = regbits< type, 21,  1 >;  /**< Decoder Input Endian Mode                          */
    using HTI            = regbits< type, 23,  1 >;  /**< Hardware Timeout Interrupt Enable                  */
  };

  /**
   * Decoder Control Register 0
   */
  struct CTLR0
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using HLOCK      = regbits< type,  8,  1 >;  /**< HLOCK Enable                                       */
    using REFFIRST   = regbits< type, 11,  1 >;  /**< Reference Field First                              */
    using MV         = regbits< type, 12,  1 >;  /**< MPEG-2 Motion Vector Write Enable                  */
    using QUANT      = regbits< type, 13,  1 >;  /**< Quantization                                       */
    using FILTDIS    = regbits< type, 14,  1 >;  /**< De-block Filtering Disable                         */
    using OUTDIS     = regbits< type, 15,  1 >;  /**< Disable Decoder Output Picture Writing             */
    using REFFIELD   = regbits< type, 16,  1 >;  /**< Indicates Which Field Should Be Used As Reference  */
    using FORWMODE   = regbits< type, 18,  1 >;  /**< Coding Mode of Forward Reference Picture           */
    using PICFIELD   = regbits< type, 19,  1 >;  /**< Picture Field                                      */
    using PICTYPE    = regbits< type, 20,  1 >;  /**< Picture Type                                       */
    using PICBEN     = regbits< type, 21,  1 >;  /**< B Picture Enable                                   */
    using PICSTRUCT  = regbits< type, 22,  1 >;  /**< Structure of the Current Picture                   */
    using PICMODE    = regbits< type, 23,  1 >;  /**< Coding mode of Current Picture                     */
    using RLCEN      = regbits< type, 27,  1 >;  /**< RLC Mode Enable                                    */
    using DEC_MODE   = regbits< type, 28,  4 >;  /**< Decoding Mode                                      */
  };

  /**
   * Decoder Control Register 1
   */
  struct CTLR1
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using REF_FRAMES  = regbits< type,  0,  5 >;  /**< Number of Reference Frames/Semantics  */
    using TOPF        = regbits< type,  5,  1 >;  /**< Top Field                             */
    using AVSM        = regbits< type,  6,  1 >;  /**< Alternative Vertical Scan Method      */
    using HEIGHT_OFF  = regbits< type,  7,  4 >;  /**< Height Offset                         */
    using PIC_HEIGHT  = regbits< type, 11,  8 >;  /**< Picture Height                        */
    using WIDTH_OFF   = regbits< type, 19,  4 >;  /**< Width Offset                          */
    using PIC_WIDTH   = regbits< type, 23,  9 >;  /**< Picture Width                         */
  };

  /**
   * Decoder Control Register 2
   */
  struct CTLR2
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0x00000000 >;

    using FIELDPIC          = regbits< type,  0,  1 >;  /**< Flag for Stream   */
    using QP_FILT_CR_OFF    = regbits< type, 14,  5 >;
    using QP_FILT_CB_OFF    = regbits< type, 19,  5 >;
    using STREAM_START_BIT  = regbits< type, 26,  6 >;  /**< Stream Start Bit  */
  };

  /**
   * Decoder Control Register 3
   */
  struct CTLR3
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using STREAM_LEN  = regbits< type,  0, 24 >;  /**< Stream Length                */
    using INIT_QP     = regbits< type, 25,  6 >;  /**< Quantization Initialization  */
    using ST_COD_EN   = regbits< type, 31,  1 >;  /**< Stream Start Code            */
  };

  /**
   * Decoder Control Register 4
   */
  struct CTLR4
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    using FRAME_NUM      = regbits< type,  0, 16 >;  /**< Frame Number                    */
    using FRAME_NUM_LEN  = regbits< type, 16,  5 >;  /**< Frame Number length             */
    using W_BIPR         = regbits< type, 26,  2 >;  /**< Weight Prediction for B Slices  */
    using W_PRED         = regbits< type, 28,  1 >;  /**< Weight Prediction               */
    using DIRMV_PRED     = regbits< type, 29,  1 >;  /**< Derive Luma Method              */
    using BW             = regbits< type, 30,  1 >;  /**< Black and White Enable          */
    using CABAC          = regbits< type, 31,  1 >;  /**< H.264 CABAC Enable              */
  };

  /**
   * Decoder Control Register 5
   */
  struct CTLR5
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0x00000000 >;

    using IDR_PIC_ID   = regbits< type,  0, 16 >;  /**< IDR Picture                                                           */
    using IDREN        = regbits< type, 16,  1 >;  /**< IDR Picture Enable                                                    */
    using REF_PIC_LEN  = regbits< type, 17, 11 >;  /**< Reference Picture Length                                              */
    using EIGHT58      = regbits< type, 28,  1 >;
    using RD_PIC       = regbits< type, 29,  1 >;  /**< Redundant Picture Present                                             */
    using FILT_CTRL    = regbits< type, 30,  1 >;  /**< Extra Variables Controlling Characteristics of The Deblocking Filter  */
    using CONS_INTRA   = regbits< type, 31,  1 >;  /**< Intra in Prediction                                                   */
  };

  /**
   * Decoder Control Register 6
   */
  struct CTLR6
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >;

    using POC_LEN   = regbits< type,  0,  8 >;  /**< Picture Order length       */
    using REF_IDX0  = regbits< type, 14,  5 >;  /**< Maximum Reference Index 0  */
    using REF_IDX1  = regbits< type, 19,  5 >;  /**< Maximum Reference Index 1  */
    using PPS_ID    = regbits< type, 24,  8 >;  /**< Picture Parameter          */
  };

  /**
   * Base Address for Differential Motion Vector
   */
  struct DMVBA
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    using MV_CONTROL_BASE  = regbits< type,  2, 30 >;  /**< Differential Motion Vector Base Address  */
  };

  /**
   * Decoder Control Register 7
   */
  struct CTLR7
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >;

    using BA  = regbits< type,  2, 30 >;  /**< Base Address  */
  };

  /**
   * RLC/VLC Data Base Address
   */
  struct RLCVLCBA
  : public reg< uint32_t, base_addr + 0x00000030, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, rw, 0x00000000 >;

    using BA  = regbits< type,  2, 30 >;  /**< Base Address  */
  };

  /**
   * Decoded Picture Base Address
   */
  struct PICTBA
  : public reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, rw, 0x00000000 >;

    using BA  = regbits< type,  2, 30 >;  /**< Base Address  */
  };

  /**
   * Reference Picture Index 0 Base Address
   */
  struct PIDXBA[%s]
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BA  = regbits< type,  2, 30 >;  /**< Base Address  */
  };

  /**
   * Reference Picture Numbers Register 0
   */
  struct PNR0
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0x00000000 >;

    using REFER0  = regbits< type,  0, 16 >;  /**< Reference Picture Number for Index 0  */
    using REFER1  = regbits< type, 16, 16 >;  /**< Reference Picture Number for Index 1  */
  };

  /**
   * Reference Picture Numbers Register 1
   */
  struct PNR1
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >;

    using REFER2  = regbits< type,  0, 16 >;  /**< Reference Picture Number for Index 2  */
    using REFER3  = regbits< type, 16, 16 >;  /**< Reference Picture Number for Index 3  */
  };

  /**
   * Reference Picture Numbers Register 2
   */
  struct PNR2
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0x00000000 >
  {
  };

  /**
   * Reference Picture Numbers Register 3
   */
  struct PNR3
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0x00000000 >;

    using REFER4  = regbits< type,  0, 16 >;  /**< Reference Picture Number for Index 4  */
    using REFER5  = regbits< type, 16, 16 >;  /**< Reference Picture Number for Index 5  */
  };

  /**
   * Reference Picture Numbers Register 4
   */
  struct PNR4
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0x00000000 >;

    using REFER8  = regbits< type,  0, 16 >;  /**< Reference Picture Number for Index 8  */
    using REFER9  = regbits< type, 16, 16 >;  /**< Reference Picture Number for Index 9  */
  };

  /**
   * Reference Picture Numbers Register 5
   */
  struct PNR5
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >;

    using REFER10  = regbits< type,  0, 16 >;  /**< Reference Picture Number for Index 10  */
    using REFER11  = regbits< type, 16, 16 >;  /**< Reference Picture Number for Index 11  */
  };

  /**
   * Reference Picture Numbers Register 6
   */
  struct PNR6
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >;

    using REFER12  = regbits< type,  0, 16 >;  /**< Reference Picture Number for Index 12  */
    using REFER13  = regbits< type, 16, 16 >;  /**< Reference Picture Number for Index 13  */
  };

  /**
   * Reference Picture Numbers Register 7
   */
  struct PNR7
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >;

    using REFER14  = regbits< type,  0, 16 >;  /**< Reference Picture Number for Index 14  */
    using REFER15  = regbits< type, 16, 16 >;  /**< Reference Picture Number for Index 15  */
  };

  /**
   * Reference Picture Long Term Flag Register
   */
  struct PLTFR
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >;

    using LTF  = regbits< type,  0, 32 >;  /**< Long Term Flag  */
  };

  /**
   * Reference Picture Valid Flag Register
   */
  struct PVFR
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >
  {
  };

  /**
   * Standard Dependent Tables Base Address
   */
  struct SDTBA
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0x00000000 >;

    using BA  = regbits< type,  2, 30 >;  /**< Base Address  */
  };

  /**
   * Direct Mode Motion Vector Base Address
   */
  struct DMMVBA
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0x00000000 >;

    using BA  = regbits< type,  2, 30 >;  /**< Base Address  */
  };

  /**
   * H264 Initial Reference Picture List Register 0
   */
  struct IRPLR0
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0x00000000 >;

    using IREFL_FW0  = regbits< type,  0,  5 >;  /**< Initial Reference Picture List for Forward Picid 0   */
    using IREFL_BW0  = regbits< type,  5,  5 >;  /**< Initial Reference Picture List for Backward Picid 0  */
    using IREFL_FW1  = regbits< type, 10,  5 >;  /**< Initial Reference Picture List for Forward Picid 1   */
    using IREFL_BW1  = regbits< type, 15,  5 >;  /**< Initial Reference Picture List for Backward Picid 1  */
    using IREFL_FW2  = regbits< type, 20,  5 >;  /**< Initial Reference Picture List for Forward Picid 2   */
    using IREFL_BW2  = regbits< type, 25,  5 >;  /**< Initial Reference Picture List for Backward Picid 2  */
  };

  /**
   * H264 Initial Reference Picture List Register 1
   */
  struct IRPLR1
  : public reg< uint32_t, base_addr + 0x000000ac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000ac, rw, 0x00000000 >;

    using IREFL_FW3  = regbits< type,  0,  5 >;  /**< Initial Reference Picture List for Forward Picid 3   */
    using IREFL_BW3  = regbits< type,  5,  5 >;  /**< Initial Reference Picture List for Backward Picid 3  */
    using IREFL_FW4  = regbits< type, 10,  5 >;  /**< Initial Reference Picture List for Forward Picid 4   */
    using IREFL_BW4  = regbits< type, 15,  5 >;  /**< Initial Reference Picture List for Backward Picid 4  */
    using IREFL_FW5  = regbits< type, 20,  5 >;  /**< Initial Reference Picture List for Forward Picid 5   */
    using IREFL_BW5  = regbits< type, 25,  5 >;  /**< Initial Reference Picture List for Backward Picid 5  */
  };

  /**
   * H264 Initial Reference Picture List Register 2
   */
  struct IRPLR2
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0x00000000 >;

    using IREFL_FW6  = regbits< type,  0,  5 >;  /**< Initial Reference Picture List for Forward Picid 6   */
    using IREFL_BW6  = regbits< type,  5,  5 >;  /**< Initial Reference Picture List for Backward Picid 6  */
    using IREFL_FW7  = regbits< type, 10,  5 >;  /**< Initial Reference Picture List for Forward Picid 7   */
    using IREFL_BW7  = regbits< type, 15,  5 >;  /**< Initial Reference Picture List for Backward Picid 7  */
    using IREFL_FW8  = regbits< type, 20,  5 >;  /**< Initial Reference Picture List for Forward Picid 8   */
    using IREFL_BW8  = regbits< type, 25,  5 >;  /**< Initial Reference Picture List for Backward Picid 8  */
  };

  /**
   * H264 Initial Reference Picture List Register 3
   */
  struct IRPLR3
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0x00000000 >;

    using IREFL_FW9   = regbits< type,  0,  5 >;  /**< Initial Reference Picture List for Forward Picid 9    */
    using IREFL_BW9   = regbits< type,  5,  5 >;  /**< Initial Reference Picture List for Backward Picid 9   */
    using IREFL_FW10  = regbits< type, 10,  5 >;  /**< Initial Reference Picture List for Forward Picid 10   */
    using IREFL_BW10  = regbits< type, 15,  5 >;  /**< Initial Reference Picture List for Backward Picid 10  */
    using IREFL_FW11  = regbits< type, 20,  5 >;  /**< Initial Reference Picture List for Forward Picid 11   */
    using IREFL_BW11  = regbits< type, 25,  5 >;  /**< Initial Reference Picture List for Backward Picid 11  */
  };

  /**
   * H264 Initial Reference Picture List Register 4
   */
  struct IRPLR4
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >;

    using IREFL_FW12  = regbits< type,  0,  5 >;  /**< Initial Reference Picture List for Forward Picid 12   */
    using IREFL_BW12  = regbits< type,  5,  5 >;  /**< Initial Reference Picture List for Backward Picid 12  */
    using IREFL_FW13  = regbits< type, 10,  5 >;  /**< Initial Reference Picture List for Forward Picid 13   */
    using IREFL_BW13  = regbits< type, 15,  5 >;  /**< Initial Reference Picture List for Backward Picid 13  */
    using IREFL_FW14  = regbits< type, 20,  5 >;  /**< Initial Reference Picture List for Forward Picid 14   */
    using IREFL_BW14  = regbits< type, 25,  5 >;  /**< Initial Reference Picture List for Backward Picid 14  */
  };

  /**
   * H264 Initial Reference Picture List Register 5
   */
  struct IRPLR5
  : public reg< uint32_t, base_addr + 0x000000bc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, rw, 0x00000000 >;

    using IREFL_FW15  = regbits< type,  0,  5 >;  /**< Initial Reference Picture List for Forward Picid 15   */
    using IREFL_BW15  = regbits< type,  5,  5 >;  /**< Initial Reference Picture List for Backward Picid 15  */
  };

  /**
   * Error Concealment Register
   */
  struct ECR
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >;

    using STARTMB_Y  = regbits< type, 15,  8 >;  /**< Start MB from SW for Y Dimension  */
    using STARTMB_X  = regbits< type, 23,  9 >;  /**< Start MB from SW for X Dimension  */
  };
};
} // namespace mptl

#endif // ARCH_REG_VDEC_HPP_INCLUDED
