void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  Serial.println("Включенно!");
  digitalWrite(13, HIGH);
  delay(1000);
  Serial.println("Выключенно!");
  digitalWrite(13, LOW);
}
