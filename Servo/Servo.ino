#inclcude<Servo.h>//se incluye la libreria de servos
int posicionservo=0;
int ServoPin=9;//decirle arduino que esta conetcatdo
int servoDelay=25;

Servo myPointer;//cree el objecto servo

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  myPointer.attach(ServoPin);
pinMode(ServoPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
for(posicionservo=15;posicionservo<=170,posicionservo=posicionservo+1){
  mypointer.attach(posicionservo);
  delay(servoDelay);
}
for(posicionservo=170;posicionservo>=25,posicionservo=posicionservo-1){
  mypointer.attach(posicionservo);
  delay(servoDelay);
}
}
