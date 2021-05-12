//variables globales
int edad;
String nombre;
int altura;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
  
  Serial.println("Hola Bievnedio"); 
  
 

}
void serialFlush(){//Esta funcion limpia el buffer del serial
  while(Serial.available() > 0) {
    char t = Serial.read();
  }
}
void loop() {
   Serial.println("su nombre porfavor "); 
   delay(3000);
  while (Serial.available()==0){  }
  nombre=Serial.readString();
  serialFlush();

   Serial.println("su edad "); 
  while (Serial.available()==0){ }
  edad=Serial.parseInt();
  serialFlush();

  Serial.println("su altura "); 
  while (Serial.available()==0){  }
  altura=Serial.parseInt();
  serialFlush();
 
  
  Serial.print("Hola "); 
  Serial.println(nombre); 
  Serial.print("Tu edad es de "); 
  Serial.print(edad);
  Serial.print("  y  Su altura es de "); 
  Serial.print(altura);
  Serial.println("  y hemos guardado sus datos ");
}
