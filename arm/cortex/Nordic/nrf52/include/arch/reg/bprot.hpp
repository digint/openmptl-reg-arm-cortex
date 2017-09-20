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
//  Import from CMSIS-SVD: "Nordic/nrf52.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf52
//  series: nrf52
//  version: 1
//  description: nRF52 reference description for radio MCU with ARM 32-bit Cortex-M4 Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_BPROT_HPP_INCLUDED
#define ARCH_REG_BPROT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Block Protect
 */
struct BPROT
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Block protect configuration register 0
   */
  struct CONFIG0
  : public reg< uint32_t, base_addr + 0x600, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION0   = regbits< type,  0,  1 >;  /**< Enable protection for region 0. Write '0' has no effect.   */
    using REGION1   = regbits< type,  1,  1 >;  /**< Enable protection for region 1. Write '0' has no effect.   */
    using REGION2   = regbits< type,  2,  1 >;  /**< Enable protection for region 2. Write '0' has no effect.   */
    using REGION3   = regbits< type,  3,  1 >;  /**< Enable protection for region 3. Write '0' has no effect.   */
    using REGION4   = regbits< type,  4,  1 >;  /**< Enable protection for region 4. Write '0' has no effect.   */
    using REGION5   = regbits< type,  5,  1 >;  /**< Enable protection for region 5. Write '0' has no effect.   */
    using REGION6   = regbits< type,  6,  1 >;  /**< Enable protection for region 6. Write '0' has no effect.   */
    using REGION7   = regbits< type,  7,  1 >;  /**< Enable protection for region 7. Write '0' has no effect.   */
    using REGION8   = regbits< type,  8,  1 >;  /**< Enable protection for region 8. Write '0' has no effect.   */
    using REGION9   = regbits< type,  9,  1 >;  /**< Enable protection for region 9. Write '0' has no effect.   */
    using REGION10  = regbits< type, 10,  1 >;  /**< Enable protection for region 10. Write '0' has no effect.  */
    using REGION11  = regbits< type, 11,  1 >;  /**< Enable protection for region 11. Write '0' has no effect.  */
    using REGION12  = regbits< type, 12,  1 >;  /**< Enable protection for region 12. Write '0' has no effect.  */
    using REGION13  = regbits< type, 13,  1 >;  /**< Enable protection for region 13. Write '0' has no effect.  */
    using REGION14  = regbits< type, 14,  1 >;  /**< Enable protection for region 14. Write '0' has no effect.  */
    using REGION15  = regbits< type, 15,  1 >;  /**< Enable protection for region 15. Write '0' has no effect.  */
    using REGION16  = regbits< type, 16,  1 >;  /**< Enable protection for region 16. Write '0' has no effect.  */
    using REGION17  = regbits< type, 17,  1 >;  /**< Enable protection for region 17. Write '0' has no effect.  */
    using REGION18  = regbits< type, 18,  1 >;  /**< Enable protection for region 18. Write '0' has no effect.  */
    using REGION19  = regbits< type, 19,  1 >;  /**< Enable protection for region 19. Write '0' has no effect.  */
    using REGION20  = regbits< type, 20,  1 >;  /**< Enable protection for region 20. Write '0' has no effect.  */
    using REGION21  = regbits< type, 21,  1 >;  /**< Enable protection for region 21. Write '0' has no effect.  */
    using REGION22  = regbits< type, 22,  1 >;  /**< Enable protection for region 22. Write '0' has no effect.  */
    using REGION23  = regbits< type, 23,  1 >;  /**< Enable protection for region 23. Write '0' has no effect.  */
    using REGION24  = regbits< type, 24,  1 >;  /**< Enable protection for region 24. Write '0' has no effect.  */
    using REGION25  = regbits< type, 25,  1 >;  /**< Enable protection for region 25. Write '0' has no effect.  */
    using REGION26  = regbits< type, 26,  1 >;  /**< Enable protection for region 26. Write '0' has no effect.  */
    using REGION27  = regbits< type, 27,  1 >;  /**< Enable protection for region 27. Write '0' has no effect.  */
    using REGION28  = regbits< type, 28,  1 >;  /**< Enable protection for region 28. Write '0' has no effect.  */
    using REGION29  = regbits< type, 29,  1 >;  /**< Enable protection for region 29. Write '0' has no effect.  */
    using REGION30  = regbits< type, 30,  1 >;  /**< Enable protection for region 30. Write '0' has no effect.  */
    using REGION31  = regbits< type, 31,  1 >;  /**< Enable protection for region 31. Write '0' has no effect.  */
  };

  /**
   * Block protect configuration register 1
   */
  struct CONFIG1
  : public reg< uint32_t, base_addr + 0x604, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x604, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION32  = regbits< type,  0,  1 >;  /**< Enable protection for region 32. Write '0' has no effect.  */
    using REGION33  = regbits< type,  1,  1 >;  /**< Enable protection for region 33. Write '0' has no effect.  */
    using REGION34  = regbits< type,  2,  1 >;  /**< Enable protection for region 34. Write '0' has no effect.  */
    using REGION35  = regbits< type,  3,  1 >;  /**< Enable protection for region 35. Write '0' has no effect.  */
    using REGION36  = regbits< type,  4,  1 >;  /**< Enable protection for region 36. Write '0' has no effect.  */
    using REGION37  = regbits< type,  5,  1 >;  /**< Enable protection for region 37. Write '0' has no effect.  */
    using REGION38  = regbits< type,  6,  1 >;  /**< Enable protection for region 38. Write '0' has no effect.  */
    using REGION39  = regbits< type,  7,  1 >;  /**< Enable protection for region 39. Write '0' has no effect.  */
    using REGION40  = regbits< type,  8,  1 >;  /**< Enable protection for region 40. Write '0' has no effect.  */
    using REGION41  = regbits< type,  9,  1 >;  /**< Enable protection for region 41. Write '0' has no effect.  */
    using REGION42  = regbits< type, 10,  1 >;  /**< Enable protection for region 42. Write '0' has no effect.  */
    using REGION43  = regbits< type, 11,  1 >;  /**< Enable protection for region 43. Write '0' has no effect.  */
    using REGION44  = regbits< type, 12,  1 >;  /**< Enable protection for region 44. Write '0' has no effect.  */
    using REGION45  = regbits< type, 13,  1 >;  /**< Enable protection for region 45. Write '0' has no effect.  */
    using REGION46  = regbits< type, 14,  1 >;  /**< Enable protection for region 46. Write '0' has no effect.  */
    using REGION47  = regbits< type, 15,  1 >;  /**< Enable protection for region 47. Write '0' has no effect.  */
    using REGION48  = regbits< type, 16,  1 >;  /**< Enable protection for region 48. Write '0' has no effect.  */
    using REGION49  = regbits< type, 17,  1 >;  /**< Enable protection for region 49. Write '0' has no effect.  */
    using REGION50  = regbits< type, 18,  1 >;  /**< Enable protection for region 50. Write '0' has no effect.  */
    using REGION51  = regbits< type, 19,  1 >;  /**< Enable protection for region 51. Write '0' has no effect.  */
    using REGION52  = regbits< type, 20,  1 >;  /**< Enable protection for region 52. Write '0' has no effect.  */
    using REGION53  = regbits< type, 21,  1 >;  /**< Enable protection for region 53. Write '0' has no effect.  */
    using REGION54  = regbits< type, 22,  1 >;  /**< Enable protection for region 54. Write '0' has no effect.  */
    using REGION55  = regbits< type, 23,  1 >;  /**< Enable protection for region 55. Write '0' has no effect.  */
    using REGION56  = regbits< type, 24,  1 >;  /**< Enable protection for region 56. Write '0' has no effect.  */
    using REGION57  = regbits< type, 25,  1 >;  /**< Enable protection for region 57. Write '0' has no effect.  */
    using REGION58  = regbits< type, 26,  1 >;  /**< Enable protection for region 58. Write '0' has no effect.  */
    using REGION59  = regbits< type, 27,  1 >;  /**< Enable protection for region 59. Write '0' has no effect.  */
    using REGION60  = regbits< type, 28,  1 >;  /**< Enable protection for region 60. Write '0' has no effect.  */
    using REGION61  = regbits< type, 29,  1 >;  /**< Enable protection for region 61. Write '0' has no effect.  */
    using REGION62  = regbits< type, 30,  1 >;  /**< Enable protection for region 62. Write '0' has no effect.  */
    using REGION63  = regbits< type, 31,  1 >;  /**< Enable protection for region 63. Write '0' has no effect.  */
  };

  /**
   * Disable protection mechanism in debug mode
   */
  struct DISABLEINDEBUG
  : public reg< uint32_t, base_addr + 0x608, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x608, rw, 0x00000001 >;

    // fixme: Field name equals parent register name: DISABLEINDEBUG
    using DISABLEINDEBUG_ = regbits< type,  0,  1 >;  /**< Disable the protection mechanism for NVM regions while in debug mode. This register will only disable the protection mechanism if the device is in debug mode.  */
  };

  /**
   * Unspecified
   */
  struct UNUSED0
  : public reg< uint32_t, base_addr + 0x60c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Block protect configuration register 2
   */
  struct CONFIG2
  : public reg< uint32_t, base_addr + 0x610, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x610, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION64  = regbits< type,  0,  1 >;  /**< Enable protection for region 64. Write '0' has no effect.  */
    using REGION65  = regbits< type,  1,  1 >;  /**< Enable protection for region 65. Write '0' has no effect.  */
    using REGION66  = regbits< type,  2,  1 >;  /**< Enable protection for region 66. Write '0' has no effect.  */
    using REGION67  = regbits< type,  3,  1 >;  /**< Enable protection for region 67. Write '0' has no effect.  */
    using REGION68  = regbits< type,  4,  1 >;  /**< Enable protection for region 68. Write '0' has no effect.  */
    using REGION69  = regbits< type,  5,  1 >;  /**< Enable protection for region 69. Write '0' has no effect.  */
    using REGION70  = regbits< type,  6,  1 >;  /**< Enable protection for region 70. Write '0' has no effect.  */
    using REGION71  = regbits< type,  7,  1 >;  /**< Enable protection for region 71. Write '0' has no effect.  */
    using REGION72  = regbits< type,  8,  1 >;  /**< Enable protection for region 72. Write '0' has no effect.  */
    using REGION73  = regbits< type,  9,  1 >;  /**< Enable protection for region 73. Write '0' has no effect.  */
    using REGION74  = regbits< type, 10,  1 >;  /**< Enable protection for region 74. Write '0' has no effect.  */
    using REGION75  = regbits< type, 11,  1 >;  /**< Enable protection for region 75. Write '0' has no effect.  */
    using REGION76  = regbits< type, 12,  1 >;  /**< Enable protection for region 76. Write '0' has no effect.  */
    using REGION77  = regbits< type, 13,  1 >;  /**< Enable protection for region 77. Write '0' has no effect.  */
    using REGION78  = regbits< type, 14,  1 >;  /**< Enable protection for region 78. Write '0' has no effect.  */
    using REGION79  = regbits< type, 15,  1 >;  /**< Enable protection for region 79. Write '0' has no effect.  */
    using REGION80  = regbits< type, 16,  1 >;  /**< Enable protection for region 80. Write '0' has no effect.  */
    using REGION81  = regbits< type, 17,  1 >;  /**< Enable protection for region 81. Write '0' has no effect.  */
    using REGION82  = regbits< type, 18,  1 >;  /**< Enable protection for region 82. Write '0' has no effect.  */
    using REGION83  = regbits< type, 19,  1 >;  /**< Enable protection for region 83. Write '0' has no effect.  */
    using REGION84  = regbits< type, 20,  1 >;  /**< Enable protection for region 84. Write '0' has no effect.  */
    using REGION85  = regbits< type, 21,  1 >;  /**< Enable protection for region 85. Write '0' has no effect.  */
    using REGION86  = regbits< type, 22,  1 >;  /**< Enable protection for region 86. Write '0' has no effect.  */
    using REGION87  = regbits< type, 23,  1 >;  /**< Enable protection for region 87. Write '0' has no effect.  */
    using REGION88  = regbits< type, 24,  1 >;  /**< Enable protection for region 88. Write '0' has no effect.  */
    using REGION89  = regbits< type, 25,  1 >;  /**< Enable protection for region 89. Write '0' has no effect.  */
    using REGION90  = regbits< type, 26,  1 >;  /**< Enable protection for region 90. Write '0' has no effect.  */
    using REGION91  = regbits< type, 27,  1 >;  /**< Enable protection for region 91. Write '0' has no effect.  */
    using REGION92  = regbits< type, 28,  1 >;  /**< Enable protection for region 92. Write '0' has no effect.  */
    using REGION93  = regbits< type, 29,  1 >;  /**< Enable protection for region 93. Write '0' has no effect.  */
    using REGION94  = regbits< type, 30,  1 >;  /**< Enable protection for region 94. Write '0' has no effect.  */
    using REGION95  = regbits< type, 31,  1 >;  /**< Enable protection for region 95. Write '0' has no effect.  */
  };

  /**
   * Block protect configuration register 3
   */
  struct CONFIG3
  : public reg< uint32_t, base_addr + 0x614, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x614, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REGION96   = regbits< type,  0,  1 >;  /**< Enable protection for region 96. Write '0' has no effect.   */
    using REGION97   = regbits< type,  1,  1 >;  /**< Enable protection for region 97. Write '0' has no effect.   */
    using REGION98   = regbits< type,  2,  1 >;  /**< Enable protection for region 98. Write '0' has no effect.   */
    using REGION99   = regbits< type,  3,  1 >;  /**< Enable protection for region 99. Write '0' has no effect.   */
    using REGION100  = regbits< type,  4,  1 >;  /**< Enable protection for region 100. Write '0' has no effect.  */
    using REGION101  = regbits< type,  5,  1 >;  /**< Enable protection for region 101. Write '0' has no effect.  */
    using REGION102  = regbits< type,  6,  1 >;  /**< Enable protection for region 102. Write '0' has no effect.  */
    using REGION103  = regbits< type,  7,  1 >;  /**< Enable protection for region 103. Write '0' has no effect.  */
    using REGION104  = regbits< type,  8,  1 >;  /**< Enable protection for region 104. Write '0' has no effect.  */
    using REGION105  = regbits< type,  9,  1 >;  /**< Enable protection for region 105. Write '0' has no effect.  */
    using REGION106  = regbits< type, 10,  1 >;  /**< Enable protection for region 106. Write '0' has no effect.  */
    using REGION107  = regbits< type, 11,  1 >;  /**< Enable protection for region 107. Write '0' has no effect.  */
    using REGION108  = regbits< type, 12,  1 >;  /**< Enable protection for region 108. Write '0' has no effect.  */
    using REGION109  = regbits< type, 13,  1 >;  /**< Enable protection for region 109. Write '0' has no effect.  */
    using REGION110  = regbits< type, 14,  1 >;  /**< Enable protection for region 110. Write '0' has no effect.  */
    using REGION111  = regbits< type, 15,  1 >;  /**< Enable protection for region 111. Write '0' has no effect.  */
    using REGION112  = regbits< type, 16,  1 >;  /**< Enable protection for region 112. Write '0' has no effect.  */
    using REGION113  = regbits< type, 17,  1 >;  /**< Enable protection for region 113. Write '0' has no effect.  */
    using REGION114  = regbits< type, 18,  1 >;  /**< Enable protection for region 114. Write '0' has no effect.  */
    using REGION115  = regbits< type, 19,  1 >;  /**< Enable protection for region 115. Write '0' has no effect.  */
    using REGION116  = regbits< type, 20,  1 >;  /**< Enable protection for region 116. Write '0' has no effect.  */
    using REGION117  = regbits< type, 21,  1 >;  /**< Enable protection for region 117. Write '0' has no effect.  */
    using REGION118  = regbits< type, 22,  1 >;  /**< Enable protection for region 118. Write '0' has no effect.  */
    using REGION119  = regbits< type, 23,  1 >;  /**< Enable protection for region 119. Write '0' has no effect.  */
    using REGION120  = regbits< type, 24,  1 >;  /**< Enable protection for region 120. Write '0' has no effect.  */
    using REGION121  = regbits< type, 25,  1 >;  /**< Enable protection for region 121. Write '0' has no effect.  */
    using REGION122  = regbits< type, 26,  1 >;  /**< Enable protection for region 122. Write '0' has no effect.  */
    using REGION123  = regbits< type, 27,  1 >;  /**< Enable protection for region 123. Write '0' has no effect.  */
    using REGION124  = regbits< type, 28,  1 >;  /**< Enable protection for region 124. Write '0' has no effect.  */
    using REGION125  = regbits< type, 29,  1 >;  /**< Enable protection for region 125. Write '0' has no effect.  */
    using REGION126  = regbits< type, 30,  1 >;  /**< Enable protection for region 126. Write '0' has no effect.  */
    using REGION127  = regbits< type, 31,  1 >;  /**< Enable protection for region 127. Write '0' has no effect.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_BPROT_HPP_INCLUDED
