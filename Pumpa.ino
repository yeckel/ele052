int MOTOR_RELAY = 2;
int LEVEL = 5;

void setup() {
  pinMode(MOTOR_RELAY, OUTPUT);
  pinMode(LEVEL, INPUT_PULLUP);
  digitalWrite(MOTOR_RELAY, HIGH);
  delay(10000);
}

void loop() {
  digitalWrite(MOTOR_RELAY, LOW);
  delay(100);
  auto levelReached = digitalRead(LEVEL);
  if(!levelReached){
      digitalWrite(MOTOR_RELAY, HIGH);
      delay(10000);
  }
}
