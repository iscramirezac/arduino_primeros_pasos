void setup(){
byte x=44;

Serial.begin(9600);
  switch (x) {
    case 20:
      Serial.println("Vale 20 exactamente");
    break;

    case 50:
      Serial.println("Vale 50 exactamente");
    break;

    default:
    Serial.println("No vale ninguna de los valores anteriores");
  }
}

void loop(){
    //Aquí no pasa nada...
  }
