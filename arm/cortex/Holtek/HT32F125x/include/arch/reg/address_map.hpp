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
//  Import from CMSIS-SVD: "Holtek/ht32f125x.svd"
//
//  name: HT32F125x
//  version: 1.0
//  description: This is the description for the Holtek HT32F125x
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

template<> struct address_map< 0x40000000 > { static constexpr const char * name_str = "USART::USART_TBR"; };  /* svd2hpp: duplicate address for: USART::USART_RBR, USART::USART_TBR */
template<> struct address_map< 0x40000004 > { static constexpr const char * name_str = "USART::USART_IER"; };
template<> struct address_map< 0x40000008 > { static constexpr const char * name_str = "USART::USART_IIR"; };
template<> struct address_map< 0x4000000c > { static constexpr const char * name_str = "USART::USART_FCR"; };
template<> struct address_map< 0x40000010 > { static constexpr const char * name_str = "USART::USART_LCR"; };
template<> struct address_map< 0x40000014 > { static constexpr const char * name_str = "USART::USART_MODCR"; };
template<> struct address_map< 0x40000018 > { static constexpr const char * name_str = "USART::USART_LSR"; };
template<> struct address_map< 0x4000001c > { static constexpr const char * name_str = "USART::USART_MODSR"; };
template<> struct address_map< 0x40000020 > { static constexpr const char * name_str = "USART::USART_TPR"; };
template<> struct address_map< 0x40000024 > { static constexpr const char * name_str = "USART::USART_MDR"; };
template<> struct address_map< 0x40000028 > { static constexpr const char * name_str = "USART::USART_IrDACR"; };
template<> struct address_map< 0x4000002c > { static constexpr const char * name_str = "USART::USART_RS485CR"; };
template<> struct address_map< 0x40000030 > { static constexpr const char * name_str = "USART::USART_SYNCR"; };
template<> struct address_map< 0x40000034 > { static constexpr const char * name_str = "USART::USART_DEGTSTR"; };
template<> struct address_map< 0x40000038 > { static constexpr const char * name_str = "USART::USART_DLR"; };
template<> struct address_map< 0x40004000 > { static constexpr const char * name_str = "SPI::SPI_CR0"; };
template<> struct address_map< 0x40004004 > { static constexpr const char * name_str = "SPI::SPI_CR1"; };
template<> struct address_map< 0x40004008 > { static constexpr const char * name_str = "SPI::SPI_IER"; };
template<> struct address_map< 0x4000400c > { static constexpr const char * name_str = "SPI::SPI_CPR"; };
template<> struct address_map< 0x40004010 > { static constexpr const char * name_str = "SPI::SPI_DR"; };
template<> struct address_map< 0x40004014 > { static constexpr const char * name_str = "SPI::SPI_SR"; };
template<> struct address_map< 0x40004018 > { static constexpr const char * name_str = "SPI::SPI_FCR"; };
template<> struct address_map< 0x4000401c > { static constexpr const char * name_str = "SPI::SPI_FSR"; };
template<> struct address_map< 0x40004020 > { static constexpr const char * name_str = "SPI::SPI_FTOCR"; };
template<> struct address_map< 0x40010004 > { static constexpr const char * name_str = "ADC::ADC_RST"; };
template<> struct address_map< 0x40010008 > { static constexpr const char * name_str = "ADC::ADC_CONV"; };
template<> struct address_map< 0x40010010 > { static constexpr const char * name_str = "ADC::ADC_LST0"; };
template<> struct address_map< 0x40010014 > { static constexpr const char * name_str = "ADC::ADC_LST1"; };
template<> struct address_map< 0x40010070 > { static constexpr const char * name_str = "ADC::ADC_STR0"; };
template<> struct address_map< 0x40010074 > { static constexpr const char * name_str = "ADC::ADC_STR1"; };
template<> struct address_map< 0x40010078 > { static constexpr const char * name_str = "ADC::ADC_STR2"; };
template<> struct address_map< 0x4001007c > { static constexpr const char * name_str = "ADC::ADC_STR3"; };
template<> struct address_map< 0x40010080 > { static constexpr const char * name_str = "ADC::ADC_STR4"; };
template<> struct address_map< 0x40010084 > { static constexpr const char * name_str = "ADC::ADC_STR5"; };
template<> struct address_map< 0x40010088 > { static constexpr const char * name_str = "ADC::ADC_STR6"; };
template<> struct address_map< 0x4001008c > { static constexpr const char * name_str = "ADC::ADC_STR7"; };
template<> struct address_map< 0x400100b0 > { static constexpr const char * name_str = "ADC::ADC_DR0"; };
template<> struct address_map< 0x400100b4 > { static constexpr const char * name_str = "ADC::ADC_DR1"; };
template<> struct address_map< 0x400100b8 > { static constexpr const char * name_str = "ADC::ADC_DR2"; };
template<> struct address_map< 0x400100bc > { static constexpr const char * name_str = "ADC::ADC_DR3"; };
template<> struct address_map< 0x400100c0 > { static constexpr const char * name_str = "ADC::ADC_DR4"; };
template<> struct address_map< 0x400100c4 > { static constexpr const char * name_str = "ADC::ADC_DR5"; };
template<> struct address_map< 0x400100c8 > { static constexpr const char * name_str = "ADC::ADC_DR6"; };
template<> struct address_map< 0x400100cc > { static constexpr const char * name_str = "ADC::ADC_DR7"; };
template<> struct address_map< 0x40010100 > { static constexpr const char * name_str = "ADC::ADC_TCR"; };
template<> struct address_map< 0x40010104 > { static constexpr const char * name_str = "ADC::ADC_TSR"; };
template<> struct address_map< 0x40010120 > { static constexpr const char * name_str = "ADC::ADC_WCR"; };
template<> struct address_map< 0x40010124 > { static constexpr const char * name_str = "ADC::ADC_LTR"; };
template<> struct address_map< 0x40010128 > { static constexpr const char * name_str = "ADC::ADC_UTR"; };
template<> struct address_map< 0x40010130 > { static constexpr const char * name_str = "ADC::ADC_IMR"; };
template<> struct address_map< 0x40010134 > { static constexpr const char * name_str = "ADC::ADC_IRAW"; };
template<> struct address_map< 0x40010138 > { static constexpr const char * name_str = "ADC::ADC_IMASK"; };
template<> struct address_map< 0x4001013c > { static constexpr const char * name_str = "ADC::ADC_ICLR"; };
template<> struct address_map< 0x40018000 > { static constexpr const char * name_str = "OPACMP::OPACR0"; };
template<> struct address_map< 0x40018004 > { static constexpr const char * name_str = "OPACMP::OFVCR0"; };
template<> struct address_map< 0x40018008 > { static constexpr const char * name_str = "OPACMP::CMPIER0"; };
template<> struct address_map< 0x4001800c > { static constexpr const char * name_str = "OPACMP::CMPRSR0"; };
template<> struct address_map< 0x40018010 > { static constexpr const char * name_str = "OPACMP::CMPISR0"; };
template<> struct address_map< 0x40018014 > { static constexpr const char * name_str = "OPACMP::CMPICLR0"; };
template<> struct address_map< 0x40018100 > { static constexpr const char * name_str = "OPACMP::OPACR1"; };
template<> struct address_map< 0x40018104 > { static constexpr const char * name_str = "OPACMP::OFVCR1"; };
template<> struct address_map< 0x40018108 > { static constexpr const char * name_str = "OPACMP::CMPIER1"; };
template<> struct address_map< 0x4001810c > { static constexpr const char * name_str = "OPACMP::CMPRSR1"; };
template<> struct address_map< 0x40018110 > { static constexpr const char * name_str = "OPACMP::CMPISR1"; };
template<> struct address_map< 0x40018114 > { static constexpr const char * name_str = "OPACMP::CMPICLR1"; };
template<> struct address_map< 0x4001a000 > { static constexpr const char * name_str = "GPIOA::GPIOA_DIRCR"; };
template<> struct address_map< 0x4001a004 > { static constexpr const char * name_str = "GPIOA::GPIOA_INER"; };
template<> struct address_map< 0x4001a008 > { static constexpr const char * name_str = "GPIOA::GPIOA_PUR"; };
template<> struct address_map< 0x4001a00c > { static constexpr const char * name_str = "GPIOA::GPIOA_PDR"; };
template<> struct address_map< 0x4001a010 > { static constexpr const char * name_str = "GPIOA::GPIOA_ODR"; };
template<> struct address_map< 0x4001a014 > { static constexpr const char * name_str = "GPIOA::GPIOA_DRVR"; };
template<> struct address_map< 0x4001a018 > { static constexpr const char * name_str = "GPIOA::GPIOA_LOCKR"; };
template<> struct address_map< 0x4001a01c > { static constexpr const char * name_str = "GPIOA::GPIOA_DINR"; };
template<> struct address_map< 0x4001a020 > { static constexpr const char * name_str = "GPIOA::GPIOA_DOUTR"; };
template<> struct address_map< 0x4001a024 > { static constexpr const char * name_str = "GPIOA::GPIOA_SRR"; };
template<> struct address_map< 0x4001a028 > { static constexpr const char * name_str = "GPIOA::GPIOA_RR"; };
template<> struct address_map< 0x4001b000 > { static constexpr const char * name_str = "GPIOB::GPIOB_DIRCR"; };
template<> struct address_map< 0x4001b004 > { static constexpr const char * name_str = "GPIOB::GPIOB_INER"; };
template<> struct address_map< 0x4001b008 > { static constexpr const char * name_str = "GPIOB::GPIOB_PUR"; };
template<> struct address_map< 0x4001b00c > { static constexpr const char * name_str = "GPIOB::GPIOB_PDR"; };
template<> struct address_map< 0x4001b010 > { static constexpr const char * name_str = "GPIOB::GPIOB_ODR"; };
template<> struct address_map< 0x4001b014 > { static constexpr const char * name_str = "GPIOB::GPIOB_DRVR"; };
template<> struct address_map< 0x4001b018 > { static constexpr const char * name_str = "GPIOB::GPIOB_LOCKR"; };
template<> struct address_map< 0x4001b01c > { static constexpr const char * name_str = "GPIOB::GPIOB_DINR"; };
template<> struct address_map< 0x4001b020 > { static constexpr const char * name_str = "GPIOB::GPIOB_DOUTR"; };
template<> struct address_map< 0x4001b024 > { static constexpr const char * name_str = "GPIOB::GPIOB_SRR"; };
template<> struct address_map< 0x4001b028 > { static constexpr const char * name_str = "GPIOB::GPIOB_RR"; };
template<> struct address_map< 0x40022000 > { static constexpr const char * name_str = "AFIO::AFIO_ESSR0"; };
template<> struct address_map< 0x40022004 > { static constexpr const char * name_str = "AFIO::AFIO_ESSR1"; };
template<> struct address_map< 0x40022008 > { static constexpr const char * name_str = "AFIO::AFIO_GPACFGR"; };
template<> struct address_map< 0x4002200c > { static constexpr const char * name_str = "AFIO::AFIO_GPBCFGR"; };
template<> struct address_map< 0x40024000 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR0"; };
template<> struct address_map< 0x40024004 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR1"; };
template<> struct address_map< 0x40024008 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR2"; };
template<> struct address_map< 0x4002400c > { static constexpr const char * name_str = "EXTI::EXTI_CFGR3"; };
template<> struct address_map< 0x40024010 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR4"; };
template<> struct address_map< 0x40024014 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR5"; };
template<> struct address_map< 0x40024018 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR6"; };
template<> struct address_map< 0x4002401c > { static constexpr const char * name_str = "EXTI::EXTI_CFGR7"; };
template<> struct address_map< 0x40024020 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR8"; };
template<> struct address_map< 0x40024024 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR9"; };
template<> struct address_map< 0x40024028 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR10"; };
template<> struct address_map< 0x4002402c > { static constexpr const char * name_str = "EXTI::EXTI_CFGR11"; };
template<> struct address_map< 0x40024030 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR12"; };
template<> struct address_map< 0x40024034 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR13"; };
template<> struct address_map< 0x40024038 > { static constexpr const char * name_str = "EXTI::EXTI_CFGR14"; };
template<> struct address_map< 0x4002403c > { static constexpr const char * name_str = "EXTI::EXTI_CFGR15"; };
template<> struct address_map< 0x40024040 > { static constexpr const char * name_str = "EXTI::EXTI_CR"; };
template<> struct address_map< 0x40024044 > { static constexpr const char * name_str = "EXTI::EXTI_EDGEFLGR"; };
template<> struct address_map< 0x40024048 > { static constexpr const char * name_str = "EXTI::EXTI_EDGESR"; };
template<> struct address_map< 0x4002404c > { static constexpr const char * name_str = "EXTI::EXTI_SSCR"; };
template<> struct address_map< 0x40024050 > { static constexpr const char * name_str = "EXTI::EXTI_WAKUPCR"; };
template<> struct address_map< 0x40024054 > { static constexpr const char * name_str = "EXTI::EXTI_WAKUPPOLR"; };
template<> struct address_map< 0x40024058 > { static constexpr const char * name_str = "EXTI::EXTI_WAKUPFLG"; };
template<> struct address_map< 0x40048000 > { static constexpr const char * name_str = "I2C::I2C_CR"; };
template<> struct address_map< 0x40048004 > { static constexpr const char * name_str = "I2C::I2C_IER"; };
template<> struct address_map< 0x40048008 > { static constexpr const char * name_str = "I2C::I2C_ADDR"; };
template<> struct address_map< 0x4004800c > { static constexpr const char * name_str = "I2C::I2C_SR"; };
template<> struct address_map< 0x40048010 > { static constexpr const char * name_str = "I2C::I2C_SHPGR"; };
template<> struct address_map< 0x40048014 > { static constexpr const char * name_str = "I2C::I2C_SLPGR"; };
template<> struct address_map< 0x40048018 > { static constexpr const char * name_str = "I2C::I2C_DR"; };
template<> struct address_map< 0x4004801c > { static constexpr const char * name_str = "I2C::I2C_TAR"; };
template<> struct address_map< 0x40068000 > { static constexpr const char * name_str = "WDT::WDT_CR"; };
template<> struct address_map< 0x40068004 > { static constexpr const char * name_str = "WDT::WDT_MR0"; };
template<> struct address_map< 0x40068008 > { static constexpr const char * name_str = "WDT::WDT_MR1"; };
template<> struct address_map< 0x4006800c > { static constexpr const char * name_str = "WDT::WDT_SR"; };
template<> struct address_map< 0x40068010 > { static constexpr const char * name_str = "WDT::WDT_PR"; };
template<> struct address_map< 0x4006a000 > { static constexpr const char * name_str = "RTC::RTC_CNT"; };
template<> struct address_map< 0x4006a004 > { static constexpr const char * name_str = "RTC::RTC_CMP"; };
template<> struct address_map< 0x4006a008 > { static constexpr const char * name_str = "RTC::RTC_CR"; };
template<> struct address_map< 0x4006a00c > { static constexpr const char * name_str = "RTC::RTC_SR"; };
template<> struct address_map< 0x4006a010 > { static constexpr const char * name_str = "RTC::RTC_IWEN"; };
template<> struct address_map< 0x4006a100 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKSR"; };
template<> struct address_map< 0x4006a104 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKCR"; };
template<> struct address_map< 0x4006a108 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKTEST"; };
template<> struct address_map< 0x4006a10c > { static constexpr const char * name_str = "PWRCU::PWRCU_HSIRCR"; };
template<> struct address_map< 0x4006a110 > { static constexpr const char * name_str = "PWRCU::PWRCU_LVDCSR"; };
template<> struct address_map< 0x4006a200 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG0"; };
template<> struct address_map< 0x4006a204 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG1"; };
template<> struct address_map< 0x4006a208 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG2"; };
template<> struct address_map< 0x4006a20c > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG3"; };
template<> struct address_map< 0x4006a210 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG4"; };
template<> struct address_map< 0x4006a214 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG5"; };
template<> struct address_map< 0x4006a218 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG6"; };
template<> struct address_map< 0x4006a21c > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG7"; };
template<> struct address_map< 0x4006a220 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG8"; };
template<> struct address_map< 0x4006a224 > { static constexpr const char * name_str = "PWRCU::PWRCU_BAKREG9"; };
template<> struct address_map< 0x4006e000 > { static constexpr const char * name_str = "GPTM0::GPTM0_CNTCFR"; };
template<> struct address_map< 0x4006e004 > { static constexpr const char * name_str = "GPTM0::GPTM0_MDCFR"; };
template<> struct address_map< 0x4006e008 > { static constexpr const char * name_str = "GPTM0::GPTM0_TRCFR"; };
template<> struct address_map< 0x4006e010 > { static constexpr const char * name_str = "GPTM0::GPTM0_CTR"; };
template<> struct address_map< 0x4006e020 > { static constexpr const char * name_str = "GPTM0::GPTM0_CH0ICFR"; };
template<> struct address_map< 0x4006e024 > { static constexpr const char * name_str = "GPTM0::GPTM0_CH1ICFR"; };
template<> struct address_map< 0x4006e028 > { static constexpr const char * name_str = "GPTM0::GPTM0_CH2ICFR"; };
template<> struct address_map< 0x4006e02c > { static constexpr const char * name_str = "GPTM0::GPTM0_CH3ICFR"; };
template<> struct address_map< 0x4006e040 > { static constexpr const char * name_str = "GPTM0::GPTM0_CH0OCFR"; };
template<> struct address_map< 0x4006e044 > { static constexpr const char * name_str = "GPTM0::GPTM0_CH1OCFR"; };
template<> struct address_map< 0x4006e048 > { static constexpr const char * name_str = "GPTM0::GPTM0_CH2OCFR"; };
template<> struct address_map< 0x4006e04c > { static constexpr const char * name_str = "GPTM0::GPTM0_CH3OCFR"; };
template<> struct address_map< 0x4006e050 > { static constexpr const char * name_str = "GPTM0::GPTM0_CHCTR"; };
template<> struct address_map< 0x4006e054 > { static constexpr const char * name_str = "GPTM0::GPTM0_CHPOLR"; };
template<> struct address_map< 0x4006e074 > { static constexpr const char * name_str = "GPTM0::GPTM0_ICTR"; };
template<> struct address_map< 0x4006e078 > { static constexpr const char * name_str = "GPTM0::GPTM0_EVGR"; };
template<> struct address_map< 0x4006e07c > { static constexpr const char * name_str = "GPTM0::GPTM0_INTSR"; };
template<> struct address_map< 0x4006e080 > { static constexpr const char * name_str = "GPTM0::GPTM0_CNTR"; };
template<> struct address_map< 0x4006e084 > { static constexpr const char * name_str = "GPTM0::GPTM0_PSCR"; };
template<> struct address_map< 0x4006e088 > { static constexpr const char * name_str = "GPTM0::GPTM0_CRR"; };
template<> struct address_map< 0x4006e090 > { static constexpr const char * name_str = "GPTM0::GPTM0_CH0CCR"; };
template<> struct address_map< 0x4006e094 > { static constexpr const char * name_str = "GPTM0::GPTM0_CH1CCR"; };
template<> struct address_map< 0x4006e098 > { static constexpr const char * name_str = "GPTM0::GPTM0_CH2CCR"; };
template<> struct address_map< 0x4006e09c > { static constexpr const char * name_str = "GPTM0::GPTM0_CH3CCR"; };
template<> struct address_map< 0x4006f000 > { static constexpr const char * name_str = "GPTM1::GPTM1_CNTCFR"; };
template<> struct address_map< 0x4006f004 > { static constexpr const char * name_str = "GPTM1::GPTM1_MDCFR"; };
template<> struct address_map< 0x4006f008 > { static constexpr const char * name_str = "GPTM1::GPTM1_TRCFR"; };
template<> struct address_map< 0x4006f010 > { static constexpr const char * name_str = "GPTM1::GPTM1_CTR"; };
template<> struct address_map< 0x4006f020 > { static constexpr const char * name_str = "GPTM1::GPTM1_CH0ICFR"; };
template<> struct address_map< 0x4006f024 > { static constexpr const char * name_str = "GPTM1::GPTM1_CH1ICFR"; };
template<> struct address_map< 0x4006f028 > { static constexpr const char * name_str = "GPTM1::GPTM1_CH2ICFR"; };
template<> struct address_map< 0x4006f02c > { static constexpr const char * name_str = "GPTM1::GPTM1_CH3ICFR"; };
template<> struct address_map< 0x4006f040 > { static constexpr const char * name_str = "GPTM1::GPTM1_CH0OCFR"; };
template<> struct address_map< 0x4006f044 > { static constexpr const char * name_str = "GPTM1::GPTM1_CH1OCFR"; };
template<> struct address_map< 0x4006f048 > { static constexpr const char * name_str = "GPTM1::GPTM1_CH2OCFR"; };
template<> struct address_map< 0x4006f04c > { static constexpr const char * name_str = "GPTM1::GPTM1_CH3OCFR"; };
template<> struct address_map< 0x4006f050 > { static constexpr const char * name_str = "GPTM1::GPTM1_CHCTR"; };
template<> struct address_map< 0x4006f054 > { static constexpr const char * name_str = "GPTM1::GPTM1_CHPOLR"; };
template<> struct address_map< 0x4006f074 > { static constexpr const char * name_str = "GPTM1::GPTM1_ICTR"; };
template<> struct address_map< 0x4006f078 > { static constexpr const char * name_str = "GPTM1::GPTM1_EVGR"; };
template<> struct address_map< 0x4006f07c > { static constexpr const char * name_str = "GPTM1::GPTM1_INTSR"; };
template<> struct address_map< 0x4006f080 > { static constexpr const char * name_str = "GPTM1::GPTM1_CNTR"; };
template<> struct address_map< 0x4006f084 > { static constexpr const char * name_str = "GPTM1::GPTM1_PSCR"; };
template<> struct address_map< 0x4006f088 > { static constexpr const char * name_str = "GPTM1::GPTM1_CRR"; };
template<> struct address_map< 0x4006f090 > { static constexpr const char * name_str = "GPTM1::GPTM1_CH0CCR"; };
template<> struct address_map< 0x4006f094 > { static constexpr const char * name_str = "GPTM1::GPTM1_CH1CCR"; };
template<> struct address_map< 0x4006f098 > { static constexpr const char * name_str = "GPTM1::GPTM1_CH2CCR"; };
template<> struct address_map< 0x4006f09c > { static constexpr const char * name_str = "GPTM1::GPTM1_CH3CCR"; };
template<> struct address_map< 0x40080000 > { static constexpr const char * name_str = "FMC::FMC_TADR"; };
template<> struct address_map< 0x40080004 > { static constexpr const char * name_str = "FMC::FMC_WRDR"; };
template<> struct address_map< 0x4008000c > { static constexpr const char * name_str = "FMC::FMC_OCMR"; };
template<> struct address_map< 0x40080010 > { static constexpr const char * name_str = "FMC::FMC_OPCR"; };
template<> struct address_map< 0x40080014 > { static constexpr const char * name_str = "FMC::FMC_OIER"; };
template<> struct address_map< 0x40080018 > { static constexpr const char * name_str = "FMC::FMC_OISR"; };
template<> struct address_map< 0x40080020 > { static constexpr const char * name_str = "FMC::FMC_PPSR0"; };
template<> struct address_map< 0x40080024 > { static constexpr const char * name_str = "FMC::FMC_PPSR1"; };
template<> struct address_map< 0x40080028 > { static constexpr const char * name_str = "FMC::FMC_PPSR2"; };
template<> struct address_map< 0x4008002c > { static constexpr const char * name_str = "FMC::FMC_PPSR3"; };
template<> struct address_map< 0x40080030 > { static constexpr const char * name_str = "FMC::FMC_CPSR"; };
template<> struct address_map< 0x40080100 > { static constexpr const char * name_str = "FMC::FMC_VMCR"; };
template<> struct address_map< 0x40080200 > { static constexpr const char * name_str = "FMC::FMC_CFCR"; };
template<> struct address_map< 0x40080300 > { static constexpr const char * name_str = "FMC::FMC_SBVT0"; };
template<> struct address_map< 0x40080304 > { static constexpr const char * name_str = "FMC::FMC_SBVT1"; };
template<> struct address_map< 0x40080308 > { static constexpr const char * name_str = "FMC::FMC_SBVT2"; };
template<> struct address_map< 0x4008030c > { static constexpr const char * name_str = "FMC::FMC_SBVT3"; };
template<> struct address_map< 0x40088000 > { static constexpr const char * name_str = "CKCU::CKCU_GCFGR"; };
template<> struct address_map< 0x40088004 > { static constexpr const char * name_str = "CKCU::CKCU_GCCR"; };
template<> struct address_map< 0x40088008 > { static constexpr const char * name_str = "CKCU::CKCU_GCSR"; };
template<> struct address_map< 0x4008800c > { static constexpr const char * name_str = "CKCU::CKCU_GCIR"; };
template<> struct address_map< 0x40088018 > { static constexpr const char * name_str = "CKCU::CKCU_PLLCFGR"; };
template<> struct address_map< 0x4008801c > { static constexpr const char * name_str = "CKCU::CKCU_PLLCR"; };
template<> struct address_map< 0x40088020 > { static constexpr const char * name_str = "CKCU::CKCU_AHBCFGR"; };
template<> struct address_map< 0x40088024 > { static constexpr const char * name_str = "CKCU::CKCU_AHBCCR"; };
template<> struct address_map< 0x40088028 > { static constexpr const char * name_str = "CKCU::CKCU_APBCFGR"; };
template<> struct address_map< 0x4008802c > { static constexpr const char * name_str = "CKCU::CKCU_APBCCR0"; };
template<> struct address_map< 0x40088030 > { static constexpr const char * name_str = "CKCU::CKCU_APBCCR1"; };
template<> struct address_map< 0x40088034 > { static constexpr const char * name_str = "CKCU::CKCU_CKST"; };
template<> struct address_map< 0x40088100 > { static constexpr const char * name_str = "RSTCU::RSTCU_GRSR"; };
template<> struct address_map< 0x40088108 > { static constexpr const char * name_str = "RSTCU::RSTCU_APBPRSTR0"; };
template<> struct address_map< 0x4008810c > { static constexpr const char * name_str = "RSTCU::RSTCU_APBPRSTR1"; };
template<> struct address_map< 0x40088300 > { static constexpr const char * name_str = "CKCU::CKCU_LPCR"; };
template<> struct address_map< 0x40088304 > { static constexpr const char * name_str = "CKCU::CKCU_MCUDBGCR"; };
template<> struct address_map< 0xe000e004 > { static constexpr const char * name_str = "NVIC::ICTR"; };
template<> struct address_map< 0xe000e008 > { static constexpr const char * name_str = "NVIC::ACTLR"; };
template<> struct address_map< 0xe000e010 > { static constexpr const char * name_str = "SysTick::CTRL"; };
template<> struct address_map< 0xe000e014 > { static constexpr const char * name_str = "SysTick::LOAD"; };
template<> struct address_map< 0xe000e018 > { static constexpr const char * name_str = "SysTick::VAL"; };
template<> struct address_map< 0xe000e01c > { static constexpr const char * name_str = "SysTick::CALIB"; };
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
template<> struct address_map< 0xe000e400 > { static constexpr const char * name_str = "NVIC::IP0"; };
template<> struct address_map< 0xe000e404 > { static constexpr const char * name_str = "NVIC::IP1"; };
template<> struct address_map< 0xe000e408 > { static constexpr const char * name_str = "NVIC::IP2"; };
template<> struct address_map< 0xe000e40c > { static constexpr const char * name_str = "NVIC::IP3"; };
template<> struct address_map< 0xe000e410 > { static constexpr const char * name_str = "NVIC::IP4"; };
template<> struct address_map< 0xe000e414 > { static constexpr const char * name_str = "NVIC::IP5"; };
template<> struct address_map< 0xe000e418 > { static constexpr const char * name_str = "NVIC::IP6"; };
template<> struct address_map< 0xe000e41c > { static constexpr const char * name_str = "NVIC::IP7"; };
template<> struct address_map< 0xe000e420 > { static constexpr const char * name_str = "NVIC::IP8"; };
template<> struct address_map< 0xe000e424 > { static constexpr const char * name_str = "NVIC::IP9"; };
template<> struct address_map< 0xe000e428 > { static constexpr const char * name_str = "NVIC::IP10"; };
template<> struct address_map< 0xe000e42c > { static constexpr const char * name_str = "NVIC::IP11"; };
template<> struct address_map< 0xe000ed00 > { static constexpr const char * name_str = "NVIC::CPUID"; };
template<> struct address_map< 0xe000ed04 > { static constexpr const char * name_str = "NVIC::ICSR"; };
template<> struct address_map< 0xe000ed08 > { static constexpr const char * name_str = "NVIC::VTOR"; };
template<> struct address_map< 0xe000ed0c > { static constexpr const char * name_str = "NVIC::AIRCR"; };
template<> struct address_map< 0xe000ed10 > { static constexpr const char * name_str = "SCB::SCR"; };
template<> struct address_map< 0xe000ed14 > { static constexpr const char * name_str = "SCB::CCR"; };
template<> struct address_map< 0xe000ed18 > { static constexpr const char * name_str = "NVIC::SHP0"; };
template<> struct address_map< 0xe000ed1c > { static constexpr const char * name_str = "NVIC::SHP1"; };
template<> struct address_map< 0xe000ed20 > { static constexpr const char * name_str = "NVIC::SHP2"; };
template<> struct address_map< 0xe000ed24 > { static constexpr const char * name_str = "NVIC::SHCSR"; };
template<> struct address_map< 0xe000ed28 > { static constexpr const char * name_str = "Fault_Reports::MFSR"; };  /* svd2hpp: duplicate address for: Fault_Reports::CFSR, Fault_Reports::MFSR */
template<> struct address_map< 0xe000ed29 > { static constexpr const char * name_str = "Fault_Reports::BFSR"; };
template<> struct address_map< 0xe000ed2a > { static constexpr const char * name_str = "Fault_Reports::UFSR"; };
template<> struct address_map< 0xe000ed2c > { static constexpr const char * name_str = "Fault_Reports::HFSR"; };
template<> struct address_map< 0xe000ed30 > { static constexpr const char * name_str = "Fault_Reports::DFSR"; };
template<> struct address_map< 0xe000ed34 > { static constexpr const char * name_str = "Fault_Reports::MMFAR"; };
template<> struct address_map< 0xe000ed38 > { static constexpr const char * name_str = "Fault_Reports::BFAR"; };
template<> struct address_map< 0xe000ed3c > { static constexpr const char * name_str = "Fault_Reports::AFSR"; };
template<> struct address_map< 0xe000ef00 > { static constexpr const char * name_str = "NVIC::STIR"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
