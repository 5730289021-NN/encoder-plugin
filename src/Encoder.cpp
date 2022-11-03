/******************************************************************
 * Encoder plugin library for KB-IDE by NN
 *****************************************************************/
#include "Encoder.h"


Encoder::Encoder() {}
Encoder::~Encoder() {}

bool Encoder::initialized = false;
bool Encoder::pin_A_state = false;
bool Encoder::pin_B_state = false;
long Encoder::counter = 0;

static void Encoder::begin(uint8_t _pin_A, uint8_t _pin_B) {
  pinMode(_pin_A, INPUT_PULLUP);
  pinMode(_pin_B, INPUT_PULLUP);
  // Remember its state so we will never use digitalRead again.
  pin_A_state = digitalRead(_pin_A);
  pin_B_state = digitalRead(_pin_A);
  attachInterrupt(digitalPinToInterrupt(_pin_A), Encoder::pin_A_callback, CHANGE);
  attachInterrupt(digitalPinToInterrupt(_pin_B), Encoder::pin_B_callback, CHANGE);
  initialized = true;
  pin_A = _pin_A;
  pin_B = _pin_B;
}

static void Encoder::end() {
  if(initialized) {
    detachInterrupt(digitalPinToInterrupt(pin_A));
    detachInterrupt(digitalPinToInterrupt(pin_B));
    initialized = false;
  }
}

static void Encoder::pin_A_callback() {
  pin_A_state = !pin_A_state;
  update_counter();
}

static void Encoder::pin_B_callback() {
  pin_B_state = !pin_B_state;
  update_counter();
}

static void Encoder::update_counter() {
  if(pin_A_state && pin_B_state || !pin_A_state && !pin_B_state) {
    counter++;
  } else {
    counter--;
  }
}

static long Encoder::get_counter() {
  return counter;
}