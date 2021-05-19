#inclcude<Servo.h>//se incluye la libreria de servos
int PotPin=A0;
int posicionservo=0;
int ServoPin=9;//decirle arduino que esta conetcatdo
int potSelect;


Servo myPointer;//cree el objecto servo

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  myPointer.attach(ServoPin);//codigo para decirle a servo que servopin sera el asignado
pinMode(ServoPin,OUTPUT);//va del arduino al servo
pinMode(PotPin,INPUT);//va lo ue lee del resistor


}

void loop() {
  // put your main code here, to run repeatedly:
  potSelect=analogRead(PotPin);
posicionservo=(155./1023.)*potSelect+15;
  mypointer.attach(posicionservo);

}
