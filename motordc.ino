const int motor1 = 5;

void setup() {
  pinMode (motor1, OUTPUT);

  digitalWrite(motor1, HIGH);
  delay(1000);
  digitalWrite(motor1, LOW);
  delay(1000);
}

void loop() {
  for(int i=0; i<255; i++){
    analogWrite(motor1, i);
    delay(5000);
  }
  for(int i=255; i>0; i--){
    analogWrite(motor1, i);
    delay(5000);
  }
}