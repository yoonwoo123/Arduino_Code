void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 0~ 255 까지 밝기 조절
  analogWrite(6, 200);
//  delay(1000);
  analogWrite(6, 255);
  delay(1000);
  digitalWrite(6, HIGH);
//  analogWrite(6, LOW);
//  delay(1000);
}
