volatile int  contador=0;
int           golpe=0;
const int     ledcal=13;
int           senaalto=1023;
int           senbajo=0;




void setup() {                                                // put your setup code here, to run once:
 Serial.begin (57600);
 

}

void loop() {                                                 // put your main code here, to run repeatedly:
  golpe=analogRead(A0);                                       //Leo analogo
  Serial.println(golpe);                                      //imprimo analogo
  
  
  
  
  
  
  
  
  delay(500);

}
