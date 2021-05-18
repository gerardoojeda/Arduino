 //variables globales
  int redPin=11;
  int bluePin=10;
  int greenPin=9;

  //sensor de captura de RGB
  int S2=7;//Declaramos el pin para la activacion de comando 1 sensor
  int S3=8;//Declaramos el pin para la activacion de comando 2 sensor
  int dataPin=4;//Declaramos el pin para la activacion de lectura del sensor al microcontrolador
  unsigned int pulseWidth;//Este va a ser la variable donde se almacenara lo leido del tamaño de puslo del sensor
//usigned es para aumentar el tamaño del int es de 32,767  y ahora con el unsigned
   int rColorStrength;
   int gColorStrength;
    int bColorStrength;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
//LEDSRGB
pinMode(redPin,OUTPUT);
pinMode(bluePin,OUTPUT);
pinMode(greenPin,OUTPUT);
//SENSOR RGB
pinMode(S2,OUTPUT);//Declaramos como salida estos puertos ya que el micro le dara ordenes al sensor para que lea
pinMode(S3,OUTPUT);//Declaramos como salida estos puertos ya que el micro le dara ordenes al sensor para que lea
pinMode(dataPin,INPUT);//Declaramos como entrada este puerto ya que el sensor le dara al micro
}
void loop() {
  // Para leer el rojo son dos LOW EN S2 Y S3
  digitalWrite(S2,LOW);//Mandamos el primer comando
  digitalWrite(S3,LOW);//Mandamos el siguiente comando al sensor

  pulseWidth=pulseIn(dataPin,LOW);//lee del pin de data y lo guarda en pulseWidth y como es unsigned int el numero es grande
//el sensor su numero maximo que saca es 102,400 asi que si lo dividimos en 400 y restamos uno adatamos a 255 para nuestros leds
  rColorStrength=(pulseWidth/400.)-1;
  //por ultimo la logica esta inversa 0 es muy alto el color y 102400 es muy bajo asi que transformamos a la inversa
  rColorStrength=(255-rColorStrength);

  // Para leer el verde son dos HIGH EN S2 Y S3
  digitalWrite(S2,HIGH);//Mandamos el primer comando
  digitalWrite(S3,HIGH);//Mandamos el siguiente comando al sensor

  pulseWidth=pulseIn(dataPin,LOW);//lee del pin de data y lo guarda en pulseWidth y como es unsigned int el numero es grande
//el sensor su numero maximo que saca es 102,400 asi que si lo dividimos en 400 y restamos uno adatamos a 255 para nuestros leds
  gColorStrength=(pulseWidth/400.)-1;
  //por ultimo la logica esta inversa 0 es muy alto el color y 102400 es muy bajo asi que transformamos a la inversa
  gColorStrength=(255-gColorStrength);
  
  //Azul
digitalWrite(S2,LOW);//Mandamos el primer comando
  digitalWrite(S3,HIGH);//Mandamos el siguiente comando al sensor

  pulseWidth=pulseIn(dataPin,LOW);//lee del pin de data y lo guarda en pulseWidth y como es unsigned int el numero es grande
//el sensor su numero maximo que saca es 102,400 asi que si lo dividimos en 400 y restamos uno adatamos a 255 para nuestros leds
  bColorStrength=(pulseWidth/400.)-1;
  //por ultimo la logica esta inversa 0 es muy alto el color y 102400 es muy bajo asi que transformamos a la inversa
  bColorStrength=(255-bColorStrength);

 
}
