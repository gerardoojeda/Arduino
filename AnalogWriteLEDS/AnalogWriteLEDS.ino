//variables globales
int redLEDPin=10;
int AnalogPin=A0;
int readValue;
float voltage;
int rWaitTimeOn=250;
int rWaitTimeOff=250;
int yellowLEDPin=11;
int yWaitTimeOn=250;
int yWaitTimeOff=250;
int repsr=0;//solo las declaramos para usarlas abajo.
int repsye=0;//solo las declaramos para usarlas abajo.

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
  pinMode(redLEDPin,OUTPUT);
  pinMode(AnalogPin,INPUT);
  
  
}

// comentario
// pene
void loop() {
  // put your main code here, to run repeatedly:
  readValue=analogRead(AnalogPin);
  Serial.print("dato analogico: ");
  Serial.println(readValue);
  voltage=(255./1023.)*readValue;//255 son los valores que tiene maximo en alalog el write y el read 1023
  analogWrite(redLEDPin,voltage);
  Serial.print("dato digital a voltaje: ");
  Serial.println(voltage);
  delay(250);
  
  
  

 
  




}
