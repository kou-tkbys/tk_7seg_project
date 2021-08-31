/**
 * ht16k33Custom.cpp
 * 
 * Customize class wrapping ht16k33.
 */
#include <custom/ht16k33/ht16k33Custom.h>

/**
 * namespace
 */
namespace tk
{
namespace tk_7seg_project
{
namespace custom 
{

/**
 * カソード C0-C7 に対してアノード A0-A7へ接続したLED指定値
 * 
 * -------------------------
 * |  Cathode  |   Anode   |
 * -------------------------
 * |    0000   |    0000   |
 * ----- ~ --------- ~ -----
 * |    0111   |    0111   |
 * -------------------------
 */
constexpr uint8_t C0_A00 = 0b00000000;
constexpr uint8_t C0_A01 = 0b00000001;
constexpr uint8_t C0_A02 = 0b00000010;
constexpr uint8_t C0_A03 = 0b00000011;
constexpr uint8_t C0_A04 = 0b00000100;
constexpr uint8_t C0_A05 = 0b00000101;
constexpr uint8_t C0_A06 = 0b00000110;
constexpr uint8_t C0_A07 = 0b00000111;

constexpr uint8_t C1_A00 = 0b00010000;
constexpr uint8_t C1_A01 = 0b00010001;
constexpr uint8_t C1_A02 = 0b00010010;
constexpr uint8_t C1_A03 = 0b00010011;
constexpr uint8_t C1_A04 = 0b00010100;
constexpr uint8_t C1_A05 = 0b00010101;
constexpr uint8_t C1_A06 = 0b00010110;
constexpr uint8_t C1_A07 = 0b00010111;

constexpr uint8_t C2_A00 = 0b00100000;
constexpr uint8_t C2_A01 = 0b00100001;
constexpr uint8_t C2_A02 = 0b00100010;
constexpr uint8_t C2_A03 = 0b00100011;
constexpr uint8_t C2_A04 = 0b00100100;
constexpr uint8_t C2_A05 = 0b00100101;
constexpr uint8_t C2_A06 = 0b00100110;
constexpr uint8_t C2_A07 = 0b00100111;

constexpr uint8_t C3_A00 = 0b00110000;
constexpr uint8_t C3_A01 = 0b00110001;
constexpr uint8_t C3_A02 = 0b00110010;
constexpr uint8_t C3_A03 = 0b00110011;
constexpr uint8_t C3_A04 = 0b00110100;
constexpr uint8_t C3_A05 = 0b00110101;
constexpr uint8_t C3_A06 = 0b00110110;
constexpr uint8_t C3_A07 = 0b00110111;

constexpr uint8_t C4_A00 = 0b01000000;
constexpr uint8_t C4_A01 = 0b01000001;
constexpr uint8_t C4_A02 = 0b01000010;
constexpr uint8_t C4_A03 = 0b01000011;
constexpr uint8_t C4_A04 = 0b01000100;
constexpr uint8_t C4_A05 = 0b01000101;
constexpr uint8_t C4_A06 = 0b01000110;
constexpr uint8_t C4_A07 = 0b01000111;

constexpr uint8_t C5_A00 = 0b01010000;
constexpr uint8_t C5_A01 = 0b01010001;
constexpr uint8_t C5_A02 = 0b01010010;
constexpr uint8_t C5_A03 = 0b01010011;
constexpr uint8_t C5_A04 = 0b01010100;
constexpr uint8_t C5_A05 = 0b01010101;
constexpr uint8_t C5_A06 = 0b01010110;
constexpr uint8_t C5_A07 = 0b01010111;

constexpr uint8_t C6_A00 = 0b01100000;
constexpr uint8_t C6_A01 = 0b01100001;
constexpr uint8_t C6_A02 = 0b01100010;
constexpr uint8_t C6_A03 = 0b01100011;
constexpr uint8_t C6_A04 = 0b01100100;
constexpr uint8_t C6_A05 = 0b01100101;
constexpr uint8_t C6_A06 = 0b01100110;
constexpr uint8_t C6_A07 = 0b01100111;

constexpr uint8_t C7_A00 = 0b01110000;
constexpr uint8_t C7_A01 = 0b01110001;
constexpr uint8_t C7_A02 = 0b01110010;
constexpr uint8_t C7_A03 = 0b01110011;
constexpr uint8_t C7_A04 = 0b01110100;
constexpr uint8_t C7_A05 = 0b01110101;
constexpr uint8_t C7_A06 = 0b01110110;
constexpr uint8_t C7_A07 = 0b01110111;

/**
 * カソード C0-C7 に対してアノード A8-A15へ接続したLED指定値
 * 
 * -------------------------
 * |  Cathode  |   Anode   |
 * -------------------------
 * |    0000   |    1000   |
 * ----- ~ --------- ~ -----
 * |    0111   |    1111   |
 * -------------------------
 */
constexpr uint8_t C0_A08 = 0b00001000;
constexpr uint8_t C0_A09 = 0b00001001;
constexpr uint8_t C0_A10 = 0b00001010;
constexpr uint8_t C0_A11 = 0b00001011;
constexpr uint8_t C0_A12 = 0b00001100;
constexpr uint8_t C0_A13 = 0b00001101;
constexpr uint8_t C0_A14 = 0b00001110;
constexpr uint8_t C0_A15 = 0b00001111;

constexpr uint8_t C1_A08 = 0b00011000;
constexpr uint8_t C1_A09 = 0b00011001;
constexpr uint8_t C1_A10 = 0b00011010;
constexpr uint8_t C1_A11 = 0b00011011;
constexpr uint8_t C1_A12 = 0b00011100;
constexpr uint8_t C1_A13 = 0b00011101;
constexpr uint8_t C1_A14 = 0b00011110;
constexpr uint8_t C1_A15 = 0b00011111;

constexpr uint8_t C2_A08 = 0b00101000;
constexpr uint8_t C2_A09 = 0b00101001;
constexpr uint8_t C2_A10 = 0b00101010;
constexpr uint8_t C2_A11 = 0b00101011;
constexpr uint8_t C2_A12 = 0b00101100;
constexpr uint8_t C2_A13 = 0b00101101;
constexpr uint8_t C2_A14 = 0b00101110;
constexpr uint8_t C2_A15 = 0b00101111;

constexpr uint8_t C3_A08 = 0b00111000;
constexpr uint8_t C3_A09 = 0b00111001;
constexpr uint8_t C3_A10 = 0b00111010;
constexpr uint8_t C3_A11 = 0b00111011;
constexpr uint8_t C3_A12 = 0b00111100;
constexpr uint8_t C3_A13 = 0b00111101;
constexpr uint8_t C3_A14 = 0b00111110;
constexpr uint8_t C3_A15 = 0b00111111;

constexpr uint8_t C4_A08 = 0b01001000;
constexpr uint8_t C4_A09 = 0b01001001;
constexpr uint8_t C4_A10 = 0b01001010;
constexpr uint8_t C4_A11 = 0b01001011;
constexpr uint8_t C4_A12 = 0b01001100;
constexpr uint8_t C4_A13 = 0b01001101;
constexpr uint8_t C4_A14 = 0b01001110;
constexpr uint8_t C4_A15 = 0b01001111;

constexpr uint8_t C5_A08 = 0b01011000;
constexpr uint8_t C5_A09 = 0b01011001;
constexpr uint8_t C5_A10 = 0b01011010;
constexpr uint8_t C5_A11 = 0b01011011;
constexpr uint8_t C5_A12 = 0b01011100;
constexpr uint8_t C5_A13 = 0b01011101;
constexpr uint8_t C5_A14 = 0b01011110;
constexpr uint8_t C5_A15 = 0b01011111;

constexpr uint8_t C6_A08 = 0b01101000;
constexpr uint8_t C6_A09 = 0b01101001;
constexpr uint8_t C6_A10 = 0b01101010;
constexpr uint8_t C6_A11 = 0b01101011;
constexpr uint8_t C6_A12 = 0b01101100;
constexpr uint8_t C6_A13 = 0b01101101;
constexpr uint8_t C6_A14 = 0b01101110;
constexpr uint8_t C6_A15 = 0b01101111;

constexpr uint8_t C7_A08 = 0b01111000;
constexpr uint8_t C7_A09 = 0b01111001;
constexpr uint8_t C7_A10 = 0b01111010;
constexpr uint8_t C7_A11 = 0b01111011;
constexpr uint8_t C7_A12 = 0b01111100;
constexpr uint8_t C7_A13 = 0b01111101;
constexpr uint8_t C7_A14 = 0b01111110;
constexpr uint8_t C7_A15 = 0b01111111;

Ht16k33Cutom::Ht16k33Cutom(): ht16k33DeregateMember_() {}


} // custom
} // tk_7seg_project
} // tk