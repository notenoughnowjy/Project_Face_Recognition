const int light_A = 2, light_B = 3, light_C = 4, Elec_A = 5, Elec_B = 6, Elec_C = 7, warning_bz = 8;
const int Elec_A_SW = 9, Elec_B_SW = 10, Elec_C_SW = 11;

char input;
int i;

void setup() {

  for(i=2; i<=8; i++) pinMode(i, OUTPUT);
  for(i=9; i<=11; i++) pinMode(i, INPUT);

  Serial.begin(9600);
}

void loop() {

  if(digitalRead(Elec_A_SW)==1) {
    if(digitalRead(Elec_A)==1) digitalWrite(Elec_A, LOW);
    else digitalWrite(Elec_A, HIGH);
    delay(500);
  }
  if(digitalRead(Elec_B_SW)==1) {
    if(digitalRead(Elec_B)==1) digitalWrite(Elec_B, LOW);
    else digitalWrite(Elec_B, HIGH);
    delay(500);
  }
  if(digitalRead(Elec_C_SW)==1) {
    if(digitalRead(Elec_C)==1) digitalWrite(Elec_C, LOW);
    else digitalWrite(Elec_C, HIGH);
    delay(500);
  }

  if(Serial.available()) {
    input = Serial.read();
    Serial.println(input);

    switch(input) {
      case '1' : // A 퇴장시 실행할 코드
      digitalWrite(light_A, LOW);
      digitalWrite(Elec_A, LOW);
      break;

      case '2' : 
      digitalWrite(light_B, LOW);
      digitalWrite(Elec_B, LOW);
      break;

      case '3' : 
      digitalWrite(light_C, LOW);
      digitalWrite(Elec_C, LOW);
      break;

      default : //Unknown 퇴장
      break;
    }
  }

}