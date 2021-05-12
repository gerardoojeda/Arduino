int whitePin=10;
int yellowPin=9;
int bluePin=11;
int brightness=255;
String  Col;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(whitePin,OUTPUT);
   pinMode(yellowPin,OUTPUT);
    pinMode(bluePin,OUTPUT);
}
void serialFlush(){//Esta funcion limpia el buffer del serial
  while(Serial.available() > 0) {
    char t = Serial.read();
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(" el color que desea: ");
  serialFlush();
  while(Serial.available()==0){
  }
Col=Serial.readString();
 
if (Col=="blanco"){
    analogWrite(whitePin,brightness);
    analogWrite(yellowPin,0);
    analogWrite(bluePin,0);
    }
 if (Col=="amarillo"){
    analogWrite(whitePin,0);
    analogWrite(yellowPin,brightness);
    analogWrite(bluePin,0);
    }

 if (Col=="azul"){
    analogWrite(whitePin,0);
    analogWrite(yellowPin,0);
    analogWrite(bluePin,brightness);
  }
 if (Col != "azul" && Col != "amarillo" &&  Col != "blanco"){
    Serial.println(" Ingrese un color valido( azul amarillo o blanco  ");
    Serial.println(" ");
  }
    
}
