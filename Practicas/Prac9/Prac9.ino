int pinRojo = 10;
int pinAmarillo = 9;
int pinVerde = 8;

void setup() {

pinMode(pinRojo, OUTPUT);
pinMode(pinAmarillo, OUTPUT);
pinMode(pinVerde, OUTPUT);

}

void loop() {

// Enciende el pin Rojo
digitalWrite(pinRojo, HIGH);
// Espera 5 segundos
delay(5000);
// Enciende el pin Amarillo
digitalWrite(pinAmarillo, HIGH);
// Espera 2 segundos
delay(2000);
// Enciende el pin Verde
digitalWrite(pinVerde, HIGH);
// Apaga el pin Rojo
digitalWrite(pinRojo, LOW);
// Apaga el pin Amarillo
digitalWrite(pinAmarillo, LOW);
// Espera 10 segundos
delay(100000);
// Enciende el pin Amaillo
digitalWrite(pinAmarillo, HIGH); 
// Apaga el pin Verde
digitalWrite(pinVerde, LOW);
// Espera 2 segundos 
delay(2000); 
// Apaga el pin Amarillo
digitalWrite(pinAmarillo, LOW);
// Se repite el proceso
}
