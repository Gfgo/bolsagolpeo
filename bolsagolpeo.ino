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

byte nump=0;
byte nump2=0;

int golpe=0;                                              //Lectura de golpe
int golpe2=0;

float furk=0;                                             //Fuerza en Kilogramos byte porque es menor a 255
//float furk2=0;

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
  golpe=analogRead(A0);                                    //Leo analogo 0
  golpe2=analogRead(A1);                                   //Leo analogo 1
  
  nump=map(golpe, 0, 61, 0, 8);                  //nump es para el nivel fuerza visualizado en barra 61FCRcirc 1023FCRcuadra
  furk=map(golpe, 0, 61, 0, 9.98);
  nump2=map(golpe2, 0, 1023, 0, 8);
  //furk2=map(golpe2, 0, 61, 0, 9.98);

  char fuerza[3];
  sprintf(fuerza, "%d %d", golpe, golpe2);
  Serial.println(fuerza);
  Serial.print('\t');
  Serial.print(furk);
  Serial.println("Kg");
//-------------------------------------------------------------luces  
  pixels.clear();
  for(int i=0; (i<nump || i<nump2); i++) {
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
}
