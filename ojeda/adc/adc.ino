//variables globales
int PotPin=A0;
int yellowLEDPin=11;
int rWaitTimeOn=250;
int rWaitTimeOff=250;
int yWaitTimeOn=250;
int yWaitTimeOff=250;
int repsr=0;//solo las declaramos para usarlas abajo.
int readvalue;


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
  pinMode(PotPin,INPUT);
  pinMode(yellowLEDPin,OUTPUT);
  
//  Serial.println("Hola Bienvenido"); 

  //Serial.println("Elige el blinkeo led rojo "); 
  //while(Serial.available()==0){ }
  //repsr=Serial.parseInt();


 // Serial.println("Elige el blinkeo led amarillo"); 
  //delay(3000);
  //while(Serial.available()==0){ }
 //// repsye=Serial.parseInt();

// delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:


readvalue=analogRead(PotPin);
Serial.println(readvalue);
delay(10);

digitalWrite(yellowLEDPin,HIGH);
delay(readvalue);
digitalWrite(yellowLEDPin,LOW);
delay(100);



}
