#define redpin 3
#define greenpin 5
#define bluepin 6
int red = 0;
int green = 0;
int blue = 0;

void setup() {
 pinMode(redpin, OUTPUT);
 pinMode(greenpin, OUTPUT);
 pinMode(bluepin, OUTPUT);
}

void loop(){
 digitalWrite(redpin, red);   
 delay(300);
 digitalWrite(greenpin, green);   
 delay(300);
 digitalWrite(bluepin, blue);   
 delay(300);
 digitalWrite(redpin, HIGH);
 delay(800);
 digitalWrite(greenpin, HIGH);
 delay(800);
 digitalWrite(bluepin, HIGH);
 delay(800);
}
