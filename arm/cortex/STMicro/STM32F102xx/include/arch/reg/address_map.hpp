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
//  Import from CMSIS-SVD: "STMicro/STM32F102xx.svd"
//
//  name: STM32F102xx
//  version: 1.1
//  description: STM32F102xx
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
template<> struct address_map< 0x40002800 > { static constexpr const char * name_str = "RTC::CRH"; };
template<> struct address_map< 0x40002804 > { static constexpr const char * name_str = "RTC::CRL"; };
template<> struct address_map< 0x40002808 > { static constexpr const char * name_str = "RTC::PRLH"; };
template<> struct address_map< 0x4000280c > { static constexpr const char * name_str = "RTC::PRLL"; };
template<> struct address_map< 0x40002810 > { static constexpr const char * name_str = "RTC::DIVH"; };
template<> struct address_map< 0x40002814 > { static constexpr const char * name_str = "RTC::DIVL"; };
template<> struct address_map< 0x40002818 > { static constexpr const char * name_str = "RTC::CNTH"; };
template<> struct address_map< 0x4000281c > { static constexpr const char * name_str = "RTC::CNTL"; };
template<> struct address_map< 0x40002820 > { static constexpr const char * name_str = "RTC::ALRH"; };
template<> struct address_map< 0x40002824 > { static constexpr const char * name_str = "RTC::ALRL"; };
template<> struct address_map< 0x40002c00 > { static constexpr const char * name_str = "WWDG::CR"; };
template<> struct address_map< 0x40002c04 > { static constexpr const char * name_str = "WWDG::CFR"; };
template<> struct address_map< 0x40002c08 > { static constexpr const char * name_str = "WWDG::SR"; };
template<> struct address_map< 0x40003000 > { static constexpr const char * name_str = "IWDG::KR"; };
template<> struct address_map< 0x40003004 > { static constexpr const char * name_str = "IWDG::PR"; };
template<> struct address_map< 0x40003008 > { static constexpr const char * name_str = "IWDG::RLR"; };
template<> struct address_map< 0x4000300c > { static constexpr const char * name_str = "IWDG::SR"; };
template<> struct address_map< 0x40004400 > { static constexpr const char * name_str = "USART2::SR"; };
template<> struct address_map< 0x40004404 > { static constexpr const char * name_str = "USART2::DR"; };
template<> struct address_map< 0x40004408 > { static constexpr const char * name_str = "USART2::BRR"; };
template<> struct address_map< 0x4000440c > { static constexpr const char * name_str = "USART2::CR1"; };
template<> struct address_map< 0x40004410 > { static constexpr const char * name_str = "USART2::CR2"; };
template<> struct address_map< 0x40004414 > { static constexpr const char * name_str = "USART2::CR3"; };
template<> struct address_map< 0x40004418 > { static constexpr const char * name_str = "USART2::GTPR"; };
template<> struct address_map< 0x40005400 > { static constexpr const char * name_str = "I2C1::CR1"; };
template<> struct address_map< 0x40005404 > { static constexpr const char * name_str = "I2C1::CR2"; };
template<> struct address_map< 0x40005408 > { static constexpr const char * name_str = "I2C1::OAR1"; };
template<> struct address_map< 0x4000540c > { static constexpr const char * name_str = "I2C1::OAR2"; };
template<> struct address_map< 0x40005410 > { static constexpr const char * name_str = "I2C1::DR"; };
template<> struct address_map< 0x40005414 > { static constexpr const char * name_str = "I2C1::SR1"; };
template<> struct address_map< 0x40005418 > { static constexpr const char * name_str = "I2C1::SR2"; };
template<> struct address_map< 0x4000541c > { static constexpr const char * name_str = "I2C1::CCR"; };
template<> struct address_map< 0x40005420 > { static constexpr const char * name_str = "I2C1::TRISE"; };
template<> struct address_map< 0x40006c04 > { static constexpr const char * name_str = "BKP::DR1"; };
template<> struct address_map< 0x40006c08 > { static constexpr const char * name_str = "BKP::DR2"; };
template<> struct address_map< 0x40006c0c > { static constexpr const char * name_str = "BKP::DR3"; };
template<> struct address_map< 0x40006c10 > { static constexpr const char * name_str = "BKP::DR4"; };
template<> struct address_map< 0x40006c14 > { static constexpr const char * name_str = "BKP::DR5"; };
template<> struct address_map< 0x40006c18 > { static constexpr const char * name_str = "BKP::DR6"; };
template<> struct address_map< 0x40006c1c > { static constexpr const char * name_str = "BKP::DR7"; };
template<> struct address_map< 0x40006c20 > { static constexpr const char * name_str = "BKP::DR8"; };
template<> struct address_map< 0x40006c24 > { static constexpr const char * name_str = "BKP::DR9"; };
template<> struct address_map< 0x40006c28 > { static constexpr const char * name_str = "BKP::DR10"; };
template<> struct address_map< 0x40006c2c > { static constexpr const char * name_str = "BKP::RTCCR"; };
template<> struct address_map< 0x40006c30 > { static constexpr const char * name_str = "BKP::CR"; };
template<> struct address_map< 0x40006c34 > { static constexpr const char * name_str = "BKP::CSR"; };
template<> struct address_map< 0x40006c40 > { static constexpr const char * name_str = "BKP::DR11"; };
template<> struct address_map< 0x40006c44 > { static constexpr const char * name_str = "BKP::DR12"; };
template<> struct address_map< 0x40006c48 > { static constexpr const char * name_str = "BKP::DR13"; };
template<> struct address_map< 0x40006c4c > { static constexpr const char * name_str = "BKP::DR14"; };
template<> struct address_map< 0x40006c50 > { static constexpr const char * name_str = "BKP::DR15"; };
template<> struct address_map< 0x40006c54 > { static constexpr const char * name_str = "BKP::DR16"; };
template<> struct address_map< 0x40006c58 > { static constexpr const char * name_str = "BKP::DR17"; };
template<> struct address_map< 0x40006c5c > { static constexpr const char * name_str = "BKP::DR18"; };
template<> struct address_map< 0x40006c60 > { static constexpr const char * name_str = "BKP::DR19"; };
template<> struct address_map< 0x40006c64 > { static constexpr const char * name_str = "BKP::DR20"; };
template<> struct address_map< 0x40006c68 > { static constexpr const char * name_str = "BKP::DR21"; };
template<> struct address_map< 0x40006c6c > { static constexpr const char * name_str = "BKP::DR22"; };
template<> struct address_map< 0x40006c70 > { static constexpr const char * name_str = "BKP::DR23"; };
template<> struct address_map< 0x40006c74 > { static constexpr const char * name_str = "BKP::DR24"; };
template<> struct address_map< 0x40006c78 > { static constexpr const char * name_str = "BKP::DR25"; };
template<> struct address_map< 0x40006c7c > { static constexpr const char * name_str = "BKP::DR26"; };
template<> struct address_map< 0x40006c80 > { static constexpr const char * name_str = "BKP::DR27"; };
template<> struct address_map< 0x40006c84 > { static constexpr const char * name_str = "BKP::DR28"; };
template<> struct address_map< 0x40006c88 > { static constexpr const char * name_str = "BKP::DR29"; };
template<> struct address_map< 0x40006c8c > { static constexpr const char * name_str = "BKP::DR30"; };
template<> struct address_map< 0x40006c90 > { static constexpr const char * name_str = "BKP::DR31"; };
template<> struct address_map< 0x40006c94 > { static constexpr const char * name_str = "BKP::DR32"; };
template<> struct address_map< 0x40006c98 > { static constexpr const char * name_str = "BKP::DR33"; };
template<> struct address_map< 0x40006c9c > { static constexpr const char * name_str = "BKP::DR34"; };
template<> struct address_map< 0x40006ca0 > { static constexpr const char * name_str = "BKP::DR35"; };
template<> struct address_map< 0x40006ca4 > { static constexpr const char * name_str = "BKP::DR36"; };
template<> struct address_map< 0x40006ca8 > { static constexpr const char * name_str = "BKP::DR37"; };
template<> struct address_map< 0x40006cac > { static constexpr const char * name_str = "BKP::DR38"; };
template<> struct address_map< 0x40006cb0 > { static constexpr const char * name_str = "BKP::DR39"; };
template<> struct address_map< 0x40006cb4 > { static constexpr const char * name_str = "BKP::DR40"; };
template<> struct address_map< 0x40006cb8 > { static constexpr const char * name_str = "BKP::DR41"; };
template<> struct address_map< 0x40006cbc > { static constexpr const char * name_str = "BKP::DR42"; };
template<> struct address_map< 0x40007000 > { static constexpr const char * name_str = "PWR::CR"; };
template<> struct address_map< 0x40007004 > { static constexpr const char * name_str = "PWR::CSR"; };
template<> struct address_map< 0x40010000 > { static constexpr const char * name_str = "AFIO::EVCR"; };
template<> struct address_map< 0x40010004 > { static constexpr const char * name_str = "AFIO::MAPR"; };
template<> struct address_map< 0x40010008 > { static constexpr const char * name_str = "AFIO::EXTICR1"; };
template<> struct address_map< 0x4001000c > { static constexpr const char * name_str = "AFIO::EXTICR2"; };
template<> struct address_map< 0x40010010 > { static constexpr const char * name_str = "AFIO::EXTICR3"; };
template<> struct address_map< 0x40010014 > { static constexpr const char * name_str = "AFIO::EXTICR4"; };
template<> struct address_map< 0x4001001c > { static constexpr const char * name_str = "AFIO::MAPR2"; };
template<> struct address_map< 0x40010400 > { static constexpr const char * name_str = "EXTI::IMR"; };
template<> struct address_map< 0x40010404 > { static constexpr const char * name_str = "EXTI::EMR"; };
template<> struct address_map< 0x40010408 > { static constexpr const char * name_str = "EXTI::RTSR"; };
template<> struct address_map< 0x4001040c > { static constexpr const char * name_str = "EXTI::FTSR"; };
template<> struct address_map< 0x40010410 > { static constexpr const char * name_str = "EXTI::SWIER"; };
template<> struct address_map< 0x40010414 > { static constexpr const char * name_str = "EXTI::PR"; };
template<> struct address_map< 0x40010800 > { static constexpr const char * name_str = "GPIOA::CRL"; };
template<> struct address_map< 0x40010804 > { static constexpr const char * name_str = "GPIOA::CRH"; };
template<> struct address_map< 0x40010808 > { static constexpr const char * name_str = "GPIOA::IDR"; };
template<> struct address_map< 0x4001080c > { static constexpr const char * name_str = "GPIOA::ODR"; };
template<> struct address_map< 0x40010810 > { static constexpr const char * name_str = "GPIOA::BSRR"; };
template<> struct address_map< 0x40010814 > { static constexpr const char * name_str = "GPIOA::BRR"; };
template<> struct address_map< 0x40010818 > { static constexpr const char * name_str = "GPIOA::LCKR"; };
template<> struct address_map< 0x40010c00 > { static constexpr const char * name_str = "GPIOB::CRL"; };
template<> struct address_map< 0x40010c04 > { static constexpr const char * name_str = "GPIOB::CRH"; };
template<> struct address_map< 0x40010c08 > { static constexpr const char * name_str = "GPIOB::IDR"; };
template<> struct address_map< 0x40010c0c > { static constexpr const char * name_str = "GPIOB::ODR"; };
template<> struct address_map< 0x40010c10 > { static constexpr const char * name_str = "GPIOB::BSRR"; };
template<> struct address_map< 0x40010c14 > { static constexpr const char * name_str = "GPIOB::BRR"; };
template<> struct address_map< 0x40010c18 > { static constexpr const char * name_str = "GPIOB::LCKR"; };
template<> struct address_map< 0x40011000 > { static constexpr const char * name_str = "GPIOC::CRL"; };
template<> struct address_map< 0x40011004 > { static constexpr const char * name_str = "GPIOC::CRH"; };
template<> struct address_map< 0x40011008 > { static constexpr const char * name_str = "GPIOC::IDR"; };
template<> struct address_map< 0x4001100c > { static constexpr const char * name_str = "GPIOC::ODR"; };
template<> struct address_map< 0x40011010 > { static constexpr const char * name_str = "GPIOC::BSRR"; };
template<> struct address_map< 0x40011014 > { static constexpr const char * name_str = "GPIOC::BRR"; };
template<> struct address_map< 0x40011018 > { static constexpr const char * name_str = "GPIOC::LCKR"; };
template<> struct address_map< 0x40011400 > { static constexpr const char * name_str = "GPIOD::CRL"; };
template<> struct address_map< 0x40011404 > { static constexpr const char * name_str = "GPIOD::CRH"; };
template<> struct address_map< 0x40011408 > { static constexpr const char * name_str = "GPIOD::IDR"; };
template<> struct address_map< 0x4001140c > { static constexpr const char * name_str = "GPIOD::ODR"; };
template<> struct address_map< 0x40011410 > { static constexpr const char * name_str = "GPIOD::BSRR"; };
template<> struct address_map< 0x40011414 > { static constexpr const char * name_str = "GPIOD::BRR"; };
template<> struct address_map< 0x40011418 > { static constexpr const char * name_str = "GPIOD::LCKR"; };
template<> struct address_map< 0x40012400 > { static constexpr const char * name_str = "ADC1::SR"; };
template<> struct address_map< 0x40012404 > { static constexpr const char * name_str = "ADC1::CR1"; };
template<> struct address_map< 0x40012408 > { static constexpr const char * name_str = "ADC1::CR2"; };
template<> struct address_map< 0x4001240c > { static constexpr const char * name_str = "ADC1::SMPR1"; };
template<> struct address_map< 0x40012410 > { static constexpr const char * name_str = "ADC1::SMPR2"; };
template<> struct address_map< 0x40012414 > { static constexpr const char * name_str = "ADC1::JOFR1"; };
template<> struct address_map< 0x40012418 > { static constexpr const char * name_str = "ADC1::JOFR2"; };
template<> struct address_map< 0x4001241c > { static constexpr const char * name_str = "ADC1::JOFR3"; };
template<> struct address_map< 0x40012420 > { static constexpr const char * name_str = "ADC1::JOFR4"; };
template<> struct address_map< 0x40012424 > { static constexpr const char * name_str = "ADC1::HTR"; };
template<> struct address_map< 0x40012428 > { static constexpr const char * name_str = "ADC1::LTR"; };
template<> struct address_map< 0x4001242c > { static constexpr const char * name_str = "ADC1::SQR1"; };
template<> struct address_map< 0x40012430 > { static constexpr const char * name_str = "ADC1::SQR2"; };
template<> struct address_map< 0x40012434 > { static constexpr const char * name_str = "ADC1::SQR3"; };
template<> struct address_map< 0x40012438 > { static constexpr const char * name_str = "ADC1::JSQR"; };
template<> struct address_map< 0x4001243c > { static constexpr const char * name_str = "ADC1::JDR1"; };
template<> struct address_map< 0x40012440 > { static constexpr const char * name_str = "ADC1::JDR2"; };
template<> struct address_map< 0x40012444 > { static constexpr const char * name_str = "ADC1::JDR3"; };
template<> struct address_map< 0x40012448 > { static constexpr const char * name_str = "ADC1::JDR4"; };
template<> struct address_map< 0x4001244c > { static constexpr const char * name_str = "ADC1::DR"; };
template<> struct address_map< 0x40013000 > { static constexpr const char * name_str = "SPI1::CR1"; };
template<> struct address_map< 0x40013004 > { static constexpr const char * name_str = "SPI1::CR2"; };
template<> struct address_map< 0x40013008 > { static constexpr const char * name_str = "SPI1::SR"; };
template<> struct address_map< 0x4001300c > { static constexpr const char * name_str = "SPI1::DR"; };
template<> struct address_map< 0x40013010 > { static constexpr const char * name_str = "SPI1::CRCPR"; };
template<> struct address_map< 0x40013014 > { static constexpr const char * name_str = "SPI1::RXCRCR"; };
template<> struct address_map< 0x40013018 > { static constexpr const char * name_str = "SPI1::TXCRCR"; };
template<> struct address_map< 0x4001301c > { static constexpr const char * name_str = "SPI1::I2SCFGR"; };
template<> struct address_map< 0x40013020 > { static constexpr const char * name_str = "SPI1::I2SPR"; };
template<> struct address_map< 0x40013800 > { static constexpr const char * name_str = "USART1::SR"; };
template<> struct address_map< 0x40013804 > { static constexpr const char * name_str = "USART1::DR"; };
template<> struct address_map< 0x40013808 > { static constexpr const char * name_str = "USART1::BRR"; };
template<> struct address_map< 0x4001380c > { static constexpr const char * name_str = "USART1::CR1"; };
template<> struct address_map< 0x40013810 > { static constexpr const char * name_str = "USART1::CR2"; };
template<> struct address_map< 0x40013814 > { static constexpr const char * name_str = "USART1::CR3"; };
template<> struct address_map< 0x40013818 > { static constexpr const char * name_str = "USART1::GTPR"; };
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
template<> struct address_map< 0x40020400 > { static constexpr const char * name_str = "DMA2::ISR"; };
template<> struct address_map< 0x40020404 > { static constexpr const char * name_str = "DMA2::IFCR"; };
template<> struct address_map< 0x40020408 > { static constexpr const char * name_str = "DMA2::CCR1"; };
template<> struct address_map< 0x4002040c > { static constexpr const char * name_str = "DMA2::CNDTR1"; };
template<> struct address_map< 0x40020410 > { static constexpr const char * name_str = "DMA2::CPAR1"; };
template<> struct address_map< 0x40020414 > { static constexpr const char * name_str = "DMA2::CMAR1"; };
template<> struct address_map< 0x4002041c > { static constexpr const char * name_str = "DMA2::CCR2"; };
template<> struct address_map< 0x40020420 > { static constexpr const char * name_str = "DMA2::CNDTR2"; };
template<> struct address_map< 0x40020424 > { static constexpr const char * name_str = "DMA2::CPAR2"; };
template<> struct address_map< 0x40020428 > { static constexpr const char * name_str = "DMA2::CMAR2"; };
template<> struct address_map< 0x40020430 > { static constexpr const char * name_str = "DMA2::CCR3"; };
template<> struct address_map< 0x40020434 > { static constexpr const char * name_str = "DMA2::CNDTR3"; };
template<> struct address_map< 0x40020438 > { static constexpr const char * name_str = "DMA2::CPAR3"; };
template<> struct address_map< 0x4002043c > { static constexpr const char * name_str = "DMA2::CMAR3"; };
template<> struct address_map< 0x40020444 > { static constexpr const char * name_str = "DMA2::CCR4"; };
template<> struct address_map< 0x40020448 > { static constexpr const char * name_str = "DMA2::CNDTR4"; };
template<> struct address_map< 0x4002044c > { static constexpr const char * name_str = "DMA2::CPAR4"; };
template<> struct address_map< 0x40020450 > { static constexpr const char * name_str = "DMA2::CMAR4"; };
template<> struct address_map< 0x40020458 > { static constexpr const char * name_str = "DMA2::CCR5"; };
template<> struct address_map< 0x4002045c > { static constexpr const char * name_str = "DMA2::CNDTR5"; };
template<> struct address_map< 0x40020460 > { static constexpr const char * name_str = "DMA2::CPAR5"; };
template<> struct address_map< 0x40020464 > { static constexpr const char * name_str = "DMA2::CMAR5"; };
template<> struct address_map< 0x4002046c > { static constexpr const char * name_str = "DMA2::CCR6"; };
template<> struct address_map< 0x40020470 > { static constexpr const char * name_str = "DMA2::CNDTR6"; };
template<> struct address_map< 0x40020474 > { static constexpr const char * name_str = "DMA2::CPAR6"; };
template<> struct address_map< 0x40020478 > { static constexpr const char * name_str = "DMA2::CMAR6"; };
template<> struct address_map< 0x40020480 > { static constexpr const char * name_str = "DMA2::CCR7"; };
template<> struct address_map< 0x40020484 > { static constexpr const char * name_str = "DMA2::CNDTR7"; };
template<> struct address_map< 0x40020488 > { static constexpr const char * name_str = "DMA2::CPAR7"; };
template<> struct address_map< 0x4002048c > { static constexpr const char * name_str = "DMA2::CMAR7"; };
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
template<> struct address_map< 0x40022000 > { static constexpr const char * name_str = "FLASH::ACR"; };
template<> struct address_map< 0x40022004 > { static constexpr const char * name_str = "FLASH::KEYR"; };
template<> struct address_map< 0x40022008 > { static constexpr const char * name_str = "FLASH::OPTKEYR"; };
template<> struct address_map< 0x4002200c > { static constexpr const char * name_str = "FLASH::SR"; };
template<> struct address_map< 0x40022010 > { static constexpr const char * name_str = "FLASH::CR"; };
template<> struct address_map< 0x40022014 > { static constexpr const char * name_str = "FLASH::AR"; };
template<> struct address_map< 0x4002201c > { static constexpr const char * name_str = "FLASH::OBR"; };
template<> struct address_map< 0x40022020 > { static constexpr const char * name_str = "FLASH::WRPR"; };
template<> struct address_map< 0x40023000 > { static constexpr const char * name_str = "CRC::DR"; };
template<> struct address_map< 0x40023004 > { static constexpr const char * name_str = "CRC::IDR"; };
template<> struct address_map< 0x40023008 > { static constexpr const char * name_str = "CRC::CR"; };
template<> struct address_map< 0xe000e004 > { static constexpr const char * name_str = "NVIC::ICTR"; };
template<> struct address_map< 0xe000e100 > { static constexpr const char * name_str = "NVIC::ISER0"; };
template<> struct address_map< 0xe000e104 > { static constexpr const char * name_str = "NVIC::ISER1"; };
template<> struct address_map< 0xe000e180 > { static constexpr const char * name_str = "NVIC::ICER0"; };
template<> struct address_map< 0xe000e184 > { static constexpr const char * name_str = "NVIC::ICER1"; };
template<> struct address_map< 0xe000e200 > { static constexpr const char * name_str = "NVIC::ISPR0"; };
template<> struct address_map< 0xe000e204 > { static constexpr const char * name_str = "NVIC::ISPR1"; };
template<> struct address_map< 0xe000e280 > { static constexpr const char * name_str = "NVIC::ICPR0"; };
template<> struct address_map< 0xe000e284 > { static constexpr const char * name_str = "NVIC::ICPR1"; };
template<> struct address_map< 0xe000e300 > { static constexpr const char * name_str = "NVIC::IABR0"; };
template<> struct address_map< 0xe000e304 > { static constexpr const char * name_str = "NVIC::IABR1"; };
template<> struct address_map< 0xe000e400 > { static constexpr const char * name_str = "NVIC::IPR0"; };
template<> struct address_map< 0xe000e404 > { static constexpr const char * name_str = "NVIC::IPR1"; };
template<> struct address_map< 0xe000e408 > { static constexpr const char * name_str = "NVIC::IPR2"; };
template<> struct address_map< 0xe000e40c > { static constexpr const char * name_str = "NVIC::IPR3"; };
template<> struct address_map< 0xe000e410 > { static constexpr const char * name_str = "NVIC::IPR4"; };
template<> struct address_map< 0xe000e414 > { static constexpr const char * name_str = "NVIC::IPR5"; };
template<> struct address_map< 0xe000e418 > { static constexpr const char * name_str = "NVIC::IPR6"; };
template<> struct address_map< 0xe000e41c > { static constexpr const char * name_str = "NVIC::IPR7"; };
template<> struct address_map< 0xe000e420 > { static constexpr const char * name_str = "NVIC::IPR8"; };
template<> struct address_map< 0xe000e424 > { static constexpr const char * name_str = "NVIC::IPR9"; };
template<> struct address_map< 0xe000e428 > { static constexpr const char * name_str = "NVIC::IPR10"; };
template<> struct address_map< 0xe000e42c > { static constexpr const char * name_str = "NVIC::IPR11"; };
template<> struct address_map< 0xe000e430 > { static constexpr const char * name_str = "NVIC::IPR12"; };
template<> struct address_map< 0xe000e434 > { static constexpr const char * name_str = "NVIC::IPR13"; };
template<> struct address_map< 0xe000e438 > { static constexpr const char * name_str = "NVIC::IPR14"; };
template<> struct address_map< 0xe000ef00 > { static constexpr const char * name_str = "NVIC::STIR"; };
template<> struct address_map< 0xe0042000 > { static constexpr const char * name_str = "DBG::IDCODE"; };
template<> struct address_map< 0xe0042004 > { static constexpr const char * name_str = "DBG::CR"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
