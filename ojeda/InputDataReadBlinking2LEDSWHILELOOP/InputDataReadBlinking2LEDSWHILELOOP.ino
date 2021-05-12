//variables globales
int redLEDPin=12;
int rWaitTimeOn=250;
int rWaitTimeOff=250;
int yellowLEDPin=11;
int yWaitTimeOn=250;
int yWaitTimeOff=250;
int repsr;//solo las declaramos para usarlas abajo.
int repsye;//solo las declaramos para usarlas abajo.

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
  pinMode(redLEDPin,OUTPUT);
  pinMode(yellowLEDPin,OUTPUT);
  
  Serial.println("Hola Bienvenido"); 
  delay(2000);
  
  Serial.println("Elige el blinkeo led yellow "); 
  while(Serial.available()==0){  }
  repsye=Serial.parseInt();

  Serial.println("El valor amarillo es: "); 
  Serial.println(repsye); 
  
  Serial.println("Elige el blinkeo led red"); 
  while(Serial.available()==0){  }
  repsr=Serial.parseInt();
  Serial.println("El valor rojo es: "); 
  Serial.println(repsr); 

}

void loop() {
  // put your main code here, to run repeatedly:



Serial.println("Empieza Blink Rojo");
int j=1;
while (j<=repsr){
  Serial.print(" Blinkeo Numero:  ");
  Serial.println(j);
  digitalWrite(redLEDPin,HIGH);
  delay(rWaitTimeOn);
  digitalWrite(redLEDPin,LOW);
  delay(rWaitTimeOff);
  j=j+1;
  }
  
Serial.println("  ");

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



}
