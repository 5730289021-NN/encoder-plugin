/******************************************************************
 * Blink plugin library for KB-IDE by chiang mai maker club
 ******************************************************************/

#ifndef encoder_h
#define encoder_h

#include <Arduino.h>


#if ARDUINO < 100
  #include <WProgram.h>
#else
  #include <Arduino.h>
#endif

class Encoder
{
public:
  Encoder();
  ~Encoder();

  static void beginX(uint8_t p1, uint8_t p2);
  static void beginX(uint8_t p1);
  static void endX();
  static long get_counterX();
  static void clearX();


  static void beginY(uint8_t p3, uint8_t p4);
  static void beginY(uint8_t p3);
  static void endY();
  static long get_counterY();
  static void clearY();
  
protected:
private:
  static void p1_callback();
  static void p2_callback();
  static void p3_callback();
  static void p4_callback();
  static void p1s_callback();
  static void p3s_callback();



  static void update_counterX();
  static void update_counterY();

  static long counterX;
  static long counterY;

  static bool initializedX;
  static bool initializedY;

  static bool single_modeX;
  static bool single_modeY;

  static uint8_t p1; // Pin on board
  static uint8_t p2;
  static uint8_t p3;
  static uint8_t p4;
  static bool p1_state;
  static bool p2_state;
  static bool p3_state;
  static bool p4_state;

};

#endif /*blink_h*/
