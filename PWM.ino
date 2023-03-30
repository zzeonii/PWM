#include <TimerOne.h>

const int LED = 10;

void setup() {
  // put your setup code here, to run once:
  Timer1.initialize();
  Timer1.pwm(LED,0);

  Timer1.setPeriod(1000); //1Hz
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int t_high=0;t_high<=1023;t_high++) {
    Timer1.setPwmDuty(LED,t_high); // 0~1023
    delay(1);
  }
}
