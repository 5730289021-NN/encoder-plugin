/******************************************************************
 * Encoder plugin library for KB-IDE by NN
 *****************************************************************/
#include "Encoder.h"


Encoder::Encoder() {}
Encoder::~Encoder() {}

bool Encoder::initializedX = false;
bool Encoder::initializedY = false;
bool Encoder::single_modeX = false;
bool Encoder::single_modeY = false;

uint8_t Encoder::p1 = 0;
uint8_t Encoder::p2 = 0;
uint8_t Encoder::p3 = 0;
uint8_t Encoder::p4 = 0;
bool Encoder::p1_state = false;
bool Encoder::p2_state = false;
bool Encoder::p3_state = false;
bool Encoder::p4_state = false;
long Encoder::counterX = 0;
long Encoder::counterY = 0;

void Encoder::beginX(uint8_t p1, uint8_t p2) {
  pinMode(p1, INPUT_PULLUP);
  pinMode(p2, INPUT_PULLUP);
  // Remember its state so we will never use digitalRead again.
  Encoder::p1_state = digitalRead(p1);
  Encoder::p2_state = digitalRead(p2);
  attachInterrupt(digitalPinToInterrupt(p1), Encoder::p1_callback, CHANGE);
  attachInterrupt(digitalPinToInterrupt(p2), Encoder::p2_callback, CHANGE);
  Encoder::initializedX = true;
  Encoder::single_modeX = false;
  Encoder::p1 = p1;
  Encoder::p2 = p2;
}

void Encoder::beginX(uint8_t p1) {
  pinMode(p1, INPUT_PULLUP);
  // Remember its state so we will never use digitalRead again.
  Encoder::p1_state = digitalRead(p1);
  attachInterrupt(digitalPinToInterrupt(p1), Encoder::p1s_callback, CHANGE);
  Encoder::initializedX = true;
  Encoder::single_modeX = true;
  Encoder::p1 = p1;
}

void Encoder::beginY(uint8_t p3, uint8_t p4) {
  pinMode(p3, INPUT_PULLUP);
  pinMode(p4, INPUT_PULLUP);
  // Remember its state so we will never use digitalRead again.
  Encoder::p3_state = digitalRead(p3);
  Encoder::p4_state = digitalRead(p4);
  attachInterrupt(digitalPinToInterrupt(p3), Encoder::p3_callback, CHANGE);
  attachInterrupt(digitalPinToInterrupt(p4), Encoder::p4_callback, CHANGE);
  Encoder::initializedY = true;
  Encoder::single_modeY = false;
  Encoder::p3 = p3;
  Encoder::p4 = p4;
}

void Encoder::beginY(uint8_t p3) {
  pinMode(p3, INPUT_PULLUP);
  // Remember its state so we will never use digitalRead again.
  Encoder::p3_state = digitalRead(p3);
  attachInterrupt(digitalPinToInterrupt(p3), Encoder::p3s_callback, CHANGE);
  Encoder::initializedY = true;
  Encoder::single_modeY = true;
  Encoder::p3 = p3;
}

void Encoder::endX() {
  if(Encoder::initializedX) {
    detachInterrupt(digitalPinToInterrupt(Encoder::p1));
    if(!Encoder::single_modeX)
      detachInterrupt(digitalPinToInterrupt(Encoder::p2));
    Encoder::initializedX = false;
  }
}

void Encoder::endY() {
  if(Encoder::initializedY) {
    detachInterrupt(digitalPinToInterrupt(Encoder::p3));
    if(!Encoder::single_modeY)
      detachInterrupt(digitalPinToInterrupt(Encoder::p4));
    Encoder::initializedY = false;
  }
}

void Encoder::p1_callback() {
  Encoder::p1_state = !Encoder::p1_state;
  if(Encoder::p1_state && !Encoder::p2_state || !Encoder::p1_state && Encoder::p2_state) {
    Encoder::counterX++;
  } else {
    Encoder::counterX--;
  }
}

void Encoder::p2_callback() {
  Encoder::p2_state = !Encoder::p2_state;
  if(Encoder::p1_state && Encoder::p2_state || !Encoder::p1_state && !Encoder::p2_state) {
    Encoder::counterX++;
  } else {
    Encoder::counterX--;
  }
}

void Encoder::p3_callback() {
  Encoder::p3_state = !Encoder::p3_state;
  if(Encoder::p3_state && !Encoder::p4_state || !Encoder::p3_state && Encoder::p4_state) {
    Encoder::counterY++;
  } else {
    Encoder::counterY--;
  }
}

void Encoder::p4_callback() {
  Encoder::p4_state = !Encoder::p4_state;
  if(Encoder::p3_state && Encoder::p4_state || !Encoder::p3_state && !Encoder::p4_state) {
    Encoder::counterY++;
  } else {
    Encoder::counterY--;
  }
}

void Encoder::p1s_callback() {
  Encoder::counterX++;
}

void Encoder::p3s_callback() {
  Encoder::counterY++;
}

void Encoder::clearX() {
  Encoder::counterX = 0;
}

void Encoder::clearY() {
  Encoder::counterY = 0;
}

long Encoder::get_counterX() {
  return Encoder::counterX;
}

long Encoder::get_counterY() {
  return Encoder::counterY;
}