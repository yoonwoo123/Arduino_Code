#include <Servo.h>

Servo myservoH;  // create servo object to control a servo
Servo myservoV;
int posH = 90;
int posV = 90;

void setup() {
  // put your setup code here, to run once:
  myservoH.attach(8);  // 서보모터를 쉴드의 8번에 연결한다.
  myservoV.attach(10);  // 서보모터를 쉴드의 7번에 연결한다.
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0) {
    long value = Serial.parseInt();
    int backUpH = posH;
    int backUpV = posV;
    switch (value) {
      case 1:
        //posH = posH - 5; 같은 표현이다 posH -= 5;
        posH -= 20;
        break;
      case 2:
        posH += 20;
        break;
      case 3:
        posV -= 90;
        break;
      case 4:
        posV += 90;
        break;
    }
    if (posH<0 || posH>180) {
      posH=backUpH;
    }
    if (posV<0 || posV>180) {
      posV=backUpV;
    }
    myservoH.write(posH);
    myservoV.write(posV);
  }
}
