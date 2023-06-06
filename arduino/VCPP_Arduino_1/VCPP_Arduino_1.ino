const int light_A = 2, light_B = 3, light_C = 4, Elec_A = 5, Elec_B = 6, Elec_C = 7, warning_bz = 8;
const int Elec_A_SW = 9, Elec_B_SW = 10, Elec_C_SW = 11;

const int m[]={262,294,330,0}; // 음 높이
const int d[]={50,50,50,50}; // 지속 시간

const int PW_set = 1234;

String Input;
char dec[5]={0};
char User[1];
int i, PW=0;

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

  while(Serial.available()) {
    char wait = Serial.read();
    Input.concat(wait);
  }

  Input.substring(0,1).toCharArray(User,2);

  if(User[0] == 'U') {
    if(Input.length() == 5) {
      Input.substring(1,5).toCharArray(dec,5);
      PW = atoi(dec);
      Input = "";

      if(PW_set != PW) {
        Serial.println("Warning");
        for(i=0; i<(sizeof(m)/sizeof(int)); i++)
        { 
          tone(warning_bz,m[i],d[i]);
          delay(d[i]+100);
        }
      noTone(warning_bz);
      }
      else {
        Serial.println("Who are you?");
      }

    }
  }

  else if (User[0] == 'A') {
    if(Input.length() == 5) {
      Input.substring(1,5).toCharArray(dec,5);
      PW = atoi(dec);
      Input = "";

      if(PW_set != PW) {
        Serial.println("Again");
      }
      else {
        Serial.println("Open");
        digitalWrite(light_A, HIGH);
      }

    }
  }

  else if (User[0] == 'B') {
    if(Input.length() == 5) {
      Input.substring(1,5).toCharArray(dec,5);
      PW = atoi(dec);
      Input = "";

      if(PW_set != PW) {
        Serial.println("Again");
      }
      else {
        Serial.println("Open");
        digitalWrite(light_B, HIGH);
      }

    }
  }

  else if (User[0] == 'C') {
    if(Input.length() == 5) {
      Input.substring(1,5).toCharArray(dec,5);
      PW = atoi(dec);
      Input = "";

      if(PW_set != PW) {
        Serial.println("Again");
      }
      else {
        Serial.println("Open");
        digitalWrite(light_C, HIGH);
      }

    }
  }

}