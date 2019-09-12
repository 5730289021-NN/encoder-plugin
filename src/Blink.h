/******************************************************************
 * Blink plugin library for KB-IDE by chiang mai maker club
 ******************************************************************/

#ifndef blink_h
#define blink_h

#include <Arduino.h>


#if ARDUINO < 100
  #include <WProgram.h>
#else
  #include <Arduino.h>
#endif

class BLINK
{
public:
  BLINK();
  ~BLINK();

  void begin(uint8_t _pin, const char* _mode);
  void blink(uint8_t _pin, uint16_t _delay);
  
protected:
private:
	unsigned long prevMillis = 0;
	unsigned long curMillis = 0;
};

#endif /*blink_h*/
