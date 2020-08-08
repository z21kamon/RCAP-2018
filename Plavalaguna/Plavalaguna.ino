//motor 1
#define in1 7
#define in2 6 
#define enA 9  

//motor 2
#define in3 5
#define in4 4 
#define enB 3 

#define left_tentacles 11
#define right_tentacles 12

#define ir A5

#define minimum 200

void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(enA,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(enB,OUTPUT);
pinMode(left_tentacles, OUTPUT);
pinMode(right_tentacles, OUTPUT);
pinMode(ir, INPUT);
}

void loop() {
  double range = analogRead(ir);
  double voltage = range*5.0/1024;
  double res = voltage*100;
  if(res <= minimum) {
   delay(2000);
   digitalWrite(left_tentacles, HIGH);
   digitalWrite(right_tentacles, HIGH);
   go(1,70,71); //entry
   delay(2500);
   go(3,0,0); //stop
   delay(6000);
   go(4,96,96); //turn 1
   delay(2350);
   go(3,0,0); //stop
   delay(10000);
   go(5,96,96); //turn 2
   delay(2550);
   go(3,0,0); //stop
   delay(2000);
   go(1,70,71);
   delay(1000); //go stright
   go(2,70,71);
   delay(1000); //go back
   go(3,0,0);
   delay(4000);
   go(4,96,96); //turn 3
   delay(2450);
   go(3,0,0);
   delay(2000);
   go(1,70,71);
   delay(1000); //go stright
   go(2,70,71);
   delay(1000); //go back
   go(3,0,0);
   delay(20000);
   go(4,96,96); //turn 4
   delay(2150);
   go(3,0,0);
   delay(1000);
   go(4,96,96); //turn 5
   delay(2450);
   go(3,0,0);
   delay(5000);
   go(1,70,70);
   delay(1500);
   go(3,0,0);
   delay(60000); //complete stop
   digitalWrite(left_tentacles, LOW);
   digitalWrite(right_tentacles, LOW);
} else {
  go(3,0,0);
  delay(100);
}
}

void go(int dirrection,int speed1, int speed2)
//directions:
// 1 forward
// 2 backward
// 3 stop
// 4 right
// 5 left
{
if(dirrection==1)
{
  digitalWrite(in2,LOW);
  analogWrite(enA,speed1);
  digitalWrite(in1,HIGH);

  digitalWrite(in4,LOW);
  analogWrite(enB,speed2);
  digitalWrite(in3,HIGH);
}
else if(dirrection==2)
{
  digitalWrite(in2,HIGH);
  analogWrite(enA,speed1);
  digitalWrite(in1,LOW);

  digitalWrite(in4,HIGH);
  analogWrite(enB,speed2);
  digitalWrite(in3,LOW);
}
else if(dirrection==3)
{
  digitalWrite(in2,LOW);
  analogWrite(enA,speed1);
  digitalWrite(in1,LOW);

  digitalWrite(in4,LOW);
  analogWrite(enB,speed2);
  digitalWrite(in3,LOW);
}
else if(dirrection==4)
{
  digitalWrite(in2,HIGH);
  analogWrite(enA,speed1);
  digitalWrite(in1,LOW);

  digitalWrite(in4,LOW);
  analogWrite(enB,speed2);
  digitalWrite(in3,HIGH);
}
else if(dirrection==5)
{
  digitalWrite(in2,LOW);
  analogWrite(enA,speed1);
  digitalWrite(in1,HIGH);

  digitalWrite(in4,HIGH);
  analogWrite(enB,speed2);
  digitalWrite(in3,LOW);
}
}
