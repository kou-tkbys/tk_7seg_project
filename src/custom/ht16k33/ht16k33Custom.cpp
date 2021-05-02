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
 * | 0000 0000 | 0000 0000 |
 * ----- ~ --------- ~ -----
 * | 0000 0111 | 0000 0111 |
 * -------------------------
 */
constexpr uint8_t C0_A0 = 0b0000000000000000;
constexpr uint8_t C0_A1 = 0b0000000000000001;
constexpr uint8_t C0_A2 = 0b0000000000000010;
constexpr uint8_t C0_A3 = 0b0000000000000011;
constexpr uint8_t C0_A4 = 0b0000000000000100;
constexpr uint8_t C0_A5 = 0b0000000000000101;
constexpr uint8_t C0_A6 = 0b0000000000000110;
constexpr uint8_t C0_A7 = 0b0000000000000111;

// TODO: 以下指定の方法間違えてるね‥‥(uint_8超えてる)
// constexpr uint8_t C1_A0 = 0b0000000100000000;
// constexpr uint8_t C1_A1 = 0b0000000100000001;
// constexpr uint8_t C1_A2 = 0b0000000100000010;
// constexpr uint8_t C1_A3 = 0b0000000100000011;
// constexpr uint8_t C1_A4 = 0b0000000100000100;
// constexpr uint8_t C1_A5 = 0b0000000100000101;
// constexpr uint8_t C1_A6 = 0b0000000100000110;
// constexpr uint8_t C1_A7 = 0b0000000100000111;

// constexpr uint8_t C2_A0 = 0b0000001000000000;
// constexpr uint8_t C2_A1 = 0b0000001000000001;
// constexpr uint8_t C2_A2 = 0b0000001000000010;
// constexpr uint8_t C2_A3 = 0b0000001000000011;
// constexpr uint8_t C2_A4 = 0b0000001000000100;
// constexpr uint8_t C2_A5 = 0b0000001000000101;
// constexpr uint8_t C2_A6 = 0b0000001000000110;
// constexpr uint8_t C2_A7 = 0b0000001000000111;

// constexpr uint8_t C3_A0 = 0b0000001100000000;
// constexpr uint8_t C3_A1 = 0b0000001100000001;
// constexpr uint8_t C3_A2 = 0b0000001100000010;
// constexpr uint8_t C3_A3 = 0b0000001100000011;
// constexpr uint8_t C3_A4 = 0b0000001100000100;
// constexpr uint8_t C3_A5 = 0b0000001100000101;
// constexpr uint8_t C3_A6 = 0b0000001100000110;
// constexpr uint8_t C3_A7 = 0b0000001100000111;

// constexpr uint8_t C4_A0 = 0b0000010000000000;
// constexpr uint8_t C4_A1 = 0b0000010000000001;
// constexpr uint8_t C4_A2 = 0b0000010000000010;
// constexpr uint8_t C4_A3 = 0b0000010000000011;
// constexpr uint8_t C4_A4 = 0b0000010000000100;
// constexpr uint8_t C4_A5 = 0b0000010000000101;
// constexpr uint8_t C4_A6 = 0b0000010000000110;
// constexpr uint8_t C4_A7 = 0b0000010000000111;

// constexpr uint8_t C5_A0 = 0b0000010100000000;
// constexpr uint8_t C5_A1 = 0b0000010100000001;
// constexpr uint8_t C5_A2 = 0b0000010100000010;
// constexpr uint8_t C5_A3 = 0b0000010100000011;
// constexpr uint8_t C5_A4 = 0b0000010100000100;
// constexpr uint8_t C5_A5 = 0b0000010100000101;
// constexpr uint8_t C5_A6 = 0b0000010100000110;
// constexpr uint8_t C5_A7 = 0b0000010100000111;

// constexpr uint8_t C6_A0 = 0b0000011000000000;
// constexpr uint8_t C6_A1 = 0b0000011000000001;
// constexpr uint8_t C6_A2 = 0b0000011000000010;
// constexpr uint8_t C6_A3 = 0b0000011000000011;
// constexpr uint8_t C6_A4 = 0b0000011000000100;
// constexpr uint8_t C6_A5 = 0b0000011000000101;
// constexpr uint8_t C6_A6 = 0b0000011000000110;
// constexpr uint8_t C6_A7 = 0b0000011000000111;

// constexpr uint8_t C7_A0 = 0b0000011100000000;
// constexpr uint8_t C7_A1 = 0b0000011100000001;
// constexpr uint8_t C7_A2 = 0b0000011100000010;
// constexpr uint8_t C7_A3 = 0b0000011100000011;
// constexpr uint8_t C7_A4 = 0b0000011100000100;
// constexpr uint8_t C7_A5 = 0b0000011100000101;
// constexpr uint8_t C7_A6 = 0b0000011100000110;
// constexpr uint8_t C7_A7 = 0b0000011100000111;

/**
 * カソード C0-C7 に対してアノード A8-A15へ接続したLED指定値
 * 
 * -------------------------
 * |  Cathode  |   Anode   |
 * -------------------------
 * | 0000 0000 | 0000 1000 |
 * ----- ~ --------- ~ -----
 * | 0000 0111 | 0000 1111 |
 * -------------------------
 */
constexpr uint8_t C0_A8 = 0b0000000000001000;
constexpr uint8_t C0_A9 = 0b0000000000001001;
constexpr uint8_t C0_A10= 0b0000000000001010;
constexpr uint8_t C0_A11= 0b0000000000001011;
constexpr uint8_t C0_A12= 0b0000000000001100;
constexpr uint8_t C0_A13= 0b0000000000001101;
constexpr uint8_t C0_A14= 0b0000000000001110;
constexpr uint8_t C0_A15= 0b0000000000001111;

// TODO: 以下指定の方法間違えてるね‥‥(uint_8超えてる)
// constexpr uint8_t C1_A8 = 0b0000000100001000;
// constexpr uint8_t C1_A9 = 0b0000000100001001;
// constexpr uint8_t C1_A10= 0b0000000100001010;
// constexpr uint8_t C1_A11= 0b0000000100001011;
// constexpr uint8_t C1_A12= 0b0000000100001100;
// constexpr uint8_t C1_A13= 0b0000000100001101;
// constexpr uint8_t C1_A14= 0b0000000100001110;
// constexpr uint8_t C1_A15= 0b0000000100001111;

// constexpr uint8_t C2_A8 = 0b0000001000001000;
// constexpr uint8_t C2_A9 = 0b0000001000001001;
// constexpr uint8_t C2_A10= 0b0000001000001010;
// constexpr uint8_t C2_A11= 0b0000001000001011;
// constexpr uint8_t C2_A12= 0b0000001000001100;
// constexpr uint8_t C2_A13= 0b0000001000001101;
// constexpr uint8_t C2_A14= 0b0000001000001110;
// constexpr uint8_t C2_A15= 0b0000001000001111;

// constexpr uint8_t C3_A8 = 0b0000001100001000;
// constexpr uint8_t C3_A9 = 0b0000001100001001;
// constexpr uint8_t C3_A10= 0b0000001100001010;
// constexpr uint8_t C3_A11= 0b0000001100001011;
// constexpr uint8_t C3_A12= 0b0000001100001100;
// constexpr uint8_t C3_A13= 0b0000001100001101;
// constexpr uint8_t C3_A14= 0b0000001100001110;
// constexpr uint8_t C3_A15= 0b0000001100001111;

// constexpr uint8_t C4_A8 = 0b0000010000001000;
// constexpr uint8_t C4_A9 = 0b0000010000001001;
// constexpr uint8_t C4_A10= 0b0000010000001010;
// constexpr uint8_t C4_A11= 0b0000010000001011;
// constexpr uint8_t C4_A12= 0b0000010000001100;
// constexpr uint8_t C4_A13= 0b0000010000001101;
// constexpr uint8_t C4_A14= 0b0000010000001110;
// constexpr uint8_t C4_A15= 0b0000010000001111;

// constexpr uint8_t C5_A8 = 0b0000010100001000;
// constexpr uint8_t C5_A9 = 0b0000010100001001;
// constexpr uint8_t C5_A10= 0b0000010100001010;
// constexpr uint8_t C5_A11= 0b0000010100001011;
// constexpr uint8_t C5_A12= 0b0000010100001100;
// constexpr uint8_t C5_A13= 0b0000010100001101;
// constexpr uint8_t C5_A14= 0b0000010100001110;
// constexpr uint8_t C5_A15= 0b0000010100001111;

// constexpr uint8_t C6_A8 = 0b0000011000001000;
// constexpr uint8_t C6_A9 = 0b0000011000001001;
// constexpr uint8_t C6_A10= 0b0000011000001010;
// constexpr uint8_t C6_A11= 0b0000011000001011;
// constexpr uint8_t C6_A12= 0b0000011000001100;
// constexpr uint8_t C6_A13= 0b0000011000001101;
// constexpr uint8_t C6_A14= 0b0000011000001110;
// constexpr uint8_t C6_A15= 0b0000011000001111;

// constexpr uint8_t C7_A8 = 0b0000011100001000;
// constexpr uint8_t C7_A9 = 0b0000011100001001;
// constexpr uint8_t C7_A10= 0b0000011100001010;
// constexpr uint8_t C7_A11= 0b0000011100001011;
// constexpr uint8_t C7_A12= 0b0000011100001100;
// constexpr uint8_t C7_A13= 0b0000011100001101;
// constexpr uint8_t C7_A14= 0b0000011100001110;
// constexpr uint8_t C7_A15= 0b0000011100001111;


Ht16k33Cutom::Ht16k33Cutom(): ht16k33DeregateMember_() {}


} // custom
} // tk_7seg_project
} // tk