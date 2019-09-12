/******************************************************************
 * BLINK plugin library for KB-IDE by chiang mai maker club
 *****************************************************************/

#include "Blink.h"

BLINK::BLINK() {}
BLINK::~BLINK() {}

void BLINK::begin(uint8_t _pin, const char* _mode) {
  pinMode(_pin, _mode);
}

void BLINK::blink(uint8_t _pin, uint16_t _delay) {
  curMillis = millis();
  if (curMillis - prevMillis >= _delay) {
    prevMillis = curMillis;
    digitalWrite(_pin, !digitalRead(_pin));
  }
}
