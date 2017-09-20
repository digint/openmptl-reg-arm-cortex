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
//  Import from CMSIS-SVD: "Fujitsu/S6E2CC.svd"
//
//  name: S6E2CC
//  version: 1.1
//  description: S6E2CC
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_NVIC_HPP_INCLUDED
#define ARCH_NVIC_HPP_INCLUDED

#warning "using untested register declarations"

namespace mptl { namespace irq {

using csv                 = irq_channel< 0>;    
using swdt                = irq_channel< 1>;    
using lvd                 = irq_channel< 2>;    
using exint0              = irq_channel<11>;    
using exint1              = irq_channel<12>;    
using exint2              = irq_channel<13>;    
using exint3              = irq_channel<14>;    
using exint4              = irq_channel<15>;    
using exint5              = irq_channel<16>;    
using exint6              = irq_channel<17>;    
using exint7              = irq_channel<18>;    
using qprc0               = irq_channel<19>;    
using qprc1               = irq_channel<20>;    
using wfg0_dtif0          = irq_channel<21>;    
using wfg1_dtif1          = irq_channel<22>;    
using wfg2_dtif2          = irq_channel<23>;    
using frt0_peak           = irq_channel<24>;    
using frt0_zero           = irq_channel<25>;    
using icu0                = irq_channel<26>;    
using ocu0                = irq_channel<27>;    
using frt1_peak           = irq_channel<28>;    
using frt1_zero           = irq_channel<29>;    
using icu1                = irq_channel<30>;    
using ocu1                = irq_channel<31>;    
using frt2_peak           = irq_channel<32>;    
using frt2_zero           = irq_channel<33>;    
using icu2                = irq_channel<34>;    
using ocu2                = irq_channel<35>;    
using ppg00_02_04         = irq_channel<36>;    
using ppg08_10_12         = irq_channel<37>;    
using ppg16_18_20         = irq_channel<38>;    
using bt0                 = irq_channel<39>;    
using bt1                 = irq_channel<40>;    
using bt2                 = irq_channel<41>;    
using bt3                 = irq_channel<42>;    
using bt4                 = irq_channel<43>;    
using bt5                 = irq_channel<44>;    
using bt6                 = irq_channel<45>;    
using bt7                 = irq_channel<46>;    
using dt1_2               = irq_channel<47>;    
using wc                  = irq_channel<48>;    
using extbus_err          = irq_channel<49>;    
using rtc                 = irq_channel<50>;    
using exint8              = irq_channel<51>;    
using exint9              = irq_channel<52>;    
using exint10             = irq_channel<53>;    
using exint11             = irq_channel<54>;    
using exint12             = irq_channel<55>;    
using exint13             = irq_channel<56>;    
using exint14             = irq_channel<57>;    
using exint15             = irq_channel<58>;    
using tim                 = irq_channel<59>;    
using mfs0_rx             = irq_channel<60>;    
using mfs0_tx             = irq_channel<61>;    
using mfs1_rx             = irq_channel<62>;    
using mfs1_tx             = irq_channel<63>;    
using mfs2_rx             = irq_channel<64>;    
using mfs2_tx             = irq_channel<65>;    
using mfs3_rx             = irq_channel<66>;    
using mfs3_tx             = irq_channel<67>;    
using mfs4_rx             = irq_channel<68>;    
using mfs4_tx             = irq_channel<69>;    
using mfs5_rx             = irq_channel<70>;    
using mfs5_tx             = irq_channel<71>;    
using mfs6_rx             = irq_channel<72>;    
using mfs6_tx             = irq_channel<73>;    
using mfs7_rx             = irq_channel<74>;    
using mfs7_tx             = irq_channel<75>;    
using adc0                = irq_channel<76>;    
using adc1                = irq_channel<77>;    
using usb0                = irq_channel<78>;    
using usb0_host           = irq_channel<79>;    
using can0                = irq_channel<80>;    
using can1                = irq_channel<81>;    
using ether0              = irq_channel<82>;    
using dmac0               = irq_channel<83>;    
using dmac1               = irq_channel<84>;    
using dmac2               = irq_channel<85>;    
using dmac3               = irq_channel<86>;    
using dmac4               = irq_channel<87>;    
using dmac5               = irq_channel<88>;    
using dmac6               = irq_channel<89>;    
using dmac7               = irq_channel<90>;    
using dstc                = irq_channel<91>;    
using exint16_17_18_19    = irq_channel<92>;    
using exint20_21_22_23    = irq_channel<93>;    
using exint24_25_26_27    = irq_channel<94>;    
using exint28_29_30_31    = irq_channel<95>;    
using qprc2               = irq_channel<96>;    
using qprc3               = irq_channel<97>;    
using bt8                 = irq_channel<98>;    
using bt9                 = irq_channel<99>;    
using bt10                = irq_channel<100>;    
using bt11                = irq_channel<101>;    
using bt12_13_14_15       = irq_channel<102>;    
using mfs8_rx             = irq_channel<103>;    
using mfs8_tx             = irq_channel<104>;    
using mfs9_rx             = irq_channel<105>;    
using mfs9_tx             = irq_channel<106>;    
using mfs10_rx            = irq_channel<107>;    
using mfs10_tx            = irq_channel<108>;    
using mfs11_rx            = irq_channel<109>;    
using mfs11_tx            = irq_channel<110>;    
using adc2                = irq_channel<111>;    
using usb1_hdmicec0       = irq_channel<113>;    
using usb1_host_hdmicec1  = irq_channel<114>;    
using hsspi               = irq_channel<115>;    
using prgcrc_i2s          = irq_channel<117>;    
using sd                  = irq_channel<118>;    
using flash               = irq_channel<119>;    
using mfs12_rx            = irq_channel<120>;    
using mfs12_tx            = irq_channel<121>;    
using mfs13_rx            = irq_channel<122>;    
using mfs13_tx            = irq_channel<123>;    
using mfs14_rx            = irq_channel<124>;    
using mfs14_tx            = irq_channel<125>;    
using mfs15_rx            = irq_channel<126>;    
using mfs15_tx            = irq_channel<127>;    

static constexpr int numof_interrupt_channels = 128

} } // namespace mptl::irq

#endif // ARCH_NVIC_HPP_INCLUDED
