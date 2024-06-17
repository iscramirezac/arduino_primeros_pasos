int cad1="hola";
String cad2="hola";

void setup(){
  Serial.begin(9600);
}

void loop(){
if (cad1 == cad2){
    Serial.println("La cadena es igual");
  } 
  else {
    Serial.println("La cadena es diferente");
  }
}
