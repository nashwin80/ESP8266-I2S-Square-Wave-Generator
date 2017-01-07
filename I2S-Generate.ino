#include <Arduino.h>
#include "i2s.h"

void setup(){
  i2s_begin();
  i2s_set_rate(187500);
}

void loop(){
  i2s_write_sample(0xAAAAAAAA);
//  i2s_write_lr(0xAAAA,0xAAAA);
}

