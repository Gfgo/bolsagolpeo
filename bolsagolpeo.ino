/*#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN       13
#define PIN2      12
#define NUMPIXELS 8

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 500

byte rojo=0;
byte verde=0;
byte azul=0;
const byte PAUSA=1;

byte nump=0;
byte nump2=0;

int golpe=0;                                              //Lectura de golpe
int golpe2=0;
float furk=0;                                             //Fuerza en Kilogramos byte porque es menor a 255
float furk2=0;

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  Serial.begin (115200);
  pixels.begin();
  pixels.show();
  pixels2.begin();
  pixels2.show();
}

void loop() {
   pixels.setBrightness(10);
   pixels2.setBrightness(10);
//-------------------------------------------------------------lectura de golpe 
  golpe=analogRead(A0);                                    //Leo analogo 0
  golpe2=analogRead(A1);                                   //Leo analogo 1
  
  nump=map(golpe, 0, 1023, 0, 8);                  //nump es para el nivel fuerza visualizado en barra 61FCRcirc 1023FCRcuadra
  furk=map(golpe, 0, 61, 0, 9.98);
  nump2=map(golpe2, 0, 1023, 0, 8);
  furk2=map(golpe2, 0, 61, 0, 9.98);

  char fuerza[3];
  sprintf(fuerza, "%d %d", golpe, golpe2);
  Serial.println(fuerza);
  //Serial.print('\t');
  Serial.print(furk); Serial.print('\t'); Serial.print(furk2);
  Serial.println("Kg");
//-------------------------------------------------------------luces  
  pixels.clear();
  pixels2.clear();
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

for(int i2=0; i2<nump2; i2++) {
    if (i2<=1) rojo=0;
    if ((i2>=2)&&(i2<=4)) rojo=128;
    if (i2>=4) rojo=255;
    if (i2<=4) verde=255;
    if (i2==5) verde=128;
    if (i2>=6) verde=0;
    if (i2<=7) azul=0;
    pixels2.setPixelColor(i2, rojo, verde,  azul);//rojo,verde,azul 0-255
    pixels2.show();
    delay(PAUSA);
  }
}*/
//---------------------

//**********ACELERACION
//------------------------------------------------------
//#include <Wire.h>
//#include <Adafruit_Sensor.h>
//#include <Adafruit_ADXL345_U.h>
//
//Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345); //ID del sensor
//float xac=0,yac=0,zac=0,x=0,y=0,z=0;
//
//void setup() 
//{
//  Serial.begin(9600);
//  if(!accel.begin())
//  {
//    Serial.println("No se detecta sensor, verificar circuito");
//    while(1);
//  }
//  accel.setRange(ADXL345_RANGE_16_G); //seleccion de rengo (8_G 4_G 2_G)
//
//  /* Eventos del sensor */ 
//  sensors_event_t event; 
//  accel.getEvent(&event);
// 
//  for(int i=0; i<10; ++i) {
//    xac+=(event.acceleration.x); //el offset
//    yac+=(event.acceleration.y);
//    zac+=(event.acceleration.z);
//    }
//    xac/=10;Serial.print("xac ");Serial.print(xac);
//    yac/=10;Serial.print("yac ");Serial.print(yac);
//    zac/=10;Serial.print("zac ");Serial.println(zac);
//  }
//void loop() 
//{
//  /* Eventos del sensor */ 
//  sensors_event_t event; 
//  accel.getEvent(&event);    
//  /* Aceleración en m/s^2) */
//  x=abs((event.acceleration.x)-xac);
//  y=abs((event.acceleration.y)-yac);
//  z=abs((event.acceleration.z)-zac);
//  Serial.print("X: "); Serial.print(x); Serial.print("  ");
//  Serial.print("Y: "); Serial.print(y); Serial.print("  ");
//  Serial.print("Z: "); Serial.print(z); Serial.print("  ");Serial.println("m/s^2 ");
//  delay(10);
//}
//
////mientras que el sensor sea diferente de cero hacer
////
////vx += ax * dt;
////vy += ay * dt;
////vz += az * dt;
////v =raiz de vx2+vy2+vz2

//------------------------------------------ACELERACION


//#include <Wire.h>
//// Registers for ADXL345
//#define ADXL345_ADDRESS (0xA6 >> 1)  // address for device is 8 bit but shift to the
//                                     // right by 1 bit to make it 7 bit because the
//                                     // wire library only takes in 7 bit addresses
//#define ADXL345_REGISTER_XLSB (0x32)
//
//int accelerometer_data[3];
//// void because this only tells the cip to send data to its output register
//// writes data to the slave's buffer
//void i2c_write(int address, byte reg, byte data) {
//  // Send output register address
//  Wire.beginTransmission(address);
//  // Connect to device
//  Wire.write(reg);
//  // Send data
//  Wire.write(data); //low byte
//  Wire.endTransmission();
//}
//
//// void because using pointers
//// microcontroller reads data from the sensor's input register
//void i2c_read(int address, byte reg, int count, byte* data) {
//  // Used to read the number of data received
//  int i = 0;
//  // Send input register address
//  Wire.beginTransmission(address);
//  // Connect to device
//  Wire.write(reg);
//  Wire.endTransmission();
//
//  // Connect to device
//  Wire.beginTransmission(address);
//  // Request data from slave
//  // Count stands for number of bytes to request
//  Wire.requestFrom(address, count);
//  while(Wire.available()) // slave may send less than requested
//  {
//    char c = Wire.read(); // receive a byte as character
//    data[i] = c;
//    i++;
//  }
//  Wire.endTransmission();
//}
//
//void init_adxl345() {
//  byte data = 0;
//
//  i2c_write(ADXL345_ADDRESS, 0x31, 0x0B);   // 13-bit mode  +_ 16g
//  i2c_write(ADXL345_ADDRESS, 0x2D, 0x08);   // Power register
//
//
//  i2c_write(ADXL345_ADDRESS, 0x1E, 0x00);   // x
//  i2c_write(ADXL345_ADDRESS, 0x1F, 0x00);   // Y
//  i2c_write(ADXL345_ADDRESS, 0x20, 0x05);   // Z
// 
//  // Check to see if it worked!
//  i2c_read(ADXL345_ADDRESS, 0X00, 1, &data);
//  if(data==0xE5)
//    Serial.println("it work Success");
//  else
//    Serial.println("it work Fail");
//}
//
//void read_adxl345() {
//  byte bytes[6];
//  memset(bytes,0,6);
//
//  // Read 6 bytes from the ADXL345
//  i2c_read(ADXL345_ADDRESS, ADXL345_REGISTER_XLSB, 6, bytes);
//  // Unpack data
//  for (int i=0;i<3;++i) {
//    accelerometer_data[i] = (int)bytes[2*i] + (((int)bytes[2*i + 1]) << 8);
//  }
//}
//// initialise and start everything
//void setup() {
//  Wire.begin();
//  Serial.begin(9600);
//  for(int i=0; i<3; ++i) {
//    accelerometer_data[i]  = 0;
//  }
//  init_adxl345();
//}
//
//
//void loop() {
//  read_adxl345();
//  Serial.print("ACCEL: ");
//  Serial.print(float(accelerometer_data[0])*3.9/1000);//3.9mg/LSB scale factor in 13-bit mode
//  Serial.print("\t");
////  Serial.print(float(accelerometer_data[0]));
////  Serial.print("\t");
//  Serial.print(float(accelerometer_data[1])*3.9/1000);
//  Serial.print("\t");
//  Serial.print(float(accelerometer_data[2])*3.9/1000);
//  Serial.print("\n");
//  delay(200);
//}


#include <Adafruit_NeoPixel.h> //esp4095 19/05
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define NUMPIXELS   8
#define led0        25  //GPIO25
#define led1        26  //GPIO26
#define led2        27  //GPIO27
Adafruit_NeoPixel strip(NUMPIXELS, led0, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip1(NUMPIXELS, led1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2(NUMPIXELS, led2, NEO_GRB + NEO_KHZ800);
byte        rojo=0;
byte        verde=0;
byte        azul=0;
const byte  PAUSA=500;

const int pin = A0;
const int pin1 = 39;
const int pin2 = 34;
const int pin3 = A3;
const int pin4 = A4;

int golpe0 = 0;  
int golpe1 = 0;
int golpe2 = 0;

byte        nump0=0;
byte        nump1=0;
byte        nump2=0;

float       furk0=0;                                             //Fuerza en Kilogramos byte porque es menor a 255
float       furk1=0;
float       furk2=0;

void setup() {
  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif

  strip.begin(); strip1.begin(); strip2.begin();           
  strip.show();  strip1.show();  strip2.show(); 
  strip.setBrightness(10); strip1.setBrightness(10); strip2.setBrightness(10); 
  Serial.begin (115200);
}

void loop() {

//nump es para el nivel fuerza visualizado en barra 61FCRcirc 1023FCRcuadra
//nump numero de pixeles sensor de 0-(61 o 1023) y los pixeles van 0-8
//furk fuerza en kilogramos de 0-(61 o 1023) y de 0 al limite superior
//del sensor, para el cuadrado es 20N casi 2 Kg

  golpe0=  analogRead(pin);
  golpe1 = analogRead(pin1);
  golpe2 = analogRead(pin2);

  Serial.print(golpe0); Serial.print('\t'); Serial.print(golpe1); Serial.print('\t'); Serial.println(golpe2);
  delay(10);

  if(golpe0>=600){
    nump0=map(golpe0, 600, 4095, 0, 8);                
    furk0=map(golpe0, 600, 4095, 0, 20);               
    }                                                  

  if(golpe1>=600){
    nump1=map(golpe1, 600, 4095, 0, 8);                
    furk1=map(golpe1, 600, 4095, 0, 20);               
    }

    if(golpe2>=600){
    nump2=map(golpe2, 600, 4095, 0, 8);                
    furk2=map(golpe2, 600, 4095, 0, 20);               
    }
  
  strip.clear();
  for(int i=0; (i<=nump0); i++) {
    if (i<=1) rojo=0;
    if ((i>=2)&&(i<=4)) rojo=128;
    if (i>=4) rojo=255;
    if (i<=4) verde=255;
    if (i==5) verde=128;
    if (i>=6) verde=0;
    if (i<=8) azul=0;
    strip.setPixelColor(i, rojo, verde,  azul);//rojo,verde,azul 0-255
    strip.show();
    //delay(PAUSA);
  }
  strip1.clear();
  for(int j=0; (j<=nump1); j++) {
    if (j<=1) rojo=0;
    if ((j>=2)&&(j<=4)) rojo=128;
    if (j>=4) rojo=255;
    if (j<=4) verde=255;
    if (j==5) verde=128;
    if (j>=6) verde=0;
    if (j<=8) azul=0;
    strip1.setPixelColor(j, rojo, verde,  azul);//rojo,verde,azul 0-255
    strip1.show();
    //delay(PAUSA);
  }
  strip2.clear();
  for(int j=0; (j<=nump2); j++) {
    if (j<=1) rojo=0;
    if ((j>=2)&&(j<=4)) rojo=128;
    if (j>=4) rojo=255;
    if (j<=4) verde=255;
    if (j==5) verde=128;
    if (j>=6) verde=0;
    if (j<=8) azul=0;
    strip2.setPixelColor(j, rojo, verde,  azul);//rojo,verde,azul 0-255
    strip2.show();
    //delay(PAUSA);
  }
}
