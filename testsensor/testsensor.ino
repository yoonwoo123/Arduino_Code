int trigPin = 8;
int echoPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // trig를 출력모드로 설정, echo를 입력모드로 설정
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration, distance;                   // 각 변수를 선언합니다.
  digitalWrite(trigPin, LOW);                 // trigPin에 LOW를 출력하고
  delayMicroseconds(2);                    // 2 마이크로초가 지나면
  digitalWrite(trigPin, HIGH);                // trigPin에 HIGH를 출력합니다.
  delayMicroseconds(10);                  // trigPin을 10마이크로초 동안 기다렸다가
  digitalWrite(trigPin, LOW);                // trigPin에 LOW를 출력합니다.
  duration = pulseIn(echoPin, HIGH);   // echoPin핀에서 펄스값을 받아옵니다.
/*
        trigPin핀에서 초음파를 발사하였고 그 초음파가 다시 돌아 올 때까지 기다립니다. 
        만약 벽이나 장애물에 닿아서 다시 echoPin으로 돌아왔다면 그동안의 시간을 duration에 저장합니다.
    */ 
  distance = duration * 17 / 1000;          //  duration을 연산하여 센싱한 거리값을 distance에 저장합니다.
    /*
       거리는 시간 * 속도입니다.  
       속도는 음속으로 초당 340mm이므로 시간 * 340m이고 cm단위로 바꾸기 위해 34000cm로 변환합니다.
       시간 값이 저장된 duration은 마이크로초 단위로 저장되어 있어, 변환하기 위해 1000000을 나눠줍니다.
       그럼 시간 * 34000 / 1000000이라는 값이 나오고, 정리하여 거리 * 34 / 1000이 됩니다.
       하지만 시간은 장애물에 닿기까지와 돌아오기까지 총 두 번의 시간이 걸렸으므로 2를 나누어줍니다.
       그럼 시간 * 17 / 1000이라는 공식이 나옵니다.
    */
    if (distance >= 30 || distance <= 0)       // 거리가 200cm가 넘거나 0보다 작으면
    {
      Serial.println("거리를 측정할 수 없음");   // 에러를 출력합니다.
    }
    else                                                    // 거리가 200cm가 넘지 않거나 0보다 작지 않으면
    {
      Serial.print(distance);                         // distance를 시리얼 모니터에 출력합니다.
      Serial.println(" cm");                           // cm를 출력하고 줄을 넘깁니다.
      // distance가 10이면 10 cm로 출력됩니다.
    }
    delay(1000);                                         // 1초동안 기다립니다.
}
