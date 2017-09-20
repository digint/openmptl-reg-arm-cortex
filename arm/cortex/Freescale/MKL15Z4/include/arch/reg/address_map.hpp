/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKL15Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL15Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL15Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
#define ARCH_REG_ADDRESS_MAP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register_type.hpp>

namespace mptl {

template<reg_addr_t addr>
struct address_map {
  static constexpr const char * name_str = nullptr;
};

template<> struct address_map< 0x00000400 > { static constexpr const char * name_str = "FTFA_FlashConfig::BACKKEY3"; };
template<> struct address_map< 0x00000401 > { static constexpr const char * name_str = "FTFA_FlashConfig::BACKKEY2"; };
template<> struct address_map< 0x00000402 > { static constexpr const char * name_str = "FTFA_FlashConfig::BACKKEY1"; };
template<> struct address_map< 0x00000403 > { static constexpr const char * name_str = "FTFA_FlashConfig::BACKKEY0"; };
template<> struct address_map< 0x00000404 > { static constexpr const char * name_str = "FTFA_FlashConfig::BACKKEY7"; };
template<> struct address_map< 0x00000405 > { static constexpr const char * name_str = "FTFA_FlashConfig::BACKKEY6"; };
template<> struct address_map< 0x00000406 > { static constexpr const char * name_str = "FTFA_FlashConfig::BACKKEY5"; };
template<> struct address_map< 0x00000407 > { static constexpr const char * name_str = "FTFA_FlashConfig::BACKKEY4"; };
template<> struct address_map< 0x00000408 > { static constexpr const char * name_str = "FTFA_FlashConfig::FPROT3"; };
template<> struct address_map< 0x00000409 > { static constexpr const char * name_str = "FTFA_FlashConfig::FPROT2"; };
template<> struct address_map< 0x0000040a > { static constexpr const char * name_str = "FTFA_FlashConfig::FPROT1"; };
template<> struct address_map< 0x0000040b > { static constexpr const char * name_str = "FTFA_FlashConfig::FPROT0"; };
template<> struct address_map< 0x0000040c > { static constexpr const char * name_str = "FTFA_FlashConfig::FSEC"; };
template<> struct address_map< 0x0000040d > { static constexpr const char * name_str = "FTFA_FlashConfig::FOPT"; };
template<> struct address_map< 0x40008100 > { static constexpr const char * name_str = "DMA::SAR0"; };
template<> struct address_map< 0x40008104 > { static constexpr const char * name_str = "DMA::DAR0"; };
template<> struct address_map< 0x40008108 > { static constexpr const char * name_str = "DMA::DSR_BCR0"; };
template<> struct address_map< 0x4000810b > { static constexpr const char * name_str = "DMA::DSR0"; };
template<> struct address_map< 0x4000810c > { static constexpr const char * name_str = "DMA::DCR0"; };
template<> struct address_map< 0x40008110 > { static constexpr const char * name_str = "DMA::SAR1"; };
template<> struct address_map< 0x40008114 > { static constexpr const char * name_str = "DMA::DAR1"; };
template<> struct address_map< 0x40008118 > { static constexpr const char * name_str = "DMA::DSR_BCR1"; };
template<> struct address_map< 0x4000811b > { static constexpr const char * name_str = "DMA::DSR1"; };
template<> struct address_map< 0x4000811c > { static constexpr const char * name_str = "DMA::DCR1"; };
template<> struct address_map< 0x40008120 > { static constexpr const char * name_str = "DMA::SAR2"; };
template<> struct address_map< 0x40008124 > { static constexpr const char * name_str = "DMA::DAR2"; };
template<> struct address_map< 0x40008128 > { static constexpr const char * name_str = "DMA::DSR_BCR2"; };
template<> struct address_map< 0x4000812b > { static constexpr const char * name_str = "DMA::DSR2"; };
template<> struct address_map< 0x4000812c > { static constexpr const char * name_str = "DMA::DCR2"; };
template<> struct address_map< 0x40008130 > { static constexpr const char * name_str = "DMA::SAR3"; };
template<> struct address_map< 0x40008134 > { static constexpr const char * name_str = "DMA::DAR3"; };
template<> struct address_map< 0x40008138 > { static constexpr const char * name_str = "DMA::DSR_BCR3"; };
template<> struct address_map< 0x4000813b > { static constexpr const char * name_str = "DMA::DSR3"; };
template<> struct address_map< 0x4000813c > { static constexpr const char * name_str = "DMA::DCR3"; };
template<> struct address_map< 0x40020000 > { static constexpr const char * name_str = "FTFA::FSTAT"; };
template<> struct address_map< 0x40020001 > { static constexpr const char * name_str = "FTFA::FCNFG"; };
template<> struct address_map< 0x40020002 > { static constexpr const char * name_str = "FTFA::FSEC"; };
template<> struct address_map< 0x40020003 > { static constexpr const char * name_str = "FTFA::FOPT"; };
template<> struct address_map< 0x40020004 > { static constexpr const char * name_str = "FTFA::FCCOB%s"; };
template<> struct address_map< 0x40020010 > { static constexpr const char * name_str = "FTFA::FPROT%s"; };
template<> struct address_map< 0x40021000 > { static constexpr const char * name_str = "DMAMUX0::CHCFG%s"; };
template<> struct address_map< 0x40037000 > { static constexpr const char * name_str = "PIT::MCR"; };
template<> struct address_map< 0x400370e0 > { static constexpr const char * name_str = "PIT::LTMR64H"; };
template<> struct address_map< 0x400370e4 > { static constexpr const char * name_str = "PIT::LTMR64L"; };
template<> struct address_map< 0x40037100 > { static constexpr const char * name_str = "PIT::LDVAL%s"; };
template<> struct address_map< 0x40037104 > { static constexpr const char * name_str = "PIT::CVAL%s"; };
template<> struct address_map< 0x40037108 > { static constexpr const char * name_str = "PIT::TCTRL%s"; };
template<> struct address_map< 0x4003710c > { static constexpr const char * name_str = "PIT::TFLG%s"; };
template<> struct address_map< 0x40038000 > { static constexpr const char * name_str = "TPM0::SC"; };
template<> struct address_map< 0x40038004 > { static constexpr const char * name_str = "TPM0::CNT"; };
template<> struct address_map< 0x40038008 > { static constexpr const char * name_str = "TPM0::MOD"; };
template<> struct address_map< 0x4003800c > { static constexpr const char * name_str = "TPM0::C%sSC"; };
template<> struct address_map< 0x40038010 > { static constexpr const char * name_str = "TPM0::C%sV"; };
template<> struct address_map< 0x40038050 > { static constexpr const char * name_str = "TPM0::STATUS"; };
template<> struct address_map< 0x40038084 > { static constexpr const char * name_str = "TPM0::CONF"; };
template<> struct address_map< 0x40039000 > { static constexpr const char * name_str = "TPM1::SC"; };
template<> struct address_map< 0x40039004 > { static constexpr const char * name_str = "TPM1::CNT"; };
template<> struct address_map< 0x40039008 > { static constexpr const char * name_str = "TPM1::MOD"; };
template<> struct address_map< 0x4003900c > { static constexpr const char * name_str = "TPM1::C%sSC"; };
template<> struct address_map< 0x40039010 > { static constexpr const char * name_str = "TPM1::C%sV"; };
template<> struct address_map< 0x40039050 > { static constexpr const char * name_str = "TPM1::STATUS"; };
template<> struct address_map< 0x40039084 > { static constexpr const char * name_str = "TPM1::CONF"; };
template<> struct address_map< 0x4003a000 > { static constexpr const char * name_str = "TPM2::SC"; };
template<> struct address_map< 0x4003a004 > { static constexpr const char * name_str = "TPM2::CNT"; };
template<> struct address_map< 0x4003a008 > { static constexpr const char * name_str = "TPM2::MOD"; };
template<> struct address_map< 0x4003a00c > { static constexpr const char * name_str = "TPM2::C%sSC"; };
template<> struct address_map< 0x4003a010 > { static constexpr const char * name_str = "TPM2::C%sV"; };
template<> struct address_map< 0x4003a050 > { static constexpr const char * name_str = "TPM2::STATUS"; };
template<> struct address_map< 0x4003a084 > { static constexpr const char * name_str = "TPM2::CONF"; };
template<> struct address_map< 0x4003b000 > { static constexpr const char * name_str = "ADC0::SC1%s"; };
template<> struct address_map< 0x4003b008 > { static constexpr const char * name_str = "ADC0::CFG1"; };
template<> struct address_map< 0x4003b00c > { static constexpr const char * name_str = "ADC0::CFG2"; };
template<> struct address_map< 0x4003b010 > { static constexpr const char * name_str = "ADC0::R%s"; };
template<> struct address_map< 0x4003b018 > { static constexpr const char * name_str = "ADC0::CV%s"; };
template<> struct address_map< 0x4003b020 > { static constexpr const char * name_str = "ADC0::SC2"; };
template<> struct address_map< 0x4003b024 > { static constexpr const char * name_str = "ADC0::SC3"; };
template<> struct address_map< 0x4003b028 > { static constexpr const char * name_str = "ADC0::OFS"; };
template<> struct address_map< 0x4003b02c > { static constexpr const char * name_str = "ADC0::PG"; };
template<> struct address_map< 0x4003b030 > { static constexpr const char * name_str = "ADC0::MG"; };
template<> struct address_map< 0x4003b034 > { static constexpr const char * name_str = "ADC0::CLPD"; };
template<> struct address_map< 0x4003b038 > { static constexpr const char * name_str = "ADC0::CLPS"; };
template<> struct address_map< 0x4003b03c > { static constexpr const char * name_str = "ADC0::CLP4"; };
template<> struct address_map< 0x4003b040 > { static constexpr const char * name_str = "ADC0::CLP3"; };
template<> struct address_map< 0x4003b044 > { static constexpr const char * name_str = "ADC0::CLP2"; };
template<> struct address_map< 0x4003b048 > { static constexpr const char * name_str = "ADC0::CLP1"; };
template<> struct address_map< 0x4003b04c > { static constexpr const char * name_str = "ADC0::CLP0"; };
template<> struct address_map< 0x4003b054 > { static constexpr const char * name_str = "ADC0::CLMD"; };
template<> struct address_map< 0x4003b058 > { static constexpr const char * name_str = "ADC0::CLMS"; };
template<> struct address_map< 0x4003b05c > { static constexpr const char * name_str = "ADC0::CLM4"; };
template<> struct address_map< 0x4003b060 > { static constexpr const char * name_str = "ADC0::CLM3"; };
template<> struct address_map< 0x4003b064 > { static constexpr const char * name_str = "ADC0::CLM2"; };
template<> struct address_map< 0x4003b068 > { static constexpr const char * name_str = "ADC0::CLM1"; };
template<> struct address_map< 0x4003b06c > { static constexpr const char * name_str = "ADC0::CLM0"; };
template<> struct address_map< 0x4003d000 > { static constexpr const char * name_str = "RTC::TSR"; };
template<> struct address_map< 0x4003d004 > { static constexpr const char * name_str = "RTC::TPR"; };
template<> struct address_map< 0x4003d008 > { static constexpr const char * name_str = "RTC::TAR"; };
template<> struct address_map< 0x4003d00c > { static constexpr const char * name_str = "RTC::TCR"; };
template<> struct address_map< 0x4003d010 > { static constexpr const char * name_str = "RTC::CR"; };
template<> struct address_map< 0x4003d014 > { static constexpr const char * name_str = "RTC::SR"; };
template<> struct address_map< 0x4003d018 > { static constexpr const char * name_str = "RTC::LR"; };
template<> struct address_map< 0x4003d01c > { static constexpr const char * name_str = "RTC::IER"; };
template<> struct address_map< 0x4003f000 > { static constexpr const char * name_str = "DAC0::DAT%sL"; };
template<> struct address_map< 0x4003f001 > { static constexpr const char * name_str = "DAC0::DAT%sH"; };
template<> struct address_map< 0x4003f020 > { static constexpr const char * name_str = "DAC0::SR"; };
template<> struct address_map< 0x4003f021 > { static constexpr const char * name_str = "DAC0::C0"; };
template<> struct address_map< 0x4003f022 > { static constexpr const char * name_str = "DAC0::C1"; };
template<> struct address_map< 0x4003f023 > { static constexpr const char * name_str = "DAC0::C2"; };
template<> struct address_map< 0x40040000 > { static constexpr const char * name_str = "LPTMR0::CSR"; };
template<> struct address_map< 0x40040004 > { static constexpr const char * name_str = "LPTMR0::PSR"; };
template<> struct address_map< 0x40040008 > { static constexpr const char * name_str = "LPTMR0::CMR"; };
template<> struct address_map< 0x4004000c > { static constexpr const char * name_str = "LPTMR0::CNR"; };
template<> struct address_map< 0x40045000 > { static constexpr const char * name_str = "TSI0::GENCS"; };
template<> struct address_map< 0x40045004 > { static constexpr const char * name_str = "TSI0::DATA"; };
template<> struct address_map< 0x40045008 > { static constexpr const char * name_str = "TSI0::TSHD"; };
template<> struct address_map< 0x40047000 > { static constexpr const char * name_str = "SIM::SOPT1"; };
template<> struct address_map< 0x40047004 > { static constexpr const char * name_str = "SIM::SOPT1CFG"; };
template<> struct address_map< 0x40048004 > { static constexpr const char * name_str = "SIM::SOPT2"; };
template<> struct address_map< 0x4004800c > { static constexpr const char * name_str = "SIM::SOPT4"; };
template<> struct address_map< 0x40048010 > { static constexpr const char * name_str = "SIM::SOPT5"; };
template<> struct address_map< 0x40048018 > { static constexpr const char * name_str = "SIM::SOPT7"; };
template<> struct address_map< 0x40048024 > { static constexpr const char * name_str = "SIM::SDID"; };
template<> struct address_map< 0x40048034 > { static constexpr const char * name_str = "SIM::SCGC4"; };
template<> struct address_map< 0x40048038 > { static constexpr const char * name_str = "SIM::SCGC5"; };
template<> struct address_map< 0x4004803c > { static constexpr const char * name_str = "SIM::SCGC6"; };
template<> struct address_map< 0x40048040 > { static constexpr const char * name_str = "SIM::SCGC7"; };
template<> struct address_map< 0x40048044 > { static constexpr const char * name_str = "SIM::CLKDIV1"; };
template<> struct address_map< 0x4004804c > { static constexpr const char * name_str = "SIM::FCFG1"; };
template<> struct address_map< 0x40048050 > { static constexpr const char * name_str = "SIM::FCFG2"; };
template<> struct address_map< 0x40048058 > { static constexpr const char * name_str = "SIM::UIDMH"; };
template<> struct address_map< 0x4004805c > { static constexpr const char * name_str = "SIM::UIDML"; };
template<> struct address_map< 0x40048060 > { static constexpr const char * name_str = "SIM::UIDL"; };
template<> struct address_map< 0x40048100 > { static constexpr const char * name_str = "SIM::COPC"; };
template<> struct address_map< 0x40048104 > { static constexpr const char * name_str = "SIM::SRVCOP"; };
template<> struct address_map< 0x40049000 > { static constexpr const char * name_str = "PORTA::PCR%s"; };
template<> struct address_map< 0x40049080 > { static constexpr const char * name_str = "PORTA::GPCLR"; };
template<> struct address_map< 0x40049084 > { static constexpr const char * name_str = "PORTA::GPCHR"; };
template<> struct address_map< 0x400490a0 > { static constexpr const char * name_str = "PORTA::ISFR"; };
template<> struct address_map< 0x4004a000 > { static constexpr const char * name_str = "PORTB::PCR%s"; };
template<> struct address_map< 0x4004a080 > { static constexpr const char * name_str = "PORTB::GPCLR"; };
template<> struct address_map< 0x4004a084 > { static constexpr const char * name_str = "PORTB::GPCHR"; };
template<> struct address_map< 0x4004a0a0 > { static constexpr const char * name_str = "PORTB::ISFR"; };
template<> struct address_map< 0x4004b000 > { static constexpr const char * name_str = "PORTC::PCR%s"; };
template<> struct address_map< 0x4004b080 > { static constexpr const char * name_str = "PORTC::GPCLR"; };
template<> struct address_map< 0x4004b084 > { static constexpr const char * name_str = "PORTC::GPCHR"; };
template<> struct address_map< 0x4004b0a0 > { static constexpr const char * name_str = "PORTC::ISFR"; };
template<> struct address_map< 0x4004c000 > { static constexpr const char * name_str = "PORTD::PCR%s"; };
template<> struct address_map< 0x4004c080 > { static constexpr const char * name_str = "PORTD::GPCLR"; };
template<> struct address_map< 0x4004c084 > { static constexpr const char * name_str = "PORTD::GPCHR"; };
template<> struct address_map< 0x4004c0a0 > { static constexpr const char * name_str = "PORTD::ISFR"; };
template<> struct address_map< 0x4004d000 > { static constexpr const char * name_str = "PORTE::PCR%s"; };
template<> struct address_map< 0x4004d080 > { static constexpr const char * name_str = "PORTE::GPCLR"; };
template<> struct address_map< 0x4004d084 > { static constexpr const char * name_str = "PORTE::GPCHR"; };
template<> struct address_map< 0x4004d0a0 > { static constexpr const char * name_str = "PORTE::ISFR"; };
template<> struct address_map< 0x40064000 > { static constexpr const char * name_str = "MCG::C1"; };
template<> struct address_map< 0x40064001 > { static constexpr const char * name_str = "MCG::C2"; };
template<> struct address_map< 0x40064002 > { static constexpr const char * name_str = "MCG::C3"; };
template<> struct address_map< 0x40064003 > { static constexpr const char * name_str = "MCG::C4"; };
template<> struct address_map< 0x40064004 > { static constexpr const char * name_str = "MCG::C5"; };
template<> struct address_map< 0x40064005 > { static constexpr const char * name_str = "MCG::C6"; };
template<> struct address_map< 0x40064006 > { static constexpr const char * name_str = "MCG::S"; };
template<> struct address_map< 0x40064008 > { static constexpr const char * name_str = "MCG::SC"; };
template<> struct address_map< 0x4006400a > { static constexpr const char * name_str = "MCG::ATCVH"; };
template<> struct address_map< 0x4006400b > { static constexpr const char * name_str = "MCG::ATCVL"; };
template<> struct address_map< 0x4006400c > { static constexpr const char * name_str = "MCG::C7"; };
template<> struct address_map< 0x4006400d > { static constexpr const char * name_str = "MCG::C8"; };
template<> struct address_map< 0x4006400e > { static constexpr const char * name_str = "MCG::C9"; };
template<> struct address_map< 0x4006400f > { static constexpr const char * name_str = "MCG::C10"; };
template<> struct address_map< 0x40065000 > { static constexpr const char * name_str = "OSC0::CR"; };
template<> struct address_map< 0x40066000 > { static constexpr const char * name_str = "I2C0::A1"; };
template<> struct address_map< 0x40066001 > { static constexpr const char * name_str = "I2C0::F"; };
template<> struct address_map< 0x40066002 > { static constexpr const char * name_str = "I2C0::C1"; };
template<> struct address_map< 0x40066003 > { static constexpr const char * name_str = "I2C0::S"; };
template<> struct address_map< 0x40066004 > { static constexpr const char * name_str = "I2C0::D"; };
template<> struct address_map< 0x40066005 > { static constexpr const char * name_str = "I2C0::C2"; };
template<> struct address_map< 0x40066006 > { static constexpr const char * name_str = "I2C0::FLT"; };
template<> struct address_map< 0x40066007 > { static constexpr const char * name_str = "I2C0::RA"; };
template<> struct address_map< 0x40066008 > { static constexpr const char * name_str = "I2C0::SMB"; };
template<> struct address_map< 0x40066009 > { static constexpr const char * name_str = "I2C0::A2"; };
template<> struct address_map< 0x4006600a > { static constexpr const char * name_str = "I2C0::SLTH"; };
template<> struct address_map< 0x4006600b > { static constexpr const char * name_str = "I2C0::SLTL"; };
template<> struct address_map< 0x40067000 > { static constexpr const char * name_str = "I2C1::A1"; };
template<> struct address_map< 0x40067001 > { static constexpr const char * name_str = "I2C1::F"; };
template<> struct address_map< 0x40067002 > { static constexpr const char * name_str = "I2C1::C1"; };
template<> struct address_map< 0x40067003 > { static constexpr const char * name_str = "I2C1::S"; };
template<> struct address_map< 0x40067004 > { static constexpr const char * name_str = "I2C1::D"; };
template<> struct address_map< 0x40067005 > { static constexpr const char * name_str = "I2C1::C2"; };
template<> struct address_map< 0x40067006 > { static constexpr const char * name_str = "I2C1::FLT"; };
template<> struct address_map< 0x40067007 > { static constexpr const char * name_str = "I2C1::RA"; };
template<> struct address_map< 0x40067008 > { static constexpr const char * name_str = "I2C1::SMB"; };
template<> struct address_map< 0x40067009 > { static constexpr const char * name_str = "I2C1::A2"; };
template<> struct address_map< 0x4006700a > { static constexpr const char * name_str = "I2C1::SLTH"; };
template<> struct address_map< 0x4006700b > { static constexpr const char * name_str = "I2C1::SLTL"; };
template<> struct address_map< 0x4006a000 > { static constexpr const char * name_str = "UART0::BDH"; };
template<> struct address_map< 0x4006a001 > { static constexpr const char * name_str = "UART0::BDL"; };
template<> struct address_map< 0x4006a002 > { static constexpr const char * name_str = "UART0::C1"; };
template<> struct address_map< 0x4006a003 > { static constexpr const char * name_str = "UART0::C2"; };
template<> struct address_map< 0x4006a004 > { static constexpr const char * name_str = "UART0::S1"; };
template<> struct address_map< 0x4006a005 > { static constexpr const char * name_str = "UART0::S2"; };
template<> struct address_map< 0x4006a006 > { static constexpr const char * name_str = "UART0::C3"; };
template<> struct address_map< 0x4006a007 > { static constexpr const char * name_str = "UART0::D"; };
template<> struct address_map< 0x4006a008 > { static constexpr const char * name_str = "UART0::MA1"; };
template<> struct address_map< 0x4006a009 > { static constexpr const char * name_str = "UART0::MA2"; };
template<> struct address_map< 0x4006a00a > { static constexpr const char * name_str = "UART0::C4"; };
template<> struct address_map< 0x4006a00b > { static constexpr const char * name_str = "UART0::C5"; };
template<> struct address_map< 0x4006b000 > { static constexpr const char * name_str = "UART1::BDH"; };
template<> struct address_map< 0x4006b001 > { static constexpr const char * name_str = "UART1::BDL"; };
template<> struct address_map< 0x4006b002 > { static constexpr const char * name_str = "UART1::C1"; };
template<> struct address_map< 0x4006b003 > { static constexpr const char * name_str = "UART1::C2"; };
template<> struct address_map< 0x4006b004 > { static constexpr const char * name_str = "UART1::S1"; };
template<> struct address_map< 0x4006b005 > { static constexpr const char * name_str = "UART1::S2"; };
template<> struct address_map< 0x4006b006 > { static constexpr const char * name_str = "UART1::C3"; };
template<> struct address_map< 0x4006b007 > { static constexpr const char * name_str = "UART1::D"; };
template<> struct address_map< 0x4006b008 > { static constexpr const char * name_str = "UART1::C4"; };
template<> struct address_map< 0x4006c000 > { static constexpr const char * name_str = "UART2::BDH"; };
template<> struct address_map< 0x4006c001 > { static constexpr const char * name_str = "UART2::BDL"; };
template<> struct address_map< 0x4006c002 > { static constexpr const char * name_str = "UART2::C1"; };
template<> struct address_map< 0x4006c003 > { static constexpr const char * name_str = "UART2::C2"; };
template<> struct address_map< 0x4006c004 > { static constexpr const char * name_str = "UART2::S1"; };
template<> struct address_map< 0x4006c005 > { static constexpr const char * name_str = "UART2::S2"; };
template<> struct address_map< 0x4006c006 > { static constexpr const char * name_str = "UART2::C3"; };
template<> struct address_map< 0x4006c007 > { static constexpr const char * name_str = "UART2::D"; };
template<> struct address_map< 0x4006c008 > { static constexpr const char * name_str = "UART2::C4"; };
template<> struct address_map< 0x40073000 > { static constexpr const char * name_str = "CMP0::CR0"; };
template<> struct address_map< 0x40073001 > { static constexpr const char * name_str = "CMP0::CR1"; };
template<> struct address_map< 0x40073002 > { static constexpr const char * name_str = "CMP0::FPR"; };
template<> struct address_map< 0x40073003 > { static constexpr const char * name_str = "CMP0::SCR"; };
template<> struct address_map< 0x40073004 > { static constexpr const char * name_str = "CMP0::DACCR"; };
template<> struct address_map< 0x40073005 > { static constexpr const char * name_str = "CMP0::MUXCR"; };
template<> struct address_map< 0x40076000 > { static constexpr const char * name_str = "SPI0::C1"; };
template<> struct address_map< 0x40076001 > { static constexpr const char * name_str = "SPI0::C2"; };
template<> struct address_map< 0x40076002 > { static constexpr const char * name_str = "SPI0::BR"; };
template<> struct address_map< 0x40076003 > { static constexpr const char * name_str = "SPI0::S"; };
template<> struct address_map< 0x40076005 > { static constexpr const char * name_str = "SPI0::D"; };
template<> struct address_map< 0x40076007 > { static constexpr const char * name_str = "SPI0::M"; };
template<> struct address_map< 0x40077000 > { static constexpr const char * name_str = "SPI1::C1"; };
template<> struct address_map< 0x40077001 > { static constexpr const char * name_str = "SPI1::C2"; };
template<> struct address_map< 0x40077002 > { static constexpr const char * name_str = "SPI1::BR"; };
template<> struct address_map< 0x40077003 > { static constexpr const char * name_str = "SPI1::S"; };
template<> struct address_map< 0x40077005 > { static constexpr const char * name_str = "SPI1::D"; };
template<> struct address_map< 0x40077007 > { static constexpr const char * name_str = "SPI1::M"; };
template<> struct address_map< 0x4007c000 > { static constexpr const char * name_str = "LLWU::PE1"; };
template<> struct address_map< 0x4007c001 > { static constexpr const char * name_str = "LLWU::PE2"; };
template<> struct address_map< 0x4007c002 > { static constexpr const char * name_str = "LLWU::PE3"; };
template<> struct address_map< 0x4007c003 > { static constexpr const char * name_str = "LLWU::PE4"; };
template<> struct address_map< 0x4007c004 > { static constexpr const char * name_str = "LLWU::ME"; };
template<> struct address_map< 0x4007c005 > { static constexpr const char * name_str = "LLWU::F1"; };
template<> struct address_map< 0x4007c006 > { static constexpr const char * name_str = "LLWU::F2"; };
template<> struct address_map< 0x4007c007 > { static constexpr const char * name_str = "LLWU::F3"; };
template<> struct address_map< 0x4007c008 > { static constexpr const char * name_str = "LLWU::FILT1"; };
template<> struct address_map< 0x4007c009 > { static constexpr const char * name_str = "LLWU::FILT2"; };
template<> struct address_map< 0x4007d000 > { static constexpr const char * name_str = "PMC::LVDSC1"; };
template<> struct address_map< 0x4007d001 > { static constexpr const char * name_str = "PMC::LVDSC2"; };
template<> struct address_map< 0x4007d002 > { static constexpr const char * name_str = "PMC::REGSC"; };
template<> struct address_map< 0x4007e000 > { static constexpr const char * name_str = "SMC::PMPROT"; };
template<> struct address_map< 0x4007e001 > { static constexpr const char * name_str = "SMC::PMCTRL"; };
template<> struct address_map< 0x4007e002 > { static constexpr const char * name_str = "SMC::VLLSCTRL"; };
template<> struct address_map< 0x4007e003 > { static constexpr const char * name_str = "SMC::PMSTAT"; };
template<> struct address_map< 0x4007f000 > { static constexpr const char * name_str = "RCM::SRS0"; };
template<> struct address_map< 0x4007f001 > { static constexpr const char * name_str = "RCM::SRS1"; };
template<> struct address_map< 0x4007f004 > { static constexpr const char * name_str = "RCM::RPFC"; };
template<> struct address_map< 0x4007f005 > { static constexpr const char * name_str = "RCM::RPFW"; };
template<> struct address_map< 0x400ff000 > { static constexpr const char * name_str = "GPIOA::PDOR"; };
template<> struct address_map< 0x400ff004 > { static constexpr const char * name_str = "GPIOA::PSOR"; };
template<> struct address_map< 0x400ff008 > { static constexpr const char * name_str = "GPIOA::PCOR"; };
template<> struct address_map< 0x400ff00c > { static constexpr const char * name_str = "GPIOA::PTOR"; };
template<> struct address_map< 0x400ff010 > { static constexpr const char * name_str = "GPIOA::PDIR"; };
template<> struct address_map< 0x400ff014 > { static constexpr const char * name_str = "GPIOA::PDDR"; };
template<> struct address_map< 0x400ff040 > { static constexpr const char * name_str = "GPIOB::PDOR"; };
template<> struct address_map< 0x400ff044 > { static constexpr const char * name_str = "GPIOB::PSOR"; };
template<> struct address_map< 0x400ff048 > { static constexpr const char * name_str = "GPIOB::PCOR"; };
template<> struct address_map< 0x400ff04c > { static constexpr const char * name_str = "GPIOB::PTOR"; };
template<> struct address_map< 0x400ff050 > { static constexpr const char * name_str = "GPIOB::PDIR"; };
template<> struct address_map< 0x400ff054 > { static constexpr const char * name_str = "GPIOB::PDDR"; };
template<> struct address_map< 0x400ff080 > { static constexpr const char * name_str = "GPIOC::PDOR"; };
template<> struct address_map< 0x400ff084 > { static constexpr const char * name_str = "GPIOC::PSOR"; };
template<> struct address_map< 0x400ff088 > { static constexpr const char * name_str = "GPIOC::PCOR"; };
template<> struct address_map< 0x400ff08c > { static constexpr const char * name_str = "GPIOC::PTOR"; };
template<> struct address_map< 0x400ff090 > { static constexpr const char * name_str = "GPIOC::PDIR"; };
template<> struct address_map< 0x400ff094 > { static constexpr const char * name_str = "GPIOC::PDDR"; };
template<> struct address_map< 0x400ff0c0 > { static constexpr const char * name_str = "GPIOD::PDOR"; };
template<> struct address_map< 0x400ff0c4 > { static constexpr const char * name_str = "GPIOD::PSOR"; };
template<> struct address_map< 0x400ff0c8 > { static constexpr const char * name_str = "GPIOD::PCOR"; };
template<> struct address_map< 0x400ff0cc > { static constexpr const char * name_str = "GPIOD::PTOR"; };
template<> struct address_map< 0x400ff0d0 > { static constexpr const char * name_str = "GPIOD::PDIR"; };
template<> struct address_map< 0x400ff0d4 > { static constexpr const char * name_str = "GPIOD::PDDR"; };
template<> struct address_map< 0x400ff100 > { static constexpr const char * name_str = "GPIOE::PDOR"; };
template<> struct address_map< 0x400ff104 > { static constexpr const char * name_str = "GPIOE::PSOR"; };
template<> struct address_map< 0x400ff108 > { static constexpr const char * name_str = "GPIOE::PCOR"; };
template<> struct address_map< 0x400ff10c > { static constexpr const char * name_str = "GPIOE::PTOR"; };
template<> struct address_map< 0x400ff110 > { static constexpr const char * name_str = "GPIOE::PDIR"; };
template<> struct address_map< 0x400ff114 > { static constexpr const char * name_str = "GPIOE::PDDR"; };
template<> struct address_map< 0xf0000000 > { static constexpr const char * name_str = "MTB::POSITION"; };
template<> struct address_map< 0xf0000004 > { static constexpr const char * name_str = "MTB::MASTER"; };
template<> struct address_map< 0xf0000008 > { static constexpr const char * name_str = "MTB::FLOW"; };
template<> struct address_map< 0xf000000c > { static constexpr const char * name_str = "MTB::BASE"; };
template<> struct address_map< 0xf0000f00 > { static constexpr const char * name_str = "MTB::MODECTRL"; };
template<> struct address_map< 0xf0000fa0 > { static constexpr const char * name_str = "MTB::TAGSET"; };
template<> struct address_map< 0xf0000fa4 > { static constexpr const char * name_str = "MTB::TAGCLEAR"; };
template<> struct address_map< 0xf0000fb0 > { static constexpr const char * name_str = "MTB::LOCKACCESS"; };
template<> struct address_map< 0xf0000fb4 > { static constexpr const char * name_str = "MTB::LOCKSTAT"; };
template<> struct address_map< 0xf0000fb8 > { static constexpr const char * name_str = "MTB::AUTHSTAT"; };
template<> struct address_map< 0xf0000fbc > { static constexpr const char * name_str = "MTB::DEVICEARCH"; };
template<> struct address_map< 0xf0000fc8 > { static constexpr const char * name_str = "MTB::DEVICECFG"; };
template<> struct address_map< 0xf0000fcc > { static constexpr const char * name_str = "MTB::DEVICETYPID"; };
template<> struct address_map< 0xf0000fd0 > { static constexpr const char * name_str = "MTB::PERIPHID%s"; };
template<> struct address_map< 0xf0000ff0 > { static constexpr const char * name_str = "MTB::COMPID%s"; };
template<> struct address_map< 0xf0001000 > { static constexpr const char * name_str = "MTBDWT::CTRL"; };
template<> struct address_map< 0xf0001020 > { static constexpr const char * name_str = "MTBDWT::COMP%s"; };
template<> struct address_map< 0xf0001024 > { static constexpr const char * name_str = "MTBDWT::MASK%s"; };
template<> struct address_map< 0xf0001028 > { static constexpr const char * name_str = "MTBDWT::FCT0"; };
template<> struct address_map< 0xf0001038 > { static constexpr const char * name_str = "MTBDWT::FCT1"; };
template<> struct address_map< 0xf0001200 > { static constexpr const char * name_str = "MTBDWT::TBCTRL"; };
template<> struct address_map< 0xf0001fc8 > { static constexpr const char * name_str = "MTBDWT::DEVICECFG"; };
template<> struct address_map< 0xf0001fcc > { static constexpr const char * name_str = "MTBDWT::DEVICETYPID"; };
template<> struct address_map< 0xf0001fd0 > { static constexpr const char * name_str = "MTBDWT::PERIPHID%s"; };
template<> struct address_map< 0xf0001ff0 > { static constexpr const char * name_str = "MTBDWT::COMPID%s"; };
template<> struct address_map< 0xf0002000 > { static constexpr const char * name_str = "ROM::ENTRY%s"; };
template<> struct address_map< 0xf000200c > { static constexpr const char * name_str = "ROM::TABLEMARK"; };
template<> struct address_map< 0xf0002fcc > { static constexpr const char * name_str = "ROM::SYSACCESS"; };
template<> struct address_map< 0xf0002fd0 > { static constexpr const char * name_str = "ROM::PERIPHID%s"; };
template<> struct address_map< 0xf0002ff0 > { static constexpr const char * name_str = "ROM::COMPID%s"; };
template<> struct address_map< 0xf0003008 > { static constexpr const char * name_str = "MCM::PLASC"; };
template<> struct address_map< 0xf000300a > { static constexpr const char * name_str = "MCM::PLAMC"; };
template<> struct address_map< 0xf000300c > { static constexpr const char * name_str = "MCM::PLACR"; };
template<> struct address_map< 0xf0003040 > { static constexpr const char * name_str = "MCM::CPO"; };
template<> struct address_map< 0xf80ff000 > { static constexpr const char * name_str = "FGPIOA::PDOR"; };
template<> struct address_map< 0xf80ff004 > { static constexpr const char * name_str = "FGPIOA::PSOR"; };
template<> struct address_map< 0xf80ff008 > { static constexpr const char * name_str = "FGPIOA::PCOR"; };
template<> struct address_map< 0xf80ff00c > { static constexpr const char * name_str = "FGPIOA::PTOR"; };
template<> struct address_map< 0xf80ff010 > { static constexpr const char * name_str = "FGPIOA::PDIR"; };
template<> struct address_map< 0xf80ff014 > { static constexpr const char * name_str = "FGPIOA::PDDR"; };
template<> struct address_map< 0xf80ff040 > { static constexpr const char * name_str = "FGPIOB::PDOR"; };
template<> struct address_map< 0xf80ff044 > { static constexpr const char * name_str = "FGPIOB::PSOR"; };
template<> struct address_map< 0xf80ff048 > { static constexpr const char * name_str = "FGPIOB::PCOR"; };
template<> struct address_map< 0xf80ff04c > { static constexpr const char * name_str = "FGPIOB::PTOR"; };
template<> struct address_map< 0xf80ff050 > { static constexpr const char * name_str = "FGPIOB::PDIR"; };
template<> struct address_map< 0xf80ff054 > { static constexpr const char * name_str = "FGPIOB::PDDR"; };
template<> struct address_map< 0xf80ff080 > { static constexpr const char * name_str = "FGPIOC::PDOR"; };
template<> struct address_map< 0xf80ff084 > { static constexpr const char * name_str = "FGPIOC::PSOR"; };
template<> struct address_map< 0xf80ff088 > { static constexpr const char * name_str = "FGPIOC::PCOR"; };
template<> struct address_map< 0xf80ff08c > { static constexpr const char * name_str = "FGPIOC::PTOR"; };
template<> struct address_map< 0xf80ff090 > { static constexpr const char * name_str = "FGPIOC::PDIR"; };
template<> struct address_map< 0xf80ff094 > { static constexpr const char * name_str = "FGPIOC::PDDR"; };
template<> struct address_map< 0xf80ff0c0 > { static constexpr const char * name_str = "FGPIOD::PDOR"; };
template<> struct address_map< 0xf80ff0c4 > { static constexpr const char * name_str = "FGPIOD::PSOR"; };
template<> struct address_map< 0xf80ff0c8 > { static constexpr const char * name_str = "FGPIOD::PCOR"; };
template<> struct address_map< 0xf80ff0cc > { static constexpr const char * name_str = "FGPIOD::PTOR"; };
template<> struct address_map< 0xf80ff0d0 > { static constexpr const char * name_str = "FGPIOD::PDIR"; };
template<> struct address_map< 0xf80ff0d4 > { static constexpr const char * name_str = "FGPIOD::PDDR"; };
template<> struct address_map< 0xf80ff100 > { static constexpr const char * name_str = "FGPIOE::PDOR"; };
template<> struct address_map< 0xf80ff104 > { static constexpr const char * name_str = "FGPIOE::PSOR"; };
template<> struct address_map< 0xf80ff108 > { static constexpr const char * name_str = "FGPIOE::PCOR"; };
template<> struct address_map< 0xf80ff10c > { static constexpr const char * name_str = "FGPIOE::PTOR"; };
template<> struct address_map< 0xf80ff110 > { static constexpr const char * name_str = "FGPIOE::PDIR"; };
template<> struct address_map< 0xf80ff114 > { static constexpr const char * name_str = "FGPIOE::PDDR"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
