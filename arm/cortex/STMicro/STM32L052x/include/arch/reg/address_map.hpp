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
//  Import from CMSIS-SVD: "STMicro/STM32L052x.svd"
//
//  name: STM32L052x
//  version: 1.0
//  description: STM32L052x
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
template<> struct address_map< 0x40000050 > { static constexpr const char * name_str = "TIM2::OR"; };
template<> struct address_map< 0x40001000 > { static constexpr const char * name_str = "TIM6::CR1"; };
template<> struct address_map< 0x40001004 > { static constexpr const char * name_str = "TIM6::CR2"; };
template<> struct address_map< 0x4000100c > { static constexpr const char * name_str = "TIM6::DIER"; };
template<> struct address_map< 0x40001010 > { static constexpr const char * name_str = "TIM6::SR"; };
template<> struct address_map< 0x40001014 > { static constexpr const char * name_str = "TIM6::EGR"; };
template<> struct address_map< 0x40001024 > { static constexpr const char * name_str = "TIM6::CNT"; };
template<> struct address_map< 0x40001028 > { static constexpr const char * name_str = "TIM6::PSC"; };
template<> struct address_map< 0x4000102c > { static constexpr const char * name_str = "TIM6::ARR"; };
template<> struct address_map< 0x40002800 > { static constexpr const char * name_str = "RTC::TR"; };
template<> struct address_map< 0x40002804 > { static constexpr const char * name_str = "RTC::DR"; };
template<> struct address_map< 0x40002808 > { static constexpr const char * name_str = "RTC::CR"; };
template<> struct address_map< 0x4000280c > { static constexpr const char * name_str = "RTC::ISR"; };
template<> struct address_map< 0x40002810 > { static constexpr const char * name_str = "RTC::PRER"; };
template<> struct address_map< 0x40002814 > { static constexpr const char * name_str = "RTC::WUTR"; };
template<> struct address_map< 0x4000281c > { static constexpr const char * name_str = "RTC::ALRMAR"; };
template<> struct address_map< 0x40002820 > { static constexpr const char * name_str = "RTC::ALRMBR"; };
template<> struct address_map< 0x40002824 > { static constexpr const char * name_str = "RTC::WPR"; };
template<> struct address_map< 0x40002828 > { static constexpr const char * name_str = "RTC::SSR"; };
template<> struct address_map< 0x4000282c > { static constexpr const char * name_str = "RTC::SHIFTR"; };
template<> struct address_map< 0x40002830 > { static constexpr const char * name_str = "RTC::TSTR"; };
template<> struct address_map< 0x40002834 > { static constexpr const char * name_str = "RTC::TSDR"; };
template<> struct address_map< 0x40002838 > { static constexpr const char * name_str = "RTC::TSSSR"; };
template<> struct address_map< 0x4000283c > { static constexpr const char * name_str = "RTC::CALR"; };
template<> struct address_map< 0x40002840 > { static constexpr const char * name_str = "RTC::TAMPCR"; };
template<> struct address_map< 0x40002844 > { static constexpr const char * name_str = "RTC::ALRMASSR"; };
template<> struct address_map< 0x40002848 > { static constexpr const char * name_str = "RTC::ALRMBSSR"; };
template<> struct address_map< 0x4000284c > { static constexpr const char * name_str = "RTC::OR"; };
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
template<> struct address_map< 0x40003800 > { static constexpr const char * name_str = "SPI2::CR1"; };
template<> struct address_map< 0x40003804 > { static constexpr const char * name_str = "SPI2::CR2"; };
template<> struct address_map< 0x40003808 > { static constexpr const char * name_str = "SPI2::SR"; };
template<> struct address_map< 0x4000380c > { static constexpr const char * name_str = "SPI2::DR"; };
template<> struct address_map< 0x40003810 > { static constexpr const char * name_str = "SPI2::CRCPR"; };
template<> struct address_map< 0x40003814 > { static constexpr const char * name_str = "SPI2::RXCRCR"; };
template<> struct address_map< 0x40003818 > { static constexpr const char * name_str = "SPI2::TXCRCR"; };
template<> struct address_map< 0x4000381c > { static constexpr const char * name_str = "SPI2::I2SCFGR"; };
template<> struct address_map< 0x40003820 > { static constexpr const char * name_str = "SPI2::I2SPR"; };
template<> struct address_map< 0x40004400 > { static constexpr const char * name_str = "USART2::CR1"; };
template<> struct address_map< 0x40004404 > { static constexpr const char * name_str = "USART2::CR2"; };
template<> struct address_map< 0x40004408 > { static constexpr const char * name_str = "USART2::CR3"; };
template<> struct address_map< 0x4000440c > { static constexpr const char * name_str = "USART2::BRR"; };
template<> struct address_map< 0x40004410 > { static constexpr const char * name_str = "USART2::GTPR"; };
template<> struct address_map< 0x40004414 > { static constexpr const char * name_str = "USART2::RTOR"; };
template<> struct address_map< 0x40004418 > { static constexpr const char * name_str = "USART2::RQR"; };
template<> struct address_map< 0x4000441c > { static constexpr const char * name_str = "USART2::ISR"; };
template<> struct address_map< 0x40004420 > { static constexpr const char * name_str = "USART2::ICR"; };
template<> struct address_map< 0x40004424 > { static constexpr const char * name_str = "USART2::RDR"; };
template<> struct address_map< 0x40004428 > { static constexpr const char * name_str = "USART2::TDR"; };
template<> struct address_map< 0x40004800 > { static constexpr const char * name_str = "LPUSART1::CR1"; };
template<> struct address_map< 0x40004804 > { static constexpr const char * name_str = "LPUSART1::CR2"; };
template<> struct address_map< 0x40004808 > { static constexpr const char * name_str = "LPUSART1::CR3"; };
template<> struct address_map< 0x4000480c > { static constexpr const char * name_str = "LPUSART1::BRR"; };
template<> struct address_map< 0x40004818 > { static constexpr const char * name_str = "LPUSART1::RQR"; };
template<> struct address_map< 0x4000481c > { static constexpr const char * name_str = "LPUSART1::ISR"; };
template<> struct address_map< 0x40004820 > { static constexpr const char * name_str = "LPUSART1::ICR"; };
template<> struct address_map< 0x40004824 > { static constexpr const char * name_str = "LPUSART1::RDR"; };
template<> struct address_map< 0x40004828 > { static constexpr const char * name_str = "LPUSART1::TDR"; };
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
template<> struct address_map< 0x40005800 > { static constexpr const char * name_str = "I2C2::CR1"; };
template<> struct address_map< 0x40005804 > { static constexpr const char * name_str = "I2C2::CR2"; };
template<> struct address_map< 0x40005808 > { static constexpr const char * name_str = "I2C2::OAR1"; };
template<> struct address_map< 0x4000580c > { static constexpr const char * name_str = "I2C2::OAR2"; };
template<> struct address_map< 0x40005810 > { static constexpr const char * name_str = "I2C2::TIMINGR"; };
template<> struct address_map< 0x40005814 > { static constexpr const char * name_str = "I2C2::TIMEOUTR"; };
template<> struct address_map< 0x40005818 > { static constexpr const char * name_str = "I2C2::ISR"; };
template<> struct address_map< 0x4000581c > { static constexpr const char * name_str = "I2C2::ICR"; };
template<> struct address_map< 0x40005820 > { static constexpr const char * name_str = "I2C2::PECR"; };
template<> struct address_map< 0x40005824 > { static constexpr const char * name_str = "I2C2::RXDR"; };
template<> struct address_map< 0x40005828 > { static constexpr const char * name_str = "I2C2::TXDR"; };
template<> struct address_map< 0x40005c00 > { static constexpr const char * name_str = "USB_FS::EP0R"; };
template<> struct address_map< 0x40005c04 > { static constexpr const char * name_str = "USB_FS::EP1R"; };
template<> struct address_map< 0x40005c08 > { static constexpr const char * name_str = "USB_FS::EP2R"; };
template<> struct address_map< 0x40005c0c > { static constexpr const char * name_str = "USB_FS::EP3R"; };
template<> struct address_map< 0x40005c10 > { static constexpr const char * name_str = "USB_FS::EP4R"; };
template<> struct address_map< 0x40005c14 > { static constexpr const char * name_str = "USB_FS::EP5R"; };
template<> struct address_map< 0x40005c18 > { static constexpr const char * name_str = "USB_FS::EP6R"; };
template<> struct address_map< 0x40005c1c > { static constexpr const char * name_str = "USB_FS::EP7R"; };
template<> struct address_map< 0x40005c40 > { static constexpr const char * name_str = "USB_FS::CNTR"; };
template<> struct address_map< 0x40005c44 > { static constexpr const char * name_str = "USB_FS::ISTR"; };
template<> struct address_map< 0x40005c48 > { static constexpr const char * name_str = "USB_FS::FNR"; };
template<> struct address_map< 0x40005c4c > { static constexpr const char * name_str = "USB_FS::DADDR"; };
template<> struct address_map< 0x40005c50 > { static constexpr const char * name_str = "USB_FS::BTABLE"; };
template<> struct address_map< 0x40005c54 > { static constexpr const char * name_str = "USB_FS::LPMCSR"; };
template<> struct address_map< 0x40005c58 > { static constexpr const char * name_str = "USB_FS::BCDR"; };
template<> struct address_map< 0x40006c00 > { static constexpr const char * name_str = "CRS::CR"; };
template<> struct address_map< 0x40006c04 > { static constexpr const char * name_str = "CRS::CFGR"; };
template<> struct address_map< 0x40006c08 > { static constexpr const char * name_str = "CRS::ISR"; };
template<> struct address_map< 0x40006c0c > { static constexpr const char * name_str = "CRS::ICR"; };
template<> struct address_map< 0x40007000 > { static constexpr const char * name_str = "PWR::CR"; };
template<> struct address_map< 0x40007004 > { static constexpr const char * name_str = "PWR::CSR"; };
template<> struct address_map< 0x40007400 > { static constexpr const char * name_str = "DAC::CR"; };
template<> struct address_map< 0x40007404 > { static constexpr const char * name_str = "DAC::SWTRIGR"; };
template<> struct address_map< 0x40007408 > { static constexpr const char * name_str = "DAC::DHR12R1"; };
template<> struct address_map< 0x4000740c > { static constexpr const char * name_str = "DAC::DHR12L1"; };
template<> struct address_map< 0x40007410 > { static constexpr const char * name_str = "DAC::DHR8R1"; };
template<> struct address_map< 0x4000742c > { static constexpr const char * name_str = "DAC::DOR1"; };
template<> struct address_map< 0x40007434 > { static constexpr const char * name_str = "DAC::SR"; };
template<> struct address_map< 0x40007c00 > { static constexpr const char * name_str = "LPTIM::ISR"; };
template<> struct address_map< 0x40007c04 > { static constexpr const char * name_str = "LPTIM::ICR"; };
template<> struct address_map< 0x40007c08 > { static constexpr const char * name_str = "LPTIM::IER"; };
template<> struct address_map< 0x40007c0c > { static constexpr const char * name_str = "LPTIM::CFGR"; };
template<> struct address_map< 0x40007c10 > { static constexpr const char * name_str = "LPTIM::CR"; };
template<> struct address_map< 0x40007c14 > { static constexpr const char * name_str = "LPTIM::CMP"; };
template<> struct address_map< 0x40007c18 > { static constexpr const char * name_str = "LPTIM::ARR"; };
template<> struct address_map< 0x40007c1c > { static constexpr const char * name_str = "LPTIM::CNT"; };
template<> struct address_map< 0x40010000 > { static constexpr const char * name_str = "SYSCFG::CFGR1"; };
template<> struct address_map< 0x40010004 > { static constexpr const char * name_str = "SYSCFG::CFGR2"; };
template<> struct address_map< 0x40010008 > { static constexpr const char * name_str = "SYSCFG::EXTICR1"; };
template<> struct address_map< 0x4001000c > { static constexpr const char * name_str = "SYSCFG::EXTICR2"; };
template<> struct address_map< 0x40010010 > { static constexpr const char * name_str = "SYSCFG::EXTICR3"; };
template<> struct address_map< 0x40010014 > { static constexpr const char * name_str = "SYSCFG::EXTICR4"; };
template<> struct address_map< 0x40010020 > { static constexpr const char * name_str = "SYSCFG::CFGR3"; };
template<> struct address_map< 0x40010030 > { static constexpr const char * name_str = "COMP::COMP1_CSR"; };
template<> struct address_map< 0x40010034 > { static constexpr const char * name_str = "COMP::COMP2_CSR"; };
template<> struct address_map< 0x40010400 > { static constexpr const char * name_str = "EXTI::IMR"; };
template<> struct address_map< 0x40010404 > { static constexpr const char * name_str = "EXTI::EMR"; };
template<> struct address_map< 0x40010408 > { static constexpr const char * name_str = "EXTI::RTSR"; };
template<> struct address_map< 0x4001040c > { static constexpr const char * name_str = "EXTI::FTSR"; };
template<> struct address_map< 0x40010410 > { static constexpr const char * name_str = "EXTI::SWIER"; };
template<> struct address_map< 0x40010414 > { static constexpr const char * name_str = "EXTI::PR"; };
template<> struct address_map< 0x40010800 > { static constexpr const char * name_str = "TIM21::CR1"; };
template<> struct address_map< 0x40010804 > { static constexpr const char * name_str = "TIM21::CR2"; };
template<> struct address_map< 0x40010808 > { static constexpr const char * name_str = "TIM21::SMCR"; };
template<> struct address_map< 0x4001080c > { static constexpr const char * name_str = "TIM21::DIER"; };
template<> struct address_map< 0x40010810 > { static constexpr const char * name_str = "TIM21::SR"; };
template<> struct address_map< 0x40010814 > { static constexpr const char * name_str = "TIM21::EGR"; };
template<> struct address_map< 0x40010818 > { static constexpr const char * name_str = "TIM21::CCMR1"; };
template<> struct address_map< 0x40010820 > { static constexpr const char * name_str = "TIM21::CCER"; };
template<> struct address_map< 0x40010824 > { static constexpr const char * name_str = "TIM21::CNT"; };
template<> struct address_map< 0x40010828 > { static constexpr const char * name_str = "TIM21::PSC"; };
template<> struct address_map< 0x4001082c > { static constexpr const char * name_str = "TIM21::ARR"; };
template<> struct address_map< 0x40010834 > { static constexpr const char * name_str = "TIM21::CCR1"; };
template<> struct address_map< 0x40010838 > { static constexpr const char * name_str = "TIM21::CCR2"; };
template<> struct address_map< 0x40010850 > { static constexpr const char * name_str = "TIM21::OR"; };
template<> struct address_map< 0x40011400 > { static constexpr const char * name_str = "TIM22::CR1"; };
template<> struct address_map< 0x40011404 > { static constexpr const char * name_str = "TIM22::CR2"; };
template<> struct address_map< 0x40011408 > { static constexpr const char * name_str = "TIM22::SMCR"; };
template<> struct address_map< 0x4001140c > { static constexpr const char * name_str = "TIM22::DIER"; };
template<> struct address_map< 0x40011410 > { static constexpr const char * name_str = "TIM22::SR"; };
template<> struct address_map< 0x40011414 > { static constexpr const char * name_str = "TIM22::EGR"; };
template<> struct address_map< 0x40011418 > { static constexpr const char * name_str = "TIM22::CCMR1"; };
template<> struct address_map< 0x40011420 > { static constexpr const char * name_str = "TIM22::CCER"; };
template<> struct address_map< 0x40011424 > { static constexpr const char * name_str = "TIM22::CNT"; };
template<> struct address_map< 0x40011428 > { static constexpr const char * name_str = "TIM22::PSC"; };
template<> struct address_map< 0x4001142c > { static constexpr const char * name_str = "TIM22::ARR"; };
template<> struct address_map< 0x40011434 > { static constexpr const char * name_str = "TIM22::CCR1"; };
template<> struct address_map< 0x40011438 > { static constexpr const char * name_str = "TIM22::CCR2"; };
template<> struct address_map< 0x40011450 > { static constexpr const char * name_str = "TIM22::OR"; };
template<> struct address_map< 0x40011c00 > { static constexpr const char * name_str = "Firewall::FIREWALL_CSSA"; };
template<> struct address_map< 0x40011c04 > { static constexpr const char * name_str = "Firewall::FIREWALL_CSL"; };
template<> struct address_map< 0x40011c08 > { static constexpr const char * name_str = "Firewall::FIREWALL_NVDSSA"; };
template<> struct address_map< 0x40011c0c > { static constexpr const char * name_str = "Firewall::FIREWALL_NVDSL"; };
template<> struct address_map< 0x40011c10 > { static constexpr const char * name_str = "Firewall::FIREWALL_VDSSA"; };
template<> struct address_map< 0x40011c14 > { static constexpr const char * name_str = "Firewall::FIREWALL_VDSL"; };
template<> struct address_map< 0x40011c20 > { static constexpr const char * name_str = "Firewall::FIREWALL_CR"; };
template<> struct address_map< 0x40012400 > { static constexpr const char * name_str = "ADC::ISR"; };
template<> struct address_map< 0x40012404 > { static constexpr const char * name_str = "ADC::IER"; };
template<> struct address_map< 0x40012408 > { static constexpr const char * name_str = "ADC::CR"; };
template<> struct address_map< 0x4001240c > { static constexpr const char * name_str = "ADC::CFGR1"; };
template<> struct address_map< 0x40012410 > { static constexpr const char * name_str = "ADC::CFGR2"; };
template<> struct address_map< 0x40012414 > { static constexpr const char * name_str = "ADC::SMPR"; };
template<> struct address_map< 0x40012420 > { static constexpr const char * name_str = "ADC::TR"; };
template<> struct address_map< 0x40012428 > { static constexpr const char * name_str = "ADC::CHSELR"; };
template<> struct address_map< 0x40012440 > { static constexpr const char * name_str = "ADC::DR"; };
template<> struct address_map< 0x400124b4 > { static constexpr const char * name_str = "ADC::CALFACT"; };
template<> struct address_map< 0x40012708 > { static constexpr const char * name_str = "ADC::CCR"; };
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
template<> struct address_map< 0x40015800 > { static constexpr const char * name_str = "DBGMCU::IDCODE"; };
template<> struct address_map< 0x40015804 > { static constexpr const char * name_str = "DBGMCU::CR"; };
template<> struct address_map< 0x40015808 > { static constexpr const char * name_str = "DBGMCU::APB1_FZ"; };
template<> struct address_map< 0x4001580c > { static constexpr const char * name_str = "DBGMCU::APB2_FZ"; };
template<> struct address_map< 0x40020000 > { static constexpr const char * name_str = "DMA1::ISR"; };
template<> struct address_map< 0x40020004 > { static constexpr const char * name_str = "DMA1::IFCR"; };
template<> struct address_map< 0x40020008 > { static constexpr const char * name_str = "DMA1::CCR1"; };
template<> struct address_map< 0x4002000c > { static constexpr const char * name_str = "DMA1::CNDTR1"; };
template<> struct address_map< 0x40020010 > { static constexpr const char * name_str = "DMA1::CPAR1"; };
template<> struct address_map< 0x40020014 > { static constexpr const char * name_str = "DMA1::CMAR1"; };
template<> struct address_map< 0x4002001c > { static constexpr const char * name_str = "DMA1::CCR2"; };
template<> struct address_map< 0x40020020 > { static constexpr const char * name_str = "DMA1::CNDTR2"; };
template<> struct address_map< 0x40020024 > { static constexpr const char * name_str = "DMA1::CPAR2"; };
template<> struct address_map< 0x40020028 > { static constexpr const char * name_str = "DMA1::CMAR2"; };
template<> struct address_map< 0x40020030 > { static constexpr const char * name_str = "DMA1::CCR3"; };
template<> struct address_map< 0x40020034 > { static constexpr const char * name_str = "DMA1::CNDTR3"; };
template<> struct address_map< 0x40020038 > { static constexpr const char * name_str = "DMA1::CPAR3"; };
template<> struct address_map< 0x4002003c > { static constexpr const char * name_str = "DMA1::CMAR3"; };
template<> struct address_map< 0x40020044 > { static constexpr const char * name_str = "DMA1::CCR4"; };
template<> struct address_map< 0x40020048 > { static constexpr const char * name_str = "DMA1::CNDTR4"; };
template<> struct address_map< 0x4002004c > { static constexpr const char * name_str = "DMA1::CPAR4"; };
template<> struct address_map< 0x40020050 > { static constexpr const char * name_str = "DMA1::CMAR4"; };
template<> struct address_map< 0x40020058 > { static constexpr const char * name_str = "DMA1::CCR5"; };
template<> struct address_map< 0x4002005c > { static constexpr const char * name_str = "DMA1::CNDTR5"; };
template<> struct address_map< 0x40020060 > { static constexpr const char * name_str = "DMA1::CPAR5"; };
template<> struct address_map< 0x40020064 > { static constexpr const char * name_str = "DMA1::CMAR5"; };
template<> struct address_map< 0x4002006c > { static constexpr const char * name_str = "DMA1::CCR6"; };
template<> struct address_map< 0x40020070 > { static constexpr const char * name_str = "DMA1::CNDTR6"; };
template<> struct address_map< 0x40020074 > { static constexpr const char * name_str = "DMA1::CPAR6"; };
template<> struct address_map< 0x40020078 > { static constexpr const char * name_str = "DMA1::CMAR6"; };
template<> struct address_map< 0x40020080 > { static constexpr const char * name_str = "DMA1::CCR7"; };
template<> struct address_map< 0x40020084 > { static constexpr const char * name_str = "DMA1::CNDTR7"; };
template<> struct address_map< 0x40020088 > { static constexpr const char * name_str = "DMA1::CPAR7"; };
template<> struct address_map< 0x4002008c > { static constexpr const char * name_str = "DMA1::CMAR7"; };
template<> struct address_map< 0x400200a8 > { static constexpr const char * name_str = "DMA1::CSELR"; };
template<> struct address_map< 0x40021000 > { static constexpr const char * name_str = "RCC::CR"; };
template<> struct address_map< 0x40021004 > { static constexpr const char * name_str = "RCC::ICSCR"; };
template<> struct address_map< 0x40021008 > { static constexpr const char * name_str = "RCC::CRRCR"; };
template<> struct address_map< 0x4002100c > { static constexpr const char * name_str = "RCC::CFGR"; };
template<> struct address_map< 0x40021010 > { static constexpr const char * name_str = "RCC::CIER"; };
template<> struct address_map< 0x40021014 > { static constexpr const char * name_str = "RCC::CIFR"; };
template<> struct address_map< 0x40021018 > { static constexpr const char * name_str = "RCC::CICR"; };
template<> struct address_map< 0x4002101c > { static constexpr const char * name_str = "RCC::IOPRSTR"; };
template<> struct address_map< 0x40021020 > { static constexpr const char * name_str = "RCC::AHBRSTR"; };
template<> struct address_map< 0x40021024 > { static constexpr const char * name_str = "RCC::APB2RSTR"; };
template<> struct address_map< 0x40021028 > { static constexpr const char * name_str = "RCC::APB1RSTR"; };
template<> struct address_map< 0x4002102c > { static constexpr const char * name_str = "RCC::IOPENR"; };
template<> struct address_map< 0x40021030 > { static constexpr const char * name_str = "RCC::AHBENR"; };
template<> struct address_map< 0x40021034 > { static constexpr const char * name_str = "RCC::APB2ENR"; };
template<> struct address_map< 0x40021038 > { static constexpr const char * name_str = "RCC::APB1ENR"; };
template<> struct address_map< 0x4002103c > { static constexpr const char * name_str = "RCC::IOPSMEN"; };
template<> struct address_map< 0x40021040 > { static constexpr const char * name_str = "RCC::AHBSMENR"; };
template<> struct address_map< 0x40021044 > { static constexpr const char * name_str = "RCC::APB2SMENR"; };
template<> struct address_map< 0x40021048 > { static constexpr const char * name_str = "RCC::APB1SMENR"; };
template<> struct address_map< 0x4002104c > { static constexpr const char * name_str = "RCC::CCIPR"; };
template<> struct address_map< 0x40021050 > { static constexpr const char * name_str = "RCC::CSR"; };
template<> struct address_map< 0x40022000 > { static constexpr const char * name_str = "Flash::ACR"; };
template<> struct address_map< 0x40022004 > { static constexpr const char * name_str = "Flash::PECR"; };
template<> struct address_map< 0x40022008 > { static constexpr const char * name_str = "Flash::PDKEYR"; };
template<> struct address_map< 0x4002200c > { static constexpr const char * name_str = "Flash::PEKEYR"; };
template<> struct address_map< 0x40022010 > { static constexpr const char * name_str = "Flash::PRGKEYR"; };
template<> struct address_map< 0x40022014 > { static constexpr const char * name_str = "Flash::OPTKEYR"; };
template<> struct address_map< 0x40022018 > { static constexpr const char * name_str = "Flash::SR"; };
template<> struct address_map< 0x4002201c > { static constexpr const char * name_str = "Flash::OBR"; };
template<> struct address_map< 0x40022020 > { static constexpr const char * name_str = "Flash::WRPR"; };
template<> struct address_map< 0x40023000 > { static constexpr const char * name_str = "CRC::DR"; };
template<> struct address_map< 0x40023004 > { static constexpr const char * name_str = "CRC::IDR"; };
template<> struct address_map< 0x40023008 > { static constexpr const char * name_str = "CRC::CR"; };
template<> struct address_map< 0x40023010 > { static constexpr const char * name_str = "CRC::INIT"; };
template<> struct address_map< 0x40023014 > { static constexpr const char * name_str = "CRC::POL"; };
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
template<> struct address_map< 0x4002404c > { static constexpr const char * name_str = "TSC::IOG7CR"; };
template<> struct address_map< 0x40024050 > { static constexpr const char * name_str = "TSC::IOG8CR"; };
template<> struct address_map< 0x40025000 > { static constexpr const char * name_str = "RNG::CR"; };
template<> struct address_map< 0x40025004 > { static constexpr const char * name_str = "RNG::SR"; };
template<> struct address_map< 0x40025008 > { static constexpr const char * name_str = "RNG::DR"; };
template<> struct address_map< 0x50000000 > { static constexpr const char * name_str = "GPIOA::MODER"; };
template<> struct address_map< 0x50000004 > { static constexpr const char * name_str = "GPIOA::OTYPER"; };
template<> struct address_map< 0x50000008 > { static constexpr const char * name_str = "GPIOA::OSPEEDR"; };
template<> struct address_map< 0x5000000c > { static constexpr const char * name_str = "GPIOA::PUPDR"; };
template<> struct address_map< 0x50000010 > { static constexpr const char * name_str = "GPIOA::IDR"; };
template<> struct address_map< 0x50000014 > { static constexpr const char * name_str = "GPIOA::ODR"; };
template<> struct address_map< 0x50000018 > { static constexpr const char * name_str = "GPIOA::BSRR"; };
template<> struct address_map< 0x5000001c > { static constexpr const char * name_str = "GPIOA::LCKR"; };
template<> struct address_map< 0x50000020 > { static constexpr const char * name_str = "GPIOA::AFRL"; };
template<> struct address_map< 0x50000024 > { static constexpr const char * name_str = "GPIOA::AFRH"; };
template<> struct address_map< 0x50000028 > { static constexpr const char * name_str = "GPIOA::BRR"; };
template<> struct address_map< 0x50000400 > { static constexpr const char * name_str = "GPIOB::MODER"; };
template<> struct address_map< 0x50000404 > { static constexpr const char * name_str = "GPIOB::OTYPER"; };
template<> struct address_map< 0x50000408 > { static constexpr const char * name_str = "GPIOB::OSPEEDR"; };
template<> struct address_map< 0x5000040c > { static constexpr const char * name_str = "GPIOB::PUPDR"; };
template<> struct address_map< 0x50000410 > { static constexpr const char * name_str = "GPIOB::IDR"; };
template<> struct address_map< 0x50000414 > { static constexpr const char * name_str = "GPIOB::ODR"; };
template<> struct address_map< 0x50000418 > { static constexpr const char * name_str = "GPIOB::BSRR"; };
template<> struct address_map< 0x5000041c > { static constexpr const char * name_str = "GPIOB::LCKR"; };
template<> struct address_map< 0x50000420 > { static constexpr const char * name_str = "GPIOB::AFRL"; };
template<> struct address_map< 0x50000424 > { static constexpr const char * name_str = "GPIOB::AFRH"; };
template<> struct address_map< 0x50000428 > { static constexpr const char * name_str = "GPIOB::BRR"; };
template<> struct address_map< 0x50000800 > { static constexpr const char * name_str = "GPIOC::MODER"; };
template<> struct address_map< 0x50000804 > { static constexpr const char * name_str = "GPIOC::OTYPER"; };
template<> struct address_map< 0x50000808 > { static constexpr const char * name_str = "GPIOC::OSPEEDR"; };
template<> struct address_map< 0x5000080c > { static constexpr const char * name_str = "GPIOC::PUPDR"; };
template<> struct address_map< 0x50000810 > { static constexpr const char * name_str = "GPIOC::IDR"; };
template<> struct address_map< 0x50000814 > { static constexpr const char * name_str = "GPIOC::ODR"; };
template<> struct address_map< 0x50000818 > { static constexpr const char * name_str = "GPIOC::BSRR"; };
template<> struct address_map< 0x5000081c > { static constexpr const char * name_str = "GPIOC::LCKR"; };
template<> struct address_map< 0x50000820 > { static constexpr const char * name_str = "GPIOC::AFRL"; };
template<> struct address_map< 0x50000824 > { static constexpr const char * name_str = "GPIOC::AFRH"; };
template<> struct address_map< 0x50000828 > { static constexpr const char * name_str = "GPIOC::BRR"; };
template<> struct address_map< 0x50000c00 > { static constexpr const char * name_str = "GPIOD::MODER"; };
template<> struct address_map< 0x50000c04 > { static constexpr const char * name_str = "GPIOD::OTYPER"; };
template<> struct address_map< 0x50000c08 > { static constexpr const char * name_str = "GPIOD::OSPEEDR"; };
template<> struct address_map< 0x50000c0c > { static constexpr const char * name_str = "GPIOD::PUPDR"; };
template<> struct address_map< 0x50000c10 > { static constexpr const char * name_str = "GPIOD::IDR"; };
template<> struct address_map< 0x50000c14 > { static constexpr const char * name_str = "GPIOD::ODR"; };
template<> struct address_map< 0x50000c18 > { static constexpr const char * name_str = "GPIOD::BSRR"; };
template<> struct address_map< 0x50000c1c > { static constexpr const char * name_str = "GPIOD::LCKR"; };
template<> struct address_map< 0x50000c20 > { static constexpr const char * name_str = "GPIOD::AFRL"; };
template<> struct address_map< 0x50000c24 > { static constexpr const char * name_str = "GPIOD::AFRH"; };
template<> struct address_map< 0x50000c28 > { static constexpr const char * name_str = "GPIOD::BRR"; };
template<> struct address_map< 0x50001c00 > { static constexpr const char * name_str = "GPIOH::MODER"; };
template<> struct address_map< 0x50001c04 > { static constexpr const char * name_str = "GPIOH::OTYPER"; };
template<> struct address_map< 0x50001c08 > { static constexpr const char * name_str = "GPIOH::OSPEEDR"; };
template<> struct address_map< 0x50001c0c > { static constexpr const char * name_str = "GPIOH::PUPDR"; };
template<> struct address_map< 0x50001c10 > { static constexpr const char * name_str = "GPIOH::IDR"; };
template<> struct address_map< 0x50001c14 > { static constexpr const char * name_str = "GPIOH::ODR"; };
template<> struct address_map< 0x50001c18 > { static constexpr const char * name_str = "GPIOH::BSRR"; };
template<> struct address_map< 0x50001c1c > { static constexpr const char * name_str = "GPIOH::LCKR"; };
template<> struct address_map< 0x50001c20 > { static constexpr const char * name_str = "GPIOH::AFRL"; };
template<> struct address_map< 0x50001c24 > { static constexpr const char * name_str = "GPIOH::AFRH"; };
template<> struct address_map< 0x50001c28 > { static constexpr const char * name_str = "GPIOH::BRR"; };
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
