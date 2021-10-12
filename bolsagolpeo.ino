#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN       13
#define NUMPIXELS 8

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 500

byte rojo=0;
byte verde=0;
byte azul=0;
const byte PAUSA=0;
int nump=0;
int golpe=0;
//int senaalto=1023;
//int senbajo=0;

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  Serial.begin (115200);
  pixels.begin();
  pixels.show();
}

void loop() {
   pixels.setBrightness(10);
//-------------------------------------------------------------lectura de golpe 
  golpe=analogRead(A0);//Leo analogo
  Serial.println(golpe);//imprimo analogo
  nump=map(golpe, 0, 1023, 0, 8);
  Serial.print(nump);//imprimo analogo
  Serial.print('\t');
//----------------------------------------------------------------------------------------
//-------------------------------------------------------------luces  
 pixels.clear();

  switch (nump){
    case 0:
    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.show();
    delay(PAUSA);
    break;
    
    case 1:
    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.show();
    delay(PAUSA);
    break;

    case 2:
    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
    pixels.show();
    delay(PAUSA);
    break;

    case 3:
    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
    pixels.show();
    delay(PAUSA);
    break;
    
    case 4:
    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(4, 255, 255, 0);//rojo,verde,azul 0-255
    pixels.show();
    delay(PAUSA);
    break;
    
    case 5:
    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(4, 255, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(5, 255, 128, 0);//rojo,verde,azul 0-255
    pixels.show();
    delay(PAUSA);
    break;
    
    case 6:
    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(4, 255, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(5, 255, 128, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(6, 255, 0, 0);//rojo,verde,azul 0-255
    pixels.show();
    delay(PAUSA);
    break;
    
    case 7:
    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(4, 255, 255, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(5, 255, 128, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(6, 255, 0, 0);//rojo,verde,azul 0-255
    pixels.setPixelColor(7, 255, 0, 0);//rojo,verde,azul 0-255
    pixels.show();
    delay(PAUSA);
    break;
           
    }
    


//  for(int i=0; i<nump; i++) {//NUMPIXELS
//    pixels.setPixelColor(i, pixels.Color(i, 10, 10));//rojo,verde,azul 0-255
//    pixels.show();
//
//    }
}

//----------------------------------------------------------------
//#include <Adafruit_NeoPixel.h>
//
//#define PIN 2
//
//#define NUM_LEDS 8
//
//// Parameter 1 = number of pixels in strip
//
//// Parameter 2 = pin number (most are valid)
//
//// Parameter 3 = pixel type flags, add together as needed:
//
////   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//
////   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//
////   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//
////   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//
//Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);
//
//
//
//void setup() {
//
//  strip.begin();
//
//  strip.show(); // Initialize all pixels to 'off'
//
//}
//
//
//
//void loop() { 
//
//  // Slower:
//
//  // Strobe(0xff, 0x77, 0x00, 10, 100, 1000);
//
//  // Fast:
//
//  Strobe(0xff, 0xff, 0xff, 10, 50, 1000);
//
//}
//
//
//
//void Strobe(byte red, byte green, byte blue, int StrobeCount, int FlashDelay, int EndPause){
//
//  for(int j = 0; j < StrobeCount; j++) {
//
//    setAll(red,green,blue);
//
//    showStrip();
//
//    delay(FlashDelay);
//
//    setAll(0,0,0);
//
//    showStrip();
//
//    delay(FlashDelay);
//
//  }
//
// 
//
// delay(EndPause);
//
//}
//
//// *** REPLACE TO HERE ***
//
//
//
//void showStrip() {
//
//   strip.show();
//
//}
//
//
//
//void setPixel(int Pixel, byte red, byte green, byte blue) {
//
//   strip.setPixelColor(Pixel, strip.Color(red, green, blue));
//
//
//
//}
//
//
//
//void setAll(byte red, byte green, byte blue) {
//
//  for(int i = 0; i < NUM_LEDS; i++ ) {
//
//    setPixel(i, red, green, blue); 
//
//  }
//
//  showStrip();
//
//}
