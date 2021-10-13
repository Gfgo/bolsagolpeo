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
  for(int i=0; i<nump; i++) {
    if (i<=1) rojo=0;
    if ((i>=2)&&(i<=4)) rojo=128;
    if (i>=4) rojo=255;
    if (i<=4) verde=255;
    if (i==5) verde=128;
    if (i>=6) verde=0;
    if (i<=7) azul=0;
    pixels.setPixelColor(i, rojo, verde,  azul);//rojo,verde,azul 0-255
    pixels.show();
    delay(PAUSA);
  }
//  switch (nump){
//    case 0:
//    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.show();
//    delay(PAUSA);
//    break;
//    
//    case 1:
//    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.show();
//    delay(PAUSA);
//    break;
//
//    case 2:
//    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
//    pixels.show();
//    delay(PAUSA);
//    break;
//
//    case 3:
//    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
//    pixels.show();
//    delay(PAUSA);
//    break;
//    
//    case 4:
//    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(4, 255, 255, 0);//rojo,verde,azul 0-255
//    pixels.show();
//    delay(PAUSA);
//    break;
//    
//    case 5:
//    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(4, 255, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(5, 255, 128, 0);//rojo,verde,azul 0-255
//    pixels.show();
//    delay(PAUSA);
//    break;
//    
//    case 6:
//    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(4, 255, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(5, 255, 128, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(6, 255, 0, 0);//rojo,verde,azul 0-255
//    pixels.show();
//    delay(PAUSA);
//    break;
//    
//    case 7:
//    pixels.setPixelColor(0, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(1, 0, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(2, 128, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(3, 190, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(4, 255, 255, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(5, 255, 128, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(6, 255, 0, 0);//rojo,verde,azul 0-255
//    pixels.setPixelColor(7, 255, 0, 0);//rojo,verde,azul 0-255
//    pixels.show();
//    delay(PAUSA);
//    break;
//           
//    }
}
