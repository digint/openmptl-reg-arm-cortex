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
//  Import from CMSIS-SVD: "Freescale/MKV30F12810.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV30F12810
//  series: Kinetis_V
//  version: 1.6
//  description: MKV30F12810 Freescale Microcontroller
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
template<> struct address_map< 0x40008000 > { static constexpr const char * name_str = "DMA::CR"; };
template<> struct address_map< 0x40008004 > { static constexpr const char * name_str = "DMA::ES"; };
template<> struct address_map< 0x4000800c > { static constexpr const char * name_str = "DMA::ERQ"; };
template<> struct address_map< 0x40008014 > { static constexpr const char * name_str = "DMA::EEI"; };
template<> struct address_map< 0x40008018 > { static constexpr const char * name_str = "DMA::CEEI"; };
template<> struct address_map< 0x40008019 > { static constexpr const char * name_str = "DMA::SEEI"; };
template<> struct address_map< 0x4000801a > { static constexpr const char * name_str = "DMA::CERQ"; };
template<> struct address_map< 0x4000801b > { static constexpr const char * name_str = "DMA::SERQ"; };
template<> struct address_map< 0x4000801c > { static constexpr const char * name_str = "DMA::CDNE"; };
template<> struct address_map< 0x4000801d > { static constexpr const char * name_str = "DMA::SSRT"; };
template<> struct address_map< 0x4000801e > { static constexpr const char * name_str = "DMA::CERR"; };
template<> struct address_map< 0x4000801f > { static constexpr const char * name_str = "DMA::CINT"; };
template<> struct address_map< 0x40008024 > { static constexpr const char * name_str = "DMA::INT"; };
template<> struct address_map< 0x4000802c > { static constexpr const char * name_str = "DMA::ERR"; };
template<> struct address_map< 0x40008034 > { static constexpr const char * name_str = "DMA::HRS"; };
template<> struct address_map< 0x40008044 > { static constexpr const char * name_str = "DMA::EARS"; };
template<> struct address_map< 0x40008100 > { static constexpr const char * name_str = "DMA::DCHPRI%s"; };
template<> struct address_map< 0x40009000 > { static constexpr const char * name_str = "DMA::TCD%s_SADDR"; };
template<> struct address_map< 0x40009004 > { static constexpr const char * name_str = "DMA::TCD%s_SOFF"; };
template<> struct address_map< 0x40009006 > { static constexpr const char * name_str = "DMA::TCD%s_ATTR"; };
template<> struct address_map< 0x40009008 > { static constexpr const char * name_str = "DMA::TCD%s_NBYTES_MLNO"; };  /* svd2hpp: duplicate address for: DMA::TCD%s_NBYTES_MLNO, DMA::TCD%s_NBYTES_MLOFFNO, DMA::TCD%s_NBYTES_MLOFFYES */
template<> struct address_map< 0x4000900c > { static constexpr const char * name_str = "DMA::TCD%s_SLAST"; };
template<> struct address_map< 0x40009010 > { static constexpr const char * name_str = "DMA::TCD%s_DADDR"; };
template<> struct address_map< 0x40009014 > { static constexpr const char * name_str = "DMA::TCD%s_DOFF"; };
template<> struct address_map< 0x40009016 > { static constexpr const char * name_str = "DMA::TCD%s_CITER_ELINKNO"; };  /* svd2hpp: duplicate address for: DMA::TCD%s_CITER_ELINKNO, DMA::TCD%s_CITER_ELINKYES */
template<> struct address_map< 0x40009018 > { static constexpr const char * name_str = "DMA::TCD%s_DLASTSGA"; };
template<> struct address_map< 0x4000901c > { static constexpr const char * name_str = "DMA::TCD%s_CSR"; };
template<> struct address_map< 0x4000901e > { static constexpr const char * name_str = "DMA::TCD%s_BITER_ELINKNO"; };  /* svd2hpp: duplicate address for: DMA::TCD%s_BITER_ELINKNO, DMA::TCD%s_BITER_ELINKYES */
template<> struct address_map< 0x4001f000 > { static constexpr const char * name_str = "FMC::PFAPR"; };
template<> struct address_map< 0x4001f004 > { static constexpr const char * name_str = "FMC::PFB0CR"; };
template<> struct address_map< 0x4001f008 > { static constexpr const char * name_str = "FMC::PFB1CR"; };
template<> struct address_map< 0x4001f100 > { static constexpr const char * name_str = "FMC::TAGVDW0S%s"; };
template<> struct address_map< 0x4001f120 > { static constexpr const char * name_str = "FMC::TAGVDW1S%s"; };
template<> struct address_map< 0x4001f140 > { static constexpr const char * name_str = "FMC::TAGVDW2S%s"; };
template<> struct address_map< 0x4001f160 > { static constexpr const char * name_str = "FMC::TAGVDW3S%s"; };
template<> struct address_map< 0x4001f200 > { static constexpr const char * name_str = "FMC::DATAW0S%sU"; };
template<> struct address_map< 0x4001f204 > { static constexpr const char * name_str = "FMC::DATAW0S%sL"; };
template<> struct address_map< 0x4001f240 > { static constexpr const char * name_str = "FMC::DATAW1S%sU"; };
template<> struct address_map< 0x4001f244 > { static constexpr const char * name_str = "FMC::DATAW1S%sL"; };
template<> struct address_map< 0x4001f280 > { static constexpr const char * name_str = "FMC::DATAW2S%sU"; };
template<> struct address_map< 0x4001f284 > { static constexpr const char * name_str = "FMC::DATAW2S%sL"; };
template<> struct address_map< 0x4001f2c0 > { static constexpr const char * name_str = "FMC::DATAW3S%sU"; };
template<> struct address_map< 0x4001f2c4 > { static constexpr const char * name_str = "FMC::DATAW3S%sL"; };
template<> struct address_map< 0x40020000 > { static constexpr const char * name_str = "FTFA::FSTAT"; };
template<> struct address_map< 0x40020001 > { static constexpr const char * name_str = "FTFA::FCNFG"; };
template<> struct address_map< 0x40020002 > { static constexpr const char * name_str = "FTFA::FSEC"; };
template<> struct address_map< 0x40020003 > { static constexpr const char * name_str = "FTFA::FOPT"; };
template<> struct address_map< 0x40020004 > { static constexpr const char * name_str = "FTFA::FCCOB%s"; };
template<> struct address_map< 0x40020010 > { static constexpr const char * name_str = "FTFA::FPROT%s"; };
template<> struct address_map< 0x40020018 > { static constexpr const char * name_str = "FTFA::XACC%s"; };
template<> struct address_map< 0x40020020 > { static constexpr const char * name_str = "FTFA::SACC%s"; };
template<> struct address_map< 0x40020028 > { static constexpr const char * name_str = "FTFA::FACSS"; };
template<> struct address_map< 0x4002002b > { static constexpr const char * name_str = "FTFA::FACSN"; };
template<> struct address_map< 0x40021000 > { static constexpr const char * name_str = "DMAMUX::CHCFG%s"; };
template<> struct address_map< 0x40027000 > { static constexpr const char * name_str = "ADC1::SC1%s"; };
template<> struct address_map< 0x40027008 > { static constexpr const char * name_str = "ADC1::CFG1"; };
template<> struct address_map< 0x4002700c > { static constexpr const char * name_str = "ADC1::CFG2"; };
template<> struct address_map< 0x40027010 > { static constexpr const char * name_str = "ADC1::R%s"; };
template<> struct address_map< 0x40027018 > { static constexpr const char * name_str = "ADC1::CV%s"; };
template<> struct address_map< 0x40027020 > { static constexpr const char * name_str = "ADC1::SC2"; };
template<> struct address_map< 0x40027024 > { static constexpr const char * name_str = "ADC1::SC3"; };
template<> struct address_map< 0x40027028 > { static constexpr const char * name_str = "ADC1::OFS"; };
template<> struct address_map< 0x4002702c > { static constexpr const char * name_str = "ADC1::PG"; };
template<> struct address_map< 0x40027030 > { static constexpr const char * name_str = "ADC1::MG"; };
template<> struct address_map< 0x40027034 > { static constexpr const char * name_str = "ADC1::CLPD"; };
template<> struct address_map< 0x40027038 > { static constexpr const char * name_str = "ADC1::CLPS"; };
template<> struct address_map< 0x4002703c > { static constexpr const char * name_str = "ADC1::CLP4"; };
template<> struct address_map< 0x40027040 > { static constexpr const char * name_str = "ADC1::CLP3"; };
template<> struct address_map< 0x40027044 > { static constexpr const char * name_str = "ADC1::CLP2"; };
template<> struct address_map< 0x40027048 > { static constexpr const char * name_str = "ADC1::CLP1"; };
template<> struct address_map< 0x4002704c > { static constexpr const char * name_str = "ADC1::CLP0"; };
template<> struct address_map< 0x40027054 > { static constexpr const char * name_str = "ADC1::CLMD"; };
template<> struct address_map< 0x40027058 > { static constexpr const char * name_str = "ADC1::CLMS"; };
template<> struct address_map< 0x4002705c > { static constexpr const char * name_str = "ADC1::CLM4"; };
template<> struct address_map< 0x40027060 > { static constexpr const char * name_str = "ADC1::CLM3"; };
template<> struct address_map< 0x40027064 > { static constexpr const char * name_str = "ADC1::CLM2"; };
template<> struct address_map< 0x40027068 > { static constexpr const char * name_str = "ADC1::CLM1"; };
template<> struct address_map< 0x4002706c > { static constexpr const char * name_str = "ADC1::CLM0"; };
template<> struct address_map< 0x4002c000 > { static constexpr const char * name_str = "SPI0::MCR"; };
template<> struct address_map< 0x4002c008 > { static constexpr const char * name_str = "SPI0::TCR"; };
template<> struct address_map< 0x4002c00c > { static constexpr const char * name_str = "SPI0::CTAR%s"; };  /* svd2hpp: duplicate address for: SPI0::CTAR%s, SPI0::CTAR_SLAVE */
template<> struct address_map< 0x4002c02c > { static constexpr const char * name_str = "SPI0::SR"; };
template<> struct address_map< 0x4002c030 > { static constexpr const char * name_str = "SPI0::RSER"; };
template<> struct address_map< 0x4002c034 > { static constexpr const char * name_str = "SPI0::PUSHR"; };  /* svd2hpp: duplicate address for: SPI0::PUSHR, SPI0::PUSHR_SLAVE */
template<> struct address_map< 0x4002c038 > { static constexpr const char * name_str = "SPI0::POPR"; };
template<> struct address_map< 0x4002c03c > { static constexpr const char * name_str = "SPI0::TXFR%s"; };
template<> struct address_map< 0x4002c07c > { static constexpr const char * name_str = "SPI0::RXFR%s"; };
template<> struct address_map< 0x40032000 > { static constexpr const char * name_str = "CRC::DATA"; };  /* svd2hpp: duplicate address for: CRC::DATA, CRC::DATAL, CRC::DATALL */
template<> struct address_map< 0x40032001 > { static constexpr const char * name_str = "CRC::DATALU"; };
template<> struct address_map< 0x40032002 > { static constexpr const char * name_str = "CRC::DATAH"; };  /* svd2hpp: duplicate address for: CRC::DATAH, CRC::DATAHL */
template<> struct address_map< 0x40032003 > { static constexpr const char * name_str = "CRC::DATAHU"; };
template<> struct address_map< 0x40032004 > { static constexpr const char * name_str = "CRC::GPOLY"; };  /* svd2hpp: duplicate address for: CRC::GPOLY, CRC::GPOLYL, CRC::GPOLYLL */
template<> struct address_map< 0x40032005 > { static constexpr const char * name_str = "CRC::GPOLYLU"; };
template<> struct address_map< 0x40032006 > { static constexpr const char * name_str = "CRC::GPOLYH"; };  /* svd2hpp: duplicate address for: CRC::GPOLYH, CRC::GPOLYHL */
template<> struct address_map< 0x40032007 > { static constexpr const char * name_str = "CRC::GPOLYHU"; };
template<> struct address_map< 0x40032008 > { static constexpr const char * name_str = "CRC::CTRL"; };
template<> struct address_map< 0x4003200b > { static constexpr const char * name_str = "CRC::CTRLHU"; };
template<> struct address_map< 0x40036000 > { static constexpr const char * name_str = "PDB0::SC"; };
template<> struct address_map< 0x40036004 > { static constexpr const char * name_str = "PDB0::MOD"; };
template<> struct address_map< 0x40036008 > { static constexpr const char * name_str = "PDB0::CNT"; };
template<> struct address_map< 0x4003600c > { static constexpr const char * name_str = "PDB0::IDLY"; };
template<> struct address_map< 0x40036010 > { static constexpr const char * name_str = "PDB0::CH%sC1"; };
template<> struct address_map< 0x40036014 > { static constexpr const char * name_str = "PDB0::CH%sS"; };
template<> struct address_map< 0x40036018 > { static constexpr const char * name_str = "PDB0::CH%sDLY0"; };
template<> struct address_map< 0x4003601c > { static constexpr const char * name_str = "PDB0::CH%sDLY1"; };
template<> struct address_map< 0x40036150 > { static constexpr const char * name_str = "PDB0::DACINTC"; };
template<> struct address_map< 0x40036154 > { static constexpr const char * name_str = "PDB0::DACINT"; };
template<> struct address_map< 0x40036190 > { static constexpr const char * name_str = "PDB0::POEN"; };
template<> struct address_map< 0x40036194 > { static constexpr const char * name_str = "PDB0::PO%sDLY"; };
template<> struct address_map< 0x40037000 > { static constexpr const char * name_str = "PIT::MCR"; };
template<> struct address_map< 0x40037100 > { static constexpr const char * name_str = "PIT::LDVAL%s"; };
template<> struct address_map< 0x40037104 > { static constexpr const char * name_str = "PIT::CVAL%s"; };
template<> struct address_map< 0x40037108 > { static constexpr const char * name_str = "PIT::TCTRL%s"; };
template<> struct address_map< 0x4003710c > { static constexpr const char * name_str = "PIT::TFLG%s"; };
template<> struct address_map< 0x40038000 > { static constexpr const char * name_str = "FTM0::SC"; };
template<> struct address_map< 0x40038004 > { static constexpr const char * name_str = "FTM0::CNT"; };
template<> struct address_map< 0x40038008 > { static constexpr const char * name_str = "FTM0::MOD"; };
template<> struct address_map< 0x4003800c > { static constexpr const char * name_str = "FTM0::C%sSC"; };
template<> struct address_map< 0x40038010 > { static constexpr const char * name_str = "FTM0::C%sV"; };
template<> struct address_map< 0x4003804c > { static constexpr const char * name_str = "FTM0::CNTIN"; };
template<> struct address_map< 0x40038050 > { static constexpr const char * name_str = "FTM0::STATUS"; };
template<> struct address_map< 0x40038054 > { static constexpr const char * name_str = "FTM0::MODE"; };
template<> struct address_map< 0x40038058 > { static constexpr const char * name_str = "FTM0::SYNC"; };
template<> struct address_map< 0x4003805c > { static constexpr const char * name_str = "FTM0::OUTINIT"; };
template<> struct address_map< 0x40038060 > { static constexpr const char * name_str = "FTM0::OUTMASK"; };
template<> struct address_map< 0x40038064 > { static constexpr const char * name_str = "FTM0::COMBINE"; };
template<> struct address_map< 0x40038068 > { static constexpr const char * name_str = "FTM0::DEADTIME"; };
template<> struct address_map< 0x4003806c > { static constexpr const char * name_str = "FTM0::EXTTRIG"; };
template<> struct address_map< 0x40038070 > { static constexpr const char * name_str = "FTM0::POL"; };
template<> struct address_map< 0x40038074 > { static constexpr const char * name_str = "FTM0::FMS"; };
template<> struct address_map< 0x40038078 > { static constexpr const char * name_str = "FTM0::FILTER"; };
template<> struct address_map< 0x4003807c > { static constexpr const char * name_str = "FTM0::FLTCTRL"; };
template<> struct address_map< 0x40038080 > { static constexpr const char * name_str = "FTM0::QDCTRL"; };
template<> struct address_map< 0x40038084 > { static constexpr const char * name_str = "FTM0::CONF"; };
template<> struct address_map< 0x40038088 > { static constexpr const char * name_str = "FTM0::FLTPOL"; };
template<> struct address_map< 0x4003808c > { static constexpr const char * name_str = "FTM0::SYNCONF"; };
template<> struct address_map< 0x40038090 > { static constexpr const char * name_str = "FTM0::INVCTRL"; };
template<> struct address_map< 0x40038094 > { static constexpr const char * name_str = "FTM0::SWOCTRL"; };
template<> struct address_map< 0x40038098 > { static constexpr const char * name_str = "FTM0::PWMLOAD"; };
template<> struct address_map< 0x40039000 > { static constexpr const char * name_str = "FTM1::SC"; };
template<> struct address_map< 0x40039004 > { static constexpr const char * name_str = "FTM1::CNT"; };
template<> struct address_map< 0x40039008 > { static constexpr const char * name_str = "FTM1::MOD"; };
template<> struct address_map< 0x4003900c > { static constexpr const char * name_str = "FTM1::C%sSC"; };
template<> struct address_map< 0x40039010 > { static constexpr const char * name_str = "FTM1::C%sV"; };
template<> struct address_map< 0x4003904c > { static constexpr const char * name_str = "FTM1::CNTIN"; };
template<> struct address_map< 0x40039050 > { static constexpr const char * name_str = "FTM1::STATUS"; };
template<> struct address_map< 0x40039054 > { static constexpr const char * name_str = "FTM1::MODE"; };
template<> struct address_map< 0x40039058 > { static constexpr const char * name_str = "FTM1::SYNC"; };
template<> struct address_map< 0x4003905c > { static constexpr const char * name_str = "FTM1::OUTINIT"; };
template<> struct address_map< 0x40039060 > { static constexpr const char * name_str = "FTM1::OUTMASK"; };
template<> struct address_map< 0x40039064 > { static constexpr const char * name_str = "FTM1::COMBINE"; };
template<> struct address_map< 0x40039068 > { static constexpr const char * name_str = "FTM1::DEADTIME"; };
template<> struct address_map< 0x4003906c > { static constexpr const char * name_str = "FTM1::EXTTRIG"; };
template<> struct address_map< 0x40039070 > { static constexpr const char * name_str = "FTM1::POL"; };
template<> struct address_map< 0x40039074 > { static constexpr const char * name_str = "FTM1::FMS"; };
template<> struct address_map< 0x40039078 > { static constexpr const char * name_str = "FTM1::FILTER"; };
template<> struct address_map< 0x4003907c > { static constexpr const char * name_str = "FTM1::FLTCTRL"; };
template<> struct address_map< 0x40039080 > { static constexpr const char * name_str = "FTM1::QDCTRL"; };
template<> struct address_map< 0x40039084 > { static constexpr const char * name_str = "FTM1::CONF"; };
template<> struct address_map< 0x40039088 > { static constexpr const char * name_str = "FTM1::FLTPOL"; };
template<> struct address_map< 0x4003908c > { static constexpr const char * name_str = "FTM1::SYNCONF"; };
template<> struct address_map< 0x40039090 > { static constexpr const char * name_str = "FTM1::INVCTRL"; };
template<> struct address_map< 0x40039094 > { static constexpr const char * name_str = "FTM1::SWOCTRL"; };
template<> struct address_map< 0x40039098 > { static constexpr const char * name_str = "FTM1::PWMLOAD"; };
template<> struct address_map< 0x4003a000 > { static constexpr const char * name_str = "FTM2::SC"; };
template<> struct address_map< 0x4003a004 > { static constexpr const char * name_str = "FTM2::CNT"; };
template<> struct address_map< 0x4003a008 > { static constexpr const char * name_str = "FTM2::MOD"; };
template<> struct address_map< 0x4003a00c > { static constexpr const char * name_str = "FTM2::C%sSC"; };
template<> struct address_map< 0x4003a010 > { static constexpr const char * name_str = "FTM2::C%sV"; };
template<> struct address_map< 0x4003a04c > { static constexpr const char * name_str = "FTM2::CNTIN"; };
template<> struct address_map< 0x4003a050 > { static constexpr const char * name_str = "FTM2::STATUS"; };
template<> struct address_map< 0x4003a054 > { static constexpr const char * name_str = "FTM2::MODE"; };
template<> struct address_map< 0x4003a058 > { static constexpr const char * name_str = "FTM2::SYNC"; };
template<> struct address_map< 0x4003a05c > { static constexpr const char * name_str = "FTM2::OUTINIT"; };
template<> struct address_map< 0x4003a060 > { static constexpr const char * name_str = "FTM2::OUTMASK"; };
template<> struct address_map< 0x4003a064 > { static constexpr const char * name_str = "FTM2::COMBINE"; };
template<> struct address_map< 0x4003a068 > { static constexpr const char * name_str = "FTM2::DEADTIME"; };
template<> struct address_map< 0x4003a06c > { static constexpr const char * name_str = "FTM2::EXTTRIG"; };
template<> struct address_map< 0x4003a070 > { static constexpr const char * name_str = "FTM2::POL"; };
template<> struct address_map< 0x4003a074 > { static constexpr const char * name_str = "FTM2::FMS"; };
template<> struct address_map< 0x4003a078 > { static constexpr const char * name_str = "FTM2::FILTER"; };
template<> struct address_map< 0x4003a07c > { static constexpr const char * name_str = "FTM2::FLTCTRL"; };
template<> struct address_map< 0x4003a080 > { static constexpr const char * name_str = "FTM2::QDCTRL"; };
template<> struct address_map< 0x4003a084 > { static constexpr const char * name_str = "FTM2::CONF"; };
template<> struct address_map< 0x4003a088 > { static constexpr const char * name_str = "FTM2::FLTPOL"; };
template<> struct address_map< 0x4003a08c > { static constexpr const char * name_str = "FTM2::SYNCONF"; };
template<> struct address_map< 0x4003a090 > { static constexpr const char * name_str = "FTM2::INVCTRL"; };
template<> struct address_map< 0x4003a094 > { static constexpr const char * name_str = "FTM2::SWOCTRL"; };
template<> struct address_map< 0x4003a098 > { static constexpr const char * name_str = "FTM2::PWMLOAD"; };
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
template<> struct address_map< 0x40047000 > { static constexpr const char * name_str = "SIM::SOPT1"; };
template<> struct address_map< 0x40047004 > { static constexpr const char * name_str = "SIM::SOPT1CFG"; };
template<> struct address_map< 0x40048004 > { static constexpr const char * name_str = "SIM::SOPT2"; };
template<> struct address_map< 0x4004800c > { static constexpr const char * name_str = "SIM::SOPT4"; };
template<> struct address_map< 0x40048010 > { static constexpr const char * name_str = "SIM::SOPT5"; };
template<> struct address_map< 0x40048018 > { static constexpr const char * name_str = "SIM::SOPT7"; };
template<> struct address_map< 0x4004801c > { static constexpr const char * name_str = "SIM::SOPT8"; };
template<> struct address_map< 0x40048024 > { static constexpr const char * name_str = "SIM::SDID"; };
template<> struct address_map< 0x40048034 > { static constexpr const char * name_str = "SIM::SCGC4"; };
template<> struct address_map< 0x40048038 > { static constexpr const char * name_str = "SIM::SCGC5"; };
template<> struct address_map< 0x4004803c > { static constexpr const char * name_str = "SIM::SCGC6"; };
template<> struct address_map< 0x40048040 > { static constexpr const char * name_str = "SIM::SCGC7"; };
template<> struct address_map< 0x40048044 > { static constexpr const char * name_str = "SIM::CLKDIV1"; };
template<> struct address_map< 0x4004804c > { static constexpr const char * name_str = "SIM::FCFG1"; };
template<> struct address_map< 0x40048050 > { static constexpr const char * name_str = "SIM::FCFG2"; };
template<> struct address_map< 0x40048054 > { static constexpr const char * name_str = "SIM::UIDH"; };
template<> struct address_map< 0x40048058 > { static constexpr const char * name_str = "SIM::UIDMH"; };
template<> struct address_map< 0x4004805c > { static constexpr const char * name_str = "SIM::UIDML"; };
template<> struct address_map< 0x40048060 > { static constexpr const char * name_str = "SIM::UIDL"; };
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
template<> struct address_map< 0x4004c0c0 > { static constexpr const char * name_str = "PORTD::DFER"; };
template<> struct address_map< 0x4004c0c4 > { static constexpr const char * name_str = "PORTD::DFCR"; };
template<> struct address_map< 0x4004c0c8 > { static constexpr const char * name_str = "PORTD::DFWR"; };
template<> struct address_map< 0x4004d000 > { static constexpr const char * name_str = "PORTE::PCR%s"; };
template<> struct address_map< 0x4004d080 > { static constexpr const char * name_str = "PORTE::GPCLR"; };
template<> struct address_map< 0x4004d084 > { static constexpr const char * name_str = "PORTE::GPCHR"; };
template<> struct address_map< 0x4004d0a0 > { static constexpr const char * name_str = "PORTE::ISFR"; };
template<> struct address_map< 0x40052000 > { static constexpr const char * name_str = "WDOG::STCTRLH"; };
template<> struct address_map< 0x40052002 > { static constexpr const char * name_str = "WDOG::STCTRLL"; };
template<> struct address_map< 0x40052004 > { static constexpr const char * name_str = "WDOG::TOVALH"; };
template<> struct address_map< 0x40052006 > { static constexpr const char * name_str = "WDOG::TOVALL"; };
template<> struct address_map< 0x40052008 > { static constexpr const char * name_str = "WDOG::WINH"; };
template<> struct address_map< 0x4005200a > { static constexpr const char * name_str = "WDOG::WINL"; };
template<> struct address_map< 0x4005200c > { static constexpr const char * name_str = "WDOG::REFRESH"; };
template<> struct address_map< 0x4005200e > { static constexpr const char * name_str = "WDOG::UNLOCK"; };
template<> struct address_map< 0x40052010 > { static constexpr const char * name_str = "WDOG::TMROUTH"; };
template<> struct address_map< 0x40052012 > { static constexpr const char * name_str = "WDOG::TMROUTL"; };
template<> struct address_map< 0x40052014 > { static constexpr const char * name_str = "WDOG::RSTCNT"; };
template<> struct address_map< 0x40052016 > { static constexpr const char * name_str = "WDOG::PRESC"; };
template<> struct address_map< 0x40061000 > { static constexpr const char * name_str = "EWM::CTRL"; };
template<> struct address_map< 0x40061001 > { static constexpr const char * name_str = "EWM::SERV"; };
template<> struct address_map< 0x40061002 > { static constexpr const char * name_str = "EWM::CMPL"; };
template<> struct address_map< 0x40061003 > { static constexpr const char * name_str = "EWM::CMPH"; };
template<> struct address_map< 0x40061005 > { static constexpr const char * name_str = "EWM::CLKPRESCALER"; };
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
template<> struct address_map< 0x40065000 > { static constexpr const char * name_str = "OSC::CR"; };
template<> struct address_map< 0x40065002 > { static constexpr const char * name_str = "OSC::DIV"; };
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
template<> struct address_map< 0x4006a00c > { static constexpr const char * name_str = "UART0::ED"; };
template<> struct address_map< 0x4006a00d > { static constexpr const char * name_str = "UART0::MODEM"; };
template<> struct address_map< 0x4006a00e > { static constexpr const char * name_str = "UART0::IR"; };
template<> struct address_map< 0x4006a010 > { static constexpr const char * name_str = "UART0::PFIFO"; };
template<> struct address_map< 0x4006a011 > { static constexpr const char * name_str = "UART0::CFIFO"; };
template<> struct address_map< 0x4006a012 > { static constexpr const char * name_str = "UART0::SFIFO"; };
template<> struct address_map< 0x4006a013 > { static constexpr const char * name_str = "UART0::TWFIFO"; };
template<> struct address_map< 0x4006a014 > { static constexpr const char * name_str = "UART0::TCFIFO"; };
template<> struct address_map< 0x4006a015 > { static constexpr const char * name_str = "UART0::RWFIFO"; };
template<> struct address_map< 0x4006a016 > { static constexpr const char * name_str = "UART0::RCFIFO"; };
template<> struct address_map< 0x4006b000 > { static constexpr const char * name_str = "UART1::BDH"; };
template<> struct address_map< 0x4006b001 > { static constexpr const char * name_str = "UART1::BDL"; };
template<> struct address_map< 0x4006b002 > { static constexpr const char * name_str = "UART1::C1"; };
template<> struct address_map< 0x4006b003 > { static constexpr const char * name_str = "UART1::C2"; };
template<> struct address_map< 0x4006b004 > { static constexpr const char * name_str = "UART1::S1"; };
template<> struct address_map< 0x4006b005 > { static constexpr const char * name_str = "UART1::S2"; };
template<> struct address_map< 0x4006b006 > { static constexpr const char * name_str = "UART1::C3"; };
template<> struct address_map< 0x4006b007 > { static constexpr const char * name_str = "UART1::D"; };
template<> struct address_map< 0x4006b008 > { static constexpr const char * name_str = "UART1::MA1"; };
template<> struct address_map< 0x4006b009 > { static constexpr const char * name_str = "UART1::MA2"; };
template<> struct address_map< 0x4006b00a > { static constexpr const char * name_str = "UART1::C4"; };
template<> struct address_map< 0x4006b00b > { static constexpr const char * name_str = "UART1::C5"; };
template<> struct address_map< 0x4006b00c > { static constexpr const char * name_str = "UART1::ED"; };
template<> struct address_map< 0x4006b00d > { static constexpr const char * name_str = "UART1::MODEM"; };
template<> struct address_map< 0x4006b00e > { static constexpr const char * name_str = "UART1::IR"; };
template<> struct address_map< 0x4006b010 > { static constexpr const char * name_str = "UART1::PFIFO"; };
template<> struct address_map< 0x4006b011 > { static constexpr const char * name_str = "UART1::CFIFO"; };
template<> struct address_map< 0x4006b012 > { static constexpr const char * name_str = "UART1::SFIFO"; };
template<> struct address_map< 0x4006b013 > { static constexpr const char * name_str = "UART1::TWFIFO"; };
template<> struct address_map< 0x4006b014 > { static constexpr const char * name_str = "UART1::TCFIFO"; };
template<> struct address_map< 0x4006b015 > { static constexpr const char * name_str = "UART1::RWFIFO"; };
template<> struct address_map< 0x4006b016 > { static constexpr const char * name_str = "UART1::RCFIFO"; };
template<> struct address_map< 0x40073000 > { static constexpr const char * name_str = "CMP0::CR0"; };
template<> struct address_map< 0x40073001 > { static constexpr const char * name_str = "CMP0::CR1"; };
template<> struct address_map< 0x40073002 > { static constexpr const char * name_str = "CMP0::FPR"; };
template<> struct address_map< 0x40073003 > { static constexpr const char * name_str = "CMP0::SCR"; };
template<> struct address_map< 0x40073004 > { static constexpr const char * name_str = "CMP0::DACCR"; };
template<> struct address_map< 0x40073005 > { static constexpr const char * name_str = "CMP0::MUXCR"; };
template<> struct address_map< 0x40073008 > { static constexpr const char * name_str = "CMP1::CR0"; };
template<> struct address_map< 0x40073009 > { static constexpr const char * name_str = "CMP1::CR1"; };
template<> struct address_map< 0x4007300a > { static constexpr const char * name_str = "CMP1::FPR"; };
template<> struct address_map< 0x4007300b > { static constexpr const char * name_str = "CMP1::SCR"; };
template<> struct address_map< 0x4007300c > { static constexpr const char * name_str = "CMP1::DACCR"; };
template<> struct address_map< 0x4007300d > { static constexpr const char * name_str = "CMP1::MUXCR"; };
template<> struct address_map< 0x40074000 > { static constexpr const char * name_str = "VREF::TRM"; };
template<> struct address_map< 0x40074001 > { static constexpr const char * name_str = "VREF::SC"; };
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
template<> struct address_map< 0x4007e002 > { static constexpr const char * name_str = "SMC::STOPCTRL"; };
template<> struct address_map< 0x4007e003 > { static constexpr const char * name_str = "SMC::PMSTAT"; };
template<> struct address_map< 0x4007f000 > { static constexpr const char * name_str = "RCM::SRS0"; };
template<> struct address_map< 0x4007f001 > { static constexpr const char * name_str = "RCM::SRS1"; };
template<> struct address_map< 0x4007f004 > { static constexpr const char * name_str = "RCM::RPFC"; };
template<> struct address_map< 0x4007f005 > { static constexpr const char * name_str = "RCM::RPFW"; };
template<> struct address_map< 0x4007f008 > { static constexpr const char * name_str = "RCM::SSRS0"; };
template<> struct address_map< 0x4007f009 > { static constexpr const char * name_str = "RCM::SSRS1"; };
template<> struct address_map< 0x400ff000 > { static constexpr const char * name_str = "PTA::PDOR"; };
template<> struct address_map< 0x400ff004 > { static constexpr const char * name_str = "PTA::PSOR"; };
template<> struct address_map< 0x400ff008 > { static constexpr const char * name_str = "PTA::PCOR"; };
template<> struct address_map< 0x400ff00c > { static constexpr const char * name_str = "PTA::PTOR"; };
template<> struct address_map< 0x400ff010 > { static constexpr const char * name_str = "PTA::PDIR"; };
template<> struct address_map< 0x400ff014 > { static constexpr const char * name_str = "PTA::PDDR"; };
template<> struct address_map< 0x400ff040 > { static constexpr const char * name_str = "PTB::PDOR"; };
template<> struct address_map< 0x400ff044 > { static constexpr const char * name_str = "PTB::PSOR"; };
template<> struct address_map< 0x400ff048 > { static constexpr const char * name_str = "PTB::PCOR"; };
template<> struct address_map< 0x400ff04c > { static constexpr const char * name_str = "PTB::PTOR"; };
template<> struct address_map< 0x400ff050 > { static constexpr const char * name_str = "PTB::PDIR"; };
template<> struct address_map< 0x400ff054 > { static constexpr const char * name_str = "PTB::PDDR"; };
template<> struct address_map< 0x400ff080 > { static constexpr const char * name_str = "PTC::PDOR"; };
template<> struct address_map< 0x400ff084 > { static constexpr const char * name_str = "PTC::PSOR"; };
template<> struct address_map< 0x400ff088 > { static constexpr const char * name_str = "PTC::PCOR"; };
template<> struct address_map< 0x400ff08c > { static constexpr const char * name_str = "PTC::PTOR"; };
template<> struct address_map< 0x400ff090 > { static constexpr const char * name_str = "PTC::PDIR"; };
template<> struct address_map< 0x400ff094 > { static constexpr const char * name_str = "PTC::PDDR"; };
template<> struct address_map< 0x400ff0c0 > { static constexpr const char * name_str = "PTD::PDOR"; };
template<> struct address_map< 0x400ff0c4 > { static constexpr const char * name_str = "PTD::PSOR"; };
template<> struct address_map< 0x400ff0c8 > { static constexpr const char * name_str = "PTD::PCOR"; };
template<> struct address_map< 0x400ff0cc > { static constexpr const char * name_str = "PTD::PTOR"; };
template<> struct address_map< 0x400ff0d0 > { static constexpr const char * name_str = "PTD::PDIR"; };
template<> struct address_map< 0x400ff0d4 > { static constexpr const char * name_str = "PTD::PDDR"; };
template<> struct address_map< 0x400ff100 > { static constexpr const char * name_str = "PTE::PDOR"; };
template<> struct address_map< 0x400ff104 > { static constexpr const char * name_str = "PTE::PSOR"; };
template<> struct address_map< 0x400ff108 > { static constexpr const char * name_str = "PTE::PCOR"; };
template<> struct address_map< 0x400ff10c > { static constexpr const char * name_str = "PTE::PTOR"; };
template<> struct address_map< 0x400ff110 > { static constexpr const char * name_str = "PTE::PDIR"; };
template<> struct address_map< 0x400ff114 > { static constexpr const char * name_str = "PTE::PDDR"; };
template<> struct address_map< 0xe0080008 > { static constexpr const char * name_str = "MCM::PLASC"; };
template<> struct address_map< 0xe008000a > { static constexpr const char * name_str = "MCM::PLAMC"; };
template<> struct address_map< 0xe008000c > { static constexpr const char * name_str = "MCM::PLACR"; };
template<> struct address_map< 0xe0080010 > { static constexpr const char * name_str = "MCM::ISCR"; };
template<> struct address_map< 0xe0080040 > { static constexpr const char * name_str = "MCM::CPO"; };

} // namespace mptl

#endif // ARCH_REG_ADDRESS_MAP_HPP_INCLUDED
