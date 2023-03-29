#include "mbed.h"
#include <PwmOut.h>

PwmOut PWM1(D6);

int main()
{
  int i = 0;
  while (1)
  {
    float width;
    PWM1.period_ms(5);
    width = 2.5 * (cos(2*3.1416/20 * i + 3.1416)) + 2.5;
    PWM1.pulsewidth_ms(width);
    printf("%f\n\r", PWM1.read());
    ThisThread::sleep_for(40ms);
    i++;
  }
}