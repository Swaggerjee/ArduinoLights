#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(35, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  strip.setPixelColor(0,25,25,112);
  strip.setPixelColor(1,0,0,205);
  strip.setPixelColor(2,127,255,212);
  strip.setPixelColor(3,139,0,139);
  strip.setPixelColor(4,25,25,112);
  strip.setPixelColor(5,0,0,205);
  strip.setPixelColor(6,127,255,212);
  strip.setPixelColor(7,139,0,139);
  strip.show();
  delay(100);
  strip.setPixelColor(0,0,255,0);
  strip.show();
  delay(100);
}
// Ronit is the coolest


