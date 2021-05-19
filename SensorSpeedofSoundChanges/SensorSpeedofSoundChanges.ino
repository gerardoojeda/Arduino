int trigPin=13;
int ecoPin=11;//sensor ecopin is conected to arduino 11
float pingTime;//time for ping to get send and return
float speedofsound;//we will calculate the speed of sounds
float targetDistance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(trigPin,OUTPUT);//mandas señal de activacion
  pinMode(ecoPin,INPUT);//escuchas tiempos de respueta
}

void loop() {
 
//secuencia de activacion: 1.- Bajo delay pequeño 2.-alto delay pequeño y 3.-bajo
digitalWrite(trigPin,LOW);
delayMicroseconds(2000);
digitalWrite(trigPin,HIGH);
delayMicroseconds(20);
digitalWrite(trigPin,LOW);
///luego escuchamos el tiempo de respuesta en microsecgundos
pingTime=pulseIn(ecoPin,HIGH);//MEASURES PIN INPUT
speedofsound=2*targetDistance/pingTime;//es el doble porque es ida y vuelta: y esta en inche/microsegundos
speedofsound=speedofsound/63360*1000000*3600;//esto solo es la conversion  a miles/hr

Serial.print("la velocidad del sonido para decter cambos de presion en el ambiente es de:");
Serial.println(speedofsound);
Serial.println("miles_x_hr");
delay(2000);

}
