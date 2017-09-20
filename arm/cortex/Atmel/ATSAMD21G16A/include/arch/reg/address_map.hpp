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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21G16A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21G16A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21G16A device: Cortex-M0+ Microcontroller with 64KB Flash, 8KB SRAM, 48-pin package (refer to http://www.atmel.com/devices/SAMD21G16A.aspx for more)
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

template<> struct address_map< 0x40000000 > { static constexpr const char * name_str = "PAC0::WPCLR"; };
template<> struct address_map< 0x40000004 > { static constexpr const char * name_str = "PAC0::WPSET"; };
template<> struct address_map< 0x40000400 > { static constexpr const char * name_str = "PM::CTRL"; };
template<> struct address_map< 0x40000401 > { static constexpr const char * name_str = "PM::SLEEP"; };
template<> struct address_map< 0x40000408 > { static constexpr const char * name_str = "PM::CPUSEL"; };
template<> struct address_map< 0x40000409 > { static constexpr const char * name_str = "PM::APBASEL"; };
template<> struct address_map< 0x4000040a > { static constexpr const char * name_str = "PM::APBBSEL"; };
template<> struct address_map< 0x4000040b > { static constexpr const char * name_str = "PM::APBCSEL"; };
template<> struct address_map< 0x40000414 > { static constexpr const char * name_str = "PM::AHBMASK"; };
template<> struct address_map< 0x40000418 > { static constexpr const char * name_str = "PM::APBAMASK"; };
template<> struct address_map< 0x4000041c > { static constexpr const char * name_str = "PM::APBBMASK"; };
template<> struct address_map< 0x40000420 > { static constexpr const char * name_str = "PM::APBCMASK"; };
template<> struct address_map< 0x40000434 > { static constexpr const char * name_str = "PM::INTENCLR"; };
template<> struct address_map< 0x40000435 > { static constexpr const char * name_str = "PM::INTENSET"; };
template<> struct address_map< 0x40000436 > { static constexpr const char * name_str = "PM::INTFLAG"; };
template<> struct address_map< 0x40000438 > { static constexpr const char * name_str = "PM::RCAUSE"; };
template<> struct address_map< 0x40000800 > { static constexpr const char * name_str = "SYSCTRL::INTENCLR"; };
template<> struct address_map< 0x40000804 > { static constexpr const char * name_str = "SYSCTRL::INTENSET"; };
template<> struct address_map< 0x40000808 > { static constexpr const char * name_str = "SYSCTRL::INTFLAG"; };
template<> struct address_map< 0x4000080c > { static constexpr const char * name_str = "SYSCTRL::PCLKSR"; };
template<> struct address_map< 0x40000810 > { static constexpr const char * name_str = "SYSCTRL::XOSC"; };
template<> struct address_map< 0x40000814 > { static constexpr const char * name_str = "SYSCTRL::XOSC32K"; };
template<> struct address_map< 0x40000818 > { static constexpr const char * name_str = "SYSCTRL::OSC32K"; };
template<> struct address_map< 0x4000081c > { static constexpr const char * name_str = "SYSCTRL::OSCULP32K"; };
template<> struct address_map< 0x40000820 > { static constexpr const char * name_str = "SYSCTRL::OSC8M"; };
template<> struct address_map< 0x40000824 > { static constexpr const char * name_str = "SYSCTRL::DFLLCTRL"; };
template<> struct address_map< 0x40000828 > { static constexpr const char * name_str = "SYSCTRL::DFLLVAL"; };
template<> struct address_map< 0x4000082c > { static constexpr const char * name_str = "SYSCTRL::DFLLMUL"; };
template<> struct address_map< 0x40000830 > { static constexpr const char * name_str = "SYSCTRL::DFLLSYNC"; };
template<> struct address_map< 0x40000834 > { static constexpr const char * name_str = "SYSCTRL::BOD33"; };
template<> struct address_map< 0x40000840 > { static constexpr const char * name_str = "SYSCTRL::VREF"; };
template<> struct address_map< 0x40000844 > { static constexpr const char * name_str = "SYSCTRL::DPLLCTRLA"; };
template<> struct address_map< 0x40000848 > { static constexpr const char * name_str = "SYSCTRL::DPLLRATIO"; };
template<> struct address_map< 0x4000084c > { static constexpr const char * name_str = "SYSCTRL::DPLLCTRLB"; };
template<> struct address_map< 0x40000850 > { static constexpr const char * name_str = "SYSCTRL::DPLLSTATUS"; };
template<> struct address_map< 0x40000c00 > { static constexpr const char * name_str = "GCLK::CTRL"; };
template<> struct address_map< 0x40000c01 > { static constexpr const char * name_str = "GCLK::STATUS"; };
template<> struct address_map< 0x40000c02 > { static constexpr const char * name_str = "GCLK::CLKCTRL"; };
template<> struct address_map< 0x40000c04 > { static constexpr const char * name_str = "GCLK::GENCTRL"; };
template<> struct address_map< 0x40000c08 > { static constexpr const char * name_str = "GCLK::GENDIV"; };
template<> struct address_map< 0x40001000 > { static constexpr const char * name_str = "WDT::CTRL"; };
template<> struct address_map< 0x40001001 > { static constexpr const char * name_str = "WDT::CONFIG"; };
template<> struct address_map< 0x40001002 > { static constexpr const char * name_str = "WDT::EWCTRL"; };
template<> struct address_map< 0x40001004 > { static constexpr const char * name_str = "WDT::INTENCLR"; };
template<> struct address_map< 0x40001005 > { static constexpr const char * name_str = "WDT::INTENSET"; };
template<> struct address_map< 0x40001006 > { static constexpr const char * name_str = "WDT::INTFLAG"; };
template<> struct address_map< 0x40001007 > { static constexpr const char * name_str = "WDT::STATUS"; };
template<> struct address_map< 0x40001008 > { static constexpr const char * name_str = "WDT::CLEAR"; };
template<> struct address_map< 0x40001800 > { static constexpr const char * name_str = "EIC::CTRL"; };
template<> struct address_map< 0x40001801 > { static constexpr const char * name_str = "EIC::STATUS"; };
template<> struct address_map< 0x40001802 > { static constexpr const char * name_str = "EIC::NMICTRL"; };
template<> struct address_map< 0x40001803 > { static constexpr const char * name_str = "EIC::NMIFLAG"; };
template<> struct address_map< 0x40001804 > { static constexpr const char * name_str = "EIC::EVCTRL"; };
template<> struct address_map< 0x40001808 > { static constexpr const char * name_str = "EIC::INTENCLR"; };
template<> struct address_map< 0x4000180c > { static constexpr const char * name_str = "EIC::INTENSET"; };
template<> struct address_map< 0x40001810 > { static constexpr const char * name_str = "EIC::INTFLAG"; };
template<> struct address_map< 0x40001814 > { static constexpr const char * name_str = "EIC::WAKEUP"; };
template<> struct address_map< 0x40001818 > { static constexpr const char * name_str = "EIC::CONFIG%s"; };
template<> struct address_map< 0x41000000 > { static constexpr const char * name_str = "PAC1::WPCLR"; };
template<> struct address_map< 0x41000004 > { static constexpr const char * name_str = "PAC1::WPSET"; };
template<> struct address_map< 0x41002000 > { static constexpr const char * name_str = "DSU::CTRL"; };
template<> struct address_map< 0x41002001 > { static constexpr const char * name_str = "DSU::STATUSA"; };
template<> struct address_map< 0x41002002 > { static constexpr const char * name_str = "DSU::STATUSB"; };
template<> struct address_map< 0x41002004 > { static constexpr const char * name_str = "DSU::ADDR"; };
template<> struct address_map< 0x41002008 > { static constexpr const char * name_str = "DSU::LENGTH"; };
template<> struct address_map< 0x4100200c > { static constexpr const char * name_str = "DSU::DATA"; };
template<> struct address_map< 0x41002010 > { static constexpr const char * name_str = "DSU::DCC%s"; };
template<> struct address_map< 0x41002018 > { static constexpr const char * name_str = "DSU::DID"; };
template<> struct address_map< 0x41003000 > { static constexpr const char * name_str = "DSU::ENTRY%s"; };
template<> struct address_map< 0x41003008 > { static constexpr const char * name_str = "DSU::END"; };
template<> struct address_map< 0x41003fcc > { static constexpr const char * name_str = "DSU::MEMTYPE"; };
template<> struct address_map< 0x41003fd0 > { static constexpr const char * name_str = "DSU::PID4"; };
template<> struct address_map< 0x41003fe0 > { static constexpr const char * name_str = "DSU::PID0"; };
template<> struct address_map< 0x41003fe4 > { static constexpr const char * name_str = "DSU::PID1"; };
template<> struct address_map< 0x41003fe8 > { static constexpr const char * name_str = "DSU::PID2"; };
template<> struct address_map< 0x41003fec > { static constexpr const char * name_str = "DSU::PID3"; };
template<> struct address_map< 0x41003ff0 > { static constexpr const char * name_str = "DSU::CID0"; };
template<> struct address_map< 0x41003ff4 > { static constexpr const char * name_str = "DSU::CID1"; };
template<> struct address_map< 0x41003ff8 > { static constexpr const char * name_str = "DSU::CID2"; };
template<> struct address_map< 0x41003ffc > { static constexpr const char * name_str = "DSU::CID3"; };
template<> struct address_map< 0x41004000 > { static constexpr const char * name_str = "NVMCTRL::CTRLA"; };
template<> struct address_map< 0x41004004 > { static constexpr const char * name_str = "NVMCTRL::CTRLB"; };
template<> struct address_map< 0x41004008 > { static constexpr const char * name_str = "NVMCTRL::PARAM"; };
template<> struct address_map< 0x4100400c > { static constexpr const char * name_str = "NVMCTRL::INTENCLR"; };
template<> struct address_map< 0x41004010 > { static constexpr const char * name_str = "NVMCTRL::INTENSET"; };
template<> struct address_map< 0x41004014 > { static constexpr const char * name_str = "NVMCTRL::INTFLAG"; };
template<> struct address_map< 0x41004018 > { static constexpr const char * name_str = "NVMCTRL::STATUS"; };
template<> struct address_map< 0x4100401c > { static constexpr const char * name_str = "NVMCTRL::ADDR"; };
template<> struct address_map< 0x41004020 > { static constexpr const char * name_str = "NVMCTRL::LOCK"; };
template<> struct address_map< 0x41004400 > { static constexpr const char * name_str = "PORT::DIR%s"; };
template<> struct address_map< 0x41004404 > { static constexpr const char * name_str = "PORT::DIRCLR%s"; };
template<> struct address_map< 0x41004408 > { static constexpr const char * name_str = "PORT::DIRSET%s"; };
template<> struct address_map< 0x4100440c > { static constexpr const char * name_str = "PORT::DIRTGL%s"; };
template<> struct address_map< 0x41004410 > { static constexpr const char * name_str = "PORT::OUT%s"; };
template<> struct address_map< 0x41004414 > { static constexpr const char * name_str = "PORT::OUTCLR%s"; };
template<> struct address_map< 0x41004418 > { static constexpr const char * name_str = "PORT::OUTSET%s"; };
template<> struct address_map< 0x4100441c > { static constexpr const char * name_str = "PORT::OUTTGL%s"; };
template<> struct address_map< 0x41004420 > { static constexpr const char * name_str = "PORT::IN%s"; };
template<> struct address_map< 0x41004424 > { static constexpr const char * name_str = "PORT::CTRL%s"; };
template<> struct address_map< 0x41004428 > { static constexpr const char * name_str = "PORT::WRCONFIG%s"; };
template<> struct address_map< 0x41004430 > { static constexpr const char * name_str = "PORT::PMUX0_%s"; };
template<> struct address_map< 0x41004440 > { static constexpr const char * name_str = "PORT::PINCFG0_%s"; };
template<> struct address_map< 0x410044b0 > { static constexpr const char * name_str = "PORT::PMUX1_%s"; };
template<> struct address_map< 0x410044c0 > { static constexpr const char * name_str = "PORT::PINCFG1_%s"; };
template<> struct address_map< 0x41004530 > { static constexpr const char * name_str = "PORT::PMUX2_%s"; };
template<> struct address_map< 0x41004540 > { static constexpr const char * name_str = "PORT::PINCFG2_%s"; };
template<> struct address_map< 0x41004800 > { static constexpr const char * name_str = "DMAC::CTRL"; };
template<> struct address_map< 0x41004802 > { static constexpr const char * name_str = "DMAC::CRCCTRL"; };
template<> struct address_map< 0x41004804 > { static constexpr const char * name_str = "DMAC::CRCDATAIN"; };
template<> struct address_map< 0x41004808 > { static constexpr const char * name_str = "DMAC::CRCCHKSUM"; };
template<> struct address_map< 0x4100480c > { static constexpr const char * name_str = "DMAC::CRCSTATUS"; };
template<> struct address_map< 0x4100480d > { static constexpr const char * name_str = "DMAC::DBGCTRL"; };
template<> struct address_map< 0x41004810 > { static constexpr const char * name_str = "DMAC::SWTRIGCTRL"; };
template<> struct address_map< 0x41004814 > { static constexpr const char * name_str = "DMAC::PRICTRL0"; };
template<> struct address_map< 0x41004820 > { static constexpr const char * name_str = "DMAC::INTPEND"; };
template<> struct address_map< 0x41004824 > { static constexpr const char * name_str = "DMAC::INTSTATUS"; };
template<> struct address_map< 0x41004828 > { static constexpr const char * name_str = "DMAC::BUSYCH"; };
template<> struct address_map< 0x4100482c > { static constexpr const char * name_str = "DMAC::PENDCH"; };
template<> struct address_map< 0x41004830 > { static constexpr const char * name_str = "DMAC::ACTIVE"; };
template<> struct address_map< 0x41004834 > { static constexpr const char * name_str = "DMAC::BASEADDR"; };
template<> struct address_map< 0x41004838 > { static constexpr const char * name_str = "DMAC::WRBADDR"; };
template<> struct address_map< 0x4100483f > { static constexpr const char * name_str = "DMAC::CHID"; };
template<> struct address_map< 0x41004840 > { static constexpr const char * name_str = "DMAC::CHCTRLA"; };
template<> struct address_map< 0x41004844 > { static constexpr const char * name_str = "DMAC::CHCTRLB"; };
template<> struct address_map< 0x4100484c > { static constexpr const char * name_str = "DMAC::CHINTENCLR"; };
template<> struct address_map< 0x4100484d > { static constexpr const char * name_str = "DMAC::CHINTENSET"; };
template<> struct address_map< 0x4100484e > { static constexpr const char * name_str = "DMAC::CHINTFLAG"; };
template<> struct address_map< 0x4100484f > { static constexpr const char * name_str = "DMAC::CHSTATUS"; };
template<> struct address_map< 0x41006000 > { static constexpr const char * name_str = "MTB::POSITION"; };
template<> struct address_map< 0x41006004 > { static constexpr const char * name_str = "MTB::MASTER"; };
template<> struct address_map< 0x41006008 > { static constexpr const char * name_str = "MTB::FLOW"; };
template<> struct address_map< 0x4100600c > { static constexpr const char * name_str = "MTB::BASE"; };
template<> struct address_map< 0x41006f00 > { static constexpr const char * name_str = "MTB::ITCTRL"; };
template<> struct address_map< 0x41006fa0 > { static constexpr const char * name_str = "MTB::CLAIMSET"; };
template<> struct address_map< 0x41006fa4 > { static constexpr const char * name_str = "MTB::CLAIMCLR"; };
template<> struct address_map< 0x41006fb0 > { static constexpr const char * name_str = "MTB::LOCKACCESS"; };
template<> struct address_map< 0x41006fb4 > { static constexpr const char * name_str = "MTB::LOCKSTATUS"; };
template<> struct address_map< 0x41006fb8 > { static constexpr const char * name_str = "MTB::AUTHSTATUS"; };
template<> struct address_map< 0x41006fbc > { static constexpr const char * name_str = "MTB::DEVARCH"; };
template<> struct address_map< 0x41006fc8 > { static constexpr const char * name_str = "MTB::DEVID"; };
template<> struct address_map< 0x41006fcc > { static constexpr const char * name_str = "MTB::DEVTYPE"; };
template<> struct address_map< 0x41006fd0 > { static constexpr const char * name_str = "MTB::PID4"; };
template<> struct address_map< 0x41006fd4 > { static constexpr const char * name_str = "MTB::PID5"; };
template<> struct address_map< 0x41006fd8 > { static constexpr const char * name_str = "MTB::PID6"; };
template<> struct address_map< 0x41006fdc > { static constexpr const char * name_str = "MTB::PID7"; };
template<> struct address_map< 0x41006fe0 > { static constexpr const char * name_str = "MTB::PID0"; };
template<> struct address_map< 0x41006fe4 > { static constexpr const char * name_str = "MTB::PID1"; };
template<> struct address_map< 0x41006fe8 > { static constexpr const char * name_str = "MTB::PID2"; };
template<> struct address_map< 0x41006fec > { static constexpr const char * name_str = "MTB::PID3"; };
template<> struct address_map< 0x41006ff0 > { static constexpr const char * name_str = "MTB::CID0"; };
template<> struct address_map< 0x41006ff4 > { static constexpr const char * name_str = "MTB::CID1"; };
template<> struct address_map< 0x41006ff8 > { static constexpr const char * name_str = "MTB::CID2"; };
template<> struct address_map< 0x41006ffc > { static constexpr const char * name_str = "MTB::CID3"; };
template<> struct address_map< 0x42000000 > { static constexpr const char * name_str = "PAC2::WPCLR"; };
template<> struct address_map< 0x42000004 > { static constexpr const char * name_str = "PAC2::WPSET"; };
template<> struct address_map< 0x42000400 > { static constexpr const char * name_str = "EVSYS::CTRL"; };
template<> struct address_map< 0x42000404 > { static constexpr const char * name_str = "EVSYS::CHANNEL"; };
template<> struct address_map< 0x42000408 > { static constexpr const char * name_str = "EVSYS::USER"; };
template<> struct address_map< 0x4200040c > { static constexpr const char * name_str = "EVSYS::CHSTATUS"; };
template<> struct address_map< 0x42000410 > { static constexpr const char * name_str = "EVSYS::INTENCLR"; };
template<> struct address_map< 0x42000414 > { static constexpr const char * name_str = "EVSYS::INTENSET"; };
template<> struct address_map< 0x42000418 > { static constexpr const char * name_str = "EVSYS::INTFLAG"; };
template<> struct address_map< 0x42002000 > { static constexpr const char * name_str = "TCC0::CTRLA"; };
template<> struct address_map< 0x42002004 > { static constexpr const char * name_str = "TCC0::CTRLBCLR"; };
template<> struct address_map< 0x42002005 > { static constexpr const char * name_str = "TCC0::CTRLBSET"; };
template<> struct address_map< 0x42002008 > { static constexpr const char * name_str = "TCC0::SYNCBUSY"; };
template<> struct address_map< 0x4200200c > { static constexpr const char * name_str = "TCC0::FCTRLA"; };
template<> struct address_map< 0x42002010 > { static constexpr const char * name_str = "TCC0::FCTRLB"; };
template<> struct address_map< 0x42002014 > { static constexpr const char * name_str = "TCC0::WEXCTRL"; };
template<> struct address_map< 0x42002018 > { static constexpr const char * name_str = "TCC0::DRVCTRL"; };
template<> struct address_map< 0x4200201e > { static constexpr const char * name_str = "TCC0::DBGCTRL"; };
template<> struct address_map< 0x42002020 > { static constexpr const char * name_str = "TCC0::EVCTRL"; };
template<> struct address_map< 0x42002024 > { static constexpr const char * name_str = "TCC0::INTENCLR"; };
template<> struct address_map< 0x42002028 > { static constexpr const char * name_str = "TCC0::INTENSET"; };
template<> struct address_map< 0x4200202c > { static constexpr const char * name_str = "TCC0::INTFLAG"; };
template<> struct address_map< 0x42002030 > { static constexpr const char * name_str = "TCC0::STATUS"; };
template<> struct address_map< 0x42002034 > { static constexpr const char * name_str = "TCC0::COUNT"; };
template<> struct address_map< 0x42002038 > { static constexpr const char * name_str = "TCC0::PATT"; };
template<> struct address_map< 0x4200203c > { static constexpr const char * name_str = "TCC0::WAVE"; };
template<> struct address_map< 0x42002040 > { static constexpr const char * name_str = "TCC0::PER"; };
template<> struct address_map< 0x42002044 > { static constexpr const char * name_str = "TCC0::CC%s"; };
template<> struct address_map< 0x42002064 > { static constexpr const char * name_str = "TCC0::PATTB"; };
template<> struct address_map< 0x42002068 > { static constexpr const char * name_str = "TCC0::WAVEB"; };
template<> struct address_map< 0x4200206c > { static constexpr const char * name_str = "TCC0::PERB"; };
template<> struct address_map< 0x42002070 > { static constexpr const char * name_str = "TCC0::CCB%s"; };
template<> struct address_map< 0x42002400 > { static constexpr const char * name_str = "TCC1::CTRLA"; };
template<> struct address_map< 0x42002404 > { static constexpr const char * name_str = "TCC1::CTRLBCLR"; };
template<> struct address_map< 0x42002405 > { static constexpr const char * name_str = "TCC1::CTRLBSET"; };
template<> struct address_map< 0x42002408 > { static constexpr const char * name_str = "TCC1::SYNCBUSY"; };
template<> struct address_map< 0x4200240c > { static constexpr const char * name_str = "TCC1::FCTRLA"; };
template<> struct address_map< 0x42002410 > { static constexpr const char * name_str = "TCC1::FCTRLB"; };
template<> struct address_map< 0x42002414 > { static constexpr const char * name_str = "TCC1::WEXCTRL"; };
template<> struct address_map< 0x42002418 > { static constexpr const char * name_str = "TCC1::DRVCTRL"; };
template<> struct address_map< 0x4200241e > { static constexpr const char * name_str = "TCC1::DBGCTRL"; };
template<> struct address_map< 0x42002420 > { static constexpr const char * name_str = "TCC1::EVCTRL"; };
template<> struct address_map< 0x42002424 > { static constexpr const char * name_str = "TCC1::INTENCLR"; };
template<> struct address_map< 0x42002428 > { static constexpr const char * name_str = "TCC1::INTENSET"; };
template<> struct address_map< 0x4200242c > { static constexpr const char * name_str = "TCC1::INTFLAG"; };
template<> struct address_map< 0x42002430 > { static constexpr const char * name_str = "TCC1::STATUS"; };
template<> struct address_map< 0x42002434 > { static constexpr const char * name_str = "TCC1::COUNT"; };
template<> struct address_map< 0x42002438 > { static constexpr const char * name_str = "TCC1::PATT"; };
template<> struct address_map< 0x4200243c > { static constexpr const char * name_str = "TCC1::WAVE"; };
template<> struct address_map< 0x42002440 > { static constexpr const char * name_str = "TCC1::PER"; };
template<> struct address_map< 0x42002444 > { static constexpr const char * name_str = "TCC1::CC%s"; };
template<> struct address_map< 0x42002464 > { static constexpr const char * name_str = "TCC1::PATTB"; };
template<> struct address_map< 0x42002468 > { static constexpr const char * name_str = "TCC1::WAVEB"; };
template<> struct address_map< 0x4200246c > { static constexpr const char * name_str = "TCC1::PERB"; };
template<> struct address_map< 0x42002470 > { static constexpr const char * name_str = "TCC1::CCB%s"; };
template<> struct address_map< 0x42002800 > { static constexpr const char * name_str = "TCC2::CTRLA"; };
template<> struct address_map< 0x42002804 > { static constexpr const char * name_str = "TCC2::CTRLBCLR"; };
template<> struct address_map< 0x42002805 > { static constexpr const char * name_str = "TCC2::CTRLBSET"; };
template<> struct address_map< 0x42002808 > { static constexpr const char * name_str = "TCC2::SYNCBUSY"; };
template<> struct address_map< 0x4200280c > { static constexpr const char * name_str = "TCC2::FCTRLA"; };
template<> struct address_map< 0x42002810 > { static constexpr const char * name_str = "TCC2::FCTRLB"; };
template<> struct address_map< 0x42002814 > { static constexpr const char * name_str = "TCC2::WEXCTRL"; };
template<> struct address_map< 0x42002818 > { static constexpr const char * name_str = "TCC2::DRVCTRL"; };
template<> struct address_map< 0x4200281e > { static constexpr const char * name_str = "TCC2::DBGCTRL"; };
template<> struct address_map< 0x42002820 > { static constexpr const char * name_str = "TCC2::EVCTRL"; };
template<> struct address_map< 0x42002824 > { static constexpr const char * name_str = "TCC2::INTENCLR"; };
template<> struct address_map< 0x42002828 > { static constexpr const char * name_str = "TCC2::INTENSET"; };
template<> struct address_map< 0x4200282c > { static constexpr const char * name_str = "TCC2::INTFLAG"; };
template<> struct address_map< 0x42002830 > { static constexpr const char * name_str = "TCC2::STATUS"; };
template<> struct address_map< 0x42002834 > { static constexpr const char * name_str = "TCC2::COUNT"; };
template<> struct address_map< 0x42002838 > { static constexpr const char * name_str = "TCC2::PATT"; };
template<> struct address_map< 0x4200283c > { static constexpr const char * name_str = "TCC2::WAVE"; };
template<> struct address_map< 0x42002840 > { static constexpr const char * name_str = "TCC2::PER"; };
template<> struct address_map< 0x42002844 > { static constexpr const char * name_str = "TCC2::CC%s"; };
template<> struct address_map< 0x42002864 > { static constexpr const char * name_str = "TCC2::PATTB"; };
template<> struct address_map< 0x42002868 > { static constexpr const char * name_str = "TCC2::WAVEB"; };
template<> struct address_map< 0x4200286c > { static constexpr const char * name_str = "TCC2::PERB"; };
template<> struct address_map< 0x42002870 > { static constexpr const char * name_str = "TCC2::CCB%s"; };
template<> struct address_map< 0x42004000 > { static constexpr const char * name_str = "ADC::CTRLA"; };
template<> struct address_map< 0x42004001 > { static constexpr const char * name_str = "ADC::REFCTRL"; };
template<> struct address_map< 0x42004002 > { static constexpr const char * name_str = "ADC::AVGCTRL"; };
template<> struct address_map< 0x42004003 > { static constexpr const char * name_str = "ADC::SAMPCTRL"; };
template<> struct address_map< 0x42004004 > { static constexpr const char * name_str = "ADC::CTRLB"; };
template<> struct address_map< 0x42004008 > { static constexpr const char * name_str = "ADC::WINCTRL"; };
template<> struct address_map< 0x4200400c > { static constexpr const char * name_str = "ADC::SWTRIG"; };
template<> struct address_map< 0x42004010 > { static constexpr const char * name_str = "ADC::INPUTCTRL"; };
template<> struct address_map< 0x42004014 > { static constexpr const char * name_str = "ADC::EVCTRL"; };
template<> struct address_map< 0x42004016 > { static constexpr const char * name_str = "ADC::INTENCLR"; };
template<> struct address_map< 0x42004017 > { static constexpr const char * name_str = "ADC::INTENSET"; };
template<> struct address_map< 0x42004018 > { static constexpr const char * name_str = "ADC::INTFLAG"; };
template<> struct address_map< 0x42004019 > { static constexpr const char * name_str = "ADC::STATUS"; };
template<> struct address_map< 0x4200401a > { static constexpr const char * name_str = "ADC::RESULT"; };
template<> struct address_map< 0x4200401c > { static constexpr const char * name_str = "ADC::WINLT"; };
template<> struct address_map< 0x42004020 > { static constexpr const char * name_str = "ADC::WINUT"; };
template<> struct address_map< 0x42004024 > { static constexpr const char * name_str = "ADC::GAINCORR"; };
template<> struct address_map< 0x42004026 > { static constexpr const char * name_str = "ADC::OFFSETCORR"; };
template<> struct address_map< 0x42004028 > { static constexpr const char * name_str = "ADC::CALIB"; };
template<> struct address_map< 0x4200402a > { static constexpr const char * name_str = "ADC::DBGCTRL"; };
template<> struct address_map< 0x42004400 > { static constexpr const char * name_str = "AC::CTRLA"; };
template<> struct address_map< 0x42004401 > { static constexpr const char * name_str = "AC::CTRLB"; };
template<> struct address_map< 0x42004402 > { static constexpr const char * name_str = "AC::EVCTRL"; };
template<> struct address_map< 0x42004404 > { static constexpr const char * name_str = "AC::INTENCLR"; };
template<> struct address_map< 0x42004405 > { static constexpr const char * name_str = "AC::INTENSET"; };
template<> struct address_map< 0x42004406 > { static constexpr const char * name_str = "AC::INTFLAG"; };
template<> struct address_map< 0x42004408 > { static constexpr const char * name_str = "AC::STATUSA"; };
template<> struct address_map< 0x42004409 > { static constexpr const char * name_str = "AC::STATUSB"; };
template<> struct address_map< 0x4200440a > { static constexpr const char * name_str = "AC::STATUSC"; };
template<> struct address_map< 0x4200440c > { static constexpr const char * name_str = "AC::WINCTRL"; };
template<> struct address_map< 0x42004410 > { static constexpr const char * name_str = "AC::COMPCTRL%s"; };
template<> struct address_map< 0x42004420 > { static constexpr const char * name_str = "AC::SCALER%s"; };
template<> struct address_map< 0x42004800 > { static constexpr const char * name_str = "DAC::CTRLA"; };
template<> struct address_map< 0x42004801 > { static constexpr const char * name_str = "DAC::CTRLB"; };
template<> struct address_map< 0x42004802 > { static constexpr const char * name_str = "DAC::EVCTRL"; };
template<> struct address_map< 0x42004804 > { static constexpr const char * name_str = "DAC::INTENCLR"; };
template<> struct address_map< 0x42004805 > { static constexpr const char * name_str = "DAC::INTENSET"; };
template<> struct address_map< 0x42004806 > { static constexpr const char * name_str = "DAC::INTFLAG"; };
template<> struct address_map< 0x42004807 > { static constexpr const char * name_str = "DAC::STATUS"; };
template<> struct address_map< 0x42004808 > { static constexpr const char * name_str = "DAC::DATA"; };
template<> struct address_map< 0x4200480c > { static constexpr const char * name_str = "DAC::DATABUF"; };
template<> struct address_map< 0x42005000 > { static constexpr const char * name_str = "I2S::CTRLA"; };
template<> struct address_map< 0x42005004 > { static constexpr const char * name_str = "I2S::CLKCTRL%s"; };
template<> struct address_map< 0x4200500c > { static constexpr const char * name_str = "I2S::INTENCLR"; };
template<> struct address_map< 0x42005010 > { static constexpr const char * name_str = "I2S::INTENSET"; };
template<> struct address_map< 0x42005014 > { static constexpr const char * name_str = "I2S::INTFLAG"; };
template<> struct address_map< 0x42005018 > { static constexpr const char * name_str = "I2S::SYNCBUSY"; };
template<> struct address_map< 0x42005020 > { static constexpr const char * name_str = "I2S::SERCTRL%s"; };
template<> struct address_map< 0x42005030 > { static constexpr const char * name_str = "I2S::DATA%s"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
