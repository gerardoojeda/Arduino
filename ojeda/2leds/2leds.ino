//variables globales
int redLEDPin=12;
int rWaitTimeOn=250;
int rWaitTimeOff=250;
int yellowLEDPin=11;
int yWaitTimeOn=250;
int yWaitTimeOff=250;


void setup() {
  // put your setup code here, to run once:
pinMode(redLEDPin,OUTPUT);
pinMode(yellowLEDPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLEDPin,HIGH);
delay(rWaitTimeOn);
digitalWrite(redLEDPin,LOW);
delay(rWaitTimeOff);

digitalWrite(redLEDPin,HIGH);
delay(rWaitTimeOn);
digitalWrite(redLEDPin,LOW);
delay(rWaitTimeOff);

digitalWrite(redLEDPin,HIGH);
delay(rWaitTimeOn);
digitalWrite(redLEDPin,LOW);
delay(rWaitTimeOff);

digitalWrite(yellowLEDPin,HIGH);
delay(yWaitTimeOn);
digitalWrite(yellowLEDPin,LOW);
delay(yWaitTimeOff);


}
