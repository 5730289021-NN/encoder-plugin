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

  static void begin(uint8_t _pin_A, uint8_t _pin_B);
  static void end();
  static long get_counter();
  
protected:
private:
  static void pin_A_callback();
  static void pin_B_callback();
  static void update_counter();

  static long counter;

  static bool initialized;
  static uint8_t pin_A;
  static uint8_t pin_B;
  static bool pin_A_state;
  static bool pin_B_state;

};

#endif /*blink_h*/
