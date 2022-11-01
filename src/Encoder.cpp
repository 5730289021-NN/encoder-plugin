/******************************************************************
 * BLINK plugin library for KB-IDE by chiang mai maker club
 *****************************************************************/

#include "Encoder.h"

Encoder::Encoder() {}
Encoder::~Encoder() {}

void Encoder::begin(uint8_t _pin_A, uint8_t _pin_B) {
  pinMode(_pin_A, INPUT_PULLUP);
  pinMode(_pin_B, INPUT_PULLUP);
  // Remember its state so we will never use digitalRead again.
  pin_A_state = digitalRead(_pin_A);
  pin_B_state = digitalRead(_pin_A);
  attachInterrupt(digitalPinToInterrupt(_pin_A), pin_A_callback, CHANGE);
  attachInterrupt(digitalPinToInterrupt(_pin_B), pin_B_callback, CHANGE);
  initialized = true;
  pin_A = _pin_A;
  pin_B = _pin_B;
}

void Encoder::end() {
  if(initialized) {
    detachInterrupt(digitalPinToInterrupt(pin_A));
    detachInterrupt(digitalPinToInterrupt(pin_B));
    initialized = false;
  }
}

void Encoder::pin_A_callback() {
  pin_A_state = !pin_A_state;
  update_counter();
}

void Encoder::pin_B_callback() {
  pin_B_state = !pin_B_state;
  update_counter();
}

void Encoder::update_counter() {
  if(pin_A_state && pin_B_state || !pin_A_state && !pin_B_state) {
    counter++;
  } else {
    counter--;
  }
}