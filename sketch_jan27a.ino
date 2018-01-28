int hours = 0; //start these with there correct values
int minutes = 0; //start this with its correct value
bool AM = true;


void setup() {
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);
}

void loop() {
  //timeKeep();
  BUZZZ();
 // digitalWrite(3, HIGH);
 // delay(1);
  //digitalWrite(3, LOW);
  //delay(1);

}

void alarmSound() {
  BUZZZ();
}

void BUZZZ () {
  for (int i = 0; i > 100; i++) {
    digitalWrite(3, HIGH);
    delay(1);
    digitalWrite(3, LOW);
    delay(1);
  }
}
