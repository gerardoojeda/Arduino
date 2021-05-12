//variables globales
int redLEDPin=12;
int rWaitTimeOn=250;
int rWaitTimeOff=250;
int yellowLEDPin=11;
int yWaitTimeOn=250;
int yWaitTimeOff=250;
int repsr=8;
int repsy=5;
String redmssg ="Empieza Blink Rojo";//declaracion variable global string
String yellowmssg ="Empieza Blink Amarillo";//declaracion variable global string

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
String wm1="Bienvenido a ";//declaracion variable local string solo 1 vez por estar en setup
String wm2= " mi codigo de leds";//declaracion variable local string solo 1 vez por estar en setup
String wm3;//declaracion variable 
wm3=wm1+wm2; //concatenacion de wm1 y wm2 variable 
Serial.println(wm3);
pinMode(redLEDPin,OUTPUT);
pinMode(yellowLEDPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(redmssg);
 for(int j=1;j<=repsr;j=j+1){
Serial.print(" Blinkeo Numero:  ");
Serial.println(j);
digitalWrite(redLEDPin,HIGH);
delay(rWaitTimeOn);
digitalWrite(redLEDPin,LOW);
delay(rWaitTimeOff);
  }
  
Serial.println("  ");

Serial.println(yellowmssg);
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
