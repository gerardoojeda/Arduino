//variables globales
int LEDPin=12;
int WaitTimeOn=900;
int WaitTimeOff=100;


void setup() {
  // put your setup code here, to run once:
pinMode(LEDPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LEDPin,HIGH);
delay(WaitTimeOn);
digitalWrite(LEDPin,LOW);
delay(WaitTimeOff);
}
