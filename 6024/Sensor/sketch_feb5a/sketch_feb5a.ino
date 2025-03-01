const int Led = 6;
const int Sensor = 7;

void setup() {
  Serial.begin(9600);
  pinMode(Sensor, INPUT);
  pinMode(Led, OUTPUT);
  digitalWrite(Led, LOW);
}

void loop() {
  Serial.println(digitalRead(sensor));
  digitalWrite(Led,digitalRead(sensor));
  delay(100);

}
