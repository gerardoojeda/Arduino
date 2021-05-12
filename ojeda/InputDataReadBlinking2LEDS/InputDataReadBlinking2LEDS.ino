//variables globales
int redLEDPin=11;
int rWaitTimeOn=250;
int rWaitTimeOff=250;
int yellowLEDPin=10;
int yWaitTimeOn=250;
int yWaitTimeOff=250;
int repsr;//solo las declaramos para usarlas abajo.
int repsye;//solo las declaramos para usarlas abajo.

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
  pinMode(redLEDPin,OUTPUT);
  pinMode(yellowLEDPin,OUTPUT);
  Serial.println("Hola Bievnedio"); 
  
  Serial.println("Elige el blinkeo led yellow"); 
  while (Serial.available()==0){}
  repsye=Serial.parseInt();
  delay(2000);
  Serial.println("Elige el blinkeo led red"); 
  while (Serial.available()==0){}
  repsr=Serial.parseInt();
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:



Serial.println("Empieza Blink Rojo");
for (int j=1;j<=repsr;j=j+1){
  Serial.print(" Blinkeo Numero:  ");
  Serial.println(j);
  digitalWrite(redLEDPin,HIGH);
  delay(rWaitTimeOn);
  digitalWrite(redLEDPin,LOW);
  delay(rWaitTimeOff);
  }
  
Serial.println("  ");
c
Serial.println("Empieza Blink Amarillo");
for (int k=1;k<=repsye;k=k+1){
  Serial.print(" Blinkeo Numero:  ");
  Serial.println(k);
  digitalWrite(yellowLEDPin,HIGH);
  delay(yWaitTimeOn);
  digitalWrite(yellowLEDPin,LOW);
  delay(yWaitTimeOff);
}
Serial.println("  ");

// comentario



}
