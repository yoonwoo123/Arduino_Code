void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11, 200);
  delay(1000);
  analogWrite(11, 0);
  delay(1000);
}
