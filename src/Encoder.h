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

  void begin(uint8_t _pin_A, uint8_t _pin_B);
  void end();
  long counter = 0;
  
protected:
private:
  void pin_A_callback();
  void pin_B_callback();
  void update_counter();

  bool initialized = false;
  uint8_t pin_A;
  uint8_t pin_B;
  bool pin_A_state = false;
  bool pin_B_state = false;

};

#endif /*blink_h*/
