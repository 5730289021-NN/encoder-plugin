/******************************************************************
 * Encoder plugin library for KB-IDE by NN
 *****************************************************************/
#include "Encoder.h"


Encoder::Encoder() {}
Encoder::~Encoder() {}

bool Encoder::initializedX = false;
bool Encoder::p1_state = false;
bool Encoder::p2_state = false;
bool Encoder::p3_state = false;
bool Encoder::p4_state = false;
long Encoder::counterX = 0;
long Encoder::counterY = 0;

static void Encoder::beginX(uint8_t p1, uint8_t p2) {
  pinMode(p1, INPUT_PULLUP);
  pinMode(p2, INPUT_PULLUP);
  // Remember its state so we will never use digitalRead again.
  p1_state = digitalRead(p1);
  p2_state = digitalRead(p2);
  attachInterrupt(digitalPinToInterrupt(p1), Encoder::p1_callback, CHANGE);
  attachInterrupt(digitalPinToInterrupt(p2), Encoder::p2_callback, CHANGE);
  initializedX = true;
  Encoder::p1 = p1;
  Encoder::p2 = p2;
}

static void Encoder::beginY(uint8_t p3, uint8_t p4) {
  pinMode(p3, INPUT_PULLUP);
  pinMode(p4, INPUT_PULLUP);
  // Remember its state so we will never use digitalRead again.
  p3_state = digitalRead(p3);
  p4_state = digitalRead(p4);
  attachInterrupt(digitalPinToInterrupt(p3), Encoder::p3_callback, CHANGE);
  attachInterrupt(digitalPinToInterrupt(p4), Encoder::p4_callback, CHANGE);
  initializedY = true;
  Encoder::p3 = p3;
  Encoder::p4 = p4;
}

static void Encoder::endX() {
  if(initializedX) {
    detachInterrupt(digitalPinToInterrupt(p1));
    detachInterrupt(digitalPinToInterrupt(p2));
    initializedX = false;
  }
}

static void Encoder::endY() {
  if(initializedY) {
    detachInterrupt(digitalPinToInterrupt(p3));
    detachInterrupt(digitalPinToInterrupt(p4));
    initializedY = false;
  }
}

static void Encoder::p1_callback() {
  p1_state = !p1_state;
  if(p1_state && !p2_state || !p1_state && p2_state) {
    counterX++;
  } else if{
    counterX--;
  }
}

static void Encoder::p2_callback() {
  p2_state = !p2_state;
  if(p1_state && p2_state || !p1_state && !p2_state) {
    counterX++;
  } else {
    counterX--;
  }
}

static void Encoder::p3_callback() {
  p3_state = !p3_state;
  update_counterY();
}

static void Encoder::p4_callback() {
  p4_state = !p4_state;
  update_counterY();
}

// static void Encoder::update_counterX() {
//   if(p1_state && p2_state || !p1_state && !p2_state) {
//     counterX++;
//   } else {
//     counterX--;
//   }
// }

// static void Encoder::update_counterY() {
//   if(p3_state && p4_state || !p3_state && !p4_state) {
//     counterY++;
//   } else {
//     counterY--;
//   }
// }

static long Encoder::get_counterX() {
  return counterX;
}

static long Encoder::get_counterY() {
  return counterY;
}