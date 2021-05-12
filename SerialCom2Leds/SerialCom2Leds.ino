//variables globales
int redLEDPin=12;
int rWaitTimeOn=250;
int rWaitTimeOff=250;
int yellowLEDPin=11;
int yWaitTimeOn=250;
int yWaitTimeOff=250;
int repsr=8;
int repsy=5;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redLEDPin,OUTPUT);
pinMode(yellowLEDPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Empieza Blink Rojo");
 for(int j=1;j<=repsr;j=j+1){
Serial.print(" Blinkeo Numero:  ");
Serial.println(j);
digitalWrite(redLEDPin,HIGH);
delay(rWaitTimeOn);
digitalWrite(redLEDPin,LOW);
delay(rWaitTimeOff);
  }
  
Serial.println("  ");

Serial.println("Empieza Blink Amarillo");
for(int j=1;j<=repsy;j=j+1){
  Serial.print(" Blinkeo Numero:  ");
Serial.println(j);
digitalWrite(yellowLEDPin,HIGH);
delay(yWaitTimeOn);
digitalWrite(yellowLEDPin,LOW);
delay(yWaitTimeOff);
}

Serial.println("  ");
}
