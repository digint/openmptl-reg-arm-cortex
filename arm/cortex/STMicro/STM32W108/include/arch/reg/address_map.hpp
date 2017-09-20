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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
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

template<> struct address_map< 0x40000004 > { static constexpr const char * name_str = "PWR::PWR_DSLEEPCR1"; };
template<> struct address_map< 0x40000008 > { static constexpr const char * name_str = "CLK::CLK_SLEEPCR"; };
template<> struct address_map< 0x4000000c > { static constexpr const char * name_str = "CLK::CLK_LSI10KCR"; };
template<> struct address_map< 0x40000010 > { static constexpr const char * name_str = "CLK::CLK_LSI1KCR"; };
template<> struct address_map< 0x40000014 > { static constexpr const char * name_str = "PWR::PWR_DSLEEPCR2"; };
template<> struct address_map< 0x40000018 > { static constexpr const char * name_str = "PWR::PWR_VREGCR"; };
template<> struct address_map< 0x40000020 > { static constexpr const char * name_str = "PWR::PWR_WAKECR1"; };
template<> struct address_map< 0x40000024 > { static constexpr const char * name_str = "PWR::PWR_WAKECR2"; };
template<> struct address_map< 0x40000028 > { static constexpr const char * name_str = "PWR::PWR_WAKESR"; };
template<> struct address_map< 0x4000002c > { static constexpr const char * name_str = "RST::RST_SR"; };
template<> struct address_map< 0x40000034 > { static constexpr const char * name_str = "PWR::PWR_CPWRUPREQSR"; };
template<> struct address_map< 0x40000038 > { static constexpr const char * name_str = "PWR::PWR_CSYSPWRUPREQSR"; };
template<> struct address_map< 0x4000003c > { static constexpr const char * name_str = "PWR::PWR_CSYSPWRUPACKSR"; };
template<> struct address_map< 0x40000040 > { static constexpr const char * name_str = "PWR::PWR_CSYSPWRUPACKCR"; };
template<> struct address_map< 0x40002038 > { static constexpr const char * name_str = "MAC_TIM::MACTMR_CNTR"; };
template<> struct address_map< 0x4000208c > { static constexpr const char * name_str = "MAC_TIM::MACTMR_CR"; };
template<> struct address_map< 0x40004004 > { static constexpr const char * name_str = "CLK::CLK_HSECR1"; };
template<> struct address_map< 0x40004008 > { static constexpr const char * name_str = "CLK::CLK_HSICR"; };
template<> struct address_map< 0x40004010 > { static constexpr const char * name_str = "CLK::CLK_PERIODCR"; };
template<> struct address_map< 0x40004014 > { static constexpr const char * name_str = "CLK::CLK_PERIODSR"; };
template<> struct address_map< 0x40004018 > { static constexpr const char * name_str = "CLK::CLK_DITHERCR"; };
template<> struct address_map< 0x4000401c > { static constexpr const char * name_str = "CLK::CLK_HSECR2"; };
template<> struct address_map< 0x40004020 > { static constexpr const char * name_str = "CLK::CLK_CPUCR"; };
template<> struct address_map< 0x40004028 > { static constexpr const char * name_str = "GPIO_DBG::GPIO_PCTRACECR"; };
template<> struct address_map< 0x4000402c > { static constexpr const char * name_str = "FLASH::FLASH_CLKER"; };
template<> struct address_map< 0x40004030 > { static constexpr const char * name_str = "FLASH::FLASH_CLKSR"; };
template<> struct address_map< 0x40005000 > { static constexpr const char * name_str = "MEM::RAMPROTR1"; };
template<> struct address_map< 0x40005004 > { static constexpr const char * name_str = "MEM::RAMPROTR2"; };
template<> struct address_map< 0x40005008 > { static constexpr const char * name_str = "MEM::RAMPROTR3"; };
template<> struct address_map< 0x4000500c > { static constexpr const char * name_str = "MEM::RAMPROTR4"; };
template<> struct address_map< 0x40005010 > { static constexpr const char * name_str = "MEM::RAMPROTR5"; };
template<> struct address_map< 0x40005014 > { static constexpr const char * name_str = "MEM::RAMPROTR6"; };
template<> struct address_map< 0x40005018 > { static constexpr const char * name_str = "MEM::RAMPROTR7"; };
template<> struct address_map< 0x4000501c > { static constexpr const char * name_str = "MEM::RAMPROTR8"; };
template<> struct address_map< 0x40005020 > { static constexpr const char * name_str = "MEM::DMAPROTR1"; };
template<> struct address_map< 0x40005024 > { static constexpr const char * name_str = "MEM::DMAPROTR2"; };
template<> struct address_map< 0x40005028 > { static constexpr const char * name_str = "MEM::RAMCR"; };
template<> struct address_map< 0x40006000 > { static constexpr const char * name_str = "WDG::WDG_CR"; };
template<> struct address_map< 0x40006004 > { static constexpr const char * name_str = "WDG::WDG_KR"; };
template<> struct address_map< 0x40006008 > { static constexpr const char * name_str = "WDG::WDG_KICKSR"; };
template<> struct address_map< 0x4000600c > { static constexpr const char * name_str = "SLPTMR::SLPTMR_CR"; };
template<> struct address_map< 0x40006010 > { static constexpr const char * name_str = "SLPTMR::SLPTMR_CNTH"; };
template<> struct address_map< 0x40006014 > { static constexpr const char * name_str = "SLPTMR::SLPTMR_CNTL"; };
template<> struct address_map< 0x40006018 > { static constexpr const char * name_str = "SLPTMR::SLPTMR_CMPAH"; };
template<> struct address_map< 0x4000601c > { static constexpr const char * name_str = "SLPTMR::SLPTMR_CMPAL"; };
template<> struct address_map< 0x40006020 > { static constexpr const char * name_str = "SLPTMR::SLPTMR_CMPBH"; };
template<> struct address_map< 0x40006024 > { static constexpr const char * name_str = "SLPTMR::SLPTMR_CMPBL"; };
template<> struct address_map< 0x40008000 > { static constexpr const char * name_str = "FLASH::FLASH_ACR"; };
template<> struct address_map< 0x40008004 > { static constexpr const char * name_str = "FLASH::FLASH_KEYR"; };
template<> struct address_map< 0x40008008 > { static constexpr const char * name_str = "FLASH::FLASH_OPTKEYR"; };
template<> struct address_map< 0x4000800c > { static constexpr const char * name_str = "FLASH::FLASH_SR"; };
template<> struct address_map< 0x40008010 > { static constexpr const char * name_str = "FLASH::FLASH_CR"; };
template<> struct address_map< 0x40008014 > { static constexpr const char * name_str = "FLASH::FLASH_AR"; };
template<> struct address_map< 0x4000801c > { static constexpr const char * name_str = "FLASH::FLASH_OBR"; };
template<> struct address_map< 0x40008020 > { static constexpr const char * name_str = "FLASH::FLASH_WRPR"; };
template<> struct address_map< 0x4000a014 > { static constexpr const char * name_str = "SLPTMR::SLPTMR_ISR"; };
template<> struct address_map< 0x4000a020 > { static constexpr const char * name_str = "SLPTMR::SLPTMR_IFR"; };
template<> struct address_map< 0x4000a054 > { static constexpr const char * name_str = "SLPTMR::SLPTMR_IER"; };
template<> struct address_map< 0x4000a800 > { static constexpr const char * name_str = "TIM1::TIM1_ISR"; };
template<> struct address_map< 0x4000a804 > { static constexpr const char * name_str = "TIM2::TIM2_ISR"; };
template<> struct address_map< 0x4000a808 > { static constexpr const char * name_str = "SC1::SC1_ISR"; };
template<> struct address_map< 0x4000a80c > { static constexpr const char * name_str = "SC2::SC2_ISR"; };
template<> struct address_map< 0x4000a810 > { static constexpr const char * name_str = "ADC::ADC_ISR"; };
template<> struct address_map< 0x4000a814 > { static constexpr const char * name_str = "EXTI::EXTI_PR"; };
template<> struct address_map< 0x4000a818 > { static constexpr const char * name_str = "TIM1::TIM1_MISSR"; };
template<> struct address_map< 0x4000a81c > { static constexpr const char * name_str = "TIM2::TIM2_MISSR"; };
template<> struct address_map< 0x4000a840 > { static constexpr const char * name_str = "TIM1::TIM1_IER"; };
template<> struct address_map< 0x4000a844 > { static constexpr const char * name_str = "TIM2::TIM2_IER"; };
template<> struct address_map< 0x4000a848 > { static constexpr const char * name_str = "SC1::SC1_IER"; };
template<> struct address_map< 0x4000a84c > { static constexpr const char * name_str = "SC2::SC2_IER"; };
template<> struct address_map< 0x4000a850 > { static constexpr const char * name_str = "ADC::ADC_IER"; };
template<> struct address_map< 0x4000a854 > { static constexpr const char * name_str = "SC1::SC1_ICR"; };
template<> struct address_map< 0x4000a858 > { static constexpr const char * name_str = "SC2::SC2_ICR"; };
template<> struct address_map< 0x4000a860 > { static constexpr const char * name_str = "EXTI::EXTIA_TSR"; };
template<> struct address_map< 0x4000a864 > { static constexpr const char * name_str = "EXTI::EXTIB_TSR"; };
template<> struct address_map< 0x4000a868 > { static constexpr const char * name_str = "EXTI::EXTIC_TSR"; };
template<> struct address_map< 0x4000a86c > { static constexpr const char * name_str = "EXTI::EXTID_TSR"; };
template<> struct address_map< 0x4000b000 > { static constexpr const char * name_str = "GPIOA::GPIOA_CRL"; };
template<> struct address_map< 0x4000b004 > { static constexpr const char * name_str = "GPIOA::GPIOA_CRH"; };
template<> struct address_map< 0x4000b008 > { static constexpr const char * name_str = "GPIOA::GPIOA_IDR"; };
template<> struct address_map< 0x4000b00c > { static constexpr const char * name_str = "GPIOA::GPIOA_ODR"; };
template<> struct address_map< 0x4000b010 > { static constexpr const char * name_str = "GPIOA::GPIOA_BSR"; };
template<> struct address_map< 0x4000b014 > { static constexpr const char * name_str = "GPIOA::GPIOA_BRR"; };
template<> struct address_map< 0x4000b400 > { static constexpr const char * name_str = "GPIOB::GPIOB_CRL"; };
template<> struct address_map< 0x4000b404 > { static constexpr const char * name_str = "GPIOB::GPIOB_CRH"; };
template<> struct address_map< 0x4000b408 > { static constexpr const char * name_str = "GPIOB::GPIOB_IDR"; };
template<> struct address_map< 0x4000b40c > { static constexpr const char * name_str = "GPIOB::GPIOB_ODR"; };
template<> struct address_map< 0x4000b410 > { static constexpr const char * name_str = "GPIOB::GPIOB_BSR"; };
template<> struct address_map< 0x4000b414 > { static constexpr const char * name_str = "GPIOB::GPIOB_BRR"; };
template<> struct address_map< 0x4000b800 > { static constexpr const char * name_str = "GPIOC::GPIOC_CRL"; };
template<> struct address_map< 0x4000b804 > { static constexpr const char * name_str = "GPIOC::GPIOC_CRH"; };
template<> struct address_map< 0x4000b808 > { static constexpr const char * name_str = "GPIOC::GPIOC_IDR"; };
template<> struct address_map< 0x4000b80c > { static constexpr const char * name_str = "GPIOC::GPIOC_ODR"; };
template<> struct address_map< 0x4000b810 > { static constexpr const char * name_str = "GPIOC::GPIOC_BSR"; };
template<> struct address_map< 0x4000b814 > { static constexpr const char * name_str = "GPIOC::GPIOC_BRR"; };
template<> struct address_map< 0x4000bc00 > { static constexpr const char * name_str = "GPIO_DBG::GPIO_DBGCR"; };
template<> struct address_map< 0x4000bc04 > { static constexpr const char * name_str = "GPIO_DBG::GPIO_DBGSR"; };
template<> struct address_map< 0x4000bc08 > { static constexpr const char * name_str = "PWR::PWR_WAKEPAR"; };
template<> struct address_map< 0x4000bc0c > { static constexpr const char * name_str = "PWR::PWR_WAKEPBR"; };
template<> struct address_map< 0x4000bc10 > { static constexpr const char * name_str = "PWR::PWR_WAKEPCR"; };
template<> struct address_map< 0x4000bc14 > { static constexpr const char * name_str = "EXTI::EXTIC_CR"; };
template<> struct address_map< 0x4000bc18 > { static constexpr const char * name_str = "EXTI::EXTID_CR"; };
template<> struct address_map< 0x4000bc1c > { static constexpr const char * name_str = "PWR::PWR_WAKEFILTR"; };
template<> struct address_map< 0x4000c000 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMARXBEGADDAR"; };
template<> struct address_map< 0x4000c004 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMARXENDADDAR"; };
template<> struct address_map< 0x4000c008 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMARXBEGADDBR"; };
template<> struct address_map< 0x4000c00c > { static constexpr const char * name_str = "SC2_DMA::SC2_DMARXENDADDBR"; };
template<> struct address_map< 0x4000c010 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMATXBEGADDAR"; };
template<> struct address_map< 0x4000c014 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMATXENDADDAR"; };
template<> struct address_map< 0x4000c018 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMATXBEGADDBR"; };
template<> struct address_map< 0x4000c01c > { static constexpr const char * name_str = "SC2_DMA::SC2_DMATXENDADDBR"; };
template<> struct address_map< 0x4000c020 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMARXCNTAR"; };
template<> struct address_map< 0x4000c024 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMARXCNTBR"; };
template<> struct address_map< 0x4000c028 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMATXCNTR"; };
template<> struct address_map< 0x4000c02c > { static constexpr const char * name_str = "SC2_DMA::SC2_DMASR"; };
template<> struct address_map< 0x4000c030 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMACR"; };
template<> struct address_map< 0x4000c034 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMARXERRAR"; };
template<> struct address_map< 0x4000c038 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMARXERRBR"; };
template<> struct address_map< 0x4000c03c > { static constexpr const char * name_str = "SC2::SC2_DR"; };
template<> struct address_map< 0x4000c040 > { static constexpr const char * name_str = "SC2_SPI::SC2_SPISR"; };
template<> struct address_map< 0x4000c044 > { static constexpr const char * name_str = "SC2_I2C::SC2_I2CSR"; };
template<> struct address_map< 0x4000c04c > { static constexpr const char * name_str = "SC2_I2C::SC2_I2CCR1"; };
template<> struct address_map< 0x4000c050 > { static constexpr const char * name_str = "SC2_I2C::SC2_I2CCR2"; };
template<> struct address_map< 0x4000c054 > { static constexpr const char * name_str = "SC2::SC2_CR"; };
template<> struct address_map< 0x4000c058 > { static constexpr const char * name_str = "SC2_SPI::SC2_SPICR"; };
template<> struct address_map< 0x4000c060 > { static constexpr const char * name_str = "SC2::SC2_CRR1"; };
template<> struct address_map< 0x4000c064 > { static constexpr const char * name_str = "SC2::SC2_CRR2"; };
template<> struct address_map< 0x4000c070 > { static constexpr const char * name_str = "SC2_DMA::SC2_DMARXCNTSAVEDR"; };
template<> struct address_map< 0x4000c800 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMARXBEGADDAR"; };
template<> struct address_map< 0x4000c804 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMARXENDADDAR"; };
template<> struct address_map< 0x4000c808 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMARXBEGADDBR"; };
template<> struct address_map< 0x4000c80c > { static constexpr const char * name_str = "SC1_DMA::SC1_DMARXENDADDBR"; };
template<> struct address_map< 0x4000c810 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMATXBEGADDAR"; };
template<> struct address_map< 0x4000c814 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMATXENDADDAR"; };
template<> struct address_map< 0x4000c818 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMATXBEGADDBR"; };
template<> struct address_map< 0x4000c81c > { static constexpr const char * name_str = "SC1_DMA::SC1_DMATXENDADDBR"; };
template<> struct address_map< 0x4000c820 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMARXCNTAR"; };
template<> struct address_map< 0x4000c824 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMARXCNTBR"; };
template<> struct address_map< 0x4000c828 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMATXCNTR"; };
template<> struct address_map< 0x4000c82c > { static constexpr const char * name_str = "SC1_DMA::SC1_DMASR"; };
template<> struct address_map< 0x4000c830 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMACR"; };
template<> struct address_map< 0x4000c834 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMARXERRAR"; };
template<> struct address_map< 0x4000c838 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMARXERRBR"; };
template<> struct address_map< 0x4000c83c > { static constexpr const char * name_str = "SC1::SC1_DR"; };
template<> struct address_map< 0x4000c840 > { static constexpr const char * name_str = "SC1_SPI::SC1_SPISR"; };
template<> struct address_map< 0x4000c844 > { static constexpr const char * name_str = "SC1_I2C::SC1_I2CSR"; };
template<> struct address_map< 0x4000c848 > { static constexpr const char * name_str = "SC1_UART::SC1_UARTSR"; };
template<> struct address_map< 0x4000c84c > { static constexpr const char * name_str = "SC1_I2C::SC1_I2CCR1"; };
template<> struct address_map< 0x4000c850 > { static constexpr const char * name_str = "SC1_I2C::SC1_I2CCR2"; };
template<> struct address_map< 0x4000c854 > { static constexpr const char * name_str = "SC1::SC1_CR"; };
template<> struct address_map< 0x4000c858 > { static constexpr const char * name_str = "SC1_SPI::SC1_SPICR"; };
template<> struct address_map< 0x4000c85c > { static constexpr const char * name_str = "SC1_UART::SC1_UARTCR"; };
template<> struct address_map< 0x4000c860 > { static constexpr const char * name_str = "SC1::SC1_CRR1"; };
template<> struct address_map< 0x4000c864 > { static constexpr const char * name_str = "SC1::SC1_CRR2"; };
template<> struct address_map< 0x4000c868 > { static constexpr const char * name_str = "SC1_UART::SC1_UARTBRR1"; };
template<> struct address_map< 0x4000c86c > { static constexpr const char * name_str = "SC1_UART::SC1_UARTBRR2"; };
template<> struct address_map< 0x4000c870 > { static constexpr const char * name_str = "SC1_DMA::SC1_DMARXCNTSAVEDR"; };
template<> struct address_map< 0x4000d004 > { static constexpr const char * name_str = "ADC::ADC_CR"; };
template<> struct address_map< 0x4000d008 > { static constexpr const char * name_str = "ADC::ADC_OFFSETR"; };
template<> struct address_map< 0x4000d00c > { static constexpr const char * name_str = "ADC::ADC_GAINR"; };
template<> struct address_map< 0x4000d010 > { static constexpr const char * name_str = "ADC::ADC_DMACR"; };
template<> struct address_map< 0x4000d014 > { static constexpr const char * name_str = "ADC::ADC_DMASR"; };
template<> struct address_map< 0x4000d018 > { static constexpr const char * name_str = "ADC::ADC_DMAMSAR"; };
template<> struct address_map< 0x4000d01c > { static constexpr const char * name_str = "ADC::ADC_DMANDTR"; };
template<> struct address_map< 0x4000d020 > { static constexpr const char * name_str = "ADC::ADC_DMAMNAR"; };
template<> struct address_map< 0x4000d024 > { static constexpr const char * name_str = "ADC::ADC_DMACNDTR"; };
template<> struct address_map< 0x4000e000 > { static constexpr const char * name_str = "TIM1::TIM1_CR1"; };
template<> struct address_map< 0x4000e004 > { static constexpr const char * name_str = "TIM1::TIM1_CR2"; };
template<> struct address_map< 0x4000e008 > { static constexpr const char * name_str = "TIM1::TIM1_SMCR"; };
template<> struct address_map< 0x4000e014 > { static constexpr const char * name_str = "TIM1::TIM1_EGR"; };
template<> struct address_map< 0x4000e018 > { static constexpr const char * name_str = "TIM1::TIM1_CCMR1"; };
template<> struct address_map< 0x4000e01c > { static constexpr const char * name_str = "TIM1::TIM1_CCMR2"; };
template<> struct address_map< 0x4000e020 > { static constexpr const char * name_str = "TIM1::TIM1_CCER"; };
template<> struct address_map< 0x4000e024 > { static constexpr const char * name_str = "TIM1::TIM1_CNT"; };
template<> struct address_map< 0x4000e028 > { static constexpr const char * name_str = "TIM1::TIM1_PSC"; };
template<> struct address_map< 0x4000e02c > { static constexpr const char * name_str = "TIM1::TIM1_ARR"; };
template<> struct address_map< 0x4000e034 > { static constexpr const char * name_str = "TIM1::TIM1_CCR1"; };
template<> struct address_map< 0x4000e038 > { static constexpr const char * name_str = "TIM1::TIM1_CCR2"; };
template<> struct address_map< 0x4000e03c > { static constexpr const char * name_str = "TIM1::TIM1_CCR3"; };
template<> struct address_map< 0x4000e040 > { static constexpr const char * name_str = "TIM1::TIM1_CCR4"; };
template<> struct address_map< 0x4000e050 > { static constexpr const char * name_str = "TIM1::TIM1_OR"; };
template<> struct address_map< 0x4000f000 > { static constexpr const char * name_str = "TIM2::TIM2_CR1"; };
template<> struct address_map< 0x4000f004 > { static constexpr const char * name_str = "TIM2::TIM2_CR2"; };
template<> struct address_map< 0x4000f008 > { static constexpr const char * name_str = "TIM2::TIM2_SMCR"; };
template<> struct address_map< 0x4000f014 > { static constexpr const char * name_str = "TIM2::TIM2_EGR"; };
template<> struct address_map< 0x4000f018 > { static constexpr const char * name_str = "TIM2::TIM2_CCMR1"; };
template<> struct address_map< 0x4000f01c > { static constexpr const char * name_str = "TIM2::TIM2_CCMR2"; };
template<> struct address_map< 0x4000f020 > { static constexpr const char * name_str = "TIM2::TIM2_CCER"; };
template<> struct address_map< 0x4000f024 > { static constexpr const char * name_str = "TIM2::TIM2_CNT"; };
template<> struct address_map< 0x4000f028 > { static constexpr const char * name_str = "TIM2::TIM2_PSC"; };
template<> struct address_map< 0x4000f02c > { static constexpr const char * name_str = "TIM2::TIM2_ARR"; };
template<> struct address_map< 0x4000f034 > { static constexpr const char * name_str = "TIM2::TIM2_CCR1"; };
template<> struct address_map< 0x4000f038 > { static constexpr const char * name_str = "TIM2::TIM2_CCR2"; };
template<> struct address_map< 0x4000f03c > { static constexpr const char * name_str = "TIM2::TIM2_CCR3"; };
template<> struct address_map< 0x4000f040 > { static constexpr const char * name_str = "TIM2::TIM2_CCR4"; };
template<> struct address_map< 0x4000f050 > { static constexpr const char * name_str = "TIM2::TIM2_OR"; };
template<> struct address_map< 0xe000e004 > { static constexpr const char * name_str = "NVIC::ICTR"; };
template<> struct address_map< 0xe000e100 > { static constexpr const char * name_str = "NVIC::ISER0"; };
template<> struct address_map< 0xe000e180 > { static constexpr const char * name_str = "NVIC::ICER0"; };
template<> struct address_map< 0xe000e200 > { static constexpr const char * name_str = "NVIC::ISPR0"; };
template<> struct address_map< 0xe000e280 > { static constexpr const char * name_str = "NVIC::ICPR0"; };
template<> struct address_map< 0xe000e300 > { static constexpr const char * name_str = "NVIC::IABR0"; };
template<> struct address_map< 0xe000e400 > { static constexpr const char * name_str = "NVIC::IPR0"; };
template<> struct address_map< 0xe000e404 > { static constexpr const char * name_str = "NVIC::IPR1"; };
template<> struct address_map< 0xe000e408 > { static constexpr const char * name_str = "NVIC::IPR2"; };
template<> struct address_map< 0xe000e40c > { static constexpr const char * name_str = "NVIC::IPR3"; };
template<> struct address_map< 0xe000e410 > { static constexpr const char * name_str = "NVIC::IPR4"; };
template<> struct address_map< 0xe000ef00 > { static constexpr const char * name_str = "NVIC::STIR"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
