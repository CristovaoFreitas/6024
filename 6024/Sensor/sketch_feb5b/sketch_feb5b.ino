#define pinSensorl 7

void setup() {
  pinMode(pinSensorl, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool estadoSensorl = digitalRead(pinSensorl);

  if (estadoSensorl) {
    Serial.println("PRETO");
  } else {
    Serial.println("BRANCO (diferente de preto)");
  }
}
