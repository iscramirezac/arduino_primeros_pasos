int mivariable=100;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(mivariable);
  mivariable=mivariable+1;
}
