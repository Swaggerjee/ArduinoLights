#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(35, 0, NEO_GRB + NEO_KHZ800);

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
  strip.setPixelColor(8.255,20,147);
  strip.setPixelColor(9,255,127,80);
  strip.setPizelColor(10,178,34,34);
  strip.show();
  delay(100);
 
  strip.setPixelColor(0,25,25,112);
  strip.setPixelColor(1,0,0,205);
  strip.setPixelColor(2,127,255,212);
  strip.setPixelColor(3,139,0,139);
  strip.setPixelColor(4,25,25,112);
  strip.setPixelColor(5,0,0,205);
  strip.setPixelColor(6,127,255,212);
  strip.setPixelColor(7,139,0,139);
  strip.setPixelColor(8.255,20,147);
  strip.setPixelColor(9,255,127,80);
  strip.setPizelColor(10,178,34,34);
  strip.show();
  delay(100);
}
// Ronit is the coolest


