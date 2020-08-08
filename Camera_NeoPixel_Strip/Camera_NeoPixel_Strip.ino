#define PIN 13
#define NUM_LEDS 76

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.setBrightness(50);

  strip.clear();
  strip.show();
}
void loop() {
  for (int i = 0; i < NUM_LEDS; i++ ) {
    strip.setPixelColor(i, 0xC1100B);     //red
    strip.show();
    delay(10);
  }
  delay(500);

  for (int i = 0; i < NUM_LEDS; i++ ) { 
    strip.setPixelColor(i, 0xE4259A);     //pink
    strip.show();
    delay(10);
  }
  delay(500);
   for (int i = 0; i < NUM_LEDS; i++ ) {
    strip.setPixelColor(i, 0x8B0DAF);     //purple
    strip.show();
    delay(10);
  }
  delay(500);

  for (int i = 0; i < NUM_LEDS; i++ ) { 
    strip.setPixelColor(i, 0x042A6C); //blue
    strip.show();
    delay(10);
  }
  delay(500);
   for (int i = 0; i < NUM_LEDS; i++ ) {
    strip.setPixelColor(i, 0x2687A1);     //gray-blue
    strip.show();
    delay(10);
  }
  delay(500);

  for (int i = 0; i < NUM_LEDS; i++ ) { 
    strip.setPixelColor(i, 0x48E0C9);     //azur
    strip.show();
    delay(10);
  }
  delay(500);
   for (int i = 0; i < NUM_LEDS; i++ ) {
    strip.setPixelColor(i, 0x2C6835);     //grass green
    strip.show();
    delay(10);
  }
  delay(500);

  for (int i = 0; i < NUM_LEDS; i++ ) { 
    strip.setPixelColor(i, 0x95EA34); //acid green
    strip.show();
    delay(10);
  }
  delay(500);
   for (int i = 0; i < NUM_LEDS; i++ ) { 
    strip.setPixelColor(i, 0xE4E62D);     //yellow
    strip.show();
    delay(10);
  }
  delay(500);
   for (int i = 0; i < NUM_LEDS; i++ ) {
    strip.setPixelColor(i, 0x987B2F);     //orange
    strip.show();
    delay(10);
  }
  delay(500);

  for (int i = 0; i < NUM_LEDS; i++ ) { 
    strip.setPixelColor(i, 0xFFFFFF); //white
    strip.show();
    delay(10);
  }
  delay(500);
}
