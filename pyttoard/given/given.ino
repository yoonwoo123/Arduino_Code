
void setup()
{
  Serial.begin(9600);
    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
//   pinMode(4,OUTPUT); // LED 연결
}

void loop()
{ 
  /* 문자열로 저장*/
  while (Serial.available()) {
    long value = Serial.parseInt();
    Serial.println('value')
//    {
//     char wait = Serial.read();
//      sig.concat(wait);
//    } 
  
//     /* 입력 문자열 슬라이싱 */
//     // sig.substring(0,1).toCharArray(check,2);

//     if(sig[1] == 'Q')
//         {
    digitalWrite(A0, 255);
    digitalWrite(A1, 0);
    digitalWrite(A2, 0);
        // }

    // if (value_1 == 1234) {
        
    // }
    //  int wait = Serial.read();
    //  sig.concat(wait);
}
    // else { 
        // digitalWrite(A0, 0);
        // digitalWrite(A1, 0);
        // digitalWrite(A2, 0);
        // }


    // if(check[0] == 'Q')
    //   {
    //   if (sig.length()==9)
    //     {
    //       sig.substring(1,5).toCharArray(Ard1,5);
    //       sig.substring(5,9).toCharArray(Ard2,5);
    //       value_1 = atoi(Ard1);
    //       value_2 = atoi(Ard2);
    //       sig = "";
    //     }
    //    else if (sig.length()>9)
    //     {sig = "";}
    //    }
    //  else if (check[0] != 'Q')
    //   {sig = "";}

    //  /* 수신 확인*/
    // if(value_1 == 1234 && value_2 == 5678)
    //   {
    //     digitalWrite(7,HIGH);
    //   }