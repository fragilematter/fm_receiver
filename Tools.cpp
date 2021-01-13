/*

  FM Receiver Project based on Arduino
  Copyright (c) 2017-2018 Michael A. Matveev. All right reserved.
  This firmware is licensed under a GNU GPL v.3 License.

  For more information see: https://www.gnu.org/licenses/gpl-3.0.en.html

*/

#include <Arduino.h>

boolean checkMilliDiff(unsigned int difference, unsigned long *timestamp) {
  if (millis() - *timestamp > difference) {
    *timestamp = millis();
    return true;
  } else {
    return false;
  }
};

boolean checkMillis(int m) {
  static unsigned long __tstamp = 0;
  return checkMilliDiff((unsigned int)m, &__tstamp);
};

boolean checkMillis2(int m) {
  static unsigned long __tstamp = 0;
  return checkMilliDiff((unsigned int)m, &__tstamp);
};
