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
//  Import from CMSIS-SVD: "Atmel/ATSAM3N2A.svd"
//
//  vendor: Atmel
//  name: ATSAM3N2A
//  series: SAM3N
//  version: 20130131
//  description: Atmel ATSAM3N2A device: Cortex-M3 Microcontroller with 128KB Flash, 48 Pins (refer to http://www.atmel.com/devices/SAM3N2A.aspx for more)
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

template<> struct address_map< 0x40008000 > { static constexpr const char * name_str = "SPI::CR"; };
template<> struct address_map< 0x40008004 > { static constexpr const char * name_str = "SPI::MR"; };
template<> struct address_map< 0x40008008 > { static constexpr const char * name_str = "SPI::RDR"; };
template<> struct address_map< 0x4000800c > { static constexpr const char * name_str = "SPI::TDR"; };
template<> struct address_map< 0x40008010 > { static constexpr const char * name_str = "SPI::SR"; };
template<> struct address_map< 0x40008014 > { static constexpr const char * name_str = "SPI::IER"; };
template<> struct address_map< 0x40008018 > { static constexpr const char * name_str = "SPI::IDR"; };
template<> struct address_map< 0x4000801c > { static constexpr const char * name_str = "SPI::IMR"; };
template<> struct address_map< 0x40008030 > { static constexpr const char * name_str = "SPI::CSR[%s]"; };
template<> struct address_map< 0x400080e4 > { static constexpr const char * name_str = "SPI::WPMR"; };
template<> struct address_map< 0x400080e8 > { static constexpr const char * name_str = "SPI::WPSR"; };
template<> struct address_map< 0x40008100 > { static constexpr const char * name_str = "SPI::RPR"; };
template<> struct address_map< 0x40008104 > { static constexpr const char * name_str = "SPI::RCR"; };
template<> struct address_map< 0x40008108 > { static constexpr const char * name_str = "SPI::TPR"; };
template<> struct address_map< 0x4000810c > { static constexpr const char * name_str = "SPI::TCR"; };
template<> struct address_map< 0x40008110 > { static constexpr const char * name_str = "SPI::RNPR"; };
template<> struct address_map< 0x40008114 > { static constexpr const char * name_str = "SPI::RNCR"; };
template<> struct address_map< 0x40008118 > { static constexpr const char * name_str = "SPI::TNPR"; };
template<> struct address_map< 0x4000811c > { static constexpr const char * name_str = "SPI::TNCR"; };
template<> struct address_map< 0x40008120 > { static constexpr const char * name_str = "SPI::PTCR"; };
template<> struct address_map< 0x40008124 > { static constexpr const char * name_str = "SPI::PTSR"; };
template<> struct address_map< 0x40010000 > { static constexpr const char * name_str = "TC0::CCR0"; };
template<> struct address_map< 0x40010004 > { static constexpr const char * name_str = "TC0::CMR0"; };  /* svd2hpp: duplicate address for: TC0::CMR0, TC0::CMR0_WAVE_EQ_1 */
template<> struct address_map< 0x40010008 > { static constexpr const char * name_str = "TC0::SMMR0"; };
template<> struct address_map< 0x40010010 > { static constexpr const char * name_str = "TC0::CV0"; };
template<> struct address_map< 0x40010014 > { static constexpr const char * name_str = "TC0::RA0"; };
template<> struct address_map< 0x40010018 > { static constexpr const char * name_str = "TC0::RB0"; };
template<> struct address_map< 0x4001001c > { static constexpr const char * name_str = "TC0::RC0"; };
template<> struct address_map< 0x40010020 > { static constexpr const char * name_str = "TC0::SR0"; };
template<> struct address_map< 0x40010024 > { static constexpr const char * name_str = "TC0::IER0"; };
template<> struct address_map< 0x40010028 > { static constexpr const char * name_str = "TC0::IDR0"; };
template<> struct address_map< 0x4001002c > { static constexpr const char * name_str = "TC0::IMR0"; };
template<> struct address_map< 0x40010040 > { static constexpr const char * name_str = "TC0::CCR1"; };
template<> struct address_map< 0x40010044 > { static constexpr const char * name_str = "TC0::CMR1"; };  /* svd2hpp: duplicate address for: TC0::CMR1, TC0::CMR1_WAVE_EQ_1 */
template<> struct address_map< 0x40010048 > { static constexpr const char * name_str = "TC0::SMMR1"; };
template<> struct address_map< 0x40010050 > { static constexpr const char * name_str = "TC0::CV1"; };
template<> struct address_map< 0x40010054 > { static constexpr const char * name_str = "TC0::RA1"; };
template<> struct address_map< 0x40010058 > { static constexpr const char * name_str = "TC0::RB1"; };
template<> struct address_map< 0x4001005c > { static constexpr const char * name_str = "TC0::RC1"; };
template<> struct address_map< 0x40010060 > { static constexpr const char * name_str = "TC0::SR1"; };
template<> struct address_map< 0x40010064 > { static constexpr const char * name_str = "TC0::IER1"; };
template<> struct address_map< 0x40010068 > { static constexpr const char * name_str = "TC0::IDR1"; };
template<> struct address_map< 0x4001006c > { static constexpr const char * name_str = "TC0::IMR1"; };
template<> struct address_map< 0x40010080 > { static constexpr const char * name_str = "TC0::CCR2"; };
template<> struct address_map< 0x40010084 > { static constexpr const char * name_str = "TC0::CMR2"; };  /* svd2hpp: duplicate address for: TC0::CMR2, TC0::CMR2_WAVE_EQ_1 */
template<> struct address_map< 0x40010088 > { static constexpr const char * name_str = "TC0::SMMR2"; };
template<> struct address_map< 0x40010090 > { static constexpr const char * name_str = "TC0::CV2"; };
template<> struct address_map< 0x40010094 > { static constexpr const char * name_str = "TC0::RA2"; };
template<> struct address_map< 0x40010098 > { static constexpr const char * name_str = "TC0::RB2"; };
template<> struct address_map< 0x4001009c > { static constexpr const char * name_str = "TC0::RC2"; };
template<> struct address_map< 0x400100a0 > { static constexpr const char * name_str = "TC0::SR2"; };
template<> struct address_map< 0x400100a4 > { static constexpr const char * name_str = "TC0::IER2"; };
template<> struct address_map< 0x400100a8 > { static constexpr const char * name_str = "TC0::IDR2"; };
template<> struct address_map< 0x400100ac > { static constexpr const char * name_str = "TC0::IMR2"; };
template<> struct address_map< 0x400100c0 > { static constexpr const char * name_str = "TC0::BCR"; };
template<> struct address_map< 0x400100c4 > { static constexpr const char * name_str = "TC0::BMR"; };
template<> struct address_map< 0x400100c8 > { static constexpr const char * name_str = "TC0::QIER"; };
template<> struct address_map< 0x400100cc > { static constexpr const char * name_str = "TC0::QIDR"; };
template<> struct address_map< 0x400100d0 > { static constexpr const char * name_str = "TC0::QIMR"; };
template<> struct address_map< 0x400100d4 > { static constexpr const char * name_str = "TC0::QISR"; };
template<> struct address_map< 0x400100e4 > { static constexpr const char * name_str = "TC0::WPMR"; };
template<> struct address_map< 0x40018000 > { static constexpr const char * name_str = "TWI0::CR"; };
template<> struct address_map< 0x40018004 > { static constexpr const char * name_str = "TWI0::MMR"; };
template<> struct address_map< 0x40018008 > { static constexpr const char * name_str = "TWI0::SMR"; };
template<> struct address_map< 0x4001800c > { static constexpr const char * name_str = "TWI0::IADR"; };
template<> struct address_map< 0x40018010 > { static constexpr const char * name_str = "TWI0::CWGR"; };
template<> struct address_map< 0x40018020 > { static constexpr const char * name_str = "TWI0::SR"; };
template<> struct address_map< 0x40018024 > { static constexpr const char * name_str = "TWI0::IER"; };
template<> struct address_map< 0x40018028 > { static constexpr const char * name_str = "TWI0::IDR"; };
template<> struct address_map< 0x4001802c > { static constexpr const char * name_str = "TWI0::IMR"; };
template<> struct address_map< 0x40018030 > { static constexpr const char * name_str = "TWI0::RHR"; };
template<> struct address_map< 0x40018034 > { static constexpr const char * name_str = "TWI0::THR"; };
template<> struct address_map< 0x40018100 > { static constexpr const char * name_str = "TWI0::RPR"; };
template<> struct address_map< 0x40018104 > { static constexpr const char * name_str = "TWI0::RCR"; };
template<> struct address_map< 0x40018108 > { static constexpr const char * name_str = "TWI0::TPR"; };
template<> struct address_map< 0x4001810c > { static constexpr const char * name_str = "TWI0::TCR"; };
template<> struct address_map< 0x40018110 > { static constexpr const char * name_str = "TWI0::RNPR"; };
template<> struct address_map< 0x40018114 > { static constexpr const char * name_str = "TWI0::RNCR"; };
template<> struct address_map< 0x40018118 > { static constexpr const char * name_str = "TWI0::TNPR"; };
template<> struct address_map< 0x4001811c > { static constexpr const char * name_str = "TWI0::TNCR"; };
template<> struct address_map< 0x40018120 > { static constexpr const char * name_str = "TWI0::PTCR"; };
template<> struct address_map< 0x40018124 > { static constexpr const char * name_str = "TWI0::PTSR"; };
template<> struct address_map< 0x4001c000 > { static constexpr const char * name_str = "TWI1::CR"; };
template<> struct address_map< 0x4001c004 > { static constexpr const char * name_str = "TWI1::MMR"; };
template<> struct address_map< 0x4001c008 > { static constexpr const char * name_str = "TWI1::SMR"; };
template<> struct address_map< 0x4001c00c > { static constexpr const char * name_str = "TWI1::IADR"; };
template<> struct address_map< 0x4001c010 > { static constexpr const char * name_str = "TWI1::CWGR"; };
template<> struct address_map< 0x4001c020 > { static constexpr const char * name_str = "TWI1::SR"; };
template<> struct address_map< 0x4001c024 > { static constexpr const char * name_str = "TWI1::IER"; };
template<> struct address_map< 0x4001c028 > { static constexpr const char * name_str = "TWI1::IDR"; };
template<> struct address_map< 0x4001c02c > { static constexpr const char * name_str = "TWI1::IMR"; };
template<> struct address_map< 0x4001c030 > { static constexpr const char * name_str = "TWI1::RHR"; };
template<> struct address_map< 0x4001c034 > { static constexpr const char * name_str = "TWI1::THR"; };
template<> struct address_map< 0x40020000 > { static constexpr const char * name_str = "PWM::MR"; };
template<> struct address_map< 0x40020004 > { static constexpr const char * name_str = "PWM::ENA"; };
template<> struct address_map< 0x40020008 > { static constexpr const char * name_str = "PWM::DIS"; };
template<> struct address_map< 0x4002000c > { static constexpr const char * name_str = "PWM::SR"; };
template<> struct address_map< 0x40020010 > { static constexpr const char * name_str = "PWM::IER"; };
template<> struct address_map< 0x40020014 > { static constexpr const char * name_str = "PWM::IDR"; };
template<> struct address_map< 0x40020018 > { static constexpr const char * name_str = "PWM::IMR"; };
template<> struct address_map< 0x4002001c > { static constexpr const char * name_str = "PWM::ISR"; };
template<> struct address_map< 0x40020200 > { static constexpr const char * name_str = "PWM::CMR0"; };
template<> struct address_map< 0x40020204 > { static constexpr const char * name_str = "PWM::CDTY0"; };
template<> struct address_map< 0x40020208 > { static constexpr const char * name_str = "PWM::CPRD0"; };
template<> struct address_map< 0x4002020c > { static constexpr const char * name_str = "PWM::CCNT0"; };
template<> struct address_map< 0x40020210 > { static constexpr const char * name_str = "PWM::CUPD0"; };
template<> struct address_map< 0x40020220 > { static constexpr const char * name_str = "PWM::CMR1"; };
template<> struct address_map< 0x40020224 > { static constexpr const char * name_str = "PWM::CDTY1"; };
template<> struct address_map< 0x40020228 > { static constexpr const char * name_str = "PWM::CPRD1"; };
template<> struct address_map< 0x4002022c > { static constexpr const char * name_str = "PWM::CCNT1"; };
template<> struct address_map< 0x40020230 > { static constexpr const char * name_str = "PWM::CUPD1"; };
template<> struct address_map< 0x40020240 > { static constexpr const char * name_str = "PWM::CMR2"; };
template<> struct address_map< 0x40020244 > { static constexpr const char * name_str = "PWM::CDTY2"; };
template<> struct address_map< 0x40020248 > { static constexpr const char * name_str = "PWM::CPRD2"; };
template<> struct address_map< 0x4002024c > { static constexpr const char * name_str = "PWM::CCNT2"; };
template<> struct address_map< 0x40020250 > { static constexpr const char * name_str = "PWM::CUPD2"; };
template<> struct address_map< 0x40020260 > { static constexpr const char * name_str = "PWM::CMR3"; };
template<> struct address_map< 0x40020264 > { static constexpr const char * name_str = "PWM::CDTY3"; };
template<> struct address_map< 0x40020268 > { static constexpr const char * name_str = "PWM::CPRD3"; };
template<> struct address_map< 0x4002026c > { static constexpr const char * name_str = "PWM::CCNT3"; };
template<> struct address_map< 0x40020270 > { static constexpr const char * name_str = "PWM::CUPD3"; };
template<> struct address_map< 0x40024000 > { static constexpr const char * name_str = "USART0::CR"; };  /* svd2hpp: duplicate address for: USART0::CR, USART0::CR_SPI_MODE */
template<> struct address_map< 0x40024004 > { static constexpr const char * name_str = "USART0::MR"; };  /* svd2hpp: duplicate address for: USART0::MR, USART0::MR_SPI_MODE */
template<> struct address_map< 0x40024008 > { static constexpr const char * name_str = "USART0::IER"; };  /* svd2hpp: duplicate address for: USART0::IER, USART0::IER_SPI_MODE */
template<> struct address_map< 0x4002400c > { static constexpr const char * name_str = "USART0::IDR"; };  /* svd2hpp: duplicate address for: USART0::IDR, USART0::IDR_SPI_MODE */
template<> struct address_map< 0x40024010 > { static constexpr const char * name_str = "USART0::IMR"; };  /* svd2hpp: duplicate address for: USART0::IMR, USART0::IMR_SPI_MODE */
template<> struct address_map< 0x40024014 > { static constexpr const char * name_str = "USART0::CSR"; };  /* svd2hpp: duplicate address for: USART0::CSR, USART0::CSR_SPI_MODE */
template<> struct address_map< 0x40024018 > { static constexpr const char * name_str = "USART0::RHR"; };
template<> struct address_map< 0x4002401c > { static constexpr const char * name_str = "USART0::THR"; };
template<> struct address_map< 0x40024020 > { static constexpr const char * name_str = "USART0::BRGR"; };
template<> struct address_map< 0x40024024 > { static constexpr const char * name_str = "USART0::RTOR"; };
template<> struct address_map< 0x40024028 > { static constexpr const char * name_str = "USART0::TTGR"; };
template<> struct address_map< 0x40024040 > { static constexpr const char * name_str = "USART0::FIDI"; };
template<> struct address_map< 0x40024044 > { static constexpr const char * name_str = "USART0::NER"; };
template<> struct address_map< 0x4002404c > { static constexpr const char * name_str = "USART0::IF"; };
template<> struct address_map< 0x400240e4 > { static constexpr const char * name_str = "USART0::WPMR"; };
template<> struct address_map< 0x400240e8 > { static constexpr const char * name_str = "USART0::WPSR"; };
template<> struct address_map< 0x40024100 > { static constexpr const char * name_str = "USART0::RPR"; };
template<> struct address_map< 0x40024104 > { static constexpr const char * name_str = "USART0::RCR"; };
template<> struct address_map< 0x40024108 > { static constexpr const char * name_str = "USART0::TPR"; };
template<> struct address_map< 0x4002410c > { static constexpr const char * name_str = "USART0::TCR"; };
template<> struct address_map< 0x40024110 > { static constexpr const char * name_str = "USART0::RNPR"; };
template<> struct address_map< 0x40024114 > { static constexpr const char * name_str = "USART0::RNCR"; };
template<> struct address_map< 0x40024118 > { static constexpr const char * name_str = "USART0::TNPR"; };
template<> struct address_map< 0x4002411c > { static constexpr const char * name_str = "USART0::TNCR"; };
template<> struct address_map< 0x40024120 > { static constexpr const char * name_str = "USART0::PTCR"; };
template<> struct address_map< 0x40024124 > { static constexpr const char * name_str = "USART0::PTSR"; };
template<> struct address_map< 0x40038000 > { static constexpr const char * name_str = "ADC::CR"; };
template<> struct address_map< 0x40038004 > { static constexpr const char * name_str = "ADC::MR"; };
template<> struct address_map< 0x40038008 > { static constexpr const char * name_str = "ADC::SEQR1"; };
template<> struct address_map< 0x4003800c > { static constexpr const char * name_str = "ADC::SEQR2"; };
template<> struct address_map< 0x40038010 > { static constexpr const char * name_str = "ADC::CHER"; };
template<> struct address_map< 0x40038014 > { static constexpr const char * name_str = "ADC::CHDR"; };
template<> struct address_map< 0x40038018 > { static constexpr const char * name_str = "ADC::CHSR"; };
template<> struct address_map< 0x40038020 > { static constexpr const char * name_str = "ADC::LCDR"; };
template<> struct address_map< 0x40038024 > { static constexpr const char * name_str = "ADC::IER"; };
template<> struct address_map< 0x40038028 > { static constexpr const char * name_str = "ADC::IDR"; };
template<> struct address_map< 0x4003802c > { static constexpr const char * name_str = "ADC::IMR"; };
template<> struct address_map< 0x40038030 > { static constexpr const char * name_str = "ADC::ISR"; };
template<> struct address_map< 0x4003803c > { static constexpr const char * name_str = "ADC::OVER"; };
template<> struct address_map< 0x40038040 > { static constexpr const char * name_str = "ADC::EMR"; };
template<> struct address_map< 0x40038044 > { static constexpr const char * name_str = "ADC::CWR"; };
template<> struct address_map< 0x40038050 > { static constexpr const char * name_str = "ADC::CDR[%s]"; };
template<> struct address_map< 0x400380e4 > { static constexpr const char * name_str = "ADC::WPMR"; };
template<> struct address_map< 0x400380e8 > { static constexpr const char * name_str = "ADC::WPSR"; };
template<> struct address_map< 0x40038100 > { static constexpr const char * name_str = "ADC::RPR"; };
template<> struct address_map< 0x40038104 > { static constexpr const char * name_str = "ADC::RCR"; };
template<> struct address_map< 0x40038110 > { static constexpr const char * name_str = "ADC::RNPR"; };
template<> struct address_map< 0x40038114 > { static constexpr const char * name_str = "ADC::RNCR"; };
template<> struct address_map< 0x40038120 > { static constexpr const char * name_str = "ADC::PTCR"; };
template<> struct address_map< 0x40038124 > { static constexpr const char * name_str = "ADC::PTSR"; };
template<> struct address_map< 0x4003c000 > { static constexpr const char * name_str = "DACC::CR"; };
template<> struct address_map< 0x4003c004 > { static constexpr const char * name_str = "DACC::MR"; };
template<> struct address_map< 0x4003c008 > { static constexpr const char * name_str = "DACC::CDR"; };
template<> struct address_map< 0x4003c00c > { static constexpr const char * name_str = "DACC::IER"; };
template<> struct address_map< 0x4003c010 > { static constexpr const char * name_str = "DACC::IDR"; };
template<> struct address_map< 0x4003c014 > { static constexpr const char * name_str = "DACC::IMR"; };
template<> struct address_map< 0x4003c018 > { static constexpr const char * name_str = "DACC::ISR"; };
template<> struct address_map< 0x4003c0e4 > { static constexpr const char * name_str = "DACC::WPMR"; };
template<> struct address_map< 0x4003c0e8 > { static constexpr const char * name_str = "DACC::WPSR"; };
template<> struct address_map< 0x4003c108 > { static constexpr const char * name_str = "DACC::TPR"; };
template<> struct address_map< 0x4003c10c > { static constexpr const char * name_str = "DACC::TCR"; };
template<> struct address_map< 0x4003c118 > { static constexpr const char * name_str = "DACC::TNPR"; };
template<> struct address_map< 0x4003c11c > { static constexpr const char * name_str = "DACC::TNCR"; };
template<> struct address_map< 0x4003c120 > { static constexpr const char * name_str = "DACC::PTCR"; };
template<> struct address_map< 0x4003c124 > { static constexpr const char * name_str = "DACC::PTSR"; };
template<> struct address_map< 0x400e0200 > { static constexpr const char * name_str = "MATRIX::MATRIX_MCFG[%s]"; };
template<> struct address_map< 0x400e0240 > { static constexpr const char * name_str = "MATRIX::MATRIX_SCFG[%s]"; };
template<> struct address_map< 0x400e0280 > { static constexpr const char * name_str = "MATRIX::MATRIX_PRAS0"; };
template<> struct address_map< 0x400e0288 > { static constexpr const char * name_str = "MATRIX::MATRIX_PRAS1"; };
template<> struct address_map< 0x400e0290 > { static constexpr const char * name_str = "MATRIX::MATRIX_PRAS2"; };
template<> struct address_map< 0x400e0298 > { static constexpr const char * name_str = "MATRIX::MATRIX_PRAS3"; };
template<> struct address_map< 0x400e0314 > { static constexpr const char * name_str = "MATRIX::CCFG_SYSIO"; };
template<> struct address_map< 0x400e03e4 > { static constexpr const char * name_str = "MATRIX::MATRIX_WPMR"; };
template<> struct address_map< 0x400e03e8 > { static constexpr const char * name_str = "MATRIX::MATRIX_WPSR"; };
template<> struct address_map< 0x400e0400 > { static constexpr const char * name_str = "PMC::PMC_SCER"; };
template<> struct address_map< 0x400e0404 > { static constexpr const char * name_str = "PMC::PMC_SCDR"; };
template<> struct address_map< 0x400e0408 > { static constexpr const char * name_str = "PMC::PMC_SCSR"; };
template<> struct address_map< 0x400e0410 > { static constexpr const char * name_str = "PMC::PMC_PCER0"; };
template<> struct address_map< 0x400e0414 > { static constexpr const char * name_str = "PMC::PMC_PCDR0"; };
template<> struct address_map< 0x400e0418 > { static constexpr const char * name_str = "PMC::PMC_PCSR0"; };
template<> struct address_map< 0x400e0420 > { static constexpr const char * name_str = "PMC::CKGR_MOR"; };
template<> struct address_map< 0x400e0424 > { static constexpr const char * name_str = "PMC::CKGR_MCFR"; };
template<> struct address_map< 0x400e0428 > { static constexpr const char * name_str = "PMC::CKGR_PLLAR"; };
template<> struct address_map< 0x400e0430 > { static constexpr const char * name_str = "PMC::PMC_MCKR"; };
template<> struct address_map< 0x400e0440 > { static constexpr const char * name_str = "PMC::PMC_PCK[%s]"; };
template<> struct address_map< 0x400e0460 > { static constexpr const char * name_str = "PMC::PMC_IER"; };
template<> struct address_map< 0x400e0464 > { static constexpr const char * name_str = "PMC::PMC_IDR"; };
template<> struct address_map< 0x400e0468 > { static constexpr const char * name_str = "PMC::PMC_SR"; };
template<> struct address_map< 0x400e046c > { static constexpr const char * name_str = "PMC::PMC_IMR"; };
template<> struct address_map< 0x400e0470 > { static constexpr const char * name_str = "PMC::PMC_FSMR"; };
template<> struct address_map< 0x400e0474 > { static constexpr const char * name_str = "PMC::PMC_FSPR"; };
template<> struct address_map< 0x400e0478 > { static constexpr const char * name_str = "PMC::PMC_FOCR"; };
template<> struct address_map< 0x400e04e4 > { static constexpr const char * name_str = "PMC::PMC_WPMR"; };
template<> struct address_map< 0x400e04e8 > { static constexpr const char * name_str = "PMC::PMC_WPSR"; };
template<> struct address_map< 0x400e0600 > { static constexpr const char * name_str = "UART0::CR"; };
template<> struct address_map< 0x400e0604 > { static constexpr const char * name_str = "UART0::MR"; };
template<> struct address_map< 0x400e0608 > { static constexpr const char * name_str = "UART0::IER"; };
template<> struct address_map< 0x400e060c > { static constexpr const char * name_str = "UART0::IDR"; };
template<> struct address_map< 0x400e0610 > { static constexpr const char * name_str = "UART0::IMR"; };
template<> struct address_map< 0x400e0614 > { static constexpr const char * name_str = "UART0::SR"; };
template<> struct address_map< 0x400e0618 > { static constexpr const char * name_str = "UART0::RHR"; };
template<> struct address_map< 0x400e061c > { static constexpr const char * name_str = "UART0::THR"; };
template<> struct address_map< 0x400e0620 > { static constexpr const char * name_str = "UART0::BRGR"; };
template<> struct address_map< 0x400e0700 > { static constexpr const char * name_str = "UART0::RPR"; };
template<> struct address_map< 0x400e0704 > { static constexpr const char * name_str = "UART0::RCR"; };
template<> struct address_map< 0x400e0708 > { static constexpr const char * name_str = "UART0::TPR"; };
template<> struct address_map< 0x400e070c > { static constexpr const char * name_str = "UART0::TCR"; };
template<> struct address_map< 0x400e0710 > { static constexpr const char * name_str = "UART0::RNPR"; };
template<> struct address_map< 0x400e0714 > { static constexpr const char * name_str = "UART0::RNCR"; };
template<> struct address_map< 0x400e0718 > { static constexpr const char * name_str = "UART0::TNPR"; };
template<> struct address_map< 0x400e071c > { static constexpr const char * name_str = "UART0::TNCR"; };
template<> struct address_map< 0x400e0720 > { static constexpr const char * name_str = "UART0::PTCR"; };
template<> struct address_map< 0x400e0724 > { static constexpr const char * name_str = "UART0::PTSR"; };
template<> struct address_map< 0x400e0740 > { static constexpr const char * name_str = "CHIPID::CIDR"; };
template<> struct address_map< 0x400e0744 > { static constexpr const char * name_str = "CHIPID::EXID"; };
template<> struct address_map< 0x400e0800 > { static constexpr const char * name_str = "UART1::CR"; };
template<> struct address_map< 0x400e0804 > { static constexpr const char * name_str = "UART1::MR"; };
template<> struct address_map< 0x400e0808 > { static constexpr const char * name_str = "UART1::IER"; };
template<> struct address_map< 0x400e080c > { static constexpr const char * name_str = "UART1::IDR"; };
template<> struct address_map< 0x400e0810 > { static constexpr const char * name_str = "UART1::IMR"; };
template<> struct address_map< 0x400e0814 > { static constexpr const char * name_str = "UART1::SR"; };
template<> struct address_map< 0x400e0818 > { static constexpr const char * name_str = "UART1::RHR"; };
template<> struct address_map< 0x400e081c > { static constexpr const char * name_str = "UART1::THR"; };
template<> struct address_map< 0x400e0820 > { static constexpr const char * name_str = "UART1::BRGR"; };
template<> struct address_map< 0x400e0a00 > { static constexpr const char * name_str = "EFC::FMR"; };
template<> struct address_map< 0x400e0a04 > { static constexpr const char * name_str = "EFC::FCR"; };
template<> struct address_map< 0x400e0a08 > { static constexpr const char * name_str = "EFC::FSR"; };
template<> struct address_map< 0x400e0a0c > { static constexpr const char * name_str = "EFC::FRR"; };
template<> struct address_map< 0x400e0e00 > { static constexpr const char * name_str = "PIOA::PER"; };
template<> struct address_map< 0x400e0e04 > { static constexpr const char * name_str = "PIOA::PDR"; };
template<> struct address_map< 0x400e0e08 > { static constexpr const char * name_str = "PIOA::PSR"; };
template<> struct address_map< 0x400e0e10 > { static constexpr const char * name_str = "PIOA::OER"; };
template<> struct address_map< 0x400e0e14 > { static constexpr const char * name_str = "PIOA::ODR"; };
template<> struct address_map< 0x400e0e18 > { static constexpr const char * name_str = "PIOA::OSR"; };
template<> struct address_map< 0x400e0e20 > { static constexpr const char * name_str = "PIOA::IFER"; };
template<> struct address_map< 0x400e0e24 > { static constexpr const char * name_str = "PIOA::IFDR"; };
template<> struct address_map< 0x400e0e28 > { static constexpr const char * name_str = "PIOA::IFSR"; };
template<> struct address_map< 0x400e0e30 > { static constexpr const char * name_str = "PIOA::SODR"; };
template<> struct address_map< 0x400e0e34 > { static constexpr const char * name_str = "PIOA::CODR"; };
template<> struct address_map< 0x400e0e38 > { static constexpr const char * name_str = "PIOA::ODSR"; };
template<> struct address_map< 0x400e0e3c > { static constexpr const char * name_str = "PIOA::PDSR"; };
template<> struct address_map< 0x400e0e40 > { static constexpr const char * name_str = "PIOA::IER"; };
template<> struct address_map< 0x400e0e44 > { static constexpr const char * name_str = "PIOA::IDR"; };
template<> struct address_map< 0x400e0e48 > { static constexpr const char * name_str = "PIOA::IMR"; };
template<> struct address_map< 0x400e0e4c > { static constexpr const char * name_str = "PIOA::ISR"; };
template<> struct address_map< 0x400e0e50 > { static constexpr const char * name_str = "PIOA::MDER"; };
template<> struct address_map< 0x400e0e54 > { static constexpr const char * name_str = "PIOA::MDDR"; };
template<> struct address_map< 0x400e0e58 > { static constexpr const char * name_str = "PIOA::MDSR"; };
template<> struct address_map< 0x400e0e60 > { static constexpr const char * name_str = "PIOA::PUDR"; };
template<> struct address_map< 0x400e0e64 > { static constexpr const char * name_str = "PIOA::PUER"; };
template<> struct address_map< 0x400e0e68 > { static constexpr const char * name_str = "PIOA::PUSR"; };
template<> struct address_map< 0x400e0e70 > { static constexpr const char * name_str = "PIOA::ABCDSR[%s]"; };
template<> struct address_map< 0x400e0e80 > { static constexpr const char * name_str = "PIOA::IFSCDR"; };
template<> struct address_map< 0x400e0e84 > { static constexpr const char * name_str = "PIOA::IFSCER"; };
template<> struct address_map< 0x400e0e88 > { static constexpr const char * name_str = "PIOA::IFSCSR"; };
template<> struct address_map< 0x400e0e8c > { static constexpr const char * name_str = "PIOA::SCDR"; };
template<> struct address_map< 0x400e0e90 > { static constexpr const char * name_str = "PIOA::PPDDR"; };
template<> struct address_map< 0x400e0e94 > { static constexpr const char * name_str = "PIOA::PPDER"; };
template<> struct address_map< 0x400e0e98 > { static constexpr const char * name_str = "PIOA::PPDSR"; };
template<> struct address_map< 0x400e0ea0 > { static constexpr const char * name_str = "PIOA::OWER"; };
template<> struct address_map< 0x400e0ea4 > { static constexpr const char * name_str = "PIOA::OWDR"; };
template<> struct address_map< 0x400e0ea8 > { static constexpr const char * name_str = "PIOA::OWSR"; };
template<> struct address_map< 0x400e0eb0 > { static constexpr const char * name_str = "PIOA::AIMER"; };
template<> struct address_map< 0x400e0eb4 > { static constexpr const char * name_str = "PIOA::AIMDR"; };
template<> struct address_map< 0x400e0eb8 > { static constexpr const char * name_str = "PIOA::AIMMR"; };
template<> struct address_map< 0x400e0ec0 > { static constexpr const char * name_str = "PIOA::ESR"; };
template<> struct address_map< 0x400e0ec4 > { static constexpr const char * name_str = "PIOA::LSR"; };
template<> struct address_map< 0x400e0ec8 > { static constexpr const char * name_str = "PIOA::ELSR"; };
template<> struct address_map< 0x400e0ed0 > { static constexpr const char * name_str = "PIOA::FELLSR"; };
template<> struct address_map< 0x400e0ed4 > { static constexpr const char * name_str = "PIOA::REHLSR"; };
template<> struct address_map< 0x400e0ed8 > { static constexpr const char * name_str = "PIOA::FRLHSR"; };
template<> struct address_map< 0x400e0ee0 > { static constexpr const char * name_str = "PIOA::LOCKSR"; };
template<> struct address_map< 0x400e0ee4 > { static constexpr const char * name_str = "PIOA::WPMR"; };
template<> struct address_map< 0x400e0ee8 > { static constexpr const char * name_str = "PIOA::WPSR"; };
template<> struct address_map< 0x400e0f00 > { static constexpr const char * name_str = "PIOA::SCHMITT"; };
template<> struct address_map< 0x400e1000 > { static constexpr const char * name_str = "PIOB::PER"; };
template<> struct address_map< 0x400e1004 > { static constexpr const char * name_str = "PIOB::PDR"; };
template<> struct address_map< 0x400e1008 > { static constexpr const char * name_str = "PIOB::PSR"; };
template<> struct address_map< 0x400e1010 > { static constexpr const char * name_str = "PIOB::OER"; };
template<> struct address_map< 0x400e1014 > { static constexpr const char * name_str = "PIOB::ODR"; };
template<> struct address_map< 0x400e1018 > { static constexpr const char * name_str = "PIOB::OSR"; };
template<> struct address_map< 0x400e1020 > { static constexpr const char * name_str = "PIOB::IFER"; };
template<> struct address_map< 0x400e1024 > { static constexpr const char * name_str = "PIOB::IFDR"; };
template<> struct address_map< 0x400e1028 > { static constexpr const char * name_str = "PIOB::IFSR"; };
template<> struct address_map< 0x400e1030 > { static constexpr const char * name_str = "PIOB::SODR"; };
template<> struct address_map< 0x400e1034 > { static constexpr const char * name_str = "PIOB::CODR"; };
template<> struct address_map< 0x400e1038 > { static constexpr const char * name_str = "PIOB::ODSR"; };
template<> struct address_map< 0x400e103c > { static constexpr const char * name_str = "PIOB::PDSR"; };
template<> struct address_map< 0x400e1040 > { static constexpr const char * name_str = "PIOB::IER"; };
template<> struct address_map< 0x400e1044 > { static constexpr const char * name_str = "PIOB::IDR"; };
template<> struct address_map< 0x400e1048 > { static constexpr const char * name_str = "PIOB::IMR"; };
template<> struct address_map< 0x400e104c > { static constexpr const char * name_str = "PIOB::ISR"; };
template<> struct address_map< 0x400e1050 > { static constexpr const char * name_str = "PIOB::MDER"; };
template<> struct address_map< 0x400e1054 > { static constexpr const char * name_str = "PIOB::MDDR"; };
template<> struct address_map< 0x400e1058 > { static constexpr const char * name_str = "PIOB::MDSR"; };
template<> struct address_map< 0x400e1060 > { static constexpr const char * name_str = "PIOB::PUDR"; };
template<> struct address_map< 0x400e1064 > { static constexpr const char * name_str = "PIOB::PUER"; };
template<> struct address_map< 0x400e1068 > { static constexpr const char * name_str = "PIOB::PUSR"; };
template<> struct address_map< 0x400e1070 > { static constexpr const char * name_str = "PIOB::ABCDSR[%s]"; };
template<> struct address_map< 0x400e1080 > { static constexpr const char * name_str = "PIOB::IFSCDR"; };
template<> struct address_map< 0x400e1084 > { static constexpr const char * name_str = "PIOB::IFSCER"; };
template<> struct address_map< 0x400e1088 > { static constexpr const char * name_str = "PIOB::IFSCSR"; };
template<> struct address_map< 0x400e108c > { static constexpr const char * name_str = "PIOB::SCDR"; };
template<> struct address_map< 0x400e1090 > { static constexpr const char * name_str = "PIOB::PPDDR"; };
template<> struct address_map< 0x400e1094 > { static constexpr const char * name_str = "PIOB::PPDER"; };
template<> struct address_map< 0x400e1098 > { static constexpr const char * name_str = "PIOB::PPDSR"; };
template<> struct address_map< 0x400e10a0 > { static constexpr const char * name_str = "PIOB::OWER"; };
template<> struct address_map< 0x400e10a4 > { static constexpr const char * name_str = "PIOB::OWDR"; };
template<> struct address_map< 0x400e10a8 > { static constexpr const char * name_str = "PIOB::OWSR"; };
template<> struct address_map< 0x400e10b0 > { static constexpr const char * name_str = "PIOB::AIMER"; };
template<> struct address_map< 0x400e10b4 > { static constexpr const char * name_str = "PIOB::AIMDR"; };
template<> struct address_map< 0x400e10b8 > { static constexpr const char * name_str = "PIOB::AIMMR"; };
template<> struct address_map< 0x400e10c0 > { static constexpr const char * name_str = "PIOB::ESR"; };
template<> struct address_map< 0x400e10c4 > { static constexpr const char * name_str = "PIOB::LSR"; };
template<> struct address_map< 0x400e10c8 > { static constexpr const char * name_str = "PIOB::ELSR"; };
template<> struct address_map< 0x400e10d0 > { static constexpr const char * name_str = "PIOB::FELLSR"; };
template<> struct address_map< 0x400e10d4 > { static constexpr const char * name_str = "PIOB::REHLSR"; };
template<> struct address_map< 0x400e10d8 > { static constexpr const char * name_str = "PIOB::FRLHSR"; };
template<> struct address_map< 0x400e10e0 > { static constexpr const char * name_str = "PIOB::LOCKSR"; };
template<> struct address_map< 0x400e10e4 > { static constexpr const char * name_str = "PIOB::WPMR"; };
template<> struct address_map< 0x400e10e8 > { static constexpr const char * name_str = "PIOB::WPSR"; };
template<> struct address_map< 0x400e1100 > { static constexpr const char * name_str = "PIOB::SCHMITT"; };
template<> struct address_map< 0x400e1400 > { static constexpr const char * name_str = "RSTC::CR"; };
template<> struct address_map< 0x400e1404 > { static constexpr const char * name_str = "RSTC::SR"; };
template<> struct address_map< 0x400e1408 > { static constexpr const char * name_str = "RSTC::MR"; };
template<> struct address_map< 0x400e1410 > { static constexpr const char * name_str = "SUPC::CR"; };
template<> struct address_map< 0x400e1414 > { static constexpr const char * name_str = "SUPC::SMMR"; };
template<> struct address_map< 0x400e1418 > { static constexpr const char * name_str = "SUPC::MR"; };
template<> struct address_map< 0x400e141c > { static constexpr const char * name_str = "SUPC::WUMR"; };
template<> struct address_map< 0x400e1420 > { static constexpr const char * name_str = "SUPC::WUIR"; };
template<> struct address_map< 0x400e1424 > { static constexpr const char * name_str = "SUPC::SR"; };
template<> struct address_map< 0x400e1430 > { static constexpr const char * name_str = "RTT::MR"; };
template<> struct address_map< 0x400e1434 > { static constexpr const char * name_str = "RTT::AR"; };
template<> struct address_map< 0x400e1438 > { static constexpr const char * name_str = "RTT::VR"; };
template<> struct address_map< 0x400e143c > { static constexpr const char * name_str = "RTT::SR"; };
template<> struct address_map< 0x400e1450 > { static constexpr const char * name_str = "WDT::CR"; };
template<> struct address_map< 0x400e1454 > { static constexpr const char * name_str = "WDT::MR"; };
template<> struct address_map< 0x400e1458 > { static constexpr const char * name_str = "WDT::SR"; };
template<> struct address_map< 0x400e1460 > { static constexpr const char * name_str = "RTC::CR"; };
template<> struct address_map< 0x400e1464 > { static constexpr const char * name_str = "RTC::MR"; };
template<> struct address_map< 0x400e1468 > { static constexpr const char * name_str = "RTC::TIMR"; };
template<> struct address_map< 0x400e146c > { static constexpr const char * name_str = "RTC::CALR"; };
template<> struct address_map< 0x400e1470 > { static constexpr const char * name_str = "RTC::TIMALR"; };
template<> struct address_map< 0x400e1474 > { static constexpr const char * name_str = "RTC::CALALR"; };
template<> struct address_map< 0x400e1478 > { static constexpr const char * name_str = "RTC::SR"; };
template<> struct address_map< 0x400e147c > { static constexpr const char * name_str = "RTC::SCCR"; };
template<> struct address_map< 0x400e1480 > { static constexpr const char * name_str = "RTC::IER"; };
template<> struct address_map< 0x400e1484 > { static constexpr const char * name_str = "RTC::IDR"; };
template<> struct address_map< 0x400e1488 > { static constexpr const char * name_str = "RTC::IMR"; };
template<> struct address_map< 0x400e148c > { static constexpr const char * name_str = "RTC::VER"; };
template<> struct address_map< 0x400e1490 > { static constexpr const char * name_str = "GPBR::GPBR[%s]"; };
template<> struct address_map< 0x400e1544 > { static constexpr const char * name_str = "RTC::WPMR"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
