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
//  Import from CMSIS-SVD: "Nordic/nrf51.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf51
//  series: nrf51
//  version: 522
//  description: nRF51 reference description for radio MCU with ARM 32-bit Cortex-M0 Microcontroller at 16MHz CPU clock
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

template<> struct address_map< 0x10000010 > { static constexpr const char * name_str = "FICR::CODEPAGESIZE"; };
template<> struct address_map< 0x10000014 > { static constexpr const char * name_str = "FICR::CODESIZE"; };
template<> struct address_map< 0x10000028 > { static constexpr const char * name_str = "FICR::CLENR0"; };
template<> struct address_map< 0x1000002c > { static constexpr const char * name_str = "FICR::PPFC"; };
template<> struct address_map< 0x10000034 > { static constexpr const char * name_str = "FICR::NUMRAMBLOCK"; };
template<> struct address_map< 0x10000038 > { static constexpr const char * name_str = "FICR::SIZERAMBLOCKS"; };  /* svd2hpp: duplicate address for: FICR::SIZERAMBLOCKS, FICR::SIZERAMBLOCK[%s] */
template<> struct address_map< 0x1000005c > { static constexpr const char * name_str = "FICR::CONFIGID"; };
template<> struct address_map< 0x10000060 > { static constexpr const char * name_str = "FICR::DEVICEID[%s]"; };
template<> struct address_map< 0x10000080 > { static constexpr const char * name_str = "FICR::ER[%s]"; };
template<> struct address_map< 0x10000090 > { static constexpr const char * name_str = "FICR::IR[%s]"; };
template<> struct address_map< 0x100000a0 > { static constexpr const char * name_str = "FICR::DEVICEADDRTYPE"; };
template<> struct address_map< 0x100000a4 > { static constexpr const char * name_str = "FICR::DEVICEADDR[%s]"; };
template<> struct address_map< 0x100000ac > { static constexpr const char * name_str = "FICR::OVERRIDEEN"; };
template<> struct address_map< 0x100000b0 > { static constexpr const char * name_str = "FICR::NRF_1MBIT[%s]"; };
template<> struct address_map< 0x100000ec > { static constexpr const char * name_str = "FICR::BLE_1MBIT[%s]"; };
template<> struct address_map< 0x10001000 > { static constexpr const char * name_str = "UICR::CLENR0"; };
template<> struct address_map< 0x10001004 > { static constexpr const char * name_str = "UICR::RBPCONF"; };
template<> struct address_map< 0x10001008 > { static constexpr const char * name_str = "UICR::XTALFREQ"; };
template<> struct address_map< 0x10001010 > { static constexpr const char * name_str = "UICR::FWID"; };
template<> struct address_map< 0x10001014 > { static constexpr const char * name_str = "UICR::NRFFW[%s]"; };  /* svd2hpp: duplicate address for: UICR::BOOTLOADERADDR, UICR::NRFFW[%s] */
template<> struct address_map< 0x10001050 > { static constexpr const char * name_str = "UICR::NRFHW[%s]"; };
template<> struct address_map< 0x10001080 > { static constexpr const char * name_str = "UICR::CUSTOMER[%s]"; };
template<> struct address_map< 0x40000000 > { static constexpr const char * name_str = "CLOCK::TASKS_HFCLKSTART"; };
template<> struct address_map< 0x40000004 > { static constexpr const char * name_str = "CLOCK::TASKS_HFCLKSTOP"; };
template<> struct address_map< 0x40000008 > { static constexpr const char * name_str = "CLOCK::TASKS_LFCLKSTART"; };
template<> struct address_map< 0x4000000c > { static constexpr const char * name_str = "CLOCK::TASKS_LFCLKSTOP"; };
template<> struct address_map< 0x40000010 > { static constexpr const char * name_str = "CLOCK::TASKS_CAL"; };
template<> struct address_map< 0x40000014 > { static constexpr const char * name_str = "CLOCK::TASKS_CTSTART"; };
template<> struct address_map< 0x40000018 > { static constexpr const char * name_str = "CLOCK::TASKS_CTSTOP"; };
template<> struct address_map< 0x40000078 > { static constexpr const char * name_str = "POWER::TASKS_CONSTLAT"; };
template<> struct address_map< 0x4000007c > { static constexpr const char * name_str = "POWER::TASKS_LOWPWR"; };
template<> struct address_map< 0x40000100 > { static constexpr const char * name_str = "CLOCK::EVENTS_HFCLKSTARTED"; };
template<> struct address_map< 0x40000104 > { static constexpr const char * name_str = "CLOCK::EVENTS_LFCLKSTARTED"; };
template<> struct address_map< 0x40000108 > { static constexpr const char * name_str = "POWER::EVENTS_POFWARN"; };
template<> struct address_map< 0x4000010c > { static constexpr const char * name_str = "CLOCK::EVENTS_DONE"; };
template<> struct address_map< 0x40000110 > { static constexpr const char * name_str = "CLOCK::EVENTS_CTTO"; };
template<> struct address_map< 0x40000304 > { static constexpr const char * name_str = "CLOCK::INTENSET"; };  /* svd2hpp: duplicate address for: CLOCK::INTENSET, POWER::INTENSET */
template<> struct address_map< 0x40000308 > { static constexpr const char * name_str = "CLOCK::INTENCLR"; };  /* svd2hpp: duplicate address for: CLOCK::INTENCLR, POWER::INTENCLR */
template<> struct address_map< 0x40000400 > { static constexpr const char * name_str = "POWER::RESETREAS"; };
template<> struct address_map< 0x40000408 > { static constexpr const char * name_str = "CLOCK::HFCLKRUN"; };
template<> struct address_map< 0x4000040c > { static constexpr const char * name_str = "CLOCK::HFCLKSTAT"; };
template<> struct address_map< 0x40000414 > { static constexpr const char * name_str = "CLOCK::LFCLKRUN"; };
template<> struct address_map< 0x40000418 > { static constexpr const char * name_str = "CLOCK::LFCLKSTAT"; };
template<> struct address_map< 0x4000041c > { static constexpr const char * name_str = "CLOCK::LFCLKSRCCOPY"; };
template<> struct address_map< 0x40000428 > { static constexpr const char * name_str = "POWER::RAMSTATUS"; };
template<> struct address_map< 0x40000500 > { static constexpr const char * name_str = "POWER::SYSTEMOFF"; };
template<> struct address_map< 0x40000510 > { static constexpr const char * name_str = "POWER::POFCON"; };
template<> struct address_map< 0x40000518 > { static constexpr const char * name_str = "CLOCK::LFCLKSRC"; };
template<> struct address_map< 0x4000051c > { static constexpr const char * name_str = "POWER::GPREGRET"; };
template<> struct address_map< 0x40000524 > { static constexpr const char * name_str = "POWER::RAMON"; };
template<> struct address_map< 0x40000528 > { static constexpr const char * name_str = "MPU::PERR0"; };
template<> struct address_map< 0x4000052c > { static constexpr const char * name_str = "MPU::RLENR0"; };
template<> struct address_map< 0x40000538 > { static constexpr const char * name_str = "CLOCK::CTIV"; };
template<> struct address_map< 0x40000544 > { static constexpr const char * name_str = "POWER::RESET"; };
template<> struct address_map< 0x40000550 > { static constexpr const char * name_str = "CLOCK::XTALFREQ"; };
template<> struct address_map< 0x40000554 > { static constexpr const char * name_str = "POWER::RAMONB"; };
template<> struct address_map< 0x40000578 > { static constexpr const char * name_str = "POWER::DCDCEN"; };
template<> struct address_map< 0x40000600 > { static constexpr const char * name_str = "MPU::PROTENSET0"; };
template<> struct address_map< 0x40000604 > { static constexpr const char * name_str = "MPU::PROTENSET1"; };
template<> struct address_map< 0x40000608 > { static constexpr const char * name_str = "MPU::DISABLEINDEBUG"; };
template<> struct address_map< 0x4000060c > { static constexpr const char * name_str = "MPU::PROTBLOCKSIZE"; };
template<> struct address_map< 0x40000a08 > { static constexpr const char * name_str = "POWER::DCDCFORCE"; };
template<> struct address_map< 0x40001000 > { static constexpr const char * name_str = "RADIO::TASKS_TXEN"; };
template<> struct address_map< 0x40001004 > { static constexpr const char * name_str = "RADIO::TASKS_RXEN"; };
template<> struct address_map< 0x40001008 > { static constexpr const char * name_str = "RADIO::TASKS_START"; };
template<> struct address_map< 0x4000100c > { static constexpr const char * name_str = "RADIO::TASKS_STOP"; };
template<> struct address_map< 0x40001010 > { static constexpr const char * name_str = "RADIO::TASKS_DISABLE"; };
template<> struct address_map< 0x40001014 > { static constexpr const char * name_str = "RADIO::TASKS_RSSISTART"; };
template<> struct address_map< 0x40001018 > { static constexpr const char * name_str = "RADIO::TASKS_RSSISTOP"; };
template<> struct address_map< 0x4000101c > { static constexpr const char * name_str = "RADIO::TASKS_BCSTART"; };
template<> struct address_map< 0x40001020 > { static constexpr const char * name_str = "RADIO::TASKS_BCSTOP"; };
template<> struct address_map< 0x40001100 > { static constexpr const char * name_str = "RADIO::EVENTS_READY"; };
template<> struct address_map< 0x40001104 > { static constexpr const char * name_str = "RADIO::EVENTS_ADDRESS"; };
template<> struct address_map< 0x40001108 > { static constexpr const char * name_str = "RADIO::EVENTS_PAYLOAD"; };
template<> struct address_map< 0x4000110c > { static constexpr const char * name_str = "RADIO::EVENTS_END"; };
template<> struct address_map< 0x40001110 > { static constexpr const char * name_str = "RADIO::EVENTS_DISABLED"; };
template<> struct address_map< 0x40001114 > { static constexpr const char * name_str = "RADIO::EVENTS_DEVMATCH"; };
template<> struct address_map< 0x40001118 > { static constexpr const char * name_str = "RADIO::EVENTS_DEVMISS"; };
template<> struct address_map< 0x4000111c > { static constexpr const char * name_str = "RADIO::EVENTS_RSSIEND"; };
template<> struct address_map< 0x40001128 > { static constexpr const char * name_str = "RADIO::EVENTS_BCMATCH"; };
template<> struct address_map< 0x40001200 > { static constexpr const char * name_str = "RADIO::SHORTS"; };
template<> struct address_map< 0x40001304 > { static constexpr const char * name_str = "RADIO::INTENSET"; };
template<> struct address_map< 0x40001308 > { static constexpr const char * name_str = "RADIO::INTENCLR"; };
template<> struct address_map< 0x40001400 > { static constexpr const char * name_str = "RADIO::CRCSTATUS"; };
template<> struct address_map< 0x40001408 > { static constexpr const char * name_str = "RADIO::RXMATCH"; };
template<> struct address_map< 0x4000140c > { static constexpr const char * name_str = "RADIO::RXCRC"; };
template<> struct address_map< 0x40001410 > { static constexpr const char * name_str = "RADIO::DAI"; };
template<> struct address_map< 0x40001504 > { static constexpr const char * name_str = "RADIO::PACKETPTR"; };
template<> struct address_map< 0x40001508 > { static constexpr const char * name_str = "RADIO::FREQUENCY"; };
template<> struct address_map< 0x4000150c > { static constexpr const char * name_str = "RADIO::TXPOWER"; };
template<> struct address_map< 0x40001510 > { static constexpr const char * name_str = "RADIO::MODE"; };
template<> struct address_map< 0x40001514 > { static constexpr const char * name_str = "RADIO::PCNF0"; };
template<> struct address_map< 0x40001518 > { static constexpr const char * name_str = "RADIO::PCNF1"; };
template<> struct address_map< 0x4000151c > { static constexpr const char * name_str = "RADIO::BASE0"; };
template<> struct address_map< 0x40001520 > { static constexpr const char * name_str = "RADIO::BASE1"; };
template<> struct address_map< 0x40001524 > { static constexpr const char * name_str = "RADIO::PREFIX0"; };
template<> struct address_map< 0x40001528 > { static constexpr const char * name_str = "RADIO::PREFIX1"; };
template<> struct address_map< 0x4000152c > { static constexpr const char * name_str = "RADIO::TXADDRESS"; };
template<> struct address_map< 0x40001530 > { static constexpr const char * name_str = "RADIO::RXADDRESSES"; };
template<> struct address_map< 0x40001534 > { static constexpr const char * name_str = "RADIO::CRCCNF"; };
template<> struct address_map< 0x40001538 > { static constexpr const char * name_str = "RADIO::CRCPOLY"; };
template<> struct address_map< 0x4000153c > { static constexpr const char * name_str = "RADIO::CRCINIT"; };
template<> struct address_map< 0x40001540 > { static constexpr const char * name_str = "RADIO::TEST"; };
template<> struct address_map< 0x40001544 > { static constexpr const char * name_str = "RADIO::TIFS"; };
template<> struct address_map< 0x40001548 > { static constexpr const char * name_str = "RADIO::RSSISAMPLE"; };
template<> struct address_map< 0x40001550 > { static constexpr const char * name_str = "RADIO::STATE"; };
template<> struct address_map< 0x40001554 > { static constexpr const char * name_str = "RADIO::DATAWHITEIV"; };
template<> struct address_map< 0x40001560 > { static constexpr const char * name_str = "RADIO::BCC"; };
template<> struct address_map< 0x40001600 > { static constexpr const char * name_str = "RADIO::DAB[%s]"; };
template<> struct address_map< 0x40001620 > { static constexpr const char * name_str = "RADIO::DAP[%s]"; };
template<> struct address_map< 0x40001640 > { static constexpr const char * name_str = "RADIO::DACNF"; };
template<> struct address_map< 0x40001724 > { static constexpr const char * name_str = "RADIO::OVERRIDE0"; };
template<> struct address_map< 0x40001728 > { static constexpr const char * name_str = "RADIO::OVERRIDE1"; };
template<> struct address_map< 0x4000172c > { static constexpr const char * name_str = "RADIO::OVERRIDE2"; };
template<> struct address_map< 0x40001730 > { static constexpr const char * name_str = "RADIO::OVERRIDE3"; };
template<> struct address_map< 0x40001734 > { static constexpr const char * name_str = "RADIO::OVERRIDE4"; };
template<> struct address_map< 0x40001ffc > { static constexpr const char * name_str = "RADIO::POWER"; };
template<> struct address_map< 0x40002000 > { static constexpr const char * name_str = "UART0::TASKS_STARTRX"; };
template<> struct address_map< 0x40002004 > { static constexpr const char * name_str = "UART0::TASKS_STOPRX"; };
template<> struct address_map< 0x40002008 > { static constexpr const char * name_str = "UART0::TASKS_STARTTX"; };
template<> struct address_map< 0x4000200c > { static constexpr const char * name_str = "UART0::TASKS_STOPTX"; };
template<> struct address_map< 0x4000201c > { static constexpr const char * name_str = "UART0::TASKS_SUSPEND"; };
template<> struct address_map< 0x40002100 > { static constexpr const char * name_str = "UART0::EVENTS_CTS"; };
template<> struct address_map< 0x40002104 > { static constexpr const char * name_str = "UART0::EVENTS_NCTS"; };
template<> struct address_map< 0x40002108 > { static constexpr const char * name_str = "UART0::EVENTS_RXDRDY"; };
template<> struct address_map< 0x4000211c > { static constexpr const char * name_str = "UART0::EVENTS_TXDRDY"; };
template<> struct address_map< 0x40002124 > { static constexpr const char * name_str = "UART0::EVENTS_ERROR"; };
template<> struct address_map< 0x40002144 > { static constexpr const char * name_str = "UART0::EVENTS_RXTO"; };
template<> struct address_map< 0x40002200 > { static constexpr const char * name_str = "UART0::SHORTS"; };
template<> struct address_map< 0x40002304 > { static constexpr const char * name_str = "UART0::INTENSET"; };
template<> struct address_map< 0x40002308 > { static constexpr const char * name_str = "UART0::INTENCLR"; };
template<> struct address_map< 0x40002480 > { static constexpr const char * name_str = "UART0::ERRORSRC"; };
template<> struct address_map< 0x40002500 > { static constexpr const char * name_str = "UART0::ENABLE"; };
template<> struct address_map< 0x40002508 > { static constexpr const char * name_str = "UART0::PSELRTS"; };
template<> struct address_map< 0x4000250c > { static constexpr const char * name_str = "UART0::PSELTXD"; };
template<> struct address_map< 0x40002510 > { static constexpr const char * name_str = "UART0::PSELCTS"; };
template<> struct address_map< 0x40002514 > { static constexpr const char * name_str = "UART0::PSELRXD"; };
template<> struct address_map< 0x40002518 > { static constexpr const char * name_str = "UART0::RXD"; };
template<> struct address_map< 0x4000251c > { static constexpr const char * name_str = "UART0::TXD"; };
template<> struct address_map< 0x40002524 > { static constexpr const char * name_str = "UART0::BAUDRATE"; };
template<> struct address_map< 0x4000256c > { static constexpr const char * name_str = "UART0::CONFIG"; };
template<> struct address_map< 0x40002ffc > { static constexpr const char * name_str = "UART0::POWER"; };
template<> struct address_map< 0x40003000 > { static constexpr const char * name_str = "TWI0::TASKS_STARTRX"; };
template<> struct address_map< 0x40003008 > { static constexpr const char * name_str = "TWI0::TASKS_STARTTX"; };
template<> struct address_map< 0x40003014 > { static constexpr const char * name_str = "TWI0::TASKS_STOP"; };
template<> struct address_map< 0x4000301c > { static constexpr const char * name_str = "TWI0::TASKS_SUSPEND"; };
template<> struct address_map< 0x40003020 > { static constexpr const char * name_str = "TWI0::TASKS_RESUME"; };
template<> struct address_map< 0x40003104 > { static constexpr const char * name_str = "TWI0::EVENTS_STOPPED"; };
template<> struct address_map< 0x40003108 > { static constexpr const char * name_str = "SPI0::EVENTS_READY"; };  /* svd2hpp: duplicate address for: SPI0::EVENTS_READY, TWI0::EVENTS_RXDREADY */
template<> struct address_map< 0x4000311c > { static constexpr const char * name_str = "TWI0::EVENTS_TXDSENT"; };
template<> struct address_map< 0x40003124 > { static constexpr const char * name_str = "TWI0::EVENTS_ERROR"; };
template<> struct address_map< 0x40003138 > { static constexpr const char * name_str = "TWI0::EVENTS_BB"; };
template<> struct address_map< 0x40003148 > { static constexpr const char * name_str = "TWI0::EVENTS_SUSPENDED"; };
template<> struct address_map< 0x40003200 > { static constexpr const char * name_str = "TWI0::SHORTS"; };
template<> struct address_map< 0x40003304 > { static constexpr const char * name_str = "TWI0::INTENSET"; };  /* svd2hpp: duplicate address for: SPI0::INTENSET, TWI0::INTENSET */
template<> struct address_map< 0x40003308 > { static constexpr const char * name_str = "TWI0::INTENCLR"; };  /* svd2hpp: duplicate address for: SPI0::INTENCLR, TWI0::INTENCLR */
template<> struct address_map< 0x400034c4 > { static constexpr const char * name_str = "TWI0::ERRORSRC"; };
template<> struct address_map< 0x40003500 > { static constexpr const char * name_str = "TWI0::ENABLE"; };  /* svd2hpp: duplicate address for: SPI0::ENABLE, TWI0::ENABLE */
template<> struct address_map< 0x40003508 > { static constexpr const char * name_str = "TWI0::PSELSCL"; };  /* svd2hpp: duplicate address for: SPI0::PSELSCK, TWI0::PSELSCL */
template<> struct address_map< 0x4000350c > { static constexpr const char * name_str = "TWI0::PSELSDA"; };  /* svd2hpp: duplicate address for: SPI0::PSELMOSI, TWI0::PSELSDA */
template<> struct address_map< 0x40003510 > { static constexpr const char * name_str = "SPI0::PSELMISO"; };
template<> struct address_map< 0x40003518 > { static constexpr const char * name_str = "TWI0::RXD"; };  /* svd2hpp: duplicate address for: SPI0::RXD, TWI0::RXD */
template<> struct address_map< 0x4000351c > { static constexpr const char * name_str = "TWI0::TXD"; };  /* svd2hpp: duplicate address for: SPI0::TXD, TWI0::TXD */
template<> struct address_map< 0x40003524 > { static constexpr const char * name_str = "TWI0::FREQUENCY"; };  /* svd2hpp: duplicate address for: SPI0::FREQUENCY, TWI0::FREQUENCY */
template<> struct address_map< 0x40003554 > { static constexpr const char * name_str = "SPI0::CONFIG"; };
template<> struct address_map< 0x40003588 > { static constexpr const char * name_str = "TWI0::ADDRESS"; };
template<> struct address_map< 0x40003ffc > { static constexpr const char * name_str = "TWI0::POWER"; };  /* svd2hpp: duplicate address for: SPI0::POWER, TWI0::POWER */
template<> struct address_map< 0x40004000 > { static constexpr const char * name_str = "TWI1::TASKS_STARTRX"; };
template<> struct address_map< 0x40004008 > { static constexpr const char * name_str = "TWI1::TASKS_STARTTX"; };
template<> struct address_map< 0x40004010 > { static constexpr const char * name_str = "SPIM1::TASKS_START"; };
template<> struct address_map< 0x40004014 > { static constexpr const char * name_str = "TWI1::TASKS_STOP"; };  /* svd2hpp: duplicate address for: SPIM1::TASKS_STOP, TWI1::TASKS_STOP */
template<> struct address_map< 0x4000401c > { static constexpr const char * name_str = "TWI1::TASKS_SUSPEND"; };  /* svd2hpp: duplicate address for: SPIM1::TASKS_SUSPEND, TWI1::TASKS_SUSPEND */
template<> struct address_map< 0x40004020 > { static constexpr const char * name_str = "TWI1::TASKS_RESUME"; };  /* svd2hpp: duplicate address for: SPIM1::TASKS_RESUME, TWI1::TASKS_RESUME */
template<> struct address_map< 0x40004024 > { static constexpr const char * name_str = "SPIS1::TASKS_ACQUIRE"; };
template<> struct address_map< 0x40004028 > { static constexpr const char * name_str = "SPIS1::TASKS_RELEASE"; };
template<> struct address_map< 0x40004104 > { static constexpr const char * name_str = "SPIS1::EVENTS_END"; };  /* svd2hpp: duplicate address for: SPIM1::EVENTS_STOPPED, SPIS1::EVENTS_END, TWI1::EVENTS_STOPPED */
template<> struct address_map< 0x40004108 > { static constexpr const char * name_str = "SPI1::EVENTS_READY"; };  /* svd2hpp: duplicate address for: SPI1::EVENTS_READY, TWI1::EVENTS_RXDREADY */
template<> struct address_map< 0x40004110 > { static constexpr const char * name_str = "SPIM1::EVENTS_ENDRX"; };
template<> struct address_map< 0x4000411c > { static constexpr const char * name_str = "TWI1::EVENTS_TXDSENT"; };
template<> struct address_map< 0x40004120 > { static constexpr const char * name_str = "SPIM1::EVENTS_ENDTX"; };
template<> struct address_map< 0x40004124 > { static constexpr const char * name_str = "TWI1::EVENTS_ERROR"; };
template<> struct address_map< 0x40004128 > { static constexpr const char * name_str = "SPIS1::EVENTS_ACQUIRED"; };
template<> struct address_map< 0x40004138 > { static constexpr const char * name_str = "TWI1::EVENTS_BB"; };
template<> struct address_map< 0x40004148 > { static constexpr const char * name_str = "TWI1::EVENTS_SUSPENDED"; };
template<> struct address_map< 0x4000414c > { static constexpr const char * name_str = "SPIM1::EVENTS_STARTED"; };
template<> struct address_map< 0x40004200 > { static constexpr const char * name_str = "TWI1::SHORTS"; };  /* svd2hpp: duplicate address for: SPIS1::SHORTS, TWI1::SHORTS */
template<> struct address_map< 0x40004304 > { static constexpr const char * name_str = "TWI1::INTENSET"; };  /* svd2hpp: duplicate address for: SPI1::INTENSET, SPIM1::INTENSET, SPIS1::INTENSET, TWI1::INTENSET */
template<> struct address_map< 0x40004308 > { static constexpr const char * name_str = "TWI1::INTENCLR"; };  /* svd2hpp: duplicate address for: SPI1::INTENCLR, SPIM1::INTENCLR, SPIS1::INTENCLR, TWI1::INTENCLR */
template<> struct address_map< 0x40004400 > { static constexpr const char * name_str = "SPIS1::SEMSTAT"; };
template<> struct address_map< 0x40004440 > { static constexpr const char * name_str = "SPIS1::STATUS"; };
template<> struct address_map< 0x400044c4 > { static constexpr const char * name_str = "TWI1::ERRORSRC"; };
template<> struct address_map< 0x40004500 > { static constexpr const char * name_str = "TWI1::ENABLE"; };  /* svd2hpp: duplicate address for: SPI1::ENABLE, SPIM1::ENABLE, SPIS1::ENABLE, TWI1::ENABLE */
template<> struct address_map< 0x40004508 > { static constexpr const char * name_str = "TWI1::PSELSCL"; };  /* svd2hpp: duplicate address for: SPI1::PSELSCK, SPIS1::PSELSCK, TWI1::PSELSCL */
template<> struct address_map< 0x4000450c > { static constexpr const char * name_str = "TWI1::PSELSDA"; };  /* svd2hpp: duplicate address for: SPI1::PSELMOSI, SPIS1::PSELMISO, TWI1::PSELSDA */
template<> struct address_map< 0x40004510 > { static constexpr const char * name_str = "SPI1::PSELMISO"; };  /* svd2hpp: duplicate address for: SPI1::PSELMISO, SPIS1::PSELMOSI */
template<> struct address_map< 0x40004514 > { static constexpr const char * name_str = "SPIS1::PSELCSN"; };
template<> struct address_map< 0x40004518 > { static constexpr const char * name_str = "TWI1::RXD"; };  /* svd2hpp: duplicate address for: SPI1::RXD, TWI1::RXD */
template<> struct address_map< 0x4000451c > { static constexpr const char * name_str = "TWI1::TXD"; };  /* svd2hpp: duplicate address for: SPI1::TXD, TWI1::TXD */
template<> struct address_map< 0x40004524 > { static constexpr const char * name_str = "TWI1::FREQUENCY"; };  /* svd2hpp: duplicate address for: SPI1::FREQUENCY, SPIM1::FREQUENCY, TWI1::FREQUENCY */
template<> struct address_map< 0x40004534 > { static constexpr const char * name_str = "SPIS1::RXDPTR"; };
template<> struct address_map< 0x40004538 > { static constexpr const char * name_str = "SPIS1::MAXRX"; };
template<> struct address_map< 0x4000453c > { static constexpr const char * name_str = "SPIS1::AMOUNTRX"; };
template<> struct address_map< 0x40004544 > { static constexpr const char * name_str = "SPIS1::TXDPTR"; };
template<> struct address_map< 0x40004548 > { static constexpr const char * name_str = "SPIS1::MAXTX"; };
template<> struct address_map< 0x4000454c > { static constexpr const char * name_str = "SPIS1::AMOUNTTX"; };
template<> struct address_map< 0x40004554 > { static constexpr const char * name_str = "SPI1::CONFIG"; };  /* svd2hpp: duplicate address for: SPI1::CONFIG, SPIM1::CONFIG, SPIS1::CONFIG */
template<> struct address_map< 0x4000455c > { static constexpr const char * name_str = "SPIS1::DEF"; };
template<> struct address_map< 0x40004588 > { static constexpr const char * name_str = "TWI1::ADDRESS"; };
template<> struct address_map< 0x400045c0 > { static constexpr const char * name_str = "SPIM1::ORC"; };  /* svd2hpp: duplicate address for: SPIM1::ORC, SPIS1::ORC */
template<> struct address_map< 0x40004ffc > { static constexpr const char * name_str = "TWI1::POWER"; };  /* svd2hpp: duplicate address for: SPI1::POWER, SPIM1::POWER, SPIS1::POWER, TWI1::POWER */
template<> struct address_map< 0x40006000 > { static constexpr const char * name_str = "GPIOTE::TASKS_OUT[%s]"; };
template<> struct address_map< 0x40006100 > { static constexpr const char * name_str = "GPIOTE::EVENTS_IN[%s]"; };
template<> struct address_map< 0x4000617c > { static constexpr const char * name_str = "GPIOTE::EVENTS_PORT"; };
template<> struct address_map< 0x40006304 > { static constexpr const char * name_str = "GPIOTE::INTENSET"; };
template<> struct address_map< 0x40006308 > { static constexpr const char * name_str = "GPIOTE::INTENCLR"; };
template<> struct address_map< 0x40006510 > { static constexpr const char * name_str = "GPIOTE::CONFIG[%s]"; };
template<> struct address_map< 0x40006ffc > { static constexpr const char * name_str = "GPIOTE::POWER"; };
template<> struct address_map< 0x40007000 > { static constexpr const char * name_str = "ADC::TASKS_START"; };
template<> struct address_map< 0x40007004 > { static constexpr const char * name_str = "ADC::TASKS_STOP"; };
template<> struct address_map< 0x40007100 > { static constexpr const char * name_str = "ADC::EVENTS_END"; };
template<> struct address_map< 0x40007304 > { static constexpr const char * name_str = "ADC::INTENSET"; };
template<> struct address_map< 0x40007308 > { static constexpr const char * name_str = "ADC::INTENCLR"; };
template<> struct address_map< 0x40007400 > { static constexpr const char * name_str = "ADC::BUSY"; };
template<> struct address_map< 0x40007500 > { static constexpr const char * name_str = "ADC::ENABLE"; };
template<> struct address_map< 0x40007504 > { static constexpr const char * name_str = "ADC::CONFIG"; };
template<> struct address_map< 0x40007508 > { static constexpr const char * name_str = "ADC::RESULT"; };
template<> struct address_map< 0x40007ffc > { static constexpr const char * name_str = "ADC::POWER"; };
template<> struct address_map< 0x40008000 > { static constexpr const char * name_str = "TIMER0::TASKS_START"; };
template<> struct address_map< 0x40008004 > { static constexpr const char * name_str = "TIMER0::TASKS_STOP"; };
template<> struct address_map< 0x40008008 > { static constexpr const char * name_str = "TIMER0::TASKS_COUNT"; };
template<> struct address_map< 0x4000800c > { static constexpr const char * name_str = "TIMER0::TASKS_CLEAR"; };
template<> struct address_map< 0x40008010 > { static constexpr const char * name_str = "TIMER0::TASKS_SHUTDOWN"; };
template<> struct address_map< 0x40008040 > { static constexpr const char * name_str = "TIMER0::TASKS_CAPTURE[%s]"; };
template<> struct address_map< 0x40008140 > { static constexpr const char * name_str = "TIMER0::EVENTS_COMPARE[%s]"; };
template<> struct address_map< 0x40008200 > { static constexpr const char * name_str = "TIMER0::SHORTS"; };
template<> struct address_map< 0x40008304 > { static constexpr const char * name_str = "TIMER0::INTENSET"; };
template<> struct address_map< 0x40008308 > { static constexpr const char * name_str = "TIMER0::INTENCLR"; };
template<> struct address_map< 0x40008504 > { static constexpr const char * name_str = "TIMER0::MODE"; };
template<> struct address_map< 0x40008508 > { static constexpr const char * name_str = "TIMER0::BITMODE"; };
template<> struct address_map< 0x40008510 > { static constexpr const char * name_str = "TIMER0::PRESCALER"; };
template<> struct address_map< 0x40008540 > { static constexpr const char * name_str = "TIMER0::CC[%s]"; };
template<> struct address_map< 0x40008ffc > { static constexpr const char * name_str = "TIMER0::POWER"; };
template<> struct address_map< 0x40009000 > { static constexpr const char * name_str = "TIMER1::TASKS_START"; };
template<> struct address_map< 0x40009004 > { static constexpr const char * name_str = "TIMER1::TASKS_STOP"; };
template<> struct address_map< 0x40009008 > { static constexpr const char * name_str = "TIMER1::TASKS_COUNT"; };
template<> struct address_map< 0x4000900c > { static constexpr const char * name_str = "TIMER1::TASKS_CLEAR"; };
template<> struct address_map< 0x40009010 > { static constexpr const char * name_str = "TIMER1::TASKS_SHUTDOWN"; };
template<> struct address_map< 0x40009040 > { static constexpr const char * name_str = "TIMER1::TASKS_CAPTURE[%s]"; };
template<> struct address_map< 0x40009140 > { static constexpr const char * name_str = "TIMER1::EVENTS_COMPARE[%s]"; };
template<> struct address_map< 0x40009200 > { static constexpr const char * name_str = "TIMER1::SHORTS"; };
template<> struct address_map< 0x40009304 > { static constexpr const char * name_str = "TIMER1::INTENSET"; };
template<> struct address_map< 0x40009308 > { static constexpr const char * name_str = "TIMER1::INTENCLR"; };
template<> struct address_map< 0x40009504 > { static constexpr const char * name_str = "TIMER1::MODE"; };
template<> struct address_map< 0x40009508 > { static constexpr const char * name_str = "TIMER1::BITMODE"; };
template<> struct address_map< 0x40009510 > { static constexpr const char * name_str = "TIMER1::PRESCALER"; };
template<> struct address_map< 0x40009540 > { static constexpr const char * name_str = "TIMER1::CC[%s]"; };
template<> struct address_map< 0x40009ffc > { static constexpr const char * name_str = "TIMER1::POWER"; };
template<> struct address_map< 0x4000a000 > { static constexpr const char * name_str = "TIMER2::TASKS_START"; };
template<> struct address_map< 0x4000a004 > { static constexpr const char * name_str = "TIMER2::TASKS_STOP"; };
template<> struct address_map< 0x4000a008 > { static constexpr const char * name_str = "TIMER2::TASKS_COUNT"; };
template<> struct address_map< 0x4000a00c > { static constexpr const char * name_str = "TIMER2::TASKS_CLEAR"; };
template<> struct address_map< 0x4000a010 > { static constexpr const char * name_str = "TIMER2::TASKS_SHUTDOWN"; };
template<> struct address_map< 0x4000a040 > { static constexpr const char * name_str = "TIMER2::TASKS_CAPTURE[%s]"; };
template<> struct address_map< 0x4000a140 > { static constexpr const char * name_str = "TIMER2::EVENTS_COMPARE[%s]"; };
template<> struct address_map< 0x4000a200 > { static constexpr const char * name_str = "TIMER2::SHORTS"; };
template<> struct address_map< 0x4000a304 > { static constexpr const char * name_str = "TIMER2::INTENSET"; };
template<> struct address_map< 0x4000a308 > { static constexpr const char * name_str = "TIMER2::INTENCLR"; };
template<> struct address_map< 0x4000a504 > { static constexpr const char * name_str = "TIMER2::MODE"; };
template<> struct address_map< 0x4000a508 > { static constexpr const char * name_str = "TIMER2::BITMODE"; };
template<> struct address_map< 0x4000a510 > { static constexpr const char * name_str = "TIMER2::PRESCALER"; };
template<> struct address_map< 0x4000a540 > { static constexpr const char * name_str = "TIMER2::CC[%s]"; };
template<> struct address_map< 0x4000affc > { static constexpr const char * name_str = "TIMER2::POWER"; };
template<> struct address_map< 0x4000b000 > { static constexpr const char * name_str = "RTC0::TASKS_START"; };
template<> struct address_map< 0x4000b004 > { static constexpr const char * name_str = "RTC0::TASKS_STOP"; };
template<> struct address_map< 0x4000b008 > { static constexpr const char * name_str = "RTC0::TASKS_CLEAR"; };
template<> struct address_map< 0x4000b00c > { static constexpr const char * name_str = "RTC0::TASKS_TRIGOVRFLW"; };
template<> struct address_map< 0x4000b100 > { static constexpr const char * name_str = "RTC0::EVENTS_TICK"; };
template<> struct address_map< 0x4000b104 > { static constexpr const char * name_str = "RTC0::EVENTS_OVRFLW"; };
template<> struct address_map< 0x4000b140 > { static constexpr const char * name_str = "RTC0::EVENTS_COMPARE[%s]"; };
template<> struct address_map< 0x4000b304 > { static constexpr const char * name_str = "RTC0::INTENSET"; };
template<> struct address_map< 0x4000b308 > { static constexpr const char * name_str = "RTC0::INTENCLR"; };
template<> struct address_map< 0x4000b340 > { static constexpr const char * name_str = "RTC0::EVTEN"; };
template<> struct address_map< 0x4000b344 > { static constexpr const char * name_str = "RTC0::EVTENSET"; };
template<> struct address_map< 0x4000b348 > { static constexpr const char * name_str = "RTC0::EVTENCLR"; };
template<> struct address_map< 0x4000b504 > { static constexpr const char * name_str = "RTC0::COUNTER"; };
template<> struct address_map< 0x4000b508 > { static constexpr const char * name_str = "RTC0::PRESCALER"; };
template<> struct address_map< 0x4000b540 > { static constexpr const char * name_str = "RTC0::CC[%s]"; };
template<> struct address_map< 0x4000bffc > { static constexpr const char * name_str = "RTC0::POWER"; };
template<> struct address_map< 0x4000c000 > { static constexpr const char * name_str = "TEMP::TASKS_START"; };
template<> struct address_map< 0x4000c004 > { static constexpr const char * name_str = "TEMP::TASKS_STOP"; };
template<> struct address_map< 0x4000c100 > { static constexpr const char * name_str = "TEMP::EVENTS_DATARDY"; };
template<> struct address_map< 0x4000c304 > { static constexpr const char * name_str = "TEMP::INTENSET"; };
template<> struct address_map< 0x4000c308 > { static constexpr const char * name_str = "TEMP::INTENCLR"; };
template<> struct address_map< 0x4000c508 > { static constexpr const char * name_str = "TEMP::TEMP"; };
template<> struct address_map< 0x4000cffc > { static constexpr const char * name_str = "TEMP::POWER"; };
template<> struct address_map< 0x4000d000 > { static constexpr const char * name_str = "RNG::TASKS_START"; };
template<> struct address_map< 0x4000d004 > { static constexpr const char * name_str = "RNG::TASKS_STOP"; };
template<> struct address_map< 0x4000d100 > { static constexpr const char * name_str = "RNG::EVENTS_VALRDY"; };
template<> struct address_map< 0x4000d200 > { static constexpr const char * name_str = "RNG::SHORTS"; };
template<> struct address_map< 0x4000d304 > { static constexpr const char * name_str = "RNG::INTENSET"; };
template<> struct address_map< 0x4000d308 > { static constexpr const char * name_str = "RNG::INTENCLR"; };
template<> struct address_map< 0x4000d504 > { static constexpr const char * name_str = "RNG::CONFIG"; };
template<> struct address_map< 0x4000d508 > { static constexpr const char * name_str = "RNG::VALUE"; };
template<> struct address_map< 0x4000dffc > { static constexpr const char * name_str = "RNG::POWER"; };
template<> struct address_map< 0x4000e000 > { static constexpr const char * name_str = "ECB::TASKS_STARTECB"; };
template<> struct address_map< 0x4000e004 > { static constexpr const char * name_str = "ECB::TASKS_STOPECB"; };
template<> struct address_map< 0x4000e100 > { static constexpr const char * name_str = "ECB::EVENTS_ENDECB"; };
template<> struct address_map< 0x4000e104 > { static constexpr const char * name_str = "ECB::EVENTS_ERRORECB"; };
template<> struct address_map< 0x4000e304 > { static constexpr const char * name_str = "ECB::INTENSET"; };
template<> struct address_map< 0x4000e308 > { static constexpr const char * name_str = "ECB::INTENCLR"; };
template<> struct address_map< 0x4000e504 > { static constexpr const char * name_str = "ECB::ECBDATAPTR"; };
template<> struct address_map< 0x4000effc > { static constexpr const char * name_str = "ECB::POWER"; };
template<> struct address_map< 0x4000f000 > { static constexpr const char * name_str = "CCM::TASKS_KSGEN"; };  /* svd2hpp: duplicate address for: AAR::TASKS_START, CCM::TASKS_KSGEN */
template<> struct address_map< 0x4000f004 > { static constexpr const char * name_str = "CCM::TASKS_CRYPT"; };
template<> struct address_map< 0x4000f008 > { static constexpr const char * name_str = "CCM::TASKS_STOP"; };  /* svd2hpp: duplicate address for: AAR::TASKS_STOP, CCM::TASKS_STOP */
template<> struct address_map< 0x4000f100 > { static constexpr const char * name_str = "AAR::EVENTS_END"; };  /* svd2hpp: duplicate address for: AAR::EVENTS_END, CCM::EVENTS_ENDKSGEN */
template<> struct address_map< 0x4000f104 > { static constexpr const char * name_str = "CCM::EVENTS_ENDCRYPT"; };  /* svd2hpp: duplicate address for: AAR::EVENTS_RESOLVED, CCM::EVENTS_ENDCRYPT */
template<> struct address_map< 0x4000f108 > { static constexpr const char * name_str = "CCM::EVENTS_ERROR"; };  /* svd2hpp: duplicate address for: AAR::EVENTS_NOTRESOLVED, CCM::EVENTS_ERROR */
template<> struct address_map< 0x4000f200 > { static constexpr const char * name_str = "CCM::SHORTS"; };
template<> struct address_map< 0x4000f304 > { static constexpr const char * name_str = "CCM::INTENSET"; };  /* svd2hpp: duplicate address for: AAR::INTENSET, CCM::INTENSET */
template<> struct address_map< 0x4000f308 > { static constexpr const char * name_str = "CCM::INTENCLR"; };  /* svd2hpp: duplicate address for: AAR::INTENCLR, CCM::INTENCLR */
template<> struct address_map< 0x4000f400 > { static constexpr const char * name_str = "AAR::STATUS"; };  /* svd2hpp: duplicate address for: AAR::STATUS, CCM::MICSTATUS */
template<> struct address_map< 0x4000f500 > { static constexpr const char * name_str = "CCM::ENABLE"; };  /* svd2hpp: duplicate address for: AAR::ENABLE, CCM::ENABLE */
template<> struct address_map< 0x4000f504 > { static constexpr const char * name_str = "CCM::MODE"; };  /* svd2hpp: duplicate address for: AAR::NIRK, CCM::MODE */
template<> struct address_map< 0x4000f508 > { static constexpr const char * name_str = "CCM::CNFPTR"; };  /* svd2hpp: duplicate address for: AAR::IRKPTR, CCM::CNFPTR */
template<> struct address_map< 0x4000f50c > { static constexpr const char * name_str = "CCM::INPTR"; };
template<> struct address_map< 0x4000f510 > { static constexpr const char * name_str = "CCM::OUTPTR"; };  /* svd2hpp: duplicate address for: AAR::ADDRPTR, CCM::OUTPTR */
template<> struct address_map< 0x4000f514 > { static constexpr const char * name_str = "CCM::SCRATCHPTR"; };  /* svd2hpp: duplicate address for: AAR::SCRATCHPTR, CCM::SCRATCHPTR */
template<> struct address_map< 0x4000fffc > { static constexpr const char * name_str = "CCM::POWER"; };  /* svd2hpp: duplicate address for: AAR::POWER, CCM::POWER */
template<> struct address_map< 0x40010000 > { static constexpr const char * name_str = "WDT::TASKS_START"; };
template<> struct address_map< 0x40010100 > { static constexpr const char * name_str = "WDT::EVENTS_TIMEOUT"; };
template<> struct address_map< 0x40010304 > { static constexpr const char * name_str = "WDT::INTENSET"; };
template<> struct address_map< 0x40010308 > { static constexpr const char * name_str = "WDT::INTENCLR"; };
template<> struct address_map< 0x40010400 > { static constexpr const char * name_str = "WDT::RUNSTATUS"; };
template<> struct address_map< 0x40010404 > { static constexpr const char * name_str = "WDT::REQSTATUS"; };
template<> struct address_map< 0x40010504 > { static constexpr const char * name_str = "WDT::CRV"; };
template<> struct address_map< 0x40010508 > { static constexpr const char * name_str = "WDT::RREN"; };
template<> struct address_map< 0x4001050c > { static constexpr const char * name_str = "WDT::CONFIG"; };
template<> struct address_map< 0x40010600 > { static constexpr const char * name_str = "WDT::RR[%s]"; };
template<> struct address_map< 0x40010ffc > { static constexpr const char * name_str = "WDT::POWER"; };
template<> struct address_map< 0x40011000 > { static constexpr const char * name_str = "RTC1::TASKS_START"; };
template<> struct address_map< 0x40011004 > { static constexpr const char * name_str = "RTC1::TASKS_STOP"; };
template<> struct address_map< 0x40011008 > { static constexpr const char * name_str = "RTC1::TASKS_CLEAR"; };
template<> struct address_map< 0x4001100c > { static constexpr const char * name_str = "RTC1::TASKS_TRIGOVRFLW"; };
template<> struct address_map< 0x40011100 > { static constexpr const char * name_str = "RTC1::EVENTS_TICK"; };
template<> struct address_map< 0x40011104 > { static constexpr const char * name_str = "RTC1::EVENTS_OVRFLW"; };
template<> struct address_map< 0x40011140 > { static constexpr const char * name_str = "RTC1::EVENTS_COMPARE[%s]"; };
template<> struct address_map< 0x40011304 > { static constexpr const char * name_str = "RTC1::INTENSET"; };
template<> struct address_map< 0x40011308 > { static constexpr const char * name_str = "RTC1::INTENCLR"; };
template<> struct address_map< 0x40011340 > { static constexpr const char * name_str = "RTC1::EVTEN"; };
template<> struct address_map< 0x40011344 > { static constexpr const char * name_str = "RTC1::EVTENSET"; };
template<> struct address_map< 0x40011348 > { static constexpr const char * name_str = "RTC1::EVTENCLR"; };
template<> struct address_map< 0x40011504 > { static constexpr const char * name_str = "RTC1::COUNTER"; };
template<> struct address_map< 0x40011508 > { static constexpr const char * name_str = "RTC1::PRESCALER"; };
template<> struct address_map< 0x40011540 > { static constexpr const char * name_str = "RTC1::CC[%s]"; };
template<> struct address_map< 0x40011ffc > { static constexpr const char * name_str = "RTC1::POWER"; };
template<> struct address_map< 0x40012000 > { static constexpr const char * name_str = "QDEC::TASKS_START"; };
template<> struct address_map< 0x40012004 > { static constexpr const char * name_str = "QDEC::TASKS_STOP"; };
template<> struct address_map< 0x40012008 > { static constexpr const char * name_str = "QDEC::TASKS_READCLRACC"; };
template<> struct address_map< 0x40012100 > { static constexpr const char * name_str = "QDEC::EVENTS_SAMPLERDY"; };
template<> struct address_map< 0x40012104 > { static constexpr const char * name_str = "QDEC::EVENTS_REPORTRDY"; };
template<> struct address_map< 0x40012108 > { static constexpr const char * name_str = "QDEC::EVENTS_ACCOF"; };
template<> struct address_map< 0x40012200 > { static constexpr const char * name_str = "QDEC::SHORTS"; };
template<> struct address_map< 0x40012304 > { static constexpr const char * name_str = "QDEC::INTENSET"; };
template<> struct address_map< 0x40012308 > { static constexpr const char * name_str = "QDEC::INTENCLR"; };
template<> struct address_map< 0x40012500 > { static constexpr const char * name_str = "QDEC::ENABLE"; };
template<> struct address_map< 0x40012504 > { static constexpr const char * name_str = "QDEC::LEDPOL"; };
template<> struct address_map< 0x40012508 > { static constexpr const char * name_str = "QDEC::SAMPLEPER"; };
template<> struct address_map< 0x4001250c > { static constexpr const char * name_str = "QDEC::SAMPLE"; };
template<> struct address_map< 0x40012510 > { static constexpr const char * name_str = "QDEC::REPORTPER"; };
template<> struct address_map< 0x40012514 > { static constexpr const char * name_str = "QDEC::ACC"; };
template<> struct address_map< 0x40012518 > { static constexpr const char * name_str = "QDEC::ACCREAD"; };
template<> struct address_map< 0x4001251c > { static constexpr const char * name_str = "QDEC::PSELLED"; };
template<> struct address_map< 0x40012520 > { static constexpr const char * name_str = "QDEC::PSELA"; };
template<> struct address_map< 0x40012524 > { static constexpr const char * name_str = "QDEC::PSELB"; };
template<> struct address_map< 0x40012528 > { static constexpr const char * name_str = "QDEC::DBFEN"; };
template<> struct address_map< 0x40012540 > { static constexpr const char * name_str = "QDEC::LEDPRE"; };
template<> struct address_map< 0x40012544 > { static constexpr const char * name_str = "QDEC::ACCDBL"; };
template<> struct address_map< 0x40012548 > { static constexpr const char * name_str = "QDEC::ACCDBLREAD"; };
template<> struct address_map< 0x40012ffc > { static constexpr const char * name_str = "QDEC::POWER"; };
template<> struct address_map< 0x40013000 > { static constexpr const char * name_str = "LPCOMP::TASKS_START"; };
template<> struct address_map< 0x40013004 > { static constexpr const char * name_str = "LPCOMP::TASKS_STOP"; };
template<> struct address_map< 0x40013008 > { static constexpr const char * name_str = "LPCOMP::TASKS_SAMPLE"; };
template<> struct address_map< 0x40013100 > { static constexpr const char * name_str = "LPCOMP::EVENTS_READY"; };
template<> struct address_map< 0x40013104 > { static constexpr const char * name_str = "LPCOMP::EVENTS_DOWN"; };
template<> struct address_map< 0x40013108 > { static constexpr const char * name_str = "LPCOMP::EVENTS_UP"; };
template<> struct address_map< 0x4001310c > { static constexpr const char * name_str = "LPCOMP::EVENTS_CROSS"; };
template<> struct address_map< 0x40013200 > { static constexpr const char * name_str = "LPCOMP::SHORTS"; };
template<> struct address_map< 0x40013304 > { static constexpr const char * name_str = "LPCOMP::INTENSET"; };
template<> struct address_map< 0x40013308 > { static constexpr const char * name_str = "LPCOMP::INTENCLR"; };
template<> struct address_map< 0x40013400 > { static constexpr const char * name_str = "LPCOMP::RESULT"; };
template<> struct address_map< 0x40013500 > { static constexpr const char * name_str = "LPCOMP::ENABLE"; };
template<> struct address_map< 0x40013504 > { static constexpr const char * name_str = "LPCOMP::PSEL"; };
template<> struct address_map< 0x40013508 > { static constexpr const char * name_str = "LPCOMP::REFSEL"; };
template<> struct address_map< 0x4001350c > { static constexpr const char * name_str = "LPCOMP::EXTREFSEL"; };
template<> struct address_map< 0x40013520 > { static constexpr const char * name_str = "LPCOMP::ANADETECT"; };
template<> struct address_map< 0x40013ffc > { static constexpr const char * name_str = "LPCOMP::POWER"; };
template<> struct address_map< 0x40014000 > { static constexpr const char * name_str = "SWI::UNUSED"; };
template<> struct address_map< 0x4001e400 > { static constexpr const char * name_str = "NVMC::READY"; };
template<> struct address_map< 0x4001e504 > { static constexpr const char * name_str = "NVMC::CONFIG"; };
template<> struct address_map< 0x4001e508 > { static constexpr const char * name_str = "NVMC::ERASEPCR1"; };  /* svd2hpp: duplicate address for: NVMC::ERASEPAGE, NVMC::ERASEPCR1 */
template<> struct address_map< 0x4001e50c > { static constexpr const char * name_str = "NVMC::ERASEALL"; };
template<> struct address_map< 0x4001e510 > { static constexpr const char * name_str = "NVMC::ERASEPCR0"; };
template<> struct address_map< 0x4001e514 > { static constexpr const char * name_str = "NVMC::ERASEUICR"; };
template<> struct address_map< 0x4001f500 > { static constexpr const char * name_str = "PPI::CHEN"; };
template<> struct address_map< 0x4001f504 > { static constexpr const char * name_str = "PPI::CHENSET"; };
template<> struct address_map< 0x4001f508 > { static constexpr const char * name_str = "PPI::CHENCLR"; };
template<> struct address_map< 0x4001f800 > { static constexpr const char * name_str = "PPI::CHG[%s]"; };
template<> struct address_map< 0x50000504 > { static constexpr const char * name_str = "GPIO::OUT"; };
template<> struct address_map< 0x50000508 > { static constexpr const char * name_str = "GPIO::OUTSET"; };
template<> struct address_map< 0x5000050c > { static constexpr const char * name_str = "GPIO::OUTCLR"; };
template<> struct address_map< 0x50000510 > { static constexpr const char * name_str = "GPIO::IN"; };
template<> struct address_map< 0x50000514 > { static constexpr const char * name_str = "GPIO::DIR"; };
template<> struct address_map< 0x50000518 > { static constexpr const char * name_str = "GPIO::DIRSET"; };
template<> struct address_map< 0x5000051c > { static constexpr const char * name_str = "GPIO::DIRCLR"; };
template<> struct address_map< 0x50000700 > { static constexpr const char * name_str = "GPIO::PIN_CNF[%s]"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
