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
//  Import from CMSIS-SVD: "STMicro/STM32F41x.svd"
//
//  name: STM32F41x
//  version: 1.5
//  description: STM32F41x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CRYP_HPP_INCLUDED
#define ARCH_REG_CRYP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Cryptographic processor
 */
struct CRYP
{
  static constexpr reg_addr_t base_addr = 0x50060000;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using CRYPEN    = regbits< type, 15,  1 >;  /**< Cryptographic processor enable      */
    using FFLUSH    = regbits< type, 14,  1 >;  /**< FIFO flush                          */
    using KEYSIZE   = regbits< type,  8,  2 >;  /**< Key size selection (AES mode only)  */
    using DATATYPE  = regbits< type,  6,  2 >;  /**< Data type selection                 */
    using ALGOMODE  = regbits< type,  3,  3 >;  /**< Algorithm mode                      */
    using ALGODIR   = regbits< type,  2,  1 >;  /**< Algorithm direction                 */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000003 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000003 >;

    using BUSY  = regbits< type,  4,  1 >;  /**< Busy bit               */
    using OFFU  = regbits< type,  3,  1 >;  /**< Output FIFO full       */
    using OFNE  = regbits< type,  2,  1 >;  /**< Output FIFO not empty  */
    using IFNF  = regbits< type,  1,  1 >;  /**< Input FIFO not full    */
    using IFEM  = regbits< type,  0,  1 >;  /**< Input FIFO empty       */
  };

  /**
   * data input register
   */
  struct DIN
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using DATAIN  = regbits< type,  0, 32 >;  /**< Data input  */
  };

  /**
   * data output register
   */
  struct DOUT
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using DATAOUT  = regbits< type,  0, 32 >;  /**< Data output  */
  };

  /**
   * DMA control register
   */
  struct DMACR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using DOEN  = regbits< type,  1,  1 >;  /**< DMA output enable  */
    using DIEN  = regbits< type,  0,  1 >;  /**< DMA input enable   */
  };

  /**
   * interrupt mask set/clear register
   */
  struct IMSCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using OUTIM  = regbits< type,  1,  1 >;  /**< Output FIFO service interrupt mask  */
    using INIM   = regbits< type,  0,  1 >;  /**< Input FIFO service interrupt mask   */
  };

  /**
   * raw interrupt status register
   */
  struct RISR
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000001 >;

    using OUTRIS  = regbits< type,  1,  1 >;  /**< Output FIFO service raw interrupt status  */
    using INRIS   = regbits< type,  0,  1 >;  /**< Input FIFO service raw interrupt status   */
  };

  /**
   * masked interrupt status register
   */
  struct MISR
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using OUTMIS  = regbits< type,  1,  1 >;  /**< Output FIFO service masked interrupt status  */
    using INMIS   = regbits< type,  0,  1 >;  /**< Input FIFO service masked interrupt status   */
  };

  /**
   * key registers
   */
  struct K0LR
  : public reg< uint32_t, base_addr + 0x20, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, wo, 0x00000000 >;

    using b224  = regbits< type,  0,  1 >;  /**< b224  */
    using b225  = regbits< type,  1,  1 >;  /**< b225  */
    using b226  = regbits< type,  2,  1 >;  /**< b226  */
    using b227  = regbits< type,  3,  1 >;  /**< b227  */
    using b228  = regbits< type,  4,  1 >;  /**< b228  */
    using b229  = regbits< type,  5,  1 >;  /**< b229  */
    using b230  = regbits< type,  6,  1 >;  /**< b230  */
    using b231  = regbits< type,  7,  1 >;  /**< b231  */
    using b232  = regbits< type,  8,  1 >;  /**< b232  */
    using b233  = regbits< type,  9,  1 >;  /**< b233  */
    using b234  = regbits< type, 10,  1 >;  /**< b234  */
    using b235  = regbits< type, 11,  1 >;  /**< b235  */
    using b236  = regbits< type, 12,  1 >;  /**< b236  */
    using b237  = regbits< type, 13,  1 >;  /**< b237  */
    using b238  = regbits< type, 14,  1 >;  /**< b238  */
    using b239  = regbits< type, 15,  1 >;  /**< b239  */
    using b240  = regbits< type, 16,  1 >;  /**< b240  */
    using b241  = regbits< type, 17,  1 >;  /**< b241  */
    using b242  = regbits< type, 18,  1 >;  /**< b242  */
    using b243  = regbits< type, 19,  1 >;  /**< b243  */
    using b244  = regbits< type, 20,  1 >;  /**< b244  */
    using b245  = regbits< type, 21,  1 >;  /**< b245  */
    using b246  = regbits< type, 22,  1 >;  /**< b246  */
    using b247  = regbits< type, 23,  1 >;  /**< b247  */
    using b248  = regbits< type, 24,  1 >;  /**< b248  */
    using b249  = regbits< type, 25,  1 >;  /**< b249  */
    using b250  = regbits< type, 26,  1 >;  /**< b250  */
    using b251  = regbits< type, 27,  1 >;  /**< b251  */
    using b252  = regbits< type, 28,  1 >;  /**< b252  */
    using b253  = regbits< type, 29,  1 >;  /**< b253  */
    using b254  = regbits< type, 30,  1 >;  /**< b254  */
    using b255  = regbits< type, 31,  1 >;  /**< b255  */
  };

  /**
   * key registers
   */
  struct K0RR
  : public reg< uint32_t, base_addr + 0x24, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, wo, 0x00000000 >;

    using b192  = regbits< type,  0,  1 >;  /**< b192  */
    using b193  = regbits< type,  1,  1 >;  /**< b193  */
    using b194  = regbits< type,  2,  1 >;  /**< b194  */
    using b195  = regbits< type,  3,  1 >;  /**< b195  */
    using b196  = regbits< type,  4,  1 >;  /**< b196  */
    using b197  = regbits< type,  5,  1 >;  /**< b197  */
    using b198  = regbits< type,  6,  1 >;  /**< b198  */
    using b199  = regbits< type,  7,  1 >;  /**< b199  */
    using b200  = regbits< type,  8,  1 >;  /**< b200  */
    using b201  = regbits< type,  9,  1 >;  /**< b201  */
    using b202  = regbits< type, 10,  1 >;  /**< b202  */
    using b203  = regbits< type, 11,  1 >;  /**< b203  */
    using b204  = regbits< type, 12,  1 >;  /**< b204  */
    using b205  = regbits< type, 13,  1 >;  /**< b205  */
    using b206  = regbits< type, 14,  1 >;  /**< b206  */
    using b207  = regbits< type, 15,  1 >;  /**< b207  */
    using b208  = regbits< type, 16,  1 >;  /**< b208  */
    using b209  = regbits< type, 17,  1 >;  /**< b209  */
    using b210  = regbits< type, 18,  1 >;  /**< b210  */
    using b211  = regbits< type, 19,  1 >;  /**< b211  */
    using b212  = regbits< type, 20,  1 >;  /**< b212  */
    using b213  = regbits< type, 21,  1 >;  /**< b213  */
    using b214  = regbits< type, 22,  1 >;  /**< b214  */
    using b215  = regbits< type, 23,  1 >;  /**< b215  */
    using b216  = regbits< type, 24,  1 >;  /**< b216  */
    using b217  = regbits< type, 25,  1 >;  /**< b217  */
    using b218  = regbits< type, 26,  1 >;  /**< b218  */
    using b219  = regbits< type, 27,  1 >;  /**< b219  */
    using b220  = regbits< type, 28,  1 >;  /**< b220  */
    using b221  = regbits< type, 29,  1 >;  /**< b221  */
    using b222  = regbits< type, 30,  1 >;  /**< b222  */
    using b223  = regbits< type, 31,  1 >;  /**< b223  */
  };

  /**
   * key registers
   */
  struct K1LR
  : public reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >;

    using b160  = regbits< type,  0,  1 >;  /**< b160  */
    using b161  = regbits< type,  1,  1 >;  /**< b161  */
    using b162  = regbits< type,  2,  1 >;  /**< b162  */
    using b163  = regbits< type,  3,  1 >;  /**< b163  */
    using b164  = regbits< type,  4,  1 >;  /**< b164  */
    using b165  = regbits< type,  5,  1 >;  /**< b165  */
    using b166  = regbits< type,  6,  1 >;  /**< b166  */
    using b167  = regbits< type,  7,  1 >;  /**< b167  */
    using b168  = regbits< type,  8,  1 >;  /**< b168  */
    using b169  = regbits< type,  9,  1 >;  /**< b169  */
    using b170  = regbits< type, 10,  1 >;  /**< b170  */
    using b171  = regbits< type, 11,  1 >;  /**< b171  */
    using b172  = regbits< type, 12,  1 >;  /**< b172  */
    using b173  = regbits< type, 13,  1 >;  /**< b173  */
    using b174  = regbits< type, 14,  1 >;  /**< b174  */
    using b175  = regbits< type, 15,  1 >;  /**< b175  */
    using b176  = regbits< type, 16,  1 >;  /**< b176  */
    using b177  = regbits< type, 17,  1 >;  /**< b177  */
    using b178  = regbits< type, 18,  1 >;  /**< b178  */
    using b179  = regbits< type, 19,  1 >;  /**< b179  */
    using b180  = regbits< type, 20,  1 >;  /**< b180  */
    using b181  = regbits< type, 21,  1 >;  /**< b181  */
    using b182  = regbits< type, 22,  1 >;  /**< b182  */
    using b183  = regbits< type, 23,  1 >;  /**< b183  */
    using b184  = regbits< type, 24,  1 >;  /**< b184  */
    using b185  = regbits< type, 25,  1 >;  /**< b185  */
    using b186  = regbits< type, 26,  1 >;  /**< b186  */
    using b187  = regbits< type, 27,  1 >;  /**< b187  */
    using b188  = regbits< type, 28,  1 >;  /**< b188  */
    using b189  = regbits< type, 29,  1 >;  /**< b189  */
    using b190  = regbits< type, 30,  1 >;  /**< b190  */
    using b191  = regbits< type, 31,  1 >;  /**< b191  */
  };

  /**
   * key registers
   */
  struct K1RR
  : public reg< uint32_t, base_addr + 0x2c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, wo, 0x00000000 >;

    using b128  = regbits< type,  0,  1 >;  /**< b128  */
    using b129  = regbits< type,  1,  1 >;  /**< b129  */
    using b130  = regbits< type,  2,  1 >;  /**< b130  */
    using b131  = regbits< type,  3,  1 >;  /**< b131  */
    using b132  = regbits< type,  4,  1 >;  /**< b132  */
    using b133  = regbits< type,  5,  1 >;  /**< b133  */
    using b134  = regbits< type,  6,  1 >;  /**< b134  */
    using b135  = regbits< type,  7,  1 >;  /**< b135  */
    using b136  = regbits< type,  8,  1 >;  /**< b136  */
    using b137  = regbits< type,  9,  1 >;  /**< b137  */
    using b138  = regbits< type, 10,  1 >;  /**< b138  */
    using b139  = regbits< type, 11,  1 >;  /**< b139  */
    using b140  = regbits< type, 12,  1 >;  /**< b140  */
    using b141  = regbits< type, 13,  1 >;  /**< b141  */
    using b142  = regbits< type, 14,  1 >;  /**< b142  */
    using b143  = regbits< type, 15,  1 >;  /**< b143  */
    using b144  = regbits< type, 16,  1 >;  /**< b144  */
    using b145  = regbits< type, 17,  1 >;  /**< b145  */
    using b146  = regbits< type, 18,  1 >;  /**< b146  */
    using b147  = regbits< type, 19,  1 >;  /**< b147  */
    using b148  = regbits< type, 20,  1 >;  /**< b148  */
    using b149  = regbits< type, 21,  1 >;  /**< b149  */
    using b150  = regbits< type, 22,  1 >;  /**< b150  */
    using b151  = regbits< type, 23,  1 >;  /**< b151  */
    using b152  = regbits< type, 24,  1 >;  /**< b152  */
    using b153  = regbits< type, 25,  1 >;  /**< b153  */
    using b154  = regbits< type, 26,  1 >;  /**< b154  */
    using b155  = regbits< type, 27,  1 >;  /**< b155  */
    using b156  = regbits< type, 28,  1 >;  /**< b156  */
    using b157  = regbits< type, 29,  1 >;  /**< b157  */
    using b158  = regbits< type, 30,  1 >;  /**< b158  */
    using b159  = regbits< type, 31,  1 >;  /**< b159  */
  };

  /**
   * key registers
   */
  struct K2LR
  : public reg< uint32_t, base_addr + 0x30, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, wo, 0x00000000 >;

    using b96   = regbits< type,  0,  1 >;  /**< b96   */
    using b97   = regbits< type,  1,  1 >;  /**< b97   */
    using b98   = regbits< type,  2,  1 >;  /**< b98   */
    using b99   = regbits< type,  3,  1 >;  /**< b99   */
    using b100  = regbits< type,  4,  1 >;  /**< b100  */
    using b101  = regbits< type,  5,  1 >;  /**< b101  */
    using b102  = regbits< type,  6,  1 >;  /**< b102  */
    using b103  = regbits< type,  7,  1 >;  /**< b103  */
    using b104  = regbits< type,  8,  1 >;  /**< b104  */
    using b105  = regbits< type,  9,  1 >;  /**< b105  */
    using b106  = regbits< type, 10,  1 >;  /**< b106  */
    using b107  = regbits< type, 11,  1 >;  /**< b107  */
    using b108  = regbits< type, 12,  1 >;  /**< b108  */
    using b109  = regbits< type, 13,  1 >;  /**< b109  */
    using b110  = regbits< type, 14,  1 >;  /**< b110  */
    using b111  = regbits< type, 15,  1 >;  /**< b111  */
    using b112  = regbits< type, 16,  1 >;  /**< b112  */
    using b113  = regbits< type, 17,  1 >;  /**< b113  */
    using b114  = regbits< type, 18,  1 >;  /**< b114  */
    using b115  = regbits< type, 19,  1 >;  /**< b115  */
    using b116  = regbits< type, 20,  1 >;  /**< b116  */
    using b117  = regbits< type, 21,  1 >;  /**< b117  */
    using b118  = regbits< type, 22,  1 >;  /**< b118  */
    using b119  = regbits< type, 23,  1 >;  /**< b119  */
    using b120  = regbits< type, 24,  1 >;  /**< b120  */
    using b121  = regbits< type, 25,  1 >;  /**< b121  */
    using b122  = regbits< type, 26,  1 >;  /**< b122  */
    using b123  = regbits< type, 27,  1 >;  /**< b123  */
    using b124  = regbits< type, 28,  1 >;  /**< b124  */
    using b125  = regbits< type, 29,  1 >;  /**< b125  */
    using b126  = regbits< type, 30,  1 >;  /**< b126  */
    using b127  = regbits< type, 31,  1 >;  /**< b127  */
  };

  /**
   * key registers
   */
  struct K2RR
  : public reg< uint32_t, base_addr + 0x34, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, wo, 0x00000000 >;

    using b64  = regbits< type,  0,  1 >;  /**< b64  */
    using b65  = regbits< type,  1,  1 >;  /**< b65  */
    using b66  = regbits< type,  2,  1 >;  /**< b66  */
    using b67  = regbits< type,  3,  1 >;  /**< b67  */
    using b68  = regbits< type,  4,  1 >;  /**< b68  */
    using b69  = regbits< type,  5,  1 >;  /**< b69  */
    using b70  = regbits< type,  6,  1 >;  /**< b70  */
    using b71  = regbits< type,  7,  1 >;  /**< b71  */
    using b72  = regbits< type,  8,  1 >;  /**< b72  */
    using b73  = regbits< type,  9,  1 >;  /**< b73  */
    using b74  = regbits< type, 10,  1 >;  /**< b74  */
    using b75  = regbits< type, 11,  1 >;  /**< b75  */
    using b76  = regbits< type, 12,  1 >;  /**< b76  */
    using b77  = regbits< type, 13,  1 >;  /**< b77  */
    using b78  = regbits< type, 14,  1 >;  /**< b78  */
    using b79  = regbits< type, 15,  1 >;  /**< b79  */
    using b80  = regbits< type, 16,  1 >;  /**< b80  */
    using b81  = regbits< type, 17,  1 >;  /**< b81  */
    using b82  = regbits< type, 18,  1 >;  /**< b82  */
    using b83  = regbits< type, 19,  1 >;  /**< b83  */
    using b84  = regbits< type, 20,  1 >;  /**< b84  */
    using b85  = regbits< type, 21,  1 >;  /**< b85  */
    using b86  = regbits< type, 22,  1 >;  /**< b86  */
    using b87  = regbits< type, 23,  1 >;  /**< b87  */
    using b88  = regbits< type, 24,  1 >;  /**< b88  */
    using b89  = regbits< type, 25,  1 >;  /**< b89  */
    using b90  = regbits< type, 26,  1 >;  /**< b90  */
    using b91  = regbits< type, 27,  1 >;  /**< b91  */
    using b92  = regbits< type, 28,  1 >;  /**< b92  */
    using b93  = regbits< type, 29,  1 >;  /**< b93  */
    using b94  = regbits< type, 30,  1 >;  /**< b94  */
    using b95  = regbits< type, 31,  1 >;  /**< b95  */
  };

  /**
   * key registers
   */
  struct K3LR
  : public reg< uint32_t, base_addr + 0x38, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, wo, 0x00000000 >;

    using b32  = regbits< type,  0,  1 >;  /**< b32  */
    using b33  = regbits< type,  1,  1 >;  /**< b33  */
    using b34  = regbits< type,  2,  1 >;  /**< b34  */
    using b35  = regbits< type,  3,  1 >;  /**< b35  */
    using b36  = regbits< type,  4,  1 >;  /**< b36  */
    using b37  = regbits< type,  5,  1 >;  /**< b37  */
    using b38  = regbits< type,  6,  1 >;  /**< b38  */
    using b39  = regbits< type,  7,  1 >;  /**< b39  */
    using b40  = regbits< type,  8,  1 >;  /**< b40  */
    using b41  = regbits< type,  9,  1 >;  /**< b41  */
    using b42  = regbits< type, 10,  1 >;  /**< b42  */
    using b43  = regbits< type, 11,  1 >;  /**< b43  */
    using b44  = regbits< type, 12,  1 >;  /**< b44  */
    using b45  = regbits< type, 13,  1 >;  /**< b45  */
    using b46  = regbits< type, 14,  1 >;  /**< b46  */
    using b47  = regbits< type, 15,  1 >;  /**< b47  */
    using b48  = regbits< type, 16,  1 >;  /**< b48  */
    using b49  = regbits< type, 17,  1 >;  /**< b49  */
    using b50  = regbits< type, 18,  1 >;  /**< b50  */
    using b51  = regbits< type, 19,  1 >;  /**< b51  */
    using b52  = regbits< type, 20,  1 >;  /**< b52  */
    using b53  = regbits< type, 21,  1 >;  /**< b53  */
    using b54  = regbits< type, 22,  1 >;  /**< b54  */
    using b55  = regbits< type, 23,  1 >;  /**< b55  */
    using b56  = regbits< type, 24,  1 >;  /**< b56  */
    using b57  = regbits< type, 25,  1 >;  /**< b57  */
    using b58  = regbits< type, 26,  1 >;  /**< b58  */
    using b59  = regbits< type, 27,  1 >;  /**< b59  */
    using b60  = regbits< type, 28,  1 >;  /**< b60  */
    using b61  = regbits< type, 29,  1 >;  /**< b61  */
    using b62  = regbits< type, 30,  1 >;  /**< b62  */
    using b63  = regbits< type, 31,  1 >;  /**< b63  */
  };

  /**
   * key registers
   */
  struct K3RR
  : public reg< uint32_t, base_addr + 0x3c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, wo, 0x00000000 >;

    using b0   = regbits< type,  0,  1 >;  /**< b0   */
    using b1   = regbits< type,  1,  1 >;  /**< b1   */
    using b2   = regbits< type,  2,  1 >;  /**< b2   */
    using b3   = regbits< type,  3,  1 >;  /**< b3   */
    using b4   = regbits< type,  4,  1 >;  /**< b4   */
    using b5   = regbits< type,  5,  1 >;  /**< b5   */
    using b6   = regbits< type,  6,  1 >;  /**< b6   */
    using b7   = regbits< type,  7,  1 >;  /**< b7   */
    using b8   = regbits< type,  8,  1 >;  /**< b8   */
    using b9   = regbits< type,  9,  1 >;  /**< b9   */
    using b10  = regbits< type, 10,  1 >;  /**< b10  */
    using b11  = regbits< type, 11,  1 >;  /**< b11  */
    using b12  = regbits< type, 12,  1 >;  /**< b12  */
    using b13  = regbits< type, 13,  1 >;  /**< b13  */
    using b14  = regbits< type, 14,  1 >;  /**< b14  */
    using b15  = regbits< type, 15,  1 >;  /**< b15  */
    using b16  = regbits< type, 16,  1 >;  /**< b16  */
    using b17  = regbits< type, 17,  1 >;  /**< b17  */
    using b18  = regbits< type, 18,  1 >;  /**< b18  */
    using b19  = regbits< type, 19,  1 >;  /**< b19  */
    using b20  = regbits< type, 20,  1 >;  /**< b20  */
    using b21  = regbits< type, 21,  1 >;  /**< b21  */
    using b22  = regbits< type, 22,  1 >;  /**< b22  */
    using b23  = regbits< type, 23,  1 >;  /**< b23  */
    using b24  = regbits< type, 24,  1 >;  /**< b24  */
    using b25  = regbits< type, 25,  1 >;  /**< b25  */
    using b26  = regbits< type, 26,  1 >;  /**< b26  */
    using b27  = regbits< type, 27,  1 >;  /**< b27  */
    using b28  = regbits< type, 28,  1 >;  /**< b28  */
    using b29  = regbits< type, 29,  1 >;  /**< b29  */
    using b30  = regbits< type, 30,  1 >;  /**< b30  */
    using b31  = regbits< type, 31,  1 >;  /**< b31  */
  };

  /**
   * initialization vector registers
   */
  struct IV0LR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using IV31  = regbits< type,  0,  1 >;  /**< IV31  */
    using IV30  = regbits< type,  1,  1 >;  /**< IV30  */
    using IV29  = regbits< type,  2,  1 >;  /**< IV29  */
    using IV28  = regbits< type,  3,  1 >;  /**< IV28  */
    using IV27  = regbits< type,  4,  1 >;  /**< IV27  */
    using IV26  = regbits< type,  5,  1 >;  /**< IV26  */
    using IV25  = regbits< type,  6,  1 >;  /**< IV25  */
    using IV24  = regbits< type,  7,  1 >;  /**< IV24  */
    using IV23  = regbits< type,  8,  1 >;  /**< IV23  */
    using IV22  = regbits< type,  9,  1 >;  /**< IV22  */
    using IV21  = regbits< type, 10,  1 >;  /**< IV21  */
    using IV20  = regbits< type, 11,  1 >;  /**< IV20  */
    using IV19  = regbits< type, 12,  1 >;  /**< IV19  */
    using IV18  = regbits< type, 13,  1 >;  /**< IV18  */
    using IV17  = regbits< type, 14,  1 >;  /**< IV17  */
    using IV16  = regbits< type, 15,  1 >;  /**< IV16  */
    using IV15  = regbits< type, 16,  1 >;  /**< IV15  */
    using IV14  = regbits< type, 17,  1 >;  /**< IV14  */
    using IV13  = regbits< type, 18,  1 >;  /**< IV13  */
    using IV12  = regbits< type, 19,  1 >;  /**< IV12  */
    using IV11  = regbits< type, 20,  1 >;  /**< IV11  */
    using IV10  = regbits< type, 21,  1 >;  /**< IV10  */
    using IV9   = regbits< type, 22,  1 >;  /**< IV9   */
    using IV8   = regbits< type, 23,  1 >;  /**< IV8   */
    using IV7   = regbits< type, 24,  1 >;  /**< IV7   */
    using IV6   = regbits< type, 25,  1 >;  /**< IV6   */
    using IV5   = regbits< type, 26,  1 >;  /**< IV5   */
    using IV4   = regbits< type, 27,  1 >;  /**< IV4   */
    using IV3   = regbits< type, 28,  1 >;  /**< IV3   */
    using IV2   = regbits< type, 29,  1 >;  /**< IV2   */
    using IV1   = regbits< type, 30,  1 >;  /**< IV1   */
    using IV0   = regbits< type, 31,  1 >;  /**< IV0   */
  };

  /**
   * initialization vector registers
   */
  struct IV0RR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using IV63  = regbits< type,  0,  1 >;  /**< IV63  */
    using IV62  = regbits< type,  1,  1 >;  /**< IV62  */
    using IV61  = regbits< type,  2,  1 >;  /**< IV61  */
    using IV60  = regbits< type,  3,  1 >;  /**< IV60  */
    using IV59  = regbits< type,  4,  1 >;  /**< IV59  */
    using IV58  = regbits< type,  5,  1 >;  /**< IV58  */
    using IV57  = regbits< type,  6,  1 >;  /**< IV57  */
    using IV56  = regbits< type,  7,  1 >;  /**< IV56  */
    using IV55  = regbits< type,  8,  1 >;  /**< IV55  */
    using IV54  = regbits< type,  9,  1 >;  /**< IV54  */
    using IV53  = regbits< type, 10,  1 >;  /**< IV53  */
    using IV52  = regbits< type, 11,  1 >;  /**< IV52  */
    using IV51  = regbits< type, 12,  1 >;  /**< IV51  */
    using IV50  = regbits< type, 13,  1 >;  /**< IV50  */
    using IV49  = regbits< type, 14,  1 >;  /**< IV49  */
    using IV48  = regbits< type, 15,  1 >;  /**< IV48  */
    using IV47  = regbits< type, 16,  1 >;  /**< IV47  */
    using IV46  = regbits< type, 17,  1 >;  /**< IV46  */
    using IV45  = regbits< type, 18,  1 >;  /**< IV45  */
    using IV44  = regbits< type, 19,  1 >;  /**< IV44  */
    using IV43  = regbits< type, 20,  1 >;  /**< IV43  */
    using IV42  = regbits< type, 21,  1 >;  /**< IV42  */
    using IV41  = regbits< type, 22,  1 >;  /**< IV41  */
    using IV40  = regbits< type, 23,  1 >;  /**< IV40  */
    using IV39  = regbits< type, 24,  1 >;  /**< IV39  */
    using IV38  = regbits< type, 25,  1 >;  /**< IV38  */
    using IV37  = regbits< type, 26,  1 >;  /**< IV37  */
    using IV36  = regbits< type, 27,  1 >;  /**< IV36  */
    using IV35  = regbits< type, 28,  1 >;  /**< IV35  */
    using IV34  = regbits< type, 29,  1 >;  /**< IV34  */
    using IV33  = regbits< type, 30,  1 >;  /**< IV33  */
    using IV32  = regbits< type, 31,  1 >;  /**< IV32  */
  };

  /**
   * initialization vector registers
   */
  struct IV1LR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using IV95  = regbits< type,  0,  1 >;  /**< IV95  */
    using IV94  = regbits< type,  1,  1 >;  /**< IV94  */
    using IV93  = regbits< type,  2,  1 >;  /**< IV93  */
    using IV92  = regbits< type,  3,  1 >;  /**< IV92  */
    using IV91  = regbits< type,  4,  1 >;  /**< IV91  */
    using IV90  = regbits< type,  5,  1 >;  /**< IV90  */
    using IV89  = regbits< type,  6,  1 >;  /**< IV89  */
    using IV88  = regbits< type,  7,  1 >;  /**< IV88  */
    using IV87  = regbits< type,  8,  1 >;  /**< IV87  */
    using IV86  = regbits< type,  9,  1 >;  /**< IV86  */
    using IV85  = regbits< type, 10,  1 >;  /**< IV85  */
    using IV84  = regbits< type, 11,  1 >;  /**< IV84  */
    using IV83  = regbits< type, 12,  1 >;  /**< IV83  */
    using IV82  = regbits< type, 13,  1 >;  /**< IV82  */
    using IV81  = regbits< type, 14,  1 >;  /**< IV81  */
    using IV80  = regbits< type, 15,  1 >;  /**< IV80  */
    using IV79  = regbits< type, 16,  1 >;  /**< IV79  */
    using IV78  = regbits< type, 17,  1 >;  /**< IV78  */
    using IV77  = regbits< type, 18,  1 >;  /**< IV77  */
    using IV76  = regbits< type, 19,  1 >;  /**< IV76  */
    using IV75  = regbits< type, 20,  1 >;  /**< IV75  */
    using IV74  = regbits< type, 21,  1 >;  /**< IV74  */
    using IV73  = regbits< type, 22,  1 >;  /**< IV73  */
    using IV72  = regbits< type, 23,  1 >;  /**< IV72  */
    using IV71  = regbits< type, 24,  1 >;  /**< IV71  */
    using IV70  = regbits< type, 25,  1 >;  /**< IV70  */
    using IV69  = regbits< type, 26,  1 >;  /**< IV69  */
    using IV68  = regbits< type, 27,  1 >;  /**< IV68  */
    using IV67  = regbits< type, 28,  1 >;  /**< IV67  */
    using IV66  = regbits< type, 29,  1 >;  /**< IV66  */
    using IV65  = regbits< type, 30,  1 >;  /**< IV65  */
    using IV64  = regbits< type, 31,  1 >;  /**< IV64  */
  };

  /**
   * initialization vector registers
   */
  struct IV1RR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using IV127  = regbits< type,  0,  1 >;  /**< IV127  */
    using IV126  = regbits< type,  1,  1 >;  /**< IV126  */
    using IV125  = regbits< type,  2,  1 >;  /**< IV125  */
    using IV124  = regbits< type,  3,  1 >;  /**< IV124  */
    using IV123  = regbits< type,  4,  1 >;  /**< IV123  */
    using IV122  = regbits< type,  5,  1 >;  /**< IV122  */
    using IV121  = regbits< type,  6,  1 >;  /**< IV121  */
    using IV120  = regbits< type,  7,  1 >;  /**< IV120  */
    using IV119  = regbits< type,  8,  1 >;  /**< IV119  */
    using IV118  = regbits< type,  9,  1 >;  /**< IV118  */
    using IV117  = regbits< type, 10,  1 >;  /**< IV117  */
    using IV116  = regbits< type, 11,  1 >;  /**< IV116  */
    using IV115  = regbits< type, 12,  1 >;  /**< IV115  */
    using IV114  = regbits< type, 13,  1 >;  /**< IV114  */
    using IV113  = regbits< type, 14,  1 >;  /**< IV113  */
    using IV112  = regbits< type, 15,  1 >;  /**< IV112  */
    using IV111  = regbits< type, 16,  1 >;  /**< IV111  */
    using IV110  = regbits< type, 17,  1 >;  /**< IV110  */
    using IV109  = regbits< type, 18,  1 >;  /**< IV109  */
    using IV108  = regbits< type, 19,  1 >;  /**< IV108  */
    using IV107  = regbits< type, 20,  1 >;  /**< IV107  */
    using IV106  = regbits< type, 21,  1 >;  /**< IV106  */
    using IV105  = regbits< type, 22,  1 >;  /**< IV105  */
    using IV104  = regbits< type, 23,  1 >;  /**< IV104  */
    using IV103  = regbits< type, 24,  1 >;  /**< IV103  */
    using IV102  = regbits< type, 25,  1 >;  /**< IV102  */
    using IV101  = regbits< type, 26,  1 >;  /**< IV101  */
    using IV100  = regbits< type, 27,  1 >;  /**< IV100  */
    using IV99   = regbits< type, 28,  1 >;  /**< IV99   */
    using IV98   = regbits< type, 29,  1 >;  /**< IV98   */
    using IV97   = regbits< type, 30,  1 >;  /**< IV97   */
    using IV96   = regbits< type, 31,  1 >;  /**< IV96   */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRYP_HPP_INCLUDED
