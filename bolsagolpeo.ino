//#include <Adafruit_NeoPixel.h> //esp4095 19/05
//#ifdef __AVR__
//  #include <avr/power.h>
//#endif
//#define NUMPIXELS   8
//#define led0        25  //GPIO25
//#define led1        26  //GPIO26 10  //IO10
//#define led2        27  //GPIO27
//Adafruit_NeoPixel strip(NUMPIXELS, led0, NEO_GRB + NEO_KHZ800);
//Adafruit_NeoPixel strip1(NUMPIXELS, led1, NEO_GRB + NEO_KHZ800);
//Adafruit_NeoPixel strip2(NUMPIXELS, led2, NEO_GRB + NEO_KHZ800);
//byte        rojo=0;
//byte        verde=0;
//byte        azul=0;
//const byte  PAUSA=500;
//
//const int pin = A0;
//const int pin1 = 39;
//const int pin2 = 34;
//const int pin3 = A3;
//const int pin4 = A4;
//const int pin5 = 13;//GPIO13
//
//int golpe0 = 0;  
//int golpe1 = 0;
//int golpe2 = 0;
//int golpe3 = 0;  
//int golpe4 = 0;
//int golpe5 = 0;
//
//byte        nump0=0;
//byte        nump1=0;
//byte        nump2=0;
//byte        nump3=0;
//byte        nump4=0;
//byte        nump5=0;
//
//float       furk0=0;                                             //Fuerza en Kilogramos byte porque es menor a 255
//float       furk1=0;
//float       furk2=0;
//float       furk3=0;                                             
//float       furk4=0;
//float       furk5=0;
//
//unsigned long previousMillis = 0;
//const long interval = 200;
//
//void setup() {
//  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
//  clock_prescale_set(clock_div_1);
//#endif
//
//  strip.begin(); strip1.begin(); strip2.begin();           
//  strip.show();  strip1.show();  strip2.show(); 
//  strip.setBrightness(10); strip1.setBrightness(10); strip2.setBrightness(10); 
//  Serial.begin (115200);
//}
//
//void loop() {
//  unsigned long currentMillis = millis();
//  
////nump es para el nivel fuerza visualizado en barra 61FCRcirc 1023FCRcuadra
////nump numero de pixeles sensor de 0-(61 o 1023) y los pixeles van 0-8
////furk fuerza en kilogramos de 0-(61 o 1023) y de 0 al limite superior
////del sensor, para el cuadrado es 20N casi 2 Kg
//
//  golpe0= analogRead(pin);
//  golpe1= analogRead(pin1);
//  golpe2= analogRead(pin2);
//  golpe3= analogRead(pin3);
//  golpe4= analogRead(pin4);
//  golpe5= analogRead(pin5);
//
//if (currentMillis - previousMillis >= interval) {
//    previousMillis = currentMillis;
//    Serial.print(golpe0); Serial.print(nump0);Serial.print('\t'); Serial.print(golpe1); Serial.print(nump1); Serial.print('\t');
//    Serial.print(golpe2); Serial.print(nump2);Serial.print('\t'); Serial.print(golpe3); Serial.print(nump3);Serial.print('\t'); 
//    Serial.print(golpe4); Serial.print(nump4);Serial.print('\t'); Serial.print(golpe5);Serial.print(nump5); Serial.println('\n');
//
//    Serial.print(furk0); Serial.print('\t'); Serial.print(furk1); Serial.print('\t'); Serial.print(furk2); 
//    Serial.print('\t'); Serial.print(furk3); Serial.print('\t'); Serial.print(furk4); Serial.print('\t'); 
//    Serial.print(furk5); Serial.println('\n');
//}//delay(10);
//
//  if(golpe0>=600){
//    nump0=map(golpe0, 600, 4095, 0, 8);                
//    furk0=map(golpe0, 600, 4095, 0, 20);               
//    }                                                  
//
//  if(golpe1>=600){
//    nump1=map(golpe1, 600, 4095, 0, 8);                
//    furk1=map(golpe1, 600, 4095, 0, 20);               
//    }
//
//    if(golpe2>=600){
//    nump2=map(golpe2, 600, 4095, 0, 8);                
//    furk2=map(golpe2, 600, 4095, 0, 20);               
//    }
//
//    if(golpe3>=600){
//    nump3=map(golpe3, 600, 4095, 0, 8);                
//    furk3=map(golpe3, 600, 4095, 0, 20);               
//    }                                                  
//
//    if(golpe4>=600){
//    nump4=map(golpe4, 600, 4095, 0, 8);                
//    furk4=map(golpe4, 600, 4095, 0, 20);               
//    }
//
//    if(golpe5>=600){
//    nump5=map(golpe5, 600, 4095, 0, 8);                
//    furk5=map(golpe5, 600, 4095, 0, 20);               
//    }
//  
//  strip.clear();
//  for(int i=0; (i<=(nump0 + nump3)); i++) {
//    if (i<=1) rojo=0;
//    if ((i>=2)&&(i<=4)) rojo=128;
//    if (i>=4) rojo=255;
//    if (i<=4) verde=255;
//    if (i==5) verde=128;
//    if (i>=6) verde=0;
//    if (i<=8) azul=0;
//    strip.setPixelColor(i, rojo, verde,  azul);//rojo,verde,azul 0-255
//    strip.show();
//    //delay(PAUSA);
//  }
//  strip1.clear();
//  for(int j=0; (j<=(nump1 + nump4)); j++) {
//    if (j<=1) rojo=0;
//    if ((j>=2)&&(j<=4)) rojo=128;
//    if (j>=4) rojo=255;
//    if (j<=4) verde=255;
//    if (j==5) verde=128;
//    if (j>=6) verde=0;
//    if (j<=8) azul=0;
//    strip1.setPixelColor(j, rojo, verde,  azul);//rojo,verde,azul 0-255
//    strip1.show();
//    //delay(PAUSA);
//  }
//  strip2.clear();
//  for(int j=0; (j<=(nump2 + nump5)); j++) {
//    if (j<=1) rojo=0;
//    if ((j>=2)&&(j<=4)) rojo=128;
//    if (j>=4) rojo=255;
//    if (j<=4) verde=255;
//    if (j==5) verde=128;
//    if (j>=6) verde=0;
//    if (j<=8) azul=0;
//    strip2.setPixelColor(j, rojo, verde,  azul);//rojo,verde,azul 0-255
//    strip2.show();
//    //delay(PAUSA);
//  }
//}//***fin loop


//**********ACELERACION
//------------------------------------------------------

float X=2.335;  //replace your value 1.355 -*1.6505 -**2.335 
float gx=0.776; //replace your value 0.776 -*0.2145 -**0.776

float Y=1.84; //replace your value 1.889 -*1.7675 -**1.84
float gy=0.173; //replace your value 0.033 -*0.0045 -**0.033

float Z=1.48; //replace your value  1.738 -*1.736 -**1.57(1.48)
float gz=0.221; //replace your value  0.021 -*0.007 -**0.221

 
void setup()
{
  Serial.begin(9600);    //Baudrate 9600
}
void loop()
{
  int x,y,z;
  x=analogRead(0);
  y=analogRead(1);
  z=analogRead(2);
  Serial.print("x= ");
  Serial.print((x*5/1024.0 - X)/gx,2);
  Serial.print(',');
  Serial.print("y= ");
  Serial.print(((y*5/1024.0- Y)/gy),2);
  Serial.print(',');
  Serial.print("z= ");
  Serial.println(((z*5/1024.0-Z)/gz),2);
  delay(100);
}


____________________________21/06
float X=2.335;  //replace your value 1.355 -*1.6505 -**2.335 
float gx=0.776; //replace your value 0.776 -*0.2145 -**0.776

float Y=1.84; //replace your value 1.889 -*1.7675 -**1.84
float gy=0.173; //replace your value 0.033 -*0.0045 -**0.033

float Z=1.48; //replace your value  1.738 -*1.736 -**1.57(1.48)
float gz=0.221; //replace your value  0.021 -*0.007 -**0.221

const byte cal=2;
byte calpin=0;

float  x=0;
float  y=0;
float  z=0;

  float x1=(((x*5/1024.0 - X)/gx),2);
  float y1=(((y*5/1024.0- Y)/gy),2);
  float z1=(((z*5/1024.0-Z)/gz),2);
  float x2=0.0; //float gx1=0;
  float y2=0.0; //float gy1=0;
  float z2=1.0; //float gz1=0;

void calibracion(){

  Serial.println(z1);//Serial.print("---");
  while (z1!=1.5){
// for (byte i=0;i<=254;i++){
  if(z1==1.5) {break;}
//  x=analogRead(0);
//     if (x2<x1){
//        gx=gx+0.02;
//        x1=((x*5/1024.0 - X)/gx,2);
//        Serial.print("suma");Serial.println(x1);}
//        else{
//          gx=gx-0.02;
//          x1=((x*5/1024.0 - X)/gx,2);
//           Serial.print("resta");Serial.println(x1);}
//    
//     y=analogRead(1);
//     if (y2<y1){
//        gy=gy+0.02;
//        y1=((y*5/1024.0 - Y)/gy,2);}
//        else{
//          gy=gy-0.02;
//          y1=((y*5/1024.0 - Y)/gy,2);}
//  
     z=analogRead(2);
      Serial.print("ggggg");
     if (z2<z1){
        gz=gz+0.2;
        z1=((z*5/1024.0 - Z)/gz,2);
        Serial.print("suma");Serial.print(z1);Serial.print(z2);Serial.println(gz);}
        else{
          gz=gz-0.2;
          z1=((z*5/1024.0 - Z)/gz,2);
          Serial.print("resta");Serial.print(z1);Serial.print(z2);Serial.println(gz);}

          //z1 y z2 no estan siendo afectados
    }
}
 
void setup()
{
  Serial.begin(9600);
  pinMode(calpin, INPUT);

}
void loop()
{
calpin=digitalRead(2);
if (calpin) {
    Serial.println("calibración");
    calibracion();}
  x=analogRead(0);
  y=analogRead(1);
  z=analogRead(2);
  Serial.print("x= ");
  Serial.print((x*5/1024.0 - X)/gx,2);
  Serial.print(',');
  Serial.print("y= ");
  Serial.print(((y*5/1024.0- Y)/gy),2);
  Serial.print(',');
  Serial.print("z= ");
  Serial.println(((z*5/1024.0-Z)/gz),2);
  delay(100);
}
