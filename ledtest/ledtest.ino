void setup() {
  // put your setup code here, to run once:
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(255, 0, 0); // red
  delay(300);
  setColor(0, 0, 0); // off
  delay(300);
  setColor(0, 255, 0); // green
  delay(300);
  setColor(0, 0, 0); // off
  delay(300);
  setColor(0, 0, 255); // blue
  delay(300);
  setColor(0, 0, 0); // off
}

void setColor(int red, int green, int blue)
{
    digitalWrite(A0, red);
    digitalWrite(A1, green);
    digitalWrite(A2, blue);
}
