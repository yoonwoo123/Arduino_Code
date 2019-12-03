#define LED 3
int trigPin = 8;
int echoPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (wavesensor() == 1) {
    Serial.println("1 is full.");
    digitalWrite(3, HIGH);
  }
  else {
    digitalWrite(3, LOW);
  }
}
// 초음파센서로 거리값을 측정해주고 특정 값 반환
int wavesensor(){
  long duration, distance;                   // 각 변수를 선언합니다.
  digitalWrite(trigPin, LOW);                 // trigPin에 LOW를 출력하고
  delayMicroseconds(2);                    // 2 마이크로초가 지나면
  digitalWrite(trigPin, HIGH);                // trigPin에 HIGH를 출력합니다.
  delayMicroseconds(100);                  // trigPin을 10마이크로초 동안 기다렸다가
  digitalWrite(trigPin, LOW);                // trigPin에 LOW를 출력합니다.
  duration = pulseIn(echoPin, HIGH);   // echoPin핀에서 펄스값을 받아옵니다.
/*
        trigPin핀에서 초음파를 발사하였고 그 초음파가 다시 돌아 올 때까지 기다립니다. 
        만약 벽이나 장애물에 닿아서 다시 echoPin으로 돌아왔다면 그동안의 시간을 duration에 저장합니다.
    */ 
  distance = (duration * 17) / 1000;          //  duration을 연산하여 센싱한 거리값을 distance에 저장합니다.
  delay(1000);
  if (distance >= 5)       // 거리가 5cm가 넘으면
    {
      Serial.println("great");   // 쓰레기통 여유 있음
    }
    else                                                    // 거리가 5보다 작으면
    {
      Serial.print(distance);                         // distance를 시리얼 모니터에 출력합니다.
      Serial.println(" cm");                           // cm를 출력하고 줄을 넘깁니다.
      return 1;
      // distance가 10이면 10 cm로 출력됩니다.
    }
    Serial.println("false");
    return 0;
}
