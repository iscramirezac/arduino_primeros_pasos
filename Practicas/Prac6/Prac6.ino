void setup(){
byte x=50;

Serial.begin(9600);
  if (x >=10 && x <=20){
    Serial.println("Frase 1");
  }
  if (x >=10 || x <=20) {
    Serial.println("Frase 2");
  }
  if (x >=10 && !(x<=20)) {
    Serial.println("Frase 3");
  }
}

void loop(){
    //Aquí no pasa nada...
  }
