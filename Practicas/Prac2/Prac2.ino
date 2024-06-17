float variablefloat=5.889971;
byte variablebyte=500;

void setup() {
  Serial.begin(9600);
  Serial.println(byte(variablefloat));
  Serial.println(int(variablefloat));
  Serial.println(word(variablefloat));
  Serial.println(float(variablefloat));
  Serial.println(double(variablefloat));
  Serial.println(long(variablefloat));
  Serial.println(char(variablebyte));
  Serial.println(float(variablebyte));
}

void loop() {
  //Aquí no pasa nada....
}
