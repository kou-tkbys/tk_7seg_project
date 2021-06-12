#include <Arduino.h>
#include <ht16k33.h>
#include <TCA9548.h>

/*
 * HT16K33インスタンス
 */
HT16K33 HT;

/*
 * TCA9548インスタンス
 */
TCA9548 MP(0x70);

void setup() {

  Serial.begin(9600);
  Serial.println(__FILE__);
  Serial.println();

  Wire.begin();
  if (MP.begin() == false)
  {
    Serial.println("COULD NOT CONNECT");
  }
  HT.begin(0x00);
  // put your setup code here, to run once:
}

void loop() {
  uint8_t led;

  Serial.println("Turn on all LEDs");
  // first light up all LEDs
  for (led=0; led<128; led++) {
    HT.setLedNow(led);
    delay(10);
  } // for led
  // put your main code here, to run repeatedly:
}