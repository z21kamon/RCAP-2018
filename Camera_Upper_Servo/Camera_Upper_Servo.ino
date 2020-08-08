#include <Servo.h>
Servo myservo;
int servopos = 80;
void setup() {
  myservo.attach(6);
}
  
void loop()
{myservo.write(80);
delay (19000);
int servopos = 80;
while (true)
{while(servopos < 125) {
servopos = servopos+1;
myservo.write(servopos);
delay(45);
}
delay(5970);
while(servopos > 59) {
servopos = servopos-1;
myservo.write(servopos);
delay(45);
}
delay(3000);
}
}
