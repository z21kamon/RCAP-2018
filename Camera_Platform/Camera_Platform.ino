//motor 1
#define in1 7
#define in2 6 
#define enA 9  

//motor 2
#define in3 5
#define in4 4 
#define enB 3 

#define sharp 8

void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(enA,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(enB,OUTPUT);
pinMode(sharp, INPUT);
}

void loop() {
  if(digitalRead(sharp) == 1){
   delay(1000);
   go(1,70,70); //entry
   delay(4200);
   go(3,0,0); //stop
   delay(20000);
   go(4,70,70); //turn right
   delay(970);
   go(1,70,70); //go across the scene
   delay(6000); 
   go(3,0,0); //stop
   delay(20000);
   go(4,96,96); //turn right
   delay(900);
   go(1,70,70);
   delay(1300); //go along the border
   go(3,0,0);
   delay(2000);
   go(4,96,96);
   delay(1300);
   go(3,0,0);
   delay(60000); //complete stop
  } else {
    go(3, 0,0);
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
