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
//  Import from CMSIS-SVD: "STMicro/STM32F031x.svd"
//
//  name: STM32F031x
//  version: 1.0
//  description: STM32F031x
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

template<> struct address_map< 0x40000000 > { static constexpr const char * name_str = "TIM2::CR1"; };
template<> struct address_map< 0x40000004 > { static constexpr const char * name_str = "TIM2::CR2"; };
template<> struct address_map< 0x40000008 > { static constexpr const char * name_str = "TIM2::SMCR"; };
template<> struct address_map< 0x4000000c > { static constexpr const char * name_str = "TIM2::DIER"; };
template<> struct address_map< 0x40000010 > { static constexpr const char * name_str = "TIM2::SR"; };
template<> struct address_map< 0x40000014 > { static constexpr const char * name_str = "TIM2::EGR"; };
template<> struct address_map< 0x40000018 > { static constexpr const char * name_str = "TIM2::CCMR1"; };
template<> struct address_map< 0x4000001c > { static constexpr const char * name_str = "TIM2::CCMR2"; };
template<> struct address_map< 0x40000020 > { static constexpr const char * name_str = "TIM2::CCER"; };
template<> struct address_map< 0x40000024 > { static constexpr const char * name_str = "TIM2::CNT"; };
template<> struct address_map< 0x40000028 > { static constexpr const char * name_str = "TIM2::PSC"; };
template<> struct address_map< 0x4000002c > { static constexpr const char * name_str = "TIM2::ARR"; };
template<> struct address_map< 0x40000034 > { static constexpr const char * name_str = "TIM2::CCR1"; };
template<> struct address_map< 0x40000038 > { static constexpr const char * name_str = "TIM2::CCR2"; };
template<> struct address_map< 0x4000003c > { static constexpr const char * name_str = "TIM2::CCR3"; };
template<> struct address_map< 0x40000040 > { static constexpr const char * name_str = "TIM2::CCR4"; };
template<> struct address_map< 0x40000048 > { static constexpr const char * name_str = "TIM2::DCR"; };
template<> struct address_map< 0x4000004c > { static constexpr const char * name_str = "TIM2::DMAR"; };
template<> struct address_map< 0x40000400 > { static constexpr const char * name_str = "TIM3::CR1"; };
template<> struct address_map< 0x40000404 > { static constexpr const char * name_str = "TIM3::CR2"; };
template<> struct address_map< 0x40000408 > { static constexpr const char * name_str = "TIM3::SMCR"; };
template<> struct address_map< 0x4000040c > { static constexpr const char * name_str = "TIM3::DIER"; };
template<> struct address_map< 0x40000410 > { static constexpr const char * name_str = "TIM3::SR"; };
template<> struct address_map< 0x40000414 > { static constexpr const char * name_str = "TIM3::EGR"; };
template<> struct address_map< 0x40000418 > { static constexpr const char * name_str = "TIM3::CCMR1"; };
template<> struct address_map< 0x4000041c > { static constexpr const char * name_str = "TIM3::CCMR2"; };
template<> struct address_map< 0x40000420 > { static constexpr const char * name_str = "TIM3::CCER"; };
template<> struct address_map< 0x40000424 > { static constexpr const char * name_str = "TIM3::CNT"; };
template<> struct address_map< 0x40000428 > { static constexpr const char * name_str = "TIM3::PSC"; };
template<> struct address_map< 0x4000042c > { static constexpr const char * name_str = "TIM3::ARR"; };
template<> struct address_map< 0x40000434 > { static constexpr const char * name_str = "TIM3::CCR1"; };
template<> struct address_map< 0x40000438 > { static constexpr const char * name_str = "TIM3::CCR2"; };
template<> struct address_map< 0x4000043c > { static constexpr const char * name_str = "TIM3::CCR3"; };
template<> struct address_map< 0x40000440 > { static constexpr const char * name_str = "TIM3::CCR4"; };
template<> struct address_map< 0x40000448 > { static constexpr const char * name_str = "TIM3::DCR"; };
template<> struct address_map< 0x4000044c > { static constexpr const char * name_str = "TIM3::DMAR"; };
template<> struct address_map< 0x40002000 > { static constexpr const char * name_str = "TIM14::CR1"; };
template<> struct address_map< 0x4000200c > { static constexpr const char * name_str = "TIM14::DIER"; };
template<> struct address_map< 0x40002010 > { static constexpr const char * name_str = "TIM14::SR"; };
template<> struct address_map< 0x40002014 > { static constexpr const char * name_str = "TIM14::EGR"; };
template<> struct address_map< 0x40002018 > { static constexpr const char * name_str = "TIM14::CCMR1"; };
template<> struct address_map< 0x40002020 > { static constexpr const char * name_str = "TIM14::CCER"; };
template<> struct address_map< 0x40002024 > { static constexpr const char * name_str = "TIM14::CNT"; };
template<> struct address_map< 0x40002028 > { static constexpr const char * name_str = "TIM14::PSC"; };
template<> struct address_map< 0x4000202c > { static constexpr const char * name_str = "TIM14::ARR"; };
template<> struct address_map< 0x40002034 > { static constexpr const char * name_str = "TIM14::CCR1"; };
template<> struct address_map< 0x40002050 > { static constexpr const char * name_str = "TIM14::OR"; };
template<> struct address_map< 0x40002800 > { static constexpr const char * name_str = "RTC::TR"; };
template<> struct address_map< 0x40002804 > { static constexpr const char * name_str = "RTC::DR"; };
template<> struct address_map< 0x40002808 > { static constexpr const char * name_str = "RTC::CR"; };
template<> struct address_map< 0x4000280c > { static constexpr const char * name_str = "RTC::ISR"; };
template<> struct address_map< 0x40002810 > { static constexpr const char * name_str = "RTC::PRER"; };
template<> struct address_map< 0x4000281c > { static constexpr const char * name_str = "RTC::ALRMAR"; };
template<> struct address_map< 0x40002824 > { static constexpr const char * name_str = "RTC::WPR"; };
template<> struct address_map< 0x40002828 > { static constexpr const char * name_str = "RTC::SSR"; };
template<> struct address_map< 0x4000282c > { static constexpr const char * name_str = "RTC::SHIFTR"; };
template<> struct address_map< 0x40002830 > { static constexpr const char * name_str = "RTC::TSTR"; };
template<> struct address_map< 0x40002834 > { static constexpr const char * name_str = "RTC::TSDR"; };
template<> struct address_map< 0x40002838 > { static constexpr const char * name_str = "RTC::TSSSR"; };
template<> struct address_map< 0x4000283c > { static constexpr const char * name_str = "RTC::CALR"; };
template<> struct address_map< 0x40002840 > { static constexpr const char * name_str = "RTC::TAFCR"; };
template<> struct address_map< 0x40002844 > { static constexpr const char * name_str = "RTC::ALRMASSR"; };
template<> struct address_map< 0x40002850 > { static constexpr const char * name_str = "RTC::BKP0R"; };
template<> struct address_map< 0x40002854 > { static constexpr const char * name_str = "RTC::BKP1R"; };
template<> struct address_map< 0x40002858 > { static constexpr const char * name_str = "RTC::BKP2R"; };
template<> struct address_map< 0x4000285c > { static constexpr const char * name_str = "RTC::BKP3R"; };
template<> struct address_map< 0x40002860 > { static constexpr const char * name_str = "RTC::BKP4R"; };
template<> struct address_map< 0x40002c00 > { static constexpr const char * name_str = "WWDG::CR"; };
template<> struct address_map< 0x40002c04 > { static constexpr const char * name_str = "WWDG::CFR"; };
template<> struct address_map< 0x40002c08 > { static constexpr const char * name_str = "WWDG::SR"; };
template<> struct address_map< 0x40003000 > { static constexpr const char * name_str = "IWDG::KR"; };
template<> struct address_map< 0x40003004 > { static constexpr const char * name_str = "IWDG::PR"; };
template<> struct address_map< 0x40003008 > { static constexpr const char * name_str = "IWDG::RLR"; };
template<> struct address_map< 0x4000300c > { static constexpr const char * name_str = "IWDG::SR"; };
template<> struct address_map< 0x40003010 > { static constexpr const char * name_str = "IWDG::WINR"; };
template<> struct address_map< 0x40005400 > { static constexpr const char * name_str = "I2C1::CR1"; };
template<> struct address_map< 0x40005404 > { static constexpr const char * name_str = "I2C1::CR2"; };
template<> struct address_map< 0x40005408 > { static constexpr const char * name_str = "I2C1::OAR1"; };
template<> struct address_map< 0x4000540c > { static constexpr const char * name_str = "I2C1::OAR2"; };
template<> struct address_map< 0x40005410 > { static constexpr const char * name_str = "I2C1::TIMINGR"; };
template<> struct address_map< 0x40005414 > { static constexpr const char * name_str = "I2C1::TIMEOUTR"; };
template<> struct address_map< 0x40005418 > { static constexpr const char * name_str = "I2C1::ISR"; };
template<> struct address_map< 0x4000541c > { static constexpr const char * name_str = "I2C1::ICR"; };
template<> struct address_map< 0x40005420 > { static constexpr const char * name_str = "I2C1::PECR"; };
template<> struct address_map< 0x40005424 > { static constexpr const char * name_str = "I2C1::RXDR"; };
template<> struct address_map< 0x40005428 > { static constexpr const char * name_str = "I2C1::TXDR"; };
template<> struct address_map< 0x40007000 > { static constexpr const char * name_str = "PWR::CR"; };
template<> struct address_map< 0x40007004 > { static constexpr const char * name_str = "PWR::CSR"; };
template<> struct address_map< 0x40007800 > { static constexpr const char * name_str = "CEC::CR"; };
template<> struct address_map< 0x40007804 > { static constexpr const char * name_str = "CEC::CFGR"; };
template<> struct address_map< 0x40007808 > { static constexpr const char * name_str = "CEC::TXDR"; };
template<> struct address_map< 0x4000780c > { static constexpr const char * name_str = "CEC::RXDR"; };
template<> struct address_map< 0x40007810 > { static constexpr const char * name_str = "CEC::ISR"; };
template<> struct address_map< 0x40007814 > { static constexpr const char * name_str = "CEC::IER"; };
template<> struct address_map< 0x40010000 > { static constexpr const char * name_str = "SYSCFG::CFGR1"; };
template<> struct address_map< 0x40010008 > { static constexpr const char * name_str = "SYSCFG::EXTICR1"; };
template<> struct address_map< 0x4001000c > { static constexpr const char * name_str = "SYSCFG::EXTICR2"; };
template<> struct address_map< 0x40010010 > { static constexpr const char * name_str = "SYSCFG::EXTICR3"; };
template<> struct address_map< 0x40010014 > { static constexpr const char * name_str = "SYSCFG::EXTICR4"; };
template<> struct address_map< 0x40010018 > { static constexpr const char * name_str = "SYSCFG::CFGR2"; };
template<> struct address_map< 0x40010400 > { static constexpr const char * name_str = "EXTI::IMR"; };
template<> struct address_map< 0x40010404 > { static constexpr const char * name_str = "EXTI::EMR"; };
template<> struct address_map< 0x40010408 > { static constexpr const char * name_str = "EXTI::RTSR"; };
template<> struct address_map< 0x4001040c > { static constexpr const char * name_str = "EXTI::FTSR"; };
template<> struct address_map< 0x40010410 > { static constexpr const char * name_str = "EXTI::SWIER"; };
template<> struct address_map< 0x40010414 > { static constexpr const char * name_str = "EXTI::PR"; };
template<> struct address_map< 0x40012400 > { static constexpr const char * name_str = "ADC::ISR"; };
template<> struct address_map< 0x40012404 > { static constexpr const char * name_str = "ADC::IER"; };
template<> struct address_map< 0x40012408 > { static constexpr const char * name_str = "ADC::CR"; };
template<> struct address_map< 0x4001240c > { static constexpr const char * name_str = "ADC::CFGR1"; };
template<> struct address_map< 0x40012410 > { static constexpr const char * name_str = "ADC::CFGR2"; };
template<> struct address_map< 0x40012414 > { static constexpr const char * name_str = "ADC::SMPR"; };
template<> struct address_map< 0x40012420 > { static constexpr const char * name_str = "ADC::TR"; };
template<> struct address_map< 0x40012428 > { static constexpr const char * name_str = "ADC::CHSELR"; };
template<> struct address_map< 0x40012440 > { static constexpr const char * name_str = "ADC::DR"; };
template<> struct address_map< 0x40012708 > { static constexpr const char * name_str = "ADC::CCR"; };
template<> struct address_map< 0x40012c00 > { static constexpr const char * name_str = "TIM1::CR1"; };
template<> struct address_map< 0x40012c04 > { static constexpr const char * name_str = "TIM1::CR2"; };
template<> struct address_map< 0x40012c08 > { static constexpr const char * name_str = "TIM1::SMCR"; };
template<> struct address_map< 0x40012c0c > { static constexpr const char * name_str = "TIM1::DIER"; };
template<> struct address_map< 0x40012c10 > { static constexpr const char * name_str = "TIM1::SR"; };
template<> struct address_map< 0x40012c14 > { static constexpr const char * name_str = "TIM1::EGR"; };
template<> struct address_map< 0x40012c18 > { static constexpr const char * name_str = "TIM1::CCMR1"; };
template<> struct address_map< 0x40012c1c > { static constexpr const char * name_str = "TIM1::CCMR2"; };
template<> struct address_map< 0x40012c20 > { static constexpr const char * name_str = "TIM1::CCER"; };
template<> struct address_map< 0x40012c24 > { static constexpr const char * name_str = "TIM1::CNT"; };
template<> struct address_map< 0x40012c28 > { static constexpr const char * name_str = "TIM1::PSC"; };
template<> struct address_map< 0x40012c2c > { static constexpr const char * name_str = "TIM1::ARR"; };
template<> struct address_map< 0x40012c30 > { static constexpr const char * name_str = "TIM1::RCR"; };
template<> struct address_map< 0x40012c34 > { static constexpr const char * name_str = "TIM1::CCR1"; };
template<> struct address_map< 0x40012c38 > { static constexpr const char * name_str = "TIM1::CCR2"; };
template<> struct address_map< 0x40012c3c > { static constexpr const char * name_str = "TIM1::CCR3"; };
template<> struct address_map< 0x40012c40 > { static constexpr const char * name_str = "TIM1::CCR4"; };
template<> struct address_map< 0x40012c44 > { static constexpr const char * name_str = "TIM1::BDTR"; };
template<> struct address_map< 0x40012c48 > { static constexpr const char * name_str = "TIM1::DCR"; };
template<> struct address_map< 0x40012c4c > { static constexpr const char * name_str = "TIM1::DMAR"; };
template<> struct address_map< 0x40013000 > { static constexpr const char * name_str = "SPI1::CR1"; };
template<> struct address_map< 0x40013004 > { static constexpr const char * name_str = "SPI1::CR2"; };
template<> struct address_map< 0x40013008 > { static constexpr const char * name_str = "SPI1::SR"; };
template<> struct address_map< 0x4001300c > { static constexpr const char * name_str = "SPI1::DR"; };
template<> struct address_map< 0x40013010 > { static constexpr const char * name_str = "SPI1::CRCPR"; };
template<> struct address_map< 0x40013014 > { static constexpr const char * name_str = "SPI1::RXCRCR"; };
template<> struct address_map< 0x40013018 > { static constexpr const char * name_str = "SPI1::TXCRCR"; };
template<> struct address_map< 0x4001301c > { static constexpr const char * name_str = "SPI1::I2SCFGR"; };
template<> struct address_map< 0x40013020 > { static constexpr const char * name_str = "SPI1::I2SPR"; };
template<> struct address_map< 0x40013800 > { static constexpr const char * name_str = "USART1::CR1"; };
template<> struct address_map< 0x40013804 > { static constexpr const char * name_str = "USART1::CR2"; };
template<> struct address_map< 0x40013808 > { static constexpr const char * name_str = "USART1::CR3"; };
template<> struct address_map< 0x4001380c > { static constexpr const char * name_str = "USART1::BRR"; };
template<> struct address_map< 0x40013810 > { static constexpr const char * name_str = "USART1::GTPR"; };
template<> struct address_map< 0x40013814 > { static constexpr const char * name_str = "USART1::RTOR"; };
template<> struct address_map< 0x40013818 > { static constexpr const char * name_str = "USART1::RQR"; };
template<> struct address_map< 0x4001381c > { static constexpr const char * name_str = "USART1::ISR"; };
template<> struct address_map< 0x40013820 > { static constexpr const char * name_str = "USART1::ICR"; };
template<> struct address_map< 0x40013824 > { static constexpr const char * name_str = "USART1::RDR"; };
template<> struct address_map< 0x40013828 > { static constexpr const char * name_str = "USART1::TDR"; };
template<> struct address_map< 0x40014400 > { static constexpr const char * name_str = "TIM16::CR1"; };
template<> struct address_map< 0x40014404 > { static constexpr const char * name_str = "TIM16::CR2"; };
template<> struct address_map< 0x4001440c > { static constexpr const char * name_str = "TIM16::DIER"; };
template<> struct address_map< 0x40014410 > { static constexpr const char * name_str = "TIM16::SR"; };
template<> struct address_map< 0x40014414 > { static constexpr const char * name_str = "TIM16::EGR"; };
template<> struct address_map< 0x40014418 > { static constexpr const char * name_str = "TIM16::CCMR1"; };
template<> struct address_map< 0x40014420 > { static constexpr const char * name_str = "TIM16::CCER"; };
template<> struct address_map< 0x40014424 > { static constexpr const char * name_str = "TIM16::CNT"; };
template<> struct address_map< 0x40014428 > { static constexpr const char * name_str = "TIM16::PSC"; };
template<> struct address_map< 0x4001442c > { static constexpr const char * name_str = "TIM16::ARR"; };
template<> struct address_map< 0x40014430 > { static constexpr const char * name_str = "TIM16::RCR"; };
template<> struct address_map< 0x40014434 > { static constexpr const char * name_str = "TIM16::CCR1"; };
template<> struct address_map< 0x40014444 > { static constexpr const char * name_str = "TIM16::BDTR"; };
template<> struct address_map< 0x40014448 > { static constexpr const char * name_str = "TIM16::DCR"; };
template<> struct address_map< 0x4001444c > { static constexpr const char * name_str = "TIM16::DMAR"; };
template<> struct address_map< 0x40014800 > { static constexpr const char * name_str = "TIM17::CR1"; };
template<> struct address_map< 0x40014804 > { static constexpr const char * name_str = "TIM17::CR2"; };
template<> struct address_map< 0x4001480c > { static constexpr const char * name_str = "TIM17::DIER"; };
template<> struct address_map< 0x40014810 > { static constexpr const char * name_str = "TIM17::SR"; };
template<> struct address_map< 0x40014814 > { static constexpr const char * name_str = "TIM17::EGR"; };
template<> struct address_map< 0x40014818 > { static constexpr const char * name_str = "TIM17::CCMR1"; };
template<> struct address_map< 0x40014820 > { static constexpr const char * name_str = "TIM17::CCER"; };
template<> struct address_map< 0x40014824 > { static constexpr const char * name_str = "TIM17::CNT"; };
template<> struct address_map< 0x40014828 > { static constexpr const char * name_str = "TIM17::PSC"; };
template<> struct address_map< 0x4001482c > { static constexpr const char * name_str = "TIM17::ARR"; };
template<> struct address_map< 0x40014830 > { static constexpr const char * name_str = "TIM17::RCR"; };
template<> struct address_map< 0x40014834 > { static constexpr const char * name_str = "TIM17::CCR1"; };
template<> struct address_map< 0x40014844 > { static constexpr const char * name_str = "TIM17::BDTR"; };
template<> struct address_map< 0x40014848 > { static constexpr const char * name_str = "TIM17::DCR"; };
template<> struct address_map< 0x4001484c > { static constexpr const char * name_str = "TIM17::DMAR"; };
template<> struct address_map< 0x40015800 > { static constexpr const char * name_str = "DBGMCU::IDCODE"; };
template<> struct address_map< 0x40015804 > { static constexpr const char * name_str = "DBGMCU::CR"; };
template<> struct address_map< 0x40015808 > { static constexpr const char * name_str = "DBGMCU::APBLFZ"; };
template<> struct address_map< 0x4001580c > { static constexpr const char * name_str = "DBGMCU::APBHFZ"; };
template<> struct address_map< 0x40020000 > { static constexpr const char * name_str = "DMA::ISR"; };
template<> struct address_map< 0x40020004 > { static constexpr const char * name_str = "DMA::IFCR"; };
template<> struct address_map< 0x40020008 > { static constexpr const char * name_str = "DMA::CCR1"; };
template<> struct address_map< 0x4002000c > { static constexpr const char * name_str = "DMA::CNDTR1"; };
template<> struct address_map< 0x40020010 > { static constexpr const char * name_str = "DMA::CPAR1"; };
template<> struct address_map< 0x40020014 > { static constexpr const char * name_str = "DMA::CMAR1"; };
template<> struct address_map< 0x4002001c > { static constexpr const char * name_str = "DMA::CCR2"; };
template<> struct address_map< 0x40020020 > { static constexpr const char * name_str = "DMA::CNDTR2"; };
template<> struct address_map< 0x40020024 > { static constexpr const char * name_str = "DMA::CPAR2"; };
template<> struct address_map< 0x40020028 > { static constexpr const char * name_str = "DMA::CMAR2"; };
template<> struct address_map< 0x40020030 > { static constexpr const char * name_str = "DMA::CCR3"; };
template<> struct address_map< 0x40020034 > { static constexpr const char * name_str = "DMA::CNDTR3"; };
template<> struct address_map< 0x40020038 > { static constexpr const char * name_str = "DMA::CPAR3"; };
template<> struct address_map< 0x4002003c > { static constexpr const char * name_str = "DMA::CMAR3"; };
template<> struct address_map< 0x40020044 > { static constexpr const char * name_str = "DMA::CCR4"; };
template<> struct address_map< 0x40020048 > { static constexpr const char * name_str = "DMA::CNDTR4"; };
template<> struct address_map< 0x4002004c > { static constexpr const char * name_str = "DMA::CPAR4"; };
template<> struct address_map< 0x40020050 > { static constexpr const char * name_str = "DMA::CMAR4"; };
template<> struct address_map< 0x40020058 > { static constexpr const char * name_str = "DMA::CCR5"; };
template<> struct address_map< 0x4002005c > { static constexpr const char * name_str = "DMA::CNDTR5"; };
template<> struct address_map< 0x40020060 > { static constexpr const char * name_str = "DMA::CPAR5"; };
template<> struct address_map< 0x40020064 > { static constexpr const char * name_str = "DMA::CMAR5"; };
template<> struct address_map< 0x4002006c > { static constexpr const char * name_str = "DMA::CCR6"; };
template<> struct address_map< 0x40020070 > { static constexpr const char * name_str = "DMA::CNDTR6"; };
template<> struct address_map< 0x40020074 > { static constexpr const char * name_str = "DMA::CPAR6"; };
template<> struct address_map< 0x40020078 > { static constexpr const char * name_str = "DMA::CMAR6"; };
template<> struct address_map< 0x40020080 > { static constexpr const char * name_str = "DMA::CCR7"; };
template<> struct address_map< 0x40020084 > { static constexpr const char * name_str = "DMA::CNDTR7"; };
template<> struct address_map< 0x40020088 > { static constexpr const char * name_str = "DMA::CPAR7"; };
template<> struct address_map< 0x4002008c > { static constexpr const char * name_str = "DMA::CMAR7"; };
template<> struct address_map< 0x40021000 > { static constexpr const char * name_str = "RCC::CR"; };
template<> struct address_map< 0x40021004 > { static constexpr const char * name_str = "RCC::CFGR"; };
template<> struct address_map< 0x40021008 > { static constexpr const char * name_str = "RCC::CIR"; };
template<> struct address_map< 0x4002100c > { static constexpr const char * name_str = "RCC::APB2RSTR"; };
template<> struct address_map< 0x40021010 > { static constexpr const char * name_str = "RCC::APB1RSTR"; };
template<> struct address_map< 0x40021014 > { static constexpr const char * name_str = "RCC::AHBENR"; };
template<> struct address_map< 0x40021018 > { static constexpr const char * name_str = "RCC::APB2ENR"; };
template<> struct address_map< 0x4002101c > { static constexpr const char * name_str = "RCC::APB1ENR"; };
template<> struct address_map< 0x40021020 > { static constexpr const char * name_str = "RCC::BDCR"; };
template<> struct address_map< 0x40021024 > { static constexpr const char * name_str = "RCC::CSR"; };
template<> struct address_map< 0x40021028 > { static constexpr const char * name_str = "RCC::AHBRSTR"; };
template<> struct address_map< 0x4002102c > { static constexpr const char * name_str = "RCC::CFGR2"; };
template<> struct address_map< 0x40021030 > { static constexpr const char * name_str = "RCC::CFGR3"; };
template<> struct address_map< 0x40021034 > { static constexpr const char * name_str = "RCC::CR2"; };
template<> struct address_map< 0x40022000 > { static constexpr const char * name_str = "Flash::ACR"; };
template<> struct address_map< 0x40022004 > { static constexpr const char * name_str = "Flash::KEYR"; };
template<> struct address_map< 0x40022008 > { static constexpr const char * name_str = "Flash::OPTKEYR"; };
template<> struct address_map< 0x4002200c > { static constexpr const char * name_str = "Flash::SR"; };
template<> struct address_map< 0x40022010 > { static constexpr const char * name_str = "Flash::CR"; };
template<> struct address_map< 0x40022014 > { static constexpr const char * name_str = "Flash::AR"; };
template<> struct address_map< 0x4002201c > { static constexpr const char * name_str = "Flash::OBR"; };
template<> struct address_map< 0x40022020 > { static constexpr const char * name_str = "Flash::WRPR"; };
template<> struct address_map< 0x40023000 > { static constexpr const char * name_str = "CRC::DR"; };
template<> struct address_map< 0x40023004 > { static constexpr const char * name_str = "CRC::IDR"; };
template<> struct address_map< 0x40023008 > { static constexpr const char * name_str = "CRC::CR"; };
template<> struct address_map< 0x4002300c > { static constexpr const char * name_str = "CRC::INIT"; };
template<> struct address_map< 0x40024000 > { static constexpr const char * name_str = "TSC::CR"; };
template<> struct address_map< 0x40024004 > { static constexpr const char * name_str = "TSC::IER"; };
template<> struct address_map< 0x40024008 > { static constexpr const char * name_str = "TSC::ICR"; };
template<> struct address_map< 0x4002400c > { static constexpr const char * name_str = "TSC::ISR"; };
template<> struct address_map< 0x40024010 > { static constexpr const char * name_str = "TSC::IOHCR"; };
template<> struct address_map< 0x40024018 > { static constexpr const char * name_str = "TSC::IOASCR"; };
template<> struct address_map< 0x40024020 > { static constexpr const char * name_str = "TSC::IOSCR"; };
template<> struct address_map< 0x40024028 > { static constexpr const char * name_str = "TSC::IOCCR"; };
template<> struct address_map< 0x40024030 > { static constexpr const char * name_str = "TSC::IOGCSR"; };
template<> struct address_map< 0x40024034 > { static constexpr const char * name_str = "TSC::IOG1CR"; };
template<> struct address_map< 0x40024038 > { static constexpr const char * name_str = "TSC::IOG2CR"; };
template<> struct address_map< 0x4002403c > { static constexpr const char * name_str = "TSC::IOG3CR"; };
template<> struct address_map< 0x40024040 > { static constexpr const char * name_str = "TSC::IOG4CR"; };
template<> struct address_map< 0x40024044 > { static constexpr const char * name_str = "TSC::IOG5CR"; };
template<> struct address_map< 0x40024048 > { static constexpr const char * name_str = "TSC::IOG6CR"; };
template<> struct address_map< 0x48000000 > { static constexpr const char * name_str = "GPIOA::MODER"; };
template<> struct address_map< 0x48000004 > { static constexpr const char * name_str = "GPIOA::OTYPER"; };
template<> struct address_map< 0x48000008 > { static constexpr const char * name_str = "GPIOA::OSPEEDR"; };
template<> struct address_map< 0x4800000c > { static constexpr const char * name_str = "GPIOA::PUPDR"; };
template<> struct address_map< 0x48000010 > { static constexpr const char * name_str = "GPIOA::IDR"; };
template<> struct address_map< 0x48000014 > { static constexpr const char * name_str = "GPIOA::ODR"; };
template<> struct address_map< 0x48000018 > { static constexpr const char * name_str = "GPIOA::BSRR"; };
template<> struct address_map< 0x4800001c > { static constexpr const char * name_str = "GPIOA::LCKR"; };
template<> struct address_map< 0x48000020 > { static constexpr const char * name_str = "GPIOA::AFRL"; };
template<> struct address_map< 0x48000024 > { static constexpr const char * name_str = "GPIOA::AFRH"; };
template<> struct address_map< 0x48000028 > { static constexpr const char * name_str = "GPIOA::BRR"; };
template<> struct address_map< 0x48000400 > { static constexpr const char * name_str = "GPIOB::MODER"; };
template<> struct address_map< 0x48000404 > { static constexpr const char * name_str = "GPIOB::OTYPER"; };
template<> struct address_map< 0x48000408 > { static constexpr const char * name_str = "GPIOB::OSPEEDR"; };
template<> struct address_map< 0x4800040c > { static constexpr const char * name_str = "GPIOB::PUPDR"; };
template<> struct address_map< 0x48000410 > { static constexpr const char * name_str = "GPIOB::IDR"; };
template<> struct address_map< 0x48000414 > { static constexpr const char * name_str = "GPIOB::ODR"; };
template<> struct address_map< 0x48000418 > { static constexpr const char * name_str = "GPIOB::BSRR"; };
template<> struct address_map< 0x4800041c > { static constexpr const char * name_str = "GPIOB::LCKR"; };
template<> struct address_map< 0x48000420 > { static constexpr const char * name_str = "GPIOB::AFRL"; };
template<> struct address_map< 0x48000424 > { static constexpr const char * name_str = "GPIOB::AFRH"; };
template<> struct address_map< 0x48000428 > { static constexpr const char * name_str = "GPIOB::BRR"; };
template<> struct address_map< 0x48000800 > { static constexpr const char * name_str = "GPIOC::MODER"; };
template<> struct address_map< 0x48000804 > { static constexpr const char * name_str = "GPIOC::OTYPER"; };
template<> struct address_map< 0x48000808 > { static constexpr const char * name_str = "GPIOC::OSPEEDR"; };
template<> struct address_map< 0x4800080c > { static constexpr const char * name_str = "GPIOC::PUPDR"; };
template<> struct address_map< 0x48000810 > { static constexpr const char * name_str = "GPIOC::IDR"; };
template<> struct address_map< 0x48000814 > { static constexpr const char * name_str = "GPIOC::ODR"; };
template<> struct address_map< 0x48000818 > { static constexpr const char * name_str = "GPIOC::BSRR"; };
template<> struct address_map< 0x4800081c > { static constexpr const char * name_str = "GPIOC::LCKR"; };
template<> struct address_map< 0x48000820 > { static constexpr const char * name_str = "GPIOC::AFRL"; };
template<> struct address_map< 0x48000824 > { static constexpr const char * name_str = "GPIOC::AFRH"; };
template<> struct address_map< 0x48000828 > { static constexpr const char * name_str = "GPIOC::BRR"; };
template<> struct address_map< 0x48001400 > { static constexpr const char * name_str = "GPIOF::MODER"; };
template<> struct address_map< 0x48001404 > { static constexpr const char * name_str = "GPIOF::OTYPER"; };
template<> struct address_map< 0x48001408 > { static constexpr const char * name_str = "GPIOF::OSPEEDR"; };
template<> struct address_map< 0x4800140c > { static constexpr const char * name_str = "GPIOF::PUPDR"; };
template<> struct address_map< 0x48001410 > { static constexpr const char * name_str = "GPIOF::IDR"; };
template<> struct address_map< 0x48001414 > { static constexpr const char * name_str = "GPIOF::ODR"; };
template<> struct address_map< 0x48001418 > { static constexpr const char * name_str = "GPIOF::BSRR"; };
template<> struct address_map< 0x4800141c > { static constexpr const char * name_str = "GPIOF::LCKR"; };
template<> struct address_map< 0x48001420 > { static constexpr const char * name_str = "GPIOF::AFRL"; };
template<> struct address_map< 0x48001424 > { static constexpr const char * name_str = "GPIOF::AFRH"; };
template<> struct address_map< 0x48001428 > { static constexpr const char * name_str = "GPIOF::BRR"; };
template<> struct address_map< 0xe000e100 > { static constexpr const char * name_str = "NVIC::ISER"; };
template<> struct address_map< 0xe000e180 > { static constexpr const char * name_str = "NVIC::ICER"; };
template<> struct address_map< 0xe000e200 > { static constexpr const char * name_str = "NVIC::ISPR"; };
template<> struct address_map< 0xe000e280 > { static constexpr const char * name_str = "NVIC::ICPR"; };
template<> struct address_map< 0xe000e400 > { static constexpr const char * name_str = "NVIC::IPR0"; };
template<> struct address_map< 0xe000e404 > { static constexpr const char * name_str = "NVIC::IPR1"; };
template<> struct address_map< 0xe000e408 > { static constexpr const char * name_str = "NVIC::IPR2"; };
template<> struct address_map< 0xe000e40c > { static constexpr const char * name_str = "NVIC::IPR3"; };
template<> struct address_map< 0xe000e410 > { static constexpr const char * name_str = "NVIC::IPR4"; };
template<> struct address_map< 0xe000e414 > { static constexpr const char * name_str = "NVIC::IPR5"; };
template<> struct address_map< 0xe000e418 > { static constexpr const char * name_str = "NVIC::IPR6"; };
template<> struct address_map< 0xe000e41c > { static constexpr const char * name_str = "NVIC::IPR7"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
