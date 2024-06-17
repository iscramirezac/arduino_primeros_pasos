float resultado;
int numerador=100;
int denominador=5;

void setup() {
  Serial.begin(9600);
  resultado=numerador/denominador;
  Serial.println(resultado);
}

void loop() {
  //Aquí no pasa nada...  
}
