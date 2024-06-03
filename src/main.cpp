#include <Arduino.h>
#define onboard 13


void setup() {
  pinMode(onboard, OUTPUT);

  //Serial.begin(9600);

}

void loop() {
  digitalWrite(onboard, LOW);
  delay(500);
  digitalWrite(onboard, HIGH);
  delay(4000);
//Serial.println('ODOT!');
}