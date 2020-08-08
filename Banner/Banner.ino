#include <NewPing.h>
#define TRIGGER_PIN 9
#define ECHO_PIN 8
#define MAX_DISTANCE 500
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
#define sensor 11
int relay3 = 10;
int relay4 = 4;


void setup() {
 pinMode(sensor, INPUT);
  Serial.begin(9600);
  pinMode(relay3, INPUT);
  pinMode(relay4, INPUT);
}

void loop() {
int val = digitalRead(sensor);
delay(50);
unsigned int uS = sonar.ping_cm();
Serial.print (val);
if (val >= 1)
  {pinMode(relay3, OUTPUT);
  pinMode(relay4, INPUT);
  delay (1800);
  pinMode (relay3, INPUT);
  pinMode (relay4, INPUT);
  delay(6000);
  pinMode (relay3, INPUT);
  pinMode (relay4, OUTPUT);
  delay(1800);
  pinMode (relay3, INPUT);
  pinMode (relay4, INPUT);
  delay(180000);}
else
{pinMode(relay3, INPUT);
  pinMode(relay4, INPUT);
  delay (100);}
}
