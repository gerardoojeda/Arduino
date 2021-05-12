//variables globales
int redLEDPin=11;
int rWaitTimeOn=250;
int rWaitTimeOff=250;
int yellowLEDPin=10;
int yWaitTimeOn=250;
int yWaitTimeOff=250;
int repsr;//solo las declaramos para usarlas abajo.
int repsye;//solo las declaramos para usarlas abajo.
String Name;
int age;
float alt;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);

  
  
  

}

void loop() {
  // put your main code here, to run repeatedly:


  Serial.println("Estiba su nombre"); 
  while (Serial.available()==0){
    }
  Name=Serial.readString();

  Serial.println("Su edad"); 
  while (Serial.available()==0){
    }
  age=Serial.parseInt();
  delay(3000);

    Serial.println("Su altura"); 
  while (Serial.available()==0){
    }
  alt=Serial.parseFloat();
  delay(3000);


  Serial.print("Hola Bievnedio "); 
  Serial.println(Name);
  Serial.print("Edad: "); 
  Serial.println(age);
  Serial.print("Altura"); 
  Serial.println(alt);
  Serial.println("  ");
}


// comentario
